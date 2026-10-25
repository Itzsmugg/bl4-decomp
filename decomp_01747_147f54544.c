// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f54544 FUN_147f54544 body=118 status=ok
// SIG undefined FUN_147f54544(void)

void FUN_147f54544(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8abf0;
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



// FUNCTION 147f545ba FUN_147f545ba body=156 status=ok
// SIG undefined FUN_147f545ba(void)

void FUN_147f545ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c85c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8abf0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f54646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f54656 FUN_147f54656 body=98 status=ok
// SIG undefined FUN_147f54656(void)

void FUN_147f54656(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f5469f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f546ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f546bc FUN_147f546bc body=81 status=ok
// SIG undefined FUN_147f546bc(void)

undefined8 FUN_147f546bc(longlong param_1)

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



// FUNCTION 147f54714 FUN_147f54714 body=89 status=ok
// SIG undefined FUN_147f54714(void)

bool FUN_147f54714(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f5475f;
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
LAB_147f5475f:
  return lVar6 == param_2;
}



// FUNCTION 147f5476e FUN_147f5476e body=118 status=ok
// SIG undefined FUN_147f5476e(void)

void FUN_147f5476e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8ac60;
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



// FUNCTION 147f547e4 FUN_147f547e4 body=118 status=ok
// SIG undefined FUN_147f547e4(void)

void FUN_147f547e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8ac60;
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



// FUNCTION 147f5485a FUN_147f5485a body=156 status=ok
// SIG undefined FUN_147f5485a(void)

void FUN_147f5485a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c85c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8ac60;
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
                    /* WARNING: Could not recover jumptable at 0x000147f548e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f548f6 FUN_147f548f6 body=98 status=ok
// SIG undefined FUN_147f548f6(void)

void FUN_147f548f6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f5493f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f5494e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f54958 FUN_147f54958 body=31 status=ok
// SIG undefined FUN_147f54958(void)

undefined8 FUN_147f54958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5498c FUN_147f5498c body=85 status=ok
// SIG undefined FUN_147f5498c(void)

void FUN_147f5498c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b430;
  return;
}



// FUNCTION 147f549e2 FUN_147f549e2 body=118 status=ok
// SIG undefined FUN_147f549e2(void)

void FUN_147f549e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8b430;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f54a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f54a58 FUN_147f54a58 body=105 status=ok
// SIG undefined FUN_147f54a58(void)

undefined8 FUN_147f54a58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145e149c0(param_1 + 0x18,local_20);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f54ac2 FUN_147f54ac2 body=24 status=ok
// SIG undefined FUN_147f54ac2(void)

void FUN_147f54ac2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f54ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147f54aea FUN_147f54aea body=93 status=ok
// SIG undefined FUN_147f54aea(void)

void FUN_147f54aea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8acd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f54b48 FUN_147f54b48 body=93 status=ok
// SIG undefined FUN_147f54b48(void)

void FUN_147f54b48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8acd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f54ba6 FUN_147f54ba6 body=126 status=ok
// SIG undefined FUN_147f54ba6(void)

void FUN_147f54ba6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8acd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f54c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f54c38 FUN_147f54c38 body=81 status=ok
// SIG undefined FUN_147f54c38(void)

undefined8 FUN_147f54c38(longlong param_1)

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



// FUNCTION 147f54c90 FUN_147f54c90 body=89 status=ok
// SIG undefined FUN_147f54c90(void)

bool FUN_147f54c90(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f54cdb;
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
LAB_147f54cdb:
  return lVar6 == param_2;
}



// FUNCTION 147f54cea FUN_147f54cea body=118 status=ok
// SIG undefined FUN_147f54cea(void)

void FUN_147f54cea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8adb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8ad40;
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



// FUNCTION 147f54d60 FUN_147f54d60 body=118 status=ok
// SIG undefined FUN_147f54d60(void)

void FUN_147f54d60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8adb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8ad40;
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



// FUNCTION 147f54dd6 FUN_147f54dd6 body=156 status=ok
// SIG undefined FUN_147f54dd6(void)

void FUN_147f54dd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8adb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8ad40;
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
                    /* WARNING: Could not recover jumptable at 0x000147f54e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f54e72 FUN_147f54e72 body=98 status=ok
// SIG undefined FUN_147f54e72(void)

void FUN_147f54e72(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f54ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f54eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f54ed6 FUN_147f54ed6 body=381 status=ok
// SIG undefined FUN_147f54ed6(void)

longlong * FUN_147f54ed6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14045cb56(param_2,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  *puVar4 = &PTR_LAB_14ac8ae90;
  puVar4[1] = *param_3;
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
  *puVar4 = &PTR_FUN_14ac8ae20;
  puVar4[3] = local_40;
  puVar4[4] = local_38;
  if (local_38 == (longlong *)0x0) {
    puVar4[5] = FUN_147f50e1a;
  }
  else {
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_147f50e1a;
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



// FUNCTION 147f55056 FUN_147f55056 body=64 status=ok
// SIG undefined FUN_147f55056(void)

undefined8 * FUN_147f55056(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8ae20;
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



// FUNCTION 147f5509a FUN_147f5509a body=81 status=ok
// SIG undefined FUN_147f5509a(void)

undefined8 FUN_147f5509a(longlong param_1)

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



// FUNCTION 147f550f2 FUN_147f550f2 body=89 status=ok
// SIG undefined FUN_147f550f2(void)

bool FUN_147f550f2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f5513d;
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
LAB_147f5513d:
  return lVar6 == param_2;
}



// FUNCTION 147f55174 FUN_147f55174 body=118 status=ok
// SIG undefined FUN_147f55174(void)

void FUN_147f55174(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8ae90;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ac8ae20;
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



// FUNCTION 147f551ea FUN_147f551ea body=118 status=ok
// SIG undefined FUN_147f551ea(void)

void FUN_147f551ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8ae90;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ac8ae20;
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



// FUNCTION 147f55260 FUN_147f55260 body=156 status=ok
// SIG undefined FUN_147f55260(void)

void FUN_147f55260(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8ae90;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8ae20;
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
                    /* WARNING: Could not recover jumptable at 0x000147f552ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f552fc FUN_147f552fc body=106 status=ok
// SIG undefined FUN_147f552fc(void)

void FUN_147f552fc(longlong param_1,undefined8 param_2,undefined8 param_3)

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
                  (*(undefined8 *)(param_1 + 0x18),param_2,param_3,*(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000147f55349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f5535c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0,param_2,param_3,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 147f55366 FUN_147f55366 body=98 status=ok
// SIG undefined FUN_147f55366(void)

ulonglong FUN_147f55366(longlong param_1)

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
LAB_147f553bd:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147f553bd;
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



// FUNCTION 147f553ce FUN_147f553ce body=81 status=ok
// SIG undefined FUN_147f553ce(void)

undefined8 FUN_147f553ce(longlong param_1)

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



// FUNCTION 147f55426 FUN_147f55426 body=89 status=ok
// SIG undefined FUN_147f55426(void)

bool FUN_147f55426(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f55471;
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
LAB_147f55471:
  return lVar6 == param_2;
}



// FUNCTION 147f55480 FUN_147f55480 body=118 status=ok
// SIG undefined FUN_147f55480(void)

void FUN_147f55480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8af00;
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



// FUNCTION 147f554f6 FUN_147f554f6 body=118 status=ok
// SIG undefined FUN_147f554f6(void)

void FUN_147f554f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8af00;
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



// FUNCTION 147f5556c FUN_147f5556c body=156 status=ok
// SIG undefined FUN_147f5556c(void)

void FUN_147f5556c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8af00;
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
                    /* WARNING: Could not recover jumptable at 0x000147f555f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f55608 FUN_147f55608 body=98 status=ok
// SIG undefined FUN_147f55608(void)

void FUN_147f55608(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f55651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f55660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f5566a FUN_147f5566a body=58 status=ok
// SIG undefined FUN_147f5566a(void)

void FUN_147f5566a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f556a4(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_145766216(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,8);
  return;
}



// FUNCTION 147f556a4 FUN_147f556a4 body=108 status=ok
// SIG undefined FUN_147f556a4(void)

ulonglong FUN_147f556a4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147f55710 FUN_147f55710 body=125 status=ok
// SIG undefined FUN_147f55710(void)

void FUN_147f55710(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_14573edc0(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f5578e FUN_147f5578e body=73 status=ok
// SIG undefined FUN_147f5578e(void)

void FUN_147f5578e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f557d8(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14573edc0(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 147f557d8 FUN_147f557d8 body=108 status=ok
// SIG undefined FUN_147f557d8(void)

ulonglong FUN_147f557d8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147f55848 FUN_147f55848 body=81 status=ok
// SIG undefined FUN_147f55848(void)

undefined8 FUN_147f55848(longlong param_1)

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



// FUNCTION 147f558a0 FUN_147f558a0 body=89 status=ok
// SIG undefined FUN_147f558a0(void)

bool FUN_147f558a0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f558eb;
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
LAB_147f558eb:
  return lVar6 == param_2;
}



// FUNCTION 147f558fa FUN_147f558fa body=118 status=ok
// SIG undefined FUN_147f558fa(void)

void FUN_147f558fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8afe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8af70;
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



// FUNCTION 147f55970 FUN_147f55970 body=118 status=ok
// SIG undefined FUN_147f55970(void)

void FUN_147f55970(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8afe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8af70;
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



// FUNCTION 147f559e6 FUN_147f559e6 body=156 status=ok
// SIG undefined FUN_147f559e6(void)

void FUN_147f559e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8afe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8af70;
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
                    /* WARNING: Could not recover jumptable at 0x000147f55a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f55a82 FUN_147f55a82 body=98 status=ok
// SIG undefined FUN_147f55a82(void)

void FUN_147f55a82(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f55acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f55ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f55aea FUN_147f55aea body=81 status=ok
// SIG undefined FUN_147f55aea(void)

undefined8 FUN_147f55aea(longlong param_1)

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



// FUNCTION 147f55b42 FUN_147f55b42 body=89 status=ok
// SIG undefined FUN_147f55b42(void)

bool FUN_147f55b42(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f55b8d;
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
LAB_147f55b8d:
  return lVar6 == param_2;
}



// FUNCTION 147f55b9c FUN_147f55b9c body=118 status=ok
// SIG undefined FUN_147f55b9c(void)

void FUN_147f55b9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b050;
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



// FUNCTION 147f55c12 FUN_147f55c12 body=118 status=ok
// SIG undefined FUN_147f55c12(void)

void FUN_147f55c12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b050;
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



// FUNCTION 147f55c88 FUN_147f55c88 body=156 status=ok
// SIG undefined FUN_147f55c88(void)

void FUN_147f55c88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8b050;
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
                    /* WARNING: Could not recover jumptable at 0x000147f55d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f55d24 FUN_147f55d24 body=98 status=ok
// SIG undefined FUN_147f55d24(void)

void FUN_147f55d24(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f55d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f55d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f55d88 FUN_147f55d88 body=19 status=ok
// SIG undefined FUN_147f55d88(void)

void FUN_147f55d88(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),1),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 147f55d9c FUN_147f55d9c body=132 status=ok
// SIG undefined FUN_147f55d9c(void)

void FUN_147f55d9c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f55e22 FUN_147f55e22 body=62 status=ok
// SIG undefined FUN_147f55e22(void)

void FUN_147f55e22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f55e60(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,1);
  }
  return;
}



// FUNCTION 147f55e60 FUN_147f55e60 body=93 status=ok
// SIG undefined FUN_147f55e60(void)

ulonglong FUN_147f55e60(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,1);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147f55ebe FUN_147f55ebe body=62 status=ok
// SIG undefined FUN_147f55ebe(void)

void FUN_147f55ebe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f55efc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,1);
  }
  return;
}



// FUNCTION 147f55efc FUN_147f55efc body=93 status=ok
// SIG undefined FUN_147f55efc(void)

ulonglong FUN_147f55efc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,1);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147f55f59 FUN_147f55f59 body=66 status=ok
// SIG undefined FUN_147f55f59(void)

void FUN_147f55f59(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 4) = 4;
    *(undefined4 *)(param_1 + 1) = 0x3f800000;
    *(undefined1 *)(param_1 + 5) = 3;
    *(char *)(param_1 + 6) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    *(undefined4 *)(param_1 + 7) = 1;
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 147f55f9c FUN_147f55f9c body=132 status=ok
// SIG undefined FUN_147f55f9c(void)

void FUN_147f55f9c(longlong param_1,int param_2)

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



// FUNCTION 147f56022 FUN_147f56022 body=62 status=ok
// SIG undefined FUN_147f56022(void)

void FUN_147f56022(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f56060(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 147f56060 FUN_147f56060 body=93 status=ok
// SIG undefined FUN_147f56060(void)

ulonglong FUN_147f56060(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 147f560be FUN_147f560be body=89 status=ok
// SIG undefined FUN_147f560be(void)

void FUN_147f560be(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_140e8bc40(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147f56118 FUN_147f56118 body=62 status=ok
// SIG undefined FUN_147f56118(void)

void FUN_147f56118(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f56156(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 147f56156 FUN_147f56156 body=93 status=ok
// SIG undefined FUN_147f56156(void)

ulonglong FUN_147f56156(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147f561b3 FUN_147f561b3 body=19 status=ok
// SIG undefined FUN_147f561b3(void)

void FUN_147f561b3(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 147f561c6 FUN_147f561c6 body=132 status=ok
// SIG undefined FUN_147f561c6(void)

void FUN_147f561c6(longlong param_1,int param_2)

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



// FUNCTION 147f5624c FUN_147f5624c body=62 status=ok
// SIG undefined FUN_147f5624c(void)

void FUN_147f5624c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f5628a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147f5628a FUN_147f5628a body=93 status=ok
// SIG undefined FUN_147f5628a(void)

ulonglong FUN_147f5628a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 147f562e8 FUN_147f562e8 body=119 status=ok
// SIG undefined FUN_147f562e8(void)

void FUN_147f562e8(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 147f5636c FUN_147f5636c body=700 status=ok
// SIG undefined FUN_147f5636c(void)

void FUN_147f5636c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1427dc336(local_48);
  switchD_143c3d4dc::caseD_3d(param_1,local_48);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(lVar1 + 200) == '\x01') {
    FUN_147f5662a(param_1,&local_58);
    if (1 < local_50) {
      FUN_140056680(&local_88,&DAT_149e0617a);
      local_78 = DAT_14cb23f50;
      local_70 = (undefined4)local_88;
      uStack_6c = local_88._4_4_;
      uStack_68 = (undefined4)uStack_80;
      uStack_64 = uStack_80._4_4_;
      local_88 = 0;
      uStack_80 = 0;
      local_60 = 1;
      FUN_1407c67d8(param_2);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(lVar1 + 0xcc,&local_88);
      local_a8 = DAT_14cb23f58;
      local_a0 = (undefined4)local_88;
      uStack_9c = local_88._4_4_;
      uStack_98 = (undefined4)uStack_80;
      uStack_94 = uStack_80._4_4_;
      local_88 = 0;
      uStack_80 = 0;
      local_90 = 1;
      FUN_1407c67d8(param_2);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      pvVar2 = local_58;
      local_c8 = DAT_14cb23f60;
      local_c0 = (void *)0x0;
      local_b8 = local_50;
      if ((longlong)local_50 == 0) {
        local_b4 = 0;
      }
      else {
        FUN_1446dd670(&local_c0,local_50,0);
        memcpy(local_c0,pvVar2,(longlong)local_50 * 2);
      }
      local_b0 = 1;
      FUN_1407c67d8(param_2);
      local_e8 = DAT_14cb23f68;
      local_e0 = (void *)0x0;
      local_d8 = *(int *)(lVar1 + 0xb0);
      lVar3 = (longlong)local_d8;
      pvVar2 = *(void **)(lVar1 + 0xa8);
      if (lVar3 == 0) {
        local_d4 = 0;
      }
      else {
        FUN_1446dd670(&local_e0,local_d8,0);
        memcpy(local_e0,pvVar2,lVar3 * 2);
      }
      local_d0 = 1;
      FUN_1407c67d8(param_2);
      local_108 = DAT_14cb23f70;
      local_100 = (void *)0x0;
      local_f8 = *(int *)(lVar1 + 0xc0);
      lVar3 = (longlong)local_f8;
      pvVar2 = *(void **)(lVar1 + 0xb8);
      if (lVar3 == 0) {
        local_f4 = 0;
      }
      else {
        FUN_1446dd670(&local_100,local_f8,0);
        memcpy(local_100,pvVar2,lVar3 * 2);
      }
      local_f0 = 1;
      FUN_1407c67d8(param_2);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5662a FUN_147f5662a body=144 status=ok
// SIG undefined FUN_147f5662a(void)

longlong * FUN_147f5662a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4();
  if ((longlong)(int)param_2[1] != 0) {
    iVar2 = 1;
    lVar1 = 0;
    do {
      if (*(short *)(*param_2 + lVar1) == 0x5f) {
        if (iVar2 != 0) {
          FUN_14496493a(param_2,0,iVar2,0);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
        }
        break;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 2;
    } while ((longlong)(int)param_2[1] * 2 != lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f566d0 FUN_147f566d0 body=110 status=ok
// SIG undefined FUN_147f566d0(void)

void FUN_147f566d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1464351ec();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_3 != 0) && (cVar1 != '\0')) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147f5673b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 147f56746 FUN_147f56746 body=8 status=ok
// SIG undefined FUN_147f56746(void)

void FUN_147f56746(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f5674e FUN_147f5674e body=67 status=ok
// SIG undefined FUN_147f5674e(void)

bool FUN_147f5674e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402b91c4(param_1 + (ulonglong)*(byte *)(param_1 + 0x3c0) * 0x138 + 0x18);
  lVar2 = FUN_1402b9204(param_1,param_2);
  return lVar1 == lVar2;
}



// FUNCTION 147f56792 FUN_147f56792 body=121 status=ok
// SIG undefined FUN_147f56792(void)

undefined8 * FUN_147f56792(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x458);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x450);
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) != 0) &&
         (cVar3 = FUN_1448093f4(*(longlong *)(lVar2 + lVar4),param_3), cVar3 != '\0')) {
        *param_2 = *(undefined8 *)(lVar2 + lVar4);
        lVar2 = *(longlong *)(lVar2 + 8 + lVar4);
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        return param_2;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147f5680c FUN_147f5680c body=241 status=ok
// SIG undefined FUN_147f5680c(void)

undefined8 *
FUN_147f5680c(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ac8bee0;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = *param_4;
  param_1[3] = *(undefined8 *)(param_4 + 2);
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4,*(undefined8 *)(param_4 + 4));
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (param_2 != 0) {
    uVar1 = FUN_140b040c0();
    lVar2 = FUN_144718840(param_2,uVar1);
    if (lVar2 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
      }
      param_1[6] = param_2;
      param_1[7] = lVar2;
    }
  }
  local_38 = &local_48;
  local_48 = param_1;
  local_40 = param_1 + 8;
  FUN_143886f6c(&DAT_14cb23ff8,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f568fe FUN_147f568fe body=118 status=ok
// SIG undefined FUN_147f568fe(void)

void FUN_147f568fe(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  
  if ((char)param_1[2] != '\x03') {
    *(char *)param_1[1] = param_2;
    if ((char)param_1[2] != '\0') {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    *(undefined1 *)(param_1 + 2) = 3;
    if (((param_3 != '\0') && (param_1[6] != 0)) && ((longlong *)param_1[7] != (longlong *)0x0)) {
      lVar1 = (**(code **)(*(longlong *)param_1[7] + 0x20))();
      if (lVar1 != 0) {
        FUN_140356f00(lVar1,2,(param_2 != '\x01') * '\x03' + '\x01');
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f56974 FUN_147f56974 body=97 status=ok
// SIG undefined FUN_147f56974(void)

void FUN_147f56974(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 8) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 147f569d6 FUN_147f569d6 body=319 status=ok
// SIG undefined FUN_147f569d6(void)

void FUN_147f569d6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[6] == 0) || ((longlong *)param_1[7] == (longlong *)0x0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(longlong *)param_1[7] + 0x20))();
  }
  (**(code **)(*param_1 + 0x30))(param_1,&local_28);
  if ((lVar3 != 0) && (local_28 != 0)) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = 3;
    *local_38 = &PTR_LAB_14ac8c8d0;
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
    local_38[2] = lVar4;
    *local_38 = &PTR_FUN_14ac8c610;
    local_38[3] = param_1;
    local_38[4] = FUN_147f56b74;
    cVar2 = FUN_140b068ec(lVar3,CONCAT71((int7)((ulonglong)lVar4 >> 8),2),&local_28,&local_38);
    FUN_1449db362(&local_38);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_147f56ad4;
    }
  }
  FUN_147f568fe(param_1,2,1);
LAB_147f56ad4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f56b16 FUN_147f56b16 body=94 status=ok
// SIG undefined FUN_147f56b16(void)

void FUN_147f56b16(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 147f56b74 FUN_147f56b74 body=210 status=ok
// SIG undefined FUN_147f56b74(void)

void FUN_147f56b74(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (param_2 == 0) {
    if (2 < *(byte *)(param_1 + 2)) {
      return;
    }
    *(undefined1 *)param_1[1] = 2;
    if ((char)param_1[2] != '\0') {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
  if (param_4 == '\x04') {
    if (*(byte *)(param_1 + 2) < 3) {
      if ((*(char *)(param_2 + 0xb5) != '\x02') ||
         (cVar2 = '\x01', *(char *)(*(longlong *)(param_2 + 0x48) + 0x73) == '\0')) {
        cVar2 = '\x02' - (*(char *)(param_2 + 0xb5) == '\x01');
      }
      *(char *)param_1[1] = cVar2;
      if ((char)param_1[2] != '\0') {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      *(undefined1 *)(param_1 + 2) = 3;
    }
    if (*(int *)(param_2 + 0x88) != 0) {
      puVar1 = *(undefined8 **)(param_2 + 0x80);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
        *(undefined4 *)(param_2 + 0x88) = 0;
      }
    }
    return;
  }
  if (param_4 != '\x01') {
    return;
  }
  if (1 < *(byte *)(param_1 + 2)) {
    return;
  }
  *(undefined1 *)(param_1 + 2) = 2;
  return;
}



// FUNCTION 147f56c46 FUN_147f56c46 body=204 status=ok
// SIG undefined FUN_147f56c46(void)

void FUN_147f56c46(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x1f0) == 0) {
    lVar1 = lVar1 + 0x460;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
  }
  FUN_14387fdee(param_1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_147f5680c(puVar2,param_1,param_3,param_4);
  *puVar2 = &PTR_FUN_14ac8bf40;
  puVar2[9] = 0;
  FUN_14485c47a(puVar2 + 9,param_2);
  FUN_140b1330e(lVar1,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar2);
  return;
}



// FUNCTION 147f56d12 FUN_147f56d12 body=241 status=ok
// SIG undefined FUN_147f56d12(void)

void FUN_147f56d12(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      uVar5 = FUN_14479d2ce(param_1 + 0x48);
      local_28 = 8;
      local_40[0] = (undefined8 ***)0x0;
      FUN_14485c47a(local_40,uVar5);
      local_20 = 7;
      FUN_1402b90a2(uVar3,&DAT_14cb24280,local_40);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar6 = local_40;
        if (0x18 < local_28) {
          pppuVar6 = (undefined8 ***)local_40[0];
        }
        (*pcVar1)(pppuVar6);
      }
      if (0x18 < local_28) {
        FUN_1400020a8(local_40[0]);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f56e04 FUN_147f56e04 body=206 status=ok
// SIG undefined FUN_147f56e04(void)

void FUN_147f56e04(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      local_20 = 8;
      local_38[0] = (undefined8 ***)0x0;
      local_18 = 7;
      FUN_1402b90a2(uVar3,&DAT_14cb24280,local_38);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = local_38;
        if (0x18 < local_20) {
          pppuVar5 = (undefined8 ***)local_38[0];
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_20) {
        FUN_1400020a8(local_38[0]);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f56ee2 FUN_147f56ee2 body=204 status=ok
// SIG undefined FUN_147f56ee2(void)

void FUN_147f56ee2(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x1f0) == 0) {
    lVar1 = lVar1 + 0x460;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
  }
  FUN_14387fdee(param_1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_147f5680c(puVar2,param_1,param_3,param_4);
  *puVar2 = &PTR_FUN_14ac8bfa0;
  puVar2[9] = 0;
  FUN_14485c47a(puVar2 + 9,param_2);
  FUN_140b1330e(lVar1,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar2);
  return;
}



// FUNCTION 147f56fae FUN_147f56fae body=241 status=ok
// SIG undefined FUN_147f56fae(void)

void FUN_147f56fae(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      uVar5 = FUN_14479d2ce(param_1 + 0x48);
      local_28 = 8;
      local_40[0] = (undefined8 ***)0x0;
      FUN_14485c47a(local_40,uVar5);
      local_20 = 7;
      FUN_1402b90a2(uVar3,&DAT_14cb24270,local_40);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar6 = local_40;
        if (0x18 < local_28) {
          pppuVar6 = (undefined8 ***)local_40[0];
        }
        (*pcVar1)(pppuVar6);
      }
      if (0x18 < local_28) {
        FUN_1400020a8(local_40[0]);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f570a0 FUN_147f570a0 body=206 status=ok
// SIG undefined FUN_147f570a0(void)

void FUN_147f570a0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      local_20 = 8;
      local_38[0] = (undefined8 ***)0x0;
      local_18 = 7;
      FUN_1402b90a2(uVar3,&DAT_14cb24270,local_38);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = local_38;
        if (0x18 < local_20) {
          pppuVar5 = (undefined8 ***)local_38[0];
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_20) {
        FUN_1400020a8(local_38[0]);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5717e FUN_147f5717e body=253 status=ok
// SIG undefined FUN_147f5717e(void)

void FUN_147f5717e(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    FUN_14387fdee(param_1);
    puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = *(undefined8 *)(param_2 + 4);
    FUN_147f5680c(puVar2,param_1,param_3,param_4);
    *puVar2 = &PTR_FUN_14ac8c010;
    *(undefined4 *)(puVar2 + 9) = local_58;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_54;
    *(undefined4 *)(puVar2 + 10) = uStack_50;
    *(undefined4 *)((longlong)puVar2 + 0x54) = uStack_4c;
    puVar2[0xb] = local_48;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5729a FUN_147f5729a body=219 status=ok
// SIG undefined FUN_147f5729a(void)

void FUN_147f5729a(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      puVar5 = &local_48;
      local_30 = 0x18;
      local_48 = *(undefined4 *)(param_1 + 0x48);
      uStack_44 = *(undefined4 *)(param_1 + 0x4c);
      uStack_40 = *(undefined4 *)(param_1 + 0x50);
      uStack_3c = *(undefined4 *)(param_1 + 0x54);
      local_38 = *(undefined8 *)(param_1 + 0x58);
      local_28 = 4;
      FUN_1402b90a2(uVar3,&DAT_14cb24048,puVar5);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_30) {
          puVar5 = (undefined4 *)CONCAT44(uStack_44,local_48);
        }
        (*pcVar1)(puVar5);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(CONCAT44(uStack_44,local_48));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f57376 FUN_147f57376 body=79 status=ok
// SIG undefined FUN_147f57376(void)

void FUN_147f57376(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7fd54();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      FUN_1402b8a4c(uVar2,&DAT_14cb24048);
      return;
    }
  }
  return;
}



// FUNCTION 147f573d4 thunk_FUN_147f573da body=5 status=ok
// SIG undefined thunk_FUN_147f573da(void)

void thunk_FUN_147f573da(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [56];
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_144a8e0e6(param_1 + 0x40);
  if (cVar2 == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x70);
    FUN_140592d14(param_1 + 0x38,auStack_88);
    FUN_14387ff49(auStack_78,auStack_88,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    FUN_1470ed5e8(auStack_68,auStack_78);
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb24050);
    FUN_1403719a4(lVar3 + 8,auStack_68);
    FUN_144a2da94(auStack_68);
  }
  FUN_1470e4986(param_1,param_2);
  if ((uStack_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f573da FUN_147f573da body=191 status=ok
// SIG undefined FUN_147f573da(void)

void FUN_147f573da(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_144a8e0e6(param_1 + 0x40);
  if (cVar2 == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x70);
    FUN_140592d14(param_1 + 0x38,local_88);
    FUN_14387ff49(local_78,local_88,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    FUN_1470ed5e8(local_68,local_78);
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb24050);
    FUN_1403719a4(lVar3 + 8,local_68);
    FUN_144a2da94(local_68);
  }
  FUN_1470e4986(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5749a thunk_FUN_147f574a0 body=5 status=ok
// SIG undefined thunk_FUN_147f574a0(void)

void thunk_FUN_147f574a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 **ppuVar8;
  int iVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  undefined8 *puVar14;
  float *pfVar15;
  undefined8 unaff_RBP;
  undefined8 ***pppuVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [16];
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  int iStack_e0;
  void *pvStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  void *pvStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_a0;
  undefined8 **ppuStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  ushort uStack_80;
  byte bStack_78;
  ulonglong uStack_70;
  
  uStack_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar19 = (float)FUN_141236616();
  FUN_144a787a6(param_2 + 0x28,param_1 + 0x90);
  lVar11 = *(longlong *)(param_1 + 0x48);
  cVar10 = FUN_144a8e0e6(lVar11 + 0x40);
  if (cVar10 == '\0') {
    uVar3 = *(undefined1 *)(lVar11 + 0x70);
    uStack_e8 = 2;
    pvStack_d8 = (void *)FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&ppuStack_98);
    pvStack_c8 = (void *)((ulonglong)pvStack_c8 & 0xffffffffffffff00);
    uStack_a0 = 0;
    FUN_144a7bf34(&pvStack_c8,&ppuStack_98,&pvStack_d8,&uStack_e8);
    plVar7 = (longlong *)CONCAT44(uStack_8c,iStack_90);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    FUN_1447c3578(lVar11 + 0x38,&ppuStack_98,&pvStack_c8);
    FUN_140592d2e(&ppuStack_98,auStack_f8);
    FUN_14387ff49(&uStack_e8,auStack_f8,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
    lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24050);
    puVar17 = (undefined8 *)(lVar11 + 0x40);
    if (*(byte *)(lVar11 + 0x60) == 8) {
      if (puVar17 != (undefined8 *)&uStack_e8) {
        pvVar6 = (void *)CONCAT71(uStack_e7,uStack_e8);
        *(int *)(lVar11 + 0x48) = iStack_e0;
        if (iStack_e0 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
          *(undefined4 *)(lVar11 + 0x4c) = 0;
        }
        else {
          FUN_1446dd670(puVar17,iStack_e0);
          if (iStack_e0 != 0) {
            memcpy((void *)*puVar17,pvVar6,(longlong)iStack_e0 * 2);
          }
        }
      }
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        puVar14 = puVar17;
        if (0x18 < *(ushort *)(lVar11 + 0x58)) {
          puVar14 = *(undefined8 **)(lVar11 + 0x40);
        }
        (*pcVar5)(puVar14);
      }
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        FUN_1400020a8(*puVar17);
      }
      pvStack_d8 = (void *)0x0;
      pvVar6 = (void *)CONCAT71(uStack_e7,uStack_e8);
      iStack_d0 = iStack_e0;
      if ((longlong)iStack_e0 == 0) {
        uStack_cc = 0;
        *(undefined2 *)(lVar11 + 0x58) = 0x10;
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f576fc:
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(&pvStack_d8,iStack_e0,0);
        memcpy(pvStack_d8,pvVar6,(longlong)iStack_e0 * 2);
        pvVar6 = pvStack_d8;
        lVar18 = (longlong)iStack_d0;
        *(undefined2 *)(lVar11 + 0x58) = 0x10;
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(int *)(lVar11 + 0x48) = iStack_d0;
        if (lVar18 == 0) goto LAB_147f576fc;
        FUN_1446dd670(puVar17,iStack_d0,0);
        memcpy((void *)*puVar17,pvVar6,lVar18 * 2);
      }
      *(undefined1 *)(lVar11 + 0x60) = 8;
      if (pvStack_d8 != (void *)0x0) {
        FUN_1400020a8(pvStack_d8);
      }
    }
    if (CONCAT71(uStack_e7,uStack_e8) != 0) {
      FUN_1400020a8();
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar16 = &ppuStack_98;
      if (0x18 < uStack_80) {
        pppuVar16 = (undefined8 ***)ppuStack_98;
      }
      (*pcVar5)(pppuVar16);
    }
    if (0x18 < uStack_80) {
      FUN_1400020a8(ppuStack_98);
    }
    FUN_144a5ac3a(&pvStack_c8);
  }
  if (*(char *)(param_2 + 0x58) != '\x01') goto LAB_147f57e01;
  uVar12 = FUN_147f22929();
  FUN_1401cfad2(uVar12,&ppuStack_98,*(undefined1 *)(param_1 + 0xb4));
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24058);
  iVar9 = iStack_90;
  ppuVar8 = ppuStack_98;
  pppuVar16 = (undefined8 ***)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 8) {
    if (pppuVar16 != &ppuStack_98) {
      lVar18 = (longlong)iStack_90;
      *(int *)(lVar11 + 0x48) = iStack_90;
      if (iStack_90 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,iStack_90);
        if (iVar9 != 0) {
          memcpy(*pppuVar16,ppuVar8,lVar18 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar13 = pppuVar16;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pppuVar13 = *(undefined8 ****)(lVar11 + 0x40);
      }
      (*pcVar5)(pppuVar13);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*pppuVar16);
    }
    ppuVar8 = ppuStack_98;
    pvStack_c8 = (void *)0x0;
    lVar18 = (longlong)iStack_90;
    iStack_c0 = iStack_90;
    if (lVar18 == 0) {
      uStack_bc = 0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f57907:
      *(undefined4 *)(lVar11 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&pvStack_c8,iStack_90,0);
      memcpy(pvStack_c8,ppuVar8,lVar18 * 2);
      pvVar6 = pvStack_c8;
      lVar18 = (longlong)iStack_c0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(int *)(lVar11 + 0x48) = iStack_c0;
      if (lVar18 == 0) goto LAB_147f57907;
      FUN_1446dd670(pppuVar16,iStack_c0,0);
      memcpy(*pppuVar16,pvVar6,lVar18 * 2);
    }
    *(undefined1 *)(lVar11 + 0x60) = 8;
    if (pvStack_c8 != (void *)0x0) {
      FUN_1400020a8(pvStack_c8);
    }
  }
  if ((undefined8 ***)ppuStack_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  uVar12 = FUN_147f229ce();
  FUN_1401cfad2(uVar12,&ppuStack_98,*(undefined1 *)(param_1 + 0xb5));
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24060);
  iVar9 = iStack_90;
  ppuVar8 = ppuStack_98;
  pppuVar16 = (undefined8 ***)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 8) {
    if (pppuVar16 != &ppuStack_98) {
      lVar18 = (longlong)iStack_90;
      *(int *)(lVar11 + 0x48) = iStack_90;
      if (iStack_90 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,iStack_90);
        if (iVar9 != 0) {
          memcpy(*pppuVar16,ppuVar8,lVar18 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar13 = pppuVar16;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pppuVar13 = *(undefined8 ****)(lVar11 + 0x40);
      }
      (*pcVar5)(pppuVar13);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*pppuVar16);
    }
    ppuVar8 = ppuStack_98;
    pvStack_c8 = (void *)0x0;
    lVar18 = (longlong)iStack_90;
    iStack_c0 = iStack_90;
    if (lVar18 == 0) {
      uStack_bc = 0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f57aac:
      *(undefined4 *)(lVar11 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&pvStack_c8,iStack_90,0);
      memcpy(pvStack_c8,ppuVar8,lVar18 * 2);
      pvVar6 = pvStack_c8;
      lVar18 = (longlong)iStack_c0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(int *)(lVar11 + 0x48) = iStack_c0;
      if (lVar18 == 0) goto LAB_147f57aac;
      FUN_1446dd670(pppuVar16,iStack_c0,0);
      memcpy(*pppuVar16,pvVar6,lVar18 * 2);
    }
    *(undefined1 *)(lVar11 + 0x60) = 8;
    if (pvStack_c8 != (void *)0x0) {
      FUN_1400020a8(pvStack_c8);
    }
  }
  if ((undefined8 ***)ppuStack_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  uVar12 = FUN_147f22997();
  FUN_1401cfad2(uVar12,&ppuStack_98,*(undefined1 *)(param_1 + 0xcc));
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24068);
  ppuVar8 = ppuStack_98;
  pppuVar16 = (undefined8 ***)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 8) {
    if (pppuVar16 != &ppuStack_98) {
      *(int *)(lVar11 + 0x48) = iStack_90;
      if (iStack_90 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,iStack_90);
        if (iStack_90 != 0) {
          memcpy(*pppuVar16,ppuVar8,(longlong)iStack_90 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar13 = pppuVar16;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pppuVar13 = *(undefined8 ****)(lVar11 + 0x40);
      }
      (*pcVar5)(pppuVar13);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*pppuVar16);
    }
    ppuVar8 = ppuStack_98;
    pvStack_c8 = (void *)0x0;
    iStack_c0 = iStack_90;
    if ((longlong)iStack_90 == 0) {
      uStack_bc = 0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f57c51:
      *(undefined4 *)(lVar11 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&pvStack_c8,iStack_90,0);
      memcpy(pvStack_c8,ppuVar8,(longlong)iStack_90 * 2);
      pvVar6 = pvStack_c8;
      lVar18 = (longlong)iStack_c0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(int *)(lVar11 + 0x48) = iStack_c0;
      if (lVar18 == 0) goto LAB_147f57c51;
      FUN_1446dd670(pppuVar16,iStack_c0,0);
      memcpy(*pppuVar16,pvVar6,lVar18 * 2);
    }
    *(undefined1 *)(lVar11 + 0x60) = 8;
    if (pvStack_c8 != (void *)0x0) {
      FUN_1400020a8(pvStack_c8);
    }
  }
  if ((undefined8 ***)ppuStack_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24070);
  puVar17 = (undefined8 *)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 2) {
    *(undefined4 *)puVar17 = uVar4;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar14 = puVar17;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        puVar14 = *(undefined8 **)(lVar11 + 0x40);
      }
      (*pcVar5)(puVar14);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*puVar17);
    }
    *(undefined2 *)(lVar11 + 0x58) = 4;
    *(undefined4 *)(lVar11 + 0x40) = uVar4;
    *(undefined1 *)(lVar11 + 0x60) = 2;
  }
  fVar20 = 0.0;
  if ((byte)(*(char *)(param_1 + 0xb4) - 1U) < 2) {
    fVar20 = fVar19 - *(float *)(param_1 + 0xc4);
  }
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24078);
  pfVar2 = (float *)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 3) {
    *pfVar2 = fVar20;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar15 = pfVar2;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pfVar15 = *(float **)(lVar11 + 0x40);
      }
      (*pcVar5)(pfVar15);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar11 + 0x58) = 4;
    *(float *)(lVar11 + 0x40) = fVar20;
    *(undefined1 *)(lVar11 + 0x60) = 3;
  }
  fVar20 = 0.0;
  if (1 < (byte)(*(char *)(param_1 + 0xb4) - 1U)) {
    fVar20 = fVar19 - *(float *)(param_1 + 200);
  }
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24080);
  pfVar2 = (float *)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 3) {
    *pfVar2 = fVar20;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar15 = pfVar2;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pfVar15 = *(float **)(lVar11 + 0x40);
      }
      (*pcVar5)(pfVar15);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar11 + 0x58) = 4;
    *(float *)(lVar11 + 0x40) = fVar20;
    *(undefined1 *)(lVar11 + 0x60) = 3;
  }
LAB_147f57e01:
  FUN_1470e49a6(param_1,param_2);
  if ((uStack_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f574a0 FUN_147f574a0 body=2522 status=ok
// SIG undefined FUN_147f574a0(void)

void FUN_147f574a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 **ppuVar8;
  int iVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  undefined8 *puVar14;
  float *pfVar15;
  undefined8 unaff_RBP;
  undefined8 ***pppuVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined7 uStack_e7;
  int local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_a0;
  undefined8 **local_98;
  int local_90;
  undefined4 uStack_8c;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar19 = (float)FUN_141236616();
  FUN_144a787a6(param_2 + 0x28,param_1 + 0x90);
  lVar11 = *(longlong *)(param_1 + 0x48);
  cVar10 = FUN_144a8e0e6(lVar11 + 0x40);
  if (cVar10 == '\0') {
    uVar3 = *(undefined1 *)(lVar11 + 0x70);
    local_e8 = 2;
    local_d8 = (void *)FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_98);
    local_c8 = (void *)((ulonglong)local_c8 & 0xffffffffffffff00);
    local_a0 = 0;
    FUN_144a7bf34(&local_c8,&local_98,&local_d8,&local_e8);
    plVar7 = (longlong *)CONCAT44(uStack_8c,local_90);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    FUN_1447c3578(lVar11 + 0x38,&local_98,&local_c8);
    FUN_140592d2e(&local_98,local_f8);
    FUN_14387ff49(&local_e8,local_f8,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff)
    ;
    lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24050);
    puVar17 = (undefined8 *)(lVar11 + 0x40);
    if (*(byte *)(lVar11 + 0x60) == 8) {
      if (puVar17 != (undefined8 *)&local_e8) {
        pvVar6 = (void *)CONCAT71(uStack_e7,local_e8);
        *(int *)(lVar11 + 0x48) = local_e0;
        if (local_e0 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
          *(undefined4 *)(lVar11 + 0x4c) = 0;
        }
        else {
          FUN_1446dd670(puVar17,local_e0);
          if (local_e0 != 0) {
            memcpy((void *)*puVar17,pvVar6,(longlong)local_e0 * 2);
          }
        }
      }
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        puVar14 = puVar17;
        if (0x18 < *(ushort *)(lVar11 + 0x58)) {
          puVar14 = *(undefined8 **)(lVar11 + 0x40);
        }
        (*pcVar5)(puVar14);
      }
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        FUN_1400020a8(*puVar17);
      }
      local_d8 = (void *)0x0;
      pvVar6 = (void *)CONCAT71(uStack_e7,local_e8);
      local_d0 = local_e0;
      if ((longlong)local_e0 == 0) {
        local_cc = 0;
        *(undefined2 *)(lVar11 + 0x58) = 0x10;
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f576fc:
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(&local_d8,local_e0,0);
        memcpy(local_d8,pvVar6,(longlong)local_e0 * 2);
        pvVar6 = local_d8;
        lVar18 = (longlong)local_d0;
        *(undefined2 *)(lVar11 + 0x58) = 0x10;
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(int *)(lVar11 + 0x48) = local_d0;
        if (lVar18 == 0) goto LAB_147f576fc;
        FUN_1446dd670(puVar17,local_d0,0);
        memcpy((void *)*puVar17,pvVar6,lVar18 * 2);
      }
      *(undefined1 *)(lVar11 + 0x60) = 8;
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8(local_d8);
      }
    }
    if (CONCAT71(uStack_e7,local_e8) != 0) {
      FUN_1400020a8();
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar16 = &local_98;
      if (0x18 < local_80) {
        pppuVar16 = (undefined8 ***)local_98;
      }
      (*pcVar5)(pppuVar16);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98);
    }
    FUN_144a5ac3a(&local_c8);
  }
  if (*(char *)(param_2 + 0x58) != '\x01') goto LAB_147f57e01;
  uVar12 = FUN_147f22929();
  FUN_1401cfad2(uVar12,&local_98,*(undefined1 *)(param_1 + 0xb4));
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24058);
  iVar9 = local_90;
  ppuVar8 = local_98;
  pppuVar16 = (undefined8 ***)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 8) {
    if (pppuVar16 != &local_98) {
      lVar18 = (longlong)local_90;
      *(int *)(lVar11 + 0x48) = local_90;
      if (local_90 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,local_90);
        if (iVar9 != 0) {
          memcpy(*pppuVar16,ppuVar8,lVar18 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar13 = pppuVar16;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pppuVar13 = *(undefined8 ****)(lVar11 + 0x40);
      }
      (*pcVar5)(pppuVar13);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*pppuVar16);
    }
    ppuVar8 = local_98;
    local_c8 = (void *)0x0;
    lVar18 = (longlong)local_90;
    local_c0 = local_90;
    if (lVar18 == 0) {
      local_bc = 0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f57907:
      *(undefined4 *)(lVar11 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_90,0);
      memcpy(local_c8,ppuVar8,lVar18 * 2);
      pvVar6 = local_c8;
      lVar18 = (longlong)local_c0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(int *)(lVar11 + 0x48) = local_c0;
      if (lVar18 == 0) goto LAB_147f57907;
      FUN_1446dd670(pppuVar16,local_c0,0);
      memcpy(*pppuVar16,pvVar6,lVar18 * 2);
    }
    *(undefined1 *)(lVar11 + 0x60) = 8;
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8(local_c8);
    }
  }
  if ((undefined8 ***)local_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  uVar12 = FUN_147f229ce();
  FUN_1401cfad2(uVar12,&local_98,*(undefined1 *)(param_1 + 0xb5));
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24060);
  iVar9 = local_90;
  ppuVar8 = local_98;
  pppuVar16 = (undefined8 ***)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 8) {
    if (pppuVar16 != &local_98) {
      lVar18 = (longlong)local_90;
      *(int *)(lVar11 + 0x48) = local_90;
      if (local_90 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,local_90);
        if (iVar9 != 0) {
          memcpy(*pppuVar16,ppuVar8,lVar18 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar13 = pppuVar16;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pppuVar13 = *(undefined8 ****)(lVar11 + 0x40);
      }
      (*pcVar5)(pppuVar13);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*pppuVar16);
    }
    ppuVar8 = local_98;
    local_c8 = (void *)0x0;
    lVar18 = (longlong)local_90;
    local_c0 = local_90;
    if (lVar18 == 0) {
      local_bc = 0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f57aac:
      *(undefined4 *)(lVar11 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_90,0);
      memcpy(local_c8,ppuVar8,lVar18 * 2);
      pvVar6 = local_c8;
      lVar18 = (longlong)local_c0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(int *)(lVar11 + 0x48) = local_c0;
      if (lVar18 == 0) goto LAB_147f57aac;
      FUN_1446dd670(pppuVar16,local_c0,0);
      memcpy(*pppuVar16,pvVar6,lVar18 * 2);
    }
    *(undefined1 *)(lVar11 + 0x60) = 8;
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8(local_c8);
    }
  }
  if ((undefined8 ***)local_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  uVar12 = FUN_147f22997();
  FUN_1401cfad2(uVar12,&local_98,*(undefined1 *)(param_1 + 0xcc));
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24068);
  ppuVar8 = local_98;
  pppuVar16 = (undefined8 ***)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 8) {
    if (pppuVar16 != &local_98) {
      *(int *)(lVar11 + 0x48) = local_90;
      if (local_90 == 0 && *(int *)(lVar11 + 0x4c) == 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,local_90);
        if (local_90 != 0) {
          memcpy(*pppuVar16,ppuVar8,(longlong)local_90 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar13 = pppuVar16;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pppuVar13 = *(undefined8 ****)(lVar11 + 0x40);
      }
      (*pcVar5)(pppuVar13);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*pppuVar16);
    }
    ppuVar8 = local_98;
    local_c8 = (void *)0x0;
    local_c0 = local_90;
    if ((longlong)local_90 == 0) {
      local_bc = 0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_147f57c51:
      *(undefined4 *)(lVar11 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_90,0);
      memcpy(local_c8,ppuVar8,(longlong)local_90 * 2);
      pvVar6 = local_c8;
      lVar18 = (longlong)local_c0;
      *(undefined2 *)(lVar11 + 0x58) = 0x10;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(int *)(lVar11 + 0x48) = local_c0;
      if (lVar18 == 0) goto LAB_147f57c51;
      FUN_1446dd670(pppuVar16,local_c0,0);
      memcpy(*pppuVar16,pvVar6,lVar18 * 2);
    }
    *(undefined1 *)(lVar11 + 0x60) = 8;
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8(local_c8);
    }
  }
  if ((undefined8 ***)local_98 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24070);
  puVar17 = (undefined8 *)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 2) {
    *(undefined4 *)puVar17 = uVar4;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar14 = puVar17;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        puVar14 = *(undefined8 **)(lVar11 + 0x40);
      }
      (*pcVar5)(puVar14);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*puVar17);
    }
    *(undefined2 *)(lVar11 + 0x58) = 4;
    *(undefined4 *)(lVar11 + 0x40) = uVar4;
    *(undefined1 *)(lVar11 + 0x60) = 2;
  }
  fVar20 = 0.0;
  if ((byte)(*(char *)(param_1 + 0xb4) - 1U) < 2) {
    fVar20 = fVar19 - *(float *)(param_1 + 0xc4);
  }
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24078);
  pfVar2 = (float *)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 3) {
    *pfVar2 = fVar20;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar15 = pfVar2;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pfVar15 = *(float **)(lVar11 + 0x40);
      }
      (*pcVar5)(pfVar15);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar11 + 0x58) = 4;
    *(float *)(lVar11 + 0x40) = fVar20;
    *(undefined1 *)(lVar11 + 0x60) = 3;
  }
  fVar20 = 0.0;
  if (1 < (byte)(*(char *)(param_1 + 0xb4) - 1U)) {
    fVar20 = fVar19 - *(float *)(param_1 + 200);
  }
  lVar11 = FUN_1470e53c2(param_2,&DAT_14cb24080);
  pfVar2 = (float *)(lVar11 + 0x40);
  if (*(byte *)(lVar11 + 0x60) == 3) {
    *pfVar2 = fVar20;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar15 = pfVar2;
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        pfVar15 = *(float **)(lVar11 + 0x40);
      }
      (*pcVar5)(pfVar15);
    }
    if (0x18 < *(ushort *)(lVar11 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar11 + 0x58) = 4;
    *(float *)(lVar11 + 0x40) = fVar20;
    *(undefined1 *)(lVar11 + 0x60) = 3;
  }
LAB_147f57e01:
  FUN_1470e49a6(param_1,param_2);
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f57e7c FUN_147f57e7c body=100 status=ok
// SIG undefined FUN_147f57e7c(void)

void FUN_147f57e7c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0xe8))
                (*(longlong **)(lVar2 + lVar3),param_2,param_3,1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147f57f1e FUN_147f57f1e body=370 status=ok
// SIG undefined FUN_147f57f1e(void)

undefined8 * FUN_147f57f1e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  short *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14147b138(param_1,local_38);
  FUN_14029eeae(local_38);
  _Str = (wchar_t *)(**(code **)(*param_1 + 0xd8))(param_1);
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar1 = FUN_1447ee042(&local_30,_Str,sVar3 & 0xffffffff,1);
    if (-1 < iVar1) {
      iVar2 = local_28 + -1;
      if (local_28 == 0) {
        iVar2 = 0;
      }
      if (iVar1 < iVar2) {
        sVar3 = wcslen(_Str);
        FUN_14496493a(&local_30,0,iVar1 + (int)sVar3,0);
      }
    }
  }
  if (local_28 < 2) {
    FUN_140056680(param_2,_Str);
    if (local_30 != (short *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_30 == 0x5f) {
      FUN_14496493a(&local_30,0,1,0);
    }
    uVar4 = local_28 - 1;
    if (local_28 == 0) {
      uVar4 = 0;
    }
    if (((2 < (int)uVar4) && (local_30[uVar4 - 2] == 0x5f)) &&
       (local_30[(ulonglong)uVar4 - 1] == 0x43)) {
      FUN_14496493a(&local_30,(ulonglong)(uVar4 - 2),2,0);
    }
    *param_2 = local_30;
    *(int *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f58092 FUN_147f58092 body=265 status=ok
// SIG undefined FUN_147f58092(void)

/* WARNING: Removing unreachable block (ram,0x000147f5811f) */

void FUN_147f58092(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0xf0))(param_1,&local_40,param_2);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_3,iVar1);
  }
  lVar4 = *param_3;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar4 + lVar3) = 0;
  *(undefined8 *)(lVar4 + lVar3) = local_40;
  *(undefined4 *)(lVar4 + 8 + lVar3) = (undefined4)local_38;
  *(undefined4 *)(lVar4 + 0xc + lVar3) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  iVar1 = (int)param_3[1];
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3);
  if (param_4 != '\0') {
    (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3);
  }
  if (iVar1 < (int)param_3[1]) {
    iVar2 = (int)param_3[1] - iVar1;
    lVar4 = (longlong)iVar1 << 4;
    do {
      FUN_1467aca2a(*param_3 + lVar4,0,9);
      lVar4 = lVar4 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5819c FUN_147f5819c body=335 status=ok
// SIG undefined FUN_147f5819c(void)

undefined8 FUN_147f5819c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xe0))();
  cVar1 = *(char *)((longlong)param_1 + 0xb4);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x02') {
      FUN_140002266(&local_30,L" (Running - %0.02fs)",
                    (double)(*(float *)(param_3 + 8) - *(float *)((longlong)param_1 + 0xc4)));
      iVar2 = local_28 + -1;
      if (local_28 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_30,iVar2);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else if (cVar1 == '\0') {
      pwVar3 = L" (Idle)";
      uVar4 = 7;
      goto LAB_147f581ed;
    }
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  switch(*(undefined1 *)((longlong)param_1 + 0xb5)) {
  case 1:
    pwVar3 = L" (Succeeded)";
    uVar4 = 0xc;
    break;
  case 2:
    pwVar3 = L" (Failed)";
    uVar4 = 9;
    break;
  case 3:
    pwVar3 = L" (Interrupted)";
    uVar4 = 0xe;
    break;
  case 4:
    pwVar3 = L" (Aborted)";
    goto LAB_147f582de;
  default:
    pwVar3 = L" (Stopped)";
LAB_147f582de:
    uVar4 = 10;
  }
