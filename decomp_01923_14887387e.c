// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14887387e FUN_14887387e body=68 status=ok
// SIG undefined FUN_14887387e(void)

undefined8 * FUN_14887387e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b405d70;
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



// FUNCTION 1488738c6 FUN_1488738c6 body=81 status=ok
// SIG undefined FUN_1488738c6(void)

undefined8 FUN_1488738c6(longlong param_1)

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



// FUNCTION 14887391e FUN_14887391e body=118 status=ok
// SIG undefined FUN_14887391e(void)

void FUN_14887391e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405d70;
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



// FUNCTION 148873994 FUN_148873994 body=118 status=ok
// SIG undefined FUN_148873994(void)

void FUN_148873994(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405d70;
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



// FUNCTION 148873a0a FUN_148873a0a body=156 status=ok
// SIG undefined FUN_148873a0a(void)

void FUN_148873a0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405d70;
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
                    /* WARNING: Could not recover jumptable at 0x000148873a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148873aa6 FUN_148873aa6 body=98 status=ok
// SIG undefined FUN_148873aa6(void)

void FUN_148873aa6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148873aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148873afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148873b08 FUN_148873b08 body=94 status=ok
// SIG undefined FUN_148873b08(void)

void FUN_148873b08(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x60c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
    if (*(void **)((longlong)param_1 + 0x600) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x600),
              (longlong)*(int *)((longlong)param_1 + 0x608) * 0xc0);
      FUN_1446efa72((longlong)param_1 + 0x600,0,0,0xc0);
      return;
    }
  }
  return;
}



// FUNCTION 148873b66 FUN_148873b66 body=142 status=ok
// SIG undefined FUN_148873b66(void)

void FUN_148873b66(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x60c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc0,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc0)) {
        uVar4 = uVar3 / 0xc0 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x60c) = (int)uVar4;
    FUN_14867041e(param_1,param_2,uVar4,0xc0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148873bf6 FUN_148873bf6 body=68 status=ok
// SIG undefined FUN_148873bf6(void)

undefined8 * FUN_148873bf6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b405de0;
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



// FUNCTION 148873c3e FUN_148873c3e body=81 status=ok
// SIG undefined FUN_148873c3e(void)

undefined8 FUN_148873c3e(longlong param_1)

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



// FUNCTION 148873c96 FUN_148873c96 body=89 status=ok
// SIG undefined FUN_148873c96(void)

bool FUN_148873c96(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148873ce1;
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
LAB_148873ce1:
  return lVar6 == param_2;
}



// FUNCTION 148873cf0 FUN_148873cf0 body=118 status=ok
// SIG undefined FUN_148873cf0(void)

void FUN_148873cf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405de0;
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



// FUNCTION 148873d66 FUN_148873d66 body=118 status=ok
// SIG undefined FUN_148873d66(void)

void FUN_148873d66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405de0;
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



// FUNCTION 148873ddc FUN_148873ddc body=156 status=ok
// SIG undefined FUN_148873ddc(void)

void FUN_148873ddc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b405fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405de0;
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
                    /* WARNING: Could not recover jumptable at 0x000148873e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148873e78 FUN_148873e78 body=98 status=ok
// SIG undefined FUN_148873e78(void)

void FUN_148873e78(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148873ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148873ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148873ee0 FUN_148873ee0 body=81 status=ok
// SIG undefined FUN_148873ee0(void)

undefined8 FUN_148873ee0(longlong param_1)

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



// FUNCTION 148873f38 FUN_148873f38 body=89 status=ok
// SIG undefined FUN_148873f38(void)

bool FUN_148873f38(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148873f83;
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
LAB_148873f83:
  return lVar6 == param_2;
}



// FUNCTION 148873fae FUN_148873fae body=118 status=ok
// SIG undefined FUN_148873fae(void)

void FUN_148873fae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405e50;
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



// FUNCTION 148874024 FUN_148874024 body=156 status=ok
// SIG undefined FUN_148874024(void)

void FUN_148874024(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405e50;
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
                    /* WARNING: Could not recover jumptable at 0x0001488740b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488740c0 FUN_1488740c0 body=98 status=ok
// SIG undefined FUN_1488740c0(void)

void FUN_1488740c0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148874109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148874118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148874122 FUN_148874122 body=94 status=ok
// SIG undefined FUN_148874122(void)

ulonglong FUN_148874122(longlong param_1)

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
LAB_148874175:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148874175;
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



// FUNCTION 148874180 FUN_148874180 body=274 status=ok
// SIG undefined FUN_148874180(void)

longlong * FUN_148874180(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x110);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b405ee0;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0xf8);
  plVar4[2] = (longlong)&PTR_FUN_14b0d30c0;
  *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  *(undefined8 *)((longlong)plVar4 + 199) = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  *(undefined8 *)((longlong)plVar4 + 0xdd) = 0;
  *(undefined8 *)((longlong)plVar4 + 0xe5) = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1488742be(&local_30,plVar1);
  plVar3 = local_28;
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148874296 FUN_148874296 body=9 status=ok
// SIG undefined FUN_148874296(void)

void FUN_148874296(longlong param_1)

{
  FUN_1486761fe(param_1 + 0x10);
  return;
}



// FUNCTION 1488742a0 FUN_1488742a0 body=29 status=ok
// SIG undefined FUN_1488742a0(void)

undefined8 FUN_1488742a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488742be FUN_1488742be body=158 status=ok
// SIG undefined FUN_1488742be(void)

void FUN_1488742be(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148874330;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148874330;
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
LAB_148874330:
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
                    /* WARNING: Could not recover jumptable at 0x000148874350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14887435c FUN_14887435c body=77 status=ok
// SIG undefined FUN_14887435c(void)

void FUN_14887435c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1;
  }
  FUN_1405f994b(lVar1,*(undefined4 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) == param_2) {
    return;
  }
  FUN_1488743aa(param_1,param_2);
  return;
}



// FUNCTION 1488743aa FUN_1488743aa body=126 status=ok
// SIG undefined FUN_1488743aa(void)

void FUN_1488743aa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
    if (3 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0x60)) {
        uVar2 = uVar1 / 0x60 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = (int)uVar2;
    FUN_148674ba8(param_1,*(undefined4 *)(param_1 + 0x128),uVar2,0x60);
    return;
  }
  return;
}



// FUNCTION 148874428 FUN_148874428 body=142 status=ok
// SIG undefined FUN_148874428(void)

void FUN_148874428(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  if (param_2 <= (int)uVar1) {
    uVar4 = 3;
    if (3 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 300)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x60)) {
        uVar4 = uVar3 / 0x60 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 300) = (int)uVar4;
    FUN_148674ba8(param_1,param_2,uVar4,0x60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488744b8 FUN_1488744b8 body=272 status=ok
// SIG undefined FUN_1488744b8(void)

void FUN_1488744b8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e3c0);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e3c8);
    FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  }
  uVar2 = FUN_148671c9e();
  FUN_1401cfad2(uVar2,local_70,(longlong)*(int *)(param_1 + 0x100));
  FUN_1470ed5e8(local_60,local_70);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e3d0);
  FUN_1403719a4(lVar1 + 8,local_60);
  FUN_144a2da94(local_60);
  if (*(int *)(param_1 + 0x100) == 2) {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e3d8);
    FUN_144983130(lVar1 + 8,param_1 + 0x108);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488745ca FUN_1488745ca body=2169 status=ok
// SIG undefined FUN_1488745ca(void)

void FUN_1488745ca(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  double *pdVar11;
  undefined8 ****ppppuVar12;
  longlong *plVar13;
  float *pfVar14;
  code *pcVar15;
  undefined8 *_Src;
  double *pdVar16;
  longlong *_Dst;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 ***local_f0 [3];
  ushort local_d8;
  byte local_d0;
  undefined8 ***local_c8;
  longlong *local_c0;
  ushort local_b0;
  byte local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar10 = *(longlong *)(param_1 + 0x48);
  local_108 = (double)CONCAT71(local_108._1_7_,2);
  local_f0[0] = (undefined8 ***)FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_c8);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_144a7bf34(local_a0,&local_c8,local_f0,&local_108);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  FUN_1447c3578(lVar10 + 0x80,&local_c8,local_a0);
  lVar7 = FUN_1470e53c2(param_2,&DAT_14cb7e3c0);
  pdVar16 = (double *)(lVar7 + 0x40);
  pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120)
                      );
  if (pcVar15 != (code *)0x0) {
    pdVar11 = pdVar16;
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      pdVar11 = *(double **)(lVar7 + 0x40);
    }
    (*pcVar15)(pdVar11);
  }
  if (0x18 < *(ushort *)(lVar7 + 0x58)) {
    FUN_1400020a8(*pdVar16);
  }
  *(ushort *)(lVar7 + 0x58) = local_b0;
  if (local_b0 < 0x19) {
    uVar9 = (ulonglong)((uint)local_a8 * 0x120);
    pcVar15 = *(code **)((longlong)&DAT_14c9a85b8 + uVar9);
    if ((pcVar15 == (code *)0x0) &&
       (pcVar15 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9), pcVar15 == (code *)0x0)) {
      memcpy(pdVar16,&local_c8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar15)(pdVar16,&local_c8);
    }
  }
  else {
    *pdVar16 = (double)local_c8;
    local_c8 = (undefined8 ****)0x0;
    local_b0 = 0;
  }
  *(byte *)(lVar7 + 0x60) = local_a8;
  local_a8 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar8 = &local_c8;
    if (0x18 < local_b0) {
      ppppuVar8 = (undefined8 ****)local_c8;
    }
    (*DAT_14c9a85d0)(ppppuVar8);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8);
  }
  if (*(char *)(lVar10 + 0xf0) == '\x01') {
    FUN_1447c3578(lVar10 + 0xb8,&local_c8,local_a0);
    lVar7 = FUN_1470e53c2(param_2,&DAT_14cb7e3c8);
    pdVar16 = (double *)(lVar7 + 0x40);
    pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 +
                        (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar15 != (code *)0x0) {
      pdVar11 = pdVar16;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        pdVar11 = *(double **)(lVar7 + 0x40);
      }
      (*pcVar15)(pdVar11);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*pdVar16);
    }
    *(ushort *)(lVar7 + 0x58) = local_b0;
    if (local_b0 < 0x19) {
      uVar9 = (ulonglong)((uint)local_a8 * 0x120);
      pcVar15 = *(code **)((longlong)&DAT_14c9a85b8 + uVar9);
      if ((pcVar15 == (code *)0x0) &&
         (pcVar15 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9), pcVar15 == (code *)0x0)) {
        memcpy(pdVar16,&local_c8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
      }
      else {
        (*pcVar15)(pdVar16,&local_c8);
      }
    }
    else {
      *pdVar16 = (double)local_c8;
      local_c8 = (undefined8 ****)0x0;
      local_b0 = 0;
    }
    *(byte *)(lVar7 + 0x60) = local_a8;
    local_a8 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar8 = &local_c8;
      if (0x18 < local_b0) {
        ppppuVar8 = (undefined8 ****)local_c8;
      }
      (*DAT_14c9a85d0)(ppppuVar8);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(local_c8);
    }
  }
  lVar7 = FUN_1470e53c2(param_2,&DAT_14cb7e3e0);
  _Src = (undefined8 *)(lVar7 + 0x40);
  bVar4 = *(byte *)(lVar7 + 0x60);
  local_b0 = *(ushort *)(lVar7 + 0x58);
  if (local_b0 < 0x19) {
    ppppuVar8 = &local_c8;
  }
  else {
    ppppuVar8 = (undefined8 ****)FUN_14001cc68(local_b0,0);
    _Src = (undefined8 *)*_Src;
    local_c8 = ppppuVar8;
  }
  uVar9 = (ulonglong)((uint)bVar4 * 0x120);
  pcVar15 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
  if (pcVar15 == (code *)0x0) {
    memcpy(ppppuVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
  }
  else {
    (*pcVar15)(ppppuVar8,_Src);
  }
  local_a8 = *(byte *)(lVar7 + 0x60);
  lVar7 = FUN_140343d7a(param_1);
  if (lVar7 == 0) {
    local_f8 = *(double *)(param_1 + 0x120);
    uVar17 = *(undefined4 *)(param_1 + 0x110);
    uVar19 = *(undefined4 *)(param_1 + 0x114);
    uVar20 = *(undefined4 *)(param_1 + 0x118);
    uVar21 = *(undefined4 *)(param_1 + 0x11c);
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x1c8);
    if (lVar7 != 0) {
      local_108 = *(double *)(lVar7 + 0x260);
      uStack_100 = *(double *)(lVar7 + 0x268);
      local_f8 = *(double *)(lVar7 + 0x270);
      goto LAB_1488749a2;
    }
    local_f8 = DAT_14c8464f0;
    uVar17 = (undefined4)DAT_14c8464e0;
    uVar19 = DAT_14c8464e0._4_4_;
    uVar20 = (undefined4)DAT_14c8464e8;
    uVar21 = DAT_14c8464e8._4_4_;
  }
  local_108 = (double)CONCAT44(uVar19,uVar17);
  uStack_100 = (double)CONCAT44(uVar21,uVar20);
LAB_1488749a2:
  cVar6 = FUN_144a872af((undefined4 *)(param_1 + 0x128));
  if (cVar6 == '\0') {
    FUN_1447c3578(lVar10 + 0x80,local_f0,local_a0);
    FUN_1405b801a(local_f0,&local_128,&DAT_14cb7e378);
    pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
    if (pcVar15 != (code *)0x0) {
      ppppuVar8 = local_f0;
      if (0x18 < local_d8) {
        ppppuVar8 = (undefined8 ****)local_f0[0];
      }
      (*pcVar15)(ppppuVar8);
    }
    if (0x18 < local_d8) {
      FUN_1400020a8(local_f0[0]);
    }
  }
  else {
    local_118 = *(double *)(param_1 + 0x138);
    local_128 = *(undefined4 *)(param_1 + 0x128);
    uStack_124 = *(undefined4 *)(param_1 + 300);
    uStack_120 = *(undefined4 *)(param_1 + 0x130);
    uStack_11c = *(undefined4 *)(param_1 + 0x134);
  }
  cVar6 = FUN_144a872af(&local_108);
  ppppuVar8 = (undefined8 ****)local_c8;
  if (((cVar6 != '\0') &&
      (cVar6 = FUN_144a872af(&local_128), ppppuVar8 = (undefined8 ****)local_c8, cVar6 != '\0')) &&
     (dVar5 = (double)CONCAT44(uStack_124,local_128) - local_108,
     dVar22 = (double)CONCAT44(uStack_11c,uStack_120) - uStack_100,
     ppppuVar8 = (undefined8 ****)
                 SQRT((local_118 - local_f8) * (local_118 - local_f8) +
                      dVar22 * dVar22 + dVar5 * dVar5), local_a8 != 0x15)) {
    pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar15 != (code *)0x0) {
      ppppuVar12 = (undefined8 ****)local_c8;
      if (local_b0 < 0x19) {
        ppppuVar12 = &local_c8;
      }
      (*pcVar15)(ppppuVar12);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(local_c8);
    }
    local_b0 = 8;
    local_a8 = 0x15;
  }
  local_c8 = ppppuVar8;
  if (*(int *)(lVar10 + 0x100) == 2) {
    if (*(int *)(param_1 + 0xd8) - 1U < 2) {
      fVar23 = *(float *)(param_1 + 0x104);
      fVar3 = *(float *)(param_1 + 0x108);
      fVar18 = (float)FUN_141236616(param_1);
      fVar18 = (fVar23 + fVar3) - fVar18;
      fVar23 = 0.0;
      if (0.0 <= fVar18) {
        fVar23 = fVar18;
      }
      lVar10 = FUN_1470e53c2(param_2,&DAT_14cb7e3d8);
      pfVar2 = (float *)(lVar10 + 0x40);
      if (*(byte *)(lVar10 + 0x60) == 3) {
        *pfVar2 = fVar23;
      }
      else {
        pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 +
                            (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
        if (pcVar15 != (code *)0x0) {
          pfVar14 = pfVar2;
          if (0x18 < *(ushort *)(lVar10 + 0x58)) {
            pfVar14 = *(float **)(lVar10 + 0x40);
          }
          (*pcVar15)(pfVar14);
        }
        if (0x18 < *(ushort *)(lVar10 + 0x58)) {
          FUN_1400020a8(*(undefined8 *)pfVar2);
        }
        *(undefined2 *)(lVar10 + 0x58) = 4;
        *(float *)(lVar10 + 0x40) = fVar23;
        *(undefined1 *)(lVar10 + 0x60) = 3;
      }
    }
    else {
      FUN_1447c3578(lVar10 + 0x108,local_f0,local_a0);
      lVar10 = FUN_1470e53c2(param_2,&DAT_14cb7e3d8);
      _Dst = (longlong *)(lVar10 + 0x40);
      pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 +
                          (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
      if (pcVar15 != (code *)0x0) {
        plVar13 = _Dst;
        if (0x18 < *(ushort *)(lVar10 + 0x58)) {
          plVar13 = *(longlong **)(lVar10 + 0x40);
        }
        (*pcVar15)(plVar13);
      }
      if (0x18 < *(ushort *)(lVar10 + 0x58)) {
        FUN_1400020a8(*_Dst);
      }
      *(ushort *)(lVar10 + 0x58) = local_d8;
      if (local_d8 < 0x19) {
        uVar9 = (ulonglong)((uint)local_d0 * 0x120);
        pcVar15 = *(code **)((longlong)&DAT_14c9a85b8 + uVar9);
        if ((pcVar15 == (code *)0x0) &&
           (pcVar15 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9), pcVar15 == (code *)0x0)) {
          memcpy(_Dst,local_f0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
        }
        else {
          (*pcVar15)(_Dst,local_f0);
        }
      }
      else {
        *_Dst = (longlong)local_f0[0];
        local_f0[0] = (undefined8 ****)0x0;
        local_d8 = 0;
      }
      *(byte *)(lVar10 + 0x60) = local_d0;
      local_d0 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar8 = local_f0;
        if (0x18 < local_d8) {
          ppppuVar8 = (undefined8 ****)local_f0[0];
        }
        (*DAT_14c9a85d0)(ppppuVar8);
      }
      if (0x18 < local_d8) {
        FUN_1400020a8(local_f0[0]);
      }
    }
  }
  FUN_147f574a0(param_1,param_2);
  pcVar15 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar15 != (code *)0x0) {
    ppppuVar8 = (undefined8 ****)local_c8;
    if (local_b0 < 0x19) {
      ppppuVar8 = &local_c8;
    }
    (*pcVar15)(ppppuVar8);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8);
  }
  FUN_144a5ac3a(local_a0);
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148874e68 FUN_148874e68 body=311 status=ok
// SIG undefined FUN_148874e68(void)

void FUN_148874e68(longlong param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(char *)(param_1 + 0x150) == '\x01')) {
    puVar2 = &local_48;
    local_30 = 0x18;
    local_48 = *(undefined4 *)(param_1 + 0x128);
    uStack_44 = *(undefined4 *)(param_1 + 300);
    uStack_40 = *(undefined4 *)(param_1 + 0x130);
    uStack_3c = *(undefined4 *)(param_1 + 0x134);
    local_38 = *(undefined8 *)(param_1 + 0x138);
    local_28 = 4;
    FUN_1408834b4(*(longlong *)(param_1 + 0xe0),&DAT_14cb8d420,puVar2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
    local_48 = *(undefined4 *)(param_1 + 0x108);
    puVar2 = &local_48;
    local_30 = 4;
    local_28 = 3;
    FUN_1408834b4(*(undefined8 *)(param_1 + 0xe0),&DAT_14cb8d428,puVar2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148874fa0 FUN_148874fa0 body=464 status=ok
// SIG undefined FUN_148874fa0(void)

void FUN_148874fa0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_40;
  undefined1 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1489a5ae0(param_1 + 0x80,local_70);
  FUN_1470ed5e8(&local_60,local_70);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e3f8);
  FUN_1403719a4(lVar2 + 8,&local_60);
  FUN_144a2da94(&local_60);
  local_60 = 0;
  local_40 = 4;
  local_58 = 1;
  local_38 = 2;
  local_30 = (byte)~DAT_14c9a8754 >> 4 & 2;
  cVar1 = FUN_144a43716(param_1 + 0xa0);
  FUN_144a2da94(&local_60);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e400);
    FUN_144983130(lVar2 + 8,param_1 + 0x98);
  }
  local_60 = 0;
  local_40 = 4;
  local_58 = 0x3f800000;
  local_38 = 3;
  local_30 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  cVar1 = FUN_144a43716(param_1 + 0xd8);
  FUN_144a2da94(&local_60);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e408);
    FUN_144983130(lVar2 + 8,param_1 + 0xd0);
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar3 = FUN_148671d1c();
    FUN_1401cfad2(uVar3,local_80,(longlong)*(int *)(param_1 + 0x108));
    FUN_1470ed5e8(&local_60,local_80);
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e410);
    FUN_1403719a4(lVar2 + 8,&local_60);
    FUN_144a2da94(&local_60);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148875172 FUN_148875172 body=151 status=ok
// SIG undefined FUN_148875172(void)

void FUN_148875172(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb7e400);
  puVar1 = (undefined8 *)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 2) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar5 = puVar1;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        puVar5 = *(undefined8 **)(lVar4 + 0x40);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar4 + 0x58) = 4;
    *(undefined4 *)(lVar4 + 0x40) = uVar2;
    *(undefined1 *)(lVar4 + 0x60) = 2;
  }
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 14887520a FUN_14887520a body=65 status=ok
// SIG undefined FUN_14887520a(void)

void FUN_14887520a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e418);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 14887524c FUN_14887524c body=336 status=ok
// SIG undefined FUN_14887524c(void)

longlong FUN_14887524c(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
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
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_89 = 2;
  local_98 = FUN_144a7be76();
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
  FUN_1447c3578(lVar5 + 0x80,&local_58,local_88);
  plVar3 = (longlong *)FUN_14030a32e(&local_58);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar7 = &local_58;
    if (0x18 < local_40) {
      pppuVar7 = (undefined8 ***)local_58;
    }
    (*pcVar2)(pppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  FUN_144a5ac3a(local_88);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_144a800f8();
    lVar5 = (**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (lVar5 != 0) {
      uVar4 = FUN_144a800f8();
      lVar6 = FUN_144718840(lVar5,uVar4);
      if (lVar5 != lVar6) goto LAB_148875374;
    }
  }
  lVar6 = 0;
LAB_148875374:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887539e FUN_14887539e body=161 status=ok
// SIG undefined FUN_14887539e(void)

void FUN_14887539e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14066e964();
  plVar1 = (longlong *)FUN_140343d7a(param_1);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1413dc03c();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_1413dc03c();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar4 != 0 && lVar3 != lVar4) {
        FUN_1401036f0(&local_28,lVar4);
        *(undefined4 *)(param_1 + 0xd8) = local_28;
        *(undefined4 *)(param_1 + 0xdc) = uStack_24;
        *(undefined4 *)(param_1 + 0xe0) = uStack_20;
        *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148875440 FUN_148875440 body=1019 status=ok
// SIG undefined FUN_148875440(void)

void FUN_148875440(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  byte bVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float *pfVar12;
  uint *puVar13;
  undefined8 ****ppppuVar14;
  uint uVar15;
  undefined8 *_Dst;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c9;
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 ***local_98;
  longlong *local_90;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = *(longlong *)(param_1 + 0x48);
  local_c9 = 2;
  local_d8 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_98);
  local_c8[0] = 0;
  local_a0 = 0;
  FUN_144a7bf34(local_c8,&local_98,&local_d8,&local_c9);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  FUN_1447c3578(lVar8 + 0x80,&local_98,local_c8);
  FUN_144a5ac3a(local_c8);
  plVar6 = (longlong *)FUN_14030a32e(&local_98);
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_144a800f8();
    lVar8 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
    if (lVar8 != 0) {
      uVar7 = FUN_144a800f8();
      lVar9 = FUN_144718840(lVar8,uVar7);
      if (lVar8 != lVar9) goto LAB_148875543;
    }
  }
  lVar9 = 0;
LAB_148875543:
  lVar8 = FUN_1470e53c2(param_2,&DAT_14cb7e418);
  bVar4 = *(byte *)(lVar8 + 0x60);
  _Dst = (undefined8 *)(lVar8 + 0x40);
  if (bVar4 == local_78) {
    ppppuVar14 = (undefined8 ****)local_98;
    if (local_80 < 0x19) {
      ppppuVar14 = &local_98;
    }
    if (0x18 < *(ushort *)(lVar8 + 0x58)) {
      _Dst = *(undefined8 **)(lVar8 + 0x40);
    }
    uVar11 = (ulonglong)((uint)bVar4 * 0x120);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
    if (pcVar5 == (code *)0x0) {
      memcpy(_Dst,ppppuVar14,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
    }
    else {
      (*pcVar5)(_Dst);
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar10 = _Dst;
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        puVar10 = *(undefined8 **)(lVar8 + 0x40);
      }
      (*pcVar5)(puVar10);
    }
    if (0x18 < *(ushort *)(lVar8 + 0x58)) {
      FUN_1400020a8(*_Dst);
    }
    uVar15 = (uint)local_78;
    *(ushort *)(lVar8 + 0x58) = local_80;
    ppppuVar14 = &local_98;
    puVar10 = _Dst;
    if (0x18 < local_80) {
      puVar10 = (undefined8 *)FUN_14001cc68(local_80,0);
      *_Dst = puVar10;
      ppppuVar14 = (undefined8 ****)local_98;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar15 * 0x120));
    if (pcVar5 == (code *)0x0) {
      memcpy(puVar10,ppppuVar14,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar15 * 0x120)));
    }
    else {
      (*pcVar5)(puVar10,ppppuVar14);
    }
    *(byte *)(lVar8 + 0x60) = local_78;
  }
  if (*(char *)(param_1 + 0xec) == '\x01') {
    fVar17 = *(float *)(param_1 + 0xe8);
    fVar16 = (float)FUN_141236616(param_1);
    fVar17 = fVar17 - fVar16;
    fVar16 = 0.0;
    if (0.0 <= fVar17) {
      fVar16 = fVar17;
    }
  }
  else if (lVar9 == 0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = (float)FUN_1489ae850(lVar9,0);
  }
  lVar8 = FUN_1470e53c2(param_2,&DAT_14cb7e420);
  pfVar2 = (float *)(lVar8 + 0x40);
  if (*(byte *)(lVar8 + 0x60) == 3) {
    *pfVar2 = fVar16;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar12 = pfVar2;
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        pfVar12 = *(float **)(lVar8 + 0x40);
      }
      (*pcVar5)(pfVar12);
    }
    if (0x18 < *(ushort *)(lVar8 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar8 + 0x58) = 4;
    *(float *)(lVar8 + 0x40) = fVar16;
    *(undefined1 *)(lVar8 + 0x60) = 3;
  }
  bVar4 = *(byte *)(param_1 + 0xec);
  lVar8 = FUN_1470e53c2(param_2,&DAT_14cb7e428);
  puVar3 = (uint *)(lVar8 + 0x40);
  if (*(byte *)(lVar8 + 0x60) == 1) {
    *puVar3 = (uint)bVar4;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar13 = puVar3;
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        puVar13 = *(uint **)(lVar8 + 0x40);
      }
      (*pcVar5)(puVar13);
    }
    if (0x18 < *(ushort *)(lVar8 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)puVar3);
    }
    *(undefined2 *)(lVar8 + 0x58) = 4;
    *(uint *)(lVar8 + 0x40) = (uint)bVar4;
    *(undefined1 *)(lVar8 + 0x60) = 1;
  }
  FUN_147f574a0(param_1,param_2);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar14 = (undefined8 ****)local_98;
    if (local_80 < 0x19) {
      ppppuVar14 = &local_98;
    }
    (*pcVar5)(ppppuVar14);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14887583c FUN_14887583c body=328 status=ok
// SIG undefined FUN_14887583c(void)

ulonglong FUN_14887583c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
  if (*(longlong *)(param_1 + 0xe0) == 0) goto LAB_1488758bb;
  cVar2 = FUN_144729dda(param_1 + 0xd8);
  if ((cVar2 == '\0') || (plVar1 = *(longlong **)(param_1 + 0xe0), plVar1 == (longlong *)0x0))
  goto LAB_1488758bb;
  if (*(char *)(param_1 + 0xec) != '\0') {
    uVar6 = 0;
    cVar2 = FUN_1489aed92(plVar1,0);
    if (cVar2 == '\0') {
      (**(code **)(*plVar1 + 0x80))(plVar1,0);
      uVar6 = 1;
    }
    goto LAB_1488758bb;
  }
  cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
  if (cVar2 == '\0') goto LAB_1488758bb;
  lVar3 = FUN_14887524c(param_1);
  if (lVar3 == 0) goto LAB_1488758bb;
  local_38 = 2;
  local_48 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  local_40 = plVar1;
  cVar2 = FUN_14656301e(lVar3);
  if (cVar2 == '\0') goto LAB_1488758bb;
  uVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
  if (*(longlong *)(uVar4 + 8) == 0) {
LAB_148875956:
    lVar5 = 0;
  }
  else {
    cVar2 = FUN_144729dda(uVar4);
    uVar6 = uVar4;
    if (cVar2 == '\0') goto LAB_148875956;
    lVar5 = *(longlong *)(uVar4 + 8);
  }
  if (lVar5 == lVar3) {
    uVar6 = 0;
    (**(code **)(*plVar1 + 0x78))(plVar1,0);
    *(undefined1 *)(param_1 + 0xec) = 1;
  }
  else {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),*(char *)(param_1 + 0xec) * '\x02');
  }
LAB_1488758bb:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488759aa FUN_1488759aa body=122 status=ok
// SIG undefined FUN_1488759aa(void)

void FUN_1488759aa(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0xd8);
    if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0xe0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x88))(plVar1,0);
      if (*(char *)(param_1 + 0xec) == '\x01') {
        cVar2 = FUN_1489aed92(plVar1,0);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x80))(plVar1,0);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  return;
}



// FUNCTION 148875a24 FUN_148875a24 body=2639 status=ok
// SIG undefined FUN_148875a24(void)

void FUN_148875a24(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined8 local_78;
  undefined2 *local_70;
  uint local_68;
  undefined2 local_50;
  undefined1 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_147f56746();
  FUN_1446f470e(&local_70,L"LeadFollowService",1);
  uVar2 = FUN_1470e5326(param_2,&local_70);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = FUN_148671d6c();
  FUN_1414aa4be(uVar3,&local_88,uVar1);
  FUN_1400021e4(&local_88,&local_70);
  puVar5 = local_70;
  if (local_68 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_88,puVar5);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_88;
  local_98 = (void *)0x0;
  local_90 = local_80;
  if ((longlong)local_80 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_80,0);
    memcpy(local_98,_Src,(longlong)local_80 * 2);
  }
  FUN_1470ed5e8(&local_70,&local_98);
  FUN_1446f470e(&local_78,L"LeadFollowServiceMode",1);
  lVar4 = FUN_1470e53c2(uVar2,&local_78);
  FUN_1403719a4(lVar4 + 8,&local_70);
  FUN_144a2da94(&local_70);
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_1446f470e(&local_70,L"LeadInformation",1);
    uVar2 = FUN_1470e5326(uVar2,&local_70);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xbe);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    FUN_1446f470e(&local_78,L"Can Move",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xbd);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    FUN_1446f470e(&local_78,L"Proceed To Goal",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    lVar4 = FUN_14479d2ce(param_1 + 0x5c);
    if (lVar4 == 0) {
      FUN_140056680(local_c8,L"Not Set");
    }
    else {
      lVar4 = FUN_14479d2ce(param_1 + 0x5c);
      local_70 = *(undefined2 **)(lVar4 + 0x18);
      FUN_1400021e4(&local_70,local_c8);
    }
    FUN_1470ed5e8(&local_70,local_c8);
    FUN_1446f470e(&local_78,L"Follower",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    lVar4 = FUN_14479d2ce(param_1 + 0x44);
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0xa8) == 0)) {
      FUN_140056680(local_d8,L"Not Set");
    }
    else {
      local_78 = *(undefined8 *)(*(longlong *)(lVar4 + 0xa8) + 0x18);
      FUN_1400021e4(&local_78,local_d8);
    }
    FUN_1470ed5e8(&local_70,local_d8);
    FUN_1446f470e(&local_78,L"Current Goal",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xd4);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"Leader Distance Along Path",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xd8);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"Follower Distance Along Path",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xc0);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"WalkDistance",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xc4);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"RunDistance",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 200);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"LeadDistance",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xcc);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"LeadEndDistance",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(int *)(param_1 + 0xd0);
    pwVar6 = L"LeadStartDistance";
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\x01') goto LAB_148875b88;
    FUN_1446f470e(&local_70,L"FollowInformation",1);
    uVar2 = FUN_1470e5326(uVar2,&local_70);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xbd);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    FUN_1446f470e(&local_78,L"Proceed To Goal",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    lVar4 = FUN_14479d2ce(param_1 + 0x5c);
    if (lVar4 == 0) {
      FUN_140056680(local_a8,L"Not Set");
    }
    else {
      lVar4 = FUN_14479d2ce(param_1 + 0x5c);
      local_70 = *(undefined2 **)(lVar4 + 0x18);
      FUN_1400021e4(&local_70,local_a8);
    }
    FUN_1470ed5e8(&local_70,local_a8);
    FUN_1446f470e(&local_78,L"Leader",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    lVar4 = FUN_14479d2ce(param_1 + 0x44);
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0xa8) == 0)) {
      FUN_140056680(local_b8,L"Not Set");
    }
    else {
      local_78 = *(undefined8 *)(*(longlong *)(lVar4 + 0xa8) + 0x18);
      FUN_1400021e4(&local_78,local_b8);
    }
    FUN_1470ed5e8(&local_70,local_b8);
    FUN_1446f470e(&local_78,L"Current Goal",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xd8);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"Leader Distance Along Path",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xd4);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"Follower Distance Along Path",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(undefined4 *)(param_1 + 0xc0);
    local_70 = (undefined2 *)0x0;
    local_50 = 4;
    local_48 = 3;
    local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1446f470e(&local_78,L"WalkDistance",1);
    lVar4 = FUN_1470e53c2(uVar2,&local_78);
    FUN_1403719a4(lVar4 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_68 = *(int *)(param_1 + 0xc4);
    pwVar6 = L"RunDistance";
  }
  local_40 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  local_48 = 3;
  local_50 = 4;
  local_70 = (undefined2 *)0x0;
  FUN_1446f470e(&local_78,pwVar6,1);
  lVar4 = FUN_1470e53c2(uVar2,&local_78);
  FUN_1403719a4(lVar4 + 8,&local_70);
  FUN_144a2da94(&local_70);
LAB_148875b88:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148876474 FUN_148876474 body=27 status=ok
// SIG undefined FUN_148876474(void)

void FUN_148876474(longlong param_1)

{
  FUN_14116a3a2();
  *(undefined1 *)(param_1 + 0x30) = 2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 148876492 FUN_148876492 body=374 status=ok
// SIG undefined FUN_148876492(void)

void FUN_148876492(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 != (longlong *)0x0 && (param_3 != 0 && param_2 != 0)) {
    if (param_6 == '\0') {
      bVar5 = false;
    }
    else {
      lVar4 = (**(code **)(*param_4 + 0x5e8))(param_4);
      bVar5 = lVar4 != 0;
    }
    *(bool *)(param_1 + 0xbc) = bVar5;
    FUN_14485c47a(param_1 + 0x54,param_2);
    FUN_14485c47a(param_1 + 0x44,param_3);
    FUN_14887660a(param_1,param_4);
    *(undefined1 *)(param_1 + 0x30) = param_5;
    FUN_14887681c(param_1);
    FUN_140cc68fa(param_2);
    lVar4 = *(longlong *)(param_2 + 0x6a8);
    plVar3 = *(longlong **)(param_2 + 0x6b0);
    if (plVar3 == (longlong *)0x0) {
      FUN_14887da36(local_48,param_1);
      FUN_1448b6402(lVar4 + 0x18,&local_50,local_48);
      FUN_1449db362(local_48);
      *(undefined8 *)(param_1 + 0x38) = local_50;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_14887da36(local_48,param_1);
      FUN_1448b6402(lVar4 + 0x18,&local_50,local_48);
      FUN_1449db362(local_48);
      *(undefined8 *)(param_1 + 0x38) = local_50;
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
    FUN_1488769ea(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887660a FUN_14887660a body=528 status=ok
// SIG undefined FUN_14887660a(void)

void FUN_14887660a(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 ***local_50;
  longlong *local_48;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_14069eaf4(param_1 + 0x5c);
  if (cVar5 == '\0') {
    FUN_14485c47a(param_1 + 0x5c,param_2);
    plVar7 = *(longlong **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    FUN_148876f0a(param_1);
    plVar7 = (longlong *)FUN_14070ca4c(param_1);
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_144a7fd54();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
      if (plVar7 != (longlong *)0x0) {
        uVar8 = FUN_144a7fd54();
        plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
        if (plVar9 != (longlong *)0x0 && plVar7 != plVar9) {
          uVar8 = (**(code **)(*plVar9 + 0x28))(plVar9);
          if (param_2 == 0) {
            FUN_1402b8a4c(uVar8,&DAT_14cb7e450);
          }
          else {
            local_38 = 8;
            local_50 = (undefined8 ****)0x0;
            FUN_14485c47a(&local_50,param_2);
            local_30 = 7;
            FUN_1402b90a2(uVar8,&DAT_14cb7e450,&local_50);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar10 = &local_50;
              if (0x18 < local_38) {
                ppppuVar10 = (undefined8 ****)local_50;
              }
              (*pcVar2)(ppppuVar10);
            }
            if (0x18 < local_38) {
              FUN_1400020a8(local_50);
            }
          }
        }
      }
    }
    uVar8 = FUN_145743526(param_1);
    FUN_140937dea(&local_50,uVar8);
    if (local_48 != (longlong *)0x0) {
      iVar6 = (int)local_48[1];
      do {
        if (iVar6 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_48[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(local_48 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar7 = local_48;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      pppuVar3 = local_50;
      if (plVar7 != (longlong *)0x0) {
        if ((undefined8 ****)local_50 != (undefined8 ****)0x0) {
          uVar8 = FUN_14070ca4c(param_1);
          FUN_1487cc540(pppuVar3,uVar8,param_2);
        }
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14887681c FUN_14887681c body=432 status=ok
// SIG undefined FUN_14887681c(void)

void FUN_14887681c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x54);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1447a8aa0(plVar1,0);
  }
  plVar9 = (longlong *)(**(code **)(*plVar8 + 0x9f8))(plVar8);
  lVar5 = plVar8[0x4c];
  lVar6 = plVar8[0x4d];
  lVar2 = plVar8[0x4e];
  iVar3 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
    FUN_1403e3958(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  plVar10 = (longlong *)(lVar4 + (longlong)iVar3 * 0x18);
  *plVar10 = lVar5;
  plVar10[1] = lVar6;
  *(longlong *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = lVar2;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    cVar7 = FUN_143ca0fcc(plVar9);
    plVar10 = plVar9;
    if (cVar7 != '\0') {
      while( true ) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          cVar7 = FUN_1402b90fa(plVar10);
        }
        else {
          cVar7 = FUN_1402b90e8(plVar10);
        }
        if (cVar7 == '\0') break;
        lVar5 = plVar10[0x4c];
        lVar6 = plVar10[0x4d];
        lVar2 = plVar10[0x4e];
        iVar3 = *(int *)(param_1 + 0xb0);
        *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
          FUN_1403e3958(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        plVar9 = (longlong *)(lVar4 + (longlong)iVar3 * 0x18);
        *plVar9 = lVar5;
        plVar9[1] = lVar6;
        *(longlong *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = lVar2;
        cVar7 = FUN_141077012(plVar10);
        plVar9 = plVar10;
        if ((((cVar7 != '\0') ||
             (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x9f8))(plVar10), plVar10 == plVar8)) ||
            (plVar10 == (longlong *)0x0)) || (cVar7 = FUN_143ca0fcc(plVar10), cVar7 == '\0')) break;
      }
    }
  }
  FUN_14485c47a(param_1 + 0x4c,plVar9);
  return;
}



// FUNCTION 1488769cc FUN_1488769cc body=30 status=ok
// SIG undefined FUN_1488769cc(void)

void FUN_1488769cc(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x4c);
  FUN_14887681c(param_1);
  return;
}



// FUNCTION 1488769ea FUN_1488769ea body=113 status=ok
// SIG undefined FUN_1488769ea(void)

void FUN_1488769ea(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x44);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar2 = FUN_1487cdb02(lVar1 + 0xd30);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      uVar2 = FUN_1487cdc44(lVar1 + 0xd30);
    }
    else {
      uVar2 = FUN_1487cdec6(lVar1 + 0xe08);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      uVar2 = FUN_1487ce148(lVar1 + 0xe08);
    }
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
  }
  return;
}



// FUNCTION 148876a5c FUN_148876a5c body=306 status=ok
// SIG undefined FUN_148876a5c(void)

void FUN_148876a5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 0x30) = 2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  lVar5 = FUN_14479d2ce(param_1 + 0x54);
  if (lVar5 != 0) {
    FUN_140cc68fa(lVar5);
    lVar3 = *(longlong *)(lVar5 + 0x6a8);
    plVar4 = *(longlong **)(lVar5 + 0x6b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_14480f766(lVar3 + 0x18);
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
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  FUN_14887660a(param_1,0);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1447a8aa0(param_1 + 0xa8,0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbd) = 0;
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148876b8e FUN_148876b8e body=123 status=ok
// SIG undefined FUN_148876b8e(void)

undefined8 * FUN_148876b8e(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xbd) == '\x01') {
    uVar2 = FUN_14479d2ce(param_1 + 0x44);
    *(undefined2 *)(param_2 + 3) = 8;
    *param_2 = 0;
    FUN_14485c47a(param_2,uVar2);
    uVar1 = 0xe;
  }
  else if ((*(char *)(param_1 + 0xf8) == '\0') && (*(char *)(param_1 + 0xa0) == '\x01')) {
    *(undefined2 *)(param_2 + 3) = 0x18;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *param_2 = *(undefined8 *)(param_1 + 0x88);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(param_1 + 0x98);
    uVar1 = 4;
  }
  else {
    *(undefined2 *)(param_2 + 3) = 0;
    uVar1 = 0;
  }
  *(undefined1 *)(param_2 + 4) = uVar1;
  return param_2;
}



// FUNCTION 148876c0a FUN_148876c0a body=83 status=ok
// SIG undefined FUN_148876c0a(void)

undefined8 * FUN_148876c0a(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0xbd) == '\0') && (*(char *)(param_1 + 0xbe) == '\0')) {
    *(undefined2 *)(param_2 + 3) = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x44);
    *(undefined2 *)(param_2 + 3) = 8;
    *param_2 = 0;
    FUN_14485c47a(param_2,uVar2);
    uVar1 = 0xe;
  }
  *(undefined1 *)(param_2 + 4) = uVar1;
  return param_2;
}



// FUNCTION 148876c5e FUN_148876c5e body=682 status=ok
// SIG undefined FUN_148876c5e(void)

undefined8 FUN_148876c5e(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = 2;
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_148876f0a();
    FUN_1488770f6(param_1);
    FUN_148877238(param_1);
    if (*(char *)(param_1 + 0xbd) == '\0') {
      cVar5 = FUN_1488772b2(param_1);
      if (((cVar5 == '\0') && (cVar5 = FUN_14887747a(param_1), cVar5 == '\0')) &&
         (cVar5 = FUN_148877556(param_1), cVar5 == '\0')) {
        FUN_148877744(param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0xbd) = 1;
        *(undefined1 *)(param_1 + 0x40) = 3;
      }
    }
    uVar7 = FUN_14479d2ce(param_1 + 0x4c);
    local_40 = 0;
    local_38 = *(longlong *)(param_1 + 0x80);
    if (local_38 != 0) {
      iVar6 = *(int *)(local_38 + 8);
      do {
        if (iVar6 == 0) {
          local_38 = 0;
          goto LAB_148876cf2;
        }
        LOCK();
        iVar4 = *(int *)(local_38 + 8);
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(local_38 + 8) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      if (local_38 != 0) {
        local_40 = *(undefined8 *)(param_1 + 0x78);
      }
    }
LAB_148876cf2:
    cVar5 = FUN_148877870(&local_40,uVar7);
    uVar7 = 1;
    if (cVar5 == '\0') {
      lVar1 = param_1 + 0x44;
      uVar7 = FUN_14479d2ce(lVar1);
      local_50 = 0;
      local_48 = *(longlong *)(param_1 + 0x80);
      if (local_48 != 0) {
        iVar6 = *(int *)(local_48 + 8);
        do {
          if (iVar6 == 0) {
            local_48 = 0;
            goto LAB_148876d35;
          }
          LOCK();
          iVar4 = *(int *)(local_48 + 8);
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(local_48 + 8) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        if (local_48 != 0) {
          local_50 = *(undefined8 *)(param_1 + 0x78);
        }
      }
LAB_148876d35:
      cVar5 = FUN_148877870(&local_50,uVar7);
      if ((cVar5 != '\0') && (plVar8 = (longlong *)FUN_14479d2ce(lVar1), plVar8 != (longlong *)0x0))
      {
        uVar7 = FUN_145743526(param_1);
        FUN_140937dea(&local_60,uVar7);
        if (local_58 != (longlong *)0x0) {
          iVar6 = (int)local_58[1];
          do {
            if (iVar6 == 0) {
              plVar9 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar4 = (int)local_58[1];
            bVar10 = iVar6 == iVar4;
            if (bVar10) {
              *(int *)(local_58 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
            plVar9 = local_58;
          } while (!bVar10);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))();
          }
          if (plVar9 != (longlong *)0x0) {
            if (local_60 != 0) {
              uVar7 = FUN_14070ca4c(param_1);
              FUN_1457e778c(local_60,uVar7,plVar8);
            }
            LOCK();
            plVar3 = plVar9 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        }
        *(undefined1 *)(param_1 + 0xbd) = 0;
        FUN_148877238(param_1);
        uVar7 = (**(code **)(*plVar8 + 0x9f8))(plVar8);
        FUN_14485c47a(lVar1,uVar7);
        FUN_148877982(param_1);
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
        FUN_148877a9a(param_1);
        cVar5 = FUN_144729dda(lVar1);
        uVar7 = 2;
        if (cVar5 == '\0') goto LAB_148876c80;
      }
      uVar7 = 0;
    }
  }
LAB_148876c80:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148876f0a FUN_148876f0a body=491 status=ok
// SIG undefined FUN_148876f0a(void)

void FUN_148876f0a(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar10 = *(longlong **)(param_1 + 0x70);
  bVar2 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_148876f3f:
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar10[1];
    do {
      if (iVar4 == 0) goto LAB_148876f3f;
      LOCK();
      iVar3 = (int)plVar10[1];
      bVar11 = iVar4 == iVar3;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar11);
    bVar2 = false;
    if (*(longlong *)(param_1 + 0x68) != 0) goto LAB_148876f76;
  }
  lVar5 = FUN_14479d2ce(param_1 + 0x5c);
  if (lVar5 != 0) {
    lVar6 = FUN_14070cc62();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (lVar5 = *(longlong *)(lVar5 + 0x858), lVar5 != 0)) {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar5 + 0x1518);
      plVar9 = *(longlong **)(lVar5 + 0x1520);
      plVar7 = *(longlong **)(param_1 + 0x70);
      if (plVar7 != plVar9) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar7 = *(longlong **)(param_1 + 0x70);
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        *(longlong **)(param_1 + 0x70) = plVar9;
      }
    }
  }
LAB_148876f76:
  plVar9 = *(longlong **)(param_1 + 0x80);
  if (plVar9 == (longlong *)0x0) {
LAB_148876f95:
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar9[1];
    do {
      if (iVar4 == 0) goto LAB_148876f95;
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar11 = iVar4 == iVar3;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar11);
  }
  if ((((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x80) + 8) < 1)) &&
     (lVar5 = FUN_14070ca4c(param_1), lVar5 != 0)) {
    lVar6 = FUN_14070cc62();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (lVar5 = *(longlong *)(lVar5 + 0x858), lVar5 != 0)) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar5 + 0x1518);
      plVar7 = *(longlong **)(lVar5 + 0x1520);
      plVar8 = *(longlong **)(param_1 + 0x80);
      if (plVar8 != plVar7) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(param_1 + 0x80);
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
        *(longlong **)(param_1 + 0x80) = plVar7;
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (!bVar2) {
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
                    /* WARNING: Could not recover jumptable at 0x00014887702f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x10))(plVar10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488770f6 FUN_1488770f6 body=320 status=ok
// SIG undefined FUN_1488770f6(void)

void FUN_1488770f6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  undefined1 local_2c;
  undefined1 local_28 [8];
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14070ca4c();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      local_20 = *(int *)(param_1 + 0xb8) + 2;
      local_1c = 1;
      lVar1 = *(longlong *)(lVar1 + 0x1c8);
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
      uVar4 = FUN_148878598(param_1,&local_58,&local_20);
      puVar3 = local_28;
    }
    else {
      local_2c = 0;
      lVar1 = *(longlong *)(lVar1 + 0x1c8);
      if (lVar1 == 0) {
        local_68 = DAT_14c8464f0;
        local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_78 = *(undefined8 *)(lVar1 + 0x260);
        uStack_70 = *(undefined8 *)(lVar1 + 0x268);
        local_68 = *(undefined8 *)(lVar1 + 0x270);
      }
      uVar4 = FUN_148878598(param_1,&local_78,local_30);
      puVar3 = local_38;
    }
    *(undefined4 *)(param_1 + 0xd4) = uVar4;
    puVar3[4] = 0;
    uVar2 = FUN_14479d2ce(param_1 + 0x5c);
    FUN_14887881e(param_1,uVar2,puVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148877238 FUN_148877238 body=121 status=ok
// SIG undefined FUN_148877238(void)

void FUN_148877238(longlong param_1)

{
  float fVar1;
  
  fVar1 = ABS(*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xd8));
  if (*(char *)(param_1 + 0x30) == '\0') {
    if ((*(float *)(param_1 + 0xd8) <= *(float *)(param_1 + 0xd4)) &&
       (*(char *)(param_1 + 0xbd) != '\x01')) {
      if (*(float *)(param_1 + 0xc0) <= fVar1 && fVar1 != *(float *)(param_1 + 0xc0))
      goto LAB_148877270;
      if (*(float *)(param_1 + 0xc4) <= fVar1 && fVar1 != *(float *)(param_1 + 0xc4))
      goto LAB_1488772ac;
    }
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\x01') {
      *(undefined1 *)(param_1 + 0x40) = 0;
      return;
    }
    if (fVar1 < *(float *)(param_1 + 0xc0)) {
LAB_148877270:
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    }
    if (fVar1 < *(float *)(param_1 + 0xc4)) {
LAB_1488772ac:
      *(undefined1 *)(param_1 + 0x40) = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 3;
  return;
}



// FUNCTION 1488772b2 FUN_1488772b2 body=454 status=ok
// SIG undefined FUN_1488772b2(void)

ulonglong FUN_1488772b2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined1 local_c0 [56];
  longlong *local_88;
  float local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  longlong *local_38;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = FUN_14479d2ce(param_1 + 0x44);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_148878c0c(param_1,&local_70);
    FUN_148878e88(local_c0,*(undefined8 *)(lVar8 + 0xa8));
    local_74 = local_74 + local_24;
    local_d8 = local_70;
    uStack_d0 = uStack_68;
    local_c8 = local_60 - (double)local_24;
    cVar5 = FUN_144b39a76(local_c0);
    uVar9 = CONCAT71((int7)((ulonglong)local_c0 >> 8),1);
    if (cVar5 == '\0') {
      plVar3 = *(longlong **)(param_1 + 0x80);
      if (plVar3 == (longlong *)0x0) {
LAB_14887746e:
        uVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_14887746e;
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
        lVar8 = *(longlong *)(param_1 + 0x78);
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          local_d8 = *(undefined8 *)(lVar8 + 0x588);
          uStack_d0 = *(undefined8 *)(lVar8 + 0x590);
          local_c8 = *(double *)(lVar8 + 0x598) - (double)*(float *)(lVar8 + 0x5d4);
          uVar7 = FUN_144b39a76(local_c0);
          uVar9 = (ulonglong)uVar7;
        }
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
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
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
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14887747a FUN_14887747a body=219 status=ok
// SIG undefined FUN_14887747a(void)

undefined8 FUN_14887747a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  float local_38;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x5c);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar1 = plVar2[0x39];
    if (lVar1 == 0) {
      local_48 = DAT_14c8464f0;
      local_58 = (undefined4)DAT_14c8464e0;
      uStack_54 = DAT_14c8464e0._4_4_;
      uStack_50 = (undefined4)DAT_14c8464e8;
      uStack_4c = DAT_14c8464e8._4_4_;
      uVar4 = SUB84(DAT_14c8464f0,0);
      uVar5 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      local_58 = *(undefined4 *)(lVar1 + 0x260);
      uStack_54 = *(undefined4 *)(lVar1 + 0x264);
      uStack_50 = *(undefined4 *)(lVar1 + 0x268);
      uStack_4c = *(undefined4 *)(lVar1 + 0x26c);
      uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar5 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    }
    (**(code **)(*plVar2 + 0x528))(plVar2,local_34,&local_38);
    local_48 = (double)CONCAT44(uVar5,uVar4) - (double)local_38;
    uVar3 = FUN_14479d2ce(param_1 + 0x44);
    uVar3 = FUN_148878fa6(param_1,&local_58,uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148877556 FUN_148877556 body=492 status=ok
// SIG undefined FUN_148877556(void)

ulonglong FUN_148877556(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  longlong *local_68;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_14479d2ce(param_1 + 0x4c);
  if (lVar3 == 0) {
    pdVar5 = (double *)0x0;
    goto LAB_14887759d;
  }
  pdVar5 = &local_a0;
  FUN_148878e88(pdVar5,*(undefined8 *)(lVar3 + 0xa8));
  lVar3 = FUN_14070ca4c(param_1);
  if (lVar3 == 0) {
LAB_148877676:
    lVar3 = FUN_14479d2ce(param_1 + 0x5c);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      if (lVar3 == 0) {
        pdVar4 = (double *)&DAT_14c8464e0;
        dVar6 = DAT_14c8464f0;
      }
      else {
        pdVar4 = (double *)(lVar3 + 0x260);
        dVar6 = *(double *)(lVar3 + 0x270);
      }
      dVar6 = (local_90 - (double)local_54) - dVar6;
      pdVar5 = (double *)CONCAT71((int7)((ulonglong)pdVar5 >> 8),1);
      if (SQRT(dVar6 * dVar6 +
               (local_98 - pdVar4[1]) * (local_98 - pdVar4[1]) +
               (local_a0 - *pdVar4) * (local_a0 - *pdVar4)) < (double)*(float *)(param_1 + 0xcc))
      goto LAB_1488776e3;
    }
    pdVar5 = (double *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar3 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar3 + 0x260);
      dVar6 = *(double *)(lVar3 + 0x270);
    }
    dVar6 = (local_90 - (double)local_54) - dVar6;
    pdVar5 = (double *)CONCAT71((int7)((ulonglong)pdVar5 >> 8),1);
    if ((double)*(float *)(param_1 + 0xcc) <=
        SQRT(dVar6 * dVar6 +
             (local_98 - pdVar4[1]) * (local_98 - pdVar4[1]) +
             (local_a0 - *pdVar4) * (local_a0 - *pdVar4))) goto LAB_148877676;
  }
LAB_1488776e3:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_14887759d:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return (ulonglong)pdVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148877744 FUN_148877744 body=299 status=ok
// SIG undefined FUN_148877744(void)

void FUN_148877744(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x5c);
  lVar4 = FUN_14070ca4c(param_1);
  if (lVar3 != 0 && lVar4 != 0) {
    fVar1 = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xd8);
    if (*(char *)(param_1 + 0xbe) == '\0') {
      if (fVar2 <= fVar1) {
        if (fVar2 <= 1.0) {
          lVar4 = *(longlong *)(lVar4 + 0x1c8);
          if (lVar4 == 0) {
            pdVar5 = (double *)&DAT_14c8464e0;
            dVar7 = DAT_14c8464f0;
          }
          else {
            pdVar5 = (double *)(lVar4 + 0x260);
            dVar7 = *(double *)(lVar4 + 0x270);
          }
          lVar3 = *(longlong *)(lVar3 + 0x1c8);
          if (lVar3 == 0) {
            pdVar6 = (double *)&DAT_14c8464e0;
            dVar8 = DAT_14c8464f0;
          }
          else {
            pdVar6 = (double *)(lVar3 + 0x260);
            dVar8 = *(double *)(lVar3 + 0x270);
          }
          *(bool *)(param_1 + 0xbe) =
               SQRT((dVar7 - dVar8) * (dVar7 - dVar8) +
                    (*pdVar5 - *pdVar6) * (*pdVar5 - *pdVar6) +
                    (pdVar5[1] - pdVar6[1]) * (pdVar5[1] - pdVar6[1])) <=
               (double)*(float *)(param_1 + 0xd0);
          return;
        }
        if (*(float *)(param_1 + 0xd0) < ABS(fVar1 - fVar2)) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0xbe) = 1;
      return;
    }
    if (fVar1 - fVar2 < *(float *)(param_1 + 200)) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xbe) = 0;
  return;
}



// FUNCTION 148877870 FUN_148877870 body=273 status=ok
// SIG undefined FUN_148877870(void)

undefined4 FUN_148877870(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined1 local_70 [56];
  longlong *local_38;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (lVar3 = *param_1, lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_148878e88(local_70,*(undefined8 *)(param_2 + 0xa8));
    local_24 = local_24 + *(float *)(lVar3 + 0x5d4);
    local_88 = *(undefined8 *)(lVar3 + 0x588);
    uStack_80 = *(undefined8 *)(lVar3 + 0x590);
    local_78 = *(double *)(lVar3 + 0x598) - (double)*(float *)(lVar3 + 0x5d4);
    uVar5 = FUN_144b39a76(local_70);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  plVar4 = (longlong *)param_1[1];
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
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148877982 FUN_148877982 body=278 status=ok
// SIG undefined FUN_148877982(void)

void FUN_148877982(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14479d2ce(param_1 + 0x44);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0xa8);
  }
  lVar2 = FUN_14070ca4c(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a78b9e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x1120) + 0x28))(lVar2 + 0x1120);
      local_30 = 8;
      local_48[0] = (undefined8 ***)0x0;
      FUN_14485c47a(local_48,uVar5);
      local_28 = 7;
      FUN_1402b90a2(uVar4,&DAT_14cb716d8,local_48);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar6 = local_48;
        if (0x18 < local_30) {
          pppuVar6 = (undefined8 ***)local_48[0];
        }
        (*pcVar1)(pppuVar6);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(local_48[0]);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148877a9a FUN_148877a9a body=662 status=ok
// SIG undefined FUN_148877a9a(void)

void FUN_148877a9a(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [40];
  undefined4 local_a8;
  undefined1 local_a0 [56];
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_14479d2ce(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0xd30;
    uVar3 = FUN_14070ca4c(param_1);
    FUN_1487cc980(lVar2,local_a0);
    local_d0[0] = 0;
    local_a8 = 0;
    FUN_1456bb102(local_d0,uVar3);
    FUN_1447c3578(local_a0,local_68,local_d0);
    uVar5 = FUN_144a7ecd0(local_68);
    *(undefined4 *)(param_1 + 200) = uVar5;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_68;
      if (0x18 < local_50) {
        pppuVar4 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_d0);
    FUN_144a2da94(local_a0);
    FUN_1487ccacc(lVar2,local_a0);
    local_d0[0] = 0;
    local_a8 = 0;
    FUN_1456bb102(local_d0,uVar3);
    FUN_1447c3578(local_a0,local_68,local_d0);
    uVar5 = FUN_144a7ecd0(local_68);
    *(undefined4 *)(param_1 + 0xcc) = uVar5;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_68;
      if (0x18 < local_50) {
        pppuVar4 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_d0);
    FUN_144a2da94(local_a0);
    FUN_1487ccc18(lVar2,local_a0);
    local_d0[0] = 0;
    local_a8 = 0;
    FUN_1456bb102(local_d0,uVar3);
    FUN_1447c3578(local_a0,local_68,local_d0);
    uVar5 = FUN_144a7ecd0(local_68);
    *(undefined4 *)(param_1 + 0xd0) = uVar5;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_68;
      if (0x18 < local_50) {
        pppuVar4 = (undefined8 ***)local_68[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_d0);
    FUN_144a2da94(local_a0);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148877d32 FUN_148877d32 body=949 status=ok
// SIG undefined FUN_148877d32(void)

undefined8 FUN_148877d32(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar10 = 2;
  if (*(char *)(param_1 + 0x30) != '\x01') goto LAB_148877d54;
  FUN_148876f0a();
  FUN_1488770f6(param_1);
  FUN_148877238(param_1);
  bVar6 = *(byte *)(param_1 + 0xbd);
  if (bVar6 == 0) {
    cVar7 = FUN_1488772b2(param_1);
    if ((cVar7 == '\0') && (cVar7 = FUN_14887747a(param_1), cVar7 == '\0')) {
      if (*(char *)(param_1 + 0xf8) == '\x01') {
        local_38 = *(undefined8 *)(param_1 + 0xf0);
        local_48 = *(undefined4 *)(param_1 + 0xe0);
        uStack_44 = *(undefined4 *)(param_1 + 0xe4);
        uStack_40 = *(undefined4 *)(param_1 + 0xe8);
        uStack_3c = *(undefined4 *)(param_1 + 0xec);
        uVar10 = FUN_14479d2ce(param_1 + 0x44);
        cVar7 = FUN_148878fa6(param_1,&local_48,uVar10);
        if (cVar7 != '\0') goto LAB_148877dd8;
      }
      cVar7 = FUN_1488780e8(param_1);
      if (cVar7 == '\0') {
        bVar6 = *(byte *)(param_1 + 0xbd);
        goto LAB_148877d99;
      }
    }
LAB_148877dd8:
    *(undefined1 *)(param_1 + 0xbd) = 1;
  }
  else {
LAB_148877d99:
    if ((bVar6 & 1) == 0) {
      if (*(char *)(param_1 + 0xf8) == '\0') {
        FUN_148878132(param_1);
      }
      else if (*(char *)(param_1 + 0xa0) == '\x01') {
        *(undefined1 *)(param_1 + 0xa0) = 0;
      }
    }
  }
  uVar10 = FUN_14479d2ce(param_1 + 0x4c);
  local_58 = 0;
  local_50 = *(longlong *)(param_1 + 0x80);
  if (local_50 != 0) {
    iVar9 = *(int *)(local_50 + 8);
    do {
      if (iVar9 == 0) {
        local_50 = 0;
        goto LAB_148877e05;
      }
      LOCK();
      iVar4 = *(int *)(local_50 + 8);
      bVar14 = iVar9 == iVar4;
      if (bVar14) {
        *(int *)(local_50 + 8) = iVar9 + 1;
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      UNLOCK();
    } while (!bVar14);
    if (local_50 != 0) {
      local_58 = *(undefined8 *)(param_1 + 0x78);
    }
  }
LAB_148877e05:
  cVar7 = FUN_148877870(&local_58,uVar10);
  uVar10 = 1;
  if (cVar7 == '\0') {
    lVar1 = param_1 + 0x44;
    uVar10 = FUN_14479d2ce(lVar1);
    local_68 = 0;
    local_60 = *(longlong *)(param_1 + 0x80);
    if (local_60 != 0) {
      iVar9 = *(int *)(local_60 + 8);
      do {
        if (iVar9 == 0) {
          local_60 = 0;
          goto LAB_148877e48;
        }
        LOCK();
        iVar4 = *(int *)(local_60 + 8);
        bVar14 = iVar9 == iVar4;
        if (bVar14) {
          *(int *)(local_60 + 8) = iVar9 + 1;
          iVar4 = iVar9;
        }
        iVar9 = iVar4;
        UNLOCK();
      } while (!bVar14);
      if (local_60 != 0) {
        local_68 = *(undefined8 *)(param_1 + 0x78);
      }
    }
LAB_148877e48:
    cVar7 = FUN_148877870(&local_68,uVar10);
    if ((cVar7 != '\0') && (plVar11 = (longlong *)FUN_14479d2ce(lVar1), plVar11 != (longlong *)0x0))
    {
      uVar10 = FUN_145743526(param_1);
      FUN_140937dea(&local_48,uVar10);
      plVar13 = (longlong *)CONCAT44(uStack_3c,uStack_40);
      if (plVar13 != (longlong *)0x0) {
        iVar9 = (int)plVar13[1];
        do {
          if (iVar9 == 0) {
            plVar13 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)plVar13[1];
          bVar14 = iVar9 == iVar4;
          if (bVar14) {
            *(int *)(plVar13 + 1) = iVar9 + 1;
            iVar4 = iVar9;
          }
          iVar9 = iVar4;
          UNLOCK();
        } while (!bVar14);
        LOCK();
        piVar2 = (int *)((longlong)CONCAT44(uStack_3c,uStack_40) + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_3c,uStack_40) + 0x10))();
        }
        if (plVar13 != (longlong *)0x0) {
          lVar5 = CONCAT44(uStack_44,local_48);
          if (lVar5 != 0) {
            uVar10 = FUN_14070ca4c(param_1);
            FUN_1457e778c(lVar5,uVar10,plVar11);
          }
          LOCK();
          plVar3 = plVar13 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      if (plVar11[0x15] != 0) {
        lVar5 = *(longlong *)(plVar11[0x15] + 0x1c8);
        if (lVar5 == 0) {
          puVar12 = &DAT_14c8464e0;
          uVar15 = (undefined4)DAT_14c8464f0;
          uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar15 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
          puVar12 = (undefined8 *)(lVar5 + 0x260);
        }
        uVar10 = puVar12[1];
        *(undefined8 *)(param_1 + 0x88) = *puVar12;
        *(undefined8 *)(param_1 + 0x90) = uVar10;
        *(ulonglong *)(param_1 + 0x98) = CONCAT44(uVar16,uVar15);
        *(undefined1 *)(param_1 + 0xa0) = 1;
      }
      uVar10 = (**(code **)(*plVar11 + 0x9f8))(plVar11);
      FUN_14485c47a(lVar1,uVar10);
      FUN_148877982(param_1);
      cVar7 = FUN_144729dda(lVar1);
      uVar10 = 2;
      if (cVar7 == '\0') goto LAB_148877d54;
      FUN_1488769ea(param_1);
      cVar7 = FUN_1488772b2(param_1);
      uVar8 = 1;
      if ((cVar7 == '\0') && (cVar7 = FUN_14887747a(param_1), cVar7 == '\0')) {
        if (*(char *)(param_1 + 0xf8) == '\x01') {
          local_38 = *(undefined8 *)(param_1 + 0xf0);
          local_48 = *(undefined4 *)(param_1 + 0xe0);
          uStack_44 = *(undefined4 *)(param_1 + 0xe4);
          uStack_40 = *(undefined4 *)(param_1 + 0xe8);
          uStack_3c = *(undefined4 *)(param_1 + 0xec);
          uVar10 = FUN_14479d2ce(lVar1);
          uVar8 = FUN_148878fa6(param_1,&local_48,uVar10);
        }
        else {
          uVar8 = 0;
        }
      }
      *(undefined1 *)(param_1 + 0xbd) = uVar8;
    }
    uVar10 = 0;
  }
LAB_148877d54:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1488780e8 FUN_1488780e8 body=73 status=ok
// SIG undefined FUN_1488780e8(void)

undefined8 FUN_1488780e8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xdc) == '\x01') {
    lVar1 = FUN_14479d2ce(param_1 + 0x44);
    if (lVar1 != 0) {
      uVar2 = FUN_14479d2ce(param_1 + 0x5c);
      uVar2 = FUN_1402b80ac(lVar1,uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148878132 FUN_148878132 body=1125 status=ok
// SIG undefined FUN_148878132(void)

void FUN_148878132(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_14887856b;
  plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x44);
  lVar10 = FUN_14070ca4c(param_1);
  if (((lVar10 == 0 || plVar9 == (longlong *)0x0) ||
      (lVar11 = (**(code **)(*plVar9 + 0xa00))(plVar9), lVar11 == 0)) ||
     (lVar12 = FUN_140a40fb0(lVar10), lVar12 == 0)) goto LAB_14887856b;
  lVar4 = *(longlong *)(lVar12 + 0x1518);
  plVar5 = *(longlong **)(lVar12 + 0x1520);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    local_108 = plVar9[0x4c];
    lStack_100 = plVar9[0x4d];
    local_f8 = plVar9[0x4e];
    local_168 = *(undefined8 *)(lVar11 + 0x260);
    uStack_160 = *(longlong **)(lVar11 + 0x268);
    local_158 = *(undefined8 *)(lVar11 + 0x270);
    lVar10 = *(longlong *)(lVar10 + 0x1c8);
    if (lVar10 == 0) {
      local_68 = DAT_14c8464f0;
      local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_78 = *(undefined8 *)(lVar10 + 0x260);
      uStack_70 = *(undefined8 *)(lVar10 + 0x268);
      local_68 = *(undefined8 *)(lVar10 + 0x270);
    }
    FUN_144afdf0e(&local_58,&local_78,&local_168,&local_108);
    local_108 = 0;
    lStack_100 = CONCAT44(lStack_100._4_4_,0xffffffff);
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    local_e8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    uStack_90 = 0xffffffffffffffff;
    local_88 = 1;
    local_158 = local_48;
    local_168 = CONCAT44(uStack_54,local_58);
    uStack_160 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    uStack_150 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
    uStack_148 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
    uStack_140 = DAT_14cb1c870;
    uVar13 = uStack_140;
    uStack_138 = 0;
    plStack_130 = (longlong *)0x0;
    local_128 = CONCAT44(local_128._4_4_,0xffffffff);
    uStack_120 = (longlong *)CONCAT44(0x43fa0000,(int)plVar9[0xcb]);
    local_e0 = local_58;
    uStack_dc = uStack_54;
    uStack_d8 = uStack_50;
    uStack_d4 = uStack_4c;
    local_d0 = local_48;
    uStack_c8 = uStack_150;
    uStack_140._0_4_ = (undefined4)DAT_14cb1c870;
    uStack_140._4_4_ = (undefined4)((ulonglong)DAT_14cb1c870 >> 0x20);
    local_c0 = (undefined4)DAT_14cb1c868;
    uStack_bc = DAT_14cb1c868._4_4_;
    uStack_b8 = (undefined4)uStack_140;
    uStack_b4 = uStack_140._4_4_;
    uStack_140 = uVar13;
    FUN_144a7c4b8(&local_b0,&uStack_138);
    plVar9 = plStack_130;
    local_98 = uStack_120;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_130 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_88 = 0;
    uVar13 = FUN_145743526(param_1);
    FUN_141246736(&local_168,uVar13);
    if (uStack_160 == (longlong *)0x0) {
LAB_148878405:
      local_e8 = 0;
    }
    else {
      iVar8 = (int)uStack_160[1];
      do {
        if (iVar8 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)uStack_160[1];
        bVar14 = iVar8 == iVar6;
        if (bVar14) {
          *(int *)(uStack_160 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
        plVar9 = uStack_160;
      } while (!bVar14);
      LOCK();
      piVar2 = (int *)((longlong)uStack_160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*uStack_160 + 0x10))();
      }
      local_e8 = local_168;
      uStack_160 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) goto LAB_148878405;
      local_168 = 0;
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
    if (uStack_160 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)uStack_160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*uStack_160 + 0x10))();
      }
    }
    uVar3 = *(undefined4 *)(lVar4 + 0x250);
    local_108 = *(longlong *)(lVar4 + 0x5d0);
    local_f8 = *(undefined8 *)(lVar4 + 0x480);
    plVar9 = *(longlong **)(lVar4 + 0x488);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
    }
    lStack_100 = CONCAT44(lStack_100._4_4_,uVar3);
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        lVar10 = *plStack_f0;
        plStack_f0 = plVar9;
        (**(code **)(lVar10 + 0x10))();
        plVar9 = plStack_f0;
      }
    }
    plStack_f0 = plVar9;
    local_168 = 0xffffffffffffffff;
    uStack_160 = (longlong *)((ulonglong)uStack_160 & 0xffffffff00000000);
    local_158 = DAT_14cb7e378;
    uStack_150 = DAT_14cb7e380;
    uStack_148 = DAT_14cb7e388;
    uStack_140 = DAT_14cb7e378;
    uStack_138 = DAT_14cb7e380;
    plStack_130 = (longlong *)DAT_14cb7e388;
    local_128 = 0;
    uStack_120 = (longlong *)0x0;
    local_118 = 0xffffffff;
    cVar7 = FUN_140181448(&local_108,&local_168);
    plVar9 = uStack_120;
    if ((&local_158 != (undefined8 *)(param_1 + 0x88)) && (cVar7 != '\0')) {
      *(undefined8 *)(param_1 + 0x98) = uStack_148;
      *(undefined4 *)(param_1 + 0x88) = (undefined4)local_158;
      *(undefined4 *)(param_1 + 0x8c) = local_158._4_4_;
      *(undefined4 *)(param_1 + 0x90) = (undefined4)uStack_150;
      *(undefined4 *)(param_1 + 0x94) = uStack_150._4_4_;
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
    if (uStack_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_120)(uStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_144b39986(&local_108);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14887856b:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148878598 FUN_148878598 body=645 status=ok
// SIG undefined FUN_148878598(void)

void FUN_148878598(longlong param_1,double *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = *(int *)(param_1 + 0xb0);
  dVar9 = 0.0;
  if (1 < iVar8) {
    if ((char)param_3[1] == '\x01') {
      if (*param_3 < iVar8) {
        iVar8 = *param_3;
      }
      if (iVar8 < 2) goto LAB_1488785e7;
    }
    uVar14 = 0;
    uVar15 = 0;
    fVar20 = -1.0;
    uVar6 = 0xffffffff;
    lVar5 = 0x18;
    uVar7 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    do {
      FUN_144afdf0e(dVar9,param_2,*(longlong *)(param_1 + 0xa8) + lVar5 + -0x18,
                    *(longlong *)(param_1 + 0xa8) + lVar5);
      fVar12 = (float)SQRT((param_2[2] - local_98) * (param_2[2] - local_98) +
                           (param_2[1] - local_a0) * (param_2[1] - local_a0) +
                           (*param_2 - local_a8) * (*param_2 - local_a8));
      if ((uVar6 == 0xffffffff) || (fVar12 < fVar20)) {
        uVar18 = SUB84(local_a8,0);
        uVar19 = (undefined4)((ulonglong)local_a8 >> 0x20);
        uVar16 = SUB84(local_a0,0);
        uVar17 = (undefined4)((ulonglong)local_a0 >> 0x20);
        uVar14 = SUB84(local_98,0);
        uVar15 = (undefined4)((ulonglong)local_98 >> 0x20);
        uVar6 = (uint)uVar7;
        fVar20 = fVar12;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x18;
      dVar9 = local_a8;
    } while (iVar8 - 1 != uVar7);
    if ((int)uVar6 < 1) {
      dVar9 = 0.0;
    }
    else {
      pdVar4 = *(double **)(param_1 + 0xa8);
      dVar9 = 0.0;
      lVar5 = 0;
      dVar11 = pdVar4[2];
      dVar13 = pdVar4[1];
      dVar10 = *pdVar4;
      do {
        dVar1 = *(double *)((longlong)pdVar4 + lVar5 + 0x18);
        dVar2 = *(double *)((longlong)pdVar4 + lVar5 + 0x20);
        dVar10 = dVar1 - dVar10;
        dVar13 = dVar2 - dVar13;
        dVar3 = *(double *)((longlong)pdVar4 + lVar5 + 0x28);
        dVar11 = dVar3 - dVar11;
        dVar9 = (double)SUB84(dVar9,0) + SQRT(dVar11 * dVar11 + dVar13 * dVar13 + dVar10 * dVar10);
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
        lVar5 = lVar5 + 0x18;
        dVar11 = dVar3;
        dVar13 = dVar2;
        dVar10 = dVar1;
      } while ((ulonglong)uVar6 * 0x18 != lVar5);
    }
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0xb0))) {
      lVar5 = *(longlong *)(param_1 + 0xa8);
      uVar7 = (ulonglong)uVar6;
      dVar10 = *(double *)(lVar5 + uVar7 * 0x18) - (double)CONCAT44(uVar19,uVar18);
      dVar13 = *(double *)(lVar5 + 8 + uVar7 * 0x18) - (double)CONCAT44(uVar17,uVar16);
      dVar11 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18) - (double)CONCAT44(uVar15,uVar14);
      dVar9 = (double)SUB84(dVar9,0) + SQRT(dVar11 * dVar11 + dVar13 * dVar13 + dVar10 * dVar10);
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
    }
  }
LAB_1488785e7:
  if ((char)param_3[1] == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar9);
  }
  return;
}



// FUNCTION 14887881e FUN_14887881e body=751 status=ok
// SIG undefined FUN_14887881e(void)

void FUN_14887881e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  char local_6c;
  undefined4 local_68;
  char local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = FUN_145743526();
  if (lVar8 == 0) {
    local_64 = *(char *)(param_3 + 1);
    if (local_64 == '\x01') {
      local_68 = *param_3;
    }
    lVar8 = *(longlong *)(param_2 + 0x1c8);
    if (lVar8 == 0) {
      local_88 = DAT_14c8464f0;
      local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_98 = *(undefined8 *)(lVar8 + 0x260);
      uStack_90 = *(undefined8 *)(lVar8 + 0x268);
      local_88 = *(undefined8 *)(lVar8 + 0x270);
    }
    puVar10 = &local_98;
    puVar11 = &local_68;
  }
  else {
    iVar7 = FUN_144b2c470(lVar8);
    if ((param_2 == 0) || (1 < iVar7 && *(char *)(param_1 + 0xbc) == '\x01')) {
      cVar2 = *(char *)(param_1 + 0x30);
      FUN_144a7d35a(lVar8,&local_c8);
      if (-1 < (int)local_c0) {
        fVar15 = 0.0;
        lVar8 = 0;
        bVar12 = 0;
        do {
          if ((int)local_c8[1] <= (int)local_c0) break;
          lVar9 = FUN_14479d2ce((ulonglong)local_c0 * 8 + *local_c8);
          if (lVar9 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x3d0);
            bVar5 = FUN_148878b0e(param_1,lVar9);
            if ((lVar9 != 0) &&
               (bVar6 = FUN_144a783a6(lVar9), (bVar6 & (cVar2 == '\0' | bVar5)) == 1)) {
              local_74 = *(char *)(param_3 + 1);
              if (local_74 == '\x01') {
                local_78 = *param_3;
              }
              lVar3 = *(longlong *)(lVar9 + 0x1c8);
              if (lVar3 == 0) {
                local_d8 = DAT_14c8464f0;
                local_e8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_e8 = *(undefined8 *)(lVar3 + 0x260);
                uStack_e0 = *(undefined8 *)(lVar3 + 0x268);
                local_d8 = *(undefined8 *)(lVar3 + 0x270);
              }
              fVar14 = (float)FUN_148878598(param_1,&local_e8,&local_78);
              if ((cVar2 == '\0') && (((bVar12 ^ bVar5) & 1) != 0)) {
                if ((bVar5 != 0) && ((fVar14 < fVar15 || (lVar8 == 0)))) {
LAB_148878b00:
                  lVar8 = lVar9;
                  fVar15 = fVar14;
                  bVar12 = bVar5;
                }
              }
              else if (fVar15 < fVar14) goto LAB_148878b00;
            }
          }
          uVar1 = local_c0 + 1;
          bVar4 = -2 < (int)local_c0;
          local_c0 = uVar1;
        } while (bVar4);
        if (lVar8 != 0) {
          *(float *)(param_1 + 0xd8) = fVar15;
          FUN_14887660a(param_1,lVar8);
        }
      }
      goto LAB_148878963;
    }
    local_6c = *(char *)(param_3 + 1);
    if (local_6c == '\x01') {
      local_70 = *param_3;
    }
    lVar8 = *(longlong *)(param_2 + 0x1c8);
    if (lVar8 == 0) {
      local_a8 = DAT_14c8464f0;
      local_b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_b8 = *(undefined8 *)(lVar8 + 0x260);
      uStack_b0 = *(undefined8 *)(lVar8 + 0x268);
      local_a8 = *(undefined8 *)(lVar8 + 0x270);
    }
    puVar10 = &local_b8;
    puVar11 = &local_70;
  }
  uVar13 = FUN_148878598(param_1,puVar10,puVar11);
  *(undefined4 *)(param_1 + 0xd8) = uVar13;
LAB_148878963:
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148878b0e FUN_148878b0e body=252 status=ok
// SIG undefined FUN_148878b0e(void)

undefined8 FUN_148878b0e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  float local_48;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x44);
  if (plVar2 == (longlong *)0x0 || param_2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0xa00))(plVar2);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = plVar2;
    }
    lVar1 = param_2[0x39];
    if (lVar1 == 0) {
      local_58 = DAT_14c8464f0;
      local_68 = (undefined4)DAT_14c8464e0;
      uStack_64 = DAT_14c8464e0._4_4_;
      uStack_60 = (undefined4)DAT_14c8464e8;
      uStack_5c = DAT_14c8464e8._4_4_;
      uVar5 = SUB84(DAT_14c8464f0,0);
      uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      local_68 = *(undefined4 *)(lVar1 + 0x260);
      uStack_64 = *(undefined4 *)(lVar1 + 0x264);
      uStack_60 = *(undefined4 *)(lVar1 + 0x268);
      uStack_5c = *(undefined4 *)(lVar1 + 0x26c);
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    }
    (**(code **)(*param_2 + 0x528))(param_2,local_44,&local_48);
    local_58 = (double)CONCAT44(uVar6,uVar5) - (double)local_48;
    uVar4 = FUN_148878fa6(param_1,&local_68,plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148878c0c FUN_148878c0c body=634 status=ok
// SIG undefined FUN_148878c0c(void)

undefined8 * FUN_148878c0c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_2[2] = DAT_14cb7e388;
  uVar12 = DAT_14cb7e380;
  *param_2 = DAT_14cb7e378;
  param_2[1] = uVar12;
  param_2[5] = DAT_14cb1c870;
  uVar12 = DAT_14cb1c868;
  param_2[3] = DAT_14cb1c860;
  param_2[4] = uVar12;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  param_2[9] = 0;
  plVar20 = *(longlong **)(param_1 + 0x70);
  if (plVar20 == (longlong *)0x0) {
LAB_148878cf0:
    cVar15 = FUN_144729dda(param_1 + 0x5c);
    if (cVar15 == '\0') goto LAB_148878e20;
    bVar21 = true;
    plVar20 = (longlong *)0x0;
LAB_148878d09:
    plVar17 = (longlong *)FUN_14479d2ce(param_1 + 0x5c);
    (**(code **)(*plVar17 + 0x528))(plVar17,&local_64,&local_68);
    lVar18 = FUN_14479d2ce(param_1 + 0x5c);
    uVar13 = DAT_14cb1c870;
    uVar12 = DAT_14cb1c860;
    lVar18 = *(longlong *)(lVar18 + 0x1c8);
    if (lVar18 == 0) {
      puVar19 = &DAT_14c8464e0;
      uVar22 = (undefined4)DAT_14c8464f0;
      uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar22 = (undefined4)*(undefined8 *)(lVar18 + 0x270);
      uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x270) >> 0x20);
      puVar19 = (undefined8 *)(lVar18 + 0x260);
    }
    local_b8 = *(undefined4 *)puVar19;
    uStack_b4 = *(undefined4 *)((longlong)puVar19 + 4);
    uStack_b0 = *(undefined4 *)(puVar19 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar19 + 0xc);
    local_a8 = CONCAT44(uVar23,uVar22);
    local_90 = DAT_14cb1c870;
    uStack_a0 = DAT_14cb1c860;
    uStack_98 = DAT_14cb1c868;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_78 = 0xffffffff;
    local_70 = local_64;
    uStack_6c = local_68;
    param_2[4] = DAT_14cb1c868;
    param_2[5] = uVar13;
    param_2[2] = local_a8;
    param_2[3] = uVar12;
    *(undefined4 *)param_2 = local_b8;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_b4;
    *(undefined4 *)(param_2 + 1) = uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_ac;
    FUN_144a7c4b8(param_2 + 6,&local_88);
    plVar17 = plStack_80;
    param_2[9] = CONCAT44(uStack_6c,local_70);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    if (bVar21) goto LAB_148878e20;
  }
  else {
    iVar16 = (int)plVar20[1];
    do {
      if (iVar16 == 0) goto LAB_148878cf0;
      LOCK();
      iVar14 = (int)plVar20[1];
      bVar21 = iVar16 == iVar14;
      if (bVar21) {
        *(int *)(plVar20 + 1) = iVar16 + 1;
        iVar14 = iVar16;
      }
      iVar16 = iVar14;
      UNLOCK();
    } while (!bVar21);
    lVar18 = *(longlong *)(param_1 + 0x68);
    if (lVar18 == 0) {
      cVar15 = FUN_144729dda(param_1 + 0x5c);
      if (cVar15 != '\0') {
        bVar21 = false;
        goto LAB_148878d09;
      }
    }
    else {
      uVar22 = *(undefined4 *)(lVar18 + 0x588);
      uVar23 = *(undefined4 *)(lVar18 + 0x58c);
      uVar3 = *(undefined4 *)(lVar18 + 0x590);
      uVar4 = *(undefined4 *)(lVar18 + 0x594);
      uVar5 = *(undefined4 *)(lVar18 + 0x598);
      uVar6 = *(undefined4 *)(lVar18 + 0x59c);
      uVar7 = *(undefined4 *)(lVar18 + 0x5a0);
      uVar8 = *(undefined4 *)(lVar18 + 0x5a4);
      uVar9 = *(undefined4 *)(lVar18 + 0x5ac);
      uVar10 = *(undefined4 *)(lVar18 + 0x5b0);
      uVar11 = *(undefined4 *)(lVar18 + 0x5b4);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar18 + 0x5a8);
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar9;
      *(undefined4 *)(param_2 + 5) = uVar10;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar11;
      *(undefined4 *)(param_2 + 2) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
      *(undefined4 *)(param_2 + 3) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
      *(undefined4 *)param_2 = uVar22;
      *(undefined4 *)((longlong)param_2 + 4) = uVar23;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
      FUN_14488c2fc(param_2 + 6,lVar18 + 0x5b8);
      param_2[9] = *(undefined8 *)(lVar18 + 0x5d0);
    }
  }
  LOCK();
  plVar17 = plVar20 + 1;
  *(int *)plVar17 = (int)*plVar17 + -1;
  UNLOCK();
  if ((int)*plVar17 == 0) {
    (**(code **)*plVar20)(plVar20);
    LOCK();
    piVar2 = (int *)((longlong)plVar20 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
LAB_148878e20:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148878e88 FUN_148878e88 body=285 status=ok
// SIG undefined FUN_148878e88(void)

undefined8 * FUN_148878e88(undefined8 *param_1,longlong *param_2)

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
    param_1[2] = DAT_14cb7e388;
    uVar5 = DAT_14cb7e380;
    *param_1 = DAT_14cb7e378;
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



// FUNCTION 148878fa6 FUN_148878fa6 body=221 status=ok
// SIG undefined FUN_148878fa6(void)

undefined4 FUN_148878fa6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 == (longlong *)0x0) ||
     (plVar3 = (longlong *)(**(code **)(*param_3 + 0x9f8))(param_3), plVar3 == (longlong *)0x0)) {
LAB_14887905a:
    uVar2 = 0;
  }
  else {
    plVar5 = param_3;
    do {
      plVar4 = plVar3;
      cVar1 = FUN_143ca0fcc(plVar4);
      if (cVar1 == '\0') goto LAB_14887905a;
      if (*(char *)(param_1 + 0x30) == '\x01') {
        cVar1 = FUN_1402b90fa(plVar4);
      }
      else {
        cVar1 = FUN_1402b90e8(plVar4);
      }
      if (cVar1 == '\0') goto LAB_14887905a;
      local_48 = *(undefined8 *)(param_2 + 4);
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      uVar2 = FUN_148879084(&local_58,plVar5,plVar4);
      plVar3 = (longlong *)(**(code **)(*plVar4 + 0x9f8))(plVar4);
    } while ((((char)uVar2 == '\0') && (plVar3 != param_3)) &&
            (plVar5 = plVar4, plVar3 != (longlong *)0x0));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148879084 FUN_148879084 body=825 status=ok
// SIG undefined FUN_148879084(void)

undefined4 FUN_148879084(double *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  longlong *local_100;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  longlong *local_b0;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_148878e88(&local_e8,*(undefined8 *)(param_2 + 0xa8));
  FUN_148878e88(&local_138,*(undefined8 *)(param_3 + 0xa8));
  local_88 = local_d8;
  local_98 = local_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  cVar5 = FUN_144a872af();
  if (cVar5 != '\0') {
    local_88 = local_128;
    local_98 = local_138;
    uStack_94 = uStack_134;
    uStack_90 = uStack_130;
    uStack_8c = uStack_12c;
    cVar5 = FUN_144a872af();
    if (cVar5 != '\0') {
      dVar10 = (double)CONCAT44(uStack_12c,uStack_130) - (double)CONCAT44(uStack_dc,uStack_e0);
      dVar8 = (double)CONCAT44(uStack_134,local_138) - (double)CONCAT44(uStack_e4,local_e8);
      dVar3 = local_128 - local_d8;
      fVar7 = (float)SQRT(dVar3 * dVar3 + dVar8 * dVar8 + dVar10 * dVar10);
      dVar9 = DAT_14c8464e0;
      dVar11 = DAT_14c8464e8;
      dVar4 = DAT_14c8464f0;
      if (1e-08 < fVar7) {
        dVar4 = (double)(1.0 / fVar7);
        dVar9 = dVar8 * dVar4;
        dVar11 = dVar10 * dVar4;
        dVar4 = dVar3 * dVar4;
      }
      if (0.0 < fVar7) {
        dVar4 = (local_128 - param_1[2]) * dVar4;
        dVar10 = (double)CONCAT44(uStack_12c,uStack_130) - param_1[1];
        dVar8 = (double)CONCAT44(uStack_134,local_138) - *param_1;
        fVar12 = (float)(dVar8 * dVar9 + dVar11 * dVar10 + dVar4);
        if (-1.0 <= fVar12) {
          fVar14 = fVar12 / fVar7;
          local_9c = (local_ec - local_9c) * fVar14 + local_9c;
          if (local_9c <= 100.0) {
            local_9c = 100.0;
          }
          iVar13 = -(uint)(fVar12 <= fVar7 + 1.0 &&
                          ABS((float)(dVar4 + (dVar9 * dVar10 - dVar8 * dVar11))) <
                          (local_f0 - local_a0) * fVar14 + local_a0);
          uVar6 = CONCAT31((int3)((uint)iVar13 >> 8),
                           (byte)iVar13 &
                           ABS(param_1[2] - (double)(float)((double)fVar14 * dVar3 + local_d8)) <=
                           (double)local_9c);
          goto LAB_148879257;
        }
      }
    }
  }
  uVar6 = 0;
LAB_148879257:
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1488793be FUN_1488793be body=2089 status=ok
// SIG undefined FUN_1488793be(void)

void FUN_1488793be(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  void **ppvVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147f56746();
  uVar6 = FUN_1470e5326(param_2,&DAT_14cb7e458);
  uVar2 = *(undefined4 *)(param_1 + 0xb38);
  lVar7 = FUN_1470e53c2(uVar6,&DAT_14cb7e468);
  puVar1 = (undefined8 *)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 2) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar8 = puVar1;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar7 + 0x40);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar7 + 0x58) = 4;
    *(undefined4 *)(lVar7 + 0x40) = uVar2;
    *(undefined1 *)(lVar7 + 0x60) = 2;
  }
  local_78 = *(undefined8 *)(param_1 + 0xb60);
  FUN_140002266(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0xb50),
                *(undefined8 *)(param_1 + 0xb58));
  lVar7 = FUN_1470e53c2(uVar6,&DAT_14cb7e470);
  iVar5 = local_60;
  pvVar4 = local_68;
  ppvVar13 = (void **)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 8) {
    if (ppvVar13 != &local_68) {
      lVar12 = (longlong)local_60;
      *(int *)(lVar7 + 0x48) = local_60;
      if (local_60 == 0 && *(int *)(lVar7 + 0x4c) == 0) {
        *(undefined4 *)(lVar7 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar13,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar13,pvVar4,lVar12 * 2);
        }
      }
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppvVar9 = ppvVar13;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        ppvVar9 = *(void ***)(lVar7 + 0x40);
      }
      (*pcVar3)(ppvVar9);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*ppvVar13);
    }
    pvVar4 = local_68;
    local_58 = (void *)0x0;
    lVar12 = (longlong)local_60;
    local_50 = local_60;
    if (lVar12 == 0) {
      local_4c = 0;
      *(undefined2 *)(lVar7 + 0x58) = 0x10;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined4 *)(lVar7 + 0x48) = 0;
LAB_1488795f7:
      *(undefined4 *)(lVar7 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_60,0);
      memcpy(local_58,pvVar4,lVar12 * 2);
      pvVar4 = local_58;
      lVar12 = (longlong)local_50;
      *(undefined2 *)(lVar7 + 0x58) = 0x10;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(int *)(lVar7 + 0x48) = local_50;
      if (lVar12 == 0) goto LAB_1488795f7;
      FUN_1446dd670(ppvVar13,local_50,0);
      memcpy(*ppvVar13,pvVar4,lVar12 * 2);
    }
    *(undefined1 *)(lVar7 + 0x60) = 8;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  pwVar11 = L"False";
  pwVar10 = L"False";
  if (*(char *)(param_1 + 0xb98) != '\0') {
    pwVar10 = L"True";
  }
  FUN_140056680(&local_68,pwVar10);
  lVar7 = FUN_1470e53c2(uVar6,&DAT_14cb7e478);
  iVar5 = local_60;
  pvVar4 = local_68;
  ppvVar13 = (void **)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 8) {
    if (ppvVar13 != &local_68) {
      lVar12 = (longlong)local_60;
      *(int *)(lVar7 + 0x48) = local_60;
      if (local_60 == 0 && *(int *)(lVar7 + 0x4c) == 0) {
        *(undefined4 *)(lVar7 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar13,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar13,pvVar4,lVar12 * 2);
        }
      }
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppvVar9 = ppvVar13;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        ppvVar9 = *(void ***)(lVar7 + 0x40);
      }
      (*pcVar3)(ppvVar9);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*ppvVar13);
    }
    pvVar4 = local_68;
    local_58 = (void *)0x0;
    lVar12 = (longlong)local_60;
    local_50 = local_60;
    if (lVar12 == 0) {
      local_4c = 0;
      *(undefined2 *)(lVar7 + 0x58) = 0x10;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined4 *)(lVar7 + 0x48) = 0;
LAB_14887979a:
      *(undefined4 *)(lVar7 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_60,0);
      memcpy(local_58,pvVar4,lVar12 * 2);
      pvVar4 = local_58;
      lVar12 = (longlong)local_50;
      *(undefined2 *)(lVar7 + 0x58) = 0x10;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(int *)(lVar7 + 0x48) = local_50;
      if (lVar12 == 0) goto LAB_14887979a;
      FUN_1446dd670(ppvVar13,local_50,0);
      memcpy(*ppvVar13,pvVar4,lVar12 * 2);
    }
    *(undefined1 *)(lVar7 + 0x60) = 8;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = FUN_1470e5326(param_2,&DAT_14cb7e460);
  uVar2 = *(undefined4 *)(param_1 + 0x16a8);
  lVar7 = FUN_1470e53c2(uVar6,&DAT_14cb7e468);
  puVar1 = (undefined8 *)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 2) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar8 = puVar1;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar7 + 0x40);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar7 + 0x58) = 4;
    *(undefined4 *)(lVar7 + 0x40) = uVar2;
    *(undefined1 *)(lVar7 + 0x60) = 2;
  }
  local_78 = *(undefined8 *)(param_1 + 0x16d0);
  FUN_140002266(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x16c0),
                *(undefined8 *)(param_1 + 0x16c8));
  lVar7 = FUN_1470e53c2(uVar6,&DAT_14cb7e470);
  iVar5 = local_60;
  pvVar4 = local_68;
  ppvVar13 = (void **)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 8) {
    if (ppvVar13 != &local_68) {
      lVar12 = (longlong)local_60;
      *(int *)(lVar7 + 0x48) = local_60;
      if (local_60 == 0 && *(int *)(lVar7 + 0x4c) == 0) {
        *(undefined4 *)(lVar7 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar13,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar13,pvVar4,lVar12 * 2);
        }
      }
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppvVar9 = ppvVar13;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        ppvVar9 = *(void ***)(lVar7 + 0x40);
      }
      (*pcVar3)(ppvVar9);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*ppvVar13);
    }
    pvVar4 = local_68;
    local_58 = (void *)0x0;
    lVar12 = (longlong)local_60;
    local_50 = local_60;
    if (lVar12 == 0) {
      local_4c = 0;
      *(undefined2 *)(lVar7 + 0x58) = 0x10;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined4 *)(lVar7 + 0x48) = 0;
LAB_1488799db:
      *(undefined4 *)(lVar7 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_60,0);
      memcpy(local_58,pvVar4,lVar12 * 2);
      pvVar4 = local_58;
      lVar12 = (longlong)local_50;
      *(undefined2 *)(lVar7 + 0x58) = 0x10;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(int *)(lVar7 + 0x48) = local_50;
      if (lVar12 == 0) goto LAB_1488799db;
      FUN_1446dd670(ppvVar13,local_50,0);
      memcpy(*ppvVar13,pvVar4,lVar12 * 2);
    }
    *(undefined1 *)(lVar7 + 0x60) = 8;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1708) != '\0') {
    pwVar11 = L"True";
  }
  FUN_140056680(&local_68,pwVar11);
  lVar7 = FUN_1470e53c2(uVar6,&DAT_14cb7e478);
  pvVar4 = local_68;
  ppvVar13 = (void **)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 8) {
    if (ppvVar13 != &local_68) {
      *(int *)(lVar7 + 0x48) = local_60;
      if (local_60 == 0 && *(int *)(lVar7 + 0x4c) == 0) {
        *(undefined4 *)(lVar7 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar13,local_60);
        if (local_60 != 0) {
          memcpy(*ppvVar13,pvVar4,(longlong)local_60 * 2);
        }
      }
    }
    goto LAB_148879b82;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120))
  ;
  if (pcVar3 != (code *)0x0) {
    ppvVar9 = ppvVar13;
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      ppvVar9 = *(void ***)(lVar7 + 0x40);
    }
    (*pcVar3)(ppvVar9);
  }
  if (0x18 < *(ushort *)(lVar7 + 0x58)) {
    FUN_1400020a8(*ppvVar13);
  }
  pvVar4 = local_68;
  local_58 = (void *)0x0;
  local_50 = local_60;
  if ((longlong)local_60 == 0) {
    local_4c = 0;
    *(undefined2 *)(lVar7 + 0x58) = 0x10;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined4 *)(lVar7 + 0x48) = 0;
LAB_148879b6a:
    *(undefined4 *)(lVar7 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_60,0);
    memcpy(local_58,pvVar4,(longlong)local_60 * 2);
    pvVar4 = local_58;
    lVar12 = (longlong)local_50;
    *(undefined2 *)(lVar7 + 0x58) = 0x10;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(int *)(lVar7 + 0x48) = local_50;
    if (lVar12 == 0) goto LAB_148879b6a;
    FUN_1446dd670(ppvVar13,local_50,0);
    memcpy(*ppvVar13,pvVar4,lVar12 * 2);
  }
  *(undefined1 *)(lVar7 + 0x60) = 8;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
LAB_148879b82:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148879be8 FUN_148879be8 body=161 status=ok
// SIG undefined FUN_148879be8(void)

void FUN_148879be8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489a5ae0(param_1 + 0x240,&local_30);
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148879c8a FUN_148879c8a body=197 status=ok
// SIG undefined FUN_148879c8a(void)

void FUN_148879c8a(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x948) == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x18);
    FUN_1400021e4(&local_20,&local_30);
  }
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148879d50 FUN_148879d50 body=179 status=ok
// SIG undefined FUN_148879d50(void)

void FUN_148879d50(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    FUN_1489a5ae0(param_1 + 0x2c8,&local_30);
    if ((longlong *)(param_2 + 8) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_30;
      local_30 = 0;
      *(undefined4 *)(param_2 + 0x10) = local_28;
      *(undefined4 *)(param_2 + 0x14) = local_24;
    }
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148879e04 FUN_148879e04 body=199 status=ok
// SIG undefined FUN_148879e04(void)

undefined8 * FUN_148879e04(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0db8d0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3dcccccd;
  FUN_1414f1cb4(param_1 + 0x34);
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)(param_1 + 0x52) = 4;
  *(undefined4 *)(param_1 + 0x4f) = 1;
  *(undefined1 *)(param_1 + 0x53) = 2;
  *(byte *)(param_1 + 0x54) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x55] = 0;
  *(undefined2 *)(param_1 + 0x59) = 4;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a) = 3;
  *(char *)(param_1 + 0x5b) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  return param_1;
}



// FUNCTION 148879ed2 FUN_148879ed2 body=344 status=ok
// SIG undefined FUN_148879ed2(void)

void FUN_148879ed2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar5 = &DAT_14cb7e578;
  if (*(char *)(param_1 + 0x198) != '\0') {
    puVar5 = &DAT_14cb7e570;
  }
  uVar3 = *puVar5;
  uVar1 = FUN_140a48832();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    local_28 = 0;
    uVar3 = FUN_140ffb1b2();
    lVar4 = FUN_140c47e50(lVar2,uVar3,&local_28);
    if (lVar4 != 0) {
      FUN_141689bc8(lVar4 + 0x80,param_1 + 0x1a0);
    }
    local_28 = 0;
    uVar3 = FUN_140c48260();
    lVar2 = FUN_140c47e50(lVar2,uVar3,&local_28);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 600);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_1 + 600);
        }
      }
      *(longlong *)(lVar2 + 0x80) = lVar4;
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_1 + 0x260);
      *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(param_1 + 0x268);
      FUN_144983130(lVar2 + 0x98,param_1 + 0x270);
      FUN_144983130(lVar2 + 0xd0,param_1 + 0x2a8);
      *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)(param_1 + 0x2e8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887a02c FUN_14887a02c body=161 status=ok
// SIG undefined FUN_14887a02c(void)

void FUN_14887a02c(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489a5ae0(param_1 + 600,&local_30);
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887a0ce FUN_14887a0ce body=152 status=ok
// SIG undefined FUN_14887a0ce(void)

void FUN_14887a0ce(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c15624();
  plVar1 = (longlong *)FUN_140343d7a(param_1);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_144a8ae40();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_144a8ae40();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) goto LAB_14887a132;
    }
  }
  lVar4 = 0;
LAB_14887a132:
  FUN_1406ff398(&local_28,lVar4);
  *(undefined4 *)(param_1 + 0x278) = local_28;
  *(undefined4 *)(param_1 + 0x27c) = uStack_24;
  *(undefined4 *)(param_1 + 0x280) = uStack_20;
  *(undefined4 *)(param_1 + 0x284) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887a168 FUN_14887a168 body=245 status=ok
// SIG undefined FUN_14887a168(void)

undefined8 FUN_14887a168(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (((*(longlong *)(param_1 + 0x280) != 0) &&
      (cVar3 = FUN_144729dda(param_1 + 0x278), cVar3 != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x280), plVar1 != (longlong *)0x0)) {
    if ((*(float *)(param_1 + 0x26c) < 0.0) ||
       (*(float *)(param_1 + 0x26c) + 5.0 < *(float *)(param_2 + 8))) {
      uVar5 = rand();
      fVar7 = (float)(uVar5 & 0x7fff) / 32767.0;
      *(float *)(param_1 + 0x268) = fVar7;
      *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 8);
    }
    else {
      fVar7 = *(float *)(param_1 + 0x268);
    }
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (fVar7 < *(float *)(lVar2 + 0x19c) || fVar7 == *(float *)(lVar2 + 0x19c)) {
      bVar4 = *(byte *)(lVar2 + 0x198);
      if (bVar4 == 1) {
        uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
        cVar3 = FUN_147f42fe2(uVar6);
        if (cVar3 != '\0') {
          return 2;
        }
        bVar4 = *(byte *)(lVar2 + 0x198);
      }
      if ((bVar4 & 1) == 0) {
        uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
        cVar3 = FUN_147f4308a(uVar6);
        if (cVar3 != '\0') {
          return 2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14887a25e FUN_14887a25e body=30 status=ok
// SIG undefined FUN_14887a25e(void)

void FUN_14887a25e(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_141813b90();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x270) = 1;
  }
  return;
}



// FUNCTION 14887a27c FUN_14887a27c body=39 status=ok
// SIG undefined FUN_14887a27c(void)

undefined8 * FUN_14887a27c(undefined8 *param_1)

{
  FUN_148879e04();
  *param_1 = &PTR_FUN_14b4065d0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 14887a2a4 FUN_14887a2a4 body=87 status=ok
// SIG undefined FUN_14887a2a4(void)

undefined8 * FUN_14887a2a4(undefined8 *param_1)

{
  memset(param_1,0,0x198);
  FUN_140c2310e(param_1);
  *param_1 = &PTR_FUN_14b0db9f0;
  param_1[0x33] = 0;
  FUN_14112fbd2(param_1 + 0x34);
  param_1[0x81] = 0;
  *(undefined2 *)(param_1 + 0x82) = 0x201;
  return param_1;
}



// FUNCTION 14887a2fc FUN_14887a2fc body=1024 status=ok
// SIG undefined FUN_14887a2fc(void)

void FUN_14887a2fc(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_1 + 0x90))();
  uVar4 = DAT_14cb7e628;
  uVar2 = FUN_140ffad2a();
  lVar3 = FUN_140c48046(param_1 + 0x10,uVar2,uVar4,0);
  if (lVar3 == 0) goto LAB_14887a6b9;
  uVar4 = FUN_1408d77e6();
  lVar3 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb7e630,0);
  if (lVar3 == 0) goto LAB_14887a6b9;
  local_70 = 0;
  uVar4 = FUN_1411157a2();
  lVar5 = FUN_140c47e50(lVar3,uVar4,&local_70);
  if (lVar5 != 0) {
    FUN_14054d68c(lVar5 + 0x80,param_1 + 0x33);
    *(undefined1 *)(lVar5 + 0x331) = 0;
  }
  local_70 = 0;
  uVar4 = FUN_14575528a();
  lVar6 = FUN_140c47e50(lVar3,uVar4,&local_70);
  if (lVar6 != 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    if (lVar5 == 0) {
      uStack_80 = 0;
      local_78 = 0;
    }
    else {
      FUN_14111569e(lVar5,&local_70);
      uStack_80 = local_70;
      local_78 = CONCAT44(uStack_64,uStack_68);
    }
    FUN_141115702(&local_70,&local_88);
    FUN_1403719a4(lVar6 + 0x80,&local_70);
    FUN_144a2da94(&local_70);
  }
  uVar4 = FUN_140a48832();
  lVar6 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb7e640,0);
  if (lVar6 != 0) {
    local_70 = 0;
    uVar4 = FUN_140c48226();
    lVar7 = FUN_140c47e50(lVar6,uVar4,&local_70);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x19c) = 1;
      local_a0 = 0;
      if (lVar5 == 0) {
        local_90 = 0;
        local_98 = 0;
      }
      else {
        FUN_14111569e(lVar5,&local_70);
        local_90 = CONCAT44(uStack_64,uStack_68);
        local_98 = local_70;
      }
      FUN_141115702(&local_70);
      FUN_1403719a4(lVar7 + 0x1e8,&local_70);
      FUN_144a2da94(&local_70);
    }
    local_70 = 0;
    uVar4 = FUN_140c4800c();
    lVar6 = FUN_140c47e50(lVar6,uVar4,&local_70);
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0xb8) != *(char *)((longlong)param_1 + 0x411)) {
        *(char *)(lVar6 + 0xb8) = *(char *)((longlong)param_1 + 0x411);
        FUN_1403a3fe6();
      }
      cVar1 = (char)param_1[0x82];
      if (cVar1 == '\0') {
        *(undefined1 *)(lVar6 + 0x1c) = 0;
      }
      else {
        if (cVar1 == '\x01') {
          local_b8 = 0;
          if (lVar5 == 0) {
            local_a8 = 0;
            local_b0 = 0;
          }
          else {
            FUN_14111569e(lVar5,&local_70);
            local_a8 = CONCAT44(uStack_64,uStack_68);
            local_b0 = local_70;
          }
          FUN_141115702(&local_70);
        }
        else {
          if (cVar1 != '\x02') goto LAB_14887a60d;
          FUN_140440628(&local_70,&DAT_14cb7e648,0);
        }
        FUN_1403719a4(lVar6 + 0x80,&local_70);
        FUN_144a2da94(&local_70);
      }
    }
  }
LAB_14887a60d:
  uVar4 = FUN_140a48832();
  lVar3 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb7e638,0);
  if (lVar3 != 0) {
    local_70 = 0;
    uVar4 = FUN_1457552c4();
    lVar3 = FUN_140c47e50(lVar3,uVar4,&local_70);
    if (lVar3 != 0) {
      local_d0 = 0;
      if (lVar5 == 0) {
        local_c0 = 0;
        local_c8 = 0;
      }
      else {
        FUN_14111569e(lVar5,&local_70);
        local_c0 = CONCAT44(uStack_64,uStack_68);
        local_c8 = local_70;
      }
      FUN_141115702(&local_70);
      FUN_1403719a4(lVar3 + 0x80,&local_70);
      FUN_144a2da94(&local_70);
    }
  }
LAB_14887a6b9:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887a6fe FUN_14887a6fe body=161 status=ok
// SIG undefined FUN_14887a6fe(void)

void FUN_14887a6fe(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489a5ae0(param_1 + 0x450,&local_30);
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887a7a0 FUN_14887a7a0 body=161 status=ok
// SIG undefined FUN_14887a7a0(void)

void FUN_14887a7a0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489a5ae0(param_1 + 0x198,&local_30);
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887a842 FUN_14887a842 body=22 status=ok
// SIG undefined FUN_14887a842(void)

undefined8 FUN_14887a842(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb7e6c8;
  if (DAT_14cb7e6c8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb7e6c8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb7e6c8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb7e6c8[0x3a] <= *(int *)((longlong)DAT_14cb7e6c8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb7e6c8 + 0x300))(DAT_14cb7e6c8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14887a880 FUN_14887a880 body=81 status=ok
// SIG undefined FUN_14887a880(void)

void FUN_14887a880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
  }
  plVar1 = (longlong *)FUN_14017698e(uVar3);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (lVar2 != 0) {
      FUN_14887f292(lVar2,0,1,*(undefined4 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}



// FUNCTION 14887a8d2 FUN_14887a8d2 body=103 status=ok
// SIG undefined FUN_14887a8d2(void)

float * FUN_14887a8d2(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  float fVar5;
  
  uVar1 = FUN_1447262c2(param_4);
  plVar2 = (longlong *)FUN_14017698e(uVar1);
  uVar4 = 2;
  fVar5 = 0.0;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      fVar5 = (float)*(int *)(lVar3 + 0x194) / 1000.0;
      uVar4 = 3;
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar5;
  *(undefined1 *)(param_2 + 8) = uVar4;
  return param_2;
}



// FUNCTION 14887a93a FUN_14887a93a body=102 status=ok
// SIG undefined FUN_14887a93a(void)

undefined8 FUN_14887a93a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  uVar1 = FUN_1447262c2(param_3);
  plVar2 = (longlong *)FUN_14017698e(uVar1);
  if ((plVar2 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0 && param_2 != 0)) {
    fVar4 = (float)FUN_144a7ecd0(param_4);
    *(int *)(lVar3 + 0x194) = (int)(fVar4 * 1000.0);
    return CONCAT71((uint7)(uint3)((uint)(int)(fVar4 * 1000.0) >> 8),1);
  }
  return 0;
}



// FUNCTION 14887a9a0 FUN_14887a9a0 body=76 status=ok
// SIG undefined FUN_14887a9a0(void)

undefined8 FUN_14887a9a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_1447262c2(param_3);
  plVar2 = (longlong *)FUN_14017698e(uVar1);
  if ((plVar2 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0 && param_2 != 0)) {
    *(undefined4 *)(lVar3 + 0x194) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 14887a9ec FUN_14887a9ec body=266 status=ok
// SIG undefined FUN_14887a9ec(void)

undefined8
FUN_14887a9ec(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [36];
  undefined1 local_64 [28];
  float local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1447262c2(param_4);
  plVar2 = (longlong *)FUN_14017698e(uVar1);
  if ((plVar2 == (longlong *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), param_3 == 0 || lVar3 == 0)) {
    FUN_14162be86(param_2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  FUN_142b2fbec(local_64);
  FUN_1411909b8(local_64,(float)*(int *)(lVar3 + 0x194) / 1000.0);
  FUN_140af2c5a(local_64,CONCAT71((int7)((ulonglong)param_3 >> 8),param_5) & 0xffffffff,param_6);
  if (local_44 == '\x01') {
    local_48 = (float)FUN_142b2fc60(local_64);
  }
  *(int *)(lVar3 + 0x194) = (int)(local_48 * 1000.0);
  FUN_14162be86(param_2,1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887aaf8 FUN_14887aaf8 body=124 status=ok
// SIG undefined FUN_14887aaf8(void)

undefined8 *
FUN_14887aaf8(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  }
  else {
    *param_2 = *param_5;
  }
  return param_2;
}



// FUNCTION 14887ab74 FUN_14887ab74 body=76 status=ok
// SIG undefined FUN_14887ab74(void)

undefined8 FUN_14887ab74(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_1447262c2(param_3);
  plVar2 = (longlong *)FUN_14017698e(uVar1);
  if ((plVar2 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0 && param_2 != 0)) {
    *(undefined4 *)(lVar3 + 0x194) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 14887abc6 FUN_14887abc6 body=56 status=ok
// SIG undefined FUN_14887abc6(void)

void FUN_14887abc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b04c460;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14887abfe FUN_14887abfe body=44 status=ok
// SIG undefined FUN_14887abfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14887abfe(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7e73c = _DAT_14cb7e73c + -1;
  *param_1 = DAT_14cb7e730;
  DAT_14cb7e730 = param_1;
  return;
}



// FUNCTION 14887ac2a FUN_14887ac2a body=58 status=ok
// SIG undefined FUN_14887ac2a(void)

void FUN_14887ac2a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b04c460;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 14887ac64 FUN_14887ac64 body=96 status=ok
// SIG undefined FUN_14887ac64(void)

void FUN_14887ac64(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b04c490;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f8000003e99999a;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 14887accc FUN_14887accc body=66 status=ok
// SIG undefined FUN_14887accc(void)

undefined1 FUN_14887accc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 2;
  FUN_14863c56a(param_1,param_2,&local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887ad10 FUN_14887ad10 body=200 status=ok
// SIG undefined FUN_14887ad10(void)

longlong * FUN_14887ad10(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140862250();
  param_1[3] = 0;
  param_1[4] = 0;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14012344a();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    if ((lVar4 == 0) || (*param_1 == 0)) goto LAB_14887ad6f;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_1[2] = 0;
      goto LAB_14887ad6f;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_1);
    param_1[2] = lVar5;
    if (lVar5 == 0) goto LAB_14887ad6f;
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar5 + 0x20))) {
    param_1[3] = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 8 + (ulonglong)param_3 * 0x60);
  }
LAB_14887ad6f:
  FUN_1405a630a(param_1);
  return param_1;
}



// FUNCTION 14887ae0c FUN_14887ae0c body=40 status=ok
// SIG undefined FUN_14887ae0c(void)

undefined8 FUN_14887ae0c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14011fc22(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 14887ae3e FUN_14887ae3e body=454 status=ok
// SIG undefined FUN_14887ae3e(void)

void FUN_14887ae3e(void)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  
  FUN_14124473a();
  if (DAT_14cb7ea58 == 0) {
    lVar2 = FUN_1464bb16c();
    uVar1 = DAT_14cb7ea58;
    lVar4 = (longlong)(int)DAT_14cb7ea58;
    DAT_14cb7ea58 = DAT_14cb7ea58 + 1;
    if (DAT_14cb7ea5c < DAT_14cb7ea58) {
      FUN_14887e27e(uVar1);
    }
    puVar3 = DAT_14cb7ea50;
    if (DAT_14cb7ea50 == (undefined *)0x0) {
      puVar3 = &DAT_14cb7ea20;
    }
    *(undefined8 *)(puVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x70);
    lVar2 = FUN_1465428e4();
    uVar1 = DAT_14cb7ea58;
    lVar4 = (longlong)(int)DAT_14cb7ea58;
    DAT_14cb7ea58 = DAT_14cb7ea58 + 1;
    if (DAT_14cb7ea5c < DAT_14cb7ea58) {
      FUN_14887e27e(uVar1);
    }
    puVar3 = DAT_14cb7ea50;
    if (DAT_14cb7ea50 == (undefined *)0x0) {
      puVar3 = &DAT_14cb7ea20;
    }
    *(undefined8 *)(puVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x70);
    lVar2 = FUN_14654268c();
    uVar1 = DAT_14cb7ea58;
    lVar4 = (longlong)(int)DAT_14cb7ea58;
    DAT_14cb7ea58 = DAT_14cb7ea58 + 1;
    if (DAT_14cb7ea5c < DAT_14cb7ea58) {
      FUN_14887e27e(uVar1);
    }
    puVar3 = DAT_14cb7ea50;
    if (DAT_14cb7ea50 == (undefined *)0x0) {
      puVar3 = &DAT_14cb7ea20;
    }
    *(undefined8 *)(puVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x70);
    lVar2 = FUN_146542146();
    uVar1 = DAT_14cb7ea58;
    lVar4 = (longlong)(int)DAT_14cb7ea58;
    DAT_14cb7ea58 = DAT_14cb7ea58 + 1;
    if (DAT_14cb7ea5c < DAT_14cb7ea58) {
      FUN_14887e27e(uVar1);
    }
    puVar3 = DAT_14cb7ea50;
    if (DAT_14cb7ea50 == (undefined *)0x0) {
      puVar3 = &DAT_14cb7ea20;
    }
    *(undefined8 *)(puVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x70);
    lVar2 = FUN_146542aa6();
    uVar1 = DAT_14cb7ea58;
    lVar4 = (longlong)(int)DAT_14cb7ea58;
    DAT_14cb7ea58 = DAT_14cb7ea58 + 1;
    if (DAT_14cb7ea5c < DAT_14cb7ea58) {
      FUN_14887e27e(uVar1);
    }
    puVar3 = DAT_14cb7ea50;
    if (DAT_14cb7ea50 == (undefined *)0x0) {
      puVar3 = &DAT_14cb7ea20;
    }
    *(undefined8 *)(puVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x70);
    lVar2 = FUN_1464bb202();
    uVar1 = DAT_14cb7ea58;
    lVar4 = (longlong)(int)DAT_14cb7ea58;
    DAT_14cb7ea58 = DAT_14cb7ea58 + 1;
    if (DAT_14cb7ea5c < DAT_14cb7ea58) {
      FUN_14887e27e(uVar1);
    }
    puVar3 = &DAT_14cb7ea20;
    if (DAT_14cb7ea50 != (undefined *)0x0) {
      puVar3 = DAT_14cb7ea50;
    }
    *(undefined8 *)(puVar3 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x70);
  }
  return;
}



// FUNCTION 14887b004 FUN_14887b004 body=118 status=ok
// SIG undefined FUN_14887b004(void)

longlong FUN_14887b004(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar1 = FUN_144a78d6a();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_2 + 0xa8) != 0)) {
      param_2 = *(longlong *)(param_2 + 0xa8);
    }
    lVar1 = FUN_144a7cbb2();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_2 + 0x3c0) != 0)) {
      param_2 = *(longlong *)(param_2 + 0x3c0);
    }
  }
  return param_2;
}



// FUNCTION 14887b07a FUN_14887b07a body=24 status=ok
// SIG undefined FUN_14887b07a(void)

undefined1 FUN_14887b07a(void)

{
  undefined1 *in_R9;
  
  FUN_140ed6dae();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 14887b092 FUN_14887b092 body=137 status=ok
// SIG undefined FUN_14887b092(void)

void FUN_14887b092(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uVar1 = param_2[1];
  uVar3 = FUN_144a7891a(uVar1);
  local_40 = *param_1;
  uVar2 = param_1[1];
  uVar4 = FUN_144a7891a(uVar2);
  local_58 = uVar1;
  local_50 = &local_38;
  FUN_144a789b8(uVar4,uVar2,&local_40,uVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887b11c FUN_14887b11c body=555 status=ok
// SIG undefined FUN_14887b11c(void)

ulonglong FUN_14887b11c(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  uint local_68;
  undefined4 uStack_64;
  int local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  psVar4 = (short *)*param_2;
  if (psVar4 == (short *)0x0) {
    plVar8 = (longlong *)0x0;
    goto LAB_14887b21b;
  }
  if (*psVar4 == 0x28) {
    *param_2 = (longlong)(psVar4 + 1);
  }
  FUN_140056680(&local_58,&DAT_149dfb77a);
  psVar4 = (short *)FUN_1401e9420(*param_2,&local_58,1);
  plVar8 = (longlong *)CONCAT71((int7)((ulonglong)&local_58 >> 8),psVar4 == (short *)0x0);
  if (psVar4 == (short *)0x0) {
LAB_14887b1f4:
    psVar4 = (short *)*param_2;
    if ((psVar4 != (short *)0x0) && (*psVar4 == 0x29)) {
      psVar4 = psVar4 + 1;
LAB_14887b206:
      *param_2 = (longlong)psVar4;
      plVar8 = (longlong *)CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
    }
  }
  else {
    lVar5 = FUN_1464bb104();
    local_48 = *(undefined8 *)(lVar5 + 0x18);
    FUN_1400021e4(&local_48,&local_68);
    if (local_50 == local_60) {
      bVar9 = true;
      if (1 < local_50) {
        iVar3 = FUN_144a80a00(local_58,CONCAT44(uStack_64,local_68));
        bVar9 = iVar3 == 0;
      }
    }
    else {
      bVar9 = local_60 + local_50 == 1;
    }
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
    if (!bVar9) goto LAB_14887b1f4;
    *param_2 = (longlong)psVar4;
    if (*psVar4 == 0x28) {
      psVar4 = psVar4 + 1;
      *param_2 = (longlong)psVar4;
    }
    local_68 = 0;
    psVar4 = (short *)FUN_14887b348(&local_68,psVar4);
    uVar1 = local_68;
    *param_2 = (longlong)psVar4;
    if (*psVar4 == 0x2c) {
      *param_2 = (longlong)(psVar4 + 1);
      lVar7 = (longlong)(int)local_68;
      lVar5 = FUN_14124473a();
      if (*(uint *)(lVar5 + 0x48) < uVar1) goto LAB_14887b288;
      FUN_14887ae3e();
      puVar6 = &DAT_14cb7ea20;
      if (DAT_14cb7ea50 != (undefined *)0x0) {
        puVar6 = DAT_14cb7ea50;
      }
      plVar8 = *(longlong **)(puVar6 + lVar7 * 8);
      if (plVar8 == (longlong *)0x0) goto LAB_14887b288;
      FUN_14887b3ea(param_1,uVar1);
      lVar5 = *param_2;
      cVar2 = FUN_140d50488(plVar8,param_3,param_5);
      psVar4 = (short *)0x0;
      if ((lVar5 != 0) && (cVar2 != '\0')) {
        local_80 = param_3 | 0x8000000;
        local_78 = param_5;
        local_88 = param_4;
        psVar4 = (short *)(**(code **)(*plVar8 + 0xf8))(plVar8,lVar5,param_1,0);
        *param_2 = (longlong)psVar4;
        plVar8 = (longlong *)CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
        if ((psVar4 != (short *)0x0) &&
           ((*psVar4 == 0x29 && (*param_2 = (longlong)(psVar4 + 1), psVar4[1] == 0x29)))) {
          psVar4 = psVar4 + 2;
          goto LAB_14887b206;
        }
        goto LAB_14887b20c;
      }
      goto LAB_14887b206;
    }
LAB_14887b288:
    plVar8 = (longlong *)0x0;
  }
LAB_14887b20c:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14887b21b:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar8 & 0xffffffff;
}



// FUNCTION 14887b348 FUN_14887b348 body=161 status=ok
// SIG undefined FUN_14887b348(void)

longlong FUN_14887b348(undefined4 *param_1,longlong param_2)

{
  ushort *puVar1;
  longlong lVar2;
  wchar_t *_Str;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_2 + -2;
  iVar4 = -1;
  do {
    puVar1 = (ushort *)(lVar3 + 2);
    lVar3 = lVar3 + 2;
    iVar4 = iVar4 + 1;
    if (0x3f < *puVar1) break;
  } while ((1L << ((byte)*puVar1 & 0x3f) & 0x3ff400100000000U) != 0);
  FUN_14006620a(&local_30,param_2,iVar4);
  _Str = L"";
  if (local_28 != 0) {
    _Str = local_30;
  }
  lVar2 = _wtoi64(_Str);
  *param_1 = (int)lVar2;
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887b3ea FUN_14887b3ea body=228 status=ok
// SIG undefined FUN_14887b3ea(void)

void FUN_14887b3ea(undefined8 *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *(undefined1 *)(param_1 + 7) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    break;
  case 1:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    break;
  case 2:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *(undefined4 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 2;
    break;
  case 3:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 3;
    break;
  case 4:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    FUN_144928b90(param_1,0);
    *(undefined1 *)(param_1 + 7) = 4;
    break;
  case 5:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 5;
  }
  return;
}



// FUNCTION 14887b4ce FUN_14887b4ce body=369 status=ok
// SIG undefined FUN_14887b4ce(void)

bool FUN_14887b4ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14887ae3e();
  puVar5 = &DAT_14cb7ea20;
  if (DAT_14cb7ea50 != (undefined *)0x0) {
    puVar5 = DAT_14cb7ea50;
  }
  plVar2 = *(longlong **)(puVar5 + (ulonglong)*(byte *)(param_1 + 0x38) * 8);
  if (plVar2 != (longlong *)0x0) {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    local_80 = param_6;
    local_88 = param_5;
    local_98 = (undefined2 *)0x0;
    local_90 = param_4;
    (**(code **)(*plVar2 + 0xf0))(plVar2,&local_58,param_1,0);
    puVar6 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar6 = local_58;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x38);
    lVar4 = FUN_1464bb104();
    local_68 = *(longlong *)(lVar4 + 0x18);
    FUN_1400021e4(&local_68,&local_78);
    puVar7 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar7 = local_78;
    }
    local_98 = puVar6;
    FUN_140002266(&local_68,L"(%s(%u,%s))",puVar7,uVar1);
    iVar3 = local_60 + -1;
    if (local_60 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2,local_68,iVar3);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887b640 FUN_14887b640 body=54 status=ok
// SIG undefined FUN_14887b640(void)

void FUN_14887b640(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4069c0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  return;
}



// FUNCTION 14887b67e FUN_14887b67e body=100 status=ok
// SIG undefined FUN_14887b67e(void)

void FUN_14887b67e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b406a10;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x36) = 0;
  return;
}



// FUNCTION 14887b708 FUN_14887b708 body=9 status=ok
// SIG undefined FUN_14887b708(void)

void FUN_14887b708(longlong param_1)

{
  FUN_143d66950(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14887b712 FUN_14887b712 body=100 status=ok
// SIG undefined FUN_14887b712(void)

void FUN_14887b712(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  FUN_1456fc814(*(undefined8 *)(param_1 + 0x48));
  FUN_14887fbee(param_1 + 0xf8,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887b778 FUN_14887b778 body=77 status=ok
// SIG undefined FUN_14887b778(void)

void FUN_14887b778(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_14887f2ac(*(undefined8 *)(param_1 + 0x48),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887b7c6 FUN_14887b7c6 body=9 status=ok
// SIG undefined FUN_14887b7c6(void)

void FUN_14887b7c6(longlong param_1)

{
  FUN_14887b7d0(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 14887b7d0 FUN_14887b7d0 body=442 status=ok
// SIG undefined FUN_14887b7d0(void)

longlong FUN_14887b7d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar5 = FUN_14479d2ce(param_1 + 0xe0);
  if (lVar5 == 0) {
LAB_14887b814:
    lVar5 = 0;
    bVar3 = false;
LAB_14887b819:
    bVar2 = bVar3;
    lVar6 = FUN_14479d2ce(param_1 + 0xe8);
    if (lVar6 != 0) {
      lVar7 = FUN_144a78b9e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) goto LAB_14887b8f0;
    }
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1449f3324();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_14887b814;
    lVar6 = *(longlong *)(lVar5 + 0xa08);
    bVar3 = true;
    if (lVar6 == 0) goto LAB_14887b819;
    lVar7 = FUN_144a78b9e();
    if (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_14887b819;
    bVar2 = true;
    bVar3 = true;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30) goto LAB_14887b819;
LAB_14887b8f0:
    lVar6 = *(longlong *)(lVar6 + 0x13f8);
  }
  if (!bVar2) {
    return lVar6;
  }
  if (lVar6 != 0) {
    return lVar6;
  }
  if (*(longlong *)(lVar5 + 0x398) != 0) {
    lVar6 = FUN_140082f10();
    if (*(longlong *)(lVar5 + 0x398) != 0) {
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x398) + 0x10);
      if (lVar5 == 0) {
        return 0;
      }
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        lVar6 = FUN_1403b0700();
        lVar5 = *(longlong *)(lVar6 + 0x40);
        if (lVar5 == 0) {
          uVar8 = FUN_140355b7c();
          lVar5 = FUN_14477b664(uVar8);
          *(longlong *)(lVar6 + 0x40) = lVar5;
        }
        if (*(longlong *)(lVar6 + 0x48) != 0) {
          return *(longlong *)(lVar6 + 0x48);
        }
        if (lVar5 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar6 + 0x38) != 0) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
            lVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar8,(longlong *)(lVar6 + 0x38));
          }
          *(longlong *)(lVar6 + 0x48) = lVar5;
          return lVar5;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 14887b98a FUN_14887b98a body=246 status=ok
// SIG undefined FUN_14887b98a(void)

undefined4 * FUN_14887b98a(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457ea61e();
  if (*(longlong *)(param_2 + 2) != 0) {
    cVar2 = FUN_144729dda(param_2);
    if (cVar2 != '\0') goto LAB_14887ba2b;
  }
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  if (param_3[2] == 0) {
    if ((lVar4 == 0) || (*param_3 == 0)) goto LAB_14887ba2b;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_3);
        param_3[2] = lVar4;
        if (lVar4 == 0) goto LAB_14887ba2b;
        goto LAB_14887ba4f;
      }
    }
    param_3[2] = 0;
  }
  else {
LAB_14887ba4f:
    local_48 = 0;
    FUN_1457ea838(param_1,&local_38,param_3,1);
    *param_2 = local_38;
    param_2[1] = uStack_34;
    param_2[2] = uStack_30;
    param_2[3] = uStack_2c;
  }
LAB_14887ba2b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887ba82 FUN_14887ba82 body=132 status=ok
// SIG undefined FUN_14887ba82(void)

void FUN_14887ba82(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140cf4cae();
  if (param_2 != 0) {
    lVar1 = FUN_140d53794();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_143d63a56(param_1,local_20,param_2);
      FUN_145bdd4a2(param_1,local_20,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887bb2e FUN_14887bb2e body=74 status=ok
// SIG undefined FUN_14887bb2e(void)

void FUN_14887bb2e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar2 = FUN_140316ff8();
    uVar2 = FUN_1405f79bc(uVar2);
    FUN_1447997cc(lVar1,uVar2,0x3f800000,0,0);
    *(undefined1 *)(*param_2 + 0xb0) = 7;
  }
  return;
}



// FUNCTION 14887bb78 FUN_14887bb78 body=26 status=ok
// SIG undefined FUN_14887bb78(void)

undefined8 * FUN_14887bb78(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14887bb9a FUN_14887bb9a body=74 status=ok
// SIG undefined FUN_14887bb9a(void)

undefined8 FUN_14887bb9a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x378);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887bbea FUN_14887bbea body=1165 status=ok
// SIG undefined FUN_14887bbea(void)

ulonglong FUN_14887bbea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (lVar7 == 0) {
    uVar6 = FUN_140490c9a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x30) = lVar7;
  }
  plVar11 = (longlong *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x38);
  if (lVar10 == 0) {
    if ((lVar7 != 0) && (*plVar11 != 0)) {
      plVar8 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar10 = FUN_144aff482(uVar6,plVar11);
        *(longlong *)(param_1 + 0x38) = lVar10;
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x30);
          goto LAB_14887bc3e;
        }
      }
    }
  }
  else {
LAB_14887bc3e:
    if (lVar7 == 0) {
      uVar6 = FUN_140490c9a();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x30) = lVar7;
      lVar10 = *(longlong *)(param_1 + 0x38);
      if (((lVar10 == 0) && (lVar10 = 0, lVar7 != 0)) && (*plVar11 != 0)) {
        plVar8 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar10 = FUN_144aff482(uVar6,plVar11);
        }
        *(longlong *)(param_1 + 0x38) = lVar10;
      }
    }
    if (*(char *)(lVar10 + 0x18) == '\x04') {
      cVar3 = FUN_144729dda();
      if (cVar3 == '\0') {
LAB_14887bf09:
        local_40 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
LAB_14887bf1f:
        bVar2 = true;
        bVar4 = 0;
      }
      else {
        FUN_14479d2ce(param_2 + 4);
        plVar8 = (longlong *)FUN_1406f625c();
        if (plVar8 == (longlong *)0x0) goto LAB_14887bf09;
        lVar7 = (**(code **)(*plVar8 + 0x2b0))();
        local_40 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        if (lVar7 == 0) goto LAB_14887bf1f;
        lVar7 = *(longlong *)(param_1 + 0x30);
        if (lVar7 == 0) {
          FUN_140490c9a();
          lVar7 = FUN_14477b664();
          *(longlong *)(param_1 + 0x30) = lVar7;
        }
        lVar10 = *(longlong *)(param_1 + 0x38);
        if (lVar10 == 0) {
          if ((lVar7 != 0) && (*plVar11 != 0)) {
            plVar1 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(), cVar3 == '\0')) {
              *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar10 = FUN_144aff482(uVar6,plVar11);
              *(longlong *)(param_1 + 0x38) = lVar10;
              if (lVar10 != 0) {
                lVar7 = *(longlong *)(param_1 + 0x30);
                goto LAB_14887bcd3;
              }
            }
          }
          goto LAB_14887bf1f;
        }
LAB_14887bcd3:
        if (lVar7 == 0) {
          uVar6 = FUN_140490c9a();
          lVar7 = FUN_14477b664(uVar6);
          *(longlong *)(param_1 + 0x30) = lVar7;
          lVar10 = *(longlong *)(param_1 + 0x38);
          if (((lVar10 == 0) && (lVar10 = 0, lVar7 != 0)) && (*plVar11 != 0)) {
            plVar1 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              lVar10 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar10 = FUN_144aff482(uVar6,plVar11);
            }
            *(longlong *)(param_1 + 0x38) = lVar10;
          }
        }
        local_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        local_88 = 0;
        uVar6 = FUN_140490c9a();
        uVar6 = FUN_14477b664(uVar6);
        uStack_90 = (undefined4)uVar6;
        uStack_8c = (undefined4)((ulonglong)uVar6 >> 0x20);
        lVar7 = FUN_140490c9a();
        uVar6 = FUN_140490c9a();
        FUN_1402d1bfa(&local_80,uVar6,lVar10);
        if ((longlong *)CONCAT44(uStack_94,local_98) != local_80) {
          local_88 = 0;
        }
        local_98 = (uint)local_80;
        uStack_94 = (undefined4)((ulonglong)local_80 >> 0x20);
        lVar9 = FUN_140490c9a();
        if (lVar7 == 0) {
LAB_14887bd64:
          lVar9 = lVar7;
        }
        else if (lVar9 == 0) {
          lVar9 = 0;
        }
        else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 == lVar9 + 0x30)) goto LAB_14887bd64;
        if (CONCAT44(uStack_8c,uStack_90) != lVar9) {
          local_88 = 0;
        }
        uVar6 = FUN_14477b664(lVar9);
        lVar7 = FUN_14477b664(uVar6);
        uStack_90 = (undefined4)lVar7;
        uStack_8c = (undefined4)((ulonglong)lVar7 >> 0x20);
        if (lVar7 != 0 && local_80 != (longlong *)0x0) {
          local_88 = lVar10;
        }
        bVar4 = FUN_140490d6e(param_2,&local_98,&local_78);
        plVar11 = local_80;
        if ((local_40 == 4 & bVar4) == 1) {
          local_98 = local_98 & 0xffffff00;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          lVar7 = FUN_1412d7211(plVar8);
          bVar2 = true;
          bVar4 = local_40;
          if (lVar7 != 0) {
            FUN_14039fc7b(&local_78,&local_98,lVar7,0);
            bVar4 = local_40;
            if ((char)local_98 == '\x01') {
              uVar5 = FUN_1412b46ca(&local_98);
              plVar11 = (longlong *)((ulonglong)uVar5 ^ 1);
              bVar2 = false;
              bVar4 = local_40;
            }
          }
        }
        else {
          bVar2 = true;
          bVar4 = local_40;
        }
      }
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[bVar4])(&local_78);
      if (!bVar2) goto LAB_14887bf3d;
    }
  }
  plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),2);
LAB_14887bf3d:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar11 & 0xffffffff;
}



// FUNCTION 14887c078 FUN_14887c078 body=1898 status=ok
// SIG undefined FUN_14887c078(void)

ulonglong FUN_14887c078(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  byte local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    uVar5 = FUN_140490c9a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x30) = lVar6;
  }
  plVar10 = (longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((lVar6 != 0) && (*plVar10 != 0)) {
      unaff_RBX = *(longlong **)(lVar6 + 0xb8);
      plVar12 = plVar1;
      if ((unaff_RBX == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*unaff_RBX + 0x108))(unaff_RBX), cVar3 == '\0')) {
LAB_14887c74a:
        *plVar12 = 0;
      }
      else {
        uVar5 = (**(code **)(*unaff_RBX + 0x110))(unaff_RBX);
        lVar6 = FUN_144aff482(uVar5);
        *plVar1 = lVar6;
        if (lVar6 != 0) goto LAB_14887c0d0;
      }
    }
  }
  else {
LAB_14887c0d0:
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (lVar6 == 0) {
      uVar5 = FUN_140490c9a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x48) = lVar6;
    }
    unaff_RBX = (longlong *)(param_1 + 0x40);
    plVar12 = (longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((lVar6 != 0) && (*unaff_RBX != 0)) {
        plVar7 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) goto LAB_14887c74a;
        uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar6 = FUN_144aff482(uVar5);
        *plVar12 = lVar6;
        if (lVar6 != 0) goto LAB_14887c0fd;
      }
    }
    else {
LAB_14887c0fd:
      lVar6 = *(longlong *)(param_1 + 0x30);
      if (lVar6 == 0) {
        uVar5 = FUN_140490c9a();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x30) = lVar6;
      }
      lVar11 = *plVar1;
      if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*plVar10 != 0)) {
        plVar7 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
          lVar11 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar11 = FUN_144aff482(uVar5);
        }
        *plVar1 = lVar11;
      }
      if (*(char *)(lVar11 + 0x18) == '\x04') {
        lVar6 = *(longlong *)(param_1 + 0x48);
        if (lVar6 == 0) {
          uVar5 = FUN_140490c9a();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x48) = lVar6;
        }
        lVar11 = *plVar12;
        if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*unaff_RBX != 0)) {
          plVar7 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar7 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
            lVar11 = FUN_144aff482(uVar5);
          }
          *plVar12 = lVar11;
        }
        if (*(char *)(lVar11 + 0x18) == '\x02') {
          cVar3 = FUN_144729dda();
          if (cVar3 == '\0') {
LAB_14887c320:
            bVar14 = false;
            plVar7 = (longlong *)0x0;
            bVar13 = false;
          }
          else {
            FUN_14479d2ce(param_2 + 4);
            plVar7 = (longlong *)FUN_1406f625c();
            if (plVar7 == (longlong *)0x0) goto LAB_14887c320;
            lVar6 = (**(code **)(*plVar7 + 0x2b0))(plVar7);
            bVar13 = lVar6 != 0;
            bVar14 = true;
          }
          local_50 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_90 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          if ((bVar14) && (bVar13)) {
            lVar6 = *(longlong *)(param_1 + 0x30);
            if (lVar6 == 0) {
              uVar5 = FUN_140490c9a();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(param_1 + 0x30) = lVar6;
            }
            lVar11 = *plVar1;
            if (lVar11 == 0) {
              if ((lVar6 != 0) && (*plVar10 != 0)) {
                plVar2 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                  *plVar1 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar11 = FUN_144aff482(uVar5,plVar10);
                  *plVar1 = lVar11;
                  if (lVar11 != 0) {
                    lVar6 = *(longlong *)(param_1 + 0x30);
                    goto LAB_14887c38b;
                  }
                }
              }
              goto LAB_14887c771;
            }
LAB_14887c38b:
            if (lVar6 == 0) {
              uVar5 = FUN_140490c9a();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(param_1 + 0x30) = lVar6;
              lVar11 = *(longlong *)(param_1 + 0x38);
              if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*plVar10 != 0)) {
                plVar2 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                  lVar11 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar11 = FUN_144aff482(uVar5,plVar10);
                }
                *plVar1 = lVar11;
              }
            }
            local_e8 = 0;
            uStack_e4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0;
            local_d8 = 0;
            uVar5 = FUN_140490c9a();
            uVar5 = FUN_14477b664(uVar5);
            uStack_e0 = (undefined4)uVar5;
            uStack_dc = (undefined4)((ulonglong)uVar5 >> 0x20);
            lVar8 = FUN_140490c9a();
            uVar5 = FUN_140490c9a();
            FUN_1402d1bfa(&local_d0,uVar5,lVar11);
            lVar6 = local_d0;
            if (CONCAT44(uStack_e4,local_e8) != local_d0) {
              local_d8 = 0;
            }
            local_e8 = (uint)local_d0;
            uStack_e4 = (undefined4)((ulonglong)local_d0 >> 0x20);
            lVar9 = FUN_140490c9a();
            if (lVar8 == 0) {
LAB_14887c41e:
              lVar9 = lVar8;
            }
            else if (lVar9 == 0) {
              lVar9 = 0;
            }
            else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30)) goto LAB_14887c41e;
            if (CONCAT44(uStack_dc,uStack_e0) != lVar9) {
              local_d8 = 0;
            }
            uVar5 = FUN_14477b664(lVar9);
            lVar8 = FUN_14477b664(uVar5);
            uStack_e0 = (undefined4)lVar8;
            uStack_dc = (undefined4)((ulonglong)lVar8 >> 0x20);
            if (lVar8 != 0 && lVar6 != 0) {
              local_d8 = lVar11;
            }
            cVar3 = FUN_140490d6e(param_2,&local_e8,&local_88);
            if (cVar3 == '\0') goto LAB_14887c771;
            lVar6 = *(longlong *)(param_1 + 0x48);
            if (lVar6 == 0) {
              uVar5 = FUN_140490c9a();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(param_1 + 0x48) = lVar6;
            }
            lVar11 = *plVar12;
            if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*unaff_RBX != 0)) {
              plVar10 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar10 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
                lVar11 = FUN_144aff482(uVar5,unaff_RBX);
              }
              *plVar12 = lVar11;
            }
            local_108 = 0;
            plStack_100 = (longlong *)0x0;
            local_f8 = 0;
            uVar5 = FUN_140490c9a();
            plStack_100 = (longlong *)FUN_14477b664(uVar5);
            unaff_RBX = (longlong *)FUN_140490c9a();
            uVar5 = FUN_140490c9a();
            FUN_1402d1bfa(&local_d0,uVar5,lVar11);
            if (local_108 != local_d0) {
              local_f8 = 0;
            }
            local_108 = local_d0;
            plVar10 = (longlong *)FUN_140490c9a();
            if (unaff_RBX == (longlong *)0x0) {
LAB_14887c527:
              plVar10 = unaff_RBX;
            }
            else if (plVar10 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
            }
            else if (((int)plVar10[7] <= (int)unaff_RBX[7]) &&
                    (*(longlong **)(unaff_RBX[6] + (longlong)(int)plVar10[7] * 8) == plVar10 + 6))
            goto LAB_14887c527;
            if (plStack_100 != plVar10) {
              local_f8 = 0;
            }
            uVar5 = FUN_14477b664(plVar10);
            plStack_100 = (longlong *)FUN_14477b664(uVar5);
            if (plStack_100 != (longlong *)0x0 && local_d0 != 0) {
              local_f8 = lVar11;
            }
            cVar3 = FUN_140490d6e(param_2,&local_108,&local_c8);
            bVar14 = true;
            if (((cVar3 != '\0') && (local_50 == 4)) && (local_90 == 2)) {
              local_e8 = local_e8 & 0xffffff00;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_dc = 0;
              lVar6 = FUN_1412d7211(plVar7);
              if (lVar6 != 0) {
                FUN_14039fc7b(&local_88,&local_e8,lVar6,0);
              }
              bVar14 = (char)local_e8 != '\x02';
              if (!bVar14) {
                iVar4 = FUN_140e195fa(&local_e8);
                unaff_RBX = (longlong *)
                            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                     (float)iVar4 <= (float)local_c8);
              }
            }
          }
          else {
LAB_14887c771:
            bVar14 = true;
          }
          (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])();
          (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_50])();
          if (!bVar14) goto LAB_14887c79d;
        }
      }
    }
  }
  unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
LAB_14887c79d:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 14887c7e4 FUN_14887c7e4 body=597 status=ok
// SIG undefined FUN_14887c7e4(void)

ulonglong FUN_14887c7e4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  char local_b8 [4];
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a8 [7];
  byte local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_30;
  ulonglong local_20;
  undefined7 uVar9;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_14887ca3a();
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,2);
  if (cVar1 != '\0') {
    local_30 = 0;
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    cVar1 = FUN_140490d6e(param_2,param_1 + 0x28);
    uVar8 = CONCAT71(uVar9,2);
    if ((cVar1 != '\0') && (cVar1 = FUN_140490d6e(param_2,param_1 + 0x40,local_a8), cVar1 != '\0'))
    {
      lVar3 = FUN_140316ff8();
      plVar5 = local_68;
      if (*(int *)(lVar3 + 0x490) != *(int *)(lVar3 + 0x4bc)) {
        uVar2 = (uint)((ulonglong)local_a8[0] >> 0x10);
        uVar11 = (uint)local_a8[0] & 0xffff;
        lVar7 = lVar3 + 0x4c0;
        if (*(longlong *)(lVar3 + 0x4c8) != 0) {
          lVar7 = *(longlong *)(lVar3 + 0x4c8);
        }
        iVar12 = *(int *)(lVar7 + (ulonglong)
                                  (*(int *)(lVar3 + 0x4d0) - 1U &
                                  (int)((ulonglong)local_a8[0] >> 0x20) +
                                  ((uint)local_a8[0] << 0x10 | uVar11) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar12 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x488) + (longlong)iVar12 * 0x14);
            if (*plVar6 == local_a8[0]) goto LAB_14887c878;
            iVar12 = *(int *)((longlong)plVar6 + 0xc);
          } while (iVar12 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_14887c878:
      plVar10 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      if (local_68 != (longlong *)0x0 && local_30 == 1) {
        uVar4 = FUN_140427846();
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
        if (plVar5 != (longlong *)0x0) {
          uVar4 = FUN_140427846();
          plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
          if ((((plVar6 != (longlong *)0x0 && plVar5 != plVar6) &&
               (lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6), plVar10 != (longlong *)0x0)) &&
              (lVar3 != 0)) && (*(char *)(lVar3 + 0xd) == '\x02')) {
            local_b8[0] = '\0';
            local_b4 = 0;
            local_ac = 0;
            cVar1 = FUN_140459d0c(lVar3,&DAT_14cb7e438);
            if (((cVar1 != '\0') && (local_b8[0] == '\x02')) &&
               (uVar2 = FUN_140e195fa(local_b8), uVar2 < 4)) {
              uVar8 = CONCAT71(uVar9,(char)*plVar10 != (char)uVar2);
            }
          }
        }
      }
    }
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_70])();
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_30])();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14887ca3a FUN_14887ca3a body=617 status=ok
// SIG undefined FUN_14887ca3a(void)

bool FUN_14887ca3a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar4 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return false;
    }
    if (*plVar1 == 0) {
      return false;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      return false;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x38) = lVar6;
    if (lVar6 == 0) {
      return false;
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x30) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x38);
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
      *(longlong *)(param_1 + 0x38) = lVar6;
    }
  }
  if (*(char *)(lVar6 + 0x18) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x48);
    if (lVar5 == 0) {
      uVar4 = FUN_140490c9a();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x48) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 0x40);
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (lVar6 != 0) {
LAB_14887caaf:
      if (lVar5 == 0) {
        uVar4 = FUN_140490c9a();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x48) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x50);
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
          *(longlong *)(param_1 + 0x50) = lVar6;
        }
      }
      return *(char *)(lVar6 + 0x18) == '\x05';
    }
    if (lVar5 == 0) {
      return false;
    }
    if (*plVar1 == 0) {
      return false;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x50) = lVar6;
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x48);
        goto LAB_14887caaf;
      }
    }
  }
  return false;
}



// FUNCTION 14887cca4 FUN_14887cca4 body=1363 status=ok
// SIG undefined FUN_14887cca4(void)

ulonglong FUN_14887cca4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  longlong lVar16;
  undefined8 *puVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 *puStack_110;
  longlong local_108;
  longlong *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  byte local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar11 = param_1[6];
  if (lVar11 == 0) {
    uVar10 = FUN_140490c9a();
    lVar11 = FUN_14477b664(uVar10);
    param_1[6] = lVar11;
  }
  plVar1 = param_1 + 5;
  lVar14 = param_1[7];
  if (lVar14 == 0) {
    if ((lVar11 != 0) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
        param_1[7] = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar14 = FUN_144aff482(uVar10,plVar1);
        param_1[7] = lVar14;
        if (lVar14 != 0) {
          lVar11 = param_1[6];
          goto LAB_14887cd1e;
        }
      }
    }
  }
  else {
LAB_14887cd1e:
    if (lVar11 == 0) {
      uVar10 = FUN_140490c9a();
      lVar11 = FUN_14477b664(uVar10);
      param_1[6] = lVar11;
      lVar14 = param_1[7];
      if (((lVar14 == 0) && (lVar14 = 0, lVar11 != 0)) && (*plVar1 != 0)) {
        plVar4 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
          lVar14 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar14 = FUN_144aff482(uVar10,plVar1);
        }
        param_1[7] = lVar14;
      }
    }
    if (*(char *)(lVar14 + 0x18) == '\x01') {
      local_a0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      lVar11 = param_1[6];
      if (lVar11 == 0) {
        uVar10 = FUN_140490c9a();
        lVar11 = FUN_14477b664(uVar10);
        param_1[6] = lVar11;
        lVar14 = param_1[7];
      }
      if (lVar14 == 0) {
        param_1[7] = 0;
        lVar14 = 0;
        if ((lVar11 != 0) && (param_1[5] != 0)) {
          plVar4 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar14 = FUN_144aff482(uVar10,plVar1);
          }
          param_1[7] = lVar14;
        }
      }
      local_118 = 0;
      puStack_110 = (undefined8 *)0x0;
      local_108 = 0;
      uVar10 = FUN_140490c9a();
      puStack_110 = (undefined8 *)FUN_14477b664(uVar10);
      lVar12 = FUN_140490c9a();
      uVar10 = FUN_140490c9a();
      FUN_1402d1bfa(&local_e0,uVar10,lVar14);
      lVar11 = local_e0;
      if (local_118 != local_e0) {
        local_108 = 0;
      }
      local_118 = local_e0;
      lVar13 = FUN_140490c9a();
      if (lVar12 == 0) {
LAB_14887cdfe:
        lVar13 = lVar12;
      }
      else if (lVar13 == 0) {
        lVar13 = 0;
      }
      else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
               == lVar13 + 0x30)) goto LAB_14887cdfe;
      if (puStack_110 != (undefined8 *)lVar13) {
        local_108 = 0;
      }
      uVar10 = FUN_14477b664(lVar13);
      puStack_110 = (undefined8 *)FUN_14477b664(uVar10);
      if (puStack_110 != (undefined8 *)0x0 && lVar11 != 0) {
        local_108 = lVar14;
      }
      cVar8 = FUN_140490d6e(param_2,&local_118,&local_d8);
      lVar11 = local_d8;
      bVar7 = true;
      if ((cVar8 != '\0') && (local_d8 != 0 && local_a0 == 1)) {
        lVar14 = FUN_144a6c4d8();
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30 &&
            (lVar14 = FUN_1447210f0(lVar11), lVar14 != 0)))) {
          lVar14 = *(longlong *)(lVar11 + 0x1c8);
          if (lVar14 == 0) {
            pdVar15 = (double *)&DAT_14c8464e0;
            uVar19 = SUB84(DAT_14c8464f0,0);
            uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar19 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
            uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
            pdVar15 = (double *)(lVar14 + 0x260);
          }
          dVar5 = *pdVar15;
          dVar6 = pdVar15[1];
          lVar14 = FUN_140316ff8();
          fVar2 = *(float *)(lVar14 + 0x50);
          lVar14 = FUN_140316ff8();
          fVar3 = *(float *)(lVar14 + 0x50);
          local_e0 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_14021d432(&local_118,&DAT_14cb71320);
          lVar12 = local_f0;
          lVar14 = local_108;
          LOCK();
          *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
          UNLOCK();
          param_1 = (longlong *)CONCAT71((int7)((ulonglong)&local_118 >> 8),1);
          if (puStack_110 != local_f8) {
            puVar17 = puStack_110;
            do {
              lVar13 = puVar17[2];
              if (((lVar11 != lVar13) && (lVar16 = FUN_14492b4b4(lVar11), lVar16 != 0)) &&
                 (iVar9 = FUN_14887ed6e(lVar16,lVar13), iVar9 == 0)) {
                lVar13 = *(longlong *)(lVar13 + 0x1c8);
                if (lVar13 == 0) {
                  pdVar15 = (double *)&DAT_14c8464e0;
                  dVar18 = DAT_14c8464f0;
                }
                else {
                  pdVar15 = (double *)(lVar13 + 0x260);
                  dVar18 = *(double *)(lVar13 + 0x270);
                }
                dVar18 = dVar18 - (double)CONCAT44(uVar20,uVar19);
                if (dVar18 * dVar18 +
                    (*pdVar15 - dVar5) * (*pdVar15 - dVar5) +
                    (pdVar15[1] - dVar6) * (pdVar15[1] - dVar6) < (double)(fVar2 * fVar3)) {
                  param_1 = (longlong *)0x0;
                  break;
                }
              }
              for (puVar17 = (undefined8 *)FUN_144b39bc4(*puVar17); puVar17 != (undefined8 *)0x0;
                  puVar17 = (undefined8 *)FUN_144b39bc4(*puVar17)) {
                lVar13 = FUN_1447210f0(puVar17[2]);
                if (lVar13 == *local_100) goto LAB_14887d0e4;
              }
              puVar17 = (undefined8 *)0x0;
LAB_14887d0e4:
            } while (puVar17 != local_f8);
          }
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + -1;
          UNLOCK();
          bVar7 = false;
        }
      }
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_a0])();
      if (!bVar7) goto LAB_14887d191;
    }
  }
  param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),2);
LAB_14887d191:
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return (ulonglong)param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887d1f8 FUN_14887d1f8 body=879 status=ok
// SIG undefined FUN_14887d1f8(void)

undefined8 *
FUN_14887d1f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  int iVar15;
  float fVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = FUN_14049cbd6(param_4);
  if (lVar9 == 0) {
    *(undefined2 *)(param_2 + 3) = 0;
    uVar6 = 0;
    goto LAB_14887d36a;
  }
  lVar10 = FUN_140fecfdc(param_4);
  if (lVar10 == 0) {
    lVar10 = FUN_1470da032(param_4);
    if (lVar10 == 0) {
      lVar10 = FUN_1447262c2(param_4);
      if (lVar10 != 0) {
        uVar12 = FUN_144a6c4d8();
        lVar10 = FUN_144a78ede(lVar10,uVar12);
        goto LAB_14887d3d6;
      }
    }
    else {
      lVar10 = *(longlong *)(lVar10 + 0xa8);
LAB_14887d3d6:
      if (lVar10 != 0) goto LAB_14887d263;
    }
    pdVar11 = (double *)&DAT_14c8464e0;
    uVar14 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    uVar18 = SUB84(DAT_14c8464f0,0);
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    lVar10 = 0;
  }
  else {
LAB_14887d263:
    lVar13 = *(longlong *)(lVar10 + 0x1c8);
    if (lVar13 == 0) {
      pdVar11 = (double *)&DAT_14c8464e0;
      uVar18 = SUB84(DAT_14c8464f0,0);
      uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar18 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
      pdVar11 = (double *)(lVar13 + 0x260);
    }
    uVar14 = 0;
  }
  dVar4 = *pdVar11;
  dVar5 = pdVar11[1];
  lVar9 = FUN_140115352(lVar9);
  if (lVar9 == 0) {
LAB_14887d351:
    lVar9 = 0;
    lVar13 = local_d8;
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x40);
    iVar15 = 0;
    if (lVar9 == 0) goto LAB_14887d351;
    plVar1 = (longlong *)(lVar9 + 0x158);
    lVar2 = lVar9 + 0x168;
    local_a0 = 0x100000000;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar2;
    if (*(int *)(lVar9 + 0x180) != 0) {
      FUN_1449c0562(&local_a0);
      iVar15 = *(int *)(lVar9 + 0x180);
    }
    local_b0 = local_90;
    uVar12 = local_b0;
    local_a8 = local_88;
    local_a4 = local_84;
    local_c0 = local_a0;
    local_b8 = local_98;
    local_b0._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    local_c8 = plVar1;
    local_b0 = uVar12;
    if ((local_b0._4_4_ == iVar15) && (local_98 == lVar2)) {
      local_d8 = 0;
      lVar9 = local_d8;
      lVar13 = local_d8;
    }
    else {
      fVar20 = 3.4028235e+38;
      local_d8 = 0;
      iVar8 = local_b0._4_4_;
      local_cc = uVar14;
      do {
        lVar9 = *local_c8;
        lVar13 = (longlong)iVar8 * 0x50;
        if ((((*(longlong *)(lVar9 + 0x18 + lVar13) != 0) &&
             (cVar7 = FUN_144729dda(lVar13 + lVar9 + 0x10), cVar7 != '\0')) &&
            (plVar3 = *(longlong **)(lVar13 + lVar9 + 0x18), plVar3 != (longlong *)0x0)) &&
           (lVar9 = (**(code **)(*plVar3 + 0x18))(), lVar9 != 0)) {
          lVar13 = lVar9;
          if ((char)local_cc != '\0') break;
          if (lVar10 != lVar9) {
            lVar13 = *(longlong *)(lVar9 + 0x1c8);
            if (lVar13 == 0) {
              pdVar11 = (double *)&DAT_14c8464e0;
              dVar17 = DAT_14c8464f0;
            }
            else {
              pdVar11 = (double *)(lVar13 + 0x260);
              dVar17 = *(double *)(lVar13 + 0x270);
            }
            dVar17 = dVar17 - (double)CONCAT44(uVar19,uVar18);
            fVar16 = (float)(dVar17 * dVar17 +
                            (*pdVar11 - dVar4) * (*pdVar11 - dVar4) +
                            (pdVar11[1] - dVar5) * (pdVar11[1] - dVar5));
            if (fVar16 < fVar20) {
              fVar20 = fVar16;
              local_d8 = lVar9;
            }
          }
        }
        local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~local_c0._4_4_);
        FUN_1449c0562(&local_c0);
        lVar9 = local_d8;
        iVar8 = local_b0._4_4_;
        lVar13 = local_d8;
      } while (local_c8 != plVar1 || (local_b8 != lVar2 || local_b0._4_4_ != iVar15));
    }
  }
  local_d8 = lVar13;
  *(undefined2 *)(param_2 + 3) = 8;
  *param_2 = 0;
  FUN_14485c47a(param_2,lVar9);
  uVar6 = 7;
LAB_14887d36a:
  *(undefined1 *)(param_2 + 4) = uVar6;
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887d568 FUN_14887d568 body=277 status=ok
// SIG undefined FUN_14887d568(void)

undefined8 * FUN_14887d568(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14043db3a();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*param_3 == 0)) goto LAB_14887d60a;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_3[2] = 0;
      goto LAB_14887d60a;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar4,param_3);
    param_3[2] = lVar6;
    if (lVar6 == 0) goto LAB_14887d60a;
  }
  if (*(char *)(lVar6 + 0x19) == '\x01') {
    FUN_1457ea37e(param_1,param_2,param_3);
    return param_2;
  }
LAB_14887d60a:
  uVar4 = FUN_14479d2ce(param_1 + 0x1a8);
  lVar5 = FUN_1457ea3fc(uVar4);
  if (lVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar6 = FUN_14479d2ce(param_1 + 0x1a8);
    if ((lVar6 != 0) && (iVar3 = FUN_14490d72a(lVar6), iVar3 == 3 && param_4 == '\0')) {
      FUN_1457ea61e(lVar5,param_2,param_3);
      return param_2;
    }
    FUN_14887b98a(lVar5,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 14887d67e FUN_14887d67e body=38 status=ok
// SIG undefined FUN_14887d67e(void)

undefined8 FUN_14887d67e(undefined8 param_1,int param_2)

{
  FUN_148678946();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14887d6d0 FUN_14887d6d0 body=29 status=ok
// SIG undefined FUN_14887d6d0(void)

undefined8 FUN_14887d6d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14887d6ee FUN_14887d6ee body=83 status=ok
// SIG undefined FUN_14887d6ee(void)

void FUN_14887d6ee(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa910;
  uVar2 = (ushort)DAT_14c9aa910;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa9a8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa910);
  }
  else {
    (*DAT_14c9aa9a8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x20;
  return;
}



// FUNCTION 14887d742 FUN_14887d742 body=83 status=ok
// SIG undefined FUN_14887d742(void)

void FUN_14887d742(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa910;
  uVar2 = (ushort)DAT_14c9aa910;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa9a8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa910);
  }
  else {
    (*DAT_14c9aa9a8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x20;
  return;
}



// FUNCTION 14887d796 FUN_14887d796 body=81 status=ok
// SIG undefined FUN_14887d796(void)

void FUN_14887d796(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 14887d7fe FUN_14887d7fe body=283 status=ok
// SIG undefined FUN_14887d7fe(void)

undefined8 FUN_14887d7fe(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 14887d942 FUN_14887d942 body=59 status=ok
// SIG undefined FUN_14887d942(void)

undefined8 FUN_14887d942(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887d9e0 FUN_14887d9e0 body=85 status=ok
// SIG undefined FUN_14887d9e0(void)

void FUN_14887d9e0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 14887da36 FUN_14887da36 body=381 status=ok
// SIG undefined FUN_14887da36(void)

longlong * FUN_14887da36(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14887db41:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b406c10;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1488769cc;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14887db41;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b406c10;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1488769cc;
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
  return param_1;
}



// FUNCTION 14887dbb4 FUN_14887dbb4 body=64 status=ok
// SIG undefined FUN_14887dbb4(void)

undefined8 * FUN_14887dbb4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b406c10;
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



// FUNCTION 14887dbf8 FUN_14887dbf8 body=81 status=ok
// SIG undefined FUN_14887dbf8(void)

undefined8 FUN_14887dbf8(longlong param_1)

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



// FUNCTION 14887dc50 FUN_14887dc50 body=89 status=ok
// SIG undefined FUN_14887dc50(void)

bool FUN_14887dc50(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14887dc9b;
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
LAB_14887dc9b:
  return lVar6 == param_2;
}



// FUNCTION 14887dcc6 FUN_14887dcc6 body=118 status=ok
// SIG undefined FUN_14887dcc6(void)

void FUN_14887dcc6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b406c10;
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



// FUNCTION 14887dd3c FUN_14887dd3c body=118 status=ok
// SIG undefined FUN_14887dd3c(void)

void FUN_14887dd3c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b406c10;
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



// FUNCTION 14887ddb2 FUN_14887ddb2 body=156 status=ok
// SIG undefined FUN_14887ddb2(void)

void FUN_14887ddb2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b406c10;
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
                    /* WARNING: Could not recover jumptable at 0x00014887de3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14887de4e FUN_14887de4e body=94 status=ok
// SIG undefined FUN_14887de4e(void)

void FUN_14887de4e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014887de96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014887dea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14887deac FUN_14887deac body=93 status=ok
// SIG undefined FUN_14887deac(void)

ulonglong FUN_14887deac(longlong param_1)

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
LAB_14887defe:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14887defe;
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



// FUNCTION 14887df0e FUN_14887df0e body=81 status=ok
// SIG undefined FUN_14887df0e(void)

undefined8 FUN_14887df0e(longlong param_1)

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



// FUNCTION 14887df66 FUN_14887df66 body=89 status=ok
// SIG undefined FUN_14887df66(void)

bool FUN_14887df66(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14887dfb1;
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
LAB_14887dfb1:
  return lVar6 == param_2;
}



// FUNCTION 14887dfc0 FUN_14887dfc0 body=118 status=ok
// SIG undefined FUN_14887dfc0(void)

void FUN_14887dfc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b406cf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b406c80;
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



// FUNCTION 14887e036 FUN_14887e036 body=118 status=ok
// SIG undefined FUN_14887e036(void)

void FUN_14887e036(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b406cf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b406c80;
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



// FUNCTION 14887e0ac FUN_14887e0ac body=156 status=ok
// SIG undefined FUN_14887e0ac(void)

void FUN_14887e0ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b406cf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b406c80;
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
                    /* WARNING: Could not recover jumptable at 0x00014887e138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14887e148 FUN_14887e148 body=98 status=ok
// SIG undefined FUN_14887e148(void)

void FUN_14887e148(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014887e191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014887e1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14887e1ac FUN_14887e1ac body=209 status=ok
// SIG undefined FUN_14887e1ac(void)

int FUN_14887e1ac(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 14887e27e FUN_14887e27e body=107 status=ok
// SIG undefined FUN_14887e27e(void)

void FUN_14887e27e(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cb7ea58;
  if (param_1 <= (int)DAT_14cb7ea58) {
    iVar2 = 6;
    if (6 < DAT_14cb7ea58) {
      lVar5 = (longlong)(int)DAT_14cb7ea58;
      if (6 < DAT_14cb7ea5c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cb7ea5c = iVar2;
    FUN_14887e2ea(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb7ea58);
}



// FUNCTION 14887e2ea FUN_14887e2ea body=142 status=ok
// SIG undefined FUN_14887e2ea(void)

void FUN_14887e2ea(int param_1,uint param_2)

{
  if (param_2 < 7) {
    if (DAT_14cb7ea50 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb7ea20,DAT_14cb7ea50,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb7ea50 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb7ea50,0,param_2,8);
    memmove(DAT_14cb7ea50,&DAT_14cb7ea20,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cb7ea50,param_1,param_2,8);
  return;
}



// FUNCTION 14887e378 FUN_14887e378 body=31 status=ok
// SIG undefined FUN_14887e378(void)

undefined8 FUN_14887e378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14887e3b2 FUN_14887e3b2 body=101 status=ok
// SIG undefined FUN_14887e3b2(void)

void FUN_14887e3b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403ee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b406d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14887e418 FUN_14887e418 body=101 status=ok
// SIG undefined FUN_14887e418(void)

void FUN_14887e418(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403ee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b406d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14887e47e FUN_14887e47e body=134 status=ok
// SIG undefined FUN_14887e47e(void)

void FUN_14887e47e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403ee0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b406d80;
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
                    /* WARNING: Could not recover jumptable at 0x00014887e4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14887e504 FUN_14887e504 body=104 status=ok
// SIG undefined FUN_14887e504(void)

void FUN_14887e504(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887e56e FUN_14887e56e body=114 status=ok
// SIG undefined FUN_14887e56e(void)

void FUN_14887e56e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 14887e5fa FUN_14887e5fa body=29 status=ok
// SIG undefined FUN_14887e5fa(void)

bool FUN_14887e5fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 14887e618 FUN_14887e618 body=114 status=ok
// SIG undefined FUN_14887e618(void)

void FUN_14887e618(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b406e80;
  FUN_1418474da(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b406e10;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  return;
}



// FUNCTION 14887e68a FUN_14887e68a body=150 status=ok
// SIG undefined FUN_14887e68a(void)

void FUN_14887e68a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b406e80;
  FUN_1418474da(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b406e10;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x00014887e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14887e720 FUN_14887e720 body=84 status=ok
// SIG undefined FUN_14887e720(void)

void FUN_14887e720(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14479d2ce(param_1 + 0x28);
  FUN_140fbad12(param_1 + 8,param_1 + 0x30);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887e778 FUN_14887e778 body=128 status=ok
// SIG undefined FUN_14887e778(void)

void FUN_14887e778(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 14887e7f8 FUN_14887e7f8 body=114 status=ok
// SIG undefined FUN_14887e7f8(void)

void FUN_14887e7f8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14887e86a FUN_14887e86a body=31 status=ok
// SIG undefined FUN_14887e86a(void)

undefined8 FUN_14887e86a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14887e8a4 FUN_14887e8a4 body=29 status=ok
// SIG undefined FUN_14887e8a4(void)

bool FUN_14887e8a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14887e8c2 FUN_14887e8c2 body=26 status=ok
// SIG undefined FUN_14887e8c2(void)

bool FUN_14887e8c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14887e8dc FUN_14887e8dc body=101 status=ok
// SIG undefined FUN_14887e8dc(void)

void FUN_14887e8dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e79d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b406f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14887e942 FUN_14887e942 body=101 status=ok
// SIG undefined FUN_14887e942(void)

void FUN_14887e942(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e79d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b406f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14887e9a8 FUN_14887e9a8 body=134 status=ok
// SIG undefined FUN_14887e9a8(void)

void FUN_14887e9a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e79d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b406f10;
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
                    /* WARNING: Could not recover jumptable at 0x00014887ea1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14887ea2e FUN_14887ea2e body=96 status=ok
// SIG undefined FUN_14887ea2e(void)

void FUN_14887ea2e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_14479d2ce(param_1 + 0x18);
  FUN_145ce4902(param_1 + 0x20,&local_28,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887ea90 FUN_14887ea90 body=190 status=ok
// SIG undefined FUN_14887ea90(void)

void FUN_14887ea90(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457eaf50(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 14887eb4e FUN_14887eb4e body=428 status=ok
// SIG undefined FUN_14887eb4e(void)

void FUN_14887eb4e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar8 = param_2[1];
    if (lVar8 == 0) {
      lVar8 = FUN_14043db3a();
    }
    uVar10 = *param_2;
    uVar9 = FUN_14477b664(lVar8);
    uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = (uint)((ulonglong)uVar10 >> 0x10);
    uVar13 = (uint)uVar10 & 0xffff;
    iVar5 = FUN_144a78877(((uint)uVar10 << 0x10 | uVar13) + (int)((ulonglong)uVar10 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4),uVar4 >> 0x10 ^ uVar4);
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar12 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x28);
        if (puVar1[1] == 0) {
          uVar10 = FUN_14043db3a();
          uVar10 = FUN_14477b664(uVar10);
          puVar1[1] = uVar10;
        }
        lVar8 = param_2[1];
        if (lVar8 == 0) {
          lVar8 = FUN_14043db3a();
        }
        uVar10 = *param_2;
        uVar11 = FUN_14477b664(lVar8);
        local_50 = uVar10;
        uVar6 = FUN_144a7891a(uVar11);
        local_58 = *puVar1;
        uVar10 = puVar1[1];
        uVar7 = FUN_144a7891a(uVar10);
        local_60 = &local_50;
        local_68 = uVar11;
        cVar2 = FUN_144a789b8(uVar7,uVar10,&local_58,uVar6);
        if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
        iVar5 = *(int *)(puVar1 + 4);
      } while (iVar5 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14887ed6e FUN_14887ed6e body=121 status=ok
// SIG undefined FUN_14887ed6e(void)

void FUN_14887ed6e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  }
  FUN_140154c96(local_40,param_2);
  FUN_1448618b0(param_1 + 0x20,local_40,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887ede8 FUN_14887ede8 body=125 status=ok
// SIG undefined FUN_14887ede8(void)

void FUN_14887ede8(longlong param_1,int param_2)

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
    FUN_1486681c4(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14887ee7e FUN_14887ee7e body=390 status=ok
// SIG undefined FUN_14887ee7e(void)

undefined4 * FUN_14887ee7e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98 [2];
  uint *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14031a6a2(param_1,local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  *local_90 = *(uint *)*param_3;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  FUN_1418657ac(local_90 + 6,&local_78);
  local_90[0xc] = (uint)uStack_60;
  local_90[0xd] = uStack_60._4_4_;
  local_90[0xe] = (uint)local_58;
  local_90[0xf] = local_58._4_4_;
  local_90[0x10] = (uint)uStack_50;
  local_90[0x11] = uStack_50._4_4_;
  local_90[0x12] = (uint)local_48;
  local_90[0x13] = local_48._4_4_;
  local_90[0x14] = 0xffffffff;
  local_88 = CONCAT44(local_88._4_4_,local_98[0]);
  uVar4 = *local_90;
  local_a8 = 0;
  cVar2 = FUN_14031a58e(param_1,uVar4,local_90,&local_88);
  uVar1 = (undefined4)local_88;
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
      local_90[0x15] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_90[0x14] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = (undefined4)local_88;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1456fcc82(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887f006 FUN_14887f006 body=80 status=ok
// SIG undefined FUN_14887f006(void)

void FUN_14887f006(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      lVar2 = FUN_140115352(lVar2);
      if (lVar2 != 0) {
        cVar1 = FUN_1407ae416(lVar2);
        if (cVar1 == '\0') {
          FUN_140d54314(lVar2,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14887f056 FUN_14887f056 body=80 status=ok
// SIG undefined FUN_14887f056(void)

void FUN_14887f056(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      lVar2 = FUN_140115352(lVar2);
      if (lVar2 != 0) {
        cVar1 = FUN_1407ae416(lVar2);
        if (cVar1 == '\0') {
          FUN_140d53bb4(lVar2,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14887f0a6 FUN_14887f0a6 body=172 status=ok
// SIG undefined FUN_14887f0a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14887f0a6(longlong param_1)

{
  short sVar1;
  undefined *puVar2;
  
  sVar1 = *(short *)(param_1 + 0x22);
  if ((sVar1 < 0) || (*(int *)(DAT_14cb7f870 + 0x3f8) <= (int)sVar1)) {
    puVar2 = &DAT_14cb7ed78;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7eda0) {
      FUN_144b3d300(&DAT_14cb7eda0);
      if (DAT_14cb7eda0 == -1) {
        _DAT_14cb7ed88 = 0;
        DAT_14cb7ed90 = 0;
        _DAT_14cb7ed78 = 0;
        uRam000000014cb7ed80 = 0;
        _DAT_14cb7ed98 = 0;
        atexit((_func_5014 *)&LAB_143d65b5a);
        _Init_thread_footer(&DAT_14cb7eda0);
      }
    }
  }
  else {
    puVar2 = (undefined *)((longlong)(int)sVar1 * 0x28 + *(longlong *)(DAT_14cb7f870 + 0x3f0));
  }
  return puVar2;
}



// FUNCTION 14887f152 FUN_14887f152 body=156 status=ok
// SIG undefined FUN_14887f152(void)

undefined * FUN_14887f152(longlong param_1)

{
  short sVar1;
  undefined *puVar2;
  
  sVar1 = *(short *)(param_1 + 0x22);
  if ((sVar1 < 0) || (*(int *)(DAT_14cb7f870 + 0x428) <= (int)sVar1)) {
    puVar2 = &DAT_14cb7eda8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7ede0) {
      FUN_144b3d300(&DAT_14cb7ede0);
      if (DAT_14cb7ede0 == -1) {
        puVar2 = &DAT_14cb7eda8;
        FUN_144928b90(&DAT_14cb7eda8,0);
        atexit((_func_5014 *)&LAB_143d65b6b);
        _Init_thread_footer(&DAT_14cb7ede0);
      }
    }
  }
  else {
    puVar2 = (undefined *)((longlong)(int)sVar1 * 0x38 + *(longlong *)(DAT_14cb7f870 + 0x420));
  }
  return puVar2;
}



// FUNCTION 14887f1ee FUN_14887f1ee body=162 status=ok
// SIG undefined FUN_14887f1ee(void)

undefined4 FUN_14887f1ee(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_1,&DAT_14cb7ed70);
  }
  if (((byte *)*puVar2 == (byte *)0x0) || ((*(byte *)*puVar2 & 3) == 0)) {
    uVar1 = 0;
  }
  else {
    local_38 = 0;
    lStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_28 = 0;
    FUN_148884126(puVar2,&local_48);
    uVar1 = FUN_1487fa1e4(param_2,&local_48);
    if (lStack_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887f292 FUN_14887f292 body=25 status=ok
// SIG undefined FUN_14887f292(void)

void FUN_14887f292(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014887f2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))();
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = param_2;
  uStack_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5cd08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&uStack_20);
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887f2ac FUN_14887f2ac body=206 status=ok
// SIG undefined FUN_14887f2ac(void)

byte FUN_14887f2ac(longlong *param_1,int *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] < 1) {
    bVar5 = 0;
  }
  else {
    lVar6 = 0x98;
    lVar7 = 0;
    bVar5 = 0;
    bVar2 = false;
    do {
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + -4 + lVar6) == *param_2) &&
         (cVar3 = FUN_140317cec(lVar6 + lVar1,param_2 + 1), cVar3 != '\0')) {
        bVar4 = *(byte *)(lVar1 + -0x98 + lVar6);
        if (bVar4 == 3) {
          bVar2 = true;
          bVar5 = 3;
        }
        else if (bVar4 == 1) {
          if (!bVar2) {
            bVar2 = true;
            bVar5 = 1;
          }
        }
        else if (!bVar2) {
          if (bVar4 == 4) {
            bVar4 = 6;
          }
          if (bVar5 <= bVar4) {
            bVar5 = bVar4;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x118;
    } while (lVar7 < (int)param_1[1]);
  }
  return bVar5;
}



// FUNCTION 14887f37a FUN_14887f37a body=441 status=ok
// SIG undefined FUN_14887f37a(void)

int FUN_14887f37a(longlong param_1,longlong param_2,longlong param_3,double *param_4,float param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  
  iVar9 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar9 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x220);
    iVar13 = 0;
    pfVar14 = (float *)(lVar10 + 0x48);
    do {
      if (((*(longlong *)(pfVar14 + -0x12) == param_2) && (*(longlong *)(pfVar14 + 2) == 0)) &&
         (*(longlong *)(pfVar14 + -0xe) == param_3)) {
        if (((*pfVar14 == param_5) && (!NAN(*pfVar14) && !NAN(param_5))) &&
           (dVar3 = *(double *)(pfVar14 + -2), dVar4 = param_4[2], dVar5 = *(double *)(pfVar14 + -4)
           , dVar6 = param_4[1], dVar7 = *(double *)(pfVar14 + -6), dVar8 = *param_4,
           lVar11 = FUN_140316ff8(),
           (dVar3 - dVar4) * (dVar3 - dVar4) +
           (dVar7 - dVar8) * (dVar7 - dVar8) + (dVar5 - dVar6) * (dVar5 - dVar6) <
           (double)(*(float *)(lVar11 + 0x54) * *(float *)(lVar11 + 0x54)))) {
          if (iVar13 != 1) {
            return -iVar13;
          }
          break;
        }
      }
      iVar13 = iVar13 + -1;
      pfVar12 = pfVar14 + 0xe;
      pfVar14 = pfVar14 + 0x20;
    } while (pfVar12 != (float *)((longlong)iVar9 * 0x80 + lVar10));
  }
  iVar9 = *(int *)(param_1 + 0x228);
  *(uint *)(param_1 + 0x228) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x22c) < iVar9 + 1U) {
    FUN_1459251d8(param_1 + 0x220,iVar9);
  }
  lVar10 = *(longlong *)(param_1 + 0x220);
  lVar11 = (longlong)iVar9 * 0x80;
  puVar1 = (undefined8 *)(lVar10 + 8 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x68 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x58 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x48 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x38 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x28 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + 0x18 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar10 + 0x78 + lVar11) = 0;
  *(longlong *)(lVar10 + lVar11) = param_2;
  *(longlong *)(lVar10 + 0x10 + lVar11) = param_3;
  dVar3 = param_4[1];
  pdVar2 = (double *)(lVar10 + 0x30 + lVar11);
  *pdVar2 = *param_4;
  pdVar2[1] = dVar3;
  *(double *)(lVar10 + 0x40 + lVar11) = param_4[2];
  *(float *)(lVar10 + 0x48 + lVar11) = param_5;
  *(undefined8 *)(lVar10 + 0x58 + lVar11) = param_6;
  return *(int *)(param_1 + 0x228) + -1;
}



// FUNCTION 14887f534 FUN_14887f534 body=879 status=ok
// SIG undefined FUN_14887f534(void)

ulonglong FUN_14887f534(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong unaff_RBP;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x60);
  if (lVar8 == 0) {
    uVar7 = FUN_14043db3a();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x60) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if ((lVar8 != 0) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar7,plVar1);
        *(longlong *)(param_1 + 0x68) = lVar8;
        if (lVar8 != 0) goto LAB_14887f588;
      }
    }
LAB_14887f6b5:
    lVar8 = param_3[1];
    if (lVar8 == 0) {
      uVar7 = FUN_14065b502();
      lVar8 = FUN_14477b664(uVar7);
      param_3[1] = lVar8;
    }
    if (param_3[2] == 0) {
      if ((lVar8 == 0) || (*param_3 == 0)) goto LAB_14887f725;
      plVar1 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
        param_3[2] = 0;
        goto LAB_14887f725;
      }
      uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar8 = FUN_144aff482(uVar7,param_3);
      param_3[2] = lVar8;
      if (lVar8 == 0) goto LAB_14887f725;
    }
    cVar4 = FUN_14887f8c0(param_1 + 0x48,param_3);
    uVar11 = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (cVar4 == '\0') {
      lVar8 = param_3[1];
      if (lVar8 == 0) {
        uVar7 = FUN_14065b502();
        lVar8 = FUN_14477b664(uVar7);
        param_3[1] = lVar8;
      }
      lVar9 = param_3[2];
      if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*param_3 != 0)) {
        plVar1 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
          lVar9 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar9 = FUN_144aff482(uVar7,param_3);
        }
        param_3[2] = lVar9;
      }
      if (*(longlong *)(lVar9 + 0x30) != 0) {
        lVar8 = param_3[1];
        if (lVar8 == 0) {
          uVar7 = FUN_14065b502();
          lVar8 = FUN_14477b664(uVar7);
          param_3[1] = lVar8;
          lVar9 = param_3[2];
        }
        if (lVar9 == 0) {
          param_3[2] = 0;
          lVar9 = 0;
          if ((lVar8 != 0) && (*param_3 != 0)) {
            plVar1 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
              lVar9 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar9 = FUN_144aff482(uVar7,param_3);
            }
            param_3[2] = lVar9;
          }
        }
        if ((longlong)*(int *)(param_1 + 0x40) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar8) == *(longlong *)(lVar9 + 0x30))
            goto LAB_14887f636;
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar8);
        }
      }
LAB_14887f725:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  else {
LAB_14887f588:
    if ((param_4 != (longlong *)0x0) &&
       (lVar8 = (**(code **)(*param_4 + 0x10))(param_4), lVar8 != 0)) {
      if (*(longlong *)(lVar8 + 0x150) == 0) {
        uVar7 = FUN_14043db3a();
        uVar7 = FUN_14477b664(uVar7);
        *(undefined8 *)(lVar8 + 0x150) = uVar7;
      }
      lVar9 = *(longlong *)(param_1 + 0x60);
      if (lVar9 == 0) {
        lVar9 = FUN_14043db3a();
      }
      lVar2 = *plVar1;
      uVar10 = FUN_14477b664(lVar9);
      local_50 = lVar2;
      uVar5 = FUN_144a7891a(uVar10);
      unaff_RBP = (ulonglong)uVar5;
      local_58 = *(undefined8 *)(lVar8 + 0x148);
      uVar7 = *(undefined8 *)(lVar8 + 0x150);
      uVar6 = FUN_144a7891a(uVar7);
      local_68 = uVar10;
      local_60 = &local_50;
      cVar4 = FUN_144a789b8(uVar6,uVar7,&local_58,uVar5);
      if (cVar4 != '\0') goto LAB_14887f6b5;
    }
    uVar11 = 0;
  }
LAB_14887f636:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14887f8c0 FUN_14887f8c0 body=255 status=ok
// SIG undefined FUN_14887f8c0(void)

undefined8 FUN_14887f8c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar1 + 8 + lVar8) == 0) {
        uVar5 = FUN_14065b502();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(lVar1 + 8 + lVar8) = uVar5;
      }
      lVar6 = param_2[1];
      if (lVar6 == 0) {
        lVar6 = FUN_14065b502();
      }
      uVar5 = *param_2;
      uVar7 = FUN_14477b664(lVar6);
      local_50 = uVar5;
      uVar3 = FUN_144a7891a(uVar7);
      local_58 = *(undefined8 *)(lVar1 + lVar8);
      uVar5 = *(undefined8 *)(lVar1 + 8 + lVar8);
      uVar4 = FUN_144a7891a(uVar5);
      local_60 = &local_50;
      local_68 = uVar7;
      uVar5 = FUN_144a789b8(uVar4,uVar5,&local_58,uVar3);
    } while (((char)uVar5 == '\0') &&
            (bVar9 = (longlong)(int)lVar2 * 0x18 + -0x18 != lVar8, lVar8 = lVar8 + 0x18, bVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14887fa52 FUN_14887fa52 body=1 status=ok
// SIG undefined FUN_14887fa52(void)

void FUN_14887fa52(void)

{
  return;
}



// FUNCTION 14887fa54 FUN_14887fa54 body=49 status=ok
// SIG undefined FUN_14887fa54(void)

void FUN_14887fa54(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    FUN_14110fb2c(param_1[3],param_2);
    return;
  }
  return;
}



// FUNCTION 14887fa86 FUN_14887fa86 body=359 status=ok
// SIG undefined FUN_14887fa86(void)

bool FUN_14887fa86(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_60 = 0xff7fffff7f7fffff;
  FUN_144a7a8f6(&uStack_58);
  uStack_4c = CONCAT22(uStack_4c._2_2_,0x101);
  uStack_48 = 0;
  local_40 = 0;
  plVar1 = param_1 + 1;
  FUN_148884698(plVar1,&local_34,*param_2);
  iVar3 = local_34;
  if ((longlong)local_34 != -1) {
    lVar2 = *plVar1 + (longlong)local_34 * 0x60;
    if (local_88 != *(longlong *)(lVar2 + 8)) {
      local_78 = 0;
    }
    if (lStack_80 != *(longlong *)(lVar2 + 0x10)) {
      local_78 = 0;
    }
    local_88 = *(longlong *)(lVar2 + 8);
    uVar4 = FUN_14477b664();
    lStack_80 = FUN_14477b664(uVar4);
    local_78 = *(undefined8 *)(lVar2 + 0x18);
    local_40 = *(undefined4 *)(lVar2 + 0x50);
    uStack_70 = *(undefined8 *)(lVar2 + 0x20);
    local_68 = *(undefined8 *)(lVar2 + 0x28);
    local_60 = *(undefined8 *)(lVar2 + 0x30);
    uStack_58 = *(undefined4 *)(lVar2 + 0x38);
    uStack_54 = *(undefined4 *)(lVar2 + 0x3c);
    local_50 = *(undefined4 *)(lVar2 + 0x40);
    uStack_4c = *(undefined4 *)(lVar2 + 0x44);
    uStack_48 = *(undefined8 *)(lVar2 + 0x48);
    FUN_148884720(plVar1,local_34);
    if ((((int)uStack_48 != 0) && (uStack_4c._1_1_ == '\x01')) && (*param_1 != 0)) {
      FUN_14887b708();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar3 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887fbee FUN_14887fbee body=498 status=ok
// SIG undefined FUN_14887fbee(void)

ulonglong FUN_14887fbee(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 1;
  local_78 = 0;
  uStack_70 = 0;
  plVar2 = param_1 + 3;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if ((int)param_1[6] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = (int)param_1[6];
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 == iVar8) && (uStack_60 == plVar2)) {
    uVar7 = 0;
  }
  else {
    local_a8 = param_1;
    do {
      if (*(int *)(*local_a0 + 0x20 + (longlong)iStack_84 * 0x60) == *param_2) {
        puVar5 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x60);
        cVar3 = FUN_140317cec((longlong)puVar5 + 0x24,param_2 + 1);
        uVar7 = uStack_70;
        if (cVar3 != '\0') {
          lVar9 = (longlong)(int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_1446f84a2(&local_78,uVar7 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar9 * 8) = *puVar5;
          if (((*(int *)(puVar5 + 9) != 0) && (*(char *)((longlong)puVar5 + 0x45) == '\x01')) &&
             (*local_a8 != 0)) {
            FUN_14887b708();
          }
        }
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      lVar9 = local_78;
    } while (local_a0 != plVar1 ||
             ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar2 || iStack_84 != iVar8));
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      lVar10 = 0;
      do {
        FUN_14888481c(plVar1,*(undefined8 *)(lVar9 + lVar10));
        lVar10 = lVar10 + 8;
      } while (lVar6 * 8 != lVar10);
      uVar7 = CONCAT71((int7)((ulonglong)plVar1 >> 8),(int)uStack_70 != 0);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887fde2 FUN_14887fde2 body=463 status=ok
// SIG undefined FUN_14887fde2(void)

ulonglong FUN_14887fde2(longlong *param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = param_3 + 0x30;
  cVar3 = FUN_144aff4b6(lVar1);
  uVar10 = (undefined7)((ulonglong)lVar1 >> 8);
  if ((cVar3 == '\0') && (*(char *)(param_3 + 0x3c) == '\x01')) {
    uVar7 = FUN_144a126be(*param_1);
    plVar8 = (longlong *)FUN_140d28a87(uVar7);
    if (plVar8 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar8 + 0x140))(plVar8,lVar1);
      if (cVar3 != '\0') goto LAB_14887fe56;
    }
    uVar9 = CONCAT71(uVar10,1);
    if (((*(int *)(param_3 + 0x40) != 0) && (*(char *)(param_3 + 0x3d) == '\x01')) &&
       (*param_1 != 0)) {
      FUN_14887b708();
    }
  }
  else {
LAB_14887fe56:
    if (*(int *)(param_3 + 0x40) == 0) {
      param_2 = *(float *)(param_3 + 0x48) - param_2;
      *(float *)(param_3 + 0x48) = param_2;
      uVar9 = CONCAT71(uVar10,1);
      if (param_2 <= 0.0) {
        local_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0xffffffff;
        local_3c = 0;
        local_3a = 1;
        local_39 = 0;
        iVar5 = thunk_FUN_141001a8e(*param_1,param_3,param_3 + 0x18);
        *(int *)(param_3 + 0x40) = iVar5;
        if (iVar5 != 0) {
          *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
        }
      }
    }
    else {
      bVar4 = FUN_1406ee510(*(undefined8 *)(*param_1 + 0x48));
      uVar9 = CONCAT71(uVar10,1);
      if ((bVar4 & 0xfd) != 1) {
        *(undefined4 *)(param_3 + 0x40) = 0;
        if ((*(int *)(param_3 + 0x24) < 1) || (*(int *)(param_3 + 0x44) < *(int *)(param_3 + 0x24)))
        {
          uVar6 = rand();
          fVar2 = *(float *)(param_3 + 0x28);
          *(uint *)(param_3 + 0x48) =
               -(uint)(fVar2 <= *(float *)(param_3 + 0x2c)) &
               (uint)((*(float *)(param_3 + 0x2c) - fVar2) * ((float)(uVar6 & 0x7fff) / 32767.0) +
                     fVar2);
        }
        else {
          uVar9 = 0;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887ffb2 FUN_14887ffb2 body=338 status=ok
// SIG undefined FUN_14887ffb2(void)

void FUN_14887ffb2(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong *in_stack_00000028;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_140316ff8();
  iVar1 = (int)in_stack_00000028[1];
  if (iVar1 == *(int *)(lVar4 + 0x708)) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*in_stack_00000028 + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(*(longlong *)(lVar4 + 0x700) + lVar5);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_148880047;
LAB_148880012:
        lVar5 = lVar5 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148880012;
      }
      if (uVar6 != uVar8) goto LAB_14888008d;
    }
  }
  else if (*(int *)(lVar4 + 0x708) + iVar1 != 1) goto LAB_14888008d;
LAB_148880047:
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (((plVar2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x80) == -1)) ||
     (*plVar2 != *(longlong *)(param_1 + 0x80))) {
    local_30[0] = (longlong *)0x0;
  }
  else {
    *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
    local_30[0] = plVar2;
    if ((int)plVar2[7] != 0) {
      puVar3 = (undefined8 *)plVar2[6];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(plVar2 + 6,0,0,0x10);
        *(undefined4 *)(plVar2 + 7) = 0;
      }
    }
  }
  FUN_144a61ac8(local_30);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1403171d0(param_1,1,local_30,0);
LAB_14888008d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148880106 FUN_148880106 body=54 status=ok
// SIG undefined FUN_148880106(void)

void FUN_148880106(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    return;
  }
  if (param_2 != '\0') {
    FUN_140d53872();
    return;
  }
  FUN_140316e34(lVar1,1);
  return;
}



// FUNCTION 14888013c FUN_14888013c body=78 status=ok
// SIG undefined FUN_14888013c(void)

undefined8 FUN_14888013c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14188dfbe(param_1,param_3);
  FUN_14655150e(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148880190 FUN_148880190 body=193 status=ok
// SIG undefined FUN_148880190(void)

longlong FUN_148880190(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14595cadc();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148880252 FUN_148880252 body=231 status=ok
// SIG undefined FUN_148880252(void)

longlong * FUN_148880252(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x140,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b40ab60;
  plVar1 = plVar4 + 2;
  FUN_141306792(plVar1,param_1,param_3);
  plVar4[2] = (longlong)&PTR_FUN_14b407580;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_148884df0(&local_40,plVar1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888033c FUN_14888033c body=70 status=ok
// SIG undefined FUN_14888033c(void)

byte FUN_14888033c(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_140880c0c();
  FUN_140880f34(param_1);
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_1408838b6(param_1,lVar2,2,1);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 1488803e2 FUN_1488803e2 body=40 status=ok
// SIG undefined FUN_1488803e2(void)

undefined8 FUN_1488803e2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14067a286(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148880470 FUN_148880470 body=40 status=ok
// SIG undefined FUN_148880470(void)

undefined8 FUN_148880470(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e51fda(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488804c6 FUN_1488804c6 body=127 status=ok
// SIG undefined FUN_1488804c6(void)

void FUN_1488804c6(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  
  if (1 < (int)param_2[1]) {
    cVar2 = FUN_144a61b4f();
    if (cVar2 != '\0') {
      FUN_148880546(param_1,param_1 + 0x440,param_2);
      iVar1 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(param_1 + 0x440,*param_2,iVar1);
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148880546 FUN_148880546 body=1185 status=ok
// SIG undefined FUN_148880546(void)

void FUN_148880546(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  wchar_t *_Str;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  uint local_160;
  undefined1 local_158;
  undefined8 *local_150;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == *(int *)(param_3 + 1)) {
    if ((iVar3 < 2) || (iVar3 = wcscmp((wchar_t *)*param_2,(wchar_t *)*param_3), iVar3 == 0))
    goto LAB_1488805ae;
  }
  else if (*(int *)(param_3 + 1) + iVar3 == 1) goto LAB_1488805ae;
  if (((*(byte *)(param_1 + 0x155) & 1) == 0) &&
     ((local_128 = FUN_1485fc302(param_2), local_128 != 0 &&
      (local_130 = FUN_1485fc302(param_3), local_130 != 0)))) {
    local_110 = DAT_14c9485b8;
    if (DAT_14c9485b8 != (longlong *)0x0) {
      lVar4 = FUN_14050fd64();
      local_88 = 0;
      uStack_80 = 0;
      if ((longlong)*(int *)(param_1 + 0x160) == 0) {
        uVar7 = 0;
      }
      else {
        local_128 = local_128 + 0x30;
        local_130 = local_130 + 0x30;
        local_138 = lVar4 + 0x1e8;
        plVar5 = *(longlong **)(param_1 + 0x158);
        local_120 = plVar5 + (longlong)*(int *)(param_1 + 0x160) * 2;
        do {
          local_140 = plVar5;
          if ((longlong)(int)plVar5[1] != 0) {
            lVar4 = *plVar5;
            local_118 = lVar4 + (longlong)(int)plVar5[1] * 0x18;
            do {
              if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
                puVar8 = *(undefined4 **)(lVar4 + 8);
                lVar10 = (longlong)*(int *)(lVar4 + 0x10) << 4;
                do {
                  local_d8 = *(longlong *)(puVar8 + 2);
                  FUN_1400021e4(&local_d8,&local_a8);
                  _Str = L"";
                  if (DAT_14cb7ef78 != 0) {
                    _Str = DAT_14cb7ef70;
                  }
                  if (_Str == (wchar_t *)0x0) {
                    bVar11 = false;
                  }
                  else {
                    sVar6 = wcslen(_Str);
                    local_160 = 0xffffffff;
                    local_168 = 0;
                    iVar3 = FUN_1447ee042(&local_a8,_Str,sVar6 & 0xffffffff,1);
                    bVar11 = iVar3 != -1;
                  }
                  if (local_a8 != 0) {
                    FUN_1400020a8();
                  }
                  if (bVar11) {
                    local_b8 = *puVar8;
                    uStack_b4 = puVar8[1];
                    uStack_b0 = puVar8[2];
                    uStack_ac = puVar8[3];
                    local_a8 = 0;
                    uStack_a0 = 0;
                    local_98 = (void *)0x0;
                    uStack_90 = 0;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    FUN_1400b3bc2(&local_a8,&local_b8,&local_d8);
                    _Src = local_98;
                    local_d8 = local_a8;
                    uStack_d0 = uStack_a0;
                    local_c8 = (void *)0x0;
                    lVar9 = (longlong)(int)uStack_90;
                    local_c0 = (int)uStack_90;
                    if (lVar9 == 0) {
                      local_bc = 0;
                    }
                    else {
                      FUN_1446dd670(&local_c8,uStack_90 & 0xffffffff,0);
                      memcpy(local_c8,_Src,lVar9 * 2);
                    }
                    FUN_1485fc0e8(&local_d8,local_128,local_130);
                    cVar2 = FUN_144a7afa6(&local_a8,&local_d8);
                    if ((cVar2 == '\0') &&
                       (cVar2 = (**(code **)(*local_110 + 0x150))(local_110,local_d8,0,0),
                       cVar2 != '\0')) {
                      local_f8 = (undefined4)local_d8;
                      uStack_f4 = local_d8._4_4_;
                      uStack_f0 = (undefined4)uStack_d0;
                      uStack_ec = uStack_d0._4_4_;
                      FUN_140ba791a(&local_f8,&local_e8);
                      local_70 = local_e8;
                      local_68 = local_e0 + -1;
                      if (local_e0 == 0) {
                        local_68 = 0;
                      }
                      cVar2 = FUN_1468fe3e4(puVar8,&local_70);
                      if (local_e8 != 0) {
                        FUN_1400020a8();
                      }
                      if ((cVar2 != '\0') && (lVar9 = FUN_140007850(&local_a8), lVar9 != 0)) {
                        FUN_14371beac(local_138,&local_a8);
                        FUN_144a6c37a(&local_88,&local_d8);
                      }
                    }
                    if (local_c8 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_98 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  puVar8 = puVar8 + 4;
                  lVar10 = lVar10 + -0x10;
                } while (lVar10 != 0);
              }
              lVar4 = lVar4 + 0x18;
            } while (lVar4 != local_118);
          }
          plVar5 = local_140 + 2;
        } while (plVar5 != local_120);
        uVar7 = uStack_80 & 0xffffffff;
        if (0 < (int)uStack_80) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_158 = 0;
          local_160 = local_160 & 0xffffff00;
          local_168 = 0;
          local_150 = &local_d8;
          FUN_1457028c8(local_138,local_108,&local_88);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_100 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
          FUN_1449db362(&local_a8);
          uVar7 = uStack_80 & 0xffffffff;
        }
      }
      FUN_140861e20(local_88,uVar7);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1488805ae:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148880a20 FUN_148880a20 body=40 status=ok
// SIG undefined FUN_148880a20(void)

undefined8 FUN_148880a20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140996524(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148880a54 FUN_148880a54 body=34 status=ok
// SIG undefined FUN_148880a54(void)

void FUN_148880a54(undefined8 param_1)

{
  FUN_140e8c080();
  FUN_140e8c10e(param_1);
  FUN_146551676(param_1);
  return;
}



// FUNCTION 148880a76 FUN_148880a76 body=20 status=ok
// SIG undefined FUN_148880a76(void)

void FUN_148880a76(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  FUN_14485dd80(param_1 + 0x170);
  return;
}



// FUNCTION 148880a8a FUN_148880a8a body=9 status=ok
// SIG undefined FUN_148880a8a(void)

void FUN_148880a8a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x160) = param_2;
  return;
}



// FUNCTION 148880a94 FUN_148880a94 body=64 status=ok
// SIG undefined FUN_148880a94(void)

void FUN_148880a94(longlong param_1,float param_2)

{
  if ((double)param_2 < *(double *)(param_1 + 0x250)) {
    param_2 = (float)*(double *)(param_1 + 0x250);
  }
  if (*(double *)(param_1 + 600) < (double)param_2) {
    param_2 = (float)*(double *)(param_1 + 600);
  }
  *(int *)(param_1 + 0x110) = (int)param_2;
  return;
}



// FUNCTION 148880ad4 FUN_148880ad4 body=7 status=ok
// SIG undefined FUN_148880ad4(void)

void FUN_148880ad4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1d8) = param_2;
  return;
}



// FUNCTION 148880adc FUN_148880adc body=9 status=ok
// SIG undefined FUN_148880adc(void)

void FUN_148880adc(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x158) = param_2;
  return;
}



// FUNCTION 148880ae6 FUN_148880ae6 body=21 status=ok
// SIG undefined FUN_148880ae6(void)

undefined8 * FUN_148880ae6(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xc0);
  return param_2;
}



// FUNCTION 148880afc FUN_148880afc body=420 status=ok
// SIG undefined FUN_148880afc(void)

void FUN_148880afc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  FUN_1434cface(*(undefined8 *)(param_1 + 0x148),&local_40,&local_38);
  plVar1 = (longlong *)(param_1 + 0x188);
  iVar4 = *(int *)(param_1 + 400);
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (iVar4 != iVar2) {
    uVar3 = (uint)((ulonglong)local_38 >> 0x10);
    uVar7 = (uint)local_38 & 0xffff;
    lVar6 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1c8);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x1d0) - 1U &
                             (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar8 * 0x18) == local_38) goto LAB_148880bf7;
        iVar8 = *(int *)(*plVar1 + (longlong)iVar8 * 0x18 + 0x10);
      } while (iVar8 != -1);
    }
  }
  local_30 = &local_38;
  FUN_148088676(plVar1,local_24,&local_30,0);
  iVar4 = *(int *)(param_1 + 400);
  iVar2 = *(int *)(param_1 + 0x1bc);
LAB_148880bf7:
  if (iVar4 != iVar2) {
    uVar3 = (uint)((ulonglong)local_38 >> 0x10);
    uVar7 = (uint)local_38 & 0xffff;
    lVar6 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1c8);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x1d0) - 1U &
                             (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
        if (*plVar5 == local_38) goto LAB_148880bfd;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_148880bfd:
  plVar5[1] = local_40;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148880ca2 FUN_148880ca2 body=133 status=ok
// SIG undefined FUN_148880ca2(void)

void FUN_148880ca2(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_141477858(*(undefined8 *)(param_1 + 0x148),local_68);
  FUN_1485bf85a(param_1 + 0x188,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148880d28 FUN_148880d28 body=604 status=ok
// SIG undefined FUN_148880d28(void)

ulonglong FUN_148880d28(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RBX;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  iVar6 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar4 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x1bc);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1461f8d8e(&local_98,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_140906920();
    }
  }
  plVar1 = (longlong *)(param_1 + 0x188);
  lVar2 = param_1 + 0x198;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  local_b8 = lVar2;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_1449c0562(&local_c0);
    iVar6 = *(int *)(param_1 + 0x1b0);
  }
  local_d0 = local_b0;
  iStack_cc = iStack_ac;
  local_c8 = local_a8;
  local_c4 = local_a4;
  local_e0 = local_c0;
  local_d8 = local_b8;
  local_e8 = plVar1;
  if ((iStack_ac != iVar6) || (local_b8 != lVar2)) {
    unaff_RBX = &local_c0;
    do {
      lVar5 = (longlong)iStack_cc * 0x18 + *local_e8;
      FUN_1434d0480(*(undefined8 *)(param_1 + 0x148),unaff_RBX,lVar5);
      if (local_c0 != 0) {
        local_b8 = lVar5 + 8;
        local_c0 = lVar5;
        FUN_140906722(&local_98,local_9c,unaff_RBX,0);
      }
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (local_e8 != plVar1 || (local_d8 != lVar2 || iStack_cc != iVar6));
  }
  iVar3 = local_64;
  iVar6 = (int)uStack_90;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar6 != iVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148880f86 FUN_148880f86 body=45 status=ok
// SIG undefined FUN_148880f86(void)

undefined8 * FUN_148880f86(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = FUN_140032b16(0);
  FUN_14158d33e(lVar1 + 0x130,param_2);
  return param_2;
}



// FUNCTION 148880fb4 FUN_148880fb4 body=219 status=ok
// SIG undefined FUN_148880fb4(void)

void FUN_148880fb4(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  *(undefined1 *)(param_1 + 0x228) = param_2;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.RayTracing.EnableInGame",1);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = &DAT_149e25dfc;
    if (*(char *)(param_1 + 0x228) != '\0') {
      puVar2 = &DAT_149e0209e;
    }
    (**(code **)(*plVar1 + 0x98))(plVar1,puVar2,0x2000000,0);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SkinCache.DefaultBehavior",1);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = &DAT_149e25dfc;
    if (*(char *)(param_1 + 0x228) != '\0') {
      puVar2 = &DAT_149e0209e;
    }
                    /* WARNING: Could not recover jumptable at 0x000148881085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))(plVar1,puVar2,0x2000000,0);
    return;
  }
  return;
}



// FUNCTION 148881090 thunk_FUN_1458809f8 body=5 status=ok
// SIG undefined thunk_FUN_1458809f8(void)

void thunk_FUN_1458809f8(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 148881096 FUN_148881096 body=110 status=ok
// SIG undefined FUN_148881096(void)

undefined8 FUN_148881096(undefined8 param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  
  cVar1 = FUN_144848644();
  if (cVar1 != '\0') {
    cVar1 = FUN_1415d8cfc();
    if (cVar1 != '\0') {
      pwVar2 = L"DLSS";
      goto LAB_1488810ed;
    }
  }
  cVar1 = FUN_1431eab15();
  if (cVar1 != '\0') {
    cVar1 = FUN_143c23dfa();
    if (cVar1 != '\0') {
      pwVar2 = L"XeSS";
      goto LAB_1488810ed;
    }
  }
  cVar1 = FUN_1414c39f7();
  pwVar2 = L"TSR";
  if (cVar1 != '\0') {
    pwVar2 = L"FSR";
  }
LAB_1488810ed:
  FUN_1446f470e(param_1,pwVar2,1);
  return param_1;
}



// FUNCTION 148881104 FUN_148881104 body=7 status=ok
// SIG undefined FUN_148881104(void)

void FUN_148881104(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x164) = param_2;
  return;
}



// FUNCTION 14888110c FUN_14888110c body=45 status=ok
// SIG undefined FUN_14888110c(void)

void FUN_14888110c(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14586b5e2();
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x168) = iVar2;
  return;
}



// FUNCTION 14888113a FUN_14888113a body=514 status=ok
// SIG undefined FUN_14888113a(void)

void FUN_14888113a(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar4 = *(longlong *)(param_2 + 4);
    uVar7 = (uint)lVar4;
    uVar6 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar8 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xc0);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 200) - 1U &
                             uVar10 + (uVar7 << 0x10 | uVar7 & 0xffff) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar7 & 0xffff) >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar9 * 0x28);
        if (*plVar3 == lVar4) {
          if ((plVar3 + 3 != (longlong *)0x0 && plVar3 != (longlong *)0x0) &&
             (puVar5 = (undefined8 *)plVar3[3], puVar5 != (undefined8 *)0x0)) {
            if (param_2[10] == 1) {
              if (((*(char *)(puVar5 + 7) == '\x01') && (*(int *)(puVar5 + 3) == *param_2)) &&
                 (puVar5[4] == lVar4)) {
                uStack_44 = (undefined4)*puVar5;
                local_40 = (uint)((ulonglong)*puVar5 >> 0x20);
                uStack_3c = CONCAT31(uStack_3c._1_3_,1);
                local_48 = *(int *)(puVar5 + 3);
                FUN_143d6d002(param_1);
                if (*(char *)(puVar5 + 7) == '\x01') {
                  plVar3 = (longlong *)puVar5[6];
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
                  *(undefined1 *)(puVar5 + 7) = 0;
                }
              }
            }
            else if ((param_2[10] == 0) && (*(char *)(puVar5 + 7) == '\0')) {
              local_48 = *param_2;
              local_38 = *(undefined8 *)(param_2 + 6);
              local_30 = *(longlong **)(param_2 + 8);
              if (local_30 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_30 + 1) = (int)local_30[1] + 1;
                UNLOCK();
              }
              local_40 = uVar7;
              uStack_3c = uVar10;
              FUN_14888582e(puVar5 + 3,&local_48);
              plVar3 = local_30;
              if (local_30 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_30 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_30)(local_30);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              local_48 = *param_2;
              uStack_44 = (undefined4)*puVar5;
              local_40 = (uint)((ulonglong)*puVar5 >> 0x20);
              uStack_3c = uStack_3c & 0xffffff00;
              FUN_143d6d002(param_1);
            }
          }
          break;
        }
        iVar9 = (int)plVar3[4];
      } while (iVar9 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888133e FUN_14888133e body=297 status=ok
// SIG undefined FUN_14888133e(void)

undefined8 FUN_14888133e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (((*(int *)(param_1 + 0xe8) < 1) && (*(int *)(param_2 + 0x28) == 0)) &&
     (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4))) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    uVar6 = *(int *)(param_1 + 200) - 1;
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             ((int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4) & uVar6) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x28) == lVar1) {
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x28 + 0x20);
      } while (iVar7 != -1);
    }
    uVar2 = (uint)((ulonglong)DAT_14c966e68 >> 0x10);
    uVar5 = (uint)DAT_14c966e68 & 0xffff;
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             ((int)((ulonglong)DAT_14c966e68 >> 0x20) +
                              ((uint)DAT_14c966e68 << 0x10 | uVar5) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4) & uVar6) * 4);
    if (iVar7 != -1) {
      do {
        bVar8 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x28) ==
                DAT_14c966e68;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar7 >> 8),bVar8);
        if (bVar8) {
          return uVar4;
        }
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x28 + 0x20);
      } while (iVar7 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 148881468 FUN_148881468 body=181 status=ok
// SIG undefined FUN_148881468(void)

void FUN_148881468(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar3 = (longlong)*(int *)(param_1 + 0x78) * 0x40 + lVar4;
    do {
      if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
        lVar2 = *(longlong *)(lVar4 + 8);
        lVar1 = (longlong)*(int *)(lVar4 + 0x10) * 0x18;
        do {
          local_68 = lVar4;
          local_60 = lVar2;
          local_58 = &local_68;
          FUN_148885984(param_1 + 0x80,local_4c,&local_60);
          lVar2 = lVar2 + 0x18;
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != 0);
      }
      lVar4 = lVar4 + 0x40;
    } while (lVar4 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888151e FUN_14888151e body=182 status=ok
// SIG undefined FUN_14888151e(void)

void FUN_14888151e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = (longlong *)param_2[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_148885ee0(param_1 + 0xe0,&local_28);
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488815e6 FUN_1488815e6 body=193 status=ok
// SIG undefined FUN_1488815e6(void)

void FUN_1488815e6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1488816a8();
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_28 = &local_38;
  FUN_148885fe4(param_1 + 0xe0);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488816a8 FUN_1488816a8 body=217 status=ok
// SIG undefined FUN_1488816a8(void)

void FUN_1488816a8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  int local_50;
  undefined8 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    lVar7 = 0;
    do {
      if ((*(char *)(lVar5 + 0x38 + lVar7) == '\x01') &&
         (iVar4 = *(int *)(lVar5 + 0x18 + lVar7), iVar4 == *(int *)(*param_2 + 0x10))) {
        local_4c = *(undefined8 *)(lVar5 + lVar7);
        local_44 = 1;
        local_50 = iVar4;
        FUN_143d6d002(param_1,&local_50);
        if (*(char *)(lVar5 + 0x38 + lVar7) == '\x01') {
          plVar6 = *(longlong **)(lVar5 + 0x30 + lVar7);
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
          *(undefined1 *)(lVar5 + 0x38 + lVar7) = 0;
        }
      }
      lVar7 = lVar7 + 0x40;
    } while ((longlong)iVar3 * 0x40 != lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148881782 FUN_148881782 body=84 status=ok
// SIG undefined FUN_148881782(void)

void FUN_148881782(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*param_1 + 0x20))();
  param_1[3] = 0;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    param_1[4] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488817ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488817d6 FUN_1488817d6 body=9 status=ok
// SIG undefined FUN_1488817d6(void)

void FUN_1488817d6(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x18);
  return;
}



// FUNCTION 1488817e0 FUN_1488817e0 body=66 status=ok
// SIG undefined FUN_1488817e0(void)

undefined8 FUN_1488817e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
    uVar3 = FUN_1449f3324();
    cVar1 = FUN_144a7ca96((undefined8 *)(lVar2 + 0x30),uVar3);
    if (cVar1 != '\0') {
      return *(undefined8 *)(lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 148881822 FUN_148881822 body=175 status=ok
// SIG undefined FUN_148881822(void)

undefined8 * FUN_148881822(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined **local_48 [3];
  byte local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  (**(code **)(*plVar1 + 0x350))(plVar1,local_48);
  FUN_1408e4d18(local_48,param_2);
  local_48[0] = &PTR_FUN_14a5af930;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_48[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488818d2 FUN_1488818d2 body=612 status=ok
// SIG undefined FUN_1488818d2(void)

void FUN_1488818d2(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar12 = (uint)uVar5 & 0xffff;
  lVar7 = FUN_1403e802c(param_1 + 0x18,
                        ((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                        (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4),param_3 + 0x10);
  lVar8 = (**(code **)(*param_2 + 0x180))(param_2);
  if (lVar8 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_3 + 0x28)) {
  case 0:
  case 2:
    *(double *)(lVar7 + 0xd8) = (double)*(float *)(param_3 + 0x2c);
    lVar9 = (longlong)*(int *)(param_3 + 0x28) * 0x10;
    plVar11 = (longlong *)(lVar7 + lVar9 + 0x88);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(lVar7 + 0x90 + lVar9);
    *(uint *)(lVar7 + 0x90 + lVar9) = iVar3 + 1U;
    if (*(uint *)(lVar7 + 0x94 + lVar9) < iVar3 + 1U) {
      FUN_1447808da(plVar11,iVar3);
    }
    *(undefined4 *)(*plVar11 + (longlong)iVar3 * 4) = *(undefined4 *)(param_1 + 0x14);
    if ((*(byte *)(lVar7 + 0x34) & 2) == 0) {
      dVar2 = *(double *)(lVar8 + 0x6e0);
      fVar1 = *(float *)(lVar7 + 0x30);
      lVar9 = FUN_140389788();
      lVar8 = *(longlong *)(lVar9 + 0x110);
      if (lVar8 == 0) {
        FUN_140aa6c08(lVar9);
        lVar8 = *(longlong *)(lVar9 + 0x110);
      }
      if ((float)dVar2 - fVar1 < *(float *)(lVar8 + 0x88)) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        iVar3 = *(int *)(lVar7 + 0xc0);
        *(uint *)(lVar7 + 0xc0) = iVar3 + 1U;
        if (*(uint *)(lVar7 + 0xc4) < iVar3 + 1U) {
          FUN_1447808da((longlong *)(lVar7 + 0xb8),iVar3);
        }
        *(undefined4 *)(*(longlong *)(lVar7 + 0xb8) + (longlong)iVar3 * 4) =
             *(undefined4 *)(param_1 + 0x14);
      }
      *(float *)(lVar7 + 0x30) = (float)dVar2;
    }
    goto switchD_14888196a_default;
  case 1:
    *(undefined8 *)(lVar7 + 0xd8) = 0;
    plVar11 = (longlong *)(lVar7 + 0x98);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar10 = (ulonglong)*(int *)(lVar7 + 0xa0);
    uVar6 = *(int *)(lVar7 + 0xa0) + 1;
    *(uint *)(lVar7 + 0xa0) = uVar6;
    if (*(uint *)(lVar7 + 0xa4) < uVar6) {
LAB_148881a89:
      FUN_1447808da(plVar11,uVar10 & 0xffffffff);
    }
    break;
  case 3:
    *(double *)(lVar7 + 0xd8) = (double)*(float *)(param_3 + 0x2c);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(lVar7 + 0x90);
    *(uint *)(lVar7 + 0x90) = iVar3 + 1U;
    if (*(uint *)(lVar7 + 0x94) < iVar3 + 1U) {
      FUN_1447808da(lVar7 + 0x88,iVar3);
    }
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(*(longlong *)(lVar7 + 0x88) + (longlong)iVar3 * 4) = iVar4;
    plVar11 = (longlong *)(lVar7 + 0xb8);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    uVar10 = (ulonglong)*(int *)(lVar7 + 0xc0);
    uVar6 = *(int *)(lVar7 + 0xc0) + 1;
    *(uint *)(lVar7 + 0xc0) = uVar6;
    if (*(uint *)(lVar7 + 0xc4) < uVar6) goto LAB_148881a89;
    break;
  default:
    goto switchD_14888196a_default;
  }
  *(undefined4 *)(*plVar11 + uVar10 * 4) = *(undefined4 *)(param_1 + 0x14);
switchD_14888196a_default:
  *(char *)(lVar7 + 0x35) = *(char *)(lVar7 + 0x35) + '\x01';
  return;
}



// FUNCTION 148881b36 FUN_148881b36 body=944 status=ok
// SIG undefined FUN_148881b36(void)

void FUN_148881b36(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  char cVar18;
  longlong lVar19;
  char *pcVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 *puVar24;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  longlong *local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x18);
  uStack_80 = param_1 + 0x28;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  local_70 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_88);
  }
  local_b0 = local_78;
  iStack_ac = iStack_74;
  local_a8 = local_70;
  local_a4 = local_6c;
  local_c0 = local_88;
  local_b8 = uStack_80;
  local_90 = 0;
  lVar22 = param_1;
  local_c8 = plVar1;
  local_a0 = plVar1;
  local_98 = plVar1;
  if (iStack_74 < *(int *)(uStack_80 + 0x18)) {
    do {
      local_e8 = lVar22;
      lVar8 = *local_c8;
      lVar23 = (longlong)iStack_ac * 0x110;
      lVar22 = lVar8 + lVar23;
      puVar24 = (undefined4 *)(lVar22 + 0x18);
      puVar2 = (undefined8 *)(lVar8 + lVar23);
      lVar3 = lVar8 + lVar23;
      lVar19 = 0;
      bVar15 = false;
      do {
        puVar4 = (undefined8 *)(lVar19 + lVar3 + 0x50);
        *(undefined4 *)(lVar3 + 0x58 + lVar19) = 0;
        if (*(int *)(lVar3 + 0x5c + lVar19) < 0) {
          FUN_14480809c(puVar4,0);
        }
        uVar13 = *puVar4;
        lVar21 = puVar4[1];
        puVar5 = (undefined8 *)(lVar3 + 0xa0 + lVar19);
        uVar14 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar14;
        local_88._0_4_ = (undefined4)uVar13;
        local_88._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_80._0_4_ = (undefined4)lVar21;
        uStack_80._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
        puVar6 = (undefined4 *)(lVar3 + 0xa0 + lVar19);
        *puVar6 = (undefined4)local_88;
        puVar6[1] = local_88._4_4_;
        puVar6[2] = (undefined4)uStack_80;
        puVar6[3] = uStack_80._4_4_;
        local_88 = uVar13;
        uStack_80 = lVar21;
        if ((!bVar15) && (0 < *(int *)(puVar4 + 1))) {
          lVar21 = (longlong)(int)DAT_14cb7fb90;
          DAT_14cb7fb90 = DAT_14cb7fb90 + 1;
          if (DAT_14cb7fb94 < DAT_14cb7fb90) {
            FUN_1463d04dc(&DAT_14cb7fb88);
          }
          lVar16 = DAT_14cb7fb88;
          lVar21 = lVar21 * 0x20;
          *(undefined8 *)(DAT_14cb7fb88 + lVar21) = *puVar2;
          *(undefined8 *)(lVar16 + 8 + lVar21) = puVar2[1];
          lVar9 = puVar2[2];
          *(longlong *)(lVar16 + 0x10 + lVar21) = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 **)(lVar16 + lVar21 + 0x18) = puVar24;
          bVar15 = true;
        }
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0x50);
      pcVar20 = (char *)(lVar8 + lVar23 + 0x4d);
      if (*pcVar20 == '\0') {
        cVar18 = FUN_144aa27be(puVar2);
        if (cVar18 != '\0') {
          *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(lVar8 + 0x100 + lVar23);
          puVar6 = (undefined4 *)(lVar8 + 0xf0 + lVar23);
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar12 = puVar6[3];
          *puVar24 = *puVar6;
          *(undefined4 *)(lVar22 + 0x1c) = uVar10;
          *(undefined4 *)(lVar22 + 0x20) = uVar11;
          *(undefined4 *)(lVar22 + 0x24) = uVar12;
          if (*pcVar20 == '\0') {
            lVar22 = lVar8 + lVar23;
            *(int *)(local_e8 + 0x14) = *(int *)(local_e8 + 0x14) + 1;
            iVar7 = *(int *)(lVar22 + 0x68);
            *(uint *)(lVar22 + 0x68) = iVar7 + 1U;
            if (*(uint *)(lVar22 + 0x6c) < iVar7 + 1U) {
              FUN_1447808da((longlong *)(lVar22 + 0x60),iVar7);
            }
            *(undefined4 *)(*(longlong *)(lVar22 + 0x60) + (longlong)iVar7 * 4) =
                 *(undefined4 *)(local_e8 + 0x14);
            uVar17 = DAT_14cb7fb90;
            if (!bVar15) {
              lVar22 = (longlong)(int)DAT_14cb7fb90;
              DAT_14cb7fb90 = DAT_14cb7fb90 + 1;
              if (DAT_14cb7fb94 < DAT_14cb7fb90) {
                FUN_1463d04dc(&DAT_14cb7fb88,uVar17);
              }
              lVar19 = DAT_14cb7fb88;
              lVar22 = lVar22 * 0x20;
              *(undefined8 *)(DAT_14cb7fb88 + lVar22) = *puVar2;
              *(undefined8 *)(lVar19 + 8 + lVar22) = puVar2[1];
              lVar3 = puVar2[2];
              *(longlong *)(lVar19 + 0x10 + lVar22) = lVar3;
              if (lVar3 != 0) {
                LOCK();
                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                UNLOCK();
              }
              *(undefined4 **)(lVar19 + lVar22 + 0x18) = puVar24;
            }
          }
        }
      }
      else {
        *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(lVar8 + 0x100 + lVar23);
        puVar6 = (undefined4 *)(lVar8 + 0xf0 + lVar23);
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        *puVar24 = *puVar6;
        *(undefined4 *)(lVar22 + 0x1c) = uVar10;
        *(undefined4 *)(lVar22 + 0x20) = uVar11;
        *(undefined4 *)(lVar22 + 0x24) = uVar12;
      }
      local_e0 = *puVar2;
      local_d8 = puVar2[1];
      local_d0 = puVar2[2];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_14888291a(&local_e0);
      *pcVar20 = '\0';
      puVar2 = (undefined8 *)(lVar8 + 0xf0 + lVar23);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar8 + 0x100 + lVar23) = 0;
      local_b0 = local_b0 & ~local_c0._4_4_;
      FUN_1449c0562(&local_c0);
      lVar22 = local_e8;
    } while (iStack_ac < *(int *)(local_b8 + 0x18));
    if (((local_90 & 1) != 0) && (local_90._1_1_ == '\x01')) {
      FUN_147da1f74(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148881ee8 FUN_148881ee8 body=320 status=ok
// SIG undefined FUN_148881ee8(void)

void FUN_148881ee8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)DAT_14cb7fb90 != 0) {
    puVar7 = DAT_14cb7fb88 + (longlong)DAT_14cb7fb90 * 4;
    puVar8 = DAT_14cb7fb88;
    do {
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      plVar5 = (longlong *)puVar8[2];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      lVar6 = puVar8[3];
      if ((*(byte *)(lVar6 + 0x34) & 4) == 0) {
        local_60 = uVar3;
        local_58 = uVar4;
        local_50 = plVar5;
        if (plVar5 == (longlong *)0x0) {
          FUN_1488827da(param_1,&local_60,lVar6,0);
          local_68 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          FUN_1488827da(param_1,&local_60,lVar6,0);
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_68 = plVar5;
        }
        local_78 = uVar3;
        local_70 = uVar4;
        FUN_1488827da(param_1,&local_78,lVar6,1);
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
      puVar8 = puVar8 + 4;
    } while (puVar8 != puVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14888202a FUN_14888202a body=1966 status=ok
// SIG undefined FUN_14888202a(void)

void FUN_14888202a(void)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int iVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  iVar26 = DAT_14cb7fba0;
  lVar27 = DAT_14cb7fb98;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  lVar21 = (longlong)DAT_14cb7fba0;
  if (1 < lVar21) {
    memset(local_368,0,0x2f0);
    local_378 = lVar27;
    local_370 = lVar21 * 0x30 + lVar27 + -0x30;
    fVar35 = logf((float)iVar26);
    local_368[0] = (int)(longlong)(fVar35 + fVar35);
    plVar16 = &local_378;
    do {
      puVar22 = (undefined8 *)*plVar16;
      puVar20 = (undefined8 *)plVar16[1];
      iVar26 = (int)plVar16[2];
      iVar33 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar22) >> 4) * -0x55555555;
      uVar28 = iVar33 + 1;
      puVar18 = puVar22;
      puVar17 = puVar22;
      puVar24 = puVar20;
      if (iVar26 != 0) {
LAB_1488820df:
        if (8 < (int)uVar28) {
          uVar23 = (ulonglong)(uVar28 >> 1);
          uVar4 = puVar18[uVar23 * 6];
          uVar5 = (puVar18 + uVar23 * 6)[1];
          uVar6 = puVar18[uVar23 * 6 + 2];
          uVar7 = (puVar18 + uVar23 * 6 + 2)[1];
          uVar8 = puVar18[uVar23 * 6 + 4];
          uVar9 = (puVar18 + uVar23 * 6 + 4)[1];
          uVar10 = *puVar18;
          uVar11 = puVar18[1];
          uVar12 = puVar18[2];
          uVar13 = puVar18[3];
          uVar14 = puVar18[5];
          puVar18[uVar23 * 6 + 4] = puVar18[4];
          (puVar18 + uVar23 * 6 + 4)[1] = uVar14;
          puVar18[uVar23 * 6 + 2] = uVar12;
          (puVar18 + uVar23 * 6 + 2)[1] = uVar13;
          puVar18[uVar23 * 6] = uVar10;
          (puVar18 + uVar23 * 6)[1] = uVar11;
          puVar18[4] = uVar8;
          puVar18[5] = uVar9;
          puVar18[2] = uVar6;
          puVar18[3] = uVar7;
          *puVar18 = uVar4;
          puVar18[1] = uVar5;
          puVar30 = puVar24 + 6;
          puVar17 = puVar18;
          do {
            puVar15 = puVar17 + 6;
            puVar25 = puVar17 + 6;
            do {
              puVar17 = puVar25;
              puVar32 = puVar15;
              if (puVar24 < puVar17) break;
              bVar34 = *(uint *)((longlong)puVar18 + 4) < *(uint *)((longlong)puVar17 + 4);
              if (*(uint *)((longlong)puVar18 + 4) == *(uint *)((longlong)puVar17 + 4)) {
                bVar34 = *(uint *)(puVar18 + 1) < *(uint *)(puVar17 + 1);
              }
              puVar15 = puVar32 + 6;
              puVar25 = puVar17 + 6;
            } while (!bVar34);
            puVar15 = puVar30 + -0xc;
            do {
              puVar25 = puVar30;
              puVar31 = puVar15;
              puVar30 = puVar25 + -6;
              if (puVar30 <= puVar18) break;
              bVar34 = *(uint *)((longlong)puVar25 + -0x2c) < *(uint *)((longlong)puVar18 + 4);
              if (*(uint *)((longlong)puVar25 + -0x2c) == *(uint *)((longlong)puVar18 + 4)) {
                bVar34 = *(uint *)(puVar25 + -5) < *(uint *)(puVar18 + 1);
              }
              puVar15 = puVar31 + -6;
            } while (!bVar34);
            if (puVar30 < puVar17) goto LAB_14888225f;
            uVar4 = *puVar17;
            uVar5 = puVar17[1];
            uVar6 = puVar17[2];
            uVar7 = puVar17[3];
            uVar8 = puVar17[4];
            uVar9 = puVar17[5];
            uVar10 = *puVar30;
            uVar11 = puVar25[-5];
            uVar12 = puVar25[-4];
            uVar13 = puVar25[-3];
            uVar14 = puVar25[-1];
            puVar17[4] = puVar25[-2];
            puVar17[5] = uVar14;
            puVar17[2] = uVar12;
            puVar17[3] = uVar13;
            *puVar17 = uVar10;
            puVar17[1] = uVar11;
            puVar25[-2] = uVar8;
            puVar25[-1] = uVar9;
            puVar25[-4] = uVar6;
            puVar25[-3] = uVar7;
            *puVar30 = uVar4;
            puVar25[-5] = uVar5;
          } while( true );
        }
        for (; puVar22 = puVar18, puVar20 = puVar18, puVar18 < puVar24; puVar24 = puVar24 + -6) {
          while (puVar17 = puVar22, puVar22 = puVar20 + 6, puVar22 <= puVar24) {
            bVar34 = *(uint *)((longlong)puVar17 + 4) < *(uint *)((longlong)puVar20 + 0x34);
            if (*(uint *)((longlong)puVar17 + 4) == *(uint *)((longlong)puVar20 + 0x34)) {
              bVar34 = *(uint *)(puVar17 + 1) < *(uint *)(puVar22 + 1);
            }
            puVar20 = puVar22;
            if (!bVar34) {
              puVar22 = puVar17;
            }
          }
          local_78 = *puVar17;
          uStack_70 = puVar17[1];
          local_68 = puVar17[2];
          uStack_60 = puVar17[3];
          local_58 = puVar17[4];
          uStack_50 = puVar17[5];
          uVar9 = local_78;
          uVar10 = uStack_70;
          uVar4 = *puVar24;
          uVar5 = puVar24[1];
          uVar6 = puVar24[2];
          uVar7 = puVar24[3];
          uVar8 = puVar24[5];
          puVar17[4] = puVar24[4];
          puVar17[5] = uVar8;
          puVar17[2] = uVar6;
          puVar17[3] = uVar7;
          *puVar17 = uVar4;
          puVar17[1] = uVar5;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar24[4] = local_58;
          puVar24[5] = uStack_50;
          puVar24[2] = local_68;
          puVar24[3] = uStack_60;
          *(undefined4 *)puVar24 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
          local_78 = uVar9;
          uStack_70 = uVar10;
        }
        goto LAB_14888279e;
      }
LAB_148882358:
      if (uVar28 != 0) {
        iVar26 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
        iVar33 = iVar26;
joined_r0x00014888237f:
        do {
          iVar29 = iVar26 * 2 + 1;
          if (iVar29 < (int)uVar28) {
            iVar19 = iVar26 * 2 + 2;
            if (iVar19 < (int)uVar28) {
              uVar3 = *(uint *)((longlong)puVar17 + (longlong)iVar19 * 0x30 + 4);
              uVar2 = *(uint *)((longlong)puVar17 + (longlong)iVar29 * 0x30 + 4);
              bVar34 = uVar3 < uVar2;
              if (uVar3 == uVar2) {
                bVar34 = *(uint *)(puVar17 + (longlong)iVar19 * 6 + 1) <
                         *(uint *)(puVar17 + (longlong)iVar29 * 6 + 1);
              }
              if (!bVar34) {
                iVar29 = iVar19;
              }
            }
            lVar27 = (longlong)iVar26;
            lVar21 = (longlong)iVar29;
            uVar3 = *(uint *)((longlong)puVar17 + lVar27 * 0x30 + 4);
            uVar2 = *(uint *)((longlong)puVar17 + lVar21 * 0x30 + 4);
            bVar34 = uVar3 < uVar2;
            if (uVar3 == uVar2) {
              bVar34 = *(uint *)(puVar17 + lVar27 * 6 + 1) < *(uint *)(puVar17 + lVar21 * 6 + 1);
            }
            if (bVar34) {
              puVar24 = puVar17 + lVar27 * 6;
              puVar22 = puVar17 + lVar21 * 6;
              local_78 = *puVar24;
              uStack_70 = puVar24[1];
              local_68 = puVar24[2];
              uStack_60 = puVar24[3];
              local_58 = puVar24[4];
              uStack_50 = puVar24[5];
              uVar9 = local_78;
              uVar10 = uStack_70;
              uVar4 = *puVar22;
              uVar5 = puVar22[1];
              uVar6 = puVar22[2];
              uVar7 = puVar22[3];
              uVar8 = puVar22[5];
              puVar24[4] = puVar22[4];
              puVar24[5] = uVar8;
              puVar24[2] = uVar6;
              puVar24[3] = uVar7;
              *puVar24 = uVar4;
              puVar24[1] = uVar5;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar22[4] = local_58;
              puVar22[5] = uStack_50;
              puVar22[2] = local_68;
              puVar22[3] = uStack_60;
              *(undefined4 *)puVar22 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar22 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_70._4_4_;
              local_78 = uVar9;
              uStack_70 = uVar10;
              iVar26 = iVar29;
              goto joined_r0x00014888237f;
            }
          }
          bVar34 = iVar33 != 0;
          iVar26 = iVar33 + -1;
          iVar33 = iVar26;
        } while (bVar34);
        if (1 < (int)uVar28) {
          uVar23 = (ulonglong)uVar28 - 1;
          local_78 = *puVar17;
          uStack_70 = puVar17[1];
          local_68 = puVar17[2];
          uStack_60 = puVar17[3];
          local_58 = puVar17[4];
          uStack_50 = puVar17[5];
          uVar9 = local_78;
          uVar10 = uStack_70;
          uVar4 = puVar17[uVar23 * 6];
          uVar5 = (puVar17 + uVar23 * 6)[1];
          uVar6 = puVar17[uVar23 * 6 + 2];
          uVar7 = (puVar17 + uVar23 * 6 + 2)[1];
          uVar8 = (puVar17 + uVar23 * 6 + 4)[1];
          puVar17[4] = puVar17[uVar23 * 6 + 4];
          puVar17[5] = uVar8;
          puVar17[2] = uVar6;
          puVar17[3] = uVar7;
          *puVar17 = uVar4;
          puVar17[1] = uVar5;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar17[uVar23 * 6 + 4] = local_58;
          (puVar17 + uVar23 * 6 + 4)[1] = uStack_50;
          puVar17[uVar23 * 6 + 2] = local_68;
          (puVar17 + uVar23 * 6 + 2)[1] = uStack_60;
          puVar24 = puVar17 + uVar23 * 6;
          *(undefined4 *)puVar24 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
          local_78 = uVar9;
          uStack_70 = uVar10;
          if (uVar28 != 2) {
            do {
              iVar26 = 0;
              iVar29 = 1;
              iVar33 = 0;
              do {
                lVar27 = (longlong)(iVar26 + 2);
                iVar19 = iVar29;
                if (lVar27 < (longlong)uVar23) {
                  uVar2 = *(uint *)((longlong)puVar17 + lVar27 * 0x30 + 4);
                  uVar28 = *(uint *)((longlong)puVar17 + (longlong)iVar29 * 0x30 + 4);
                  bVar34 = uVar2 < uVar28;
                  if (uVar2 == uVar28) {
                    bVar34 = *(uint *)(puVar17 + lVar27 * 6 + 1) <
                             *(uint *)(puVar17 + (longlong)iVar29 * 6 + 1);
                  }
                  if (!bVar34) {
                    iVar19 = iVar26 + 2;
                  }
                }
                lVar27 = (longlong)iVar33;
                lVar21 = (longlong)iVar19;
                uVar2 = *(uint *)((longlong)puVar17 + lVar27 * 0x30 + 4);
                uVar28 = *(uint *)((longlong)puVar17 + lVar21 * 0x30 + 4);
                bVar34 = uVar2 < uVar28;
                if (uVar2 == uVar28) {
                  bVar34 = *(uint *)(puVar17 + lVar27 * 6 + 1) < *(uint *)(puVar17 + lVar21 * 6 + 1)
                  ;
                }
                if (!bVar34) break;
                puVar22 = puVar17 + lVar27 * 6;
                puVar24 = puVar17 + lVar21 * 6;
                uVar4 = *puVar22;
                uVar5 = puVar22[1];
                uVar6 = puVar22[2];
                uVar7 = puVar22[3];
                uVar8 = puVar22[4];
                uVar9 = puVar22[5];
                uVar10 = *puVar24;
                uVar11 = puVar24[1];
                uVar12 = puVar24[2];
                uVar13 = puVar24[3];
                uVar14 = puVar24[5];
                puVar22[4] = puVar24[4];
                puVar22[5] = uVar14;
                puVar22[2] = uVar12;
                puVar22[3] = uVar13;
                *puVar22 = uVar10;
                puVar22[1] = uVar11;
                puVar24[4] = uVar8;
                puVar24[5] = uVar9;
                puVar24[2] = uVar6;
                puVar24[3] = uVar7;
                *puVar24 = uVar4;
                puVar24[1] = uVar5;
                iVar26 = iVar19 * 2;
                iVar29 = iVar19 * 2 + 1;
                iVar33 = iVar19;
              } while ((longlong)iVar29 < (longlong)uVar23);
              uVar1 = uVar23 - 1;
              local_78 = *puVar17;
              uStack_70 = puVar17[1];
              local_68 = puVar17[2];
              uStack_60 = puVar17[3];
              local_58 = puVar17[4];
              uStack_50 = puVar17[5];
              uVar9 = local_78;
              uVar10 = uStack_70;
              uVar4 = puVar17[uVar1 * 6];
              uVar5 = (puVar17 + uVar1 * 6)[1];
              uVar6 = puVar17[uVar1 * 6 + 2];
              uVar7 = (puVar17 + uVar1 * 6 + 2)[1];
              uVar8 = (puVar17 + uVar1 * 6 + 4)[1];
              puVar17[4] = puVar17[uVar1 * 6 + 4];
              puVar17[5] = uVar8;
              puVar17[2] = uVar6;
              puVar17[3] = uVar7;
              *puVar17 = uVar4;
              puVar17[1] = uVar5;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar17[uVar1 * 6 + 4] = local_58;
              (puVar17 + uVar1 * 6 + 4)[1] = uStack_50;
              puVar17[uVar1 * 6 + 2] = local_68;
              (puVar17 + uVar1 * 6 + 2)[1] = uStack_60;
              puVar24 = puVar17 + uVar1 * 6;
              *(undefined4 *)puVar24 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
              bVar34 = 2 < uVar23;
              uVar23 = uVar1;
              local_78 = uVar9;
              uStack_70 = uVar10;
            } while (bVar34);
          }
        }
      }
LAB_14888279e:
      plVar16 = plVar16 + -3;
    } while (&local_378 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14888225f:
  local_78 = *puVar18;
  uStack_70 = puVar18[1];
  local_68 = puVar18[2];
  uStack_60 = puVar18[3];
  local_58 = puVar18[4];
  uStack_50 = puVar18[5];
  uVar9 = local_78;
  uVar10 = uStack_70;
  uVar4 = *puVar30;
  uVar5 = puVar25[-5];
  uVar6 = puVar25[-4];
  uVar7 = puVar25[-3];
  uVar8 = puVar25[-1];
  puVar18[4] = puVar25[-2];
  puVar18[5] = uVar8;
  puVar18[2] = uVar6;
  puVar18[3] = uVar7;
  *puVar18 = uVar4;
  puVar18[1] = uVar5;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar25[-2] = local_58;
  puVar25[-1] = uStack_50;
  puVar25[-4] = local_68;
  puVar25[-3] = uStack_60;
  *(undefined4 *)puVar30 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar25 + -0x2c) = local_78._4_4_;
  *(undefined4 *)(puVar25 + -5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar25 + -0x24) = uStack_70._4_4_;
  iVar26 = iVar26 + -1;
  puVar25 = puVar25 + -0xc;
  local_78 = uVar9;
  uStack_70 = uVar10;
  if ((longlong)puVar31 - (longlong)puVar22 < (longlong)puVar20 - (longlong)puVar32) {
    if (puVar17 < puVar24) {
      *plVar16 = (longlong)puVar17;
      plVar16[1] = (longlong)puVar24;
      *(int *)(plVar16 + 2) = iVar26;
      plVar16 = plVar16 + 3;
    }
    puVar17 = puVar18;
    puVar20 = puVar31;
    if (puVar30 <= puVar18 + 6) goto LAB_14888279e;
  }
  else {
    if (puVar18 + 6 < puVar30) {
      *plVar16 = (longlong)puVar18;
      plVar16[1] = (longlong)puVar25;
      *(int *)(plVar16 + 2) = iVar26;
      plVar16 = plVar16 + 3;
    }
    puVar18 = puVar32;
    puVar25 = puVar24;
    puVar20 = puVar24;
    if (puVar24 <= puVar17) goto LAB_14888279e;
  }
  iVar33 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar18) >> 4) * -0x55555555;
  uVar28 = iVar33 + 1;
  puVar22 = puVar18;
  puVar18 = puVar17;
  puVar24 = puVar25;
  if (iVar26 == 0) goto LAB_148882358;
  goto LAB_1488820df;
}



// FUNCTION 1488827da FUN_1488827da body=319 status=ok
// SIG undefined FUN_1488827da(void)

void FUN_1488827da(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  
  if (param_3 != 0) {
    iVar11 = *(int *)(param_3 + 0x40 + (ulonglong)param_4 * 0x10);
    lVar10 = (longlong)iVar11;
    if (0 < lVar10) {
      iVar11 = DAT_14cb7fba0 + iVar11;
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11);
      }
      param_3 = param_3 + (ulonglong)param_4 * 0x10;
      if ((int)DAT_14cb7fba4 < iVar11) {
        FUN_14888639a();
        lVar10 = (longlong)*(int *)(param_3 + 0x40);
        if (lVar10 == 0) goto LAB_1488828c9;
      }
      uVar8 = DAT_14cb7fba0;
      puVar12 = *(undefined4 **)(param_3 + 0x38);
      puVar3 = puVar12 + lVar10;
      do {
        uVar9 = DAT_14cb7fba0;
        uVar4 = *puVar12;
        lVar10 = (longlong)(int)DAT_14cb7fba0;
        DAT_14cb7fba0 = DAT_14cb7fba0 + 1;
        if (DAT_14cb7fba4 < DAT_14cb7fba0) {
          FUN_148886412(uVar9);
        }
        lVar7 = DAT_14cb7fb98;
        lVar10 = lVar10 * 0x30;
        *(undefined4 *)(DAT_14cb7fb98 + lVar10) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(lVar7 + 4 + lVar10) = uVar4;
        *(uint *)(lVar7 + 8 + lVar10) = uVar8;
        *(undefined8 *)(lVar7 + 0x10 + lVar10) = *param_2;
        *(undefined8 *)(lVar7 + 0x18 + lVar10) = param_2[1];
        lVar5 = param_2[2];
        *(longlong *)(lVar7 + 0x20 + lVar10) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        *(uint *)(lVar7 + lVar10 + 0x28) = param_4;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
  }
LAB_1488828c9:
  plVar6 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001488828fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14888291a FUN_14888291a body=97 status=ok
// SIG undefined FUN_14888291a(void)

void FUN_14888291a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  
  if (*(int *)(param_2 + 0x40) < *(int *)(param_2 + 0x50)) {
    *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) & 0xfe;
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x34);
    if (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x50)) {
      bVar4 = bVar4 & 0xfe | bVar4 >> 1 & 1;
    }
    else {
      bVar4 = bVar4 | 1;
    }
    *(byte *)(param_2 + 0x34) = bVar4;
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148882970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14888297e FUN_14888297e body=26 status=ok
// SIG undefined FUN_14888297e(void)

void FUN_14888297e(undefined8 param_1)

{
  FUN_148882998();
  FUN_148882acc(param_1);
  return;
}



// FUNCTION 148882998 FUN_148882998 body=307 status=ok
// SIG undefined FUN_148882998(void)

void FUN_148882998(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x30) * 2;
    bVar4 = false;
    do {
      while (*plVar6 == 0) {
        plVar6 = plVar6 + 2;
        bVar4 = true;
        if (plVar6 == plVar7) goto LAB_1488829f3;
      }
      FUN_143d6d438();
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar7);
    if (bVar4) {
LAB_1488829f3:
      iVar1 = *(int *)(param_1 + 0x30);
      lVar3 = (longlong)iVar1;
      if (lVar3 != 0) {
        plVar6 = *(longlong **)(param_1 + 0x28);
        iVar13 = 0;
        bVar4 = *plVar6 == 0;
        iVar10 = 0;
        do {
          lVar8 = (longlong)iVar10;
          iVar5 = iVar10 + 1;
          if (iVar10 + 1 < iVar1) {
            iVar5 = iVar1;
          }
          plVar7 = plVar6 + lVar8 * 2 + 2;
          iVar11 = iVar10;
          lVar9 = lVar8;
          do {
            lVar9 = lVar9 + 1;
            iVar12 = iVar5;
            if (lVar3 <= lVar9) break;
            lVar2 = *plVar7;
            iVar11 = iVar11 + 1;
            plVar7 = plVar7 + 2;
            iVar12 = iVar11;
          } while (bVar4 == (lVar2 == 0));
          iVar5 = iVar12 - iVar10;
          if (bVar4 == false) {
            if (iVar13 != iVar10) {
              memmove(plVar6 + (longlong)iVar13 * 2,plVar6 + lVar8 * 2,(longlong)iVar5 << 4);
            }
            iVar13 = iVar13 + iVar5;
          }
          else {
            FUN_1459488ac(plVar6 + lVar8 * 2,iVar5);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar10 = iVar12;
        } while (lVar9 < lVar3);
        *(int *)(param_1 + 0x30) = iVar13;
      }
    }
  }
  return;
}



// FUNCTION 148882acc FUN_148882acc body=213 status=ok
// SIG undefined FUN_148882acc(void)

void FUN_148882acc(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  
  plVar5 = (longlong *)FUN_145e1853e();
  cVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((cVar3 == '\0') || (uVar6 = (ulonglong)*(int *)(param_1 + 0x70), (longlong)uVar6 < 1)) {
    return;
  }
  plVar5 = (longlong *)(param_1 + 0x68);
  lVar9 = uVar6 << 4;
  bVar7 = 0;
  do {
    lVar9 = lVar9 + -0x10;
    lVar1 = *(longlong *)(*plVar5 + lVar9);
    bVar8 = *(byte *)(lVar1 + 0x38);
    if (bVar8 == 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x28) + 8))();
      bVar8 = *(byte *)(lVar1 + 0x38);
    }
    bVar4 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x10))();
    if ((bVar8 & 1) == 0) {
      bVar7 = bVar7 | bVar4;
    }
    else {
      FUN_1488866da(plVar5,(int)uVar6 + -1);
      FUN_148886750(plVar5);
    }
    bVar2 = 1 < uVar6;
    uVar6 = uVar6 - 1;
  } while (bVar2);
  if ((bVar7 & 1) != 0) {
    FUN_148882ba2();
    return;
  }
  FUN_148882e4c(param_1);
  return;
}



// FUNCTION 148882ba2 FUN_148882ba2 body=664 status=ok
// SIG undefined FUN_148882ba2(void)

void FUN_148882ba2(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(longlong *)(param_1 + 0x78);
  if (local_40 != 0) goto LAB_148882bc8;
  plVar6 = (longlong *)FUN_14001cc68(0x100,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b40b460;
  plVar7 = plVar6 + 2;
  FUN_148886d7a(plVar7);
  plVar6[2] = (longlong)&PTR_FUN_14b40b480;
  local_30 = plVar7;
  local_28 = plVar6;
  FUN_148887358(&local_30,plVar7);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x80);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x80) = 0;
LAB_148882dfc:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148882de9:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x78) = plVar7;
    plVar7 = *(longlong **)(param_1 + 0x80);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x000148882de9;
      }
    }
    else {
      *(longlong **)(param_1 + 0x80) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_148882dfc;
    }
  }
  plVar7 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  uVar4 = (uint)((ulonglong)DAT_14cb7fb80 >> 0x10);
  uVar9 = (uint)DAT_14cb7fb80 & 0xffff;
  plVar7 = (longlong *)
           FUN_148883ae2(*(longlong *)(param_1 + 0x78) + 0x18,
                         ((uint)DAT_14cb7fb80 << 0x10 | uVar9) +
                         (int)((ulonglong)DAT_14cb7fb80 >> 0x20) + (uVar4 << 0x13 | uVar4 & 0xffff)
                         + (uVar9 >> 4));
  if ((int)plVar7[1] != 3) {
    FUN_1446efa72(plVar7,0,3,0x10);
    *(undefined4 *)(plVar7 + 1) = 3;
  }
  puVar3 = (undefined8 *)*plVar7;
  *puVar3 = &PTR_LAB_14b40b570;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar8;
  *puVar3 = &PTR_FUN_14b40b500;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_1);
  puVar3[4] = FUN_148883838;
  local_40 = *(longlong *)(param_1 + 0x78);
LAB_148882bc8:
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  if (puVar3 == (undefined8 *)0x0) {
    local_38 = (undefined8 *)0x0;
    FUN_143d6d5ae(param_1);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_38 = puVar3;
    FUN_143d6d5ae(param_1);
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
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148882e4c FUN_148882e4c body=146 status=ok
// SIG undefined FUN_148882e4c(void)

void FUN_148882e4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x80);
    local_20 = lVar3;
    if (plVar4 == (longlong *)0x0) {
      local_18 = (longlong *)0x0;
      FUN_143d6db86();
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_18 = plVar4;
      FUN_143d6db86();
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148882ee0 FUN_148882ee0 body=578 status=ok
// SIG undefined FUN_148882ee0(void)

ulonglong FUN_148882ee0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148883124(param_1,&local_88,0,param_3);
  lVar3 = local_88;
  if (local_88 != 0) {
    FUN_1488818d2(local_88,param_1,param_3);
  }
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_80 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar7 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
  if (lVar3 == 0) {
    plVar5 = (longlong *)FUN_145e1853e();
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3);
    plVar5 = DAT_14c966e90;
    if (plVar6 != (longlong *)0x0) {
      if (DAT_14c966e90 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
        UNLOCK();
      }
      local_70 = 0xffffffff;
      uStack_68 = 0x3c88888900000000;
      local_60 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_58 = (undefined4)DAT_14c8464e8;
      uStack_54 = DAT_14c8464e8._4_4_;
      local_50 = DAT_14c8464f0;
      local_48 = 0;
      local_88 = *(longlong *)(param_3 + 0x10);
      plStack_80 = *(longlong **)(param_3 + 0x18);
      local_78 = *(longlong **)(param_3 + 0x20);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
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
      local_70 = CONCAT44(*(undefined4 *)(param_3 + 0x28),(undefined4)local_70);
      local_60 = (double)*(float *)(param_3 + 0x2c);
      local_48 = FUN_140230656(param_3 + 0x10);
      cVar4 = (**(code **)(*plVar6 + 0xd08))(plVar6,&local_88);
      plVar5 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_78 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (cVar4 != '\0') goto LAB_148882f53;
    }
    FUN_148883124(param_1,&local_88,1,param_3);
    uVar7 = CONCAT71((int7)((ulonglong)&local_88 >> 8),local_88 != 0);
    if (local_88 != 0) {
      FUN_1488818d2(local_88,param_1,param_3);
    }
    plVar5 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_80 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
LAB_148882f53:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148883124 FUN_148883124 body=563 status=ok
// SIG undefined FUN_148883124(void)

longlong * FUN_148883124(longlong param_1,longlong *param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_1 + 0x40 + (ulonglong)param_3 * 0x10);
  if (0 < (int)uVar3) {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x28);
      lVar7 = (longlong)*(int *)(param_1 + 0x30) << 4;
      do {
        lVar5 = *plVar8;
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_4 + 8))) {
          if (plVar8 != (longlong *)0x0) {
            plVar8 = (longlong *)plVar8[1];
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            if ((*(longlong *)(lVar5 + 0x68) != 0) &&
               (*(uint *)(*(longlong *)(lVar5 + 0x68) + 0x6c) == param_3)) {
              *param_2 = lVar5;
              param_2[1] = (longlong)plVar8;
              goto LAB_148883210;
            }
            *param_2 = 0;
            param_2[1] = 0;
            if (plVar8 == (longlong *)0x0) goto LAB_148883210;
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 != 0) goto LAB_148883210;
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 != 0) goto LAB_148883210;
            (**(code **)(*plVar8 + 0x10))(plVar8);
            goto LAB_148883193;
          }
          break;
        }
        plVar8 = plVar8 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    if (*(int *)(param_4 + 0x28) == 0) {
      puVar9 = *(undefined8 **)((ulonglong)param_3 * 0x10 + param_1 + 0x38);
      lVar7 = (ulonglong)uVar3 << 4;
      do {
        cVar6 = (**(code **)(*(longlong *)*puVar9 + 8))((longlong *)*puVar9,param_4);
        if (cVar6 != '\0') {
          if (puVar9 != (undefined8 *)0x0) {
            FUN_143d6d514(param_1,&local_48);
            local_58 = *puVar9;
            local_50 = puVar9[1];
            if (local_50 != 0) {
              LOCK();
              *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
              UNLOCK();
            }
            FUN_143d6d19a(local_48,*(undefined4 *)(param_4 + 8),&local_58);
            iVar4 = *(int *)(param_1 + 0x30);
            *(uint *)(param_1 + 0x30) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
              FUN_148885f5e((longlong *)(param_1 + 0x28),iVar4);
            }
            lVar7 = *(longlong *)(param_1 + 0x28);
            *(longlong *)(lVar7 + (longlong)iVar4 * 0x10) = local_48;
            *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = local_40;
            if (local_40 == (longlong *)0x0) {
              *param_2 = local_48;
              param_2[1] = 0;
            }
            else {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
              *param_2 = local_48;
              param_2[1] = (longlong)local_40;
              if (local_40 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_40 + 1) = (int)local_40[1] + 1;
                UNLOCK();
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_40 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
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
            }
LAB_148883210:
            if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
              return param_2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          break;
        }
        puVar9 = puVar9 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148883193:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 148883358 FUN_148883358 body=315 status=ok
// SIG undefined FUN_148883358(void)

void FUN_148883358(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  iVar7 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_40 = iVar7;
  if (iVar7 == 0) {
    local_3c = 0;
    iVar7 = 0;
  }
  else {
    FUN_1488867ec(&local_48,iVar7);
    FUN_148886844(local_48,uVar3,iVar7);
    lVar6 = local_48;
    lVar9 = (longlong)local_40;
    iVar7 = 0;
    if (lVar9 != 0) {
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar6 + lVar8);
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x68) != 0)) &&
           (*(longlong *)(lVar5 + 0x68) == *param_2)) {
          local_50 = *(longlong *)(lVar6 + 8 + lVar8);
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          local_58 = lVar5;
          FUN_148883494(param_1,&local_58);
        }
        lVar8 = lVar8 + 0x10;
        iVar7 = local_40;
      } while (lVar9 * 0x10 != lVar8);
    }
  }
  FUN_1459488ac(local_48,iVar7);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148883494 FUN_148883494 body=257 status=ok
// SIG undefined FUN_148883494(void)

void FUN_148883494(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_38 = (longlong *)param_2[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  FUN_148885fe4(param_1 + 0x28);
  plVar6 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_143d6d360(*param_2);
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_148886ccc((longlong *)(param_1 + 0x58),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148883596 FUN_148883596 body=83 status=ok
// SIG undefined FUN_148883596(void)

undefined8 * FUN_148883596(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x10 + (longlong)iVar2 * 0x10);
  lVar1 = *(longlong *)(lVar1 + -8 + (longlong)iVar2 * 0x10);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    iVar2 = (int)param_1[1];
  }
  FUN_148886a7a(param_1,iVar2 + -1);
  FUN_148886af0(param_1);
  return param_2;
}



// FUNCTION 1488835ea FUN_1488835ea body=189 status=ok
// SIG undefined FUN_1488835ea(void)

void FUN_1488835ea(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x28);
    lVar5 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == param_2)) {
        if (plVar4 != (longlong *)0x0) {
          puVar3 = (undefined8 *)plVar4[1];
          local_28 = lVar2;
          if (puVar3 == (undefined8 *)0x0) {
            local_20 = (undefined8 *)0x0;
            FUN_148883494();
          }
          else {
            LOCK();
            *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
            UNLOCK();
            LOCK();
            *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
            UNLOCK();
            local_20 = puVar3;
            FUN_148883494();
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
        break;
      }
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488836b8 FUN_1488836b8 body=383 status=ok
// SIG undefined FUN_1488836b8(void)

void FUN_1488836b8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  byte local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x68);
    lVar6 = (longlong)*(int *)(param_1 + 0x70) << 4;
    do {
      FUN_148881822(*puVar5,&local_98);
      local_68 = &PTR_FUN_14a184370;
      local_60 = local_98;
      local_58 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      local_50 = 0;
      local_88 = &PTR_FUN_14a184370;
      local_80 = *param_3;
      local_78 = param_3[1];
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      local_70 = 0;
      cVar4 = FUN_140ba41f1(&local_88,&local_68);
      local_88 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])(&local_80);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
      plVar3 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (cVar4 != '\0') {
        if (puVar5 != (undefined8 *)0x0) {
          *local_a0 = *puVar5;
          lVar6 = puVar5[1];
          local_a0[1] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          goto LAB_1488837e7;
        }
        break;
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  *local_a0 = 0;
  local_a0[1] = 0;
LAB_1488837e7:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148883838 FUN_148883838 body=248 status=ok
// SIG undefined FUN_148883838(void)

void FUN_148883838(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 3) != '\x01') {
    (**(code **)(*param_1 + 0x2b8))(param_1,local_40,*param_2);
    FUN_1488836b8(param_1,&local_30,local_40);
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
    if ((local_30 != 0) ||
       ((cVar3 = (**(code **)(*param_1 + 0x2d8))(param_1), cVar3 == '\0' &&
        (cVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,*param_2), cVar3 == '\0')))) {
      FUN_143d6dc74(param_1,*param_2);
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148883932 FUN_148883932 body=182 status=ok
// SIG undefined FUN_148883932(void)

undefined8 * FUN_148883932(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_30);
  if (local_30 == 0) {
    if ((int)param_1[0xe] < 1) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      puVar3 = (undefined8 *)param_1[0xd];
      *param_2 = *puVar3;
      lVar4 = puVar3[1];
      param_2[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
    }
  }
  else {
    FUN_1488836b8(param_1,param_2,&local_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488839fe FUN_1488839fe body=38 status=ok
// SIG undefined FUN_1488839fe(void)

undefined8 FUN_1488839fe(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


