// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a905fc FUN_148a905fc body=118 status=ok
// SIG undefined FUN_148a905fc(void)

void FUN_148a905fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebdc0;
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



// FUNCTION 148a90672 FUN_148a90672 body=156 status=ok
// SIG undefined FUN_148a90672(void)

void FUN_148a90672(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b434710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ebdc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a906fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a9070e FUN_148a9070e body=104 status=ok
// SIG undefined FUN_148a9070e(void)

void FUN_148a9070e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a9075b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a9076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a90776 FUN_148a90776 body=101 status=ok
// SIG undefined FUN_148a90776(void)

ulonglong FUN_148a90776(longlong param_1)

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
LAB_148a907d0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a907d0;
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



// FUNCTION 148a907de FUN_148a907de body=68 status=ok
// SIG undefined FUN_148a907de(void)

undefined8 * FUN_148a907de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ebf50;
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



// FUNCTION 148a90826 FUN_148a90826 body=81 status=ok
// SIG undefined FUN_148a90826(void)

undefined8 FUN_148a90826(longlong param_1)

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



// FUNCTION 148a9087e FUN_148a9087e body=89 status=ok
// SIG undefined FUN_148a9087e(void)

bool FUN_148a9087e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a908c9;
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
LAB_148a908c9:
  return lVar6 == param_2;
}



// FUNCTION 148a908f4 FUN_148a908f4 body=118 status=ok
// SIG undefined FUN_148a908f4(void)

void FUN_148a908f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ebf50;
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



// FUNCTION 148a9096a FUN_148a9096a body=118 status=ok
// SIG undefined FUN_148a9096a(void)

void FUN_148a9096a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ebf50;
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



// FUNCTION 148a909e0 FUN_148a909e0 body=156 status=ok
// SIG undefined FUN_148a909e0(void)

