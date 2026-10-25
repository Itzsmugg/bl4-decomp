// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14892532a FUN_14892532a body=118 status=ok
// SIG undefined FUN_14892532a(void)

void FUN_14892532a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d670;
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



// FUNCTION 1489253a0 FUN_1489253a0 body=118 status=ok
// SIG undefined FUN_1489253a0(void)

void FUN_1489253a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d670;
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



// FUNCTION 148925416 FUN_148925416 body=156 status=ok
// SIG undefined FUN_148925416(void)

void FUN_148925416(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b41d670;
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
                    /* WARNING: Could not recover jumptable at 0x0001489254a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489254b2 FUN_1489254b2 body=94 status=ok
// SIG undefined FUN_1489254b2(void)

void FUN_1489254b2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489254fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148925505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148925510 FUN_148925510 body=93 status=ok
// SIG undefined FUN_148925510(void)

ulonglong FUN_148925510(longlong param_1)

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
LAB_148925562:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148925562;
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



// FUNCTION 14892556e FUN_14892556e body=9 status=ok
// SIG undefined FUN_14892556e(void)

void FUN_14892556e(longlong param_1)

{
  FUN_140e7c694(param_1 + 0x10);
  return;
}



// FUNCTION 148925578 FUN_148925578 body=29 status=ok
// SIG undefined FUN_148925578(void)

undefined8 FUN_148925578(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148925596 FUN_148925596 body=158 status=ok
// SIG undefined FUN_148925596(void)

void FUN_148925596(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148925608;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148925608;
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
LAB_148925608:
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
                    /* WARNING: Could not recover jumptable at 0x000148925628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148925634 FUN_148925634 body=132 status=ok
// SIG undefined FUN_148925634(void)

void FUN_148925634(longlong param_1,int param_2)

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



// FUNCTION 1489256ba FUN_1489256ba body=381 status=ok
// SIG undefined FUN_1489256ba(void)

longlong * FUN_1489256ba(longlong *param_1,longlong param_2)

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
LAB_1489257c5:
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
    *puVar3 = &PTR_FUN_14b41d700;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14891d4bc;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1489257c5;
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
    *puVar3 = &PTR_FUN_14b41d700;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14891d4bc;
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



// FUNCTION 148925838 FUN_148925838 body=64 status=ok
// SIG undefined FUN_148925838(void)

undefined8 * FUN_148925838(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41d700;
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



// FUNCTION 14892587c FUN_14892587c body=81 status=ok
// SIG undefined FUN_14892587c(void)

undefined8 FUN_14892587c(longlong param_1)

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



// FUNCTION 1489258d4 FUN_1489258d4 body=89 status=ok
// SIG undefined FUN_1489258d4(void)

bool FUN_1489258d4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14892591f;
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
LAB_14892591f:
  return lVar6 == param_2;
}



// FUNCTION 14892594a FUN_14892594a body=118 status=ok
// SIG undefined FUN_14892594a(void)

void FUN_14892594a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d700;
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



// FUNCTION 1489259c0 FUN_1489259c0 body=118 status=ok
// SIG undefined FUN_1489259c0(void)

void FUN_1489259c0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d700;
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



// FUNCTION 148925a36 FUN_148925a36 body=156 status=ok
// SIG undefined FUN_148925a36(void)

void FUN_148925a36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b41d700;
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
                    /* WARNING: Could not recover jumptable at 0x000148925ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148925ad2 FUN_148925ad2 body=94 status=ok
// SIG undefined FUN_148925ad2(void)

void FUN_148925ad2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148925b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148925b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148925b30 FUN_148925b30 body=93 status=ok
// SIG undefined FUN_148925b30(void)

ulonglong FUN_148925b30(longlong param_1)

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
LAB_148925b82:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148925b82;
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



// FUNCTION 148925b8e FUN_148925b8e body=48 status=ok
// SIG undefined FUN_148925b8e(void)

void FUN_148925b8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148925bbe FUN_148925bbe body=9 status=ok
// SIG undefined FUN_148925bbe(void)

void FUN_148925bbe(longlong param_1)

{
  FUN_14879603e(param_1 + 0x10);
  return;
}



// FUNCTION 148925bc8 FUN_148925bc8 body=29 status=ok
// SIG undefined FUN_148925bc8(void)

undefined8 FUN_148925bc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148925be6 FUN_148925be6 body=158 status=ok
// SIG undefined FUN_148925be6(void)

void FUN_148925be6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148925c58;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148925c58;
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
LAB_148925c58:
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
                    /* WARNING: Could not recover jumptable at 0x000148925c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148925c88 FUN_148925c88 body=81 status=ok
// SIG undefined FUN_148925c88(void)

undefined8 FUN_148925c88(longlong param_1)

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



// FUNCTION 148925ce0 FUN_148925ce0 body=89 status=ok
// SIG undefined FUN_148925ce0(void)

bool FUN_148925ce0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148925d2b;
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
LAB_148925d2b:
  return lVar6 == param_2;
}



// FUNCTION 148925d56 FUN_148925d56 body=118 status=ok
// SIG undefined FUN_148925d56(void)

void FUN_148925d56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d790;
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



// FUNCTION 148925dcc FUN_148925dcc body=156 status=ok
// SIG undefined FUN_148925dcc(void)

void FUN_148925dcc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b41d790;
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
                    /* WARNING: Could not recover jumptable at 0x000148925e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148925e68 FUN_148925e68 body=94 status=ok
// SIG undefined FUN_148925e68(void)

void FUN_148925e68(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148925eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148925ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148925ec6 FUN_148925ec6 body=9 status=ok
// SIG undefined FUN_148925ec6(void)

void FUN_148925ec6(longlong param_1)

{
  FUN_140e7c694(param_1 + 0x10);
  return;
}



// FUNCTION 148925ed0 FUN_148925ed0 body=29 status=ok
// SIG undefined FUN_148925ed0(void)

undefined8 FUN_148925ed0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148925eee FUN_148925eee body=158 status=ok
// SIG undefined FUN_148925eee(void)

void FUN_148925eee(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148925f60;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148925f60;
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
LAB_148925f60:
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
                    /* WARNING: Could not recover jumptable at 0x000148925f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148925f8c FUN_148925f8c body=381 status=ok
// SIG undefined FUN_148925f8c(void)

longlong * FUN_148925f8c(longlong *param_1,longlong param_2)

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
LAB_148926097:
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
    *puVar3 = &PTR_FUN_14b41d840;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14891dcc8;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148926097;
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
    *puVar3 = &PTR_FUN_14b41d840;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14891dcc8;
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



// FUNCTION 14892610a FUN_14892610a body=64 status=ok
// SIG undefined FUN_14892610a(void)

undefined8 * FUN_14892610a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41d840;
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



// FUNCTION 14892614e FUN_14892614e body=81 status=ok
// SIG undefined FUN_14892614e(void)

undefined8 FUN_14892614e(longlong param_1)

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



// FUNCTION 1489261a6 FUN_1489261a6 body=89 status=ok
// SIG undefined FUN_1489261a6(void)

bool FUN_1489261a6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489261f1;
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
LAB_1489261f1:
  return lVar6 == param_2;
}



// FUNCTION 14892621c FUN_14892621c body=118 status=ok
// SIG undefined FUN_14892621c(void)

void FUN_14892621c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d840;
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



// FUNCTION 148926292 FUN_148926292 body=118 status=ok
// SIG undefined FUN_148926292(void)

void FUN_148926292(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41d840;
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



// FUNCTION 148926308 FUN_148926308 body=156 status=ok
// SIG undefined FUN_148926308(void)

void FUN_148926308(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b41d840;
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
                    /* WARNING: Could not recover jumptable at 0x000148926394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489263a4 FUN_1489263a4 body=94 status=ok
// SIG undefined FUN_1489263a4(void)

void FUN_1489263a4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489263ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489263f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148926402 FUN_148926402 body=93 status=ok
// SIG undefined FUN_148926402(void)

ulonglong FUN_148926402(longlong param_1)

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
LAB_148926454:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148926454;
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



// FUNCTION 148926460 FUN_148926460 body=9 status=ok
// SIG undefined FUN_148926460(void)

void FUN_148926460(longlong param_1)

{
  FUN_140e7c694(param_1 + 0x10);
  return;
}



// FUNCTION 14892646a FUN_14892646a body=29 status=ok
// SIG undefined FUN_14892646a(void)

undefined8 FUN_14892646a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926488 FUN_148926488 body=158 status=ok
// SIG undefined FUN_148926488(void)

void FUN_148926488(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489264fa;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489264fa;
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
LAB_1489264fa:
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
                    /* WARNING: Could not recover jumptable at 0x00014892651a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148926526 FUN_148926526 body=9 status=ok
// SIG undefined FUN_148926526(void)

void FUN_148926526(longlong param_1)

{
  FUN_143c8826c(param_1 + 0x10);
  return;
}



// FUNCTION 148926530 FUN_148926530 body=29 status=ok
// SIG undefined FUN_148926530(void)

undefined8 FUN_148926530(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892654e FUN_14892654e body=158 status=ok
// SIG undefined FUN_14892654e(void)

void FUN_14892654e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489265c0;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489265c0;
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
LAB_1489265c0:
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
                    /* WARNING: Could not recover jumptable at 0x0001489265e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489265ec FUN_1489265ec body=64 status=ok
// SIG undefined FUN_1489265ec(void)

undefined8 * FUN_1489265ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41da40;
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



// FUNCTION 148926630 FUN_148926630 body=81 status=ok
// SIG undefined FUN_148926630(void)

undefined8 FUN_148926630(longlong param_1)

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



// FUNCTION 148926688 FUN_148926688 body=89 status=ok
// SIG undefined FUN_148926688(void)

bool FUN_148926688(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489266d3;
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
LAB_1489266d3:
  return lVar6 == param_2;
}



// FUNCTION 1489266fe FUN_1489266fe body=118 status=ok
// SIG undefined FUN_1489266fe(void)

void FUN_1489266fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41da40;
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



// FUNCTION 148926774 FUN_148926774 body=118 status=ok
// SIG undefined FUN_148926774(void)

void FUN_148926774(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41da40;
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



// FUNCTION 1489267ea FUN_1489267ea body=156 status=ok
// SIG undefined FUN_1489267ea(void)

void FUN_1489267ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41da40;
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
                    /* WARNING: Could not recover jumptable at 0x000148926876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148926886 FUN_148926886 body=94 status=ok
// SIG undefined FUN_148926886(void)

void FUN_148926886(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489268ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489268d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1489268e4 FUN_1489268e4 body=93 status=ok
// SIG undefined FUN_1489268e4(void)

ulonglong FUN_1489268e4(longlong param_1)

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
LAB_148926936:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148926936;
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



// FUNCTION 148926942 FUN_148926942 body=9 status=ok
// SIG undefined FUN_148926942(void)

void FUN_148926942(longlong param_1)

{
  FUN_143c8367a(param_1 + 0x10);
  return;
}



// FUNCTION 14892694c FUN_14892694c body=29 status=ok
// SIG undefined FUN_14892694c(void)

undefined8 FUN_14892694c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892696a FUN_14892696a body=158 status=ok
// SIG undefined FUN_14892696a(void)

void FUN_14892696a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489269dc;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489269dc;
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
LAB_1489269dc:
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
                    /* WARNING: Could not recover jumptable at 0x0001489269fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148926a08 FUN_148926a08 body=9 status=ok
// SIG undefined FUN_148926a08(void)

void FUN_148926a08(longlong param_1)

{
  FUN_143c8826c(param_1 + 0x10);
  return;
}



// FUNCTION 148926a12 FUN_148926a12 body=29 status=ok
// SIG undefined FUN_148926a12(void)

undefined8 FUN_148926a12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926a30 FUN_148926a30 body=158 status=ok
// SIG undefined FUN_148926a30(void)

void FUN_148926a30(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148926aa2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148926aa2;
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
LAB_148926aa2:
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
                    /* WARNING: Could not recover jumptable at 0x000148926ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148926ace FUN_148926ace body=1 status=ok
// SIG undefined FUN_148926ace(void)

void FUN_148926ace(void)

{
  return;
}



// FUNCTION 148926ad0 FUN_148926ad0 body=29 status=ok
// SIG undefined FUN_148926ad0(void)

undefined8 FUN_148926ad0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926af0 FUN_148926af0 body=29 status=ok
// SIG undefined FUN_148926af0(void)

undefined8 FUN_148926af0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926b0d FUN_148926b0d body=95 status=ok
// SIG undefined FUN_148926b0d(void)

void FUN_148926b0d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b41db70;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[2] = &PTR_FUN_14b3a4ab0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x44fa0000;
  *(undefined1 *)(puVar1 + 7) = 2;
  return;
}



// FUNCTION 148926b6e FUN_148926b6e body=29 status=ok
// SIG undefined FUN_148926b6e(void)

undefined8 FUN_148926b6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926b8c FUN_148926b8c body=135 status=ok
// SIG undefined FUN_148926b8c(void)

undefined8 FUN_148926b8c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_14652d7e4();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_148926c14(param_1,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148926c14 FUN_148926c14 body=83 status=ok
// SIG undefined FUN_148926c14(void)

longlong * FUN_148926c14(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14652d7e4();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148926c68 FUN_148926c68 body=83 status=ok
// SIG undefined FUN_148926c68(void)

longlong * FUN_148926c68(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14652ded4();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148926cbc FUN_148926cbc body=9 status=ok
// SIG undefined FUN_148926cbc(void)

void FUN_148926cbc(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148926cc6 FUN_148926cc6 body=29 status=ok
// SIG undefined FUN_148926cc6(void)

undefined8 FUN_148926cc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926ce4 FUN_148926ce4 body=38 status=ok
// SIG undefined FUN_148926ce4(void)

undefined8 FUN_148926ce4(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148926d10 FUN_148926d10 body=78 status=ok
// SIG undefined FUN_148926d10(void)

longlong * FUN_148926d10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465385da();
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



// FUNCTION 148926d64 FUN_148926d64 body=386 status=ok
// SIG undefined FUN_148926d64(void)

longlong * FUN_148926d64(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148926e75:
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b41dbe0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148926e75;
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
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b41dbe0;
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



// FUNCTION 148926ee6 FUN_148926ee6 body=64 status=ok
// SIG undefined FUN_148926ee6(void)

undefined8 * FUN_148926ee6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41dbe0;
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



// FUNCTION 148926f2a FUN_148926f2a body=81 status=ok
// SIG undefined FUN_148926f2a(void)

undefined8 FUN_148926f2a(longlong param_1)

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



// FUNCTION 148926f82 FUN_148926f82 body=89 status=ok
// SIG undefined FUN_148926f82(void)

bool FUN_148926f82(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148926fcd;
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
LAB_148926fcd:
  return lVar6 == param_2;
}



// FUNCTION 148926ff8 FUN_148926ff8 body=118 status=ok
// SIG undefined FUN_148926ff8(void)

void FUN_148926ff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41dbe0;
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



// FUNCTION 14892706e FUN_14892706e body=118 status=ok
// SIG undefined FUN_14892706e(void)

void FUN_14892706e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41dbe0;
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



// FUNCTION 1489270e4 FUN_1489270e4 body=156 status=ok
// SIG undefined FUN_1489270e4(void)

void FUN_1489270e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41dbe0;
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
                    /* WARNING: Could not recover jumptable at 0x000148927170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148927180 FUN_148927180 body=104 status=ok
// SIG undefined FUN_148927180(void)

void FUN_148927180(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489271cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489271de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489271e8 FUN_1489271e8 body=101 status=ok
// SIG undefined FUN_1489271e8(void)

ulonglong FUN_1489271e8(longlong param_1)

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
LAB_148927242:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148927242;
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



// FUNCTION 14892724e FUN_14892724e body=232 status=ok
// SIG undefined FUN_14892724e(void)

void FUN_14892724e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_148926d10();
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x20), plVar1 != (longlong *)0x0)) {
    uVar4 = FUN_141068cca(param_1);
    FUN_1410d9770(param_1,&local_58);
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_58,uVar4,param_2);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') goto LAB_14892730d;
  }
  uVar4 = (**(code **)(*param_2 + 0x118))(param_2);
  uVar5 = FUN_1410d0064();
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1460028be(uVar5,uVar4);
  FUN_140170a76(param_1,&DAT_14cb871c0);
LAB_14892730d:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148927338 FUN_148927338 body=167 status=ok
// SIG undefined FUN_148927338(void)

void FUN_148927338(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489273b3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489273b3;
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
LAB_1489273b3:
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
                    /* WARNING: Could not recover jumptable at 0x0001489273d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489273e0 FUN_1489273e0 body=9 status=ok
// SIG undefined FUN_1489273e0(void)

void FUN_1489273e0(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 1489273ea FUN_1489273ea body=29 status=ok
// SIG undefined FUN_1489273ea(void)

undefined8 FUN_1489273ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148927408 FUN_148927408 body=38 status=ok
// SIG undefined FUN_148927408(void)

undefined8 FUN_148927408(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892742e FUN_14892742e body=74 status=ok
// SIG undefined FUN_14892742e(void)

void FUN_14892742e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_2 + 8) == 0) || (0xfffffffd < *(int *)(param_2 + 0x10) - 1U)) {
    lVar1 = FUN_140fcbb85();
    if ((*(longlong *)(param_2 + 8) != *(longlong *)(lVar1 + 0x20)) ||
       (*(int *)(param_2 + 0x10) != *(int *)(lVar1 + 0x28))) {
      *(longlong *)(param_2 + 8) = *(longlong *)(lVar1 + 0x20);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 0x28);
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  return;
}



// FUNCTION 148927478 FUN_148927478 body=167 status=ok
// SIG undefined FUN_148927478(void)

void FUN_148927478(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489274f3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489274f3;
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
LAB_1489274f3:
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
                    /* WARNING: Could not recover jumptable at 0x000148927513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14892751f FUN_14892751f body=86 status=ok
// SIG undefined FUN_14892751f(void)

void FUN_14892751f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b41dd70;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[2] = &PTR_FUN_14affdd40;
  *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 148927580 FUN_148927580 body=29 status=ok
// SIG undefined FUN_148927580(void)

undefined8 FUN_148927580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489275a2 FUN_1489275a2 body=81 status=ok
// SIG undefined FUN_1489275a2(void)

undefined8 FUN_1489275a2(longlong param_1)

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



// FUNCTION 1489275fa FUN_1489275fa body=89 status=ok
// SIG undefined FUN_1489275fa(void)

bool FUN_1489275fa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148927645;
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
LAB_148927645:
  return lVar6 == param_2;
}



// FUNCTION 148927654 FUN_148927654 body=118 status=ok
// SIG undefined FUN_148927654(void)

void FUN_148927654(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41ddf0;
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



// FUNCTION 1489276ca FUN_1489276ca body=118 status=ok
// SIG undefined FUN_1489276ca(void)

void FUN_1489276ca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b41ddf0;
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



// FUNCTION 148927740 FUN_148927740 body=156 status=ok
// SIG undefined FUN_148927740(void)

void FUN_148927740(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ddf0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489277cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489277dc FUN_1489277dc body=104 status=ok
// SIG undefined FUN_1489277dc(void)

void FUN_1489277dc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148927829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014892783a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148927844 FUN_148927844 body=97 status=ok
// SIG undefined FUN_148927844(void)

void FUN_148927844(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b41dea0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = &PTR_FUN_14b008de0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1489278a6 FUN_1489278a6 body=107 status=ok
// SIG undefined FUN_1489278a6(void)

void FUN_1489278a6(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f4ea62(param_1 + 0x38,local_58,0,&DAT_14c948618);
  local_40 = local_58[0];
  FUN_1446dcdd4(local_38);
  FUN_1400d6974(local_38);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892791e FUN_14892791e body=86 status=ok
// SIG undefined FUN_14892791e(void)

void FUN_14892791e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x230;
  FUN_145816fcc(lVar1);
  if (*(char *)(param_1 + 0x420) == '\x01') {
    FUN_148927e89(param_1 + 0x350,lVar1,param_1 + 0x110);
    *(undefined1 *)(param_1 + 0x420) = 0;
  }
  FUN_1489280be(param_1 + 0x350,lVar1);
  return;
}



// FUNCTION 148927974 FUN_148927974 body=189 status=ok
// SIG undefined FUN_148927974(void)

undefined8 FUN_148927974(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458ecf5c();
  FUN_144a5c54a(local_b8,uVar1);
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148927a32 FUN_148927a32 body=316 status=ok
// SIG undefined FUN_148927a32(void)

longlong * FUN_148927a32(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407fec00();
  *param_1 = (longlong)&PTR_FUN_14b41e300;
  plVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) < 0) {
    FUN_1402191ca(plVar1,0);
  }
  lVar5 = FUN_14574082c();
  if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x48), 1 < iVar2)) {
    iVar7 = 0;
    do {
      FUN_1401cfb1c(lVar5,&local_60,iVar7);
      puVar6 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar6 = local_60;
      }
      FUN_1446f470e(&local_50,puVar6,1);
      iVar3 = (int)param_1[0xb];
      *(uint *)(param_1 + 0xb) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
        FUN_1446f84a2(plVar1,iVar3);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = 0;
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = local_50;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 + -1 != iVar7);
  }
  FUN_1407fecba(param_1 + 0xc,(int)param_1[0xb],1);
  param_1[7] = 0;
  (**(code **)(*param_1 + 0xa8))(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148927b70 FUN_148927b70 body=20 status=ok
// SIG undefined FUN_148927b70(void)

void FUN_148927b70(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = DAT_14cb88a20;
  return;
}



// FUNCTION 148927b8a FUN_148927b8a body=40 status=ok
// SIG undefined FUN_148927b8a(void)

void FUN_148927b8a(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [192];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  if (((*(byte *)(param_1 + 0x8e5) == param_2) ||
      (*(byte *)(param_1 + 0x8e5) = param_2, *(int *)(param_1 + 0x798) != 2)) ||
     (lVar2 = *(longlong *)(param_1 + 0xa8), lVar2 == 0)) {
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(lVar2 + 0x65) & 1) != param_2) {
    *(byte *)(lVar2 + 0x65) = *(byte *)(lVar2 + 0x65) & 0xfe | param_2;
    puStack_30 = (undefined1 *)0x0;
    uStack_28 = 0x1800000000;
    FUN_1448c0c58(lVar2,auStack_f0,0);
    if (0 < (int)uStack_28) {
      lVar5 = 0;
      do {
        puVar4 = puStack_30;
        if (puStack_30 == (undefined1 *)0x0) {
          puVar4 = auStack_f0;
        }
        (**(code **)(**(longlong **)(puVar4 + lVar5 * 8) + 0x3f8))();
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_28);
    }
    plVar1 = *(longlong **)(lVar2 + 0x1c8);
    if (plVar1 != (longlong *)0x0) {
      if ((longlong)(int)plVar1[0x44] < 1) {
        if ((DAT_14c76142c != 1) || ((*(byte *)(plVar1 + 0x3f) & 2) == 0)) {
          cVar3 = (**(code **)(*plVar1 + 0x508))(plVar1,0,1,0);
          *(byte *)(plVar1 + 0x3f) = *(byte *)(plVar1 + 0x3f) & 0xfd | cVar3 * '\x02';
        }
      }
      else {
        lVar2 = *(longlong *)(plVar1[0x43] + -8 + (longlong)(int)plVar1[0x44] * 8);
        *(byte *)(lVar2 + 0x608) = *(byte *)(lVar2 + 0x608) | 2;
        *(undefined4 *)(lVar2 + 0x10) = 3;
        *(undefined4 *)(lVar2 + 200) = 0xffffffff;
      }
    }
    if (puStack_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148927bb2 FUN_148927bb2 body=442 status=ok
// SIG undefined FUN_148927bb2(void)

void FUN_148927bb2(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [47];
  byte local_79;
  uint local_78;
  uint local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x8e8);
  if (param_3 == '\0') {
    local_58 = 0;
    FUN_14485c47a(&local_58);
    local_50 = &local_58;
    FUN_14892e3ce(plVar1);
  }
  else {
    local_50 = (undefined8 *)0x0;
    FUN_14485c47a();
    iVar8 = *(int *)(param_1 + 0x8f0);
    *(uint *)(param_1 + 0x8f0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x8f4) < iVar8 + 1U) {
      FUN_14892e348(plVar1,iVar8);
    }
    *(undefined8 **)(*plVar1 + (longlong)iVar8 * 8) = local_50;
  }
  uVar2 = *(uint *)(param_1 + 0x8f0);
  lVar12 = (longlong)(int)uVar2;
  uVar7 = 0;
  if (lVar12 != 0) {
    lVar9 = *plVar1;
    local_70 = param_1;
    bVar4 = FUN_144729dda(lVar9);
    local_60 = lVar9 + 8;
    uVar10 = 0;
    local_68 = lVar9;
    do {
      local_79 = bVar4 ^ 1;
      lVar9 = (longlong)(int)uVar10;
      uVar3 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar2) {
        uVar3 = uVar2;
      }
      lVar11 = local_60 + lVar9 * 8;
      lVar6 = lVar9;
      local_78 = uVar7;
      local_74 = uVar10;
      do {
        lVar6 = lVar6 + 1;
        uVar7 = uVar3;
        if (lVar12 <= lVar6) break;
        bVar5 = FUN_144729dda(lVar11);
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
        uVar7 = uVar10;
      } while ((bVar4 & 1) == bVar5);
      uVar10 = uVar7;
      uVar7 = local_78;
      if ((bVar4 & 1) != 0) {
        iVar8 = uVar10 - local_74;
        if (local_78 != local_74) {
          memmove((void *)(local_68 + (longlong)(int)local_78 * 8),(void *)(local_68 + lVar9 * 8),
                  (longlong)iVar8 << 3);
        }
        uVar7 = uVar7 + iVar8;
      }
      bVar4 = local_79;
    } while (lVar6 < lVar12);
    *(uint *)(local_70 + 0x8f0) = uVar7;
    uVar7 = (uint)(0 < (int)uVar7);
    param_1 = local_70;
  }
  if (*(char *)(param_1 + 0x8e4) != (char)uVar7) {
    *(char *)(param_1 + 0x8e4) = (char)uVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148927d6e FUN_148927d6e body=109 status=ok
// SIG undefined FUN_148927d6e(void)

void FUN_148927d6e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  lVar1 = FUN_14479d2ce(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_143e00984(uVar2,param_2);
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  lVar3 = FUN_14479d2ce(lVar3 + 0x28);
  if (lVar3 != lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000148927dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,lVar3,lVar1,*(code **)(*param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 148927ddc FUN_148927ddc body=109 status=ok
// SIG undefined FUN_148927ddc(void)

void FUN_148927ddc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  lVar1 = FUN_14479d2ce(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_14892829e(uVar2,param_2);
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  lVar3 = FUN_14479d2ce(lVar3 + 0x28);
  if (lVar3 != lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000148927e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,lVar3,lVar1,*(code **)(*param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 148927e4a FUN_148927e4a body=63 status=ok
// SIG undefined FUN_148927e4a(void)

longlong FUN_148927e4a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14892ea6c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_14892ea59(lVar2);
  return lVar2;
}



// FUNCTION 148927e89 FUN_148927e89 body=565 status=ok
// SIG undefined FUN_148927e89(void)

void FUN_148927e89(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_3 != *param_2) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(int *)(param_1 + 0x18) = *param_3;
  }
  FUN_14115e11a(param_1,param_3 + 2);
  if (((param_3[6] != param_2[6]) || (1e-08 < ABS((float)param_3[7] - (float)param_2[7]))) ||
     (1e-08 < ABS((float)param_3[8] - (float)param_2[8]))) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    *(int *)(param_1 + 0x20) = param_3[6];
    *(int *)(param_1 + 0x24) = param_3[7];
    *(int *)(param_1 + 0x28) = param_3[8];
  }
  lVar3 = *(longlong *)(param_3 + 0x2a);
  lVar1 = *(longlong *)(param_2 + 0x2a);
  if (lVar3 == 0 && lVar1 == 0) {
    cVar2 = FUN_147a3e954(param_3 + 10,param_2 + 10);
    if (cVar2 != '\0') goto LAB_148927f5b;
  }
  else {
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      lVar3 = *(longlong *)(param_3 + 0x2a);
    }
    if (lVar3 == lVar1) goto LAB_148927f5b;
  }
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_14115e0ba(param_1 + 0x30,param_3 + 10);
LAB_148927f5b:
  if ((char)param_3[0x2c] != (char)param_2[0x2c]) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(char *)(param_1 + 0xb9) = (char)param_3[0x2c];
  }
  lVar3 = *(longlong *)(param_3 + 0x2e);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_3 + 0x2e);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
  if ((param_3[0x30] != param_2[0x30]) || ((char)param_3[0x31] != (char)param_2[0x31])) {
    *(undefined1 *)(param_1 + 0xba) = 1;
    *(int *)(param_1 + 0xbc) = param_3[0x30];
    *(char *)(param_1 + 0xc0) = (char)param_3[0x31];
  }
  if (*(char *)((longlong)param_3 + 0xc5) != *(char *)((longlong)param_2 + 0xc5)) {
    *(undefined1 *)(param_1 + 0xc1) = 1;
    *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)((longlong)param_3 + 0xc5);
  }
  if (param_3[0x32] != param_2[0x32]) {
    *(undefined1 *)(param_1 + 0xc3) = 1;
    *(int *)(param_1 + 0xc4) = param_3[0x32];
  }
  if ((char)param_3[0x33] != (char)param_2[0x33]) {
    *(undefined1 *)(param_1 + 200) = 1;
    *(char *)(param_1 + 0xc9) = (char)param_3[0x33];
  }
  if (1e-08 < ABS((float)param_3[0x34] - (float)param_2[0x34])) {
    *(undefined1 *)(param_1 + 0xca) = 1;
    *(int *)(param_1 + 0xcc) = param_3[0x34];
  }
  return;
}



// FUNCTION 1489280be FUN_1489280be body=223 status=ok
// SIG undefined FUN_1489280be(void)

void FUN_1489280be(longlong param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = *param_2;
  }
  if (*(char *)(param_1 + 0x1d) == '\0') {
    *(undefined4 *)(param_1 + 0x20) = param_2[6];
    *(undefined4 *)(param_1 + 0x24) = param_2[7];
    *(undefined4 *)(param_1 + 0x28) = param_2[8];
  }
  if (*(char *)(param_1 + 0x1e) == '\0') {
    FUN_14115e0ba(param_1 + 0x30,param_2 + 10);
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_2 + 0x2c);
  }
  if (*(char *)(param_1 + 0xba) == '\0') {
    *(undefined4 *)(param_1 + 0xbc) = param_2[0x30];
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0x31);
  }
  if (*(char *)(param_1 + 0xc1) == '\0') {
    *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)((longlong)param_2 + 0xc5);
  }
  if (*(char *)(param_1 + 0xc3) == '\0') {
    *(undefined4 *)(param_1 + 0xc4) = param_2[0x32];
  }
  if (*(char *)(param_1 + 200) == '\0') {
    *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_2 + 0x33);
  }
  if (*(char *)(param_1 + 0xca) == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = param_2[0x34];
  }
  return;
}



// FUNCTION 14892819e FUN_14892819e body=255 status=ok
// SIG undefined FUN_14892819e(void)

void FUN_14892819e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b41e414);
  FUN_14482855a(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x84) = 0;
    local_28 = 0x4b82d394;
    uStack_24 = 0xbe904c29;
    uStack_20 = 0x9399c1ac;
    uStack_1c = 0x24466095;
    iVar1 = FUN_1448a256a(param_1);
    if (iVar1 < 1) {
      plVar3 = (longlong *)param_1[0x15];
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_140501a92();
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
        if (plVar3 != (longlong *)0x0) {
          uVar2 = FUN_140501a92();
          plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
          if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
            (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 0x22);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x84) = 1;
      FUN_144757f48(param_1,0x40);
      (**(code **)(*param_1 + 0x420))(param_1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892829e FUN_14892829e body=165 status=ok
// SIG undefined FUN_14892829e(void)

void FUN_14892829e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar3 = (longlong)*(int *)(param_1 + 0x20) * 8;
    do {
      lVar3 = lVar3 + -8;
      cVar1 = FUN_14892ebae(lVar2,param_2);
      if (cVar1 != '\0') break;
      lVar2 = lVar2 + 8;
    } while (lVar3 != 0);
  }
  local_38 = 0;
  FUN_14485c47a(&local_38,param_2);
  FUN_14892ec26(param_1 + 0x18,&local_38);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_148928344(param_1);
  return;
}



// FUNCTION 148928344 FUN_148928344 body=110 status=ok
// SIG undefined FUN_148928344(void)

void FUN_148928344(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  cVar2 = FUN_144729dda(puVar1);
  if ((cVar2 != '\0') && ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar5 = (longlong)*(int *)(param_1 + 0x20) << 3;
    do {
      cVar2 = FUN_14892eca2(lVar4,puVar1);
      if (cVar2 != '\0') {
        return;
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if (*(int *)(param_1 + 0x20) < 1) {
    puVar3 = &local_28;
    local_28 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
  }
  *puVar1 = *puVar3;
  return;
}



// FUNCTION 1489283b2 FUN_1489283b2 body=254 status=ok
// SIG undefined FUN_1489283b2(void)

void FUN_1489283b2(longlong *param_1,undefined8 param_2)

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
      cVar1 = FUN_14892eca2(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 8;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_14892849a;
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
      if (iVar2 + -1 <= lVar3) goto LAB_14892849a;
      cVar1 = FUN_14892eca2(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_14892849a:
  FUN_14892ed5e(param_1);
  return;
}



// FUNCTION 1489284c6 FUN_1489284c6 body=114 status=ok
// SIG undefined FUN_1489284c6(void)

void FUN_1489284c6(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((*(int *)(param_2 + 0x680) != 3) || (uVar1 = *(uint *)(param_2 + 0x690), (int)uVar1 < 1)) ||
      ((uVar1 == 1 && (**(int **)(param_2 + 0x688) != 3)))) || (*(char *)(param_1 + 0x4b0) != '\0'))
  {
    return;
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x3b4) < uVar1) {
    uVar4 = *(uint *)(param_1 + 0x3b4) + 1;
    uVar3 = uVar1 - 1;
    if (uVar4 <= uVar1 - 1) {
      uVar3 = uVar4;
    }
    uVar2 = 0;
    do {
      if (uVar4 == uVar2) goto LAB_148928523;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
    uVar3 = 0xffffffff;
LAB_148928523:
    uVar4 = 0;
    if (uVar3 < uVar1) {
      uVar4 = uVar3;
    }
    if ((int)uVar1 <= (int)uVar4) {
      return;
    }
  }
  FUN_141607fe6(param_1,uVar4,0);
  return;
}



// FUNCTION 148928538 FUN_148928538 body=163 status=ok
// SIG undefined FUN_148928538(void)

void FUN_148928538(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x3a8;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 == '\0') {
    cVar3 = FUN_144729dda(param_1 + 0x3a0);
    if (cVar3 == '\0') {
      cVar3 = FUN_144729dda(param_1 + 0x398);
      lVar4 = param_1 + 0x390;
      if (cVar3 != '\0') {
        lVar4 = param_1 + 0x398;
      }
      lVar4 = FUN_14479d2ce(lVar4);
      if (((lVar4 == 0) || (lVar4 = FUN_140bede9a(lVar4), lVar4 == 0)) ||
         (lVar4 = *(longlong *)(lVar4 + 0x738), lVar4 == 0)) goto LAB_148928555;
    }
    else {
      lVar4 = FUN_14479d2ce(param_1 + 0x3a0);
    }
    uVar2 = FUN_1475b00a8(lVar4);
    FUN_14485c47a(lVar1,uVar2);
  }
LAB_148928555:
  FUN_14479d2ce(lVar1);
  return;
}



// FUNCTION 1489285e8 FUN_1489285e8 body=231 status=ok
// SIG undefined FUN_1489285e8(void)

void FUN_1489285e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  lVar1 = FUN_148928538();
  if (lVar1 != 0) {
    if ((longlong)*(int *)(lVar1 + 0x670) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)
               (*(longlong *)(lVar1 + 0x668) + -0x14 + (longlong)*(int *)(lVar1 + 0x670) * 0x14);
    }
    *(undefined4 *)(param_1 + 0x4d8) = uVar2;
    if (*(int *)(param_2 + 0x740) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x728) + 0x30;
      if (*(longlong *)(param_2 + 0x728) == 0) {
        lVar1 = param_2 + 0x6a8;
      }
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x78) == 0) {
          *(undefined4 *)(param_1 + 0x4c8) = 0;
          uVar2 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(*(longlong *)(lVar1 + 0x70) + 4);
          uVar2 = *(undefined4 *)
                   (*(longlong *)(lVar1 + 0x70) + -0x18 + (longlong)*(int *)(lVar1 + 0x78) * 0x1c);
        }
        *(undefined4 *)(param_1 + 0x4cc) = uVar2;
        FUN_14101b390(lVar1,param_1 + 0x4d0,param_1 + 0x4d4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489286d0 FUN_1489286d0 body=335 status=ok
// SIG undefined FUN_1489286d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1489286d0(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar12 = *(float *)(param_1 + 0xe0);
  if ((fVar12 <= *(float *)(param_1 + 0x10)) || (*(char *)(param_1 + 0xe4) == '\x01')) {
    puVar7 = (undefined8 *)(param_1 + 0x80);
    pauVar8 = param_2;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined8 *)*pauVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
    }
  }
  else {
    fVar12 = (float)(-(uint)(1e-08 < ABS(fVar12)) & (uint)(*(float *)(param_1 + 0x10) / fVar12));
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    fVar10 = 0.0;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    lVar6 = *(longlong *)(param_3 + 0x80) + 0x30;
    if (*(longlong *)(param_3 + 0x80) == 0) {
      lVar6 = param_3;
    }
    if (lVar6 != 0) {
      fVar11 = 0.0;
      if ((longlong)*(int *)(lVar6 + 0x78) != 0) {
        fVar10 = *(float *)(*(longlong *)(lVar6 + 0x70) + 4);
        fVar11 = *(float *)(*(longlong *)(lVar6 + 0x70) + -0x18 +
                           (longlong)*(int *)(lVar6 + 0x78) * 0x1c);
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      FUN_1448c9f94(lVar6,(fVar11 - fVar10) * fVar12 + fVar10);
    }
    FUN_147b3fc80(param_2,param_1 + 0x20,param_1 + 0x80);
    dVar2 = *(double *)*param_2;
    dVar3 = *(double *)(*param_2 + 8);
    dVar4 = *(double *)param_2[1];
    dVar5 = *(double *)(param_2[1] + 8);
    dVar13 = dVar4 * dVar4 + dVar2 * dVar2;
    dVar16 = dVar5 * dVar5 + dVar3 * dVar3;
    auVar14._0_8_ = dVar13 + dVar16;
    auVar14._8_8_ = dVar13 + dVar16;
    uVar9 = -(ulonglong)(1e-08 <= auVar14._8_8_);
    auVar15 = sqrtpd(auVar14,auVar14);
    auVar17 = divpd(_DAT_149934d80,auVar15);
    auVar18._0_8_ = auVar17._0_8_ * dVar4;
    auVar18._8_8_ = auVar17._8_8_ * dVar5;
    auVar15._8_4_ = (int)uVar9;
    auVar15._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
    auVar15._12_4_ = (int)(uVar9 >> 0x20);
    auVar15 = blendvpd(_DAT_149935300,auVar18,auVar15);
    uVar9 = (ulonglong)(dVar3 * auVar17._8_8_) & uVar9;
    auVar1._8_4_ = (int)uVar9;
    auVar1._0_8_ = (ulonglong)(dVar2 * auVar17._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_);
    auVar1._12_4_ = (int)(uVar9 >> 0x20);
    *param_2 = auVar1;
    param_2[1] = auVar15;
  }
  return param_2;
}



// FUNCTION 14892883a FUN_14892883a body=140 status=ok
// SIG undefined FUN_14892883a(void)

void FUN_14892883a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145933f56();
  FUN_1446f470e(&local_38,L"ReplicatedMoveState",1);
  uVar1 = FUN_145a82336();
  FUN_145a82336();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489288c8 FUN_1489288c8 body=79 status=ok
// SIG undefined FUN_1489288c8(void)

void FUN_1489288c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1414b29cc(param_1,param_3);
  lVar1 = FUN_14479d2ce(param_1 + 0x390);
  puVar2 = &DAT_14c846480;
  if (*(longlong *)(lVar1 + 0x1c8) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1c8) + 0x240);
  }
  puVar3 = (undefined8 *)(param_1 + 0x4e0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14892891a FUN_14892891a body=143 status=ok
// SIG undefined FUN_14892891a(void)

void FUN_14892891a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    puVar3 = &DAT_14c846480;
    puVar4 = (undefined8 *)(param_1 + 0x4e0);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined8 *)(param_1 + 0x540) = 0;
    cVar1 = FUN_144729dda(param_1 + 0x390);
    puVar3 = &DAT_14c846480;
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x390);
      puVar3 = &DAT_14c846480;
      if (*(longlong *)(lVar2 + 0x1c8) != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1c8) + 0x240);
      }
    }
    puVar4 = (undefined8 *)(param_1 + 0x4e0);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



// FUNCTION 1489289aa FUN_1489289aa body=137 status=ok
// SIG undefined FUN_1489289aa(void)

void FUN_1489289aa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    cVar1 = FUN_144729dda(param_1 + 0x390);
    if (cVar1 == '\0') {
      puVar3 = &DAT_14c846480;
    }
    else {
      lVar2 = FUN_14479d2ce(param_1 + 0x390);
      puVar3 = &DAT_14c846480;
      if (*(longlong *)(lVar2 + 0x1c8) != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1c8) + 0x240);
      }
    }
    puVar4 = (undefined8 *)(param_1 + 0x4e0);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if ((*(char *)(param_1 + 0x4b0) == '\x01') && (*(char *)(param_1 + 0x4a4) == '\x01')) {
      *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
    }
    *(undefined1 *)(param_1 + 0x4c4) = 1;
  }
  return;
}



// FUNCTION 148928a34 FUN_148928a34 body=159 status=ok
// SIG undefined FUN_148928a34(void)

void FUN_148928a34(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  byte bVar6;
  bool bVar7;
  
  lVar1 = param_1 + 0x390;
  cVar3 = FUN_144729dda(lVar1);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x178) != '\x03')) {
    uVar4 = FUN_14479d2ce(lVar1);
    lVar5 = FUN_140bede9a(uVar4);
    if (lVar5 == 0) {
      bVar6 = 1;
    }
    else {
      bVar6 = *(byte *)(lVar5 + 0x785);
    }
    iVar2 = *(int *)(param_1 + 0x540);
    bVar7 = *(int *)(param_1 + 0x550) == iVar2;
    *(int *)(param_1 + 0x550) = iVar2;
    uVar4 = FUN_14479d2ce(lVar1);
    FUN_1413d4c10(uVar4,param_1 + 0x4e0,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar7 & bVar6) & 0xffffffff,0,
                  !bVar7 * '\x02');
  }
  return;
}



// FUNCTION 148928ad4 FUN_148928ad4 body=472 status=ok
// SIG undefined FUN_148928ad4(void)

void FUN_148928ad4(longlong *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1405f1eac();
  if ((char)param_1[0x7d] == '\x01') {
    lVar4 = FUN_1447210f0(param_1);
    local_88 = 0;
    FUN_14485c47a(&local_88,param_1[0x75]);
    if ((lVar4 != 0) && (cVar2 = FUN_144729dda(&local_88), cVar2 != '\0')) {
      uVar3 = (**(code **)(*(longlong *)param_1[0x75] + 0x570))();
      plVar5 = (longlong *)FUN_14479d2ce(&local_88);
      (**(code **)(*plVar5 + 0x720))(plVar5,0);
      local_90 = 0;
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      local_78 = &LAB_143e063ec;
      local_68 = 0;
      local_58 = &PTR_LAB_14b41ef80;
      local_50 = local_88;
      local_38 = 3;
      local_98 = local_80;
      local_80[0] = 0;
      local_7c = 0xbf800000;
      local_48 = uVar3;
      FUN_1406f4044(*puVar6,&local_90,&local_78,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    }
  }
  else {
    local_78 = (undefined1 *)0x0;
    uStack_70 = 0;
    FUN_1404dedd4(param_1[0x75],&local_78);
    puVar1 = local_78;
    lVar4 = (longlong)(int)uStack_70;
    if (lVar4 != 0) {
      lVar8 = 0;
      do {
        (**(code **)(*param_1 + 0x370))
                  (param_1,*(undefined8 *)(*(longlong *)(puVar1 + lVar8) + 0xa8));
        lVar8 = lVar8 + 8;
      } while (lVar4 * 8 != lVar8);
    }
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  uVar7 = FUN_1447210f0(param_1);
  FUN_148928cae(uVar7,param_1,1);
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148928cae FUN_148928cae body=178 status=ok
// SIG undefined FUN_148928cae(void)

void FUN_148928cae(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14045ac7c(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_28;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_14892929e(local_30,param_2,param_3);
      }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148928d62 FUN_148928d62 body=46 status=ok
// SIG undefined FUN_148928d62(void)

void FUN_148928d62(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447210f0();
  FUN_148928cae(uVar1,param_1,0);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148928d90 FUN_148928d90 body=422 status=ok
// SIG undefined FUN_148928d90(void)

void FUN_148928d90(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1404df0da();
  if (param_2 == (longlong *)0x0) goto LAB_148928e86;
  lVar2 = FUN_140bede9a(param_2);
  uVar3 = FUN_14045aae0();
  lVar4 = (**(code **)(*param_2 + 0x288))(param_2,uVar3);
  if (lVar4 == 0) {
LAB_148928e63:
    iVar6 = *(int *)(param_1 + 0x3d0);
  }
  else {
    uVar3 = FUN_14045aae0();
    lVar5 = FUN_144718840(lVar4,uVar3);
    if (lVar4 == lVar5) goto LAB_148928e63;
    iVar6 = *(int *)(param_1 + 0x3d0);
    if (lVar5 != 0) {
      lVar4 = FUN_144a78b9e();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (cVar1 = FUN_1449ce97a(param_2), cVar1 != '\0')) {
        FUN_14045adb4(local_50,lVar5);
        FUN_14892edfa(param_1 + 0x3c8,local_50);
      }
    }
  }
  if (lVar2 != 0) {
    local_50[0] = 0;
    FUN_14485c47a(local_50,lVar2);
    FUN_14892ec26(param_1 + 0x3d8,local_50);
    if (0 < iVar6) {
      FUN_148927bb2(lVar2,param_1,1);
    }
  }
  if ((*(int *)(param_1 + 0x3d0) < 1 == 0 < iVar6) && ((longlong)*(int *)(param_1 + 0x3e0) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x3d8);
    lVar4 = (longlong)*(int *)(param_1 + 0x3e0) << 3;
    do {
      cVar1 = FUN_144729dda(lVar2);
      if (cVar1 != '\0') {
        uVar3 = FUN_14479d2ce(lVar2);
        FUN_148927bb2(uVar3,param_1,1);
      }
      lVar2 = lVar2 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
LAB_148928e86:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148928f38 FUN_148928f38 body=383 status=ok
// SIG undefined FUN_148928f38(void)

void FUN_148928f38(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140bede9a(param_2);
    uVar3 = FUN_14045aae0();
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (lVar4 != 0) {
      uVar3 = FUN_14045aae0();
      lVar5 = FUN_144718840(lVar4,uVar3);
      if (lVar4 != lVar5) {
        iVar6 = *(int *)(param_1 + 0x3d0);
        if (lVar5 != 0) {
          FUN_14045adb4(local_50,lVar5);
          FUN_1489290b8(param_1 + 0x3c8,local_50);
        }
        goto LAB_148928fe2;
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x3d0);
LAB_148928fe2:
  if (lVar2 != 0) {
    local_50[0] = 0;
    FUN_14485c47a(local_50,lVar2);
    FUN_1489283b2(param_1 + 0x3d8,local_50);
    if (0 < iVar6) {
      FUN_148927bb2(lVar2,param_1,0);
    }
  }
  if ((*(int *)(param_1 + 0x3d0) < 1 == 0 < iVar6) && ((longlong)*(int *)(param_1 + 0x3e0) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x3d8);
    lVar4 = (longlong)*(int *)(param_1 + 0x3e0) << 3;
    do {
      cVar1 = FUN_144729dda(lVar2);
      if (cVar1 != '\0') {
        uVar3 = FUN_14479d2ce(lVar2);
        FUN_148927bb2(uVar3,param_1,0);
      }
      lVar2 = lVar2 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_1415e2276(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489290b8 FUN_1489290b8 body=173 status=ok
// SIG undefined FUN_1489290b8(void)

void FUN_1489290b8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1) {
    return;
  }
  lVar3 = 0;
  bVar4 = false;
  do {
    lVar3 = (longlong)(int)lVar3;
    plVar2 = (longlong *)(lVar3 * 0x10 + *param_1 + 8);
    while (*plVar2 != *(longlong *)(param_2 + 8)) {
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 2;
      if (iVar1 <= lVar3) {
        if (!bVar4) {
          return;
        }
        goto LAB_148929155;
      }
    }
    iVar5 = (iVar1 + -1) - (int)lVar3;
    if (iVar5 != 0) {
      if (0 < iVar5) {
        iVar5 = 1;
      }
      memmove(plVar2 + -1,(void *)(*param_1 + (longlong)(iVar1 - iVar5) * 0x10),(longlong)iVar5 << 4
             );
      iVar1 = (int)param_1[1];
    }
    iVar1 = iVar1 + -1;
    *(int *)(param_1 + 1) = iVar1;
    bVar4 = true;
  } while ((int)lVar3 < iVar1);
LAB_148929155:
  FUN_14892ee6a(param_1);
  return;
}



// FUNCTION 148929166 FUN_148929166 body=63 status=ok
// SIG undefined FUN_148929166(void)

longlong FUN_148929166(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14892ef14(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_14892ef05(lVar2);
  return lVar2;
}



// FUNCTION 1489291a6 FUN_1489291a6 body=1 status=ok
// SIG undefined FUN_1489291a6(void)

void FUN_1489291a6(void)

{
  return;
}



// FUNCTION 1489291a8 FUN_1489291a8 body=53 status=ok
// SIG undefined FUN_1489291a8(void)

void FUN_1489291a8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140bede9a();
    if (lVar1 != 0) {
      FUN_143dff222(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1489291de FUN_1489291de body=66 status=ok
// SIG undefined FUN_1489291de(void)

void FUN_1489291de(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140bede9a();
    if (lVar1 != 0) {
      FUN_143dff2a0(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148929220 FUN_148929220 body=46 status=ok
// SIG undefined FUN_148929220(void)

void FUN_148929220(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140bede9a();
    if (lVar1 != 0) {
      FUN_143dff6aa(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14892924e FUN_14892924e body=51 status=ok
// SIG undefined FUN_14892924e(void)

void FUN_14892924e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140bede9a();
    if (lVar1 != 0) {
      FUN_145816fcc(lVar1 + 0x680,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148929282 FUN_148929282 body=13 status=ok
// SIG undefined FUN_148929282(void)

void FUN_148929282(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// FUNCTION 148929290 FUN_148929290 body=13 status=ok
// SIG undefined FUN_148929290(void)

void FUN_148929290(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// FUNCTION 14892929e FUN_14892929e body=209 status=ok
// SIG undefined FUN_14892929e(void)

void FUN_14892929e(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
      lVar4 = (longlong)*(int *)(param_1 + 0x50) << 3;
      uVar6 = 0;
      do {
        lVar2 = FUN_14479d2ce(lVar5);
        if (lVar2 == param_2) {
          if (param_3 != '\0') goto LAB_14892935a;
          if ((-1 < (int)uVar6) && (iVar1 = *(int *)(param_1 + 0x50), (int)uVar6 < iVar1)) {
            if (iVar1 - 1U != uVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar6 & 0x7fffffff) * 8),
                      (void *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar6 & 0x7fffffff) * 8 +
                              8),(longlong)(int)((iVar1 - 1U) - uVar6) << 3);
              iVar1 = *(int *)(param_1 + 0x50);
            }
            *(int *)(param_1 + 0x50) = iVar1 + -1;
            FUN_14892f19c(param_1 + 0x48);
          }
          goto LAB_1489292f1;
        }
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (param_3 != '\0') {
LAB_14892935a:
      uVar3 = FUN_148929374(param_1 + 0x48);
      FUN_14485c47a(uVar3,param_2);
    }
  }
LAB_1489292f1:
  FUN_1411d7036(param_1);
  return;
}



// FUNCTION 148929374 FUN_148929374 body=59 status=ok
// SIG undefined FUN_148929374(void)

longlong FUN_148929374(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14892f116(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_14892f10e(lVar2);
  return lVar2;
}



// FUNCTION 1489293b0 FUN_1489293b0 body=162 status=ok
// SIG undefined FUN_1489293b0(void)

void FUN_1489293b0(longlong param_1,longlong *param_2)

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
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1406f071e(param_2,iVar2);
    }
    lVar3 = *param_2;
    lVar7 = (longlong)iVar2 * 0x20;
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    puVar1 = (undefined4 *)(lVar3 + lVar7);
    *puVar1 = *(undefined4 *)(param_1 + 0x10);
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
    iVar2 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
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



// FUNCTION 148929452 FUN_148929452 body=50 status=ok
// SIG undefined FUN_148929452(void)

void FUN_148929452(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144a787a6(param_1 + 0x330,param_3);
  *(undefined8 *)(param_1 + 0x340) = param_4;
  return;
}



// FUNCTION 148929484 FUN_148929484 body=44 status=ok
// SIG undefined FUN_148929484(void)

void FUN_148929484(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 800);
  uVar1 = *(undefined8 *)(param_1 + 0x300);
  uVar2 = *(undefined8 *)(param_1 + 0x308);
  uVar3 = *(undefined8 *)(param_1 + 0x318);
  param_2[2] = *(undefined8 *)(param_1 + 0x310);
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  *param_3 = *(undefined8 *)(param_1 + 0x328);
  return;
}



// FUNCTION 1489294b0 FUN_1489294b0 body=32 status=ok
// SIG undefined FUN_1489294b0(void)

undefined8 FUN_1489294b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FactExpression");
  return param_2;
}



// FUNCTION 1489294d0 FUN_1489294d0 body=133 status=ok
// SIG undefined FUN_1489294d0(void)

ulonglong FUN_1489294d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong unaff_RSI;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_2 + 0x48) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x40);
    plVar1 = plVar7 + (longlong)*(int *)(param_2 + 0x48) * 3;
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar3 + 0x28);
        unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
        if ((longlong)iVar2 == 0) goto LAB_148929543;
        lVar4 = *(longlong *)(lVar3 + 0x20);
        lVar8 = 0;
        while ((plVar5 = *(longlong **)(lVar4 + lVar8), plVar5 == (longlong *)0x0 ||
               (cVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar3), cVar6 != '\0'))) {
          lVar8 = lVar8 + 0x18;
          if ((longlong)iVar2 * 0x18 == lVar8) goto LAB_148929543;
        }
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar1);
  }
  unaff_RSI = 0;
LAB_148929543:
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 148929556 FUN_148929556 body=32 status=ok
// SIG undefined FUN_148929556(void)

undefined8 FUN_148929556(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Children Can Play");
  return param_2;
}



// FUNCTION 148929576 FUN_148929576 body=49 status=ok
// SIG undefined FUN_148929576(void)

void FUN_148929576(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1489295a8(&DAT_14cb88b08);
  memset(_Dst,0,0xe8);
  FUN_143c60060(_Dst);
  return;
}



// FUNCTION 1489295a8 FUN_1489295a8 body=96 status=ok
// SIG undefined FUN_1489295a8(void)

void FUN_1489295a8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xe80,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x1d;
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



// FUNCTION 148929608 FUN_148929608 body=44 status=ok
// SIG undefined FUN_148929608(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148929608(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb88b14 = _DAT_14cb88b14 + -1;
  *param_1 = DAT_14cb88b08;
  DAT_14cb88b08 = param_1;
  return;
}



// FUNCTION 148929634 FUN_148929634 body=44 status=ok
// SIG undefined FUN_148929634(void)

void FUN_148929634(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0xe8);
  FUN_143c60060(param_1);
  return;
}



// FUNCTION 148929687 FUN_148929687 body=145 status=ok
// SIG undefined FUN_148929687(void)

void FUN_148929687(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1405835d4(param_2);
  if ((plVar1 != (longlong *)0x0) && (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)*param_1;
    }
    FUN_1446f470e(&local_20,puVar2,1);
    local_38 = local_20;
    local_30 = 0;
    uStack_28 = 0;
    (**(code **)(*plVar1 + 0x2c0))(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892971a FUN_14892971a body=505 status=ok
// SIG undefined FUN_14892971a(void)

void FUN_14892971a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))
     ) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    lVar6 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x28);
        if (*plVar1 == param_2) {
          plVar10 = plVar1 + 1;
          if (plVar10 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            lVar6 = plVar1[2];
            if (lVar6 == 0) {
              uVar5 = FUN_140067708();
              lVar6 = FUN_14477b664(uVar5);
              plVar1[2] = lVar6;
            }
            lVar7 = plVar1[3];
            if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar10 != 0)) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
                lVar7 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar10);
              }
              plVar1[3] = lVar7;
            }
            FUN_1415a48ac(lVar7,&local_30);
            if ((local_30 != 0 & DAT_14cb26569) == 1) {
              FUN_1403c747e(*(undefined8 *)(param_1 + 0x40),&local_38,0);
              if (local_38 != 0) {
                local_58 = 0;
                FUN_14084a448(local_38,&local_50,local_30,param_1);
                local_50 = 0;
                local_48 = 0xffffffffffffffff;
              }
              FUN_144a61ac8(&local_38);
            }
            if ((local_30 != 0) && ((DAT_14cb26569 & 1) != 0)) {
              FUN_1400848c0(*(undefined8 *)(local_30 + 0x50));
            }
          }
          break;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148929930 FUN_148929930 body=112 status=ok
// SIG undefined FUN_148929930(void)

void FUN_148929930(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if ((iVar1 != 3) && (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 != 0)) {
        lVar3 = FUN_14041aabe();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_1486b0f6a(lVar2,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1489299a0 FUN_1489299a0 body=33 status=ok
// SIG undefined FUN_1489299a0(void)

void FUN_1489299a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1168) + 0x18))(param_1 + 0x1168);
  FUN_1489299c2(uVar1);
  return;
}



// FUNCTION 1489299c2 FUN_1489299c2 body=229 status=ok
// SIG undefined FUN_1489299c2(void)

void FUN_1489299c2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 0x128) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x128) + 0x178) == '\x03')) {
    cVar1 = FUN_1487bce18();
    if (cVar1 != '\0') goto LAB_148929a98;
  }
  FUN_1447f69b6(param_1);
  local_18 = *(undefined8 *)(param_1 + 0x128);
  FUN_1447cd2ec(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x128);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x120) == '\0') {
      (**(code **)(plVar2[0x22d] + 0x20))(plVar2 + 0x22d);
      plVar2 = *(longlong **)(param_1 + 0x128);
      if (plVar2 == (longlong *)0x0) goto LAB_148929a98;
    }
    if ((char)plVar2[0x2f] == '\x03') {
      cVar1 = (**(code **)(*plVar2 + 0x700))();
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x688))();
        if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
        }
      }
    }
  }
LAB_148929a98:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148929ab6 FUN_148929ab6 body=66 status=ok
// SIG undefined FUN_148929ab6(void)

bool FUN_148929ab6(undefined8 param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  float extraout_XMM0_Da;
  
  lVar2 = FUN_1403c7716();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_140280ec4(lVar2);
    uVar3 = FUN_144a87362(uVar3);
    FUN_143d46ea6(uVar3);
    bVar1 = param_2 <= extraout_XMM0_Da;
  }
  return bVar1;
}



// FUNCTION 148929b50 FUN_148929b50 body=105 status=ok
// SIG undefined FUN_148929b50(void)

void FUN_148929b50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_30;
  local_20 = &local_34;
  local_34 = param_3;
  local_30 = param_2;
  FUN_144a405ac(param_1 + 0x70,local_14,&local_28,0);
  FUN_14064ce08(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148929bba FUN_148929bba body=42 status=ok
// SIG undefined FUN_148929bba(void)

void FUN_148929bba(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1403c7716();
  if (lVar1 != 0) {
    uVar2 = FUN_14008e0ae(lVar1);
    FUN_148856710(uVar2,1);
    return;
  }
  return;
}



// FUNCTION 148929be4 FUN_148929be4 body=323 status=ok
// SIG undefined FUN_148929be4(void)

void FUN_148929be4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  uint local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      uVar4 = FUN_1447210f0(param_1);
      FUN_144a7d35a(uVar4,&local_88);
      if (-1 < (int)local_80) {
        do {
          if ((int)local_88[1] <= (int)local_80) break;
          lVar3 = FUN_14479d2ce((ulonglong)local_80 * 8 + *local_88);
          lVar3 = *(longlong *)(lVar3 + 0x3e0);
          if (lVar3 != 0) {
            lVar5 = FUN_144a78b9e();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x1168) + 0x18))(lVar3 + 0x1168);
              local_74 = param_3;
              local_70 = param_2;
              local_68 = &local_70;
              local_60 = &local_74;
              FUN_144a405ac(lVar3 + 0x70,local_54,&local_68,0);
              FUN_14064ce08(lVar3);
            }
          }
          uVar1 = local_80 + 1;
          bVar2 = -2 < (int)local_80;
          local_80 = uVar1;
        } while (bVar2);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148929d28 FUN_148929d28 body=237 status=ok
// SIG undefined FUN_148929d28(void)

void FUN_148929d28(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      uVar4 = FUN_1447210f0(param_1);
      FUN_144a7d35a(uVar4,&local_28);
      if (-1 < (int)local_20) {
        do {
          if ((int)local_28[1] <= (int)local_20) break;
          lVar3 = FUN_14479d2ce((ulonglong)local_20 * 8 + *local_28);
          lVar3 = *(longlong *)(lVar3 + 0x3e0);
          if (lVar3 != 0) {
            lVar5 = FUN_144a78b9e();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x1168) + 0x18))(lVar3 + 0x1168);
              FUN_14064ce80(lVar3 + 0x70,param_2);
              FUN_14064ce08(lVar3);
            }
          }
          uVar1 = local_20 + 1;
          bVar2 = -2 < (int)local_20;
          local_20 = uVar1;
        } while (bVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148929e16 FUN_148929e16 body=145 status=ok
// SIG undefined FUN_148929e16(void)

void FUN_148929e16(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1168) + 0x18))(param_1 + 0x1168);
    local_48 = &local_50;
    local_40 = &local_54;
    local_54 = param_3;
    local_50 = param_2;
    FUN_144a405ac(lVar1 + 0x70,local_34,&local_48,0);
    FUN_14064ce08(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148929ea8 FUN_148929ea8 body=68 status=ok
// SIG undefined FUN_148929ea8(void)

void FUN_148929ea8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1168) + 0x18))(param_1 + 0x1168);
    FUN_14064ce80(lVar1 + 0x70,param_2);
    FUN_14064ce08(lVar1);
    return;
  }
  return;
}



// FUNCTION 148929eec FUN_148929eec body=148 status=ok
// SIG undefined FUN_148929eec(void)

void FUN_148929eec(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1168) + 0x18))(param_1 + 0x1168);
    local_48 = &local_50;
    local_40 = &local_54;
    local_54 = param_3;
    local_50 = param_2;
    FUN_144a405ac(lVar1 + 0xc0,local_34,&local_48,0);
    FUN_14064ce08(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148929f82 FUN_148929f82 body=71 status=ok
// SIG undefined FUN_148929f82(void)

void FUN_148929f82(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1168) + 0x18))(param_1 + 0x1168);
    FUN_14064ce80(lVar1 + 0xc0,param_2);
    FUN_14064ce08(lVar1);
    return;
  }
  return;
}



// FUNCTION 148929fca FUN_148929fca body=205 status=ok
// SIG undefined FUN_148929fca(void)

void FUN_148929fca(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a85332();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a85332();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        local_40 = *param_2;
        local_38 = param_2[1];
        FUN_1403350f6(lVar4 + 0x18);
        FUN_144a7b126(lVar4 + 0x18,&local_29,1);
        if (param_3 != '\0') {
          *(undefined1 *)(lVar4 + 0x120) = 1;
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



// FUNCTION 14892a098 FUN_14892a098 body=212 status=ok
// SIG undefined FUN_14892a098(void)

void FUN_14892a098(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a85332();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a85332();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        local_40 = *param_2;
        local_38 = param_2[1];
        FUN_140805e68(lVar4 + 0x18,&local_40,1);
        FUN_144a7b126(lVar4 + 0x18,&local_29,1);
        if ((param_3 != '\0') || (*(int *)(lVar4 + 0x20) < 1)) {
          *(undefined1 *)(lVar4 + 0x120) = 0;
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



// FUNCTION 14892a16e FUN_14892a16e body=99 status=ok
// SIG undefined FUN_14892a16e(void)

void FUN_14892a16e(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a85332();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a85332();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        *(undefined1 *)(lVar4 + 0x120) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 14892a1d2 FUN_14892a1d2 body=178 status=ok
// SIG undefined FUN_14892a1d2(void)

void FUN_14892a1d2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a85332();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a85332();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        local_30 = *param_2;
        local_28 = param_2[1];
        FUN_1403350f6(lVar4 + 0x40);
        FUN_144a7b126(lVar4 + 0x40,&local_19,1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892a286 FUN_14892a286 body=181 status=ok
// SIG undefined FUN_14892a286(void)

void FUN_14892a286(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a85332();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a85332();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        local_30 = *param_2;
        local_28 = param_2[1];
        FUN_140805e68(lVar4 + 0x40,&local_30,1);
        FUN_144a7b126(lVar4 + 0x40,&local_19,1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892a352 FUN_14892a352 body=77 status=ok
// SIG undefined FUN_14892a352(void)

float FUN_14892a352(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0x60);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1 + -0x110);
    if (lVar1 == 0) {
      return 0.0;
    }
    lVar1 = *(longlong *)(param_1 + -0x60);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1 + -0x110);
    }
  }
  return (float)*(double *)(lVar1 + 0x6d0);
}



// FUNCTION 14892a3a0 FUN_14892a3a0 body=51 status=ok
// SIG undefined FUN_14892a3a0(void)

void FUN_14892a3a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x20))(param_1 + 0x110);
  *(undefined4 *)(lVar1 + 8) = 0;
  if (*(int *)(lVar1 + 0xc) == 0) {
    return;
  }
  FUN_14892f9d6(lVar1);
  return;
}



// FUNCTION 14892a3d4 FUN_14892a3d4 body=91 status=ok
// SIG undefined FUN_14892a3d4(void)

void FUN_14892a3d4(longlong param_1)

{
  undefined4 *in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *in_stack_00000028;
  uStack_24 = in_stack_00000028[1];
  uStack_20 = in_stack_00000028[2];
  uStack_1c = in_stack_00000028[3];
  local_38 = &local_28;
  local_18 = *(undefined8 *)(in_stack_00000028 + 4);
  FUN_1488558e0(param_1 + 0x110);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892a430 FUN_14892a430 body=79 status=ok
// SIG undefined FUN_14892a430(void)

void FUN_14892a430(longlong param_1)

{
  undefined4 *in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *in_stack_00000028;
  uStack_14 = in_stack_00000028[1];
  uStack_10 = in_stack_00000028[2];
  uStack_c = in_stack_00000028[3];
  local_28 = &local_18;
  FUN_14885598c(param_1 + 0x110);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892a48c FUN_14892a48c body=67 status=ok
// SIG undefined FUN_14892a48c(void)

void FUN_14892a48c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148855886(param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892a4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa90))(plVar1,param_4,param_5,*(code **)(*plVar1 + 0xa90));
    return;
  }
  return;
}



// FUNCTION 14892a4dc FUN_14892a4dc body=7 status=ok
// SIG undefined FUN_14892a4dc(void)

void FUN_14892a4dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014892a4df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 14892a4e4 FUN_14892a4e4 body=105 status=ok
// SIG undefined FUN_14892a4e4(void)

void FUN_14892a4e4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140d077bc(param_1 + 0xd8);
  FUN_140d077bc(param_1 + 0x238,param_2);
  if ((longlong)*(int *)(param_1 + 0x230) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x230) * 0x188;
    lVar2 = *(longlong *)(param_1 + 0x228) + 0x38;
    do {
      FUN_140d077bc(lVar2,param_2);
      lVar2 = lVar2 + 0x188;
      lVar1 = lVar1 + -0x188;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14892a54e FUN_14892a54e body=118 status=ok
// SIG undefined FUN_14892a54e(void)

void FUN_14892a54e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1489a50d2(param_1 + 0xd8);
  FUN_1489a50d2(param_1 + 0x238,param_2,param_3);
  if ((longlong)*(int *)(param_1 + 0x230) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x230) * 0x188;
    lVar1 = *(longlong *)(param_1 + 0x228) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 0x188;
      lVar2 = lVar2 + -0x188;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14892a5c4 FUN_14892a5c4 body=151 status=ok
// SIG undefined FUN_14892a5c4(void)

void FUN_14892a5c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  FUN_141022b78(param_1 + 0xd8,param_2,param_3,uVar1);
  FUN_141022b78(param_1 + 0x238,param_2,param_3,uVar1);
  if ((longlong)*(int *)(param_1 + 0x230) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x230) * 0x188;
    lVar2 = *(longlong *)(param_1 + 0x228) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 0x188;
      lVar3 = lVar3 + -0x188;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14892a65c FUN_14892a65c body=302 status=ok
// SIG undefined FUN_14892a65c(void)

undefined8 * FUN_14892a65c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_30 = 0x3f800000;
  FUN_140bb5078(param_1 + 0x238,local_b0,param_3,&DAT_14cb8d438);
  if (local_a8 == 0) {
LAB_14892a70e:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_1402576f0();
    if (local_a8 == 0) goto LAB_14892a70e;
    lVar7 = 0;
    if ((lVar5 != 0) && (lVar1 = *(longlong *)(local_a8 + 0x10), lVar1 != 0)) {
      if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) goto LAB_14892a70e;
      lVar7 = local_a8;
      if (*(char *)(local_a8 + 0x179) == '\0') {
        param_2[2] = DAT_14c8464f0;
        uVar4 = DAT_14c8464e8._4_4_;
        uVar3 = (undefined4)DAT_14c8464e8;
        uVar2 = DAT_14c8464e0._4_4_;
        *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
        *(undefined4 *)((longlong)param_2 + 4) = uVar2;
        *(undefined4 *)(param_2 + 1) = uVar3;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
        goto LAB_14892a761;
      }
    }
  }
  plVar6 = (longlong *)FUN_140bb4bb2(param_3);
  (**(code **)(*plVar6 + 0xd28))(plVar6,&local_30);
  local_128 = 0x7f7fffff;
  FUN_144943230(&local_30,local_118,lVar7,0);
  *param_2 = local_f8;
  param_2[1] = uStack_f0;
  param_2[2] = local_e8;
LAB_14892a761:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892a78c FUN_14892a78c body=290 status=ok
// SIG undefined FUN_14892a78c(void)

void FUN_14892a78c(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x132) = 1;
  *(undefined1 *)(param_1 + 0x133) = param_2;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03') {
    puVar2 = &local_48;
    local_30 = 4;
    local_48 = 1;
    local_28 = 1;
    FUN_1408834b4(param_1,&DAT_14cb88c10,puVar2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (uint *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
    puVar2 = &local_48;
    local_30 = 4;
    local_48 = (uint)*(byte *)(param_1 + 0x133);
    local_28 = 1;
    FUN_1408834b4(param_1,&DAT_14cb88c18,puVar2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (uint *)CONCAT44(uStack_44,local_48);
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



// FUNCTION 14892a8b0 FUN_14892a8b0 body=120 status=ok
// SIG undefined FUN_14892a8b0(void)

void FUN_14892a8b0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  FUN_1411e5b4e();
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03') {
    lVar1 = *param_2;
    if (lVar1 == DAT_14cb88c10) {
      uVar2 = FUN_144a7fca4(param_3);
      *(undefined1 *)(param_1 + 0x132) = uVar2;
    }
    else if (lVar1 == DAT_14cb88c18) {
      uVar2 = FUN_144a7fca4(param_3);
      *(undefined1 *)(param_1 + 0x133) = uVar2;
    }
    else if (lVar1 == DAT_14cb88c20) {
      uVar2 = FUN_144a7fca4(param_3);
      *(undefined1 *)(param_1 + 0x131) = uVar2;
    }
  }
  return;
}



// FUNCTION 14892a928 FUN_14892a928 body=189 status=ok
// SIG undefined FUN_14892a928(void)

void FUN_14892a928(longlong param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x131) = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03') {
    puVar2 = &local_40;
    local_28 = 4;
    local_40 = 1;
    local_20 = 1;
    FUN_1408834b4(param_1,&DAT_14cb88c20,puVar2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_28) {
        puVar2 = (undefined4 *)CONCAT44(uStack_3c,local_40);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(CONCAT44(uStack_3c,local_40));
    }
  }
  FUN_14892a78c(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892a9e6 FUN_14892a9e6 body=54 status=ok
// SIG undefined FUN_14892a9e6(void)

undefined8 FUN_14892a9e6(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"InterpToGround";
  if (*(char *)(param_1 + 0x30) == '\0') {
    pwVar1 = L"InterpToSlot";
  }
  FUN_140002266(param_2,L"Perch: %s",pwVar1);
  return param_2;
}



// FUNCTION 14892aa1c FUN_14892aa1c body=1263 status=ok
// SIG undefined FUN_14892aa1c(void)

void FUN_14892aa1c(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  bool bVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined1 local_468 [16];
  double local_458;
  float local_448;
  undefined4 uStack_444;
  double dStack_440;
  double local_438;
  longlong local_430;
  longlong *local_428;
  undefined4 local_41c;
  longlong local_418;
  longlong *plStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_1e0 [320];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (param_2 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_2 + 0xa8);
  }
  lVar14 = FUN_1407ca824(uVar19);
  if (lVar14 != 0) {
    uVar15 = FUN_140bb554a();
    FUN_140d92a98(lVar14,&local_430,uVar15);
    if ((local_430 != 0) && (lVar14 = FUN_140ce3e30(), lVar14 != 0)) {
      lVar16 = FUN_14061d078();
      if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30 &&
          (plVar4 = *(longlong **)(local_430 + 0x38), plVar4 != (longlong *)0x0)))) {
        lVar14 = FUN_14070cc62();
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           ((*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
             == lVar14 + 0x30 && (lVar14 = plVar4[0x10b], lVar14 != 0)))) {
          lVar16 = plVar4[0x39];
          if (lVar16 == 0) {
            puVar17 = &DAT_14c8464e0;
            uVar13 = (undefined4)DAT_14c8464f0;
            uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar13 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
            uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
            puVar17 = (undefined8 *)(lVar16 + 0x260);
          }
          uVar15 = *puVar17;
          uVar10 = puVar17[1];
          if (*(char *)(param_1 + 0x30) == '\0') {
            local_3e8 = *(double *)(local_430 + 0x170);
          }
          else {
            uVar18 = FUN_1447210f0(uVar19);
            FUN_141246736(&local_418,uVar18);
            local_3e8 = (double)CONCAT44(uVar26,uVar13);
            if (plStack_410 != (longlong *)0x0) {
              iVar12 = (int)plStack_410[1];
              do {
                if (iVar12 == 0) {
                  plVar20 = (longlong *)0x0;
                  break;
                }
                LOCK();
                iVar11 = (int)plStack_410[1];
                bVar21 = iVar12 == iVar11;
                if (bVar21) {
                  *(int *)(plStack_410 + 1) = iVar12 + 1;
                  iVar11 = iVar12;
                }
                iVar12 = iVar11;
                UNLOCK();
                plVar20 = plStack_410;
              } while (!bVar21);
              LOCK();
              piVar1 = (int *)((longlong)plStack_410 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_410 + 0x10))();
              }
              lVar16 = local_418;
              plStack_410 = (longlong *)0x0;
              local_3e8 = (double)CONCAT44(uVar26,uVar13);
              if (plVar20 != (longlong *)0x0) {
                local_418 = 0;
                LOCK();
                plVar2 = plVar20 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar20 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
                if (plStack_410 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plStack_410 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plStack_410 + 0x10))();
                  }
                }
                local_3e8 = (double)CONCAT44(uVar26,uVar13);
                if (lVar16 != 0) {
                  FUN_14892a65c(*(undefined8 *)(local_430 + 0x1a0),&local_448,
                                *(undefined8 *)(local_430 + 0x98));
                  dVar5 = (double)CONCAT44(uStack_444,local_448) * *(double *)(local_430 + 0x180);
                  dStack_440 = dStack_440 * *(double *)(local_430 + 0x188);
                  local_438 = local_438 * *(double *)(local_430 + 400);
                  dVar7 = *(double *)(local_430 + 0x140);
                  dVar8 = *(double *)(local_430 + 0x148);
                  dVar9 = *(double *)(local_430 + 0x150);
                  dVar3 = *(double *)(local_430 + 0x158);
                  dVar23 = dStack_440 * dVar7 - dVar5 * dVar8;
                  dVar24 = local_438 * dVar8 - dStack_440 * dVar9;
                  dVar25 = dVar5 * dVar9 - dVar7 * local_438;
                  dVar24 = dVar24 + dVar24;
                  dVar25 = dVar25 + dVar25;
                  dVar23 = dVar23 + dVar23;
                  dVar6 = (dVar9 * dVar24 - dVar7 * dVar23) +
                          *(double *)(local_430 + 0x158) * dVar25 + dStack_440 +
                          *(double *)(local_430 + 0x168);
                  local_458 = dVar23 * dVar3 + local_438 + (dVar25 * dVar7 - dVar24 * dVar8) +
                              *(double *)(local_430 + 0x170);
                  local_468._8_4_ = SUB84(dVar6,0);
                  local_468._0_8_ =
                       (dVar23 * dVar8 - dVar25 * dVar9) + dVar3 * dVar24 + dVar5 +
                       *(double *)(local_430 + 0x160);
                  local_468._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                  (**(code **)(*plVar4 + 0x528))(plVar4,&local_418,&local_41c);
                  FUN_144a238e8(&local_418,lVar14 + 0x1730);
                  uVar13 = FUN_1402fcbf6(lVar16,local_1e0);
                  FUN_144b2e76e(&local_418);
                  uVar19 = FUN_1447210f0(uVar19);
                  local_478 = 0;
                  fVar22 = (float)FUN_1418072bb(uVar19,local_468,uVar13,local_41c);
                  local_3e8 = (double)fVar22;
                }
              }
            }
          }
          (**(code **)(*plVar4 + 0x528))(plVar4,&local_418,&local_448);
          local_3e8 = (double)local_448 + local_3e8;
          lVar16 = plVar4[0x39];
          if (lVar16 == 0) {
            local_418 = 0;
            plStack_410 = (longlong *)0x0;
            local_408 = 0;
            uStack_404 = 0;
            uStack_400 = 0;
            uStack_3fc = 0x3ff00000;
          }
          else {
            local_418 = *(longlong *)(lVar16 + 0x240);
            plStack_410 = *(longlong **)(lVar16 + 0x248);
            local_408 = *(undefined4 *)(lVar16 + 0x250);
            uStack_404 = *(undefined4 *)(lVar16 + 0x254);
            uStack_400 = *(undefined4 *)(lVar16 + 600);
            uStack_3fc = *(undefined4 *)(lVar16 + 0x25c);
          }
          uStack_3e0 = 0;
          local_3d8 = 0x3ff0000000000000;
          uStack_3d0 = 0x3ff0000000000000;
          local_3c8 = 0x3ff0000000000000;
          uStack_3c0 = 0;
          local_3f8 = uVar15;
          uStack_3f0 = uVar10;
          FUN_140ce4034(lVar14,&local_418,param_4,0);
        }
      }
    }
    if (local_428 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_428 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_428)(local_428);
        LOCK();
        piVar1 = (int *)((longlong)local_428 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_428 + 0x10))(local_428);
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14892af0c FUN_14892af0c body=55 status=ok
// SIG undefined FUN_14892af0c(void)

void FUN_14892af0c(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  FUN_140aa1618(param_1 + 0x50);
  FUN_140aa1618(param_1 + 0x70,param_2);
  return;
}



// FUNCTION 14892b25c FUN_14892b25c body=190 status=ok
// SIG undefined FUN_14892b25c(void)

undefined8 FUN_14892b25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c88a82(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_14892b31c(local_30,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_14892b2e9;
    }
  }
  uVar5 = 0;
LAB_14892b2e9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14892b31c FUN_14892b31c body=281 status=ok
// SIG undefined FUN_14892b31c(void)

undefined8 FUN_14892b31c(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = *param_3;
  if ((lVar2 != 0) && (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114))) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    uVar9 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    lVar6 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             ((uVar8 >> 4) +
                              (int)((ulonglong)lVar2 >> 0x20) + (uint)lVar2 * 0x10000 + uVar8 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 2) + uVar9 * 0x40 +
                              0x9e3779b9 ^ uVar9)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xe0);
      do {
        lVar7 = (longlong)iVar5 * 0x40;
        lVar1 = lVar6 + lVar7;
        if ((*(ulonglong *)(lVar6 + lVar7) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar7) == lVar2)) {
          if (lVar1 == -0x10 || lVar1 == 0) {
            return 0;
          }
          uVar4 = FUN_140963a30();
          return uVar4;
        }
        iVar5 = *(int *)(lVar1 + 0x38);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14892b436 FUN_14892b436 body=79 status=ok
// SIG undefined FUN_14892b436(void)

void FUN_14892b436(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f0ed6();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014892b481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
    return;
  }
  FUN_14061d010(param_1);
  return;
}



// FUNCTION 14892b486 FUN_14892b486 body=131 status=ok
// SIG undefined FUN_14892b486(void)

void FUN_14892b486(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1412c5dd0();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1412c5dd0();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        plVar2 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
        if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0xc6] != param_2)) {
          *(char *)(plVar2 + 0xc6) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014892b502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x9f8))(plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14892b532 FUN_14892b532 body=226 status=ok
// SIG undefined FUN_14892b532(void)

void FUN_14892b532(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = param_3;
  if (DAT_14caa8578 == param_3) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  else {
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1401b0f18();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_1401b0f18();
        plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
        if (plVar4 != (longlong *)0x0 && plVar2 != plVar4) {
          FUN_14747a62e(local_78,&local_30);
          lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
          cVar1 = FUN_144ade028(local_78,lVar5 + 0x78);
          if (cVar1 != '\0') {
            *(undefined8 *)(param_1 + 8) = param_2;
          }
          FUN_1412dafa6(local_78);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892b616 FUN_14892b616 body=436 status=ok
// SIG undefined FUN_14892b616(void)

void FUN_14892b616(undefined1 *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x18) != -0xfffff30)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xf00000d0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  cVar4 = FUN_141165bc4(param_2);
  if (cVar4 != '\0') {
    sVar1 = *(short *)(*param_2 + 0x20);
    uVar6 = FUN_142b207ce(*param_2 + 0x24);
    FUN_1447325ac(uVar6,&local_40,1);
    if (sVar1 == -1) {
      if (((*(byte *)*param_2 & 3) == 1) &&
         (pcVar8 = *(char **)((byte *)*param_2 + 8), pcVar8 != (char *)0x0)) {
        if ((*pcVar8 == '-') || (*pcVar8 == '+')) {
          pcVar8 = pcVar8 + 1;
        }
        bVar7 = false;
        do {
          cVar4 = *pcVar8;
          if (cVar4 == '.') {
            bVar3 = true;
            if (bVar7) goto LAB_14892b755;
          }
          else {
            if (cVar4 == '\0') {
              uVar9 = FUN_140b963dc(param_2,0);
              *(undefined4 *)(param_1 + 0x28) = uVar9;
              *param_1 = 0;
              *(undefined8 *)(param_1 + 4) = 0;
              break;
            }
            iVar5 = iswdigit((short)cVar4);
            bVar3 = bVar7;
            if (iVar5 == 0) goto LAB_14892b755;
          }
          bVar7 = bVar3;
          pcVar8 = pcVar8 + 1;
        } while( true );
      }
    }
    else {
      *param_1 = 1;
      if (*(longlong *)(param_1 + 0x10) != local_40) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      *(longlong *)(param_1 + 0x10) = local_40;
    }
  }
LAB_14892b6c4:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14892b755:
  uVar6 = FUN_140625092(*param_2,&DAT_14c9a12e0);
  FUN_1447325ac(uVar6,&local_48,1);
  local_40 = local_48;
  uVar6 = FUN_140430f72();
  lVar2 = local_40;
  cVar4 = FUN_140a8ba30(uVar6,local_40,param_1 + 0x28);
  if (cVar4 != '\0') {
    *param_1 = 2;
    *(longlong *)(param_1 + 4) = lVar2;
  }
  goto LAB_14892b6c4;
}



// FUNCTION 14892b7cc FUN_14892b7cc body=133 status=ok
// SIG undefined FUN_14892b7cc(void)

undefined8 FUN_14892b7cc(char *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_1 == '\x01') {
    local_18 = *(undefined8 *)(param_1 + 0x10);
    FUN_1400021e4(&local_18,param_2);
  }
  else {
    if (*param_1 == '\x02') {
      FUN_1400021e4(param_1 + 4,param_2);
      if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    FUN_1406112c4(param_2,(double)*(float *)(param_1 + 0x28),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14892b852 FUN_14892b852 body=41 status=ok
// SIG undefined FUN_14892b852(void)

void FUN_14892b852(longlong param_1)

{
  FUN_1478b8668();
  if (*(longlong *)(param_1 + 0x390) == 0) {
    return;
  }
  FUN_14892b87c();
  return;
}



// FUNCTION 14892b87c FUN_14892b87c body=91 status=ok
// SIG undefined FUN_14892b87c(void)

void FUN_14892b87c(longlong *param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
  FUN_1406cc378();
  if (param_1[0xe4] != 0) {
    (**(code **)(*param_1 + 0xa78))(param_1,*(undefined8 *)(param_1[0xe4] + 0xe0));
    if (*(char *)(param_1[0xe4] + 0xd9) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014892b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x928))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14892b8d7 FUN_14892b8d7 body=175 status=ok
// SIG undefined FUN_14892b8d7(void)

undefined8 FUN_14892b8d7(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892b988 FUN_14892b988 body=508 status=ok
// SIG undefined FUN_14892b988(void)

void FUN_14892b988(longlong *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auStack_1e8 [40];
  undefined1 local_1c0 [48];
  double local_190;
  undefined1 local_188 [4];
  undefined4 local_184;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_e4;
  undefined4 local_b8;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined1 local_7c;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  memset(local_188,0,0x100);
  local_b8 = 0xffffffff;
  local_184 = 0x3f800000;
  local_e4 = 0xffffffff;
  local_7c = 3;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  local_150 = param_2[2];
  local_160 = *param_2;
  uStack_158 = param_2[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar5 != 1.0) || (local_128 = dVar2, local_120 = dVar3, local_130 = dVar1, NAN(dVar5))) &&
     (local_128 = DAT_14c8464e8, local_120 = DAT_14c8464f0, local_130 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    local_128 = dVar2 * dVar5;
    local_120 = dVar3 * dVar5;
    local_130 = dVar1 * dVar5;
  }
  (**(code **)(param_1[-0xe3] + 0x528))(param_1 + -0xe3,local_1c0,param_1 + -0x9b);
  local_88 = (float)local_190;
  local_80 = 0x7f7fffff;
  local_84 = (float)SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
  (**(code **)(*param_1 + 0x18))(param_1,local_188);
  if (local_78 != 0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14892bb86 FUN_14892bb86 body=393 status=ok
// SIG undefined FUN_14892bb86(void)

void FUN_14892bb86(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar9 = *param_2 * (double)param_1[-0x93];
  dVar10 = param_2[1] * (double)param_1[-0x92];
  dVar8 = param_2[2] * (double)param_1[-0x91];
  dVar5 = (double)param_1[-0x9b];
  dVar6 = (double)param_1[-0x9a];
  dVar7 = (double)param_1[-0x99];
  dVar1 = (double)param_1[-0x98];
  dVar2 = dVar10 * dVar5 - dVar9 * dVar6;
  dVar3 = dVar8 * dVar6 - dVar10 * dVar7;
  dVar4 = dVar9 * dVar7 - dVar5 * dVar8;
  dVar3 = dVar3 + dVar3;
  dVar4 = dVar4 + dVar4;
  dVar2 = dVar2 + dVar2;
  dVar10 = (dVar7 * dVar3 - dVar5 * dVar2) + (double)param_1[-0x98] * dVar4 + dVar10 +
           (double)param_1[-0x96];
  local_78 = dVar2 * dVar1 + dVar8 + (dVar4 * dVar5 - dVar3 * dVar6) + (double)param_1[-0x95];
  local_88._8_4_ = SUB84(dVar10,0);
  local_88._0_8_ = (dVar2 * dVar6 - dVar4 * dVar7) + dVar1 * dVar3 + dVar9 + (double)param_1[-0x97];
  local_88._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  (**(code **)(*param_1 + 0x20))();
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892bd10 FUN_14892bd10 body=82 status=ok
// SIG undefined FUN_14892bd10(void)

void FUN_14892bd10(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_147cb1712(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892bd64 FUN_14892bd64 body=106 status=ok
// SIG undefined FUN_14892bd64(void)

void FUN_14892bd64(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_147cb1aa2(local_48,&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892bdd0 FUN_14892bdd0 body=108 status=ok
// SIG undefined FUN_14892bdd0(void)

void FUN_14892bdd0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_30 = param_6;
    local_38 = param_5;
    FUN_147cb1af8(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892be3e FUN_14892be3e body=82 status=ok
// SIG undefined FUN_14892be3e(void)

void FUN_14892be3e(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_147cb1b6e(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892be92 FUN_14892be92 body=349 status=ok
// SIG undefined FUN_14892be92(void)

void * FUN_14892be92(void *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  memset(param_1,0,0x100);
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(float *)((longlong)param_1 + 0x104) =
       (float)SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 3;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  uVar4 = param_2[2];
  uVar6 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0x28) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + 0x30);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar9 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar9 != 1.0) || (dVar7 = dVar2, dVar8 = dVar3, dVar5 = dVar1, NAN(dVar9))) &&
     (dVar7 = DAT_14c8464e8, dVar8 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / SQRT(dVar9);
    dVar7 = dVar2 * dVar9;
    dVar8 = dVar3 * dVar9;
    dVar5 = dVar1 * dVar9;
  }
  *(double *)((longlong)param_1 + 0x58) = dVar5;
  *(double *)((longlong)param_1 + 0x60) = dVar7;
  *(double *)((longlong)param_1 + 0x68) = dVar8;
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_1 + 0x68);
  return param_1;
}



// FUNCTION 14892bff0 FUN_14892bff0 body=127 status=ok
// SIG undefined FUN_14892bff0(void)

void FUN_14892bff0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1458f18b8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014892c062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + -0x718) + 0xa78))
                (param_1 + -0x718,*(undefined8 *)(param_2 + 0xe0));
      return;
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14892c070 FUN_14892c070 body=431 status=ok
// SIG undefined FUN_14892c070(void)

void FUN_14892c070(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  byte local_30;
  undefined7 uStack_2f;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x28) == '\0') && (lVar6 = *(longlong *)(param_1 + 8), lVar6 != 0)) {
    lVar3 = param_1 + -0x718;
    if ((*(byte *)(lVar6 + 0xdc) & 1) != 0) {
      (**(code **)(*(longlong *)(param_1 + -0x718) + 0xa78))(lVar3,*(undefined8 *)(lVar6 + 0xe8));
      lVar6 = *(longlong *)(param_1 + 0x2f0);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x680) != '\0')) {
        *(undefined1 *)(lVar6 + 0x680) = 0;
        FUN_140acee66();
      }
      lVar6 = *(longlong *)(param_1 + -0x668);
      if (lVar6 == 0) {
        lVar6 = FUN_1448abda6(lVar3);
      }
      FUN_140a32e84(&local_30,lVar6);
      if (local_28 != (longlong *)0x0) {
        iVar5 = (int)local_28[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_28[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(local_28 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar8 = local_28;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (CONCAT71(uStack_2f,local_30) != 0) {
            FUN_1411d3172(CONCAT71(uStack_2f,local_30),param_1 + -0x5b8);
          }
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
    }
    lVar6 = *(longlong *)(param_1 + 8);
    if (((*(byte *)(lVar6 + 0xdc) & 2) != 0) && (0 < *(int *)(lVar6 + 0x108))) {
      uVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar6 + 0x100) + uVar7 * 8) != 0) {
          (**(code **)(*(longlong *)(param_1 + -0x718) + 0x638))(lVar3,uVar7 & 0xffffffff);
          lVar6 = *(longlong *)(param_1 + 8);
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(lVar6 + 0x108));
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    local_30 = *(byte *)(lVar6 + 0xdc) & 1;
    FUN_1447cd2ec(param_1 + 0x18);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14892c242 FUN_14892c242 body=106 status=ok
// SIG undefined FUN_14892c242(void)

void FUN_14892c242(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_140c7aaec();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14892c28e;
  }
  lVar1 = 0;
LAB_14892c28e:
  FUN_14868f28a(param_1 + -0xa0,lVar1,param_3);
  return;
}



// FUNCTION 14892c2ac FUN_14892c2ac body=126 status=ok
// SIG undefined FUN_14892c2ac(void)

void FUN_14892c2ac(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_140c7aaec();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14892c300;
  }
  lVar1 = 0;
LAB_14892c300:
  FUN_14868f1ec(param_1 + -0xa0,lVar1,param_3,param_4);
  return;
}



// FUNCTION 14892c32a FUN_14892c32a body=156 status=ok
// SIG undefined FUN_14892c32a(void)

longlong * FUN_14892c32a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar2 = param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(int *)(param_1 + 2) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1486b0c0a(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 0xc);
  }
  param_1[7] = param_2[7];
  lVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar2;
  return param_1;
}



// FUNCTION 14892c3c6 FUN_14892c3c6 body=756 status=ok
// SIG undefined FUN_14892c3c6(void)

ulonglong FUN_14892c3c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  undefined1 local_d0 [24];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = (longlong *)FUN_14479d2ce();
  plVar6 = (longlong *)FUN_14479d2ce(param_1 + 8);
  if ((plVar6 == (longlong *)0x0) ||
     (lVar7 = FUN_14025708c(plVar6,DAT_14c9abbf0), lVar7 == 0 || plVar5 == (longlong *)0x0)) {
    uVar8 = 0;
  }
  else if (((*(char *)(param_1 + 0x48) == '\x01') &&
           ((double)*(float *)(param_1 + 0x4c) < *(double *)(param_1 + 0x50))) ||
          (cVar4 = (**(code **)(*plVar6 + 0x480))(plVar6,DAT_14c9abbf0), cVar4 == '\0')) {
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x58);
      lVar10 = (longlong)*(int *)(param_1 + 0x60) * 0x1d0;
      do {
        iVar1 = *(int *)(lVar7 + 0x130);
        *(uint *)(lVar7 + 0x130) = iVar1 + 1U;
        if (*(uint *)(lVar7 + 0x134) < iVar1 + 1U) {
          FUN_148930684((longlong *)(lVar7 + 0x128),iVar1);
        }
        lVar2 = *(longlong *)(lVar7 + 0x128);
        FUN_1470f3dd0((longlong)iVar1 * 0x1d0 + lVar2,lVar9);
        *(undefined4 *)(lVar2 + 0x104 + (longlong)iVar1 * 0x1d0) = 2;
        lVar9 = lVar9 + 0x1d0;
        lVar10 = lVar10 + -0x1d0;
      } while (lVar10 != 0);
    }
    uVar8 = 0;
    (**(code **)(*plVar6 + 0x690))(plVar6,0);
  }
  else {
    (**(code **)(*plVar5 + 0x718))(plVar5,&local_b8,local_d0);
    FUN_144a76660(local_d0,&local_e8);
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      dVar11 = (double)*(float *)(param_1 + 0x40);
      dVar12 = local_e0 * dVar11 + local_b0;
      lVar9 = *(longlong *)(param_1 + 0x58);
      lVar10 = (longlong)*(int *)(param_1 + 0x60) * 0x1d0;
      do {
        if (*(longlong *)(lVar9 + 0x78) == 0) {
          *(undefined4 *)(lVar9 + 0x104) = 1;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          *(undefined8 *)(lVar9 + 0x88) = 0;
          *(undefined4 *)(lVar9 + 0x90) = 0;
          *(undefined4 *)(lVar9 + 0x94) = 0;
          *(undefined4 *)(lVar9 + 0x98) = 0;
          *(undefined4 *)(lVar9 + 0x9c) = 0x3ff00000;
          auVar3._8_4_ = SUB84(dVar12,0);
          auVar3._0_8_ = local_e8 * dVar11 + local_b8;
          auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(lVar9 + 0xa0) = auVar3;
          *(double *)(lVar9 + 0xb0) = dVar11 * local_d8 + local_a8;
          *(undefined8 *)(lVar9 + 0xb8) = 0;
          *(undefined8 *)(lVar9 + 0xc0) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 200) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 0xd0) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 0xd8) = 0;
          iVar1 = *(int *)(lVar7 + 0x130);
          *(uint *)(lVar7 + 0x130) = iVar1 + 1U;
          if (*(uint *)(lVar7 + 0x134) < iVar1 + 1U) {
            FUN_148930684((longlong *)(lVar7 + 0x128),iVar1);
          }
          FUN_1470f3dd0((longlong)iVar1 * 0x1d0 + *(longlong *)(lVar7 + 0x128),lVar9);
        }
        lVar9 = lVar9 + 0x1d0;
        lVar10 = lVar10 + -0x1d0;
      } while (lVar10 != 0);
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14892c6bc FUN_14892c6bc body=150 status=ok
// SIG undefined FUN_14892c6bc(void)

void FUN_14892c6bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar4) == *param_2) {
        uVar5 = (int)(lVar4 >> 2) * -0x55555555;
        if (uVar5 == 0xffffffff) {
          return;
        }
        iVar3 = ~uVar5 + iVar2;
        if (iVar3 != 0) {
          iVar6 = 1;
          if (iVar3 < 1) {
            iVar6 = iVar3;
          }
          memmove((void *)(lVar1 + (longlong)(int)uVar5 * 0xc),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar6) * 0xc),(longlong)iVar6 * 0xc);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        return;
      }
      lVar4 = lVar4 + 0xc;
    } while ((longlong)iVar2 * 0xc != lVar4);
  }
  return;
}



// FUNCTION 14892c774 FUN_14892c774 body=106 status=ok
// SIG undefined FUN_14892c774(void)

void FUN_14892c774(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_145922644();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14892c7c0;
  }
  lVar1 = 0;
LAB_14892c7c0:
  FUN_1486b21c6(param_1 + -0xa0,lVar1,param_3);
  return;
}



// FUNCTION 14892c7de FUN_14892c7de body=126 status=ok
// SIG undefined FUN_14892c7de(void)

void FUN_14892c7de(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_145922644();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14892c832;
  }
  lVar1 = 0;
LAB_14892c832:
  FUN_1486b2128(param_1 + -0xa0,lVar1,param_3,param_4);
  return;
}



// FUNCTION 14892c85c FUN_14892c85c body=175 status=ok
// SIG undefined FUN_14892c85c(void)

undefined8 FUN_14892c85c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892c90c FUN_14892c90c body=49 status=ok
// SIG undefined FUN_14892c90c(void)

longlong * FUN_14892c90c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145922644();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14892c93e FUN_14892c93e body=89 status=ok
// SIG undefined FUN_14892c93e(void)

void FUN_14892c93e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145922644();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0xfb8) = param_2;
    }
  }
  return;
}



// FUNCTION 14892c998 FUN_14892c998 body=58 status=ok
// SIG undefined FUN_14892c998(void)

void FUN_14892c998(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_147f676e6();
  if (lVar1 != param_2) {
    FUN_140f94af0(param_1 + -0xaf0);
    return;
  }
  return;
}



// FUNCTION 14892c9d8 FUN_14892c9d8 body=128 status=ok
// SIG undefined FUN_14892c9d8(void)

undefined8 * FUN_14892c9d8(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 8))(), lVar2 != 0)) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30 && (lVar2 = *(longlong *)(lVar2 + 0x1c8), lVar2 != 0)))) {
      uVar1 = *(undefined8 *)(lVar2 + 0x268);
      *param_2 = *(undefined8 *)(lVar2 + 0x260);
      param_2[1] = uVar1;
      param_2[2] = *(undefined8 *)(lVar2 + 0x270);
      return param_2;
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14892ca5e FUN_14892ca5e body=28 status=ok
// SIG undefined FUN_14892ca5e(void)

void FUN_14892ca5e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1410ccd0a(param_1);
  return;
}



// FUNCTION 14892cab2 FUN_14892cab2 body=40 status=ok
// SIG undefined FUN_14892cab2(void)

undefined8 FUN_14892cab2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d7486c(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 14892cae6 FUN_14892cae6 body=450 status=ok
// SIG undefined FUN_14892cae6(void)

bool FUN_14892cae6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_1405a25e0();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  if (param_1[2] == 0) {
    if (lVar5 == 0) {
      return false;
    }
    if (*param_1 == 0) {
      return false;
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_1[2] = 0;
      return false;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_1);
    param_1[2] = lVar5;
    if (lVar5 == 0) {
      return false;
    }
  }
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    uVar4 = FUN_1464f5a0e();
    lVar5 = FUN_14477b664(uVar4);
    param_1[4] = lVar5;
  }
  plVar1 = param_1 + 3;
  lVar6 = param_1[5];
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
      param_1[5] = 0;
      return false;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    param_1[5] = lVar6;
    if (lVar6 == 0) {
      return false;
    }
    lVar5 = param_1[4];
  }
  if (lVar5 == 0) {
    uVar4 = FUN_1464f5a0e();
    lVar5 = FUN_14477b664(uVar4);
    param_1[4] = lVar5;
    lVar6 = param_1[5];
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
      param_1[5] = lVar6;
    }
  }
  if (*(int *)(lVar6 + 0x18) < 1) {
    return false;
  }
  return 0 < (int)param_1[6];
}



// FUNCTION 14892cca8 FUN_14892cca8 body=297 status=ok
// SIG undefined FUN_14892cca8(void)

undefined4 FUN_14892cca8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_1464f5a0e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x28);
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
      *(undefined8 *)(param_1 + 0x28) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_1464f5a0e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x28);
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
      *(longlong *)(param_1 + 0x28) = lVar6;
    }
  }
  return *(undefined4 *)(lVar6 + 0x18);
}



// FUNCTION 14892cdd2 FUN_14892cdd2 body=139 status=ok
// SIG undefined FUN_14892cdd2(void)

bool FUN_14892cdd2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_1405a25e0();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  lVar5 = param_1[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_1 == 0)) goto LAB_14892ce05;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14892ce59:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14892ce59;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_1);
  }
  param_1[2] = lVar5;
LAB_14892ce05:
  return lVar5 == param_2;
}



// FUNCTION 14892ce5e FUN_14892ce5e body=53 status=ok
// SIG undefined FUN_14892ce5e(void)

void FUN_14892ce5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140ef166c(&DAT_14cb89020);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b1e4fa0;
  *(undefined4 *)(puVar1 + 3) = 4;
  return;
}



// FUNCTION 14892ce94 FUN_14892ce94 body=44 status=ok
// SIG undefined FUN_14892ce94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14892ce94(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8902c = _DAT_14cb8902c + -1;
  *param_1 = DAT_14cb89020;
  DAT_14cb89020 = param_1;
  return;
}



// FUNCTION 14892cec0 FUN_14892cec0 body=53 status=ok
// SIG undefined FUN_14892cec0(void)

void FUN_14892cec0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b1e4fa0;
  *(undefined4 *)(param_1 + 3) = 4;
  return;
}



// FUNCTION 14892cf1e FUN_14892cf1e body=74 status=ok
// SIG undefined FUN_14892cf1e(void)

void FUN_14892cf1e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14892cf68(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014892cf33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140ef166c(&DAT_14cb89020);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b1e4fa0;
  *(undefined4 *)(puVar2 + 3) = 4;
  return;
}



// FUNCTION 14892cf68 FUN_14892cf68 body=204 status=ok
// SIG undefined FUN_14892cf68(void)

longlong FUN_14892cf68(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1460f5c2e();
  lVar3 = *param_1;
  if (DAT_14cb88fd0 != DAT_14cb88ffc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb89000;
    if (DAT_14cb89008 != (undefined *)0x0) {
      puVar7 = DAT_14cb89008;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb89010 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb88fc8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb88fc0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14892d054 FUN_14892d054 body=40 status=ok
// SIG undefined FUN_14892d054(void)

undefined8 FUN_14892d054(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14892cf68(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 14892d07c FUN_14892d07c body=76 status=ok
// SIG undefined FUN_14892d07c(void)

undefined8 FUN_14892d07c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14892cf68(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014892d0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14892d0d2 FUN_14892d0d2 body=44 status=ok
// SIG undefined FUN_14892d0d2(void)

void FUN_14892d0d2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 14892d0fe FUN_14892d0fe body=22 status=ok
// SIG undefined FUN_14892d0fe(void)

ulonglong FUN_14892d0fe(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb890c8;
  if (DAT_14cb890c8 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb890c8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb890c8 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb890c8 + 0x1fc) < (int)DAT_14cb890c8[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb890c8 + 0x300))(DAT_14cb890c8);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 14892d114 FUN_14892d114 body=164 status=ok
// SIG undefined FUN_14892d114(void)

void FUN_14892d114(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140a01d60();
  FUN_14892d1ba(param_1 + 0x398,local_18,param_1,FUN_1486dfb96);
  FUN_14892d1ba(param_1 + 0x3b0,local_18,param_1,FUN_1486dfbc6);
  FUN_14892d2b0(param_1 + 0x3c8,local_18,param_1,FUN_1486dfbf6);
  FUN_14892d2b0(param_1 + 0x3e0,local_18,param_1,FUN_1486dfc54);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892d1ba FUN_14892d1ba body=244 status=ok
// SIG undefined FUN_14892d1ba(void)

undefined8
FUN_14892d1ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b41f770;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892d2b0 FUN_14892d2b0 body=244 status=ok
// SIG undefined FUN_14892d2b0(void)

undefined8
FUN_14892d2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3ecd00;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b41f7e0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ace2c8(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892d3a6 FUN_14892d3a6 body=198 status=ok
// SIG undefined FUN_14892d3a6(void)

void FUN_14892d3a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"PlayerStateArray",1);
  uVar1 = FUN_14113c964();
  FUN_14113c964();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  local_28 = 0;
  local_38 = 1;
  uStack_30 = CONCAT71(uStack_30._1_7_,1);
  local_48 = L"StableIndex";
  local_40 = &DAT_10000000c;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892d46e FUN_14892d46e body=188 status=ok
// SIG undefined FUN_14892d46e(void)

undefined8 FUN_14892d46e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_145894e7a();
    if (*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) {
      uVar4 = 0;
      if ((param_2 == 0) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) goto LAB_14892d4ab;
      cVar2 = (**(code **)(*plVar1 + 0x650))(plVar1);
      if (cVar2 == '\0') {
        FUN_1489320da(param_2,param_1);
        local_28 = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        FUN_148931534(param_1 + 0x410,&local_28);
        uVar4 = 1;
        goto LAB_14892d4ab;
      }
    }
  }
  uVar4 = 0;
LAB_14892d4ab:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892d52c FUN_14892d52c body=262 status=ok
// SIG undefined FUN_14892d52c(void)

undefined8 FUN_14892d52c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar3 = *(int *)(param_1 + 0x418);
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x410);
    iVar4 = 1;
    lVar5 = 0;
    lVar6 = 0;
    bVar2 = DAT_14c950c29;
    do {
      if ((param_2 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar2 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar5) == param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x418);
        if (iVar3 - iVar4 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x410) + (lVar6 >> 0x20) * 8),
                  (void *)(*(longlong *)(param_1 + 0x410) + (lVar6 >> 0x20) * 8 + 8),
                  (longlong)(iVar3 - iVar4) << 3);
          iVar3 = *(int *)(param_1 + 0x418);
        }
        *(int *)(param_1 + 0x418) = iVar3 + -1;
        FUN_148931678(param_1 + 0x410);
        return 1;
      }
      lVar6 = lVar6 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar3 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 14892d632 FUN_14892d632 body=86 status=ok
// SIG undefined FUN_14892d632(void)

void FUN_14892d632(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x418);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x410);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_148932114();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 14892d688 FUN_14892d688 body=78 status=ok
// SIG undefined FUN_14892d688(void)

void FUN_14892d688(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x418);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x410);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_148932114();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 14892d6d6 FUN_14892d6d6 body=68 status=ok
// SIG undefined FUN_14892d6d6(void)

uint FUN_14892d6d6(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x418) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x410) + lVar4);
      if ((lVar2 != 0) && (sVar1 = *(short *)(lVar2 + 0x538), -1 < sVar1)) {
        uVar3 = uVar3 | 1 << ((int)sVar1 & 0x1fU);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x418) * 8 != lVar4);
  }
  return uVar3;
}



// FUNCTION 14892d71a FUN_14892d71a body=139 status=ok
// SIG undefined FUN_14892d71a(void)

void FUN_14892d71a(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 0xd8) = 0x3e008081;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f008081;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  local_24 = 0;
  FUN_140002266(local_38,L"Group Index: %d",(int)*(short *)(param_1 + 0x420));
  FUN_147d8f316(param_2 + 0xa8,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892d7a6 FUN_14892d7a6 body=43 status=ok
// SIG undefined FUN_14892d7a6(void)

void FUN_14892d7a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14892d7d2(&DAT_14cb89130);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b41e960;
  return;
}



// FUNCTION 14892d7d2 FUN_14892d7d2 body=84 status=ok
// SIG undefined FUN_14892d7d2(void)

void FUN_14892d7d2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x180,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 3;
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



// FUNCTION 14892d826 FUN_14892d826 body=44 status=ok
// SIG undefined FUN_14892d826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14892d826(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8913c = _DAT_14cb8913c + -1;
  *param_1 = DAT_14cb89130;
  DAT_14cb89130 = param_1;
  return;
}



// FUNCTION 14892d852 FUN_14892d852 body=43 status=ok
// SIG undefined FUN_14892d852(void)

void FUN_14892d852(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b41e960;
  return;
}



// FUNCTION 14892d87e FUN_14892d87e body=106 status=ok
// SIG undefined FUN_14892d87e(void)

undefined8 FUN_14892d87e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_14881c4a0(param_3);
  if (plVar3 != (longlong *)0x0) {
    if ((*(char *)(param_1 + 0x11) == '\x01') && (cVar2 = FUN_1449ce79a(plVar3), cVar2 != '\0')) {
      return 1;
    }
    if (((*(char *)(param_1 + 0x10) == '\x01') &&
        (plVar1 = (longlong *)plVar3[0x36], plVar1 != plVar3 && plVar1 != (longlong *)0x0)) &&
       (lVar4 = (**(code **)(*plVar1 + 0x5e8))(), lVar4 != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14892d8ec FUN_14892d8ec body=7 status=ok
// SIG undefined FUN_14892d8ec(void)

void FUN_14892d8ec(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d2) = param_2;
  return;
}



// FUNCTION 14892d8f4 FUN_14892d8f4 body=9 status=ok
// SIG undefined FUN_14892d8f4(void)

void FUN_14892d8f4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d4) = param_2;
  return;
}



// FUNCTION 14892d8fe FUN_14892d8fe body=7 status=ok
// SIG undefined FUN_14892d8fe(void)

void FUN_14892d8fe(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d8) = param_2;
  return;
}



// FUNCTION 14892d90c FUN_14892d90c body=38 status=ok
// SIG undefined FUN_14892d90c(void)

undefined8 FUN_14892d90c(undefined8 param_1,int param_2)

{
  FUN_1411203da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892d938 FUN_14892d938 body=45 status=ok
// SIG undefined FUN_14892d938(void)

longlong FUN_14892d938(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1414cd5a2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892d966 FUN_14892d966 body=38 status=ok
// SIG undefined FUN_14892d966(void)

undefined8 FUN_14892d966(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892d98c FUN_14892d98c body=52 status=ok
// SIG undefined FUN_14892d98c(void)

undefined8 * FUN_14892d98c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892d9c6 FUN_14892d9c6 body=54 status=ok
// SIG undefined FUN_14892d9c6(void)

longlong FUN_14892d9c6(longlong param_1,int param_2)

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