LAB_147f581ed:
  FUN_1400020e8(param_2,pwVar3,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147f582ec FUN_147f582ec body=190 status=ok
// SIG undefined FUN_147f582ec(void)

/* WARNING: Removing unreachable block (ram,0x000147f5839b) */

void FUN_147f582ec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1 < *(int *)(param_1 + 0x98)) {
    FUN_140b1283a(&local_28,L"Error: ",param_1 + 0x90);
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_3,iVar1);
    }
    lVar2 = *param_3;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    local_28 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f583ae FUN_147f583ae body=38 status=ok
// SIG undefined FUN_147f583ae(void)

longlong FUN_147f583ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xb0) < 1) {
    FUN_140c156b2(param_1);
  }
  return param_1 + 0x80;
}



// FUNCTION 147f583d4 FUN_147f583d4 body=164 status=ok
// SIG undefined FUN_147f583d4(void)

void FUN_147f583d4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar3) + 0xe8))
                (*(longlong **)(lVar4 + lVar3),param_2,param_3,1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((0 < *(int *)(param_1 + 0x1a8)) &&
     (plVar2 = (longlong *)**(longlong **)(param_1 + 0x1a0), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147f58466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x100))(plVar2,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147f58478 FUN_147f58478 body=164 status=ok
// SIG undefined FUN_147f58478(void)

void FUN_147f58478(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar3) + 0xe8))
                (*(longlong **)(lVar4 + lVar3),param_2,param_3,1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((0 < *(int *)(param_1 + 0x1a8)) &&
     (plVar2 = (longlong *)**(longlong **)(param_1 + 0x1a0), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147f5850a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x100))(plVar2,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147f5851c FUN_147f5851c body=261 status=ok
// SIG undefined FUN_147f5851c(void)

void FUN_147f5851c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb24098) {
    FUN_144b3d300(&DAT_14cb24098);
    if (DAT_14cb24098 == -1) {
      FUN_1446f470e(&DAT_14cb24090,L"TaskTag",1);
      _Init_thread_footer(&DAT_14cb24098);
    }
  }
  local_50 = *(undefined8 *)(param_1 + 0x80);
  local_58 = 0;
  local_38 = 8;
  local_30 = 0x12;
  local_28 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb24090);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f58622 FUN_147f58622 body=63 status=ok
