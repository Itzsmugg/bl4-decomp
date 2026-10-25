// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cddd3c FUN_148cddd3c body=93 status=ok
// SIG undefined FUN_148cddd3c(void)

void FUN_148cddd3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95fb30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cddd9a FUN_148cddd9a body=126 status=ok
// SIG undefined FUN_148cddd9a(void)

void FUN_148cddd9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fb30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cdde09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdde26 FUN_148cdde26 body=96 status=ok
// SIG undefined FUN_148cdde26(void)

void FUN_148cdde26(longlong param_1,int param_2)

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



// FUNCTION 148cdde86 FUN_148cdde86 body=31 status=ok
// SIG undefined FUN_148cdde86(void)

undefined8 FUN_148cdde86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cddec2 FUN_148cddec2 body=93 status=ok
// SIG undefined FUN_148cddec2(void)

void FUN_148cddec2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cddf20 FUN_148cddf20 body=93 status=ok
// SIG undefined FUN_148cddf20(void)

void FUN_148cddf20(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cddf7e FUN_148cddf7e body=126 status=ok
// SIG undefined FUN_148cddf7e(void)

void FUN_148cddf7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fc10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cddfed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cde00a FUN_148cde00a body=64 status=ok
// SIG undefined FUN_148cde00a(void)

undefined8 * FUN_148cde00a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b95fc80;
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



// FUNCTION 148cde04e FUN_148cde04e body=81 status=ok
// SIG undefined FUN_148cde04e(void)

undefined8 FUN_148cde04e(longlong param_1)

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



// FUNCTION 148cde0a6 FUN_148cde0a6 body=89 status=ok
// SIG undefined FUN_148cde0a6(void)

bool FUN_148cde0a6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cde0f1;
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
LAB_148cde0f1:
  return lVar6 == param_2;
}



// FUNCTION 148cde11c FUN_148cde11c body=118 status=ok
// SIG undefined FUN_148cde11c(void)

void FUN_148cde11c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fc80;
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



// FUNCTION 148cde192 FUN_148cde192 body=118 status=ok
// SIG undefined FUN_148cde192(void)

