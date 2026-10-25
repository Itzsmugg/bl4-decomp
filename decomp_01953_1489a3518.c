// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489a3518 FUN_1489a3518 body=89 status=ok
// SIG undefined FUN_1489a3518(void)

bool FUN_1489a3518(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a3563;
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
LAB_1489a3563:
  return lVar6 == param_2;
}



// FUNCTION 1489a3572 FUN_1489a3572 body=118 status=ok
// SIG undefined FUN_1489a3572(void)

void FUN_1489a3572(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4304a0;
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



// FUNCTION 1489a35e8 FUN_1489a35e8 body=156 status=ok
// SIG undefined FUN_1489a35e8(void)

void FUN_1489a35e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4304a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a3674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a3684 FUN_1489a3684 body=100 status=ok
// SIG undefined FUN_1489a3684(void)

void FUN_1489a3684(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a36dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a36e8 FUN_1489a36e8 body=38 status=ok
// SIG undefined FUN_1489a36e8(void)

undefined8 FUN_1489a36e8(undefined8 param_1,int param_2)

{
  FUN_140bef390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a370e FUN_1489a370e body=9 status=ok
// SIG undefined FUN_1489a370e(void)

void FUN_1489a370e(longlong param_1)

{
  FUN_1489a3818(param_1 + 0x10);
  return;
}



// FUNCTION 1489a3718 FUN_1489a3718 body=29 status=ok
// SIG undefined FUN_1489a3718(void)

undefined8 FUN_1489a3718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a3736 FUN_1489a3736 body=38 status=ok
// SIG undefined FUN_1489a3736(void)

undefined8 FUN_1489a3736(undefined8 param_1,int param_2)

{
  FUN_1489a3818();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a375c FUN_1489a375c body=94 status=ok
// SIG undefined FUN_1489a375c(void)

void FUN_1489a375c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14103b6f6(*(longlong *)(param_1 + 0x48),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    plVar3 = *(longlong **)(param_1 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a37ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1489a37ba FUN_1489a37ba body=94 status=ok
// SIG undefined FUN_1489a37ba(void)

void FUN_1489a37ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14103b6f6(*(longlong *)(param_1 + 0x48),1);
    *(undefined8 *)(param_1 + 0x48) = 0;
    plVar3 = *(longlong **)(param_1 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a380c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1489a3818 FUN_1489a3818 body=71 status=ok
// SIG undefined FUN_1489a3818(void)

void FUN_1489a3818(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b430590;
  plVar3 = (longlong *)param_1[10];
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
  FUN_140bef390(param_1);
  return;
}



// FUNCTION 1489a3860 FUN_1489a3860 body=167 status=ok
// SIG undefined FUN_1489a3860(void)

void FUN_1489a3860(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489a38db;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489a38db;
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
LAB_1489a38db:
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
                    /* WARNING: Could not recover jumptable at 0x0001489a38fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489a3908 FUN_1489a3908 body=64 status=ok
// SIG undefined FUN_1489a3908(void)

undefined8 * FUN_1489a3908(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4305e0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  FUN_140bef390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a3948 FUN_1489a3948 body=143 status=ok
// SIG undefined FUN_1489a3948(void)

void FUN_1489a3948(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489a39de FUN_1489a39de body=89 status=ok
// SIG undefined FUN_1489a39de(void)

bool FUN_1489a39de(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a3a29;
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
LAB_1489a3a29:
  return lVar6 == param_2;
}



// FUNCTION 1489a3a38 FUN_1489a3a38 body=118 status=ok
// SIG undefined FUN_1489a3a38(void)

void FUN_1489a3a38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430630;
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



// FUNCTION 1489a3aae FUN_1489a3aae body=156 status=ok
// SIG undefined FUN_1489a3aae(void)

void FUN_1489a3aae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430630;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a3b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a3b4a FUN_1489a3b4a body=100 status=ok
// SIG undefined FUN_1489a3b4a(void)

ulonglong FUN_1489a3b4a(longlong param_1)

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
LAB_1489a3ba3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489a3ba3;
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



// FUNCTION 1489a3bb2 FUN_1489a3bb2 body=81 status=ok
// SIG undefined FUN_1489a3bb2(void)

undefined8 FUN_1489a3bb2(longlong param_1)

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



// FUNCTION 1489a3c0a FUN_1489a3c0a body=89 status=ok
// SIG undefined FUN_1489a3c0a(void)

bool FUN_1489a3c0a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a3c55;
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
LAB_1489a3c55:
  return lVar6 == param_2;
}



// FUNCTION 1489a3c64 FUN_1489a3c64 body=118 status=ok
// SIG undefined FUN_1489a3c64(void)

void FUN_1489a3c64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a9c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4306a0;
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



// FUNCTION 1489a3cda FUN_1489a3cda body=118 status=ok
// SIG undefined FUN_1489a3cda(void)

void FUN_1489a3cda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a9c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4306a0;
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



// FUNCTION 1489a3d50 FUN_1489a3d50 body=156 status=ok
// SIG undefined FUN_1489a3d50(void)

void FUN_1489a3d50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a9c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4306a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a3ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a3dec FUN_1489a3dec body=104 status=ok
// SIG undefined FUN_1489a3dec(void)

void FUN_1489a3dec(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a3e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a3e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a3e58 FUN_1489a3e58 body=81 status=ok
// SIG undefined FUN_1489a3e58(void)

undefined8 FUN_1489a3e58(longlong param_1)

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



// FUNCTION 1489a3eb0 FUN_1489a3eb0 body=89 status=ok
// SIG undefined FUN_1489a3eb0(void)

bool FUN_1489a3eb0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a3efb;
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
LAB_1489a3efb:
  return lVar6 == param_2;
}



// FUNCTION 1489a3f0a FUN_1489a3f0a body=118 status=ok
// SIG undefined FUN_1489a3f0a(void)

void FUN_1489a3f0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430710;
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



// FUNCTION 1489a3f80 FUN_1489a3f80 body=118 status=ok
// SIG undefined FUN_1489a3f80(void)

void FUN_1489a3f80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430710;
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



// FUNCTION 1489a3ff6 FUN_1489a3ff6 body=156 status=ok
// SIG undefined FUN_1489a3ff6(void)

void FUN_1489a3ff6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430710;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a4082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a4092 FUN_1489a4092 body=100 status=ok
// SIG undefined FUN_1489a4092(void)

void FUN_1489a4092(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a40de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a40eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a40fa FUN_1489a40fa body=81 status=ok
// SIG undefined FUN_1489a40fa(void)

undefined8 FUN_1489a40fa(longlong param_1)

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



// FUNCTION 1489a4152 FUN_1489a4152 body=89 status=ok
// SIG undefined FUN_1489a4152(void)

bool FUN_1489a4152(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a419d;
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
LAB_1489a419d:
  return lVar6 == param_2;
}



// FUNCTION 1489a41ac FUN_1489a41ac body=118 status=ok
// SIG undefined FUN_1489a41ac(void)

void FUN_1489a41ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b430810;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4307a0;
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



// FUNCTION 1489a4222 FUN_1489a4222 body=156 status=ok
// SIG undefined FUN_1489a4222(void)

void FUN_1489a4222(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b430810;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4307a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a42ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a42be FUN_1489a42be body=104 status=ok
// SIG undefined FUN_1489a42be(void)

void FUN_1489a42be(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a430b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a431c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a4328 FUN_1489a4328 body=132 status=ok
// SIG undefined FUN_1489a4328(void)

void FUN_1489a4328(longlong param_1,int param_2)

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



// FUNCTION 1489a43ae FUN_1489a43ae body=132 status=ok
// SIG undefined FUN_1489a43ae(void)

void FUN_1489a43ae(longlong param_1,int param_2)

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



// FUNCTION 1489a4434 FUN_1489a4434 body=132 status=ok
// SIG undefined FUN_1489a4434(void)

void FUN_1489a4434(longlong param_1,int param_2)

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



// FUNCTION 1489a44ba FUN_1489a44ba body=38 status=ok
// SIG undefined FUN_1489a44ba(void)

undefined8 FUN_1489a44ba(undefined8 param_1,int param_2)

{
  FUN_140bef274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a44e0 FUN_1489a44e0 body=38 status=ok
// SIG undefined FUN_1489a44e0(void)

undefined8 FUN_1489a44e0(undefined8 param_1,int param_2)

{
  FUN_140bef274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a450a FUN_1489a450a body=81 status=ok
// SIG undefined FUN_1489a450a(void)

undefined8 FUN_1489a450a(longlong param_1)

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



// FUNCTION 1489a4562 FUN_1489a4562 body=89 status=ok
// SIG undefined FUN_1489a4562(void)

bool FUN_1489a4562(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a45ad;
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
LAB_1489a45ad:
  return lVar6 == param_2;
}



// FUNCTION 1489a45bc FUN_1489a45bc body=118 status=ok
// SIG undefined FUN_1489a45bc(void)

void FUN_1489a45bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4309b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430940;
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



// FUNCTION 1489a4632 FUN_1489a4632 body=156 status=ok
// SIG undefined FUN_1489a4632(void)

void FUN_1489a4632(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4309b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430940;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a46be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a46ce FUN_1489a46ce body=104 status=ok
// SIG undefined FUN_1489a46ce(void)

void FUN_1489a46ce(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a471b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a472c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a4738 FUN_1489a4738 body=38 status=ok
// SIG undefined FUN_1489a4738(void)

undefined8 FUN_1489a4738(undefined8 param_1,int param_2)

{
  FUN_140bef390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a475e FUN_1489a475e body=69 status=ok
// SIG undefined FUN_1489a475e(void)

undefined8 * FUN_1489a475e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b430ab0;
  FUN_140bef21e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a47aa FUN_1489a47aa body=81 status=ok
// SIG undefined FUN_1489a47aa(void)

undefined8 FUN_1489a47aa(longlong param_1)

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



// FUNCTION 1489a4802 FUN_1489a4802 body=89 status=ok
// SIG undefined FUN_1489a4802(void)

bool FUN_1489a4802(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489a484d;
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
LAB_1489a484d:
  return lVar6 == param_2;
}



// FUNCTION 1489a485c FUN_1489a485c body=118 status=ok
// SIG undefined FUN_1489a485c(void)

void FUN_1489a485c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430ad0;
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



// FUNCTION 1489a48d2 FUN_1489a48d2 body=156 status=ok
// SIG undefined FUN_1489a48d2(void)

void FUN_1489a48d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430ad0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a495e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a496e FUN_1489a496e body=103 status=ok
// SIG undefined FUN_1489a496e(void)

void FUN_1489a496e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a49ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a49cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a49da FUN_1489a49da body=81 status=ok
// SIG undefined FUN_1489a49da(void)

undefined8 FUN_1489a49da(longlong param_1)

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



// FUNCTION 1489a4a32 FUN_1489a4a32 body=118 status=ok
// SIG undefined FUN_1489a4a32(void)

void FUN_1489a4a32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430b40;
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



// FUNCTION 1489a4aa8 FUN_1489a4aa8 body=118 status=ok
// SIG undefined FUN_1489a4aa8(void)

void FUN_1489a4aa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430b40;
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



// FUNCTION 1489a4b1e FUN_1489a4b1e body=156 status=ok
// SIG undefined FUN_1489a4b1e(void)

void FUN_1489a4b1e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b430b40;
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
                    /* WARNING: Could not recover jumptable at 0x0001489a4baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489a4bba FUN_1489a4bba body=104 status=ok
// SIG undefined FUN_1489a4bba(void)

void FUN_1489a4bba(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489a4c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489a4c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489a4c22 FUN_1489a4c22 body=57 status=ok
// SIG undefined FUN_1489a4c22(void)

void FUN_1489a4c22(undefined8 *param_1,int param_2)

{
  FUN_1406655c0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1489a4c5c(param_1,param_2);
  return;
}



// FUNCTION 1489a4c5c FUN_1489a4c5c body=112 status=ok
// SIG undefined FUN_1489a4c5c(void)

void FUN_1489a4c5c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1489a4ccc FUN_1489a4ccc body=136 status=ok
// SIG undefined FUN_1489a4ccc(void)

void FUN_1489a4ccc(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x78;
  _Dst = (void *)(lVar1 + lVar3);
  *(undefined8 *)(lVar1 + 0x38 + lVar3) = 0;
  *(undefined8 *)(lVar1 + 0x40 + lVar3) = 0xffffffffffffffff;
  if (*(char *)(lVar1 + 0x34 + lVar3) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x34) = 0;
  }
  if (*(longlong **)((longlong)_Dst + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)_Dst + 0x10) + 0x10))();
  }
  iVar2 = (int)param_1[1];
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x78),(longlong)iVar4 * 0x78);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1489a4d54 FUN_1489a4d54 body=124 status=ok
// SIG undefined FUN_1489a4d54(void)

void FUN_1489a4d54(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + lVar1);
  FUN_140665564(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x88),(longlong)iVar3 * 0x88);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1489a4dd0 FUN_1489a4dd0 body=100 status=ok
// SIG undefined FUN_1489a4dd0(void)

void FUN_1489a4dd0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x2c0))(0,local_28);
  FUN_1489a4e36(local_28,param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a4e36 FUN_1489a4e36 body=361 status=ok
// SIG undefined FUN_1489a4e36(void)

void FUN_1489a4e36(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489aac9a(&local_50,param_1);
  lVar2 = local_50;
  lVar3 = (longlong)local_48;
  iVar4 = 0;
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + 0x48 + lVar5);
      if (lVar1 != 0) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1403de658(param_2,iVar4);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar1 + 0x40);
      }
      lVar5 = lVar5 + 0xb8;
      iVar4 = local_48;
    } while (lVar3 * 0xb8 - lVar5 != 0);
  }
  FUN_14499183d(local_50,iVar4);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1489ab01e(&local_50,param_1);
  lVar2 = local_50;
  lVar3 = (longlong)local_48;
  iVar4 = 0;
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + 0x50 + lVar5);
      if (lVar1 != 0) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1403de658(param_2,iVar4);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar1 + 0x38);
      }
      lVar5 = lVar5 + 0xb8;
      iVar4 = local_48;
    } while (lVar3 * 0xb8 - lVar5 != 0);
  }
  FUN_14499183d(local_50,iVar4);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1489ab470(*param_2,*param_2 + (longlong)(int)param_2[1] * 8);
  FUN_1489ab3a2(param_2);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a4fa0 FUN_1489a4fa0 body=136 status=ok
// SIG undefined FUN_1489a4fa0(void)

longlong FUN_1489a4fa0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x2c0))(param_1 + -0x30);
  if ((longlong)(int)uStack_20 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(local_28 + lVar1) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(local_28 + lVar1) + 0x40), lVar2 != 0))
      goto LAB_1489a4fff;
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)uStack_20 * 8 != lVar1);
  }
  lVar2 = 0;
LAB_1489a4fff:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a502a FUN_1489a502a body=166 status=ok
// SIG undefined FUN_1489a502a(void)

void FUN_1489a502a(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_50 = &DAT_14cb8cc98;
  local_48 = puVar2;
  local_38 = param_2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a50d2 FUN_1489a50d2 body=193 status=ok
// SIG undefined FUN_1489a50d2(void)

void FUN_1489a50d2(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1403dcede();
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = (longlong)(int)param_1[1] * 0xf0;
    lVar4 = *param_1 + 0x10;
    do {
      lVar2 = (**(code **)(*param_3 + 0x58))(param_3,lVar4 + -0xc);
      if (lVar2 == 0) {
        lVar2 = FUN_140312a30(param_3,lVar4 + -0xc);
      }
      lVar3 = *(longlong *)(lVar4 + 8);
      if ((lVar3 != 0) ||
         ((lVar2 != 0 && (lVar3 = FUN_1404dcd0c(lVar2 + 0x1288,lVar4), lVar3 != 0)))) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_141022c24(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar4 = lVar4 + 0xf0;
      lVar5 = lVar5 + -0xf0;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1489a5194 FUN_1489a5194 body=67 status=ok
// SIG undefined FUN_1489a5194(void)

longlong FUN_1489a5194(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406d22da(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xf0 + *param_1;
  FUN_1406d22b1(lVar2,1);
  return lVar2;
}



// FUNCTION 1489a51d8 FUN_1489a51d8 body=26 status=ok
// SIG undefined FUN_1489a51d8(void)

undefined8 FUN_1489a51d8(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x40);
  return param_2;
}



// FUNCTION 1489a51f2 FUN_1489a51f2 body=26 status=ok
// SIG undefined FUN_1489a51f2(void)

undefined8 FUN_1489a51f2(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x38);
  return param_2;
}



// FUNCTION 1489a520c FUN_1489a520c body=155 status=ok
// SIG undefined FUN_1489a520c(void)

void FUN_1489a520c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined8 *)(param_1 + 0x38);
  FUN_1446dcdd4(local_48);
  lVar1 = FUN_14143d06a(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1405fab15(local_60);
    local_68 = 0;
    FUN_1405fd19a(*(undefined8 *)(*param_2 + 0x38),lVar1,0,local_60);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a52a8 FUN_1489a52a8 body=128 status=ok
// SIG undefined FUN_1489a52a8(void)

void FUN_1489a52a8(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*param_2 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        FUN_140de99aa(uVar1,param_1 + 0x44,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489a5344 FUN_1489a5344 body=133 status=ok
// SIG undefined FUN_1489a5344(void)

undefined8 FUN_1489a5344(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"TricksChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a53ca FUN_1489a53ca body=33 status=ok
// SIG undefined FUN_1489a53ca(void)

void FUN_1489a53ca(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  FUN_140ea1408(uVar1,param_2,1);
  return;
}



// FUNCTION 1489a53fe FUN_1489a53fe body=136 status=ok
// SIG undefined FUN_1489a53fe(void)

void FUN_1489a53fe(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_14070cc62();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x858) != 0)) {
      local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
      FUN_1400bc96c(*(longlong *)(lVar1 + 0x858) + 0x11f0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5488 FUN_1489a5488 body=136 status=ok
// SIG undefined FUN_1489a5488(void)

void FUN_1489a5488(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_14070cc62();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x858) != 0)) {
      local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
      FUN_1400bc8c2(*(longlong *)(lVar1 + 0x858) + 0x11f0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5512 FUN_1489a5512 body=179 status=ok
// SIG undefined FUN_1489a5512(void)

void FUN_1489a5512(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 0x38);
  if (lVar2 != 0) {
    uVar1 = FUN_1407725cc();
    lVar2 = FUN_144718840(lVar2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_144b397c8(lVar2);
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        lVar4 = (longlong)*(int *)(param_1 + 0x38) << 3;
        do {
          lVar3 = FUN_144a782da(uVar1,lVar2);
          if (lVar3 != 0) {
            local_38 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
            FUN_1413d8066(lVar3,&local_38);
          }
          lVar2 = lVar2 + 8;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a55c6 FUN_1489a55c6 body=179 status=ok
// SIG undefined FUN_1489a55c6(void)

void FUN_1489a55c6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 0x38);
  if (lVar2 != 0) {
    uVar1 = FUN_1407725cc();
    lVar2 = FUN_144718840(lVar2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_144b397c8(lVar2);
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        lVar4 = (longlong)*(int *)(param_1 + 0x38) << 3;
        do {
          lVar3 = FUN_144a782da(uVar1,lVar2);
          if (lVar3 != 0) {
            local_38 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
            FUN_14134c034(lVar3,&local_38);
          }
          lVar2 = lVar2 + 8;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a567a FUN_1489a567a body=169 status=ok
// SIG undefined FUN_1489a567a(void)

void FUN_1489a567a(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1403de658(param_1 + 0x30,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = DAT_14cb72618;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1403de658(param_1 + 0x30,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = DAT_14cb72620;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1403de658(param_1 + 0x30,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = DAT_14cb72628;
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 1489a5724 FUN_1489a5724 body=145 status=ok
// SIG undefined FUN_1489a5724(void)

void FUN_1489a5724(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    uVar2 = FUN_144a853d0();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_144801c46) {
        plVar3 = plVar3 + 0x9f;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
      }
      local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
      FUN_1400bc96c(plVar3 + 0x1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a57b6 FUN_1489a57b6 body=145 status=ok
// SIG undefined FUN_1489a57b6(void)

void FUN_1489a57b6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    uVar2 = FUN_144a853d0();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_144801c46) {
        plVar3 = plVar3 + 0x9f;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
      }
      local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
      FUN_1400bc8c2(plVar3 + 0x1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5848 FUN_1489a5848 body=135 status=ok
// SIG undefined FUN_1489a5848(void)

void FUN_1489a5848(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_14070cc62();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x858) != 0)) {
      local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
      FUN_1407ae0cc(*(longlong *)(lVar1 + 0x858),&local_20,2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a58d0 FUN_1489a58d0 body=129 status=ok
// SIG undefined FUN_1489a58d0(void)

void FUN_1489a58d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_14070cc62();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x858) != 0)) {
      local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
      FUN_1407adf94();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5952 FUN_1489a5952 body=131 status=ok
// SIG undefined FUN_1489a5952(void)

void FUN_1489a5952(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_140789e1e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_1410b77f0(param_2 + 0x80,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a59d6 FUN_1489a59d6 body=182 status=ok
// SIG undefined FUN_1489a59d6(void)

longlong * FUN_1489a59d6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b432a40;
  plVar3[2] = (longlong)&PTR_FUN_14b4333c0;
  plVar3[3] = param_1;
  plVar3[4] = param_3;
  *(undefined2 *)(plVar3 + 5) = 0;
  *(byte *)((longlong)plVar3 + 0x2a) = *(byte *)((longlong)plVar3 + 0x2a) & 0xfc;
  plVar3[8] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x34) = 0;
  *(undefined2 *)((longlong)plVar3 + 0x3c) = 0;
  plVar3[9] = -1;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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



// FUNCTION 1489a5a8c FUN_1489a5a8c body=75 status=ok
// SIG undefined FUN_1489a5a8c(void)

undefined8 * FUN_1489a5a8c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,lVar1);
  return param_1;
}



// FUNCTION 1489a5ad8 FUN_1489a5ad8 body=8 status=ok
// SIG undefined FUN_1489a5ad8(void)

undefined * FUN_1489a5ad8(void)

{
  return &DAT_14cb8ccec;
}



// FUNCTION 1489a5ae0 FUN_1489a5ae0 body=130 status=ok
// SIG undefined FUN_1489a5ae0(void)

undefined8 FUN_1489a5ae0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[2] != 1) {
    if (*param_1 == 0) {
      FUN_140056680(param_2,&DAT_149e01fe8);
    }
    else {
      local_18 = *(undefined8 *)(*param_1 + 0x18);
      FUN_1400021e4(&local_18,param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_1400021e4(param_1 + 1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489a5b64 FUN_1489a5b64 body=97 status=ok
// SIG undefined FUN_1489a5b64(void)

bool FUN_1489a5b64(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892b54;
  if (uVar1 == uVar2) {
    (**(code **)(*param_3 + 0x138))(param_3,param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return uVar1 == uVar2;
}



// FUNCTION 1489a5bc6 FUN_1489a5bc6 body=192 status=ok
// SIG undefined FUN_1489a5bc6(void)

void FUN_1489a5bc6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 8;
  local_40[0] = (undefined8 ***)0x0;
  local_48 = param_2;
  FUN_14485c47a(local_40,param_3);
  local_20 = 7;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 7;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_48,local_40);
    uVar2 = (uint)local_20;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5c88 FUN_1489a5c88 body=187 status=ok
// SIG undefined FUN_1489a5c88(void)

void FUN_1489a5c88(longlong param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 4;
  local_38 = (uint)param_3;
  local_18 = 1;
  local_40 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,&local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_20 < 0x19) {
      puVar3 = &local_38;
    }
    else {
      puVar3 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5d44 FUN_1489a5d44 body=185 status=ok
// SIG undefined FUN_1489a5d44(void)

void FUN_1489a5d44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 4;
  local_18 = 3;
  local_40 = param_2;
  local_38 = param_3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 3;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,&local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_20 < 0x19) {
      puVar3 = &local_38;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5dfe FUN_1489a5dfe body=184 status=ok
// SIG undefined FUN_1489a5dfe(void)

void FUN_1489a5dfe(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 4;
  local_18 = 2;
  local_40 = param_2;
  local_38 = param_3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 2;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,&local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_20 < 0x19) {
      puVar3 = &local_38;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a5eb8 FUN_1489a5eb8 body=184 status=ok
// SIG undefined FUN_1489a5eb8(void)

void FUN_1489a5eb8(longlong param_1,undefined8 param_2,undefined8 ****param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 ***local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 8;
  local_18 = 0x12;
  local_40 = param_2;
  local_38[0] = param_3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 0x12;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_38[0];
    if (local_20 < 0x19) {
      ppppuVar3 = local_38;
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a5f72 FUN_1489a5f72 body=184 status=ok
// SIG undefined FUN_1489a5f72(void)

void FUN_1489a5f72(longlong param_1,undefined8 param_2,undefined8 ****param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 ***local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 8;
  local_18 = 0xb;
  local_40 = param_2;
  local_38[0] = param_3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 0xb;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_38[0];
    if (local_20 < 0x19) {
      ppppuVar3 = local_38;
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a602c FUN_1489a602c body=192 status=ok
// SIG undefined FUN_1489a602c(void)

void FUN_1489a602c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 8;
  local_40[0] = (undefined8 ***)0x0;
  local_48 = param_2;
  FUN_14485c47a(local_40,param_3);
  local_20 = 6;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 6;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_48,local_40);
    uVar2 = (uint)local_20;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a60ee FUN_1489a60ee body=197 status=ok
// SIG undefined FUN_1489a60ee(void)

void FUN_1489a60ee(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0x18;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_18 = 5;
  local_40 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 5;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,&local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_20 < 0x19) {
      puVar3 = &local_38;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a61b4 FUN_1489a61b4 body=277 status=ok
// SIG undefined FUN_1489a61b4(void)

void FUN_1489a61b4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  code *pcVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 ***local_58;
  int local_50;
  undefined4 local_4c;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x10;
  local_58 = (undefined8 ****)0x0;
  local_50 = (int)param_3[1];
  lVar4 = (longlong)local_50;
  _Src = (void *)*param_3;
  local_60 = param_2;
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar4 * 2);
  }
  local_38 = 8;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 8;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_60,&local_58);
    uVar2 = (uint)local_38;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_58;
    if (local_40 < 0x19) {
      ppppuVar3 = &local_58;
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a62ca FUN_1489a62ca body=197 status=ok
// SIG undefined FUN_1489a62ca(void)

void FUN_1489a62ca(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0x18;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_18 = 4;
  local_40 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 4;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_40,&local_38);
    uVar2 = (uint)local_18;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_20 < 0x19) {
      puVar3 = &local_38;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6390 FUN_1489a6390 body=217 status=ok
// SIG undefined FUN_1489a6390(void)

void FUN_1489a6390(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x48;
  local_50 = param_2;
  local_48[0] = (undefined8 ***)FUN_14001cc68(0x48,0);
  ppppuVar5 = (undefined8 ****)local_48[0];
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *ppppuVar5 = (undefined8 ***)*param_3;
    param_3 = param_3 + 1;
    ppppuVar5 = ppppuVar5 + 1;
  }
  local_28 = 0xf;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar3 = 0xf;
    uVar2 = 0x48;
  }
  else {
    FUN_1408834b4(*(longlong *)(param_1 + 0x38),&local_50,local_48);
    uVar3 = (uint)local_28;
    uVar2 = local_30;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar5 = (undefined8 ****)local_48[0];
    if (uVar2 < 0x19) {
      ppppuVar5 = local_48;
    }
    (*pcVar1)(ppppuVar5);
    uVar2 = local_30;
  }
  if (0x18 < uVar2) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a646a FUN_1489a646a body=77 status=ok
// SIG undefined FUN_1489a646a(void)

undefined8 FUN_1489a646a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_145764230(*(longlong *)(param_1 + 0x38),&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a64b8 FUN_1489a64b8 body=78 status=ok
// SIG undefined FUN_1489a64b8(void)

void FUN_1489a64b8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140ed0982(*(longlong *)(param_1 + 0x38),&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar1);
}



// FUNCTION 1489a6508 FUN_1489a6508 body=77 status=ok
// SIG undefined FUN_1489a6508(void)

undefined8 FUN_1489a6508(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14088155e(*(longlong *)(param_1 + 0x38),&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6556 FUN_1489a6556 body=93 status=ok
// SIG undefined FUN_1489a6556(void)

undefined8 * FUN_1489a6556(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *param_2 = DAT_14c9ab1a8;
  }
  else {
    FUN_1489abdd6(*(longlong *)(param_1 + 0x38),param_2,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a65b4 FUN_1489a65b4 body=93 status=ok
// SIG undefined FUN_1489a65b4(void)

undefined8 * FUN_1489a65b4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *param_2 = DAT_14c9ab1b0;
  }
  else {
    FUN_1489abeca(*(longlong *)(param_1 + 0x38),param_2,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6612 FUN_1489a6612 body=77 status=ok
// SIG undefined FUN_1489a6612(void)

undefined8 FUN_1489a6612(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14105cc4c(*(longlong *)(param_1 + 0x38),&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6660 FUN_1489a6660 body=142 status=ok
// SIG undefined FUN_1489a6660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1489a6660(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = DAT_14c9ab1c8;
    local_28 = _DAT_14c9ab1b8;
    uStack_24 = uRam000000014c9ab1bc;
    uStack_20 = uRam000000014c9ab1c0;
    uStack_1c = uRam000000014c9ab1c4;
    FUN_1489abfbe(*(longlong *)(param_1 + 0x38),param_2,&local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c9ab1c8;
  uVar3 = uRam000000014c9ab1c4;
  uVar2 = uRam000000014c9ab1c0;
  uVar1 = uRam000000014c9ab1bc;
  *param_2 = _DAT_14c9ab1b8;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a66f2 FUN_1489a66f2 body=70 status=ok
// SIG undefined FUN_1489a66f2(void)

undefined8 FUN_1489a66f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  FUN_1489a673a(param_1,param_2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a673a FUN_1489a673a body=262 status=ok
// SIG undefined FUN_1489a673a(void)

undefined8 * FUN_1489a673a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  pvVar1 = DAT_14c9ab1d0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
    *param_2 = 0;
    iVar2 = DAT_14c9ab1d8;
    pvVar1 = DAT_14c9ab1d0;
    lVar3 = (longlong)DAT_14c9ab1d8;
    *(int *)(param_2 + 1) = DAT_14c9ab1d8;
    if (lVar3 != 0) {
      FUN_1446dd670(param_2,iVar2,0);
      memcpy((void *)*param_2,pvVar1,lVar3 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    local_48 = (void *)0x0;
    lVar4 = (longlong)DAT_14c9ab1d8;
    local_40 = DAT_14c9ab1d8;
    if (lVar4 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,DAT_14c9ab1d8,0);
      memcpy(local_48,pvVar1,lVar4 * 2);
    }
    FUN_1489ac08e(lVar3,param_2,param_3,&local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489a6842 FUN_1489a6842 body=142 status=ok
// SIG undefined FUN_1489a6842(void)

undefined4 * FUN_1489a6842(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = DAT_14c9ab238;
    local_28 = (undefined4)DAT_14c9ab228;
    uStack_24 = DAT_14c9ab228._4_4_;
    uStack_20 = (undefined4)DAT_14c9ab230;
    uStack_1c = DAT_14c9ab230._4_4_;
    FUN_145764874(*(longlong *)(param_1 + 0x38),param_2,&local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c9ab238;
  uVar3 = DAT_14c9ab230._4_4_;
  uVar2 = (undefined4)DAT_14c9ab230;
  uVar1 = DAT_14c9ab228._4_4_;
  *param_2 = (undefined4)DAT_14c9ab228;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a68d4 FUN_1489a68d4 body=141 status=ok
// SIG undefined FUN_1489a68d4(void)

undefined8 * FUN_1489a68d4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_70 = param_3;
  if (lVar1 != 0) {
    puVar3 = &DAT_14c9ab1e0;
    puVar4 = local_68;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_14576409c(lVar1,param_2,&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  puVar3 = &DAT_14c9ab1e0;
  puVar4 = param_2;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6964 FUN_1489a6964 body=124 status=ok
// SIG undefined FUN_1489a6964(void)

longlong * FUN_1489a6964(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_3 != (longlong *)0x0) && ((longlong)*(int *)(param_1 + 0x48) != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    lVar3 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      if ((*plVar2 != 0) &&
         (cVar1 = (**(code **)(*param_3 + 0x2a8))(param_3,*(undefined8 *)(*plVar2 + 0x30)),
         cVar1 != '\0')) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = *plVar2;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1489a69e0 FUN_1489a69e0 body=314 status=ok
// SIG undefined FUN_1489a69e0(void)

void FUN_1489a69e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
        FUN_1489a6964(uVar3,&local_30,param_2);
        if (local_30 != 0) {
          lVar2 = *(longlong *)(local_30 + 0x30);
          lVar6 = FUN_140ed0e8c();
          plVar4 = local_28;
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            if (local_28 == (longlong *)0x0) {
              FUN_1410c9a0e(local_30,param_3);
            }
            else {
              LOCK();
              *(int *)(local_28 + 1) = (int)local_28[1] + 1;
              UNLOCK();
              FUN_1410c9a0e(local_30,param_3);
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
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_28 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6b1c FUN_1489a6b1c body=316 status=ok
// SIG undefined FUN_1489a6b1c(void)

void FUN_1489a6b1c(longlong *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
        if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
          plVar4 = *(longlong **)(lVar6 + 0x40);
          lVar6 = (longlong)*(int *)(lVar6 + 0x48) << 4;
          do {
            lVar2 = *plVar4;
            if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == param_2)) {
              if (plVar4 == (longlong *)0x0) {
                return;
              }
              plVar4 = (longlong *)plVar4[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              lVar6 = *(longlong *)(lVar2 + 0x30);
              lVar7 = FUN_140ed0e8c();
              lVar6 = *(longlong *)(lVar6 + 0x10);
              if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
                 (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                  != lVar7 + 0x30)) {
                if (plVar4 == (longlong *)0x0) {
                  return;
                }
              }
              else {
                if (plVar4 == (longlong *)0x0) {
                  FUN_1410c9a0e(lVar2,param_3);
                  return;
                }
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                FUN_1410c9a0e(lVar2,param_3);
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
              LOCK();
              plVar5 = plVar4 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 != 0) {
                return;
              }
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x0001489a6c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return;
            }
            plVar4 = plVar4 + 2;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1489a6c58 FUN_1489a6c58 body=314 status=ok
// SIG undefined FUN_1489a6c58(void)

void FUN_1489a6c58(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
        FUN_1489a6964(uVar3,&local_30,param_2);
        if (local_30 != 0) {
          lVar2 = *(longlong *)(local_30 + 0x30);
          lVar6 = FUN_140bb554a();
          plVar4 = local_28;
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            if (local_28 == (longlong *)0x0) {
              FUN_14892a78c(local_30,param_3);
            }
            else {
              LOCK();
              *(int *)(local_28 + 1) = (int)local_28[1] + 1;
              UNLOCK();
              FUN_14892a78c(local_30,param_3);
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
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_28 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a6d94 FUN_1489a6d94 body=316 status=ok
// SIG undefined FUN_1489a6d94(void)

void FUN_1489a6d94(longlong *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
        if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
          plVar4 = *(longlong **)(lVar6 + 0x40);
          lVar6 = (longlong)*(int *)(lVar6 + 0x48) << 4;
          do {
            lVar2 = *plVar4;
            if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == param_2)) {
              if (plVar4 == (longlong *)0x0) {
                return;
              }
              plVar4 = (longlong *)plVar4[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              lVar6 = *(longlong *)(lVar2 + 0x30);
              lVar7 = FUN_140bb554a();
              lVar6 = *(longlong *)(lVar6 + 0x10);
              if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
                 (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                  != lVar7 + 0x30)) {
                if (plVar4 == (longlong *)0x0) {
                  return;
                }
              }
              else {
                if (plVar4 == (longlong *)0x0) {
                  FUN_14892a78c(lVar2,param_3);
                  return;
                }
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                FUN_14892a78c(lVar2,param_3);
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
              LOCK();
              plVar5 = plVar4 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 != 0) {
                return;
              }
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x0001489a6e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return;
            }
            plVar4 = plVar4 + 2;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1489a6ed0 FUN_1489a6ed0 body=107 status=ok
// SIG undefined FUN_1489a6ed0(void)

void FUN_1489a6ed0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001489a6f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2,*(code **)(*plVar3 + 0x40));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489a6f3c FUN_1489a6f3c body=105 status=ok
// SIG undefined FUN_1489a6f3c(void)

void FUN_1489a6f3c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001489a6fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x48))(plVar3,param_2,*(code **)(*plVar3 + 0x48));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489a6fa6 FUN_1489a6fa6 body=160 status=ok
// SIG undefined FUN_1489a6fa6(void)

undefined8 FUN_1489a6fa6(longlong *param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined7 uVar7;
  byte bVar8;
  longlong lVar9;
  
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      param_1 = (longlong *)(ulonglong)(plVar4 == plVar5);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
        uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
        bVar2 = 1;
        if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
          lVar9 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar9);
            if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == param_2)) {
              bVar2 = 1;
              bVar8 = 1;
              goto LAB_1489a7037;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)*(int *)(lVar6 + 0x48) * 0x10 != lVar9);
        }
        bVar8 = 0;
        goto LAB_1489a7037;
      }
    }
  }
  bVar8 = (byte)param_1;
  bVar2 = 0;
  uVar7 = 0;
LAB_1489a7037:
  return CONCAT71(uVar7,bVar2 & bVar8);
}



// FUNCTION 1489a7046 FUN_1489a7046 body=714 status=ok
// SIG undefined FUN_1489a7046(void)

undefined8 FUN_1489a7046(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_4;
  local_40 = param_3;
  if (param_2 == (longlong *)0x0) {
    FUN_140056680(param_1,L"Actor is \'None\'.");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  uVar1 = FUN_1407ca880();
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
  if (plVar2 == (longlong *)0x0) {
LAB_1489a70bc:
    local_68 = (undefined2 *)param_2[3];
    FUN_1400021e4(&local_68,&local_58);
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140002266(param_1,L"%s does not implement the GbxTrick interface.",puVar6);
  }
  else {
    uVar1 = FUN_1407ca880();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar2 == plVar3 || plVar3 == (longlong *)0x0) goto LAB_1489a70bc;
    lVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,&local_40);
    if ((lVar4 == 0) && (lVar4 = FUN_140312a30(plVar3,&local_40), lVar4 == 0)) {
      FUN_1400021e4(&local_40,&local_58);
      puVar6 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar6 = local_58;
      }
      local_78 = (undefined2 *)param_2[3];
      FUN_1400021e4(&local_78,&local_68);
      puVar8 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar8 = local_68;
      }
      pwVar5 = L"%s does not have a skeletal mesh named \'%s\'.";
LAB_1489a724d:
      FUN_140002266(param_1,pwVar5,puVar8,puVar6);
    }
    else {
      if (*(longlong *)(lVar4 + 0xae8) == 0) {
        FUN_1400021e4(&local_40,&local_58);
        puVar6 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar6 = local_58;
        }
        local_78 = (undefined2 *)param_2[3];
        FUN_1400021e4(&local_78,&local_68);
        puVar8 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar8 = local_68;
        }
        pwVar5 = L"%s\'s mesh \'%s\' does not have an anim instance.";
        goto LAB_1489a724d;
      }
      lVar4 = FUN_141222460(*(longlong *)(lVar4 + 0xae8),&local_48);
      if (lVar4 != 0) {
        FUN_144750a86(lVar4,param_1,0,0);
        goto LAB_1489a7135;
      }
      FUN_1400021e4(&local_48,&local_58);
      puVar6 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar6 = local_58;
      }
      FUN_1400021e4(&local_40,&local_68);
      puVar8 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar8 = local_68;
      }
      local_38 = param_2[3];
      FUN_1400021e4(&local_38,&local_78);
      puVar7 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar7 = local_78;
      }
      local_88 = puVar6;
      FUN_140002266(param_1,L"%s\'s mesh \'%s\' is not playing anything on slot \'%s\'.",puVar7,
                    puVar8);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1489a7135:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a7312 FUN_1489a7312 body=193 status=ok
// SIG undefined FUN_1489a7312(void)

void FUN_1489a7312(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb8cda8 == '\0') {
    FUN_14882259c(&DAT_14cb8cd90);
  }
  FUN_144aa2048(&DAT_14cb8cdb0,&local_30);
  if ((longlong)(int)local_28 != 0) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + local_28;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < local_28) {
      FUN_1446f84a2(param_1,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 8 + *param_1),local_30,(longlong)(int)local_28 << 3);
    local_28 = 0;
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a73d4 FUN_1489a73d4 body=193 status=ok
// SIG undefined FUN_1489a73d4(void)

void FUN_1489a73d4(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb8cd38 == '\0') {
    FUN_14882259c(&DAT_14cb8cd20);
  }
  FUN_144aa2048(&DAT_14cb8cd40,&local_30);
  if ((longlong)(int)local_28 != 0) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + local_28;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < local_28) {
      FUN_1446f84a2(param_1,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 8 + *param_1),local_30,(longlong)(int)local_28 << 3);
    local_28 = 0;
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a74a2 FUN_1489a74a2 body=182 status=ok
// SIG undefined FUN_1489a74a2(void)

undefined8 FUN_1489a74a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    lVar1 = FUN_144a7954a(param_1);
    if (lVar1 == 0) {
      if (*(longlong *)(param_2 + 8) == 0) {
        FUN_1404dcd0c(param_1 + 0x1288,param_2);
      }
    }
    else {
      plVar2 = (longlong *)FUN_144a7954a(param_1);
      lVar3 = (**(code **)(*plVar2 + 0x3f8))(plVar2);
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        lVar1 = FUN_1404dcd0c(param_1 + 0x1288,param_2);
      }
      if ((((lVar3 != 0) && (lVar1 != 0)) && ((*(uint *)(lVar3 + 8) & 0x40000000) == 0)) &&
         ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
        uVar4 = FUN_1487d5c94(lVar3,*(undefined8 *)(lVar1 + 0x40));
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1489a7558 FUN_1489a7558 body=223 status=ok
// SIG undefined FUN_1489a7558(void)

void FUN_1489a7558(longlong param_1,longlong *param_2,longlong *param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_1403dcede(param_2);
  if ((longlong)(int)param_2[1] != 0) {
    plVar4 = (longlong *)(*param_2 + 4);
    lVar3 = 0;
    do {
      if (*plVar4 == *param_3) {
        lVar3 = *param_2 - lVar3;
        if (lVar3 == 0) {
          return;
        }
        lVar3 = lVar3 + 0x10;
        lVar1 = FUN_143e50c2a(param_1,param_3,lVar3,*(undefined1 *)((longlong)plVar4 + 0xdd));
        if (((lVar1 == 0) ||
            ((lVar2 = *(longlong *)((longlong)plVar4 + 0x14), lVar2 == 0 &&
             (lVar2 = FUN_1404dcd0c(lVar1 + 0x1288,lVar3), lVar2 == 0)))) &&
           (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x68))
                              (*(longlong **)(param_1 + 0x98),plVar4,lVar3), lVar2 == 0)) {
          return;
        }
        fVar5 = (float)FUN_1405b046e(lVar2);
        *(float *)(param_1 + 0x118) = fVar5 / param_4;
        return;
      }
      plVar4 = plVar4 + 0x1e;
      lVar3 = lVar3 + -0xf0;
    } while ((longlong)(int)param_2[1] * -0xf0 - lVar3 != 0);
  }
  return;
}



// FUNCTION 1489a7638 FUN_1489a7638 body=65 status=ok
// SIG undefined FUN_1489a7638(void)

void FUN_1489a7638(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = 0xd8;
  do {
    FUN_1489a50d2(param_1 + lVar1,param_2,param_3);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x618);
  return;
}



// FUNCTION 1489a767a FUN_1489a767a body=75 status=ok
// SIG undefined FUN_1489a767a(void)

void FUN_1489a767a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0xe8) * 400;
    lVar2 = *(longlong *)(param_1 + 0xe0) + 0x38;
    do {
      FUN_140d077bc(lVar2,param_2);
      lVar2 = lVar2 + 400;
      lVar1 = lVar1 + -400;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1489a76c6 FUN_1489a76c6 body=85 status=ok
// SIG undefined FUN_1489a76c6(void)

void FUN_1489a76c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xe8) * 400;
    lVar1 = *(longlong *)(param_1 + 0xe0) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1489a771c FUN_1489a771c body=129 status=ok
// SIG undefined FUN_1489a771c(void)

ulonglong FUN_1489a771c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != param_1) {
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,param_2);
      if (cVar4 != '\0') goto LAB_1489a778f;
    }
    iVar1 = *(int *)(param_1 + 0xa0);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x98);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,param_2);
          if (cVar4 != '\0') goto LAB_1489a778f;
        }
        lVar6 = lVar6 + 0x40;
      } while ((longlong)iVar1 * 0x40 != lVar6);
    }
    uVar5 = 0;
  }
LAB_1489a778f:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1489a779e FUN_1489a779e body=54 status=ok
// SIG undefined FUN_1489a779e(void)

void FUN_1489a779e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 0xd8;
  do {
    FUN_140d077bc(param_1 + lVar1,param_2);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x618);
  return;
}



// FUNCTION 1489a77d4 FUN_1489a77d4 body=65 status=ok
// SIG undefined FUN_1489a77d4(void)

void FUN_1489a77d4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = 0xd8;
  do {
    FUN_1489a50d2(param_1 + lVar1,param_2,param_3);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x618);
  return;
}



// FUNCTION 1489a7816 FUN_1489a7816 body=220 status=ok
// SIG undefined FUN_1489a7816(void)

longlong * FUN_1489a7816(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b432cd0;
  plVar1 = plVar4 + 2;
  FUN_1459abfd8(plVar1,param_1,param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_1489aca5c(&local_40,plVar1);
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



// FUNCTION 1489a78f6 FUN_1489a78f6 body=63 status=ok
// SIG undefined FUN_1489a78f6(void)

void FUN_1489a78f6(longlong param_1,undefined8 param_2)

{
  FUN_140d077bc(param_1 + 0xd8);
  FUN_140d077bc(param_1 + 0x228,param_2);
  FUN_140d077bc(param_1 + 0x378,param_2);
  return;
}



// FUNCTION 1489a7936 FUN_1489a7936 body=74 status=ok
// SIG undefined FUN_1489a7936(void)

void FUN_1489a7936(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1489a50d2(param_1 + 0xd8);
  FUN_1489a50d2(param_1 + 0x228,param_2,param_3);
  FUN_1489a50d2(param_1 + 0x378,param_2,param_3);
  return;
}



// FUNCTION 1489a7980 FUN_1489a7980 body=184 status=ok
// SIG undefined FUN_1489a7980(void)

void FUN_1489a7980(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  char cVar7;
  double *pdVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_158 [32];
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double dStack_108;
  undefined1 auStack_f8 [8];
  undefined8 ******ppppppuStack_f0;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined4 uStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double dStack_88;
  ushort uStack_80;
  byte bStack_78;
  ulonglong uStack_70;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x160) + 0x4cc) == '\x01') &&
     (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c))) {
    uVar6 = (uint)((ulonglong)DAT_14cb8ced0 >> 0x10);
    uVar12 = (uint)DAT_14cb8ced0 & 0xffff;
    lVar9 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x88);
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 0x90) - 1U &
                              (int)((ulonglong)DAT_14cb8ced0 >> 0x20) +
                              ((uint)DAT_14cb8ced0 << 0x10 | uVar12) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 0x38) == DAT_14cb8ced0)
        {
          if (lVar9 + 8 == 0 || lVar9 == 0) {
            return;
          }
          uStack_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
          if ((*(char *)(*(longlong *)(param_1 + 0x160) + 0x4cc) != '\x01') ||
             (((*(char *)(*(longlong *)(param_1 + 0x160) + 0xd0) == '\0' &&
               (*(char *)(param_1 + 0x110) != '\0')) || (*(char *)(lVar9 + 0x28) == '\0'))))
          goto LAB_145af8d97;
          dStack_108 = DAT_14c8464f0;
          uStack_118 = (undefined4)DAT_14c8464e0;
          uStack_114 = DAT_14c8464e0._4_4_;
          uStack_110 = (undefined4)DAT_14c8464e8;
          uStack_10c = DAT_14c8464e8._4_4_;
          cVar7 = FUN_1418115bc(lVar9 + 8,&uStack_118);
          if (cVar7 == '\0') goto LAB_145af8d97;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
          pdVar8 = (double *)&DAT_14c846480;
          if (lVar9 != 0) {
            pdVar8 = (double *)(lVar9 + 0x240);
          }
          dVar16 = (double)CONCAT44(uStack_114,uStack_118) - pdVar8[4];
          dVar17 = (double)CONCAT44(uStack_10c,uStack_110) - pdVar8[5];
          dVar2 = dStack_108 - pdVar8[6];
          dVar3 = -*pdVar8;
          dVar4 = -pdVar8[1];
          dVar13 = pdVar8[2] * -1.0;
          dVar14 = pdVar8[3] * 1.0;
          dVar18 = dVar16 * dVar13 - dVar3 * dVar2;
          dVar15 = dVar17 * dVar3 - dVar16 * dVar4;
          dVar5 = dVar2 * dVar4 - dVar17 * dVar13;
          dVar5 = dVar5 + dVar5;
          dVar18 = dVar18 + dVar18;
          dVar15 = dVar15 + dVar15;
          uStack_138 = (undefined8 *******)
                       ((dVar15 * dVar4 - dVar18 * dVar13) + dVar14 * dVar5 + dVar16);
          uStack_130 = *pdVar8 * dVar15 + dVar13 * dVar5 + dVar14 * dVar18 + dVar17;
          dVar13 = (double)uStack_138 * (double)uStack_138 + uStack_130 * uStack_130;
          if ((dVar13 != 1.0) || (NAN(dVar13))) {
            if (9.99999993922529e-09 <= dVar13) {
              uStack_130 = uStack_130 * (1.0 / SQRT(dVar13));
              uStack_138 = (undefined8 *******)((1.0 / SQRT(dVar13)) * (double)uStack_138);
              goto LAB_145af8f9f;
            }
            dStack_128 = DAT_14c8464f0;
            uStack_138 = (undefined8 *******)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
            ;
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            dStack_128 = dVar2 + dVar14 * dVar15 + (dVar18 * dVar3 - dVar5 * dVar4);
            if ((dStack_128 != 0.0) || (NAN(dStack_128))) {
LAB_145af8f9f:
              dStack_128 = 0.0;
            }
          }
          uStack_80 = 0;
          bStack_78 = 0;
          if (*(int *)(*(longlong *)(param_1 + 0x160) + 0xcc) == 0) {
            FUN_144a79a9c(&uStack_138,auStack_f8);
            pppppppuVar10 = (undefined8 *******)ppppppuStack_f0;
            if (bStack_78 != 0x15) {
              pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_78 * 0x120));
              if (pcVar1 != (code *)0x0) {
                pppppppuVar10 = (undefined8 *******)ppppppuStack_98;
                if (uStack_80 < 0x19) {
                  pppppppuVar10 = &ppppppuStack_98;
                }
                (*pcVar1)(pppppppuVar10);
              }
              if (0x18 < uStack_80) {
                FUN_1400020a8(ppppppuStack_98);
              }
              uStack_80 = 8;
              ppppppuStack_98 = ppppppuStack_f0;
              bStack_78 = 0x15;
              pppppppuVar10 = (undefined8 *******)ppppppuStack_98;
            }
          }
          else {
            if ((DAT_14c9a85d0 != (code *)0x0) &&
               ((*DAT_14c9a85d0)(&ppppppuStack_98), 0x18 < uStack_80)) {
              FUN_1400020a8(ppppppuStack_98);
            }
            dStack_88 = dStack_128;
            uStack_90 = (undefined4)uStack_130;
            uStack_8c = uStack_130._4_4_;
            uStack_80 = 0x18;
            bStack_78 = 4;
            pppppppuVar10 = uStack_138;
          }
          ppppppuStack_98 = pppppppuVar10;
          lVar9 = *(longlong *)(param_1 + 0x160);
          iVar11 = *(int *)(lVar9 + 0x9c);
          if (iVar11 == 3) {
            lVar9 = FUN_140502f56(*(undefined8 *)(param_1 + 0x38));
            if (lVar9 != 0) {
              FUN_140af060e(lVar9,*(longlong *)(param_1 + 0x160) + 0xc0,&ppppppuStack_98);
            }
          }
          else if (iVar11 == 2) {
            if (*(longlong *)(lVar9 + 0xa0) != 0) {
              FUN_1408834b4(param_1,lVar9 + 0xa0,&ppppppuStack_98);
            }
          }
          else if (((iVar11 == 1) && (lVar9 = FUN_144873cc0(lVar9 + 0xa8), lVar9 != 0)) &&
                  (cVar7 = FUN_1470dbef6(lVar9), cVar7 != '\0')) {
            auStack_f8[0] = 0;
            uStack_d0 = 0;
            FUN_1456bb102(auStack_f8,*(undefined8 *)(param_1 + 0x38));
            auStack_c8[0] = 0;
            uStack_a0 = 0;
            FUN_140e4698e(lVar9,auStack_f8,&ppppppuStack_98);
            FUN_144a5ac3a(auStack_c8);
            FUN_144a5ac3a(auStack_f8);
          }
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_78 * 0x120));
          if (pcVar1 != (code *)0x0) {
            pppppppuVar10 = (undefined8 *******)ppppppuStack_98;
            if (uStack_80 < 0x19) {
              pppppppuVar10 = &ppppppuStack_98;
            }
            (*pcVar1)(pppppppuVar10);
          }
          if (0x18 < uStack_80) {
            FUN_1400020a8(ppppppuStack_98);
          }
LAB_145af8d97:
          if ((uStack_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        iVar11 = *(int *)(lVar9 + 0x30);
      } while (iVar11 != -1);
    }
  }
  return;
}



// FUNCTION 1489a7a38 FUN_1489a7a38 body=105 status=ok
// SIG undefined FUN_1489a7a38(void)

void FUN_1489a7a38(longlong param_1,undefined8 param_2)

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



// FUNCTION 1489a7aa2 FUN_1489a7aa2 body=118 status=ok
// SIG undefined FUN_1489a7aa2(void)

void FUN_1489a7aa2(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1489a7b18 FUN_1489a7b18 body=356 status=ok
// SIG undefined FUN_1489a7b18(void)

void FUN_1489a7b18(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_b8 [44];
  float local_8c;
  longlong local_88;
  longlong local_80 [3];
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_b8;
  lVar3 = 0;
  local_80[2] = 0;
  local_80[0] = DAT_14cb8d440;
  local_68 = &DAT_200000002;
  local_80[1] = DAT_14cb8d438;
  *(undefined8 *)(param_1 + 0x150) = 0;
  local_88 = param_1;
  while( true ) {
    lVar2 = (longlong)local_80 + lVar3;
    local_8c = 0.0;
    FUN_143e51c52(&local_88,*(longlong *)(param_1 + 0x160) + 0xd8,lVar2,&local_8c);
    lVar1 = *(longlong *)(param_1 + 0x160);
    if ((*(char *)(lVar1 + 0x439) == '\x01') && (0 < *(int *)(lVar1 + 0x230))) {
      FUN_143e51c52(&local_88,*(longlong *)(lVar1 + 0x228) + 0x38,lVar2,&local_8c);
      lVar1 = *(longlong *)(param_1 + 0x160);
    }
    FUN_143e51c52(&local_88,lVar1 + 0x238,lVar2,&local_8c);
    if (0.0 < local_8c) break;
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x10) {
LAB_1489a7c3c:
      if (local_80[2] != 0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)local_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)((longlong)local_80 + lVar3);
  *(float *)(param_1 + 0x14c) = local_8c / param_2;
  goto LAB_1489a7c3c;
}



// FUNCTION 1489a7c7e FUN_1489a7c7e body=98 status=ok
// SIG undefined FUN_1489a7c7e(void)

ulonglong FUN_1489a7c7e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x98);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if (plVar3 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
          if (cVar4 != '\0') goto LAB_1489a7cd2;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
    uVar5 = 0;
  }
LAB_1489a7cd2:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1489a7ce0 FUN_1489a7ce0 body=754 status=ok
// SIG undefined FUN_1489a7ce0(void)

void FUN_1489a7ce0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x98) != 0) &&
     (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x70), lVar12 != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)*(int *)(lVar12 + 0x88) != 0) {
      lVar9 = *(longlong *)(lVar12 + 0x80);
      local_70 = (longlong)*(int *)(lVar12 + 0x88) * 0x30 + lVar9;
      do {
        local_78 = lVar9;
        if ((longlong)*(int *)(lVar9 + 0x28) != 0) {
          puVar11 = *(undefined8 **)(lVar9 + 0x20);
          local_68 = puVar11 + *(int *)(lVar9 + 0x28);
          do {
            local_60 = puVar11;
            plVar8 = (longlong *)(**(code **)(*(longlong *)*puVar11 + 0x328))();
            if ((longlong)(int)plVar8[1] != 0) {
              plVar13 = (longlong *)*plVar8;
              plVar8 = plVar13 + (int)plVar8[1];
              do {
                lVar12 = *plVar13;
                if (lVar12 != 0) {
                  lVar9 = FUN_145b7d08e();
                  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
                    lVar9 = FUN_145b7d178();
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
                      lVar9 = FUN_140f157e0();
                      uVar6 = uStack_50;
                      if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38))
                          && (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                         (*(char *)(lVar12 + 0x248) == '\0')) {
                        uVar5 = *(undefined8 *)(lVar12 + 0x100);
                        lVar12 = (longlong)(int)uStack_50;
                        uVar7 = (int)uStack_50 + 1;
                        uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
                        if (uStack_50._4_4_ < uVar7) {
                          FUN_141022c24(&local_58,uVar6 & 0xffffffff);
                        }
                        *(undefined8 *)(local_58 + lVar12 * 8) = uVar5;
                      }
                    }
                    else if (*(longlong *)(lVar12 + 0x110) != 0) {
                      lVar9 = FUN_1414cc764();
                      lVar12 = *(longlong *)(lVar12 + 0x110);
                      if (((lVar12 != 0) && (lVar9 != 0)) &&
                         ((lVar4 = *(longlong *)(lVar12 + 0x10), lVar4 != 0 &&
                          ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                           (*(longlong *)
                             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                            lVar9 + 0x30)))))) {
                        iVar1 = (int)param_2[1];
                        *(uint *)(param_2 + 1) = iVar1 + 1U;
                        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                          FUN_1403de658(param_2,iVar1);
                        }
                        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
                             *(undefined8 *)(lVar12 + 0x38);
                      }
                    }
                  }
                  else {
                    iVar1 = *(int *)(lVar12 + 0x178);
                    if ((longlong)iVar1 != 0) {
                      lVar12 = *(longlong *)(lVar12 + 0x170);
                      lVar9 = 0;
                      do {
                        if (*(longlong *)(lVar12 + lVar9) != 0) {
                          lVar10 = FUN_1414cc67e();
                          lVar4 = *(longlong *)(lVar12 + lVar9);
                          if ((((lVar4 != 0) && (lVar10 != 0)) &&
                              (lVar3 = *(longlong *)(lVar4 + 0x10), lVar3 != 0)) &&
                             ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                              (*(longlong *)
                                (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
                                ) == lVar10 + 0x30)))) {
                            iVar2 = (int)param_2[1];
                            *(uint *)(param_2 + 1) = iVar2 + 1U;
                            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                              FUN_1403de658(param_2,iVar2);
                            }
                            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) =
                                 *(undefined8 *)(lVar4 + 0x40);
                          }
                        }
                        lVar9 = lVar9 + 0x10;
                      } while ((longlong)iVar1 * 0x10 != lVar9);
                    }
                  }
                }
                plVar13 = plVar13 + 1;
              } while (plVar13 != plVar8);
            }
            puVar11 = local_60 + 1;
          } while (puVar11 != local_68);
        }
        lVar9 = local_78 + 0x30;
      } while (lVar9 != local_70);
    }
    FUN_1489a4e36(&local_58,param_2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a7fd4 FUN_1489a7fd4 body=161 status=ok
// SIG undefined FUN_1489a7fd4(void)

longlong * FUN_1489a7fd4(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)FUN_1489acb03(param_1,param_3);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489acbe8(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a8078 FUN_1489a8078 body=176 status=ok
// SIG undefined FUN_1489a8078(void)

void FUN_1489a8078(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(undefined8 *)(param_2 + 4);
  local_18 = 4;
  local_50 = &DAT_14cb8d420;
  local_48 = puVar2;
  FUN_140881f5a(local_38,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a812a FUN_1489a812a body=256 status=ok
// SIG undefined FUN_1489a812a(void)

undefined4 * FUN_1489a812a(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8d420 >> 0x10);
    uVar6 = (uint)DAT_14cb8d420 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8d420 >> 0x20) + ((uint)DAT_14cb8d420 << 0x10 | uVar6)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x38) == DAT_14cb8d420) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            FUN_1405b801a(lVar1 + 8,&local_30,&DAT_14c8464e0);
            *(undefined8 *)(param_1 + 4) = local_20;
            *param_1 = local_30;
            param_1[1] = uStack_2c;
            param_1[2] = uStack_28;
            param_1[3] = uStack_24;
            uVar3 = 1;
            goto LAB_1489a814c;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_1489a814c:
  *(undefined1 *)(param_1 + 6) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489a822c FUN_1489a822c body=166 status=ok
// SIG undefined FUN_1489a822c(void)

void FUN_1489a822c(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_50 = &DAT_14cb8cf48;
  local_48 = puVar2;
  local_38 = param_2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a82d4 FUN_1489a82d4 body=191 status=ok
// SIG undefined FUN_1489a82d4(void)

undefined4 * FUN_1489a82d4(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8cf48 >> 0x10);
    uVar6 = (uint)DAT_14cb8cf48 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8cf48 >> 0x20) + ((uint)DAT_14cb8cf48 << 0x10 | uVar6)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x38) == DAT_14cb8cf48) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar7 = FUN_144a7b41a(lVar1 + 8,0);
            *param_1 = uVar7;
            uVar3 = 1;
            goto LAB_1489a82e6;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_1489a82e6:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 1489a8394 FUN_1489a8394 body=167 status=ok
// SIG undefined FUN_1489a8394(void)

void FUN_1489a8394(undefined8 param_1,byte param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  uint *local_48;
  undefined1 local_3c [4];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_38 = (uint)param_2;
  local_18 = 1;
  local_50 = &DAT_14cb8cf50;
  local_48 = puVar2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a843c FUN_1489a843c body=192 status=ok
// SIG undefined FUN_1489a843c(void)

undefined1 * FUN_1489a843c(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar3 = (uint)((ulonglong)DAT_14cb8cf50 >> 0x10);
    uVar8 = (uint)DAT_14cb8cf50 & 0xffff;
    plVar6 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8cf50 >> 0x20) + ((uint)DAT_14cb8cf50 << 0x10 | uVar8)
                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_2;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x38;
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x38) == DAT_14cb8cf50) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar7 = 1;
            uVar4 = FUN_140168b7a(lVar1 + 8,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
            *param_1 = uVar4;
            goto LAB_1489a844f;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x30);
      } while (iVar5 != -1);
    }
  }
  uVar7 = 0;
LAB_1489a844f:
  param_1[1] = uVar7;
  return param_1;
}



// FUNCTION 1489a84fc FUN_1489a84fc body=166 status=ok
// SIG undefined FUN_1489a84fc(void)

void FUN_1489a84fc(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_50 = &DAT_14cb8d428;
  local_48 = puVar2;
  local_38 = param_2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a85a4 FUN_1489a85a4 body=191 status=ok
// SIG undefined FUN_1489a85a4(void)

undefined4 * FUN_1489a85a4(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8d428 >> 0x10);
    uVar6 = (uint)DAT_14cb8d428 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8d428 >> 0x20) + ((uint)DAT_14cb8d428 << 0x10 | uVar6)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x38) == DAT_14cb8d428) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar7 = FUN_144a7b41a(lVar1 + 8,0);
            *param_1 = uVar7;
            uVar3 = 1;
            goto LAB_1489a85b6;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_1489a85b6:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 1489a8664 FUN_1489a8664 body=341 status=ok
// SIG undefined FUN_1489a8664(void)

undefined8 *
FUN_1489a8664(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 *param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = FUN_1407ca824(param_3);
  if ((lVar1 == 0) || (param_2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_1489a8078(&local_a8,param_4);
    FUN_1489a84fc(&local_a8,param_5);
    if (*(char *)(param_6 + 1) == '\x01') {
      FUN_1489a822c(&local_a8,*param_6);
    }
    FUN_1489a8394(&local_a8,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff);
    local_b0 = 1;
    local_b8 = &local_a8;
    FUN_14096dfee(lVar1,param_1,param_2,0);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_a8);
  }
  if (*(char *)(param_6 + 1) == '\x01') {
    *(undefined1 *)(param_6 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a87c8 FUN_1489a87c8 body=431 status=ok
// SIG undefined FUN_1489a87c8(void)

void FUN_1489a87c8(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1413f13ee();
  dVar9 = (double)FUN_1489a8978(param_1,0);
  if ((param_2 == '\0') && (*(char *)(param_1 + 0x120) == '\x02')) {
    plVar12 = *(longlong **)(param_1 + 0x38);
    lVar1 = plVar12[0x39];
    if (lVar1 == 0) {
      local_48 = DAT_14c846508;
      local_58 = DAT_14c8464f8;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      local_78 = dVar4;
      uStack_70 = dVar5;
      local_68 = dVar6;
      uStack_60 = dVar7;
      if (pdVar10 == (double *)0x0) {
        plVar12 = (longlong *)&DAT_00000040;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar10[4] = DAT_14c8464f8;
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar10[6] = local_48;
        pdVar10[4] = local_58;
        pdVar10[5] = dStack_50;
      }
      local_48 = pdVar10[6];
      local_58 = pdVar10[4];
      plVar12 = *(longlong **)(param_1 + 0x38);
    }
    dStack_50 = (double)*(float *)(param_1 + 0x1b8);
    local_88 = 0;
    (**(code **)(*plVar12 + 0x4d0))(SUB84(dStack_50,0),param_1 + 0x198,&local_58,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a8978 FUN_1489a8978 body=152 status=ok
// SIG undefined FUN_1489a8978(void)

void FUN_1489a8978(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_140e7a652();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1409e8532(lVar1,&DAT_14cb8cf40,param_2);
      lVar2 = *(longlong *)(lVar1 + 0x758);
      if (lVar2 != 0) {
        if ((char)param_2 == '\0') {
          FUN_1409df526(lVar2,&DAT_14cb8cf40);
        }
        else {
          FUN_140257a06(lVar2,&DAT_14cb8cf40,0);
        }
      }
    }
  }
  FUN_1407ca566(lVar1,DAT_14cb8cf40,param_2,0);
  FUN_1407ca500(lVar1,DAT_14cb8cf40,param_2);
  return;
}



// FUNCTION 1489a8a10 FUN_1489a8a10 body=126 status=ok
// SIG undefined FUN_1489a8a10(void)

void FUN_1489a8a10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03') {
    FUN_140881414(param_1);
  }
  if (*param_2 == DAT_14cb8cf48) {
    uVar1 = FUN_144a7b41a(param_3,*(undefined4 *)(param_1 + 0x1b8));
    *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  }
  if ((*(char *)(param_1 + 0x120) == '\x02') &&
     ((*param_2 == DAT_14cb8d428 || (*param_2 == DAT_14cb8d420)))) {
    FUN_143e52176(param_1);
    return;
  }
  return;
}



// FUNCTION 1489a8ab0 FUN_1489a8ab0 body=220 status=ok
// SIG undefined FUN_1489a8ab0(void)

longlong * FUN_1489a8ab0(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)FUN_14001cc68(0xf8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b432da0;
  plVar1 = plVar4 + 2;
  FUN_143e5249c(plVar1,param_1,param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_1489accb8(&local_40,plVar1);
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



// FUNCTION 1489a8b96 FUN_1489a8b96 body=73 status=ok
// SIG undefined FUN_1489a8b96(void)

void FUN_1489a8b96(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1 + 0x1c8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a8bec FUN_1489a8bec body=430 status=ok
// SIG undefined FUN_1489a8bec(void)

void FUN_1489a8bec(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)*param_2;
  local_50 = param_2[1];
  FUN_1403350f6(param_1 + 0x590);
  FUN_144a7b126(param_1 + 0x590,&local_41,1);
  lVar4 = FUN_1447210f0(param_1);
  if (lVar4 != 0) {
    FUN_144a7d35a(lVar4,&local_58);
    if (-1 < (int)(uint)local_50) {
      uVar3 = (uint)local_50;
      do {
        if ((int)local_58[1] <= (int)uVar3) break;
        lVar4 = FUN_14479d2ce((ulonglong)uVar3 * 8 + *local_58);
        if (lVar4 != 0) {
          lVar5 = FUN_1449f3324();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             (lVar4 = *(longlong *)(lVar4 + 0x3d0), lVar4 != 0)) {
            lVar5 = *(longlong *)(lVar4 + 0x1c8);
            puVar6 = &DAT_14c8464e0;
            local_68 = DAT_14c8464f0;
            if (lVar5 != 0) {
              puVar6 = (undefined8 *)(lVar5 + 0x260);
              local_68 = *(undefined8 *)(lVar5 + 0x270);
            }
            local_78 = *(undefined4 *)puVar6;
            uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_70 = *(undefined4 *)(puVar6 + 1);
            uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
            cVar2 = FUN_140056702(param_1,&local_78,0,0);
            if (cVar2 != '\0') {
              if (param_3 == '\0') {
                (**(code **)(*(longlong *)(param_1 + 0x3d8) + 0x20))(param_1 + 0x3d8,lVar4,1);
              }
              else {
                cVar2 = FUN_14113f0c0(param_2);
                if (cVar2 != '\0') {
                  FUN_148744b3d(param_2,lVar4,1);
                }
              }
            }
          }
        }
        iVar1 = (uint)local_50;
        uVar3 = (uint)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar3);
      } while (-2 < iVar1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489a8dd4 FUN_1489a8dd4 body=222 status=ok
// SIG undefined FUN_1489a8dd4(void)

void FUN_1489a8dd4(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong *)param_2[1] != (longlong *)0x0 && *param_2 != 0) {
    lVar2 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
    if (lVar2 != 0) {
      lVar3 = FUN_144a6c4d8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_1489a8e29;
    }
  }
  lVar2 = 0;
LAB_1489a8e29:
  bVar1 = *(byte *)(param_2 + 2);
  if ((bVar1 & 0xfd) == 0) {
    if (*(char *)((longlong)param_2 + 0x11) == '\x01') {
      FUN_14874774e(param_1,lVar2);
      lVar3 = 0x4d0;
    }
    else {
      FUN_148747868(param_1,lVar2);
      lVar3 = 0x4c0;
    }
    FUN_14874770f(lVar3 + param_1,lVar2);
    bVar1 = *(byte *)(param_2 + 2);
  }
  if ((byte)(bVar1 - 1) < 2) {
    if (*(char *)((longlong)param_2 + 0x11) == '\x01') {
      FUN_1487477ac(param_1,lVar2);
      lVar3 = 0x4f0;
    }
    else {
      FUN_14874780a(param_1,lVar2);
      lVar3 = 0x4e0;
    }
    FUN_14874770f(param_1 + lVar3,lVar2);
    return;
  }
  return;
}



// FUNCTION 1489a8eb2 FUN_1489a8eb2 body=134 status=ok
// SIG undefined FUN_1489a8eb2(void)

void FUN_1489a8eb2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + -0x398;
  local_28 = param_2;
  local_18 = param_3;
  if (*(char *)(param_1 + 0x111) == '\x01') {
    FUN_143e5278a(&local_28,param_1 + 0x114,0);
  }
  if (*(char *)(param_1 + 0x11c) == '\x01') {
    FUN_143e5278a(&local_28,param_1 + 0x120,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a8f3a FUN_1489a8f3a body=101 status=ok
// SIG undefined FUN_1489a8f3a(void)

void FUN_1489a8f3a(longlong param_1)

{
  int iVar1;
  
  FUN_1405f1eac();
  if (*(int *)(param_1 + 0x524) != 0) {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      *(undefined1 *)(param_1 + 0x4a8) = 0;
      FUN_1407c0b34(param_1 + 0x500,param_1 + 0x3d0,param_1);
    }
  }
  if (*(char *)(param_1 + 0x4a8) == '\x01') {
    FUN_1409b5cf2();
    return;
  }
  FUN_140b3b8ec(param_1 + 0x398);
  return;
}



// FUNCTION 1489a8fa0 FUN_1489a8fa0 body=125 status=ok
// SIG undefined FUN_1489a8fa0(void)

void FUN_1489a8fa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1401b2056();
  lVar2 = param_1;
  if (*(char *)(param_1 + 0x5d8) == '\x01') {
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
      if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
        return;
      }
    }
    plVar1 = (longlong *)FUN_14050fd64();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = FUN_145a63904();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001489a901a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x588))(plVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489a902a FUN_1489a902a body=140 status=ok
// SIG undefined FUN_1489a902a(void)

void FUN_1489a902a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"UsableActorState",1);
  uVar1 = FUN_145a840bc();
  FUN_145a840bc();
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



// FUNCTION 1489a90b8 FUN_1489a90b8 body=72 status=ok
// SIG undefined FUN_1489a90b8(void)

void FUN_1489a90b8(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143d277da(param_1 + 0x130);
  if (*(char *)(param_1 + 0xd8) == cVar1) {
    return;
  }
  *(char *)(param_1 + 0xd8) = cVar1;
  if (cVar1 != '\0') {
    FUN_1409b5cf2();
    return;
  }
  FUN_140b3b8ec(param_1 + -0x38);
  return;
}



// FUNCTION 1489a9100 FUN_1489a9100 body=39 status=ok
// SIG undefined FUN_1489a9100(void)

void FUN_1489a9100(longlong param_1,undefined4 param_2)

{
  FUN_140b3b8ec(param_1 + 0x398);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 1489a9150 FUN_1489a9150 body=69 status=ok
// SIG undefined FUN_1489a9150(void)

void FUN_1489a9150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1458ee270(&DAT_14cb8cff0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b1a5550;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0x3ba9bcfd3a6e8d11;
  puVar1[0xe] = 0x3f8000003c1f40a3;
  return;
}



// FUNCTION 1489a9196 FUN_1489a9196 body=44 status=ok
// SIG undefined FUN_1489a9196(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489a9196(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8cffc = _DAT_14cb8cffc + -1;
  *param_1 = DAT_14cb8cff0;
  DAT_14cb8cff0 = param_1;
  return;
}



// FUNCTION 1489a91c2 FUN_1489a91c2 body=69 status=ok
// SIG undefined FUN_1489a91c2(void)

void FUN_1489a91c2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b1a5550;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ba9bcfd3a6e8d11;
  param_1[0xe] = 0x3f8000003c1f40a3;
  return;
}



// FUNCTION 1489a9230 FUN_1489a9230 body=85 status=ok
// SIG undefined FUN_1489a9230(void)

void FUN_1489a9230(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1410b0e00();
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b206ef0;
  puVar1[3] = 0x40000000400;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 10;
  puVar1[9] = 0x3ba9cdc43a6ed02d;
  puVar1[10] = 0x3f8000003c1f44d4;
  return;
}



// FUNCTION 1489a9286 FUN_1489a9286 body=44 status=ok
// SIG undefined FUN_1489a9286(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489a9286(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8d11c = _DAT_14cb8d11c + -1;
  *param_1 = DAT_14cb8d110;
  DAT_14cb8d110 = param_1;
  return;
}



// FUNCTION 1489a92b2 FUN_1489a92b2 body=87 status=ok
// SIG undefined FUN_1489a92b2(void)

void FUN_1489a92b2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b206ef0;
  param_1[3] = 0x40000000400;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 10;
  param_1[9] = 0x3ba9cdc43a6ed02d;
  param_1[10] = 0x3f8000003c1f44d4;
  return;
}



// FUNCTION 1489a930a FUN_1489a930a body=41 status=ok
// SIG undefined FUN_1489a930a(void)

void FUN_1489a930a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1489a9334 FUN_1489a9334 body=1346 status=ok
// SIG undefined FUN_1489a9334(void)

undefined4 * FUN_1489a9334(longlong *param_1,undefined4 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_f08 [32];
  undefined8 *local_ee8;
  double *local_ee0;
  double local_ed8;
  double local_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  double local_eb8;
  double local_eb0;
  double local_ea8;
  undefined8 local_ea0;
  double local_e98;
  double local_e90;
  double local_e88;
  undefined8 local_e80;
  double local_e78;
  double local_e70;
  double local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined4 local_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined1 local_db8 [128];
  longlong local_d38 [16];
  undefined1 local_cb8;
  undefined1 local_ca8 [128];
  undefined1 local_c28 [128];
  undefined1 local_ba8 [128];
  undefined8 local_b28;
  undefined4 local_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  double local_b10;
  double dStack_b08;
  double local_b00;
  longlong local_250;
  longlong local_1c8;
  char local_138;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_f08;
  if (param_1[0x75] == 0) {
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  else {
    dVar1 = (param_3[1] + 1.0) * 0.5;
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    dVar6 = (*param_3 + 1.0) * 0.5;
    if (1.0 <= dVar6) {
      dVar6 = 1.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    FUN_1400e6e60(&local_b28);
    (**(code **)(*param_1 + 0x5f8))(param_1,0,&local_b28);
    if (*(char *)((longlong)param_1 + 0xc8c) == '\x01') {
      plVar8 = param_1 + 0x192;
      plVar9 = local_d38;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *plVar9 = *plVar8;
        plVar8 = plVar8 + 1;
        plVar9 = plVar9 + 1;
      }
      local_cb8 = 1;
    }
    else {
      local_cb8 = 0;
    }
    local_ee8 = (undefined8 *)local_ca8;
    FUN_145aab3bc(&local_b28,local_d38,local_ba8,local_c28);
    FUN_14494412e(local_c28,local_d38);
    local_e38 = 0;
    uStack_e30 = 0x3ff0000000000000;
    local_e28 = 0;
    uStack_e20 = 0;
    local_e18 = 0;
    uStack_e10 = 0;
    local_e08 = 0x3ff0000000000000;
    local_e00 = 0;
    local_df8 = 0x3ff0000000000000;
    local_df0 = 0;
    uStack_de8 = 0;
    local_de0 = 0;
    uStack_dd8 = 0;
    local_dd0 = 0;
    uStack_dc8 = 0;
    local_dc0 = 0x3ff0000000000000;
    dVar12 = sin(local_b10 * 0.01745329238474369);
    dVar13 = sin(dStack_b08 * 0.01745329238474369);
    dVar2 = sin(local_b00 * 0.01745329238474369);
    sin(0.0);
    dVar3 = cos(local_b10 * 0.01745329238474369);
    dVar4 = cos(dStack_b08 * 0.01745329238474369);
    dVar5 = cos(local_b00 * 0.01745329238474369);
    cos(0.0);
    local_eb8 = dVar3 * dVar4;
    local_eb0 = dVar13 * dVar3;
    local_ea0 = 0;
    local_e98 = dVar12 * dVar2 * dVar4 - dVar13 * dVar5;
    local_e90 = dVar12 * dVar2 * dVar13 + dVar4 * dVar5;
    local_e88 = -dVar2 * dVar3;
    local_e80 = 0;
    local_e78 = -(dVar12 * dVar5 * dVar4 + dVar13 * dVar2);
    local_e70 = dVar4 * dVar2 - dVar13 * dVar12 * dVar5;
    local_e68 = dVar3 * dVar5;
    local_e60 = 0;
    local_e58 = local_b28;
    local_e50 = local_b20;
    uStack_e4c = uStack_b1c;
    uStack_e48 = uStack_b18;
    uStack_e44 = uStack_b14;
    local_e40 = 0x3ff0000000000000;
    local_ea8 = dVar12;
    FUN_1447fea8d(local_db8,&local_e38,&local_eb8);
    fVar10 = (float)(**(code **)(*(longlong *)param_1[0x75] + 0x358))();
    fVar11 = (float)(**(code **)(*(longlong *)param_1[0x75] + 0x350))();
    local_ec0 = CONCAT44((int)fVar10,(int)fVar11);
    local_ec8 = 0;
    local_ed0 = (1.0 - dVar1) * (double)(int)fVar10;
    local_ed8 = dVar6 * (double)(int)fVar11;
    local_ee8 = &local_e38;
    local_ee0 = &local_eb8;
    FUN_147cf0946(&local_ed8,&local_ec8,local_db8,local_d38);
    dVar6 = local_ea8 * local_ea8 + local_eb8 * local_eb8 + local_eb0 * local_eb0;
    dVar12 = local_eb0;
    dVar13 = local_eb8;
    dVar1 = local_ea8;
    if (9.99999993922529e-09 < dVar6) {
      dVar1 = 1.0 / SQRT(dVar6);
      dVar13 = local_eb8 * dVar1;
      dVar12 = local_eb0 * dVar1;
      dVar1 = local_ea8 * dVar1;
    }
    *(undefined8 *)(param_2 + 4) = local_e28;
    *param_2 = (undefined4)local_e38;
    param_2[1] = local_e38._4_4_;
    param_2[2] = (undefined4)uStack_e30;
    param_2[3] = uStack_e30._4_4_;
    *(double *)(param_2 + 6) = dVar13;
    *(double *)(param_2 + 8) = dVar12;
    *(double *)(param_2 + 10) = dVar1;
    *(undefined1 *)(param_2 + 0xc) = 1;
    if (local_138 == '\x01') {
      local_138 = '\0';
    }
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
    if (local_250 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_f08) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a9878 FUN_1489a9878 body=42 status=ok
// SIG undefined FUN_1489a9878(void)

void FUN_1489a9878(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1489a98a2();
  memset(_Dst,0,0x140);
  FUN_148746010(_Dst);
  return;
}



// FUNCTION 1489a98a2 FUN_1489a98a2 body=110 status=ok
// SIG undefined FUN_1489a98a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489a98a2(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb8d288 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x500,0);
    plVar2 = plVar1 + 0x28;
    *plVar1 = (longlong)plVar2;
    plVar1[0x28] = (longlong)(plVar1 + 0x50);
    plVar1[0x50] = (longlong)(plVar1 + 0x78);
    plVar1[0x78] = (longlong)DAT_14cb8d288;
    _DAT_14cb8d290 = _DAT_14cb8d290 + 4;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb8d288;
  }
  DAT_14cb8d288 = plVar2;
  _DAT_14cb8d294 = _DAT_14cb8d294 + 1;
  return;
}



// FUNCTION 1489a9910 FUN_1489a9910 body=44 status=ok
// SIG undefined FUN_1489a9910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489a9910(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8d294 = _DAT_14cb8d294 + -1;
  *param_1 = DAT_14cb8d288;
  DAT_14cb8d288 = param_1;
  return;
}



// FUNCTION 1489a993c FUN_1489a993c body=44 status=ok
// SIG undefined FUN_1489a993c(void)

void FUN_1489a993c(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x140);
  FUN_148746010(param_1);
  return;
}



// FUNCTION 1489a9990 FUN_1489a9990 body=118 status=ok
// SIG undefined FUN_1489a9990(void)

undefined8 FUN_1489a9990(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cb8d358;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8d358 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a9a80 FUN_1489a9a80 body=266 status=ok
// SIG undefined FUN_1489a9a80(void)

undefined8 FUN_1489a9a80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_1406ef318();
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  FUN_14686b592(param_1 + 0x20,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1400021e4(param_1 + 0x20,&local_50);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  FUN_140002266(&local_60,L"(\"%s\",\"%s\")",puVar3,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Unlockable [%s]",puVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489a9b8c FUN_1489a9b8c body=266 status=ok
// SIG undefined FUN_1489a9b8c(void)

undefined8 FUN_1489a9b8c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_14573a762();
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  FUN_14686b592(param_1 + 0x20,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1400021e4(param_1 + 0x20,&local_50);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  FUN_140002266(&local_60,L"(\"%s\",\"%s\")",puVar3,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Unlockable Ledger [%s]",puVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489a9c98 FUN_1489a9c98 body=339 status=ok
// SIG undefined FUN_1489a9c98(void)

undefined8 FUN_1489a9c98(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (lVar5 == 0) {
      uVar4 = FUN_14573a762();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x28) = lVar5;
    }
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(param_1 + 0x20) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0'))
      {
        lVar7 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x20));
      }
      *(longlong *)(param_1 + 0x30) = lVar7;
    }
    FUN_145c4e23a(lVar7,&local_48);
    lVar5 = local_48;
    lVar7 = (longlong)(int)uStack_40;
    if (lVar7 == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      uVar4 = 0;
      do {
        lVar1 = *(longlong *)(lVar5 + lVar6);
        if ((lVar1 != 0) && (cVar3 = FUN_1409500c0(lVar1,*param_2), cVar3 == '\0')) {
          FUN_1410c689e(lVar1,*param_2);
          uVar4 = 1;
        }
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1489a9e14 FUN_1489a9e14 body=78 status=ok
// SIG undefined FUN_1489a9e14(void)

void FUN_1489a9e14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    local_10 = *(longlong *)(param_2 + 0x30);
    FUN_145747a3a(param_1,&local_10,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a9e64 FUN_1489a9e64 body=90 status=ok
// SIG undefined FUN_1489a9e64(void)

longlong FUN_1489a9e64(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    local_18 = *(longlong *)(param_2 + 0x30);
    lVar1 = local_18;
    if (local_18 == 0) {
      FUN_1407d8126(param_1,&local_18,param_2);
      lVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489a9ec0 FUN_1489a9ec0 body=38 status=ok
// SIG undefined FUN_1489a9ec0(void)

undefined8 FUN_1489a9ec0(undefined8 param_1,int param_2)

{
  FUN_1403ad826();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9eec FUN_1489a9eec body=38 status=ok
// SIG undefined FUN_1489a9eec(void)

undefined8 FUN_1489a9eec(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9f12 FUN_1489a9f12 body=38 status=ok
// SIG undefined FUN_1489a9f12(void)

undefined8 FUN_1489a9f12(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9f38 FUN_1489a9f38 body=38 status=ok
// SIG undefined FUN_1489a9f38(void)

undefined8 FUN_1489a9f38(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9f5e FUN_1489a9f5e body=63 status=ok
// SIG undefined FUN_1489a9f5e(void)

undefined8 * FUN_1489a9f5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4312c0;
  FUN_14079c464(param_1 + 0x26);
  FUN_140333dee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9f9e FUN_1489a9f9e body=38 status=ok
// SIG undefined FUN_1489a9f9e(void)

undefined8 FUN_1489a9f9e(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9fc4 FUN_1489a9fc4 body=38 status=ok
// SIG undefined FUN_1489a9fc4(void)

undefined8 FUN_1489a9fc4(undefined8 param_1,int param_2)

{
  FUN_140333e92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489a9fea FUN_1489a9fea body=38 status=ok
// SIG undefined FUN_1489a9fea(void)

undefined8 FUN_1489a9fea(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa014 FUN_1489aa014 body=38 status=ok
// SIG undefined FUN_1489aa014(void)

undefined8 FUN_1489aa014(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa03e FUN_1489aa03e body=68 status=ok
// SIG undefined FUN_1489aa03e(void)

undefined8 * FUN_1489aa03e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b431730;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa082 FUN_1489aa082 body=38 status=ok
// SIG undefined FUN_1489aa082(void)

undefined8 FUN_1489aa082(undefined8 param_1,int param_2)

{
  FUN_140333e92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa0a8 FUN_1489aa0a8 body=38 status=ok
// SIG undefined FUN_1489aa0a8(void)

undefined8 FUN_1489aa0a8(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa0ce FUN_1489aa0ce body=38 status=ok
// SIG undefined FUN_1489aa0ce(void)

undefined8 FUN_1489aa0ce(undefined8 param_1,int param_2)

{
  FUN_140333e92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa0f4 FUN_1489aa0f4 body=38 status=ok
// SIG undefined FUN_1489aa0f4(void)

undefined8 FUN_1489aa0f4(undefined8 param_1,int param_2)

{
  FUN_1457b7d70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa120 FUN_1489aa120 body=38 status=ok
// SIG undefined FUN_1489aa120(void)

undefined8 FUN_1489aa120(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GbxSceneViewer",1);
  return param_2;
}



// FUNCTION 1489aa146 FUN_1489aa146 body=29 status=ok
// SIG undefined FUN_1489aa146(void)

undefined8 FUN_1489aa146(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa17e FUN_1489aa17e body=29 status=ok
// SIG undefined FUN_1489aa17e(void)

bool FUN_1489aa17e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489aa19c FUN_1489aa19c body=26 status=ok
// SIG undefined FUN_1489aa19c(void)

bool FUN_1489aa19c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489aa1b6 FUN_1489aa1b6 body=24 status=ok
// SIG undefined FUN_1489aa1b6(void)

bool FUN_1489aa1b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489aa1ce FUN_1489aa1ce body=101 status=ok
// SIG undefined FUN_1489aa1ce(void)

void FUN_1489aa1ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489aa234 FUN_1489aa234 body=101 status=ok
// SIG undefined FUN_1489aa234(void)

void FUN_1489aa234(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489aa29a FUN_1489aa29a body=134 status=ok
// SIG undefined FUN_1489aa29a(void)

void FUN_1489aa29a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432500;
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
                    /* WARNING: Could not recover jumptable at 0x0001489aa311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aa320 FUN_1489aa320 body=44 status=ok
// SIG undefined FUN_1489aa320(void)

void FUN_1489aa320(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489aa349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1489aa34c FUN_1489aa34c body=156 status=ok
// SIG undefined FUN_1489aa34c(void)

bool FUN_1489aa34c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489aa3ea FUN_1489aa3ea body=93 status=ok
// SIG undefined FUN_1489aa3ea(void)

void FUN_1489aa3ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
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
  FUN_1489aa448();
  return;
}



// FUNCTION 1489aa448 FUN_1489aa448 body=307 status=ok
// SIG undefined FUN_1489aa448(void)

void FUN_1489aa448(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,param_4);
    }
    local_68 = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = (int)param_4 * param_3;
    uVar6 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar6);
    uVar7 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar7) {
      FUN_140023dd8(puVar1,uVar5 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar6);
      uVar7 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar7;
    *param_1 = _Dst;
    if (param_2 != 0 && local_68 != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,local_68,param_2 * param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489aa57e FUN_1489aa57e body=31 status=ok
// SIG undefined FUN_1489aa57e(void)

undefined8 FUN_1489aa57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa5b0 FUN_1489aa5b0 body=93 status=ok
// SIG undefined FUN_1489aa5b0(void)

void FUN_1489aa5b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4325e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aa60e FUN_1489aa60e body=93 status=ok
// SIG undefined FUN_1489aa60e(void)

void FUN_1489aa60e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4325e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aa66c FUN_1489aa66c body=126 status=ok
// SIG undefined FUN_1489aa66c(void)

void FUN_1489aa66c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4325e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489aa6db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aa6fa FUN_1489aa6fa body=31 status=ok
// SIG undefined FUN_1489aa6fa(void)

undefined8 FUN_1489aa6fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa73c FUN_1489aa73c body=93 status=ok
// SIG undefined FUN_1489aa73c(void)

void FUN_1489aa73c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4326c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432650;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aa79a FUN_1489aa79a body=93 status=ok
// SIG undefined FUN_1489aa79a(void)

void FUN_1489aa79a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4326c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432650;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aa7f8 FUN_1489aa7f8 body=126 status=ok
// SIG undefined FUN_1489aa7f8(void)

void FUN_1489aa7f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4326c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432650;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489aa867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aa876 FUN_1489aa876 body=20 status=ok
// SIG undefined FUN_1489aa876(void)

undefined8 FUN_1489aa876(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1489aa88c FUN_1489aa88c body=31 status=ok
// SIG undefined FUN_1489aa88c(void)

undefined8 FUN_1489aa88c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aa8ce FUN_1489aa8ce body=93 status=ok
// SIG undefined FUN_1489aa8ce(void)

void FUN_1489aa8ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4327a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432730;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aa92c FUN_1489aa92c body=93 status=ok
// SIG undefined FUN_1489aa92c(void)

void FUN_1489aa92c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4327a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432730;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aa98a FUN_1489aa98a body=126 status=ok
// SIG undefined FUN_1489aa98a(void)

void FUN_1489aa98a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4327a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b432730;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489aa9f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aaa08 FUN_1489aaa08 body=20 status=ok
// SIG undefined FUN_1489aaa08(void)

undefined8 FUN_1489aaa08(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1489aaa30 FUN_1489aaa30 body=93 status=ok
// SIG undefined FUN_1489aaa30(void)

void FUN_1489aaa30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b432880;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b432810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aaa8e FUN_1489aaa8e body=126 status=ok
// SIG undefined FUN_1489aaa8e(void)

void FUN_1489aaa8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b432880;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar2;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar4;
  *(undefined ***)p_Var1 = &PTR_FUN_14b432810;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489aaafd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aab22 FUN_1489aab22 body=31 status=ok
// SIG undefined FUN_1489aab22(void)

undefined8 FUN_1489aab22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489aab54 FUN_1489aab54 body=93 status=ok
// SIG undefined FUN_1489aab54(void)

void FUN_1489aab54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b432960;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4328f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aabb2 FUN_1489aabb2 body=93 status=ok
// SIG undefined FUN_1489aabb2(void)

void FUN_1489aabb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b432960;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4328f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489aac10 FUN_1489aac10 body=126 status=ok
// SIG undefined FUN_1489aac10(void)

void FUN_1489aac10(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b432960;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4328f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489aac7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489aac9a FUN_1489aac9a body=157 status=ok
// SIG undefined FUN_1489aac9a(void)

undefined8 * FUN_1489aac9a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_1489aad38(&local_40,*(undefined8 *)(lVar1 + lVar3));
      FUN_140ed4016(param_1,&local_40);
      FUN_14499183d(local_40,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489aad38 FUN_1489aad38 body=741 status=ok
// SIG undefined FUN_1489aad38(void)

longlong * FUN_1489aad38(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_14063d1f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_1405b04b6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && ((longlong)(int)param_2[0x23] != 0)))) {
        plVar11 = (longlong *)param_2[0x22];
        plVar2 = plVar11 + (longlong)(int)param_2[0x23] * 5;
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x90) != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x88);
            lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0xb8;
            do {
              lVar10 = *(longlong *)(lVar9 + 0x48);
              if (lVar10 != 0) {
                lVar8 = FUN_1414cc67e();
                lVar10 = *(longlong *)(lVar10 + 0x10);
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_140ed4548(param_1,iVar3);
                  }
                  FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar9);
                }
              }
              lVar9 = lVar9 + 0xb8;
              lVar6 = lVar6 + -0xb8;
            } while (lVar6 != 0);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar2);
      }
    }
    else {
      local_f0 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f4 = 0x7f7fffff;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x2c8))(param_2,&local_f8,&local_f4,&local_f0);
      uVar5 = uStack_e0;
      lVar6 = local_e8;
      lVar9 = (longlong)(int)uStack_e0;
      local_e8 = 0;
      uStack_e0 = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (((*(longlong *)(lVar6 + 0x20 + lVar10) != 0) &&
              (lVar8 = *(longlong *)(lVar6 + 0x10 + lVar10), lVar8 != 0)) &&
             (lVar4 = *(longlong *)(lVar8 + 0x48), lVar4 != 0)) {
            lVar7 = FUN_1414cc67e();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar3 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                FUN_140ed4548(param_1,iVar3);
              }
              FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar8);
            }
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      FUN_1448262fc(lVar6,uVar5 & 0xffffffff);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489ab01e FUN_1489ab01e body=157 status=ok
// SIG undefined FUN_1489ab01e(void)

undefined8 * FUN_1489ab01e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_1489ab0bc(&local_40,*(undefined8 *)(lVar1 + lVar3));
      FUN_140ed4016(param_1,&local_40);
      FUN_14499183d(local_40,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ab0bc FUN_1489ab0bc body=741 status=ok
// SIG undefined FUN_1489ab0bc(void)

longlong * FUN_1489ab0bc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_14063d1f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_1405b04b6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && ((longlong)(int)param_2[0x23] != 0)))) {
        plVar11 = (longlong *)param_2[0x22];
        plVar2 = plVar11 + (longlong)(int)param_2[0x23] * 5;
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x90) != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x88);
            lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0xb8;
            do {
              lVar10 = *(longlong *)(lVar9 + 0x50);
              if (lVar10 != 0) {
                lVar8 = FUN_1414cc764();
                lVar10 = *(longlong *)(lVar10 + 0x10);
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_140ed4548(param_1,iVar3);
                  }
                  FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar9);
                }
              }
              lVar9 = lVar9 + 0xb8;
              lVar6 = lVar6 + -0xb8;
            } while (lVar6 != 0);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar2);
      }
    }
    else {
      local_f0 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f4 = 0x7f7fffff;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x2c8))(param_2,&local_f8,&local_f4,&local_f0);
      uVar5 = uStack_e0;
      lVar6 = local_e8;
      lVar9 = (longlong)(int)uStack_e0;
      local_e8 = 0;
      uStack_e0 = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (((*(longlong *)(lVar6 + 0x20 + lVar10) != 0) &&
              (lVar8 = *(longlong *)(lVar6 + 0x10 + lVar10), lVar8 != 0)) &&
             (lVar4 = *(longlong *)(lVar8 + 0x50), lVar4 != 0)) {
            lVar7 = FUN_1414cc764();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar3 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                FUN_140ed4548(param_1,iVar3);
              }
              FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar8);
            }
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      FUN_1448262fc(lVar6,uVar5 & 0xffffffff);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489ab3a2 FUN_1489ab3a2 body=206 status=ok
// SIG undefined FUN_1489ab3a2(void)

void FUN_1489ab3a2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Dst;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  
  lVar6 = *param_1;
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  lVar1 = lVar6 + lVar8 * 8;
  lVar10 = lVar1;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar8 = lVar8 << 3;
    lVar9 = 8;
    do {
      if (lVar8 == lVar9) goto LAB_1489ab419;
      plVar2 = (longlong *)(lVar6 + lVar9);
      lVar13 = lVar9 + 8;
      plVar3 = (longlong *)(lVar6 + -8 + lVar9);
      lVar9 = lVar13;
    } while (*plVar3 != *plVar2);
    lVar9 = lVar6 + lVar13 + -0x10;
    lVar10 = *plVar2;
    if (lVar8 != lVar13) {
      do {
        lVar4 = *(longlong *)(lVar6 + lVar13);
        if (lVar10 != lVar4) {
          *(longlong *)(lVar9 + 8) = lVar4;
          lVar9 = lVar9 + 8;
        }
        lVar13 = lVar13 + 8;
        lVar10 = lVar4;
      } while (lVar8 != lVar13);
      lVar6 = *param_1;
      iVar7 = (int)param_1[1];
    }
    lVar10 = lVar9 + 8;
  }
LAB_1489ab419:
  if ((lVar6 + (longlong)iVar7 * 8 != lVar10) &&
     (uVar11 = (uint)((ulonglong)(lVar1 - lVar10) >> 3), 0 < (int)uVar11)) {
    iVar5 = (int)((ulonglong)(lVar10 - lVar6) >> 3);
    iVar12 = iVar7 - (iVar5 + uVar11);
    if (iVar12 != 0) {
      _Dst = (void *)(lVar6 + (longlong)iVar5 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)(uVar11 & 0x7fffffff) * 8),
              (longlong)iVar12 << 3);
      iVar7 = (int)param_1[1];
    }
    *(uint *)(param_1 + 1) = iVar7 - uVar11;
  }
  return;
}



// FUNCTION 1489ab470 FUN_1489ab470 body=369 status=ok
// SIG undefined FUN_1489ab470(void)

void FUN_1489ab470(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (0x100 < (longlong)uVar5) {
    if (0 < (longlong)param_3) {
      puVar3 = param_2;
      do {
        FUN_1489ab696(&local_50,param_1,puVar3);
        puVar2 = local_48;
        param_2 = local_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)local_50 - (longlong)param_1 < (longlong)puVar3 - (longlong)local_48) {
          FUN_1489ab470(param_1,local_50,param_3);
          param_1 = puVar2;
          param_2 = puVar3;
        }
        else {
          FUN_1489ab470(local_48,puVar3,param_3);
        }
        uVar5 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar5 < 0x101) goto LAB_1489ab5d5;
        puVar3 = param_2;
      } while (param_3 != 0);
    }
    uVar7 = uVar5 >> 4;
    do {
      uVar6 = uVar7 - 1;
      local_50 = (undefined8 *)param_1[uVar6];
      FUN_1489ab88b(param_1,uVar6,uVar5 >> 3,&local_50);
      bVar1 = 1 < uVar7;
      uVar7 = uVar6;
    } while (bVar1);
    lVar4 = (longlong)param_2 - (longlong)param_1;
    if (8 < lVar4) {
      do {
        param_2 = param_2 + -1;
        local_50 = (undefined8 *)*param_2;
        *param_2 = *param_1;
        lVar4 = lVar4 + -8;
        FUN_1489ab88b(param_1,0,lVar4 >> 3,&local_50);
      } while (8 < lVar4);
    }
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1489ab5d5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1489ab696 FUN_1489ab696 body=501 status=ok
// SIG undefined FUN_1489ab696(void)

undefined8 * FUN_1489ab696(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 4;
  FUN_1489ab959(param_2,param_2 + lVar8,param_3 + -1);
  puVar7 = param_2 + lVar8;
  do {
    puVar5 = puVar7;
    if ((puVar5 <= param_2) || (iVar3 = FUN_1403de539(puVar5[-1],*puVar5), iVar3 < 0)) break;
    iVar3 = FUN_1403de539(*puVar5,puVar5[-1]);
    puVar7 = puVar5 + -1;
  } while (-1 < iVar3);
  puVar7 = param_2 + lVar8;
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar5;
    puVar9 = puVar7;
    if ((param_3 <= puVar7) || (iVar3 = FUN_1403de539(*puVar7,*puVar5), iVar3 < 0)) break;
    iVar3 = FUN_1403de539(*puVar5,*puVar7);
  } while (-1 < iVar3);
LAB_1489ab737:
  do {
    puVar1 = puVar5;
    if (puVar9 < param_3) {
      iVar3 = FUN_1403de539(*puVar5,*puVar9);
      if (-1 < iVar3) {
        iVar3 = FUN_1403de539(*puVar9,*puVar5);
        if (iVar3 < 0) goto joined_r0x0001489ab77a;
        if (puVar9 != puVar7) {
          uVar4 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar9 = puVar9 + 1;
      goto LAB_1489ab737;
    }
joined_r0x0001489ab77a:
    while (puVar2 = puVar6, param_2 < puVar2) {
      puVar6 = puVar2 + -1;
      iVar3 = FUN_1403de539(puVar2[-1],*puVar1);
      if (-1 < iVar3) {
        iVar3 = FUN_1403de539(*puVar1,*puVar6);
        if (iVar3 < 0) break;
        puVar5 = puVar1 + -1;
        bVar10 = puVar2 != puVar1;
        puVar1 = puVar5;
        if (bVar10) {
          uVar4 = *puVar5;
          *puVar5 = *puVar6;
          *puVar6 = uVar4;
        }
      }
    }
    if ((puVar9 == param_3) && (puVar2 == param_2)) {
      *param_1 = puVar1;
      param_1[1] = puVar7;
      return param_1;
    }
    if (puVar2 == param_2) {
      if (puVar7 != puVar9) {
        uVar4 = *puVar1;
        *puVar1 = *puVar7;
        *puVar7 = uVar4;
      }
      puVar7 = puVar7 + 1;
      uVar4 = *puVar1;
      *puVar1 = *puVar9;
      *puVar9 = uVar4;
      puVar5 = puVar1 + 1;
      puVar6 = param_2;
      puVar9 = puVar9 + 1;
    }
    else {
      puVar6 = puVar2 + -1;
      if (puVar9 == param_3) {
        puVar5 = puVar1 + -1;
        uVar4 = puVar1[-1];
        if (puVar2 != puVar1) {
          uVar4 = *puVar6;
          *puVar6 = puVar1[-1];
          *puVar5 = uVar4;
        }
        *puVar5 = puVar7[-1];
        puVar7[-1] = uVar4;
        puVar7 = puVar7 + -1;
      }
      else {
        uVar4 = *puVar9;
        *puVar9 = *puVar6;
        *puVar6 = uVar4;
        puVar5 = puVar1;
        puVar9 = puVar9 + 1;
      }
    }
  } while( true );
}



// FUNCTION 1489ab88b FUN_1489ab88b body=206 status=ok
// SIG undefined FUN_1489ab88b(void)

void FUN_1489ab88b(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar3) {
    iVar2 = FUN_1403de539(*(undefined8 *)(param_1 + 0x10 + lVar1 * 0x10),
                          *(undefined8 *)(param_1 + 8 + lVar1 * 0x10));
    if (iVar2 < 0) {
      lVar4 = lVar1 * 2 + 1;
    }
    else {
      lVar4 = lVar1 * 2 + 2;
    }
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
    lVar1 = lVar4;
  }
  if (((param_3 & 1) == 0) && (lVar1 == lVar3)) {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar3 = lVar1 + -1 >> 1;
    iVar2 = FUN_1403de539(*(undefined8 *)(param_1 + lVar3 * 8),*param_4);
    if (-1 < iVar2) break;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar1 = lVar3;
  }
  *(undefined8 *)(param_1 + lVar1 * 8) = *param_4;
  return;
}



// FUNCTION 1489ab959 FUN_1489ab959 body=145 status=ok
// SIG undefined FUN_1489ab959(void)

void FUN_1489ab959(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_3 - param_1 >> 3;
  if (0x28 < lVar2) {
    uVar3 = lVar2 + 1;
    uVar1 = uVar3 >> 3;
    uVar3 = uVar3 & 0xfffffffffffffff8;
    FUN_1489ab9ea(param_1,param_1 + uVar3,param_1 + uVar1 * 0x10);
    FUN_1489ab9ea(param_2 - uVar3,param_2,param_2 + uVar3);
    FUN_1489ab9ea(param_3 + uVar1 * -0x10,param_3 - uVar3,param_3);
    param_1 = param_1 + uVar3;
    param_3 = param_3 - uVar3;
  }
  FUN_1489ab9ea(param_1,param_2,param_3);
  return;
}



// FUNCTION 1489ab9ea FUN_1489ab9ea body=104 status=ok
// SIG undefined FUN_1489ab9ea(void)

void FUN_1489ab9ea(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_1403de539(*param_2,*param_1);
  if (iVar2 < 0) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  iVar2 = FUN_1403de539(*param_3,*param_2);
  if (iVar2 < 0) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    iVar2 = FUN_1403de539(uVar1,*param_1);
    if (iVar2 < 0) {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}



// FUNCTION 1489aba52 FUN_1489aba52 body=48 status=ok
// SIG undefined FUN_1489aba52(void)

void FUN_1489aba52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xf0,8);
  }
  return;
}



// FUNCTION 1489aba82 FUN_1489aba82 body=107 status=ok
// SIG undefined FUN_1489aba82(void)

/* WARNING: Removing unreachable block (ram,0x0001489abab4) */
/* WARNING: Removing unreachable block (ram,0x0001489aba90) */
/* WARNING: Removing unreachable block (ram,0x0001489abaa6) */
/* WARNING: Removing unreachable block (ram,0x0001489ababf) */
/* WARNING: Removing unreachable block (ram,0x0001489abaa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489aba82(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb8cca8;
  LOCK();
  UNLOCK();
  DAT_14cb8cca8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb8ccb0 = _DAT_14cb8ccb0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb8ccb0 = _DAT_14cb8ccb0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1489abaee FUN_1489abaee body=31 status=ok
// SIG undefined FUN_1489abaee(void)

undefined8 FUN_1489abaee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489abb28 FUN_1489abb28 body=93 status=ok
// SIG undefined FUN_1489abb28(void)

void FUN_1489abb28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4329d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489abb86 FUN_1489abb86 body=93 status=ok
// SIG undefined FUN_1489abb86(void)

void FUN_1489abb86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4329d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489abbe4 FUN_1489abbe4 body=126 status=ok
// SIG undefined FUN_1489abbe4(void)

void FUN_1489abbe4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4329d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489abc53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489abc62 FUN_1489abc62 body=40 status=ok
// SIG undefined FUN_1489abc62(void)

void FUN_1489abc62(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489abc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489abc8a FUN_1489abc8a body=48 status=ok
// SIG undefined FUN_1489abc8a(void)

void FUN_1489abc8a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489abcba FUN_1489abcba body=9 status=ok
// SIG undefined FUN_1489abcba(void)

void FUN_1489abcba(longlong param_1)

{
  FUN_1403ad826(param_1 + 0x10);
  return;
}



// FUNCTION 1489abcc4 FUN_1489abcc4 body=29 status=ok
// SIG undefined FUN_1489abcc4(void)

undefined8 FUN_1489abcc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489abce2 FUN_1489abce2 body=110 status=ok
// SIG undefined FUN_1489abce2(void)

void FUN_1489abce2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_1489abd52(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1489abd52 FUN_1489abd52 body=132 status=ok
// SIG undefined FUN_1489abd52(void)

void FUN_1489abd52(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,4);
  return;
}



// FUNCTION 1489abdd6 FUN_1489abdd6 body=243 status=ok
// SIG undefined FUN_1489abdd6(void)

undefined8 *
FUN_1489abdd6(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_4;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38) == lVar1) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            FUN_141250f7a(lVar3 + 8,param_2,&local_18);
            goto LAB_1489abdfd;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x30);
      } while (iVar5 != -1);
    }
  }
  *param_2 = param_4;
LAB_1489abdfd:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489abeca FUN_1489abeca body=243 status=ok
// SIG undefined FUN_1489abeca(void)

undefined8 *
FUN_1489abeca(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_4;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x38) == lVar1) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            FUN_141213494(lVar3 + 8,param_2,&local_18);
            goto LAB_1489abef1;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x30);
      } while (iVar5 != -1);
    }
  }
  *param_2 = param_4;
LAB_1489abef1:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489abfbe FUN_1489abfbe body=207 status=ok
// SIG undefined FUN_1489abfbe(void)

undefined8 *
FUN_1489abfbe(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar1) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            FUN_1470da8d0(lVar4 + 8,param_2,param_4);
            return param_2;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  param_2[2] = param_4[2];
  uVar3 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = uVar3;
  return param_2;
}