// SIG undefined FUN_147f58622(void)

void FUN_147f58622(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb240b8 == 0) {
    uVar1 = FUN_140851d9a();
    DAT_14cb240b8 = FUN_140277cc4(uVar1,L"/Script/GbxAI.EGbxTerritoryArea",0,0,0);
  }
  return;
}



// FUNCTION 147f58661 FUN_147f58661 body=55 status=ok
// SIG undefined FUN_147f58661(void)

undefined8 * FUN_147f58661(undefined8 *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147f58622();
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1414aa4be(lVar1,param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f586a0 FUN_147f586a0 body=25 status=ok
// SIG undefined FUN_147f586a0(void)

void FUN_147f586a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x638) = param_2;
  *(undefined4 *)(param_1 + 0x758) = param_3;
  *(undefined4 *)(param_1 + 0x878) = param_4;
  return;
}



// FUNCTION 147f586ba FUN_147f586ba body=1 status=ok
// SIG undefined FUN_147f586ba(void)

void FUN_147f586ba(void)

{
  return;
}



// FUNCTION 147f586bc FUN_147f586bc body=213 status=ok
// SIG undefined FUN_147f586bc(void)

void FUN_147f586bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_14001cc68(0x378,0x10);
    FUN_1457ddc2a(uVar2,param_1 + 0x628);
    lVar1 = *(longlong *)(param_1 + 0x9a0);
    *(undefined8 *)(param_1 + 0x9a0) = uVar2;
    if (lVar1 != 0) {
      FUN_140315562(lVar1);
      FUN_1400020a8(lVar1);
    }
    FUN_1458df8c6(param_1 + 0x628,param_2);
    FUN_14082d704(param_1);
    return;
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FUN_1458df8c6(param_1 + 0x628);
    lVar1 = *(longlong *)(param_1 + 0x9a0);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x9a0) = 0;
      FUN_140315562(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147f58848 FUN_147f58848 body=52 status=ok
// SIG undefined FUN_147f58848(void)

undefined8 FUN_147f58848(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  uVar2 = *(undefined1 *)(param_1 + 9);
  uVar3 = FUN_1447262c2(param_4);
  FUN_14040c4bd(param_2,CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar2) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar3);
  return param_2;
}



// FUNCTION 147f5887c FUN_147f5887c body=48 status=ok
// SIG undefined FUN_147f5887c(void)

void FUN_147f5887c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_14054d68c(param_2,param_1);
  FUN_147f588ac(param_2,param_3,param_4);
  return;
}



// FUNCTION 147f588ac FUN_147f588ac body=310 status=ok
// SIG undefined FUN_147f588ac(void)

void FUN_147f588ac(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x48);
        if (*plVar1 == param_2) {
          if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             ((char)plVar1[7] == '\x02')) {
            puVar5 = &local_38;
            local_20 = 4;
            local_18 = 2;
            local_38 = param_3;
            FUN_1414c5ac2(plVar1 + 1,puVar5);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_20) {
                puVar5 = (undefined4 *)CONCAT44(uStack_34,local_38);
              }
              (*pcVar2)(puVar5);
            }
            if (0x18 < local_20) {
              FUN_1400020a8(CONCAT44(uStack_34,local_38));
            }
          }
          break;
        }
        iVar7 = (int)plVar1[8];
      } while (iVar7 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f589e4 FUN_147f589e4 body=103 status=ok
// SIG undefined FUN_147f589e4(void)

void FUN_147f589e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14054d68c(param_2,param_1);
  local_28 = *(undefined8 *)(param_4 + 4);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  FUN_147f58a4c(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f58a4c FUN_147f58a4c body=322 status=ok
// SIG undefined FUN_147f58a4c(void)

void FUN_147f58a4c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x48);
        if (*plVar1 == param_2) {
          if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             ((char)plVar1[7] == '\x05')) {
            puVar5 = &local_38;
            local_20 = 0x18;
            local_38 = *param_3;
            uStack_34 = param_3[1];
            uStack_30 = param_3[2];
            uStack_2c = param_3[3];
            local_28 = *(undefined8 *)(param_3 + 4);
            local_18 = 5;
            FUN_1414c5ac2(plVar1 + 1,puVar5);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_20) {
                puVar5 = (undefined4 *)CONCAT44(uStack_34,local_38);
              }
              (*pcVar2)(puVar5);
            }
            if (0x18 < local_20) {
              FUN_1400020a8(CONCAT44(uStack_34,local_38));
            }
          }
          break;
        }
        iVar7 = (int)plVar1[8];
      } while (iVar7 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f58b90 FUN_147f58b90 body=48 status=ok
// SIG undefined FUN_147f58b90(void)

void FUN_147f58b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_14054d68c(param_2,param_1);
  FUN_147f58bc0(param_2,param_3,*param_4);
  return;
}