void FUN_148cde192(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fc80;
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



// FUNCTION 148cde208 FUN_148cde208 body=156 status=ok
// SIG undefined FUN_148cde208(void)

void FUN_148cde208(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fc80;
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
                    /* WARNING: Could not recover jumptable at 0x000148cde294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cde2a4 FUN_148cde2a4 body=100 status=ok
// SIG undefined FUN_148cde2a4(void)

void FUN_148cde2a4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cde2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cde2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148cde308 FUN_148cde308 body=100 status=ok
// SIG undefined FUN_148cde308(void)

ulonglong FUN_148cde308(longlong param_1)

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
LAB_148cde361:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148cde361;
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



// FUNCTION 148cde36c FUN_148cde36c body=9 status=ok
// SIG undefined FUN_148cde36c(void)

void FUN_148cde36c(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148cde376 FUN_148cde376 body=29 status=ok
// SIG undefined FUN_148cde376(void)

undefined8 FUN_148cde376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cde394 FUN_148cde394 body=38 status=ok
// SIG undefined FUN_148cde394(void)

undefined8 FUN_148cde394(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cde3ba FUN_148cde3ba body=167 status=ok
// SIG undefined FUN_148cde3ba(void)

void FUN_148cde3ba(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148cde435;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148cde435;
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
LAB_148cde435:
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
                    /* WARNING: Could not recover jumptable at 0x000148cde455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148cde462 FUN_148cde462 body=64 status=ok
// SIG undefined FUN_148cde462(void)

undefined8 * FUN_148cde462(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b95fd40;
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



// FUNCTION 148cde4a6 FUN_148cde4a6 body=81 status=ok
// SIG undefined FUN_148cde4a6(void)

undefined8 FUN_148cde4a6(longlong param_1)

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



// FUNCTION 148cde4fe FUN_148cde4fe body=89 status=ok
// SIG undefined FUN_148cde4fe(void)

bool FUN_148cde4fe(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cde549;
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
LAB_148cde549:
  return lVar6 == param_2;
}



// FUNCTION 148cde574 FUN_148cde574 body=118 status=ok
// SIG undefined FUN_148cde574(void)

void FUN_148cde574(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fd40;
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



// FUNCTION 148cde5ea FUN_148cde5ea body=118 status=ok
// SIG undefined FUN_148cde5ea(void)

void FUN_148cde5ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fd40;
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



// FUNCTION 148cde660 FUN_148cde660 body=156 status=ok
// SIG undefined FUN_148cde660(void)

void FUN_148cde660(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fd40;
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
                    /* WARNING: Could not recover jumptable at 0x000148cde6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cde6fc FUN_148cde6fc body=94 status=ok
// SIG undefined FUN_148cde6fc(void)

void FUN_148cde6fc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cde744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cde74f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148cde75a FUN_148cde75a body=93 status=ok
// SIG undefined FUN_148cde75a(void)

ulonglong FUN_148cde75a(longlong param_1)

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
LAB_148cde7ac:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148cde7ac;
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



// FUNCTION 148cde7b8 FUN_148cde7b8 body=64 status=ok
// SIG undefined FUN_148cde7b8(void)

undefined8 * FUN_148cde7b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b95fdb0;
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



// FUNCTION 148cde7fc FUN_148cde7fc body=81 status=ok
// SIG undefined FUN_148cde7fc(void)

undefined8 FUN_148cde7fc(longlong param_1)

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



// FUNCTION 148cde854 FUN_148cde854 body=89 status=ok
// SIG undefined FUN_148cde854(void)

bool FUN_148cde854(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cde89f;
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
LAB_148cde89f:
  return lVar6 == param_2;
}



// FUNCTION 148cde8ca FUN_148cde8ca body=118 status=ok
// SIG undefined FUN_148cde8ca(void)

void FUN_148cde8ca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fdb0;
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



// FUNCTION 148cde940 FUN_148cde940 body=118 status=ok
// SIG undefined FUN_148cde940(void)

void FUN_148cde940(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fdb0;
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



// FUNCTION 148cde9b6 FUN_148cde9b6 body=156 status=ok
// SIG undefined FUN_148cde9b6(void)

void FUN_148cde9b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fdb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cdea42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cdea52 FUN_148cdea52 body=98 status=ok
// SIG undefined FUN_148cdea52(void)

void FUN_148cdea52(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cdea9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cdeaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148cdeab4 FUN_148cdeab4 body=94 status=ok
// SIG undefined FUN_148cdeab4(void)

ulonglong FUN_148cdeab4(longlong param_1)

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
LAB_148cdeb07:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148cdeb07;
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



// FUNCTION 148cdeb12 FUN_148cdeb12 body=241 status=ok
// SIG undefined FUN_148cdeb12(void)

void FUN_148cdeb12(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        uVar3 = FUN_145a89d04();
        lVar4 = FUN_144718840(param_1,uVar3);
        if (lVar4 != 0) {
          uVar3 = FUN_14119d0a4(lVar2);
          uVar5 = FUN_14001cc68(0x48,0x10);
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = *(longlong *)(param_3 + 4);
          if ((local_38 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_148cdec04(uVar5,&local_48,param_2,lVar4);
          FUN_140b1330e(uVar3,*(undefined8 *)(param_3 + 4),param_3[1],uVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_140d97376(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdec04 FUN_148cdec04 body=919 status=ok
// SIG undefined FUN_148cdec04(void)

undefined8 *
FUN_148cdec04(undefined8 *param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_3d8 [40];
  undefined8 local_3b0;
  longlong *local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *param_1 = &PTR_FUN_14b961020;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 5) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  lVar3 = *(longlong *)(param_2 + 4);
  param_1[7] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_148cea364(&local_3a0,param_4);
  *(undefined4 *)(param_1 + 3) = local_3a0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_39c;
  *(undefined4 *)(param_1 + 4) = uStack_398;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_394;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b961040;
  plVar7[2] = (longlong)param_1;
  if (plVar7 == (longlong *)0x0) {
    param_1[1] = 0x10;
    plVar9 = (longlong *)param_1[2];
    if (plVar9 == (longlong *)0x0) goto LAB_148cded57;
    param_1[2] = 0;
LAB_148cdecd6:
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
    if (plVar7 == (longlong *)0x0) goto LAB_148cded57;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    param_1[1] = plVar7 + 2;
    plVar9 = (longlong *)param_1[2];
    if (plVar7 == plVar9) {
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
    else {
      param_1[2] = plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_148cdecd6;
    }
  }
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
LAB_148cded57:
  FUN_144007dae(&local_3a0);
  local_90 = local_90 & 0xffffff00;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_14140cdf2(&local_3a0,param_3);
  local_80 = *(undefined1 *)(param_3 + 800);
  local_90 = *(undefined4 *)(param_3 + 0x310);
  uStack_8c = *(undefined4 *)(param_3 + 0x314);
  uStack_88 = *(undefined4 *)(param_3 + 0x318);
  uStack_84 = *(undefined4 *)(param_3 + 0x31c);
  if (local_78 != *(longlong *)(param_3 + 0x328)) {
    local_68 = 0;
  }
  if (lStack_70 != *(longlong *)(param_3 + 0x330)) {
    local_68 = 0;
  }
  local_78 = *(longlong *)(param_3 + 0x328);
  uVar8 = FUN_14477b664();
  lStack_70 = FUN_14477b664(uVar8);
  local_68 = *(undefined8 *)(param_3 + 0x338);
  local_3b0 = param_1[1];
  plVar7 = (longlong *)param_1[2];
  local_3a8 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_148cea0c8(&local_50,&local_3b0,FUN_148cea1e6);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_148cea0c8(&local_50,&local_3b0,FUN_148cea1e6);
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
  local_3b0 = param_1[1];
  plVar7 = (longlong *)param_1[2];
  local_3a8 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_148cea0c8(&local_40,&local_3b0,FUN_148cea21c);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_148cea0c8(&local_40,&local_3b0,FUN_148cea21c);
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
  FUN_148cdf4ba(param_4,&local_3a0);
  FUN_1449db362(&local_40);
  FUN_1449db362(&local_50);
  FUN_140d97376(&local_3a0);
  if ((local_30 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148cdef9c FUN_148cdef9c body=76 status=ok
// SIG undefined FUN_148cdef9c(void)

void FUN_148cdef9c(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      iVar2 = FUN_14490d72a(lVar3);
      if (iVar2 != 3) {
        uVar1 = FUN_145a89d04();
        lVar3 = FUN_144718840(param_1,uVar1);
        if (lVar3 != 0) {
          FUN_148cdefe8(lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148cdefe8 FUN_148cdefe8 body=91 status=ok
// SIG undefined FUN_148cdefe8(void)

void FUN_148cdefe8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(char *)(lVar1 + 0x178) == '\x03')) && (param_1[3] != 0)) {
      FUN_1440bfb5c();
      return;
    }
  }
  return;
}



// FUNCTION 148cdf044 FUN_148cdf044 body=189 status=ok
// SIG undefined FUN_148cdf044(void)

void FUN_148cdf044(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x20),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x20);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  FUN_140b96410(param_1 + 0x30);
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_1 + 0x110);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x198),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x198);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 148cdf102 FUN_148cdf102 body=496 status=ok
// SIG undefined FUN_148cdf102(void)

undefined8 FUN_148cdf102(byte *param_1,longlong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *param_1 = local_24 != 0;
  }
  else {
    *param_1 = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pbVar2 = *(byte **)param_2[1];
  if ((byte *)((undefined8 *)param_2[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *pbVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if (*param_1 == 1) {
    pbVar2 = *(byte **)param_2[1];
    if ((byte *)((undefined8 *)param_2[1])[1] < pbVar2 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
    }
    else {
      param_1[1] = *pbVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    pbVar2 = *(byte **)param_2[1];
    if ((byte *)((undefined8 *)param_2[1])[1] < pbVar2 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,1);
    }
    else {
      param_1[3] = *pbVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    (**(code **)(*param_2 + 0x130))(param_2,param_1 + 8);
    FUN_1418947b9(param_2,param_1 + 0x30);
    FUN_1400f4f7e(param_2,param_1 + 0x110);
    FUN_14480c34d(param_2,param_1 + 0x130);
    FUN_14480c34d(param_2,param_1 + 0x150);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      param_1[0x148] = 0;
      param_1[0x149] = 0;
      param_1[0x14a] = 0;
      param_1[0x14b] = 0;
      param_1[0x14c] = 0;
      param_1[0x14d] = 0;
      param_1[0x14e] = 0;
      param_1[0x14f] = 0;
      param_1[0x168] = 0;
      param_1[0x169] = 0;
      param_1[0x16a] = 0;
      param_1[0x16b] = 0;
      param_1[0x16c] = 0;
      param_1[0x16d] = 0;
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
    }
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x170);
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x178);
    (**(code **)(*param_2 + 0x130))(param_2,param_1 + 0x180);
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_148cdf044(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdf2f4 FUN_148cdf2f4 body=62 status=ok
// SIG undefined FUN_148cdf2f4(void)

longlong FUN_148cdf2f4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148cdf416 FUN_148cdf416 body=163 status=ok
// SIG undefined FUN_148cdf416(void)

longlong FUN_148cdf416(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148be8d98();
  uVar1 = *(undefined4 *)(param_2 + 0x314);
  uVar2 = *(undefined4 *)(param_2 + 0x318);
  uVar3 = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  *(undefined1 *)(param_1 + 800) = *(undefined1 *)(param_2 + 800);
  FUN_148cea71c(param_1 + 0x328,param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  FUN_14009d848(param_1 + 0x350,param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  FUN_14009d848(param_1 + 0x360,param_2 + 0x360);
  return param_1;
}



// FUNCTION 148cdf4ba FUN_148cdf4ba body=564 status=ok
// SIG undefined FUN_148cdf4ba(void)

void FUN_148cdf4ba(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 8))();
  if (lVar3 == 0) {
LAB_148cdf511:
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar4 = FUN_144a6c4d8();
  if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) || (*(char *)(lVar3 + 0x178) != '\x03')) goto LAB_148cdf511;
  if (param_1[3] != 0) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 0x368) != 0) && (*(longlong **)(lVar3 + 0x360) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar3 + 0x360) + 0x60))();
        lVar3 = param_1[2];
        if (lVar3 == 0) goto LAB_148cdf5d2;
      }
      param_1[2] = 0;
      (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
    }
LAB_148cdf5d2:
    puVar7 = (undefined8 *)FUN_14001cc68(0x380,0x10);
    *puVar7 = FUN_148ceb0cc;
    puVar7[1] = 0;
    FUN_148cdf416(puVar7 + 2,param_2);
    lVar3 = param_1[2];
    param_1[2] = (longlong)(puVar7 + 2);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  puVar5 = (undefined1 *)(**(code **)(*param_1 + 0x18))(param_1);
  puVar5[2] = puVar5[2] + '\x01';
  *puVar5 = 1;
  plVar6 = (longlong *)FUN_14001cc68(0x5c0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9611f0;
  plVar8 = plVar6 + 2;
  FUN_148cd85de(plVar8);
  local_40 = plVar8;
  local_38 = plVar6;
  FUN_148ceb028(&local_40,plVar8);
  if (plVar6 == (longlong *)0x0) {
    param_1[3] = 0x10;
    plVar8 = (longlong *)param_1[4];
    if (plVar8 == (longlong *)0x0) goto LAB_148cdf6c8;
    param_1[4] = 0;
LAB_148cdf68e:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148cdf6c8;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[3] = (longlong)plVar8;
    plVar8 = (longlong *)param_1[4];
    if (plVar6 != plVar8) {
      param_1[4] = (longlong)plVar6;
      if (plVar8 == (longlong *)0x0) goto LAB_148cdf6c8;
      goto LAB_148cdf68e;
    }
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_148cdf6c8;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_148cdf6c8:
  plVar8 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 148cdf71c FUN_148cdf71c body=14 status=ok
// SIG undefined FUN_148cdf71c(void)

void FUN_148cdf71c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    cVar2 = FUN_144729dda(lVar1 + 0x18);
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x18))();
      if ((lVar3 != 0) && (*(char *)(lVar3 + 1) == '\x03')) {
        FUN_1440bfa2e(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cdf72a FUN_148cdf72a body=14 status=ok
// SIG undefined FUN_148cdf72a(void)

void FUN_148cdf72a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(lVar2 + 0x30);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x30) == '\0')) && (*(char *)(lVar1 + 0x31) == '\0')) &&
     ((*(int *)(lVar1 + 0x6c) == 2 && (*(char *)(lVar2 + 0x58c) == '\0')))) {
    *(undefined1 *)(lVar2 + 0x48) = 1;
    return;
  }
  FUN_1440c1326(lVar2,1);
  FUN_1440bfa2e(lVar2);
  return;
}



// FUNCTION 148cdf738 FUN_148cdf738 body=419 status=ok
// SIG undefined FUN_148cdf738(void)

void FUN_148cdf738(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_1 + 8))();
  if (lVar3 == 0) goto LAB_148cdf781;
  lVar4 = FUN_144a6c4d8();
  if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) || (*(char *)(lVar3 + 0x178) == '\x03')) goto LAB_148cdf781;
  pcVar5 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
  if ((char)param_1[1] != pcVar5[2]) {
    *(char *)(param_1 + 1) = pcVar5[2];
    if (param_1[3] != 0) {
      FUN_140cf863e(param_1);
    }
    if (*pcVar5 == '\x01') {
      plVar6 = (longlong *)FUN_14001cc68(0x5c0,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14b9611f0;
      plVar7 = plVar6 + 2;
      FUN_148cd85de(plVar7);
      local_38 = plVar7;
      local_30 = plVar6;
      FUN_148ceb028(&local_38,plVar7);
      if (plVar6 == (longlong *)0x0) {
        param_1[3] = 0x10;
        plVar7 = (longlong *)param_1[4];
        if (plVar7 != (longlong *)0x0) {
          param_1[4] = 0;
LAB_148cdf87d:
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
joined_r0x000148cdf8aa:
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
        param_1[3] = (longlong)plVar7;
        plVar7 = (longlong *)param_1[4];
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
            goto joined_r0x000148cdf8aa;
          }
        }
        else {
          param_1[4] = (longlong)plVar6;
          if (plVar7 != (longlong *)0x0) goto LAB_148cdf87d;
        }
      }
      plVar7 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      FUN_148cd8abc(param_1[3],lVar3);
    }
  }
  if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_148cdf781:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdf8ed FUN_148cdf8ed body=367 status=ok
// SIG undefined FUN_148cdf8ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_148cdf8ed(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbc2d48 == (longlong *)0x0) {
    memset(&DAT_14cbc2d58,0,0xc0);
    _DAT_14cbc2d68 = 0xffffffff;
    DAT_14cbc2d50 = &PTR_FUN_14b6bf670;
    _DAT_14cbc2d70 = 0;
    uRam000000014cbc2d78 = 0;
    _DAT_14cbc2d80 = 0;
    uRam000000014cbc2d88 = 0;
    _DAT_14cbc2d90 = 0;
    uRam000000014cbc2d98 = 0;
    _DAT_14cbc2da0 = 0;
    uRam000000014cbc2da8 = 0;
    _DAT_14cbc2db0 = 0;
    uRam000000014cbc2db8 = 0;
    _DAT_14cbc2dc0 = 0;
    uRam000000014cbc2dc8 = 0;
    _DAT_14cbc2dd0 = 0;
    uRam000000014cbc2dd8 = 0;
    FUN_1446f470e(&DAT_14cbc2de0,L"R_Hand_Object",1);
    _DAT_14cbc2de8 = 0;
    uRam000000014cbc2df0 = 0;
    _DAT_14cbc2df8 = 0;
    uRam000000014cbc2e00 = 0;
    _DAT_14cbc2e08 = 0;
    uRam000000014cbc2e10 = 0;
    DAT_14cbc2d48 = (longlong *)&DAT_14cbc2d50;
  }
  plVar1 = DAT_14cbc2d48;
  plVar3 = DAT_14cbc2d48 + 1;
  if ((char)DAT_14cbc2d48[2] == '\0') {
LAB_148cdf9bf:
    if (*plVar3 == 0) goto LAB_148cdf9e1;
    cVar2 = FUN_1449e3c20(DAT_14cbc2d48);
    if (cVar2 == '\0') goto LAB_148cdfa30;
  }
  else {
    if ((char)DAT_14cbc2d48[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_148cdf9bf;
    }
LAB_148cdf9e1:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_148cdfa30;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"def_globals_npc_interaction",0);
    FUN_140024ada(&local_58,plVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_148cdfa30:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 148cdfa68 FUN_148cdfa68 body=782 status=ok
// SIG undefined FUN_148cdfa68(void)

void FUN_148cdfa68(longlong param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x10d8) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10d0);
    lVar6 = FUN_148ce005a(puVar1);
    if (lVar6 == 0) {
      lVar6 = FUN_14494250a(param_1);
      if (lVar6 != 0) {
        local_50 = *(longlong *)(lVar6 + 0x18);
        FUN_1400021e4(&local_50,&local_48);
        lVar10 = *(longlong *)(param_1 + 0x10e8);
        iVar8 = *(int *)(param_1 + 0x10f0) + -1;
        if (*(int *)(param_1 + 0x10f0) == 0) {
          iVar8 = 0;
        }
        iVar5 = local_40 - 1;
        if (local_40 == 0) {
          iVar5 = 0;
        }
        iVar7 = iVar8;
        if (iVar5 < iVar8) {
          iVar7 = iVar5;
        }
        iVar9 = 0;
        if (0 < iVar7) {
          iVar9 = iVar7;
        }
        if ((iVar5 == iVar9) &&
           ((iVar7 < 1 || local_40 < 2 || (iVar5 = FUN_144a54874(local_48,lVar10,iVar5), iVar5 == 0)
            ))) {
          iVar5 = local_40 + (local_40 == 0);
          lVar10 = lVar10 + (longlong)iVar5 * 2;
          iVar8 = iVar8 - iVar5;
        }
        FUN_1446f82e2(&local_50,iVar8,lVar10,1);
        bVar4 = true;
        if ((longlong)*(int *)(lVar6 + 0xa8) != 0) {
          lVar10 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + lVar10);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) == local_50)) {
              lVar6 = FUN_14145892e();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                FUN_1400337aa(lVar3);
                FUN_14093097c(param_1,*(undefined8 *)(lVar3 + 0x3a0));
                *puVar1 = 0;
                *(undefined8 *)(param_1 + 0x10d8) = 0;
                *(undefined8 *)(param_1 + 0x10e0) = 0;
                *(undefined4 *)(param_1 + 0x10f0) = 0;
                if (*(int *)(param_1 + 0x10f4) < 0) {
                  FUN_1446f8c06((undefined8 *)(param_1 + 0x10e8),0);
                }
                puVar2 = *(undefined2 **)(param_1 + 0x10e8);
                if (puVar2 != (undefined2 *)0x0) {
                  *puVar2 = 0;
                }
              }
              bVar4 = false;
              break;
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(lVar6 + 0xa8) * 8 != lVar10);
        }
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar4) goto LAB_148cdfa8d;
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14a1ca6c0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_48[2] = lVar10;
      *local_48 = &PTR_FUN_14b961330;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar1[4] = param_1;
      FUN_1411df00c(&DAT_14cb10a78,&local_50,&local_48);
      FUN_1449db362(&local_48);
    }
    else {
      FUN_1400337aa(lVar6);
      lVar6 = *(longlong *)(lVar6 + 0x3a0);
      if (lVar6 != 0) {
        FUN_1400337aa(lVar6);
      }
      FUN_14093097c(param_1,lVar6);
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x10d8) = 0;
      *(undefined8 *)(param_1 + 0x10e0) = 0;
      *(undefined4 *)(param_1 + 0x10f0) = 0;
      if (*(int *)(param_1 + 0x10f4) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x10e8),0);
      }
      puVar2 = *(undefined2 **)(param_1 + 0x10e8);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
      }
    }
  }
LAB_148cdfa8d:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cdfd78 FUN_148cdfd78 body=105 status=ok
// SIG undefined FUN_148cdfd78(void)

undefined8 FUN_148cdfd78(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"UXDisplayName",1);
  uVar1 = 1;
  if (*param_2 != local_28) {
    uVar1 = FUN_1487c6eca(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdfde2 FUN_148cdfde2 body=287 status=ok
// SIG undefined FUN_148cdfde2(void)

void FUN_148cdfde2(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1487c6fac();
  if (param_2 != 0) {
    lVar4 = FUN_14098e79e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      if (*(longlong *)(param_1 + 0x1118) == 0) {
        uVar5 = FUN_140da11f2();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(param_1 + 0x1118) = uVar5;
      }
      lVar4 = *(longlong *)(param_2 + 0x1118);
      if (lVar4 == 0) {
        lVar4 = FUN_140da11f2();
      }
      uVar5 = *(undefined8 *)(param_2 + 0x1110);
      uVar6 = FUN_14477b664(lVar4);
      local_50 = uVar5;
      uVar2 = FUN_144a7891a(uVar6);
      local_58 = *(undefined8 *)(param_1 + 0x1110);
      uVar5 = *(undefined8 *)(param_1 + 0x1118);
      uVar3 = FUN_144a7891a(uVar5);
      local_68 = uVar6;
      local_60 = &local_50;
      cVar1 = FUN_144a789b8(uVar3,uVar5,&local_58,uVar2);
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cdff1e FUN_148cdff1e body=287 status=ok
// SIG undefined FUN_148cdff1e(void)

void FUN_148cdff1e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1487c7166();
  if (param_2 != 0) {
    lVar4 = FUN_14098e79e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      if (*(longlong *)(param_2 + 0x1118) == 0) {
        uVar5 = FUN_140da11f2();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(param_2 + 0x1118) = uVar5;
      }
      lVar4 = *(longlong *)(param_1 + 0x1118);
      if (lVar4 == 0) {
        lVar4 = FUN_140da11f2();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x1110);
      uVar6 = FUN_14477b664(lVar4);
      local_50 = uVar5;
      uVar2 = FUN_144a7891a(uVar6);
      local_58 = *(undefined8 *)(param_2 + 0x1110);
      uVar5 = *(undefined8 *)(param_2 + 0x1118);
      uVar3 = FUN_144a7891a(uVar5);
      local_68 = uVar6;
      local_60 = &local_50;
      cVar1 = FUN_144a789b8(uVar3,uVar5,&local_58,uVar2);
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce005a FUN_148ce005a body=197 status=ok
// SIG undefined FUN_148ce005a(void)

longlong FUN_148ce005a(longlong param_1)

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
  lVar4 = FUN_14145892e();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148ce0120 FUN_148ce0120 body=84 status=ok
// SIG undefined FUN_148ce0120(void)

longlong * FUN_148ce0120(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148ce0180 FUN_148ce0180 body=95 status=ok
// SIG undefined FUN_148ce0180(void)

undefined8 FUN_148ce0180(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x155) & 0x20) == 0)) {
    lVar2 = FUN_1411604c4(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_1411604c4(param_2);
      if (lVar3 != 0) {
        uVar4 = FUN_1440ca132(lVar2,lVar1,lVar3);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 148ce0208 FUN_148ce0208 body=458 status=ok
// SIG undefined FUN_148ce0208(void)

undefined8 FUN_148ce0208(double param_1,double *param_2,float param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d0;
  double local_c8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  local_e8 = param_1;
  FUN_1438026c2(local_98,&DAT_14cb1cfb0);
  lVar4 = local_70;
  local_b0 = local_90;
  local_a8 = local_88;
  LOCK();
  *(int *)(local_88 + 0x38) = *(int *)(local_88 + 0x38) + 1;
  UNLOCK();
  local_a0 = local_80;
  LOCK();
  *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + 1;
  UNLOCK();
  if (local_90 != local_78) {
    do {
      FUN_140b03ca2(local_b0[2],&local_e8);
      dVar7 = local_e8;
      if (dVar2 < local_e8) {
LAB_148ce02d7:
        dVar6 = (dVar2 - dVar7) * (dVar2 - dVar7);
      }
      else {
        dVar6 = 0.0;
        dVar7 = local_d0;
        if (local_d0 < dVar2) goto LAB_148ce02d7;
      }
      dVar7 = local_e0;
      if ((dVar3 < local_e0) || (dVar7 = local_c8, local_c8 < dVar3)) {
        dVar6 = dVar6 + (dVar3 - dVar7) * (dVar3 - dVar7);
      }
      if ((float)dVar6 <= param_3 * param_3) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x38);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_a8 + 0x38) = *(int *)(local_a8 + 0x38) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_88 + 0x38) = *(int *)(local_88 + 0x38) + -1;
        UNLOCK();
        uVar5 = 1;
        goto LAB_148ce036a;
      }
      local_b0 = (undefined8 *)FUN_144b2e940(*local_b0);
      FUN_144b2e9ba(&local_b0);
    } while (local_b0 != local_78);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x38);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_a8 + 0x38) = *(int *)(local_a8 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_88 + 0x38) = *(int *)(local_88 + 0x38) + -1;
  UNLOCK();
  uVar5 = 0;
LAB_148ce036a:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce03d4 FUN_148ce03d4 body=131 status=ok
// SIG undefined FUN_148ce03d4(void)

undefined8 * FUN_148ce03d4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x88) == '\x01')) &&
         (cVar4 = FUN_14069eaf4(lVar3 + 0xb0,param_3), cVar4 != '\0')) {
        *param_2 = *(undefined8 *)(lVar2 + lVar5);
        lVar2 = *(longlong *)(lVar2 + 8 + lVar5);
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        return param_2;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148ce0458 FUN_148ce0458 body=604 status=ok
// SIG undefined FUN_148ce0458(void)

void FUN_148ce0458(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_2;
  if (param_2 != 0) {
    plVar9 = (longlong *)(param_1 + 0x120);
    if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
      uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar4 = param_1 + 0x158;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x160);
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & (uVar7 >> 0x10 ^ uVar7))
                               * 4);
      if (iVar6 != -1) {
        do {
          if (*(ulonglong *)(*plVar9 + (longlong)iVar6 * 0x20) == param_2) goto LAB_148ce04bb;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + *plVar9 + 0x18);
        } while (iVar6 != -1);
      }
    }
    FUN_14040dabc(param_1,param_2);
    plVar3 = (longlong *)FUN_14040d8e0(param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      local_58 = &local_60;
      FUN_148cebfa0(plVar9,local_4c);
      if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
        uVar7 = ((uint)(local_60 >> 0x14) & 0xffff ^ (uint)(local_60 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        lVar4 = param_1 + 0x158;
        if (*(longlong *)(param_1 + 0x160) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x160);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x168) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar6 != -1) {
          do {
            lVar4 = *plVar9 + (longlong)iVar6 * 0x20;
            if (*(ulonglong *)(*plVar9 + (longlong)iVar6 * 0x20) == local_60) {
              if ((lVar4 + 8 != 0 && lVar4 != 0) && ((longlong)(int)plVar3[1] != 0)) {
                plVar9 = (longlong *)*plVar3;
                plVar3 = plVar9 + (longlong)(int)plVar3[1] * 0x14;
                do {
                  lVar1 = *plVar9;
                  if (((lVar1 != 0) && (lVar2 = plVar9[1], lVar2 != 0)) && (0 < *(int *)(lVar2 + 8))
                     ) {
                    LOCK();
                    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
                    UNLOCK();
                    local_70 = lVar1;
                    local_68 = lVar2;
                    plVar5 = (longlong *)FUN_148ce06b6(param_1,&local_70);
                    if ((plVar5 != (longlong *)0x0) &&
                       (lVar1 = plVar5[1], (longlong)(int)lVar1 != 0)) {
                      lVar2 = *plVar5;
                      lVar8 = 0;
                      do {
                        local_58 = *(ulonglong **)(lVar2 + lVar8);
                        FUN_148cec4bc(lVar4 + 8,&local_58);
                        lVar8 = lVar8 + 8;
                      } while ((longlong)(int)lVar1 * 8 != lVar8);
                    }
                  }
                  plVar9 = plVar9 + 0x14;
                } while (plVar9 != plVar3);
              }
              break;
            }
            iVar6 = *(int *)(lVar4 + 0x18);
          } while (iVar6 != -1);
        }
      }
    }
  }
LAB_148ce04bb:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce06b6 FUN_148ce06b6 body=315 status=ok
// SIG undefined FUN_148ce06b6(void)

longlong FUN_148ce06b6(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar2;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_148cea870((longlong *)(param_1 + 0x80),uVar4 >> 0x10 ^ uVar4,&local_38);
  if (iVar5 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x28 + *(longlong *)(param_1 + 0x80);
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  lVar6 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce07f2 FUN_148ce07f2 body=130 status=ok
// SIG undefined FUN_148ce07f2(void)

undefined8 FUN_148ce07f2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  lVar1 = DAT_14cb84f20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb84f20 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1400f0e12(param_1,local_34,1);
    FUN_144a7660c(param_1,local_40,1);
    uVar2 = FUN_1411605fc(lVar1,local_40,local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce0876 FUN_148ce0876 body=166 status=ok
// SIG undefined FUN_148ce0876(void)

longlong FUN_148ce0876(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x160);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x120) + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar4 * 0x20) == param_2)
        goto LAB_148ce0886;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_148ce0886:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 148ce091c FUN_148ce091c body=224 status=ok
// SIG undefined FUN_148ce091c(void)

bool FUN_148ce091c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  if ((longlong)(int)param_1[1] == 0) {
    bVar11 = false;
  }
  else {
    plVar9 = (longlong *)*param_1;
    plVar10 = plVar9 + (longlong)(int)param_1[1] * 0x14;
    do {
      plVar6 = (longlong *)plVar9[1];
      if (plVar6 == (longlong *)0x0) {
LAB_148ce0965:
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_148ce0965;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar11 = iVar5 == iVar4;
          if (bVar11) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar11);
      }
      lVar7 = *plVar9;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_148ce09a6:
        lVar8 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_148ce09a6;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar5 == iVar4;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar11);
        lVar8 = *param_2;
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
      if (plVar6 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
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
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      bVar11 = lVar7 == lVar8;
    } while ((!bVar11) && (plVar9 = plVar9 + 0x14, plVar9 != plVar10));
  }
  return bVar11;
}



// FUNCTION 148ce0a4e FUN_148ce0a4e body=1 status=ok
// SIG undefined FUN_148ce0a4e(void)

void FUN_148ce0a4e(void)

{
  return;
}



// FUNCTION 148ce0a78 FUN_148ce0a78 body=81 status=ok
// SIG undefined FUN_148ce0a78(void)

void FUN_148ce0a78(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140a32438();
  if (lVar1 != 0) {
    lVar2 = FUN_14479d2ce(lVar1 + 0x38);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x178) == '\x03')) {
      FUN_145765270(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148ce0aca FUN_148ce0aca body=85 status=ok
// SIG undefined FUN_148ce0aca(void)

bool FUN_148ce0aca(void)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_140a32438();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    FUN_140a6fcb2(lVar1,&local_18);
    bVar2 = local_18 == 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce0b20 FUN_148ce0b20 body=33 status=ok
// SIG undefined FUN_148ce0b20(void)

undefined8 FUN_148ce0b20(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140a32438();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x58)) &
            0xfffffffffffffffe;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x02');
  }
  return uVar3;
}



// FUNCTION 148ce0b42 FUN_148ce0b42 body=110 status=ok
// SIG undefined FUN_148ce0b42(void)

void FUN_148ce0b42(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14136bb9a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14136bb9a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((*(byte *)(lVar4 + 0x58) & 2) != 0) {
          FUN_145a20686(lVar4,5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148ce0bb0 FUN_148ce0bb0 body=100 status=ok
// SIG undefined FUN_148ce0bb0(void)

undefined8 FUN_148ce0bb0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14136bb9a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14136bb9a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x58)) &
                0xffffffffffffff02;
        return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
      }
    }
  }
  return 0;
}



// FUNCTION 148ce0c14 FUN_148ce0c14 body=97 status=ok
// SIG undefined FUN_148ce0c14(void)

undefined8 FUN_148ce0c14(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14136bb9a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14136bb9a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return *(undefined8 *)(lVar4 + 0x78);
      }
    }
  }
  return 0;
}



// FUNCTION 148ce0c87 FUN_148ce0c87 body=968 status=ok
// SIG undefined FUN_148ce0c87(void)

void FUN_148ce0c87(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 *local_340;
  longlong *local_338;
  undefined4 *local_330;
  longlong local_320;
  undefined8 local_318;
  longlong local_310 [2];
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined1 local_2ec [12];
  undefined8 local_2e0;
  undefined4 local_2d4;
  longlong local_2d0 [2];
  undefined8 local_2c0 [4];
  undefined1 local_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  undefined1 local_278 [32];
  byte local_258;
  undefined1 local_250 [32];
  undefined1 local_230;
  undefined1 local_228 [16];
  longlong local_218;
  undefined1 local_208 [32];
  byte local_1e8;
  undefined1 local_1e0 [32];
  undefined1 local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined1 local_198 [32];
  byte local_178;
  undefined1 local_170 [144];
  undefined8 local_e0;
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar2 = FUN_140e44844(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14144d9c6(lVar2);
    lVar4 = FUN_1457b1050(lVar2);
    if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      lVar5 = FUN_145ca578a();
    }
    else {
      lVar5 = 0;
    }
    lVar6 = FUN_1459ce524(param_1);
    lVar2 = FUN_140e448c6(lVar2);
    if ((lVar2 != 0 && (lVar6 != 0 && lVar5 != 0)) && (lVar4 != 0 && lVar3 != 0)) {
      local_e0 = *param_4;
      local_320 = lVar4;
      FUN_1400021e4(&local_e0,local_2d0);
      local_1c0 = 0;
      FUN_140c379ae(local_1e0,local_2d0);
      local_348 = (undefined8 *)local_1e0;
      FUN_140d767d6(&local_1b8,&DAT_14cbc3930,3,L"Purchase Gear");
      if ((*(longlong *)(local_1b8 + 0x3c) == 0) || (*(char *)(local_1b8 + 0x38) < local_1b0)) {
        local_2a0 = 0;
        FUN_140c379ae(local_2c0,local_2d0);
        local_348 = local_2c0;
        FUN_140d767d6(local_298,&DAT_14cbc3930,3,L"Purchase Gear");
        FUN_140d76846(local_170,local_298);
        bVar1 = false;
      }
      else {
        local_2d4 = *param_3;
        puVar7 = &DAT_14c9485f0;
        if (*(undefined4 **)(local_320 + 8) != (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(local_320 + 8);
        }
        FUN_144a7660c(puVar7,local_2ec,1);
        local_2e0 = FUN_140b4e694(lVar5,local_2ec);
        lVar4 = FUN_1409e484c(lVar6,lVar2);
        local_2f8 = *(undefined8 *)(lVar4 + 8);
        puVar7 = (undefined4 *)FUN_1409e484c(lVar6,lVar2);
        local_2fc = *puVar7;
        FUN_1400021e4(lVar3 + 0x38,local_310);
        local_230 = 0;
        FUN_140c379ae(local_250,local_2d0);
        local_348 = (undefined8 *)local_250;
        FUN_140d767d6(local_228,&DAT_14cbc3930,3,L"Purchase Gear");
        local_330 = &local_2d4;
        local_348 = &local_2f8;
        local_340 = &local_2e0;
        local_338 = local_2d0;
        FUN_1440ca663(local_170,local_228,local_310,&local_2fc);
        bVar1 = true;
      }
      FUN_14027c224(&local_e0,local_170);
      local_318 = 0;
      FUN_14485c47a(&local_318,*(undefined8 *)(param_1 + 0x20));
      if ((char)local_e0 == '\x01') {
        FUN_1404eedce(local_d8,&DAT_14c9a3c28,local_318);
      }
      FUN_14027c198(&local_e0);
      FUN_1404eeb8e(local_170);
      if (bVar1) {
        (*(code *)(&PTR_FUN_14a1842f0)[local_1e8])(local_208);
        local_288 = local_310[0];
        if (local_218 != 0) {
          FUN_1400020a8();
          local_288 = local_310[0];
        }
      }
      else {
        (*(code *)(&PTR_FUN_14a1842f0)[local_258])(local_278);
      }
      if (local_288 != 0) {
        FUN_1400020a8();
      }
      (*(code *)(&PTR_FUN_14a1842f0)[local_178])(local_198);
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      if (local_2d0[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce1050 FUN_148ce1050 body=966 status=ok
// SIG undefined FUN_148ce1050(void)

void FUN_148ce1050(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 *local_340;
  longlong *local_338;
  undefined4 *local_330;
  longlong local_320;
  undefined8 local_318;
  longlong local_310 [2];
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined1 local_2ec [12];
  undefined8 local_2e0;
  undefined4 local_2d4;
  longlong local_2d0 [2];
  undefined8 local_2c0 [4];
  undefined1 local_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  undefined1 local_278 [32];
  byte local_258;
  undefined1 local_250 [32];
  undefined1 local_230;
  undefined1 local_228 [16];
  longlong local_218;
  undefined1 local_208 [32];
  byte local_1e8;
  undefined1 local_1e0 [32];
  undefined1 local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined1 local_198 [32];
  byte local_178;
  undefined1 local_170 [144];
  undefined8 local_e0;
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar2 = FUN_140e44844(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14144d9c6(lVar2);
    lVar4 = FUN_1457b1050(lVar2);
    if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      lVar5 = FUN_145ca578a();
    }
    else {
      lVar5 = 0;
    }
    lVar6 = FUN_1459ce524(param_1);
    lVar2 = FUN_140e448c6(lVar2);
    if ((lVar2 != 0 && (lVar6 != 0 && lVar5 != 0)) && (lVar4 != 0 && lVar3 != 0)) {
      local_e0 = *(undefined8 *)(param_3 + 2);
      local_320 = lVar4;
      FUN_1400021e4(&local_e0,local_2d0);
      local_1c0 = 0;
      FUN_140c379ae(local_1e0,local_2d0);
      local_348 = (undefined8 *)local_1e0;
      FUN_140d767d6(&local_1b8,&DAT_14cbc3930,3,L"Purchase Cosmetic");
      if ((*(longlong *)(local_1b8 + 0x3c) == 0) || (*(char *)(local_1b8 + 0x38) < local_1b0)) {
        local_2a0 = 0;
        FUN_140c379ae(local_2c0,local_2d0);
        local_348 = local_2c0;
        FUN_140d767d6(local_298,&DAT_14cbc3930,3,L"Purchase Cosmetic");
        FUN_140d76846(local_170,local_298);
        bVar1 = false;
      }
      else {
        local_2d4 = *param_3;
        puVar7 = &DAT_14c9485f0;
        if (*(undefined4 **)(local_320 + 8) != (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(local_320 + 8);
        }
        FUN_144a7660c(puVar7,local_2ec,1);
        local_2e0 = FUN_140b4e694(lVar5,local_2ec);
        lVar4 = FUN_1409e484c(lVar6,lVar2);
        local_2f8 = *(undefined8 *)(lVar4 + 8);
        puVar7 = (undefined4 *)FUN_1409e484c(lVar6,lVar2);
        local_2fc = *puVar7;
        FUN_1400021e4(lVar3 + 0x38,local_310);
        local_230 = 0;
        FUN_140c379ae(local_250,local_2d0);
        local_348 = (undefined8 *)local_250;
        FUN_140d767d6(local_228,&DAT_14cbc3930,3,L"Purchase Cosmetic");
        local_330 = &local_2d4;
        local_348 = &local_2f8;
        local_340 = &local_2e0;
        local_338 = local_2d0;
        FUN_1440ca663(local_170,local_228,local_310,&local_2fc);
        bVar1 = true;
      }
      FUN_14027c224(&local_e0,local_170);
      local_318 = 0;
      FUN_14485c47a(&local_318,*(undefined8 *)(param_1 + 0x20));
      if ((char)local_e0 == '\x01') {
        FUN_1404eedce(local_d8,&DAT_14c9a3c28,local_318);
      }
      FUN_14027c198(&local_e0);
      FUN_1404eeb8e(local_170);
      if (bVar1) {
        (*(code *)(&PTR_FUN_14a1842f0)[local_1e8])(local_208);
        local_288 = local_310[0];
        if (local_218 != 0) {
          FUN_1400020a8();
          local_288 = local_310[0];
        }
      }
      else {
        (*(code *)(&PTR_FUN_14a1842f0)[local_258])(local_278);
      }
      if (local_288 != 0) {
        FUN_1400020a8();
      }
      (*(code *)(&PTR_FUN_14a1842f0)[local_178])(local_198);
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      if (local_2d0[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce1418 FUN_148ce1418 body=176 status=ok
// SIG undefined FUN_148ce1418(void)

void FUN_148ce1418(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ce14ca(param_2,&local_38);
  _Src = local_38;
  local_48 = (void *)0x0;
  local_40 = local_30;
  if ((longlong)local_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_30,0);
    memcpy(local_48,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_48,0);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce14ca FUN_148ce14ca body=208 status=ok
// SIG undefined FUN_148ce14ca(void)

undefined8 FUN_148ce14ca(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1465c96c6();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce159c FUN_148ce159c body=533 status=ok
// SIG undefined FUN_148ce159c(void)

ulonglong FUN_148ce159c(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if (lVar6 != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    if (((((lVar2 != 0) && (lVar2 = *(longlong *)(param_1 + 0x50), lVar2 != 0)) &&
         (lVar7 = FUN_1402e44f4(), lVar7 != 0)) &&
        ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)))) && (*(longlong *)(param_1 + 0x50) != 0)) {
      lVar6 = lVar6 + 0x50;
      iVar4 = FUN_144a750a0(lVar6,param_1 + 0x58);
      if (iVar4 != -1) {
        iVar5 = FUN_144a750a0(lVar6,param_1 + 0x60);
        iVar4 = 0;
        if (iVar5 != -1) {
          plVar1 = (longlong *)(param_1 + 0x2d8);
          lVar2 = param_1 + 0x2e8;
          local_138 = 0x100000000;
          local_128 = 0xffffffff;
          local_120 = 0;
          local_130 = lVar2;
          if (*(int *)(param_1 + 0x300) != 0) {
            FUN_1449c0562(&local_138);
            iVar4 = *(int *)(param_1 + 0x300);
          }
          local_60 = local_138;
          local_58 = local_130;
          local_50 = local_128;
          uVar3 = local_50;
          local_48 = local_120;
          local_44 = local_11c;
          local_50._4_4_ = (int)((ulonglong)local_128 >> 0x20);
          local_68 = plVar1;
          if ((local_50._4_4_ != iVar4) ||
             (param_1 = CONCAT71((int7)(param_1 >> 8),1), local_130 != lVar2)) {
            iVar5 = local_50._4_4_;
            local_50 = uVar3;
            do {
              memcpy(&local_138,(void *)((longlong)iVar5 * 0xd8 + *local_68),0xd0);
              iVar5 = FUN_144a750a0(lVar6,&local_138);
              param_1 = CONCAT71((int7)(param_1 >> 8),iVar5 != -1);
              uVar3 = local_50;
              if (iVar5 == -1) break;
              local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
              FUN_1449c0562(&local_60);
              iVar5 = local_50._4_4_;
              uVar3 = local_50;
            } while (local_68 != plVar1 || (local_58 != lVar2 || local_50._4_4_ != iVar4));
          }
          goto LAB_148ce1617;
        }
      }
    }
  }
  param_1 = 0;
  uVar3 = local_50;
LAB_148ce1617:
  local_50 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce181c FUN_148ce181c body=40 status=ok
// SIG undefined FUN_148ce181c(void)

undefined8 FUN_148ce181c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145acd410(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148ce1850 FUN_148ce1850 body=28 status=ok
// SIG undefined FUN_148ce1850(void)

void FUN_148ce1850(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145bd7f78(param_1);
  return;
}



// FUNCTION 148ce186c FUN_148ce186c body=3450 status=ok
// SIG undefined FUN_148ce186c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ce186c(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  ulonglong local_210;
  undefined8 local_200;
  longlong local_1f8 [26];
  longlong *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong uStack_108;
  longlong *local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined1 local_a4 [4];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1487cee22();
  if (param_3 == 0) goto LAB_148ce18d4;
  *(longlong *)(param_1 + 0x328) = DAT_14c846508;
  lVar11 = DAT_14c846500;
  *(longlong *)(param_1 + 0x318) = DAT_14c8464f8;
  *(longlong *)(param_1 + 800) = lVar11;
  lVar11 = DAT_14c846500;
  *(longlong *)(param_1 + 0x330) = DAT_14c8464f8;
  *(longlong *)(param_1 + 0x338) = lVar11;
  *(longlong *)(param_1 + 0x340) = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x348) = 1;
  FUN_148ce25e8(param_2,param_3);
  lVar11 = FUN_1447210f0(param_3);
  plVar18 = *(longlong **)(param_3 + 0x3c0);
  if (plVar18 == (longlong *)0x0) {
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x152) != '\x04')) goto LAB_148ce18d4;
  }
  else if (((*(byte *)(plVar18 + 0x84) & 2) == 0) ||
          (cVar9 = (**(code **)(*plVar18 + 0x6c8))(), cVar9 == '\0')) goto LAB_148ce18d4;
  if (param_2 == (longlong *)0x0) {
LAB_148ce19d5:
    plVar18 = (longlong *)0x0;
  }
  else {
    lVar11 = (**(code **)(*param_2 + 8))(param_2);
    lVar12 = FUN_140458448();
    if ((lVar12 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar12 + 0x38))) goto LAB_148ce19d5;
    plVar18 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
        lVar12 + 0x30) {
      plVar18 = param_2;
    }
  }
  lVar11 = *(longlong *)(param_3 + 0x428);
  if (lVar11 == 0) goto LAB_148ce18d4;
  lVar12 = FUN_144a78c84();
  if (((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
       != lVar12 + 0x30)) ||
     (lVar12 = *(longlong *)(param_3 + 0x438), lVar12 == 0 || plVar18 == (longlong *)0x0))
  goto LAB_148ce18d4;
  if (DAT_14c950c29 == '\x01') {
    if (plVar18[0x4f] == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_148ce18d4;
    }
    FUN_1456cec3c();
  }
  lVar13 = plVar18[0x4f];
  *(longlong *)(param_1 + 0x18) = lVar13;
  if (lVar13 == 0) goto LAB_148ce18d4;
  *(longlong *)(param_1 + 400) = DAT_14c8464f0;
  lVar17 = DAT_14c8464e8;
  *(longlong **)(param_1 + 0x180) = DAT_14c8464e0;
  *(longlong *)(param_1 + 0x188) = lVar17;
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar13 + 0x568);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar13 + 0x56c);
  plVar15 = *(longlong **)(param_1 + 0x20);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x420))(plVar15,0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar13 = *(longlong *)(param_1 + 0x18);
  }
  cVar9 = FUN_148ce159c(lVar13);
  if (cVar9 != '\0') {
    FUN_1446f470e(&local_c0,L"FirstPersonArms",1);
    local_210 = 0;
    local_218 = local_218 & 0xffffffffffffff00;
    lVar13 = FUN_145758b06(param_3,local_c0,0,0);
    if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar13);
    }
    *(longlong *)(param_1 + 0x20) = lVar13;
    FUN_140486fc4(lVar13,*(undefined8 *)(param_3 + 0x1c8),0);
    lVar13 = *(longlong *)(param_1 + 0x18);
    lVar17 = *(longlong *)(param_1 + 0x20);
    if ((*(byte *)(lVar13 + 0x38) & 1) == 0) {
      FUN_1406547e8(lVar17,*(undefined8 *)(lVar13 + 0x40),1);
    }
    else {
      lVar13 = *(longlong *)(lVar13 + 0x48);
      if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar13);
      }
      *(longlong *)(lVar17 + 0x1630) = lVar13;
      FUN_148811d30(*(undefined8 *)(param_1 + 0x20),1);
    }
    FUN_140efa230(*(longlong *)(param_1 + 0x20) + 0x1288,*(longlong *)(param_1 + 0x18) + 0x68);
    uVar16 = 0;
    FUN_14073397e(*(undefined8 *)(param_1 + 0x20),0,1);
    lVar13 = *(longlong *)(param_1 + 0x18);
    local_200 = *(undefined8 *)(param_1 + 0x20);
    lVar17 = *(longlong *)(lVar13 + 0x50);
    if (lVar17 != 0) {
      lVar14 = FUN_1402e44f4();
      if (((lVar14 == 0) || (*(int *)(lVar17 + 0x38) < *(int *)(lVar14 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
          lVar14 + 0x30)) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(lVar13 + 0x50);
      }
    }
    FUN_14065465c(local_200,uVar16);
    FUN_140c056bc(*(undefined8 *)(param_1 + 0x20),1);
    FUN_140357fa8(*(undefined8 *)(param_1 + 0x20),1,0);
    FUN_1417be62e(*(undefined8 *)(param_1 + 0x20),0);
    FUN_140c0573e(*(undefined8 *)(param_1 + 0x20),1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x89c) = 0;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x3ac);
    *(float *)(*(longlong *)(param_1 + 0x20) + 0x3ac) = fVar1 + fVar1;
    FUN_140b506a4(*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(param_1 + 0x1b0) == '\x01') {
      FUN_1449e3cec(*(undefined8 *)(param_1 + 0x20),1,1);
    }
    lVar13 = FUN_140418574(*(undefined8 *)(param_1 + 0x20));
    if (lVar13 != 0) {
      plVar15 = (longlong *)FUN_140418574(*(undefined8 *)(param_1 + 0x20));
      uVar16 = (**(code **)(*plVar15 + 0x310))(plVar15);
      FUN_140ef97cd(local_1f8,uVar16,*(longlong *)(param_1 + 0x18) + 0x60);
      plVar15 = local_1f8;
      plVar20 = (longlong *)(param_1 + 0x30);
      for (lVar13 = 0xc; lVar8 = DAT_14c8463e8, lVar14 = DAT_14c8463e0, lVar17 = DAT_14c8463d8,
          lVar13 != 0; lVar13 = lVar13 + -1) {
        *plVar20 = *plVar15;
        plVar15 = plVar15 + 1;
        plVar20 = plVar20 + 1;
      }
      *(longlong *)(param_1 + 0x30) = DAT_14c8463d0;
      *(longlong *)(param_1 + 0x38) = lVar17;
      *(longlong *)(param_1 + 0x40) = lVar14;
      *(longlong *)(param_1 + 0x48) = lVar8;
      dVar32 = *(double *)(lVar11 + 0x198);
      dVar5 = *(double *)(lVar11 + 0x1a0);
      dVar6 = *(double *)(lVar11 + 0x1a8);
      fVar1 = *(float *)(lVar12 + 0x640);
      lVar12 = FUN_1404dcd0c(*(longlong *)(param_1 + 0x20) + 0x1288,
                             *(longlong *)(param_1 + 0x18) + 0x210);
      if (lVar12 == 0) {
LAB_148ce2137:
        FUN_140ef97cd(local_1f8,uVar16,*(longlong *)(param_1 + 0x18) + 0x58);
        uVar41 = (undefined4)local_1f8[6];
        uVar42 = (undefined4)((ulonglong)local_1f8[6] >> 0x20);
      }
      else {
        lVar13 = FUN_1402576f0();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) goto LAB_148ce2137;
        FUN_140eebf8e(local_1f8,lVar12,*(longlong *)(param_1 + 0x18) + 0x58,0);
        uVar41 = (undefined4)local_1f8[6];
        uVar42 = (undefined4)((ulonglong)local_1f8[6] >> 0x20);
      }
      fVar22 = *(float *)(plVar18 + 0x4a);
      dVar5 = dVar5 + 0.0;
      dVar32 = dVar32 + 0.0;
      *(double *)(param_1 + 0x90) = dVar32;
      *(double *)(param_1 + 0x98) = dVar5;
      *(double *)(param_1 + 0xa0) =
           ((double)(fVar22 + fVar1) - (double)CONCAT44(uVar42,uVar41)) + dVar6;
      fVar22 = *(float *)((longlong)plVar18 + 0x254);
      *(double *)(param_1 + 0xa8) = dVar32;
      *(double *)(param_1 + 0xb0) = dVar5;
      *(double *)(param_1 + 0xb8) =
           ((double)(fVar22 + fVar1) - (double)CONCAT44(uVar42,uVar41)) + dVar6;
      fVar22 = (float)FUN_148ccc1d8(plVar18);
      *(double *)(param_1 + 0xc0) = dVar32;
      *(double *)(param_1 + 200) = dVar5;
      *(double *)(param_1 + 0xd0) =
           ((double)(fVar22 + fVar1) - (double)CONCAT44(uVar42,uVar41)) + dVar6;
      uVar21 = *(undefined8 *)(param_1 + 0x90);
      uVar7 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0xd8) = uVar21;
      *(undefined8 *)(param_1 + 0xe0) = uVar7;
      uVar16 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xe8) = uVar16;
      *(undefined8 *)(param_1 + 0xf0) = uVar21;
      *(undefined8 *)(param_1 + 0xf8) = uVar7;
      *(undefined8 *)(param_1 + 0x100) = uVar16;
      *(undefined8 *)(param_1 + 0x118) = uVar16;
      *(undefined8 *)(param_1 + 0x108) = uVar21;
      *(undefined8 *)(param_1 + 0x110) = uVar7;
      if (*(longlong *)(param_3 + 0x430) != 0) {
        fVar22 = (float)FUN_14165ac3e();
        *(float *)(param_1 + 0x1a8) = fVar1 - fVar22;
      }
      lVar12 = *(longlong *)(param_1 + 0x20);
      local_c8 = *(longlong *)(param_1 + 0xa0);
      local_d8 = *(longlong **)(param_1 + 0x90);
      lStack_d0 = *(longlong *)(param_1 + 0x98);
      auVar23 = *(undefined1 (*) [16])(lVar12 + 0x1b0);
      dVar5 = auVar23._0_8_;
      dVar6 = auVar23._8_8_;
      dVar32 = *(double *)(lVar12 + 0x1c0);
      plVar18 = *(longlong **)(lVar12 + 0x230);
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)FUN_14001cc68(0x40,0x10);
        lVar13 = DAT_14c8463d8;
        *plVar18 = DAT_14c8463d0;
        plVar18[1] = lVar13;
        lVar13 = DAT_14c8463e8;
        plVar18[2] = DAT_14c8463e0;
        plVar18[3] = lVar13;
        lVar13 = DAT_14c846500;
        plVar18[4] = DAT_14c8464f8;
        plVar18[5] = lVar13;
        plVar18[6] = DAT_14c846508;
        *(longlong **)(lVar12 + 0x230) = plVar18;
      }
      if ((((double)plVar18[4] != dVar5) || (NAN((double)plVar18[4]) || NAN(dVar5))) ||
         (((double)plVar18[5] != dVar6 || (NAN((double)plVar18[5]) || NAN(dVar6))))) {
LAB_148ce22c9:
        auVar39._8_8_ = 0;
        auVar39._0_8_ = dVar32;
        dVar2 = (double)DAT_1499387d0;
        dVar3 = DAT_1499387d0._8_8_;
        auVar23 = divpd(auVar23,_DAT_1499387d0);
        auVar29 = divpd(auVar39,_DAT_1499387d0);
        auVar23 = roundpd(auVar23,auVar23,3);
        auVar29 = roundpd(auVar29,auVar29,3);
        dVar5 = dVar5 - auVar23._0_8_ * dVar2;
        dVar6 = dVar6 - auVar23._8_8_ * dVar3;
        auVar40._0_8_ = dVar32 - auVar29._0_8_ * dVar2;
        auVar40._8_8_ = 0.0 - auVar29._8_8_ * dVar3;
        auVar36._0_8_ = dVar5 + dVar2;
        auVar36._8_8_ = dVar6 + dVar3;
        auVar34._0_8_ = dVar2 + auVar40._0_8_;
        auVar34._8_8_ = dVar3 + auVar40._8_8_;
        auVar29._8_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar29._0_8_ = -(ulonglong)(0.0 <= dVar5);
        auVar23._8_4_ = SUB84(dVar6,0);
        auVar23._0_8_ = dVar5;
        auVar23._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar29 = blendvpd(auVar36,auVar23,auVar29);
        auVar27._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_);
        auVar27._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_);
        auVar23 = blendvpd(auVar34,auVar40,auVar27);
        auVar31._0_8_ = auVar29._0_8_ + -360.0;
        auVar31._8_8_ = auVar29._8_8_ + -360.0;
        auVar28._8_8_ = -(ulonglong)(180.0 < auVar29._8_8_);
        auVar28._0_8_ = -(ulonglong)(180.0 < auVar29._0_8_);
        auVar29 = blendvpd(auVar29,auVar31,auVar28);
        dVar32 = auVar23._0_8_;
        *(undefined1 (*) [16])(plVar18 + 4) = auVar29;
        plVar18[6] = ~-(ulonglong)(180.0 < dVar32) & (ulonglong)dVar32 |
                     (ulonglong)(dVar32 + -360.0) & -(ulonglong)(180.0 < dVar32);
        FUN_144a7484c(plVar18 + 4,local_1f8);
        plVar18[2] = local_1f8[2];
        plVar18[3] = local_1f8[3];
        *plVar18 = local_1f8[0];
        plVar18[1] = local_1f8[1];
      }
      else if (((double)plVar18[6] != dVar32) || (NAN((double)plVar18[6]) || NAN(dVar32)))
      goto LAB_148ce22c9;
      local_1f8[0] = *plVar18;
      local_1f8[1] = plVar18[1];
      local_1f8[2] = plVar18[2];
      local_1f8[3] = plVar18[3];
      local_128 = local_d8;
      uStack_120 = lStack_d0;
      local_118 = local_c8;
      local_210 = local_210 & 0xffffffffffffff00;
      local_218 = 0;
      FUN_144927ad4(lVar12,&local_128,local_1f8,0);
    }
  }
  plVar18 = *(longlong **)(param_1 + 0x28);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x420))(plVar18,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x18);
  lVar13 = (**(code **)(*(longlong *)(lVar12 + 0x30) + 0x10))(lVar12 + 0x30);
  if (lVar13 != 0) {
    if ((*(byte *)(lVar12 + 0x38) & 2) == 0) {
      lVar12 = *(longlong *)(lVar12 + 0x3a8);
    }
    else {
      lVar12 = *(longlong *)(lVar12 + 0x3b0);
    }
    if (lVar12 != 0) {
      FUN_1446f470e(&local_e0,L"FirstPersonLegs",1);
      local_210 = 0;
      local_218 = local_218 & 0xffffffffffffff00;
      lVar12 = FUN_145758b06(param_3,local_e0,0,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x28) = lVar12;
      FUN_140486fc4(lVar12,lVar11,0);
      lVar12 = *(longlong *)(param_1 + 0x28);
      local_e8 = DAT_14c8464f0;
      local_f8 = DAT_14c8464e0;
      lStack_f0 = DAT_14c8464e8;
      auVar23 = *(undefined1 (*) [16])(lVar12 + 0x1b0);
      dVar5 = auVar23._0_8_;
      dVar6 = auVar23._8_8_;
      dVar32 = *(double *)(lVar12 + 0x1c0);
      plVar18 = *(longlong **)(lVar12 + 0x230);
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)FUN_14001cc68(0x40,0x10);
        lVar13 = DAT_14c8463d8;
        *plVar18 = DAT_14c8463d0;
        plVar18[1] = lVar13;
        lVar13 = DAT_14c8463e8;
        plVar18[2] = DAT_14c8463e0;
        plVar18[3] = lVar13;
        lVar13 = DAT_14c846500;
        plVar18[4] = DAT_14c8464f8;
        plVar18[5] = lVar13;
        plVar18[6] = DAT_14c846508;
        *(longlong **)(lVar12 + 0x230) = plVar18;
      }
      if (((((double)plVar18[4] != dVar5) || (NAN((double)plVar18[4]) || NAN(dVar5))) ||
          ((double)plVar18[5] != dVar6)) || (NAN((double)plVar18[5]) || NAN(dVar6))) {
LAB_148ce1e10:
        auVar37._8_8_ = 0;
        auVar37._0_8_ = dVar32;
        dVar2 = (double)DAT_1499387d0;
        dVar3 = DAT_1499387d0._8_8_;
        auVar23 = divpd(auVar23,_DAT_1499387d0);
        auVar29 = divpd(auVar37,_DAT_1499387d0);
        auVar23 = roundpd(auVar23,auVar23,3);
        auVar29 = roundpd(auVar29,auVar29,3);
        dVar5 = dVar5 - auVar23._0_8_ * dVar2;
        dVar6 = dVar6 - auVar23._8_8_ * dVar3;
        auVar38._0_8_ = dVar32 - auVar29._0_8_ * dVar2;
        auVar38._8_8_ = 0.0 - auVar29._8_8_ * dVar3;
        auVar35._0_8_ = dVar5 + dVar2;
        auVar35._8_8_ = dVar6 + dVar3;
        auVar33._0_8_ = dVar2 + auVar38._0_8_;
        auVar33._8_8_ = dVar3 + auVar38._8_8_;
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar5);
        auVar4._8_4_ = SUB84(dVar6,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar29 = blendvpd(auVar35,auVar4,auVar24);
        auVar25._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
        auVar25._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
        auVar23 = blendvpd(auVar33,auVar38,auVar25);
        auVar30._0_8_ = auVar29._0_8_ + -360.0;
        auVar30._8_8_ = auVar29._8_8_ + -360.0;
        auVar26._8_8_ = -(ulonglong)(180.0 < auVar29._8_8_);
        auVar26._0_8_ = -(ulonglong)(180.0 < auVar29._0_8_);
        auVar29 = blendvpd(auVar29,auVar30,auVar26);
        dVar32 = auVar23._0_8_;
        *(undefined1 (*) [16])(plVar18 + 4) = auVar29;
        plVar18[6] = ~-(ulonglong)(180.0 < dVar32) & (ulonglong)dVar32 |
                     (ulonglong)(dVar32 + -360.0) & -(ulonglong)(180.0 < dVar32);
        FUN_144a7484c(plVar18 + 4,local_1f8);
        plVar18[2] = local_1f8[2];
        plVar18[3] = local_1f8[3];
        *plVar18 = local_1f8[0];
        plVar18[1] = local_1f8[1];
      }
      else if (((double)plVar18[6] != dVar32) || (NAN((double)plVar18[6]) || NAN(dVar32)))
      goto LAB_148ce1e10;
      local_1f8[0] = *plVar18;
      local_1f8[1] = plVar18[1];
      local_1f8[2] = plVar18[2];
      local_1f8[3] = plVar18[3];
      local_128 = local_f8;
      uStack_120 = lStack_f0;
      local_118 = local_e8;
      local_210 = local_210 & 0xffffffffffffff00;
      local_218 = 0;
      FUN_144927ad4(lVar12,&local_128,local_1f8,0);
      lVar12 = *(longlong *)(param_1 + 0x18);
      lVar13 = *(longlong *)(param_1 + 0x28);
      if ((*(byte *)(lVar12 + 0x38) & 2) == 0) {
        FUN_1406547e8(lVar13,*(undefined8 *)(lVar12 + 0x3a8),1);
      }
      else {
        lVar12 = *(longlong *)(lVar12 + 0x3b0);
        if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar12);
        }
        *(longlong *)(lVar13 + 0x1630) = lVar12;
        FUN_148811d30(*(undefined8 *)(param_1 + 0x28),1);
      }
      FUN_140efa230(*(longlong *)(param_1 + 0x28) + 0x1288,*(longlong *)(param_1 + 0x18) + 0x3c0);
      uVar21 = 0;
      FUN_14073397e(*(undefined8 *)(param_1 + 0x28),0,1);
      lVar12 = *(longlong *)(param_1 + 0x18);
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      lVar13 = *(longlong *)(lVar12 + 0x3b8);
      if (lVar13 != 0) {
        lVar17 = FUN_1402e44f4();
        if (((lVar17 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar17 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) !=
            lVar17 + 0x30)) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined8 *)(lVar12 + 0x3b8);
        }
      }
      FUN_14065465c(uVar16,uVar21);
      FUN_140c056bc(*(undefined8 *)(param_1 + 0x28),1);
      FUN_140357fa8(*(undefined8 *)(param_1 + 0x28),1,0);
      FUN_1417be62e(*(undefined8 *)(param_1 + 0x28),0);
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x89c) = 0;
      FUN_140b506a4(*(undefined8 *)(param_1 + 0x28));
      FUN_145e08e96(*(undefined8 *)(param_1 + 0x28),lVar11);
      FUN_140418574(*(undefined8 *)(param_1 + 0x28));
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x18);
  plVar18 = (longlong *)(lVar12 + 0x2d8);
  lVar11 = lVar12 + 0x2e8;
  local_1f8[0] = 0x100000000;
  local_1f8[2] = 0xffffffff;
  local_1f8[3] = local_1f8[3] & 0xffffffff00000000;
  local_1f8[1] = lVar11;
  if (*(int *)(lVar12 + 0x300) == 0) {
    iVar19 = 0;
  }
  else {
    FUN_1449c0562(local_1f8);
    iVar19 = *(int *)(lVar12 + 0x300);
  }
  local_110 = local_1f8[2];
  lVar12 = local_110;
  uStack_108 = local_1f8[3];
  uStack_120 = local_1f8[0];
  local_118 = local_1f8[1];
  local_110._4_4_ = (int)((ulonglong)local_1f8[2] >> 0x20);
  local_128 = plVar18;
  if ((local_110._4_4_ != iVar19) || (local_1f8[1] != lVar11)) {
    iVar10 = local_110._4_4_;
    local_110 = lVar12;
    do {
      memcpy(local_1f8,(void *)((longlong)iVar10 * 0xd8 + *local_128),0xd0);
      local_b0 = &DAT_14c846480;
      local_b8 = local_1f8;
      FUN_146112514(param_1 + 0x290,local_a4,&local_b8,0);
      local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~uStack_120._4_4_);
      FUN_1449c0562(&uStack_120);
      iVar10 = local_110._4_4_;
      lVar12 = local_110;
    } while (local_128 != plVar18 || (local_118 != lVar11 || local_110._4_4_ != iVar19));
  }
  local_110 = lVar12;
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB_148ce18d4:
  if ((local_a0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce25e8 FUN_148ce25e8 body=242 status=ok
// SIG undefined FUN_148ce25e8(void)

void FUN_148ce25e8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    if (((*(byte *)(plVar1 + 0x84) & 2) != 0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x6c8))(), cVar2 != '\0')) {
      return;
    }
    lVar3 = FUN_144a2f878();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (param_1 != (longlong *)0x0)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      lVar3 = (**(code **)(*param_1 + 8))(param_1);
      lVar4 = FUN_140458448();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar3 = param_1[0x4f];
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) {
          return;
        }
        FUN_140efa230(param_2 + 0x75e8,lVar3 + 0x68);
        if (*(char *)(param_2 + 0x7690) == '\x01') {
          FUN_1405ea3a2(param_2 + 0x75e8,param_2 + 0x76b8,0);
          *(undefined2 *)(param_2 + 0x7690) = 0x100;
        }
      }
    }
  }
  return;
}



// FUNCTION 148ce26da FUN_148ce26da body=76 status=ok
// SIG undefined FUN_148ce26da(void)

void FUN_148ce26da(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x10c8) + 0x38))(lVar1 + 0x10c8);
    if ((lVar1 != 0) && ((char)param_1[2] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000148ce2723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1,lVar1,param_1[1],*(code **)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 148ce2726 FUN_148ce2726 body=6360 status=ok
// SIG undefined FUN_148ce2726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ce2726(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar18;
  uint uVar19;
  undefined1 *_Src;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar58;
  double dVar59;
  double dVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar67;
  double dVar70;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStack_388 [32];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  longlong *local_338;
  undefined8 uStack_330;
  longlong *local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 local_314;
  longlong **local_310;
  longlong local_308;
  float *local_300;
  longlong *local_2f8;
  float local_2ec;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  double local_2a0;
  double local_298;
  double local_288;
  double local_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  longlong *local_178;
  undefined8 uStack_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  longlong **pplVar17;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  fVar23 = *(float *)(param_1 + 0x1a4) + param_2;
  *(float *)(param_1 + 0x1a4) = fVar23;
  fVar23 = fVar23 / *(float *)(param_1 + 0x19c);
  fVar24 = 1.0;
  if (fVar23 <= 1.0) {
    fVar24 = fVar23;
  }
  uVar21 = -(uint)(0.0 < *(float *)(param_1 + 0x19c));
  fVar24 = (float)(~uVar21 & 0x3f800000 | (uint)fVar24 & uVar21);
  local_2ec = param_2;
  if (0.0 < *(float *)(param_1 + 0x1a0)) {
    fVar24 = powf(1.0 - fVar24,*(float *)(param_1 + 0x1a0) + 1.0);
    fVar24 = 1.0 - fVar24;
  }
  dVar32 = (double)fVar24;
  *(double *)(param_1 + 0xd8) =
       (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0)) * dVar32 +
       *(double *)(param_1 + 0xf0);
  *(double *)(param_1 + 0xe0) =
       (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8)) * dVar32 +
       *(double *)(param_1 + 0xf8);
  *(double *)(param_1 + 0xe8) =
       (*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100)) * dVar32 +
       *(double *)(param_1 + 0x100);
  plVar12 = *(longlong **)(param_1 + 8);
  if (plVar12 != (longlong *)0x0) {
    uVar11 = FUN_144a854b6();
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,uVar11);
    if (plVar12 != (longlong *)0x0) {
      uVar11 = FUN_144a854b6();
      local_2f8 = (longlong *)FUN_144718840(plVar12,uVar11);
      if (plVar12 != local_2f8) {
        plVar12 = local_2b0;
        if (((local_2f8 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
           (*(longlong *)(param_1 + 0x18) != 0)) {
          local_310 = &local_2f8;
          local_300 = &local_2ec;
          local_308 = param_1;
          FUN_1440cbbc6(&local_310,param_1 + 0x230,*(longlong *)(param_1 + 0x18) + 0x218);
          lVar16 = *(longlong *)(param_1 + 0x18);
          plVar12 = (longlong *)(lVar16 + 0x2d8);
          plVar1 = (longlong *)(lVar16 + 0x2e8);
          local_2c8 = (longlong *)&DAT_100000000;
          local_2b8 = (longlong *)&DAT_ffffffff;
          local_2b0 = (longlong *)((ulonglong)local_2b0 & 0xffffffff00000000);
          iVar10 = 0;
          local_2c0 = plVar1;
          if (*(int *)(lVar16 + 0x300) != 0) {
            FUN_1449c0562(&local_2c8);
            iVar10 = *(int *)(lVar16 + 0x300);
          }
          uStack_160 = local_2b8;
          plVar15 = uStack_160;
          uVar22 = (ulonglong)local_2b0 >> 0x20;
          local_158._0_8_ = local_2b0;
          uStack_170 = local_2c8;
          local_168 = local_2c0;
          uStack_160._4_4_ = (int)((ulonglong)local_2b8 >> 0x20);
          local_178 = plVar12;
          if ((uStack_160._4_4_ != iVar10) || (local_2c0 != plVar1)) {
            iVar13 = uStack_160._4_4_;
            uStack_160 = plVar15;
            do {
              _Src = (undefined1 *)((longlong)iVar13 * 0xd8 + *local_178);
              memcpy(&local_2c8,_Src,0xd0);
              if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
                uVar21 = (uint)((ulonglong)local_2c8 >> 0x10);
                uVar19 = (uint)local_2c8 & 0xffff;
                lVar16 = *(longlong *)(param_1 + 0x2d0);
                if (*(longlong *)(param_1 + 0x2d0) == 0) {
                  lVar16 = param_1 + 0x2c8;
                }
                uVar21 = *(uint *)(lVar16 + (ulonglong)
                                            (*(int *)(param_1 + 0x2d8) - 1U &
                                            (int)((ulonglong)local_2c8 >> 0x20) +
                                            ((uint)local_2c8 << 0x10 | uVar19) +
                                            (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar19 >> 4)) * 4)
                ;
                _Src = (undefined1 *)(ulonglong)uVar21;
                if (uVar21 != 0xffffffff) {
                  do {
                    lVar20 = (longlong)(int)_Src * 0x80;
                    lVar16 = *(longlong *)(param_1 + 0x290) + lVar20;
                    if (*(longlong **)(*(longlong *)(param_1 + 0x290) + lVar20) == local_2c8) {
                      _Src = (undefined1 *)(lVar16 + 0x10);
                      if (_Src != (undefined1 *)0x0 && lVar16 != 0) {
                        FUN_1440cbbc6(&local_310,_Src,&local_2b8);
                      }
                      goto LAB_148ce2d7f;
                    }
                    _Src = (undefined1 *)(ulonglong)*(uint *)(lVar16 + 0x70);
                  } while (*(uint *)(lVar16 + 0x70) != 0xffffffff);
                  _Src = &DAT_ffffffff;
                }
              }
LAB_148ce2d7f:
              uStack_160 = (longlong *)
                           CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
              FUN_1449c0562(&uStack_170);
              bVar18 = local_178 != plVar12 || (local_168 != plVar1 || uStack_160._4_4_ != iVar10);
              uVar22 = CONCAT71((int7)((ulonglong)_Src >> 8),bVar18);
              iVar13 = uStack_160._4_4_;
              plVar15 = uStack_160;
            } while (bVar18);
          }
          uStack_160 = plVar15;
          cVar9 = (**(code **)(*local_2f8 + 0x48))(local_2f8,CONCAT71((int7)(uVar22 >> 8),1));
          plVar12 = local_2b0;
          if (cVar9 != '\0') {
            dVar30 = *(double *)(param_1 + 0x2e8);
            dVar31 = *(double *)(param_1 + 0x2f0);
            dVar32 = *(double *)(param_1 + 0x2f8);
            lVar16 = *(longlong *)(param_1 + 0x18);
            plVar12 = (longlong *)(lVar16 + 0x2d8);
            plVar1 = (longlong *)(lVar16 + 0x2e8);
            local_2c8 = (longlong *)&DAT_100000000;
            local_2b8 = (longlong *)&DAT_ffffffff;
            local_2b0 = (longlong *)((ulonglong)local_2b0 & 0xffffffff00000000);
            iVar10 = 0;
            local_2c0 = plVar1;
            if (*(int *)(lVar16 + 0x300) != 0) {
              FUN_1449c0562(&local_2c8);
              iVar10 = *(int *)(lVar16 + 0x300);
            }
            uStack_320 = local_2b8;
            plVar15 = uStack_320;
            local_318 = (uint)local_2b0;
            local_314 = local_2b0._4_4_;
            uStack_330 = local_2c8;
            local_328 = local_2c0;
            uStack_320._4_4_ = (int)((ulonglong)local_2b8 >> 0x20);
            dVar3 = 1.0;
            dVar59 = 0.0;
            local_338 = plVar12;
            uStack_320 = plVar15;
            if ((uStack_320._4_4_ == iVar10) && (local_2c0 == plVar1)) {
              dVar33 = 0.0;
              dVar38 = 0.0;
              auVar52 = ZEXT816(0x3ff0000000000000) << 0x40;
              dVar67 = 1.0;
              dVar70 = 1.0;
              plVar15 = local_2c0;
              iVar13 = uStack_320._4_4_;
            }
            else {
              auVar52 = ZEXT816(0x3ff0000000000000) << 0x40;
              dVar67 = 1.0;
              dVar70 = 1.0;
              dVar3 = 1.0;
              dVar59 = 0.0;
              dVar33 = 0.0;
              dVar38 = 0.0;
              iVar13 = uStack_320._4_4_;
              do {
                auVar68 = _DAT_149934d80;
                if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
                  lVar16 = *(longlong *)(*local_338 + (longlong)iVar13 * 0xd8);
                  uVar21 = (uint)((ulonglong)lVar16 >> 0x10);
                  uVar19 = (uint)lVar16 & 0xffff;
                  lVar20 = *(longlong *)(param_1 + 0x2d0);
                  if (*(longlong *)(param_1 + 0x2d0) == 0) {
                    lVar20 = param_1 + 0x2c8;
                  }
                  iVar13 = *(int *)(lVar20 + (ulonglong)
                                             (*(int *)(param_1 + 0x2d8) - 1U &
                                             (int)((ulonglong)lVar16 >> 0x20) +
                                             ((uint)lVar16 << 0x10 | uVar19) +
                                             (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar19 >> 4)) * 4
                                   );
                  if (iVar13 != -1) {
                    lVar20 = *(longlong *)(param_1 + 0x290);
                    do {
                      lVar2 = lVar20 + (longlong)iVar13 * 0x80;
                      if (*(longlong *)(lVar20 + (longlong)iVar13 * 0x80) == lVar16) {
                        if ((lVar2 + 0x10U & 0xffffffffffffffef) != 0) {
                          auVar34 = *(undefined1 (*) [16])(lVar2 + 0x50);
                          dVar47 = auVar34._0_8_;
                          dVar46 = auVar34._8_8_;
                          auVar40 = *(undefined1 (*) [16])(lVar2 + 0x60);
                          dVar55 = auVar40._0_8_;
                          auVar43._8_8_ = dVar70;
                          auVar43._0_8_ = dVar67;
                          auVar34 = minpd(auVar43,auVar34);
                          auVar42._8_8_ = dVar59;
                          auVar42._0_8_ = dVar3;
                          auVar43 = minpd(auVar42,auVar40);
                          auVar36._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
                          auVar36._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
                          iVar13 = movmskpd((int)(lVar2 + 0x10U),auVar36);
                          auVar34._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
                          auVar34._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
                          uVar21 = movmskpd((int)lVar20,auVar34);
                          dVar54 = auVar52._0_8_;
                          dVar58 = auVar52._8_8_;
                          if ((uVar21 & 0x3fffffff) == 0 && iVar13 == 0) {
                            dVar6 = *(double *)(lVar2 + 0x10);
                            dVar7 = *(double *)(lVar2 + 0x18);
                            dVar8 = *(double *)(lVar2 + 0x20);
                            dVar62 = *(double *)(lVar2 + 0x28);
                            dVar50 = *(double *)(lVar2 + 0x28);
                            local_368._8_4_ = SUB84(dVar59,0);
                            local_368._0_8_ = dVar3;
                            local_368._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
                            dVar59 = *(double *)(lVar2 + 0x10);
                            dVar56 = *(double *)(lVar2 + 0x10);
                            dVar64 = dVar59 * dVar38;
                            dVar65 = dVar56 * dVar33;
                            dVar45 = *(double *)(lVar2 + 0x18);
                            dVar48 = *(double *)(lVar2 + 0x18);
                            dVar4 = dVar33 * dVar45;
                            dVar5 = dVar38 * dVar48;
                            dVar49 = *(double *)(lVar2 + 0x20);
                            dVar63 = *(double *)(lVar2 + 0x20);
                            dVar57 = dVar33 * dVar63;
                            dVar33 = dVar38 * dVar49 * -1.0 +
                                     dVar54 * dVar45 + dVar58 * dVar59 * 1.0 + dVar33 * dVar62;
                            dVar38 = dVar57 * 1.0 +
                                     dVar58 * dVar48 + dVar54 * dVar56 * -1.0 + dVar38 * dVar50;
                            dVar30 = dVar30 * dVar47;
                            dVar31 = dVar31 * dVar46;
                            dVar32 = dVar32 * dVar55;
                            dVar59 = dVar31 * dVar6 - dVar30 * dVar7;
                            dVar56 = dVar32 * dVar7 - dVar31 * dVar8;
                            dVar45 = dVar30 * dVar8 - dVar32 * dVar6;
                            dVar56 = dVar56 + dVar56;
                            dVar45 = dVar45 + dVar45;
                            dVar59 = dVar59 + dVar59;
                            dVar30 = (dVar59 * dVar7 - dVar8 * dVar45) + dVar62 * dVar56 + dVar30 +
                                     *(double *)(lVar2 + 0x30);
                            dVar31 = (dVar56 * dVar8 - dVar59 * dVar6) + dVar50 * dVar45 + dVar31 +
                                     *(double *)(lVar2 + 0x38);
                            dVar32 = (dVar45 * dVar6 - dVar7 * dVar56) + dVar62 * dVar59 + dVar32 +
                                     *(double *)(lVar2 + 0x40);
                            auVar52._8_8_ =
                                 dVar54 * dVar63 * -1.0 +
                                 ((dVar65 * -1.0 + dVar58 * dVar50) - dVar5);
                            auVar52._0_8_ =
                                 dVar58 * dVar49 * 1.0 + ((dVar64 * 1.0 + dVar54 * dVar62) - dVar4);
                            dVar59 = (double)local_368._8_8_;
                          }
                          else {
                            local_368._8_4_ = SUB84(dVar31,0);
                            local_368._0_8_ = dVar30;
                            local_368._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
                            dVar62 = *(double *)(lVar2 + 0x10);
                            dVar50 = *(double *)(lVar2 + 0x18);
                            dVar56 = *(double *)(lVar2 + 0x20);
                            dVar45 = dVar50 + dVar50;
                            dVar48 = dVar56 + dVar56;
                            dVar64 = dVar62 * (dVar62 + dVar62);
                            local_128 = (1.0 - (dVar64 + dVar50 * dVar45)) * dVar55;
                            dVar65 = *(double *)(lVar2 + 0x10) * dVar48;
                            dVar31 = *(double *)(lVar2 + 0x28);
                            dVar49 = dVar48 * dVar31;
                            dVar63 = (dVar62 + dVar62) * *(double *)(lVar2 + 0x28);
                            dVar31 = dVar45 * dVar31;
                            local_138 = (dVar31 + dVar65) * dVar55;
                            dStack_130 = (dVar48 * dVar50 - dVar63) * dVar55;
                            local_178 = (longlong *)
                                        ((1.0 - (dVar56 * dVar48 + dVar50 * dVar45)) * dVar47);
                            uStack_170 = (longlong *)((dVar45 * dVar62 + dVar49) * dVar47);
                            local_148 = (dVar48 * dVar50 + dVar63) * dVar46;
                            local_168 = (longlong *)((dVar65 - dVar31) * dVar47);
                            uStack_160 = (longlong *)0x0;
                            local_158._8_8_ = (1.0 - (dVar56 * dVar48 + dVar64)) * dVar46;
                            local_158._0_8_ = (dVar45 * dVar62 - dVar49) * dVar46;
                            uStack_140 = 0;
                            uStack_120 = 0;
                            local_118 = *(double *)(lVar2 + 0x30);
                            dStack_110 = *(double *)(lVar2 + 0x38);
                            local_108 = *(double *)(lVar2 + 0x40);
                            uStack_100 = 0x3ff0000000000000;
                            dVar31 = dVar38 + dVar38;
                            dVar50 = dVar54 + dVar54;
                            dVar62 = dVar33 * (dVar33 + dVar33);
                            local_1a8 = (1.0 - (dVar62 + dVar38 * dVar31)) * dVar3;
                            dVar56 = (dVar33 + dVar33) * dVar58;
                            local_1b8 = (dVar31 * dVar58 + dVar33 * dVar50) * dVar3;
                            local_1d8 = (dVar31 * dVar33 - dVar50 * dVar58) * dVar70;
                            dStack_1b0 = (dVar50 * dVar38 - dVar56) * dVar3;
                            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar54 * dVar50 + dVar62)) * dVar70
                            ;
                            local_1c8 = (dVar50 * dVar38 + dVar56) * dVar70;
                            local_1e8 = (dVar33 * dVar50 - dVar31 * dVar58) * dVar67;
                            local_1f8._8_8_ = (dVar31 * dVar33 + dVar50 * dVar58) * dVar67;
                            local_1f8._0_8_ =
                                 ((double)DAT_149934d80 - (dVar54 * dVar50 + dVar38 * dVar31)) *
                                 dVar67;
                            uStack_1e0 = 0;
                            uStack_1c0 = 0;
                            uStack_1a0 = 0;
                            local_198._8_8_ = local_368._8_8_;
                            local_198._0_8_ = dVar30;
                            local_188._8_4_ = 0;
                            local_188._0_8_ = dVar32;
                            local_188._12_4_ = 0x3ff00000;
                            FUN_1447fea8d(&local_2c8,local_1f8,&local_178);
                            FUN_144a1c686(&local_2c8,0x3e45798ee0000000);
                            auVar25._8_8_ = -(ulonglong)(0.0 <= dVar70 * dVar46);
                            auVar25._0_8_ = -(ulonglong)(0.0 <= dVar67 * dVar47);
                            auVar52 = blendvpd(_DAT_149936790,auVar68,auVar25);
                            uVar22 = -(ulonglong)(0.0 <= dVar3 * dVar55);
                            dVar32 = (double)(~uVar22 & 0xbff0000000000000 |
                                             uVar22 & 0x3ff0000000000000);
                            dVar30 = auVar52._0_8_;
                            local_2b8 = (longlong *)((double)local_2b8 * dVar30);
                            local_2c0 = (longlong *)((double)local_2c0 * dVar30);
                            local_2c8 = (longlong *)((double)local_2c8 * dVar30);
                            dVar30 = auVar52._8_8_;
                            local_298 = local_298 * dVar30;
                            local_2a0 = local_2a0 * dVar30;
                            local_2a8 = (longlong *)(dVar30 * (double)local_2a8);
                            local_278 = local_278 * dVar32;
                            local_280 = local_280 * dVar32;
                            local_288 = dVar32 * local_288;
                            FUN_14481fd10(&local_2e8,&local_2c8);
                            dVar32 = local_2d8._0_8_;
                            dVar30 = local_2d8._8_8_;
                            dVar31 = dVar32 * dVar32 + local_2e8 * local_2e8;
                            dVar33 = dVar30 * dVar30 + dStack_2e0 * dStack_2e0;
                            auVar37._0_8_ = dVar31 + dVar33;
                            auVar37._8_8_ = dVar31 + dVar33;
                            auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
                            auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
                            auVar52 = sqrtpd(auVar37,auVar37);
                            auVar68 = divpd(auVar68,auVar52);
                            auVar69._0_8_ = auVar68._0_8_ * dVar32;
                            auVar69._8_8_ = auVar68._8_8_ * dVar30;
                            auVar52 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar26);
                            dVar33 = (double)((ulonglong)(local_2e8 * auVar68._0_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
                            dVar38 = (double)((ulonglong)(dStack_2e0 * auVar68._8_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
                            dVar30 = local_268;
                            dVar31 = dStack_260;
                            dVar32 = local_258;
                          }
                          dVar3 = dVar3 * dVar55;
                          dVar70 = dVar70 * dVar46;
                          dVar67 = dVar67 * dVar47;
                          dVar59 = dVar59 * auVar40._8_8_;
                        }
                        break;
                      }
                      iVar13 = *(int *)(lVar2 + 0x70);
                    } while (iVar13 != -1);
                  }
                }
                uStack_320 = (longlong *)
                             CONCAT44(uStack_320._4_4_,(uint)uStack_320 & ~uStack_330._4_4_);
                FUN_1449c0562(&uStack_330);
                plVar15 = local_338;
                iVar13 = uStack_320._4_4_;
              } while (local_338 != plVar12 || (local_328 != plVar1 || uStack_320._4_4_ != iVar10));
            }
            auVar68 = _DAT_149934d80;
            auVar40._8_8_ = dVar70;
            auVar40._0_8_ = dVar67;
            auVar34 = minpd(auVar40,_DAT_149934d80);
            auVar39._8_8_ = dVar59;
            auVar39._0_8_ = dVar3;
            auVar40 = minpd(auVar39,ZEXT816(0x3ff0000000000000));
            auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
            auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
            iVar10 = movmskpd(iVar13,auVar35);
            auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
            auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
            uVar21 = movmskpd((int)plVar15,auVar41);
            dVar47 = auVar52._0_8_;
            dVar55 = auVar52._8_8_;
            if ((uVar21 & 0x3fffffff) == 0 && iVar10 == 0) {
              dVar46 = dVar33 * 0.0;
              dVar54 = dVar38 * 0.0;
              dVar58 = dVar55 * 0.0 * 1.0;
              dVar62 = dVar47 * 0.0 * -1.0;
              dVar33 = dVar54 * -1.0 + dVar33 + dVar58 + dVar47 * 0.0;
              dVar38 = dVar46 * 1.0 + dVar38 + dVar62 + dVar55 * 0.0;
              auVar66._0_8_ = ((dVar54 * 1.0 + dVar47) - dVar46) + dVar58;
              auVar66._8_8_ = ((dVar46 * -1.0 + dVar55) - dVar54) + dVar62;
              dVar32 = dVar32 * 1.0;
              dVar47 = dVar31 * 0.0 - dVar30 * 0.0;
              dVar55 = dVar32 * 0.0 - dVar31 * 0.0;
              dVar46 = dVar30 * 0.0 - dVar32 * 0.0;
              dVar55 = dVar55 + dVar55;
              dVar46 = dVar46 + dVar46;
              dVar47 = dVar47 + dVar47;
              uVar14 = 0;
              dVar32 = *(double *)(param_1 + 0x310) +
                       (dVar46 * 0.0 - dVar55 * 0.0) + dVar32 + dVar47;
              dVar30 = *(double *)(param_1 + 0x300) +
                       (dVar47 * 0.0 - dVar46 * 0.0) + dVar30 + dVar55;
              dVar31 = *(double *)(param_1 + 0x308) +
                       (dVar55 * 0.0 - dVar47 * 0.0) + dVar31 + dVar46;
            }
            else {
              local_178 = (longlong *)&DAT_3ff0000000000000;
              uStack_170 = (longlong *)0x0;
              local_168 = (longlong *)0x0;
              uStack_160 = (longlong *)0x0;
              local_148 = 0.0;
              uStack_140 = 0;
              local_138 = 0.0;
              dStack_130 = 0.0;
              local_128 = 1.0;
              uStack_120 = 0;
              uStack_100 = 0x3ff0000000000000;
              dVar46 = dVar38 + dVar38;
              dVar58 = dVar47 + dVar47;
              dVar54 = dVar33 * (dVar33 + dVar33);
              dStack_1d0 = (DAT_149934d80._8_8_ - (dVar47 * dVar58 + dVar54)) * dVar70;
              dVar62 = (dVar33 + dVar33) * dVar55;
              local_1d8 = (dVar46 * dVar33 - dVar58 * dVar55) * dVar70;
              dStack_1b0 = (dVar58 * dVar38 - dVar62) * dVar3;
              local_1b8 = (dVar46 * dVar55 + dVar33 * dVar58) * dVar3;
              local_1c8 = (dVar58 * dVar38 + dVar62) * dVar70;
              local_1f8._8_8_ = (dVar46 * dVar33 + dVar58 * dVar55) * dVar67;
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 - (dVar47 * dVar58 + dVar38 * dVar46)) * dVar67;
              local_1e8 = (dVar33 * dVar58 - dVar46 * dVar55) * dVar67;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              local_1a8 = (1.0 - (dVar54 + dVar38 * dVar46)) * dVar3;
              uStack_1a0 = 0;
              local_198._8_4_ = SUB84(dVar31,0);
              local_198._0_8_ = dVar30;
              local_198._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
              local_188._8_4_ = 0;
              local_188._0_8_ = dVar32;
              local_188._12_4_ = 0x3ff00000;
              local_158 = ZEXT816(0x3ff0000000000000) << 0x40;
              local_118 = *(double *)(param_1 + 0x300);
              dStack_110 = *(double *)(param_1 + 0x308);
              local_108 = *(double *)(param_1 + 0x310);
              FUN_1447fea8d(&local_2c8);
              FUN_144a1c686(&local_2c8,0x3e45798ee0000000);
              auVar27._8_8_ = -(ulonglong)(0.0 <= dVar70);
              auVar27._0_8_ = -(ulonglong)(0.0 <= dVar67);
              auVar52 = blendvpd(_DAT_149936790,auVar68,auVar27);
              uVar22 = -(ulonglong)(0.0 <= dVar3 * 1.0);
              dVar32 = (double)(~uVar22 & 0xbff0000000000000 |
                               (ulonglong)((uint)(uVar22 >> 0x20) & 0x3ff00000) << 0x20);
              dVar30 = auVar52._0_8_;
              local_2b8 = (longlong *)((double)local_2b8 * dVar30);
              local_2c0 = (longlong *)((double)local_2c0 * dVar30);
              local_2c8 = (longlong *)((double)local_2c8 * dVar30);
              dVar30 = auVar52._8_8_;
              local_298 = local_298 * dVar30;
              local_2a0 = local_2a0 * dVar30;
              local_2a8 = (longlong *)(dVar30 * (double)local_2a8);
              local_278 = local_278 * dVar32;
              local_280 = local_280 * dVar32;
              local_288 = dVar32 * local_288;
              pplVar17 = &local_338;
              iVar10 = FUN_14481fd10(pplVar17,&local_2c8);
              uVar14 = SUB84(pplVar17,0);
              dVar32 = (double)local_328 * (double)local_328 + (double)local_338 * (double)local_338
              ;
              dVar30 = (double)uStack_320 * (double)uStack_320 +
                       (double)uStack_330 * (double)uStack_330;
              auVar44._0_8_ = dVar32 + dVar30;
              auVar44._8_8_ = dVar32 + dVar30;
              auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
              auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
              auVar52 = sqrtpd(auVar44,auVar44);
              auVar52 = divpd(auVar68,auVar52);
              auVar68._0_8_ = auVar52._0_8_ * (double)local_328;
              auVar68._8_8_ = auVar52._8_8_ * (double)uStack_320;
              dVar33 = (double)((ulonglong)((double)local_338 * auVar52._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
              dVar38 = (double)((ulonglong)((double)uStack_330 * auVar52._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
              auVar66 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar28);
              dVar32 = local_258;
              dVar30 = local_268;
              dVar31 = dStack_260;
            }
            auVar34 = _DAT_149934d80;
            dVar3 = dVar3 * 1.0;
            dVar59 = dVar59 * 0.0;
            auVar52 = *(undefined1 (*) [16])(param_1 + 0x270);
            dVar47 = auVar52._0_8_;
            dVar46 = auVar52._8_8_;
            auVar68 = *(undefined1 (*) [16])(param_1 + 0x280);
            dVar55 = auVar68._0_8_;
            auVar51._8_8_ = dVar70;
            auVar51._0_8_ = dVar67;
            auVar52 = minpd(auVar51,auVar52);
            auVar60._8_8_ = dVar59;
            auVar60._0_8_ = dVar3;
            auVar40 = minpd(auVar60,auVar68);
            auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
            auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
            iVar10 = movmskpd(iVar10,auVar53);
            auVar61._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
            auVar61._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
            uVar21 = movmskpd(uVar14,auVar61);
            if ((uVar21 & 0x3fffffff) == 0 && iVar10 == 0) {
              dVar67 = *(double *)(param_1 + 0x230);
              dVar70 = *(double *)(param_1 + 0x238);
              dVar54 = *(double *)(param_1 + 0x240);
              dVar3 = *(double *)(param_1 + 0x248);
              dVar30 = dVar30 * dVar47;
              dVar31 = dVar31 * dVar46;
              dVar32 = dVar32 * dVar55;
              dVar59 = dVar31 * dVar67 - dVar30 * dVar70;
              dVar33 = dVar32 * dVar70 - dVar31 * dVar54;
              dVar38 = dVar30 * dVar54 - dVar32 * dVar67;
              dVar33 = dVar33 + dVar33;
              dVar38 = dVar38 + dVar38;
              dVar59 = dVar59 + dVar59;
              dVar30 = (dVar59 * dVar70 - dVar54 * dVar38) + dVar3 * dVar33 + dVar30 +
                       *(double *)(param_1 + 0x250);
              dVar31 = (dVar33 * dVar54 - dVar59 * dVar67) +
                       *(double *)(param_1 + 0x248) * dVar38 + dVar31 + *(double *)(param_1 + 600);
              dVar32 = (dVar38 * dVar67 - dVar70 * dVar33) + dVar3 * dVar59 + dVar32 +
                       *(double *)(param_1 + 0x260);
            }
            else {
              local_358._8_4_ = SUB84(dVar59,0);
              local_358._0_8_ = dVar3;
              local_358._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
              dVar48 = *(double *)(param_1 + 0x230);
              dVar49 = *(double *)(param_1 + 0x238);
              dVar45 = *(double *)(param_1 + 0x240);
              dVar63 = dVar49 + dVar49;
              dVar62 = dVar45 + dVar45;
              dVar54 = dVar48 * (dVar48 + dVar48);
              dVar58 = *(double *)(param_1 + 0x230) * dVar62;
              dVar59 = *(double *)(param_1 + 0x248);
              dVar50 = dVar62 * dVar59;
              dVar56 = (dVar48 + dVar48) * *(double *)(param_1 + 0x248);
              dVar59 = dVar63 * dVar59;
              dStack_130 = (dVar62 * dVar49 - dVar56) * dVar55;
              local_368._8_8_ = dVar70 * dVar46;
              local_368._0_8_ = dVar67 * dVar47;
              local_178 = (longlong *)((1.0 - (dVar45 * dVar62 + dVar49 * dVar63)) * dVar47);
              dVar45 = (1.0 - (dVar45 * dVar62 + dVar54)) * dVar46;
              uStack_170 = (longlong *)((dVar63 * dVar48 + dVar50) * dVar47);
              local_148 = (dVar62 * dVar49 + dVar56) * dVar46;
              local_138 = (dVar59 + dVar58) * dVar55;
              local_168 = (longlong *)((dVar58 - dVar59) * dVar47);
              local_128 = (1.0 - (dVar54 + dVar49 * dVar63)) * dVar55;
              uStack_160 = (longlong *)0x0;
              local_158._8_4_ = SUB84(dVar45,0);
              local_158._0_8_ = (dVar63 * dVar48 - dVar50) * dVar46;
              local_158._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = *(double *)(param_1 + 0x250);
              dStack_110 = *(double *)(param_1 + 600);
              local_108 = *(double *)(param_1 + 0x260);
              uStack_100 = 0x3ff0000000000000;
              dVar47 = dVar38 + dVar38;
              dVar58 = auVar66._0_8_;
              dVar62 = auVar66._8_8_;
              dVar46 = dVar58 + dVar58;
              dVar55 = dVar33 * (dVar33 + dVar33);
              dVar54 = (dVar33 + dVar33) * dVar62;
              local_1d8 = (dVar47 * dVar33 - dVar46 * dVar62) * dVar70;
              dStack_1b0 = (dVar46 * dVar38 - dVar54) * dVar3;
              dStack_1d0 = (DAT_149934d80._8_8_ - (dVar58 * dVar46 + dVar55)) * dVar70;
              dVar59 = (dVar47 * dVar33 + dVar46 * dVar62) * dVar67;
              local_1c8 = (dVar46 * dVar38 + dVar54) * dVar70;
              local_1b8 = (dVar47 * dVar62 + dVar33 * dVar46) * dVar3;
              local_1e8 = (dVar33 * dVar46 - dVar47 * dVar62) * dVar67;
              local_1f8._8_4_ = SUB84(dVar59,0);
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 - (dVar58 * dVar46 + dVar38 * dVar47)) * dVar67;
              local_1f8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              local_1a8 = (1.0 - (dVar55 + dVar38 * dVar47)) * dVar3;
              uStack_1a0 = 0;
              local_198._8_8_ = dVar31;
              local_198._0_8_ = dVar30;
              local_188._8_8_ = 0x3ff0000000000000;
              local_188._0_8_ = dVar32;
              local_348 = auVar68;
              FUN_1447fea8d(&local_2c8);
              FUN_144a1c686(&local_2c8,0x3e45798ee0000000);
              auVar29._8_8_ = -(ulonglong)(0.0 <= (double)local_368._8_8_);
              auVar29._0_8_ = -(ulonglong)(0.0 <= (double)local_368._0_8_);
              auVar52 = blendvpd(_DAT_149936790,auVar34,auVar29);
              uVar22 = -(ulonglong)(0.0 <= dVar3 * (double)local_348._0_8_);
              dVar32 = (double)(~uVar22 & 0xbff0000000000000 |
                               (ulonglong)((uint)(uVar22 >> 0x20) & 0x3ff00000) << 0x20);
              dVar30 = auVar52._0_8_;
              local_2b8 = (longlong *)((double)local_2b8 * dVar30);
              local_2c0 = (longlong *)((double)local_2c0 * dVar30);
              local_2c8 = (longlong *)((double)local_2c8 * dVar30);
              dVar30 = auVar52._8_8_;
              local_298 = local_298 * dVar30;
              local_2a0 = local_2a0 * dVar30;
              local_2a8 = (longlong *)(dVar30 * (double)local_2a8);
              local_278 = local_278 * dVar32;
              local_280 = local_280 * dVar32;
              local_288 = dVar32 * local_288;
              FUN_14481fd10(&local_338,&local_2c8);
              dVar30 = local_268;
              dVar31 = dStack_260;
              dVar32 = local_258;
            }
            iVar10 = *(int *)(param_1 + 0x298) - *(int *)(param_1 + 0x2c4);
            plVar12 = local_2b0;
            if (iVar10 != 0 && *(int *)(param_1 + 0x2c4) <= *(int *)(param_1 + 0x298)) {
              dVar3 = *(double *)(param_1 + 0x300);
              dVar59 = *(double *)(param_1 + 0x2e8);
              dVar33 = *(double *)(param_1 + 0x308);
              dVar38 = *(double *)(param_1 + 0x2f0);
              dVar67 = *(double *)(param_1 + 0x310);
              dVar70 = *(double *)(param_1 + 0x2f8);
              lVar16 = *(longlong *)(param_1 + 0x18);
              plVar1 = (longlong *)(lVar16 + 0x2d8);
              plVar15 = (longlong *)(lVar16 + 0x2e8);
              local_178 = (longlong *)&DAT_100000000;
              local_168 = (longlong *)&DAT_ffffffff;
              uStack_160 = (longlong *)((ulonglong)uStack_160 & 0xffffffff00000000);
              iVar13 = 0;
              uStack_170 = plVar15;
              if (*(int *)(lVar16 + 0x300) != 0) {
                FUN_1449c0562(&local_178);
                iVar13 = *(int *)(lVar16 + 0x300);
              }
              local_2b0 = local_168;
              plVar12 = local_2b0;
              local_2a8 = uStack_160;
              local_2c0 = local_178;
              local_2b8 = uStack_170;
              local_2b0._4_4_ = (int)((ulonglong)local_168 >> 0x20);
              local_2c8 = plVar1;
              if ((local_2b0._4_4_ != iVar13) || (uStack_170 != plVar15)) {
                dVar47 = 1.0 / (double)iVar10;
                iVar10 = local_2b0._4_4_;
                local_2b0 = plVar12;
                do {
                  if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
                    lVar16 = *(longlong *)(*local_2c8 + (longlong)iVar10 * 0xd8);
                    uVar21 = (uint)((ulonglong)lVar16 >> 0x10);
                    uVar19 = (uint)lVar16 & 0xffff;
                    lVar20 = *(longlong *)(param_1 + 0x2d0);
                    if (*(longlong *)(param_1 + 0x2d0) == 0) {
                      lVar20 = param_1 + 0x2c8;
                    }
                    iVar10 = *(int *)(lVar20 + (ulonglong)
                                               (*(int *)(param_1 + 0x2d8) - 1U &
                                               (int)((ulonglong)lVar16 >> 0x20) +
                                               ((uint)lVar16 << 0x10 | uVar19) +
                                               (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar19 >> 4)) *
                                               4);
                    if (iVar10 != -1) {
                      do {
                        lVar20 = *(longlong *)(param_1 + 0x290) + (longlong)iVar10 * 0x80;
                        if (*(longlong *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar10 * 0x80)
                            == lVar16) {
                          if ((lVar20 + 0x10U & 0xffffffffffffffef) != 0) {
                            *(double *)(lVar20 + 0x30) =
                                 *(double *)(lVar20 + 0x30) + ((dVar3 + dVar59) - dVar30) * dVar47;
                            *(double *)(lVar20 + 0x38) =
                                 *(double *)(lVar20 + 0x38) + ((dVar33 + dVar38) - dVar31) * dVar47;
                            *(double *)(lVar20 + 0x40) =
                                 *(double *)(lVar20 + 0x40) + ((dVar67 + dVar70) - dVar32) * dVar47;
                            *(undefined8 *)(lVar20 + 0x48) = 0;
                          }
                          break;
                        }
                        iVar10 = *(int *)(lVar20 + 0x70);
                      } while (iVar10 != -1);
                    }
                  }
                  local_2b0 = (longlong *)
                              CONCAT44(local_2b0._4_4_,(uint)local_2b0 & ~local_2c0._4_4_);
                  FUN_1449c0562(&local_2c0);
                  iVar10 = local_2b0._4_4_;
                  plVar12 = local_2b0;
                } while (local_2c8 != plVar1 || (local_2b8 != plVar15 || local_2b0._4_4_ != iVar13))
                ;
              }
            }
          }
        }
        goto LAB_148ce28da;
      }
    }
  }
  local_2f8 = (longlong *)0x0;
  plVar12 = local_2b0;
LAB_148ce28da:
  local_2b0 = plVar12;
  FUN_148ce4000(param_1);
  FUN_148ce4302(param_1);
  if ((local_f0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce4000 FUN_148ce4000 body=768 status=ok
// SIG undefined FUN_148ce4000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ce4000(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_98 [32];
  float local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 != 0) && (0.0 < *(float *)(lVar1 + 0x59c))) {
    if (*(char *)(param_1 + 0x348) == '\x01') {
      if ((((*(double *)(param_1 + 0x318) != DAT_14c8464f8) ||
           (NAN(*(double *)(param_1 + 0x318)) || NAN(DAT_14c8464f8))) ||
          (*(double *)(param_1 + 800) != DAT_14c846500)) ||
         (((NAN(*(double *)(param_1 + 800)) || NAN(DAT_14c846500) ||
           (*(double *)(param_1 + 0x328) != DAT_14c846508)) ||
          (NAN(*(double *)(param_1 + 0x328)) || NAN(DAT_14c846508))))) {
        local_78 = *(float *)(lVar1 + 0x5a0);
        FUN_140476f06(&local_68,(undefined8 *)(param_1 + 0x318),&DAT_14c8464f8);
        *(undefined8 *)(param_1 + 0x328) = local_58;
        *(undefined8 *)(param_1 + 0x318) = local_68;
        *(undefined8 *)(param_1 + 800) = uStack_60;
      }
    }
    else {
      puVar7 = &local_68;
      local_78 = *(float *)(lVar1 + 0x59c);
      FUN_1409b4488(puVar7,param_1 + 0x318,param_1 + 0x330);
      *(undefined8 *)(param_1 + 0x328) = local_58;
      *(undefined8 *)(param_1 + 0x318) = local_68;
      *(undefined8 *)(param_1 + 800) = uStack_60;
      dVar8 = *(double *)(param_1 + 0x340) - *(double *)(param_1 + 0x328);
      dVar19 = *(double *)(param_1 + 0x338) - *(double *)(param_1 + 800);
      dVar3 = *(double *)(param_1 + 0x330) - *(double *)(param_1 + 0x318);
      dVar4 = (double)DAT_1499387d0;
      dVar2 = DAT_1499387d0._8_8_;
      auVar20._8_8_ = dVar19;
      auVar20._0_8_ = dVar3;
      auVar21 = divpd(auVar20,_DAT_1499387d0);
      auVar9._0_8_ = dVar8 / 360.0;
      auVar9._8_8_ = 0;
      auVar22 = roundpd(auVar21,auVar21,3);
      auVar21 = roundpd(auVar9,auVar9,3);
      auVar25._0_8_ = dVar8 - auVar21._0_8_ * dVar4;
      auVar25._8_8_ = 0.0 - auVar21._8_8_ * dVar2;
      dVar3 = dVar3 - auVar22._0_8_ * dVar4;
      dVar19 = dVar19 - auVar22._8_8_ * dVar2;
      auVar27._0_8_ = dVar3 + dVar4;
      auVar27._8_8_ = dVar19 + dVar2;
      auVar29._0_8_ = auVar25._0_8_ + dVar4;
      auVar29._8_8_ = auVar25._8_8_ + dVar2;
      auVar10._8_8_ = -(ulonglong)(0.0 <= dVar19);
      auVar10._0_8_ = -(ulonglong)(0.0 <= dVar3);
      auVar21._8_4_ = SUB84(dVar19,0);
      auVar21._0_8_ = dVar3;
      auVar21._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      auVar21 = blendvpd(auVar27,auVar21,auVar10);
      auVar11._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
      auVar11._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
      auVar9 = blendvpd(auVar29,auVar25,auVar11);
      auVar32._0_8_ = auVar21._0_8_ + -360.0;
      auVar32._8_8_ = auVar21._8_8_ + -360.0;
      dVar3 = auVar9._8_8_ + 0.0;
      auVar12._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
      auVar12._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
      auVar22 = blendvpd(auVar21,auVar32,auVar12);
      auVar13._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
      auVar13._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
      auVar30._8_4_ = SUB84(dVar3,0);
      auVar30._0_8_ = auVar9._0_8_ + -360.0;
      auVar30._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar30 = blendvpd(auVar9,auVar30,auVar13);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = auVar30._0_8_;
      auVar21 = divpd(auVar22,_DAT_1499387d0);
      auVar9 = divpd(auVar33,_DAT_1499387d0);
      auVar21 = roundpd(auVar21,auVar21,3);
      auVar9 = roundpd(auVar9,auVar9,3);
      auVar28._0_8_ = auVar22._0_8_ - auVar21._0_8_ * dVar4;
      auVar28._8_8_ = auVar22._8_8_ - auVar21._8_8_ * dVar2;
      auVar34._0_8_ = auVar30._0_8_ - auVar9._0_8_ * dVar4;
      auVar34._8_8_ = 0.0 - auVar9._8_8_ * dVar2;
      auVar31._0_8_ = auVar28._0_8_ + dVar4;
      auVar31._8_8_ = auVar28._8_8_ + dVar2;
      auVar24._0_8_ = dVar4 + auVar34._0_8_;
      auVar24._8_8_ = dVar2 + auVar34._8_8_;
      auVar14._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
      auVar14._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
      auVar30 = blendvpd(auVar31,auVar28,auVar14);
      auVar15._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
      auVar15._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
      auVar21 = blendvpd(auVar24,auVar34,auVar15);
      dVar4 = auVar30._8_8_ + -360.0;
      auVar26._0_8_ = auVar21._0_8_ + -360.0;
      auVar26._8_8_ = auVar21._8_8_ + -360.0;
      auVar16._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
      auVar16._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
      auVar22._8_4_ = SUB84(dVar4,0);
      auVar22._0_8_ = auVar30._0_8_ + -360.0;
      auVar22._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar22 = blendvpd(auVar30,auVar22,auVar16);
      auVar17._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
      auVar17._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
      auVar21 = blendvpd(auVar21,auVar26,auVar17);
      auVar23._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar22._8_8_));
      auVar23._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar22._0_8_));
      iVar5 = movmskpd((int)local_58,auVar23);
      auVar18._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar21._8_8_));
      auVar18._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar21._0_8_));
      uVar6 = movmskpd((int)puVar7,auVar18);
      if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x348) = 1;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce4302 FUN_148ce4302 body=12081 status=ok
// SIG undefined FUN_148ce4302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ce4302(longlong param_1,int param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double *pdVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  double *pdVar16;
  uint uVar17;
  undefined4 unaff_EBP;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar43;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  double dVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar71;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  double dVar83;
  undefined1 auVar84 [16];
  double dVar87;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar88;
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar97;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar104;
  double dVar105;
  double dVar106;
  double dVar108;
  undefined1 auVar107 [16];
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  double dVar112;
  double dVar113;
  double dVar115;
  undefined1 auVar114 [16];
  double dVar116;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    local_288 = DAT_14c846508;
    local_298 = DAT_14c8464f8;
    uStack_290 = DAT_14c846500;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x3c0);
    if (plVar1 != (longlong *)0x0) {
      lVar10 = FUN_144a75eb4();
      param_2 = *(int *)(lVar10 + 0x38);
      if (((param_2 <= *(int *)(plVar1[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)param_2 * 8) == lVar10 + 0x30))
         && (plVar1[0x89] != 0)) {
        param_2 = (int)&local_298;
        (**(code **)(*plVar1 + 0x680))(plVar1);
      }
    }
    puVar11 = (undefined8 *)FUN_144a886c2(*(longlong *)(param_1 + 8) + 0x1108);
    puVar19 = (undefined8 *)(param_1 + 0x120);
    for (lVar10 = 0xc; auVar60 = _DAT_149934d80, lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar19 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar19 = puVar19 + 1;
    }
    local_328 = *(double *)(param_1 + 0xe8) + *(double *)(param_1 + 400);
    local_378 = *(double *)(param_1 + 0x120);
    dStack_370 = *(double *)(param_1 + 0x128);
    dVar44 = *(double *)(param_1 + 0xe0) + *(double *)(param_1 + 0x188);
    local_388 = *(undefined1 (*) [16])(param_1 + 0x130);
    dVar112 = *(double *)(param_1 + 0xd8) + *(double *)(param_1 + 0x180);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8);
    pdVar16 = (double *)(lVar10 + 0x240);
    pdVar12 = &DAT_14c846480;
    if (lVar10 != 0) {
      pdVar12 = pdVar16;
    }
    auVar22 = *(undefined1 (*) [16])(pdVar12 + 8);
    dVar53 = auVar22._0_8_;
    dVar116 = auVar22._8_8_;
    dVar59 = SUB168(*(undefined1 (*) [16])(pdVar12 + 10),0);
    auVar22 = minpd(_DAT_149934d80,auVar22);
    auVar47 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar12 + 10));
    auVar79._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar79._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar13 = movmskpd((int)pdVar16,auVar79);
    auVar22._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
    uVar17 = movmskpd(param_2,auVar22);
    dStack_320 = 0.0;
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar53 = pdVar12[3];
      dVar59 = pdVar12[3];
      dVar116 = *pdVar12;
      dVar21 = pdVar12[2];
      dVar115 = pdVar12[1];
      dVar113 = pdVar12[1];
      dVar89 = dVar21 * 0.0 * -1.0 + dVar115 * 0.0 + dVar116 * 1.0 * 1.0 + dVar53 * 0.0;
      dVar43 = dVar21 * 0.0 * 1.0 + dVar113 * 1.0 + dVar116 * 0.0 * -1.0 + dVar59 * 0.0;
      auVar60._0_8_ = dVar21 * 1.0 * 1.0 + ((dVar116 * 0.0 * 1.0 + dVar53 * 0.0) - dVar115 * 0.0);
      auVar60._8_8_ = dVar21 * 0.0 * -1.0 + ((dVar116 * 0.0 * -1.0 + dVar59 * 1.0) - dVar113 * 0.0);
    }
    else {
      dVar113 = *pdVar12;
      dVar115 = pdVar12[1];
      dVar89 = pdVar12[2];
      dVar43 = dVar115 + dVar115;
      dVar45 = dVar89 + dVar89;
      dVar82 = dVar113 * (dVar113 + dVar113);
      dVar21 = pdVar12[3];
      dVar46 = dVar45 * dVar21;
      dVar52 = (dVar113 + dVar113) * pdVar12[3];
      dVar21 = dVar43 * dVar21;
      local_1a8 = (dVar45 * dVar115 + dVar52) * dVar116;
      local_198 = (dVar21 + *pdVar12 * dVar45) * dVar59;
      dStack_190 = (dVar45 * dVar115 - dVar52) * dVar59;
      local_1c8 = (*pdVar12 * dVar45 - dVar21) * dVar53;
      local_1d8._8_8_ = (dVar43 * dVar113 + dVar46) * dVar53;
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar89 * dVar45 + dVar115 * dVar43)) * dVar53;
      dStack_1c0 = 0.0;
      local_1b8._8_8_ = (DAT_149934d80._8_8_ - (dVar89 * dVar45 + dVar82)) * dVar116;
      local_1b8._0_8_ = (dVar43 * dVar113 - dVar46) * dVar116;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = (1.0 - (dVar82 + dVar115 * dVar43)) * dVar59;
      local_178 = pdVar12[4];
      dStack_170 = pdVar12[5];
      local_168._8_8_ = 0x3ff0000000000000;
      local_168._0_8_ = pdVar12[6];
      local_258 = 1.0;
      dStack_250 = 0.0;
      local_248 = 0.0;
      uStack_240 = 0;
      local_228 = 0.0;
      uStack_220 = 0;
      local_218 = 0.0;
      dStack_210 = 0.0;
      local_208 = 1.0;
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_238 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_1f8 = dVar112;
      dStack_1f0 = dVar44;
      local_1e8 = local_328;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar47._8_8_ = -(ulonglong)(0.0 <= dVar116);
      auVar47._0_8_ = -(ulonglong)(0.0 <= dVar53);
      auVar22 = blendvpd(_DAT_149936790,auVar60,auVar47);
      dVar53 = (double)(~-(ulonglong)(0.0 <= dVar59) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= dVar59) & 0x3ff0000000000000);
      dVar59 = auVar22._0_8_;
      local_148 = local_148 * dVar59;
      dStack_150 = dStack_150 * dVar59;
      local_158 = local_158 * dVar59;
      dVar59 = auVar22._8_8_;
      local_128 = local_128 * dVar59;
      dStack_130 = dStack_130 * dVar59;
      local_138 = dVar59 * local_138;
      dStack_110 = dStack_110 * dVar53;
      local_118 = dVar53 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar53;
      FUN_14481fd10(&local_278,&local_158);
      dVar53 = local_268 * local_268 + local_278 * local_278;
      dVar59 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar54._0_8_ = dVar53 + dVar59;
      auVar54._8_8_ = dVar53 + dVar59;
      auVar84._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
      auVar84._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
      auVar22 = sqrtpd(auVar54,auVar54);
      auVar60 = divpd(auVar60,auVar22);
      auVar61._0_8_ = auVar60._0_8_ * local_268;
      auVar61._8_8_ = auVar60._8_8_ * dStack_260;
      dVar89 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_));
      dVar43 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_));
      auVar60 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar84);
    }
    if (*(char *)(param_1 + 0x200) == '\x01') {
      local_2a8 = DAT_14c846508;
      local_2b8 = DAT_14c8464f8;
      uStack_2b0 = DAT_14c846500;
    }
    else {
      dVar53 = auVar60._0_8_ * -1.0;
      dVar59 = auVar60._8_8_ * 1.0;
      FUN_144a7484c(&local_298,local_1d8);
      local_158 = (double)local_1d8._8_8_ * dVar53 * -1.0 +
                  ((dVar59 * (double)local_1d8._0_8_ - dVar89 * dStack_1c0 * 1.0) -
                  local_1c8 * dVar43);
      dStack_150 = (double)local_1d8._0_8_ * dVar53 * 1.0 +
                   ((dVar59 * (double)local_1d8._8_8_ - dVar89 * local_1c8 * -1.0) -
                   dStack_1c0 * dVar43);
      local_148 = dStack_1c0 * dVar53 * 1.0 +
                  dVar43 * (double)local_1d8._0_8_ +
                  (dVar59 * local_1c8 - dVar89 * (double)local_1d8._8_8_ * 1.0);
      dStack_140 = local_1c8 * dVar53 * -1.0 +
                   dVar43 * (double)local_1d8._8_8_ +
                   (dVar59 * dStack_1c0 - dVar89 * (double)local_1d8._0_8_ * -1.0);
      FUN_1448052ee(&local_158,&local_2b8);
    }
    local_2d0 = local_2b8;
    local_2c8 = 0;
    local_2c0 = local_2a8;
    local_2e8 = 0;
    local_2e0 = uStack_2b0;
    local_2d8 = 0;
    local_2f8 = dVar112;
    dStack_2f0 = dVar44;
    FUN_144a7484c(&local_2e8,&local_158);
    local_368 = local_158;
    dStack_360 = dStack_150;
    local_358 = local_148;
    dStack_350 = dStack_140;
    FUN_144a7484c(&local_2d0,&local_158);
    dVar59 = dStack_140;
    dVar53 = local_148;
    dVar112 = dStack_150;
    dVar44 = local_158;
    lVar10 = param_1 + 0x318;
    uVar8 = FUN_144a7484c(lVar10,&local_158);
    auVar79 = _DAT_149934d80;
    auVar60 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar22 = *(undefined1 (*) [16])(param_1 + 0x80);
    auVar72._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar60._8_8_));
    auVar72._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar60._0_8_));
    uVar17 = movmskpd(uVar8,auVar72);
    auVar73._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_));
    auVar73._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_));
    iVar13 = movmskpd((int)lVar10,auVar73);
    uVar14 = iVar13 << 2 | uVar17;
    if (uVar14 == 0) {
      local_398._8_8_ = uRam000000014c8464d8;
      local_398._0_8_ = DAT_14c8464d0;
      dVar116 = DAT_14c8464c0;
      dVar21 = DAT_14c8464c8;
      dVar113 = DAT_14c846480;
      dVar115 = DAT_14c846488;
      dVar89 = DAT_14c846490;
      dVar43 = DAT_14c846498;
      dVar45 = DAT_14c8464b0;
      dVar46 = DAT_14c8464b8;
      dVar52 = DAT_14c8464a0;
      dVar82 = DAT_14c8464a8;
    }
    else {
      auVar47 = divpd(_DAT_149934d80,auVar60);
      auVar84 = divpd(ZEXT816(0x3ff0000000000000),auVar22);
      dVar116 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar60._0_8_)) & auVar47._0_8_);
      dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar60._8_8_)) & auVar47._8_8_);
      local_398._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_)) & auVar84._0_8_;
      dVar113 = -*(double *)(param_1 + 0x30);
      dVar115 = -*(double *)(param_1 + 0x38);
      dVar89 = *(double *)(param_1 + 0x40) * -1.0;
      dVar43 = *(double *)(param_1 + 0x48) * 1.0;
      dVar52 = *(double *)(param_1 + 0x50) * dVar116;
      dVar96 = *(double *)(param_1 + 0x58) * dVar21;
      local_398._8_8_ = 0;
      dVar45 = *(double *)(param_1 + 0x60) * (double)local_398._0_8_;
      dVar82 = dVar96 * dVar113 - dVar115 * dVar52;
      dVar87 = dVar45 * dVar115 - dVar89 * dVar96;
      dVar104 = dVar52 * dVar89 - dVar113 * dVar45;
      dVar87 = dVar87 + dVar87;
      dVar104 = dVar104 + dVar104;
      dVar82 = dVar82 + dVar82;
      dVar45 = 0.0 - (dVar43 * dVar82 + dVar45 + (dVar104 * dVar113 - dVar87 * dVar115));
      dVar46 = 0.0;
      dVar52 = 0.0 - ((dVar82 * dVar115 - dVar104 * dVar89) + dVar43 * dVar87 + dVar52);
      dVar82 = 0.0 - (dVar82 * *(double *)(param_1 + 0x30) + dVar89 * dVar87 +
                     dVar43 * dVar104 + dVar96);
    }
    local_348 = local_158;
    dStack_340 = dStack_150;
    local_338 = local_148;
    dStack_330 = dStack_140;
    auVar62._8_8_ = dVar21;
    auVar62._0_8_ = dVar116;
    auVar47 = minpd(auVar62,_DAT_149934d80);
    auVar84 = minpd(local_398,ZEXT816(0x3ff0000000000000));
    auVar63._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
    auVar63._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
    iVar13 = movmskpd(uVar17,auVar63);
    auVar99._8_8_ = -(ulonglong)(auVar84._8_8_ < 0.0);
    auVar99._0_8_ = -(ulonglong)(auVar84._0_8_ < 0.0);
    uVar17 = movmskpd(uVar14,auVar99);
    uVar6 = local_398._0_8_;
    uVar7 = local_398._8_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar87 = dVar115 * dVar53 * -1.0 + dVar89 * dVar112 + dVar44 * dVar43 * 1.0 + dVar59 * dVar113
      ;
      dVar104 = dVar113 * dVar53 * 1.0 +
                dVar43 * dVar112 + dVar44 * dVar89 * -1.0 + dVar59 * dVar115;
      auVar100._0_8_ =
           dVar43 * dVar53 * 1.0 + ((dVar44 * dVar115 * 1.0 + dVar59 * dVar89) - dVar112 * dVar113);
      auVar100._8_8_ =
           dVar89 * dVar53 * -1.0 +
           ((dVar44 * dVar113 * -1.0 + dVar59 * dVar43) - dVar112 * dVar115);
      dVar45 = dVar45 * 1.0;
      dVar46 = dVar46 * 0.0;
      dVar115 = dVar82 * dVar44 - dVar112 * dVar52;
      dVar89 = dVar45 * dVar112 - dVar53 * dVar82;
      dVar43 = dVar52 * dVar53 - dVar44 * dVar45;
      dVar96 = dVar46 * dVar59 - dVar59 * dVar46;
      dVar89 = dVar89 + dVar89;
      dVar43 = dVar43 + dVar43;
      dVar115 = dVar115 + dVar115;
      dVar96 = dVar96 + dVar96;
      dVar113 = (dVar115 * dVar112 - dVar53 * dVar43) + dVar59 * dVar89 + dVar52 + 0.0;
      dVar53 = (dVar89 * dVar53 - dVar115 * dVar44) + dVar59 * dVar43 + dVar82 + 0.0;
      local_398._0_8_ = (dVar43 * dVar44 - dVar112 * dVar89) + dVar59 * dVar115 + dVar45 + 0.0;
      local_398._8_8_ = (dVar96 * dVar59 - dVar96 * dVar59) + dVar59 * dVar96 + dVar46 + 0.0;
      uVar8 = 0;
      local_318 = auVar60;
      local_308 = auVar22;
    }
    else {
      dVar104 = dVar112 + dVar112;
      dVar46 = dVar53 + dVar53;
      dVar87 = dVar44 * (dVar44 + dVar44);
      dStack_190 = (dVar44 + dVar44) * dVar59;
      local_1a8 = dVar46 * dVar112 + dStack_190;
      dStack_190 = dVar46 * dVar112 - dStack_190;
      local_198 = dVar104 * dVar59 + dVar44 * dVar46;
      local_1c8 = dVar44 * dVar46 - dVar104 * dVar59;
      local_1d8._8_8_ = dVar104 * dVar44 + dVar46 * dVar59;
      local_1d8._0_8_ = (double)DAT_149934d80 - (dVar53 * dVar46 + dVar112 * dVar104);
      dStack_1c0 = 0.0;
      local_1b8._8_8_ = DAT_149934d80._8_8_ - (dVar53 * dVar46 + dVar87);
      local_1b8._0_8_ = dVar104 * dVar44 - dVar46 * dVar59;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = 1.0 - (dVar87 + dVar112 * dVar104);
      dVar44 = dVar115 + dVar115;
      dVar53 = dVar89 + dVar89;
      dVar112 = dVar113 * (dVar113 + dVar113);
      local_258 = ((double)DAT_149934d80 - (dVar89 * dVar53 + dVar115 * dVar44)) * dVar116;
      dVar59 = (dVar113 + dVar113) * dVar43;
      dStack_210 = (dVar53 * dVar115 - dVar59) * (double)local_398._0_8_;
      local_218 = (dVar113 * dVar53 + dVar44 * dVar43) * (double)local_398._0_8_;
      dStack_250 = (dVar44 * dVar113 + dVar53 * dVar43) * dVar116;
      local_228 = (dVar53 * dVar115 + dVar59) * dVar21;
      local_248 = (dVar113 * dVar53 - dVar44 * dVar43) * dVar116;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar89 * dVar53 + dVar112)) * dVar21;
      local_238._0_8_ = (dVar44 * dVar113 - dVar53 * dVar43) * dVar21;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar112 + dVar115 * dVar44)) * (double)local_398._0_8_;
      uStack_200 = 0;
      dVar44 = (double)local_398._0_8_ * 1.0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar52;
      dStack_1f0 = dVar82;
      local_1e8 = dVar45;
      local_168 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar23._8_8_ = -(ulonglong)(0.0 <= dVar21);
      auVar23._0_8_ = -(ulonglong)(0.0 <= dVar116);
      auVar60 = blendvpd(_DAT_149936790,auVar79,auVar23);
      uVar20 = -(ulonglong)(0.0 <= dVar44);
      dVar44 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar112 = auVar60._0_8_;
      local_148 = local_148 * dVar112;
      dStack_150 = dStack_150 * dVar112;
      local_158 = local_158 * dVar112;
      dVar112 = auVar60._8_8_;
      local_128 = local_128 * dVar112;
      dStack_130 = dStack_130 * dVar112;
      local_138 = dVar112 * local_138;
      dStack_110 = dStack_110 * dVar44;
      local_118 = dVar44 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar44;
      pdVar16 = &local_278;
      iVar13 = FUN_14481fd10(pdVar16,&local_158);
      uVar8 = SUB84(pdVar16,0);
      dVar44 = local_268 * local_268 + local_278 * local_278;
      dVar112 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar55._0_8_ = dVar44 + dVar112;
      auVar55._8_8_ = dVar44 + dVar112;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
      auVar60 = sqrtpd(auVar55,auVar55);
      auVar60 = divpd(auVar79,auVar60);
      auVar74._0_8_ = auVar60._0_8_ * local_268;
      auVar74._8_8_ = auVar60._8_8_ * dStack_260;
      auVar100 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar74,auVar24);
      dVar87 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_));
      dVar104 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_));
      local_398._8_8_ = 0.0;
      auVar60 = *(undefined1 (*) [16])(param_1 + 0x70);
      auVar22 = *(undefined1 (*) [16])(param_1 + 0x80);
      dVar113 = local_f8;
      dVar53 = dStack_f0;
      local_398._0_8_ = local_e8;
    }
    auVar79 = _DAT_149934d80;
    dVar115 = (double)uVar6 * 1.0;
    auVar85._8_8_ = dVar21;
    auVar85._0_8_ = dVar116;
    auVar47 = minpd(auVar85,auVar60);
    auVar92._8_8_ = (double)uVar7 * 0.0;
    auVar92._0_8_ = dVar115;
    auVar84 = minpd(auVar92,auVar22);
    auVar86._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
    auVar86._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
    iVar13 = movmskpd(iVar13,auVar86);
    auVar93._8_8_ = -(ulonglong)(auVar84._8_8_ < 0.0);
    auVar93._0_8_ = -(ulonglong)(auVar84._0_8_ < 0.0);
    uVar17 = movmskpd(uVar8,auVar93);
    dVar112 = auVar60._0_8_;
    dVar59 = auVar60._8_8_;
    dVar44 = auVar22._0_8_;
    dVar89 = auVar100._0_8_;
    dVar43 = auVar100._8_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar105 = *(double *)(param_1 + 0x30);
      dVar106 = *(double *)(param_1 + 0x38);
      dVar46 = *(double *)(param_1 + 0x48);
      dVar45 = *(double *)(param_1 + 0x48);
      dVar52 = *(double *)(param_1 + 0x30);
      dVar82 = *(double *)(param_1 + 0x30);
      dVar2 = *(double *)(param_1 + 0x38);
      dVar96 = *(double *)(param_1 + 0x38);
      dVar108 = *(double *)(param_1 + 0x40);
      dVar98 = *(double *)(param_1 + 0x48);
      dVar97 = *(double *)(param_1 + 0x40);
      dVar5 = *(double *)(param_1 + 0x40);
      dVar83 = dVar104 * dVar97 * -1.0 + dVar89 * dVar2 + dVar43 * dVar52 * 1.0 + dVar87 * dVar46;
      dVar88 = dVar87 * dVar5 * 1.0 + dVar43 * dVar96 + dVar89 * dVar82 * -1.0 + dVar104 * dVar45;
      auVar114._0_8_ =
           dVar43 * dVar97 * 1.0 + ((dVar52 * dVar104 * 1.0 + dVar89 * dVar46) - dVar87 * dVar2);
      auVar114._8_8_ =
           dVar89 * dVar5 * -1.0 + ((dVar82 * dVar87 * -1.0 + dVar43 * dVar45) - dVar104 * dVar96);
      dVar113 = dVar113 * dVar112;
      dVar53 = dVar53 * dVar59;
      local_398._0_8_ = (double)local_398._0_8_ * dVar44;
      local_398._8_8_ = (double)local_398._8_8_ * auVar22._8_8_;
      dVar82 = dVar53 * dVar105 - dVar113 * dVar106;
      dVar87 = (double)local_398._0_8_ * dVar106 - dVar53 * dVar108;
      dVar89 = dVar113 * dVar108 - (double)local_398._0_8_ * dVar105;
      dVar43 = (double)local_398._8_8_ * dVar98 - (double)local_398._8_8_ * dVar98;
      dVar87 = dVar87 + dVar87;
      dVar89 = dVar89 + dVar89;
      dVar82 = dVar82 + dVar82;
      dVar43 = dVar43 + dVar43;
      uVar8 = 0;
      uVar109 = 0x3ff00000;
      uVar110 = 0;
      uVar111 = 0x3ff00000;
      dVar113 = (dVar82 * dVar106 - dVar108 * dVar89) + dVar46 * dVar87 + dVar113 +
                *(double *)(param_1 + 0x50);
      dVar52 = (dVar87 * dVar108 - dVar82 * dVar105) + dVar45 * dVar89 + dVar53 +
               *(double *)(param_1 + 0x58);
      dVar53 = (dVar89 * dVar105 - dVar106 * dVar87) + dVar46 * dVar82 + (double)local_398._0_8_ +
               *(double *)(param_1 + 0x60);
      dVar89 = (dVar43 * dVar98 - dVar43 * dVar98) + dVar45 * dVar43 + (double)local_398._8_8_ +
               *(double *)(param_1 + 0x68);
      uVar15 = 0;
    }
    else {
      dVar96 = *(double *)(param_1 + 0x30);
      dVar2 = *(double *)(param_1 + 0x38);
      dVar5 = *(double *)(param_1 + 0x40);
      dVar97 = dVar2 + dVar2;
      dVar105 = dVar5 + dVar5;
      dVar46 = dVar96 * (dVar96 + dVar96);
      dVar52 = *(double *)(param_1 + 0x30) * dVar105;
      dVar45 = *(double *)(param_1 + 0x48);
      dVar106 = dVar105 * dVar45;
      dVar108 = (dVar96 + dVar96) * *(double *)(param_1 + 0x48);
      dVar45 = dVar97 * dVar45;
      dStack_190 = (dVar105 * dVar2 - dVar108) * dVar44;
      dVar82 = (1.0 - (dVar5 * dVar105 + dVar46)) * dVar59;
      local_1a8 = (dVar105 * dVar2 + dVar108) * dVar59;
      local_198 = (dVar45 + dVar52) * dVar44;
      local_1c8 = (dVar52 - dVar45) * dVar112;
      local_1d8._8_8_ = (dVar97 * dVar96 + dVar106) * dVar112;
      local_1d8._0_8_ = (1.0 - (dVar5 * dVar105 + dVar2 * dVar97)) * dVar112;
      dStack_1c0 = 0.0;
      local_1b8._8_4_ = SUB84(dVar82,0);
      local_1b8._0_8_ = (dVar97 * dVar96 - dVar106) * dVar59;
      local_1b8._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
      uVar8 = (undefined4)DAT_149934d80;
      uVar109 = DAT_149934d80._4_4_;
      uVar110 = DAT_149934d80._8_4_;
      uVar111 = DAT_149934d80._12_4_;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = (1.0 - (dVar46 + dVar2 * dVar97)) * dVar44;
      local_178 = *(double *)(param_1 + 0x50);
      dStack_170 = *(double *)(param_1 + 0x58);
      local_168._8_8_ = 0x3ff0000000000000;
      local_168._0_8_ = *(undefined8 *)(param_1 + 0x60);
      dVar52 = dVar104 + dVar104;
      dVar45 = dVar89 + dVar89;
      dVar82 = dVar87 * (dVar87 + dVar87);
      local_208 = (1.0 - (dVar82 + dVar104 * dVar52)) * dVar115;
      dVar46 = (dVar87 + dVar87) * dVar43;
      local_218 = (dVar87 * dVar45 + dVar52 * dVar43) * dVar115;
      dStack_210 = (dVar45 * dVar104 - dVar46) * dVar115;
      local_258 = ((double)DAT_149934d80 - (dVar89 * dVar45 + dVar104 * dVar52)) * dVar116;
      dStack_250 = (dVar52 * dVar87 + dVar45 * dVar43) * dVar116;
      local_228 = (dVar45 * dVar104 + dVar46) * dVar21;
      local_248 = (dVar87 * dVar45 - dVar52 * dVar43) * dVar116;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar89 * dVar45 + dVar82)) * dVar21;
      local_238._0_8_ = (dVar52 * dVar87 - dVar45 * dVar43) * dVar21;
      uStack_220 = 0;
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar113;
      dStack_1f0 = dVar53;
      local_1e8 = (double)local_398._0_8_;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar25._8_8_ = -(ulonglong)(0.0 <= dVar21 * dVar59);
      auVar25._0_8_ = -(ulonglong)(0.0 <= dVar116 * dVar112);
      auVar60 = blendvpd(_DAT_149936790,auVar79,auVar25);
      uVar20 = -(ulonglong)(0.0 <= dVar44 * dVar115);
      dVar53 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar113 = auVar60._0_8_;
      local_148 = local_148 * dVar113;
      dStack_150 = dStack_150 * dVar113;
      local_158 = local_158 * dVar113;
      dVar113 = auVar60._8_8_;
      local_128 = local_128 * dVar113;
      dStack_130 = dStack_130 * dVar113;
      local_138 = dVar113 * local_138;
      dStack_110 = dStack_110 * dVar53;
      local_118 = dVar53 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar53;
      pdVar16 = &local_278;
      iVar13 = FUN_14481fd10(pdVar16,&local_158);
      uVar15 = SUB84(pdVar16,0);
      dVar53 = local_268 * local_268 + local_278 * local_278;
      dVar113 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar56._0_8_ = dVar53 + dVar113;
      auVar56._8_8_ = dVar53 + dVar113;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar56._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar56._0_8_);
      auVar60 = sqrtpd(auVar56,auVar56);
      auVar60 = divpd(auVar79,auVar60);
      auVar64._0_8_ = auVar60._0_8_ * local_268;
      auVar64._8_8_ = auVar60._8_8_ * dStack_260;
      dVar83 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar56._0_8_));
      dVar88 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar56._8_8_));
      auVar114 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar26);
      dVar89 = 0.0;
      dVar53 = local_e8;
      dVar113 = local_f8;
      dVar52 = dStack_f0;
    }
    dVar43 = auVar22._8_8_ * (double)uVar7 * 0.0;
    dVar44 = dVar44 * dVar115;
    dVar21 = dVar21 * dVar59;
    dVar116 = dVar116 * dVar112;
    auVar27._8_8_ = dVar21;
    auVar27._0_8_ = dVar116;
    auVar60 = minpd(auVar27,_DAT_149934d80);
    auVar48._8_8_ = dVar43;
    auVar48._0_8_ = dVar44;
    auVar22 = minpd(auVar48,ZEXT816(0x3ff0000000000000));
    auVar28._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
    iVar18 = movmskpd(unaff_EBP,auVar28);
    auVar49._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar49._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    uVar17 = movmskpd(iVar13,auVar49);
    local_398._8_4_ = SUB84(dVar21,0);
    local_398._0_8_ = dVar116;
    local_398._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar112 = auVar114._0_8_;
    dVar59 = auVar114._8_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar46 = dVar88 * local_358 * -1.0 +
               dVar112 * dStack_360 + local_368 * dVar59 * 1.0 + dStack_350 * dVar83;
      dVar82 = dVar83 * local_358 * 1.0 +
               dVar59 * dStack_360 + local_368 * dVar112 * -1.0 + dStack_350 * dVar88;
      auVar101._0_8_ =
           dVar59 * local_358 * 1.0 +
           ((local_368 * dVar88 * 1.0 + dStack_350 * dVar112) - dStack_360 * dVar83);
      auVar101._8_8_ =
           dVar112 * local_358 * -1.0 +
           ((local_368 * dVar83 * -1.0 + dStack_350 * dVar59) - dStack_360 * dVar88);
      dVar53 = dVar53 * 1.0;
      dVar89 = dVar89 * 0.0;
      dVar115 = dVar52 * local_368 - dStack_360 * dVar113;
      dVar45 = dVar53 * dStack_360 - local_358 * dVar52;
      dVar112 = dVar113 * local_358 - local_368 * dVar53;
      dVar59 = dVar89 * dStack_350 - dStack_350 * dVar89;
      dVar45 = dVar45 + dVar45;
      dVar112 = dVar112 + dVar112;
      dVar115 = dVar115 + dVar115;
      dVar59 = dVar59 + dVar59;
      uVar8 = 0;
      uVar109 = 0x3ff00000;
      uVar110 = 0;
      uVar111 = 0x3ff00000;
      dVar116 = (dVar115 * dStack_360 - local_358 * dVar112) + dStack_350 * dVar45 + dVar113 + 0.0;
      dVar21 = (dVar45 * local_358 - dVar115 * local_368) + dStack_350 * dVar112 + dVar52 + 0.0;
      dVar112 = (dVar112 * local_368 - dStack_360 * dVar45) + dStack_350 * dVar115 + dVar53 + 0.0;
      dVar53 = (dVar59 * dStack_350 - dVar59 * dStack_350) + dStack_350 * dVar59 + dVar89 + 0.0;
      uVar9 = 0;
    }
    else {
      dVar89 = dStack_360 + dStack_360;
      dVar45 = local_358 + local_358;
      dVar115 = local_368 * (local_368 + local_368);
      dStack_190 = (local_368 + local_368) * dStack_350;
      local_1a8 = dVar45 * dStack_360 + dStack_190;
      dStack_190 = dVar45 * dStack_360 - dStack_190;
      local_198 = dVar89 * dStack_350 + local_368 * dVar45;
      local_1c8 = local_368 * dVar45 - dVar89 * dStack_350;
      local_1d8._8_8_ = dVar89 * local_368 + dVar45 * dStack_350;
      local_1d8._0_8_ = (double)CONCAT44(uVar109,uVar8) - (local_358 * dVar45 + dStack_360 * dVar89)
      ;
      dStack_1c0 = 0.0;
      local_1b8._8_8_ = (double)CONCAT44(uVar111,uVar110) - (local_358 * dVar45 + dVar115);
      local_1b8._0_8_ = dVar89 * local_368 - dVar45 * dStack_350;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = 1.0 - (dVar115 + dStack_360 * dVar89);
      dVar115 = dVar88 + dVar88;
      dVar45 = dVar112 + dVar112;
      dVar89 = dVar83 * (dVar83 + dVar83);
      local_258 = ((double)CONCAT44(uVar109,uVar8) - (dVar112 * dVar45 + dVar88 * dVar115)) *
                  dVar116;
      dVar46 = (dVar83 + dVar83) * dVar59;
      dStack_210 = (dVar45 * dVar88 - dVar46) * dVar44;
      local_218 = (dVar83 * dVar45 + dVar115 * dVar59) * dVar44;
      dStack_250 = (dVar115 * dVar83 + dVar45 * dVar59) * dVar116;
      local_228 = (dVar45 * dVar88 + dVar46) * dVar21;
      local_248 = (dVar83 * dVar45 - dVar115 * dVar59) * dVar116;
      uStack_240 = 0;
      local_238._8_8_ = ((double)CONCAT44(uVar111,uVar110) - (dVar112 * dVar45 + dVar89)) * dVar21;
      local_238._0_8_ = (dVar115 * dVar83 - dVar45 * dVar59) * dVar21;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar89 + dVar88 * dVar115)) * dVar44;
      uStack_200 = 0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar113;
      dStack_1f0 = dVar52;
      local_1e8 = dVar53;
      local_168 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= dVar21);
      auVar29._0_8_ = -(ulonglong)(0.0 <= dVar116);
      auVar3._4_4_ = uVar109;
      auVar3._0_4_ = uVar8;
      auVar3._8_4_ = uVar110;
      auVar3._12_4_ = uVar111;
      auVar60 = blendvpd(_DAT_149936790,auVar3,auVar29);
      uVar20 = -(ulonglong)(0.0 <= dVar44 * 1.0);
      dVar112 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar53 = auVar60._0_8_;
      local_148 = local_148 * dVar53;
      dStack_150 = dStack_150 * dVar53;
      local_158 = local_158 * dVar53;
      dVar53 = auVar60._8_8_;
      local_128 = local_128 * dVar53;
      dStack_130 = dStack_130 * dVar53;
      local_138 = dVar53 * local_138;
      dStack_110 = dStack_110 * dVar112;
      local_118 = dVar112 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar112;
      pdVar16 = &local_278;
      uVar9 = FUN_14481fd10(pdVar16,&local_158);
      uVar15 = SUB84(pdVar16,0);
      dVar112 = local_268 * local_268 + local_278 * local_278;
      dVar53 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar57._0_8_ = dVar112 + dVar53;
      auVar57._8_8_ = dVar112 + dVar53;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
      auVar60 = sqrtpd(auVar57,auVar57);
      auVar65._4_4_ = uVar109;
      auVar65._0_4_ = uVar8;
      auVar65._12_4_ = uVar111;
      auVar65._8_4_ = uVar110;
      auVar60 = divpd(auVar65,auVar60);
      auVar66._0_8_ = auVar60._0_8_ * local_268;
      auVar66._8_8_ = auVar60._8_8_ * dStack_260;
      dVar46 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
      dVar82 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
      auVar101 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar30);
      dVar53 = 0.0;
      dVar112 = local_e8;
      dVar116 = local_f8;
      dVar21 = dStack_f0;
    }
    auVar60 = local_398;
    dVar43 = dVar43 * 0.0;
    dVar44 = dVar44 * 1.0;
    dVar45 = (double)local_388._0_8_ * -1.0;
    dVar52 = (double)local_388._8_8_ * 1.0;
    dVar59 = -local_378;
    dVar113 = -dStack_370;
    auVar31._8_8_ = dVar43;
    auVar31._0_8_ = dVar44;
    auVar22 = minpd(auVar31,ZEXT816(0x3ff0000000000000));
    auVar32._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    uVar17 = movmskpd(uVar9,auVar32);
    dVar115 = auVar101._0_8_;
    dVar89 = auVar101._8_8_;
    uVar6 = local_398._0_8_;
    uVar7 = local_398._8_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar87 = dVar82 * dVar45 * -1.0 + dVar115 * dVar113 + dVar59 * dVar89 * 1.0 + dVar52 * dVar46;
      dVar104 = dVar46 * dVar45 * 1.0 + dVar89 * dVar113 + dVar59 * dVar115 * -1.0 + dVar52 * dVar82
      ;
      auVar90._0_8_ =
           dVar89 * dVar45 * 1.0 + ((dVar59 * dVar82 * 1.0 + dVar52 * dVar115) - dVar113 * dVar46);
      auVar90._8_8_ =
           dVar115 * dVar45 * -1.0 + ((dVar59 * dVar46 * -1.0 + dVar52 * dVar89) - dVar113 * dVar82)
      ;
      dVar112 = dVar112 * 1.0;
      dVar53 = dVar53 * 0.0;
      dVar115 = dVar21 * dVar59 - dVar113 * dVar116;
      dVar46 = dVar112 * dVar113 - dVar45 * dVar21;
      dVar82 = dVar116 * dVar45 - dVar59 * dVar112;
      dVar89 = dVar53 * dVar52 - dVar52 * dVar53;
      dVar46 = dVar46 + dVar46;
      dVar82 = dVar82 + dVar82;
      dVar115 = dVar115 + dVar115;
      dVar89 = dVar89 + dVar89;
      dVar116 = (dVar115 * dVar113 - dVar45 * dVar82) + dVar52 * dVar46 + dVar116 + 0.0;
      dVar21 = (dVar46 * dVar45 - dVar115 * dVar59) + dVar52 * dVar82 + dVar21 + 0.0;
      dVar112 = (dVar82 * dVar59 - dVar113 * dVar46) + dVar52 * dVar115 + dVar112 + 0.0;
      dVar53 = (dVar89 * dVar52 - dVar89 * dVar52) + dVar52 * dVar89 + dVar53 + 0.0;
      uVar9 = 0;
    }
    else {
      dVar104 = dVar113 - dStack_370;
      dVar53 = dVar45 + dVar45;
      dVar87 = (dVar59 - local_378) * dVar59;
      dStack_190 = (dVar59 - local_378) * dVar52;
      local_1a8 = dVar53 * dVar113 + dStack_190;
      dStack_190 = dVar53 * dVar113 - dStack_190;
      local_198 = dVar104 * dVar52 + dVar59 * dVar53;
      local_1c8 = dVar59 * dVar53 - dVar104 * dVar52;
      local_1d8._8_8_ = dVar104 * dVar59 + dVar53 * dVar52;
      local_1d8._0_8_ = (double)CONCAT44(uVar109,uVar8) - (dVar45 * dVar53 + dVar104 * dVar113);
      dStack_1c0 = 0.0;
      local_1b8._8_8_ = (double)CONCAT44(uVar111,uVar110) - (dVar45 * dVar53 + dVar87);
      local_1b8._0_8_ = dVar104 * dVar59 - dVar53 * dVar52;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = 1.0 - (dVar87 + dVar104 * dVar113);
      dVar53 = dVar82 + dVar82;
      dVar113 = dVar115 + dVar115;
      dVar59 = dVar46 * (dVar46 + dVar46);
      local_258 = ((double)CONCAT44(uVar109,uVar8) - (dVar115 * dVar113 + dVar82 * dVar53)) *
                  (double)local_398._0_8_;
      dVar45 = (dVar46 + dVar46) * dVar89;
      dStack_210 = (dVar113 * dVar82 - dVar45) * dVar44;
      local_218 = (dVar46 * dVar113 + dVar53 * dVar89) * dVar44;
      dStack_250 = (dVar53 * dVar46 + dVar113 * dVar89) * (double)local_398._0_8_;
      local_228 = (dVar113 * dVar82 + dVar45) * (double)local_398._8_8_;
      local_248 = (dVar46 * dVar113 - dVar53 * dVar89) * (double)local_398._0_8_;
      uStack_240 = 0;
      local_238._8_8_ =
           ((double)CONCAT44(uVar111,uVar110) - (dVar115 * dVar113 + dVar59)) *
           (double)local_398._8_8_;
      local_238._0_8_ = (dVar53 * dVar46 - dVar113 * dVar89) * (double)local_398._8_8_;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar59 + dVar82 * dVar53)) * dVar44;
      uStack_200 = 0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar116;
      dStack_1f0 = dVar21;
      local_1e8 = dVar112;
      local_168 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar33._8_8_ = -(ulonglong)(0.0 <= (double)uVar7);
      auVar33._0_8_ = -(ulonglong)(0.0 <= (double)uVar6);
      auVar4._4_4_ = uVar109;
      auVar4._0_4_ = uVar8;
      auVar4._8_4_ = uVar110;
      auVar4._12_4_ = uVar111;
      auVar22 = blendvpd(_DAT_149936790,auVar4,auVar33);
      uVar20 = -(ulonglong)(0.0 <= dVar44 * 1.0);
      dVar112 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar53 = auVar22._0_8_;
      local_148 = local_148 * dVar53;
      dStack_150 = dStack_150 * dVar53;
      local_158 = local_158 * dVar53;
      dVar53 = auVar22._8_8_;
      local_128 = local_128 * dVar53;
      dStack_130 = dStack_130 * dVar53;
      local_138 = dVar53 * local_138;
      dStack_110 = dStack_110 * dVar112;
      local_118 = dVar112 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar112;
      pdVar16 = &local_278;
      uVar9 = FUN_14481fd10(pdVar16,&local_158);
      uVar15 = SUB84(pdVar16,0);
      dVar112 = local_268 * local_268 + local_278 * local_278;
      dVar53 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar67._0_8_ = dVar112 + dVar53;
      auVar67._8_8_ = dVar112 + dVar53;
      auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
      auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
      auVar22 = sqrtpd(auVar67,auVar67);
      auVar75._4_4_ = uVar109;
      auVar75._0_4_ = uVar8;
      auVar75._12_4_ = uVar111;
      auVar75._8_4_ = uVar110;
      auVar22 = divpd(auVar75,auVar22);
      auVar76._0_8_ = auVar22._0_8_ * local_268;
      auVar76._8_8_ = auVar22._8_8_ * dStack_260;
      dVar87 = (double)((ulonglong)(local_278 * auVar22._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_));
      dVar104 = (double)((ulonglong)(dStack_270 * auVar22._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_));
      auVar90 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar76,auVar34);
      dVar53 = 0.0;
      dVar112 = local_e8;
      dVar116 = local_f8;
      dVar21 = dStack_f0;
    }
    dVar44 = dVar44 * 1.0;
    dVar43 = dVar43 * 0.0;
    auVar22 = *(undefined1 (*) [16])(param_1 + 0x160);
    dVar59 = auVar22._0_8_;
    dVar115 = auVar22._8_8_;
    auVar79 = *(undefined1 (*) [16])(param_1 + 0x170);
    dVar113 = auVar79._0_8_;
    dVar89 = auVar79._8_8_;
    auVar60 = minpd(auVar60,auVar22);
    auVar94._8_8_ = dVar43;
    auVar94._0_8_ = dVar44;
    auVar22 = minpd(auVar94,auVar79);
    auVar68._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
    auVar68._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
    iVar13 = movmskpd(uVar9,auVar68);
    auVar95._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar95._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    uVar17 = movmskpd(uVar15,auVar95);
    local_388._8_4_ = SUB84(dVar43,0);
    local_388._0_8_ = dVar44;
    local_388._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    dVar45 = auVar90._0_8_;
    dVar46 = auVar90._8_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar106 = *(double *)(param_1 + 0x120);
      dVar108 = *(double *)(param_1 + 0x128);
      dVar82 = *(double *)(param_1 + 0x138);
      dVar52 = *(double *)(param_1 + 0x138);
      dVar96 = *(double *)(param_1 + 0x120);
      dVar43 = *(double *)(param_1 + 0x120);
      dVar5 = *(double *)(param_1 + 0x128);
      dVar2 = *(double *)(param_1 + 0x128);
      dVar98 = *(double *)(param_1 + 0x130);
      dVar83 = *(double *)(param_1 + 0x138);
      dVar105 = *(double *)(param_1 + 0x130);
      dVar97 = *(double *)(param_1 + 0x130);
      dVar88 = dVar104 * dVar105 * -1.0 + dVar45 * dVar5 + dVar46 * dVar96 * 1.0 + dVar87 * dVar82;
      dVar71 = dVar87 * dVar97 * 1.0 + dVar46 * dVar2 + dVar45 * dVar43 * -1.0 + dVar104 * dVar52;
      auVar102._0_8_ =
           dVar46 * dVar105 * 1.0 + ((dVar96 * dVar104 * 1.0 + dVar45 * dVar82) - dVar87 * dVar5);
      auVar102._8_8_ =
           dVar45 * dVar97 * -1.0 + ((dVar43 * dVar87 * -1.0 + dVar46 * dVar52) - dVar104 * dVar2);
      dVar116 = dVar116 * dVar59;
      dVar21 = dVar21 * dVar115;
      dVar112 = dVar112 * dVar113;
      dVar53 = dVar53 * dVar89;
      dVar45 = dVar21 * dVar106 - dVar116 * dVar108;
      dVar87 = dVar112 * dVar108 - dVar21 * dVar98;
      dVar104 = dVar116 * dVar98 - dVar112 * dVar106;
      dVar46 = dVar53 * dVar83 - dVar53 * dVar83;
      dVar87 = dVar87 + dVar87;
      dVar104 = dVar104 + dVar104;
      dVar45 = dVar45 + dVar45;
      dVar46 = dVar46 + dVar46;
      dVar43 = (double)local_388._8_8_ * dVar89;
      dVar116 = (dVar45 * dVar108 - dVar98 * dVar104) + dVar82 * dVar87 + dVar116 +
                *(double *)(param_1 + 0x140);
      dVar21 = (dVar87 * dVar98 - dVar45 * dVar106) + dVar52 * dVar104 + dVar21 +
               *(double *)(param_1 + 0x148);
      dVar112 = (dVar104 * dVar106 - dVar108 * dVar87) + dVar82 * dVar45 + dVar112 +
                *(double *)(param_1 + 0x150);
      dVar53 = (dVar46 * dVar83 - dVar46 * dVar83) + dVar52 * dVar46 + dVar53 +
               *(double *)(param_1 + 0x158);
      local_398._8_8_ = (double)local_398._8_8_ * dVar115;
      local_398._0_8_ = (double)local_398._0_8_ * dVar59;
    }
    else {
      dVar43 = dVar43 * dVar89;
      dVar105 = *(double *)(param_1 + 0x120);
      dVar106 = *(double *)(param_1 + 0x128);
      dVar108 = *(double *)(param_1 + 0x130);
      dVar98 = dVar106 + dVar106;
      dVar82 = dVar108 + dVar108;
      dVar89 = dVar105 * (dVar105 + dVar105);
      dVar52 = *(double *)(param_1 + 0x120) * dVar82;
      dVar53 = *(double *)(param_1 + 0x138);
      dVar96 = dVar82 * dVar53;
      dVar2 = (dVar105 + dVar105) * *(double *)(param_1 + 0x138);
      dVar53 = dVar98 * dVar53;
      local_198 = (dVar53 + dVar52) * dVar113;
      dStack_190 = (dVar82 * dVar106 - dVar2) * dVar113;
      dVar5 = (double)local_398._0_8_ * dVar59;
      dVar97 = (double)local_398._8_8_ * dVar115;
      local_1a8 = (dVar82 * dVar106 + dVar2) * dVar115;
      local_1c8 = (dVar52 - dVar53) * dVar59;
      local_1d8._8_8_ = (dVar98 * dVar105 + dVar96) * dVar59;
      local_1d8._0_8_ = (1.0 - (dVar108 * dVar82 + dVar106 * dVar98)) * dVar59;
      dStack_1c0 = 0.0;
      local_1b8._8_8_ = (1.0 - (dVar108 * dVar82 + dVar89)) * dVar115;
      local_1b8._0_8_ = (dVar98 * dVar105 - dVar96) * dVar115;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = (1.0 - (dVar89 + dVar106 * dVar98)) * dVar113;
      local_178 = *(double *)(param_1 + 0x140);
      dStack_170 = *(double *)(param_1 + 0x148);
      local_168._8_8_ = 0x3ff0000000000000;
      local_168._0_8_ = *(undefined8 *)(param_1 + 0x150);
      dVar115 = dVar104 + dVar104;
      dVar53 = dVar45 + dVar45;
      dVar89 = dVar87 * (dVar87 + dVar87);
      local_208 = (1.0 - (dVar89 + dVar104 * dVar115)) * dVar44;
      dVar59 = (dVar87 + dVar87) * dVar46;
      local_218 = (dVar87 * dVar53 + dVar115 * dVar46) * dVar44;
      dStack_210 = (dVar53 * dVar104 - dVar59) * dVar44;
      local_258 = (1.0 - (dVar45 * dVar53 + dVar104 * dVar115)) * (double)local_398._0_8_;
      dStack_250 = (dVar115 * dVar87 + dVar53 * dVar46) * (double)local_398._0_8_;
      local_228 = (dVar53 * dVar104 + dVar59) * (double)local_398._8_8_;
      local_248 = (dVar87 * dVar53 - dVar115 * dVar46) * (double)local_398._0_8_;
      uStack_240 = 0;
      local_238._8_8_ = (1.0 - (dVar45 * dVar53 + dVar89)) * (double)local_398._8_8_;
      local_238._0_8_ = (dVar115 * dVar87 - dVar53 * dVar46) * (double)local_398._8_8_;
      uStack_220 = 0;
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_378 = dVar44 * dVar113;
      dStack_370 = dVar43;
      local_1f8 = dVar116;
      dStack_1f0 = dVar21;
      local_1e8 = dVar112;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar60 = _DAT_149934d80;
      local_398._8_4_ = SUB84(dVar97,0);
      local_398._0_8_ = dVar5;
      local_398._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
      auVar35._8_8_ = -(ulonglong)(0.0 <= dVar97);
      auVar35._0_8_ = -(ulonglong)(0.0 <= dVar5);
      auVar22 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar35);
      uVar20 = -(ulonglong)(0.0 <= dVar44 * dVar113);
      dVar112 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar53 = auVar22._0_8_;
      local_148 = local_148 * dVar53;
      dStack_150 = dStack_150 * dVar53;
      local_158 = local_158 * dVar53;
      dVar53 = auVar22._8_8_;
      local_128 = local_128 * dVar53;
      dStack_130 = dStack_130 * dVar53;
      local_138 = dVar53 * local_138;
      dStack_110 = dStack_110 * dVar112;
      local_118 = dVar112 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar112;
      iVar13 = FUN_14481fd10(&local_278,&local_158);
      dVar112 = local_268 * local_268 + local_278 * local_278;
      dVar53 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar58._0_8_ = dVar112 + dVar53;
      auVar58._8_8_ = dVar112 + dVar53;
      auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
      auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
      auVar22 = sqrtpd(auVar58,auVar58);
      auVar60 = divpd(auVar60,auVar22);
      auVar77._0_8_ = auVar60._0_8_ * local_268;
      auVar77._8_8_ = auVar60._8_8_ * dStack_260;
      dVar88 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_));
      dVar71 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_));
      auVar102 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar77,auVar36);
      dVar53 = 0.0;
      dVar112 = local_e8;
      dVar116 = local_f8;
      dVar21 = dStack_f0;
    }
    auVar60 = _DAT_149934d80;
    dVar44 = dVar44 * dVar113;
    auVar47 = ZEXT816(0x3ff0000000000000);
    auVar22 = minpd(local_398,_DAT_149934d80);
    auVar78._8_8_ = dVar43;
    auVar78._0_8_ = dVar44;
    auVar79 = minpd(auVar78,auVar47);
    auVar50._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar50._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar18 = movmskpd(iVar18,auVar50);
    auVar80._8_8_ = -(ulonglong)(auVar79._8_8_ < 0.0);
    auVar80._0_8_ = -(ulonglong)(auVar79._0_8_ < 0.0);
    uVar17 = movmskpd(iVar13,auVar80);
    dVar113 = auVar102._8_8_;
    dVar59 = auVar102._0_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar45 = dVar88 * 0.0;
      dVar46 = dVar71 * 0.0;
      dVar52 = dVar113 * 0.0 * 1.0;
      dVar82 = dVar59 * 0.0 * -1.0;
      dVar115 = dVar46 * -1.0 + dVar88 + dVar52 + dVar59 * 0.0;
      dVar89 = dVar45 * 1.0 + dVar71 + dVar82 + dVar113 * 0.0;
      auVar91._0_8_ = ((dVar46 * 1.0 + dVar59) - dVar45) + dVar52;
      auVar91._8_8_ = ((dVar45 * -1.0 + dVar113) - dVar46) + dVar82;
      dVar112 = dVar112 * 1.0;
      dVar53 = dVar53 * 0.0;
      dVar113 = dVar21 * 0.0 - dVar116 * 0.0;
      dVar45 = dVar112 * 0.0 - dVar21 * 0.0;
      dVar46 = dVar116 * 0.0 - dVar112 * 0.0;
      dVar52 = dVar53 * 1.0 - dVar53 * 1.0;
      dVar45 = dVar45 + dVar45;
      dVar46 = dVar46 + dVar46;
      dVar113 = dVar113 + dVar113;
      dVar52 = dVar52 + dVar52;
      dVar59 = local_2f8 + (dVar113 * 0.0 - dVar46 * 0.0) + dVar116 + dVar45;
      dVar116 = dStack_2f0 + (dVar45 * 0.0 - dVar113 * 0.0) + dVar21 + dVar46;
      dVar112 = local_328 + (dVar46 * 0.0 - dVar45 * 0.0) + dVar112 + dVar113;
      dVar53 = dStack_320 + (dVar52 * 1.0 - dVar52 * 1.0) + dVar53 + dVar52;
      uVar8 = 0;
    }
    else {
      local_1c8 = 0.0;
      dStack_1c0 = 0.0;
      local_1a8 = 0.0;
      uStack_1a0 = 0;
      local_198 = 0.0;
      dStack_190 = 0.0;
      local_178 = local_2f8;
      dStack_170 = dStack_2f0;
      local_168._8_8_ = 0x3ff0000000000000;
      local_168._0_8_ = local_328;
      dVar115 = dVar71 + dVar71;
      dVar89 = dVar59 + dVar59;
      dVar53 = dVar88 * (dVar88 + dVar88);
      uVar6 = local_398._0_8_;
      uVar7 = local_398._8_8_;
      local_258 = ((double)DAT_149934d80 - (dVar59 * dVar89 + dVar71 * dVar115)) *
                  (double)local_398._0_8_;
      dVar45 = (dVar88 + dVar88) * dVar113;
      dStack_210 = (dVar89 * dVar71 - dVar45) * dVar44;
      local_218 = (dVar88 * dVar89 + dVar115 * dVar113) * dVar44;
      dStack_250 = (dVar115 * dVar88 + dVar89 * dVar113) * (double)local_398._0_8_;
      local_228 = (dVar89 * dVar71 + dVar45) * (double)local_398._8_8_;
      local_248 = (dVar88 * dVar89 - dVar115 * dVar113) * (double)local_398._0_8_;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar59 * dVar89 + dVar53)) * (double)local_398._8_8_
      ;
      local_238._0_8_ = (dVar115 * dVar88 - dVar89 * dVar113) * (double)local_398._8_8_;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar53 + dVar71 * dVar115)) * dVar44;
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar116;
      dStack_1f0 = dVar21;
      local_1e8 = dVar112;
      local_1d8 = auVar47;
      local_1b8 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_188 = auVar47;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar37._8_8_ = -(ulonglong)(0.0 <= (double)uVar7);
      auVar37._0_8_ = -(ulonglong)(0.0 <= (double)uVar6);
      auVar22 = blendvpd(_DAT_149936790,auVar60,auVar37);
      uVar20 = -(ulonglong)(0.0 <= dVar44 * 1.0);
      dVar112 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar53 = auVar22._0_8_;
      local_148 = local_148 * dVar53;
      dStack_150 = dStack_150 * dVar53;
      local_158 = local_158 * dVar53;
      dVar53 = auVar22._8_8_;
      local_128 = local_128 * dVar53;
      dStack_130 = dStack_130 * dVar53;
      local_138 = dVar53 * local_138;
      dStack_110 = dStack_110 * dVar112;
      local_118 = dVar112 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar112;
      uVar8 = FUN_14481fd10(&local_278,&local_158);
      dVar112 = local_268 * local_268 + local_278 * local_278;
      dVar53 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar69._0_8_ = dVar112 + dVar53;
      auVar69._8_8_ = dVar112 + dVar53;
      auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_);
      auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_);
      auVar22 = sqrtpd(auVar69,auVar69);
      auVar60 = divpd(auVar60,auVar22);
      auVar81._0_8_ = auVar60._0_8_ * local_268;
      auVar81._8_8_ = auVar60._8_8_ * dStack_260;
      dVar115 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_));
      dVar89 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_));
      auVar91 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar81,auVar38);
      dVar53 = 0.0;
      dVar112 = local_e8;
      dVar59 = local_f8;
      dVar116 = dStack_f0;
    }
    auVar60 = _DAT_149934d80;
    dVar44 = dVar44 * 1.0;
    auVar39._8_8_ = dVar43 * 0.0;
    auVar39._0_8_ = dVar44;
    auVar22 = minpd(auVar39,auVar47);
    auVar40._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    uVar17 = movmskpd(uVar8,auVar40);
    dVar21 = auVar91._0_8_;
    dVar113 = auVar91._8_8_;
    if ((uVar17 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar45 = dVar89 * local_338 * -1.0 +
               dVar21 * dStack_340 + local_348 * dVar113 * 1.0 + dStack_330 * dVar115;
      dVar46 = dVar115 * local_338 * 1.0 +
               dVar113 * dStack_340 + local_348 * dVar21 * -1.0 + dStack_330 * dVar89;
      auVar103._0_8_ =
           dVar113 * local_338 * 1.0 +
           ((local_348 * dVar89 * 1.0 + dStack_330 * dVar21) - dStack_340 * dVar115);
      auVar103._8_8_ =
           dVar21 * local_338 * -1.0 +
           ((local_348 * dVar115 * -1.0 + dStack_330 * dVar113) - dStack_340 * dVar89);
      dVar112 = dVar112 * 1.0;
      dVar53 = dVar53 * 0.0;
      dVar21 = dVar116 * local_348 - dStack_340 * dVar59;
      dVar113 = dVar112 * dStack_340 - local_338 * dVar116;
      dVar115 = dVar59 * local_338 - local_348 * dVar112;
      dVar89 = dVar53 * dStack_330 - dStack_330 * dVar53;
      dVar113 = dVar113 + dVar113;
      dVar115 = dVar115 + dVar115;
      dVar21 = dVar21 + dVar21;
      dVar89 = dVar89 + dVar89;
      local_f8 = (dVar21 * dStack_340 - local_338 * dVar115) + dStack_330 * dVar113 + dVar59 + 0.0;
      dStack_f0 = (dVar113 * local_338 - dVar21 * local_348) + dStack_330 * dVar115 + dVar116 + 0.0;
      local_e8 = (dVar115 * local_348 - dStack_340 * dVar113) + dStack_330 * dVar21 + dVar112 + 0.0;
      dStack_120 = (dVar89 * dStack_330 - dVar89 * dStack_330) + dStack_330 * dVar89 + dVar53 + 0.0;
    }
    else {
      dVar45 = dStack_340 + dStack_340;
      dVar46 = local_338 + local_338;
      dVar53 = local_348 * (local_348 + local_348);
      dStack_190 = (local_348 + local_348) * dStack_330;
      local_1a8 = dVar46 * dStack_340 + dStack_190;
      dStack_190 = dVar46 * dStack_340 - dStack_190;
      local_198 = dVar45 * dStack_330 + local_348 * dVar46;
      local_1c8 = local_348 * dVar46 - dVar45 * dStack_330;
      local_1d8._8_8_ = dVar45 * local_348 + dVar46 * dStack_330;
      local_1d8._0_8_ = (double)DAT_149934d80 - (local_338 * dVar46 + dStack_340 * dVar45);
      dStack_1c0 = 0.0;
      local_1b8._8_8_ = DAT_149934d80._8_8_ - (local_338 * dVar46 + dVar53);
      local_1b8._0_8_ = dVar45 * local_348 - dVar46 * dStack_330;
      uStack_1a0 = 0;
      local_188._8_8_ = 0;
      local_188._0_8_ = 1.0 - (dVar53 + dStack_340 * dVar45);
      dVar53 = dVar89 + dVar89;
      dVar46 = dVar21 + dVar21;
      dVar45 = dVar115 * (dVar115 + dVar115);
      uVar6 = local_398._0_8_;
      uVar7 = local_398._8_8_;
      local_258 = ((double)DAT_149934d80 - (dVar21 * dVar46 + dVar89 * dVar53)) *
                  (double)local_398._0_8_;
      dVar52 = (dVar115 + dVar115) * dVar113;
      dStack_210 = (dVar46 * dVar89 - dVar52) * dVar44;
      local_218 = (dVar115 * dVar46 + dVar53 * dVar113) * dVar44;
      dStack_250 = (dVar53 * dVar115 + dVar46 * dVar113) * (double)local_398._0_8_;
      local_228 = (dVar46 * dVar89 + dVar52) * (double)local_398._8_8_;
      local_248 = (dVar115 * dVar46 - dVar53 * dVar113) * (double)local_398._0_8_;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar21 * dVar46 + dVar45)) * (double)local_398._8_8_
      ;
      local_238._0_8_ = (dVar53 * dVar115 - dVar46 * dVar113) * (double)local_398._8_8_;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar45 + dVar89 * dVar53)) * dVar44;
      uStack_200 = 0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar59;
      dStack_1f0 = dVar116;
      local_1e8 = dVar112;
      local_168 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar41._8_8_ = -(ulonglong)(0.0 <= (double)uVar7);
      auVar41._0_8_ = -(ulonglong)(0.0 <= (double)uVar6);
      auVar22 = blendvpd(_DAT_149936790,auVar60,auVar41);
      uVar20 = -(ulonglong)(0.0 <= dVar44 * 1.0);
      dVar112 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar53 = auVar22._0_8_;
      local_148 = local_148 * dVar53;
      dStack_150 = dStack_150 * dVar53;
      local_158 = local_158 * dVar53;
      dVar53 = auVar22._8_8_;
      local_128 = local_128 * dVar53;
      dStack_130 = dStack_130 * dVar53;
      local_138 = dVar53 * local_138;
      dStack_110 = dStack_110 * dVar112;
      local_118 = dVar112 * local_118;
      local_108._0_8_ = (double)local_108._0_8_ * dVar112;
      FUN_14481fd10(&local_278,&local_158);
      auVar51._0_8_ = local_278 * local_278;
      auVar51._8_8_ = dStack_270 * dStack_270;
      dVar112 = local_268 * local_268 + auVar51._0_8_;
      dVar53 = dStack_260 * dStack_260 + auVar51._8_8_;
      auVar70._0_8_ = dVar112 + dVar53;
      auVar70._8_8_ = dVar112 + dVar53;
      auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
      auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
      auVar22 = sqrtpd(auVar51,auVar70);
      auVar60 = divpd(auVar60,auVar22);
      auVar107._0_8_ = auVar60._0_8_ * local_268;
      auVar107._8_8_ = auVar60._8_8_ * dStack_260;
      dVar45 = (double)((ulonglong)(local_278 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_));
      dVar46 = (double)((ulonglong)(dStack_270 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_));
      auVar103 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar107,auVar42);
      dStack_120 = 0.0;
    }
    dVar112 = dVar43 * 0.0 * 0.0;
    local_118 = (double)local_398._0_8_;
    dStack_110 = (double)local_398._8_8_;
    local_108._8_4_ = SUB84(dVar112,0);
    local_108._0_8_ = dVar44 * 1.0;
    local_108._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
    dVar112 = *(double *)(param_1 + 0x248);
    dVar44 = *(double *)(param_1 + 0x248);
    dVar89 = auVar103._0_8_;
    dVar43 = auVar103._8_8_;
    dVar59 = *(double *)(param_1 + 0x230);
    dVar53 = *(double *)(param_1 + 0x230);
    dVar21 = *(double *)(param_1 + 0x238);
    dVar116 = *(double *)(param_1 + 0x238);
    dVar115 = *(double *)(param_1 + 0x240);
    dVar113 = *(double *)(param_1 + 0x240);
    local_158 = dVar46 * dVar115 * -1.0 + dVar89 * dVar21 + dVar43 * dVar59 * 1.0 + dVar45 * dVar112
    ;
    dStack_150 = dVar45 * dVar113 * 1.0 +
                 dVar43 * dVar116 + dVar89 * dVar53 * -1.0 + dVar46 * dVar44;
    local_148 = dVar43 * dVar115 * 1.0 +
                ((dVar59 * dVar46 * 1.0 + dVar112 * dVar89) - dVar45 * dVar21);
    dStack_140 = dVar89 * dVar113 * -1.0 +
                 ((dVar53 * dVar45 * -1.0 + dVar44 * dVar43) - dVar46 * dVar116);
    local_138 = local_f8 + *(double *)(param_1 + 0x250);
    dStack_130 = dStack_f0 + *(double *)(param_1 + 600);
    local_128 = *(double *)(param_1 + 0x260) + local_e8;
    dStack_120 = dStack_120 + 0.0;
    local_3a8 = 0;
    FUN_144927a08(*(undefined8 *)(param_1 + 0x20),&local_158,0,0);
  }
  if ((local_d0 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce7234 FUN_148ce7234 body=514 status=ok
// SIG undefined FUN_148ce7234(void)

void FUN_148ce7234(longlong *param_1,double *param_2,float param_3)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  
  if (((param_1[4] != 0) && (lVar4 = *(longlong *)(param_1[4] + 0xae8), lVar4 != 0)) &&
     (*(longlong *)(param_1[3] + 0x580) != 0)) {
    if (param_1[1] != 0) {
      lVar8 = FUN_144a2f878();
      lVar5 = param_1[1];
      if ((((lVar5 != 0) && (lVar8 != 0)) &&
          ((lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0 &&
           ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar6 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)))))) &&
         (cVar7 = (**(code **)(*(longlong *)(lVar5 + 0x3b60) + 0x50))(lVar5 + 0x3b60), cVar7 != '\0'
         )) {
        fVar9 = (float)(**(code **)(*param_1 + 0x48))(param_1);
        param_3 = param_3 * fVar9;
      }
    }
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar12 = dVar2 * dVar2 + dVar3 * dVar3;
    if (((dVar12 != 1.0) || (dVar10 = dVar3, dVar11 = dVar2, NAN(dVar12))) &&
       (dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar12)) {
      dVar10 = dVar3 * (1.0 / SQRT(dVar12));
      dVar11 = dVar2 * (1.0 / SQRT(dVar12));
    }
    lVar5 = param_1[3];
    uVar1 = *(undefined4 *)(lVar5 + 0x58c);
    uVar13 = *(undefined4 *)(lVar5 + 0x588);
    lVar8 = FUN_1433d6e38(lVar4,*(undefined8 *)(lVar5 + 0x578),lVar5 + 0x580);
    lVar5 = param_1[3];
    if ((lVar8 != 0) &&
       (*(float *)(lVar8 + 0x5c) <= *(float *)(lVar5 + 0x594) &&
        *(float *)(lVar5 + 0x594) != *(float *)(lVar8 + 0x5c))) {
      uVar13 = *(undefined4 *)(lVar5 + 0x590);
    }
    FUN_140ed2570(lVar4,lVar5 + 0x580,*(undefined8 *)(lVar5 + 0x578),
                  (float)(dVar11 * (double)param_3),(float)(dVar10 * (double)param_3),0x3f800000,
                  uVar13,uVar1,0,0);
  }
  return;
}



// FUNCTION 148ce7436 FUN_148ce7436 body=193 status=ok
// SIG undefined FUN_148ce7436(void)

float FUN_148ce7436(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x598);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_141262f1a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar3 != (longlong *)0x0 && plVar2 != plVar3) &&
         (lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3), 0 < *(int *)(lVar4 + 0xa8))) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x20);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        else if (lVar4 == 0) {
          return fVar6;
        }
        fVar5 = (float)FUN_143ecaf00(lVar4);
        fVar6 = fVar6 * fVar5;
      }
    }
  }
  return fVar6;
}



// FUNCTION 148ce74fe FUN_148ce74fe body=198 status=ok
// SIG undefined FUN_148ce74fe(void)

void FUN_148ce74fe(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148ce75c6(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce75c6 FUN_148ce75c6 body=208 status=ok
// SIG undefined FUN_148ce75c6(void)

undefined8 FUN_148ce75c6(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1465c959a();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce7698 FUN_148ce7698 body=152 status=ok
// SIG undefined FUN_148ce7698(void)

undefined8 * FUN_148ce7698(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b960ae0;
  param_1[0x1b] = DAT_14cb72628;
  FUN_1446f470e(&local_20,L"Head",1);
  param_1[0x1c] = local_20;
  param_1[0x1d] = 0xffffffff7fffffff;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce7732 FUN_148ce7732 body=496 status=ok
// SIG undefined FUN_148ce7732(void)

void FUN_148ce7732(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  if (*(char *)(param_1 + 0x114) == '\x01') {
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa8);
  if (lVar3 == 0) goto LAB_148ce77b3;
  uVar2 = FUN_1407725cc();
  lVar3 = FUN_144718840(lVar3,uVar2);
  if (lVar3 == 0) goto LAB_148ce77b3;
  uVar2 = FUN_144b397c8(lVar3);
  lVar3 = FUN_144a782da(uVar2,param_1 + 0xd8);
  if (lVar3 == 0) goto LAB_148ce77b3;
  FUN_148ce7924(lVar3 + 0x330,&local_58);
  *(undefined8 *)(param_1 + 0x100) = local_48;
  *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0xf4) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0xf8) = uStack_50;
  *(undefined4 *)(param_1 + 0xfc) = uStack_4c;
  *(undefined1 *)(param_1 + 0x108) = 1;
  if ((*(char *)(lVar3 + 0x3b0) < '\0') ||
     (puVar4 = (undefined8 *)FUN_143cb8284(lVar3), *(char *)(puVar4 + 8) != '\x02'))
  goto LAB_148ce77b3;
  local_58 = *puVar4;
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
LAB_148ce785f:
    lVar3 = FUN_14479d2ce(&local_58);
    if (lVar3 == 0) goto LAB_148ce77b3;
    lVar5 = FUN_144a7cbb2();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148ce77b3;
  }
  else {
    lVar5 = FUN_141147bae();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148ce785f;
    plVar6 = (longlong *)FUN_14479d2ce(lVar3 + 1000);
    if ((plVar6 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar6 + 0x5f0))(plVar6), lVar3 == 0))
    goto LAB_148ce77b3;
  }
  fVar1 = *(float *)(lVar3 + 0x39c);
  lVar5 = FUN_145a8ada2();
  lVar3 = *(longlong *)(lVar5 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar5);
    lVar3 = *(longlong *)(lVar5 + 0x110);
    if (lVar3 != 0) goto LAB_148ce78b9;
    fVar7 = 0.0;
  }
  else {
LAB_148ce78b9:
    fVar7 = *(float *)(lVar3 + 0x80);
  }
  *(float *)(param_1 + 0x110) = fVar1 - fVar7;
  *(undefined1 *)(param_1 + 0x114) = 1;
LAB_148ce77b3:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce7924 FUN_148ce7924 body=320 status=ok
// SIG undefined FUN_148ce7924(void)

void FUN_148ce7924(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x60);
    dVar2 = *(double *)(param_1 + 0x58);
    dVar3 = *(double *)(param_1 + 0x50);
    dVar7 = dVar1 - dVar3 * 0.0;
    dVar8 = dVar3 * 0.0 - dVar2;
    dVar5 = dVar2 * 0.0 + dVar1 * -0.0;
    dVar8 = dVar8 + dVar8;
    dVar7 = dVar7 + dVar7;
    dVar5 = dVar5 + dVar5;
    dVar4 = *(double *)(param_1 + 0x68);
    if (*(char *)(param_1 + 8) == '\x01') {
      dVar6 = (double)*(float *)(param_1 + 4);
    }
    else {
      dVar6 = 3.3999999521443642e+38;
    }
    *param_2 = ((dVar2 * dVar8 - dVar7 * dVar1) + dVar5 * dVar4 + 1.0) * dVar6;
    param_2[1] = ((dVar1 * dVar5 - dVar8 * dVar3) + dVar4 * dVar7 + 0.0) * dVar6;
    param_2[2] = ((dVar3 * dVar7 - dVar5 * dVar2) + dVar4 * dVar8 + 0.0) * dVar6;
  }
  else {
    param_2[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar1;
  }
  return;
}



// FUNCTION 148ce7abe FUN_148ce7abe body=1499 status=ok
// SIG undefined FUN_148ce7abe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ce7abe(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_188 [32];
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_148 [16];
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((*(char *)(param_1 + 0x108) == '\x01') && (*(char *)(param_1 + 0x114) == '\x01')) &&
     (lVar12 = *param_2, lVar12 != 0)) {
    dVar21 = *(double *)(param_1 + 0xf0);
    dVar17 = *(double *)(param_1 + 0xf8);
    dVar14 = (double)*(float *)(param_1 + 0x110) + *(double *)(param_1 + 0x100);
    dVar9 = *(double *)(lVar12 + 0x10);
    dVar7 = -dVar9;
    dVar8 = -*(double *)(lVar12 + 0x18);
    dVar22 = *(double *)(lVar12 + 0x20) * -1.0;
    dVar18 = *(double *)(lVar12 + 0x28) * 1.0;
    dVar16 = dVar17 * dVar7 - dVar21 * dVar8;
    dVar19 = *(double *)(param_1 + 0x100) * dVar8 - dVar17 * dVar22;
    dVar20 = dVar21 * dVar22 - *(double *)(param_1 + 0x100) * dVar7;
    dVar19 = dVar19 + dVar19;
    dVar20 = dVar20 + dVar20;
    dVar23 = dVar21 + 0.0;
    dVar6 = *(double *)(param_1 + 0xf8) + 0.0;
    dVar16 = dVar16 + dVar16;
    auVar4 = *(undefined1 (*) [16])(lVar12 + 0x50);
    auVar15 = divpd(_DAT_149934d80,auVar4);
    local_168 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar15._0_8_);
    dStack_160 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar15._8_8_);
    dVar17 = (dVar9 * dVar16 + dVar22 * dVar19 + dVar18 * dVar20 + dVar17) * dStack_160;
    local_148._8_4_ = SUB84(dVar17,0);
    local_148._0_8_ = ((dVar16 * dVar8 - dVar20 * dVar22) + dVar18 * dVar19 + dVar21) * local_168;
    local_148._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    local_158 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x60))) &
                        (ulonglong)(1.0 / *(double *)(lVar12 + 0x60)));
    local_138 = (dVar16 * dVar18 + *(double *)(param_1 + 0x100) + (dVar20 * dVar7 - dVar19 * dVar8))
                * local_158;
    dVar17 = dVar6 * dVar7 - dVar23 * dVar8;
    dVar21 = dVar14 * dVar8 - dVar6 * dVar22;
    dVar16 = dVar23 * dVar22 - dVar14 * dVar7;
    dVar21 = dVar21 + dVar21;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    local_168 = ((dVar17 * dVar8 - dVar16 * dVar22) + dVar18 * dVar21 + dVar23) * local_168;
    dStack_160 = (dVar9 * dVar17 + dVar22 * dVar21 + dVar18 * dVar16 + dVar6) * dStack_160;
    local_158 = (dVar17 * dVar18 + dVar14 + (dVar16 * dVar7 - dVar21 * dVar8)) * local_158;
    fVar13 = (float)FUN_1407dd5b0(local_148,&local_168);
    dVar17 = (double)local_148._0_8_ * dStack_160 - local_168 * (double)local_148._8_8_;
    dVar21 = local_168 * local_138 - (double)local_148._0_8_ * local_158;
    dVar6 = (double)local_148._8_8_ * local_158 - dStack_160 * local_138;
    dVar14 = dVar17 * dVar17 + dVar6 * dVar6 + dVar21 * dVar21;
    if (((dVar14 != 1.0) || (dVar22 = dVar21, dVar18 = dVar17, dVar16 = dVar6, NAN(dVar14))) &&
       (dVar22 = DAT_14c8464e8, dVar18 = DAT_14c8464f0, dVar16 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar14)) {
      dVar14 = 1.0 / SQRT(dVar14);
      dVar22 = dVar21 * dVar14;
      dVar18 = dVar17 * dVar14;
      dVar16 = dVar6 * dVar14;
    }
    dVar14 = sin((double)fVar13 * 0.5);
    dVar6 = cos((double)fVar13 * 0.5);
    dVar16 = dVar16 * dVar14;
    dVar22 = dVar22 * dVar14;
    dVar18 = dVar18 * dVar14;
    iVar11 = *(int *)(param_1 + 0xec);
    lVar12 = (longlong)iVar11;
    if (*(char *)(param_2[7] + lVar12) == '\0') {
      FUN_1447d5d8e(param_2 + 4,iVar11);
      iVar11 = *(int *)(param_1 + 0xec);
    }
    lVar10 = param_2[4];
    lVar12 = lVar12 * 0x60;
    dVar17 = *(double *)(lVar10 + lVar12);
    dVar21 = ((double *)(lVar10 + lVar12))[1];
    pdVar1 = (double *)(lVar10 + 0x10 + lVar12);
    dVar7 = *pdVar1;
    dVar8 = pdVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar12);
    local_128 = *puVar2;
    uStack_120 = puVar2[1];
    puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar12);
    local_118 = *puVar2;
    uStack_110 = puVar2[1];
    puVar2 = (undefined8 *)(lVar10 + 0x40 + lVar12);
    local_108 = *puVar2;
    uStack_100 = puVar2[1];
    puVar2 = (undefined8 *)(lVar10 + 0x50 + lVar12);
    local_f8 = *puVar2;
    uStack_f0 = puVar2[1];
    dVar14 = dVar17 * dVar18 * 1.0 + dVar8 * dVar22 + dVar16 * dVar7 * -1.0 + dVar6 * dVar21;
    iVar5 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
      FUN_1400c28ea(param_3,iVar5);
    }
    lVar12 = *param_3;
    lVar10 = (longlong)iVar5 * 0x70;
    *(int *)(lVar12 + lVar10) = iVar11;
    auVar4._8_4_ = SUB84(dVar14,0);
    auVar4._0_8_ = dVar21 * dVar18 * -1.0 + dVar7 * dVar22 + dVar16 * dVar8 * 1.0 + dVar6 * dVar17;
    auVar4._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(lVar12 + 0x10 + lVar10) = auVar4;
    pdVar1 = (double *)(lVar12 + 0x20 + lVar10);
    *pdVar1 = dVar8 * dVar18 * 1.0 + ((dVar16 * dVar21 * 1.0 + dVar6 * dVar7) - dVar22 * dVar17);
    pdVar1[1] = dVar7 * dVar18 * -1.0 + ((dVar16 * dVar17 * -1.0 + dVar6 * dVar8) - dVar22 * dVar21)
    ;
    puVar3 = (undefined4 *)(lVar12 + 0x30 + lVar10);
    *puVar3 = (undefined4)local_128;
    puVar3[1] = local_128._4_4_;
    puVar3[2] = (undefined4)uStack_120;
    puVar3[3] = uStack_120._4_4_;
    puVar3 = (undefined4 *)(lVar12 + 0x40 + lVar10);
    *puVar3 = (undefined4)local_118;
    puVar3[1] = local_118._4_4_;
    puVar3[2] = (undefined4)uStack_110;
    puVar3[3] = uStack_110._4_4_;
    puVar3 = (undefined4 *)(lVar12 + 0x50 + lVar10);
    *puVar3 = (undefined4)local_108;
    puVar3[1] = local_108._4_4_;
    puVar3[2] = (undefined4)uStack_100;
    puVar3[3] = uStack_100._4_4_;
    puVar3 = (undefined4 *)(lVar12 + 0x60 + lVar10);
    *puVar3 = (undefined4)local_f8;
    puVar3[1] = local_f8._4_4_;
    puVar3[2] = (undefined4)uStack_f0;
    puVar3[3] = uStack_f0._4_4_;
  }
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce809a FUN_148ce809a body=123 status=ok
// SIG undefined FUN_148ce809a(void)

void FUN_148ce809a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
    FUN_1457ca070(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar2 = param_2;
  }
  *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_1 + 0x100;
  iVar1 = *(int *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
    FUN_1457ca070(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar2 = param_2;
  }
  *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_1 + 0x3d0;
  return;
}



// FUNCTION 148ce8116 FUN_148ce8116 body=456 status=ok
// SIG undefined FUN_148ce8116(void)

void FUN_148ce8116(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [32];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148ce82e0(param_2,&local_58);
  pvVar2 = local_58;
  local_68 = (void *)0x0;
  local_60 = local_50;
  if ((longlong)local_50 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_50,0);
    memcpy(local_68,pvVar2,(longlong)local_50 * 2);
  }
  FUN_147906d4c(param_2,&local_68,0);
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_78 = 0;
    uStack_70 = 0;
    uVar8 = FUN_144b23bf6(param_1,0);
    uVar3 = FUN_147906f5e(param_2,uVar8,&local_78);
    FUN_147906d38(uVar4,uVar3);
    if (1 < *(int *)(param_1 + 0x28)) {
      uVar5 = 1;
      lVar7 = 0x10;
      do {
        FUN_140002266(&local_88,L"(State: %d)",uVar5 & 0xffffffff);
        pvVar2 = local_88;
        lVar1 = *(longlong *)(param_1 + 0x20);
        local_98 = (void *)0x0;
        lVar6 = (longlong)local_80;
        local_90 = local_80;
        if (lVar6 == 0) {
          local_8c = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_80,0);
          memcpy(local_98,pvVar2,lVar6 * 2);
        }
        uVar8 = FUN_144b23bf6(param_1,uVar5 & 0xffffffff);
        uVar4 = FUN_147906f5e(param_2,uVar8,&local_98);
        FUN_147906d38(lVar1 + lVar7,uVar4);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x28));
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce82e0 FUN_148ce82e0 body=208 status=ok
// SIG undefined FUN_148ce82e0(void)

undefined8 FUN_148ce82e0(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1465c9ae2();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce83b2 FUN_148ce83b2 body=266 status=ok
// SIG undefined FUN_148ce83b2(void)

void FUN_148ce83b2(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1[4] + 0xa8);
  if (lVar6 != 0) {
    lVar2 = FUN_1402269ac();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_148ce83f2;
  }
  lVar6 = 0;
LAB_148ce83f2:
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar2 != 0 && lVar6 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      plVar3 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar8);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_144a5dd5e();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              == lVar4 + 0x30)) && ((*(byte *)(plVar3 + 0x84) & 2) != 0)) &&
           (cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar1 != '\0')) {
          lVar4 = FUN_140d27aa0(plVar3);
          lVar5 = FUN_14479d2ce(lVar4 + 0xac);
          if (lVar6 == lVar5) {
            FUN_148db7fc4(lVar4);
          }
        }
      }
      lVar8 = lVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(lVar2 + 0x238));
  }
  return;
}



// FUNCTION 148ce84bc FUN_148ce84bc body=172 status=ok
// SIG undefined FUN_148ce84bc(void)

void FUN_148ce84bc(uint *param_1,undefined4 param_2,byte param_3)

{
  longlong lVar1;
  
  *param_1 = *param_1 | (uint)param_3 << ((byte)param_2 & 0x1f);
  if (param_3 != 0) {
    return;
  }
  switch(param_2) {
  case 0:
    lVar1 = 0x20;
    break;
  case 1:
    lVar1 = 0x38;
    break;
  case 2:
    lVar1 = 0x50;
    break;
  case 3:
    lVar1 = 0x68;
    break;
  case 4:
    lVar1 = 0x80;
    break;
  case 5:
    lVar1 = 0x98;
    break;
  case 6:
    lVar1 = 0xb0;
    break;
  case 7:
    lVar1 = 200;
    break;
  case 8:
    lVar1 = 0xe0;
    break;
  case 9:
    lVar1 = 0xf8;
    break;
  case 10:
    lVar1 = 0x110;
    break;
  case 0xb:
    lVar1 = 0x128;
    break;
  case 0xc:
    lVar1 = 0x140;
    goto LAB_148ce8536;
  case 0xd:
    lVar1 = 0x148;
LAB_148ce8536:
    if ((undefined8 *)((longlong)param_1 + lVar1) != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)param_1 + lVar1) = 0;
    }
  default:
    goto switchD_148ce84e9_default;
  }
  if ((longlong)param_1 + lVar1 != 0) {
    FUN_1470d79f6((longlong)param_1 + lVar1);
    return;
  }
switchD_148ce84e9_default:
  return;
}



// FUNCTION 148ce8568 FUN_148ce8568 body=182 status=ok
// SIG undefined FUN_148ce8568(void)

undefined8 FUN_148ce8568(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uVar5;
  
  lVar2 = FUN_140fecfdc(param_3);
  lVar3 = FUN_140ae5922(param_3 + 0x28);
  if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) &&
      (cVar1 = FUN_144729dda(lVar3 + 8), cVar1 != '\0')) &&
     ((lVar2 != 0 && *(longlong **)(lVar3 + 0x10) != (longlong *)0x0 &&
      (lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x18))(), lVar3 != 0)))) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(lVar2 + 0x168);
      uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
      if (lVar4 == *(longlong *)(lVar3 + 0x3d0) || lVar4 == lVar3) {
        return CONCAT71(uVar5,1);
      }
      return CONCAT71(uVar5,*(longlong *)(lVar2 + 0x1b0) == *(longlong *)(lVar3 + 0x3d0));
    }
  }
  return 0;
}



// FUNCTION 148ce861e FUN_148ce861e body=149 status=ok
// SIG undefined FUN_148ce861e(void)

undefined8 FUN_148ce861e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  char *local_20;
  char local_15;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  local_14[3] = '\0';
  local_14[2] = '\0';
  local_14[1] = 0;
  local_28 = local_14;
  local_14[0] = '\0';
  local_20 = &local_15;
  local_15 = '\0';
  cVar1 = FUN_140ae55cd(param_3);
  if (cVar1 != '\0') {
    if ((local_14[2] == '\x01') &&
       (((local_14[3] != '\x01' || (local_14[0] != '\x01')) || (local_15 == '\0')))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce86b4 FUN_148ce86b4 body=196 status=ok
// SIG undefined FUN_148ce86b4(void)

ulonglong FUN_148ce86b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  char *local_30;
  char local_1d;
  char local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  local_1c[3] = '\0';
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_38 = local_1c;
  local_1c[0] = '\0';
  local_30 = &local_1d;
  local_1d = '\0';
  cVar1 = FUN_140ae55cd(param_3);
  if (cVar1 != '\0') {
    if ((local_1c[3] != '\x01') || (cVar1 = local_1d, local_1c[0] != '\x01')) {
      cVar1 = '\0';
    }
    if ((((cVar1 == '\0') && ((local_1c[2] & 1U) != 0)) ||
        (lVar2 = FUN_140ae5afe(param_3), lVar2 == 0)) || (*(longlong *)(lVar2 + 0x3f0) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = ((ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x3f0) + 0x368) & 0xffffffffffffff04) >> 2
      ;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148ce877a FUN_148ce877a body=407 status=ok
// SIG undefined FUN_148ce877a(void)

float * FUN_148ce877a(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  cVar3 = FUN_1447f8eee(param_4);
  if (cVar3 != '\0') goto LAB_148ce87b6;
  FUN_140f83604(param_4,&local_50);
  if (local_50 != 0) {
    pfVar5 = param_2;
    if (*(char *)(param_1 + 8) == '\x01') {
      fVar6 = *(float *)(local_50 + 0x30) - *(float *)(local_50 + 0x24);
      fVar7 = 0.0;
      if ((fVar6 != 0.0) || (NAN(fVar6))) {
        fVar7 = (*(float *)(local_50 + 200) - *(float *)(local_50 + 0x24)) / fVar6;
      }
      if (*(char *)(param_1 + 9) != '\0') {
        fVar7 = 1.0 - fVar7;
      }
      pcVar4 = DAT_14c9a85d0;
      if (DAT_14c9a85d0 != (code *)0x0) {
LAB_148ce884c:
        (*pcVar4)(pfVar5);
LAB_148ce884e:
        if (0x18 < *(ushort *)(param_2 + 6)) {
          FUN_1400020a8(*(undefined8 *)param_2);
        }
      }
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = fVar7;
      *(undefined1 *)(param_2 + 8) = 3;
    }
    else {
      if (*(char *)(param_1 + 9) == '\0') {
        fVar7 = (float)FUN_143d46ea6();
      }
      else {
        fVar7 = (float)FUN_143d46e84();
        fVar6 = (float)FUN_143d46ea6(local_50);
        fVar7 = fVar7 - fVar6;
      }
      if (*(byte *)(param_2 + 8) != 3) {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(param_2 + 8) * 0x120));
        if (pcVar4 != (code *)0x0) {
          if (0x18 < *(ushort *)(param_2 + 6)) {
            pfVar5 = *(float **)param_2;
          }
          goto LAB_148ce884c;
        }
        goto LAB_148ce884e;
      }
      *param_2 = fVar7;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_148ce87b6:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ce8912 FUN_148ce8912 body=370 status=ok
// SIG undefined FUN_148ce8912(void)

undefined4 *
FUN_148ce8912(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_148ced37a(param_4);
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
    local_70 = *(undefined8 *)(lVar5 + 0x9d8);
    local_68 = *(undefined4 *)(lVar5 + 0x9e0);
    local_60 = 0;
    FUN_14170fc10(&local_58);
    local_40 = local_58;
    uVar6 = FUN_14477b664(local_50);
    lVar5 = FUN_14477b664(uVar6);
    local_30 = local_48;
    local_38 = lVar5;
    if (lVar5 == 0) {
      lVar5 = FUN_140927942();
    }
    uVar7 = FUN_14477b664(lVar5);
    uVar1 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar1 = (uint)((ulonglong)local_58 >> 0x10);
    uVar9 = (uint)local_58 & 0xffff;
    uVar3 = FUN_144a78877(((uint)local_58 << 0x10 | uVar9) + (int)((ulonglong)local_58 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4),uVar2 >> 0x10 ^ uVar2);
    iVar4 = FUN_148ced3b8((longlong *)(param_1 + 8),uVar3,&local_40);
    if ((iVar4 != -1) &&
       (lVar5 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x28,
       puVar8 = (undefined4 *)(lVar5 + 0x18), puVar8 != (undefined4 *)0x0 && lVar5 != 0)) {
      uVar3 = *puVar8;
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar3;
      goto LAB_148ce8952;
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = 0;
LAB_148ce8952:
  *(undefined1 *)(param_2 + 8) = 2;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce8a86 FUN_148ce8a86 body=805 status=ok
// SIG undefined FUN_148ce8a86(void)

int * FUN_148ce8a86(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  int local_7c;
  int *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_14049cbd6(param_4);
  if (lVar6 == 0) {
    *(undefined2 *)(param_2 + 6) = 0;
    uVar3 = 0;
    goto LAB_148ce8d5e;
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar7 = FUN_1401548e0();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar8 != 0) && (*plVar1 != 0)) {
      plVar9 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar9 + 0x110))(plVar9);
        lVar8 = FUN_144aff482(uVar7,plVar1);
        *(longlong *)(param_1 + 0x18) = lVar8;
        if (lVar8 != 0) goto LAB_148ce8ae8;
      }
    }
    lVar8 = *(longlong *)(lVar6 + 0x170);
    if (lVar8 == 0) goto LAB_148ce8ae8;
    lVar10 = FUN_1411531be();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        != lVar10 + 0x30)) goto LAB_148ce8ae8;
    iVar13 = FUN_14140e32c(lVar8);
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = iVar13;
  }
  else {
LAB_148ce8ae8:
    local_78 = param_2;
    if (*(int *)(lVar6 + 0x238) < 1) {
      iVar13 = 0;
    }
    else {
      iVar12 = 0;
      lVar8 = 0;
      iVar13 = 0;
      do {
        plVar9 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar8);
        if (plVar9 != (longlong *)0x0) {
          lVar10 = FUN_144a5dd5e();
          if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
              == lVar10 + 0x30)) {
            uVar7 = (**(code **)(*plVar9 + 0x5e0))(plVar9);
            lVar10 = FUN_140f4df0c(uVar7);
            if (lVar10 != 0) {
              lVar11 = *(longlong *)(param_1 + 0x10);
              if (lVar11 == 0) {
                uVar7 = FUN_1401548e0();
                lVar11 = FUN_14477b664(uVar7);
                *(longlong *)(param_1 + 0x10) = lVar11;
              }
              if (*(longlong *)(param_1 + 0x18) == 0) {
                if ((*plVar1 != 0) && (lVar11 != 0)) {
                  plVar9 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar9 == (longlong *)0x0) ||
                     (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
                    *(undefined8 *)(param_1 + 0x18) = 0;
                  }
                  else {
                    uVar7 = (**(code **)(*plVar9 + 0x110))(plVar9);
                    lVar11 = FUN_144aff482(uVar7,plVar1);
                    *(longlong *)(param_1 + 0x18) = lVar11;
                    if (lVar11 != 0) goto LAB_148ce8b91;
                  }
                }
              }
              else {
LAB_148ce8b91:
                FUN_1406c9d00(lVar10,&local_70);
                if (local_68 == 0) {
                  uVar7 = FUN_140927942();
                  local_68 = FUN_14477b664(uVar7);
                }
                lVar10 = *(longlong *)(param_1 + 0x10);
                local_7c = iVar13;
                if (lVar10 == 0) {
                  lVar10 = FUN_1401548e0();
                }
                lVar11 = *plVar1;
                uVar7 = FUN_14477b664(lVar10);
                local_50 = lVar11;
                uVar4 = FUN_144a7891a(uVar7);
                lVar10 = local_68;
                local_58 = local_70;
                uVar5 = FUN_144a7891a(local_68);
                local_90 = &local_50;
                local_98 = uVar7;
                cVar2 = FUN_144a789b8(uVar5,lVar10,&local_58,uVar4);
                iVar13 = local_7c;
                if (cVar2 == '\0') goto LAB_148ce8b3a;
              }
              iVar13 = iVar13 + 1;
            }
          }
        }
LAB_148ce8b3a:
        lVar8 = lVar8 + 8;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar6 + 0x238));
    }
    *(undefined2 *)(local_78 + 6) = 4;
    *local_78 = iVar13;
    param_2 = local_78;
  }
  uVar3 = 2;
LAB_148ce8d5e:
  *(undefined1 *)(param_2 + 8) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ce8dac FUN_148ce8dac body=139 status=ok
// SIG undefined FUN_148ce8dac(void)

ulonglong FUN_148ce8dac(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar3 = param_1;
  if (lVar4 == 0) {
    lVar3 = FUN_1401548e0();
    lVar4 = FUN_14477b664(lVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar5 = (longlong *)0x0;
    goto LAB_148ce8dd9;
  }
  plVar5 = (longlong *)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_148ce8dd9;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148ce8e33:
    lVar4 = 0;
  }
  else {
    plVar5 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148ce8e33;
    plVar5 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(plVar5,(longlong *)(param_1 + 8));
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),lVar4 == 0);
LAB_148ce8dd9:
  return (ulonglong)plVar5 & 0xffffffff;
}



// FUNCTION 148ce8e38 FUN_148ce8e38 body=139 status=ok
// SIG undefined FUN_148ce8e38(void)

ulonglong FUN_148ce8e38(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar3 = param_1;
  if (lVar4 == 0) {
    lVar3 = FUN_1401548e0();
    lVar4 = FUN_14477b664(lVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar5 = (longlong *)0x0;
    goto LAB_148ce8e65;
  }
  plVar5 = (longlong *)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_148ce8e65;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148ce8ebf:
    lVar4 = 0;
  }
  else {
    plVar5 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148ce8ebf;
    plVar5 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(plVar5,(longlong *)(param_1 + 8));
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),lVar4 == 0);
LAB_148ce8e65:
  return (ulonglong)plVar5 & 0xffffffff;
}



// FUNCTION 148ce8ec4 FUN_148ce8ec4 body=312 status=ok
// SIG undefined FUN_148ce8ec4(void)

undefined4 FUN_148ce8ec4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_1401548e0();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
          *(longlong *)(param_1 + 0x18) = lVar5;
          if (lVar5 != 0) goto LAB_148ce8f08;
          goto LAB_148ce8f82;
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
LAB_148ce8f82:
    lVar5 = FUN_14049cbd6(param_3);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x170), lVar5 != 0)) {
      lVar6 = FUN_1411531be();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        uVar3 = FUN_140a1d9f8(param_4,&local_34);
        if ((char)uVar3 != '\0') {
          FUN_143d518e2(lVar5,local_34);
        }
        goto LAB_148ce8f0a;
      }
    }
  }
LAB_148ce8f08:
  uVar3 = 0;
LAB_148ce8f0a:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce8ffe FUN_148ce8ffe body=229 status=ok
// SIG undefined FUN_148ce8ffe(void)

undefined8 FUN_148ce8ffe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_1401548e0();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
        *(longlong *)(param_1 + 0x18) = lVar4;
        if (lVar4 != 0) {
          return 0;
        }
      }
    }
    lVar4 = FUN_14049cbd6(param_3);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x170), lVar4 != 0)) {
      lVar5 = FUN_1411531be();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        FUN_14885cf64(lVar4);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 148ce90e4 FUN_148ce90e4 body=588 status=ok
// SIG undefined FUN_148ce90e4(void)

undefined4 * FUN_148ce90e4(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14049cbd6(param_4);
  lVar5 = FUN_1406f625c(lVar4);
  if ((lVar4 != 0 && lVar5 != 0) && ((longlong)*(int *)(param_4 + 0x28) != 0)) {
    lVar6 = FUN_148ced4e2(DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
    if (lVar6 != 0) {
      local_50 = *(undefined4 *)(lVar6 + 0x10);
      local_58 = *(undefined8 *)(lVar6 + 8);
      if ((int)local_58 != 0) {
        plVar7 = (longlong *)FUN_140d28a87(lVar4);
        (**(code **)(*plVar7 + 0x78))(plVar7,&local_68,&local_58);
        if (local_68 == 0) {
          *(undefined2 *)(param_2 + 6) = 0;
          *(undefined1 *)(param_2 + 8) = 0;
        }
        else {
          local_78 = 0;
          uStack_70 = 0;
          if ((longlong)*(int *)(param_1 + 0x10) == 0) {
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = 0;
            *(undefined1 *)(param_2 + 8) = 2;
          }
          else {
            lVar6 = *(longlong *)(param_1 + 8);
            local_80 = lVar6 + (longlong)*(int *)(param_1 + 0x10) * 0xc;
            do {
              lVar8 = FUN_1456d28b8(lVar6,&local_58,lVar5);
              if ((lVar8 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
                lVar11 = 0;
                do {
                  lVar9 = FUN_14479d2ce(lVar11 * 8 + *(longlong *)(lVar4 + 0x230));
                  if (lVar9 != 0) {
                    if ((longlong)(int)uStack_70 != 0) {
                      lVar10 = 0;
                      do {
                        if (*(longlong *)(local_78 + lVar10) == lVar9) goto LAB_148ce929d;
                        lVar10 = lVar10 + 8;
                      } while ((longlong)(int)uStack_70 * 8 != lVar10);
                    }
                    if (*(longlong *)(lVar9 + 0x3d0) != 0) {
                      cVar2 = FUN_14064aef8(lVar8);
                      if (cVar2 != '\0') {
                        lVar10 = (longlong)(int)uStack_70;
                        uVar3 = (int)uStack_70 + 1;
                        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
                        if (uStack_70._4_4_ < uVar3) {
                          FUN_140cba038(&local_78);
                        }
                        *(longlong *)(local_78 + lVar10 * 8) = lVar9;
                      }
                    }
                  }
LAB_148ce929d:
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < *(int *)(lVar4 + 0x238));
              }
              lVar6 = lVar6 + 0xc;
            } while (lVar6 != local_80);
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = (int)uStack_70;
            *(undefined1 *)(param_2 + 8) = 2;
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        goto LAB_148ce9145;
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
LAB_148ce9145:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce9338 FUN_148ce9338 body=302 status=ok
// SIG undefined FUN_148ce9338(void)

undefined8 * FUN_148ce9338(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + 400;
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14acb7dd0;
  plVar1 = plVar3 + 2;
  FUN_147f819d6(plVar1,0x404e000000000000,0x3fe0000000000000);
  local_38 = plVar1;
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1438a36a2(param_1,&local_38,1);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1438a36a2(param_1,&local_38,1);
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
  FUN_1438a38f2(param_1,&local_48);
  *param_2 = local_48;
  param_2[1] = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ce9476 FUN_148ce9476 body=1757 status=ok
// SIG undefined FUN_148ce9476(void)

void FUN_148ce9476(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  float fVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  int local_1a0;
  undefined4 uStack_19c;
  longlong *plStack_198;
  undefined4 local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  int *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar5 = param_1[9];
  plVar1 = param_1 + 0xb;
  if (0 < (int)param_1[0x2c]) {
    local_a0 = (int *)0x0;
    local_98 = 0x800000000;
    FUN_147f78854(plVar1,&local_1a0);
    piVar11 = local_a0;
    if (local_a0 == (int *)0x0) {
      piVar11 = &local_1a0;
    }
    lVar12 = (longlong)(int)local_98;
    if (lVar12 != 0) {
      lVar10 = 0;
      do {
        bVar8 = *(byte *)(param_1 + 0x2f);
        *(byte *)(param_1 + 0x2f) = bVar8 ^ 1;
        if (bVar8 == 0) {
          uVar18 = 0;
          uVar19 = 0xbff00000;
          if (9.999999747378752e-05 < *(double *)((longlong)piVar11 + lVar10 + 8)) {
            FUN_1438a38f2(plVar1,&local_1c0);
            uVar13 = FUN_147f81bd4(local_1c0);
            plVar4 = local_1b8;
            uVar18 = (undefined4)uVar13;
            uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if (local_1b8 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1b8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_1b8)(local_1b8);
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
          param_1[0x31] = CONCAT44(uVar19,uVar18);
        }
        lVar10 = lVar10 + 0x20;
      } while (lVar12 * 0x20 != lVar10);
    }
    if (local_a0 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  bVar8 = *(byte *)(param_1 + 0x2f);
  if ((bVar8 == 1) && (0.0 <= (double)param_1[0x31])) {
    FUN_1438a38f2(plVar1,&local_1a0);
    dVar14 = (double)FUN_147f81b96(CONCAT44(uStack_19c,local_1a0));
    plVar1 = plStack_198;
    if (plStack_198 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_198 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_198)(plStack_198);
        LOCK();
        piVar11 = (int *)((longlong)plVar1 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((double)param_1[0x31] <= dVar14) {
      *(undefined1 *)(param_1 + 0x2f) = 0;
      param_1[0x31] = -0x4010000000000000;
      goto LAB_148ce9616;
    }
    bVar8 = *(byte *)(param_1 + 0x2f);
  }
  if (((bVar8 & 1) == 0) || (lVar12 = *(longlong *)(param_1[8] + 0x148), lVar12 == 0))
  goto LAB_148ce9616;
  uVar13 = FUN_14580e7fe();
  cVar9 = FUN_1448093f4(lVar12,uVar13);
  if (cVar9 == '\0') goto LAB_148ce9616;
  FUN_148929484(lVar12,&local_1a0,&local_1c8);
  fVar7 = fStack_18c;
  dVar14 = local_1c8;
  if ((fStack_18c <= 0.0001) ||
     (dVar15 = (double)FUN_1438aadaa(), (double)fVar7 * 1.5 + dVar14 <= dVar15)) {
    if (*(int *)((longlong)param_1 + 0x29c) < 0) {
      *(undefined4 *)(param_1 + 0x53) = 0;
LAB_148ce9b3c:
      FUN_147f7e7cc(param_1 + 0x32,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x53) = 0;
    }
  }
  else if ((((0.0001 <= ABS(fStack_18c - *(float *)((longlong)param_1 + 0x2c4))) ||
            (0.0001 <= ABS(fStack_188 - *(float *)(param_1 + 0x59)))) ||
           (0.0001 <= ABS(fStack_184 - *(float *)((longlong)param_1 + 0x2cc)))) ||
          ((0.0001 <= ABS(local_180 - *(float *)(param_1 + 0x5a)) ||
           (0.005 <= ABS(((double)param_1[0x5b] - (double)(int)param_1[0x56] * 0.001) -
                         (local_1c8 - (double)local_1a0 * 0.001)))))) {
    dVar16 = (double)fStack_18c;
    dVar6 = (double)local_1a0 * -0.001 + local_1c8;
    dVar15 = *(double *)(lVar5 + 0x38);
    plVar1 = param_1 + 0x32;
    FUN_1438a38f2(plVar1,&local_1c0);
    FUN_147f81aca(local_1c0,SUB84(60.0 / dVar16,0));
    plVar4 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_1438a38f2(plVar1,&local_1c0);
    FUN_147f81ab6(local_1c0,(int)*(undefined8 *)(lVar5 + 0x38));
    plVar4 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_1438a38f2(plVar1,&local_1c0);
    FUN_147f81b60(local_1c0);
    plVar4 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_1438a38f2(plVar1,&local_1c0);
    FUN_147f81bce(local_1c0,SUB84(dVar6 - dVar15,0));
    plVar4 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar11 = (int *)((longlong)plVar4 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_1438a38f2(plVar1,&local_1c0);
    dVar15 = (double)FUN_147f81b96(local_1c0);
    plVar1 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1b8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar11 = (int *)((longlong)plVar1 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar15 + 1.0;
    auVar17 = roundpd(auVar17,auVar17,1);
    param_1[0x30] = auVar17._0_8_;
    *(undefined4 *)(param_1 + 0x53) = 0;
    if (*(int *)((longlong)param_1 + 0x29c) < 0) goto LAB_148ce9b3c;
  }
  *(float *)(param_1 + 0x5a) = local_180;
  *(undefined4 *)(param_1 + 0x58) = local_190;
  *(float *)((longlong)param_1 + 0x2c4) = fStack_18c;
  *(float *)(param_1 + 0x59) = fStack_188;
  *(float *)((longlong)param_1 + 0x2cc) = fStack_184;
  param_1[0x56] = CONCAT44(uStack_19c,local_1a0);
  param_1[0x57] = (longlong)plStack_198;
  param_1[0x5b] = (longlong)local_1c8;
  plVar1 = param_1 + 0x32;
  FUN_1438a38f2(plVar1,&local_1c0);
  dVar15 = (double)FUN_147f81b96(local_1c0);
  plVar4 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar11 = (int *)((longlong)plVar4 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((double)param_1[0x30] <= dVar15) {
    if ((fVar7 <= 0.0001) ||
       (dVar15 = (double)FUN_1438aadaa(), (double)fVar7 * 1.5 + dVar14 <= dVar15)) {
      *(undefined4 *)(param_1 + 0x53) = 0;
      if (*(int *)((longlong)param_1 + 0x29c) < 0) {
        FUN_147f7e7cc(plVar1,0);
      }
    }
    else {
      local_1c0 = (double)param_1[0x30] + 1.0;
      param_1[0x30] = (longlong)local_1c0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = (longlong *)&DAT_3ff0000000000000;
      FUN_147f78136(plVar1);
    }
    if (0 < (int)param_1[0x53]) {
      FUN_147f78c0c(param_1,plVar1,1);
    }
  }
LAB_148ce9616:
  if (((char)param_1[0x2f] == '\0') && ((int)param_1[0x2c] < 1)) {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  if ((local_90 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ce9b54 FUN_148ce9b54 body=219 status=ok
// SIG undefined FUN_148ce9b54(void)

undefined4 * FUN_148ce9b54(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_148ceab4a(param_1 + 6,param_2 + 6);
  FUN_148ceab4a(param_1 + 0xc,param_2 + 0xc);
  FUN_148ceac40(param_1 + 0x12,param_2 + 0x12);
  FUN_148cead30(param_1 + 0x26,param_2 + 0x26);
  FUN_148ceab9e(param_1 + 0x3a,param_2 + 0x3a);
  FUN_148ceae20(param_1 + 0x40,param_2 + 0x40);
  FUN_148ceaf10(param_1 + 0x54,param_2 + 0x54);
  uVar1 = param_2[0x69];
  uVar2 = param_2[0x6a];
  uVar3 = param_2[0x6b];
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar2;
  param_1[0x6b] = uVar3;
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  FUN_148ceabf2(param_1 + 0x6e,param_2 + 0x6e);
  FUN_141314ea8(param_1 + 0x72,param_2 + 0x72);
  param_1[0x7c] = param_2[0x7c];
  return param_1;
}



// FUNCTION 148ce9c30 FUN_148ce9c30 body=289 status=ok
// SIG undefined FUN_148ce9c30(void)

void FUN_148ce9c30(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_2 + 0x60);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = *(longlong *)(param_2 + 0x58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar6 = *(longlong *)(param_2 + 0x58);
    plVar8 = *(longlong **)(param_2 + 0x60);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
      goto LAB_148ce9c55;
    }
  }
  bVar5 = true;
  plVar8 = (longlong *)0x0;
LAB_148ce9c55:
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x58);
    plVar4 = *(longlong **)(param_2 + 0x60);
    if (plVar4 == (longlong *)0x0) {
      uVar7 = FUN_14479d2ce(lVar6 + 0x30);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar7 = FUN_14479d2ce(lVar6 + 0x30);
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if (!bVar5) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar6 = FUN_145e7b266(uVar7);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x3c8) = *(undefined1 *)(param_1 + 8);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148ce9cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ce9d52 FUN_148ce9d52 body=298 status=ok
// SIG undefined FUN_148ce9d52(void)

void FUN_148ce9d52(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_2 + 0x60);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = *(longlong *)(param_2 + 0x58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar6 = *(longlong *)(param_2 + 0x58);
    plVar8 = *(longlong **)(param_2 + 0x60);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
      goto LAB_148ce9d77;
    }
  }
  bVar5 = true;
  plVar8 = (longlong *)0x0;
LAB_148ce9d77:
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x58);
    plVar4 = *(longlong **)(param_2 + 0x60);
    if (plVar4 == (longlong *)0x0) {
      uVar7 = FUN_14479d2ce(lVar6 + 0x30);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar7 = FUN_14479d2ce(lVar6 + 0x30);
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if (!bVar5) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar6 = FUN_145e7b266(uVar7);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x3c8) == *(char *)(param_1 + 8))) {
    *(undefined1 *)(lVar6 + 0x3c8) = 4;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148ce9def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ce9e7c FUN_148ce9e7c body=341 status=ok
// SIG undefined FUN_148ce9e7c(void)

ulonglong FUN_148ce9e7c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_148ce9fd2(param_1 + 8);
  if ((lVar2 != 0) && (lVar3 = FUN_1447210f0(lVar2), lVar3 != 0)) {
    lVar3 = FUN_1447210f0(lVar2);
    uVar7 = 0;
    if (*(int *)(lVar3 + 0x238) < 1) goto LAB_148ce9fa6;
    lVar8 = 0;
    do {
      plVar4 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar8);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = FUN_144a5dd5e();
        if ((((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              == lVar5 + 0x30)) && ((*(byte *)(plVar4 + 0x84) & 2) != 0)) &&
           ((cVar1 = (**(code **)(*plVar4 + 0x6c8))(plVar4), cVar1 != '\0' && (plVar4[0x7a] != 0))))
        {
          lVar5 = *(longlong *)(plVar4[0x7a] + 0x1c8);
          if (lVar5 == 0) {
            local_48 = DAT_14c8464f0;
            local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_58 = *(undefined8 *)(lVar5 + 0x260);
            uStack_50 = *(undefined8 *)(lVar5 + 0x268);
            local_48 = *(undefined8 *)(lVar5 + 0x270);
          }
          cVar1 = FUN_140056702(lVar2,&local_58,0,0);
          if (cVar1 != '\0') {
            uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
            goto LAB_148ce9fa6;
          }
        }
      }
      lVar8 = lVar8 + 8;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(lVar3 + 0x238));
  }
  uVar7 = 0;
LAB_148ce9fa6:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148ce9fd2 FUN_148ce9fd2 body=197 status=ok
// SIG undefined FUN_148ce9fd2(void)

longlong FUN_148ce9fd2(longlong param_1)

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
  lVar4 = FUN_140fe7df8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148cea098 FUN_148cea098 body=38 status=ok
// SIG undefined FUN_148cea098(void)

undefined8 FUN_148cea098(undefined8 param_1,int param_2)

{
  FUN_148bedcec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cea0c8 FUN_148cea0c8 body=286 status=ok
// SIG undefined FUN_148cea0c8(void)

void FUN_148cea0c8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b961060;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b961060;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
                    /* WARNING: Could not recover jumptable at 0x000148cea174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cea1e6 FUN_148cea1e6 body=53 status=ok
// SIG undefined FUN_148cea1e6(void)

void FUN_148cea1e6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    cVar2 = FUN_144729dda(lVar1 + 0x18);
    if ((cVar2 != '\0') && (*(longlong *)(lVar1 + 0x20) != 0)) {
      FUN_148cdefe8();
      return;
    }
  }
  return;
}



// FUNCTION 148cea21c FUN_148cea21c body=79 status=ok
// SIG undefined FUN_148cea21c(void)

void FUN_148cea21c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + 0x40) = 1;
  *(undefined8 *)(lVar3 + 8) = 0;
  plVar4 = *(longlong **)(lVar3 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cea260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cea26c FUN_148cea26c body=83 status=ok
// SIG undefined FUN_148cea26c(void)

undefined8 * FUN_148cea26c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b961020;
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



// FUNCTION 148cea2c0 FUN_148cea2c0 body=163 status=ok
// SIG undefined FUN_148cea2c0(void)

void FUN_148cea2c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    local_38 = 0;
    FUN_14485c47a(&local_38,*(undefined8 *)(param_1 + 0x38));
    uVar4 = local_38;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
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
    *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar3;
    *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
    *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cea364 FUN_148cea364 body=66 status=ok
// SIG undefined FUN_148cea364(void)

undefined8 * FUN_148cea364(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  FUN_14485c47a(param_1,uVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 148cea3a6 FUN_148cea3a6 body=1 status=ok
// SIG undefined FUN_148cea3a6(void)

void FUN_148cea3a6(void)

{
  return;
}



// FUNCTION 148cea3a8 FUN_148cea3a8 body=29 status=ok
// SIG undefined FUN_148cea3a8(void)

undefined8 FUN_148cea3a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cea3c6 FUN_148cea3c6 body=64 status=ok
// SIG undefined FUN_148cea3c6(void)

undefined8 * FUN_148cea3c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b961060;
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



// FUNCTION 148cea40a FUN_148cea40a body=81 status=ok
// SIG undefined FUN_148cea40a(void)

undefined8 FUN_148cea40a(longlong param_1)

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



// FUNCTION 148cea462 FUN_148cea462 body=89 status=ok
// SIG undefined FUN_148cea462(void)

bool FUN_148cea462(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cea4ad;
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
LAB_148cea4ad:
  return lVar6 == param_2;
}



// FUNCTION 148cea4d8 FUN_148cea4d8 body=118 status=ok
// SIG undefined FUN_148cea4d8(void)

void FUN_148cea4d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b961060;
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



// FUNCTION 148cea54e FUN_148cea54e body=118 status=ok
// SIG undefined FUN_148cea54e(void)

void FUN_148cea54e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b961060;
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



// FUNCTION 148cea5c4 FUN_148cea5c4 body=156 status=ok
// SIG undefined FUN_148cea5c4(void)

void FUN_148cea5c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b961060;
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
                    /* WARNING: Could not recover jumptable at 0x000148cea650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cea660 FUN_148cea660 body=94 status=ok
// SIG undefined FUN_148cea660(void)

void FUN_148cea660(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cea6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cea6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148cea6be FUN_148cea6be body=93 status=ok
// SIG undefined FUN_148cea6be(void)

ulonglong FUN_148cea6be(longlong param_1)

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
LAB_148cea710:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148cea710;
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



// FUNCTION 148cea71c FUN_148cea71c body=71 status=ok
// SIG undefined FUN_148cea71c(void)

undefined8 * FUN_148cea71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148cea764 FUN_148cea764 body=132 status=ok
// SIG undefined FUN_148cea764(void)

void FUN_148cea764(longlong param_1,int param_2)

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



// FUNCTION 148cea7ea FUN_148cea7ea body=132 status=ok
// SIG undefined FUN_148cea7ea(void)

void FUN_148cea7ea(longlong param_1,int param_2)

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



// FUNCTION 148cea870 FUN_148cea870 body=464 status=ok
// SIG undefined FUN_148cea870(void)

int FUN_148cea870(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar9 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar10 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar4 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar4 == (longlong *)0x0) {
LAB_148cea98d:
        plVar11 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_148cea98d;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar11 = plVar4;
        } while (!bVar12);
      }
      bVar12 = true;
      if (plVar7 != (longlong *)0x0) {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_148cea923;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar13 = iVar6 == iVar5;
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar13);
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
          bVar12 = false;
        }
        else {
          bVar12 = false;
        }
      }
LAB_148cea923:
      if (plVar11 == (longlong *)0x0) {
        lVar10 = 0;
      }
      else {
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (bVar12) {
        lVar9 = 0;
      }
      if (lVar10 == lVar9) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 148ceaa40 FUN_148ceaa40 body=38 status=ok
// SIG undefined FUN_148ceaa40(void)

undefined8 FUN_148ceaa40(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceaa66 FUN_148ceaa66 body=38 status=ok
// SIG undefined FUN_148ceaa66(void)

undefined8 FUN_148ceaa66(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceaa8c FUN_148ceaa8c body=38 status=ok
// SIG undefined FUN_148ceaa8c(void)

undefined8 FUN_148ceaa8c(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceaab2 FUN_148ceaab2 body=38 status=ok
// SIG undefined FUN_148ceaab2(void)

undefined8 FUN_148ceaab2(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceaad8 FUN_148ceaad8 body=38 status=ok
// SIG undefined FUN_148ceaad8(void)

undefined8 FUN_148ceaad8(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceaafe FUN_148ceaafe body=38 status=ok
// SIG undefined FUN_148ceaafe(void)

undefined8 FUN_148ceaafe(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceab24 FUN_148ceab24 body=38 status=ok
// SIG undefined FUN_148ceab24(void)

undefined8 FUN_148ceab24(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceab4a FUN_148ceab4a body=84 status=ok
// SIG undefined FUN_148ceab4a(void)

longlong * FUN_148ceab4a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148ceab9e FUN_148ceab9e body=84 status=ok
// SIG undefined FUN_148ceab9e(void)

longlong * FUN_148ceab9e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148ceabf2 FUN_148ceabf2 body=78 status=ok
// SIG undefined FUN_148ceabf2(void)

longlong * FUN_148ceabf2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140e20b19(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 148ceac40 FUN_148ceac40 body=93 status=ok
// SIG undefined FUN_148ceac40(void)

longlong FUN_148ceac40(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148ceac9e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 148ceac9e FUN_148ceac9e body=146 status=ok
// SIG undefined FUN_148ceac9e(void)

longlong * FUN_148ceac9e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148cead30 FUN_148cead30 body=93 status=ok
// SIG undefined FUN_148cead30(void)

longlong FUN_148cead30(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148cead8e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 148cead8e FUN_148cead8e body=146 status=ok
// SIG undefined FUN_148cead8e(void)

longlong * FUN_148cead8e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148ceae20 FUN_148ceae20 body=93 status=ok
// SIG undefined FUN_148ceae20(void)

longlong FUN_148ceae20(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148ceae7e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 148ceae7e FUN_148ceae7e body=146 status=ok
// SIG undefined FUN_148ceae7e(void)

longlong * FUN_148ceae7e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148ceaf10 FUN_148ceaf10 body=93 status=ok
// SIG undefined FUN_148ceaf10(void)

longlong FUN_148ceaf10(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148ceaf6e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 148ceaf6e FUN_148ceaf6e body=146 status=ok
// SIG undefined FUN_148ceaf6e(void)

longlong * FUN_148ceaf6e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148ceb000 FUN_148ceb000 body=9 status=ok
// SIG undefined FUN_148ceb000(void)

void FUN_148ceb000(longlong param_1)

{
  FUN_148cd8762(param_1 + 0x10);
  return;
}



// FUNCTION 148ceb00a FUN_148ceb00a body=29 status=ok
// SIG undefined FUN_148ceb00a(void)

undefined8 FUN_148ceb00a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceb028 FUN_148ceb028 body=164 status=ok
// SIG undefined FUN_148ceb028(void)

void FUN_148ceb028(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_148ceb0a0;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148ceb0a0;
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
LAB_148ceb0a0:
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
                    /* WARNING: Could not recover jumptable at 0x000148ceb0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ceb0cc FUN_148ceb0cc body=59 status=ok
// SIG undefined FUN_148ceb0cc(void)

void FUN_148ceb0cc(longlong param_1)

{
  FUN_1449db362(param_1 + 0x370);
  FUN_1449db362(param_1 + 0x360);
  FUN_140d97376(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148ceb108 FUN_148ceb108 body=31 status=ok
// SIG undefined FUN_148ceb108(void)

undefined8 FUN_148ceb108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceb13e FUN_148ceb13e body=93 status=ok
// SIG undefined FUN_148ceb13e(void)

void FUN_148ceb13e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ceb19c FUN_148ceb19c body=93 status=ok
// SIG undefined FUN_148ceb19c(void)

void FUN_148ceb19c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ceb1fa FUN_148ceb1fa body=126 status=ok
// SIG undefined FUN_148ceb1fa(void)

void FUN_148ceb1fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961210;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ceb269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ceb282 FUN_148ceb282 body=31 status=ok
// SIG undefined FUN_148ceb282(void)

undefined8 FUN_148ceb282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceb2b6 FUN_148ceb2b6 body=85 status=ok
// SIG undefined FUN_148ceb2b6(void)

void FUN_148ceb2b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9612a0;
  return;
}



// FUNCTION 148ceb30c FUN_148ceb30c body=118 status=ok
// SIG undefined FUN_148ceb30c(void)

void FUN_148ceb30c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9612a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ceb373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ceb382 FUN_148ceb382 body=105 status=ok
// SIG undefined FUN_148ceb382(void)

undefined8 FUN_148ceb382(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14620c0ec(param_1 + 0x18,local_20);
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



// FUNCTION 148ceb3ec FUN_148ceb3ec body=68 status=ok
// SIG undefined FUN_148ceb3ec(void)

undefined8 * FUN_148ceb3ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9613a0;
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



// FUNCTION 148ceb434 FUN_148ceb434 body=81 status=ok
// SIG undefined FUN_148ceb434(void)

undefined8 FUN_148ceb434(longlong param_1)

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



// FUNCTION 148ceb48c FUN_148ceb48c body=91 status=ok
// SIG undefined FUN_148ceb48c(void)

bool FUN_148ceb48c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ceb4bc;
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
LAB_148ceb4bc:
  return lVar6 == param_2;
}



// FUNCTION 148ceb504 FUN_148ceb504 body=118 status=ok
// SIG undefined FUN_148ceb504(void)

void FUN_148ceb504(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9613a0;
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



// FUNCTION 148ceb57a FUN_148ceb57a body=118 status=ok
// SIG undefined FUN_148ceb57a(void)

void FUN_148ceb57a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9613a0;
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



// FUNCTION 148ceb5f0 FUN_148ceb5f0 body=156 status=ok
// SIG undefined FUN_148ceb5f0(void)

void FUN_148ceb5f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9613a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ceb67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ceb68c FUN_148ceb68c body=100 status=ok
// SIG undefined FUN_148ceb68c(void)

void FUN_148ceb68c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ceb6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ceb6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ceb6f0 FUN_148ceb6f0 body=75 status=ok
// SIG undefined FUN_148ceb6f0(void)

undefined8 * FUN_148ceb6f0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b961430;
  plVar2 = (longlong *)param_1[0x10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140fae274(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceb740 FUN_148ceb740 body=81 status=ok
// SIG undefined FUN_148ceb740(void)

undefined8 FUN_148ceb740(longlong param_1)

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



// FUNCTION 148ceb798 FUN_148ceb798 body=89 status=ok
// SIG undefined FUN_148ceb798(void)

bool FUN_148ceb798(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ceb7e3;
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
LAB_148ceb7e3:
  return lVar6 == param_2;
}



// FUNCTION 148ceb80e FUN_148ceb80e body=118 status=ok
// SIG undefined FUN_148ceb80e(void)

void FUN_148ceb80e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40d390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9614d0;
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



// FUNCTION 148ceb884 FUN_148ceb884 body=118 status=ok
// SIG undefined FUN_148ceb884(void)

void FUN_148ceb884(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40d390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9614d0;
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



// FUNCTION 148ceb8fa FUN_148ceb8fa body=156 status=ok
// SIG undefined FUN_148ceb8fa(void)

void FUN_148ceb8fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40d390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9614d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ceb986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ceb996 FUN_148ceb996 body=98 status=ok
// SIG undefined FUN_148ceb996(void)

void FUN_148ceb996(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ceb9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ceb9ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ceb9f8 FUN_148ceb9f8 body=31 status=ok
// SIG undefined FUN_148ceb9f8(void)

undefined8 FUN_148ceb9f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ceba34 FUN_148ceba34 body=101 status=ok
// SIG undefined FUN_148ceba34(void)

void FUN_148ceba34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ceba9a FUN_148ceba9a body=101 status=ok
// SIG undefined FUN_148ceba9a(void)

void FUN_148ceba9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cebb00 FUN_148cebb00 body=134 status=ok
// SIG undefined FUN_148cebb00(void)

void FUN_148cebb00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961540;
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
                    /* WARNING: Could not recover jumptable at 0x000148cebb77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cebb98 FUN_148cebb98 body=322 status=ok
// SIG undefined FUN_148cebb98(void)

void FUN_148cebb98(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 148cebcdc FUN_148cebcdc body=285 status=ok
// SIG undefined FUN_148cebcdc(void)

void FUN_148cebcdc(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cebdfa FUN_148cebdfa body=159 status=ok
// SIG undefined FUN_148cebdfa(void)

void FUN_148cebdfa(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_148cebe37;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148cebe37;
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
LAB_148cebe37:
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
                    /* WARNING: Could not recover jumptable at 0x000148cebe95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148cebe9a FUN_148cebe9a body=114 status=ok
// SIG undefined FUN_148cebe9a(void)

void FUN_148cebe9a(longlong *param_1,int param_2)

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



// FUNCTION 148cebf0c FUN_148cebf0c body=147 status=ok
// SIG undefined FUN_148cebf0c(void)

void FUN_148cebf0c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148cebfa0 FUN_148cebfa0 body=322 status=ok
// SIG undefined FUN_148cebfa0(void)

undefined4 * FUN_148cebfa0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148cec0e4(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_148cec1ca(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_148cec2de(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cec0e4 FUN_148cec0e4 body=229 status=ok
// SIG undefined FUN_148cec0e4(void)

int * FUN_148cec0e4(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148cec1ca FUN_148cec1ca body=161 status=ok
// SIG undefined FUN_148cec1ca(void)

undefined8 FUN_148cec1ca(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148cec26c(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148cec26c FUN_148cec26c body=114 status=ok
// SIG undefined FUN_148cec26c(void)

void FUN_148cec26c(longlong *param_1,int param_2)

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



// FUNCTION 148cec2de FUN_148cec2de body=477 status=ok
// SIG undefined FUN_148cec2de(void)

void FUN_148cec2de(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 148cec4bc FUN_148cec4bc body=105 status=ok
// SIG undefined FUN_148cec4bc(void)

void FUN_148cec4bc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1418dc2fe(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 148cec526 FUN_148cec526 body=114 status=ok
// SIG undefined FUN_148cec526(void)

void FUN_148cec526(longlong *param_1,int param_2)

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



// FUNCTION 148cec598 FUN_148cec598 body=31 status=ok
// SIG undefined FUN_148cec598(void)

undefined8 FUN_148cec598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cec5d0 FUN_148cec5d0 body=93 status=ok
// SIG undefined FUN_148cec5d0(void)

void FUN_148cec5d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fe50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cec62e FUN_148cec62e body=93 status=ok
// SIG undefined FUN_148cec62e(void)

void FUN_148cec62e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95fe50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cec68c FUN_148cec68c body=126 status=ok
// SIG undefined FUN_148cec68c(void)

void FUN_148cec68c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95fe50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961660;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cec6fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cec718 FUN_148cec718 body=31 status=ok
// SIG undefined FUN_148cec718(void)

undefined8 FUN_148cec718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cec754 FUN_148cec754 body=93 status=ok
// SIG undefined FUN_148cec754(void)

void FUN_148cec754(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9616d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cec7b2 FUN_148cec7b2 body=93 status=ok
// SIG undefined FUN_148cec7b2(void)

void FUN_148cec7b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9616d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cec810 FUN_148cec810 body=126 status=ok
// SIG undefined FUN_148cec810(void)

void FUN_148cec810(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9616d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cec87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cec89c FUN_148cec89c body=21 status=ok
// SIG undefined FUN_148cec89c(void)

undefined8 FUN_148cec89c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148cec8cc FUN_148cec8cc body=101 status=ok
// SIG undefined FUN_148cec8cc(void)

void FUN_148cec8cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cec932 FUN_148cec932 body=101 status=ok
// SIG undefined FUN_148cec932(void)

void FUN_148cec932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cec998 FUN_148cec998 body=134 status=ok
// SIG undefined FUN_148cec998(void)

void FUN_148cec998(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95ff40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961820;
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
                    /* WARNING: Could not recover jumptable at 0x000148ceca0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ceca1e FUN_148ceca1e body=42 status=ok
// SIG undefined FUN_148ceca1e(void)

void FUN_148ceca1e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ceca45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148ceca48 FUN_148ceca48 body=68 status=ok
// SIG undefined FUN_148ceca48(void)

undefined8 * FUN_148ceca48(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b961890;
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



// FUNCTION 148ceca90 FUN_148ceca90 body=81 status=ok
// SIG undefined FUN_148ceca90(void)

undefined8 FUN_148ceca90(longlong param_1)

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



// FUNCTION 148cecae8 FUN_148cecae8 body=89 status=ok
// SIG undefined FUN_148cecae8(void)

bool FUN_148cecae8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148cecb33;
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
LAB_148cecb33:
  return lVar6 == param_2;
}



// FUNCTION 148cecb5e FUN_148cecb5e body=118 status=ok
// SIG undefined FUN_148cecb5e(void)

void FUN_148cecb5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961890;
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



// FUNCTION 148cecbd4 FUN_148cecbd4 body=118 status=ok
// SIG undefined FUN_148cecbd4(void)

void FUN_148cecbd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961890;
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



// FUNCTION 148cecc4a FUN_148cecc4a body=156 status=ok
// SIG undefined FUN_148cecc4a(void)

void FUN_148cecc4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41e020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961890;
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
                    /* WARNING: Could not recover jumptable at 0x000148ceccd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cecce6 FUN_148cecce6 body=104 status=ok
// SIG undefined FUN_148cecce6(void)

void FUN_148cecce6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cecd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cecd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148cecd4e FUN_148cecd4e body=68 status=ok
// SIG undefined FUN_148cecd4e(void)

undefined8 * FUN_148cecd4e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b961900;
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



// FUNCTION 148cecd96 FUN_148cecd96 body=81 status=ok
// SIG undefined FUN_148cecd96(void)

undefined8 FUN_148cecd96(longlong param_1)

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



// FUNCTION 148cecdee FUN_148cecdee body=118 status=ok
// SIG undefined FUN_148cecdee(void)

void FUN_148cecdee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961900;
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



// FUNCTION 148cece64 FUN_148cece64 body=118 status=ok
// SIG undefined FUN_148cece64(void)

void FUN_148cece64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961900;
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



// FUNCTION 148ceceda FUN_148ceceda body=156 status=ok
// SIG undefined FUN_148ceceda(void)

void FUN_148ceceda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961900;
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
                    /* WARNING: Could not recover jumptable at 0x000148cecf66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cecf76 FUN_148cecf76 body=111 status=ok
// SIG undefined FUN_148cecf76(void)

void FUN_148cecf76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148cecfd1:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148cecfd1;
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
                    /* WARNING: Could not recover jumptable at 0x000148cecfcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cecfe8 FUN_148cecfe8 body=114 status=ok
// SIG undefined FUN_148cecfe8(void)

void FUN_148cecfe8(longlong *param_1,int param_2)

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



// FUNCTION 148ced05a FUN_148ced05a body=138 status=ok
// SIG undefined FUN_148ced05a(void)

void FUN_148ced05a(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x80 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148ced0e4 FUN_148ced0e4 body=89 status=ok
// SIG undefined FUN_148ced0e4(void)

void FUN_148ced0e4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140e292a5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ced13e FUN_148ced13e body=62 status=ok
// SIG undefined FUN_148ced13e(void)

void FUN_148ced13e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ced17c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148ced17c FUN_148ced17c body=93 status=ok
// SIG undefined FUN_148ced17c(void)

ulonglong FUN_148ced17c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148ced1f4 FUN_148ced1f4 body=101 status=ok
// SIG undefined FUN_148ced1f4(void)

void FUN_148ced1f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4aa9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9619b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ced25a FUN_148ced25a body=101 status=ok
// SIG undefined FUN_148ced25a(void)

void FUN_148ced25a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4aa9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9619b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ced2c0 FUN_148ced2c0 body=134 status=ok
// SIG undefined FUN_148ced2c0(void)

void FUN_148ced2c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4aa9f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9619b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ced337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ced346 FUN_148ced346 body=52 status=ok
// SIG undefined FUN_148ced346(void)

void FUN_148ced346(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ced377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ced37a FUN_148ced37a body=61 status=ok
// SIG undefined FUN_148ced37a(void)

longlong FUN_148ced37a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1407fc5ce();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148ced3b8 FUN_148ced3b8 body=296 status=ok
// SIG undefined FUN_148ced3b8(void)

int FUN_148ced3b8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar7 = *param_1;
      do {
        puVar1 = (undefined8 *)(lVar7 + (longlong)iVar9 * 0x28);
        if (puVar1[1] == 0) {
          uVar6 = FUN_140927942();
          uVar6 = FUN_14477b664(uVar6);
          puVar1[1] = uVar6;
        }
        lVar7 = param_3[1];
        if (lVar7 == 0) {
          lVar7 = FUN_140927942();
        }
        uVar6 = *param_3;
        uVar8 = FUN_14477b664(lVar7);
        local_50 = uVar6;
        uVar3 = FUN_144a7891a(uVar8);
        local_58 = *puVar1;
        uVar6 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar6);
        local_60 = &local_50;
        local_68 = uVar8;
        cVar2 = FUN_144a789b8(uVar4,uVar6,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_148ced3e4;
        lVar7 = *param_1;
        iVar9 = *(int *)(lVar7 + 0x20 + (longlong)iVar9 * 0x28);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_148ced3e4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 148ced4e2 FUN_148ced4e2 body=85 status=ok
// SIG undefined FUN_148ced4e2(void)

longlong FUN_148ced4e2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      uVar5 = FUN_1464d46cc();
      bVar4 = FUN_1448093f4(lVar2,uVar5);
      if ((lVar2 != 0 & bVar4) == 1) {
        return lVar2;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return 0;
}



// FUNCTION 148ced538 FUN_148ced538 body=125 status=ok
// SIG undefined FUN_148ced538(void)

void FUN_148ced538(longlong param_1,int param_2)

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
    FUN_148bf5d0c(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148ced5b6 FUN_148ced5b6 body=31 status=ok
// SIG undefined FUN_148ced5b6(void)

undefined8 FUN_148ced5b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ced5f0 FUN_148ced5f0 body=29 status=ok
// SIG undefined FUN_148ced5f0(void)

bool FUN_148ced5f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ced60e FUN_148ced60e body=26 status=ok
// SIG undefined FUN_148ced60e(void)

bool FUN_148ced60e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ced628 FUN_148ced628 body=101 status=ok
// SIG undefined FUN_148ced628(void)

void FUN_148ced628(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ced68e FUN_148ced68e body=101 status=ok
// SIG undefined FUN_148ced68e(void)

void FUN_148ced68e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ced6f4 FUN_148ced6f4 body=134 status=ok
// SIG undefined FUN_148ced6f4(void)

void FUN_148ced6f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961b00;
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
                    /* WARNING: Could not recover jumptable at 0x000148ced76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ced77a FUN_148ced77a body=62 status=ok
// SIG undefined FUN_148ced77a(void)

void FUN_148ced77a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ced7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ced7ba FUN_148ced7ba body=89 status=ok
// SIG undefined FUN_148ced7ba(void)

void FUN_148ced7ba(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x70 + *param_1);
  FUN_1459784c4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x70 + (longlong)_Dst),(longlong)iVar2 * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ced814 FUN_148ced814 body=62 status=ok
// SIG undefined FUN_148ced814(void)

void FUN_148ced814(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ced852(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 148ced852 FUN_148ced852 body=104 status=ok
// SIG undefined FUN_148ced852(void)

ulonglong FUN_148ced852(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148ced888;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_148ced888:
  return param_2 & 0xffffffff;
}



// FUNCTION 148ced8ba FUN_148ced8ba body=880 status=ok
// SIG undefined FUN_148ced8ba(void)

void FUN_148ced8ba(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_2;
  local_88 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    plVar11 = (longlong *)*param_2;
    plVar12 = plVar11 + (int)param_2[1];
    local_90 = (longlong *)(param_1 + 8);
    local_80 = plVar12;
    do {
      lVar7 = *plVar11;
      if (lVar7 != 0) {
        lVar9 = FUN_144a2f878();
        lVar8 = DAT_14cb259f8;
        if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) && (DAT_14cb259f8 != 0)) {
          uVar6 = FUN_1447210f0(lVar7);
          FUN_147f7c828(lVar8,&local_78,uVar6);
          if ((longlong)(int)uStack_70 == 0) {
            uVar10 = 0;
          }
          else {
            plVar13 = local_78 + (longlong)(int)uStack_70 * 2;
            plVar12 = local_78;
            do {
              lVar8 = *plVar12;
              plVar4 = (longlong *)plVar12[1];
              if (plVar4 == (longlong *)0x0) {
                if (*(longlong *)(lVar8 + 0xf0) == *(longlong *)(lVar7 + 0x3c0)) goto LAB_148ceda58;
              }
              else {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                if (*(longlong *)(lVar8 + 0xf0) == *(longlong *)(lVar7 + 0x3c0)) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
LAB_148ceda58:
                  iVar3 = *(int *)(param_1 + 0x10);
                  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
                  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
                    FUN_148cf8656(local_90,iVar3);
                  }
                  lVar9 = *local_90;
                  *(longlong *)(lVar9 + (longlong)iVar3 * 0x10) = lVar8;
                  *(longlong **)(lVar9 + 8 + (longlong)iVar3 * 0x10) = plVar4;
                  if (plVar4 == (longlong *)0x0) goto LAB_148cedad6;
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
LAB_148cedad6:
              plVar12 = plVar12 + 2;
            } while (plVar12 != plVar13);
            uVar10 = uStack_70 & 0xffffffff;
            plVar12 = local_80;
          }
          FUN_144796acb(local_78,uVar10);
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
  }
  plVar12 = local_88;
  lVar7 = local_88[1];
  if (lVar7 == 0) {
    uVar6 = FUN_140d47262();
    lVar7 = FUN_14477b664(uVar6);
    plVar12[1] = lVar7;
  }
  lVar8 = plVar12[2];
  if (lVar8 == 0) {
    if ((lVar7 != 0) && (*plVar12 != 0)) {
      plVar11 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar11 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar5 == '\0')) {
        plVar12[2] = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
        lVar8 = FUN_144aff482(uVar6,plVar12);
        plVar12[2] = lVar8;
        if (lVar8 != 0) {
          lVar7 = plVar12[1];
          goto LAB_148cedb2f;
        }
      }
    }
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_1448417d2();
  }
  else {
LAB_148cedb2f:
    if (lVar7 == 0) {
      uVar6 = FUN_140d47262(lVar8);
      lVar7 = FUN_14477b664(uVar6);
      plVar12[1] = lVar7;
      lVar8 = plVar12[2];
      if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar12 != 0)) {
        plVar11 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar11 + 0x108))(), cVar5 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
          lVar8 = FUN_144aff482(uVar6,plVar12);
        }
        plVar12[2] = lVar8;
      }
    }
    FUN_14181aca0(lVar8,&local_78);
  }
  *(longlong **)(param_1 + 0x18) = local_78;
  FUN_1448417d2(param_1 + 0x18);
  FUN_140134bf8(&local_78);
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  FUN_14123c256(param_1 + 0x30,param_5);
  if (*local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cedc2c FUN_148cedc2c body=65 status=ok
// SIG undefined FUN_148cedc2c(void)

void FUN_148cedc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7f1680;
  FUN_140134bf8(param_1 + 3);
  FUN_148c43ec3(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148cedc7e FUN_148cedc7e body=105 status=ok
// SIG undefined FUN_148cedc7e(void)

ulonglong FUN_148cedc7e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong unaff_RBX;
  longlong lVar4;
  bool bVar5;
  
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
    lVar4 = 0;
    do {
      bVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar4) == *param_2;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),!bVar5);
      if (bVar5) break;
      bVar5 = (longlong)*(int *)(param_1 + 0x10) * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar5);
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
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 148cedce8 FUN_148cedce8 body=534 status=ok
// SIG undefined FUN_148cedce8(void)

void FUN_148cedce8(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                  float *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b2f4a2(*param_3,&local_c8);
  local_a8 = local_a8 - *(double *)(param_1 + 0x50);
  local_a0 = local_a0 - *(double *)(param_1 + 0x58);
  local_98 = local_98 - *(double *)(param_1 + 0x60);
  fVar11 = (float)SQRT(local_98 * local_98 + local_a0 * local_a0 + local_a8 * local_a8);
  FUN_1438a4358(*param_2,&local_c8);
  local_c8 = local_c8 - *(double *)(param_1 + 0x50);
  local_c0 = local_c0 - *(double *)(param_1 + 0x58);
  local_b8 = local_b8 - *(double *)(param_1 + 0x60);
  fVar9 = (float)SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_c8 * local_c8);
  if (fVar9 <= fVar11) {
    fVar11 = fVar9;
  }
  fVar10 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x4c);
  fVar9 = 1.0;
  if (fVar11 < fVar10) {
    fVar9 = fVar11 / fVar10;
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
  }
  *param_4 = 1.0 - fVar9;
  *param_5 = fVar9;
  uVar3 = *param_2;
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
    uVar6 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x38) = lVar7;
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar8 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x30));
    }
    *(longlong *)(param_1 + 0x40) = lVar8;
  }
  local_d8 = 0;
  FUN_1447997cc(uVar3,lVar8,fVar9,0);
  plVar4 = (longlong *)param_3[1];
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
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cedf00 FUN_148cedf00 body=81 status=ok
// SIG undefined FUN_148cedf00(void)

void FUN_148cedf00(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148cedf52();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cedf52 FUN_148cedf52 body=197 status=ok
// SIG undefined FUN_148cedf52(void)

void FUN_148cedf52(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148cf8766();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x78;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x78 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x90;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee018 FUN_148cee018 body=81 status=ok
// SIG undefined FUN_148cee018(void)

void FUN_148cee018(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148cee06a();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