void FUN_148a909e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ebf50;
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
                    /* WARNING: Could not recover jumptable at 0x000148a90a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a90a7c FUN_148a90a7c body=100 status=ok
// SIG undefined FUN_148a90a7c(void)

void FUN_148a90a7c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a90ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a90ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a90ae0 FUN_148a90ae0 body=68 status=ok
// SIG undefined FUN_148a90ae0(void)

undefined8 * FUN_148a90ae0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ebfc0;
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



// FUNCTION 148a90b28 FUN_148a90b28 body=81 status=ok
// SIG undefined FUN_148a90b28(void)

undefined8 FUN_148a90b28(longlong param_1)

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



// FUNCTION 148a90b80 FUN_148a90b80 body=89 status=ok
// SIG undefined FUN_148a90b80(void)

bool FUN_148a90b80(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a90bcb;
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
LAB_148a90bcb:
  return lVar6 == param_2;
}



// FUNCTION 148a90bf6 FUN_148a90bf6 body=118 status=ok
// SIG undefined FUN_148a90bf6(void)

void FUN_148a90bf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebfc0;
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



// FUNCTION 148a90c6c FUN_148a90c6c body=156 status=ok
// SIG undefined FUN_148a90c6c(void)

void FUN_148a90c6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ebfc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a90cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a90d08 FUN_148a90d08 body=104 status=ok
// SIG undefined FUN_148a90d08(void)

void FUN_148a90d08(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a90d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a90d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a90d70 FUN_148a90d70 body=68 status=ok
// SIG undefined FUN_148a90d70(void)

undefined8 * FUN_148a90d70(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec030;
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



// FUNCTION 148a90db8 FUN_148a90db8 body=81 status=ok
// SIG undefined FUN_148a90db8(void)

undefined8 FUN_148a90db8(longlong param_1)

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



// FUNCTION 148a90e10 FUN_148a90e10 body=89 status=ok
// SIG undefined FUN_148a90e10(void)

bool FUN_148a90e10(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a90e5b;
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
LAB_148a90e5b:
  return lVar6 == param_2;
}



// FUNCTION 148a90e86 FUN_148a90e86 body=118 status=ok
// SIG undefined FUN_148a90e86(void)

void FUN_148a90e86(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ec030;
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



// FUNCTION 148a90efc FUN_148a90efc body=118 status=ok
// SIG undefined FUN_148a90efc(void)

void FUN_148a90efc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ec030;
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



// FUNCTION 148a90f72 FUN_148a90f72 body=156 status=ok
// SIG undefined FUN_148a90f72(void)

void FUN_148a90f72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec030;
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
                    /* WARNING: Could not recover jumptable at 0x000148a90ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a9100e FUN_148a9100e body=100 status=ok
// SIG undefined FUN_148a9100e(void)

void FUN_148a9100e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a9105a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a91067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a910c6 FUN_148a910c6 body=64 status=ok
// SIG undefined FUN_148a910c6(void)

undefined8 * FUN_148a910c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecb00;
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



// FUNCTION 148a9110a FUN_148a9110a body=81 status=ok
// SIG undefined FUN_148a9110a(void)

undefined8 FUN_148a9110a(longlong param_1)

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



// FUNCTION 148a91162 FUN_148a91162 body=89 status=ok
// SIG undefined FUN_148a91162(void)

bool FUN_148a91162(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a911ad;
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
LAB_148a911ad:
  return lVar6 == param_2;
}



// FUNCTION 148a911d8 FUN_148a911d8 body=118 status=ok
// SIG undefined FUN_148a911d8(void)

void FUN_148a911d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecb00;
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



// FUNCTION 148a9124e FUN_148a9124e body=118 status=ok
// SIG undefined FUN_148a9124e(void)

void FUN_148a9124e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecb00;
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



// FUNCTION 148a912c4 FUN_148a912c4 body=156 status=ok
// SIG undefined FUN_148a912c4(void)

void FUN_148a912c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecb00;
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
                    /* WARNING: Could not recover jumptable at 0x000148a91350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a91360 FUN_148a91360 body=104 status=ok
// SIG undefined FUN_148a91360(void)

void FUN_148a91360(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a913ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a913be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a913c8 FUN_148a913c8 body=101 status=ok
// SIG undefined FUN_148a913c8(void)

ulonglong FUN_148a913c8(longlong param_1)

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
LAB_148a91422:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a91422;
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



// FUNCTION 148a9142e FUN_148a9142e body=64 status=ok
// SIG undefined FUN_148a9142e(void)

undefined8 * FUN_148a9142e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecbe0;
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



// FUNCTION 148a91472 FUN_148a91472 body=81 status=ok
// SIG undefined FUN_148a91472(void)

undefined8 FUN_148a91472(longlong param_1)

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



// FUNCTION 148a914ca FUN_148a914ca body=89 status=ok
// SIG undefined FUN_148a914ca(void)

bool FUN_148a914ca(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a91515;
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
LAB_148a91515:
  return lVar6 == param_2;
}



// FUNCTION 148a91540 FUN_148a91540 body=118 status=ok
// SIG undefined FUN_148a91540(void)

void FUN_148a91540(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ecbe0;
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



// FUNCTION 148a915b6 FUN_148a915b6 body=118 status=ok
// SIG undefined FUN_148a915b6(void)

void FUN_148a915b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ecbe0;
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



// FUNCTION 148a9162c FUN_148a9162c body=156 status=ok
// SIG undefined FUN_148a9162c(void)

void FUN_148a9162c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecbe0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a916b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a916c8 FUN_148a916c8 body=100 status=ok
// SIG undefined FUN_148a916c8(void)

void FUN_148a916c8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a91714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a91721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a9172c FUN_148a9172c body=100 status=ok
// SIG undefined FUN_148a9172c(void)

ulonglong FUN_148a9172c(longlong param_1)

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
LAB_148a91785:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a91785;
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



// FUNCTION 148a91790 FUN_148a91790 body=64 status=ok
// SIG undefined FUN_148a91790(void)

undefined8 * FUN_148a91790(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecc50;
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



// FUNCTION 148a917d4 FUN_148a917d4 body=81 status=ok
// SIG undefined FUN_148a917d4(void)

undefined8 FUN_148a917d4(longlong param_1)

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



// FUNCTION 148a9182c FUN_148a9182c body=89 status=ok
// SIG undefined FUN_148a9182c(void)

bool FUN_148a9182c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a91877;
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
LAB_148a91877:
  return lVar6 == param_2;
}



// FUNCTION 148a918ae FUN_148a918ae body=118 status=ok
// SIG undefined FUN_148a918ae(void)

void FUN_148a918ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eccc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecc50;
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



// FUNCTION 148a91924 FUN_148a91924 body=118 status=ok
// SIG undefined FUN_148a91924(void)

void FUN_148a91924(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eccc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecc50;
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



// FUNCTION 148a9199a FUN_148a9199a body=156 status=ok
// SIG undefined FUN_148a9199a(void)

void FUN_148a9199a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4eccc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecc50;
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
                    /* WARNING: Could not recover jumptable at 0x000148a91a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a91a36 FUN_148a91a36 body=104 status=ok
// SIG undefined FUN_148a91a36(void)

void FUN_148a91a36(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a91a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a91a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a91a9e FUN_148a91a9e body=101 status=ok
// SIG undefined FUN_148a91a9e(void)

ulonglong FUN_148a91a9e(longlong param_1)

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
LAB_148a91af8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a91af8;
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



// FUNCTION 148a91b06 FUN_148a91b06 body=68 status=ok
// SIG undefined FUN_148a91b06(void)

undefined8 * FUN_148a91b06(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecd50;
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



// FUNCTION 148a91b4e FUN_148a91b4e body=81 status=ok
// SIG undefined FUN_148a91b4e(void)

undefined8 FUN_148a91b4e(longlong param_1)

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



// FUNCTION 148a91ba6 FUN_148a91ba6 body=89 status=ok
// SIG undefined FUN_148a91ba6(void)

bool FUN_148a91ba6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a91bf1;
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
LAB_148a91bf1:
  return lVar6 == param_2;
}



// FUNCTION 148a91c1c FUN_148a91c1c body=118 status=ok
// SIG undefined FUN_148a91c1c(void)

void FUN_148a91c1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ecd50;
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



// FUNCTION 148a91c92 FUN_148a91c92 body=156 status=ok
// SIG undefined FUN_148a91c92(void)

void FUN_148a91c92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecd50;
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
                    /* WARNING: Could not recover jumptable at 0x000148a91d1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a91d2e FUN_148a91d2e body=100 status=ok
// SIG undefined FUN_148a91d2e(void)

void FUN_148a91d2e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a91d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a91d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a91d94 FUN_148a91d94 body=130 status=ok
// SIG undefined FUN_148a91d94(void)

void FUN_148a91d94(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a91e26 FUN_148a91e26 body=157 status=ok
// SIG undefined FUN_148a91e26(void)

undefined8 * FUN_148a91e26(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b4ecea0;
  local_38 = *param_3;
  *param_3 = 0;
  local_30 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_148a813a2(puVar1 + 2,*param_1,*param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a91ec4 FUN_148a91ec4 body=53 status=ok
// SIG undefined FUN_148a91ec4(void)

void FUN_148a91ec4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e81b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e81d8;
  FUN_1449db362(param_1 + 0x58);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 148a91efa FUN_148a91efa body=29 status=ok
// SIG undefined FUN_148a91efa(void)

undefined8 FUN_148a91efa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a91f18 FUN_148a91f18 body=167 status=ok
// SIG undefined FUN_148a91f18(void)

void FUN_148a91f18(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148a91f93;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148a91f93;
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
LAB_148a91f93:
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
                    /* WARNING: Could not recover jumptable at 0x000148a91fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148a91fc0 FUN_148a91fc0 body=64 status=ok
// SIG undefined FUN_148a91fc0(void)

undefined8 * FUN_148a91fc0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecec0;
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



// FUNCTION 148a92004 FUN_148a92004 body=81 status=ok
// SIG undefined FUN_148a92004(void)

undefined8 FUN_148a92004(longlong param_1)

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



// FUNCTION 148a9205c FUN_148a9205c body=89 status=ok
// SIG undefined FUN_148a9205c(void)

bool FUN_148a9205c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a920a7;
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
LAB_148a920a7:
  return lVar6 == param_2;
}



// FUNCTION 148a920d2 FUN_148a920d2 body=118 status=ok
// SIG undefined FUN_148a920d2(void)

void FUN_148a920d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ecec0;
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



// FUNCTION 148a92148 FUN_148a92148 body=118 status=ok
// SIG undefined FUN_148a92148(void)

void FUN_148a92148(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ecec0;
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



// FUNCTION 148a921be FUN_148a921be body=156 status=ok
// SIG undefined FUN_148a921be(void)

void FUN_148a921be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecec0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a9224a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a9225a FUN_148a9225a body=100 status=ok
// SIG undefined FUN_148a9225a(void)

void FUN_148a9225a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a922a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a922b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a922be FUN_148a922be body=100 status=ok
// SIG undefined FUN_148a922be(void)

ulonglong FUN_148a922be(longlong param_1)

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
LAB_148a92317:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a92317;
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



// FUNCTION 148a92322 FUN_148a92322 body=196 status=ok
// SIG undefined FUN_148a92322(void)

undefined8 *
FUN_148a92322(undefined4 *param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b4ecf30;
  local_48 = *param_5;
  local_50 = &local_48;
  *param_5 = 0;
  local_40 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  local_58 = *param_4;
  FUN_145d7fa22(puVar1 + 2,*param_1,*param_2,*param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a923e8 FUN_148a923e8 body=64 status=ok
// SIG undefined FUN_148a923e8(void)

undefined8 * FUN_148a923e8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecf50;
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



// FUNCTION 148a9242c FUN_148a9242c body=81 status=ok
// SIG undefined FUN_148a9242c(void)

undefined8 FUN_148a9242c(longlong param_1)

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



// FUNCTION 148a92484 FUN_148a92484 body=89 status=ok
// SIG undefined FUN_148a92484(void)

bool FUN_148a92484(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a924cf;
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
LAB_148a924cf:
  return lVar6 == param_2;
}



// FUNCTION 148a92506 FUN_148a92506 body=118 status=ok
// SIG undefined FUN_148a92506(void)

void FUN_148a92506(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecf50;
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



// FUNCTION 148a9257c FUN_148a9257c body=118 status=ok
// SIG undefined FUN_148a9257c(void)

void FUN_148a9257c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecf50;
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



// FUNCTION 148a925f2 FUN_148a925f2 body=156 status=ok
// SIG undefined FUN_148a925f2(void)

void FUN_148a925f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecf50;
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
                    /* WARNING: Could not recover jumptable at 0x000148a9267e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a9268e FUN_148a9268e body=104 status=ok
// SIG undefined FUN_148a9268e(void)

void FUN_148a9268e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a926db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a926ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a926f6 FUN_148a926f6 body=101 status=ok
// SIG undefined FUN_148a926f6(void)

ulonglong FUN_148a926f6(longlong param_1)

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
LAB_148a92750:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a92750;
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



// FUNCTION 148a9275e FUN_148a9275e body=64 status=ok
// SIG undefined FUN_148a9275e(void)

undefined8 * FUN_148a9275e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecfc0;
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



// FUNCTION 148a927a2 FUN_148a927a2 body=81 status=ok
// SIG undefined FUN_148a927a2(void)

undefined8 FUN_148a927a2(longlong param_1)

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



// FUNCTION 148a927fa FUN_148a927fa body=89 status=ok
// SIG undefined FUN_148a927fa(void)

bool FUN_148a927fa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a92845;
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
LAB_148a92845:
  return lVar6 == param_2;
}



// FUNCTION 148a92870 FUN_148a92870 body=118 status=ok
// SIG undefined FUN_148a92870(void)

void FUN_148a92870(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecfc0;
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



// FUNCTION 148a928e6 FUN_148a928e6 body=118 status=ok
// SIG undefined FUN_148a928e6(void)

void FUN_148a928e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecfc0;
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



// FUNCTION 148a9295c FUN_148a9295c body=156 status=ok
// SIG undefined FUN_148a9295c(void)

void FUN_148a9295c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecfc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a929e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a929f8 FUN_148a929f8 body=103 status=ok
// SIG undefined FUN_148a929f8(void)

ulonglong FUN_148a929f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a92a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148a92a60 FUN_148a92a60 body=100 status=ok
// SIG undefined FUN_148a92a60(void)

ulonglong FUN_148a92a60(longlong param_1)

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
LAB_148a92ab9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a92ab9;
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



// FUNCTION 148a92ac4 FUN_148a92ac4 body=130 status=ok
// SIG undefined FUN_148a92ac4(void)

void FUN_148a92ac4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a92b48 FUN_148a92b48 body=64 status=ok
// SIG undefined FUN_148a92b48(void)

undefined8 * FUN_148a92b48(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed030;
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



// FUNCTION 148a92b8c FUN_148a92b8c body=81 status=ok
// SIG undefined FUN_148a92b8c(void)

undefined8 FUN_148a92b8c(longlong param_1)

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



// FUNCTION 148a92be4 FUN_148a92be4 body=89 status=ok
// SIG undefined FUN_148a92be4(void)

bool FUN_148a92be4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a92c2f;
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
LAB_148a92c2f:
  return lVar6 == param_2;
}



// FUNCTION 148a92c5a FUN_148a92c5a body=118 status=ok
// SIG undefined FUN_148a92c5a(void)

void FUN_148a92c5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed030;
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



// FUNCTION 148a92cd0 FUN_148a92cd0 body=118 status=ok
// SIG undefined FUN_148a92cd0(void)

void FUN_148a92cd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed030;
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



// FUNCTION 148a92d46 FUN_148a92d46 body=156 status=ok
// SIG undefined FUN_148a92d46(void)

void FUN_148a92d46(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed030;
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
                    /* WARNING: Could not recover jumptable at 0x000148a92dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a92de2 FUN_148a92de2 body=104 status=ok
// SIG undefined FUN_148a92de2(void)

void FUN_148a92de2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a92e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a92e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a92e4a FUN_148a92e4a body=101 status=ok
// SIG undefined FUN_148a92e4a(void)

ulonglong FUN_148a92e4a(longlong param_1)

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
LAB_148a92ea4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a92ea4;
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



// FUNCTION 148a92eb0 FUN_148a92eb0 body=68 status=ok
// SIG undefined FUN_148a92eb0(void)

undefined8 * FUN_148a92eb0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed110;
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



// FUNCTION 148a92ef8 FUN_148a92ef8 body=81 status=ok
// SIG undefined FUN_148a92ef8(void)

undefined8 FUN_148a92ef8(longlong param_1)

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



// FUNCTION 148a92f50 FUN_148a92f50 body=89 status=ok
// SIG undefined FUN_148a92f50(void)

bool FUN_148a92f50(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a92f9b;
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
LAB_148a92f9b:
  return lVar6 == param_2;
}



// FUNCTION 148a92fc6 FUN_148a92fc6 body=118 status=ok
// SIG undefined FUN_148a92fc6(void)

void FUN_148a92fc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed110;
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



// FUNCTION 148a9303c FUN_148a9303c body=156 status=ok
// SIG undefined FUN_148a9303c(void)

void FUN_148a9303c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed110;
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
                    /* WARNING: Could not recover jumptable at 0x000148a930c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a930d8 FUN_148a930d8 body=104 status=ok
// SIG undefined FUN_148a930d8(void)

void FUN_148a930d8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a93125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a93136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a93140 FUN_148a93140 body=68 status=ok
// SIG undefined FUN_148a93140(void)

undefined8 * FUN_148a93140(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed1f0;
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



// FUNCTION 148a93188 FUN_148a93188 body=81 status=ok
// SIG undefined FUN_148a93188(void)

undefined8 FUN_148a93188(longlong param_1)

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



// FUNCTION 148a931e0 FUN_148a931e0 body=89 status=ok
// SIG undefined FUN_148a931e0(void)

bool FUN_148a931e0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a9322b;
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
LAB_148a9322b:
  return lVar6 == param_2;
}



// FUNCTION 148a93256 FUN_148a93256 body=118 status=ok
// SIG undefined FUN_148a93256(void)

void FUN_148a93256(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ed1f0;
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



// FUNCTION 148a932cc FUN_148a932cc body=156 status=ok
// SIG undefined FUN_148a932cc(void)

void FUN_148a932cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed1f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a93358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a93368 FUN_148a93368 body=100 status=ok
// SIG undefined FUN_148a93368(void)

void FUN_148a93368(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a933b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a933c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a933cc FUN_148a933cc body=68 status=ok
// SIG undefined FUN_148a933cc(void)

undefined8 * FUN_148a933cc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed280;
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



// FUNCTION 148a93414 FUN_148a93414 body=81 status=ok
// SIG undefined FUN_148a93414(void)

undefined8 FUN_148a93414(longlong param_1)

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



// FUNCTION 148a9346c FUN_148a9346c body=89 status=ok
// SIG undefined FUN_148a9346c(void)

bool FUN_148a9346c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a934b7;
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
LAB_148a934b7:
  return lVar6 == param_2;
}



// FUNCTION 148a934e2 FUN_148a934e2 body=118 status=ok
// SIG undefined FUN_148a934e2(void)

void FUN_148a934e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed280;
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



// FUNCTION 148a93558 FUN_148a93558 body=156 status=ok
// SIG undefined FUN_148a93558(void)

void FUN_148a93558(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed280;
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
                    /* WARNING: Could not recover jumptable at 0x000148a935e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a935f4 FUN_148a935f4 body=104 status=ok
// SIG undefined FUN_148a935f4(void)

void FUN_148a935f4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a93641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a93652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a9365c FUN_148a9365c body=68 status=ok
// SIG undefined FUN_148a9365c(void)

undefined8 * FUN_148a9365c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed370;
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



// FUNCTION 148a936a4 FUN_148a936a4 body=81 status=ok
// SIG undefined FUN_148a936a4(void)

undefined8 FUN_148a936a4(longlong param_1)

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



// FUNCTION 148a936fc FUN_148a936fc body=89 status=ok
// SIG undefined FUN_148a936fc(void)

bool FUN_148a936fc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a93747;
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
LAB_148a93747:
  return lVar6 == param_2;
}



// FUNCTION 148a9377e FUN_148a9377e body=118 status=ok
// SIG undefined FUN_148a9377e(void)

void FUN_148a9377e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ed3e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed370;
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



// FUNCTION 148a937f4 FUN_148a937f4 body=156 status=ok
// SIG undefined FUN_148a937f4(void)

void FUN_148a937f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ed3e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed370;
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
                    /* WARNING: Could not recover jumptable at 0x000148a93880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a93890 FUN_148a93890 body=104 status=ok
// SIG undefined FUN_148a93890(void)

void FUN_148a93890(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a938dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a938ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a938fa FUN_148a938fa body=162 status=ok
// SIG undefined FUN_148a938fa(void)

void FUN_148a938fa(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148a93939;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148a93939;
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
LAB_148a93939:
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
                    /* WARNING: Could not recover jumptable at 0x000148a93998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148a9399c FUN_148a9399c body=68 status=ok
// SIG undefined FUN_148a9399c(void)

undefined8 * FUN_148a9399c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed590;
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



// FUNCTION 148a939e4 FUN_148a939e4 body=81 status=ok
// SIG undefined FUN_148a939e4(void)

undefined8 FUN_148a939e4(longlong param_1)

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



// FUNCTION 148a93a3c FUN_148a93a3c body=89 status=ok
// SIG undefined FUN_148a93a3c(void)

bool FUN_148a93a3c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a93a87;
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
LAB_148a93a87:
  return lVar6 == param_2;
}



// FUNCTION 148a93ab2 FUN_148a93ab2 body=118 status=ok
// SIG undefined FUN_148a93ab2(void)

void FUN_148a93ab2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed590;
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



// FUNCTION 148a93b28 FUN_148a93b28 body=156 status=ok
// SIG undefined FUN_148a93b28(void)

void FUN_148a93b28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed590;
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
                    /* WARNING: Could not recover jumptable at 0x000148a93bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a93bc4 FUN_148a93bc4 body=104 status=ok
// SIG undefined FUN_148a93bc4(void)

void FUN_148a93bc4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a93c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a93c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a93c2c FUN_148a93c2c body=68 status=ok
// SIG undefined FUN_148a93c2c(void)

undefined8 * FUN_148a93c2c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed620;
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



// FUNCTION 148a93c74 FUN_148a93c74 body=81 status=ok
// SIG undefined FUN_148a93c74(void)

undefined8 FUN_148a93c74(longlong param_1)

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



// FUNCTION 148a93ccc FUN_148a93ccc body=89 status=ok
// SIG undefined FUN_148a93ccc(void)

bool FUN_148a93ccc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a93d17;
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
LAB_148a93d17:
  return lVar6 == param_2;
}



// FUNCTION 148a93d42 FUN_148a93d42 body=118 status=ok
// SIG undefined FUN_148a93d42(void)

void FUN_148a93d42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eccc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed620;
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



// FUNCTION 148a93db8 FUN_148a93db8 body=156 status=ok
// SIG undefined FUN_148a93db8(void)

void FUN_148a93db8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4eccc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed620;
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
                    /* WARNING: Could not recover jumptable at 0x000148a93e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a93e54 FUN_148a93e54 body=104 status=ok
// SIG undefined FUN_148a93e54(void)

void FUN_148a93e54(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a93ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a93eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a93ebc FUN_148a93ebc body=351 status=ok
// SIG undefined FUN_148a93ebc(void)

undefined8 *
FUN_148a93ebc(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_148a93f1d:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_148a93f1d;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_148a94022(uVar6,&local_58,&local_68,param_4);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148a94022 FUN_148a94022 body=158 status=ok
// SIG undefined FUN_148a94022(void)

undefined8 *
FUN_148a94022(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_14b4ed760;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14114e6dc(param_1 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  param_1[3] = lVar4;
  *param_1 = &PTR_FUN_14b4ed6f0;
  param_1[4] = *param_2;
  lVar3 = param_2[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



// FUNCTION 148a940c0 FUN_148a940c0 body=83 status=ok
// SIG undefined FUN_148a940c0(void)

undefined8 * FUN_148a940c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed6f0;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14b4ed760;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a94118 FUN_148a94118 body=81 status=ok
// SIG undefined FUN_148a94118(void)

undefined8 FUN_148a94118(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 148a94170 FUN_148a94170 body=89 status=ok
// SIG undefined FUN_148a94170(void)

bool FUN_148a94170(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148a941bb;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148a941bb:
  return lVar6 == param_2;
}



// FUNCTION 148a941f2 FUN_148a941f2 body=64 status=ok
// SIG undefined FUN_148a941f2(void)

void FUN_148a941f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_148a944a0(*param_2,param_1);
  return;
}



// FUNCTION 148a94232 FUN_148a94232 body=64 status=ok
// SIG undefined FUN_148a94232(void)

void FUN_148a94232(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_148a944a0(*param_2,param_1);
  return;
}



// FUNCTION 148a94272 FUN_148a94272 body=98 status=ok
// SIG undefined FUN_148a94272(void)

void FUN_148a94272(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_148a944a0(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a942c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a942d4 FUN_148a942d4 body=234 status=ok
// SIG undefined FUN_148a942d4(void)

void FUN_148a942d4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_148a9432d;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_148a9432d:
  pcVar3 = *(code **)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x38);
  local_58 = 0;
  local_50 = 0;
  FUN_14114e6dc(&local_58,param_1 + 8);
  local_68 = &local_58;
  (*pcVar3)(iVar6 + lVar8,param_2,param_3,param_4);
  if (!bVar4) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a943c0 FUN_148a943c0 body=220 status=ok
// SIG undefined FUN_148a943c0(void)

ulonglong FUN_148a943c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_148a94471:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_148a94471;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x30);
      iVar7 = *(int *)(param_1 + 0x38);
      local_58 = 0;
      local_50 = 0;
      FUN_14114e6dc(&local_58,param_1 + 8);
      local_68 = &local_58;
      (*pcVar5)(lVar4 + iVar7,param_2,param_3,param_4);
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148a944a0 FUN_148a944a0 body=111 status=ok
// SIG undefined FUN_148a944a0(void)

undefined8 * FUN_148a944a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b4ed760;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14114e6dc(param_1 + 1,param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b4ed6f0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  return param_1;
}



// FUNCTION 148a94510 FUN_148a94510 body=64 status=ok
// SIG undefined FUN_148a94510(void)

undefined8 * FUN_148a94510(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed7d0;
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



// FUNCTION 148a94554 FUN_148a94554 body=81 status=ok
// SIG undefined FUN_148a94554(void)

undefined8 FUN_148a94554(longlong param_1)

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



// FUNCTION 148a945ac FUN_148a945ac body=89 status=ok
// SIG undefined FUN_148a945ac(void)

bool FUN_148a945ac(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a945f7;
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
LAB_148a945f7:
  return lVar6 == param_2;
}



// FUNCTION 148a94622 FUN_148a94622 body=118 status=ok
// SIG undefined FUN_148a94622(void)

void FUN_148a94622(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edf20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed7d0;
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



// FUNCTION 148a94698 FUN_148a94698 body=118 status=ok
// SIG undefined FUN_148a94698(void)

void FUN_148a94698(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edf20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed7d0;
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



// FUNCTION 148a9470e FUN_148a9470e body=156 status=ok
// SIG undefined FUN_148a9470e(void)

void FUN_148a9470e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edf20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed7d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a9479a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a947aa FUN_148a947aa body=104 status=ok
// SIG undefined FUN_148a947aa(void)

void FUN_148a947aa(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a947f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a94808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a94812 FUN_148a94812 body=101 status=ok
// SIG undefined FUN_148a94812(void)

ulonglong FUN_148a94812(longlong param_1)

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
LAB_148a9486c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a9486c;
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



// FUNCTION 148a94878 FUN_148a94878 body=158 status=ok
// SIG undefined FUN_148a94878(void)

undefined8 *
FUN_148a94878(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_14b4ed8b0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14114e6dc(param_1 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  param_1[3] = lVar4;
  *param_1 = &PTR_FUN_14b4ed840;
  param_1[4] = *param_2;
  lVar3 = param_2[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



// FUNCTION 148a94916 FUN_148a94916 body=83 status=ok
// SIG undefined FUN_148a94916(void)

undefined8 * FUN_148a94916(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed840;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14b4ed8b0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a9496e FUN_148a9496e body=81 status=ok
// SIG undefined FUN_148a9496e(void)

undefined8 FUN_148a9496e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 148a949c6 FUN_148a949c6 body=89 status=ok
// SIG undefined FUN_148a949c6(void)

bool FUN_148a949c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148a94a11;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148a94a11:
  return lVar6 == param_2;
}



// FUNCTION 148a94a48 FUN_148a94a48 body=64 status=ok
// SIG undefined FUN_148a94a48(void)

void FUN_148a94a48(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_148a94cd4(*param_2,param_1);
  return;
}



// FUNCTION 148a94a88 FUN_148a94a88 body=64 status=ok
// SIG undefined FUN_148a94a88(void)

void FUN_148a94a88(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_148a94cd4(*param_2,param_1);
  return;
}



// FUNCTION 148a94ac8 FUN_148a94ac8 body=98 status=ok
// SIG undefined FUN_148a94ac8(void)

void FUN_148a94ac8(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_148a94cd4(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a94b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a94b2a FUN_148a94b2a body=218 status=ok
// SIG undefined FUN_148a94b2a(void)

void FUN_148a94b2a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_148a94b7d;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_148a94b7d:
  pcVar3 = *(code **)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x38);
  local_50 = 0;
  local_48 = 0;
  FUN_14114e6dc(&local_50,param_1 + 8);
  (*pcVar3)(iVar6 + lVar8,param_2,param_3,&local_50);
  if (!bVar4) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a94c06 FUN_148a94c06 body=202 status=ok
// SIG undefined FUN_148a94c06(void)

ulonglong FUN_148a94c06(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_148a94ca7:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_148a94ca7;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x30);
      iVar7 = *(int *)(param_1 + 0x38);
      local_50 = 0;
      local_48 = 0;
      FUN_14114e6dc(&local_50,param_1 + 8);
      (*pcVar5)(lVar4 + iVar7,param_2,param_3,&local_50);
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148a94cd4 FUN_148a94cd4 body=111 status=ok
// SIG undefined FUN_148a94cd4(void)

undefined8 * FUN_148a94cd4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b4ed8b0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14114e6dc(param_1 + 1,param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b4ed840;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  return param_1;
}



// FUNCTION 148a94d43 FUN_148a94d43 body=172 status=ok
// SIG undefined FUN_148a94d43(void)

undefined8 *
FUN_148a94d43(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4ed920;
  local_40 = *param_4;
  local_48 = &local_40;
  *param_4 = 0;
  local_38 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_148a805dc(puVar1 + 2,*param_1,*param_2,*param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a94dfa FUN_148a94dfa body=29 status=ok
// SIG undefined FUN_148a94dfa(void)

undefined8 FUN_148a94dfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a94e18 FUN_148a94e18 body=167 status=ok
// SIG undefined FUN_148a94e18(void)

void FUN_148a94e18(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148a94e93;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148a94e93;
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
LAB_148a94e93:
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
                    /* WARNING: Could not recover jumptable at 0x000148a94eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148a94ec0 FUN_148a94ec0 body=64 status=ok
// SIG undefined FUN_148a94ec0(void)

undefined8 * FUN_148a94ec0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed940;
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



// FUNCTION 148a94f04 FUN_148a94f04 body=81 status=ok
// SIG undefined FUN_148a94f04(void)

undefined8 FUN_148a94f04(longlong param_1)

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



// FUNCTION 148a94f5c FUN_148a94f5c body=89 status=ok
// SIG undefined FUN_148a94f5c(void)

bool FUN_148a94f5c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a94fa7;
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
LAB_148a94fa7:
  return lVar6 == param_2;
}



// FUNCTION 148a94fd2 FUN_148a94fd2 body=118 status=ok
// SIG undefined FUN_148a94fd2(void)

void FUN_148a94fd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edc60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed940;
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



// FUNCTION 148a95048 FUN_148a95048 body=118 status=ok
// SIG undefined FUN_148a95048(void)

void FUN_148a95048(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edc60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed940;
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



// FUNCTION 148a950be FUN_148a950be body=156 status=ok
// SIG undefined FUN_148a950be(void)

void FUN_148a950be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edc60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed940;
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
                    /* WARNING: Could not recover jumptable at 0x000148a9514a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a9515a FUN_148a9515a body=104 status=ok
// SIG undefined FUN_148a9515a(void)

void FUN_148a9515a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a951a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a951b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a951c2 FUN_148a951c2 body=101 status=ok
// SIG undefined FUN_148a951c2(void)

ulonglong FUN_148a951c2(longlong param_1)

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
LAB_148a9521c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a9521c;
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



// FUNCTION 148a95228 FUN_148a95228 body=225 status=ok
// SIG undefined FUN_148a95228(void)

undefined8 *
FUN_148a95228(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 *local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b4eb7c0;
  local_60 = *param_5;
  *param_5 = 0;
  local_58 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  uVar1 = *param_4;
  uVar3 = *param_3;
  uVar2 = *param_2;
  local_50 = 0;
  local_48 = 0;
  FUN_14594ec66(&local_50,&local_60);
  local_78 = uVar1;
  local_70 = &local_50;
  FUN_146006b6e(param_1 + 2,uVar2,uVar3,2);
  param_1[2] = &PTR_FUN_14b4e85f0;
  param_1[6] = &PTR_LAB_14b4e8690;
  FUN_1449db362(&local_60);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a9530a FUN_148a9530a body=64 status=ok
// SIG undefined FUN_148a9530a(void)

undefined8 * FUN_148a9530a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4eda20;
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



// FUNCTION 148a9534e FUN_148a9534e body=81 status=ok
// SIG undefined FUN_148a9534e(void)

undefined8 FUN_148a9534e(longlong param_1)

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



// FUNCTION 148a953a6 FUN_148a953a6 body=89 status=ok
// SIG undefined FUN_148a953a6(void)

bool FUN_148a953a6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a953f1;
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
LAB_148a953f1:
  return lVar6 == param_2;
}



// FUNCTION 148a9541c FUN_148a9541c body=118 status=ok
// SIG undefined FUN_148a9541c(void)

void FUN_148a9541c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eda20;
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



// FUNCTION 148a95492 FUN_148a95492 body=118 status=ok
// SIG undefined FUN_148a95492(void)

void FUN_148a95492(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eda20;
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



// FUNCTION 148a95508 FUN_148a95508 body=156 status=ok
// SIG undefined FUN_148a95508(void)

void FUN_148a95508(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4eda20;
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
                    /* WARNING: Could not recover jumptable at 0x000148a95594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a955a4 FUN_148a955a4 body=104 status=ok
// SIG undefined FUN_148a955a4(void)

void FUN_148a955a4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a955f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a95602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a9560c FUN_148a9560c body=101 status=ok
// SIG undefined FUN_148a9560c(void)

ulonglong FUN_148a9560c(longlong param_1)

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
LAB_148a95666:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a95666;
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



// FUNCTION 148a95671 FUN_148a95671 body=27 status=ok
// SIG undefined FUN_148a95671(void)

wchar_t * FUN_148a95671(uint param_1)

{
  if (param_1 < 0x1d) {
    return (wchar_t *)(&PTR_u_UnspecifiedError_14b4f3ad8)[param_1];
  }
  return L"EGbxOnlineLoginResult - default ToString";
}



// FUNCTION 148a9568e FUN_148a9568e body=124 status=ok
// SIG undefined FUN_148a9568e(void)

byte FUN_148a9568e(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_38 [38];
  byte local_12;
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
    bVar1 = *(byte *)((longlong)param_1 + 0x24);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,&local_12);
    uVar2 = FUN_140e350f2(param_1);
    lVar3 = FUN_141030f3a(uVar2);
    if (lVar3 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = FUN_1457e1d32(lVar3,(int)param_1[2]);
    }
    bVar1 = local_12 & local_11 & bVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a9570c FUN_148a9570c body=29 status=ok
// SIG undefined FUN_148a9570c(void)

undefined8 FUN_148a9570c(longlong param_1,undefined8 param_2)

{
  FUN_140e83cb0(param_1 + 0x88);
  return param_2;
}



// FUNCTION 148a9572a FUN_148a9572a body=64 status=ok
// SIG undefined FUN_148a9572a(void)

void FUN_148a9572a(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x14) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x14) = param_2;
  FUN_1459703e8();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_140e350f2(param_1);
  FUN_148a9aee0(uVar2,uVar1,param_2);
  return;
}



// FUNCTION 148a9576a FUN_148a9576a body=14 status=ok
// SIG undefined FUN_148a9576a(void)

void FUN_148a9576a(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x20) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x20) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a95778 FUN_148a95778 body=200 status=ok
// SIG undefined FUN_148a95778(void)

ulonglong FUN_148a95778(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RBX;
  bool bVar7;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  longlong *local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = '\0';
  local_30 = *(longlong **)(param_2 + 0x10);
  if (local_30 == (longlong *)0x0) {
LAB_148a957b4:
    local_30 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) goto LAB_148a957b4;
      LOCK();
      iVar5 = (int)local_30[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
  }
  local_38 = 0;
  if (local_30 != (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_2 + 8);
  }
  FUN_140b6d1a4(param_1 + 0x28,local_3c,&local_38,&local_21);
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
  cVar4 = local_21;
  if (local_21 == '\0') {
    FUN_1459703e8(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar4) ^ 1) & 0xffffffff;
}



// FUNCTION 148a95842 FUN_148a95842 body=140 status=ok
// SIG undefined FUN_148a95842(void)

bool FUN_148a95842(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(longlong *)(param_2 + 0x10);
  if (local_20 == 0) {
LAB_148a95878:
    local_20 = 0;
  }
  else {
    iVar2 = *(int *)(local_20 + 8);
    do {
      if (iVar2 == 0) goto LAB_148a95878;
      LOCK();
      iVar1 = *(int *)(local_20 + 8);
      bVar3 = iVar2 == iVar1;
      if (bVar3) {
        *(int *)(local_20 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar3);
  }
  local_28 = 0;
  if (local_20 != 0) {
    local_28 = *(undefined8 *)(param_2 + 8);
  }
  iVar2 = FUN_1459b6cd8(param_1 + 0x28);
  if (0 < iVar2) {
    FUN_1459703e8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < iVar2;
}



// FUNCTION 148a958d0 FUN_148a958d0 body=14 status=ok
// SIG undefined FUN_148a958d0(void)

void FUN_148a958d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x23) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x23) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a958de FUN_148a958de body=108 status=ok
// SIG undefined FUN_148a958de(void)

void FUN_148a958de(longlong *param_1,char param_2)

{
  undefined1 auStack_48 [38];
  undefined1 local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)((longlong)param_1 + 0x27) == '\0') ||
     (*(char *)((longlong)param_1 + 0x26) != param_2)) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_22);
    if (local_21 == '\x01') {
      *(char *)((longlong)param_1 + 0x26) = param_2;
      *(undefined1 *)((longlong)param_1 + 0x27) = 1;
      FUN_1459703e8(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a9594c FUN_148a9594c body=14 status=ok
// SIG undefined FUN_148a9594c(void)

void FUN_148a9594c(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x78) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x78) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a9595a FUN_148a9595a body=39 status=ok
// SIG undefined FUN_148a9595a(void)

void FUN_148a9595a(longlong param_1,float param_2)

{
  if (ABS(param_2 - *(float *)(param_1 + 0x7c)) <= 1e-08) {
    return;
  }
  *(float *)(param_1 + 0x7c) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a95982 FUN_148a95982 body=20 status=ok
// SIG undefined FUN_148a95982(void)

void FUN_148a95982(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x80) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x80) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a95996 FUN_148a95996 body=20 status=ok
// SIG undefined FUN_148a95996(void)

void FUN_148a95996(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x81) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x81) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a959aa FUN_148a959aa body=20 status=ok
// SIG undefined FUN_148a959aa(void)

void FUN_148a959aa(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x82) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x82) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a959be FUN_148a959be body=20 status=ok
// SIG undefined FUN_148a959be(void)

void FUN_148a959be(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x83) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x83) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a959d2 FUN_148a959d2 body=20 status=ok
// SIG undefined FUN_148a959d2(void)

void FUN_148a959d2(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x84) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x84) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148a959e6 FUN_148a959e6 body=234 status=ok
// SIG undefined FUN_148a959e6(void)

void FUN_148a959e6(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_2;
  local_70 = *(undefined4 *)(param_2 + 1);
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_14282d1cc(&local_68);
  if ((int)uStack_60 - local_34 == *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xbc)) {
    cVar1 = FUN_1468fdee0(&local_68,param_1 + 0x88);
    if (cVar1 != '\0') goto LAB_148a95a8c;
  }
  FUN_146b3e088(param_1 + 0x88,&local_68);
  FUN_1459703e8(param_1);
LAB_148a95a8c:
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a95ad2 FUN_148a95ad2 body=73 status=ok
// SIG undefined FUN_148a95ad2(void)

void FUN_148a95ad2(longlong param_1,int param_2)

{
  char cVar1;
  
  if (DAT_14c872bf0 == '\0') {
    cVar1 = FUN_140b3f358();
    if (((cVar1 == '\0') && ((DAT_14c872bf2 & 1) == 0)) && (*(int *)(param_1 + 0xd8) != param_2)) {
      *(int *)(param_1 + 0xd8) = param_2;
      FUN_1459703e8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148a95b1c FUN_148a95b1c body=87 status=ok
// SIG undefined FUN_148a95b1c(void)

void FUN_148a95b1c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 == lVar3) {
      uVar1 = FUN_148a95d1e(param_3);
                    /* WARNING: Could not recover jumptable at 0x000148a95b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x3d8))(param_1,uVar1,*(code **)(*param_1 + 0x3d8));
      return;
    }
  }
  return;
}



// FUNCTION 148a95b74 FUN_148a95b74 body=131 status=ok
// SIG undefined FUN_148a95b74(void)

bool FUN_148a95b74(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  param_2 = *(float *)(param_1 + 0x340) - param_2;
  *(float *)(param_1 + 0x340) = param_2;
  if ((param_2 <= 0.0) && (*(char *)(param_1 + 800) == '\x01')) {
    plVar2 = *(longlong **)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_143f374f0(param_1,param_1 + 0x308);
  }
  return 0.0 < param_2;
}



// FUNCTION 148a95c00 FUN_148a95c00 body=131 status=ok
// SIG undefined FUN_148a95c00(void)

void FUN_148a95c00(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_30);
  if (local_30 != 0) {
    FUN_148a7bc7c(local_30,param_2,param_3);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a95c84 FUN_148a95c84 body=129 status=ok
// SIG undefined FUN_148a95c84(void)

ulonglong FUN_148a95c84(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x161));
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a95d06 FUN_148a95d06 body=12 status=ok
// SIG undefined FUN_148a95d06(void)

void FUN_148a95d06(longlong param_1)

{
  FUN_1447f69b6(param_1 + 0x1f8);
  return;
}



// FUNCTION 148a95d12 FUN_148a95d12 body=12 status=ok
// SIG undefined FUN_148a95d12(void)

void FUN_148a95d12(longlong param_1)

{
  FUN_1447f69b6(param_1 + 0x210);
  return;
}



// FUNCTION 148a95d1e FUN_148a95d1e body=266 status=ok
// SIG undefined FUN_148a95d1e(void)

undefined8 FUN_148a95d1e(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined7 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar3 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
    uVar4 = (ulonglong)uVar5;
    uVar6 = *(ushort *)((longlong)&DAT_14b438b8e + lVar3);
    if (uVar5 != uVar6) break;
    if (uVar5 == 0) {
      return 0;
    }
LAB_148a95d59:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148a95d59;
  }
  if (uVar5 == uVar6) {
    return 0;
  }
  lVar3 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
    uVar4 = (ulonglong)uVar5;
    uVar6 = *(ushort *)((longlong)L"CrossPlatformHostDisabledCrossplay" + lVar3);
    uVar2 = (undefined7)((ulonglong)puVar1 >> 8);
    if (uVar5 != uVar6) break;
    if (uVar5 == 0) goto LAB_148a95e20;
LAB_148a95da7:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148a95da7;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_148a95ddc;
  }
LAB_148a95e20:
  return CONCAT71(uVar2,1);
LAB_148a95ddc:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"TeleportFailure" + lVar3);
  if (uVar5 != uVar6) {
    if ((uVar6 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148a95df1;
    }
    if (uVar5 != uVar6) {
      return 0;
    }
LAB_148a95e24:
    return CONCAT71(uVar2,2);
  }
  if (uVar5 == 0) goto LAB_148a95e24;
LAB_148a95df1:
  lVar3 = lVar3 + 2;
  goto LAB_148a95ddc;
}



// FUNCTION 148a95e28 FUN_148a95e28 body=372 status=ok
// SIG undefined FUN_148a95e28(void)

void FUN_148a95e28(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x3a8) == 0) || (*(longlong *)(param_1 + 0x3b0) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x3b0) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar3 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
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
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_14b4efe90;
    local_48[3] = 0;
    FUN_14485c47a(local_48 + 3,param_1);
    puVar3[4] = FUN_143f376f2;
    local_58 = 0x40a00000;
    FUN_1405f67fc(uVar5,&local_38,&local_48,
                  L"UGbxOnlineSessionClient_StartProcessNetworkConnectionStatusChangeTimer");
    *(undefined8 *)(param_1 + 0x3a8) = local_38;
    local_38 = 0;
    plVar2 = *(longlong **)(param_1 + 0x3b0);
    *(longlong **)(param_1 + 0x3b0) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a95f9e FUN_148a95f9e body=86 status=ok
// SIG undefined FUN_148a95f9e(void)

undefined8
FUN_148a95f9e(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = *param_2, lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x180))();
    uVar2 = FUN_140b6db2a(uVar2,lVar1,0,param_3,param_4,param_5);
  }
  return uVar2;
}



// FUNCTION 148a95ff4 FUN_148a95ff4 body=27 status=ok
// SIG undefined FUN_148a95ff4(void)

void FUN_148a95ff4(char param_1)

{
  if (DAT_14cb97608 == param_1) {
    return;
  }
  DAT_14cb97608 = param_1;
  FUN_1447f69b6(&DAT_14cb975f0);
  return;
}



// FUNCTION 148a96010 FUN_148a96010 body=27 status=ok
// SIG undefined FUN_148a96010(void)

void FUN_148a96010(char param_1)

{
  if (DAT_14cb97609 == param_1) {
    return;
  }
  DAT_14cb97609 = param_1;
  FUN_1447f69b6(&DAT_14cb975f0);
  return;
}



// FUNCTION 148a9602b FUN_148a9602b body=43 status=ok
// SIG undefined FUN_148a9602b(void)

wchar_t * FUN_148a9602b(uint param_1)

{
  if (param_1 - 7 < 2) {
    return L"NotAllowed";
  }
  if (param_1 < 0xe) {
    return (wchar_t *)(&PTR_DAT_14b4f3bc0)[param_1];
  }
  return L"";
}



// FUNCTION 148a96056 FUN_148a96056 body=1229 status=ok
// SIG undefined FUN_148a96056(void)

undefined8 FUN_148a96056(undefined8 *param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 0;
    }
LAB_148a96091:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96091;
  }
  if (uVar4 == uVar5) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"MismatchedVersion" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 1;
    }
LAB_148a960e3:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a960e3;
  }
  if (uVar4 == uVar5) {
    return 1;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"MismatchedHotfixVersion" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 2;
    }
LAB_148a96135:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96135;
  }
  if (uVar4 == uVar5) {
    return 2;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"InvalidUser" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 3;
    }
LAB_148a96187:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96187;
  }
  if (uVar4 == uVar5) {
    return 3;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"InParty" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 4;
    }
LAB_148a961d9:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a961d9;
  }
  if (uVar4 == uVar5) {
    return 4;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"PartyFull" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 5;
    }
LAB_148a9622b:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a9622b;
  }
  if (uVar4 == uVar5) {
    return 5;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"NotAllowed" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 6;
    }
LAB_148a9627d:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a9627d;
  }
  if (uVar4 == uVar5) {
    return 6;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"NotAllowed_PrivacyRestricted" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 7;
    }
LAB_148a962cf:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a962cf;
  }
  if (uVar4 == uVar5) {
    return 7;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"NotAllowed_Blocked" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 8;
    }
LAB_148a96321:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96321;
  }
  if (uVar4 == uVar5) {
    return 8;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"PartyCrossplayDisabled" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 9;
    }
LAB_148a96373:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96373;
  }
  if (uVar4 == uVar5) {
    return 9;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"PlayerCrossplayDisabled" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 10;
    }
LAB_148a963e0:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a963e0;
  }
  if (uVar4 == uVar5) {
    return 10;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"SenderNotInParty" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 0xb;
    }
LAB_148a96462:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96462;
  }
  if (uVar4 == uVar5) {
    return 0xb;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"NotEnoughRoom" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 0xc;
    }
LAB_148a964b4:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a964b4;
  }
  if (uVar4 == uVar5) {
    return 0xc;
  }
  lVar2 = 0;
  do {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"NotAcceptingJoins" + lVar2);
    if (uVar4 == uVar5) {
      if (uVar4 == 0) {
        return 0xd;
      }
    }
    else {
      if (0x7f < (uVar5 | uVar4)) {
LAB_148a96512:
        if (uVar4 == uVar5) {
          return 0xd;
        }
        return 0;
      }
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar6]) goto LAB_148a96512;
    }
    lVar2 = lVar2 + 2;
  } while( true );
}



// FUNCTION 148a96523 FUN_148a96523 body=187 status=ok
// SIG undefined FUN_148a96523(void)

undefined8 FUN_148a96523(undefined8 *param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"FriendsOnly" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 1;
    }
LAB_148a9655a:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a9655a;
  }
  if (uVar4 == uVar5) {
    return 1;
  }
  lVar2 = 0;
  do {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"InviteOnly" + lVar2);
    if (uVar4 == uVar5) {
      if (uVar4 == 0) {
        return 2;
      }
    }
    else {
      if (0x7f < (uVar5 | uVar4)) {
LAB_148a965c8:
        if (uVar4 == uVar5) {
          return 2;
        }
        return 0;
      }
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar6]) goto LAB_148a965c8;
    }
    lVar2 = lVar2 + 2;
  } while( true );
}



// FUNCTION 148a965de FUN_148a965de body=631 status=ok
// SIG undefined FUN_148a965de(void)

undefined8 FUN_148a965de(undefined8 *param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"Success" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 0;
    }
LAB_148a96619:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96619;
  }
  if (uVar4 == uVar5) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"RequiresKickingCrossplatformUsers" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 1;
    }
LAB_148a9666b:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a9666b;
  }
  if (uVar4 == uVar5) {
    return 1;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"RequiresLeavingSession" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 2;
    }
LAB_148a966bd:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a966bd;
  }
  if (uVar4 == uVar5) {
    return 2;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"RequestInProgress" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 3;
    }
LAB_148a9670f:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a9670f;
  }
  if (uVar4 == uVar5) {
    return 3;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"CrossplayDisabledInShift" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 4;
    }
LAB_148a96761:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a96761;
  }
  if (uVar4 == uVar5) {
    return 4;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"CrossplayDisabledOnPlatform" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) {
      return 5;
    }
LAB_148a967b3:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148a967b3;
  }
  if (uVar4 == uVar5) {
    return 5;
  }
  lVar2 = 0;
  do {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"UserNotLoggedIn" + lVar2);
    if (uVar4 == uVar5) {
      if (uVar4 == 0) {
        return 6;
      }
    }
    else {
      if (0x7f < (uVar5 | uVar4)) {
LAB_148a96821:
        if (uVar4 == uVar5) {
          return 6;
        }
        return 7;
      }
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar6]) goto LAB_148a96821;
    }
    lVar2 = lVar2 + 2;
  } while( true );
}



// FUNCTION 148a96856 FUN_148a96856 body=173 status=ok
// SIG undefined FUN_148a96856(void)

void FUN_148a96856(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x408) != 0) && (*(longlong *)(param_1 + 0x410) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x410) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x408);
    local_20 = *(longlong *)(param_1 + 0x410);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x410);
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 148a96914 FUN_148a96914 body=417 status=ok
// SIG undefined FUN_148a96914(void)

void FUN_148a96914(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145a3b7bc();
  FUN_146583638(param_1);
  FUN_148a96ac4(param_1);
  FUN_148a96856(param_1);
  if (((*(longlong *)(param_1 + 0x158) != 0) && (*(longlong *)(param_1 + 0x160) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x160) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x158);
    local_20 = *(longlong *)(param_1 + 0x160);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar3 = *(longlong **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
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
  if (((*(longlong *)(param_1 + 0x168) != 0) && (*(longlong *)(param_1 + 0x170) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x170) + 8))) {
    FUN_1401cb356();
    local_38 = *(undefined8 *)(param_1 + 0x168);
    local_30 = *(longlong *)(param_1 + 0x170);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_38);
    plVar3 = *(longlong **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
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
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
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
  FUN_14101cee4(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_145a3b78c(param_1 + 0x70);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a96ac4 FUN_148a96ac4 body=177 status=ok
// SIG undefined FUN_148a96ac4(void)

void FUN_148a96ac4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x418) != 0) && (*(longlong *)(param_1 + 0x420) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x420) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x418);
    local_20 = *(longlong *)(param_1 + 0x420);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x420);
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 148a96b86 FUN_148a96b86 body=238 status=ok
// SIG undefined FUN_148a96b86(void)

void FUN_148a96b86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a9c3c0(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a9cb56(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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



// FUNCTION 148a96c86 FUN_148a96c86 body=166 status=ok
// SIG undefined FUN_148a96c86(void)

undefined8 FUN_148a96c86(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_3 + 0x10))(param_3,&local_38);
  FUN_1446f470e(&local_40,L"SHIFT",1);
  if (local_38 == local_40) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      uVar1 = FUN_148a96d2e(*(longlong *)(param_1 + 0x60),param_2,param_3);
      goto LAB_148a96ce6;
    }
  }
  else if (*(longlong *)(param_1 + 0x120) != 0) {
    uVar1 = FUN_148aaefa0(*(longlong *)(param_1 + 0x120),param_2,param_3);
    goto LAB_148a96ce6;
  }
  uVar1 = 0;
LAB_148a96ce6:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148a96d2e FUN_148a96d2e body=180 status=ok
// SIG undefined FUN_148a96d2e(void)

ulonglong FUN_148a96d2e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_38 + 0x318))(local_38,param_2,param_1[2],param_3);
      param_1 = (longlong *)(ulonglong)uVar3;
      uVar6 = (undefined7)((ulonglong)param_3 >> 8);
      bVar5 = 1;
      goto LAB_148a96d96;
    }
  }
  bVar5 = 0;
  uVar6 = 0;
LAB_148a96d96:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & (byte)param_1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a96de4 FUN_148a96de4 body=627 status=ok
// SIG undefined FUN_148a96de4(void)

longlong * FUN_148a96de4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_146584b16(param_2,0);
  plVar12 = (longlong *)*param_2;
  *plVar12 = *param_3;
  lVar13 = param_3[1];
  plVar12[1] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  local_78 = 0;
  uStack_70 = 0;
  cVar9 = FUN_14101cdd4(*param_3 + 0x20,&DAT_14cb97670);
  if (((cVar9 != '\0') && (1 < (int)uStack_70)) && ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    plVar12 = *(longlong **)(param_1 + 0x70);
    plVar16 = plVar12 + (longlong)*(int *)(param_1 + 0x78) * 2;
    do {
      uVar4 = *(undefined8 *)*param_3;
      plVar5 = (longlong *)((undefined8 *)*param_3)[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar6 = *(undefined8 **)*plVar12;
      plVar7 = (longlong *)((undefined8 *)*plVar12)[1];
      if (plVar7 == (longlong *)0x0) {
        cVar9 = (**(code **)*puVar6)(puVar6,uVar4);
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        cVar9 = (**(code **)*puVar6)();
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
      if (plVar5 != (longlong *)0x0) {
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
      }
      if (cVar9 == '\0') {
        local_88 = 0;
        uStack_80 = 0;
        cVar9 = FUN_14101cdd4(*plVar12 + 0x20,&DAT_14cb97670);
        if (cVar9 != '\0') {
          if ((int)uStack_80 == (int)uStack_70) {
            if (1 < (int)uStack_80) {
              lVar13 = 0;
              while( true ) {
                uVar10 = *(ushort *)(local_88 + lVar13);
                uVar11 = (ulonglong)uVar10;
                uVar14 = *(ushort *)(local_78 + lVar13);
                if (uVar10 != uVar14) break;
                if (uVar10 == 0) goto LAB_148a96fb8;
LAB_148a96f7d:
                lVar13 = lVar13 + 2;
              }
              if ((uVar14 | uVar10) < 0x80) {
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                uVar15 = (ulonglong)uVar14;
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar15]) goto LAB_148a96f7d;
              }
              if (uVar10 != uVar14) goto LAB_148a96fe8;
            }
          }
          else if ((int)uStack_70 + (int)uStack_80 != 1) goto LAB_148a96fe8;
LAB_148a96fb8:
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_146584b16(param_2,iVar3);
          }
          lVar13 = *param_2;
          *(longlong *)(lVar13 + (longlong)iVar3 * 0x10) = *plVar12;
          lVar8 = plVar12[1];
          *(longlong *)(lVar13 + 8 + (longlong)iVar3 * 0x10) = lVar8;
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
        }
LAB_148a96fe8:
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar16);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a97058 FUN_148a97058 body=307 status=ok
// SIG undefined FUN_148a97058(void)

void FUN_148a97058(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f0590;
  plVar1 = plVar3 + 2;
  local_68 = param_5;
  FUN_148a9cd28(plVar1,*param_2,*param_3,*param_4);
  local_60 = plVar1;
  local_58 = plVar3;
  FUN_148a9e3e4(&local_60,plVar1);
  local_50 = plVar1;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a971a6 FUN_148a971a6 body=381 status=ok
// SIG undefined FUN_148a971a6(void)

void FUN_148a971a6(longlong *param_1,longlong param_2)

{
  void *_Src;
  undefined2 *_Src_00;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a96856();
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(param_2 + 0x28);
  lVar3 = (longlong)local_30;
  _Src = *(void **)(param_2 + 0x20);
  if (lVar3 == 0) {
    local_2c = 0;
    puVar1 = &DAT_149dfb77a;
    iVar2 = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 * 2);
    puVar1 = &DAT_149dfb77a;
    iVar2 = local_30;
    if (local_30 != 0) {
      puVar1 = local_38;
    }
  }
  _Src_00 = local_38;
  lVar3 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar3);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)L"unset" + lVar3);
    if (uVar4 != uVar6) {
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_148a97243;
      }
      if (uVar4 != uVar6) {
        local_48 = (void *)0x0;
        uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
        if (iVar2 == 0) {
          uStack_40 = 0;
        }
        else {
          FUN_1446dd670(&local_48,iVar2,0);
          memcpy(local_48,_Src_00,(longlong)iVar2 * 2);
        }
        goto LAB_148a972b1;
      }
      break;
    }
    if (uVar4 == 0) break;
LAB_148a97243:
    lVar3 = lVar3 + 2;
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
LAB_148a972b1:
  (**(code **)(*param_1 + 0xa8))(param_1,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a97324 FUN_148a97324 body=280 status=ok
// SIG undefined FUN_148a97324(void)

void FUN_148a97324(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x408) == 0) || (*(longlong *)(param_1 + 0x410) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x410) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b4f0960;
    local_68[0] = FUN_143f3ecfa;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,L"FGbxParty_QueueKick",0x40a00000);
    *(undefined8 *)(param_1 + 0x408) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x410);
    *(longlong **)(param_1 + 0x410) = local_70;
    local_70 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a9743e FUN_148a9743e body=336 status=ok
// SIG undefined FUN_148a9743e(void)

void FUN_148a9743e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x54) == 3) && (iVar6 = *(int *)(param_1 + 0x480), iVar6 != 0)) {
    local_40 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x478);
    local_38 = iVar6;
    FUN_148aa045a(&local_40,iVar6);
    FUN_148aa04b2(local_40,uVar2,iVar6);
    FUN_148a9c365(*(undefined8 *)(param_1 + 0x478),*(undefined4 *)(param_1 + 0x480));
    *(undefined4 *)(param_1 + 0x480) = 0;
    if (*(int *)(param_1 + 0x484) != 0) {
      FUN_148aa04da(param_1 + 0x478);
    }
    lVar5 = local_40;
    lVar7 = (longlong)local_38;
    iVar6 = 0;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        piVar3 = *(int **)(lVar5 + lVar8);
        if (*piVar3 == 0) {
          plVar4 = *(longlong **)(lVar5 + 8 + lVar8);
          if (plVar4 == (longlong *)0x0) {
            FUN_14160516a(param_1,piVar3 + 2,1);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            FUN_14160516a(param_1,piVar3 + 2,1);
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar4)(plVar4);
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
        lVar8 = lVar8 + 0x10;
        iVar6 = local_38;
      } while (lVar7 * 0x10 != lVar8);
    }
    FUN_148a9c365(local_40,iVar6);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a97590 FUN_148a97590 body=239 status=ok
// SIG undefined FUN_148a97590(void)

undefined8 FUN_148a97590(undefined4 param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  uint7 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = &local_40;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,plVar4);
  local_50[0] = local_40;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_38);
    plVar3 = local_38;
    plVar4 = (longlong *)0x0;
    if (local_38 != (longlong *)0x0) {
      FUN_140056680(local_50,L"default");
      bVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,param_1,*param_2,local_50);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      uVar6 = (uint7)(uint3)((uint)param_1 >> 8);
      bVar5 = 1;
      goto LAB_148a97633;
    }
  }
  bVar2 = (byte)plVar4;
  bVar5 = 0;
  uVar6 = 0;
LAB_148a97633:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & bVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a97680 FUN_148a97680 body=97 status=ok
// SIG undefined FUN_148a97680(void)

undefined8 FUN_148a97680(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar3 = (longlong *)FUN_144a7c8f0();
    lVar2 = plVar3[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *plVar3;
      lVar5 = 0;
      do {
        uVar4 = FUN_148a97590(*(undefined4 *)(*(longlong *)(lVar1 + lVar5) + 0xe0),param_2);
        if ((char)uVar4 != '\0') {
          return uVar4;
        }
        bVar6 = (longlong)(int)lVar2 * 8 + -8 != lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar6);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 148a976e2 FUN_148a976e2 body=725 status=ok
// SIG undefined FUN_148a976e2(void)

ulonglong FUN_148a976e2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined **local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined **local_90;
  longlong *local_88;
  longlong *local_80;
  byte local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_b0);
  local_90 = local_b0;
  plVar6 = (longlong *)FUN_1401e3228();
  if (plVar6 == (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_a8);
    if ((local_a8 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      plVar6 = (longlong *)FUN_144a7c8f0();
      if ((longlong)(int)plVar6[1] != 0) {
        puVar9 = (undefined8 *)*plVar6;
        puVar10 = puVar9 + (int)plVar6[1];
        do {
          (**(code **)(*(longlong *)*puVar9 + 0x350))((longlong *)*puVar9,&local_90);
          if ((&DAT_149fc1b6e)[local_78] == '\x01') {
            local_d8 = local_88;
            if (local_80 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(local_80 + 1) = (int)local_80[1] + 1;
              UNLOCK();
              plVar6 = local_80;
            }
          }
          else {
            plVar6 = (longlong *)0x0;
            local_d8 = (longlong *)0x0;
          }
          local_90 = &PTR_FUN_14a5af930;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          local_90 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])(&local_88);
          if (local_d8 != (longlong *)0x0) {
            local_c8 = (undefined8 *)0x0;
            uStack_c0 = 0;
            (**(code **)(*local_a8 + 0x278))(local_a8,local_d8,&local_c8);
            if ((longlong)(int)uStack_c0 == 0) {
              uVar8 = 0;
              puVar7 = (undefined8 *)0x0;
            }
            else {
              lVar11 = (longlong)(int)uStack_c0 << 4;
              puVar7 = local_c8;
              local_d0 = puVar10;
              do {
                uVar4 = *param_2;
                (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,&local_90);
                uVar5 = (**(code **)*local_90)(local_90,uVar4);
                plVar2 = local_88;
                unaff_RBP = (ulonglong)uVar5;
                if (local_88 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_88 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_88)(local_88);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar2 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                    }
                  }
                }
                if ((char)uVar5 != '\0') goto LAB_148a97906;
                puVar7 = puVar7 + 2;
                lVar11 = lVar11 + -0x10;
              } while (lVar11 != 0);
              puVar7 = (undefined8 *)0x0;
LAB_148a97906:
              uVar8 = uStack_c0 & 0xffffffff;
              puVar10 = local_d0;
            }
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),puVar7 != (undefined8 *)0x0);
            FUN_145cf835c(local_c8,uVar8);
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
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
          if (local_d8 != (longlong *)0x0) goto LAB_148a97955;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar10);
      }
    }
  }
  unaff_RBP = 0;
LAB_148a97955:
  plVar6 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffff01;
}



// FUNCTION 148a979b8 FUN_148a979b8 body=960 status=ok
// SIG undefined FUN_148a979b8(void)

ulonglong FUN_148a979b8(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  wchar_t *_Str;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_118 [36];
  int local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar5 = FUN_1414e62ca();
  if (cVar5 == '\0') {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_e8 = (longlong *)0x0;
    uVar3 = *(uint *)(param_2 + 0x28);
    _Src = *(void **)(param_2 + 0x20);
    plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      plStack_e0 = (longlong *)(ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_e8,uVar3,0);
      memcpy(local_e8,_Src,(longlong)(int)uVar3 * 2);
    }
    FUN_1403de9f2(&local_e8,&local_78,&DAT_149e001d8,1);
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = CONCAT71((int7)((ulonglong)&local_e8 >> 8),(int)uStack_70 == 2);
    if ((int)uStack_70 == 2) {
      if (*(int *)(local_78 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)*local_78;
      }
      iVar7 = _wtoi(_Str);
      local_88 = 0;
      uStack_80 = 0;
      FUN_1403de9f2(local_78 + 2,&local_88,&DAT_149e06196,1);
      FUN_1446f470e(&local_90,L"SHIFT",1);
      local_a0 = local_90;
      plVar8 = (longlong *)FUN_1401e3228();
      if (plVar8 == (longlong *)0x0) {
        local_e8 = (longlong *)0x0;
        plStack_e0 = (longlong *)0x0;
        puVar12 = &DAT_149e25dfc;
      }
      else {
        (**(code **)(*plVar8 + 0x80))(plVar8,&local_e8);
        puVar12 = &DAT_149e25dfc;
        if (local_e8 != (longlong *)0x0) {
          if ((longlong)(int)uStack_80 != 0) {
            lVar9 = (longlong)(int)uStack_80 << 4;
            lVar13 = local_88;
            local_f4 = iVar7;
            local_f0 = param_3;
            bVar11 = false;
            do {
              lVar9 = lVar9 + -0x10;
              (**(code **)(*local_e8 + 0x120))(local_e8,&local_a0,lVar13);
              if (local_a0 == 0) {
LAB_148a97d04:
                bVar4 = 0;
                bVar6 = bVar11;
              }
              else {
                local_b0 = local_a0;
                local_a8 = local_98;
                if (local_98 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_98 + 1) = (int)local_98[1] + 1;
                  UNLOCK();
                }
                cVar5 = (**(code **)(*param_1 + 0x18))(param_1,&local_b0);
                plVar8 = local_a8;
                if (local_a8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_a8 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_a8)(local_a8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar8 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
                bVar4 = 1;
                bVar6 = true;
                if (cVar5 == '\0') goto LAB_148a97d04;
              }
              plVar8 = local_98;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_98 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              lVar13 = lVar13 + 0x10;
              bVar11 = bVar6;
            } while (!(bool)(bVar4 | lVar9 == 0));
            puVar12 = &DAT_149e25dfc;
            param_3 = local_f0;
            iVar7 = local_f4;
            if (bVar6) {
              puVar12 = &DAT_149e0209e;
            }
          }
        }
      }
      plVar8 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_e0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      FUN_140002266(&local_a0,L"%d %s",iVar7,puVar12);
      FUN_1414f3eb8(&local_e8,param_1 + 5,&DAT_14cb97760,&local_a0);
      FUN_1458291a6(param_1,&local_e8,param_3);
      FUN_14119d498(&local_e8);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a1747(local_78,(int)uStack_70);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar10 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 148a97d7a FUN_148a97d7a body=717 status=ok
// SIG undefined FUN_148a97d7a(void)

ulonglong FUN_148a97d7a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  void *_Src;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  wchar_t *_Str;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined4 *local_68;
  longlong *plStack_60;
  void *local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_1414e62ca();
  if (cVar6 == '\0') {
    uVar9 = 0;
  }
  else {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_2 + 0x28);
    lVar8 = (longlong)local_50;
    _Src = *(void **)(param_2 + 0x20);
    if (lVar8 == 0) {
      uStack_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar8 * 2);
    }
    FUN_1403de9f2(&local_58,&local_48,&DAT_149e001d8,1);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar9 = CONCAT71((int7)((ulonglong)&local_58 >> 8),(int)uStack_40 == 2);
    if (((int)uStack_40 == 2) && (*(longlong *)(param_1 + 0x3f8) != 0)) {
      puVar11 = &DAT_149dfb77a;
      _Str = L"";
      if (*(int *)(local_48 + 1) != 0) {
        _Str = (wchar_t *)*local_48;
      }
      iVar7 = _wtoi(_Str);
      if (*(int *)(local_48 + 3) != 0) {
        puVar11 = (undefined2 *)local_48[2];
      }
      lVar8 = 0;
      while( true ) {
        uVar3 = *(ushort *)((longlong)puVar11 + lVar8);
        uVar12 = (uint)uVar3;
        uVar4 = *(ushort *)((longlong)&DAT_149e0209e + lVar8);
        uVar10 = (uint)uVar4;
        if (uVar3 != uVar4) {
          if ((uVar4 | uVar3) < 0x80) {
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148a97e8b;
          }
          iVar13 = uVar12 - uVar10;
          goto LAB_148a97eeb;
        }
        if (uVar3 == 0) break;
LAB_148a97e8b:
        lVar8 = lVar8 + 2;
      }
      iVar13 = 0;
LAB_148a97eeb:
      if (iVar7 == *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x48)) {
        local_68 = (undefined4 *)*param_3;
        plVar5 = (longlong *)param_3[1];
        plStack_60 = plVar5;
        if (plVar5 == (longlong *)0x0) {
          FUN_140b7090e(param_1,&local_58,&local_68);
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          FUN_140b7090e(param_1,&local_58);
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
        if (local_58 != (void *)0x0) {
          lVar8 = *(longlong *)(param_1 + 0x3f8);
          local_68 = (undefined4 *)0x0;
          plStack_60 = (longlong *)0x0;
          FUN_14101cdd4((longlong)local_58 + 0x20,&DAT_14cb97670,&local_68);
          iVar7 = FUN_1411a58b4(lVar8 + 0x50,&local_68);
          if (local_68 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (0 < iVar7) {
            lVar8 = *(longlong *)(param_1 + 0x3f8);
            if (iVar13 == 0) {
              local_68 = &local_6c;
              local_6c = 7;
              FUN_148a9f088(lVar8 + 0xb0);
              FUN_146202492(param_1);
            }
            else if (*(int *)(lVar8 + 0x58) == *(int *)(lVar8 + 0x84)) {
              FUN_143f38760(param_1);
            }
          }
        }
        plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
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
    }
    FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a98048 FUN_148a98048 body=72 status=ok
// SIG undefined FUN_148a98048(void)

void FUN_148a98048(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1416496fc();
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148a98085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a98090 FUN_148a98090 body=904 status=ok
// SIG undefined FUN_148a98090(void)

void FUN_148a98090(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  if (param_3 == 0) {
    if (param_1[0x24] != 0) {
      FUN_148aaeca2(param_1[0x24],param_2);
    }
    goto LAB_148a98305;
  }
  FUN_1413f46f8(&local_78,param_2);
  if (local_78 == (longlong *)0x0) {
    local_60 = param_1 + 0x87;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[0x8a] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_58;
    uVar7 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = local_60;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a0 = param_1 + 0x85;
    if (local_88._4_4_ < (int)local_60[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar4 = *local_a0;
        puVar5 = *(undefined8 **)(lVar4 + 0x10 + (longlong)iVar8 * 0x30);
        if (*(int *)((longlong)puVar5 + 0x14) == 0) {
          local_68 = (longlong *)*puVar5;
          plVar6 = (longlong *)puVar5[1];
          local_60 = plVar6;
          if (plVar6 == (longlong *)0x0) {
            iVar9 = FUN_145ce2ae6(local_68,&local_68);
            plVar1 = local_70;
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            local_a4 = param_3;
            iVar9 = FUN_145ce2ae6(local_68,&local_68);
            param_3 = local_a4;
            plVar1 = local_70;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar6 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                param_3 = local_a4;
                plVar1 = local_70;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                  param_3 = local_a4;
                  plVar1 = local_70;
                }
              }
            }
          }
          local_70 = plVar1;
          if (iVar9 == -1) {
            puVar5 = *(undefined8 **)((longlong)iVar8 * 0x30 + lVar4 + 0x10);
            local_78 = (longlong *)*puVar5;
            plVar6 = (longlong *)puVar5[1];
            if (plVar6 == (longlong *)0x0) {
              uVar7 = local_88;
              if (plVar1 == (longlong *)0x0) break;
              local_70 = (longlong *)0x0;
LAB_148a9827a:
              LOCK();
              plVar3 = plVar1 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
              uVar7 = local_88;
              if (plVar6 == (longlong *)0x0) break;
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              if (plVar6 == plVar1) {
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
              else {
                local_70 = plVar6;
                if (plVar1 != (longlong *)0x0) goto LAB_148a9827a;
              }
            }
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            uVar7 = local_88;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              uVar7 = local_88;
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                uVar7 = local_88;
              }
            }
            break;
          }
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
    local_88 = uVar7;
    if (local_78 != (longlong *)0x0) goto LAB_148a98341;
  }
  else {
LAB_148a98341:
    plVar6 = local_70;
    local_98 = local_70;
    local_a0 = local_78;
    if (local_70 == (longlong *)0x0) {
      FUN_1461bd540(param_1,&local_a0,2);
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      FUN_1461bd540(param_1,&local_a0,2);
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
  }
  plVar6 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_148a98305:
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a9841a FUN_148a9841a body=215 status=ok
// SIG undefined FUN_148a9841a(void)

void FUN_148a9841a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_149e06450;
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
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_14b4f11f0;
    local_38[3] = param_1;
    FUN_148a984f2(lVar1,param_2,0,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a984f2 FUN_148a984f2 body=369 status=ok
// SIG undefined FUN_148a984f2(void)

void FUN_148a984f2(longlong param_1,int param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x50) == param_2) {
    if (((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,1);
    }
  }
  else {
    *(int *)(param_1 + 0x50) = param_2;
    local_98 = 0;
    local_90 = 0;
    local_a0 = param_1;
    FUN_14114e6dc(&local_98,param_4);
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    local_80 = 3;
    *local_88 = &PTR_LAB_149e06450;
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
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_14b4f1bf0;
    local_88[3] = local_a0;
    local_88[4] = local_98;
    local_98 = 0;
    *(undefined4 *)(local_88 + 5) = local_90;
    local_90 = 0;
    local_68 = 0;
    local_58 = &PTR_LAB_14b4f1c60;
    local_78[0] = &LAB_143f41de4;
    local_50 = param_1;
    FUN_145c66056(param_1,local_78,param_3,&local_88);
    FUN_1449db362(&local_98);
  }
  FUN_1449db362(param_4);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a98664 FUN_148a98664 body=26 status=ok
// SIG undefined FUN_148a98664(void)

void FUN_148a98664(longlong *param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  wchar_t *pwVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_f8 [32];
  longlong *plStack_d8;
  int iStack_d0;
  longlong alStack_c8 [4];
  longlong lStack_a8;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong lStack_60;
  longlong *plStack_58;
  int *piStack_50;
  int iStack_48;
  ulonglong uStack_40;
  
  if (*(int *)((longlong)param_1 + 0x54) != 3) {
                    /* WARNING: Could not recover jumptable at 0x000148a9867b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2,0xe);
    return;
  }
  uVar11 = param_2 & 0xffffffff;
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[0x7c] != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_40 ^ (ulonglong)auStack_f8);
  }
  *(int *)(param_1 + 0x7c) = (int)param_2;
  FUN_1413f46f8(&plStack_90);
  if (plStack_90 == (longlong *)0x0) {
    iVar14 = 0xe;
  }
  else {
    cVar4 = FUN_1414e62ca(param_1);
    plVar10 = plStack_88;
    if (cVar4 == '\0') {
      pwVar5 = L"Disabled";
      if (param_3 != 0) {
        pwVar5 = L"";
      }
      pwVar8 = L"Enabled";
      if (param_3 != 1) {
        pwVar8 = pwVar5;
      }
      FUN_140056680(&piStack_50,pwVar8);
      (**(code **)(*plStack_90 + 0x30))(plStack_90,&plStack_70);
      plVar10 = (longlong *)&DAT_149dfb77a;
      if ((int)plStack_68 != 0) {
        plVar10 = plStack_70;
      }
      piVar9 = (int *)&DAT_149dfb77a;
      if (iStack_48 != 0) {
        piVar9 = piStack_50;
      }
      FUN_140002266(&lStack_60,L"%s %s",piVar9,plVar10);
      FUN_1414f3eb8(alStack_c8,param_1 + 5,&DAT_14cb976d0);
      if (lStack_60 != 0) {
        FUN_1400020a8();
      }
      if (plStack_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar14 = (int)param_1[0xf];
      if ((longlong)iVar14 == 0) {
LAB_143f3a13b:
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar3 = param_1[0xe];
        plVar10 = (longlong *)0x0;
        lVar12 = 0;
        uVar6 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar3 + lVar12) + 0x18) != '\0') {
            if (iVar14 <= (int)uVar6 || (int)uVar6 < 0) goto LAB_143f3a13b;
            lVar12 = (ulonglong)(uVar6 & 0x7fffffff) * 0x10;
            plVar13 = *(longlong **)(lVar3 + lVar12);
            plVar10 = *(longlong **)(lVar3 + 8 + lVar12);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_14155fbfe(param_1,CONCAT71((int7)(int3)((uint)iVar14 >> 8),1));
              lStack_60 = *plVar13;
              plVar13 = (longlong *)plVar13[1];
              if (plVar13 == (longlong *)0x0) {
                plStack_58 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                plStack_58 = plVar13;
              }
              FUN_1458291a6(param_1,alStack_c8,&lStack_60);
              plVar1 = plStack_58;
              if (plStack_58 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_58 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_58)(plStack_58);
                  LOCK();
                  piVar9 = (int *)((longlong)plVar1 + 0xc);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (*piVar9 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar13 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar9 = (int *)((longlong)plVar13 + 0xc);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (*piVar9 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
              goto LAB_143f3a14d;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar14 << 4 != lVar12);
      }
      FUN_148a98090(param_1,uVar11,0xe);
LAB_143f3a14d:
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar10 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar9 = (int *)((longlong)plVar10 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (lStack_a8 != 0) {
        FUN_1400020a8();
      }
      if (alStack_c8[2] != 0) {
        FUN_1400020a8();
      }
      if (alStack_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (piStack_50 != (int *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f3a1ae;
    }
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
      UNLOCK();
    }
    alStack_c8[0] = 0;
    alStack_c8[1] = 0;
    iVar14 = (int)param_1[0xf];
    if ((longlong)iVar14 == 0) {
LAB_143f39faa:
      plVar13 = (longlong *)0x0;
    }
    else {
      lVar3 = param_1[0xe];
      plVar13 = (longlong *)0x0;
      lVar12 = 0;
      uVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar3 + lVar12) + 0x18) != '\0') {
          if (iVar14 <= (int)uVar6 || (int)uVar6 < 0) goto LAB_143f39faa;
          lVar7 = (ulonglong)(uVar6 & 0x7fffffff) * 0x10;
          lVar12 = *(longlong *)(lVar3 + lVar7);
          plVar13 = *(longlong **)(lVar3 + 8 + lVar7);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          if (lVar12 != 0) {
            FUN_14101cdd4(lVar12 + 0x20,&DAT_14cb977e0,alStack_c8);
          }
          break;
        }
        uVar6 = uVar6 + 1;
        lVar12 = lVar12 + 0x10;
      } while ((longlong)iVar14 << 4 != lVar12);
    }
    FUN_140056680(&lStack_60,L"SplitscreenJoinBypass");
    plStack_70 = plStack_90;
    plStack_68 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plStack_d8 = &lStack_60;
    iStack_d0 = param_3;
    FUN_14625a34a(param_1,&piStack_50,&plStack_70,alStack_c8);
    if (lStack_60 != 0) {
      FUN_1400020a8();
    }
    if (iStack_48 < 1) {
switchD_143f3a042_caseD_0:
      iVar14 = 0;
      if (plStack_90 != (longlong *)0x0) {
        pwVar5 = L"";
        if (param_3 == 0) {
          pwVar5 = L"Disabled";
        }
        pwVar8 = L"Enabled";
        if (param_3 != 1) {
          pwVar8 = pwVar5;
        }
        FUN_140056680(&lStack_60,pwVar8);
        plStack_80 = plStack_90;
        plStack_78 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        plStack_d8 = (longlong *)CONCAT71(plStack_d8._1_7_,1);
        FUN_148a98048(param_1,&plStack_80,alStack_c8,&lStack_60);
        if (lStack_60 != 0) {
          FUN_1400020a8();
        }
        FUN_145c7d76c(param_1);
      }
    }
    else {
      iVar14 = *piStack_50;
      switch(iVar14) {
      case 0:
        goto switchD_143f3a042_caseD_0;
      case 1:
        iVar14 = 5;
        break;
      case 2:
        iVar14 = 6;
        break;
      case 3:
        iVar14 = 7;
        break;
      case 4:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        break;
      case 5:
        iVar14 = 1;
        break;
      case 6:
      case 7:
      case 8:
        iVar14 = 8;
        break;
      default:
        iVar14 = 0xe;
      }
    }
    if (piStack_50 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar9 = (int *)((longlong)plVar13 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (alStack_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar9 = (int *)((longlong)plVar10 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (iVar14 == 0) {
      FUN_143f395c2(param_1,uVar11);
      goto LAB_143f3a1ae;
    }
  }
  FUN_148a98090(param_1,uVar11,iVar14);
LAB_143f3a1ae:
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_88 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar9 = (int *)((longlong)plStack_88 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
      }
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a9867e FUN_148a9867e body=811 status=ok
// SIG undefined FUN_148a9867e(void)

ulonglong FUN_148a9867e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  uVar4 = *(uint *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    plStack_50 = (longlong *)(ulonglong)uVar4;
  }
  else {
    FUN_1446dd670(&local_58,uVar4,0);
    memcpy(local_58,_Src,(longlong)(int)uVar4 * 2);
  }
  FUN_140056680(&local_68,&DAT_149e001d8);
  local_80 = 0;
  local_88 = 1;
  cVar6 = FUN_1407cdbc6(&local_58,&local_68,&local_38,&local_48);
  if ((cVar6 == '\0') || ((int)uStack_30 < 2)) {
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar5 = (int)uStack_40;
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (1 < iVar5) {
      FUN_1446f470e(&local_70,L"SHIFT",1);
      local_68 = local_70;
      plVar7 = (longlong *)FUN_1401e3228();
      if (plVar7 == (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        plStack_50 = (longlong *)0x0;
LAB_148a98858:
        plVar7 = (longlong *)0x0;
        plVar9 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar7 + 0x80))(plVar7,&local_58);
        if (local_58 == (longlong *)0x0) goto LAB_148a98858;
        (**(code **)(*local_58 + 0x120))(local_58,&local_68,&local_38);
        plVar7 = local_60;
        plVar9 = local_68;
      }
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        local_68 = plVar9;
        local_60 = plVar7;
        if (plVar7 == (longlong *)0x0) {
          FUN_140b7090e(param_1,&local_58,&local_68);
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          FUN_140b7090e(param_1,&local_58);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar7 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
        }
        if (local_58 != (longlong *)0x0) {
          local_68 = local_58;
          local_60 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          (**(code **)(*param_1 + 0xb0))(param_1,&local_68,&local_48);
          plVar9 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        }
        param_1 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_50 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)param_1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*param_1 + 0x10))(param_1);
            }
          }
        }
      }
      uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      goto LAB_148a987fc;
    }
  }
  uVar8 = 0;
LAB_148a987fc:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a989aa FUN_148a989aa body=647 status=ok
// SIG undefined FUN_148a989aa(void)

ulonglong FUN_148a989aa(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90;
  longlong *local_88;
  longlong local_60;
  longlong *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 0x28);
  lVar9 = (longlong)local_48;
  _Src = *(void **)(param_2 + 0x20);
  if (lVar9 == 0) {
    local_44 = 0;
  }
  else {
    uVar8 = 0;
    plVar7 = (longlong *)0x0;
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar9 * 2);
    if (local_48 < 2) goto LAB_148a98a9d;
    lVar9 = *param_3;
    if (lVar9 != 0) {
      plVar3 = (longlong *)param_3[1];
      local_90 = lVar9;
      local_88 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        FUN_140b7090e(param_1,&local_60,&local_90);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        FUN_140b7090e(param_1,&local_60);
        plVar7 = plVar3;
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
      uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),local_60 != 0);
      if (local_60 != 0) {
        uVar4 = FUN_145c7dbb1(&local_50);
        plVar7 = local_58;
        local_90 = local_60;
        local_88 = local_58;
        if (local_58 == (longlong *)0x0) {
          uVar5 = FUN_148a992ee(param_1,&local_90,uVar4);
          uVar6 = (ulonglong)uVar5;
        }
        else {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
          uVar5 = FUN_148a992ee(param_1,&local_90,uVar4);
          uVar6 = (ulonglong)uVar5;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar7 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        }
        FUN_140056680(local_a0,(&PTR_u_Success_14b4f3c80)[uVar6]);
        FUN_1414f3eb8(&local_90,param_1 + 0x28,&DAT_14cb97740,local_a0);
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1458291a6(param_1,&local_90,param_3);
        FUN_14119d498(&local_90);
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_58 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      goto LAB_148a98a9d;
    }
  }
  uVar8 = 0;
LAB_148a98a9d:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a98c32 FUN_148a98c32 body=511 status=ok
// SIG undefined FUN_148a98c32(void)

undefined8 FUN_148a98c32(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  void *_Src;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148a96ac4();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 0x28);
    lVar7 = (longlong)local_38;
    _Src = *(void **)(param_2 + 0x20);
    if (lVar7 == 0) {
      local_34 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar7 * 2);
      if (1 < local_38) {
        plVar1 = (longlong *)(param_1 + 8);
        local_50 = (longlong *)0x0;
        local_48 = 0;
        FUN_148a8cba8(&local_50,plVar1);
        if ((*(int *)(param_1 + 0x10) != 0) &&
           (puVar5 = (undefined8 *)*plVar1, puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,0);
          FUN_1446efa72(plVar1,0,0,0x10);
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        iVar6 = FUN_148a965de(&local_40);
        if (iVar6 == 0) {
          uVar4 = *(undefined4 *)(param_1 + 0x1c);
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
          FUN_1413f457a(param_1,&local_60,uVar4);
          plVar1 = local_58;
          if ((local_60 != 0) && (*(int *)(local_60 + 0x14) == 0)) {
            uVar4 = *(undefined4 *)(param_1 + 0x18);
            local_70 = local_60;
            local_68 = local_58;
            if (local_58 == (longlong *)0x0) {
              FUN_143f3acc2(param_1,&local_70,uVar4);
            }
            else {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
              FUN_143f3acc2(param_1,&local_70,uVar4);
              if (plVar1 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar1 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
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
            }
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)local_58 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_58 + 0x10))(local_58);
              }
            }
          }
        }
        if (local_50 != (longlong *)0x0 && local_48 != 0) {
          (**(code **)(*local_50 + 0x60))(local_50,iVar6);
        }
        *(undefined1 *)(param_1 + 0x20) = 0;
        FUN_1449db362(&local_50);
        uVar8 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar8 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a98e32 FUN_148a98e32 body=79 status=ok
// SIG undefined FUN_148a98e32(void)

undefined8 FUN_148a98e32(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_14119d4d6(*(undefined8 *)(param_1 + 0x38));
  if (((lVar3 != 0) && (lVar3 = FUN_14119d510(param_1,*(undefined4 *)(lVar3 + 0xe0)), lVar3 != 0))
     && (puVar1 = *(undefined8 **)(lVar3 + 0x28), puVar1 != (undefined8 *)0x0)) {
    cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148a98e82 FUN_148a98e82 body=139 status=ok
// SIG undefined FUN_148a98e82(void)

void FUN_148a98e82(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  lVar1 = *param_3;
  if (lVar2 == lVar1) {
    return;
  }
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x18) != '\0')) {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x18) == '\0') {
      *(undefined1 *)(lVar2 + 0x18) = 1;
      lVar2 = *param_2;
    }
    if (*(int *)(lVar2 + 0x14) == 0) {
      FUN_148a98f0e(param_1);
    }
  }
  if (param_1[0x24] != 0) {
    FUN_143f48514(param_1[0x24],param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a98f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 148a98f0e FUN_148a98f0e body=267 status=ok
// SIG undefined FUN_148a98f0e(void)

void FUN_148a98f0e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14119d4d6(*(undefined8 *)(param_1 + 0x38));
  if (lVar2 != 0) {
    local_28 = FUN_14119d510(param_1,*(undefined4 *)(lVar2 + 0xe0));
    if (local_28 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,2,0x10);
      local_30 = 2;
      *local_38 = &PTR_LAB_14b4f1990;
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
      local_38[2] = lVar3;
      *local_38 = &PTR_FUN_14b4f1920;
      local_38[3] = param_1;
      local_3c = FUN_14119d564(param_1);
      FUN_148a9901a(uVar1,&local_28,&local_3c,&local_38);
      FUN_1449db362(&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a9901a FUN_148a9901a body=227 status=ok
// SIG undefined FUN_148a9901a(void)

void FUN_148a9901a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a9fbe4(param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148aa03b2(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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



// FUNCTION 148a99110 FUN_148a99110 body=457 status=ok
// SIG undefined FUN_148a99110(void)

void FUN_148a99110(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1413f457a(param_1,&local_40,param_2);
  if (local_40 == 0) {
    plVar6 = (longlong *)*param_4;
    if (plVar6 == (longlong *)0x0 || (int)param_4[1] == 0) goto LAB_148a99189;
    lVar5 = *plVar6;
    uVar7 = 7;
LAB_148a99186:
    (**(code **)(lVar5 + 0x60))(plVar6,uVar7);
  }
  else {
    cVar3 = FUN_1414e62ca(param_1);
    if (cVar3 == '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        plVar6 = (longlong *)*param_4;
        if (plVar6 == (longlong *)0x0 || (int)param_4[1] == 0) goto LAB_148a99189;
        lVar5 = *plVar6;
        uVar7 = 3;
        goto LAB_148a99186;
      }
      FUN_148a8cba8(param_1 + 8,param_4);
      plVar6 = local_38;
      *(undefined4 *)(param_1 + 0x18) = param_3;
      *(undefined4 *)(param_1 + 0x1c) = param_2;
      *(undefined1 *)(param_1 + 0x20) = 1;
      if (local_38 == (longlong *)0x0) {
        FUN_148a993b0(param_1,param_3);
        goto LAB_148a99189;
      }
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      FUN_148a993b0(param_1,param_3);
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_148a99189;
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_148a99189;
      lVar5 = *plVar6;
    }
    else {
      local_50 = local_40;
      local_48 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_148a992ee(param_1,&local_50,param_3);
      plVar6 = (longlong *)*param_4;
      if (plVar6 != (longlong *)0x0 && (int)param_4[1] != 0) {
        (**(code **)(*plVar6 + 0x60))(plVar6,uVar4);
      }
      plVar6 = local_48;
      if (local_48 == (longlong *)0x0) goto LAB_148a99189;
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_148a99189;
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_148a99189;
      lVar5 = *plVar6;
    }
    (**(code **)(lVar5 + 0x10))(plVar6);
  }
LAB_148a99189:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a992ee FUN_148a992ee body=193 status=ok
// SIG undefined FUN_148a992ee(void)

int FUN_148a992ee(undefined8 param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 1) {
    FUN_143f3acc2(param_1,param_2,1);
    iVar2 = 0;
  }
  else {
    iVar2 = 7;
    if (param_3 == 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0,local_38);
      cVar1 = FUN_14625a7e8(param_1,local_38);
      if (cVar1 == '\0') {
        iVar2 = 2 - (uint)(*(int *)(*param_2 + 0x14) == 0);
      }
      else {
        iVar2 = 0;
        FUN_143f3acc2(param_1,param_2,0);
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a993b0 FUN_148a993b0 body=440 status=ok
// SIG undefined FUN_148a993b0(void)

void FUN_148a993b0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    lVar11 = 0;
    uVar8 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar5 + lVar11) + 0x18) != '\0') {
        if ((int)uVar8 < iVar4 && -1 < (int)uVar8) {
          lVar11 = (ulonglong)(uVar8 & 0x7fffffff) * 0x10;
          plVar6 = *(longlong **)(lVar5 + lVar11);
          plVar7 = *(longlong **)(lVar5 + 8 + lVar11);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          if (plVar6 != (longlong *)0x0) {
            FUN_148a9965c(param_1);
            pwVar9 = L"";
            if (param_2 == 0) {
              pwVar9 = L"Disabled";
            }
            pwVar10 = L"Enabled";
            if (param_2 != 1) {
              pwVar10 = pwVar9;
            }
            FUN_140056680(&local_68,pwVar10);
            FUN_1414f3eb8(local_58,param_1 + 0x28,&DAT_14cb97730,&local_68);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            local_68 = *plVar6;
            plVar6 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)0x0) {
              local_60 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              local_60 = plVar6;
            }
            FUN_1458291a6(param_1,local_58,&local_68);
            plVar3 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_60 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar6 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            FUN_14119d498(local_58);
          }
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
        }
        break;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar4 << 4 != lVar11);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a9956a FUN_148a9956a body=224 status=ok
// SIG undefined FUN_148a9956a(void)

void FUN_148a9956a(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413f457a(param_1,&local_30,param_2);
  plVar3 = local_28;
  if (local_30 != 0) {
    local_40 = local_30;
    local_38 = local_28;
    if (local_28 == (longlong *)0x0) {
      FUN_143f3acc2(param_1,&local_40,param_3);
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      FUN_143f3acc2(param_1,&local_40,param_3);
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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



// FUNCTION 148a9965c FUN_148a9965c body=344 status=ok
// SIG undefined FUN_148a9965c(void)

void FUN_148a9965c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x418) == 0) || (*(longlong *)(param_1 + 0x420) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x420) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b4f1b80;
    local_40[3] = param_1;
    local_48 = 0x40a00000;
    FUN_1405f67fc(uVar4,&local_30,&local_40,L"FGbxParty_StartChangeCrossplayRequestFailsafeTimeout")
    ;
    *(undefined8 *)(param_1 + 0x418) = local_30;
    local_30 = 0;
    plVar2 = *(longlong **)(param_1 + 0x420);
    *(longlong **)(param_1 + 0x420) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a997ba FUN_148a997ba body=505 status=ok
// SIG undefined FUN_148a997ba(void)

void FUN_148a997ba(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_58 [2];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < *(int *)(param_3 + 1)) {
    FUN_1413f46f8(&local_38);
    plVar4 = local_30;
    if (local_38 != (longlong *)0x0) {
      local_88 = local_38;
      local_80 = local_30;
      if (local_30 == (longlong *)0x0) {
        FUN_140b7090e(param_1,&local_48,&local_88);
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        FUN_140b7090e(param_1,&local_48);
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
      if ((local_48 != 0) && (*(int *)(local_48 + 0x14) == 0)) {
        puVar3 = &DAT_149dfb77a;
        if (*(int *)(param_3 + 1) != 0) {
          puVar3 = (undefined2 *)*param_3;
        }
        (**(code **)(*local_38 + 0x30))(local_38,&local_88);
        plVar4 = (longlong *)&DAT_149dfb77a;
        if ((int)local_80 != 0) {
          plVar4 = local_88;
        }
        FUN_140002266(local_58,L"%s %s",plVar4,puVar3);
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_1414f3eb8(&local_88,param_1 + 0x28,&DAT_14cb97720,local_58);
        local_98 = 0;
        uStack_90 = 0;
        FUN_1458291a6(param_1,&local_88);
        FUN_14119d498(&local_88);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a999b4 FUN_148a999b4 body=29 status=ok
// SIG undefined FUN_148a999b4(void)

undefined8 FUN_148a999b4(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x360);
  }
  return 0;
}



// FUNCTION 148a999d2 FUN_148a999d2 body=221 status=ok
// SIG undefined FUN_148a999d2(void)

undefined8 FUN_148a999d2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = -1;
  FUN_1446f470e(&local_38,L"CUSTOMSEARCHINT1",1);
  cVar1 = FUN_145e34a52(param_2,local_38,&local_2c);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0x58) == local_2c)) {
    uVar2 = 0;
  }
  else {
    local_60[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_14156954a(local_60);
    local_40 = 0;
    local_3c = 0xffffffff;
    FUN_1446f470e(&local_68,L"CUSTOMSEARCHINT1",1);
    FUN_145b2079c(param_2,local_68,local_60);
    FUN_140c3a2ac(local_60);
    uVar2 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a99ab0 FUN_148a99ab0 body=222 status=ok
// SIG undefined FUN_148a99ab0(void)

void FUN_148a99ab0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar4 = (**(code **)(*local_38 + 0x380))(local_38,param_1[2]);
      if (lVar4 != 0) {
        local_3c = 0xffffffff;
        FUN_1446f470e(&local_48,L"CUSTOMSEARCHINT1",1);
        FUN_145e34a52(lVar4,local_48,&local_3c);
        *(undefined4 *)(param_1 + 0xb) = local_3c;
      }
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a99b98 FUN_148a99b98 body=48 status=ok
// SIG undefined FUN_148a99b98(void)

void FUN_148a99b98(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,2);
  }
  FUN_1449db362(param_3);
  return;
}