// FUNCTION 147f58bc0 FUN_147f58bc0 body=310 status=ok
// SIG undefined FUN_147f58bc0(void)

void FUN_147f58bc0(longlong param_1,longlong param_2,undefined8 ****param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined8 ***local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x48);
        if (*plVar1 == param_2) {
          if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             ((char)plVar1[7] == '\v')) {
            local_20 = 8;
            local_18 = 0xb;
            local_38[0] = param_3;
            FUN_1414c5ac2(plVar1 + 1,local_38);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar5 = local_38;
              if (0x18 < local_20) {
                ppppuVar5 = (undefined8 ****)local_38[0];
              }
              (*pcVar2)(ppppuVar5);
            }
            if (0x18 < local_20) {
              FUN_1400020a8(local_38[0]);
            }
          }
          break;
        }
        iVar7 = (int)plVar1[8];
      } while (iVar7 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f58d14 FUN_147f58d14 body=197 status=ok
// SIG undefined FUN_147f58d14(void)

void FUN_147f58d14(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x40) == 2) {
    uVar2 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
    FUN_14070cbf4(&local_28,uVar2);
    plVar4 = local_20;
    *(undefined8 *)(param_1 + 0x98) = local_28;
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if (plVar3 != local_20) {
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
        UNLOCK();
        plVar3 = *(longlong **)(param_1 + 0xa0);
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
      *(longlong **)(param_1 + 0xa0) = plVar4;
      plVar4 = local_20;
    }
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
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



// FUNCTION 147f58dda FUN_147f58dda body=133 status=ok
// SIG undefined FUN_147f58dda(void)

void FUN_147f58dda(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c3bf40(*(longlong *)(param_1 + 0x48) + 0x48,&local_20,*(longlong *)(param_1 + 0x40) + 0x240
                ,*(longlong *)(param_1 + 0x48) + 0x60);
  *(undefined8 *)(param_1 + 0x90) = local_20;
  if (*(float *)(param_1 + 0x58) <= 0.0 && *(float *)(param_1 + 0x58) != 0.0) {
    uVar1 = FUN_14025bbd2(param_1 + 0x90,*(longlong *)(param_1 + 0x40) + 0x4e8);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f58e68 FUN_147f58e68 body=896 status=ok
// SIG undefined FUN_147f58e68(void)

ulonglong FUN_147f58e68(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  longlong *_Dst;
  undefined8 *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_98 [32];
  undefined8 ***local_78 [3];
  ushort local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x40);
  iVar3 = *(int *)(lVar5 + 0x4f0);
  if (((longlong)iVar3 < 0) || (*(int *)(lVar5 + 0x880) <= iVar3)) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    lVar7 = lVar5 + 0x4f8;
    if (*(longlong *)(lVar5 + 0x878) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x878);
    }
    puVar13 = (undefined8 *)((longlong)iVar3 * 0x38 + lVar7);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar7 + 0x40) != 0) {
    if (puVar13 == (undefined8 *)0x0) {
      local_60 = 0;
      local_58 = 0;
      puVar13 = (undefined8 *)(param_1 + 0x68);
      pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 0x88) * 0x120));
      if (pcVar9 != (code *)0x0) {
        puVar11 = puVar13;
        if (0x18 < *(ushort *)(param_1 + 0x80)) {
          puVar11 = (undefined8 *)*puVar13;
        }
        (*pcVar9)(puVar11);
      }
      if (0x18 < *(ushort *)(param_1 + 0x80)) {
        FUN_1400020a8(*puVar13);
      }
      *(undefined2 *)(param_1 + 0x80) = 0;
      pcVar9 = DAT_14c9a85b8;
      if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar9 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0))
      {
        memcpy(puVar13,local_78,(longlong)DAT_14c9a8510);
      }
      else {
        (*pcVar9)(puVar13,local_78);
      }
      *(undefined1 *)(param_1 + 0x88) = local_58;
      local_58 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar12 = (undefined8 ****)local_78[0];
        if (local_60 < 0x19) {
          ppppuVar12 = local_78;
        }
        (*DAT_14c9a85d0)(ppppuVar12);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      *(undefined8 *)(param_1 + 0x5c) = 0x7f7fffff7f7fffff;
      uVar8 = 0;
      goto LAB_147f58f47;
    }
    _Dst = (longlong *)(param_1 + 0x68);
    cVar6 = FUN_144a43716(puVar13,_Dst);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0x160);
      *(undefined4 *)(param_1 + 0x5c) = 0x7f7fffff;
      bVar1 = *(byte *)(param_1 + 0x88);
      if (bVar1 == *(byte *)(puVar13 + 4)) {
        if (0x18 < *(ushort *)(puVar13 + 3)) {
          puVar13 = (undefined8 *)*puVar13;
        }
        if (0x18 < *(ushort *)(param_1 + 0x80)) {
          _Dst = (longlong *)*_Dst;
        }
        uVar8 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar9 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
        if (pcVar9 == (code *)0x0) {
          memcpy(_Dst,puVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (*pcVar9)(_Dst,puVar13);
        }
      }
      else {
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar9 != (code *)0x0) {
          plVar10 = _Dst;
          if (0x18 < *(ushort *)(param_1 + 0x80)) {
            plVar10 = (longlong *)*_Dst;
          }
          (*pcVar9)(plVar10);
        }
        if (0x18 < *(ushort *)(param_1 + 0x80)) {
          FUN_1400020a8(*_Dst);
        }
        bVar1 = *(byte *)(puVar13 + 4);
        uVar2 = *(ushort *)(puVar13 + 3);
        *(ushort *)(param_1 + 0x80) = uVar2;
        puVar11 = puVar13;
        if (0x18 < uVar2) {
          plVar10 = (longlong *)FUN_14001cc68(uVar2,0);
          *_Dst = (longlong)plVar10;
          puVar11 = (undefined8 *)*puVar13;
          _Dst = plVar10;
        }
        pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar9 == (code *)0x0) {
          memcpy(_Dst,puVar11,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
        }
        else {
          (*pcVar9)(_Dst);
        }
        *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(puVar13 + 4);
      }
    }
    if (*(int *)(lVar7 + 0x40) == 2) {
      fVar14 = *(float *)(param_1 + 0x5c);
      cVar6 = FUN_147f591ea(param_1);
      if (cVar6 == '\0') {
        uVar15 = 0x7f7fffff;
      }
      else {
        if ((fVar14 != 3.4028235e+38) || (NAN(fVar14))) goto LAB_147f58efd;
        uVar15 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x160);
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar15;
    }
  }
LAB_147f58efd:
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x40);
  uVar8 = (ulonglong)uVar4;
  if (uVar4 == 1) {
    lVar7 = 0x60;
LAB_147f58f1d:
    fVar14 = *(float *)(param_1 + lVar7);
    uVar8 = 1;
    if ((fVar14 == 3.4028235e+38) && (!NAN(fVar14))) goto LAB_147f58f47;
  }
  else {
    fVar14 = 0.0;
    if (uVar4 == 2) {
      lVar7 = 0x5c;
      goto LAB_147f58f1d;
    }
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),
                   *(float *)(lVar5 + 0x160) - fVar14 < *(float *)(param_1 + 0x58));
LAB_147f58f47:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147f591ea FUN_147f591ea body=285 status=ok
// SIG undefined FUN_147f591ea(void)

ulonglong FUN_147f591ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 == (longlong *)0x0) {
LAB_147f592c4:
    uVar8 = 0;
    goto LAB_147f592c6;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_147f592c4;
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
  lVar4 = *(longlong *)(param_1 + 0x98);
  if ((lVar4 == 0 || *(char *)(param_1 + 0x88) == '\0') || (*(char *)(lVar4 + 0x2b0) != '\0')) {
LAB_147f592e7:
    uVar8 = 0;
  }
  else {
    FUN_1405b801a(param_1 + 0x68,&local_38,&DAT_14cb23fc0);
    cVar6 = FUN_144a872af(&local_38);
    if (cVar6 == '\0') goto LAB_147f592e7;
    local_30 = local_30 - *(double *)(lVar4 + 0x590);
    local_38 = local_38 - *(double *)(lVar4 + 0x588);
    uVar8 = CONCAT71((int7)((ulonglong)&local_38 >> 8),
                     (float)(local_38 * local_38 + local_30 * local_30) <=
                     *(float *)(lVar4 + 0x5d0) * *(float *)(lVar4 + 0x5d0) + 0.01);
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
LAB_147f592c6:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147f59314 FUN_147f59314 body=127 status=ok
// SIG undefined FUN_147f59314(void)

ulonglong FUN_147f59314(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  undefined1 *puVar2;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (undefined1 *)0x0;
  local_18 = 0x2400000000;
  FUN_142b39706(param_1 + 0x28,local_48,*(undefined8 *)(param_1 + 0x20));
  if ((int)local_18 < 1) {
    uVar1 = 0;
  }
  else {
    puVar2 = local_48;
    if (local_20 != (undefined1 *)0x0) {
      puVar2 = local_20;
    }
    uVar1 = CONCAT71((int7)((ulonglong)puVar2 >> 8),*puVar2);
  }
  if (local_20 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f59394 FUN_147f59394 body=65 status=ok
// SIG undefined FUN_147f59394(void)

longlong FUN_147f59394(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140502f56(param_3);
  if (lVar1 == 0) {
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  else {
    FUN_144a7fe3a(lVar1,param_2,param_1 + 0x28);
  }
  return param_2;
}



// FUNCTION 147f593d6 FUN_147f593d6 body=104 status=ok
// SIG undefined FUN_147f593d6(void)

undefined8 * FUN_147f593d6(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    uVar2 = FUN_144a78ab8();
    plVar3 = (longlong *)FUN_144718840(param_3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
      uVar2 = FUN_1408a1fe2(uVar2);
      *(undefined2 *)(param_2 + 3) = 8;
      *param_2 = 0;
      FUN_14485c47a(param_2,uVar2);
      uVar1 = 7;
      goto LAB_147f59431;
    }
  }
  *(undefined2 *)(param_2 + 3) = 0;
  uVar1 = 0;
LAB_147f59431:
  *(undefined1 *)(param_2 + 4) = uVar1;
  return param_2;
}



// FUNCTION 147f5943e FUN_147f5943e body=250 status=ok
// SIG undefined FUN_147f5943e(void)

undefined8 FUN_147f5943e(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_90,10);
  if (uVar1 == ((ulonglong)local_90 & 0xffffffff)) {
    local_90 = (undefined **)CONCAT44(local_90._4_4_,*(undefined4 *)(param_2 + 8));
    lVar3 = FUN_1462a9b24();
    cVar2 = FUN_1468ec2ac(&local_90,*(undefined8 *)(lVar3 + 0x18));
    if (cVar2 != '\0') {
      local_68 = DAT_14c846508;
      local_78 = (undefined4)DAT_14c8464f8;
      uStack_74 = DAT_14c8464f8._4_4_;
      uStack_70 = (undefined4)DAT_14c846500;
      uStack_6c = DAT_14c846500._4_4_;
      local_88 = 0;
      local_80 = 0;
      local_90 = &PTR_FUN_14a1a0270;
      local_60 = 0;
      local_58 = (undefined4)DAT_14c8464f8;
      uStack_54 = DAT_14c8464f8._4_4_;
      uStack_50 = (undefined4)DAT_14c846500;
      uStack_4c = DAT_14c846500._4_4_;
      local_48 = DAT_14c846508;
      local_40 = 0;
      local_3c = 0;
      uVar4 = FUN_1462a9b24();
      FUN_14047320e(uVar4,param_3,param_1 + 8,&local_90);
      uVar4 = 1;
      goto LAB_147f59510;
    }
  }
  uVar4 = 0;
LAB_147f59510:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5954e FUN_147f5954e body=801 status=ok
// SIG undefined FUN_147f5954e(void)

void FUN_147f5954e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400ef488();
  dVar3 = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  uVar4 = (undefined4)DAT_14c8464e0;
  local_68 = DAT_14c8464f0;
  local_78 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_70 = (undefined4)DAT_14c8464e8;
  uStack_6c = DAT_14c8464e8._4_4_;
  local_60 = (undefined4)DAT_14c8464e0;
  uStack_5c = DAT_14c8464e0._4_4_;
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  local_50 = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x418) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x41c) = uVar5;
  *(undefined4 *)(param_1 + 0x420) = uVar6;
  *(undefined4 *)(param_1 + 0x424) = uVar7;
  *(double *)(param_1 + 0x428) = dVar3;
  *(ulonglong *)(param_1 + 0x430) = CONCAT44(uVar5,uVar4);
  *(ulonglong *)(param_1 + 0x438) = CONCAT44(uVar7,uVar6);
  *(double *)(param_1 + 0x440) = dVar3;
  lVar1 = param_1 + 0x448;
  *(undefined4 *)(param_1 + 0x490) = 0;
  if (*(int *)(param_1 + 0x494) < 0) {
    FUN_147f53e9a(lVar1,0);
  }
  *(undefined8 *)(param_1 + 0x498) = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar11 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar8 = FUN_144a7be76(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_144a6c4d8();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      local_78 = 0.0;
      FUN_14485c47a(&local_78,lVar8);
      FUN_14108df6c(lVar1,&local_78);
      uVar10 = FUN_1447210f0(lVar8);
      FUN_14485c47a(param_1 + 0x498,uVar10);
    }
  }
  FUN_140309ec4(lVar2 + 0x48,&local_78,lVar11);
  *(double *)(param_1 + 0x428) = local_68;
  *(undefined4 *)(param_1 + 0x418) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x41c) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x420) = uStack_70;
  *(undefined4 *)(param_1 + 0x424) = uStack_6c;
  lVar8 = FUN_14030a04a(lVar2 + 0x48,lVar11);
  if (lVar8 != 0) {
    local_78 = 0.0;
    FUN_14485c47a(&local_78,lVar8);
    FUN_14108df6c(lVar1,&local_78);
  }
  fVar12 = (float)FUN_140309e34(lVar2 + 0x338,lVar11,lVar2 + 0x350);
  *(double *)(param_1 + 0x428) = (double)fVar12 + *(double *)(param_1 + 0x428);
  if (*(int *)(lVar2 + 0x44) == 1) {
    FUN_140309ec4(lVar2 + 0xe0,&local_78,lVar11);
    *(double *)(param_1 + 0x440) = local_68;
    *(undefined4 *)(param_1 + 0x430) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x434) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0x438) = uStack_70;
    *(undefined4 *)(param_1 + 0x43c) = uStack_6c;
    lVar8 = FUN_14030a04a(lVar2 + 0xe0,lVar11);
    if (lVar8 != 0) {
      local_78 = 0.0;
      FUN_14485c47a(&local_78,lVar8);
      FUN_14108df6c(lVar1,&local_78);
    }
  }
  else if (*(int *)(lVar2 + 0x44) == 0) {
    FUN_140d0f87a(lVar2 + 0x178,local_90,(undefined4 *)(param_1 + 0x418),lVar11);
    FUN_144a76660(local_90,&local_78);
    fVar12 = (float)FUN_140309e34(lVar2 + 0x2d8,lVar11,lVar2 + 0x2f0);
    dVar3 = (double)fVar12;
    *(double *)(param_1 + 0x430) = dVar3 * local_78 + *(double *)(param_1 + 0x418);
    *(double *)(param_1 + 0x438) =
         (double)CONCAT44(uStack_6c,uStack_70) * dVar3 + *(double *)(param_1 + 0x420);
    *(double *)(param_1 + 0x440) = local_68 * dVar3 + *(double *)(param_1 + 0x428);
  }
  fVar12 = (float)FUN_140309e34(lVar2 + 0x358,lVar11,lVar2 + 0x370);
  *(double *)(param_1 + 0x440) = (double)fVar12 + *(double *)(param_1 + 0x440);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f59870 FUN_147f59870 body=1103 status=ok
// SIG undefined FUN_147f59870(void)

void FUN_147f59870(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined4 local_140 [30];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_98 [72];
  byte local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar5 = FUN_14479d2ce(param_1 + 0x498);
  if (lVar5 == 0) goto LAB_147f59a42;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_1d8 = param_1 + 0x448;
  FUN_140a2a5cc(lVar3 + 0x2f8,local_150,param_1 + 0x418,lVar5);
  local_30 = 0;
  local_28 = 0;
  switch(*(undefined4 *)(lVar3 + 0x40)) {
  case 0:
    puVar6 = &local_c8;
    if (local_50 != 0) {
      puVar6 = local_140;
    }
    local_168 = *puVar6;
    uStack_164 = puVar6[1];
    uStack_160 = puVar6[2];
    uStack_15c = puVar6[3];
    local_158 = *(undefined8 *)(puVar6 + 4);
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_48), 0x18 < local_30)) {
      FUN_1400020a8(local_48);
    }
    local_30 = 0x18;
    local_48 = (undefined8 *)CONCAT44(uStack_164,local_168);
    uStack_40 = uStack_160;
    uStack_3c = uStack_15c;
    local_38 = local_158;
    local_28 = 4;
    goto LAB_147f59998;
  case 1:
    puVar6 = &local_c8;
    if (local_50 != 0) {
      puVar6 = local_140;
    }
    local_188 = *puVar6;
    uStack_184 = puVar6[1];
    uStack_180 = puVar6[2];
    uStack_17c = puVar6[3];
    local_178 = *(undefined8 *)(puVar6 + 4);
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_48), 0x18 < local_30)) {
      FUN_1400020a8(local_48);
    }
    local_30 = 0x18;
    local_48 = (undefined8 *)CONCAT44(uStack_184,local_188);
    uStack_40 = uStack_180;
    uStack_3c = uStack_17c;
    local_38 = local_178;
    local_28 = 4;
    bVar8 = local_50 ^ 1;
    break;
  case 2:
    if ((local_50 == 1) && (lVar5 = FUN_14485cccc(local_98), lVar5 != 0)) {
      if (local_28 == 7) {
        FUN_14485c47a(&local_48,lVar5);
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar7 = local_48;
          if (local_30 < 0x19) {
            puVar7 = &local_48;
          }
          (*pcVar4)(puVar7);
        }
        if (0x18 < local_30) {
          FUN_1400020a8(local_48);
        }
        local_30 = 8;
        local_48 = (undefined8 *)0x0;
        FUN_14485c47a(&local_48,lVar5);
        local_28 = 7;
      }
      goto LAB_147f59c41;
    }
LAB_147f59998:
    bVar8 = 0;
    break;
  case 3:
    local_198 = local_b8;
    local_1a8 = local_c8;
    uStack_1a4 = uStack_c4;
    uStack_1a0 = uStack_c0;
    uStack_19c = uStack_bc;
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_48), 0x18 < local_30)) {
      FUN_1400020a8(local_48);
    }
    local_30 = 0x18;
    uStack_40 = uStack_1a0;
    uStack_3c = uStack_19c;
    local_48 = (undefined8 *)CONCAT44(uStack_1a4,local_1a8);
    local_38 = local_198;
    local_28 = 4;
    bVar8 = local_50;
    break;
  default:
    local_1b8 = local_b8;
    local_1c8 = local_c8;
    uStack_1c4 = uStack_c4;
    uStack_1c0 = uStack_c0;
    uStack_1bc = uStack_bc;
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_48), 0x18 < local_30)) {
      FUN_1400020a8(local_48);
    }
    local_30 = 0x18;
    local_48 = (undefined8 *)CONCAT44(uStack_1c4,local_1c8);
    uStack_40 = uStack_1c0;
    uStack_3c = uStack_1bc;
    local_38 = local_1b8;
    local_28 = 4;
