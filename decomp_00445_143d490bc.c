// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d490bc FUN_143d490bc body=20 status=ok
// SIG undefined FUN_143d490bc(void)

undefined1 FUN_143d490bc(longlong param_1)

{
  FUN_145876fd6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143d490d0 FUN_143d490d0 body=64 status=ok
// SIG undefined FUN_143d490d0(void)

undefined8 * FUN_143d490d0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b401d10;
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



// FUNCTION 143d49114 FUN_143d49114 body=81 status=ok
// SIG undefined FUN_143d49114(void)

undefined8 FUN_143d49114(longlong param_1)

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



// FUNCTION 143d4916a FUN_143d4916a body=89 status=ok
// SIG undefined FUN_143d4916a(void)

bool FUN_143d4916a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d491b5;
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
LAB_143d491b5:
  return lVar6 == param_2;
}



// FUNCTION 143d491e0 FUN_143d491e0 body=118 status=ok
// SIG undefined FUN_143d491e0(void)

void FUN_143d491e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401d10;
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



// FUNCTION 143d49256 FUN_143d49256 body=118 status=ok
// SIG undefined FUN_143d49256(void)

void FUN_143d49256(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401d10;
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



// FUNCTION 143d492cc FUN_143d492cc body=156 status=ok
// SIG undefined FUN_143d492cc(void)

void FUN_143d492cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401d10;
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
                    /* WARNING: Could not recover jumptable at 0x000143d49358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d49372 FUN_143d49372 body=46 status=ok
// SIG undefined FUN_143d49372(void)

undefined8 FUN_143d49372(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148854c96(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d493a0 FUN_143d493a0 body=64 status=ok
// SIG undefined FUN_143d493a0(void)

undefined8 * FUN_143d493a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b401d80;
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



// FUNCTION 143d493e4 FUN_143d493e4 body=81 status=ok
// SIG undefined FUN_143d493e4(void)

undefined8 FUN_143d493e4(longlong param_1)

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



// FUNCTION 143d4943a FUN_143d4943a body=89 status=ok
// SIG undefined FUN_143d4943a(void)

bool FUN_143d4943a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d49485;
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
LAB_143d49485:
  return lVar6 == param_2;
}



// FUNCTION 143d494b0 FUN_143d494b0 body=118 status=ok
// SIG undefined FUN_143d494b0(void)

void FUN_143d494b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401d80;
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



// FUNCTION 143d49526 FUN_143d49526 body=118 status=ok
// SIG undefined FUN_143d49526(void)

void FUN_143d49526(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401d80;
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



// FUNCTION 143d4959c FUN_143d4959c body=156 status=ok
// SIG undefined FUN_143d4959c(void)

void FUN_143d4959c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401d80;
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
                    /* WARNING: Could not recover jumptable at 0x000143d49628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d49638 FUN_143d49638 body=68 status=ok
// SIG undefined FUN_143d49638(void)

void FUN_143d49638(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_148854e22(*(undefined8 *)(param_1 + 0x28));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4967e FUN_143d4967e body=96 status=ok
// SIG undefined FUN_143d4967e(void)

undefined8 FUN_143d4967e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    FUN_148854e22(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d496f2 FUN_143d496f2 body=29 status=ok
// SIG undefined FUN_143d496f2(void)

undefined8 FUN_143d496f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d49724 FUN_143d49724 body=93 status=ok
// SIG undefined FUN_143d49724(void)

void FUN_143d49724(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401f40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d49782 FUN_143d49782 body=93 status=ok
// SIG undefined FUN_143d49782(void)

void FUN_143d49782(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401f40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d497e0 FUN_143d497e0 body=126 status=ok
// SIG undefined FUN_143d497e0(void)

void FUN_143d497e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4024f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401f40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d4984f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d4986e FUN_143d4986e body=25 status=ok
// SIG undefined FUN_143d4986e(void)

undefined1 FUN_143d4986e(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_140a3ab1e(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143d49888 FUN_143d49888 body=182 status=ok
// SIG undefined FUN_143d49888(void)

undefined8 * FUN_143d49888(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b401fb0;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d49952 FUN_143d49952 body=108 status=ok
// SIG undefined FUN_143d49952(void)

void FUN_143d49952(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 0x14) {
    FUN_1446efa72(param_2,0,0x14,0x10);
    *(undefined4 *)(param_2 + 1) = 0x14;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  FUN_1405bd0f8(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143d499be FUN_143d499be body=108 status=ok
// SIG undefined FUN_143d499be(void)

void FUN_143d499be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 0x14) {
    FUN_1446efa72(param_2,0,0x14,0x10);
    *(undefined4 *)(param_2 + 1) = 0x14;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b401fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  FUN_1405bd0f8(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143d49a2a FUN_143d49a2a body=142 status=ok
// SIG undefined FUN_143d49a2a(void)

void FUN_143d49a2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x14) {
    FUN_1446efa72(param_2 + 1,0,0x14,0x10);
    param_2[1].LockCount = 0x14;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b401fb0;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  FUN_1405bd0f8(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d49aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d49ac4 FUN_143d49ac4 body=23 status=ok
// SIG undefined FUN_143d49ac4(void)

undefined1 FUN_143d49ac4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143d49adc(param_1 + 0x20,param_3);
  return 1;
}



// FUNCTION 143d49adc FUN_143d49adc body=387 status=ok
// SIG undefined FUN_143d49adc(void)

void FUN_143d49adc(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  uint *local_40;
  undefined4 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_2[1] != 0) && (uVar2 = *param_2, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
     && (((puVar5 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          puVar5 != (undefined8 *)0x0 && (*(uint *)(puVar5 + 2) == param_2[1])) &&
         (((*(uint *)(puVar5 + 1) & 0x10200000) == 0 && (0 < (int)param_2[0x4e])))))) {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar5;
    }
    else {
      uVar6 = 0;
    }
    FUN_1407f7f84(&local_30,uVar6);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar9 = iVar4 == iVar3;
        if (bVar9) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if ((((local_30 != 0) && (param_1[1] != 0)) &&
            ((uVar2 = *param_1, -1 < (int)uVar2 &&
             (((((int)uVar2 < DAT_14c9647dc &&
                (plVar8 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar8 != (longlong *)0x0)) && (*(uint *)(plVar8 + 2) == param_1[1])) &&
              (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))))) &&
           (*(longlong *)(param_1 + 2) != 0)) {
          local_40 = param_1 + 4;
          local_38 = 0;
          local_48 = 0;
          FUN_1408f2522();
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d49c60 FUN_143d49c60 body=29 status=ok
// SIG undefined FUN_143d49c60(void)

undefined8 FUN_143d49c60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d49c92 FUN_143d49c92 body=93 status=ok
// SIG undefined FUN_143d49c92(void)

void FUN_143d49c92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b402020;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d49cf0 FUN_143d49cf0 body=93 status=ok
// SIG undefined FUN_143d49cf0(void)

void FUN_143d49cf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b402020;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d49d4e FUN_143d49d4e body=126 status=ok
// SIG undefined FUN_143d49d4e(void)

void FUN_143d49d4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4024f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b402020;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d49dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d49ddc FUN_143d49ddc body=25 status=ok
// SIG undefined FUN_143d49ddc(void)

undefined1 FUN_143d49ddc(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_140a3ab1e(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143d49df6 FUN_143d49df6 body=68 status=ok
// SIG undefined FUN_143d49df6(void)

undefined8 * FUN_143d49df6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b402090;
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



// FUNCTION 143d49e3a FUN_143d49e3a body=198 status=ok
// SIG undefined FUN_143d49e3a(void)

void FUN_143d49e3a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  lVar2 = *param_1;
  uVar3 = *param_2;
  cVar1 = *(char *)(lVar2 + 0x300);
  lVar7 = *(longlong *)(lVar2 + 0x470);
  if (lVar7 == 0) {
    uVar6 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar2 + 0x470) = lVar7;
  }
  lVar8 = *(longlong *)(lVar2 + 0x478);
  if (((lVar8 != 0) || (lVar8 = 0, lVar7 == 0)) || (*(longlong *)(lVar2 + 0x468) == 0))
  goto LAB_143d49ece;
  plVar4 = *(longlong **)(lVar7 + 0xb8);
  if (plVar4 == (longlong *)0x0) {
LAB_143d49efc:
    lVar8 = 0;
  }
  else {
    cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
    if (cVar5 == '\0') goto LAB_143d49efc;
    uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x468));
  }
  *(longlong *)(lVar2 + 0x478) = lVar8;
LAB_143d49ece:
  if (cVar1 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x3f800000;
  }
  FUN_1447997cc(uVar3,lVar8,uVar9,0,0);
  return;
}



// FUNCTION 143d49f00 FUN_143d49f00 body=292 status=ok
// SIG undefined FUN_143d49f00(void)

void FUN_143d49f00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d49fff;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x168,&local_40);
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
LAB_143d49fff:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4a068 FUN_143d4a068 body=64 status=ok
// SIG undefined FUN_143d4a068(void)

undefined8 * FUN_143d4a068(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402100;
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



// FUNCTION 143d4a0a8 FUN_143d4a0a8 body=292 status=ok
// SIG undefined FUN_143d4a0a8(void)

void FUN_143d4a0a8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4a1a7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x180,&local_40);
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
LAB_143d4a1a7:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4a210 FUN_143d4a210 body=64 status=ok
// SIG undefined FUN_143d4a210(void)

undefined8 * FUN_143d4a210(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402120;
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



// FUNCTION 143d4a250 FUN_143d4a250 body=292 status=ok
// SIG undefined FUN_143d4a250(void)

void FUN_143d4a250(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4a34f;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x198,&local_40);
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
LAB_143d4a34f:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4a3b8 FUN_143d4a3b8 body=64 status=ok
// SIG undefined FUN_143d4a3b8(void)

undefined8 * FUN_143d4a3b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402140;
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



// FUNCTION 143d4a3f8 FUN_143d4a3f8 body=292 status=ok
// SIG undefined FUN_143d4a3f8(void)

void FUN_143d4a3f8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4a4f7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x1b0,&local_40);
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
LAB_143d4a4f7:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4a560 FUN_143d4a560 body=64 status=ok
// SIG undefined FUN_143d4a560(void)

undefined8 * FUN_143d4a560(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402160;
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



// FUNCTION 143d4a5a0 FUN_143d4a5a0 body=303 status=ok
// SIG undefined FUN_143d4a5a0(void)

void FUN_143d4a5a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4a6a8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_48), local_40 != (longlong *)0x0)) &&
         (local_44 != 0)) && ((-1 < (int)local_48 && ((int)local_48 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_44 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_40 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_40 = local_40 + 0xd9;
      }
      else {
        local_40 = (longlong *)(**(code **)(*local_40 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_40,&local_48);
      if (cVar6 != '\0') {
        FUN_143d4a752(lVar4 + 0x1c8,&local_48,(int)param_1[2]);
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
LAB_143d4a6a8:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4a712 FUN_143d4a712 body=64 status=ok
// SIG undefined FUN_143d4a712(void)

undefined8 * FUN_143d4a712(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402180;
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



// FUNCTION 143d4a752 FUN_143d4a752 body=173 status=ok
// SIG undefined FUN_143d4a752(void)

void FUN_143d4a752(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_143d4a7e9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143d4a7e9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143d4a800 FUN_143d4a800 body=303 status=ok
// SIG undefined FUN_143d4a800(void)

void FUN_143d4a800(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4a908;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_48), local_40 != (longlong *)0x0)) &&
         (local_44 != 0)) && ((-1 < (int)local_48 && ((int)local_48 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_44 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_40 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_40 = local_40 + 0xd9;
      }
      else {
        local_40 = (longlong *)(**(code **)(*local_40 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_40,&local_48);
      if (cVar6 != '\0') {
        FUN_143d4a752(lVar4 + 0x1e0,&local_48,(int)param_1[2]);
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
LAB_143d4a908:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4a972 FUN_143d4a972 body=64 status=ok
// SIG undefined FUN_143d4a972(void)

undefined8 * FUN_143d4a972(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4021a0;
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



// FUNCTION 143d4a9b2 FUN_143d4a9b2 body=303 status=ok
// SIG undefined FUN_143d4a9b2(void)

void FUN_143d4a9b2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4aaba;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_48), local_40 != (longlong *)0x0)) &&
         (local_44 != 0)) && ((-1 < (int)local_48 && ((int)local_48 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_44 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_40 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_40 = local_40 + 0xd9;
      }
      else {
        local_40 = (longlong *)(**(code **)(*local_40 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_40,&local_48);
      if (cVar6 != '\0') {
        FUN_143d4a752(lVar4 + 0x1f8,&local_48,(int)param_1[2]);
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
LAB_143d4aaba:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4ab24 FUN_143d4ab24 body=64 status=ok
// SIG undefined FUN_143d4ab24(void)

undefined8 * FUN_143d4ab24(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4021c0;
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



// FUNCTION 143d4ab64 FUN_143d4ab64 body=303 status=ok
// SIG undefined FUN_143d4ab64(void)

void FUN_143d4ab64(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4ac6c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_48), local_40 != (longlong *)0x0)) &&
         (local_44 != 0)) && ((-1 < (int)local_48 && ((int)local_48 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_44 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_40 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_40 = local_40 + 0xd9;
      }
      else {
        local_40 = (longlong *)(**(code **)(*local_40 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_40,&local_48);
      if (cVar6 != '\0') {
        FUN_143d4a752(lVar4 + 0x210,&local_48,(int)param_1[2]);
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
LAB_143d4ac6c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4acd6 FUN_143d4acd6 body=64 status=ok
// SIG undefined FUN_143d4acd6(void)

undefined8 * FUN_143d4acd6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4021e0;
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



// FUNCTION 143d4ad16 FUN_143d4ad16 body=292 status=ok
// SIG undefined FUN_143d4ad16(void)

void FUN_143d4ad16(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4ae15;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x240,&local_40);
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
LAB_143d4ae15:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4ae7e FUN_143d4ae7e body=64 status=ok
// SIG undefined FUN_143d4ae7e(void)

undefined8 * FUN_143d4ae7e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402200;
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



// FUNCTION 143d4aebe FUN_143d4aebe body=292 status=ok
// SIG undefined FUN_143d4aebe(void)

void FUN_143d4aebe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4afbd;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 600,&local_40);
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
LAB_143d4afbd:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4b026 FUN_143d4b026 body=64 status=ok
// SIG undefined FUN_143d4b026(void)

undefined8 * FUN_143d4b026(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402220;
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



// FUNCTION 143d4b066 FUN_143d4b066 body=292 status=ok
// SIG undefined FUN_143d4b066(void)

void FUN_143d4b066(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4b165;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x270,&local_40);
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
LAB_143d4b165:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4b1ce FUN_143d4b1ce body=64 status=ok
// SIG undefined FUN_143d4b1ce(void)

undefined8 * FUN_143d4b1ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402240;
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



// FUNCTION 143d4b20e FUN_143d4b20e body=292 status=ok
// SIG undefined FUN_143d4b20e(void)

void FUN_143d4b20e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4b30d;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x288,&local_40);
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
LAB_143d4b30d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4b376 FUN_143d4b376 body=64 status=ok
// SIG undefined FUN_143d4b376(void)

undefined8 * FUN_143d4b376(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402260;
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



// FUNCTION 143d4b3b6 FUN_143d4b3b6 body=292 status=ok
// SIG undefined FUN_143d4b3b6(void)

void FUN_143d4b3b6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4b4b5;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_1405e45ca(lVar4 + 0x2a0,&local_40);
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
LAB_143d4b4b5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4b51e FUN_143d4b51e body=64 status=ok
// SIG undefined FUN_143d4b51e(void)

undefined8 * FUN_143d4b51e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402280;
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



// FUNCTION 143d4b55e FUN_143d4b55e body=304 status=ok
// SIG undefined FUN_143d4b55e(void)

void FUN_143d4b55e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4b669;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_143d4b712(lVar4 + 0x138,&local_40,*(undefined4 *)(lVar4 + 200));
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
LAB_143d4b669:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4b6d2 FUN_143d4b6d2 body=64 status=ok
// SIG undefined FUN_143d4b6d2(void)

undefined8 * FUN_143d4b6d2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4022a0;
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



// FUNCTION 143d4b712 FUN_143d4b712 body=183 status=ok
// SIG undefined FUN_143d4b712(void)

void FUN_143d4b712(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_143d4b7af;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143d4b7af:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143d4b7ca FUN_143d4b7ca body=304 status=ok
// SIG undefined FUN_143d4b7ca(void)

void FUN_143d4b7ca(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4b8d5;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_143d4b712(lVar4 + 0x2b8,&local_40,*(undefined4 *)(lVar4 + 0xc0));
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
LAB_143d4b8d5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4b93e FUN_143d4b93e body=64 status=ok
// SIG undefined FUN_143d4b93e(void)

undefined8 * FUN_143d4b93e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4022c0;
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



// FUNCTION 143d4b97e FUN_143d4b97e body=675 status=ok
// SIG undefined FUN_143d4b97e(void)

void FUN_143d4b97e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_a8 [40];
  uint local_80;
  int local_7c;
  longlong *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    iVar10 = (int)plVar5[1];
    do {
      if (iVar10 == 0) goto LAB_143d4bbb2;
      LOCK();
      iVar12 = (int)plVar5[1];
      bVar16 = iVar10 == iVar12;
      if (bVar16) {
        *(int *)(plVar5 + 1) = iVar10 + 1;
        iVar12 = iVar10;
      }
      iVar10 = iVar12;
      UNLOCK();
    } while (!bVar16);
    lVar6 = *param_1;
    if (((((lVar6 != 0) && (FUN_14029f20a(lVar6,&local_80), local_78 != (longlong *)0x0)) &&
         (local_7c != 0)) && ((-1 < (int)local_80 && ((int)local_80 < DAT_14c9647dc)))) &&
       ((lVar14 = (ulonglong)((local_80 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_80 >> 0x10) * 8), lVar14 != 0 &&
        ((*(int *)(lVar14 + 0x10) == local_7c && ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_78 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_78 = local_78 + 0xd9;
      }
      else {
        local_78 = (longlong *)(**(code **)(*local_78 + 0x10))();
      }
      cVar9 = FUN_14486eb0e(local_78,&local_80);
      if (cVar9 != '\0') {
        uVar3 = *(undefined4 *)(lVar6 + 0x24);
        uVar4 = *(undefined4 *)(lVar6 + 0x30);
        iVar10 = *(int *)(lVar6 + 0x164);
        *(int *)(lVar6 + 0x164) = iVar10 + 1;
        uVar11 = (ulonglong)*(int *)(lVar6 + 0x158);
        if ((longlong)uVar11 < 1) {
          *(int *)(lVar6 + 0x164) = iVar10;
        }
        else {
          plVar2 = (longlong *)(lVar6 + 0x150);
          bVar16 = false;
          do {
            lVar14 = uVar11 * 0x10 + -8;
            uVar15 = uVar11;
            while (((*(int *)(*plVar2 + lVar14) != 0 &&
                    (plVar7 = *(longlong **)(*plVar2 + -8 + lVar14), plVar7 != (longlong *)0x0)) &&
                   (cVar9 = (**(code **)(*plVar7 + 0x60))(plVar7,&local_80,uVar3,uVar4),
                   cVar9 != '\0'))) {
              lVar14 = lVar14 + -0x10;
              bVar8 = uVar15 < 2;
              uVar15 = uVar15 - 1;
              if (bVar8) {
                iVar10 = *(int *)(lVar6 + 0x164) + -1;
                *(int *)(lVar6 + 0x164) = iVar10;
                if (bVar16) goto LAB_143d4bb1d;
                goto LAB_143d4bb95;
              }
            }
            uVar11 = uVar15 - 1;
            bVar16 = true;
          } while (1 < uVar15);
          iVar10 = *(int *)(lVar6 + 0x164) + -1;
          *(int *)(lVar6 + 0x164) = iVar10;
LAB_143d4bb1d:
          if (iVar10 < 1) {
            iVar10 = *(int *)(lVar6 + 0x158);
            iVar12 = iVar10;
            if (0 < iVar10) {
              iVar13 = 0;
              do {
                if (((*(int *)(*plVar2 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                    (plVar7 = *(longlong **)(*plVar2 + (longlong)iVar13 * 0x10),
                    plVar7 == (longlong *)0x0)) ||
                   (cVar9 = (**(code **)(*plVar7 + 0x28))(), cVar9 != '\0')) {
                  FUN_14005b288(plVar2,iVar13);
                  FUN_14005b248(plVar2);
                }
                else {
                  iVar13 = iVar13 + 1;
                }
                iVar12 = *(int *)(lVar6 + 0x158);
              } while (iVar13 < iVar12);
            }
            iVar13 = 2;
            if (2 < iVar12 * 2) {
              iVar13 = iVar12 * 2;
            }
            *(int *)(lVar6 + 0x160) = iVar13;
            if ((iVar13 < iVar10) && (*(int *)(lVar6 + 0x15c) != iVar12)) {
              FUN_14045812c(plVar2);
            }
          }
        }
      }
    }
LAB_143d4bb95:
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
LAB_143d4bbb2:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4bc64 FUN_143d4bc64 body=64 status=ok
// SIG undefined FUN_143d4bc64(void)

undefined8 * FUN_143d4bc64(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4022e0;
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



// FUNCTION 143d4bca4 FUN_143d4bca4 body=296 status=ok
// SIG undefined FUN_143d4bca4(void)

void FUN_143d4bca4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143d4bda7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *param_1;
    if (((((lVar4 != 0) && (FUN_14029f20a(lVar4,&local_40), local_38 != (longlong *)0x0)) &&
         (local_3c != 0)) && ((-1 < (int)local_40 && ((int)local_40 < DAT_14c9647dc)))) &&
       ((lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8), lVar8 != 0 &&
        ((*(int *)(lVar8 + 0x10) == local_3c && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*local_38 + 0x10) == (code *)&LAB_1447a1f2e) {
        local_38 = local_38 + 0xd9;
      }
      else {
        local_38 = (longlong *)(**(code **)(*local_38 + 0x10))();
      }
      cVar6 = FUN_14486eb0e(local_38,&local_40);
      if (cVar6 != '\0') {
        FUN_143d4a752(lVar4 + 0x228,&local_40,*(undefined4 *)(lVar4 + 0x48));
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
LAB_143d4bda7:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4be10 FUN_143d4be10 body=64 status=ok
// SIG undefined FUN_143d4be10(void)

undefined8 * FUN_143d4be10(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b402300;
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



// FUNCTION 143d4be50 FUN_143d4be50 body=24 status=ok
// SIG undefined FUN_143d4be50(void)

void FUN_143d4be50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d4be64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143d4be68 FUN_143d4be68 body=5581 status=ok
// SIG undefined FUN_143d4be68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d4be68(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  double *pdVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  char *local_148;
  double dStack_140;
  double local_138;
  double local_130;
  undefined **ppuStack_128;
  undefined1 *local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1400b22c2(&local_148,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar11 = FUN_140b10a34(&local_148,&DAT_14cb7d110);
  if (cVar11 == '\0') {
    _DAT_14cb7d110 = 0;
    uRam000000014cb7d118 = 0;
  }
  if (local_148 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_148 = "AssetRegistry";
  dStack_140._0_5_ = 0xd;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb7d120 = (ulonglong)uVar12;
  DAT_14cb7d148 = 0;
  DAT_14cb7d150 = 0;
  DAT_14cb7d128 = 0;
  _DAT_14cb7d130 = 0;
  _DAT_14cb7d154 = 0xffffffff00000080;
  DAT_14cb7d15c = 0;
  DAT_14cb7d168 = 0;
  DAT_14cb7d170 = 0;
  atexit(FUN_143d44274);
  DAT_14cb7d698 = 0;
  DAT_14cb7d6a0 = 0;
  atexit(FUN_143d442a1);
  _DAT_14cb7d188 = 0x47efffffe0000000;
  _DAT_14cb7d190 = 0x47efffffe0000000;
  _DAT_14cb7d198 = 0x47efffffe0000000;
  _DAT_14cb7d1a0 = 0x47efffffe0000000;
  _DAT_14cb7d1a8 = 0x47efffffe0000000;
  DAT_14cb7d1b0 = 0x47efffffe0000000;
  _DAT_14cb7d1b8 = 0x47efffffe0000000;
  _DAT_14cb7d1c0 = 0x47efffffe0000000;
  local_148 = "world_state";
  dStack_140._0_5_ = 0xb;
  uVar12 = FUN_14001a6c0(&local_148,1);
  DAT_14cb7d1c8 = (ulonglong)uVar12;
  _DAT_14cb7d1d0 = 0;
  uRam000000014cb7d1d8 = 0;
  _DAT_14cb7d1e0 = 0;
  DAT_14cb7d1e8 = 0;
  uRam000000014cb7d1f0 = 0;
  FUN_1446ddda2(&DAT_14cb7d1d0,"world_state",0);
  atexit((_func_5014 *)&LAB_143d45240);
  _DAT_14cb7d1f8 = 0;
  uRam000000014cb7d200 = 0;
  _DAT_14cb7d208 = 0;
  DAT_14cb7d210 = 0;
  uRam000000014cb7d218 = 0;
  FUN_1446ddda2(&DAT_14cb7d1f8,"facts.world_state",0);
  atexit((_func_5014 *)&LAB_143d45251);
  _DAT_14cb7d228 = &LAB_143d470d8;
  DAT_14cb7d230 = 0x13;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9a70 = 0x30;
    DAT_14c9a9b08 = &LAB_143d481c2;
    DAT_14c9a9b30 = &DAT_143d481d2;
    _DAT_14c9a9b10 = &LAB_143d481d4;
    _DAT_14c9a9b18 = &LAB_1488567de;
    _DAT_14c9a9b20 = &LAB_1488567f6;
    _DAT_14c9a9b28 = &LAB_14885680e;
    _DAT_14c9a9a90 = FUN_1461ff1c0;
    _DAT_14c9a9a88 = &LAB_140b3ae86;
    _DAT_14c9a9a78 = 0x3f55c28f;
    uRam000000014c9a9a7c = 0x3f1ba5e3;
    uRam000000014c9a9a80 = 0x3e10624e;
    uRam000000014c9a9a84 = 0x3f800000;
    DAT_14c9a9b00 = 1;
    DAT_14c9a9a74 = 0x20;
    _DAT_14c9a9ac0 = &LAB_143d47207;
    _DAT_14c9a9ad0 = FUN_143d4720e;
    _DAT_14c9a9ac8 = &LAB_143d472af;
    _DAT_14c9a9ad8 = FUN_143d472be;
    _DAT_14c9a9b38 = FUN_143d476d2;
    _DAT_14c9a9b40 = &LAB_143d476ee;
    _DAT_14c9a9ae0 = FUN_143d4770b;
    _DAT_14c9a9ae8 = &LAB_143d47b4a;
    _DAT_14c9a9af0 = FUN_143d47b5c;
    _DAT_14c9a9b50 = FUN_143d47be4;
    _DAT_14c9a9b58 = FUN_143d47c08;
    _DAT_14c9a9b60 = FUN_143d48125;
    _DAT_14c9a9b80 = &LAB_143d481ae;
  }
  else {
    _DAT_14cb7d220 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb7d220;
  }
  local_148 = "bone";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,4);
  FUN_14001a6c0(&local_148,1);
  _DAT_14cb7d248 = &LAB_143d4660a;
  _DAT_14cb7d250 = 0x444f8000;
  DAT_14cb7d254 = 1;
  DAT_14cb7d240 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d240;
  atexit((_func_5014 *)&LAB_143d4660f);
  DAT_14cb7d2c0 = 0;
  _DAT_14cb7d2c8 = 0;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143d496e0;
  local_148 = &DAT_14011fc1e;
  FUN_146181616(&local_148);
  atexit((_func_5014 *)&LAB_143d4666c);
  _DAT_14cb7d358 = &LAB_143d46671;
  _DAT_14cb7d360 = 0x44500000;
  DAT_14cb7d364 = 1;
  DAT_14cb7d350 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d350;
  atexit((_func_5014 *)&LAB_143d46676);
  local_148 = (char *)((ulonglong)local_148 & 0xffffffff00000000);
  local_1f8 = 0;
  FUN_14078dbce(&DAT_14cb7d370,L"fx.gbx.ScreenEffectsSpawnInForeground",&local_148,
                L"0: Screen effects spawn in the World1: Screen effects spawn in the Foreground");
  atexit(FUN_143d466aa);
  local_148 = (char *)CONCAT44(local_148._4_4_,5);
  local_1f8 = 0;
  FUN_14078dbce(&DAT_14cb7d388,L"gbx.Feedback.ScrPartMinTickCount",&local_148,
                L"Feedback defs using bLetSystemFinishAfterStopping=true to allow a screen particle to persist after feedback ends must play for at least this many frames, or else they will not be deactivated. See OAK2-65852."
               );
  atexit(FUN_143d466ef);
  DAT_14cb7d418 = 0;
  _DAT_14cb7d420 = 0;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143d496e6;
  local_148 = &DAT_14011fc1e;
  FUN_146181d12(&local_148);
  atexit((_func_5014 *)&LAB_143d46ce3);
  local_148 = (char *)CONCAT44(local_148._4_4_,0x3f800000);
  local_1f8 = 0;
  FUN_140a6b41e(&DAT_14cb7d4b0,L"Gbx.Rumble.Intensity",&local_148,L"Adjust intensity of rumble");
  atexit(FUN_143d46ce8);
  DAT_14cb7d3a0 = 0;
  _DAT_14cb7d3a8 = 0;
  DAT_14cb7d3b0 = 0;
  atexit(FUN_143d46d2d);
  _DAT_14cb7d4d0 = &LAB_143d46d5e;
  _DAT_14cb7d4d8 = 0x444fc000;
  DAT_14cb7d4dc = 1;
  DAT_14cb7d4c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d4c8;
  atexit((_func_5014 *)&LAB_143d46d63);
  DAT_14cb7d548 = 0;
  _DAT_14cb7d550 = 0;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143d496ec;
  local_148 = &DAT_14011fc1e;
  FUN_14618240e(&local_148);
  atexit((_func_5014 *)&LAB_143d46dc0);
  _DAT_14cb7d5e8 = &LAB_143d46dc5;
  _DAT_14cb7d5f0 = 0x444f8000;
  DAT_14cb7d5f4 = 1;
  DAT_14cb7d5e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d5e0;
  atexit((_func_5014 *)&LAB_143d46dca);
  _DAT_14cb7d608 = &LAB_143d46dfe;
  _DAT_14cb7d610 = 0x44264666;
  DAT_14cb7d614 = 1;
  DAT_14cb7d600 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d600;
  atexit((_func_5014 *)&LAB_143d46e03);
  FUN_1446f470e(&DAT_14cb7d620,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cb7d628,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cb7d630,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cb7d638,L"TimeOfDayForecastEvents",1);
  _DAT_14cb7d640 = 0xb33bbd2e;
  local_148 = DAT_14c846290;
  dStack_140 = DAT_14c846298;
  local_138 = DAT_14c8462a0;
  local_130 = DAT_14c8462a8;
  ppuStack_128 = (undefined **)DAT_14c8462b0;
  local_120 = (undefined1 *)DAT_14c8462b8;
  local_118 = DAT_14c8462c0;
  dStack_110 = DAT_14c8462c8;
  local_108 = DAT_14c8462d0;
  local_100 = DAT_14c8462d8;
  dStack_f8 = DAT_14c8462e0;
  local_f0 = DAT_14c8462e8;
  dVar17 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar17 * dVar17;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    local_1f0 = DAT_14c8464e8;
    dVar18 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      local_1f0 = dVar17 * (1.0 / SQRT(dVar1));
      dVar18 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar18;
    local_1e8 = (double)CONCAT44(uVar15,uVar13);
  }
  else {
    local_1e8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1f0 = dVar17;
  }
  uStack_1e0 = 0;
  dVar17 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar18 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar1 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    dVar19 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      dVar19 = dVar17 * (1.0 / SQRT(dVar1));
      dVar3 = dVar18 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar13 = (int)uVar6;
    uVar15 = (int)(uVar6 >> 0x20);
    dVar19 = dVar17;
    dVar3 = dVar18;
  }
  local_158 = DAT_14c846300;
  local_168 = DAT_14c8462f0;
  dStack_160 = DAT_14c8462f8;
  local_188 = DAT_14c846308;
  dStack_180 = DAT_14c846310;
  local_178 = DAT_14c846318;
  dVar1 = DAT_14c846298 + DAT_14c846310;
  dVar17 = (double)DAT_14c846290 + DAT_14c846308;
  dVar18 = dVar17 * dVar17 + dVar1 * dVar1;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    uVar20 = uVar14;
    uVar21 = uVar16;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar18) {
      uVar20 = 0;
      uVar21 = 0;
      dVar4 = dVar1 * (1.0 / SQRT(dVar18));
      dVar5 = dVar17 * (1.0 / SQRT(dVar18));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar20 = (int)uVar6;
    uVar21 = (int)(uVar6 >> 0x20);
    dVar4 = dVar1;
    dVar5 = dVar17;
  }
  dVar17 = DAT_14c8462b0 + DAT_14c846310;
  dVar18 = DAT_14c8462a8 + DAT_14c846308;
  dVar1 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar14 = 0;
      uVar16 = 0;
      dVar7 = dVar17 * (1.0 / SQRT(dVar1));
      dVar8 = dVar18 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar14 = (undefined4)uVar6;
    uVar16 = (undefined4)(uVar6 >> 0x20);
    dVar7 = dVar17;
    dVar8 = dVar18;
  }
  DAT_14cb7d648 = (void *)0x0;
  _DAT_14cb7d650 = 10;
  FUN_1405b70fe(&DAT_14cb7d648,10,0);
  pvVar9 = DAT_14cb7d648;
  memcpy(DAT_14cb7d648,&local_148,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_1f0;
  *(double *)((longlong)pvVar9 + 0x70) = local_1e8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar19;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar15,uVar13);
  *(double *)((longlong)pvVar9 + 0x90) = local_168;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_160;
  *(double *)((longlong)pvVar9 + 0xa0) = local_158;
  *(double *)((longlong)pvVar9 + 0xb8) = local_178;
  *(double *)((longlong)pvVar9 + 0xa8) = local_188;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_180;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar21,uVar20);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar16,uVar14);
  atexit((_func_5014 *)&LAB_143d46e37);
  uVar13 = SUB84(DAT_14c846290,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar14 = SUB84(DAT_14c846298,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_1f0 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_1f0 = local_1f0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846290,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar14 = SUB84(DAT_14c846298,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1f0 = 0.0;
  }
  dVar2 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
               (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar1 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar1 = atan2(DAT_14c8462a0,dVar2);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462a8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar14 = SUB84(DAT_14c8462b0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1c8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1c8 = local_1c8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462a8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar14 = SUB84(DAT_14c8462b0,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1c8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar2 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    dVar2 = atan2(DAT_14c8462b8,dVar17);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462c0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462c8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1d0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1d0 = local_1d0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462c0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462c8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1d0 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  local_198 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_198 = atan2(DAT_14c8462d0,dVar17);
    local_198 = local_198 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c8462d8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462e0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1d8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1d8 = local_1d8 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1d8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  local_1a0 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1a0 = atan2(DAT_14c8462e8,dVar17);
    local_1a0 = local_1a0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar19 = (double)CONCAT44(uVar15,uVar13) + DAT_14c846298;
  dVar18 = (double)CONCAT44(uVar16,uVar14) + (double)DAT_14c846290;
  dVar17 = dVar18 * dVar18 + dVar19 * dVar19;
  if ((dVar17 != 1.0) || (NAN(dVar17))) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar17) {
      dVar3 = dVar19 * (1.0 / SQRT(dVar17));
      dVar4 = dVar18 * (1.0 / SQRT(dVar17));
      dVar5 = 0.0;
    }
  }
  else {
    dVar17 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar3 = dVar19;
    dVar4 = dVar18;
    dVar5 = 0.0;
    if ((dVar17 == 0.0) && (dVar5 = 0.0, !NAN(dVar17))) {
      dVar5 = dVar17;
    }
  }
  local_1a8 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_1a8 = atan2(dVar3,dVar4);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1b0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1b0 = atan2(dVar5,dVar17);
    local_1b0 = local_1b0 * 57.29577951308232;
  }
  dVar17 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar18 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar19 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (9.99999993922529e-09 <= dVar19) {
      dVar17 = dVar17 * (1.0 / SQRT(dVar19));
      dVar18 = dVar18 * (1.0 / SQRT(dVar19));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar17 = DAT_14c8464e8;
      dVar18 = DAT_14c8464e0;
    }
  }
  else {
    dVar19 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      uVar14 = SUB84(dVar19,0);
      uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
  }
  local_1b8 = 0.0;
  if ((((dVar17 != 0.0) || (NAN(dVar17))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    local_1b8 = atan2(dVar17,dVar18);
    local_1b8 = local_1b8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar18 * dVar18 + dVar17 * dVar17);
  local_1c0 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1c0 = atan2((double)CONCAT44(uVar16,uVar14),dVar17);
    local_1c0 = local_1c0 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462f8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar17 = 0.0;
  local_1e8 = dVar1;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar17 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar17 = dVar17 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462f0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462f8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar18 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar1 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    dVar1 = atan2(DAT_14c846300,dVar18);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c846308,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar13 = SUB84(DAT_14c846310,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar18 = 0.0;
  local_190 = dVar2;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar18 = atan2(DAT_14c846310,DAT_14c846308);
    dVar18 = dVar18 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c846308,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar13 = SUB84(DAT_14c846310,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar19 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  dVar2 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    dVar2 = atan2(DAT_14c846318,dVar19);
    dVar2 = dVar2 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846310,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar14 = SUB84(DAT_14c846308,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar15,uVar13) + DAT_14c846298;
  dVar3 = (double)CONCAT44(uVar16,uVar14) + (double)DAT_14c846290;
  dVar19 = dVar3 * dVar3 + dVar4 * dVar4;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (9.99999993922529e-09 <= dVar19) {
      dVar4 = dVar4 * (1.0 / SQRT(dVar19));
      dVar3 = dVar3 * (1.0 / SQRT(dVar19));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
    }
  }
  else {
    dVar19 = DAT_14c846318 + DAT_14c8462a0;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      uVar14 = SUB84(dVar19,0);
      uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
  }
  dVar19 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
    dVar19 = atan2(dVar4,dVar3);
    dVar19 = dVar19 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  dVar3 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar3 = atan2((double)CONCAT44(uVar16,uVar14),dVar4);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar5 = DAT_14c846310 + DAT_14c8462b0;
  dVar7 = DAT_14c846308 + DAT_14c8462a8;
  dVar4 = dVar7 * dVar7 + dVar5 * dVar5;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar4));
      dVar7 = dVar7 * (1.0 / SQRT(dVar4));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
    }
  }
  else {
    dVar4 = DAT_14c846318 + DAT_14c8462b8;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      uVar14 = SUB84(dVar4,0);
      uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
  }
  dVar4 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar4 = atan2(dVar5,dVar7);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar7 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar5 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2((double)CONCAT44(uVar16,uVar14),dVar7);
    dVar5 = dVar5 * 57.29577951308232;
  }
  DAT_14cb7d658 = (double *)0x0;
  _DAT_14cb7d660 = 10;
  FUN_1464bf958(&DAT_14cb7d658,10,0);
  pdVar10 = DAT_14cb7d658;
  *DAT_14cb7d658 = local_1e8;
  pdVar10[1] = local_1f0;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_190;
  pdVar10[4] = local_1c8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_198;
  pdVar10[7] = local_1d0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_1a0;
  pdVar10[10] = local_1d8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_1b0;
  pdVar10[0xd] = local_1a8;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1c0;
  pdVar10[0x10] = local_1b8;
  pdVar10[0x11] = 0.0;
  pdVar10[0x12] = dVar1;
  pdVar10[0x13] = dVar17;
  pdVar10[0x14] = 0.0;
  pdVar10[0x15] = dVar2;
  pdVar10[0x16] = dVar18;
  pdVar10[0x17] = 0.0;
  pdVar10[0x18] = dVar3;
  pdVar10[0x19] = dVar19;
  pdVar10[0x1a] = 0.0;
  pdVar10[0x1b] = dVar5;
  pdVar10[0x1c] = dVar4;
  pdVar10[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_143d46e48);
  _DAT_14cb7d668 = 0x3f80000000000000;
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4d438 FUN_143d4d438 body=458 status=ok
// SIG undefined FUN_143d4d438(void)

undefined1 * FUN_143d4d438(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = *param_4;
  if (cVar3 == '\x01') {
    if (*(longlong *)(param_4 + 8) != 0) goto LAB_143d4d505;
  }
  else if (cVar3 == '\x02') {
    if (((((*(int *)(param_4 + 0xc) != 0) && (uVar4 = *(uint *)(param_4 + 8), -1 < (int)uVar4)) &&
         ((int)uVar4 < DAT_14c9647dc)) &&
        ((lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 != 0 &&
         (*(int *)(lVar8 + 0x10) == *(int *)(param_4 + 0xc))))) &&
       ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) goto LAB_143d4d505;
  }
  else if (((cVar3 == '\x03') && (*(longlong *)(param_4 + 8) != 0)) &&
          ((*(longlong *)(param_4 + 0x10) != 0 && (0 < *(int *)(*(longlong *)(param_4 + 0x10) + 8)))
          )) {
LAB_143d4d505:
    lVar8 = FUN_140414d56(param_1 + 8);
    if (lVar8 != 0) {
      uVar9 = FUN_1447262c2(param_4);
      uVar10 = FUN_140414d56(param_1 + 8);
      FUN_140414de2(&local_40,uVar10,uVar9);
      local_30 = 0;
      local_28 = local_38;
      if (local_38 != (longlong *)0x0) {
        iVar7 = (int)local_38[1];
        do {
          if (iVar7 == 0) {
            local_28 = (longlong *)0x0;
            goto LAB_143d4d581;
          }
          LOCK();
          iVar6 = (int)local_38[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(local_38 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        if (local_38 != (longlong *)0x0) {
          local_30 = local_40;
        }
LAB_143d4d581:
        if (local_38 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
      }
      lVar8 = local_30;
      if (local_30 != 0) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        FUN_143d540b6(param_2,&local_30);
      }
      plVar5 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (lVar8 != 0) goto LAB_143d4d4e3;
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_143d4d4e3:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143d4d603 FUN_143d4d603 body=41 status=ok
// SIG undefined FUN_143d4d603(void)

void FUN_143d4d603(void)

{
  DAT_14cb7d6f8 = 0;
  if (DAT_14cb7d6f0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d71ab0();
  return;
}



// FUNCTION 143d4d62c FUN_143d4d62c body=123 status=ok
// SIG undefined FUN_143d4d62c(void)

void FUN_143d4d62c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar1 = FUN_14011c2be();
    if (lVar1 != 0) {
      if (*param_1 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[1];
      }
      uVar2 = (**(code **)(*plVar3 + 0x10))();
      FUN_14036c7e6(uVar2,local_38,lVar1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4d6a8 FUN_143d4d6a8 body=354 status=ok
// SIG undefined FUN_143d4d6a8(void)

uint FUN_143d4d6a8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = 0;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            lVar2 = FUN_14008e0ae(&local_58);
            fVar5 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
            uVar6 = -(uint)(fVar5 != 0.0) &
                    (uint)((*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar5);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4d80c FUN_143d4d80c body=187 status=ok
// SIG undefined FUN_143d4d80c(void)

void FUN_143d4d80c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar1 = FUN_140414d56();
    if (lVar1 != 0) {
      if (*param_1 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[1];
      }
      uVar2 = (**(code **)(*plVar3 + 0x10))();
      local_48 = 0;
      uStack_40 = 0;
      local_2c = 0xff;
      local_30 = 0;
      local_38 = 0;
      plVar3 = (longlong *)0x0;
      FUN_14488cef8(uVar2,&local_48,lVar1,0);
      if (*param_1 != 0) {
        plVar3 = (longlong *)param_1[1];
      }
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_145e437ec(uVar2,&local_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4d8c8 FUN_143d4d8c8 body=341 status=ok
// SIG undefined FUN_143d4d8c8(void)

void FUN_143d4d8c8(longlong *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            lVar2 = FUN_14008e0ae(&local_58);
            FUN_1409d461e(lVar2,*(float *)(lVar2 + 200) + *(float *)(lVar2 + 0x120) + param_3,1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4da1e FUN_143d4da1e body=319 status=ok
// SIG undefined FUN_143d4da1e(void)

void FUN_143d4da1e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      local_1c = 0xff;
      local_20 = 0;
      local_28 = 0;
      FUN_14488cef8(uVar3,&local_38,lVar2,0);
      if ((((plStack_30 != (longlong *)0x0) && (local_38._4_4_ != 0)) && (-1 < (int)(uint)local_38))
         && ((int)(uint)local_38 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_38 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_38 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_38._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_30 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_38);
          if (cVar1 != '\0') {
            lVar2 = FUN_14008e0ae(&local_38);
            *(undefined4 *)(lVar2 + 0x11c) = 0;
            *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(lVar2 + 200);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4db5e FUN_143d4db5e body=301 status=ok
// SIG undefined FUN_143d4db5e(void)

void FUN_143d4db5e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      local_1c = 0xff;
      local_20 = 0;
      local_28 = 0;
      FUN_14488cef8(uVar3,&local_38,lVar2,0);
      if ((((plStack_30 != (longlong *)0x0) && (local_38._4_4_ != 0)) && (-1 < (int)(uint)local_38))
         && ((int)(uint)local_38 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_38 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_38 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_38._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_30 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_38);
          if (cVar1 != '\0') {
            uVar3 = FUN_14008e0ae(&local_38);
            FUN_14584f9b6(uVar3);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4dc8c FUN_143d4dc8c body=311 status=ok
// SIG undefined FUN_143d4dc8c(void)

undefined8 FUN_143d4dc8c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      local_2c = 0xff;
      local_30 = 0;
      local_38 = 0;
      FUN_14488cef8(uVar3,&local_48,lVar2,0);
      if ((((plStack_40 != (longlong *)0x0) && (local_48._4_4_ != 0)) && (-1 < (int)(uint)local_48))
         && ((int)(uint)local_48 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_48._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_40 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_48);
          if (cVar1 != '\0') {
            FUN_14008e0ae(&local_48);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4ddd6 FUN_143d4ddd6 body=332 status=ok
// SIG undefined FUN_143d4ddd6(void)

void FUN_143d4ddd6(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            uVar3 = FUN_14008e0ae(&local_58);
            FUN_1414f49d2(uVar3,param_3,param_4,1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4df24 FUN_143d4df24 body=332 status=ok
// SIG undefined FUN_143d4df24(void)

void FUN_143d4df24(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            uVar3 = FUN_14008e0ae(&local_58);
            FUN_1488563f2(uVar3,param_3,param_4,1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4e072 FUN_143d4e072 body=877 status=ok
// SIG undefined FUN_143d4e072(void)

void FUN_143d4e072(longlong *param_1,undefined8 param_2,byte param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar7 = *(longlong **)(param_4 + 2);
    if (((param_4[1] == 0) ||
        (((uVar2 = *param_4, (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
         (plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0)))) ||
       (((*(uint *)(plVar8 + 2) != param_4[1] || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
        (*plVar8 == 0)))) {
      local_58._0_4_ = 0;
      uVar2 = 0;
      uVar6 = (uint)local_58;
    }
    else {
      uVar6 = *(uint *)(*plVar8 + 0xc);
      local_58 = (ulonglong)uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar2 = *(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar2 = *(uint *)(lVar11 + 0x10);
        bVar12 = uVar2 == 0;
        if (bVar12) {
          *(uint *)(lVar11 + 0x10) = uVar10;
          uVar2 = 0;
        }
        UNLOCK();
        uVar6 = (uint)local_58;
        if (bVar12) {
          uVar2 = uVar10;
        }
      }
    }
    local_58._0_4_ = uVar6;
    local_58 = CONCAT44(uVar2,(uint)local_58);
    uVar6 = (uint)((ulonglong)plVar7 >> 0x10);
    uVar10 = (uint)plVar7 & 0xffff;
    uVar10 = ((uint)plVar7 << 0x10 | uVar10) + (int)((ulonglong)plVar7 >> 0x20) +
             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4);
    uVar6 = uVar10 >> 0xd ^ (uVar2 ^ (uint)local_58) - uVar10;
    uVar2 = uVar6 << 8 ^ (-0x61c88647 - uVar10) - uVar6;
    uVar10 = uVar2 >> 0xd ^ (uVar10 - uVar6) - uVar2;
    uVar6 = uVar10 >> 0xc ^ (uVar6 - uVar2) - uVar10;
    uVar9 = uVar6 << 0x10 ^ (uVar2 - uVar10) - uVar6;
    uVar2 = uVar9 >> 5 ^ (uVar10 - uVar6) - uVar9;
    uVar10 = uVar2 >> 3 ^ (uVar6 - uVar9) - uVar2;
    uVar6 = uVar10 << 10 ^ (uVar9 - uVar2) - uVar10;
    plStack_50 = plVar7;
    iVar3 = FUN_145d40bb8(uVar6 >> 0xf ^ uVar2 - (uVar10 + uVar6));
    if (iVar3 != -1) {
      lVar11 = *(longlong *)(DAT_14cb7d6b0 + 0x10 + (longlong)iVar3 * 0x20);
      FUN_14886449c(&DAT_14cb7d6b0,iVar3);
      lVar4 = FUN_140414d56();
      if (lVar4 != 0) {
        if (*param_1 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)param_1[1];
        }
        uVar5 = (**(code **)(*plVar7 + 0x10))();
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        local_3c = 0xff;
        local_40 = 0;
        local_48 = 0;
        FUN_14488cef8(uVar5,&local_58,lVar4,0);
        if (((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) &&
           ((-1 < (int)(uint)local_58 &&
            (((((int)(uint)local_58 < DAT_14c9647dc &&
               (lVar4 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8),
               lVar4 != 0)) && (*(int *)(lVar4 + 0x10) == local_58._4_4_)) &&
             ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
          uVar5 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar5,&local_58);
          if (param_3 < 4 && cVar1 == '\x01') {
            lVar4 = FUN_14008e0ae(&local_58);
            if ((lVar4 + *(longlong *)(&DAT_14b4040a8 + (ulonglong)param_3 * 8) != 0) &&
               (lVar11 != 0)) {
              FUN_14480f766(lVar4 + *(longlong *)(&DAT_14b4040a8 + (ulonglong)param_3 * 8),lVar11);
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4e3e0 FUN_143d4e3e0 body=1165 status=ok
// SIG undefined FUN_143d4e3e0(void)

void FUN_143d4e3e0(longlong *param_1,undefined8 param_2,char param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_c8 [40];
  uint local_a0;
  int local_9c;
  ulonglong local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_5c [4];
  uint *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*param_1 == 0) || (param_1[1] == 0)) || (lVar7 = FUN_140414d56(), lVar7 == 0))
  goto LAB_143d4e415;
  if (*param_1 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)param_1[1];
  }
  uVar8 = (**(code **)(*plVar10 + 0x10))();
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_6c = 0xff;
  local_70 = 0;
  local_78 = 0;
  FUN_14488cef8(uVar8,&local_88,lVar7,0);
  if ((((plStack_80 == (longlong *)0x0) || (local_88._4_4_ == 0)) ||
      (((int)(uint)local_88 < 0 ||
       ((DAT_14c9647dc <= (int)(uint)local_88 ||
        (lVar7 = (ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8), lVar7 == 0)
        ))))) ||
     ((*(int *)(lVar7 + 0x10) != local_88._4_4_ || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0))))
  goto LAB_143d4e415;
  uVar8 = (**(code **)(*plStack_80 + 0x10))();
  cVar5 = FUN_14486eb0e(uVar8,&local_88);
  if (cVar5 == '\0') goto LAB_143d4e415;
  if (param_3 == '\0') {
    lVar7 = 0x1c8;
  }
  else {
    if (param_3 != '\x01') goto LAB_143d4e415;
    lVar7 = 0x1f8;
  }
  lVar9 = FUN_14008e0ae(&local_88);
  if (lVar9 + lVar7 == 0) goto LAB_143d4e415;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  if (uVar1 >> 0x20 == 0) {
LAB_143d4e7ab:
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    uVar15 = (uint)uVar1;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8)));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != (int)(uVar1 >> 0x20) || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))
         ) goto LAB_143d4e7ab;
      lVar14 = *plVar10;
    }
  }
  local_58 = (uint *)0x0;
  local_50 = (undefined1 *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50._0_4_ = 3;
  *(undefined ***)local_58 = &PTR_LAB_14b404040;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_58 + 4) = lVar11;
  *(undefined ***)local_58 = &PTR_FUN_14b403260;
  local_58[6] = 0;
  local_58[7] = 0;
  uVar15 = 0;
  if (lVar14 != 0) {
    uVar15 = *(uint *)(lVar14 + 0xc);
    local_58[6] = uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar15 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar15 = *(uint *)(lVar14 + 0x10);
      bVar16 = uVar15 == 0;
      if (bVar16) {
        *(uint *)(lVar14 + 0x10) = uVar12;
        uVar15 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar15 = uVar12;
      }
    }
  }
  puVar3[7] = uVar15;
  *(ulonglong *)(puVar3 + 8) = uVar1;
  *(ulonglong *)(puVar3 + 10) = uVar2;
  FUN_145882066(lVar9 + lVar7,local_90,&local_58);
  if ((int)local_50 == 0) {
LAB_143d4e6cb:
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (uint *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_143d4e6cb;
  }
  FUN_14885aa72();
  local_98 = param_4[1];
  if (((((*(uint *)((longlong)param_4 + 4) == 0) || (uVar15 = (uint)*param_4, (int)uVar15 < 0)) ||
       (DAT_14c9647dc <= (int)uVar15)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || (*(uint *)(plVar10 + 2) != *(uint *)((longlong)param_4 + 4)))))
     || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) {
LAB_143d4e79f:
    local_a0 = 0;
    iVar6 = 0;
  }
  else {
    local_9c = 0;
    if (*plVar10 == 0) goto LAB_143d4e79f;
    local_a0 = *(uint *)(*plVar10 + 0xc);
    if ((int)local_a0 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_a0 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a0 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(lVar7 + 0x10) = iVar13;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar6 = iVar13;
      }
    }
  }
  local_58 = &local_a0;
  local_9c = iVar6;
  local_50 = local_90;
  FUN_145d409d6(local_5c);
LAB_143d4e415:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4e86e FUN_143d4e86e body=886 status=ok
// SIG undefined FUN_143d4e86e(void)

void FUN_143d4e86e(longlong *param_1,undefined8 param_2,char param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar8 = *(longlong **)(param_4 + 2);
    if (((param_4[1] == 0) ||
        (((uVar2 = *param_4, (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
         (plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0)))) ||
       (((*(uint *)(plVar9 + 2) != param_4[1] || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
        (*plVar9 == 0)))) {
      local_58._0_4_ = 0;
      uVar2 = 0;
      uVar7 = (uint)local_58;
    }
    else {
      uVar7 = *(uint *)(*plVar9 + 0xc);
      local_58 = (ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar2 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar2 = *(uint *)(lVar12 + 0x10);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(uint *)(lVar12 + 0x10) = uVar11;
          uVar2 = 0;
        }
        UNLOCK();
        uVar7 = (uint)local_58;
        if (bVar13) {
          uVar2 = uVar11;
        }
      }
    }
    local_58._0_4_ = uVar7;
    local_58 = CONCAT44(uVar2,(uint)local_58);
    uVar7 = (uint)((ulonglong)plVar8 >> 0x10);
    uVar11 = (uint)plVar8 & 0xffff;
    uVar11 = ((uint)plVar8 << 0x10 | uVar11) + (int)((ulonglong)plVar8 >> 0x20) +
             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar11 >> 4);
    uVar7 = uVar11 >> 0xd ^ (uVar2 ^ (uint)local_58) - uVar11;
    uVar2 = uVar7 << 8 ^ (-0x61c88647 - uVar11) - uVar7;
    uVar11 = uVar2 >> 0xd ^ (uVar11 - uVar7) - uVar2;
    uVar7 = uVar11 >> 0xc ^ (uVar7 - uVar2) - uVar11;
    uVar10 = uVar7 << 0x10 ^ (uVar2 - uVar11) - uVar7;
    uVar2 = uVar10 >> 5 ^ (uVar11 - uVar7) - uVar10;
    uVar11 = uVar2 >> 3 ^ (uVar7 - uVar10) - uVar2;
    uVar7 = uVar11 << 10 ^ (uVar10 - uVar2) - uVar11;
    plStack_50 = plVar8;
    iVar3 = FUN_145d40bb8(uVar7 >> 0xf ^ uVar2 - (uVar11 + uVar7));
    if (iVar3 != -1) {
      lVar12 = *(longlong *)(DAT_14cb7d6b0 + 0x10 + (longlong)iVar3 * 0x20);
      FUN_14886449c(&DAT_14cb7d6b0,iVar3);
      lVar4 = FUN_140414d56();
      if (lVar4 != 0) {
        if (*param_1 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[1];
        }
        uVar5 = (**(code **)(*plVar8 + 0x10))();
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        local_3c = 0xff;
        local_40 = 0;
        local_48 = 0;
        FUN_14488cef8(uVar5,&local_58,lVar4,0);
        if (((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) &&
           ((-1 < (int)(uint)local_58 &&
            (((((int)(uint)local_58 < DAT_14c9647dc &&
               (lVar4 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8),
               lVar4 != 0)) && (*(int *)(lVar4 + 0x10) == local_58._4_4_)) &&
             ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
          uVar5 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar5,&local_58);
          if (cVar1 != '\0') {
            if (param_3 == '\0') {
              lVar4 = 0x1c8;
            }
            else {
              if (param_3 != '\x01') goto LAB_143d4e899;
              lVar4 = 0x1f8;
            }
            lVar6 = FUN_14008e0ae(&local_58);
            if ((lVar6 + lVar4 != 0) && (lVar12 != 0)) {
              FUN_14480f766(lVar6 + lVar4,lVar12);
            }
          }
        }
      }
    }
  }
LAB_143d4e899:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4ec34 FUN_143d4ec34 body=557 status=ok
// SIG undefined FUN_143d4ec34(void)

void FUN_143d4ec34(longlong param_1,undefined4 param_2)

{
  uint *_Dst;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  
  if (0 < (longlong)*(int *)(param_1 + 0x18)) {
    uVar9 = (longlong)*(int *)(param_1 + 0x18);
    do {
      lVar13 = *(longlong *)(param_1 + 0x10);
      lVar8 = (uVar9 - 1) * 0x10;
      _Dst = (uint *)(lVar13 + lVar8);
      plVar12 = *(longlong **)(lVar13 + 8 + lVar8);
      if ((((plVar12 == (longlong *)0x0) || (_Dst[1] == 0)) || (uVar5 = *_Dst, (int)uVar5 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar5 ||
           (lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar13 == 0)) ||
          ((*(uint *)(lVar13 + 0x10) != _Dst[1] || ((*(uint *)(lVar13 + 8) & 0x10200000) != 0))))))
      {
        uVar5 = *(uint *)(param_1 + 0x18);
        if (uVar9 != uVar5) {
          memmove(_Dst,_Dst + 4,(longlong)(int)(uVar5 - (int)uVar9) << 4);
          uVar5 = *(uint *)(param_1 + 0x18);
        }
        *(uint *)(param_1 + 0x18) = uVar5 - 1;
        FUN_145bf10b0((longlong *)(param_1 + 0x10));
      }
      else {
        lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12);
        if (((*(longlong *)(lVar13 + 0x30) != 0) && (*(int *)(lVar13 + 0x2c) != 0)) &&
           ((uVar5 = *(uint *)(lVar13 + 0x28), -1 < (int)uVar5 &&
            (((((int)uVar5 < DAT_14c9647dc &&
               (plVar12 = (longlong *)
                          ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0)) && ((int)plVar12[2] == *(int *)(lVar13 + 0x2c))) &&
             ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar12;
          }
          else {
            lVar8 = 0;
          }
          if ((*(char *)(lVar8 + 0x178) == '\x03') &&
             (iVar1 = *(int *)(lVar13 + 0x20), (longlong)iVar1 != 0)) {
            lVar13 = *(longlong *)(lVar13 + 0x18);
            lVar8 = 0;
            do {
              lVar2 = *(longlong *)(lVar13 + lVar8);
              if (lVar2 != 0) {
                FUN_144a01782(lVar2,param_2);
              }
              lVar8 = lVar8 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar8);
          }
        }
      }
      bVar4 = 1 < (longlong)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar4);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    uVar7 = 0;
  }
  else {
    puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0x28) * 8;
    do {
      pcVar3 = (code *)*puVar11;
      plVar12 = puVar11 + 4;
      if ((longlong *)puVar11[2] != (longlong *)0x0) {
        plVar12 = (longlong *)puVar11[2];
      }
      uVar6 = (**(code **)(*plVar12 + 8))();
      (*pcVar3)(uVar6);
      puVar11 = puVar11 + 8;
    } while (puVar11 != puVar10);
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    puVar11 = *(undefined8 **)(param_1 + 0x20);
  }
  FUN_144a6a7e8(puVar11,uVar7);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  FUN_1414fc534(param_1 + 0x20,0);
  return;
}



// FUNCTION 143d4ee62 FUN_143d4ee62 body=73 status=ok
// SIG undefined FUN_143d4ee62(void)

undefined8 FUN_143d4ee62(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x2c)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 143d4eeac FUN_143d4eeac body=856 status=ok
// SIG undefined FUN_143d4eeac(void)

void FUN_143d4eeac(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar4 = (byte *)*param_2;
  local_a8 = param_1;
  if ((pbVar4 != (byte *)0x0) && ((~*pbVar4 & 3) == 0)) {
    lVar5 = *(longlong *)(pbVar4 + 8);
    local_a0 = (uint *)(lVar5 + 0x30);
    iVar2 = *(int *)(lVar5 + 0x48);
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar18 = 0;
      iVar14 = 0;
      iVar7 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar5 + 0x40);
      if (*(uint **)(lVar5 + 0x40) == (uint *)0x0) {
        puVar8 = local_a0;
      }
      uVar16 = *puVar8;
      if (uVar16 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar18 = 0;
        uVar15 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar15 = uVar18;
        }
        iVar14 = 0;
        do {
          if (uVar15 == uVar18) goto LAB_143d4ef88;
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar8[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar18 = 0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar15 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar7) {
        iVar7 = iVar2;
      }
    }
    if (iVar7 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar9 = *(longlong *)(lVar5 + 0x18);
        uVar19 = FUN_140b963dc(lVar9 + (longlong)iVar7 * 0x40 + 0x28,0);
        if ((DAT_14cb7d760 != 0) &&
           (lVar9 = FUN_144837462(DAT_14cb7d760,lVar9 + (longlong)iVar7 * 0x40), lVar9 != 0)) {
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          local_7c = 0xff;
          local_80 = 0;
          local_88 = 0;
          FUN_14493679e(local_a8,&local_98,lVar9,0);
          if (((plStack_90 == (longlong *)0x0) ||
              (((local_98._4_4_ == 0 || ((int)(uint)local_98 < 0)) ||
               (DAT_14c9647dc <= (int)(uint)local_98)))) ||
             (((lVar17 = (ulonglong)(((uint)local_98 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_98 >> 0x10) * 8),
               lVar17 == 0 || (*(int *)(lVar17 + 0x10) != local_98._4_4_)) ||
              ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))) {
LAB_143d4f0a0:
            FUN_14036c7e6(local_a8,&local_98,lVar9,0);
          }
          else {
            uVar10 = (**(code **)(*plStack_90 + 0x10))();
            cVar6 = FUN_14486eb0e(uVar10,&local_98);
            if (cVar6 == '\0') goto LAB_143d4f0a0;
          }
          if (((plStack_90 != (longlong *)0x0) && (local_98._4_4_ != 0)) &&
             (((-1 < (int)(uint)local_98 &&
               ((((int)(uint)local_98 < DAT_14c9647dc &&
                 (lVar9 = (ulonglong)(((uint)local_98 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_98 >> 0x10) * 8),
                 lVar9 != 0)) && (*(int *)(lVar9 + 0x10) == local_98._4_4_)))) &&
              ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
            uVar10 = (**(code **)(*plStack_90 + 0x10))();
            cVar6 = FUN_14486eb0e(uVar10,&local_98);
            if (cVar6 != '\0') {
              uVar10 = FUN_14008e0ae(&local_98);
              FUN_1409d461e(uVar10,uVar19,1);
              lVar9 = FUN_14008e0ae(&local_98);
              *(undefined1 *)(lVar9 + 0x131) = 0;
            }
          }
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar8 = *(uint **)(lVar5 + 0x40);
        if (*(uint **)(lVar5 + 0x40) == (uint *)0x0) {
          puVar8 = local_a0;
        }
        iVar3 = *(int *)(lVar5 + 0x48);
        iVar7 = (int)uVar18;
        lVar9 = (longlong)iVar7;
        uVar13 = puVar8[lVar9] & uVar16;
        if (uVar13 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar7) {
            iVar12 = iVar7;
          }
          if (iVar7 < iVar11) {
            lVar17 = 0;
            do {
              uVar13 = puVar8[lVar9 + lVar17 + 1];
              if (uVar13 != 0) {
                uVar18 = (ulonglong)(iVar7 + (int)lVar17 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143d4f1bf;
              }
              iVar14 = iVar14 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar12 - lVar9 != lVar17);
            uVar16 = 0xffffffff;
            iVar7 = iVar12;
          }
          uVar18 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar3;
        }
        else {
LAB_143d4f1bf:
          uVar15 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar15 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar7) {
            iVar7 = iVar3;
          }
        }
      } while (iVar7 != iVar2);
    }
  }
LAB_143d4ef88:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4f206 FUN_143d4f206 body=280 status=ok
// SIG undefined FUN_143d4f206(void)

ulonglong FUN_143d4f206(ulonglong param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = *param_3;
  if (cVar3 == '\x01') {
    if (*(longlong *)(param_3 + 8) != 0) goto LAB_143d4f2c3;
  }
  else if (cVar3 == '\x02') {
    if (((((*(int *)(param_3 + 0xc) != 0) && (uVar4 = *(uint *)(param_3 + 8), -1 < (int)uVar4)) &&
         ((int)uVar4 < DAT_14c9647dc)) &&
        ((lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar5 != 0 &&
         (*(int *)(lVar5 + 0x10) == *(int *)(param_3 + 0xc))))) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) goto LAB_143d4f2c3;
  }
  else if (((cVar3 == '\x03') && (*(longlong *)(param_3 + 8) != 0)) &&
          ((*(longlong *)(param_3 + 0x10) != 0 && (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8)))
          )) {
LAB_143d4f2c3:
    FUN_140f83604(param_3,&local_30);
    if (local_30 != 0) {
      uVar4 = FUN_141362ac2(local_30,*(undefined1 *)(param_1 + 0x10));
      param_1 = (ulonglong)uVar4;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    if (local_30 != 0) goto LAB_143d4f234;
  }
  param_1 = 0;
LAB_143d4f234:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffff01;
}



// FUNCTION 143d4f395 FUN_143d4f395 body=41 status=ok
// SIG undefined FUN_143d4f395(void)

void FUN_143d4f395(void)

{
  DAT_14cb7d7c0 = 0;
  if (DAT_14cb7d7b8 != 0) {
    FUN_1400020a8();
  }
  FUN_146156b12();
  return;
}



// FUNCTION 143d4f3e0 FUN_143d4f3e0 body=41 status=ok
// SIG undefined FUN_143d4f3e0(void)

void FUN_143d4f3e0(void)

{
  DAT_14cb7d810 = 0;
  if (DAT_14cb7d808 != 0) {
    FUN_1400020a8();
  }
  FUN_145afea2e();
  return;
}



// FUNCTION 143d4f40f FUN_143d4f40f body=69 status=ok
// SIG undefined FUN_143d4f40f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d4f40f(void)

{
  _DAT_14cb7d828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d4f451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7d830,1);
  return;
}



// FUNCTION 143d4f454 FUN_143d4f454 body=69 status=ok
// SIG undefined FUN_143d4f454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d4f454(void)

{
  _DAT_14cb7d840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d4f496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7d848,1);
  return;
}



// FUNCTION 143d4f4e0 FUN_143d4f4e0 body=151 status=ok
// SIG undefined FUN_143d4f4e0(void)

int FUN_143d4f4e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined1 auStack_48 [36];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = FUN_1434ebb00();
  if (-1 < iVar4) {
    bVar3 = (**(code **)(*param_1 + 0x498))(param_1);
    if (((4 < bVar3) && (lVar1 = param_1[0x3c], lVar1 != 0)) && (*(longlong *)(lVar1 + 0x68) != 0))
    {
      lVar2 = *(longlong *)(lVar1 + 0x30);
      FUN_1414c0ef2(*(longlong *)(lVar1 + 0x68),local_24,param_2);
      if ((lVar2 != 0) && (-1 < local_24[0])) {
        FUN_14164740e(lVar2,local_24);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4f578 FUN_143d4f578 body=189 status=ok
// SIG undefined FUN_143d4f578(void)

void FUN_143d4f578(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x1e0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x68), lVar1 != 0)) {
    FUN_1409845a0(lVar1,local_2c,param_2);
    if (-1 < local_2c[0]) {
      if ((*(longlong *)(param_1 + 0x1e0) != 0) &&
         (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x30), plVar2 != (longlong *)0x0)
         ) {
        local_30 = FUN_140b9fef0(lVar1,local_2c,0);
        (**(code **)(*plVar2 + 0x2b8))(plVar2);
      }
      FUN_1415c92c6(lVar1,local_2c);
    }
  }
  FUN_1434ebc3c(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4f662 FUN_143d4f662 body=29 status=ok
// SIG undefined FUN_143d4f662(void)

bool FUN_143d4f662(longlong param_1)

{
  FUN_141599df2();
  return *(char *)(param_1 + 0x418) == '\x04';
}



// FUNCTION 143d4f67f FUN_143d4f67f body=635 status=ok
// SIG undefined FUN_143d4f67f(void)

void FUN_143d4f67f(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a0;
  undefined1 local_98 [8];
  code *local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0 < *(int *)(param_1 + 1)) {
    local_88[0] = 0;
    local_60 = 0;
    local_58 = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)*param_1;
    }
    if (DAT_14c949118 == 0) {
      local_a0 = FUN_140631fbe;
      lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar2;
      FUN_1446f470e(local_98,L"Class",1);
      local_c8 = &LAB_146891e90;
      local_d0 = (code *)&LAB_146273097;
      local_e0 = L"Engine";
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
      local_e8 = 0x20;
      local_f0 = 0x10000000;
      local_f8._0_4_ = 8;
      local_c0 = &local_a0;
      FUN_14574b4b2(lVar2);
      DAT_14c949118 = lVar2;
      if (DAT_14c951858 == 0) {
        local_c0 = &local_90;
        local_90 = FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1468c5283;
        local_d0 = FUN_142809da0;
        local_d8 = L"Engine";
        local_e0 = (wchar_t *)0x400000000;
        local_e8 = CONCAT44(local_e8._4_4_,0x10000000);
        local_f0 = 8;
        local_f8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar1 = DAT_14c951858;
      lVar2 = DAT_14c949118;
      uVar3 = FUN_1449e2fb2();
      local_f8 = L"Class";
      FUN_14574b446(uVar3,lVar2,lVar1,L"/Script/CoreUObject");
    }
    lVar2 = FUN_140277b32(DAT_14c949118,0,puVar4,0);
    if (lVar2 != 0) {
      FUN_140575224(local_88,lVar2);
    }
    FUN_14591a220(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d4f8fb FUN_143d4f8fb body=69 status=ok
// SIG undefined FUN_143d4f8fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d4f8fb(void)

{
  _DAT_14cb7d858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d4f93d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7d860,1);
  return;
}



// FUNCTION 143d4f940 FUN_143d4f940 body=49 status=ok
// SIG undefined FUN_143d4f940(void)

void FUN_143d4f940(void)

{
  FUN_144760e21(DAT_14cb7d868,DAT_14cb7d870);
  if (DAT_14cb7d868 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4f971 FUN_143d4f971 body=49 status=ok
// SIG undefined FUN_143d4f971(void)

void FUN_143d4f971(void)

{
  FUN_144760e21(DAT_14cb7d880,DAT_14cb7d888);
  if (DAT_14cb7d880 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4f9a2 FUN_143d4f9a2 body=49 status=ok
// SIG undefined FUN_143d4f9a2(void)

void FUN_143d4f9a2(void)

{
  FUN_144760e21(DAT_14cb7d898,DAT_14cb7d8a0);
  if (DAT_14cb7d898 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4f9d3 FUN_143d4f9d3 body=49 status=ok
// SIG undefined FUN_143d4f9d3(void)

void FUN_143d4f9d3(void)

{
  FUN_144760e21(DAT_14cb7df98,DAT_14cb7dfa0);
  if (DAT_14cb7df98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4fa04 FUN_143d4fa04 body=49 status=ok
// SIG undefined FUN_143d4fa04(void)

void FUN_143d4fa04(void)

{
  FUN_144760e21(DAT_14cb7d8b0,DAT_14cb7d8b8);
  if (DAT_14cb7d8b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4fa35 FUN_143d4fa35 body=49 status=ok
// SIG undefined FUN_143d4fa35(void)

void FUN_143d4fa35(void)

{
  FUN_144760e21(DAT_14cb7df50,DAT_14cb7df58);
  if (DAT_14cb7df50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4fa66 FUN_143d4fa66 body=49 status=ok
// SIG undefined FUN_143d4fa66(void)

void FUN_143d4fa66(void)

{
  FUN_144760e21(DAT_14cb7df68,DAT_14cb7df70);
  if (DAT_14cb7df68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4fa97 FUN_143d4fa97 body=49 status=ok
// SIG undefined FUN_143d4fa97(void)

void FUN_143d4fa97(void)

{
  FUN_144760e21(DAT_14cb7df80,DAT_14cb7df88);
  if (DAT_14cb7df80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d4fac8 FUN_143d4fac8 body=64 status=ok
// SIG undefined FUN_143d4fac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d4fac8(void)

{
  if (DAT_14cb7d918 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb7d910 = 0;
  if (DAT_14cb7d908 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb7d8c8);
  return;
}



// FUNCTION 143d4fb4c FUN_143d4fb4c body=700 status=ok
// SIG undefined FUN_143d4fb4c(void)

void FUN_143d4fb4c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0 [2];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar6 = param_1 + 0xcd;
  if (plVar6 != param_2) {
    iVar3 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0xce) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x674) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x674) = 0;
    }
    else {
      FUN_1446dd670(plVar6,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*plVar6,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  FUN_1415024b8(plVar6);
  (**(code **)(*param_1 + 0x990))(param_1,local_a0,param_2,param_3);
  FUN_14000bbd8(local_68,local_a0,0);
  FUN_145bd1d66(&local_b0,local_68);
  if (local_b0 == 0) {
    FUN_14000bbd8(local_90,local_a0,0);
    uVar5 = (**(code **)(*param_1 + 0x968))(param_1);
    FUN_14885c230(&local_c0,uVar5,local_90);
    plVar1 = local_a8;
    plVar6 = local_b8;
    local_b0 = local_c0;
    local_c0 = 0;
    if (local_b8 != local_a8) {
      local_b8 = (longlong *)0x0;
      local_a8 = plVar6;
      if (plVar1 == (longlong *)0x0) goto LAB_143d4fcde;
      LOCK();
      plVar6 = plVar1 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar6 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
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
LAB_143d4fcde:
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[0xbe];
  param_1[0xbd] = local_b0;
  param_1[0xbe] = (longlong)local_a8;
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
  (**(code **)(*param_1 + 0x970))(param_1);
  thunk_FUN_1662e03be(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x978))(param_1);
  uVar5 = FUN_1447210f0(param_1);
  plVar6 = (longlong *)FUN_1406f625c(uVar5);
  if (((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x2b0))(plVar6), lVar7 != 0))
     && (plVar6 = (longlong *)FUN_145cf4dbc(lVar7), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x40))(plVar6,0,0);
  }
  cVar4 = FUN_1461c9ce6(param_1);
  if (cVar4 == '\0') {
    FUN_146011060(param_1);
  }
  plVar6 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d4fe0a FUN_143d4fe0a body=2395 status=ok
// SIG undefined FUN_143d4fe0a(void)

void FUN_143d4fe0a(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined4 local_190;
  undefined8 local_188;
  wchar_t *local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1434f1aa4();
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    lVar4 = FUN_14041aabe();
    lVar5 = *(longlong *)(param_1 + 0x3f0);
    if ((((lVar5 != 0) && (lVar4 != 0)) && (lVar8 = *(longlong *)(lVar5 + 0x10), lVar8 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      lVar4 = *(longlong *)(param_1 + 0x570);
      if (((lVar4 != 0) &&
          ((lVar8 = FUN_1458f293e(), lVar8 != 0 &&
           (*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
         ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30 && (*(longlong *)(param_1 + 0x570) != 0)))) {
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        local_d8 = (code *)0x0;
        uStack_d0 = 0;
        local_a8 = 0x100;
        uVar7 = 0;
        local_98 = 0;
        local_88 = (longlong *)0x0;
        uStack_c0 = *(undefined8 *)(param_1 + 0x1b0);
        local_a4 = 0x48;
        uVar6 = FUN_1447210f0(param_1);
        lVar4 = *(longlong *)(param_1 + 0x570);
        if (lVar4 != 0) {
          lVar8 = FUN_1458f293e();
          if (((lVar8 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar8 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
              lVar8 + 0x30)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(param_1 + 0x570);
          }
        }
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0x3ff00000;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_104 = 0x3ff00000;
        uStack_100 = 0;
        uStack_fc = 0x3ff00000;
        local_f8 = 0x3ff0000000000000;
        uStack_f0 = 0;
        lVar4 = FUN_141037e38(uVar6,uVar7,&local_148,&local_d8);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(lVar5 + 0x458) = lVar4;
        if (local_98 != 0) {
          plVar9 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar9 = local_78;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      FUN_1461bb332(lVar5 + 0x448,*(longlong *)(param_1 + 0x5e8) + 0x270);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x4d0);
  if (lVar5 == 0) goto LAB_143d500b7;
  if (((*(int *)(lVar5 + 0x1c) == 0) || (uVar3 = *(uint *)(lVar5 + 0x18), (int)uVar3 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar3 ||
      ((((plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar5 + 0x1c))) ||
        ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar4 = *plVar9, lVar4 == 0)))))) {
    if (*(longlong *)(lVar5 + 0x20) == 0) goto LAB_143d500b7;
    lVar4 = FUN_140007850();
    cVar1 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar1 == '\0')) {
      if (lVar4 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        goto LAB_143d500b7;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
LAB_143d50071:
      *(uint *)(lVar5 + 0x18) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar2 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar2 = *(int *)(lVar8 + 0x10);
        bVar11 = iVar2 == 0;
        if (bVar11) {
          *(int *)(lVar8 + 0x10) = iVar10;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar2 = iVar10;
        }
      }
      *(int *)(lVar5 + 0x1c) = iVar2;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_143d50071;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) goto LAB_143d500b7;
  }
  if (DAT_14c949118 == 0) {
    local_e0 = FUN_140631fbe;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar5;
    FUN_1446f470e(&local_148,L"Class",1);
    local_168 = &LAB_146891e90;
    local_170 = (code *)&LAB_146273097;
    local_180 = L"Engine";
    local_178 = (wchar_t *)CONCAT44(local_178._4_4_,199);
    local_188 = 0x20;
    local_190 = 0x10000000;
    local_198._0_4_ = 8;
    local_160 = &local_e0;
    FUN_14574b4b2(lVar5);
    DAT_14c949118 = lVar5;
    if (DAT_14c951858 == 0) {
      local_160 = &local_d8;
      local_d8 = FUN_1449e2820;
      local_150 = FUN_14081d0ea;
      local_158 = FUN_14081d0ea;
      local_168 = &LAB_1468c5283;
      local_170 = FUN_142809da0;
      local_178 = L"Engine";
      local_180 = (wchar_t *)0x400000000;
      local_188 = CONCAT44(local_188._4_4_,0x10000000);
      local_190 = 8;
      local_198._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar8 = DAT_14c951858;
    lVar5 = DAT_14c949118;
    uVar7 = FUN_1449e2fb2();
    local_198 = L"Class";
    FUN_14574b446(uVar7,lVar5,lVar8,L"/Script/CoreUObject");
  }
  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
     ((lVar5 = FUN_1459879a0(), lVar5 == 0 ||
      ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)))))) goto LAB_143d500b7;
  lVar5 = *(longlong *)(param_1 + 0x4d0);
  if (((*(int *)(lVar5 + 0x1c) == 0) ||
      (((uVar3 = *(uint *)(lVar5 + 0x18), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)) ||
       (plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0)))) ||
     ((((int)plVar9[2] != *(int *)(lVar5 + 0x1c) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
      (lVar4 = *plVar9, lVar4 == 0)))) {
    if (*(longlong *)(lVar5 + 0x20) != 0) {
      lVar4 = FUN_140007850();
      cVar1 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar1 == '\0')) {
        if (lVar4 != 0) {
          uVar3 = *(uint *)(lVar4 + 0xc);
          goto LAB_143d502d2;
        }
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      else {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
LAB_143d502d2:
          *(uint *)(lVar5 + 0x18) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar2 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar2 = *(int *)(lVar8 + 0x10);
            bVar11 = iVar2 == 0;
            if (bVar11) {
              *(int *)(lVar8 + 0x10) = iVar10;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar11) {
              iVar2 = iVar10;
            }
          }
          *(int *)(lVar5 + 0x1c) = iVar2;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_143d50314;
      }
    }
LAB_143d5036e:
    lVar8 = 0;
  }
  else {
LAB_143d50314:
    if (DAT_14c949118 == 0) {
      local_e0 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(&local_148,L"Class",1);
      local_168 = &LAB_146891e90;
      local_170 = (code *)&LAB_146273097;
      local_180 = L"Engine";
      local_178 = (wchar_t *)CONCAT44(local_178._4_4_,199);
      local_188 = 0x20;
      local_190 = 0x10000000;
      local_198._0_4_ = 8;
      local_160 = &local_e0;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      if (DAT_14c951858 == 0) {
        local_160 = &local_d8;
        local_d8 = FUN_1449e2820;
        local_150 = FUN_14081d0ea;
        local_158 = FUN_14081d0ea;
        local_168 = &LAB_1468c5283;
        local_170 = FUN_142809da0;
        local_178 = L"Engine";
        local_180 = (wchar_t *)0x400000000;
        local_188 = CONCAT44(local_188._4_4_,0x10000000);
        local_190 = 8;
        local_198._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar8 = DAT_14c951858;
      lVar5 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_198 = L"Class";
      FUN_14574b446(uVar7,lVar5,lVar8,L"/Script/CoreUObject");
    }
    if ((((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar5 = FUN_1459879a0(), lVar5 == 0)) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)))
    goto LAB_143d5036e;
    lVar8 = 0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar8 = lVar4;
    }
  }
  plVar9 = (longlong *)FUN_14885c301(param_1,lVar8);
  if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar9);
  }
  *(longlong **)(param_1 + 0x4c8) = plVar9;
  lVar5 = *(longlong *)(param_1 + 0x4d0);
  plVar9[5] = lVar5;
  uVar7 = (**(code **)(*plVar9 + 0x180))(plVar9);
  FUN_14894055c(plVar9 + 0x3f,uVar7,lVar5);
  plVar9[0x5f] = plVar9[5];
LAB_143d500b7:
  if ((local_50 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d50766 FUN_143d50766 body=2668 status=ok
// SIG undefined FUN_143d50766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143d50766(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined4 local_110;
  undefined8 local_108;
  wchar_t *local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_1400b2348(*(longlong *)(param_1 + 0x5e8) + 0x3c0,local_98,1);
  if ((*(char *)(*param_2 + 0x80) == '\x01') && (cVar6 = FUN_14885c768(), cVar6 != '\0')) {
    lVar8 = *param_2;
    local_c8 = FUN_14586a292();
    local_c0 = *(longlong *)(lVar8 + 8);
    lVar8 = FUN_148866a1a(param_1);
    if (lVar8 == 0) {
      lVar8 = *param_2;
      local_b0 = *(longlong *)(param_1 + 0x5e8);
      local_a8 = *(longlong **)(param_1 + 0x5f0);
      local_c0 = lVar8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
        UNLOCK();
        local_c0 = *param_2;
      }
      local_b8 = (longlong *)param_2[1];
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      local_c8 = param_1;
      if (local_a8 == (longlong *)0x0) {
        local_a0 = 2;
      }
      else {
        LOCK();
        *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
        UNLOCK();
        local_a0 = 2;
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
      }
      if (((*(char *)(lVar8 + 0x80) == '\x01') &&
          (plVar11 = *(longlong **)(lVar8 + 0x10), plVar11 != (longlong *)0x0)) && (local_c8 != 0))
      {
        (**(code **)(*plVar11 + 0x10))(plVar11,&local_88,local_a0);
        if ((((local_88._4_4_ == 0) || ((int)(uint)local_88 < 0)) ||
            ((DAT_14c9647dc <= (int)(uint)local_88 ||
             ((plVar11 = (longlong *)
                         ((ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8)),
              plVar11 == (longlong *)0x0 || ((int)plVar11[2] != local_88._4_4_)))))) ||
           (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar8 = *plVar11, lVar8 == 0)))) {
          if (local_80[0] != 0) {
            lVar8 = FUN_140007850(local_80);
            cVar6 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar8 == 0) || (cVar6 == '\0')) {
              if (lVar8 != 0) {
                uVar4 = *(uint *)(lVar8 + 0xc);
                local_88 = CONCAT44(local_88._4_4_,uVar4);
                if (DAT_14c9647dc <= (int)uVar4) goto LAB_143d50a1c;
                lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                goto LAB_143d50a1f;
              }
              local_88 = 0;
            }
            else {
              uVar4 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8) + 8 +
                              (ulonglong)(uVar4 & 0xffff) * 0x18) & 0x8400000) == 0) {
                  local_88 = CONCAT44(local_88._4_4_,uVar4);
                  lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
LAB_143d50a1f:
                  iVar7 = *(int *)(lVar14 + 0x10);
                  if (*(int *)(lVar14 + 0x10) == 0) {
                    LOCK();
                    iVar7 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar13 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar7;
                    if (bVar15) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar13);
                    }
                    LOCK();
                    iVar7 = *(int *)(lVar14 + 0x10);
                    bVar15 = iVar7 == 0;
                    if (bVar15) {
                      *(int *)(lVar14 + 0x10) = iVar13;
                      iVar7 = 0;
                    }
                    UNLOCK();
                    if (bVar15) {
                      iVar7 = iVar13;
                    }
                  }
                  local_88 = CONCAT44(iVar7,(uint)local_88);
                }
              }
              else if ((_DAT_00000008 & 0x8400000) == 0) {
                local_88 = CONCAT44(local_88._4_4_,uVar4);
LAB_143d50a1c:
                lVar14 = 0;
                goto LAB_143d50a1f;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_143d50a3f;
            }
          }
LAB_143d50c88:
          plVar9 = (longlong *)0x0;
        }
        else {
LAB_143d50a3f:
          if (DAT_14c949118 == 0) {
            local_60 = FUN_140631fbe;
            lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar14;
            FUN_1446f470e(local_58,L"Class",1);
            local_e8 = &LAB_146891e90;
            local_f0 = (code *)&LAB_146273097;
            local_100 = L"Engine";
            local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
            local_108 = 0x20;
            local_110 = 0x10000000;
            local_118._0_4_ = 8;
            local_e0 = &local_60;
            FUN_14574b4b2(lVar14);
            DAT_14c949118 = lVar14;
            if (DAT_14c951858 == 0) {
              local_e0 = &local_50;
              local_50 = FUN_1449e2820;
              local_d0 = FUN_14081d0ea;
              local_d8 = FUN_14081d0ea;
              local_e8 = &LAB_1468c5283;
              local_f0 = FUN_142809da0;
              local_f8 = L"Engine";
              local_100 = (wchar_t *)0x400000000;
              local_108 = CONCAT44(local_108._4_4_,0x10000000);
              local_110 = 8;
              local_118._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar12 = DAT_14c951858;
            lVar14 = DAT_14c949118;
            uVar10 = FUN_1449e2fb2();
            local_118 = L"Class";
            FUN_14574b446(uVar10,lVar14,lVar12,L"/Script/CoreUObject");
          }
          if ((((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
              (lVar14 = FUN_1459969fc(), lVar14 == 0)) ||
             ((*(int *)(lVar8 + 0x38) < *(int *)(lVar14 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
               lVar14 + 0x30)))) goto LAB_143d50c88;
          if ((((local_88._4_4_ == 0) ||
               (((int)(uint)local_88 < 0 || (DAT_14c9647dc <= (int)(uint)local_88)))) ||
              (plVar11 = (longlong *)
                         ((ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8)),
              plVar11 == (longlong *)0x0)) ||
             ((((int)plVar11[2] != local_88._4_4_ || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))
              || (lVar8 = *plVar11, lVar8 == 0)))) {
            if (local_80[0] != 0) {
              lVar8 = FUN_140007850(local_80);
              cVar6 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar8 == 0) || (cVar6 == '\0')) {
                if (lVar8 != 0) {
                  uVar4 = *(uint *)(lVar8 + 0xc);
                  local_88 = CONCAT44(local_88._4_4_,uVar4);
                  if (DAT_14c9647dc <= (int)uVar4) goto LAB_143d50bc7;
                  lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                  goto LAB_143d50bca;
                }
                local_88 = 0;
              }
              else {
                uVar4 = *(uint *)(lVar8 + 0xc);
                if ((int)uVar4 < DAT_14c9647dc) {
                  if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8) + 8 +
                                (ulonglong)(uVar4 & 0xffff) * 0x18) & 0x8400000) == 0) {
                    local_88 = CONCAT44(local_88._4_4_,uVar4);
                    lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
LAB_143d50bca:
                    iVar7 = *(int *)(lVar14 + 0x10);
                    if (*(int *)(lVar14 + 0x10) == 0) {
                      LOCK();
                      iVar7 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar13 = DAT_14c964868 + 1;
                      bVar15 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar7;
                      if (bVar15) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar13);
                      }
                      LOCK();
                      iVar7 = *(int *)(lVar14 + 0x10);
                      bVar15 = iVar7 == 0;
                      if (bVar15) {
                        *(int *)(lVar14 + 0x10) = iVar13;
                        iVar7 = 0;
                      }
                      UNLOCK();
                      if (bVar15) {
                        iVar7 = iVar13;
                      }
                    }
                    local_88 = CONCAT44(iVar7,(uint)local_88);
                  }
                }
                else if ((_DAT_00000008 & 0x8400000) == 0) {
                  local_88 = CONCAT44(local_88._4_4_,uVar4);
LAB_143d50bc7:
                  lVar14 = 0;
                  goto LAB_143d50bca;
                }
                if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_143d50bea;
              }
            }
LAB_143d50c73:
            lVar12 = 0;
          }
          else {
LAB_143d50bea:
            if (DAT_14c949118 == 0) {
              local_60 = FUN_140631fbe;
              lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar14;
              FUN_1446f470e(local_58,L"Class",1);
              local_e8 = &LAB_146891e90;
              local_f0 = (code *)&LAB_146273097;
              local_100 = L"Engine";
              local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
              local_108 = 0x20;
              local_110 = 0x10000000;
              local_118._0_4_ = 8;
              local_e0 = &local_60;
              FUN_14574b4b2(lVar14);
              DAT_14c949118 = lVar14;
              if (DAT_14c951858 == 0) {
                local_e0 = &local_50;
                local_50 = FUN_1449e2820;
                local_d0 = FUN_14081d0ea;
                local_d8 = FUN_14081d0ea;
                local_e8 = &LAB_1468c5283;
                local_f0 = FUN_142809da0;
                local_f8 = L"Engine";
                local_100 = (wchar_t *)0x400000000;
                local_108 = CONCAT44(local_108._4_4_,0x10000000);
                local_110 = 8;
                local_118._0_4_ = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar12 = DAT_14c951858;
              lVar14 = DAT_14c949118;
              uVar10 = FUN_1449e2fb2();
              local_118 = L"Class";
              FUN_14574b446(uVar10,lVar14,lVar12,L"/Script/CoreUObject");
            }
            if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
               ((lVar14 = FUN_1459969fc(), lVar14 == 0 ||
                (*(int *)(lVar8 + 0x38) < *(int *)(lVar14 + 0x38))))) goto LAB_143d50c73;
            lVar12 = 0;
            if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                == lVar14 + 0x30) {
              lVar12 = lVar8;
            }
          }
          plVar9 = (longlong *)FUN_148862058(local_c8,lVar12);
          plVar1 = local_a8;
          lVar8 = local_b0;
          plVar11 = local_b8;
          if (plVar9 == (longlong *)0x0) goto LAB_143d50c88;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
            UNLOCK();
          }
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)plVar9[6];
          plVar9[5] = local_c0;
          plVar9[6] = (longlong)local_b8;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)plVar9[8];
          plVar9[7] = lVar8;
          plVar9[8] = (longlong)plVar1;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          (**(code **)(*plVar9 + 0x2a0))(plVar9);
          uVar10 = FUN_14477b072(plVar9,DAT_14cb5e638);
          (**(code **)(*plVar9 + 0x248))(plVar9,uVar10,0);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar11 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (plVar9 != (longlong *)0x0) {
          lVar8 = FUN_14586a292();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
              == lVar8 + 0x30)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar9);
            }
            FUN_14885c7d2(&local_c8);
            iVar7 = *(int *)(param_1 + 0x658);
            *(uint *)(param_1 + 0x658) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x65c) < iVar7 + 1U) {
              FUN_148865ff2((longlong *)(param_1 + 0x650),iVar7);
            }
            *(longlong **)(*(longlong *)(param_1 + 0x650) + (longlong)iVar7 * 8) = plVar9;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar9);
            }
            goto LAB_143d507c1;
          }
        }
      }
      FUN_14885c7d2(&local_c8);
    }
  }
  plVar9 = (longlong *)0x0;
LAB_143d507c1:
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 143d511d4 FUN_143d511d4 body=381 status=ok
// SIG undefined FUN_143d511d4(void)

void FUN_143d511d4(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140457ffc(param_2 + 0xa0,param_1);
  FUN_144757f48(param_2,0x40000000);
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar2 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) break;
    LOCK();
    bVar4 = uVar1 == *(uint *)(lVar2 + 8);
    if (bVar4) {
      *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
    }
    UNLOCK();
  } while (!bVar4);
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_28 = &local_30;
  FUN_148865b48(param_1 + 0x650);
  lVar2 = param_1 + 0x520;
  if (*(longlong *)(param_1 + 0x530) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x530);
  }
  if ((longlong)*(int *)(param_1 + 0x538) != 0) {
    lVar3 = 0;
    do {
      if (*(longlong **)(lVar2 + lVar3) == DAT_14cb7d9d0) {
        if ((longlong)*(int *)(param_1 + 0x658) == 0) goto LAB_143d5130e;
        lVar2 = 0;
        goto LAB_143d512e7;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x538) * 8 != lVar3);
  }
  goto LAB_143d51333;
  while (lVar2 = lVar2 + 8, (longlong)*(int *)(param_1 + 0x658) * 8 != lVar2) {
LAB_143d512e7:
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x650) + lVar2);
    if (((lVar3 != 0) && (*(char *)(*(longlong *)(lVar3 + 0x28) + 0x48) == '\0')) &&
       (*(char *)(lVar3 + 0x99) != '\x01')) goto LAB_143d51333;
  }
LAB_143d5130e:
  local_28 = DAT_14cb7d9d0;
  FUN_1400bc8c2(param_1 + 0x518);
  *(uint *)(param_1 + 0x438) =
       *(uint *)(param_1 + 0x438) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x518);
LAB_143d51333:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d51352 FUN_143d51352 body=201 status=ok
// SIG undefined FUN_143d51352(void)

void FUN_143d51352(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  
  cVar1 = (char)param_2[0x13];
  if (cVar1 == '\x01' && param_3 == '\0') {
    lVar3 = param_2[5];
    if (((*(byte *)(lVar3 + 0x48) & 0xfb) != 0) && (cVar1 != '\0')) {
      *(undefined1 *)(param_2 + 0x13) = 0;
      (**(code **)(*param_2 + 0x2e0))(param_2);
      lVar3 = param_2[5];
    }
    FUN_140a943ce(param_1 + 0x630,lVar3 + 0x28);
    return;
  }
  if (param_3 == '\x01' && cVar1 == '\0') {
    lVar3 = param_2[5];
    cVar2 = FUN_1405d595e(param_1 + 0x630,lVar3 + 0x28);
    if (cVar2 == '\0') {
      if (((*(byte *)(lVar3 + 0x48) & 0xfb) != 0) && (cVar1 == '\0')) {
        *(undefined1 *)(param_2 + 0x13) = 1;
        (**(code **)(*param_2 + 0x2d8))(param_2);
        lVar3 = param_2[5];
      }
      FUN_1405dc634(param_1 + 0x630,lVar3 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 143d5141c FUN_143d5141c body=1006 status=ok
// SIG undefined FUN_143d5141c(void)

longlong FUN_143d5141c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = FUN_1447210f0();
  if (((lVar5 != 0) && (*param_2 != 0)) && (((short)param_2[1] < 0 || (param_2[2] != 0)))) {
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x5e8) + 0x290);
    if (lVar6 != 0) {
      plVar10 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x5e8) + 0x288) + 0x18);
      lVar6 = lVar6 * 0x38;
      lVar7 = 0;
      do {
        cVar3 = FUN_14892cdd2(plVar10 + -3);
        if (cVar3 != '\0') {
          plVar11 = plVar10 + -3;
          if ((((plVar11 == (longlong *)0x0) || (cVar3 = FUN_14892cae6(plVar11), cVar3 == '\0')) ||
              ((short)param_2[1] < 0)) || ((int)plVar10[3] <= (int)(short)param_2[1]))
          goto LAB_143d514b8;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_b8 = 0x4800000100;
          uVar8 = 0;
          local_a8 = 0;
          local_98 = (longlong *)0x0;
          lVar6 = *(longlong *)(param_1 + 0x490);
          local_d8 = param_1;
          if (lVar6 != 0) {
            lVar7 = FUN_145894e7a();
            if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                lVar7 + 0x30)) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + 0x490);
            }
          }
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_12c = 0x3ff00000;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_104 = 0x3ff00000;
          uStack_100 = 0;
          uStack_fc = 0x3ff00000;
          local_f8 = 0x3ff0000000000000;
          uStack_f0 = 0;
          lVar7 = FUN_141037e38(lVar5,uVar8,&local_148,&local_e8);
          if (lVar7 != 0) {
            lVar5 = plVar10[1];
            if (lVar5 == 0) {
              uVar8 = FUN_1464f5a0e();
              lVar5 = FUN_14477b664(uVar8);
              plVar10[1] = lVar5;
            }
            lVar6 = plVar10[2];
            if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar10 != 0)) {
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                lVar6 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar6 = FUN_144aff482(uVar8,plVar10);
              }
              plVar10[2] = lVar6;
            }
            *(longlong *)(lVar7 + 0x3c0) = lVar6;
            lVar5 = plVar10[-2];
            if (lVar5 == 0) {
              uVar8 = FUN_1405a25e0();
              lVar5 = FUN_14477b664(uVar8);
              plVar10[-2] = lVar5;
            }
            if (((plVar10[-1] == 0) && (lVar5 != 0)) && (*plVar11 != 0)) {
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                lVar5 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar5 = FUN_144aff482(uVar8,plVar11);
              }
              plVar10[-1] = lVar5;
            }
            FUN_143ca08ca(lVar7);
            *(short *)(lVar7 + 0x3e0) = (short)param_2[1];
            uVar1 = *(uint *)(lVar7 + 0xc);
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
              iVar9 = DAT_14c964868 + 1;
              bVar12 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar12) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar4 = *(int *)(lVar5 + 0x10);
              bVar12 = iVar4 == 0;
              if (bVar12) {
                *(int *)(lVar5 + 0x10) = iVar9;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar12) {
                iVar4 = iVar9;
              }
            }
            iVar9 = *(int *)(param_1 + 0x550);
            *(uint *)(param_1 + 0x550) = iVar9 + 1U;
            if (*(uint *)(param_1 + 0x554) < iVar9 + 1U) {
              FUN_148866292((longlong *)(param_1 + 0x548),iVar9);
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x548) + (longlong)iVar9 * 8) =
                 CONCAT44(iVar4,uVar1);
          }
          if (local_a8 != 0) {
            plVar10 = local_98;
            if (local_98 == (longlong *)0x0) {
              plVar10 = local_88;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          break;
        }
        plVar10 = plVar10 + 7;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
      goto LAB_143d514ba;
    }
  }
LAB_143d514b8:
  lVar7 = 0;
LAB_143d514ba:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 143d5180c FUN_143d5180c body=211 status=ok
// SIG undefined FUN_143d5180c(void)

void FUN_143d5180c(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((((*(char *)(param_1 + 0x57c) == '\x01') && (*param_3 != 0)) &&
      (((short)param_3[1] < 0 || (param_3[2] != 0)))) &&
     (plVar2 = (longlong *)FUN_14885cd5a(param_1,param_3), plVar2 != (longlong *)0x0)) {
    if (((((*(int *)(param_2 + 0xc0c) != 0) && (uVar1 = *(uint *)(param_2 + 0xc08), -1 < (int)uVar1)
          ) && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_2 + 0xc0c))))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if (plVar2 == (longlong *)*plVar3) {
        return;
      }
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        FUN_145c12188(param_1,param_2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000143d518bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x640))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143d518e2 FUN_143d518e2 body=1 status=ok
// SIG undefined FUN_143d518e2(void)

void FUN_143d518e2(void)

{
  return;
}



// FUNCTION 143d518f4 FUN_143d518f4 body=249 status=ok
// SIG undefined FUN_143d518f4(void)

void FUN_143d518f4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((char)param_1[0x10] == '\x01') {
    (**(code **)(*param_1 + 0x10))(param_1,param_2,2);
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,local_50,2);
      _Src = local_38;
      local_78 = local_48;
      uStack_74 = uStack_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      local_68 = (void *)0x0;
      local_60 = local_30;
      if ((longlong)local_30 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_30,0);
        memcpy(local_68,_Src,(longlong)local_30 * 2);
      }
      if (CONCAT44(uStack_74,local_78) != 0) {
        FUN_144a6c37a(param_2 + 0x18,&local_78);
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d51a38 FUN_143d51a38 body=41 status=ok
// SIG undefined FUN_143d51a38(void)

void FUN_143d51a38(void)

{
  DAT_14cb7dad0 = 0;
  if (DAT_14cb7dac8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65ef0();
  return;
}



// FUNCTION 143d51a66 FUN_143d51a66 body=64 status=ok
// SIG undefined FUN_143d51a66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d51a66(void)

{
  if (DAT_14cb7dbd0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb7dbc8 = 0;
  if (DAT_14cb7dbc0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb7db80);
  return;
}



// FUNCTION 143d51ac8 FUN_143d51ac8 body=268 status=ok
// SIG undefined FUN_143d51ac8(void)

void FUN_143d51ac8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1405f1eac();
  plVar1 = (longlong *)FUN_14885f7a0(param_1);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if (lVar2 != 0) {
      FUN_14885ebca(lVar2 + 0x20,local_18,param_1);
    }
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    plVar1 = (longlong *)FUN_14885f7a0(param_1);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xe0) != 0)) {
        FUN_14885ecce(*(longlong *)(lVar2 + 0xe0) + 8,local_18,param_1);
      }
    }
    FUN_14885edd2(local_18,param_1);
    FUN_14885eed0(local_18,param_1);
    FUN_14885efce(&DAT_14cb71658,local_18,param_1,&LAB_14885f0c4);
    FUN_14885efce(&DAT_14cb71670,local_18,param_1,&LAB_14885f0d2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d51bf8 FUN_143d51bf8 body=2651 status=ok
// SIG undefined FUN_143d51bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d51bf8(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  byte bVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  undefined *puVar20;
  uint *puVar21;
  longlong *plVar22;
  undefined8 uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  code **local_2d0;
  code *local_2c8;
  code *local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_200;
  longlong lStack_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128 [2];
  longlong *local_118;
  int local_100;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  plVar16 = (longlong *)FUN_144a545f2(*(undefined8 *)*param_1,*(undefined8 *)param_1[1],param_2);
  if ((plVar16 != (longlong *)0x0) &&
     (cVar14 = (**(code **)(*plVar16 + 0x4c8))(plVar16,*(undefined8 *)param_1[1]), cVar14 != '\0'))
  {
    local_308 = CONCAT31(local_308._1_3_,*(undefined1 *)param_1[5]);
    plVar17 = (longlong *)
              FUN_140584045(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                            *(undefined8 *)*param_1,*(undefined1 *)param_1[4]);
    if (plVar17 != (longlong *)0x0) {
      if ((*(byte *)((longlong)plVar17 + 0x9c) & 1) == 0) {
        FUN_140486fc4(plVar17,plVar16,*(undefined8 *)param_1[1]);
      }
      else {
        (**(code **)(*plVar17 + 0x490))(plVar17,plVar16,&DAT_14cadad98);
      }
      if (*(int *)param_1[6] == 1) {
        (**(code **)(*plVar16 + 0x4a8))(plVar16,local_128,*(undefined8 *)param_1[1],0);
        puVar4 = (undefined4 *)param_1[9];
        puVar5 = (undefined8 *)param_1[8];
        auVar3 = *(undefined1 (*) [16])param_1[7];
        dVar2 = *(double *)((undefined1 (*) [16])param_1[7])[1];
        auVar28 = divpd(auVar3,_DAT_1499387d0);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = dVar2;
        auVar29 = divpd(auVar29,_DAT_1499387d0);
        auVar28 = roundpd(auVar28,auVar28,3);
        auVar29 = roundpd(auVar29,auVar29,3);
        dVar12 = (auVar3._0_8_ - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar13 = (auVar3._8_8_ - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar10 = (dVar2 - auVar29._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar11 = (0.0 - auVar29._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar2 = sin(dVar12);
        dVar8 = sin(dVar13);
        dVar9 = sin(dVar10);
        sin(dVar11);
        dVar12 = cos(dVar12);
        dVar13 = cos(dVar13);
        dVar10 = cos(dVar10);
        cos(dVar11);
        dVar11 = dVar8 * dVar2 * dVar9 + dVar13 * dVar12 * dVar10;
        local_188 = dVar2 * dVar8 * dVar10 - dVar12 * dVar13 * dVar9;
        dStack_180 = -(dVar2 * dVar13 * dVar10) - dVar12 * dVar8 * dVar9;
        local_178._8_4_ = SUB84(dVar11,0);
        local_178._0_8_ = -(dVar13 * dVar2 * dVar9) + dVar8 * dVar12 * dVar10;
        local_178._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_168 = *puVar5;
        uStack_160 = puVar5[1];
        local_158 = puVar5[2];
        uStack_150 = 0;
        local_148 = *puVar4;
        uStack_144 = puVar4[1];
        uStack_140 = puVar4[2];
        uStack_13c = puVar4[3];
        local_138 = *(undefined8 *)(puVar4 + 4);
        uStack_130 = 0;
        FUN_1449437a2(&local_188,&local_1e8,local_128);
        uVar6 = plVar17[7];
        if (uVar6 < 0xffffffff00000000) {
          plVar22 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar22 = (longlong *)0x0;
          }
          (**(code **)(*plVar22 + 0x58))(plVar22,plVar17,uVar6,5);
        }
        else {
          uVar26 = (uint)uVar6;
          if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c998088)) {
            puVar20 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar20 = DAT_14c998080;
            }
            if ((*(uint *)(puVar20 + ((uint)(uVar6 >> 3) & 0xffffffc)) >> (uVar26 & 0x1f) & 1) != 0)
            {
              lVar18 = DAT_14c998060 + (ulonglong)(uVar26 & 0x7fffffff) * 0x68;
              puVar21 = *(uint **)(lVar18 + 0x18);
              if (*(uint **)(lVar18 + 0x18) == (uint *)0x0) {
                puVar21 = (uint *)(lVar18 + 8);
              }
              *puVar21 = *puVar21 | 0x20;
              *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
            }
          }
        }
        plVar17[0x33] = local_1c8;
        plVar17[0x34] = lStack_1c0;
        plVar17[0x35] = local_1b8;
        local_228 = local_1e8;
        uStack_224 = uStack_1e4;
        uStack_220 = uStack_1e0;
        uStack_21c = uStack_1dc;
        local_218 = local_1d8;
        uStack_210 = uStack_1d0;
        FUN_1448052ee(&local_228,&local_200);
        uVar6 = plVar17[7];
        if (uVar6 < 0xffffffff00000000) {
          plVar22 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar22 = (longlong *)0x0;
          }
          (**(code **)(*plVar22 + 0x58))(plVar22,plVar17,uVar6,6);
        }
        else {
          uVar26 = (uint)uVar6;
          if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c998088)) {
            puVar20 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar20 = DAT_14c998080;
            }
            if ((*(uint *)(puVar20 + ((uint)(uVar6 >> 3) & 0xffffffc)) >> (uVar26 & 0x1f) & 1) != 0)
            {
              lVar18 = DAT_14c998060 + (ulonglong)(uVar26 & 0x7fffffff) * 0x68;
              puVar21 = *(uint **)(lVar18 + 0x18);
              if (*(uint **)(lVar18 + 0x18) == (uint *)0x0) {
                puVar21 = (uint *)(lVar18 + 8);
              }
              *puVar21 = *puVar21 | 0x40;
              *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
            }
          }
        }
        plVar17[0x38] = local_1f0;
        plVar17[0x36] = local_200;
        plVar17[0x37] = lStack_1f8;
        local_248 = local_1a8;
        uStack_240 = uStack_1a0;
        local_238 = local_198;
      }
      else {
        puVar4 = (undefined4 *)param_1[8];
        local_258 = *(longlong *)(puVar4 + 4);
        local_268 = *puVar4;
        uStack_264 = puVar4[1];
        uStack_260 = puVar4[2];
        uStack_25c = puVar4[3];
        uVar6 = plVar17[7];
        if (uVar6 < 0xffffffff00000000) {
          plVar22 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar22 = (longlong *)0x0;
          }
          (**(code **)(*plVar22 + 0x58))(local_268,plVar17,uVar6,5);
        }
        else {
          uVar26 = (uint)uVar6;
          if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c998088)) {
            puVar20 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar20 = DAT_14c998080;
            }
            if ((*(uint *)(puVar20 + ((uint)(uVar6 >> 3) & 0xffffffc)) >> (uVar26 & 0x1f) & 1) != 0)
            {
              lVar18 = DAT_14c998060 + (ulonglong)(uVar26 & 0x7fffffff) * 0x68;
              puVar21 = *(uint **)(lVar18 + 0x18);
              if (*(uint **)(lVar18 + 0x18) == (uint *)0x0) {
                puVar21 = (uint *)(lVar18 + 8);
              }
              *puVar21 = *puVar21 | 0x20;
              *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
            }
          }
        }
        plVar17[0x35] = local_258;
        plVar17[0x33] = CONCAT44(uStack_264,local_268);
        plVar17[0x34] = CONCAT44(uStack_25c,uStack_260);
        puVar4 = (undefined4 *)param_1[7];
        local_278 = *(longlong *)(puVar4 + 4);
        local_288 = *puVar4;
        uStack_284 = puVar4[1];
        uStack_280 = puVar4[2];
        uStack_27c = puVar4[3];
        uVar6 = plVar17[7];
        if (uVar6 < 0xffffffff00000000) {
          plVar22 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar22 = (longlong *)0x0;
          }
          (**(code **)(*plVar22 + 0x58))(local_288,plVar17,uVar6,6);
        }
        else {
          uVar26 = (uint)uVar6;
          if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c998088)) {
            puVar20 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar20 = DAT_14c998080;
            }
            if ((*(uint *)(puVar20 + ((uint)(uVar6 >> 3) & 0xffffffc)) >> (uVar26 & 0x1f) & 1) != 0)
            {
              lVar18 = DAT_14c998060 + (ulonglong)(uVar26 & 0x7fffffff) * 0x68;
              puVar21 = *(uint **)(lVar18 + 0x18);
              if (*(uint **)(lVar18 + 0x18) == (uint *)0x0) {
                puVar21 = (uint *)(lVar18 + 8);
              }
              *puVar21 = *puVar21 | 0x40;
              *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
            }
          }
        }
        plVar17[0x38] = local_278;
        *(undefined4 *)(plVar17 + 0x36) = local_288;
        *(undefined4 *)((longlong)plVar17 + 0x1b4) = uStack_284;
        *(undefined4 *)(plVar17 + 0x37) = uStack_280;
        *(undefined4 *)((longlong)plVar17 + 0x1bc) = uStack_27c;
        if (*(int *)param_1[6] == 2) {
          (**(code **)(*plVar16 + 0x4a8))(plVar16,local_128,*(undefined8 *)param_1[1],0);
          pdVar7 = (double *)param_1[9];
          local_290 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8)) &
                              (ulonglong)(1.0 / local_d8)) * pdVar7[2];
          local_298 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_e0)) &
                              (ulonglong)(1.0 / dStack_e0)) * pdVar7[1];
          local_2a0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8)) &
                              (ulonglong)(1.0 / local_e8)) * *pdVar7;
        }
        else {
          puVar4 = (undefined4 *)param_1[9];
          local_2a8 = *(undefined8 *)(puVar4 + 4);
          local_2b8 = *puVar4;
          uStack_2b4 = puVar4[1];
          uStack_2b0 = puVar4[2];
          uStack_2ac = puVar4[3];
        }
      }
      FUN_14084f00a(plVar17);
      if (DAT_14cac6e60 == 0) {
        local_2d0 = local_128;
        local_128[0] = FUN_144a7958c;
        local_2c0 = FUN_14081d0ea;
        local_2c8 = FUN_142b47bc4;
        local_2d8 = &LAB_1478989f1;
        local_2e0 = &LAB_146391124;
        local_2e8 = L"Engine";
        local_2f0 = 0x10000000000;
        local_2f8 = 0x10000005;
        local_300 = 0x10;
        local_308 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        FUN_140357fa8(plVar17,(int)plVar16[0xb9],0);
        uVar23 = *(undefined8 *)*param_1;
        FUN_140e996a4(plVar17,uVar23);
        FUN_140c0573e(plVar17,CONCAT71((int7)((ulonglong)uVar23 >> 8),
                                       *(undefined1 *)((longlong)plVar16 + 0x2e4)) &
                              0xffffffffffffff01);
        bVar15 = *(byte *)((longlong)plVar16 + 0x2d5);
        if ((bVar15 & 4) != 0) {
          FUN_140c056bc(plVar17,1);
          bVar15 = *(byte *)((longlong)plVar16 + 0x2d5);
        }
        if ((bVar15 & 2) != 0) {
          FUN_140c0563c(plVar17,1);
        }
      }
      if (*(int *)(param_1[10] + 8) != 0) {
        local_128[0] = (code *)((ulonglong)local_128[0] & 0xffffffffffffff00);
        local_100 = 0;
        FUN_1456bb102(local_128,*(undefined8 *)*param_1);
        local_188 = *(double *)param_1[10];
        dStack_180 = (double)CONCAT44(dStack_180._4_4_,*(undefined4 *)((double *)param_1[10] + 1));
        FUN_140e99737(plVar17,&local_188,local_128);
        lVar18 = DAT_14c9a3da0;
        if ((longlong)local_100 != 0) {
          lVar25 = (longlong)local_100 + -1;
          lVar27 = lVar25 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar27),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar27));
          if (*(longlong *)(lVar18 + lVar27) != 0) {
            FUN_1400020a8();
          }
          lVar18 = DAT_14c9a3da0;
          iVar24 = (int)lVar25;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar24;
          }
          *(undefined4 *)(lVar18 + lVar27) = 0xffffffff;
          iVar19 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar19 = DAT_14c9a3dd0;
          }
          *(int *)(lVar18 + 4 + lVar27) = iVar19;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar20 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar20 = DAT_14c9a3dc0;
          }
          iVar19 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar19 = iVar24;
          }
          bVar15 = (byte)lVar25 & 0x1f;
          DAT_14c9a3dd0 = iVar24;
          *(uint *)(puVar20 + (longlong)(iVar19 >> 5) * 4) =
               *(uint *)(puVar20 + (longlong)(iVar19 >> 5) * 4) &
               (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
          local_100 = 0;
        }
        if (((char)local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
      }
      FUN_140b506dc(plVar17,*(undefined8 *)param_1[3],0);
      if (*(char *)param_1[0xb] == '\x01') {
        (**(code **)(*plVar17 + 0xa60))(plVar17,1);
      }
      plVar16 = (longlong *)FUN_140083894();
      (**(code **)(*plVar16 + 0x70))(plVar16,plVar17);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d52654 FUN_143d52654 body=248 status=ok
// SIG undefined FUN_143d52654(void)

void FUN_143d52654(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x180))(), lVar1 != 0)) {
    uVar2 = FUN_14001cc68(0xb0,0x10);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = *(longlong *)(param_2 + 4);
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_68 = param_5;
    FUN_143d86570(uVar2,&local_58,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5276b FUN_143d5276b body=49 status=ok
// SIG undefined FUN_143d5276b(void)

void FUN_143d5276b(void)

{
  FUN_144760e21(DAT_14cb7df38,DAT_14cb7df40);
  if (DAT_14cb7df38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d5279c FUN_143d5279c body=49 status=ok
// SIG undefined FUN_143d5279c(void)

void FUN_143d5279c(void)

{
  FUN_144760e21(DAT_14cb7dc60,DAT_14cb7dc68);
  if (DAT_14cb7dc60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d527ce FUN_143d527ce body=95 status=ok
// SIG undefined FUN_143d527ce(void)

void FUN_143d527ce(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_145ae2272();
  iVar1 = FUN_14487fd02(param_1);
  lVar2 = FUN_14034eff0(param_1);
  if ((lVar2 != 0) && ((bool)*(char *)(lVar2 + 0x360) != iVar1 < 3)) {
    *(bool *)(lVar2 + 0x360) = iVar1 < 3;
    FUN_1488653fa(lVar2 + 0x368,lVar2,iVar1 < 3);
    return;
  }
  return;
}



// FUNCTION 143d52830 FUN_143d52830 body=277 status=ok
// SIG undefined FUN_143d52830(void)

void FUN_143d52830(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = *(ushort *)(param_2 + 0x84);
    iVar4 = (int)(short)uVar2;
    plVar1 = (longlong *)(param_1 + 0x460);
    if ((short)uVar2 < 0) {
      lVar6 = *(longlong *)(param_1 + 0x460);
      iVar4 = *(int *)(param_1 + 0x468);
      uVar7 = (ulonglong)iVar4;
      if (uVar7 != 0) {
        lVar5 = uVar7 * 8;
        uVar3 = 0;
        do {
          if (*(longlong *)(lVar6 + uVar3 * 8) == 0) {
            if ((short)uVar3 != -1) {
              uVar7 = uVar3 & 0xffffffff;
              goto LAB_143d528db;
            }
            break;
          }
          uVar3 = uVar3 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      *(uint *)(param_1 + 0x468) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x46c) < iVar4 + 1U) {
        FUN_148868cba(plVar1,iVar4);
        lVar6 = *plVar1;
      }
      *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
      lVar6 = *plVar1;
LAB_143d528db:
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong **)(lVar6 + (longlong)(short)uVar7 * 8) = param_2;
      *(short *)(param_2 + 0x84) = (short)uVar7;
                    /* WARNING: Could not recover jumptable at 0x000143d52902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x650))(param_2);
      return;
    }
    if (iVar4 < *(int *)(param_1 + 0x468)) {
      lVar6 = *plVar1;
      if (*(longlong *)(lVar6 + (ulonglong)uVar2 * 8) != 0) {
        return;
      }
    }
    else {
      FUN_148861300(plVar1,iVar4 + 1);
      lVar6 = *plVar1;
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong **)(lVar6 + (longlong)iVar4 * 8) = param_2;
  }
  return;
}



// FUNCTION 143d52946 FUN_143d52946 body=152 status=ok
// SIG undefined FUN_143d52946(void)

void FUN_143d52946(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (0 < (longlong)*(int *)(param_1 + 0x468)) {
    uVar3 = (longlong)*(int *)(param_1 + 0x468) + 1;
    bVar2 = DAT_14c950c29;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x460) + -0x10 + uVar3 * 8);
      if (((bVar2 & 1) != 0) && (plVar1 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar1);
        bVar2 = DAT_14c950c29;
      }
      if (plVar1 == param_2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x460) + -0x10 + uVar3 * 8) = 0;
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  *(undefined2 *)(param_2 + 0x84) = 0xffff;
                    /* WARNING: Could not recover jumptable at 0x000143d529cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x650))(param_2);
  return;
}



// FUNCTION 143d529de FUN_143d529de body=165 status=ok
// SIG undefined FUN_143d529de(void)

void FUN_143d529de(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    if (0 < (longlong)*(int *)(param_1 + 0x478)) {
      uVar2 = (longlong)*(int *)(param_1 + 0x478) + 1;
      do {
        local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x470) + -0x10 + uVar2 * 8);
        cVar1 = FUN_14654f03a(&local_30,param_2);
        if (cVar1 != '\0') {
          *(undefined8 *)(*(longlong *)(param_1 + 0x470) + -0x10 + uVar2 * 8) = 0;
        }
        uVar2 = uVar2 - 1;
      } while (1 < uVar2);
    }
    *(undefined2 *)(param_2 + 0xa7) = 0xffff;
    (**(code **)(*param_2 + 0x7d8))(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d52a84 FUN_143d52a84 body=138 status=ok
// SIG undefined FUN_143d52a84(void)

void FUN_143d52a84(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1434fa99a();
  lVar1 = (**(code **)(*param_1 + 0x150))(param_1);
  if (lVar1 != 0) {
    FUN_143745b78(lVar1,0,0,0,0);
    if (param_2 != (longlong *)0x0) {
      uVar2 = (**(code **)(param_1[-5] + 0x180))(param_1 + -5);
      uVar3 = (**(code **)(*param_1 + 0x150))(param_1);
      uVar4 = (**(code **)(*param_2 + 0x160))(param_2);
      FUN_14350346e(uVar4,uVar3,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143d52b0e FUN_143d52b0e body=375 status=ok
// SIG undefined FUN_143d52b0e(void)

void FUN_143d52b0e(longlong param_1,longlong param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x98);
    puVar2 = puVar3 + (longlong)*(int *)(param_1 + 0xa0) * 5;
    do {
      local_70 = *puVar3;
      local_68 = (undefined4)puVar3[1];
      uStack_64 = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_60 = *(undefined4 *)(puVar3 + 2);
      uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x14);
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar3 + 4);
      lVar4 = (longlong)local_50;
      pvVar1 = (void *)puVar3[3];
      if (lVar4 == 0) {
        local_4c = 0;
        local_80 = 0;
        local_98 = puVar3[1];
        uStack_90 = puVar3[2];
LAB_143d52c18:
        local_88 = (void *)0x0;
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar4 * 2);
        pvVar1 = local_58;
        lVar4 = (longlong)local_50;
        local_98 = CONCAT44(uStack_64,local_68);
        uStack_90 = CONCAT44(uStack_5c,uStack_60);
        local_88 = (void *)0x0;
        local_80 = local_50;
        if (lVar4 == 0) goto LAB_143d52c18;
        FUN_1446dd670(&local_88,local_50,0);
        memcpy(local_88,pvVar1,lVar4 * 2);
      }
      if (local_98 != 0) {
        FUN_144a6c37a(param_2 + 0x18,&local_98);
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d52c86 FUN_143d52c86 body=47 status=ok
// SIG undefined FUN_143d52c86(void)

void FUN_143d52c86(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8c0);
                    /* WARNING: Could not recover jumptable at 0x000143d52cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 143d52cb6 FUN_143d52cb6 body=321 status=ok
// SIG undefined FUN_143d52cb6(void)

void FUN_143d52cb6(longlong param_1,ulonglong param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_142b39a90();
  lVar2 = FUN_14103c0a0(uVar1);
  lVar3 = FUN_148861ac8(param_1);
  if ((lVar3 != 0 && lVar2 != 0) && ((longlong)*(int *)(lVar3 + 0xa0) != 0)) {
    puVar4 = *(undefined8 **)(lVar3 + 0x98);
    puVar5 = puVar4 + (longlong)*(int *)(lVar3 + 0xa0) * 5;
    do {
      local_70 = *puVar4;
      local_68 = *(undefined4 *)(puVar4 + 1);
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_60 = *(undefined4 *)(puVar4 + 2);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0x14);
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar4 + 4);
      lVar3 = (longlong)local_50;
      _Src = (void *)puVar4[3];
      if (lVar3 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar3 * 2);
      }
      lVar3 = FUN_1411acd1a(&local_70);
      if (lVar3 != 0) {
        local_78 = 0;
        FUN_1411ac4f8(lVar2,lVar3,
                      CONCAT71((int7)((param_2 & 0xffffffff) >> 8),
                               (char)(param_2 & 0xffffffff) * '\x02'),
                      *(undefined8 *)(param_1 + 0x18));
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d52df8 FUN_143d52df8 body=47 status=ok
// SIG undefined FUN_143d52df8(void)

void FUN_143d52df8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8b0);
                    /* WARNING: Could not recover jumptable at 0x000143d52e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 143d52e28 FUN_143d52e28 body=293 status=ok
// SIG undefined FUN_143d52e28(void)

void FUN_143d52e28(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = FUN_148861f62();
  uVar2 = FUN_142b39a90(param_1);
  plVar3 = (longlong *)FUN_1406f625c(uVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
    if ((lVar4 != 0 && lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0xa0) != 0)) {
      lVar5 = *(longlong *)(lVar1 + 0x98);
      lVar1 = (longlong)*(int *)(lVar1 + 0xa0) * 0x70;
      do {
        memset(local_d8,0,0xa0);
        FUN_140bc495f(lVar5,lVar4,local_d8,0);
        if (local_78 != 0) {
          plVar3 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar3 = local_58;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_b8 != 0) {
          plVar3 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar3 = local_98;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        lVar5 = lVar5 + 0x70;
        lVar1 = lVar1 + -0x70;
      } while (lVar1 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d52f4e FUN_143d52f4e body=192 status=ok
// SIG undefined FUN_143d52f4e(void)

void FUN_143d52f4e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_148861f62();
  uVar2 = FUN_142b39a90(param_1);
  plVar3 = (longlong *)FUN_1406f625c(uVar2);
  if ((plVar3 != (longlong *)0x0 && lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0xa0) != 0)) {
    lVar5 = *(longlong *)(lVar1 + 0x98);
    lVar1 = (longlong)*(int *)(lVar1 + 0xa0) * 0x70;
    do {
      local_58 = 0;
      uStack_50 = 0;
      lVar4 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      if (lVar4 != 0) {
        FUN_140bc53f1(lVar5,&local_58,lVar4,0);
      }
      lVar5 = lVar5 + 0x70;
      lVar1 = lVar1 + -0x70;
    } while (lVar1 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d53048 FUN_143d53048 body=41 status=ok
// SIG undefined FUN_143d53048(void)

void FUN_143d53048(void)

{
  DAT_14cb7dce8 = 0;
  if (DAT_14cb7dce0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65f8e();
  return;
}



// FUNCTION 143d53076 FUN_143d53076 body=64 status=ok
// SIG undefined FUN_143d53076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d53076(void)

{
  if (DAT_14cb7dde0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb7ddd8 = 0;
  if (DAT_14cb7ddd0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb7dd90);
  return;
}



// FUNCTION 143d530b6 FUN_143d530b6 body=253 status=ok
// SIG undefined FUN_143d530b6(void)

void FUN_143d530b6(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((char)param_1[0x13] == '\x01') && ((char)param_1[0x20] == '\0')) {
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 != 0) {
      param_1[0x1f] = *(longlong *)(lVar1 + 0x6d0);
      *(undefined1 *)(param_1 + 0x20) = 1;
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x458);
      }
      else {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      FUN_147d74288(*puVar2,param_1[0x1a]);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x458);
      }
      else {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      FUN_147d74288(*puVar2,param_1[0x1b]);
      uVar3 = FUN_14477b072(param_1,DAT_14cb5ea10);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
      lVar1 = FUN_148863544(param_1);
      if (lVar1 != 0) {
        FUN_148862fea(lVar1,param_1[5] + 8,(int)(double)param_1[0x1f]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d531b4 FUN_143d531b4 body=268 status=ok
// SIG undefined FUN_143d531b4(void)

void FUN_143d531b4(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((char)param_1[0x13] == '\x01') && ((char)param_1[0x20] == '\x01')) {
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 != 0) {
      param_1[0x1e] =
           (longlong)((*(double *)(lVar1 + 0x6d0) - (double)param_1[0x1f]) + (double)param_1[0x1e]);
      *(undefined1 *)(param_1 + 0x20) = 0;
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x458);
      }
      else {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      FUN_147d7457e(*puVar2,param_1[0x1a]);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x458);
      }
      else {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      FUN_147d7457e(*puVar2,param_1[0x1b]);
      uVar3 = FUN_14477b072(param_1,DAT_14cb5ea30);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
      lVar1 = FUN_148863544(param_1);
      if (lVar1 != 0) {
        FUN_148863050(lVar1,param_1[5] + 8,param_1[0x1e]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d532c0 FUN_143d532c0 body=783 status=ok
// SIG undefined FUN_143d532c0(void)

void FUN_143d532c0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
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
  FUN_148863780();
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if ((lVar3 == 0) || (iVar1 = *(int *)((longlong)param_1 + 0xe4), iVar1 < 1)) goto LAB_143d53327;
  param_1[0x1d] = *(longlong *)(lVar3 + 0x6d0);
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar3 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
  }
  uVar4 = *puVar5;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar5 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_c0[2] = lVar6;
  *local_c0 = &PTR_FUN_14b403e30;
  local_c0[3] = 0;
  iVar7 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_c0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar7 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar3 + 0x10);
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(lVar3 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar7;
  puVar5[4] = FUN_143d535d0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar4,param_1 + 0x1a,&local_a8,(float)iVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  if (local_b8 == 0) {
LAB_143d534e9:
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c0 != (undefined8 *)0x0) {
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_143d534e9;
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cb5ea20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,0);
  FUN_143d536f4(param_1);
  lVar3 = FUN_148863544(param_1);
  if (lVar3 != 0) {
    FUN_148862c76(lVar3,param_1[5] + 8,*(undefined4 *)((longlong)param_1 + 0xe4),param_1[0x1d]);
  }
LAB_143d53327:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d535d0 FUN_143d535d0 body=292 status=ok
// SIG undefined FUN_143d535d0(void)

void FUN_143d535d0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_14886374a();
  uVar3 = FUN_14477b072(param_1,DAT_14cb5e9f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
  lVar4 = FUN_148863692(param_1);
  lVar5 = FUN_1488623ca(param_1);
  if (lVar5 != 0 && lVar4 != 0) {
    if (*(char *)(lVar4 + 0xb0) == '\x01') {
      FUN_143d51352(lVar5,param_1,0);
    }
    lVar7 = *(longlong *)(lVar4 + 0xc0);
    if (lVar7 == 0) {
      uVar3 = FUN_145c5eda6();
      lVar7 = FUN_14477b664(uVar3);
      *(longlong *)(lVar4 + 0xc0) = lVar7;
    }
    lVar6 = *(longlong *)(lVar4 + 200);
    if (lVar6 != 0) {
LAB_143d5365c:
      FUN_140115d46(lVar5,lVar6);
      return;
    }
    if ((lVar7 != 0) && (*(longlong *)(lVar4 + 0xb8) != 0)) {
      plVar1 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar3,(longlong *)(lVar4 + 0xb8));
        *(longlong *)(lVar4 + 200) = lVar6;
        if (lVar6 == 0) {
          return;
        }
        goto LAB_143d5365c;
      }
      *(undefined8 *)(lVar4 + 200) = 0;
    }
  }
  return;
}



// FUNCTION 143d536f4 FUN_143d536f4 body=758 status=ok
// SIG undefined FUN_143d536f4(void)

void FUN_143d536f4(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
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
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 != 0) {
    iVar7 = (int)param_1[0x1c];
    if ((-1 < (longlong)iVar7) && (iVar7 < (int)param_1[0x22])) {
      dVar3 = (((double)param_1[0x1d] + (double)param_1[0x1e]) - *(double *)(lVar4 + 0x6d0)) +
              (double)*(int *)(param_1[0x21] + 8 + (longlong)iVar7 * 0xc);
      if ((dVar3 < 0.0) || (ABS(dVar3) <= 1e-08)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
      }
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar5 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_c0[2] = lVar6;
      *local_c0 = &PTR_FUN_14b403e30;
      local_c0[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_c0 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar7 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar7 = *(int *)(lVar4 + 0x10);
          bVar9 = iVar7 == 0;
          if (bVar9) {
            *(int *)(lVar4 + 0x10) = iVar8;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar7 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar7;
      puVar5[4] = &DAT_148863e54;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 0;
      local_ac = 0xbf800000;
      FUN_1406f4044(uVar2,param_1 + 0x1b,&local_a8,(float)dVar3);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      if (local_b8 != 0) {
        if (local_c0 == (undefined8 *)0x0) goto LAB_143d5392f;
        (**(code **)*local_c0)(local_c0,0);
        FUN_1446efa72(&local_c0,0,0,0x10);
        local_b8 = 0;
      }
      if (local_c0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143d5392f:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d53a54 FUN_143d53a54 body=1166 status=ok
// SIG undefined FUN_143d53a54(void)

void FUN_143d53a54(undefined8 ***param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 ***_Src;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined8 local_a8;
  undefined8 ***pppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  byte local_80;
  undefined8 **local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == (longlong *)0x0) goto LAB_143d53e50;
  uVar5 = FUN_140566488();
  plVar6 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_143d53e50;
  uVar5 = FUN_140566488();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if ((plVar7 == (longlong *)0x0 || plVar6 == plVar7) ||
     (lVar8 = (**(code **)(*plVar7 + 0x18))(plVar7), lVar8 == 0)) goto LAB_143d53e50;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  pppuStack_a0 = (undefined8 ***)0x0;
  local_88 = 0;
  FUN_1400bbfc4(&local_c8,lVar8);
  pppuStack_a0 = local_c8;
  if (uStack_90 != 0) {
    FUN_1400020a8();
  }
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_88 = (ulonglong)uStack_b0;
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  uVar1 = *(uint *)(lVar8 + 0xc);
  if (cVar3 == '\0') {
LAB_143d53b7e:
    local_a8 = CONCAT44(local_a8._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar15 = iVar4 == 0;
      if (bVar15) {
        *(int *)(lVar8 + 0x10) = iVar13;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar4 = iVar13;
      }
    }
  }
  else {
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_143d53b7e;
    local_a8 = 0;
    iVar4 = 0;
  }
  local_a8 = CONCAT44(iVar4,(undefined4)local_a8);
  plVar6 = (longlong *)(**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
  if (uStack_90 != 0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      uVar1 = (uint)((ulonglong)param_1 >> 0x10);
      uVar10 = (uint)param_1 & 0xffff;
      plVar9 = plVar6 + 7;
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar6[8];
      }
      iVar4 = *(int *)((longlong)plVar9 +
                      (ulonglong)
                      ((int)plVar6[9] - 1U &
                      (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar10) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar9 = (longlong *)(*plVar6 + (longlong)iVar4 * 0x48);
          if ((undefined8 ***)*plVar9 == param_1) {
            if (plVar9 != (longlong *)&DAT_fffffffffffffff8 && plVar9 != (longlong *)0x0) {
              FUN_144983130(param_2);
              goto LAB_143d53e50;
            }
            break;
          }
          iVar4 = (int)plVar9[8];
        } while (iVar4 != -1);
      }
    }
    lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
    if (lVar8 != 0) {
      local_c8 = (undefined8 ****)0x0;
      iVar4 = *(int *)(lVar8 + 0x98);
      uVar5 = *(undefined8 *)(lVar8 + 0x90);
      iStack_c0 = iVar4;
      if (iVar4 == 0) {
        uStack_bc = 0;
      }
      else {
        FUN_140b57a8a(&local_c8,iVar4,0);
        FUN_140b579f5(local_c8,uVar5,iVar4);
        if ((longlong)iStack_c0 != 0) {
          ppppuVar12 = (undefined8 ****)(local_c8 + (longlong)iStack_c0 * 0xb);
          local_d0 = &pppuStack_a0;
          ppppuVar14 = (undefined8 ****)local_c8;
          do {
            FUN_14034cca6(&local_a8,ppppuVar14);
            local_70 = ppppuVar14[7];
            local_68 = (void *)0x0;
            local_60 = *(int *)(ppppuVar14 + 9);
            lVar8 = (longlong)local_60;
            _Src = ppppuVar14[8];
            if (lVar8 == 0) {
              local_5c = 0;
            }
            else {
              FUN_1446dd670(&local_68,local_60,0);
              memcpy(local_68,_Src,lVar8 * 2);
            }
            local_58 = *(undefined1 *)(ppppuVar14 + 10);
            if ((undefined8 ***)local_70 == param_1) {
              FUN_144983130(param_2,&local_a8);
              if (local_68 != (void *)0x0) {
                FUN_1400020a8();
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < (ushort)local_88) {
                  local_d0 = pppuStack_a0;
                }
                (*pcVar2)(local_d0);
              }
              if (0x18 < (ushort)local_88) {
                FUN_1400020a8(pppuStack_a0);
              }
              break;
            }
            if (local_68 != (void *)0x0) {
              FUN_1400020a8();
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar11 = &pppuStack_a0;
              if (0x18 < (ushort)local_88) {
                ppppuVar11 = (undefined8 ****)pppuStack_a0;
              }
              (*pcVar2)(ppppuVar11);
            }
            if (0x18 < (ushort)local_88) {
              FUN_1400020a8(pppuStack_a0);
            }
            ppppuVar14 = ppppuVar14 + 0xb;
          } while (ppppuVar14 != ppppuVar12);
        }
      }
      FUN_1403d8100(local_c8,iStack_c0);
      if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143d53e50:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d53ee4 FUN_143d53ee4 body=210 status=ok
// SIG undefined FUN_143d53ee4(void)

void FUN_143d53ee4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0 && param_1 != 0) {
    uVar2 = FUN_140566488();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140566488();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x78))(plVar3,local_28,param_1);
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_20 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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



// FUNCTION 143d53fb8 FUN_143d53fb8 body=127 status=ok
// SIG undefined FUN_143d53fb8(void)

void FUN_143d53fb8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0 && param_1 != 0) {
    uVar1 = FUN_140566488();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140566488();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          FUN_14886d114(lVar4,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d54038 FUN_143d54038 body=4 status=ok
// SIG undefined FUN_143d54038(void)

void FUN_143d54038(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x60) = param_2;
  return;
}



// FUNCTION 143d54090 FUN_143d54090 body=29 status=ok
// SIG undefined FUN_143d54090(void)

undefined8 FUN_143d54090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d540b6 FUN_143d540b6 body=140 status=ok
// SIG undefined FUN_143d540b6(void)

void FUN_143d540b6(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 143d54142 FUN_143d54142 body=29 status=ok
// SIG undefined FUN_143d54142(void)

undefined8 FUN_143d54142(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d542de FUN_143d542de body=116 status=ok
// SIG undefined FUN_143d542de(void)

void FUN_143d542de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4031f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d54352 FUN_143d54352 body=116 status=ok
// SIG undefined FUN_143d54352(void)

void FUN_143d54352(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4031f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d543c6 FUN_143d543c6 body=149 status=ok
// SIG undefined FUN_143d543c6(void)

void FUN_143d543c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4031f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d5444c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d5445c FUN_143d5445c body=134 status=ok
// SIG undefined FUN_143d5445c(void)

void FUN_143d5445c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 0x28),1);
        if (lVar2 != 0) {
          FUN_1464beba5((uint *)(param_1 + 0x20));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d544e2 FUN_143d544e2 body=386 status=ok
// SIG undefined FUN_143d544e2(void)

undefined8 FUN_143d544e2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d5465e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d5465e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_143d5465e:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d54608;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x20);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 != (longlong *)0x0) &&
             ((((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) {
            lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 0x28),1);
            if (lVar8 != 0) {
              FUN_1464beba5((uint *)(param_1 + 0x20));
            }
          }
        }
      }
      goto LAB_143d54608;
    }
  }
  uVar6 = 0;
LAB_143d54608:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d54666 FUN_143d54666 body=29 status=ok
// SIG undefined FUN_143d54666(void)

undefined8 FUN_143d54666(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d54802 FUN_143d54802 body=116 status=ok
// SIG undefined FUN_143d54802(void)

void FUN_143d54802(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b404040;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d54876 FUN_143d54876 body=116 status=ok
// SIG undefined FUN_143d54876(void)

void FUN_143d54876(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b404040;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d548ea FUN_143d548ea body=149 status=ok
// SIG undefined FUN_143d548ea(void)

void FUN_143d548ea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b404040;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d54970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d54980 FUN_143d54980 body=142 status=ok
// SIG undefined FUN_143d54980(void)

void FUN_143d54980(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 0x28),1);
        if (lVar2 != 0) {
          FUN_1486470a9((uint *)(param_1 + 0x20),param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d54a0e FUN_143d54a0e body=394 status=ok
// SIG undefined FUN_143d54a0e(void)

undefined8 FUN_143d54a0e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d54b92;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d54b92;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_143d54b92:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d54b39;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x20);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 != (longlong *)0x0) &&
             ((((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) {
            lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 0x28),1);
            if (lVar8 != 0) {
              FUN_1486470a9((uint *)(param_1 + 0x20),param_3);
            }
          }
        }
      }
      goto LAB_143d54b39;
    }
  }
  uVar6 = 0;
LAB_143d54b39:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d54b9a FUN_143d54b9a body=165 status=ok
// SIG undefined FUN_143d54b9a(void)

void FUN_143d54b9a(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 && (*(longlong *)(param_1 + 4) != 0)))) {
      FUN_14029f20a(*(longlong *)(param_1 + 4),local_38);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
      FUN_1405e45ca(uVar2,local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d54c40 FUN_143d54c40 body=87 status=ok
// SIG undefined FUN_143d54c40(void)

undefined8 * FUN_143d54c40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b4032d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}



// FUNCTION 143d54c9e FUN_143d54c9e body=29 status=ok
// SIG undefined FUN_143d54c9e(void)

void FUN_143d54c9e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d54cbc FUN_143d54cbc body=83 status=ok
// SIG undefined FUN_143d54cbc(void)

undefined8 * FUN_143d54cbc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4032d0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d54d10 FUN_143d54d10 body=251 status=ok
// SIG undefined FUN_143d54d10(void)

void FUN_143d54d10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *plVar9;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  FUN_140b4bb10();
  if (DAT_14cb7d7d0 != DAT_14cb7d7fc) {
    puVar8 = &DAT_14cb7d800;
    if (DAT_14cb7d808 != (undefined *)0x0) {
      puVar8 = DAT_14cb7d808;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)(DAT_14cb7d810 - 1U & (uint)*(byte *)(puVar4 + 1)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb7d7c8 + (longlong)iVar2 * 0x20;
      if (*(byte *)(DAT_14cb7d7c8 + (longlong)iVar2 * 0x20) == *(byte *)(puVar4 + 1)) {
        plVar9 = (longlong *)(lVar1 + 8);
        if (plVar9 == (longlong *)0x0 || lVar1 == 0) {
          return;
        }
        puVar5 = (uint *)*plVar9;
        if (puVar5 == (uint *)0x0) {
          return;
        }
        if (puVar5[1] != 0) {
          uVar3 = *puVar5;
          plVar6 = (longlong *)0x0;
          if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143d54ddd;
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar7 != (undefined8 *)0x0) &&
             ((*(uint *)(puVar7 + 2) == puVar5[1] && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0))))
          {
            plVar6 = (longlong *)*puVar7;
            goto LAB_143d54ddd;
          }
        }
        plVar6 = (longlong *)0x0;
LAB_143d54ddd:
        (**(code **)(*plVar6 + 0x2f0))(plVar6,puVar4,1);
        lVar1 = *plVar9;
        *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + -1;
        *puVar4 = *(undefined8 *)(lVar1 + 0x10);
        *(undefined8 **)(lVar1 + 0x10) = puVar4;
        return;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  return;
}



// FUNCTION 143d54e0c FUN_143d54e0c body=29 status=ok
// SIG undefined FUN_143d54e0c(void)

undefined8 FUN_143d54e0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d54eca FUN_143d54eca body=31 status=ok
// SIG undefined FUN_143d54eca(void)

undefined8 FUN_143d54eca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d54f38 FUN_143d54f38 body=524 status=ok
// SIG undefined FUN_143d54f38(void)

void FUN_143d54f38(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = *param_1;
  lVar3 = param_2[5];
  if (*(char *)(lVar3 + 0x48) != '\x02') goto LAB_143d550e2;
  if ((char)param_2[0x13] == '\0') {
    plVar4 = (longlong *)param_2[6];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar9 = *(longlong *)(lVar3 + 0x58);
    if (lVar9 == 0) {
      uVar7 = FUN_145c5eda6();
      lVar9 = FUN_14477b664(uVar7);
      *(longlong *)(lVar3 + 0x58) = lVar9;
    }
    lVar8 = *(longlong *)(lVar3 + 0x60);
    if (((lVar8 == 0) && (lVar8 = 0, lVar9 != 0)) && (*(longlong *)(lVar3 + 0x50) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if (plVar5 == (longlong *)0x0) {
LAB_143d55134:
        lVar8 = 0;
      }
      else {
        cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar6 == '\0') goto LAB_143d55134;
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar3 + 0x50));
      }
      *(longlong *)(lVar3 + 0x60) = lVar8;
    }
    lVar3 = *(longlong *)(lVar2 + 0x678);
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
    if (lVar8 != lVar3) goto LAB_143d55015;
    uVar7 = 1;
  }
  else {
LAB_143d55015:
    if ((char)param_2[0x13] != '\x01') goto LAB_143d550e2;
    lVar3 = param_2[5];
    plVar4 = (longlong *)param_2[6];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar9 = *(longlong *)(lVar3 + 0x70);
    if (lVar9 == 0) {
      uVar7 = FUN_145c5eda6();
      lVar9 = FUN_14477b664(uVar7);
      *(longlong *)(lVar3 + 0x70) = lVar9;
    }
    lVar8 = *(longlong *)(lVar3 + 0x78);
    if (((lVar8 == 0) && (lVar8 = 0, lVar9 != 0)) && (*(longlong *)(lVar3 + 0x68) != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if (plVar5 == (longlong *)0x0) {
LAB_143d5513c:
        lVar8 = 0;
      }
      else {
        cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar6 == '\0') goto LAB_143d5513c;
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar3 + 0x68));
      }
      *(longlong *)(lVar3 + 0x78) = lVar8;
    }
    lVar3 = *(longlong *)(lVar2 + 0x678);
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
    if (lVar8 != lVar3) goto LAB_143d550e2;
    uVar7 = 0;
  }
  FUN_143d51352(lVar2,param_2,uVar7);
LAB_143d550e2:
                    /* WARNING: Could not recover jumptable at 0x000143d55103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2a8))(param_2,*(undefined8 *)(lVar2 + 0x678));
  return;
}



// FUNCTION 143d5517e FUN_143d5517e body=66 status=ok
// SIG undefined FUN_143d5517e(void)

void FUN_143d5517e(undefined8 *param_1,longlong *param_2)

{
  if (*(char *)(param_2[5] + 0x48) == '\x01') {
    FUN_143d51352(*param_1,param_2,1);
  }
  if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000143d551b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2b0))(param_2);
    return;
  }
  return;
}



// FUNCTION 143d551c0 FUN_143d551c0 body=54 status=ok
// SIG undefined FUN_143d551c0(void)

void FUN_143d551c0(undefined8 *param_1,longlong *param_2)

{
  if (*(char *)(param_2[5] + 0x48) == '\x01') {
    FUN_143d51352(*param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000143d551e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2b8))(param_2);
    return;
  }
  return;
}



// FUNCTION 143d551f6 FUN_143d551f6 body=54 status=ok
// SIG undefined FUN_143d551f6(void)

void FUN_143d551f6(undefined8 *param_1,longlong *param_2)

{
  if (*(char *)(param_2[5] + 0x48) == '\x01') {
    FUN_143d51352(*param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000143d5521e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2c0))(param_2);
    return;
  }
  return;
}



// FUNCTION 143d55238 FUN_143d55238 body=142 status=ok
// SIG undefined FUN_143d55238(void)

void FUN_143d55238(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)*param_1 == 0) {
LAB_143d55272:
    lVar3 = *(longlong *)param_1[1];
    if (lVar3 != 0) {
      if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) {
        return;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30) {
        return;
      }
    }
    plVar2 = (longlong *)param_1[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_140612240(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  else if ((longlong)*(int *)(param_2 + 0x78) != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x70) + lVar3) == *(longlong *)*param_1)
      goto LAB_143d55272;
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_2 + 0x78) * 8 != lVar3);
  }
  return;
}



// FUNCTION 143d552c6 FUN_143d552c6 body=137 status=ok
// SIG undefined FUN_143d552c6(void)

void FUN_143d552c6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)*param_1 == 0) {
LAB_143d55300:
    iVar1 = *(int *)(*(longlong *)param_1[1] + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        *(longlong *)param_1[1] + 0x30)) {
      plVar2 = (longlong *)param_1[2];
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_140612240(plVar2,iVar1);
      }
      *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
    }
  }
  else if ((longlong)*(int *)(param_2 + 0x78) != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x70) + lVar3) == *(longlong *)*param_1)
      goto LAB_143d55300;
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_2 + 0x78) * 8 != lVar3);
  }
  return;
}



// FUNCTION 143d55350 FUN_143d55350 body=181 status=ok
// SIG undefined FUN_143d55350(void)

void FUN_143d55350(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = *param_1;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x40) == 0)) {
    param_2 = 0;
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x118);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
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
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      goto LAB_143d553a7;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_143d553a7:
  uVar5 = *param_3;
  iVar3 = *(int *)(lVar4 + 0x58);
  lVar7 = (longlong)iVar3;
  *(uint *)(lVar4 + 0x58) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x5c) < iVar3 + 1U) {
    FUN_14188664c((longlong *)(lVar4 + 0x50),iVar3);
  }
  lVar4 = *(longlong *)(lVar4 + 0x50);
  *(longlong *)(lVar4 + lVar7 * 0x18) = param_2;
  *(longlong **)(lVar4 + 8 + lVar7 * 0x18) = plVar6;
  *(undefined8 *)(lVar4 + 0x10 + lVar7 * 0x18) = uVar5;
  return;
}



// FUNCTION 143d55406 FUN_143d55406 body=181 status=ok
// SIG undefined FUN_143d55406(void)

void FUN_143d55406(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = *param_1;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x40) == 0)) {
    param_2 = 0;
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x118);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
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
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      goto LAB_143d5545d;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_143d5545d:
  uVar5 = *param_3;
  iVar3 = *(int *)(lVar4 + 0x58);
  lVar7 = (longlong)iVar3;
  *(uint *)(lVar4 + 0x58) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x5c) < iVar3 + 1U) {
    FUN_14188664c((longlong *)(lVar4 + 0x50),iVar3);
  }
  lVar4 = *(longlong *)(lVar4 + 0x50);
  *(longlong *)(lVar4 + lVar7 * 0x18) = param_2;
  *(longlong **)(lVar4 + 8 + lVar7 * 0x18) = plVar6;
  *(undefined8 *)(lVar4 + 0x10 + lVar7 * 0x18) = uVar5;
  return;
}



// FUNCTION 143d554bc FUN_143d554bc body=63 status=ok
// SIG undefined FUN_143d554bc(void)

undefined8 FUN_143d554bc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x38) != 0) && (cVar2 = FUN_1448093f4(param_2), cVar2 == '\0')) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x40);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(param_2 + 0x10) == lVar1 || lVar1 == 0
                 );
}



// FUNCTION 143d55542 FUN_143d55542 body=2701 status=ok
// SIG undefined FUN_143d55542(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d55542(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d6a8 = (ulonglong)uVar3;
  DAT_14cb7d6d0 = 0;
  DAT_14cb7d6d8 = 0;
  DAT_14cb7d6b0 = 0;
  _DAT_14cb7d6b8 = 0;
  _DAT_14cb7d6dc = 0xffffffff00000080;
  DAT_14cb7d6e4 = 0;
  DAT_14cb7d6f0 = 0;
  DAT_14cb7d6f8 = 0;
  atexit(FUN_143d4d603);
  local_a8 = 0;
  FUN_1412cc41e(&DAT_14cb7d700,L"ResourcePoolManager",5,3);
  FUN_1446f470e(&DAT_14cb7d710,L"ResourcePools",1);
  FUN_1446f470e(&DAT_14cb7d718,L"ResourcePoolDetails",1);
  local_98 = "resource";
  local_90 = 8;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d720 = (ulonglong)uVar3;
  _DAT_14cb7d730 = &LAB_143d4f31f;
  _DAT_14cb7d738 = 0x43160000;
  DAT_14cb7d73c = 1;
  DAT_14cb7d728 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d728;
  atexit((_func_5014 *)&LAB_143d4f324);
  _DAT_14cb7d750 = &LAB_143d4f358;
  _DAT_14cb7d758 = 0x43170000;
  DAT_14cb7d75c = 1;
  DAT_14cb7d748 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7d748;
  atexit((_func_5014 *)&LAB_143d4f35d);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cb7d768);
  if (cVar2 == '\0') {
    _DAT_14cb7d768 = 0;
    uRam000000014cb7d770 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cb7d798 = 0;
  DAT_14cb7d7a0 = 0;
  DAT_14cb7d778 = 0;
  _DAT_14cb7d780 = 0;
  _DAT_14cb7d7a4 = 0xffffffff00000080;
  DAT_14cb7d7ac = 0;
  DAT_14cb7d7b8 = 0;
  DAT_14cb7d7c0 = 0;
  atexit(FUN_143d4f395);
  local_98 = "nexus";
  local_90 = 5;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d820 = (ulonglong)uVar3;
  local_98._0_1_ = 1;
  local_a8 = 0;
  FUN_140bd5914(&DAT_14cb7d828,L"oak.build_station_links_for_pie",&local_98,
                L"Whether to build station links for PIE. Set to false if station travel is never needed in PIE.\n"
               );
  atexit(FUN_143d4f40f);
  local_98 = (char *)((ulonglong)local_98._1_7_ << 8);
  local_a8 = 0;
  FUN_140bd5914(&DAT_14cb7d840,L"a.gbx.ForceCensorContent",&local_98,
                L"Forces content to be censored - 1=Force Censor 0=default");
  atexit(FUN_143d4f454);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_143d4f67f;
  local_a8 = 1;
  FUN_1415c7246(&DAT_14cb7d858,L"gbx.dump.ClassNetCache",&DAT_149dfb77a,&local_98);
  if (local_90 != 0) {
    if (local_98 == (char *)0x0) goto LAB_143d558df;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143d558df:
  atexit(FUN_143d4f8fb);
  DAT_14cb7d868 = 0;
  _DAT_14cb7d870 = 0;
  _DAT_14cb7d878 = 2;
  atexit(FUN_143d4f940);
  DAT_14cb7d880 = 0;
  _DAT_14cb7d888 = 0;
  _DAT_14cb7d890 = 2;
  atexit(FUN_143d4f971);
  DAT_14cb7d898 = 0;
  _DAT_14cb7d8a0 = 0;
  _DAT_14cb7d8a8 = 2;
  atexit(FUN_143d4f9a2);
  DAT_14cb7df98 = 0;
  _DAT_14cb7dfa0 = 0;
  _DAT_14cb7dfa8 = 2;
  atexit(FUN_143d4f9d3);
  DAT_14cb7d8b0 = 0;
  _DAT_14cb7d8b8 = 0;
  _DAT_14cb7d8c0 = 2;
  atexit(FUN_143d4fa04);
  DAT_14cb7df50 = 0;
  _DAT_14cb7df58 = 0;
  _DAT_14cb7df60 = 2;
  atexit(FUN_143d4fa35);
  DAT_14cb7df68 = 0;
  _DAT_14cb7df70 = 0;
  _DAT_14cb7df78 = 2;
  atexit(FUN_143d4fa66);
  DAT_14cb7df80 = 0;
  _DAT_14cb7df88 = 0;
  _DAT_14cb7df90 = 2;
  atexit(FUN_143d4fa97);
  _DAT_14cb7d8e8 = 0;
  _DAT_14cb7d8f0 = 0;
  _DAT_14cb7d8c8 = 0;
  uRam000000014cb7d8d0 = 0;
  _DAT_14cb7d8f4 = 0xffffffff00000080;
  _DAT_14cb7d8fc = 0;
  DAT_14cb7d908 = 0;
  _DAT_14cb7d910 = 0;
  DAT_14cb7d918 = 0;
  uRam000000014cb7d920 = 0;
  _DAT_14cb7d928 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb7d930);
  atexit(FUN_143d4fac8);
  _DAT_14cb7d948 = 0x47efffffe0000000;
  _DAT_14cb7d950 = 0x47efffffe0000000;
  _DAT_14cb7d958 = 0x47efffffe0000000;
  _DAT_14cb7d960 = 0x47efffffe0000000;
  _DAT_14cb7d968 = 0x47efffffe0000000;
  _DAT_14cb7d970 = 0x47efffffe0000000;
  _DAT_14cb7d978 = 0x47efffffe0000000;
  _DAT_14cb7d980 = 0x47efffffe0000000;
  local_98 = "bone";
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  FUN_140056680(&DAT_14cb7d988,L"PlayAsBot");
  atexit((_func_5014 *)&LAB_143d4fb08);
  FUN_140056680(&DAT_14cb7d998,L"PlayAs");
  atexit((_func_5014 *)&LAB_143d4fb19);
  FUN_140056680(&DAT_14cb7d9a8,L"Bots");
  atexit((_func_5014 *)&LAB_143d4fb2a);
  FUN_140056680(&DAT_14cb7d9b8,L"BotSS");
  atexit((_func_5014 *)&LAB_143d4fb3b);
  local_98 = "StreamingAssets";
  local_90 = 0xf;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb7d9c8 = (ulonglong)uVar3;
  local_98 = "PreMatchLogicExecuting";
  local_90 = 0x16;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb7d9d0 = (ulonglong)uVar3;
  local_98 = "class";
  local_90 = 5;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d9d8 = (ulonglong)uVar3;
  local_98 = "gameplay_director_class";
  local_90 = 0x17;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d9e0 = (ulonglong)uVar3;
  local_98 = "settings";
  local_90 = 8;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d9e8 = (ulonglong)uVar3;
  local_98 = "host_venue";
  local_90 = 10;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d9f0 = (ulonglong)uVar3;
  local_98 = "death_handler";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7d9f8 = (ulonglong)uVar3;
  local_98 = "venue_tags";
  local_90 = 10;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7da00 = (ulonglong)uVar3;
  local_98 = "gamemode_tags";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb7da08 = (ulonglong)uVar3;
  _DAT_14cb7da10 = 0;
  uRam000000014cb7da18 = 0;
  _DAT_14cb7da20 = 0;
  DAT_14cb7da28 = 0;
  uRam000000014cb7da30 = 0;
  FUN_1446ddda2(&DAT_14cb7da10,"module_parameters",0);
  atexit((_func_5014 *)&LAB_143d518e3);
  FUN_1447a97f4(&DAT_14cb7da38,&DAT_14c9485f0);
  atexit((_func_5014 *)&LAB_143d519ee);
  _DAT_14cb7da68 = &LAB_143d519ff;
  _DAT_14cb7da70 = 0x4458dae1;
  DAT_14cb7da74 = 1;
  DAT_14cb7da60 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7da60;
  atexit((_func_5014 *)&LAB_143d51a04);
  DAT_14cb7dae0 = 0;
  uRam000000014cb7dae8 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d5522c;
  local_98 = &DAT_14011fc1e;
  FUN_1460ebae4(&local_98);
  atexit((_func_5014 *)&LAB_143d51a61);
  local_98 = "gbx_gamemode_assets";
  local_90 = 0x13;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb7db70 = (ulonglong)uVar3;
  local_98 = "no_game_mode_ident";
  local_90 = 0x12;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb7db78 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cb7dc28,L"/Script/Niagara.NiagaraComponent");
  atexit((_func_5014 *)&LAB_143d51bd5);
  _DAT_14cb7dc38 = 0;
  DAT_14cb7dc40 = 0;
  _DAT_14cb7dc48 = 0;
  DAT_14cb7dc50 = 0;
  _DAT_14cb7dc58 = 0;
  atexit((_func_5014 *)&LAB_143d51be6);
  DAT_14cb7df38 = 0;
  _DAT_14cb7df40 = 0;
  _DAT_14cb7df48 = 2;
  atexit(FUN_143d5276b);
  DAT_14cb7dc60 = 0;
  _DAT_14cb7dc68 = 0;
  _DAT_14cb7dc70 = 2;
  atexit(FUN_143d5279c);
  _DAT_14cb7dc80 = &LAB_143d5300f;
  _DAT_14cb7dc88 = 0x4458dccd;
  DAT_14cb7dc8c = 1;
  DAT_14cb7dc78 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7dc78;
  atexit((_func_5014 *)&LAB_143d53014);
  DAT_14cb7dcf8 = 0;
  uRam000000014cb7dd00 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143d55232;
  local_98 = &DAT_14011fc1e;
  FUN_1460ec27a(&local_98);
  atexit((_func_5014 *)&LAB_143d53071);
  _DAT_14cb7de10 = &LAB_143d53a0a;
  _DAT_14cb7de18 = 0x44778000;
  DAT_14cb7de1c = 1;
  DAT_14cb7de08 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7de08;
  atexit((_func_5014 *)&LAB_143d53a0f);
  _DAT_14cb7de28 = 0;
  uRam000000014cb7de30 = 0;
  _DAT_14cb7de38 = 0;
  DAT_14cb7de40 = 0;
  uRam000000014cb7de48 = 0;
  FUN_1446ddda2(&DAT_14cb7de28,"parent",0);
  atexit((_func_5014 *)&LAB_143d53a43);
  ram0x00014cb7de54 = 0;
  FUN_14052b5e0(&DAT_14cb7de50,&DAT_149e377fe,0);
  _DAT_14cb7de60 = &DAT_149e377fe;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d55fd2 FUN_143d55fd2 body=793 status=ok
// SIG undefined FUN_143d55fd2(void)

void FUN_143d55fd2(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  uint local_60;
  uint uStack_5c;
  undefined8 uStack_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar3 != '\0') {
    uStack_5c = 0;
    if (param_3 == 0) {
      local_60 = 0;
      uVar4 = 0;
    }
    else {
      local_60 = *(uint *)(param_3 + 0xc);
      if ((int)local_60 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((local_60 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar4 = *(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar4 = *(uint *)(lVar8 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar8 + 0x10) = uVar5;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar5;
        }
      }
    }
    plVar9 = param_1 + 0xd;
    plVar7 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar7 = plVar9;
    }
    uStack_5c = uVar4;
    uStack_58 = param_4;
    if ((longlong)(int)param_1[0x1e] == 0) {
      iVar6 = 0;
    }
    else {
      lVar8 = (longlong)(int)param_1[0x1e] << 4;
      do {
        if ((plVar7[1] == uStack_58) && (cVar3 = FUN_14038330a(plVar7,&local_60), cVar3 != '\0'))
        goto LAB_143d561ab;
        plVar7 = plVar7 + 2;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
      iVar6 = (int)param_1[0x1e];
    }
    *(uint *)(param_1 + 0x1e) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar6 + 1U) {
      FUN_1459a41ce(plVar9,iVar6);
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0x1d];
    }
    puVar1 = (uint *)(plVar9 + (longlong)iVar6 * 2);
    *puVar1 = local_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = (uint)uStack_58;
    puVar1[3] = uStack_58._4_4_;
    if (param_3 != 0) {
      lVar8 = param_1[9];
      if (DAT_14cb63950 == 0) {
        local_80 = &local_50;
        local_50 = FUN_144a7958c;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1464ec72a;
        local_88 = &LAB_1486f5f75;
        local_90 = &LAB_140945686;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10000004;
        local_b0 = 0x10;
        local_b8 = 0x19d0;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
      }
      if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
        lVar8 = FUN_140d1f2bc(lVar8,param_3,param_4);
        bVar2 = *(byte *)(param_2 + 0x65);
        *(undefined8 *)(lVar8 + 0x24) = 0x3f80000000000000;
        *(undefined1 *)(lVar8 + 0x2d) = 1;
        *(undefined1 *)(lVar8 + 0x2f) = 1;
        if ((bVar2 & 0x18) == 0x10) {
          FUN_1404163bc(lVar8 + 8);
          *(undefined4 *)(lVar8 + 0x14) = 0;
          fVar11 = (float)FUN_14002c5a6(0,*(undefined1 *)(lVar8 + 0x2c),*(undefined8 *)(lVar8 + 8));
          *(float *)(lVar8 + 0x18) = fVar11;
          *(float *)(lVar8 + 0x20) =
               (*(float *)(lVar8 + 0x28) - *(float *)(lVar8 + 0x24)) * fVar11 +
               *(float *)(lVar8 + 0x24);
        }
      }
    }
  }
LAB_143d561ab:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d562ec FUN_143d562ec body=736 status=ok
// SIG undefined FUN_143d562ec(void)

void FUN_143d562ec(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_1 + 0x68;
  if (param_3 == 0) {
    local_58._0_4_ = 0;
    iVar5 = 0;
    uVar1 = (uint)local_58;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    local_58 = (code *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar5 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_58;
      if (bVar11) {
        iVar5 = iVar6;
      }
    }
  }
  local_58._0_4_ = uVar1;
  local_58 = (code *)CONCAT44(iVar5,(uint)local_58);
  lVar9 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar9 = lVar4;
  }
  local_50 = param_4;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0xf0) << 4;
    iVar5 = 1;
    lVar8 = 0;
    do {
      if ((*(longlong *)(lVar9 + 8) == local_50) &&
         (cVar3 = FUN_14038330a(lVar9,&local_58), cVar3 != '\0')) {
        if (iVar5 != 0) {
          iVar6 = *(int *)(param_1 + 0xf0);
          iVar5 = iVar6 - iVar5;
          if (iVar5 != 0) {
            iVar7 = 1;
            if (iVar5 < 1) {
              iVar7 = iVar5;
            }
            lVar9 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar9 = lVar4;
            }
            memmove((void *)((lVar8 >> 0x20) * 0x10 + lVar9),
                    (void *)((longlong)(iVar6 - iVar7) * 0x10 + lVar9),(longlong)iVar7 << 4);
            iVar6 = *(int *)(param_1 + 0xf0);
          }
          *(int *)(param_1 + 0xf0) = iVar6 + -1;
          FUN_1418889ac(lVar4);
          if (param_3 != 0) {
            uVar2 = *(undefined8 *)(param_1 + 0x48);
            if (DAT_14cb63950 == 0) {
              local_58 = FUN_144a7958c;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_1464ec72a;
              local_70 = &local_58;
              local_78 = &LAB_1486f5f75;
              local_80 = &LAB_140945686;
              local_88 = L"Engine";
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 0x10;
              local_a8 = 0x19d0;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                            FUN_1464fe8ee);
            }
            if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38))
               && (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                    (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
              lVar4 = FUN_140d1f2bc(uVar2,param_3,param_4);
              *(undefined8 *)(lVar4 + 0x24) = 0x3f800000;
              *(undefined1 *)(lVar4 + 0x2d) = 1;
              *(undefined1 *)(lVar4 + 0x2f) = 1;
            }
          }
        }
        break;
      }
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d565ce FUN_143d565ce body=104 status=ok
// SIG undefined FUN_143d565ce(void)

void FUN_143d565ce(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14b0be1e0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x800000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 143d56644 FUN_143d56644 body=377 status=ok
// SIG undefined FUN_143d56644(void)

void FUN_143d56644(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14026e798(&local_50);
  if (local_50 != 0) {
    FUN_1403c747e(local_50,&local_58,0);
    iVar2 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      lVar5 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_4);
          plVar4 = *(longlong **)(lVar3 + lVar5);
          local_68 = local_50;
          local_60 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_68,&local_58);
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar5);
    }
    if ((local_58 != (longlong *)0x0) &&
       (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) {
      FUN_1400847bc(local_58 + 0x17,0);
      if ((int)local_58[0x21] == 0) {
        FUN_140087e46(local_58);
        if (*local_58 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_143d5672e;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_58);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_58);
        }
      }
    }
  }
LAB_143d5672e:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d567ca FUN_143d567ca body=26 status=ok
// SIG undefined FUN_143d567ca(void)

void FUN_143d567ca(undefined8 param_1)

{
  FUN_140578a28();
  FUN_143d567e4(param_1);
  return;
}



// FUNCTION 143d567e4 FUN_143d567e4 body=1712 status=ok
// SIG undefined FUN_143d567e4(void)

void FUN_143d567e4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined *puVar12;
  int iVar13;
  longlong *plVar14;
  code *pcVar15;
  undefined8 ****ppppuVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  int local_a0;
  undefined8 ***local_98;
  longlong *local_90;
  ushort local_80;
  byte local_78;
  char local_70 [8];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_1[9];
  lVar17 = param_1[8];
  if (lVar17 == 0) {
    lVar11 = 0;
    local_68 = (longlong *)0x0;
LAB_143d56d0f:
    local_60 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d56c27:
      lVar11 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar17 + 0x48);
      lVar11 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143d56c27;
        lVar11 = *plVar14;
      }
    }
    plVar14 = *(longlong **)(lVar17 + 0x118);
    local_68 = param_1;
    if (plVar14 == (longlong *)0x0) goto LAB_143d56d0f;
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar14 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
    bVar6 = false;
    local_60 = plVar14;
  }
  plVar14 = local_60;
  local_48 = 0;
  local_70[0] = '\x03';
  local_58._0_4_ = 0;
  if (lVar11 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_58;
  }
  else {
    uVar3 = *(uint *)(lVar11 + 0xc);
    local_58 = (ulonglong)uVar3;
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
      iVar13 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar8 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_58;
      if (bVar18) {
        iVar8 = iVar13;
      }
    }
  }
  local_58._0_4_ = uVar3;
  local_58 = CONCAT44(iVar8,(uint)local_58);
  local_50 = 2;
  if (local_48 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
    local_48 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  FUN_1447c3578(lVar4 + 0x38,&local_98,local_70);
  plVar14 = param_1 + 0xe;
  pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 +
                      (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar15 != (code *)0x0) {
    plVar10 = plVar14;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar10 = (longlong *)*plVar14;
    }
    (*pcVar15)(plVar10);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar14);
  }
  *(ushort *)(param_1 + 0x11) = local_80;
  if (local_80 < 0x19) {
    uVar9 = (ulonglong)((uint)local_78 * 0x120);
    pcVar15 = *(code **)((longlong)&DAT_14c9a85b8 + uVar9);
    if ((pcVar15 == (code *)0x0) &&
       (pcVar15 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9), pcVar15 == (code *)0x0)) {
      memcpy(plVar14,&local_98,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar15)(plVar14,&local_98);
    }
  }
  else {
    *plVar14 = (longlong)local_98;
    local_98 = (undefined8 ****)0x0;
    local_80 = 0;
  }
  *(byte *)(param_1 + 0x12) = local_78;
  local_78 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar16 = &local_98;
    if (0x18 < local_80) {
      ppppuVar16 = (undefined8 ****)local_98;
    }
    (*DAT_14c9a85d0)(ppppuVar16);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar7 = local_a8;
  local_a0 = 3;
  FUN_14045cb56(param_1,&local_98);
  plVar10 = local_90;
  if (local_90 == (longlong *)0x0) {
    *puVar7 = &PTR_LAB_14a1c85c0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar17 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    puVar7[2] = lVar11;
    *puVar7 = &PTR_FUN_14b4059b0;
    puVar7[3] = local_98;
    puVar7[4] = 0;
    puVar7[5] = FUN_14114ed74;
  }
  else {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
    *puVar7 = &PTR_LAB_14a1c85c0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar17 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    puVar7[2] = lVar11;
    *puVar7 = &PTR_FUN_14b4059b0;
    puVar7[3] = local_98;
    puVar7[4] = local_90;
    LOCK();
    *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
    UNLOCK();
    puVar7[5] = FUN_14114ed74;
    LOCK();
    plVar2 = local_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
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
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (*(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(lVar4 + 0x60) * 0x120) == (code *)0x0) {
    local_98 = (undefined8 ****)0x0;
  }
  else {
    (**(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(lVar4 + 0x60) * 0x120))
              (&local_98,lVar4 + 0x40,local_70,&local_a8);
  }
  param_1[0xd] = (longlong)local_98;
  if (local_a0 != 0) {
    if (local_a8 == (undefined8 *)0x0) goto LAB_143d56b9f;
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143d56b9f:
  (**(code **)(*param_1 + 0x60))(param_1,plVar14,DAT_14cb7e018);
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_48 != 0) {
    lVar17 = (longlong)local_48 + -1;
    lVar11 = lVar17 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar17;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar13 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar13 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar13;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar13 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar13 = iVar8;
    }
    bVar5 = (byte)lVar17 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar12 + (longlong)(iVar13 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar13 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_48 = 0;
  }
  if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d56e9c FUN_143d56e9c body=848 status=ok
// SIG undefined FUN_143d56e9c(void)

void FUN_143d56e9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  char local_68 [8];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_143d57030;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar12 = *(longlong *)(param_1 + 0x40);
  if (lVar12 == 0) {
    lVar10 = 0;
    local_60 = 0;
LAB_143d57158:
    local_58 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar12 + 0x4c) == 0) {
LAB_143d57073:
      lVar10 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar12 + 0x48);
      lVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar12 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143d57073;
        lVar10 = *plVar11;
      }
    }
    plVar11 = *(longlong **)(lVar12 + 0x118);
    local_60 = param_1;
    if (plVar11 == (longlong *)0x0) goto LAB_143d57158;
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
    bVar6 = false;
    local_58 = plVar11;
  }
  plVar11 = local_58;
  local_40 = 0;
  local_68[0] = '\x03';
  local_50._0_4_ = 0;
  if (lVar10 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_50;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    local_50 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_50;
      if (bVar13) {
        iVar7 = iVar9;
      }
    }
  }
  local_50._0_4_ = uVar3;
  local_50 = CONCAT44(iVar7,(uint)local_50);
  local_48 = 2;
  if (local_40 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_40 + -1,1);
    local_40 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar4 + 0x60) * 0x120) != (code *)0x0) {
    (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar4 + 0x60) * 0x120))
              (lVar4 + 0x40,local_68,(undefined8 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_40 != 0) {
    lVar12 = (longlong)local_40 + -1;
    lVar10 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
    if (*(longlong *)(lVar4 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar7 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar4 + lVar10) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar10) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar9 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    bVar5 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_40 = 0;
  }
  if ((local_68[0] == '\x03') && (local_58 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_58 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_143d57030:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d571ee FUN_143d571ee body=26 status=ok
// SIG undefined FUN_143d571ee(void)

void FUN_143d571ee(undefined8 param_1)

{
  FUN_143d56e9c();
  FUN_143d567e4(param_1);
  return;
}



// FUNCTION 143d57208 FUN_143d57208 body=99 status=ok
// SIG undefined FUN_143d57208(void)

undefined8 FUN_143d57208(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0xc)) {
      return 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
  }
  return uVar2;
}



// FUNCTION 143d57278 FUN_143d57278 body=635 status=ok
// SIG undefined FUN_143d57278(void)

ulonglong FUN_143d57278(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = *param_5;
  if (*param_5 == 0) {
    FUN_14029eb6e(param_1,&local_50);
    lVar10 = local_50;
  }
  local_50 = lVar10;
  if ((param_3 != 0) && ((longlong)*(int *)(param_3 + 0x140) != 0)) {
    lVar10 = 0;
    do {
      uVar9 = *(ulonglong *)(*(longlong *)(param_3 + 0x138) + lVar10);
      if ((uVar9 != 0) && (*(longlong *)(uVar9 + 0x18) == local_50)) goto LAB_143d5744f;
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(param_3 + 0x140) * 8 != lVar10);
  }
  iVar1 = *(int *)(param_2 + 0x268);
  if (iVar1 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_2 + 0x260);
    if (*(uint **)(param_2 + 0x260) == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 0x250);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar9;
      }
      uVar14 = 0;
      iVar8 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_143d5744f;
        iVar8 = iVar8 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar8 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != iVar1) {
    uVar13 = 0xffffffff;
    do {
      uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x240) + (longlong)iVar3 * 0x10);
      if ((uVar9 != 0) && (*(longlong *)(uVar9 + 0x18) == local_50)) {
        lVar10 = FUN_144a799b0();
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(uVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) goto LAB_143d5744f;
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar4 = *(uint **)(param_2 + 0x260);
      if (*(uint **)(param_2 + 0x260) == (uint *)0x0) {
        puVar4 = (uint *)(param_2 + 0x250);
      }
      iVar2 = *(int *)(param_2 + 0x268);
      iVar3 = (int)uVar14;
      lVar10 = (longlong)iVar3;
      uVar7 = puVar4[lVar10] & uVar13;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar3 < iVar5) {
          lVar11 = 0;
          do {
            uVar7 = puVar4[lVar10 + lVar11 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar3 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_143d5741f;
            }
            iVar8 = iVar8 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar6 - lVar10 != lVar11);
          uVar13 = 0xffffffff;
          iVar3 = iVar6;
        }
        uVar14 = (ulonglong)(iVar3 + 1);
        iVar3 = iVar2;
      }
      else {
LAB_143d5741f:
        uVar12 = (ulonglong)(-uVar7 & uVar7);
        uVar9 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar3) {
          iVar3 = iVar2;
        }
      }
    } while (iVar3 != iVar1);
  }
  uVar9 = 0;
LAB_143d5744f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143d574f4 FUN_143d574f4 body=152 status=ok
// SIG undefined FUN_143d574f4(void)

void FUN_143d574f4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1 + 0x68;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x128);
  }
  iVar1 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar5 + 4 + lVar6);
      if (((iVar2 != 0) && (uVar3 = *(uint *)(lVar5 + lVar6), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar2)) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
          (*(code *)*param_2)(param_2[1]);
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return;
}



// FUNCTION 143d575e9 FUN_143d575e9 body=59 status=ok
// SIG undefined FUN_143d575e9(void)

undefined8 FUN_143d575e9(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1402b6ba2();
  if (lVar1 != 0) {
    lVar2 = FUN_140937900(*(undefined8 *)(lVar1 + 0xa8));
    if (lVar2 != 0) {
      uVar3 = FUN_140818d2a(lVar2,lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d57624 FUN_143d57624 body=48 status=ok
// SIG undefined FUN_143d57624(void)

longlong FUN_143d57624(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_140937900(lVar1);
    if (lVar2 != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return lVar2;
}



// FUNCTION 143d57658 FUN_143d57658 body=949 status=ok
// SIG undefined FUN_143d57658(void)

void FUN_143d57658(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
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
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (((((lVar2 != 0) && (*(int *)(param_1 + 0x4c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0)))) &&
     (((int)plVar6[2] == *(int *)(param_1 + 0x4c) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = (code *)&LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cae8b20 == 0) {
        local_60 = &local_48;
        local_48 = (code *)&LAB_14355090c;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_147b8e16d;
        local_70 = (code *)&LAB_140810a38;
        local_78 = L"Engine";
        local_80 = 0x800000000;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar8 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1468c5283;
        local_70 = FUN_142809da0;
        local_78 = L"Engine";
        local_80 = 0x400000000;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = *(longlong *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        iVar5 = *(int *)(lVar8 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar5) ||
             (lVar7 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar5 * 8)
             != lVar8 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0xc0) != 0)) {
          iVar5 = *(int *)(lVar2 + 0xb0);
          if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar5);
          }
          plVar6 = (longlong *)(param_1 + 0x160);
          if (*(int *)(param_1 + 0x16c) < iVar5) {
            FUN_141888aca(plVar6);
            iVar5 = *(int *)(lVar2 + 0xb0);
          }
          if (0 < iVar5) {
            lVar8 = 0;
            do {
              lVar4 = FUN_143e157b0(lVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0xa8) + lVar8 * 8));
              if (lVar4 != 0) {
                iVar5 = *(int *)(param_1 + 0x168);
                *(uint *)(param_1 + 0x168) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x16c) < iVar5 + 1U) {
                  FUN_141888c0a(plVar6,iVar5);
                }
                *(longlong *)(*plVar6 + (longlong)iVar5 * 8) = lVar4;
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(lVar4);
                }
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(lVar2 + 0xb0));
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d57a0e FUN_143d57a0e body=2272 status=ok
// SIG undefined FUN_143d57a0e(void)

void FUN_143d57a0e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint *puVar27;
  int iVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  ulonglong uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar10 = param_1[8];
  if ((lVar10 != 0 && param_2 != (longlong *)0x0) && (*(longlong *)(lVar10 + 0x1b8) != 0)) {
    local_b8 = (uint *)0x0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_110 = param_2;
    lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar8 != 0) {
      FUN_1415518d0(lVar8,(longlong *)(lVar10 + 0x1b8),&local_c8,&DAT_14cb73d00);
      if ((int)uStack_c0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_c0 & 0xffffffff);
      }
      if (uStack_b0._4_4_ < (int)uStack_c0) {
        FUN_1488729ba(&local_b8);
      }
      lVar8 = local_c8;
      if ((int)uStack_c0 != 0) {
        lVar29 = (longlong)(int)uStack_c0;
        lVar26 = 0;
        do {
          lVar21 = *(longlong *)(lVar8 + lVar26);
          if (lVar21 != 0) {
            uVar23 = FUN_1464aeae0();
            cVar5 = FUN_1448093f4(lVar21,uVar23);
            if ((((((cVar5 != '\0') && (*(int *)(lVar21 + 0x1c) != 0)) &&
                  (uVar20 = *(uint *)(lVar21 + 0x18), -1 < (int)uVar20)) &&
                 (((int)uVar20 < DAT_14c9647dc &&
                  (plVar16 = (longlong *)
                             ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                  plVar16 != (longlong *)0x0)))) && ((int)plVar16[2] == *(int *)(lVar21 + 0x1c))) &&
               ((((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && (lVar21 = *plVar16, lVar21 != 0)) &&
                ((lVar9 = (**(code **)(*(longlong *)(lVar21 + 0x50) + 0x10))(lVar21 + 0x50),
                 lVar9 != 0 && (*(longlong *)(lVar9 + 0x1b8) != *(longlong *)(lVar10 + 0x1b8)))))))
            {
              uVar20 = *(uint *)(lVar21 + 0xc);
              local_f8 = (undefined8 *)(ulonglong)uVar20;
              if ((int)uVar20 < DAT_14c9647dc) {
                lVar21 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
              }
              else {
                lVar21 = 0;
              }
              iVar6 = *(int *)(lVar21 + 0x10);
              if (*(int *)(lVar21 + 0x10) == 0) {
                LOCK();
                iVar6 = DAT_14c964868 + 1;
                UNLOCK();
                iVar28 = DAT_14c964868 + 1;
                bVar30 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar6;
                if (bVar30) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar28);
                }
                LOCK();
                iVar6 = *(int *)(lVar21 + 0x10);
                bVar30 = iVar6 == 0;
                if (bVar30) {
                  *(int *)(lVar21 + 0x10) = iVar28;
                  iVar6 = 0;
                }
                UNLOCK();
                uVar20 = (uint)local_f8;
                if (bVar30) {
                  iVar6 = iVar28;
                }
              }
              local_f8._0_4_ = uVar20;
              local_f8 = (undefined8 *)CONCAT44(iVar6,(uint)local_f8);
              FUN_148872aa0(&local_b8,&local_f8);
            }
          }
          lVar26 = lVar26 + 8;
        } while (lVar29 * 8 != lVar26);
      }
    }
    local_70 = (undefined1 *)0x0;
    local_68 = 0x8000000000;
    uVar20 = *(uint *)(param_1 + 0x41);
    if (0 < (int)uVar20) {
      uVar12 = uVar20;
      if (0x80 < uVar20) {
        iVar6 = (int)((ulonglong)uVar20 + 0x1f >> 5);
        uVar22 = (ulonglong)(uint)(iVar6 * 4);
        uVar19 = 0;
        uVar14 = uVar19;
        if (DAT_14c872d28 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
            uVar12 = (uint)(uVar22 + 0xf);
            if (uVar20 < 0x3ff81) {
              uVar22 = (ulonglong)
                       (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 + 0xf >> 4]];
            }
            else {
              uVar15 = (ulonglong)(uVar12 & 0x3ffffff0);
              if (uVar15 < 0x7ff1) {
                bVar11 = (&DAT_14c841e00)[uVar12 >> 4];
                uVar24 = 0x32;
                if (0x32 < bVar11) {
                  uVar24 = (ulonglong)bVar11;
                }
                uVar25 = 0x32 - (ulonglong)bVar11;
                do {
                  uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                  uVar14 = 0;
                  if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_143d5821c;
                  lVar10 = uVar24 + 1 + uVar25;
                  uVar25 = uVar25 - 1;
                } while (lVar10 != 0x33);
              }
              uVar14 = 0x10;
              if (0x10 < DAT_14c841df8) {
                uVar14 = (ulonglong)DAT_14c841df8;
              }
              uVar22 = -uVar14 & (uVar15 + uVar14) - 1;
              uVar14 = uVar19;
            }
          }
          else {
            uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
            uVar14 = local_68 & 0xffffffff;
          }
        }
LAB_143d5821c:
        iVar7 = (int)(uVar22 >> 2);
        iVar28 = -0x20;
        if (iVar6 <= iVar7) {
          iVar28 = iVar7 << 5;
        }
        local_68 = CONCAT44(iVar28,(int)local_68);
        FUN_1446efbd8(local_80,uVar14);
        uVar12 = (int)local_68 + uVar20;
      }
      uVar4 = uVar12 + 0x1f;
      if (-1 < (int)uVar12) {
        uVar4 = uVar12;
      }
      local_68 = CONCAT44(local_68._4_4_,uVar12);
      if ((int)uVar12 % 0x20 != 0) {
        puVar13 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar13 = local_80;
        }
        bVar11 = -(char)((int)uVar12 % 0x20);
        *(uint *)(puVar13 + (longlong)((int)uVar4 >> 5) * 4) =
             (uint)(*(int *)(puVar13 + (longlong)((int)uVar4 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
      FUN_1447c6044(local_80,0,uVar20,0);
    }
    plVar16 = param_1 + 0x40;
    if ((longlong)(int)uStack_b0 != 0) {
      puVar1 = local_b8 + (longlong)(int)uStack_b0 * 2;
      puVar27 = local_b8;
      do {
        lVar10 = param_1[0x41];
        if ((longlong)(int)lVar10 != 0) {
          lVar8 = param_1[0x40];
          uVar20 = 0;
          lVar26 = 0;
          do {
            cVar5 = FUN_148872b1c(lVar8 + lVar26,puVar27);
            if (cVar5 != '\0') {
              if (((int)uVar20 < 0) || ((int)local_68 <= (int)uVar20)) {
                if (uVar20 != 0xffffffff) goto LAB_143d57db2;
              }
              else {
                puVar13 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar13 = local_80;
                }
                *(uint *)(puVar13 + (ulonglong)((uint)((ulonglong)lVar26 >> 8) & 0x7ffffff) * 4) =
                     *(uint *)(puVar13 + (ulonglong)((uint)((ulonglong)lVar26 >> 8) & 0x7ffffff) * 4
                              ) | 1 << ((byte)uVar20 & 0x1f);
                if ((int)param_1[0x41] <= (int)uVar20) goto LAB_143d57db2;
                uVar14 = (ulonglong)(uVar20 & 0x7fffffff);
                iVar6 = *(int *)(*plVar16 + 4 + uVar14 * 8);
                if ((((iVar6 == 0) || (uVar12 = *(uint *)(*plVar16 + uVar14 * 8), (int)uVar12 < 0))
                    || (DAT_14c9647dc <= (int)uVar12)) ||
                   (((plVar18 = (longlong *)
                                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                     plVar18 == (longlong *)0x0 || ((int)plVar18[2] != iVar6)) ||
                    (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (lVar10 = *plVar18, lVar10 == 0)
                     ))))) goto LAB_143d57db2;
                local_e8 = 0;
                uStack_e0 = 0;
                local_f8 = (undefined8 *)0x0;
                uStack_f0 = 0;
                local_d8 = 0;
                FUN_1400bbfc4(local_a0,lVar10);
                if (uStack_e0 != 0) {
                  FUN_1400020a8();
                }
                uStack_e0 = CONCAT44(uStack_8c,local_90);
                cVar5 = (*(code *)PTR_FUN_14c758760)();
                uVar12 = *(uint *)(lVar10 + 0xc);
                if (cVar5 == '\0') {
LAB_143d57f37:
                  local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,uVar12);
                  if ((int)uVar12 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  iVar6 = *(int *)(lVar10 + 0x10);
                  if (*(int *)(lVar10 + 0x10) == 0) {
                    LOCK();
                    iVar6 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar28 = DAT_14c964868 + 1;
                    bVar30 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar6;
                    if (bVar30) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar28);
                    }
                    LOCK();
                    iVar6 = *(int *)(lVar10 + 0x10);
                    bVar30 = iVar6 == 0;
                    if (bVar30) {
                      *(int *)(lVar10 + 0x10) = iVar28;
                      iVar6 = 0;
                    }
                    UNLOCK();
                    if (bVar30) {
                      iVar6 = iVar28;
                    }
                  }
                }
                else {
                  if ((int)uVar12 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) goto LAB_143d57f37;
                  local_f8 = (undefined8 *)0x0;
                  iVar6 = 0;
                }
                local_f8 = (undefined8 *)CONCAT44(iVar6,(uint)local_f8);
                lVar10 = FUN_14886d182(param_1,&local_f8);
                if (uStack_e0 != 0) {
                  FUN_1400020a8();
                }
                if (lVar10 != 0) {
                  FUN_143d57a0e(lVar10,local_110);
                  goto LAB_143d57db2;
                }
                iVar6 = (int)param_1[0x41];
                if (iVar6 - 1U != uVar20) {
                  memmove((void *)(param_1[0x40] + uVar14 * 8),
                          (void *)(param_1[0x40] + uVar14 * 8 + 8),
                          (longlong)(int)((iVar6 - 1U) - uVar20) << 3);
                  iVar6 = (int)param_1[0x41];
                }
                *(int *)(param_1 + 0x41) = iVar6 + -1;
                FUN_148872b52(plVar16);
              }
              break;
            }
            lVar26 = lVar26 + 8;
            uVar20 = uVar20 + 1;
          } while ((longlong)(int)lVar10 * 8 != lVar26);
        }
        iVar6 = (int)param_1[0x41];
        *(uint *)(param_1 + 0x41) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0x20c) < iVar6 + 1U) {
          FUN_148872a1a(plVar16,iVar6);
        }
        *(undefined8 *)(*plVar16 + (longlong)iVar6 * 8) = *(undefined8 *)puVar27;
        if ((puVar27[1] == 0) || (uVar20 = *puVar27, (int)uVar20 < 0)) {
LAB_143d57f23:
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
          if ((int)uVar20 < DAT_14c9647dc) {
            puVar17 = (undefined8 *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
            if (((puVar17 == (undefined8 *)0x0) || (*(uint *)(puVar17 + 2) != puVar27[1])) ||
               ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_143d57f23;
            uVar23 = *puVar17;
          }
        }
        (**(code **)(*param_1 + 0x78))(param_1,local_108,uVar23);
        plVar18 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar3 = (int *)((longlong)plVar18 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
LAB_143d57db2:
        puVar27 = puVar27 + 2;
      } while (puVar27 != puVar1);
    }
    uVar14 = local_68 & 0xffffffff;
    if (0 < (int)local_68) {
      uVar22 = 0;
      bVar30 = false;
      do {
        puVar13 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar13 = local_80;
        }
        while ((*(uint *)(puVar13 + (uVar22 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar22 & 0x1f) & 1) !=
               0) {
          uVar22 = uVar22 + 1;
          if ((longlong)(int)uVar14 <= (longlong)uVar22) {
            if (bVar30) goto LAB_143d58197;
            goto LAB_143d58118;
          }
        }
        iVar6 = *(int *)(*plVar16 + 4 + uVar22 * 8);
        if ((iVar6 == 0) || (uVar20 = *(uint *)(*plVar16 + uVar22 * 8), (int)uVar20 < 0)) {
LAB_143d58110:
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
          if ((int)uVar20 < DAT_14c9647dc) {
            puVar17 = (undefined8 *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
            if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != iVar6)) ||
               ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_143d58110;
            uVar23 = *puVar17;
          }
        }
        FUN_14886d114(param_1,uVar23);
        *(undefined8 *)(param_1[0x40] + uVar22 * 8) = 0;
        uVar14 = (ulonglong)(int)local_68;
        uVar22 = uVar22 + 1;
        bVar30 = true;
      } while ((longlong)uVar22 < (longlong)uVar14);
LAB_143d58197:
      local_f8 = local_a0;
      local_a0[0] = 0;
      FUN_148872bee(plVar16);
    }
LAB_143d58118:
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d582f2 FUN_143d582f2 body=307 status=ok
// SIG undefined FUN_143d582f2(void)

void FUN_143d582f2(longlong param_1,undefined8 param_2,longlong param_3)

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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x149) == '\0') && (param_3 != 0)) &&
     (*(char *)(param_1 + 0x148) != '\0')) {
    if (DAT_14cb63950 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464ec72a;
      local_38 = &LAB_1486f5f75;
      local_40 = &LAB_140945686;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) &&
       ((*(longlong *)(param_3 + 0xa8) != 0 &&
        ((*(byte *)(*(longlong *)(param_3 + 0xa8) + 0x65) & 0x18) != 0x10)))) {
      *(byte *)(param_3 + 0x1260) = *(byte *)(param_3 + 0x1260) & 0xfe;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5843c FUN_143d5843c body=1575 status=ok
// SIG undefined FUN_143d5843c(void)

ulonglong FUN_143d5843c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [40];
  char local_90 [8];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  lVar7 = *(longlong *)(param_1 + 0x48);
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar16 = 0;
    local_88 = 0;
LAB_143d58949:
    local_80 = (longlong *)0x0;
    bVar19 = true;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_143d5882f:
      lVar16 = 0;
    }
    else {
      uVar17 = *(uint *)(lVar18 + 0x48);
      lVar16 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d5882f;
        lVar16 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar18 + 0x118);
    local_88 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_143d58949;
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
    bVar19 = false;
    local_80 = plVar15;
  }
  plVar15 = local_80;
  local_68 = 0;
  local_90[0] = '\x03';
  local_78._0_4_ = 0;
  if (lVar16 == 0) {
    iVar6 = 0;
    uVar17 = (uint)local_78;
  }
  else {
    uVar17 = *(uint *)(lVar16 + 0xc);
    local_78 = (ulonglong)uVar17;
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar6 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar6 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar6 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar12;
        iVar6 = 0;
      }
      UNLOCK();
      uVar17 = (uint)local_78;
      if (bVar20) {
        iVar6 = iVar12;
      }
    }
  }
  local_78._0_4_ = uVar17;
  local_78 = CONCAT44(iVar6,(uint)local_78);
  local_70 = 2;
  if (local_68 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
    local_68 = 0;
  }
  if (!bVar19) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  FUN_1447c3578(lVar7 + 0x80,local_60,local_90);
  lVar7 = DAT_14c9a3da0;
  if ((longlong)local_68 != 0) {
    lVar18 = (longlong)local_68 + -1;
    lVar16 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar7 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14c9a3da0;
    iVar6 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar7 + lVar16) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar7 + 4 + lVar16) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    bVar4 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_68 = 0;
  }
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_80 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  bVar4 = local_40;
  if (local_40 == 0xe) {
    lVar7 = FUN_140593260(local_60);
    if (lVar7 == 0) {
LAB_143d587fb:
      *(undefined4 *)(param_1 + 0xd8) = 0;
      iVar6 = 0;
    }
    else {
      lVar18 = FUN_14061d078();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_143d587fb;
LAB_143d58605:
      uVar17 = *(uint *)(lVar7 + 0xc);
      *(uint *)(param_1 + 0xd8) = uVar17;
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar19 = iVar6 == 0;
        if (bVar19) {
          *(int *)(lVar7 + 0x10) = iVar12;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar6 = iVar12;
        }
      }
    }
    *(int *)(param_1 + 0xdc) = iVar6;
  }
  else if (local_40 == 7) {
LAB_143d587d7:
    lVar7 = FUN_14030a32e(local_60);
    if (lVar7 != 0) {
      lVar7 = FUN_14061d010(lVar7);
      if (lVar7 != 0) goto LAB_143d58605;
      goto LAB_143d587fb;
    }
  }
  else {
    uVar17 = (uint)local_40 * 0x120;
    if (*(code **)(&DAT_14c9a8560 + uVar17) != (code *)0x0) {
      cVar5 = (**(code **)(&DAT_14c9a8560 + uVar17))(7);
      if (cVar5 != '\0') goto LAB_143d587d7;
    }
    if (((DAT_14c9a8d48 != (code *)0x0) && (cVar5 = (*DAT_14c9a8d48)(bVar4), cVar5 != '\0')) ||
       (((((&DAT_14c9a8514)[uVar17] & 0x20) != 0 && ((DAT_14c9a8cf4 & 0x20) == 0)) &&
        ((*(code **)(&DAT_14c9a8588 + uVar17) == (code *)0x0 ||
         (cVar5 = (**(code **)(&DAT_14c9a8588 + uVar17))(7), cVar5 != '\0')))))) goto LAB_143d587d7;
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
LAB_143d5868f:
    bVar19 = false;
  }
  else {
    uVar17 = *(uint *)(param_1 + 0xd8);
    bVar19 = false;
    if ((-1 < (int)uVar17) && (bVar19 = false, (int)uVar17 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xdc))) goto LAB_143d5868f;
      bVar19 = (*(uint *)(lVar7 + 8) & 0x10200000) == 0;
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar14 = local_60;
    if (0x18 < local_48) {
      ppppuVar14 = (undefined8 ****)local_60[0];
    }
    (*pcVar3)(ppppuVar14);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if (!bVar19) {
    uVar9 = 0;
    goto LAB_143d58745;
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
LAB_143d588e9:
    uVar13 = 0;
  }
  else {
    uVar17 = *(uint *)(param_1 + 0xd8);
    uVar13 = 0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0xdc) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143d588e9;
      uVar13 = *puVar10;
    }
  }
  uVar8 = FUN_140343d7a(param_1);
  cVar5 = FUN_14090a3d8(uVar13,uVar8);
  uVar9 = 2L >> (cVar5 * '\b' & 0x3fU);
LAB_143d58745:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143d58a68 FUN_143d58a68 body=37 status=ok
// SIG undefined FUN_143d58a68(void)

undefined8 FUN_143d58a68(longlong param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\x04') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x130) == '\x01')) {
    FUN_141071992();
  }
  return 1;
}



// FUNCTION 143d58a9a FUN_143d58a9a body=58 status=ok
// SIG undefined FUN_143d58a9a(void)

undefined8 FUN_143d58a9a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar2 = param_2;
  }
  *(undefined1 *)(lVar2 + iVar1) = 7;
  return 1;
}



// FUNCTION 143d58aea FUN_143d58aea body=11720 status=ok
// SIG undefined FUN_143d58aea(void)

void FUN_143d58aea(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  code *pcVar4;
  undefined2 *puVar5;
  void *pvVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined8 ****ppppuVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  char *pcVar22;
  undefined *puVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_2d8 [32];
  double local_2b8;
  double local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [8];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  undefined4 uStack_164;
  int local_160;
  ushort local_150;
  byte local_148;
  void *local_140;
  undefined8 local_138;
  longlong *local_130;
  ushort local_120;
  uint local_118;
  char local_110;
  undefined8 ***local_108;
  int local_100;
  undefined4 local_fc;
  ushort local_f0;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  local_2a8 = param_2;
  lVar9 = FUN_144860928();
  fVar28 = (float)FUN_1407766ee(param_1);
  local_2a0 = FUN_14070ca4c(param_1);
  iVar26 = *(int *)(param_1 + 0x700);
  if (((longlong)iVar26 < 0) || (*(int *)(param_1 + 0x6e0) <= iVar26)) {
LAB_143d58bcf:
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x6d8);
    if (*(longlong *)(param_1 + 0x6d8) == 0) {
      lVar12 = param_1 + 0xd8;
    }
    puVar18 = (uint *)((longlong)iVar26 * 0xc0 + lVar12);
    if ((puVar18 == (uint *)0x0) || (puVar18[1] == 0)) goto LAB_143d58bcf;
    uVar24 = *puVar18;
    lVar12 = 0;
    if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
      plVar21 = (longlong *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
      if (((plVar21 == (longlong *)0x0) || (*(uint *)(plVar21 + 2) != puVar18[1])) ||
         ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_143d58bcf;
      lVar12 = *plVar21;
    }
  }
  plVar21 = &DAT_14cb7e198;
  if (*(char *)(param_1 + 0x755) == '\0') {
    plVar21 = &DAT_14cb7e190;
  }
  plVar10 = &DAT_14cb7e188;
  if (*(char *)(param_1 + 0x755) != '\x01') {
    plVar10 = plVar21;
  }
  puVar20 = (undefined8 *)*plVar10;
  local_298 = lVar9;
  uVar11 = FUN_1470e5326(local_2a8,&DAT_14cb7e1a8);
  local_140 = (void *)0x0;
  local_120 = 8;
  local_118 = CONCAT31(local_118._1_3_,0x12);
  local_110 = 0;
  if ((DAT_14c9a9954 & 0x20) == 0) {
    local_110 = 0x12;
  }
  local_138 = puVar20;
  lVar9 = FUN_1470e53c2(uVar11,&DAT_14cb7e170);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  if (lVar12 == 0) {
    FUN_140056680(local_178,&DAT_149e01fe8);
  }
  else {
    local_140 = *(void **)(lVar12 + 0x18);
    FUN_1400021e4(&local_140,local_178);
  }
  FUN_1470ed5e8(&local_140,local_178);
  lVar9 = FUN_1470e53c2(uVar11,&DAT_14cb7e168);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0xa4,local_188,fVar28);
  FUN_1470ed5e8(&local_140,local_188);
  FUN_1446f470e(&local_108,L"bIsInUse",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  pcVar2 = (char *)(param_1 + 0x6f4);
  FUN_1470eb4aa(pcVar2,local_198,fVar28);
  FUN_1470ed5e8(&local_140,local_198);
  FUN_1446f470e(&local_108,L"bIsMajorEngageTarget",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1400b22c2(&local_1a8,"Unaware");
  cVar3 = *(char *)(param_1 + 0xa0);
  if (cVar3 == '\x01') {
    pcVar22 = "Aware";
LAB_143d58ef6:
    FUN_1400b22c2(&local_140,pcVar22);
    if (local_1a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_1a8 = local_140;
    local_1a0 = (int)local_138;
    local_19c = local_138._4_4_;
  }
  else {
    if (cVar3 == '\x02') {
      pcVar22 = "Fan";
      goto LAB_143d58ef6;
    }
    if (cVar3 == '\x03') {
      pcVar22 = "Friend";
      goto LAB_143d58ef6;
    }
  }
  iVar26 = local_1a0;
  pvVar6 = local_1a8;
  local_1b8 = (void *)0x0;
  local_1b0 = local_1a0;
  if (local_1a0 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_1a0,0);
    memcpy(local_1b8,pvVar6,(longlong)iVar26 * 2);
  }
  FUN_1470ed5e8(&local_140,&local_1b8);
  FUN_1446f470e(&local_108,L"PlayerAwarenessLevel",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  uVar11 = FUN_1470e5326(local_2a8,&DAT_14cb7e1b0);
  if ((*(char *)(param_1 + 0x6e9) == '\x01') && (*(char *)(param_1 + 0x6e8) == '\x01')) {
    bVar7 = true;
    if (0.0 < *(float *)(param_1 + 0x6f0)) {
      bVar7 = fVar28 - *(float *)(param_1 + 0x6ec) <= *(float *)(param_1 + 0x6f0);
    }
  }
  else {
    bVar7 = false;
  }
  local_140 = (void *)0x0;
  local_120 = 4;
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(uint)bVar7);
  local_110 = (DAT_14c9a8634 & 0x20) == 0;
  local_118 = CONCAT31(local_118._1_3_,1);
  lVar9 = FUN_1470e53c2(uVar11,&DAT_14cb7e1d0);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa((char *)(param_1 + 0x718),local_1c8,fVar28);
  FUN_1470ed5e8(&local_140,local_1c8);
  FUN_1446f470e(&local_108,L"bOnMajorEngageCooldown",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  fVar33 = 0.0;
  if (lVar12 == 0) {
LAB_143d5919d:
    fVar33 = 0.0;
  }
  else {
    if ((*(char *)(param_1 + 0x719) == '\x01') && (*(char *)(param_1 + 0x718) == '\x01')) {
      bVar7 = true;
      if (0.0 < *(float *)(param_1 + 0x720)) {
        bVar7 = fVar28 - *(float *)(param_1 + 0x71c) <= *(float *)(param_1 + 0x720);
      }
    }
    else {
      bVar7 = false;
    }
    fVar29 = *(float *)(param_1 + 0x714);
    fVar32 = (float)FUN_1407766ee(param_1);
    if ((*(char *)(param_1 + 0x6f5) == '\x01') && (*pcVar2 == '\x01')) {
      fVar33 = 0.0;
      fVar32 = fVar32 - *(float *)(param_1 + 0x6f8);
      if (0.0 < *(float *)(param_1 + 0x6fc)) {
        if (*(float *)(param_1 + 0x6fc) < fVar32) goto LAB_143d5919d;
        if (!bVar7 && fVar29 <= fVar32) goto LAB_143d5b02f;
      }
      else if (!bVar7 && fVar29 <= fVar32) {
LAB_143d5b02f:
        if ((*(char *)(param_1 + 0x7cd) == '\x01') && (*(char *)(param_1 + 0x7cc) == '\x01')) {
          fVar29 = *(float *)(param_1 + 0x7d4);
          if (0.0 < fVar29) {
            if (fVar29 < fVar28 - *(float *)(param_1 + 2000)) goto LAB_143d591da;
            fVar33 = *(float *)(param_1 + 0x784);
            fVar32 = fVar28 - *(float *)(param_1 + 2000);
            if (fVar29 < fVar32) {
              fVar32 = 0.0;
            }
          }
          else {
            fVar33 = *(float *)(param_1 + 0x784);
            fVar32 = fVar28 - *(float *)(param_1 + 2000);
          }
          fVar33 = fVar33 - fVar32;
        }
      }
    }
  }
LAB_143d591da:
  local_140 = (void *)0x0;
  local_120 = 4;
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,fVar33);
  local_118 = CONCAT31(local_118._1_3_,3);
  local_110 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  lVar9 = FUN_1470e53c2(uVar11,&DAT_14cb7e1f0);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  uVar11 = FUN_1470e5326(local_2a8,&DAT_14cb7e1b8);
  FUN_1470eb4aa(param_1 + 0x724,local_1d8,fVar28);
  FUN_1470ed5e8(&local_140,local_1d8);
  FUN_1446f470e(&local_108,L"bCanStartMinorEngage",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0x748,local_1e8,fVar28);
  FUN_1470ed5e8(&local_140,local_1e8);
  FUN_1446f470e(&local_108,L"bOnMinorEngageCooldown",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa((char *)(param_1 + 0x73c),local_1f8,fVar28);
  FUN_1470ed5e8(&local_140,local_1f8);
  FUN_1446f470e(&local_108,L"bMinorEngageTimer",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0x730,local_208,fVar28);
  FUN_1470ed5e8(&local_140,local_208);
  FUN_1446f470e(&local_108,L"bHasRolledMinorEngageChance",1);
  lVar9 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar9 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  if (lVar12 == 0) {
    fVar32 = 0.0;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x714);
    fVar29 = (float)FUN_1407766ee(param_1);
    if ((*(char *)(param_1 + 0x6f5) == '\x01') && (*pcVar2 == '\x01')) {
      fVar32 = 0.0;
      fVar29 = fVar29 - *(float *)(param_1 + 0x6f8);
      if (((*(float *)(param_1 + 0x6fc) <= 0.0) || (fVar29 <= *(float *)(param_1 + 0x6fc))) &&
         (fVar33 <= fVar29)) goto LAB_143d59571;
    }
    if (*(char *)(param_1 + 0x73d) == '\x01') {
      fVar32 = 0.0;
      if (*(char *)(param_1 + 0x73c) == '\x01') {
        fVar33 = *(float *)(param_1 + 0x744);
        if (0.0 < fVar33) {
          if (fVar33 < fVar28 - *(float *)(param_1 + 0x740)) goto LAB_143d59571;
          fVar32 = *(float *)(param_1 + 0x780);
          fVar29 = fVar28 - *(float *)(param_1 + 0x740);
          if (fVar33 < fVar29) {
            fVar29 = 0.0;
          }
        }
        else {
          fVar32 = *(float *)(param_1 + 0x780);
          fVar29 = fVar28 - *(float *)(param_1 + 0x740);
        }
        fVar32 = fVar32 - fVar29;
      }
    }
    else {
      fVar32 = 0.0;
    }
  }
LAB_143d59571:
  lVar9 = local_298;
  local_140 = (void *)0x0;
  local_120 = 4;
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,fVar32);
  local_118 = CONCAT31(local_118._1_3_,3);
  local_110 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  lVar12 = FUN_1470e53c2(uVar11,&DAT_14cb7e1f8);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  uVar11 = FUN_1470e5326(local_2a8,&DAT_14cb7e1c0);
  if (*(char *)(param_1 + 0x7c0) == '\x05') {
    FUN_140056680(local_218,&DAT_149e01fe8);
  }
  else {
    uVar13 = FUN_1486dbaa1();
    FUN_1401cfad2(uVar13,local_218,*(undefined1 *)(param_1 + 0x7c0));
  }
  FUN_1470ed5e8(&local_140,local_218);
  FUN_1446f470e(&local_108,L"Greeting",1);
  lVar12 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0x79c,local_228,fVar28);
  FUN_1470ed5e8(&local_140,local_228);
  lVar12 = FUN_1470e53c2(uVar11,&DAT_14cb7e1d8);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0x7b4,local_238,fVar28);
  FUN_1470ed5e8(&local_140,local_238);
  lVar12 = FUN_1470e53c2(uVar11,&DAT_14cb7e1e8);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0x7a8,local_248,fVar28);
  FUN_1470ed5e8(&local_140,local_248);
  lVar12 = FUN_1470e53c2(uVar11,&DAT_14cb7e1e0);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  uVar11 = FUN_1470e5326(local_2a8,&DAT_14cb7e1c8);
  local_140 = (void *)0x0;
  local_120 = 4;
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(uint)*(byte *)(param_1 + 0x770));
  local_110 = (DAT_14c9a8634 & 0x20) == 0;
  local_118 = CONCAT31(local_118._1_3_,1);
  FUN_1446f470e(&local_108,L"bInActiveMission",1);
  lVar12 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 0xbc,local_258,fVar28);
  FUN_1470ed5e8(&local_140,local_258);
  FUN_1446f470e(&local_108,L"bHasActiveLevelSequence",1);
  lVar12 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  FUN_1470eb4aa(param_1 + 200,local_268,fVar28);
  FUN_1470ed5e8(&local_140,local_268);
  FUN_1446f470e(&local_108,L"bHasAggro",1);
  lVar12 = FUN_1470e53c2(uVar11,&local_108);
  FUN_1403719a4(lVar12 + 8,&local_140);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar20 = local_138;
    if (local_120 < 0x19) {
      puVar20 = &local_138;
    }
    (*pcVar4)(puVar20);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(local_138);
  }
  local_140 = (void *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_118 = 0;
  FUN_1456bb102(&local_140,local_2a0);
  pfVar27 = &local_168;
  FUN_1447c3578(lVar9 + 0x110,pfVar27,&local_140);
  if (local_148 == 3) {
    fVar33 = local_168;
    bVar8 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_168,3);
    fVar33 = 0.0;
    if (local_e8 != 0) {
      fVar33 = local_108._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar19 = &local_108;
      if (0x18 < local_f0) {
        ppppuVar19 = (undefined8 ****)local_108;
      }
      (*pcVar4)(ppppuVar19);
    }
    bVar8 = local_148;
    if (0x18 < local_f0) {
      FUN_1400020a8(local_108);
      bVar8 = local_148;
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_150) {
      pfVar27 = (float *)CONCAT44(uStack_164,local_168);
    }
    (*pcVar4)(pfVar27);
  }
  if (0x18 < local_150) {
    FUN_1400020a8(CONCAT44(uStack_164,local_168));
  }
  lVar12 = DAT_14c9a3da0;
  if ((longlong)(int)local_118 != 0) {
    lVar25 = (longlong)(int)local_118 + -1;
    lVar14 = lVar25 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar12 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14c9a3da0;
    iVar26 = (int)lVar25;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar26;
    }
    *(undefined4 *)(lVar12 + lVar14) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar12 + 4 + lVar14) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar17 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar17 = iVar26;
    }
    bVar8 = (byte)lVar25 & 0x1f;
    DAT_14c9a3dd0 = iVar26;
    *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    local_118 = 0;
  }
  if (((char)local_140 == '\x03') && (local_130 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_130 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_130 + 0x10))();
    }
  }
  local_140 = (void *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_118 = 0;
  FUN_1456bb102(&local_140,local_2a0);
  pfVar27 = &local_168;
  FUN_1447c3578(lVar9 + 0x148,pfVar27,&local_140);
  if (local_148 == 3) {
    fVar29 = local_168;
    bVar8 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_168,3);
    fVar29 = 0.0;
    if (local_e8 != 0) {
      fVar29 = local_108._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar19 = &local_108;
      if (0x18 < local_f0) {
        ppppuVar19 = (undefined8 ****)local_108;
      }
      (*pcVar4)(ppppuVar19);
    }
    bVar8 = local_148;
    if (0x18 < local_f0) {
      FUN_1400020a8(local_108);
      bVar8 = local_148;
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_150) {
      pfVar27 = (float *)CONCAT44(uStack_164,local_168);
    }
    (*pcVar4)(pfVar27);
  }
  if (0x18 < local_150) {
    FUN_1400020a8(CONCAT44(uStack_164,local_168));
  }
  lVar12 = DAT_14c9a3da0;
  if ((longlong)(int)local_118 != 0) {
    lVar25 = (longlong)(int)local_118 + -1;
    lVar14 = lVar25 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar12 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14c9a3da0;
    iVar26 = (int)lVar25;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar26;
    }
    *(undefined4 *)(lVar12 + lVar14) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar12 + 4 + lVar14) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar17 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar17 = iVar26;
    }
    bVar8 = (byte)lVar25 & 0x1f;
    DAT_14c9a3dd0 = iVar26;
    *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    local_118 = 0;
  }
  if (((char)local_140 == '\x03') && (local_130 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_130 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_130 + 0x10))();
    }
  }
  local_140 = (void *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_118 = 0;
  FUN_1456bb102(&local_140,local_2a0);
  pfVar27 = &local_168;
  FUN_1447c3578(lVar9 + 0x228,pfVar27,&local_140);
  if (local_148 == 3) {
    fVar32 = local_168;
    bVar8 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_168,3);
    fVar32 = 0.0;
    if (local_e8 != 0) {
      fVar32 = local_108._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar19 = &local_108;
      if (0x18 < local_f0) {
        ppppuVar19 = (undefined8 ****)local_108;
      }
      (*pcVar4)(ppppuVar19);
    }
    bVar8 = local_148;
    if (0x18 < local_f0) {
      FUN_1400020a8(local_108);
      bVar8 = local_148;
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_150) {
      pfVar27 = (float *)CONCAT44(uStack_164,local_168);
    }
    (*pcVar4)(pfVar27);
  }
  if (0x18 < local_150) {
    FUN_1400020a8(CONCAT44(uStack_164,local_168));
  }
  lVar12 = DAT_14c9a3da0;
  if ((longlong)(int)local_118 != 0) {
    lVar25 = (longlong)(int)local_118 + -1;
    lVar14 = lVar25 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar12 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14c9a3da0;
    iVar26 = (int)lVar25;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar26;
    }
    *(undefined4 *)(lVar12 + lVar14) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar12 + 4 + lVar14) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar17 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar17 = iVar26;
    }
    bVar8 = (byte)lVar25 & 0x1f;
    DAT_14c9a3dd0 = iVar26;
    *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    local_118 = 0;
  }
  if (((char)local_140 == '\x03') && (local_130 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_130 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_130 + 0x10))();
    }
  }
  local_140 = (void *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_118 = 0;
  FUN_1456bb102(&local_140,local_2a0);
  pfVar27 = &local_168;
  FUN_1447c3578(lVar9 + 0x260,pfVar27,&local_140);
  if (local_148 == 3) {
    fVar34 = local_168;
    bVar8 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_168,3);
    fVar34 = 0.0;
    if (local_e8 != 0) {
      fVar34 = local_108._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar19 = &local_108;
      if (0x18 < local_f0) {
        ppppuVar19 = (undefined8 ****)local_108;
      }
      (*pcVar4)(ppppuVar19);
    }
    bVar8 = local_148;
    if (0x18 < local_f0) {
      FUN_1400020a8(local_108);
      bVar8 = local_148;
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_150) {
      pfVar27 = (float *)CONCAT44(uStack_164,local_168);
    }
    (*pcVar4)(pfVar27);
  }
  if (0x18 < local_150) {
    FUN_1400020a8(CONCAT44(uStack_164,local_168));
  }
  lVar12 = DAT_14c9a3da0;
  if ((longlong)(int)local_118 != 0) {
    lVar25 = (longlong)(int)local_118 + -1;
    lVar14 = lVar25 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar12 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14c9a3da0;
    iVar26 = (int)lVar25;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar26;
    }
    *(undefined4 *)(lVar12 + lVar14) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar12 + 4 + lVar14) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar17 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar17 = iVar26;
    }
    bVar8 = (byte)lVar25 & 0x1f;
    DAT_14c9a3dd0 = iVar26;
    *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    local_118 = 0;
  }
  if (((char)local_140 == '\x03') && (local_130 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_130 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_130 + 0x10))();
    }
  }
  local_140 = (void *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_118 = 0;
  FUN_1456bb102(&local_140,local_2a0);
  pfVar27 = &local_168;
  FUN_1447c3578(lVar9 + 0x298,pfVar27,&local_140);
  if (local_148 == 3) {
    uVar24 = 3;
    fVar35 = local_168;
  }
  else {
    FUN_1400b56fe(&local_108,&local_168,3);
    fVar35 = 0.0;
    if (local_e8 != 0) {
      fVar35 = local_108._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar19 = &local_108;
      if (0x18 < local_f0) {
        ppppuVar19 = (undefined8 ****)local_108;
      }
      (*pcVar4)(ppppuVar19);
    }
    if (0x18 < local_f0) {
      FUN_1400020a8(local_108);
    }
    uVar24 = (uint)local_148;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar24 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_150) {
      pfVar27 = (float *)CONCAT44(uStack_164,local_168);
    }
    (*pcVar4)(pfVar27);
  }
  if (0x18 < local_150) {
    FUN_1400020a8(CONCAT44(uStack_164,local_168));
  }
  lVar9 = DAT_14c9a3da0;
  if ((longlong)(int)local_118 != 0) {
    lVar14 = (longlong)(int)local_118 + -1;
    lVar12 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar9 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar9 = DAT_14c9a3da0;
    iVar26 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar26;
    }
    *(undefined4 *)(lVar9 + lVar12) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar9 + 4 + lVar12) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar17 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar17 = iVar26;
    }
    bVar8 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar26;
    *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    local_118 = 0;
  }
  if (((char)local_140 == '\x03') && (local_130 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_130 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_130 + 0x10))();
    }
  }
  lVar9 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x6d8);
  }
  if ((longlong)*(int *)(param_1 + 0x6e0) != 0) {
    lVar9 = lVar9 + 0xb4;
    lVar12 = (longlong)*(int *)(param_1 + 0x6e0) * 0xc0;
    do {
      if (((((*(int *)(lVar9 + -0xb0) != 0) && (uVar24 = *(uint *)(lVar9 + -0xb4), -1 < (int)uVar24)
            ) && ((int)uVar24 < DAT_14c9647dc)) &&
          ((plVar21 = (longlong *)
                      ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
           plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(lVar9 + -0xb0))))) &&
         (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (*plVar21 != 0)))) {
        local_140 = *(void **)(*plVar21 + 0x18);
        uVar11 = FUN_1470e5326(local_2a8,&local_140);
        local_140 = (void *)0x0;
        local_120 = 4;
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,*(undefined4 *)(lVar9 + -0x4c));
        local_118 = CONCAT31(local_118._1_3_,3);
        local_110 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1446f470e(&local_108,L"Distance",1);
        lVar14 = FUN_1470e53c2(uVar11,&local_108);
        FUN_1403719a4(lVar14 + 8,&local_140);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
        FUN_1446f470e(&local_168,L"bInMinorEngageRange",1);
        lVar14 = FUN_1470e53c2(uVar11,&local_168);
        fVar30 = *(float *)(lVar9 + -0x4c) - fVar33;
        fVar31 = 0.0;
        if (0.0 <= fVar30) {
          fVar31 = fVar30;
        }
        local_f0 = 4;
        local_108 = (undefined8 ***)CONCAT44(local_108._4_4_,fVar31);
        local_e8 = 3;
        if ((*(char *)(lVar9 + -0x3b) == '\x01') && (*(char *)(lVar9 + -0x3c) == '\x01')) {
          bVar7 = true;
          if (0.0 < *(float *)(lVar9 + -0x34)) {
            bVar7 = fVar28 - *(float *)(lVar9 + -0x38) <= *(float *)(lVar9 + -0x34);
          }
        }
        else {
          bVar7 = false;
        }
        local_140 = (void *)0x0;
        local_120 = 4;
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(uint)bVar7);
        local_118 = CONCAT31(local_118._1_3_,1);
        local_110 = (DAT_14c9a8634 & 0x20) == 0;
        FUN_144983130(lVar14 + 8,&local_140);
        puVar20 = (undefined8 *)(lVar14 + 0x40);
        bVar8 = *(byte *)(lVar14 + 0x60);
        if (bVar8 == local_e8) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            puVar20 = *(undefined8 **)(lVar14 + 0x40);
          }
          uVar15 = (ulonglong)((uint)bVar8 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar4)(puVar20);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar16 = puVar20;
            if (0x18 < *(ushort *)(lVar14 + 0x58)) {
              puVar16 = *(undefined8 **)(lVar14 + 0x40);
            }
            (*pcVar4)(puVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            FUN_1400020a8(*puVar20);
          }
          uVar24 = (uint)local_e8;
          *(ushort *)(lVar14 + 0x58) = local_f0;
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            puVar16 = (undefined8 *)FUN_14001cc68(local_f0,0);
            *puVar20 = puVar16;
            ppppuVar19 = (undefined8 ****)local_108;
            puVar20 = puVar16;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar4)(puVar20);
          }
          *(byte *)(lVar14 + 0x60) = local_e8;
        }
        *(undefined4 *)(lVar14 + 0x70) = 0;
        if (*(int *)(lVar14 + 0x74) < 0) {
          FUN_1446f8c06((undefined8 *)(lVar14 + 0x68),0);
        }
        puVar5 = *(undefined2 **)(lVar14 + 0x68);
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          (*pcVar4)(ppppuVar19);
        }
        if (0x18 < local_f0) {
          FUN_1400020a8(local_108);
        }
        FUN_1446f470e(&local_168,L"bInMajorEngageRange",1);
        lVar14 = FUN_1470e53c2(uVar11,&local_168);
        fVar30 = *(float *)(lVar9 + -0x4c) - fVar29;
        fVar31 = 0.0;
        if (0.0 <= fVar30) {
          fVar31 = fVar30;
        }
        local_f0 = 4;
        local_108 = (undefined8 ***)CONCAT44(local_108._4_4_,fVar31);
        local_e8 = 3;
        if ((*(char *)(lVar9 + -0x2f) == '\x01') && (*(char *)(lVar9 + -0x30) == '\x01')) {
          bVar7 = true;
          if (0.0 < *(float *)(lVar9 + -0x28)) {
            bVar7 = fVar28 - *(float *)(lVar9 + -0x2c) <= *(float *)(lVar9 + -0x28);
          }
        }
        else {
          bVar7 = false;
        }
        local_140 = (void *)0x0;
        local_120 = 4;
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(uint)bVar7);
        local_118 = CONCAT31(local_118._1_3_,1);
        local_110 = (DAT_14c9a8634 & 0x20) == 0;
        FUN_144983130(lVar14 + 8,&local_140);
        puVar20 = (undefined8 *)(lVar14 + 0x40);
        bVar8 = *(byte *)(lVar14 + 0x60);
        if (bVar8 == local_e8) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            puVar20 = *(undefined8 **)(lVar14 + 0x40);
          }
          uVar15 = (ulonglong)((uint)bVar8 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar4)(puVar20);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar16 = puVar20;
            if (0x18 < *(ushort *)(lVar14 + 0x58)) {
              puVar16 = *(undefined8 **)(lVar14 + 0x40);
            }
            (*pcVar4)(puVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            FUN_1400020a8(*puVar20);
          }
          uVar24 = (uint)local_e8;
          *(ushort *)(lVar14 + 0x58) = local_f0;
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            puVar16 = (undefined8 *)FUN_14001cc68(local_f0,0);
            *puVar20 = puVar16;
            ppppuVar19 = (undefined8 ****)local_108;
            puVar20 = puVar16;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar4)(puVar20);
          }
          *(byte *)(lVar14 + 0x60) = local_e8;
        }
        *(undefined4 *)(lVar14 + 0x70) = 0;
        if (*(int *)(lVar14 + 0x74) < 0) {
          FUN_1446f8c06((undefined8 *)(lVar14 + 0x68),0);
        }
        puVar5 = *(undefined2 **)(lVar14 + 0x68);
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          (*pcVar4)(ppppuVar19);
        }
        if (0x18 < local_f0) {
          FUN_1400020a8(local_108);
        }
        FUN_1446f470e(local_270,L"bIsFacingNpc",1);
        lVar14 = FUN_1470e53c2(uVar11,local_270);
        local_2b8 = (double)ABS(*(float *)(lVar9 + -0x44));
        local_2b0 = (double)fVar35;
        FUN_140002266(&local_168,L"H: %.2f / %0.2f, V: %.2f / %.2f",
                      (double)ABS(*(float *)(lVar9 + -0x48)),SUB84((double)fVar34,0));
        local_f0 = 0x10;
        local_108 = (undefined8 ****)0x0;
        lVar25 = (longlong)local_160;
        pvVar6 = (void *)CONCAT44(uStack_164,local_168);
        local_100 = local_160;
        if (lVar25 == 0) {
          local_fc = 0;
        }
        else {
          FUN_1446dd670(&local_108,local_160,0);
          memcpy(local_108,pvVar6,lVar25 * 2);
        }
        local_e8 = 8;
        if ((*(char *)(lVar9 + -0x23) == '\x01') && (*(char *)(lVar9 + -0x24) == '\x01')) {
          bVar7 = true;
          if (0.0 < *(float *)(lVar9 + -0x1c)) {
            bVar7 = fVar28 - *(float *)(lVar9 + -0x20) <= *(float *)(lVar9 + -0x1c);
          }
        }
        else {
          bVar7 = false;
        }
        local_140 = (void *)0x0;
        local_120 = 4;
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(uint)bVar7);
        local_118 = CONCAT31(local_118._1_3_,1);
        local_110 = (DAT_14c9a8634 & 0x20) == 0;
        FUN_144983130(lVar14 + 8,&local_140);
        puVar20 = (undefined8 *)(lVar14 + 0x40);
        bVar8 = *(byte *)(lVar14 + 0x60);
        if (bVar8 == local_e8) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            puVar20 = *(undefined8 **)(lVar14 + 0x40);
          }
          uVar15 = (ulonglong)((uint)bVar8 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar4)(puVar20);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar16 = puVar20;
            if (0x18 < *(ushort *)(lVar14 + 0x58)) {
              puVar16 = *(undefined8 **)(lVar14 + 0x40);
            }
            (*pcVar4)(puVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            FUN_1400020a8(*puVar20);
          }
          uVar24 = (uint)local_e8;
          *(ushort *)(lVar14 + 0x58) = local_f0;
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            puVar16 = (undefined8 *)FUN_14001cc68(local_f0,0);
            *puVar20 = puVar16;
            ppppuVar19 = (undefined8 ****)local_108;
            puVar20 = puVar16;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar4)(puVar20);
          }
          *(byte *)(lVar14 + 0x60) = local_e8;
        }
        *(undefined4 *)(lVar14 + 0x70) = 0;
        if (*(int *)(lVar14 + 0x74) < 0) {
          FUN_1446f8c06((undefined8 *)(lVar14 + 0x68),0);
        }
        puVar5 = *(undefined2 **)(lVar14 + 0x68);
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          (*pcVar4)(ppppuVar19);
        }
        if (0x18 < local_f0) {
          FUN_1400020a8(local_108);
        }
        if (CONCAT44(uStack_164,local_168) != 0) {
          FUN_1400020a8();
        }
        FUN_1446f470e(&local_168,L"bIsNpcFacing",1);
        lVar14 = FUN_1470e53c2(uVar11,&local_168);
        fVar31 = ABS(*(float *)(lVar9 + -0x40)) - fVar32;
        if (180.0 <= fVar31) {
          fVar31 = 180.0;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        local_f0 = 4;
        local_108 = (undefined8 ***)CONCAT44(local_108._4_4_,fVar31);
        local_e8 = 3;
        if ((*(char *)(lVar9 + -0x17) == '\x01') && (*(char *)(lVar9 + -0x18) == '\x01')) {
          bVar7 = true;
          if (0.0 < *(float *)(lVar9 + -0x10)) {
            bVar7 = fVar28 - *(float *)(lVar9 + -0x14) <= *(float *)(lVar9 + -0x10);
          }
        }
        else {
          bVar7 = false;
        }
        local_140 = (void *)0x0;
        local_120 = 4;
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(uint)bVar7);
        local_118 = CONCAT31(local_118._1_3_,1);
        local_110 = (DAT_14c9a8634 & 0x20) == 0;
        FUN_144983130(lVar14 + 8,&local_140);
        puVar20 = (undefined8 *)(lVar14 + 0x40);
        bVar8 = *(byte *)(lVar14 + 0x60);
        if (bVar8 == local_e8) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            puVar20 = *(undefined8 **)(lVar14 + 0x40);
          }
          uVar15 = (ulonglong)((uint)bVar8 * 0x120);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar4)(puVar20);
          }
        }
        else {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar16 = puVar20;
            if (0x18 < *(ushort *)(lVar14 + 0x58)) {
              puVar16 = *(undefined8 **)(lVar14 + 0x40);
            }
            (*pcVar4)(puVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x58)) {
            FUN_1400020a8(*puVar20);
          }
          uVar24 = (uint)local_e8;
          *(ushort *)(lVar14 + 0x58) = local_f0;
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            puVar16 = (undefined8 *)FUN_14001cc68(local_f0,0);
            *puVar20 = puVar16;
            ppppuVar19 = (undefined8 ****)local_108;
            puVar20 = puVar16;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar4 == (code *)0x0) {
            memcpy(puVar20,ppppuVar19,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar4)(puVar20);
          }
          *(byte *)(lVar14 + 0x60) = local_e8;
        }
        *(undefined4 *)(lVar14 + 0x70) = 0;
        if (*(int *)(lVar14 + 0x74) < 0) {
          FUN_1446f8c06((undefined8 *)(lVar14 + 0x68),0);
        }
        puVar5 = *(undefined2 **)(lVar14 + 0x68);
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar19 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar19 = (undefined8 ****)local_108;
          }
          (*pcVar4)(ppppuVar19);
        }
        if (0x18 < local_f0) {
          FUN_1400020a8(local_108);
        }
        FUN_1470eb4aa(lVar9,local_280,fVar28);
        FUN_1470ed5e8(&local_140,local_280);
        FUN_1446f470e(&local_108,L"bIsSeen",1);
        lVar14 = FUN_1470e53c2(uVar11,&local_108);
        FUN_1403719a4(lVar14 + 8,&local_140);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
        FUN_1470eb4aa(lVar9 + -0xc,local_290,fVar28);
        FUN_1470ed5e8(&local_140,local_290);
        FUN_1446f470e(&local_108,L"bIsPathing",1);
        lVar14 = FUN_1470e53c2(uVar11,&local_108);
        FUN_1403719a4(lVar14 + 8,&local_140);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_118 & 0xff) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar20 = &local_138;
          if (0x18 < local_120) {
            puVar20 = local_138;
          }
          (*pcVar4)(puVar20);
        }
        if (0x18 < local_120) {
          FUN_1400020a8(local_138);
        }
      }
      lVar9 = lVar9 + 0xc0;
      lVar12 = lVar12 + -0xc0;
    } while (lVar12 != 0);
  }
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d5b958 FUN_143d5b958 body=64 status=ok
// SIG undefined FUN_143d5b958(void)

undefined8 FUN_143d5b958(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 4;
  FUN_14387d746(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5b99a FUN_143d5b99a body=1750 status=ok
// SIG undefined FUN_143d5b99a(void)

undefined8 FUN_143d5b99a(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *****pppppuVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_c8 [40];
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar5 = (**(code **)(*param_1 + 0x28))();
  if (cVar5 != '\0') {
    FUN_1403f511a(param_1 + 0x1b);
  }
  lVar10 = param_1[9];
  uVar7 = FUN_140343d7a(param_1);
  lVar8 = FUN_14886dc04(lVar10 + 0x338,uVar7);
  if (lVar8 != 0) {
    uVar7 = FUN_140343d7a(param_1);
    lVar9 = FUN_14886dc04(lVar10 + 0x370,uVar7);
    if (lVar9 != 0) {
      lVar16 = param_1[8];
      if (lVar16 == 0) {
        lVar14 = 0;
        local_98 = (longlong *)0x0;
LAB_143d5bf63:
        local_90 = (longlong *)0x0;
        bVar20 = true;
      }
      else {
        if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_143d5bd82:
          lVar14 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar16 + 0x48);
          lVar14 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar13 == (longlong *)0x0) ||
               (((int)plVar13[2] != *(int *)(lVar16 + 0x4c) ||
                ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143d5bd82;
            lVar14 = *plVar13;
          }
        }
        plVar13 = *(longlong **)(lVar16 + 0x118);
        local_98 = param_1;
        if (plVar13 == (longlong *)0x0) goto LAB_143d5bf63;
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
        bVar20 = false;
        local_90 = plVar13;
      }
      plVar13 = local_90;
      local_78 = 0;
      local_a0 = '\x03';
      local_88._0_4_ = 0;
      if (lVar14 == 0) {
        iVar6 = 0;
        uVar2 = (uint)local_88;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0xc);
        local_88 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar6 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar6 = *(int *)(lVar16 + 0x10);
          bVar19 = iVar6 == 0;
          if (bVar19) {
            *(int *)(lVar16 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_88;
          if (bVar19) {
            iVar6 = iVar12;
          }
        }
      }
      local_88._0_4_ = uVar2;
      local_88 = CONCAT44(iVar6,(uint)local_88);
      local_80 = 2;
      if (local_78 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_78 + -1,1);
        local_78 = 0;
      }
      if (!bVar20) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      FUN_1447c3578(lVar10 + 0x3a8,local_70,&local_a0);
      lVar10 = FUN_14030a32e(local_70);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
      if (pcVar3 != (code *)0x0) {
        pppppuVar17 = local_70;
        if (0x18 < local_58) {
          pppppuVar17 = (undefined8 *****)local_70[0];
        }
        (*pcVar3)(pppppuVar17);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      lVar16 = DAT_14c9a3da0;
      if ((longlong)local_78 != 0) {
        lVar18 = (longlong)local_78 + -1;
        lVar14 = lVar18 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
        if (*(longlong *)(lVar16 + lVar14) != 0) {
          FUN_1400020a8();
        }
        lVar16 = DAT_14c9a3da0;
        iVar6 = (int)lVar18;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
        }
        *(undefined4 *)(lVar16 + lVar14) = 0xffffffff;
        iVar12 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar12 = DAT_14c9a3dd0;
        }
        *(int *)(lVar16 + 4 + lVar14) = iVar12;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar12 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar12 = iVar6;
        }
        bVar4 = (byte)lVar18 & 0x1f;
        DAT_14c9a3dd0 = iVar6;
        *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
             (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        local_78 = 0;
      }
      if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      if (lVar10 != 0) {
        if (param_1[0x42] == 0) {
          uVar7 = FUN_1464cd558();
          FUN_140f48956(param_1,&local_a0,uVar7,FUN_148874180);
          plVar13 = local_98;
          lVar16 = CONCAT71(uStack_9f,local_a0);
          if (local_98 == (longlong *)0x0) {
            param_1[0x42] = lVar16;
            plVar15 = (longlong *)param_1[0x43];
            if (plVar15 != (longlong *)0x0) {
              param_1[0x43] = 0;
LAB_143d5be62:
              LOCK();
              plVar13 = plVar15 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar6 = *piVar1;
                UNLOCK();
joined_r0x000143d5be94:
                if (iVar6 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
              goto LAB_143d5bea0;
            }
          }
          else {
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
            if (local_98 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_98 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_98)(local_98);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            param_1[0x42] = lVar16;
            plVar15 = (longlong *)param_1[0x43];
            if (plVar13 == plVar15) {
              LOCK();
              plVar15 = plVar13 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar6 = *piVar1;
                UNLOCK();
                plVar15 = plVar13;
                goto joined_r0x000143d5be94;
              }
            }
            else {
              param_1[0x43] = (longlong)plVar13;
              if (plVar15 != (longlong *)0x0) goto LAB_143d5be62;
            }
LAB_143d5bea0:
            lVar16 = param_1[0x42];
          }
          if (lVar16 == 0) goto LAB_143d5b9f8;
        }
        uVar2 = *(uint *)(lVar10 + 0xc);
        *(uint *)(param_1 + 0x46) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar20 = iVar6 == 0;
          if (bVar20) {
            *(int *)(lVar10 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar6 = iVar12;
          }
        }
        *(int *)((longlong)param_1 + 0x234) = iVar6;
        uVar2 = *(uint *)(lVar8 + 0xc);
        *(uint *)(param_1 + 0x45) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar20 = iVar6 == 0;
          if (bVar20) {
            *(int *)(lVar10 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar6 = iVar12;
          }
        }
        *(int *)((longlong)param_1 + 0x22c) = iVar6;
        uVar2 = *(uint *)(lVar9 + 0xc);
        *(uint *)(param_1 + 0x44) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar20 = iVar6 == 0;
          if (bVar20) {
            *(int *)(lVar10 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar6 = iVar12;
          }
        }
        *(int *)((longlong)param_1 + 0x224) = iVar6;
        uVar7 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),2);
        goto LAB_143d5b9fa;
      }
    }
  }
LAB_143d5b9f8:
  uVar7 = 0;
LAB_143d5b9fa:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5c088 FUN_143d5c088 body=36 status=ok
// SIG undefined FUN_143d5c088(void)

undefined8 FUN_143d5c088(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x7b) == '\x01') &&
     (cVar1 = FUN_1411fc808(), cVar1 == '\0')) {
    return 2;
  }
  return 0;
}



// FUNCTION 143d5c0ac FUN_143d5c0ac body=64 status=ok
// SIG undefined FUN_143d5c0ac(void)

undefined8 FUN_143d5c0ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 4;
  FUN_14387d746(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5c0ee FUN_143d5c0ee body=1734 status=ok
// SIG undefined FUN_143d5c0ee(void)

undefined8 FUN_143d5c0ee(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *****pppppuVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x28))();
  lVar9 = param_1[9];
  uVar6 = FUN_140343d7a(param_1);
  lVar7 = FUN_14886f34e(lVar9 + 0x80,uVar6);
  if (lVar7 != 0) {
    uVar6 = FUN_140343d7a(param_1);
    lVar8 = FUN_14886f34e(lVar9 + 0xb8,uVar6);
    if (lVar8 != 0) {
      lVar15 = param_1[8];
      if (lVar15 == 0) {
        lVar13 = 0;
        local_98 = (longlong *)0x0;
LAB_143d5c6a7:
        local_90 = (longlong *)0x0;
        bVar19 = true;
      }
      else {
        if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_143d5c4c6:
          lVar13 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar15 + 0x48);
          lVar13 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar12 == (longlong *)0x0) ||
               (((int)plVar12[2] != *(int *)(lVar15 + 0x4c) ||
                ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143d5c4c6;
            lVar13 = *plVar12;
          }
        }
        plVar12 = *(longlong **)(lVar15 + 0x118);
        local_98 = param_1;
        if (plVar12 == (longlong *)0x0) goto LAB_143d5c6a7;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar12 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        bVar19 = false;
        local_90 = plVar12;
      }
      plVar12 = local_90;
      local_78 = 0;
      local_a0 = '\x03';
      local_88._0_4_ = 0;
      if (lVar13 == 0) {
        iVar5 = 0;
        uVar2 = (uint)local_88;
      }
      else {
        uVar2 = *(uint *)(lVar13 + 0xc);
        local_88 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar5 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar5 = *(int *)(lVar15 + 0x10);
          bVar18 = iVar5 == 0;
          if (bVar18) {
            *(int *)(lVar15 + 0x10) = iVar11;
            iVar5 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_88;
          if (bVar18) {
            iVar5 = iVar11;
          }
        }
      }
      local_88._0_4_ = uVar2;
      local_88 = CONCAT44(iVar5,(uint)local_88);
      local_80 = 2;
      if (local_78 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_78 + -1,1);
        local_78 = 0;
      }
      if (!bVar19) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      FUN_1447c3578(lVar9 + 0xf0,local_70,&local_a0);
      lVar9 = FUN_14030a32e(local_70);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
      if (pcVar3 != (code *)0x0) {
        pppppuVar16 = local_70;
        if (0x18 < local_58) {
          pppppuVar16 = (undefined8 *****)local_70[0];
        }
        (*pcVar3)(pppppuVar16);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      lVar15 = DAT_14c9a3da0;
      if ((longlong)local_78 != 0) {
        lVar17 = (longlong)local_78 + -1;
        lVar13 = lVar17 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
        if (*(longlong *)(lVar15 + lVar13) != 0) {
          FUN_1400020a8();
        }
        lVar15 = DAT_14c9a3da0;
        iVar5 = (int)lVar17;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
        }
        *(undefined4 *)(lVar15 + lVar13) = 0xffffffff;
        iVar11 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar11 = DAT_14c9a3dd0;
        }
        *(int *)(lVar15 + 4 + lVar13) = iVar11;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar10 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar10 = DAT_14c9a3dc0;
        }
        iVar11 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar11 = iVar5;
        }
        bVar4 = (byte)lVar17 & 0x1f;
        DAT_14c9a3dd0 = iVar5;
        *(uint *)(puVar10 + (longlong)(iVar11 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar11 >> 5) * 4) &
             (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        local_78 = 0;
      }
      if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      if (lVar9 != 0) {
        if (param_1[0x1b] == 0) {
          uVar6 = FUN_1464cd558();
          FUN_140f48956(param_1,&local_a0,uVar6,FUN_148874180);
          plVar12 = local_98;
          lVar15 = CONCAT71(uStack_9f,local_a0);
          if (local_98 == (longlong *)0x0) {
            param_1[0x1b] = lVar15;
            plVar14 = (longlong *)param_1[0x1c];
            if (plVar14 != (longlong *)0x0) {
              param_1[0x1c] = 0;
LAB_143d5c5a6:
              LOCK();
              plVar12 = plVar14 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar5 = *piVar1;
                UNLOCK();
joined_r0x000143d5c5d8:
                if (iVar5 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
              goto LAB_143d5c5e4;
            }
          }
          else {
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
            if (local_98 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_98 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*local_98)(local_98);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
            param_1[0x1b] = lVar15;
            plVar14 = (longlong *)param_1[0x1c];
            if (plVar12 == plVar14) {
              LOCK();
              plVar14 = plVar12 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar5 = *piVar1;
                UNLOCK();
                plVar14 = plVar12;
                goto joined_r0x000143d5c5d8;
              }
            }
            else {
              param_1[0x1c] = (longlong)plVar12;
              if (plVar14 != (longlong *)0x0) goto LAB_143d5c5a6;
            }
LAB_143d5c5e4:
            lVar15 = param_1[0x1b];
          }
          if (lVar15 == 0) goto LAB_143d5c13c;
        }
        uVar2 = *(uint *)(lVar9 + 0xc);
        *(uint *)(param_1 + 0x1f) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar19 = iVar5 == 0;
          if (bVar19) {
            *(int *)(lVar9 + 0x10) = iVar11;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar5 = iVar11;
          }
        }
        *(int *)((longlong)param_1 + 0xfc) = iVar5;
        uVar2 = *(uint *)(lVar7 + 0xc);
        *(uint *)(param_1 + 0x1e) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar19 = iVar5 == 0;
          if (bVar19) {
            *(int *)(lVar9 + 0x10) = iVar11;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar5 = iVar11;
          }
        }
        *(int *)((longlong)param_1 + 0xf4) = iVar5;
        uVar2 = *(uint *)(lVar8 + 0xc);
        *(uint *)(param_1 + 0x1d) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar19 = iVar5 == 0;
          if (bVar19) {
            *(int *)(lVar9 + 0x10) = iVar11;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar5 = iVar11;
          }
        }
        *(int *)((longlong)param_1 + 0xec) = iVar5;
        uVar6 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),2);
        goto LAB_143d5c13e;
      }
    }
  }
LAB_143d5c13c:
  uVar6 = 0;
LAB_143d5c13e:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5c7b6 FUN_143d5c7b6 body=1801 status=ok
// SIG undefined FUN_143d5c7b6(void)

undefined8 FUN_143d5c7b6(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined *puVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  longlong *local_a0;
  undefined8 local_98;
  byte local_90;
  int local_88;
  float local_7c;
  undefined8 local_78;
  longlong lStack_70;
  longlong *local_68;
  ushort local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 0x110) == 0) || (*(int *)(param_1 + 0x10c) == 0)) {
LAB_143d5c839:
    uVar8 = 0;
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x108);
    uVar8 = 0;
    if (((int)uVar14 < 0) || (DAT_14c9647dc <= (int)uVar14)) goto LAB_143d5c83b;
    lVar6 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    if ((((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x10c))) ||
        ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) ||
       (lVar6 = *(longlong *)(param_1 + 0x48), *(longlong *)(lVar6 + 0x80) == 0))
    goto LAB_143d5c839;
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 == 0) {
      lVar15 = 0;
      lStack_a8 = 0;
LAB_143d5cc67:
      local_a0 = (longlong *)0x0;
      bVar3 = true;
    }
    else {
      if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_143d5cb08:
        lVar15 = 0;
      }
      else {
        uVar14 = *(uint *)(lVar19 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             (((int)plVar10[2] != *(int *)(lVar19 + 0x4c) ||
              ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143d5cb08;
          lVar15 = *plVar10;
        }
      }
      plVar10 = *(longlong **)(lVar19 + 0x118);
      lStack_a8 = param_1;
      if (plVar10 == (longlong *)0x0) goto LAB_143d5cc67;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
      local_a0 = plVar10;
    }
    plVar10 = local_a0;
    local_b0 = CONCAT31(local_b0._1_3_,3);
    local_88 = 0;
    local_98._0_4_ = 0;
    if (lVar15 == 0) {
      iVar5 = 0;
      uVar14 = (uint)local_98;
    }
    else {
      uVar14 = *(uint *)(lVar15 + 0xc);
      local_98 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar5 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar19 + 0x10);
        bVar20 = iVar5 == 0;
        if (bVar20) {
          *(int *)(lVar19 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_98;
        if (bVar20) {
          iVar5 = iVar12;
        }
      }
    }
    local_98._0_4_ = uVar14;
    local_98 = CONCAT44(iVar5,(uint)local_98);
    local_90 = 2;
    if (local_88 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_88 + -1,1);
      local_88 = 0;
    }
    if (!bVar3) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    FUN_1447c3578(lVar6 + 0x88,&local_78,&local_b0);
    plVar10 = (longlong *)(param_1 + 0xe0);
    pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 +
                        (ulonglong)((uint)*(byte *)(param_1 + 0x100) * 0x120));
    if (pcVar13 != (code *)0x0) {
      plVar9 = plVar10;
      if (0x18 < *(ushort *)(param_1 + 0xf8)) {
        plVar9 = (longlong *)*plVar10;
      }
      (*pcVar13)(plVar9);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf8)) {
      FUN_1400020a8(*plVar10);
    }
    *(ushort *)(param_1 + 0xf8) = local_60;
    if (local_60 < 0x19) {
      uVar7 = (ulonglong)((uint)local_58 * 0x120);
      pcVar13 = *(code **)((longlong)&DAT_14c9a85b8 + uVar7);
      if ((pcVar13 == (code *)0x0) &&
         (pcVar13 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7), pcVar13 == (code *)0x0)) {
        memcpy(plVar10,&local_78,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (*pcVar13)(plVar10,&local_78);
      }
    }
    else {
      *plVar10 = (longlong)local_78;
      local_78 = (undefined8 *)0x0;
      local_60 = 0;
    }
    *(byte *)(param_1 + 0x100) = local_58;
    local_58 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      puVar17 = &local_78;
      if (0x18 < local_60) {
        puVar17 = local_78;
      }
      (*DAT_14c9a85d0)(puVar17);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
    lVar19 = DAT_14c9a3da0;
    if ((longlong)local_88 != 0) {
      lVar16 = (longlong)local_88 + -1;
      lVar15 = lVar16 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
      if (*(longlong *)(lVar19 + lVar15) != 0) {
        FUN_1400020a8();
      }
      lVar19 = DAT_14c9a3da0;
      iVar5 = (int)lVar16;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
      }
      *(undefined4 *)(lVar19 + lVar15) = 0xffffffff;
      iVar12 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar12 = DAT_14c9a3dd0;
      }
      *(int *)(lVar19 + 4 + lVar15) = iVar12;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar11 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar11 = DAT_14c9a3dc0;
      }
      iVar12 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar12 = iVar5;
      }
      bVar2 = (byte)lVar16 & 0x1f;
      DAT_14c9a3dd0 = iVar5;
      *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_88 = 0;
    }
    if (((char)local_b0 == '\x03') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    bVar2 = *(byte *)(param_1 + 0x100);
    if (bVar2 == 4) {
LAB_143d5cbe8:
      lVar19 = FUN_14030a32e(plVar10);
      if (lVar19 == 0) {
        if (*(char *)(param_1 + 0x100) == '\x04') {
          local_68 = *(longlong **)(param_1 + 0xf0);
          local_78 = (undefined8 *)*plVar10;
          lStack_70 = *(longlong *)(param_1 + 0xe8);
        }
        else {
          puVar18 = &local_b0;
          FUN_1400b56fe(puVar18,plVar10,4);
          bVar2 = local_90;
          if (local_90 != 0) {
            local_68 = local_a0;
            local_78 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
            lStack_70 = lStack_a8;
          }
          pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
          if (pcVar13 != (code *)0x0) {
            if (0x18 < (ushort)local_98) {
              puVar18 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
            }
            (*pcVar13)(puVar18);
          }
          if (0x18 < (ushort)local_98) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
          lVar19 = DAT_14cb7e2e8;
          if (bVar2 == 0) goto LAB_143d5cad8;
        }
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uVar8 = FUN_140343d7a(param_1);
        local_d8 = &local_c8;
        FUN_140a2a224(&local_b0,uVar8,lVar6 + 0xc0,&local_78);
      }
      else {
        uVar8 = FUN_140343d7a(param_1);
        FUN_140a2a102(&local_b0,uVar8,lVar6 + 0xc0,lVar19);
      }
      lVar19 = DAT_14cb7e2f0;
      if (local_7c <= 0.0) goto LAB_143d5cad8;
    }
    else {
      uVar14 = (uint)bVar2 * 0x120;
      if ((((*(code **)(&DAT_14c9a8560 + uVar14) != (code *)0x0) &&
           (cVar4 = (**(code **)(&DAT_14c9a8560 + uVar14))(4), cVar4 != '\0')) ||
          ((DAT_14c9a89e8 != (code *)0x0 && (cVar4 = (*DAT_14c9a89e8)(bVar2), cVar4 != '\0')))) ||
         (((lVar19 = DAT_14cb7e2d0, ((&DAT_14c9a8514)[uVar14] & 0x20) != 0 &&
           ((DAT_14c9a8994 & 0x20) == 0)) &&
          ((*(code **)(&DAT_14c9a8588 + uVar14) == (code *)0x0 ||
           (cVar4 = (**(code **)(&DAT_14c9a8588 + uVar14))(4), lVar19 = DAT_14cb7e2d0, cVar4 != '\0'
           )))))) goto LAB_143d5cbe8;
LAB_143d5cad8:
      if (lVar19 != 0) goto LAB_143d5c839;
    }
    uVar8 = 2;
  }
LAB_143d5c83b:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5cec0 FUN_143d5cec0 body=176 status=ok
// SIG undefined FUN_143d5cec0(void)

undefined8 FUN_143d5cec0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = 2;
  if (((((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) && (*(int *)(param_1 + 0x10c) != 0))
       && (uVar1 = *(uint *)(param_1 + 0x108), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x10c) &&
      ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x50))();
    uVar3 = 1;
    if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == *(char *)(param_1 + 0xd8))) {
          return 0;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar5);
    }
  }
  return uVar3;
}



// FUNCTION 143d5cf70 FUN_143d5cf70 body=172 status=ok
// SIG undefined FUN_143d5cf70(void)

undefined8 FUN_143d5cf70(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) && (*(int *)(param_1 + 0x10c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x108);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x10c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x50))();
      if ((longlong)*(int *)(lVar3 + 0x48) == 0) {
        return 1;
      }
      lVar4 = 0;
      while ((lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + lVar4), lVar2 == 0 ||
             (*(char *)(lVar2 + 0x40) != *(char *)(param_1 + 0xd8)))) {
        lVar4 = lVar4 + 0x10;
        if ((longlong)*(int *)(lVar3 + 0x48) * 0x10 == lVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d5d01c FUN_143d5d01c body=36 status=ok
// SIG undefined FUN_143d5d01c(void)

undefined8 FUN_143d5d01c(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x7b) == '\x01') &&
     (cVar1 = FUN_14104bdee(), cVar1 == '\0')) {
    return 2;
  }
  return 0;
}



// FUNCTION 143d5d040 FUN_143d5d040 body=167 status=ok
// SIG undefined FUN_143d5d040(void)

undefined8 FUN_143d5d040(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_140343d7a();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140bc1dde();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140bc1dde();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if (plVar1 != plVar3) goto LAB_143d5d09d;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_143d5d09d:
  FUN_140369bb4(&local_30,plVar3);
  *(undefined4 *)(param_1 + 0xd8) = local_30;
  *(undefined4 *)(param_1 + 0xdc) = uStack_2c;
  *(undefined4 *)(param_1 + 0xe0) = uStack_28;
  *(undefined4 *)(param_1 + 0xe4) = uStack_24;
  if (plVar3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5d0e8 FUN_143d5d0e8 body=289 status=ok
// SIG undefined FUN_143d5d0e8(void)

void FUN_143d5d0e8(undefined8 param_1,longlong param_2)

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
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
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



// FUNCTION 143d5d222 FUN_143d5d222 body=289 status=ok
// SIG undefined FUN_143d5d222(void)

void FUN_143d5d222(undefined8 param_1,longlong param_2)

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
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
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



// FUNCTION 143d5d35c FUN_143d5d35c body=83 status=ok
// SIG undefined FUN_143d5d35c(void)

void FUN_143d5d35c(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140a40fb0(param_2);
    if (lVar1 != 0) {
      if (param_3 != '\0') {
        FUN_1400bc96c();
        return;
      }
      FUN_1400bc8c2(lVar1 + 0x1218,param_1 + 0xe0);
      return;
    }
  }
  return;
}



// FUNCTION 143d5d3b0 FUN_143d5d3b0 body=83 status=ok
// SIG undefined FUN_143d5d3b0(void)

void FUN_143d5d3b0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140a40fb0(param_2);
    if (lVar1 != 0) {
      if (param_3 != '\0') {
        FUN_1400bc96c();
        return;
      }
      FUN_1400bc8c2(lVar1 + 0x11f0,param_1 + 0xe0);
      return;
    }
  }
  return;
}



// FUNCTION 143d5d404 FUN_143d5d404 body=354 status=ok
// SIG undefined FUN_143d5d404(void)

undefined8 FUN_143d5d404(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x120) != 0) goto LAB_143d5d430;
  lVar4 = *(longlong *)(param_1 + 0x48);
  uVar5 = FUN_140f4891c();
  FUN_140f48956(param_1,&local_48,uVar5,FUN_14107c7ae);
  if (local_40 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x120) = local_48;
    plVar7 = *(longlong **)(param_1 + 0x128);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
LAB_143d5d4f0:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000143d5d51d:
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_143d5d528;
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    *(longlong *)(param_1 + 0x120) = local_48;
    plVar7 = *(longlong **)(param_1 + 0x128);
    if (local_40 == plVar7) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar7 = local_40;
        goto joined_r0x000143d5d51d;
      }
    }
    else {
      *(longlong **)(param_1 + 0x128) = local_40;
      if (plVar7 != (longlong *)0x0) goto LAB_143d5d4f0;
    }
LAB_143d5d528:
    local_48 = *(longlong *)(param_1 + 0x120);
  }
  if (((local_48 == 0) || (uVar6 = (ulonglong)*(byte *)(lVar4 + 0x1e9), 1 < uVar6)) ||
     (*(int *)(local_48 + 0xb38 + uVar6 * 0xb70) == 0)) {
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_143d5d430:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 143d5d580 FUN_143d5d580 body=1545 status=ok
// SIG undefined FUN_143d5d580(void)

ulonglong FUN_143d5d580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined *puVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_f8 [32];
  char *local_d8;
  int local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  char local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 0xf0) == 0) || (*(int *)(param_1 + 0xec) == 0)) {
LAB_143d5d5fc:
    uVar13 = 0;
    goto LAB_143d5d5fe;
  }
  uVar3 = *(uint *)(param_1 + 0xe8);
  uVar13 = 0;
  if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143d5d5fe;
  lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar10 == 0) || (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0xec))) ||
     ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) goto LAB_143d5d5fc;
  plVar14 = *(longlong **)(param_1 + 0xe0);
  bVar12 = true;
  if (plVar14 == (longlong *)0x0) {
LAB_143d5d666:
    plVar17 = (longlong *)0x0;
LAB_143d5d669:
    uVar9 = FUN_140343d7a(param_1);
    FUN_14070cbf4(&local_c0,uVar9);
    plVar1 = local_b8;
    uVar9 = local_c0;
    local_c0 = 0;
    plVar14 = plVar17;
    if (local_b8 == plVar17) {
LAB_143d5d6ce:
      plVar17 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
    else {
      local_b8 = (longlong *)0x0;
      plVar14 = plVar1;
      if (!bVar12) {
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        goto LAB_143d5d6ce;
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    plVar17 = *(longlong **)(param_1 + 0xe0);
    if (plVar17 != plVar14) {
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        plVar17 = *(longlong **)(param_1 + 0xe0);
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0xe0) = plVar14;
    }
  }
  else {
    iVar7 = (int)plVar14[1];
    do {
      if (iVar7 == 0) goto LAB_143d5d666;
      LOCK();
      iVar18 = (int)plVar14[1];
      bVar19 = iVar7 == iVar18;
      if (bVar19) {
        *(int *)(plVar14 + 1) = iVar7 + 1;
        iVar18 = iVar7;
      }
      iVar7 = iVar18;
      UNLOCK();
    } while (!bVar19);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      bVar12 = false;
      plVar17 = plVar14;
      goto LAB_143d5d669;
    }
  }
  lVar10 = 0;
  cVar6 = FUN_1406eaf76(param_1);
  if (cVar6 == '\0') {
LAB_143d5d988:
    uVar13 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if ((*(longlong *)(param_1 + 0xf0) == 0) || (*(int *)(param_1 + 0xec) == 0)) {
LAB_143d5d7a1:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xe8);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        if ((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0xec)))
        goto LAB_143d5d7a1;
        lVar15 = 0;
        if ((*(uint *)(lVar16 + 8) & 0x10200000) == 0) {
          lVar15 = *(longlong *)(param_1 + 0xf0);
        }
      }
    }
    if (((*(char *)(lVar4 + 0x1d8) == '\x01') && (lVar15 != 0)) &&
       (*(char *)(lVar4 + 0x218) == '\0')) {
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (lVar10 == 0) {
        lVar16 = 0;
        local_70 = 0;
LAB_143d5dad7:
        local_68 = (longlong *)0x0;
        bVar12 = true;
      }
      else {
        if (*(int *)(lVar10 + 0x4c) == 0) {
LAB_143d5d9eb:
          lVar16 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar10 + 0x48);
          lVar16 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar17 == (longlong *)0x0) ||
               (((int)plVar17[2] != *(int *)(lVar10 + 0x4c) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d5d9eb;
            lVar16 = *plVar17;
          }
        }
        plVar17 = *(longlong **)(lVar10 + 0x118);
        local_70 = param_1;
        if (plVar17 == (longlong *)0x0) goto LAB_143d5dad7;
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        bVar12 = false;
        local_68 = plVar17;
      }
      plVar17 = local_68;
      local_50 = 0;
      local_78[0] = '\x03';
      local_60._0_4_ = 0;
      if (lVar16 == 0) {
        lVar10 = 0;
        iVar7 = 0;
        uVar3 = (uint)local_60;
      }
      else {
        uVar3 = *(uint *)(lVar16 + 0xc);
        local_60 = (ulonglong)uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar7 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar19) {
            local_c4 = iVar18;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
            iVar18 = local_c4;
          }
          LOCK();
          iVar7 = *(int *)(lVar10 + 0x10);
          bVar19 = iVar7 == 0;
          if (bVar19) {
            *(int *)(lVar10 + 0x10) = iVar18;
            iVar7 = 0;
          }
          UNLOCK();
          uVar3 = (uint)local_60;
          if (bVar19) {
            iVar7 = iVar18;
          }
        }
      }
      local_60._0_4_ = uVar3;
      local_60 = CONCAT44(iVar7,(uint)local_60);
      local_58 = 2;
      if (local_50 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_50 + -1,1);
        local_50 = 0;
      }
      if (!bVar12) {
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      uVar9 = FUN_140343d7a(param_1);
      FUN_1406ec3c4(lVar4,&local_c0,local_78,uVar9);
      uVar8 = FUN_14070c9d0(param_1 + 0x26c,*(undefined4 *)(param_2 + 8),
                            *(float *)(lVar4 + 0x21c) + 0.5);
      local_d8 = local_78;
      cVar6 = FUN_1406ec4ca(lVar4 + 0xe0,lVar15,&local_c0,uVar8);
      lVar4 = DAT_14c9a3da0;
      if ((longlong)local_50 != 0) {
        lVar15 = (longlong)local_50 + -1;
        lVar16 = lVar15 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
        if (*(longlong *)(lVar4 + lVar16) != 0) {
          FUN_1400020a8();
        }
        lVar4 = DAT_14c9a3da0;
        iVar7 = (int)lVar15;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar4 + lVar16) = 0xffffffff;
        iVar18 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar18 = DAT_14c9a3dd0;
        }
        *(int *)(lVar4 + 4 + lVar16) = iVar18;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar18 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar18 = iVar7;
        }
        bVar5 = (byte)lVar15 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar11 + (longlong)(iVar18 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar18 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_50 = 0;
      }
      if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      if (cVar6 != '\0') goto LAB_143d5d988;
    }
    uVar13 = CONCAT71((int7)((ulonglong)lVar10 >> 8),2);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
LAB_143d5d5fe:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 143d5db8a FUN_143d5db8a body=64 status=ok
// SIG undefined FUN_143d5db8a(void)

undefined8 * FUN_143d5db8a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b405710;
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



// FUNCTION 143d5dbde FUN_143d5dbde body=110 status=ok
// SIG undefined FUN_143d5dbde(void)

void FUN_143d5dbde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405710;
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



// FUNCTION 143d5dc4c FUN_143d5dc4c body=110 status=ok
// SIG undefined FUN_143d5dc4c(void)

void FUN_143d5dc4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405710;
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



// FUNCTION 143d5dcba FUN_143d5dcba body=148 status=ok
// SIG undefined FUN_143d5dcba(void)

void FUN_143d5dcba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405710;
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
                    /* WARNING: Could not recover jumptable at 0x000143d5dd3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d5dd58 FUN_143d5dd58 body=20 status=ok
// SIG undefined FUN_143d5dd58(void)

undefined1 FUN_143d5dd58(longlong param_1)

{
  FUN_143d5dd6c(param_1 + 0x18);
  return 1;
}



// FUNCTION 143d5dd6c FUN_143d5dd6c body=209 status=ok
// SIG undefined FUN_143d5dd6c(void)

void FUN_143d5dd6c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  char cVar10;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      lVar6 = (**(code **)(*param_1 + 8))(param_1);
      lVar7 = FUN_140d0612a();
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        if (*(char *)(param_2 + 0x38) == '\x01') {
          cVar10 = *(int *)(param_2 + 0x44) != 0;
        }
        else {
          cVar10 = FUN_140321d1a(param_2 + 0x38);
        }
        puVar8 = &DAT_14cb7c580;
        if (cVar10 != '\0') {
          puVar8 = &DAT_14cb7c588;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,puVar8);
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
                    /* WARNING: Could not recover jumptable at 0x000143d5de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d5de3e FUN_143d5de3e body=95 status=ok
// SIG undefined FUN_143d5de3e(void)

ulonglong FUN_143d5de3e(longlong param_1)

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
LAB_143d5de80:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143d5de80;
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



// FUNCTION 143d5de9e FUN_143d5de9e body=29 status=ok
// SIG undefined FUN_143d5de9e(void)

undefined8 FUN_143d5de9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d5ded0 FUN_143d5ded0 body=93 status=ok
// SIG undefined FUN_143d5ded0(void)

void FUN_143d5ded0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405940;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d5df2e FUN_143d5df2e body=93 status=ok
// SIG undefined FUN_143d5df2e(void)

void FUN_143d5df2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405940;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d5df8c FUN_143d5df8c body=126 status=ok
// SIG undefined FUN_143d5df8c(void)

void FUN_143d5df8c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405940;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d5dffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d5e00a FUN_143d5e00a body=488 status=ok
// SIG undefined FUN_143d5e00a(void)

void FUN_143d5e00a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [12];
  undefined8 local_158 [12];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0xb0) != 0)) {
    iVar13 = 0;
    (**(code **)(*param_2 + 0x4a8))(param_2,local_158,*(undefined8 *)(lVar1 + 0x9c),0);
    puVar11 = local_158;
    puVar12 = local_f8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    local_98 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    FUN_1400875ba(local_f8,lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0xb0);
    puVar11 = local_f8;
    puVar12 = local_1b8;
    for (lVar8 = 0xc; uVar6 = local_8c, lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar2 = (undefined4)local_98;
    fVar3 = local_98._4_4_;
    uVar4 = (undefined1)local_90;
    uVar5 = local_90._1_1_;
    lVar8 = lVar1 + 0x140;
    uVar7 = *(uint *)(lVar1 + 0x1d4);
    *(undefined4 *)(lVar1 + 0x1d0) = 0;
    if ((int)uVar7 < 0) {
      FUN_147f80112(lVar8,0);
      iVar13 = *(int *)(lVar1 + 0x1d0);
      uVar7 = *(uint *)(lVar1 + 0x1d4);
    }
    *(undefined1 *)(lVar1 + 0x26c) = 0;
    *(uint *)(lVar1 + 0x1d0) = iVar13 + 1U;
    if (uVar7 < iVar13 + 1U) {
      FUN_140089f7a(lVar8,iVar13);
    }
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x1c0);
    }
    lVar10 = (longlong)iVar13 * 0x80;
    puVar11 = local_1b8;
    puVar12 = (undefined8 *)(lVar8 + lVar10);
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)(lVar8 + 0x60 + lVar10) = uVar2;
    *(float *)(lVar8 + 100 + lVar10) = fVar3;
    *(undefined1 *)(lVar8 + 0x68 + lVar10) = uVar4;
    *(undefined1 *)(lVar8 + 0x69 + lVar10) = uVar5;
    *(undefined8 *)(lVar8 + 0x6c + lVar10) = uVar6;
    if (fVar3 < 0.0) {
      *(undefined4 *)(lVar8 + lVar10 + 100) = *(undefined4 *)(lVar1 + 0x268);
      *(undefined1 *)(lVar1 + 0x26c) = 1;
    }
    FUN_1447906c0(lVar1,0);
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5e1f4 FUN_143d5e1f4 body=490 status=ok
// SIG undefined FUN_143d5e1f4(void)

undefined8 FUN_143d5e1f4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [12];
  undefined8 local_158 [12];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0xb0) != 0)) {
    iVar13 = 0;
    (**(code **)(*param_2 + 0x4a8))(param_2,local_158,*(undefined8 *)(lVar1 + 0x9c),0);
    puVar11 = local_158;
    puVar12 = local_f8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    local_98 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    FUN_1400875ba(local_f8,lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0xb0);
    puVar11 = local_f8;
    puVar12 = local_1b8;
    for (lVar8 = 0xc; uVar6 = local_8c, lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar2 = (undefined4)local_98;
    fVar3 = local_98._4_4_;
    uVar4 = (undefined1)local_90;
    uVar5 = local_90._1_1_;
    lVar8 = lVar1 + 0x140;
    uVar7 = *(uint *)(lVar1 + 0x1d4);
    *(undefined4 *)(lVar1 + 0x1d0) = 0;
    if ((int)uVar7 < 0) {
      FUN_147f80112(lVar8,0);
      iVar13 = *(int *)(lVar1 + 0x1d0);
      uVar7 = *(uint *)(lVar1 + 0x1d4);
    }
    *(undefined1 *)(lVar1 + 0x26c) = 0;
    *(uint *)(lVar1 + 0x1d0) = iVar13 + 1U;
    if (uVar7 < iVar13 + 1U) {
      FUN_140089f7a(lVar8,iVar13);
    }
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x1c0);
    }
    lVar10 = (longlong)iVar13 * 0x80;
    puVar11 = local_1b8;
    puVar12 = (undefined8 *)(lVar8 + lVar10);
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)(lVar8 + 0x60 + lVar10) = uVar2;
    *(float *)(lVar8 + 100 + lVar10) = fVar3;
    *(undefined1 *)(lVar8 + 0x68 + lVar10) = uVar4;
    *(undefined1 *)(lVar8 + 0x69 + lVar10) = uVar5;
    *(undefined8 *)(lVar8 + 0x6c + lVar10) = uVar6;
    if (fVar3 < 0.0) {
      *(undefined4 *)(lVar8 + lVar10 + 100) = *(undefined4 *)(lVar1 + 0x268);
      *(undefined1 *)(lVar1 + 0x26c) = 1;
    }
    FUN_1447906c0(lVar1,0);
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5e3e0 FUN_143d5e3e0 body=68 status=ok
// SIG undefined FUN_143d5e3e0(void)

undefined8 * FUN_143d5e3e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4059b0;
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



// FUNCTION 143d5e440 FUN_143d5e440 body=65 status=ok
// SIG undefined FUN_143d5e440(void)

void FUN_143d5e440(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x98))();
  *(undefined1 *)(param_2 + 0xc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000143d5e47e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1[1],*(undefined8 *)param_1[2],*param_3);
  return;
}



// FUNCTION 143d5e4a2 FUN_143d5e4a2 body=81 status=ok
// SIG undefined FUN_143d5e4a2(void)

undefined8 FUN_143d5e4a2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    if (*param_1 != 0) {
      FUN_141414c4c();
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
  return 0;
}



// FUNCTION 143d5e4fe FUN_143d5e4fe body=12 status=ok
// SIG undefined FUN_143d5e4fe(void)

void FUN_143d5e4fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d5e507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d5e50a FUN_143d5e50a body=64 status=ok
// SIG undefined FUN_143d5e50a(void)

undefined8 * FUN_143d5e50a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b405a20;
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



// FUNCTION 143d5e54a FUN_143d5e54a body=265 status=ok
// SIG undefined FUN_143d5e54a(void)

void FUN_143d5e54a(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong *local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x98))();
  *(undefined1 *)(param_2 + 0xc) = uVar3;
  if ((param_1[1] == 0) || (*(longlong *)(param_2[9] + 8) != *(longlong *)(param_1[1] + 0x40))) {
    local_29 = '\0';
    local_38 = param_2;
    FUN_148871ce8(param_1[6],local_3c,&local_38,&local_29);
    if (local_29 == '\0') {
      (**(code **)(*param_2 + 0x78))
                (param_2,param_1[3],*(undefined8 *)param_1[4],*(undefined8 *)param_1[5]);
    }
  }
  else {
    uVar2 = *(uint *)(param_2[9] + 0x18);
    lVar5 = *(longlong *)(param_1[2] + 0x10);
    if (lVar5 == 0) {
      lVar5 = param_1[2];
    }
    uVar4 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar4 = uVar2;
    }
    if ((*(uint *)(lVar5 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
      (**(code **)(*param_2 + 0x78))
                (param_2,param_1[3],*(undefined8 *)param_1[4],*(undefined8 *)param_1[5]);
      lVar5 = *(longlong *)(param_1[2] + 0x10);
      if (lVar5 == 0) {
        lVar5 = param_1[2];
      }
      puVar1 = (uint *)(lVar5 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5e654 FUN_143d5e654 body=259 status=ok
// SIG undefined FUN_143d5e654(void)

void FUN_143d5e654(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong *local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == 0) || (*(longlong *)(param_2[9] + 8) != *(longlong *)(*param_1 + 0x40))) {
    local_29 = '\0';
    local_38 = param_2;
    FUN_148871ce8(param_1[5],local_3c,&local_38,&local_29);
    if (local_29 == '\0') {
      (**(code **)(*param_2 + 0x80))
                (param_2,param_1[2],*(undefined8 *)param_1[3],*(undefined8 *)param_1[4]);
    }
  }
  else {
    uVar2 = *(uint *)(param_2[9] + 0x18);
    lVar4 = *(longlong *)(param_1[1] + 0x10);
    if (lVar4 == 0) {
      lVar4 = param_1[1];
    }
    uVar3 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar3 = uVar2;
    }
    if ((*(uint *)(lVar4 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
      (**(code **)(*param_2 + 0x80))
                (param_2,param_1[2],*(undefined8 *)param_1[3],*(undefined8 *)param_1[4]);
      lVar4 = *(longlong *)(param_1[1] + 0x10);
      if (lVar4 == 0) {
        lVar4 = param_1[1];
      }
      puVar1 = (uint *)(lVar4 + (longlong)((int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5e758 FUN_143d5e758 body=360 status=ok
// SIG undefined FUN_143d5e758(void)

void FUN_143d5e758(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_1 == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x48) + 8) != *(longlong *)(*param_1 + 0x40))) {
    if (*param_3 == *(longlong *)param_1[1]) {
      local_20 = param_2;
      FUN_148871ce8(param_1[5],local_24,&local_20,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if (*param_3 == *(longlong *)(param_1[3] + 0x68)) {
      plVar2 = (longlong *)param_1[5];
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        plVar7 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar2[8];
        }
        iVar6 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(ulonglong *)(*plVar2 + (longlong)iVar6 * 0x10) == param_2) goto LAB_143d5e879;
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar2 + 8);
          } while (iVar6 != -1);
        }
      }
      local_20 = param_2;
      FUN_148871ce8(param_1[6],local_24,&local_20,0);
    }
  }
  else {
    iVar6 = *(int *)(*(longlong *)(param_2 + 0x48) + 0x18);
    if (*param_3 == *(longlong *)param_1[1]) {
      lVar4 = param_1[2];
    }
    else {
      if (*param_3 != *(longlong *)(param_1[3] + 0x68)) goto LAB_143d5e879;
      lVar4 = param_1[4];
    }
    lVar8 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar8 = lVar4;
    }
    iVar3 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar3 = iVar6;
    }
    puVar1 = (uint *)(lVar8 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  }
LAB_143d5e879:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5e8d2 FUN_143d5e8d2 body=373 status=ok
// SIG undefined FUN_143d5e8d2(void)

void FUN_143d5e8d2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((*param_1 == 0) || (*(longlong *)(param_2[9] + 8) != *(longlong *)(*param_1 + 0x40))) {
    plVar2 = (longlong *)param_1[7];
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      plVar6 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar2[8];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong **)(*plVar2 + (longlong)iVar5 * 0x10) == param_2) {
            (**(code **)(*param_2 + 0x80))
                      (param_2,param_1[4],*(undefined8 *)param_1[5],*(undefined8 *)(param_1[6] + 8))
            ;
            FUN_148872252(param_1[7],param_2);
            return;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar2 + 8);
        } while (iVar5 != -1);
      }
    }
  }
  else {
    uVar4 = *(uint *)(param_2[9] + 0x18);
    uVar8 = 1 << ((byte)uVar4 & 0x1f);
    lVar7 = *(longlong *)(param_1[1] + 0x10);
    if (lVar7 == 0) {
      lVar7 = param_1[1];
    }
    uVar3 = uVar4 + 0x1f;
    if (-1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    lVar9 = (longlong)((int)uVar3 >> 5);
    if ((*(uint *)(lVar7 + lVar9 * 4) >> (uVar4 & 0x1f) & 1) != 0) {
      lVar7 = *(longlong *)(param_1[2] + 0x10);
      if (lVar7 == 0) {
        lVar7 = param_1[2];
      }
      if ((*(uint *)(lVar7 + lVar9 * 4) & uVar8) == 0) {
        lVar7 = *(longlong *)(param_1[3] + 0x10);
        if (lVar7 == 0) {
          lVar7 = param_1[3];
        }
        if ((*(uint *)(lVar7 + lVar9 * 4) & uVar8) == 0) {
          (**(code **)(*param_2 + 0x80))
                    (param_2,param_1[4],*(undefined8 *)param_1[5],*(undefined8 *)(param_1[6] + 8));
          lVar7 = *(longlong *)(param_1[3] + 0x10);
          if (lVar7 == 0) {
            lVar7 = param_1[3];
          }
          puVar1 = (uint *)(lVar7 + lVar9 * 4);
          *puVar1 = *puVar1 | uVar8;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d5ea48 FUN_143d5ea48 body=383 status=ok
// SIG undefined FUN_143d5ea48(void)

void FUN_143d5ea48(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x98))();
  *(undefined1 *)(param_2 + 0xc) = uVar3;
  if ((param_1[1] == 0) || (*(longlong *)(param_2[9] + 8) != *(longlong *)(param_1[1] + 0x40))) {
    plVar2 = (longlong *)param_1[8];
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      uVar5 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      plVar7 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar2[8];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong **)(*plVar2 + (longlong)iVar6 * 0x10) == param_2) {
            (**(code **)(*param_2 + 0x78))
                      (param_2,param_1[5],*(undefined8 *)param_1[6],*(undefined8 *)(param_1[7] + 8))
            ;
            FUN_148872252(param_1[8],param_2);
            return;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar2 + 8);
        } while (iVar6 != -1);
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_2[9] + 0x18);
    uVar9 = 1 << ((byte)uVar5 & 0x1f);
    lVar8 = *(longlong *)(param_1[2] + 0x10);
    if (lVar8 == 0) {
      lVar8 = param_1[2];
    }
    uVar4 = uVar5 + 0x1f;
    if (-1 < (int)uVar5) {
      uVar4 = uVar5;
    }
    lVar10 = (longlong)((int)uVar4 >> 5);
    if ((*(uint *)(lVar8 + lVar10 * 4) >> (uVar5 & 0x1f) & 1) != 0) {
      lVar8 = *(longlong *)(param_1[3] + 0x10);
      if (lVar8 == 0) {
        lVar8 = param_1[3];
      }
      if ((*(uint *)(lVar8 + lVar10 * 4) & uVar9) == 0) {
        lVar8 = *(longlong *)(param_1[4] + 0x10);
        if (lVar8 == 0) {
          lVar8 = param_1[4];
        }
        if ((*(uint *)(lVar8 + lVar10 * 4) & uVar9) == 0) {
          (**(code **)(*param_2 + 0x78))
                    (param_2,param_1[5],*(undefined8 *)param_1[6],*(undefined8 *)(param_1[7] + 8));
          lVar8 = *(longlong *)(param_1[4] + 0x10);
          if (lVar8 == 0) {
            lVar8 = param_1[4];
          }
          puVar1 = (uint *)(lVar8 + lVar10 * 4);
          *puVar1 = *puVar1 | uVar9;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d5ebc8 FUN_143d5ebc8 body=86 status=ok
// SIG undefined FUN_143d5ebc8(void)

void FUN_143d5ebc8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 400);
  *(uint *)(lVar2 + 400) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x194) < iVar1 + 1U) {
    FUN_140ff4158(lVar2 + 0x108,iVar1);
  }
  lVar3 = lVar2 + 0x108;
  if (*(longlong *)(lVar2 + 0x188) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x188);
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 143d5ec3a FUN_143d5ec3a body=29 status=ok
// SIG undefined FUN_143d5ec3a(void)

undefined8 FUN_143d5ec3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d5edd6 FUN_143d5edd6 body=93 status=ok
// SIG undefined FUN_143d5edd6(void)

void FUN_143d5edd6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d5ee34 FUN_143d5ee34 body=93 status=ok
// SIG undefined FUN_143d5ee34(void)

void FUN_143d5ee34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d5ee92 FUN_143d5ee92 body=126 status=ok
// SIG undefined FUN_143d5ee92(void)

void FUN_143d5ee92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b405c20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d5ef01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d5ef10 FUN_143d5ef10 body=66 status=ok
// SIG undefined FUN_143d5ef10(void)

void FUN_143d5ef10(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d5f06c(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5ef54 FUN_143d5ef54 body=279 status=ok
// SIG undefined FUN_143d5ef54(void)

undefined8 FUN_143d5ef54(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_143d5f065;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d5f065;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d5f065:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d5f019;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d5f06c(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143d5f019;
    }
  }
  uVar6 = 0;
LAB_143d5f019:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5f06c FUN_143d5f06c body=932 status=ok
// SIG undefined FUN_143d5f06c(void)

void FUN_143d5f06c(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
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
  code *local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar17 = *param_2;
  lVar18 = *param_1;
  if (*(char *)(lVar18 + 0x14a) == '\x01') {
    FUN_143d57658(lVar18);
    iVar2 = *(int *)(lVar18 + 0x78);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar18 + 0x70);
      lVar19 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar19);
        if (plVar4 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar7 = FUN_1400de7f6();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (**(code **)(*plVar4 + 0xa8))(plVar4);
          }
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar2 * 8 != lVar19);
    }
    *(undefined1 *)(lVar18 + 0x14a) = 0;
  }
  if (*(char *)(lVar18 + 0x148) == '\x01') {
    uVar14 = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_147e852ec(local_98,lVar17 + 0x240);
    iVar2 = local_70;
    if (local_70 == 0) {
      uVar16 = 1;
      iVar15 = 0;
      iVar9 = 0;
    }
    else {
      puVar8 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar8 = local_88;
      }
      uVar13 = *puVar8;
      if (uVar13 == 0) {
        iVar9 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar9 = local_70 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar15 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_143d5f20e;
          iVar15 = iVar15 + 0x20;
          uVar13 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar14 = 0;
        iVar15 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar16 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar9 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar9) {
        iVar9 = local_70;
      }
    }
    if (iVar9 != local_70) {
      uVar13 = 0xffffffff;
      iVar5 = local_70;
      do {
        plVar4 = *(longlong **)(local_98[0] + (longlong)iVar9 * 0x10);
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14cb63950 == 0) {
            local_a0 = FUN_144a7958c;
            local_b0 = FUN_14081d0ea;
            local_b8 = &LAB_1464ec72a;
            local_c0 = &local_a0;
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
          iVar5 = local_70;
          if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
               DAT_14cb63950 + 0x30)) && ((*(byte *)(plVar4 + 0x24c) & 1) == 0)) {
            *(byte *)(plVar4 + 0x24c) = *(byte *)(plVar4 + 0x24c) | 1;
            (**(code **)(*plVar4 + 0x310))(plVar4);
            iVar5 = local_70;
          }
        }
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar8 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar8 = local_88;
        }
        iVar9 = (int)uVar14;
        lVar17 = (longlong)iVar9;
        uVar10 = puVar8[lVar17] & uVar13;
        if (uVar10 == 0) {
          iVar11 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar11 = iVar5 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar9) {
            iVar12 = iVar9;
          }
          if (iVar9 < iVar11) {
            lVar18 = 0;
            do {
              uVar10 = puVar8[lVar17 + lVar18 + 1];
              if (uVar10 != 0) {
                uVar14 = (ulonglong)(iVar9 + (int)lVar18 + 1);
                uVar13 = 0xffffffff;
                goto LAB_143d5f32e;
              }
              iVar15 = iVar15 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar12 - lVar17 != lVar18);
            uVar13 = 0xffffffff;
            iVar9 = iVar12;
          }
          uVar14 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar5;
        }
        else {
LAB_143d5f32e:
          uVar16 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar16 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar9 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar9) {
            iVar9 = iVar5;
          }
        }
      } while (iVar9 != iVar2);
    }
LAB_143d5f20e:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1403cd038(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d5f412 FUN_143d5f412 body=29 status=ok
// SIG undefined FUN_143d5f412(void)

undefined8 FUN_143d5f412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d5f5ae FUN_143d5f5ae body=93 status=ok
// SIG undefined FUN_143d5f5ae(void)

void FUN_143d5f5ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d5f60c FUN_143d5f60c body=93 status=ok
// SIG undefined FUN_143d5f60c(void)

void FUN_143d5f60c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d5f66a FUN_143d5f66a body=126 status=ok
// SIG undefined FUN_143d5f66a(void)

void FUN_143d5f66a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b405c90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d5f6d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d5f70e FUN_143d5f70e body=299 status=ok
// SIG undefined FUN_143d5f70e(void)

undefined8 FUN_143d5f70e(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d5f833;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143d5f833;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar8 = local_30;
  }
  else {
LAB_143d5f833:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d5f7bd;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar7 = 1;
      if (plVar3[8] != 0) {
        if (param_3 == 3) {
          *(undefined1 *)((longlong)plVar3 + 0x14a) = 1;
          FUN_140872fe2();
        }
        else {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
      goto LAB_143d5f7bd;
    }
  }
  uVar7 = 0;
LAB_143d5f7bd:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5f83a FUN_143d5f83a body=29 status=ok
// SIG undefined FUN_143d5f83a(void)

undefined8 FUN_143d5f83a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