LAB_147f59c41:
    bVar8 = 1;
  }
  iVar2 = *(int *)(param_2 + 0x388);
  *(uint *)(param_2 + 0x388) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x38c) < iVar2 + 1U) {
    FUN_14052e0a0(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x380);
  if (*(longlong *)(param_2 + 0x380) == 0) {
    lVar5 = param_2;
  }
  lVar5 = (longlong)iVar2 * 0x38 + lVar5;
  FUN_141814da4(lVar5,&local_48,0);
  if (bVar8 != 0) {
    pbVar1 = (byte *)(lVar5 + 0x34);
    *pbVar1 = *pbVar1 | 1;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar4 != (code *)0x0) {
    puVar7 = &local_48;
    if (0x18 < local_30) {
      puVar7 = local_48;
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48);
  }
LAB_147f59a42:
  if ((local_20 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f59cdc FUN_147f59cdc body=139 status=ok
// SIG undefined FUN_147f59cdc(void)

void FUN_147f59cdc(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x58);
  uVar3 = 1;
  if ((byte)iVar2 < 4) {
    uVar3 = (char)(0x2020001 >> ((byte)(iVar2 << 3) & 0x1f));
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x5c);
  lVar6 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar6;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x21) = uVar3;
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    iVar4 = 0;
    if ((*(byte *)(*param_2 + 0x34) & 1) != 0) {
      iVar5 = 1;
      do {
        iVar4 = iVar2;
        if (iVar2 == iVar5) break;
        lVar6 = (longlong)iVar5;
        iVar4 = iVar5;
        iVar5 = iVar5 + 1;
      } while ((*(byte *)(*param_2 + 0x34 + lVar6 * 0x38) & 1) != 0);
    }
    *(int *)(param_2 + 2) = iVar4;
  }
  return;
}



// FUNCTION 147f59d68 FUN_147f59d68 body=42 status=ok
// SIG undefined FUN_147f59d68(void)

void FUN_147f59d68(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x68,param_2);
  return;
}



// FUNCTION 147f59d98 FUN_147f59d98 body=94 status=ok
// SIG undefined FUN_147f59d98(void)

void FUN_147f59d98(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  uVar3 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x68,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x80);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  return;
}



// FUNCTION 147f59e06 FUN_147f59e06 body=1057 status=ok
// SIG undefined FUN_147f59e06(void)

void FUN_147f59e06(longlong param_1,undefined8 param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined8 ***local_148;
  double dStack_140;
  double local_138;
  longlong local_130;
  uint local_128;
  uint local_120;
  undefined8 ***local_108;
  double dStack_100;
  double local_f8;
  ushort local_f0;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = *(longlong *)(param_1 + 0x40);
  local_150 = *(longlong *)(param_1 + 0x48);
  bVar2 = *(byte *)(local_150 + 0x58);
  FUN_14023b1cc(param_1,&local_130,param_2);
  if (local_120 < local_128) {
    local_158 = lVar4 + 0x4e8;
    do {
      uVar10 = local_120;
      if (((bVar2 & 0xfd) == 0) &&
         (cVar6 = FUN_1418115bc((longlong)(int)local_120 * 0x38 + local_130,&local_148),
         cVar6 != '\0')) {
        iVar3 = *(int *)(local_150 + 0x60);
        if (iVar3 == 0) {
          fVar1 = *(float *)(param_1 + 0x58);
          uVar7 = *(int *)(lVar4 + 0x4ec) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar4 + 0x4ec) = uVar7;
          dVar12 = ((double)((float)(uVar7 >> 9 | 0x3f800000) + -1.0) * 360.0 + 0.0) *
                   0.017453292519943295;
          dVar11 = sin(dVar12);
          dVar12 = cos(dVar12);
          local_148 = (undefined8 ***)(dVar12 * (double)fVar1 + dVar11 * -0.0 + (double)local_148);
          dStack_140 = dVar11 * (double)fVar1 + dVar12 * 0.0 + dStack_140;
          local_138 = local_138 + 0.0;
        }
        else {
          if (iVar3 == 2) {
            uVar7 = *(int *)(lVar4 + 0x4ec) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar4 + 0x4ec) = uVar7;
            dVar12 = (double)((float)(uVar7 >> 9 | 0x3f800000) + -1.0);
            local_f8 = (double)*(float *)(param_1 + 0x58) * (dVar12 + dVar12 + -1.0);
          }
          else {
            if (iVar3 != 1) goto LAB_147f5a0c4;
            FUN_1477ee866(local_158,&local_108);
            dVar12 = (double)*(float *)(param_1 + 0x58);
            local_f8 = local_f8 * dVar12;
            local_148 = (undefined8 ***)(dVar12 * (double)local_108 + (double)local_148);
            dStack_140 = dStack_100 * dVar12 + dStack_140;
          }
          local_138 = local_f8 + local_138;
        }
LAB_147f5a0c4:
        local_f0 = 0x18;
        local_108 = local_148;
        dStack_100 = dStack_140;
        local_f8 = local_138;
        local_e8 = 4;
        FUN_14023b258(&local_130,&local_108);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar5 != (code *)0x0) {
          ppppuVar9 = &local_108;
          if (0x18 < local_f0) {
            ppppuVar9 = (undefined8 ****)local_108;
          }
          (*pcVar5)(ppppuVar9);
        }
        if (0x18 < local_f0) {
          FUN_1400020a8(local_108);
        }
      }
      if ((byte)(bVar2 - 1) < 3) {
        uVar7 = *(int *)(lVar4 + 0x4ec) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar4 + 0x4ec) = uVar7;
        FUN_14023b10e(&local_130,(float)(uVar7 >> 9 | 0x3f800000) + -1.0);
      }
      local_120 = uVar10 + 1;
      if ((local_120 < local_128) &&
         ((*(byte *)(local_130 + 0x34 + (longlong)(int)local_120 * 0x38) & 1) != 0)) {
        uVar10 = uVar10 + 2;
        do {
          local_120 = local_128;
          if (local_128 == uVar10) break;
          lVar8 = (longlong)(int)uVar10;
          local_120 = uVar10;
          uVar10 = uVar10 + 1;
        } while ((*(byte *)(local_130 + 0x34 + lVar8 * 0x38) & 1) != 0);
      }
    } while (local_120 < local_128);
  }
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5a228 FUN_147f5a228 body=377 status=ok
// SIG undefined FUN_147f5a228(void)

void FUN_147f5a228(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x40) + 0x240;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_140309ec4(lVar1 + 0x60,&local_68,lVar3);
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_54,local_58);
  *(undefined4 *)(param_1 + 0x58) = local_68;
  *(undefined4 *)(param_1 + 0x5c) = uStack_64;
  *(undefined4 *)(param_1 + 0x60) = uStack_60;
  *(undefined4 *)(param_1 + 100) = uStack_5c;
  FUN_140309ec4(lVar1 + 0xf8,&local_68,lVar3);
  *(undefined4 *)(param_1 + 0x90) = local_68;
  *(undefined4 *)(param_1 + 0x94) = uStack_64;
  *(undefined4 *)(param_1 + 0x98) = uStack_60;
  *(undefined4 *)(param_1 + 0x9c) = uStack_5c;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_54,local_58);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_140d0fa06(lVar1 + 400,local_48,lVar3);
  FUN_144a7484c(local_48,&local_68);
  *(undefined4 *)(param_1 + 0x70) = local_68;
  *(undefined4 *)(param_1 + 0x74) = uStack_64;
  *(undefined4 *)(param_1 + 0x78) = uStack_60;
  *(undefined4 *)(param_1 + 0x7c) = uStack_5c;
  *(undefined4 *)(param_1 + 0x80) = local_58;
  *(undefined4 *)(param_1 + 0x84) = uStack_54;
  *(undefined4 *)(param_1 + 0x88) = uStack_50;
  *(undefined4 *)(param_1 + 0x8c) = uStack_4c;
  FUN_140309ec4(lVar1 + 0x1f0,&local_68,lVar3);
  *(undefined4 *)(param_1 + 0xb0) = local_68;
  *(undefined4 *)(param_1 + 0xb4) = uStack_64;
  *(undefined4 *)(param_1 + 0xb8) = uStack_60;
  *(undefined4 *)(param_1 + 0xbc) = uStack_5c;
  *(ulonglong *)(param_1 + 0xc0) = CONCAT44(uStack_54,local_58);
  *(undefined8 *)(param_1 + 200) = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5a3b2 FUN_147f5a3b2 body=820 status=ok
// SIG undefined FUN_147f5a3b2(void)

void FUN_147f5a3b2(longlong param_1,undefined8 param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  double dStack_120;
  double local_118;
  longlong local_110;
  uint local_108;
  uint local_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  ushort local_d0;
  byte local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)(*(longlong *)(param_1 + 0x48) + 0x58) & 0xfd) == 0) {
    FUN_14023b1cc(param_1,&local_110,param_2);
    if (local_100 < local_108) {
      do {
        uVar12 = local_100;
        cVar9 = FUN_1418115bc((longlong)(int)local_100 * 0x38 + local_110,&local_128);
        if (cVar9 != '\0') {
          dVar13 = ((double)local_128 - *(double *)(param_1 + 0x58)) * *(double *)(param_1 + 0xb0);
          dVar14 = (dStack_120 - *(double *)(param_1 + 0x60)) * *(double *)(param_1 + 0xb8);
          dVar15 = (local_118 - *(double *)(param_1 + 0x68)) * *(double *)(param_1 + 0xc0);
          dVar6 = *(double *)(param_1 + 0x80);
          dVar1 = *(double *)(param_1 + 0x88);
          dVar7 = *(double *)(param_1 + 0x70);
          dVar8 = *(double *)(param_1 + 0x78);
          dVar3 = dVar14 * dVar7 - dVar13 * dVar8;
          dVar4 = dVar15 * dVar8 - dVar14 * dVar6;
          dVar5 = dVar13 * dVar6 - dVar7 * dVar15;
          dVar4 = dVar4 + dVar4;
          dVar5 = dVar5 + dVar5;
          dVar3 = dVar3 + dVar3;
          local_118 = dVar3 * dVar1 + dVar15 + (dVar5 * dVar7 - dVar4 * dVar8) +
                      *(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0x68);
          local_128 = (undefined8 *)
                      (*(double *)(param_1 + 0x58) +
                      (dVar3 * dVar8 - dVar5 * dVar6) + dVar1 * dVar4 + dVar13 +
                      *(double *)(param_1 + 0x90));
          dStack_120 = (dVar6 * dVar4 - dVar7 * dVar3) +
                       *(double *)(param_1 + 0x88) * dVar5 + dVar14 + *(double *)(param_1 + 0x98) +
                       *(double *)(param_1 + 0x60);
          local_d0 = 0x18;
          local_c8 = 4;
          local_d8 = local_118;
          local_e8 = local_128;
          uStack_e0 = dStack_120;
          FUN_14023b258(&local_110,&local_e8);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
          if (pcVar2 != (code *)0x0) {
            puVar11 = &local_e8;
            if (0x18 < local_d0) {
              puVar11 = local_e8;
            }
            (*pcVar2)(puVar11);
          }
          if (0x18 < local_d0) {
            FUN_1400020a8(local_e8);
          }
        }
        local_100 = uVar12 + 1;
        if ((local_100 < local_108) &&
           ((*(byte *)(local_110 + 0x34 + (longlong)(int)local_100 * 0x38) & 1) != 0)) {
          uVar12 = uVar12 + 2;
          do {
            local_100 = local_108;
            if (local_108 == uVar12) break;
            lVar10 = (longlong)(int)uVar12;
            local_100 = uVar12;
            uVar12 = uVar12 + 1;
          } while ((*(byte *)(local_110 + 0x34 + lVar10 * 0x38) & 1) != 0);
        }
      } while (local_100 < local_108);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5a6fa FUN_147f5a6fa body=102 status=ok
// SIG undefined FUN_147f5a6fa(void)

void FUN_147f5a6fa(void)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_31;
  local_20 = &local_30;
  local_30 = &LAB_14388843a;
  local_10 = &local_20;
  local_18 = FUN_1400ef576;
  FUN_14480914e();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5a76e FUN_147f5a76e body=86 status=ok
// SIG undefined FUN_147f5a76e(void)

longlong * FUN_147f5a76e(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_142b3f8cc(param_1,0);
  plVar4 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140c90fa2();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
    }
  }
  return plVar4;
}



// FUNCTION 147f5a7d0 FUN_147f5a7d0 body=45 status=ok
// SIG undefined FUN_147f5a7d0(void)

longlong FUN_147f5a7d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1460db00c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5a80a FUN_147f5a80a body=45 status=ok
// SIG undefined FUN_147f5a80a(void)

longlong FUN_147f5a80a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_141589a68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5a838 FUN_147f5a838 body=59 status=ok
// SIG undefined FUN_147f5a838(void)

longlong FUN_147f5a838(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14747d81e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147f5a873(lVar2);
  return lVar2;
}



// FUNCTION 147f5a873 FUN_147f5a873 body=7 status=ok
// SIG undefined FUN_147f5a873(void)

void FUN_147f5a873(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147f5a87a FUN_147f5a87a body=54 status=ok
// SIG undefined FUN_147f5a87a(void)

longlong FUN_147f5a87a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 147f5a8b0 FUN_147f5a8b0 body=93 status=ok
// SIG undefined FUN_147f5a8b0(void)

longlong * FUN_147f5a8b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14ac8c450;
  puVar1 = puVar2 + 2;
  FUN_14610f2c8(puVar1);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar2;
  FUN_147f5a936(param_1,puVar1);
  return param_1;
}



// FUNCTION 147f5a918 FUN_147f5a918 body=29 status=ok
// SIG undefined FUN_147f5a918(void)

undefined8 FUN_147f5a918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5a936 FUN_147f5a936 body=158 status=ok
// SIG undefined FUN_147f5a936(void)

void FUN_147f5a936(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147f5a9a8;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147f5a9a8;
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
LAB_147f5a9a8:
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
                    /* WARNING: Could not recover jumptable at 0x000147f5a9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147f5a9ee FUN_147f5a9ee body=29 status=ok
// SIG undefined FUN_147f5a9ee(void)

bool FUN_147f5a9ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f5aa0c FUN_147f5aa0c body=101 status=ok
// SIG undefined FUN_147f5aa0c(void)

void FUN_147f5aa0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ac8c470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f5aa72 FUN_147f5aa72 body=134 status=ok
// SIG undefined FUN_147f5aa72(void)

void FUN_147f5aa72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c4e0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8c470;
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
                    /* WARNING: Could not recover jumptable at 0x000147f5aae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f5aaf8 FUN_147f5aaf8 body=69 status=ok
// SIG undefined FUN_147f5aaf8(void)

void FUN_147f5aaf8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4,*(undefined1 *)(param_1 + 8));
  return;
}



// FUNCTION 147f5ab3e FUN_147f5ab3e body=172 status=ok
// SIG undefined FUN_147f5ab3e(void)

bool FUN_147f5ab3e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = *(undefined1 *)(param_1 + 8);
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5abee FUN_147f5abee body=438 status=ok
// SIG undefined FUN_147f5abee(void)

bool FUN_147f5abee(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60 [2];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x48);
        if (*plVar6 == param_2) goto LAB_147f5ac1f;
        iVar5 = (int)plVar6[8];
      } while (iVar5 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_147f5ac1f:
  plVar9 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    cVar3 = FUN_1447f8eee(param_1 + 0x20);
    if (cVar3 == '\0') {
      local_88[0] = 0;
      FUN_1447f8f6a(local_88,param_1 + 0x20);
      FUN_1447f8ea6(local_60,param_1 + 0x25);
    }
    else {
      uVar7 = FUN_14030ac4c(param_1);
      local_88[0] = 0;
      local_60[0] = 0;
      FUN_1456bb102(local_88,uVar7);
    }
    FUN_1447c3578(plVar9,local_58,local_88);
    uVar4 = FUN_1405d5f74(local_58);
    *param_3 = uVar4;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar10 = local_58;
      if (0x18 < local_40) {
        ppppuVar10 = (undefined8 ****)local_58[0];
      }
      (*pcVar1)(ppppuVar10);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9 != (longlong *)0x0;
}



// FUNCTION 147f5ada6 FUN_147f5ada6 body=198 status=ok
// SIG undefined FUN_147f5ada6(void)

bool FUN_147f5ada6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x38) == param_2)
        goto LAB_147f5adbf;
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_147f5adbf:
  lVar5 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar1 = FUN_1405d5f74(lVar5);
    *param_3 = uVar1;
  }
  return lVar5 != 0;
}



// FUNCTION 147f5ae6c FUN_147f5ae6c body=456 status=ok
// SIG undefined FUN_147f5ae6c(void)

bool FUN_147f5ae6c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined4 local_60 [2];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar4 * 0x48);
        if (*plVar5 == param_2) goto LAB_147f5aea0;
        iVar4 = (int)plVar5[8];
      } while (iVar4 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_147f5aea0:
  plVar8 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    cVar3 = FUN_1447f8eee(param_1 + 0x20);
    if (cVar3 == '\0') {
      local_88[0] = 0;
      FUN_1447f8f6a(local_88,param_1 + 0x20);
      FUN_1447f8ea6(local_60,param_1 + 0x25);
    }
    else {
      uVar6 = FUN_14030ac4c(param_1);
      local_88[0] = 0;
      local_60[0] = 0;
      FUN_1456bb102(local_88,uVar6);
    }
    FUN_1447c3578(plVar8,local_58,local_88);
    FUN_140b013e6(local_58,&local_90);
    *param_3 = local_90;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar9 = local_58;
      if (0x18 < local_40) {
        ppppuVar9 = (undefined8 ****)local_58[0];
      }
      (*pcVar1)(ppppuVar9);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8 != (longlong *)0x0;
}



// FUNCTION 147f5b036 FUN_147f5b036 body=253 status=ok
// SIG undefined FUN_147f5b036(void)

bool FUN_147f5b036(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x38) == param_2)
        goto LAB_147f5b05f;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_147f5b05f:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_140b013e6(lVar4,&local_28);
    *param_3 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 != 0;
}



// FUNCTION 147f5b134 FUN_147f5b134 body=54 status=ok
// SIG undefined FUN_147f5b134(void)

longlong FUN_147f5b134(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 147f5b16a FUN_147f5b16a body=132 status=ok
// SIG undefined FUN_147f5b16a(void)

void FUN_147f5b16a(longlong param_1,int param_2)

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



// FUNCTION 147f5b1f0 FUN_147f5b1f0 body=132 status=ok
// SIG undefined FUN_147f5b1f0(void)

void FUN_147f5b1f0(longlong param_1,int param_2)

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



// FUNCTION 147f5b276 FUN_147f5b276 body=31 status=ok
// SIG undefined FUN_147f5b276(void)

undefined8 FUN_147f5b276(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5b2aa FUN_147f5b2aa body=85 status=ok
// SIG undefined FUN_147f5b2aa(void)

void FUN_147f5b2aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c580;
  return;
}



// FUNCTION 147f5b300 FUN_147f5b300 body=118 status=ok
// SIG undefined FUN_147f5b300(void)

void FUN_147f5b300(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8c580;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f5b367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f5b376 FUN_147f5b376 body=101 status=ok
// SIG undefined FUN_147f5b376(void)

undefined8 FUN_147f5b376(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146223926(local_20);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5b3dc FUN_147f5b3dc body=96 status=ok
// SIG undefined FUN_147f5b3dc(void)

void FUN_147f5b3dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147f5b43c FUN_147f5b43c body=136 status=ok
// SIG undefined FUN_147f5b43c(void)

void FUN_147f5b43c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x84)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x84) = iVar5;
    FUN_147f5b4c6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f5b4c6 FUN_147f5b4c6 body=140 status=ok
// SIG undefined FUN_147f5b4c6(void)

void FUN_147f5b4c6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x78);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x78,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x78),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x78,param_2,param_3,0x28);
  return;
}



// FUNCTION 147f5b552 FUN_147f5b552 body=68 status=ok
// SIG undefined FUN_147f5b552(void)

void FUN_147f5b552(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar1 = param_1;
  }
  FUN_1400e1ba8(lVar1,*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) == 0) {
    return;
  }
  FUN_147f5b596(param_1);
  return;
}



// FUNCTION 147f5b596 FUN_147f5b596 body=88 status=ok
// SIG undefined FUN_147f5b596(void)

void FUN_147f5b596(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x78),
              (longlong)*(int *)((longlong)param_1 + 0x80) * 0x28);
      FUN_1446efa72((longlong)param_1 + 0x78,0,0,0x28);
      return;
    }
  }
  return;
}



// FUNCTION 147f5b5ee FUN_147f5b5ee body=29 status=ok
// SIG undefined FUN_147f5b5ee(void)

undefined8 FUN_147f5b5ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5b634 FUN_147f5b634 body=93 status=ok
// SIG undefined FUN_147f5b634(void)

void FUN_147f5b634(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f5b692 FUN_147f5b692 body=93 status=ok
// SIG undefined FUN_147f5b692(void)

void FUN_147f5b692(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f5b6f0 FUN_147f5b6f0 body=126 status=ok
// SIG undefined FUN_147f5b6f0(void)

void FUN_147f5b6f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8c610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f5b75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f5b77c FUN_147f5b77c body=21 status=ok
// SIG undefined FUN_147f5b77c(void)

undefined8 FUN_147f5b77c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f5b794 FUN_147f5b794 body=101 status=ok
// SIG undefined FUN_147f5b794(void)

void FUN_147f5b794(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_145732d68(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147f5b7fa FUN_147f5b7fa body=81 status=ok
// SIG undefined FUN_147f5b7fa(void)

undefined8 FUN_147f5b7fa(longlong param_1)

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



// FUNCTION 147f5b852 FUN_147f5b852 body=89 status=ok
// SIG undefined FUN_147f5b852(void)

bool FUN_147f5b852(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147f5b89d;
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
LAB_147f5b89d:
  return lVar6 == param_2;
}



// FUNCTION 147f5b8ac FUN_147f5b8ac body=118 status=ok
// SIG undefined FUN_147f5b8ac(void)

void FUN_147f5b8ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c680;
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



// FUNCTION 147f5b922 FUN_147f5b922 body=156 status=ok
// SIG undefined FUN_147f5b922(void)

void FUN_147f5b922(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c85c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8c680;
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
                    /* WARNING: Could not recover jumptable at 0x000147f5b9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f5b9be FUN_147f5b9be body=98 status=ok
// SIG undefined FUN_147f5b9be(void)

void FUN_147f5b9be(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f5ba07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f5ba16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147f5ba20 FUN_147f5ba20 body=96 status=ok
// SIG undefined FUN_147f5ba20(void)

void FUN_147f5ba20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147f5ba80 FUN_147f5ba80 body=132 status=ok
// SIG undefined FUN_147f5ba80(void)

void FUN_147f5ba80(longlong param_1,int param_2)

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



// FUNCTION 147f5bb6c FUN_147f5bb6c body=96 status=ok
// SIG undefined FUN_147f5bb6c(void)

void FUN_147f5bb6c(longlong param_1,int param_2)

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



// FUNCTION 147f5bbcc FUN_147f5bbcc body=96 status=ok
// SIG undefined FUN_147f5bbcc(void)

void FUN_147f5bbcc(longlong param_1,int param_2)

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



// FUNCTION 147f5bc2c FUN_147f5bc2c body=83 status=ok
// SIG undefined FUN_147f5bc2c(void)

void FUN_147f5bc2c(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar3;
  FUN_147f5bc80(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 147f5bc80 FUN_147f5bc80 body=141 status=ok
// SIG undefined FUN_147f5bc80(void)

void FUN_147f5bc80(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 147f5bd0e FUN_147f5bd0e body=119 status=ok
// SIG undefined FUN_147f5bd0e(void)

void FUN_147f5bd0e(longlong param_1,int param_2)

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
    FUN_147f5bc80(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f5bd86 FUN_147f5bd86 body=88 status=ok
// SIG undefined FUN_147f5bd86(void)

void FUN_147f5bd86(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x380) == 0) {
    lVar1 = param_1;
  }
  FUN_1448090f0(lVar1,*(undefined4 *)(param_1 + 0x388));
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(int *)(param_1 + 0x38c) == param_2) {
    return;
  }
  FUN_14023a58c(param_1,param_2);
  return;
}



// FUNCTION 147f5bde4 FUN_147f5bde4 body=81 status=ok
// SIG undefined FUN_147f5bde4(void)

undefined8 FUN_147f5bde4(longlong param_1)

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



// FUNCTION 147f5be3c FUN_147f5be3c body=118 status=ok
// SIG undefined FUN_147f5be3c(void)

void FUN_147f5be3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c7f0;
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



// FUNCTION 147f5beb2 FUN_147f5beb2 body=118 status=ok
// SIG undefined FUN_147f5beb2(void)

void FUN_147f5beb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c7f0;
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



// FUNCTION 147f5bf28 FUN_147f5bf28 body=156 status=ok
// SIG undefined FUN_147f5bf28(void)

void FUN_147f5bf28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8c7f0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f5bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f5bfc4 FUN_147f5bfc4 body=104 status=ok
// SIG undefined FUN_147f5bfc4(void)

void FUN_147f5bfc4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147f5c011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f5c022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147f5c02c FUN_147f5c02c body=96 status=ok
// SIG undefined FUN_147f5c02c(void)

void FUN_147f5c02c(longlong param_1,int param_2)

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



// FUNCTION 147f5c08c FUN_147f5c08c body=96 status=ok
// SIG undefined FUN_147f5c08c(void)

void FUN_147f5c08c(longlong param_1,int param_2)

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



// FUNCTION 147f5c0ec FUN_147f5c0ec body=96 status=ok
// SIG undefined FUN_147f5c0ec(void)

void FUN_147f5c0ec(longlong param_1,int param_2)

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



// FUNCTION 147f5c14c FUN_147f5c14c body=96 status=ok
// SIG undefined FUN_147f5c14c(void)

void FUN_147f5c14c(longlong param_1,int param_2)

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



// FUNCTION 147f5c1ac FUN_147f5c1ac body=96 status=ok
// SIG undefined FUN_147f5c1ac(void)

void FUN_147f5c1ac(longlong param_1,int param_2)

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



// FUNCTION 147f5c20c FUN_147f5c20c body=96 status=ok
// SIG undefined FUN_147f5c20c(void)

void FUN_147f5c20c(longlong param_1,int param_2)

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



// FUNCTION 147f5c26c FUN_147f5c26c body=96 status=ok
// SIG undefined FUN_147f5c26c(void)

void FUN_147f5c26c(longlong param_1,int param_2)

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



// FUNCTION 147f5c2cc FUN_147f5c2cc body=11 status=ok
// SIG undefined FUN_147f5c2cc(void)

void FUN_147f5c2cc(longlong param_1,undefined8 param_2,float param_3)

{
  *(float *)(param_1 + 0x30) = param_3 + *(float *)(param_1 + 0x30);
  return;
}



// FUNCTION 147f5c2ea FUN_147f5c2ea body=542 status=ok
// SIG undefined FUN_147f5c2ea(void)

void FUN_147f5c2ea(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 local_a0;
  undefined8 ***local_98;
  int local_90;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar8 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_c8 = local_c8 & 0xffffff00;
  local_a0 = 0;
  FUN_1456bb102(&local_c8,uVar8);
  FUN_1447c3578(lVar3 + 0xd0,&local_98,&local_c8);
  uVar12 = FUN_144a7b41a(&local_98,0x40a00000);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar10 = &local_98;
    if (0x18 < local_80) {
      ppppuVar10 = (undefined8 ****)local_98;
    }
    (*pcVar4)(ppppuVar10);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98);
  }
  FUN_144a5ac3a(&local_c8);
  FUN_14133303b(&local_98,uVar8,uVar12);
  pppuVar7 = local_98;
  if ((longlong)local_90 != 0) {
    lVar11 = 0;
    do {
      if (*(char *)(lVar3 + 0x168) == '\x01') {
        FUN_14030a482(lVar3 + 0x108,&local_c8,*(longlong *)((longlong)pppuVar7 + lVar11),0);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_2,iVar2);
        }
        lVar5 = *param_2;
        *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = local_b8;
        puVar1 = (uint *)(lVar5 + (longlong)iVar2 * 0x18);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)((longlong)pppuVar7 + lVar11) + 0x1c8);
        if (lVar5 == 0) {
          uVar12 = (undefined4)DAT_14c8464f0;
          uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          puVar9 = &DAT_14c8464e0;
        }
        else {
          uVar12 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
          uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
          puVar9 = (undefined8 *)(lVar5 + 0x260);
        }
        uVar8 = *puVar9;
        uVar6 = puVar9[1];
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_2,iVar2);
        }
        lVar5 = *param_2;
        puVar9 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x18);
        *puVar9 = uVar8;
        puVar9[1] = uVar6;
        *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uVar13,uVar12);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)local_90 * 8 != lVar11);
  }
  if ((undefined8 ****)local_98 != (undefined8 ****)0x0) {
    FUN_1400020a8(local_98);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5c50a FUN_147f5c50a body=253 status=ok
// SIG undefined FUN_147f5c50a(void)

undefined8 * FUN_147f5c50a(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8ca40;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x13] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x14) = 2;
  param_1[0x12] = &PTR_FUN_14a1a0a20;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x42c80000;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1b) = 0x42480000;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1f) = 0x42480000;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 147f5c60e FUN_147f5c60e body=102 status=ok
// SIG undefined FUN_147f5c60e(void)

void FUN_147f5c60e(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0xc0,param_2);
  FUN_140aa1618(param_1 + 0xe0,param_2);
  FUN_140aa1618(param_1 + 0x100,param_2);
  FUN_140aa1618(param_1 + 0x90,param_2);
  return;
}



// FUNCTION 147f5c6c8 FUN_147f5c6c8 body=70 status=ok
// SIG undefined FUN_147f5c6c8(void)

undefined8 * FUN_147f5c6c8(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac80fe0;
  FUN_14044066a(param_1 + 0x10,0x14,7);
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x41200000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 147f5c714 FUN_147f5c714 body=330 status=ok
// SIG undefined FUN_147f5c714(void)

void FUN_147f5c714(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_89;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140337e08();
  uVar6 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_89 = 2;
  local_98 = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_58);
  local_88[0] = 0;
  local_60 = 0;
  FUN_144a7bf34(local_88,&local_58,&local_98,&local_89);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,&local_58,local_88);
  uVar4 = FUN_14030a32e(&local_58);
  FUN_14485c47a(param_1 + 0x60,uVar4);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (0x18 < local_40) {
      pppuVar5 = (undefined8 ***)local_58;
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5c89c FUN_147f5c89c body=202 status=ok
// SIG undefined FUN_147f5c89c(void)

undefined4 * FUN_147f5c89c(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x528))(param_2,&local_2c,&local_30);
  lVar1 = param_2[0x39];
  if (lVar1 == 0) {
    puVar6 = &DAT_14c8464e0;
    uVar7 = (undefined4)DAT_14c8464f0;
    uVar8 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    puVar6 = (undefined8 *)(lVar1 + 0x260);
  }
  uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
  uVar3 = *(undefined4 *)(puVar6 + 1);
  uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
  *param_1 = *(undefined4 *)puVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uVar8,uVar7);
  uVar5 = DAT_14cb1c868;
  *(undefined8 *)(param_1 + 6) = DAT_14cb1c860;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 10) = DAT_14cb1c870;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0xffffffff;
  param_1[0x12] = local_2c;
  param_1[0x13] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5c968 FUN_147f5c968 body=617 status=ok
// SIG undefined FUN_147f5c968(void)

void FUN_147f5c968(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140337e08();
  uVar10 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                         *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar9 = *(longlong *)(param_1 + 0x40) + 0x240;
  local_b0 = *(undefined8 *)(lVar6 + 0x98);
  lVar4 = FUN_14030a1e6(lVar6 + 0x80,lVar9);
  if (lVar4 != 0) {
    lVar5 = FUN_145a7430e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_147f5ca0c;
  }
  lVar4 = 0;
LAB_147f5ca0c:
  local_b0 = *(undefined8 *)(lVar6 + 0xb8);
  lVar6 = FUN_14030a1e6(lVar6 + 0xa0,lVar9);
  if (lVar6 != 0) {
    lVar9 = FUN_145a7430e();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) && (lVar4 != 0))
       && (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
      plVar1 = (longlong *)(param_1 + 0x60);
      lVar9 = lVar4;
      do {
        FUN_147f5c89c(&local_b0,lVar9);
        iVar3 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
          FUN_147f609e4(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        lVar8 = (longlong)iVar3 * 0x50;
        puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar8);
        *puVar2 = local_90;
        puVar2[1] = uStack_8c;
        puVar2[2] = uStack_88;
        puVar2[3] = uStack_84;
        puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar8);
        *puVar2 = local_a0;
        puVar2[1] = uStack_9c;
        puVar2[2] = uStack_98;
        puVar2[3] = uStack_94;
        puVar2 = (undefined4 *)(lVar5 + lVar8);
        *puVar2 = (undefined4)local_b0;
        puVar2[1] = local_b0._4_4_;
        puVar2[2] = uStack_a8;
        puVar2[3] = uStack_a4;
        *(undefined8 *)(lVar5 + 0x30 + lVar8) = local_80;
        *(undefined8 *)(lVar5 + 0x38 + lVar8) = uStack_78;
        local_80 = 0;
        uStack_78 = 0;
        *(undefined4 *)(lVar5 + 0x40 + lVar8) = local_70;
        *(undefined8 *)(lVar5 + 0x48 + lVar8) = local_68;
        plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar9 + 0x390) + 0x10))(lVar9 + 0x390);
        if (plVar7 == (longlong *)0x0) {
LAB_147f5cb6e:
          lVar5 = 0;
        }
        else {
          lVar5 = (**(code **)(*plVar7 + 0x9f8))(plVar7);
          if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0xa8), lVar5 == 0)) goto LAB_147f5cb6e;
          lVar8 = FUN_145a7430e();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_147f5cb6e;
        }
        if (lVar5 == lVar4) break;
        if (lVar9 == lVar6) {
          if (*(int *)(param_1 + 0x68) != 1) goto LAB_147f5ca47;
          uVar10 = 1;
          goto LAB_147f5cb8a;
        }
        lVar9 = lVar5;
      } while (lVar5 != 0);
      uVar10 = *(undefined4 *)(param_1 + 0x68);
LAB_147f5cb8a:
      FUN_147f42d53(*(undefined8 *)(param_1 + 0x60),uVar10);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) != 0) {
        FUN_147f60a78(plVar1);
      }
    }
  }
LAB_147f5ca47:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5cbd2 FUN_147f5cbd2 body=620 status=ok
// SIG undefined FUN_147f5cbd2(void)

bool FUN_147f5cbd2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  
  if (*(int *)(param_1 + 0x68) < 2) {
    bVar10 = false;
  }
  else {
    uVar8 = (ulonglong)(*(int *)(param_1 + 0x68) - 1);
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    uVar17 = (undefined4)puVar4[1];
    uVar18 = (undefined4)((ulonglong)puVar4[1] >> 0x20);
    pfVar7 = (float *)(puVar4 + 9);
    bVar10 = true;
    uVar9 = 1;
    dVar14 = (double)puVar4[2];
    uVar19 = (int)*puVar4;
    uVar20 = (int)((ulonglong)*puVar4 >> 0x20);
    do {
      dVar5 = (double)CONCAT44(uVar18,uVar17);
      dVar1 = *(double *)(pfVar7 + 6);
      dVar14 = dVar1 - dVar14;
      dVar2 = *(double *)(pfVar7 + 2);
      dVar3 = *(double *)(pfVar7 + 4);
      uVar17 = SUB84(dVar3,0);
      uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
      dVar5 = dVar3 - dVar5;
      dVar16 = dVar2 - (double)CONCAT44(uVar20,uVar19);
      fVar21 = (float)SQRT(dVar14 * dVar14 + dVar16 * dVar16 + dVar5 * dVar5);
      dVar13 = DAT_14c8464f0;
      dVar6 = DAT_14c8464e8;
      dVar12 = DAT_14c8464e0;
      if (1e-08 < fVar21) {
        dVar12 = (double)(1.0 / fVar21);
        dVar13 = dVar14 * dVar12;
        dVar6 = dVar5 * dVar12;
        dVar12 = dVar16 * dVar12;
      }
      if (0.0 < fVar21) {
        dVar13 = (dVar1 - param_2[2]) * dVar13;
        fVar15 = (float)((dVar2 - *param_2) * dVar12 + dVar6 * (dVar3 - param_2[1]) + dVar13);
        if (((-1.0 <= fVar15) && (fVar15 <= fVar21 + 1.0)) &&
           (ABS((float)(dVar13 + (dVar12 * (dVar3 - param_2[1]) - (dVar2 - *param_2) * dVar6))) <
            (pfVar7[0x14] - *pfVar7) * (fVar15 / fVar21) + *pfVar7)) {
          return bVar10;
        }
      }
      bVar10 = uVar9 < uVar8;
      pfVar7 = pfVar7 + 0x14;
      bVar11 = uVar9 != uVar8;
      uVar9 = uVar9 + 1;
      dVar14 = dVar1;
      uVar19 = SUB84(dVar2,0);
      uVar20 = (int)((ulonglong)dVar2 >> 0x20);
    } while (bVar11);
  }
  return bVar10;
}



// FUNCTION 147f5ce4e FUN_147f5ce4e body=143 status=ok
// SIG undefined FUN_147f5ce4e(void)

undefined8 * FUN_147f5ce4e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8ce00;
  uVar1 = DAT_14c9ab028;
  param_1[0x11] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x12) = 2;
  param_1[0x10] = &PTR_FUN_14a1a0a20;
  param_1[0x13] = 0;
  param_1[0x15] = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 2;
  param_1[0x14] = &PTR_FUN_14a1a0a20;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 147f5cee4 FUN_147f5cee4 body=72 status=ok
// SIG undefined FUN_147f5cee4(void)

void FUN_147f5cee4(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa0,param_2);
  return;
}



// FUNCTION 147f5cf2c FUN_147f5cf2c body=285 status=ok
// SIG undefined FUN_147f5cf2c(void)

undefined8 * FUN_147f5cf2c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    param_1[2] = DAT_14cb242f8;
    uVar5 = DAT_14cb242f0;
    *param_1 = DAT_14cb242e8;
    param_1[1] = uVar5;
    uVar5 = DAT_14cb1c868;
    param_1[3] = DAT_14cb1c860;
    param_1[4] = uVar5;
    param_1[5] = DAT_14cb1c870;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_1[9] = 0;
  }
  else {
    (**(code **)(*param_2 + 0x528))(param_2,&local_2c,&local_30);
    lVar1 = param_2[0x39];
    if (lVar1 == 0) {
      puVar6 = &DAT_14c8464e0;
      uVar7 = (undefined4)DAT_14c8464f0;
      uVar8 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      puVar6 = (undefined8 *)(lVar1 + 0x260);
    }
    uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
    uVar3 = *(undefined4 *)(puVar6 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)puVar6;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    param_1[2] = CONCAT44(uVar8,uVar7);
    uVar5 = DAT_14cb1c868;
    param_1[3] = DAT_14cb1c860;
    param_1[4] = uVar5;
    param_1[5] = DAT_14cb1c870;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 9) = local_2c;
    *(undefined4 *)((longlong)param_1 + 0x4c) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5d04a FUN_147f5d04a body=402 status=ok
// SIG undefined FUN_147f5d04a(void)

void FUN_147f5d04a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140337e08();
  uVar7 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar6 = *(longlong *)(param_1 + 0x40) + 0x240;
  local_78 = *(undefined8 *)(lVar4 + 0x98);
  uVar5 = FUN_14030a1e6(lVar4 + 0x80,lVar6);
  FUN_147f5cf2c(&local_78,uVar5);
  *(undefined4 *)(param_1 + 0x80) = local_58;
  *(undefined4 *)(param_1 + 0x84) = uStack_54;
  *(undefined4 *)(param_1 + 0x88) = uStack_50;
  *(undefined4 *)(param_1 + 0x8c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x70) = local_68;
  *(undefined4 *)(param_1 + 0x74) = uStack_64;
  *(undefined4 *)(param_1 + 0x78) = uStack_60;
  *(undefined4 *)(param_1 + 0x7c) = uStack_5c;
  *(undefined4 *)(param_1 + 0x60) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 100) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x68) = uStack_70;
  *(undefined4 *)(param_1 + 0x6c) = uStack_6c;
  FUN_144a7c4b8(param_1 + 0x90,local_48);
  plVar3 = local_40;
  *(undefined8 *)(param_1 + 0xa8) = local_30;
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
  local_78 = *(undefined8 *)(lVar4 + 0xb8);
  uVar5 = FUN_14030a1e6(lVar4 + 0xa0,lVar6);
  FUN_147f5cf2c(&local_78,uVar5);
  *(undefined4 *)(param_1 + 0xd0) = local_58;
  *(undefined4 *)(param_1 + 0xd4) = uStack_54;
  *(undefined4 *)(param_1 + 0xd8) = uStack_50;
  *(undefined4 *)(param_1 + 0xdc) = uStack_4c;
  *(undefined4 *)(param_1 + 0xc0) = local_68;
  *(undefined4 *)(param_1 + 0xc4) = uStack_64;
  *(undefined4 *)(param_1 + 200) = uStack_60;
  *(undefined4 *)(param_1 + 0xcc) = uStack_5c;
  *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0xb4) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0xb8) = uStack_70;
  *(undefined4 *)(param_1 + 0xbc) = uStack_6c;
  FUN_144a7c4b8(param_1 + 0xe0,local_48);
  *(undefined8 *)(param_1 + 0xf8) = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5d1f4 FUN_147f5d1f4 body=104 status=ok
// SIG undefined FUN_147f5d1f4(void)

void FUN_147f5d1f4(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  FUN_140aa1618(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0xe8) == 3) {
    FUN_140aa1618(param_1 + 200,param_2);
    return;
  }
  return;
}



// FUNCTION 147f5d25c FUN_147f5d25c body=241 status=ok
// SIG undefined FUN_147f5d25c(void)

void FUN_147f5d25c(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  FUN_140337e08();
  uVar4 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  lVar3 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(char *)(param_1 + 0x60) = (*(char *)(lVar2 + 0x80) != '\0') * '\x03' + '\x01';
  uVar4 = FUN_140309e34(lVar2 + 0x88,lVar3,lVar2 + 0xa0);
  *(undefined4 *)(param_1 + 100) = uVar4;
  fVar5 = (float)FUN_140309e34(lVar2 + 0xa8,lVar3,lVar2 + 0xc0);
  *(float *)(param_1 + 0x68) = fVar5;
  fVar1 = *(float *)(param_1 + 100);
  if (*(int *)(lVar2 + 0xe8) == 2) {
    fVar6 = (fVar5 + fVar1) * 0.5;
  }
  else {
    fVar6 = fVar1;
    if (*(int *)(lVar2 + 0xe8) == 3) {
      fVar6 = (float)FUN_140309e34(lVar2 + 200,lVar3,lVar2 + 0xe0);
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
      }
      if (fVar6 <= fVar1) {
        fVar6 = fVar1;
      }
    }
  }
  *(float *)(param_1 + 0x6c) = fVar6;
  return;
}



// FUNCTION 147f5d354 FUN_147f5d354 body=542 status=ok
// SIG undefined FUN_147f5d354(void)

undefined4 * FUN_147f5d354(char *param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = FUN_1408d3a8a(param_3);
  FUN_141246736(&local_60,uVar6);
  if (local_58 == (longlong *)0x0) {
LAB_147f5d41e:
    uVar9 = 0;
  }
  else {
    iVar4 = (int)local_58[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_58[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(local_58 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_58;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    uVar9 = local_60;
    local_58 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) goto LAB_147f5d41e;
    local_60 = 0;
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
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (*param_1 == '\x01') {
    local_60 = *(ulonglong *)(param_1 + 0x20);
    plVar7 = (longlong *)FUN_14030a1e6(param_1 + 8,param_3 + 0x240);
    uVar11 = 0;
    uVar5 = 0xffffffff;
    if (plVar7 == (longlong *)0x0) {
LAB_147f5d4be:
      uVar11 = 0;
      uVar5 = 0xffffffff;
      uVar12 = 0;
      goto LAB_147f5d4c1;
    }
    lVar8 = FUN_14070cc62();
    if (((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
        (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
         lVar8 + 0x30)) || (lVar8 = plVar7[0x10b], lVar8 == 0)) goto LAB_147f5d4be;
    if (*(longlong *)(lVar8 + 0x1518) != 0) {
      FUN_1408d39e6(*(longlong *)(lVar8 + 0x1518),param_2);
      goto LAB_147f5d4d8;
    }
    uVar12 = 0;
    if (*(char *)(lVar8 + 0x1539) != '\0') goto LAB_147f5d4c1;
    local_60 = local_60 & 0xffffffff00000000;
    local_64 = 0;
    (**(code **)(*plVar7 + 0x528))(plVar7,&local_60,&local_64);
    uVar11 = local_64;
    uVar12 = (undefined4)local_60;
    lVar8 = FUN_146421a8f((undefined4)local_60,local_64,(undefined4)local_60);
    if (lVar8 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = FUN_140e14fac(lVar8);
    }
    *param_2 = uVar12;
    param_2[1] = uVar11;
    param_2[2] = uVar5;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x28);
    if (lVar8 == 0) goto LAB_147f5d4be;
    uVar11 = *(undefined4 *)(lVar8 + 0x30);
    uVar12 = *(undefined4 *)(lVar8 + 0x38);
    uVar5 = FUN_140e14fac();
LAB_147f5d4c1:
    *param_2 = uVar12;
    param_2[1] = uVar11;
    param_2[2] = uVar5;
  }
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(ulonglong *)(param_2 + 8) = uVar9;
LAB_147f5d4d8:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147f5d574 FUN_147f5d574 body=268 status=ok
// SIG undefined FUN_147f5d574(void)

void FUN_147f5d574(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_1 != 0) && (lVar2 = *param_2, lVar2 != 0)) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_141031670(0,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      plVar1 = local_48 + (int)uStack_40;
      plVar5 = local_48;
      do {
        plVar3 = (longlong *)*plVar5;
        if (plVar3 == (longlong *)0x0) goto LAB_147f5d642;
        if (param_3 == 0) {
LAB_147f5d636:
          (**(code **)(*plVar3 + 0x5f8))(plVar3,lVar2);
        }
        else if (param_4 == '\0') {
          lVar4 = *(longlong *)((longlong)plVar3 + 0x34c);
joined_r0x000147f5d634:
          if (lVar4 == param_3) goto LAB_147f5d636;
        }
        else if (param_4 == '\x02') {
          if ((longlong)(int)plVar3[0xf] != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(plVar3[0xe] + lVar4) == param_3) goto LAB_147f5d636;
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar3[0xf] * 8 != lVar4);
          }
        }
        else if (param_4 == '\x01') {
          lVar4 = plVar3[0x25];
          goto joined_r0x000147f5d634;
        }
LAB_147f5d642:
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5d682 FUN_147f5d682 body=305 status=ok
// SIG undefined FUN_147f5d682(void)

longlong * FUN_147f5d682(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_141031670(param_2,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      plVar1 = local_58 + (int)uStack_50;
      plVar6 = local_58;
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 == (longlong *)0x0) goto LAB_147f5d76a;
        if (param_3 == 0) {
LAB_147f5d73b:
          uVar4 = (**(code **)(*plVar3 + 0x5d8))();
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_1447d05f2(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        }
        else if (param_4 == '\0') {
          lVar5 = *(longlong *)((longlong)plVar3 + 0x34c);
joined_r0x000147f5d739:
          if (lVar5 == param_3) goto LAB_147f5d73b;
        }
        else if (param_4 == '\x02') {
          if ((longlong)(int)plVar3[0xf] != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(plVar3[0xe] + lVar5) == param_3) goto LAB_147f5d73b;
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)plVar3[0xf] * 8 != lVar5);
          }
        }
        else if (param_4 == '\x01') {
          lVar5 = plVar3[0x25];
          goto joined_r0x000147f5d739;
        }
LAB_147f5d76a:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5d7b4 FUN_147f5d7b4 body=394 status=ok
// SIG undefined FUN_147f5d7b4(void)

void FUN_147f5d7b4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,longlong param_7,char param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100 [12];
  undefined8 local_a0 [9];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = param_2;
  local_110 = param_3;
  local_108 = param_4;
  if (param_1 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_141031670(0,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      plVar1 = local_58 + (int)uStack_50;
      plVar6 = local_58;
      do {
        plVar2 = (longlong *)*plVar6;
        if (plVar2 == (longlong *)0x0) goto LAB_147f5d8ef;
        if (param_7 == 0) {
LAB_147f5d8a1:
          puVar4 = local_108;
          puVar5 = local_a0;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_110;
          puVar5 = local_100;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_120 = param_6;
          local_128 = param_5;
          (**(code **)(*plVar2 + 0x630))(plVar2,local_118,local_100,local_a0);
        }
        else if (param_8 == '\0') {
          lVar3 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x000147f5d89f:
          if (lVar3 == param_7) goto LAB_147f5d8a1;
        }
        else if (param_8 == '\x02') {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar3) == param_7) goto LAB_147f5d8a1;
              lVar3 = lVar3 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar3);
          }
        }
        else if (param_8 == '\x01') {
          lVar3 = plVar2[0x25];
          goto joined_r0x000147f5d89f;
        }
LAB_147f5d8ef:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5d940 FUN_147f5d940 body=377 status=ok
// SIG undefined FUN_147f5d940(void)

void FUN_147f5d940(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5,longlong param_6,char param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_c1;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0 [9];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c1 = param_4;
  local_c0 = param_3;
  if (param_1 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_141031670(0,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      plVar1 = local_58 + (int)uStack_50;
      plVar6 = local_58;
      do {
        plVar2 = (longlong *)*plVar6;
        if (plVar2 == (longlong *)0x0) goto LAB_147f5da6a;
        if (param_6 == 0) {
LAB_147f5da23:
          puVar4 = local_c0;
          puVar5 = local_a0;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_a8 = *(undefined8 *)(param_2 + 4);
          local_b8 = *param_2;
          uStack_b4 = param_2[1];
          uStack_b0 = param_2[2];
          uStack_ac = param_2[3];
          local_d8 = param_5;
          (**(code **)(*plVar2 + 0x638))(plVar2,&local_b8,local_a0,local_c1);
        }
        else if (param_7 == '\0') {
          lVar3 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x000147f5da21:
          if (lVar3 == param_6) goto LAB_147f5da23;
        }
        else if (param_7 == '\x02') {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar3) == param_6) goto LAB_147f5da23;
              lVar3 = lVar3 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar3);
          }
        }
        else if (param_7 == '\x01') {
          lVar3 = plVar2[0x25];
          goto joined_r0x000147f5da21;
        }
LAB_147f5da6a:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5daba FUN_147f5daba body=189 status=ok
// SIG undefined FUN_147f5daba(void)

longlong FUN_147f5daba(longlong param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_14485c47a(&local_40);
  local_38 = local_40;
  iVar1 = FUN_141817fba((longlong *)(param_1 + 0x50),
                        (uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  if (iVar1 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar2 = (longlong)iVar1 * 0x2b0;
    if ((lVar3 + lVar2 + 8U & 0xfffffffffffffff7) != 0) {
      lVar3 = lVar3 + lVar2;
      lVar4 = 8;
      do {
        bVar5 = *(float *)(lVar3 + lVar4) <= param_3;
        lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar5);
        if (bVar5) break;
        bVar5 = lVar4 != 0x248;
        lVar4 = lVar4 + 0x60;
      } while (bVar5);
      goto LAB_147f5db32;
    }
  }
  lVar2 = 0;
LAB_147f5db32:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 147f5db78 FUN_147f5db78 body=124 status=ok
// SIG undefined FUN_147f5db78(void)

void FUN_147f5db78(longlong param_1,undefined8 param_2,float param_3)

{
  float *pfVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  pfVar1 = (float *)FUN_140b30dd2(param_1 + 0xa8,
                                  (uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38,&local_38);
  *pfVar1 = param_3 + *pfVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5dbf6 FUN_147f5dbf6 body=23 status=ok
// SIG undefined FUN_147f5dbf6(void)

void FUN_147f5dbf6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  FUN_14479d2ce(lVar1 + 0x18);
  return;
}



// FUNCTION 147f5dc0e FUN_147f5dc0e body=169 status=ok
// SIG undefined FUN_147f5dc0e(void)

ulonglong FUN_147f5dc0e(undefined8 *param_1)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  cVar1 = FUN_144709e00(*param_1,"Sight");
  if (cVar1 == '\0') {
    cVar1 = FUN_144709e00(*param_1,&DAT_14ac8cfec);
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar2 = CONCAT71(uVar3,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_144709e00(*param_1,"Proximity");
      if (cVar1 == '\0') {
        cVar1 = FUN_144709e00(*param_1,"Damage");
        uVar2 = CONCAT71(uVar3,2);
        if (cVar1 == '\0') {
          cVar1 = FUN_144709e00(*param_1,"Bullet");
          uVar2 = CONCAT71(uVar3,3);
          if (cVar1 == '\0') {
            cVar1 = FUN_144709e00(*param_1,&DAT_149e3b957);
            uVar2 = CONCAT71(uVar3,5);
            if (cVar1 == '\0') {
              FUN_144709e00(*param_1,"Prediction");
              uVar2 = CONCAT71(uVar3,6);
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147f5dcee FUN_147f5dcee body=40 status=ok
// SIG undefined FUN_147f5dcee(void)

void FUN_147f5dcee(longlong param_1)

{
  FUN_140365b62(param_1 + 0x98);
  FUN_14035cf70(param_1 + 0xf8);
  return;
}



// FUNCTION 147f5dd16 FUN_147f5dd16 body=62 status=ok
// SIG undefined FUN_147f5dd16(void)

undefined8 FUN_147f5dd16(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_147f5dd42:
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_1407e8df6(param_2);
    if (lVar2 != 0) {
      cVar1 = FUN_1449ce97a(lVar2);
      if (cVar1 == '\0') {
        cVar1 = *(char *)(param_1 + 0x18);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x40);
      }
      if (cVar1 != '\0') goto LAB_147f5dd42;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147f5dd54 FUN_147f5dd54 body=287 status=ok
// SIG undefined FUN_147f5dd54(void)

longlong FUN_147f5dd54(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = DAT_14c8464f0;
  local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar5 = param_1 + 0xb8;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x108);
  }
  if ((longlong)*(int *)(param_1 + 0x110) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = (longlong)*(int *)(param_1 + 0x110) * 0x14;
    uVar8 = 0xffffffff;
    dVar2 = (double)CONCAT44(0x7fefffff,(undefined4)DAT_14c8464e0);
    lVar6 = 0;
    do {
      uVar9 = (uint)((ulonglong)dVar2 >> 0x20);
      cVar3 = FUN_1447c3142(param_1,lVar5,&local_78);
      dVar2 = (double)((ulonglong)uVar9 << 0x20);
      if (cVar3 != '\0') {
        fVar7 = (float)FUN_1409661f0(&local_78,param_3,param_2);
        dVar1 = (double)fVar7;
        dVar2 = (double)CONCAT44(uVar9,SUB84(dVar1,0));
        if (dVar1 <= (double)CONCAT44(uVar9,uVar8) && (double)CONCAT44(uVar9,uVar8) != dVar1) {
          local_88 = local_68;
          local_98 = local_78;
          uStack_90 = uStack_70;
          lVar6 = lVar5;
          uVar8 = SUB84(dVar1,0);
          dVar2 = dVar1;
        }
      }
      lVar5 = lVar5 + 0x14;
      lVar4 = lVar4 + -0x14;
    } while (lVar4 != 0);
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined8 *)(param_4 + 4) = local_88;
    *param_4 = (undefined4)local_98;
    param_4[1] = local_98._4_4_;
    param_4[2] = (undefined4)uStack_90;
    param_4[3] = uStack_90._4_4_;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5de74 FUN_147f5de74 body=45 status=ok
// SIG undefined FUN_147f5de74(void)

void FUN_147f5de74(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x110) < 1) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x108);
    }
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 147f5dea2 FUN_147f5dea2 body=397 status=ok
// SIG undefined FUN_147f5dea2(void)

void FUN_147f5dea2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a0;
  longlong local_98 [7];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined1 uStack_51;
  undefined3 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14479d2ce();
  local_b8 = 0;
  uStack_b0 = 0;
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar10 = *(longlong *)(param_1 + 0xa8);
    lVar9 = (longlong)*(int *)(param_1 + 0xb0) * 0x50;
    do {
      uVar6 = uStack_b0;
      if (*(longlong *)(lVar10 + 0x38) == param_2) {
        lVar8 = (longlong)(int)uStack_b0;
        uVar7 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
        if (uStack_b0._4_4_ < uVar7) {
          FUN_140b510b6(&local_b8,uVar6 & 0xffffffff);
        }
        lVar5 = local_b8;
        lVar8 = lVar8 * 0x50;
        FUN_14034cca6(local_b8 + lVar8,lVar10);
        uVar2 = *(undefined4 *)(lVar10 + 0x3c);
        uVar3 = *(undefined4 *)(lVar10 + 0x40);
        uVar4 = *(undefined4 *)(lVar10 + 0x44);
        puVar1 = (undefined4 *)(lVar5 + 0x38 + lVar8);
        *puVar1 = *(undefined4 *)(lVar10 + 0x38);
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        *(undefined4 *)(lVar5 + 0x47 + lVar8) = *(undefined4 *)(lVar10 + 0x47);
      }
      lVar10 = lVar10 + 0x50;
      lVar9 = lVar9 + -0x50;
    } while (lVar9 != 0);
    if ((longlong)(int)uStack_b0 != 0) {
      lVar9 = (longlong)(int)uStack_b0 * 0x50 + local_b8;
      lVar10 = local_b8;
      do {
        FUN_14034cca6(local_98,lVar10);
        local_60 = *(undefined4 *)(lVar10 + 0x38);
        uStack_5c = *(undefined4 *)(lVar10 + 0x3c);
        uStack_58 = *(undefined4 *)(lVar10 + 0x40);
        uStack_54 = (undefined3)*(undefined4 *)(lVar10 + 0x44);
        uStack_51 = (undefined1)*(undefined4 *)(lVar10 + 0x47);
        uStack_50 = (undefined3)((uint)*(undefined4 *)(lVar10 + 0x47) >> 8);
        local_a0 = local_98;
        FUN_147f61a30(param_1 + 0xa8,&local_a0);
        FUN_144a2da94(local_98);
        lVar10 = lVar10 + 0x50;
      } while (lVar10 != lVar9);
    }
  }
  local_98[0] = param_1;
  FUN_1403597f2(local_98,param_1 + 0xb8,param_1 + 0xa8);
  FUN_1405214e6(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5e030 FUN_147f5e030 body=16 status=ok
// SIG undefined FUN_147f5e030(void)

void FUN_147f5e030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 147f5e040 FUN_147f5e040 body=301 status=ok
// SIG undefined FUN_147f5e040(void)

longlong FUN_147f5e040(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_144a78ab8();
    lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_144a78ab8();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4 && lVar4 != 0) {
        return lVar4;
      }
    }
    lVar3 = FUN_144a7cbb2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (plVar1 = (longlong *)param_1[0x78], plVar1 != (longlong *)0x0)) {
      uVar2 = FUN_144a78ab8();
      lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (lVar3 != 0) {
        uVar2 = FUN_144a78ab8();
        lVar4 = FUN_144718840(lVar3,uVar2);
        if (lVar3 != lVar4 && lVar4 != 0) {
          return lVar4;
        }
      }
    }
    lVar3 = FUN_14490fee6();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (plVar1 = (longlong *)param_1[0x7a], plVar1 != (longlong *)0x0)) {
      uVar2 = FUN_144a78ab8();
      lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (lVar3 != 0) {
        uVar2 = FUN_144a78ab8();
        lVar4 = FUN_144718840(lVar3,uVar2);
        if (lVar3 == lVar4) {
          return 0;
        }
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 147f5e16e FUN_147f5e16e body=119 status=ok
// SIG undefined FUN_147f5e16e(void)

undefined8 FUN_147f5e16e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x80) * 0x30;
    lVar5 = *(longlong *)(param_1 + 0x78) + 4;
    do {
      lVar2 = FUN_14479d2ce(lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_144a7cbb2();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (cVar1 = FUN_1449ce97a(lVar2), cVar1 != '\0')) {
          return 1;
        }
      }
      lVar5 = lVar5 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147f5e204 thunk_FUN_1438987a0 body=5 status=ok
// SIG undefined thunk_FUN_1438987a0(void)

void thunk_FUN_1438987a0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          if (param_3 == '\0') {
            FUN_1400bc8c2(lVar4 + 0x80,&uStack_20);
          }
          else {
            FUN_1400bc96c();
          }
        }
      }
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5e21a FUN_147f5e21a body=109 status=ok
// SIG undefined FUN_147f5e21a(void)

undefined8 * FUN_147f5e21a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = FUN_14479d2ce(param_1 + 4);
  if (lVar2 == 0) {
    param_2[2] = DAT_14cb242f8;
    uVar3 = (undefined4)DAT_14cb242e8;
    uVar4 = DAT_14cb242e8._4_4_;
    uVar5 = (undefined4)DAT_14cb242f0;
    uVar6 = DAT_14cb242f0._4_4_;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x268);
      *param_2 = *(undefined8 *)(lVar2 + 0x260);
      param_2[1] = uVar1;
      param_2[2] = *(undefined8 *)(lVar2 + 0x270);
      return param_2;
    }
    param_2[2] = DAT_14c8464f0;
    uVar3 = (undefined4)DAT_14c8464e0;
    uVar4 = DAT_14c8464e0._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar6 = DAT_14c8464e8._4_4_;
  }
  *(undefined4 *)param_2 = uVar3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  return param_2;
}



// FUNCTION 147f5e288 FUN_147f5e288 body=396 status=ok
// SIG undefined FUN_147f5e288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_147f5e288(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = FUN_144b2f3ba();
  if (lVar9 != 0) {
    iVar7 = (int)lVar9 + 4;
    dVar10 = (double)FUN_14479d2ce();
    if (dVar10 != 0.0) {
      lVar9 = *(longlong *)((longlong)dVar10 + 0x1c8);
      if (lVar9 == 0) {
        *(double *)(param_2 + 4) = DAT_14c846508;
        uVar13 = (undefined4)DAT_14c8464f8;
        uVar14 = DAT_14c8464f8._4_4_;
        uVar15 = (undefined4)DAT_14c846500;
        uVar16 = DAT_14c846500._4_4_;
      }
      else {
        dVar3 = *(double *)(lVar9 + 0x240);
        dVar4 = *(double *)(lVar9 + 0x248);
        dVar5 = *(double *)(lVar9 + 0x250);
        dVar6 = *(double *)(lVar9 + 600);
        pdVar11 = *(double **)(lVar9 + 0x228);
        local_78 = dVar3;
        uStack_70 = dVar4;
        local_68 = dVar5;
        uStack_60 = dVar6;
        if (pdVar11 == (double *)0x0) {
          iVar7 = 0x40;
          pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
          dVar10 = DAT_14c8463d8;
          *pdVar11 = DAT_14c8463d0;
          pdVar11[1] = dVar10;
          dVar10 = DAT_14c8463e8;
          pdVar11[2] = DAT_14c8463e0;
          pdVar11[3] = dVar10;
          dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar11[5] = dVar10;
          dVar10 = DAT_14c846508;
          pdVar11[6] = DAT_14c846508;
          *(double **)(lVar9 + 0x228) = pdVar11;
        }
        auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar11[1]);
        auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar11);
        auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar11[1]) >> 0x20);
        iVar8 = movmskpd(SUB84(dVar10,0),auVar1);
        auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[3]);
        auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar11[2]);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[3]) >> 0x20);
        uVar12 = movmskpd(iVar7,auVar2);
        if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
          *(undefined4 *)(pdVar11 + 2) = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar11 + 0x14) = local_68._4_4_;
          *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_60._4_4_;
          *(undefined4 *)pdVar11 = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar11 + 4) = local_78._4_4_;
          *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_70._4_4_;
          FUN_1448052ee(&local_78,&local_58);
          pdVar11[6] = local_48;
          pdVar11[4] = local_58;
          pdVar11[5] = dStack_50;
        }
        *(double *)(param_2 + 4) = pdVar11[6];
        uVar13 = *(undefined4 *)(pdVar11 + 4);
        uVar14 = *(undefined4 *)((longlong)pdVar11 + 0x24);
        uVar15 = *(undefined4 *)(pdVar11 + 5);
        uVar16 = *(undefined4 *)((longlong)pdVar11 + 0x2c);
      }
      *param_2 = uVar13;
      param_2[1] = uVar14;
      param_2[2] = uVar15;
      param_2[3] = uVar16;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14cb242e0;
  uVar15 = uRam000000014cb242dc;
  uVar14 = _DAT_14cb242d8;
  uVar13 = uRam000000014cb242d4;
  *param_2 = _DAT_14cb242d0;
  param_2[1] = uVar13;
  param_2[2] = uVar14;
  param_2[3] = uVar15;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147f5e416 FUN_147f5e416 body=151 status=ok
// SIG undefined FUN_147f5e416(void)

undefined8 * FUN_147f5e416(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_147f5e4ae(&DAT_14cb244e0);
  memset(puVar1 + 1,0,0x88);
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14ac5d6a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x29) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x31) = 0x202;
  *(undefined1 *)((longlong)puVar1 + 0x33) = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined2 *)(puVar1 + 0x11) = 1;
  return puVar1;
}



// FUNCTION 147f5e4ae FUN_147f5e4ae body=96 status=ok
// SIG undefined FUN_147f5e4ae(void)

void FUN_147f5e4ae(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x900,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x12;
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



// FUNCTION 147f5e50e FUN_147f5e50e body=44 status=ok
// SIG undefined FUN_147f5e50e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f5e50e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb244ec = _DAT_14cb244ec + -1;
  *param_1 = DAT_14cb244e0;
  DAT_14cb244e0 = param_1;
  return;
}



// FUNCTION 147f5e53a FUN_147f5e53a body=143 status=ok
// SIG undefined FUN_147f5e53a(void)

void FUN_147f5e53a(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 1,0,0x88);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14ac5d6a0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  return;
}



// FUNCTION 147f5e5ca FUN_147f5e5ca body=146 status=ok
// SIG undefined FUN_147f5e5ca(void)

void FUN_147f5e5ca(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    plVar2 = (longlong *)FUN_141817c28(param_2);
    if (plVar2 != (longlong *)0x0) {
      local_1c = 0;
      local_20 = 0;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      cVar1 = FUN_140e8181a(uVar3,&local_21,&local_20);
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x1c8) != 0)) {
        FUN_140bc9c7c(*(longlong *)(param_1 + 0x1c8),local_21,&local_20,1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5e65e FUN_147f5e65e body=9 status=ok
// SIG undefined FUN_147f5e65e(void)

void FUN_147f5e65e(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 147f5e668 FUN_147f5e668 body=8 status=ok
// SIG undefined FUN_147f5e668(void)

undefined * FUN_147f5e668(void)

{
  return &DAT_14cb245b8;
}



// FUNCTION 147f5e670 FUN_147f5e670 body=8 status=ok
// SIG undefined FUN_147f5e670(void)

undefined * FUN_147f5e670(void)

{
  return &DAT_14cb245d0;
}



// FUNCTION 147f5e678 FUN_147f5e678 body=123 status=ok
// SIG undefined FUN_147f5e678(void)

void FUN_147f5e678(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar3 = FUN_144a6c4d8();
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_1470fc33c(lVar1);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_14480f766(lVar1 + 0x300);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}



// FUNCTION 147f5e71c FUN_147f5e71c body=155 status=ok
// SIG undefined FUN_147f5e71c(void)

void FUN_147f5e71c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x438);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x28))();
  lVar3 = FUN_1447ca08a(uVar2,uVar1,1);
  if (lVar3 == 0) {
    local_28 = DAT_14cb242f8;
    local_38 = (undefined4)DAT_14cb242e8;
    uStack_34 = DAT_14cb242e8._4_4_;
    uStack_30 = (undefined4)DAT_14cb242f0;
    uStack_2c = DAT_14cb242f0._4_4_;
  }
  else {
    local_28 = *(undefined8 *)(lVar3 + 0x28);
    local_38 = *(undefined4 *)(lVar3 + 0x18);
    uStack_34 = *(undefined4 *)(lVar3 + 0x1c);
    uStack_30 = *(undefined4 *)(lVar3 + 0x20);
    uStack_2c = *(undefined4 *)(lVar3 + 0x24);
  }
  *(undefined8 *)(param_1 + 0x510) = local_28;
  *(undefined4 *)(param_1 + 0x500) = local_38;
  *(undefined4 *)(param_1 + 0x504) = uStack_34;
  *(undefined4 *)(param_1 + 0x508) = uStack_30;
  *(undefined4 *)(param_1 + 0x50c) = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5e7b8 FUN_147f5e7b8 body=84 status=ok
// SIG undefined FUN_147f5e7b8(void)

void FUN_147f5e7b8(longlong param_1)

{
  longlong lVar1;
  
  FUN_1470dde52();
  if (*(longlong *)(param_1 + 0x408) != 0) {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      FUN_147f5e80c(param_1,param_1 + 0x480);
      FUN_147f5e80c(param_1,param_1 + 0x410);
      return;
    }
  }
  FUN_1470ddf8e(param_1);
  return;
}



// FUNCTION 147f5e80c FUN_147f5e80c body=403 status=ok
// SIG undefined FUN_147f5e80c(void)

void FUN_147f5e80c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_158 [40];
  undefined1 local_130 [112];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [48];
  undefined1 local_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1411371f6(local_a8);
  local_78 = 2;
  local_b0 = *param_2;
  if ((local_b0 == 0) || (param_2[3] == 0)) {
    FUN_1470ddf8e(param_1);
  }
  else {
    lVar3 = *(longlong *)(param_2[3] + 0x1c8);
    puVar5 = &DAT_14c846480;
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x240);
    }
    FUN_1411374b4(local_130,*(undefined8 *)(param_1 + 0x408),&local_b0,puVar5);
    FUN_140faf12e(local_130,&local_c0);
    plVar1 = local_b8;
    if (param_2 + 8 != &local_c0) {
      param_2[8] = local_c0;
      local_c0 = 0;
      plVar4 = (longlong *)param_2[9];
      if (local_b8 != plVar4) {
        local_b8 = (longlong *)0x0;
        param_2[9] = (longlong)plVar1;
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
    plVar1 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_14119d0c2(local_130);
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
  }
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5e9a0 FUN_147f5e9a0 body=186 status=ok
// SIG undefined FUN_147f5e9a0(void)

void FUN_147f5e9a0(longlong param_1)

{
  FUN_14389a35a(param_1,param_1 + 0x480);
  FUN_14389a35a(param_1,param_1 + 0x410);
  switch(*(undefined4 *)(param_1 + 0x518)) {
  case 0:
    if ((*(int *)(param_1 + 0x4ec) == 4) && (*(int *)(param_1 + 0x47c) == 4)) {
      *(undefined4 *)(param_1 + 0x518) = 1;
    }
    break;
  case 1:
    FUN_147f5ea5a(param_1);
    return;
  case 2:
    if (*(int *)(param_1 + 0x47c) != 1) {
      FUN_1407ca500(*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x47c) = 2;
      *(undefined4 *)(param_1 + 0x518) = 5;
    }
    break;
  case 3:
    FUN_147f5ecec(param_1);
    return;
  case 4:
    FUN_147f5edb0(param_1);
    return;
  }
  return;
}



// FUNCTION 147f5ea5a FUN_147f5ea5a body=639 status=ok
// SIG undefined FUN_147f5ea5a(void)

void FUN_147f5ea5a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x438);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14069ce7c();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_14069ce7c();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) {
        *(longlong *)(param_1 + 0x468) = lVar4;
        if (lVar4 == 0) goto LAB_147f5ec84;
        lVar3 = FUN_14492b4b4(*(undefined8 *)(param_1 + 0x438));
        if ((lVar3 != 0) && (*(char *)(param_1 + 0x470) == '\x01')) {
          FUN_1446dcdd4(local_48,param_1 + 0x474);
          FUN_140640824(local_60,local_48);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          FUN_140365ba6(lVar3,local_60,1);
        }
        *(undefined4 *)(param_1 + 0x47c) = 1;
        FUN_1407ca500(*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x18),1);
        plVar1 = *(longlong **)(param_1 + 0x4a8);
        if (plVar1 == (longlong *)0x0) {
LAB_147f5eca3:
          *(undefined8 *)(param_1 + 0x4d0) = 0;
        }
        else {
          uVar2 = FUN_144a78ab8();
          lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
          if (lVar3 == 0) goto LAB_147f5eca3;
          uVar2 = FUN_144a78ab8();
          lVar4 = FUN_144718840(lVar3,uVar2);
          if (lVar3 == lVar4) goto LAB_147f5eca3;
          *(longlong *)(param_1 + 0x4d0) = lVar4;
          if (lVar4 != 0) {
            lVar3 = FUN_14492b4b4(*(undefined8 *)(param_1 + 0x4a8));
            if ((lVar3 != 0) && (*(char *)(param_1 + 0x4e0) == '\x01')) {
              FUN_1446dcdd4(local_48,param_1 + 0x4e4);
              FUN_140640824(local_78,local_48);
              if (local_30 != 0) {
                FUN_1400020a8();
              }
              FUN_140365ba6(lVar3,local_78,1);
            }
            uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x28))();
            FUN_1457030d6(uVar2);
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x30))();
            FUN_14485c47a(lVar3 + 0xa8,*(undefined8 *)(param_1 + 0x438));
            FUN_140bf70b8(lVar3);
            FUN_14387f10c(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4f0));
            *(undefined4 *)(param_1 + 0x4ec) = 1;
            FUN_1407ca500(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x18),1);
            *(undefined4 *)(param_1 + 0x518) = 2;
            goto LAB_147f5ecb6;
          }
        }
        FUN_1470ddf8e(param_1);
LAB_147f5ecb6:
        if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x468) = 0;
LAB_147f5ec84:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 147f5ecec FUN_147f5ecec body=194 status=ok
// SIG undefined FUN_147f5ecec(void)

void FUN_147f5ecec(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x438);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x28))();
  lVar3 = FUN_1447ca08a(uVar2,uVar1,1);
  if (lVar3 == 0) {
    local_28 = DAT_14cb242f8;
    local_38 = (undefined4)DAT_14cb242e8;
    uStack_34 = DAT_14cb242e8._4_4_;
    uStack_30 = (undefined4)DAT_14cb242f0;
    uStack_2c = DAT_14cb242f0._4_4_;
  }
  else {
    local_28 = *(undefined8 *)(lVar3 + 0x28);
    local_38 = *(undefined4 *)(lVar3 + 0x18);
    uStack_34 = *(undefined4 *)(lVar3 + 0x1c);
    uStack_30 = *(undefined4 *)(lVar3 + 0x20);
    uStack_2c = *(undefined4 *)(lVar3 + 0x24);
  }
  *(undefined8 *)(param_1 + 0x510) = local_28;
  *(undefined4 *)(param_1 + 0x500) = local_38;
  *(undefined4 *)(param_1 + 0x504) = uStack_34;
  *(undefined4 *)(param_1 + 0x508) = uStack_30;
  *(undefined4 *)(param_1 + 0x50c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x4ec) = 3;
  FUN_1407ca500(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x518) = 5;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5edb0 FUN_147f5edb0 body=170 status=ok
// SIG undefined FUN_147f5edb0(void)

void FUN_147f5edb0(longlong *param_1)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  
  if ((char)param_1[0x80] == '\x01') {
    lVar1 = *(longlong *)(param_1[0x95] + 0x1c8);
    if (lVar1 == 0) {
      pdVar2 = (double *)&DAT_14c8464e0;
      dVar3 = DAT_14c8464f0;
    }
    else {
      pdVar2 = (double *)(lVar1 + 0x260);
      dVar3 = *(double *)(lVar1 + 0x270);
    }
    dVar4 = (double)*(float *)(param_1 + 0x9f);
    if ((ABS(*pdVar2 - (double)param_1[0xa0]) <= dVar4) &&
       (ABS(pdVar2[1] - (double)param_1[0xa1]) <= dVar4)) {
      if (dVar4 < ABS(dVar3 - (double)param_1[0xa2])) {
        FUN_1470ddf8e();
        return;
      }
      (**(code **)(*param_1 + 0x650))();
      FUN_1470de17c(param_1,*(char *)((longlong)param_1 + 0x3d5) + '\x01');
      return;
    }
  }
  (**(code **)(*param_1 + 0x650))();
  FUN_1470de17c(param_1,'\x02' - *(char *)((longlong)param_1 + 0x3d5));
  return;
}



// FUNCTION 147f5ee5a FUN_147f5ee5a body=110 status=ok
// SIG undefined FUN_147f5ee5a(void)

void FUN_147f5ee5a(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    cVar1 = FUN_14641b224();
    if (cVar1 != '\0') {
      lVar2 = FUN_147e26e54(*(undefined8 *)(param_2 + 0x40));
      if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_2 + 0x28) = lVar2;
        if (lVar2 == 0) goto LAB_147f5eeab;
      }
      else {
        FUN_1456cec3c(lVar2);
        *(longlong *)(param_2 + 0x28) = lVar2;
      }
      *(undefined4 *)(param_2 + 0x6c) = 4;
    }
    return;
  }
LAB_147f5eeab:
  FUN_1470ddf8e(param_1);
  return;
}



// FUNCTION 147f5eec8 FUN_147f5eec8 body=813 status=ok
// SIG undefined FUN_147f5eec8(void)

void FUN_147f5eec8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_158 [40];
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  undefined1 local_b0 [80];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(longlong *)(param_2 + 0x28) == 0) || (lVar6 = FUN_140a40fb0(), lVar6 == 0)) ||
     (cVar4 = FUN_140532d9e(lVar6), cVar4 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_158);
  }
  uVar7 = FUN_1447210f0(param_1);
  FUN_141246736(&local_120,uVar7);
  if (local_118 != (longlong *)0x0) {
    iVar5 = (int)local_118[1];
    do {
      if (iVar5 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_118[1];
      bVar13 = iVar5 == iVar3;
      if (bVar13) {
        *(int *)(local_118 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar12 = local_118;
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
    lVar2 = local_120;
    if (plVar12 != (longlong *)0x0) {
      if (local_120 == 0) {
        FUN_1470ddf8e(param_1);
      }
      else {
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar6 + 0x1518);
        plVar8 = *(longlong **)(lVar6 + 0x1520);
        plVar11 = *(longlong **)(param_2 + 0x38);
        if (plVar11 != plVar8) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar11 = *(longlong **)(param_2 + 0x38);
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          *(longlong **)(param_2 + 0x38) = plVar8;
          plVar11 = plVar8;
        }
        if (plVar11 != (longlong *)0x0) {
          iVar5 = (int)plVar11[1];
          do {
            if (iVar5 == 0) goto LAB_147f5f081;
            LOCK();
            iVar3 = (int)plVar11[1];
            bVar13 = iVar5 == iVar3;
            if (bVar13) {
              *(int *)(plVar11 + 1) = iVar5 + 1;
              iVar3 = iVar5;
            }
            iVar5 = iVar3;
            UNLOCK();
          } while (!bVar13);
          lVar6 = *(longlong *)(param_2 + 0x30);
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x250) != -1)) {
            if (*(longlong *)(param_2 + 0x50) == 0) {
              plVar8 = *(longlong **)(param_2 + 0x28);
              if (plVar8 != (longlong *)0x0) {
                uVar7 = FUN_140b040c0();
                plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
                if (plVar8 != (longlong *)0x0) {
                  uVar7 = FUN_140b040c0();
                  plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
                  if ((plVar9 != (longlong *)0x0 && plVar8 != plVar9) &&
                     (lVar10 = (**(code **)(*plVar9 + 0x20))(plVar9), lVar10 != 0)) {
                    local_120 = *(longlong *)(param_1 + 0x18);
                    FUN_140ba2cd0(lVar10,&local_120,1);
                  }
                }
              }
              FUN_147e41d8c(&local_120,*(undefined8 *)(param_2 + 0x20));
              local_58 = *(undefined4 *)(lVar6 + 0x250);
              local_5c = *(undefined4 *)(lVar6 + 0x5d4);
              local_60 = *(undefined4 *)(lVar6 + 0x5d0);
              local_50 = *(undefined8 *)(lVar6 + 0x480);
              plVar8 = *(longlong **)(lVar6 + 0x488);
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
                UNLOCK();
              }
              if (local_48 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)local_48 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar10 = *local_48;
                  local_48 = plVar8;
                  (**(code **)(lVar10 + 0x10))();
                  plVar8 = local_48;
                }
              }
              local_48 = plVar8;
              FUN_140381eae(lVar2 + 0x58,local_130,&local_120);
              FUN_140c50aa0(lVar6,local_130);
              if (local_128 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_128 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_128)(local_128);
                  LOCK();
                  piVar1 = (int *)((longlong)local_128 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_128 + 0x10))(local_128);
                  }
                }
              }
              if (local_48 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)local_48 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_48 + 0x10))();
                }
              }
              FUN_144a2da94(local_b0);
            }
            *(undefined4 *)(param_2 + 0x6c) = 4;
          }
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
LAB_147f5f081:
      LOCK();
      plVar8 = plVar12 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      goto LAB_147f5f04c;
    }
  }
  FUN_1470ddf8e(param_1);
LAB_147f5f04c:
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


