// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148dfe02a FUN_148dfe02a body=243 status=ok
// SIG undefined FUN_148dfe02a(void)

undefined8 FUN_148dfe02a(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144729dda(param_1 + 0x68);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0x68);
    FUN_144a7d35a(uVar4,&local_30);
    if (-1 < (int)local_28) {
      do {
        if ((int)local_30[1] <= (int)local_28) break;
        cVar3 = FUN_145882e3c((ulonglong)local_28 * 8 + *local_30,param_1 + 0x70);
        if ((cVar3 == '\0') &&
           (lVar5 = FUN_14479d2ce((longlong)(int)local_28 * 8 + *local_30), lVar5 != 0)) {
          lVar6 = FUN_144a5dd5e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30 &&
              (*(longlong *)(lVar5 + 0xa08) == param_2)))) {
            uVar4 = CONCAT71((int7)((ulonglong)(lVar6 + 0x30) >> 8),1);
            goto LAB_148dfe0ff;
          }
        }
        uVar1 = local_28 + 1;
        bVar2 = -2 < (int)local_28;
        local_28 = uVar1;
      } while (bVar2);
    }
  }
  uVar4 = 0;
LAB_148dfe0ff:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148dfe11e FUN_148dfe11e body=68 status=ok
// SIG undefined FUN_148dfe11e(void)

undefined8 * FUN_148dfe11e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a0400;
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



// FUNCTION 148dfe166 FUN_148dfe166 body=81 status=ok
// SIG undefined FUN_148dfe166(void)

undefined8 FUN_148dfe166(longlong param_1)

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



// FUNCTION 148dfe1be FUN_148dfe1be body=89 status=ok
// SIG undefined FUN_148dfe1be(void)

bool FUN_148dfe1be(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dfe209;
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
LAB_148dfe209:
  return lVar6 == param_2;
}



// FUNCTION 148dfe218 FUN_148dfe218 body=118 status=ok
// SIG undefined FUN_148dfe218(void)

void FUN_148dfe218(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a0470;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0400;
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



// FUNCTION 148dfe28e FUN_148dfe28e body=118 status=ok
// SIG undefined FUN_148dfe28e(void)

void FUN_148dfe28e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a0470;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0400;
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



// FUNCTION 148dfe304 FUN_148dfe304 body=156 status=ok
// SIG undefined FUN_148dfe304(void)

void FUN_148dfe304(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a0470;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a0400;
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
                    /* WARNING: Could not recover jumptable at 0x000148dfe390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dfe3a0 FUN_148dfe3a0 body=104 status=ok
// SIG undefined FUN_148dfe3a0(void)

void FUN_148dfe3a0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dfe3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dfe3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dfe40a FUN_148dfe40a body=38 status=ok
// SIG undefined FUN_148dfe40a(void)

undefined8 FUN_148dfe40a(undefined8 param_1,int param_2)

{
  FUN_145b0894c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dfe430 FUN_148dfe430 body=45 status=ok
// SIG undefined FUN_148dfe430(void)

bool FUN_148dfe430(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_145afdfc4();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_148ccfcaa(lVar1,param_2);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 148dfe478 FUN_148dfe478 body=81 status=ok
// SIG undefined FUN_148dfe478(void)

undefined8 FUN_148dfe478(longlong param_1)

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



// FUNCTION 148dfe4d0 FUN_148dfe4d0 body=89 status=ok
// SIG undefined FUN_148dfe4d0(void)

bool FUN_148dfe4d0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dfe51b;
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
LAB_148dfe51b:
  return lVar6 == param_2;
}



// FUNCTION 148dfe52a FUN_148dfe52a body=118 status=ok
// SIG undefined FUN_148dfe52a(void)

void FUN_148dfe52a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a05a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0530;
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



// FUNCTION 148dfe5a0 FUN_148dfe5a0 body=118 status=ok
// SIG undefined FUN_148dfe5a0(void)

void FUN_148dfe5a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a05a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0530;
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



// FUNCTION 148dfe616 FUN_148dfe616 body=156 status=ok
// SIG undefined FUN_148dfe616(void)

void FUN_148dfe616(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a05a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a0530;
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
                    /* WARNING: Could not recover jumptable at 0x000148dfe6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dfe6b2 FUN_148dfe6b2 body=104 status=ok
// SIG undefined FUN_148dfe6b2(void)

void FUN_148dfe6b2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dfe6ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dfe710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dfe71a FUN_148dfe71a body=101 status=ok
// SIG undefined FUN_148dfe71a(void)

ulonglong FUN_148dfe71a(longlong param_1)

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
LAB_148dfe774:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dfe774;
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



// FUNCTION 148dfe782 FUN_148dfe782 body=135 status=ok
// SIG undefined FUN_148dfe782(void)

undefined8 * FUN_148dfe782(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a0610;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_LAB_14b42ca20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  FUN_144a63cba(puVar1 + 8);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b9a0630;
  return puVar1;
}



// FUNCTION 148dfe814 FUN_148dfe814 body=29 status=ok
// SIG undefined FUN_148dfe814(void)

undefined8 FUN_148dfe814(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dfe832 FUN_148dfe832 body=38 status=ok
// SIG undefined FUN_148dfe832(void)

undefined8 FUN_148dfe832(undefined8 param_1,int param_2)

{
  FUN_1459008ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dfe87c FUN_148dfe87c body=167 status=ok
// SIG undefined FUN_148dfe87c(void)

void FUN_148dfe87c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dfe8f7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dfe8f7;
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
LAB_148dfe8f7:
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
                    /* WARNING: Could not recover jumptable at 0x000148dfe917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dfe924 FUN_148dfe924 body=38 status=ok
// SIG undefined FUN_148dfe924(void)

undefined8 FUN_148dfe924(undefined8 param_1,int param_2)

{
  FUN_1459008ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dfe94a FUN_148dfe94a body=136 status=ok
// SIG undefined FUN_148dfe94a(void)

undefined8 FUN_148dfe94a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x68);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x68);
  if (param_2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_148dfe998;
  }
  param_2 = 0;
LAB_148dfe998:
  if ((longlong)*(int *)(lVar2 + 0x238) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(lVar2 + 0x230);
  lVar2 = (longlong)*(int *)(lVar2 + 0x238) << 5;
  do {
    if (*(longlong *)(lVar3 + 0x10) == param_2) goto LAB_148dfe9c1;
    lVar3 = lVar3 + 0x20;
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  lVar3 = 0;
LAB_148dfe9c1:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
}



// FUNCTION 148dfe9d2 FUN_148dfe9d2 body=96 status=ok
// SIG undefined FUN_148dfe9d2(void)

void FUN_148dfe9d2(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  puVar1 = (undefined8 *)*param_1;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dfea52 FUN_148dfea52 body=73 status=ok
// SIG undefined FUN_148dfea52(void)

void FUN_148dfea52(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1458ce0a2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14614fcca(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dfeade FUN_148dfeade body=29 status=ok
// SIG undefined FUN_148dfeade(void)

undefined8 FUN_148dfeade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dfeafc FUN_148dfeafc body=68 status=ok
// SIG undefined FUN_148dfeafc(void)

undefined8 * FUN_148dfeafc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a06f0;
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



// FUNCTION 148dfeb44 FUN_148dfeb44 body=81 status=ok
// SIG undefined FUN_148dfeb44(void)

undefined8 FUN_148dfeb44(longlong param_1)

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



// FUNCTION 148dfeb9c FUN_148dfeb9c body=89 status=ok
// SIG undefined FUN_148dfeb9c(void)

bool FUN_148dfeb9c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dfebe7;
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
LAB_148dfebe7:
  return lVar6 == param_2;
}



// FUNCTION 148dfebf6 FUN_148dfebf6 body=118 status=ok
// SIG undefined FUN_148dfebf6(void)

void FUN_148dfebf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99d2a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a06f0;
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



// FUNCTION 148dfec6c FUN_148dfec6c body=118 status=ok
// SIG undefined FUN_148dfec6c(void)

void FUN_148dfec6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99d2a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a06f0;
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



// FUNCTION 148dfece2 FUN_148dfece2 body=156 status=ok
// SIG undefined FUN_148dfece2(void)

void FUN_148dfece2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99d2a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a06f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dfed6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dfed7e FUN_148dfed7e body=104 status=ok
// SIG undefined FUN_148dfed7e(void)

void FUN_148dfed7e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dfedcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dfeddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dfede6 FUN_148dfede6 body=101 status=ok
// SIG undefined FUN_148dfede6(void)

ulonglong FUN_148dfede6(longlong param_1)

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
LAB_148dfee40:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dfee40;
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



// FUNCTION 148dfee4c FUN_148dfee4c body=386 status=ok
// SIG undefined FUN_148dfee4c(void)

longlong * FUN_148dfee4c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148dfef5d:
    *puVar5 = &PTR_LAB_14b99acd0;
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
    *puVar5 = &PTR_FUN_14b9a0760;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148dfef5d;
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
    *puVar5 = &PTR_LAB_14b99acd0;
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
    *puVar5 = &PTR_FUN_14b9a0760;
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



// FUNCTION 148dfefce FUN_148dfefce body=64 status=ok
// SIG undefined FUN_148dfefce(void)

undefined8 * FUN_148dfefce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a0760;
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



// FUNCTION 148dff012 FUN_148dff012 body=81 status=ok
// SIG undefined FUN_148dff012(void)

undefined8 FUN_148dff012(longlong param_1)

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



// FUNCTION 148dff06a FUN_148dff06a body=89 status=ok
// SIG undefined FUN_148dff06a(void)

bool FUN_148dff06a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dff0b5;
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
LAB_148dff0b5:
  return lVar6 == param_2;
}



// FUNCTION 148dff0e0 FUN_148dff0e0 body=118 status=ok
// SIG undefined FUN_148dff0e0(void)

void FUN_148dff0e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99acd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0760;
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



// FUNCTION 148dff156 FUN_148dff156 body=118 status=ok
// SIG undefined FUN_148dff156(void)

void FUN_148dff156(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99acd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0760;
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



// FUNCTION 148dff1cc FUN_148dff1cc body=156 status=ok
// SIG undefined FUN_148dff1cc(void)

void FUN_148dff1cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99acd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a0760;
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
                    /* WARNING: Could not recover jumptable at 0x000148dff258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dff268 FUN_148dff268 body=104 status=ok
// SIG undefined FUN_148dff268(void)

void FUN_148dff268(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dff2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dff2c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dff2d0 FUN_148dff2d0 body=101 status=ok
// SIG undefined FUN_148dff2d0(void)

ulonglong FUN_148dff2d0(longlong param_1)

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
LAB_148dff32a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dff32a;
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



// FUNCTION 148dff336 FUN_148dff336 body=38 status=ok
// SIG undefined FUN_148dff336(void)

undefined8 FUN_148dff336(undefined8 param_1,int param_2)

{
  FUN_1458de8a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dff35c FUN_148dff35c body=109 status=ok
// SIG undefined FUN_148dff35c(void)

undefined8 FUN_148dff35c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  FUN_140805e68(param_1 + 0x98,&local_28,1);
  FUN_144a7b126(param_1 + 0x98,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dff3ca FUN_148dff3ca body=45 status=ok
// SIG undefined FUN_148dff3ca(void)

longlong FUN_148dff3ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1458de8a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dff3f8 FUN_148dff3f8 body=79 status=ok
// SIG undefined FUN_148dff3f8(void)

undefined8 * FUN_148dff3f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9a0840;
  param_1[4] = &PTR_LAB_14b9a0880;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dff456 FUN_148dff456 body=81 status=ok
// SIG undefined FUN_148dff456(void)

undefined8 FUN_148dff456(longlong param_1)

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



// FUNCTION 148dff4ae FUN_148dff4ae body=89 status=ok
// SIG undefined FUN_148dff4ae(void)

bool FUN_148dff4ae(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dff4f9;
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
LAB_148dff4f9:
  return lVar6 == param_2;
}



// FUNCTION 148dff508 FUN_148dff508 body=118 status=ok
// SIG undefined FUN_148dff508(void)

void FUN_148dff508(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99fe00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0890;
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



// FUNCTION 148dff57e FUN_148dff57e body=156 status=ok
// SIG undefined FUN_148dff57e(void)

void FUN_148dff57e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99fe00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a0890;
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
                    /* WARNING: Could not recover jumptable at 0x000148dff60a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dff61a FUN_148dff61a body=104 status=ok
// SIG undefined FUN_148dff61a(void)

void FUN_148dff61a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dff667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dff678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dff6a6 FUN_148dff6a6 body=81 status=ok
// SIG undefined FUN_148dff6a6(void)

undefined8 FUN_148dff6a6(longlong param_1)

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



// FUNCTION 148dff6fe FUN_148dff6fe body=89 status=ok
// SIG undefined FUN_148dff6fe(void)

bool FUN_148dff6fe(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148dff749;
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
LAB_148dff749:
  return lVar6 == param_2;
}



// FUNCTION 148dff758 FUN_148dff758 body=118 status=ok
// SIG undefined FUN_148dff758(void)

void FUN_148dff758(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0980;
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



// FUNCTION 148dff7ce FUN_148dff7ce body=156 status=ok
// SIG undefined FUN_148dff7ce(void)

void FUN_148dff7ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a0980;
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
                    /* WARNING: Could not recover jumptable at 0x000148dff85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dff86a FUN_148dff86a body=103 status=ok
// SIG undefined FUN_148dff86a(void)

void FUN_148dff86a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148dff8b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dff8c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148dff8d2 FUN_148dff8d2 body=100 status=ok
// SIG undefined FUN_148dff8d2(void)

ulonglong FUN_148dff8d2(longlong param_1)

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
LAB_148dff92b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148dff92b;
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



// FUNCTION 148dff950 FUN_148dff950 body=232 status=ok
// SIG undefined FUN_148dff950(void)

undefined8 FUN_148dff950(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  uVar5 = 0;
  if (cVar3 != '\0') {
    FUN_1406ee66a(param_1,&local_40,param_3,0);
    if (local_40 != 0) {
      if ((char)param_1[4] == '\x02') {
        uVar4 = FUN_144a7ecd0(param_4);
        *(undefined4 *)(local_40 + 0x7c) = uVar4;
        uVar5 = 1;
        FUN_14020a6cc(local_40 + 0x74,1);
      }
      else if ((char)param_1[4] == '\x01') {
        uVar4 = FUN_1405d5f74(param_4);
        FUN_14119f284(local_40 + 0x68,uVar4);
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dffa3a FUN_148dffa3a body=572 status=ok
// SIG undefined FUN_148dffa3a(void)

ulonglong FUN_148dffa3a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined7 uVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = (**(code **)(*param_1 + 0x18))();
  plVar9 = (longlong *)0x0;
  if (cVar4 == '\0') goto LAB_148dffbc4;
  FUN_1406ee66a(param_1,&local_78,param_3,0);
  if (local_78 != 0) {
    lVar7 = param_1[2];
    if (lVar7 == 0) {
      uVar6 = FUN_1406eea5e();
      lVar7 = FUN_14477b664(uVar6);
      param_1[2] = lVar7;
    }
    lVar8 = param_1[3];
    if (lVar8 == 0) {
      plVar9 = (longlong *)0x0;
      if ((lVar7 != 0) && (plVar9 = (longlong *)0x0, param_1[1] != 0)) {
        plVar9 = *(longlong **)(lVar7 + 0xb8);
        if (plVar9 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9);
          if (cVar4 != '\0') {
            uVar6 = (**(code **)(*plVar9 + 0x110))(plVar9);
            lVar8 = FUN_144aff482(uVar6,param_1 + 1);
            param_1[3] = lVar8;
            if (lVar8 != 0) goto LAB_148dffab4;
            goto LAB_148dffb9b;
          }
        }
        param_1[3] = 0;
LAB_148dffb9b:
        plVar9 = (longlong *)0x0;
      }
    }
    else {
LAB_148dffab4:
      uVar10 = (undefined7)((ulonglong)plVar9 >> 8);
      if ((char)param_1[4] == '\x02') {
        FUN_1448729ea(lVar8 + 0x70,local_68,param_3);
        uVar5 = FUN_144a7ecd0(local_68);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar11 = local_68;
          if (0x18 < local_50) {
            ppppuVar11 = (undefined8 ****)local_68[0];
          }
          (*pcVar3)(ppppuVar11);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(local_68[0]);
        }
        *(undefined4 *)(local_78 + 0x7c) = uVar5;
        FUN_14020a6cc(local_78 + 0x74,1);
        plVar9 = (longlong *)CONCAT71(uVar10,1);
      }
      else {
        if ((char)param_1[4] != '\x01') goto LAB_148dffb9b;
        FUN_1448729ea(lVar8 + 0x18,local_68,param_3);
        uVar5 = FUN_1405d5f74(local_68);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar11 = local_68;
          if (0x18 < local_50) {
            ppppuVar11 = (undefined8 ****)local_68[0];
          }
          (*pcVar3)(ppppuVar11);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(local_68[0]);
        }
        FUN_14119f284(local_78 + 0x68,uVar5);
        plVar9 = (longlong *)CONCAT71(uVar10,1);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
LAB_148dffbc4:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (ulonglong)plVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dffc88 FUN_148dffc88 body=252 status=ok
// SIG undefined FUN_148dffc88(void)

undefined8
FUN_148dffc88(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_1 + 0x20))();
  if (cVar3 == '\0') {
    FUN_14162be86(param_2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_1406ee66a(param_1,&local_38,param_4,1);
  if (local_38 != 0) {
    if ((char)param_1[4] == '\x01') {
      local_48 = param_7;
      FUN_140c416bc(local_38 + 0x68,param_2);
    }
    else {
      local_48 = param_7;
      FUN_1402a4426(local_38 + 0x74,param_2,param_5,param_6);
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_38 == 0) {
    FUN_14162be86(param_2,0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dffd86 FUN_148dffd86 body=387 status=ok
// SIG undefined FUN_148dffd86(void)

undefined8 *
FUN_148dffd86(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6);
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_1412cbf0e(param_5);
  if (cVar3 == '\0') {
    local_68 = param_8;
    local_70 = CONCAT44(local_70._4_4_,param_7);
    local_78 = CONCAT31(local_78._1_3_,param_6);
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
  }
  cVar3 = FUN_142b2fcbc(param_5);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    if (cVar3 != '\0') {
      FUN_1406ee66a(param_1,&local_60,param_4,0);
      if (local_60 != 0) {
        if ((char)param_1[4] == '\x01') {
          local_70 = param_8;
          local_78 = param_7;
          FUN_1470b0d80(local_60 + 0x68,param_2,param_5,uVar4 & 0xffffffff);
        }
        else {
          local_70 = param_8;
          local_78 = param_7;
          FUN_140cda184(local_60 + 0x74,param_2,param_5,uVar4 & 0xffffffff);
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
      if (local_60 == 0) {
        FUN_14162be86(param_2,0);
      }
      goto LAB_148dffe9e;
    }
  }
  *param_2 = *param_5;
LAB_148dffe9e:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dfff0a FUN_148dfff0a body=192 status=ok
// SIG undefined FUN_148dfff0a(void)

byte FUN_148dfff0a(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar3 == '\0') {
    bVar4 = 0;
  }
  else {
    FUN_1406ee66a(param_1,&local_38,param_3,0);
    if (local_38 != 0) {
      if ((char)param_1[4] == '\x01') {
        param_3 = thunk_FUN_1456fac0c(local_38 + 0x68,param_4);
      }
      else {
        param_3 = thunk_FUN_1409d14a4(local_38 + 0x74,param_4);
      }
      param_3 = param_3 & 0xffffffff;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    bVar4 = local_38 != 0 & (byte)param_3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 148dfffcc FUN_148dfffcc body=114 status=ok
// SIG undefined FUN_148dfffcc(void)

undefined4 *
FUN_148dfffcc(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 9) == '\0') {
    lVar2 = FUN_148e000cc(param_1,param_4);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar2 + 4);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar3;
    uVar1 = 2;
  }
  else {
    if (*(char *)(param_1 + 9) == '\x01') {
      lVar2 = FUN_148e0003e(param_1,param_4);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar2 + 4);
      }
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar3;
    }
    else {
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = 0;
    }
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 8) = uVar1;
  return param_2;
}



// FUNCTION 148e0003e FUN_148e0003e body=140 status=ok
// SIG undefined FUN_148e0003e(void)

longlong FUN_148e0003e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148e00660(&local_28);
  if ((local_28 == 0) || (*(char *)(param_1 + 8) != '\x01')) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(char *)(param_1 + 9) == '\x01') {
      lVar3 = local_28 + 0x4c;
    }
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 148e000cc FUN_148e000cc body=140 status=ok
// SIG undefined FUN_148e000cc(void)

longlong FUN_148e000cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148e00660(&local_28);
  if ((local_28 == 0) || (*(char *)(param_1 + 8) != '\x01')) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(char *)(param_1 + 9) == '\0') {
      lVar3 = local_28 + 0x40;
    }
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 148e0015a FUN_148e0015a body=145 status=ok
// SIG undefined FUN_148e0015a(void)

ulonglong FUN_148e0015a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    uVar4 = (undefined7)((ulonglong)param_4 >> 8);
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      lVar2 = FUN_148e000cc(param_1,param_3);
      if (lVar2 != 0) {
        uVar5 = FUN_14005fbd2(param_4,0);
        FUN_14119f284(lVar2,uVar5);
        uVar3 = CONCAT71(uVar4,1);
        goto LAB_148e00183;
      }
    }
    else if (*(char *)((longlong)param_1 + 9) == '\x01') {
      lVar2 = FUN_148e0003e(param_1,param_3);
      if (lVar2 != 0) {
        uVar5 = FUN_144a7b41a(param_4,0);
        *(undefined4 *)(lVar2 + 8) = uVar5;
        uVar3 = CONCAT71(uVar4,1);
        FUN_14020a6cc(lVar2,1);
        goto LAB_148e00183;
      }
    }
  }
  uVar3 = 0;
LAB_148e00183:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148e001ec FUN_148e001ec body=147 status=ok
// SIG undefined FUN_148e001ec(void)

undefined8 FUN_148e001ec(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      local_20 = FUN_148e000cc(param_1,param_3);
      local_28 = 0;
      uVar2 = FUN_148e0034c();
      goto LAB_148e00220;
    }
    if (*(char *)((longlong)param_1 + 9) == '\x01') {
      local_20 = FUN_148e0003e(param_1,param_3);
      local_28 = 0;
      uVar2 = FUN_148e00280();
      goto LAB_148e00220;
    }
  }
  uVar2 = 0;
LAB_148e00220:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148e00280 FUN_148e00280 body=202 status=ok
// SIG undefined FUN_148e00280(void)

bool FUN_148e00280(undefined4 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  local_28 = 4;
  local_20 = 3;
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 == 0) {
    uVar3 = 3;
  }
  else {
    uVar5 = FUN_144a7b41a(&local_40);
    *(undefined4 *)(lVar1 + 8) = uVar5;
    FUN_14020a6cc(lVar1,1);
    uVar3 = (uint)local_20;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (local_28 < 0x19) {
      puVar4 = &local_40;
    }
    else {
      puVar4 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0034c FUN_148e0034c body=193 status=ok
// SIG undefined FUN_148e0034c(void)

bool FUN_148e0034c(undefined4 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  local_28 = 4;
  local_20 = 2;
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 == 0) {
    uVar4 = 2;
  }
  else {
    uVar3 = FUN_14005fbd2(&local_40);
    FUN_14119f284(lVar1,uVar3);
    uVar4 = (uint)local_20;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (local_28 < 0x19) {
      puVar5 = &local_40;
    }
    else {
      puVar5 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar2)(puVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0040e FUN_148e0040e body=183 status=ok
// SIG undefined FUN_148e0040e(void)

undefined8
FUN_148e0040e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      lVar2 = FUN_148e000cc(param_1,param_4);
      if (lVar2 != 0) {
        FUN_140c416bc(lVar2,param_2,uVar3 & 0xffffffff,param_6,param_7);
        return param_2;
      }
    }
    else if ((*(char *)((longlong)param_1 + 9) == '\x01') &&
            (lVar2 = FUN_148e0003e(param_1,param_4), lVar2 != 0)) {
      FUN_1402a4426(lVar2,param_2,uVar3 & 0xffffffff,param_6,param_7);
      return param_2;
    }
  }
  FUN_14162be86(param_2,0);
  return param_2;
}



// FUNCTION 148e004c6 FUN_148e004c6 body=292 status=ok
// SIG undefined FUN_148e004c6(void)

undefined8 *
FUN_148e004c6(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6);
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))
              (param_1,param_2,param_3,param_4,param_6,CONCAT44(uVar4,param_7),param_8);
    return param_2;
  }
  cVar1 = FUN_142b2fcbc(param_5);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x28))(param_1), cVar1 != '\0')) {
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      lVar2 = FUN_148e000cc(param_1,param_4);
      if (lVar2 != 0) {
        FUN_1470b0d80(lVar2,param_2,param_5,uVar3 & 0xffffffff,param_7,param_8);
        return param_2;
      }
    }
    else if ((*(char *)((longlong)param_1 + 9) == '\x01') &&
            (lVar2 = FUN_148e0003e(param_1,param_4), lVar2 != 0)) {
      FUN_140cda184(lVar2,param_2,param_5,uVar3 & 0xffffffff,param_7,param_8);
      return param_2;
    }
    FUN_14162be86(param_2,0);
    return param_2;
  }
  *param_2 = *param_5;
  return param_2;
}



// FUNCTION 148e005ea FUN_148e005ea body=117 status=ok
// SIG undefined FUN_148e005ea(void)

undefined8 FUN_148e005ea(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      lVar2 = FUN_148e000cc(param_1,param_3);
      if (lVar2 != 0) {
        uVar3 = thunk_FUN_1456fac0c(lVar2,param_4);
        return uVar3;
      }
    }
    else if (*(char *)((longlong)param_1 + 9) == '\x01') {
      lVar2 = FUN_148e0003e(param_1,param_3);
      if (lVar2 != 0) {
        uVar3 = thunk_FUN_1409d14a4(lVar2,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148e00660 FUN_148e00660 body=131 status=ok
// SIG undefined FUN_148e00660(void)

undefined8 * FUN_148e00660(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_1447262c2(param_2);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_144a7c80a();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_144a7c80a();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if (plVar3 != (longlong *)0x0 && plVar1 != plVar3) {
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_1406eea98(uVar2,param_1,&DAT_14cbd3378);
        return param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 148e0070c FUN_148e0070c body=60 status=ok
// SIG undefined FUN_148e0070c(void)

void FUN_148e0070c(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  thunk_FUN_1404275c0();
  if ((param_2 == '\0') && (plVar1 = *(longlong **)(param_1 + 0x410), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148e00745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xf8))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 148e00748 FUN_148e00748 body=199 status=ok
// SIG undefined FUN_148e00748(void)

void FUN_148e00748(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_2;
  lVar1 = FUN_14479d2ce();
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0xf18) != 0)) {
    lVar1 = FUN_1407ca824(lVar1);
    if (lVar1 != 0) {
      local_48 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_40 = 0x8000000000;
      local_38 = 0xffffffff;
      FUN_14096df60(lVar1,*(undefined8 *)(param_1 + 0xf18),0,&local_68);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_68);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e00810 FUN_148e00810 body=409 status=ok
// SIG undefined FUN_148e00810(void)

void FUN_148e00810(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xfc8) == param_2) goto LAB_148e00830;
  *(char *)(param_1 + 0xfc8) = param_2;
  if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  plVar3 = (longlong *)FUN_14092a406(param_1);
  if (plVar3 == (longlong *)0x0) goto LAB_148e00830;
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar5 = FUN_1401548e0();
  if (((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e00830;
  lVar4 = plVar3[0x1e3];
  if (lVar4 == 0) {
    uVar6 = FUN_1401548e0();
    lVar4 = FUN_14477b664(uVar6);
    plVar3[0x1e3] = lVar4;
  }
  if (plVar3[0x1e4] == 0) {
    if ((lVar4 == 0) || (plVar3[0x1e2] == 0)) goto LAB_148e00830;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar6,plVar3 + 0x1e2);
        plVar3[0x1e4] = lVar4;
        if (lVar4 == 0) goto LAB_148e00830;
        lVar4 = plVar3[0x1e3];
        goto LAB_148e008ca;
      }
    }
    plVar3[0x1e4] = 0;
  }
  else {
LAB_148e008ca:
    if (lVar4 == 0) {
      lVar4 = FUN_1401548e0();
    }
    local_40 = plVar3[0x1e2];
    local_38 = FUN_14477b664(lVar4);
    local_30 = plVar3[0x1e4];
    FUN_1417ffa7c(param_1,&DAT_14cbd3560,&local_40,1);
  }
LAB_148e00830:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e009c2 FUN_148e009c2 body=197 status=ok
// SIG undefined FUN_148e009c2(void)

void FUN_148e009c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_144a2f878();
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((iVar1 <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
      (**(code **)(*param_2 + 0x928))(param_2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),3));
      local_40 = 0;
      local_38 = (undefined4)DAT_14c8464e0;
      uStack_34 = DAT_14c8464e0._4_4_;
      uStack_30 = (undefined4)DAT_14c8464e8;
      uStack_2c = DAT_14c8464e8._4_4_;
      local_28 = DAT_14c8464f0;
      local_20 = 0;
      local_48 = 0;
      local_58 = 0;
      FUN_140ecfed2(param_2 + 0xf8f,2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1489942a0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e00a90 FUN_148e00a90 body=74 status=ok
// SIG undefined FUN_148e00a90(void)

void FUN_148e00a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_14479d2ce();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140fe2bd0(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e00adc FUN_148e00adc body=38 status=ok
// SIG undefined FUN_148e00adc(void)

undefined8 * FUN_148e00adc(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1407be904(param_1 + -0x390,param_2,0);
  return param_2;
}



// FUNCTION 148e00b02 FUN_148e00b02 body=1 status=ok
// SIG undefined FUN_148e00b02(void)

void FUN_148e00b02(void)

{
  return;
}



// FUNCTION 148e00b2c FUN_148e00b2c body=81 status=ok
// SIG undefined FUN_148e00b2c(void)

void FUN_148e00b2c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_1405f1eac();
  if (*(char *)(param_1 + 0x500) == '\x01') {
    uVar1 = FUN_1447210f0(param_1);
    plVar2 = (longlong *)FUN_14007a5e6(uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e00b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xe8))(plVar2,param_1 + 0x4f0,*(code **)(*plVar2 + 0xe8));
      return;
    }
  }
  return;
}



// FUNCTION 148e00b7e FUN_148e00b7e body=109 status=ok
// SIG undefined FUN_148e00b7e(void)

void FUN_148e00b7e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_1403d8a98();
  if (*(char *)(param_1 + 0x500) == '\x01') {
    lVar1 = FUN_14497e828(param_1);
    if (lVar1 != 0) {
      FUN_148ef96ce(param_1 + 0x4a8,lVar1);
      uVar2 = FUN_1447210f0(param_1);
      plVar3 = (longlong *)FUN_14007a5e6(uVar2);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e00be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0xf0))(plVar3,param_1 + 0x4f0,*(code **)(*plVar3 + 0xf0));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e00bec FUN_148e00bec body=737 status=ok
// SIG undefined FUN_148e00bec(void)

undefined8 * FUN_148e00bec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1 + 0x910;
  cVar3 = FUN_144729dda(lVar4);
  if (cVar3 == '\0') {
    FUN_148e00ece(param_1 + -0x4a8,local_48);
    *(undefined8 *)(param_1 + 0x910) = local_48[0];
  }
  cVar3 = FUN_144729dda(lVar4);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(lVar4);
    lVar9 = lVar4 + 0xd10;
    if (lVar9 != 0) {
      FUN_14883cbcc(lVar9,local_48);
      uVar5 = DAT_14cbd35f8;
      if ((int)local_48[0] == 0) {
        *(undefined4 *)(lVar4 + 0xd30) = DAT_14cbd3600;
        *(undefined8 *)(lVar4 + 0xd28) = uVar5;
      }
      FUN_143d2743c(lVar9,local_48);
      if ((int)local_48[0] == 0) {
        lVar6 = *(longlong *)(param_1 + 0x68);
        if (lVar6 == 0) {
          uVar5 = FUN_1404e6bfe();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x68) = lVar6;
        }
        plVar1 = (longlong *)(param_1 + 0x60);
        lVar7 = *(longlong *)(param_1 + 0x70);
        if (lVar7 == 0) {
          if ((*plVar1 != 0) && (lVar6 != 0)) {
            plVar2 = *(longlong **)(lVar6 + 0xb8);
            if (plVar2 != (longlong *)0x0) {
              cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
              if (cVar3 != '\0') {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar1);
                *(longlong *)(param_1 + 0x70) = lVar7;
                if (lVar7 != 0) {
                  lVar6 = *(longlong *)(param_1 + 0x68);
                  goto LAB_148e00d56;
                }
                goto LAB_148e00c9b;
              }
            }
            *(undefined8 *)(param_1 + 0x70) = 0;
          }
        }
        else {
LAB_148e00d56:
          if (lVar6 == 0) {
            uVar5 = FUN_1404e6bfe();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(param_1 + 0x68) = lVar6;
            lVar7 = *(longlong *)(param_1 + 0x70);
            if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
LAB_148e00eca:
                lVar7 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
                if (cVar3 == '\0') goto LAB_148e00eca;
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar1);
              }
              *(longlong *)(param_1 + 0x70) = lVar7;
            }
          }
          puVar8 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
            puVar8 = *(undefined4 **)(lVar7 + 8);
          }
          FUN_1447325ac(puVar8,&local_60,1);
          local_48[0] = local_60;
          FUN_1401533ba(&local_54,local_48,1);
          *(undefined4 *)(lVar4 + 0xd3c) = local_4c;
          *(undefined8 *)(lVar4 + 0xd34) = local_54;
        }
      }
LAB_148e00c9b:
      FUN_1406f1bc8(lVar9,param_2);
      cVar3 = FUN_1401144ce(param_2);
      if (cVar3 != '\0') {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)(param_1 + 8) = *param_2;
        FUN_1447715ec(param_1 + 0x18,param_2 + 2);
        goto LAB_148e00d00;
      }
      if (param_2[5] != 0) {
        FUN_1400020a8();
      }
    }
  }
  *(undefined2 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
LAB_148e00d00:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e00ece FUN_148e00ece body=122 status=ok
// SIG undefined FUN_148e00ece(void)

undefined8 * FUN_148e00ece(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0xdb8);
  cVar2 = FUN_144729dda(puVar1);
  if (cVar2 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x410);
    if (lVar5 == 0) {
LAB_148e00f2b:
      lVar5 = 0;
    }
    else {
      lVar3 = FUN_1407fbe78();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_148e00f2b;
    }
    FUN_14485c47a(puVar1,lVar5);
    cVar2 = FUN_144729dda(puVar1);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_148e00ef1;
    }
  }
  uVar4 = *puVar1;
LAB_148e00ef1:
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 148e00f4c FUN_148e00f4c body=273 status=ok
// SIG undefined FUN_148e00f4c(void)

longlong FUN_148e00f4c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 == 0) {
    uVar4 = FUN_1404e6bfe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x68) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x70) = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0x68);
      goto LAB_148e00f80;
    }
  }
  else {
LAB_148e00f80:
    if (lVar5 != 0) {
      return lVar6;
    }
    uVar4 = FUN_1404e6bfe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x68) = lVar5;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      return *(longlong *)(param_1 + 0x70);
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
      goto LAB_148e01049;
    }
  }
  lVar5 = 0;
LAB_148e01049:
  *(longlong *)(param_1 + 0x70) = lVar5;
  return lVar5;
}



// FUNCTION 148e0105e FUN_148e0105e body=199 status=ok
// SIG undefined FUN_148e0105e(void)

longlong FUN_148e0105e(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))();
  lVar2 = param_1[0x11f];
  if (lVar2 == 0) {
    lVar2 = FUN_14001cc68(0x598,0x10);
    local_30 = param_1 + -0x94;
    local_28 = param_1;
    if ((local_30 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      if (local_30 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
      }
    }
    else {
      FUN_1456cec3c(local_30);
    }
    FUN_140e29478(lVar2);
    puVar1 = (undefined8 *)param_1[0x11f];
    param_1[0x11f] = lVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar2 = param_1[0x11f];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e01126 FUN_148e01126 body=30 status=ok
// SIG undefined FUN_148e01126(void)

longlong * FUN_148e01126(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return param_1 + 0x8f;
}



// FUNCTION 148e01144 FUN_148e01144 body=456 status=ok
// SIG undefined FUN_148e01144(void)

void FUN_148e01144(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x8c4) != '\x01') goto LAB_148e011aa;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_1404e6bfe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_148e011aa;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_148e011aa;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 == 0) goto LAB_148e011aa;
  }
  if (*param_2 == *(int *)(param_1 + 0x8c0) && param_3 == '\0') {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar4 = FUN_1404e6bfe();
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
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    FUN_1447325ac(puVar7,local_38,1);
    lVar5 = FUN_14497e828(param_1 + -0x4f0);
    if ((lVar5 != 0) && (lVar5 = FUN_140fb8258(lVar5), lVar5 != 0)) {
      FUN_144343ad8(lVar5,local_38,1,0xbf800000);
    }
  }
LAB_148e011aa:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0132a FUN_148e0132a body=420 status=ok
// SIG undefined FUN_148e0132a(void)

ulonglong FUN_148e0132a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar10 = FUN_145859676();
  if (lVar9 == lVar10) {
    lVar9 = *param_2;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar11 = FUN_145cd2a6e();
      uVar11 = FUN_14477b664(uVar11);
      *(undefined8 *)(param_1 + 0x20) = uVar11;
    }
    lVar10 = *(longlong *)(lVar9 + 0x20);
    if (lVar10 == 0) {
      lVar10 = FUN_145cd2a6e();
    }
    uVar11 = *(undefined8 *)(lVar9 + 0x18);
    uVar12 = FUN_14477b664(lVar10);
    local_50 = uVar11;
    uVar6 = FUN_144a7891a(uVar12);
    local_58 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = FUN_144a7891a(uVar11);
    local_68 = uVar12;
    local_60 = &local_50;
    cVar4 = FUN_144a789b8(uVar7,uVar11,&local_58,uVar6);
    if (cVar4 != '\0') {
      cVar4 = FUN_144a43716(param_1 + 0x38,lVar9 + 0x38);
      if (cVar4 != '\0') {
        cVar4 = FUN_144a43716(param_1 + 0x70,lVar9 + 0x70);
        if ((cVar4 != '\0') && (*(char *)(param_1 + 0xd8) == *(char *)(lVar9 + 0xd8))) {
          bVar5 = 0;
          if (*(char *)(param_1 + 0xd8) != '\0') {
            cVar4 = FUN_144a43716(param_1 + 0xa8,lVar9 + 0xa8);
            if ((cVar4 == '\0') ||
               (bVar5 = *(byte *)(param_1 + 0xd8), bVar5 != *(byte *)(lVar9 + 0xd8)))
            goto LAB_148e01365;
          }
          uVar13 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
          if ((bVar5 & 1) != 0) {
            uVar8 = FUN_144a43716(param_1 + 0xa8,lVar9 + 0xa8);
            uVar13 = (ulonglong)uVar8;
          }
          goto LAB_148e01367;
        }
      }
    }
  }
LAB_148e01365:
  uVar13 = 0;
LAB_148e01367:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e014d0 FUN_148e014d0 body=149 status=ok
// SIG undefined FUN_148e014d0(void)

undefined4 FUN_148e014d0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447c3578(param_1 + 0x30,local_40,param_2);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
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
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e01566 FUN_148e01566 body=185 status=ok
// SIG undefined FUN_148e01566(void)

undefined8 * FUN_148e01566(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x130);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b9a1e90;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x120);
  FUN_148cb990e(plVar1);
  FUN_148cb9ab2(plVar3 + 5,param_1 + 0x28);
  FUN_144983130(plVar3 + 8,param_1 + 0x40);
  FUN_144983130(plVar3 + 0xf,param_1 + 0x78);
  *param_2 = plVar1;
  param_2[1] = plVar3;
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



// FUNCTION 148e01620 FUN_148e01620 body=92 status=ok
// SIG undefined FUN_148e01620(void)

void FUN_148e01620(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_140b95084(param_2);
  iVar2 = FUN_145a16fec(param_1 + 0x90,uVar1,param_2);
  lVar3 = 0x2c;
  if (iVar2 != -1) {
    FUN_145a5c7d0(param_1 + 0x90,param_2);
    lVar3 = 0x34;
  }
  *(int *)(param_1 + lVar3) = *(int *)(param_1 + lVar3) + -1;
  FUN_145a5c7d0(param_1 + 0x40,param_2);
  return;
}



// FUNCTION 148e0167c FUN_148e0167c body=400 status=ok
// SIG undefined FUN_148e0167c(void)

ulonglong FUN_148e0167c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = rand();
  local_60 = (undefined1 *)0x0;
  local_54 = 0x20;
  local_58 = (int)param_1[1];
  uVar7 = (ulonglong)local_58;
  if (0x20 < uVar7) {
    FUN_140fb08bc(local_e0);
  }
  puVar4 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar4 = local_e0;
  }
  memset(puVar4,0,uVar7 << 2);
  if ((int)param_1[1] < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    fVar11 = 0.0;
    lVar5 = 0;
    lVar8 = 0;
    do {
      uVar9 = FUN_148e0cb92(*param_1 + lVar5,param_2);
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_e0;
      }
      *(undefined4 *)(puVar4 + lVar8 * 4) = uVar9;
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_e0;
      }
      fVar11 = fVar11 + *(float *)(puVar4 + lVar8 * 4);
      lVar8 = lVar8 + 1;
      iVar1 = (int)param_1[1];
      lVar5 = lVar5 + 0x50;
    } while (lVar8 < iVar1);
    uVar7 = 0xffffffff;
    if (0 < iVar1) {
      fVar11 = ((float)(uVar3 & 0x7fff) / 32767.0) * fVar11;
      fVar10 = 0.0;
      uVar6 = 0;
      do {
        bVar2 = fVar10 <= fVar11;
        fVar10 = fVar10 + *(float *)(puVar4 + uVar6 * 4);
        if ((bVar2) && (fVar11 <= fVar10)) {
          uVar7 = uVar6 & 0xffffffff;
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((longlong)iVar1 != uVar6);
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148e0180e FUN_148e0180e body=63 status=ok
// SIG undefined FUN_148e0180e(void)

undefined8 * FUN_148e0180e(undefined8 *param_1)

{
  FUN_145af66ee();
  *param_1 = &PTR_FUN_14b653920;
  FUN_14899da2c(param_1 + 7);
  param_1[7] = &PTR_FUN_14b653960;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 148e0184e FUN_148e0184e body=606 status=ok
// SIG undefined FUN_148e0184e(void)

undefined8 * FUN_148e0184e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148e0cc66(*param_3,&local_78);
  plVar3 = plStack_70;
  lVar5 = local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  lVar7 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9a1eb0;
  plVar1 = plVar6 + 2;
  FUN_143e46808(plVar1,lVar7 + 8);
  plVar6[2] = (longlong)&PTR_FUN_14b9a1fa0;
  plVar6[0x10] = lVar5;
  plVar6[0x11] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b9a1ed0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  local_68 = plVar1;
  local_60 = plVar6;
  FUN_148e0decc(&local_68,plVar1);
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
  plVar1 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar7 = FUN_140eb4c46(*(undefined8 *)(param_3[1] + 8));
  if (lVar7 == 0) {
    FUN_140056680(&local_88,&DAT_149e01fe8);
  }
  else {
    local_78 = *(longlong *)(lVar7 + 0x18);
    FUN_1400021e4(&local_78,&local_88);
  }
  puVar8 = local_88;
  if (local_80 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_78,L"StatusEffect_LockAspect_%s",puVar8);
  iVar4 = (int)plStack_70 + -1;
  if ((int)plStack_70 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_58,iVar4,local_78,1);
  plVar1 = local_68;
  local_68[0x18] = local_58;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_60;
  *param_2 = plVar1;
  param_2[1] = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
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
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148e01aae FUN_148e01aae body=426 status=ok
// SIG undefined FUN_148e01aae(void)

longlong * FUN_148e01aae(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148e0df74(*param_3,&local_78);
  plVar3 = plStack_70;
  lVar5 = local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  lVar4 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(200,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9a2220;
  plVar1 = plVar6 + 2;
  FUN_143e46808(plVar1,lVar4 + 8);
  plVar6[2] = (longlong)&PTR_FUN_14b9a2310;
  plVar6[0x10] = lVar5;
  plVar6[0x11] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b9a2240;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  local_60 = plVar1;
  local_58 = plVar6;
  FUN_148e0e926(&local_60,plVar1);
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
  plVar1 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_58;
  *param_2 = (longlong)local_60;
  param_2[1] = (longlong)local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e01c5c FUN_148e01c5c body=153 status=ok
// SIG undefined FUN_148e01c5c(void)

undefined4 * FUN_148e01c5c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined4 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1400e8a68();
  if (lVar2 == 0) {
    uVar1 = 3;
    uVar3 = 0;
  }
  else {
    local_30 = &local_5c;
    local_5c = 0;
    local_48 = 0;
    local_38 = &PTR_LAB_14b9a2b70;
    local_58 = FUN_14423b702;
    FUN_14899dee8(lVar2 + 0x6890);
    uVar1 = 2;
    uVar3 = local_5c;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 8) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e01cf6 FUN_148e01cf6 body=59 status=ok
// SIG undefined FUN_148e01cf6(void)

undefined4 *
FUN_148e01cf6(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_148e01d32(param_1,param_4);
  if (lVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 4);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 8) = 3;
  return param_2;
}



// FUNCTION 148e01d32 FUN_148e01d32 body=113 status=ok
// SIG undefined FUN_148e01d32(void)

longlong FUN_148e01d32(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1400e8a68(param_2);
  if ((lVar1 == 0) ||
     (lVar1 = FUN_1456edab4(lVar1 + 0x69c0,*(undefined1 *)(param_1 + 8)), lVar1 == 0)) {
switchD_148e01d75_caseD_0:
    lVar1 = 0;
  }
  else {
    switch(*(undefined1 *)(param_1 + 9)) {
    default:
      goto switchD_148e01d75_caseD_0;
    case 1:
      break;
    case 2:
      lVar1 = lVar1 + 0xc;
      break;
    case 3:
      lVar1 = lVar1 + 0x18;
      break;
    case 4:
      lVar1 = lVar1 + 0x24;
      break;
    case 5:
      lVar1 = lVar1 + 0x30;
      break;
    case 6:
      lVar1 = lVar1 + 0x3c;
      break;
    case 7:
      lVar1 = lVar1 + 0x48;
    }
  }
  return lVar1;
}



// FUNCTION 148e01da4 FUN_148e01da4 body=64 status=ok
// SIG undefined FUN_148e01da4(void)

bool FUN_148e01da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1456eda10(param_1,param_3,1);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7ecd0(param_4);
    *(undefined4 *)(lVar1 + 8) = uVar2;
    FUN_14020a6cc(lVar1,1);
  }
  return lVar1 != 0;
}



// FUNCTION 148e01de4 FUN_148e01de4 body=53 status=ok
// SIG undefined FUN_148e01de4(void)

bool FUN_148e01de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1456eda10(param_1,param_3,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 8) = 0x3f800000;
    FUN_14020a6cc(lVar1,1);
  }
  return lVar1 != 0;
}



// FUNCTION 148e01e1a FUN_148e01e1a body=86 status=ok
// SIG undefined FUN_148e01e1a(void)

undefined8
FUN_148e01e1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  
  lVar1 = FUN_1456eda10(param_1,param_4,1);
  if (lVar1 == 0) {
    FUN_1414ff806(param_2);
  }
  else {
    FUN_140cda184(lVar1,param_2,param_5,param_6,param_7,param_8);
  }
  return param_2;
}



// FUNCTION 148e01e70 FUN_148e01e70 body=480 status=ok
// SIG undefined FUN_148e01e70(void)

longlong * FUN_148e01e70(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_148e02056(param_3);
  if (lVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    bVar7 = false;
  }
  else {
    lVar6 = 0;
    do {
      bVar7 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar6) == *(char *)(lVar5 + 0x73eb);
      if (bVar7) break;
      bVar8 = (longlong)*(int *)(param_1 + 0x20) + -1 != lVar6;
      lVar6 = lVar6 + 1;
    } while (bVar8);
  }
  bVar3 = *(byte *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_3 + 8);
  plVar4 = *(longlong **)(param_3 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_60 = local_58 + 2;
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14b9a25a0;
  local_58[3] = 0;
  local_58[4] = 0;
  *(undefined8 *)((longlong)local_58 + 0x24) = 0;
  *(undefined8 *)((longlong)local_58 + 0x2c) = 0;
  *(byte *)(local_58 + 7) = (bVar7 ^ bVar3 ^ 1) * '\x02';
  local_58[2] = (longlong)&PTR_FUN_14b9a25c8;
  local_58[8] = lVar6;
  local_58[9] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_58[2] = (longlong)&PTR_FUN_14b9a25b8;
  FUN_148e0efac();
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
  local_50 = FUN_148e02094;
  local_48 = 0;
  FUN_148e0f054(local_40,&local_60);
  FUN_1410b6cf4(lVar5 + 0x71d0,&local_50,local_40);
  FUN_1449db362(local_40);
  plVar4 = local_58;
  *param_2 = (longlong)local_60;
  param_2[1] = (longlong)local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 148e02056 FUN_148e02056 body=61 status=ok
// SIG undefined FUN_148e02056(void)

longlong FUN_148e02056(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14899efb6();
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e02094 FUN_148e02094 body=61 status=ok
// SIG undefined FUN_148e02094(void)

void FUN_148e02094(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 in_EAX;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((longlong)*(int *)(lVar1 + 0x20) == 0) {
    in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    lVar2 = 0;
    do {
      bVar3 = *(char *)(*(longlong *)(lVar1 + 0x18) + lVar2) == param_2;
      in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),!bVar3);
      if (bVar3) break;
      bVar3 = (longlong)*(int *)(lVar1 + 0x20) + -1 != lVar2;
      lVar2 = lVar2 + 1;
    } while (bVar3);
  }
  FUN_14899da92(param_1,CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX ^ *(byte *)(lVar1 + 0x10)));
  return;
}



// FUNCTION 148e020d2 FUN_148e020d2 body=408 status=ok
// SIG undefined FUN_148e020d2(void)

undefined8 FUN_148e020d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_108 [40];
  longlong local_e0;
  int local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0;
  char local_b8;
  wchar_t local_b0 [50];
  wchar_t local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = FUN_148b8fef5();
  local_d0 = local_b0;
  local_b8 = '\0';
  local_c0 = local_4c;
  builtin_wcsncpy(local_b0 + 0x10,L"ife: ",5);
  builtin_wcsncpy(local_b0 + 8,L"r Your L",8);
  builtin_wcsncpy(local_b0,L"Fight Fo",8);
  local_c8 = local_b0 + 0x15;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L'[';
      local_c8 = local_c8 + 1;
      FUN_1401cfad2(uVar3,&local_e0,*(undefined1 *)(lVar2 + lVar4));
      iVar5 = local_d8 + -1;
      if (local_d8 == 0) {
        iVar5 = 0;
      }
      FUN_1449668a2(&local_d0,local_e0,iVar5);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L']';
      local_c8 = local_c8 + 1;
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  *local_c8 = L'\0';
  FUN_140056680(param_2,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0226c FUN_148e0226c body=419 status=ok
// SIG undefined FUN_148e0226c(void)

longlong * FUN_148e0226c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_148e02056(param_3);
  if (lVar6 != 0) {
    cVar3 = *(char *)(lVar6 + 0x6a98);
    lVar4 = *(longlong *)(param_3 + 8);
    plVar5 = *(longlong **)(param_3 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_58 = (longlong *)FUN_14001cc68(0x50,0x10);
    local_60 = local_58 + 2;
    local_58[1] = (longlong)&DAT_100000001;
    *local_58 = (longlong)&PTR_FUN_14b9a2650;
    local_58[3] = 0;
    local_58[4] = 0;
    *(undefined8 *)((longlong)local_58 + 0x24) = 0;
    *(undefined8 *)((longlong)local_58 + 0x2c) = 0;
    *(char *)(local_58 + 7) = (cVar3 != '\0') * '\x02';
    local_58[2] = (longlong)&PTR_FUN_14b9a2678;
    local_58[8] = lVar4;
    local_58[9] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_58[2] = (longlong)&PTR_FUN_14b9a2668;
    FUN_148e0f5ce();
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
    local_50 = &LAB_148e02416;
    local_48 = 0;
    FUN_148e0f75e(local_40,&local_60);
    FUN_148e0f676(lVar6 + 0x6958,&local_50,local_40);
    FUN_1449db362(local_40);
    plVar5 = local_58;
    *param_2 = (longlong)local_60;
    param_2[1] = (longlong)local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e02426 FUN_148e02426 body=66 status=ok
// SIG undefined FUN_148e02426(void)

undefined8 FUN_148e02426(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(char *)(lVar1 + 0x6a98) != '\0');
    }
  }
  return 0;
}



// FUNCTION 148e02468 FUN_148e02468 body=32 status=ok
// SIG undefined FUN_148e02468(void)

undefined8 FUN_148e02468(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Has Elemental Effect");
  return param_2;
}



// FUNCTION 148e02488 FUN_148e02488 body=1177 status=ok
// SIG undefined FUN_148e02488(void)

void FUN_148e02488(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 ****ppppuVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_4f8 [32];
  double *local_4d8;
  undefined8 *local_4d0;
  undefined8 local_4c8 [2];
  undefined8 local_4b8;
  undefined8 ***local_488 [3];
  ushort local_470;
  byte local_468;
  undefined1 local_388;
  undefined7 uStack_387;
  longlong *local_380;
  double local_378;
  longlong local_370;
  undefined4 local_360;
  longlong local_350;
  longlong local_348;
  undefined1 local_340 [96];
  undefined1 local_2e0 [320];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  plVar11 = *(longlong **)(param_1 + 8);
  if ((plVar11 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_148e02641;
  (**(code **)(*plVar11 + 0x328))(plVar11,&local_388);
  fVar16 = (float)SQRT(local_378 * local_378 +
                       (double)CONCAT71(uStack_387,local_388) *
                       (double)CONCAT71(uStack_387,local_388) +
                       (double)local_380 * (double)local_380);
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x30) + 0x30);
  if (*pfVar1 <= fVar16 && fVar16 != *pfVar1) {
    plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
    lVar8 = *(longlong *)(param_1 + 0x30);
    plVar11 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = *(longlong **)(param_1 + 8);
    }
    local_388 = 0;
    local_360 = 0;
    FUN_1456bb102(&local_388,plVar11);
    FUN_1448729ea(lVar8 + 0x2f8,local_488,&local_388);
    fVar14 = (float)FUN_144a7b41a(local_488,0);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_468 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar12 = local_488;
      if (0x18 < local_470) {
        ppppuVar12 = (undefined8 ****)local_488[0];
      }
      (*pcVar3)(ppppuVar12);
    }
    if (0x18 < local_470) {
      FUN_1400020a8(local_488[0]);
    }
    FUN_144a5ac3a(&local_388);
    lVar8 = *(longlong *)(param_1 + 0x30);
    local_388 = 0;
    local_360 = 0;
    FUN_1456bb102(&local_388,*(undefined8 *)(param_1 + 8));
    fVar15 = (float)FUN_140a8b8c6(lVar8 + 0x348,&local_388);
    FUN_144a5ac3a(&local_388);
    FUN_14082cf0e(&local_388,*(undefined8 *)(param_1 + 8),plVar9,0);
    if (plVar9 == (longlong *)0x0) {
      local_350 = 0;
    }
    else {
      local_350 = (**(code **)(*plVar9 + 0x5d0))(plVar9);
      if ((local_350 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_350);
      }
    }
    local_348 = *(longlong *)(param_1 + 0x30) + 0x198;
    FUN_14118c70e(local_340,*(longlong *)(param_1 + 0x30) + 0x2b8);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8);
    if (lVar8 == 0) {
LAB_148e02833:
      lVar8 = 0;
    }
    else {
      lVar10 = FUN_144a3a302();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_148e02833;
    }
    local_4d8 = (double *)(param_2 + 0x40);
    FUN_140871c80(local_488,*(undefined8 *)(param_1 + 8),lVar8,(undefined8 *)(param_2 + 0x10));
    memcpy(local_2e0,local_488,0x100);
    local_1a0 = *(undefined8 *)(param_2 + 0x10);
    uStack_198 = *(undefined8 *)(param_2 + 0x18);
    local_190 = *(undefined8 *)(param_2 + 0x20);
    local_178 = *(double *)(param_2 + 0x50);
    local_188 = *(double *)(param_2 + 0x40);
    dStack_180 = *(double *)(param_2 + 0x48);
    local_170 = (double)fVar15;
    local_160 = local_178 * local_170;
    local_168 = dStack_180 * local_170;
    local_170 = local_170 * local_188;
    local_4d8 = (double *)local_4c8;
    local_4c8[0] = 0;
    local_4b8 = 0;
    FUN_14082d216(&local_388,fVar16 * fVar14 + 1.0,0,1);
    FUN_1403dfdc4(&local_388);
  }
  uVar6 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
  FUN_1407f7f84(&local_388,uVar6);
  if (local_380 != (longlong *)0x0) {
    iVar5 = (int)local_380[1];
    do {
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_380[1];
      bVar13 = iVar5 == iVar4;
      if (bVar13) {
        *(int *)(local_380 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar11 = local_380;
    } while (!bVar13);
    LOCK();
    piVar2 = (int *)((longlong)local_380 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_380 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      lVar8 = CONCAT71(uStack_387,local_388);
      if (lVar8 != 0) {
        ppppuVar12 = *(undefined8 *****)(*(longlong *)(param_1 + 0x30) + 0x390);
        if ((ppppuVar12 != (undefined8 ****)0x0) &&
           (*(int *)(*(longlong *)(param_1 + 0x30) + 0x398) - 1U < 0xfffffffe)) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          local_488[0] = ppppuVar12;
          FUN_1446dcdd4(&local_388);
          uVar7 = FUN_141880288(&local_388);
          local_4d0 = &DAT_14cb7bc40;
          local_4d8 = (double *)((ulonglong)local_4d8 & 0xffffffffffffff00);
          FUN_1408f24ec(lVar8,uVar7,uVar6,param_2);
          if (local_370 != 0) {
            FUN_1400020a8();
          }
        }
      }
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  }
  lVar8 = FUN_1418769fa(*(undefined8 *)(param_1 + 8));
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x128) = 0;
    *(undefined8 *)(lVar8 + 0x130) = 0;
  }
LAB_148e02641:
  if ((local_70 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e02922 FUN_148e02922 body=896 status=ok
// SIG undefined FUN_148e02922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148e02922(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_148e02c23;
  plVar7 = (longlong *)FUN_140849bbe();
  if ((plVar7 == (longlong *)0x0) || (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x170) == 0))
  goto LAB_148e02c23;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xbff0000000000000;
  FUN_144a79a9c(&local_78,&local_b0);
  uVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
  plVar9 = (longlong *)FUN_140995ab9(uVar8);
  if (plVar9 == (longlong *)0x0) goto LAB_148e02c23;
  *(byte *)((longlong)plVar9 + 0x9e) = *(byte *)((longlong)plVar9 + 0x9e) | 0xc;
  lVar1 = *(longlong *)(param_1 + 0x30);
  plVar9[0x5c] = *(longlong *)(lVar1 + 0x188);
  lVar6 = *(longlong *)(lVar1 + 0x180);
  plVar9[0x5a] = *(longlong *)(lVar1 + 0x178);
  plVar9[0x5b] = lVar6;
  FUN_14084ef06(plVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x170));
  local_b8 = local_a0;
  local_c8 = local_b0;
  uStack_c0 = uStack_a8;
  local_f8 = local_f8 & 0xffffffffffffff00;
  FUN_14020f75c(plVar9,&local_c8,0,0);
  FUN_1446f470e(&local_e8,L"Root",1);
  (**(code **)(*plVar7 + 0x4b0))(plVar7,&local_e0,local_e8);
  auVar11 = *(undefined1 (*) [16])(plVar9 + 0x36);
  dVar4 = auVar11._0_8_;
  dVar5 = auVar11._8_8_;
  dVar16 = (double)plVar9[0x38];
  puVar10 = (undefined8 *)plVar9[0x46];
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar8 = DAT_14c8463d8;
    *puVar10 = DAT_14c8463d0;
    puVar10[1] = uVar8;
    uVar8 = DAT_14c8463e8;
    puVar10[2] = DAT_14c8463e0;
    puVar10[3] = uVar8;
    uVar8 = DAT_14c846500;
    puVar10[4] = DAT_14c8464f8;
    puVar10[5] = uVar8;
    puVar10[6] = DAT_14c846508;
    plVar9[0x46] = (longlong)puVar10;
  }
  if (((((double)puVar10[4] != dVar4) || (NAN((double)puVar10[4]) || NAN(dVar4))) ||
      ((double)puVar10[5] != dVar5)) || (NAN((double)puVar10[5]) || NAN(dVar5))) {
LAB_148e02ab7:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar16;
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar11 = divpd(auVar11,_DAT_1499387d0);
    auVar14 = divpd(auVar19,_DAT_1499387d0);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar14 = roundpd(auVar14,auVar14,3);
    dVar4 = dVar4 - auVar11._0_8_ * dVar2;
    dVar5 = dVar5 - auVar11._8_8_ * dVar3;
    auVar20._0_8_ = dVar16 - auVar14._0_8_ * dVar2;
    auVar20._8_8_ = 0.0 - auVar14._8_8_ * dVar3;
    auVar18._0_8_ = dVar4 + dVar2;
    auVar18._8_8_ = dVar5 + dVar3;
    auVar17._0_8_ = dVar2 + auVar20._0_8_;
    auVar17._8_8_ = dVar3 + auVar20._8_8_;
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar11._8_4_ = SUB84(dVar5,0);
    auVar11._0_8_ = dVar4;
    auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar14 = blendvpd(auVar18,auVar11,auVar14);
    auVar12._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
    auVar12._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
    auVar11 = blendvpd(auVar17,auVar20,auVar12);
    auVar15._0_8_ = auVar14._0_8_ + -360.0;
    auVar15._8_8_ = auVar14._8_8_ + -360.0;
    auVar13._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
    auVar13._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
    auVar14 = blendvpd(auVar14,auVar15,auVar13);
    dVar16 = auVar11._0_8_;
    *(undefined1 (*) [16])(puVar10 + 4) = auVar14;
    puVar10[6] = ~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                 (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16);
    FUN_144a7484c(puVar10 + 4,&local_78);
    puVar10[2] = local_68;
    puVar10[3] = uStack_60;
    *puVar10 = local_78;
    puVar10[1] = uStack_70;
  }
  else if (((double)puVar10[6] != dVar16) || (NAN((double)puVar10[6]) || NAN(dVar16)))
  goto LAB_148e02ab7;
  local_78 = *puVar10;
  uStack_70 = puVar10[1];
  local_68 = puVar10[2];
  uStack_60 = puVar10[3];
  local_98 = local_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_f0 = 0;
  local_f8 = 0;
  FUN_144927ad4(plVar9,&local_98,&local_78,0);
  uVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
  FUN_140b506dc(plVar9,uVar8,0);
  FUN_14084aab8(plVar9);
  (**(code **)(*plVar9 + 0x4a0))(plVar9,&DAT_14cadad9c);
LAB_148e02c23:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e02e18 FUN_148e02e18 body=221 status=ok
// SIG undefined FUN_148e02e18(void)

uint * FUN_148e02e18(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)FUN_1447262c2(param_4);
  if (plVar3 == (longlong *)0x0) {
LAB_148e02e72:
    lVar6 = FUN_1401270a6(param_4);
    if ((lVar6 != 0) && (plVar3 = *(longlong **)(lVar6 + 0x3d0), plVar3 != (longlong *)0x0)) {
      uVar4 = FUN_140d929b2();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = FUN_140d929b2();
        plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
        if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) goto LAB_148e02ee1;
      }
    }
    *(undefined2 *)(param_2 + 6) = 4;
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_140d929b2();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 == (longlong *)0x0) goto LAB_148e02e72;
    uVar4 = FUN_140d929b2();
    plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
    if (plVar3 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_148e02e72;
LAB_148e02ee1:
    bVar1 = (**(code **)(*plVar5 + 0x38))(plVar5);
    *(undefined2 *)(param_2 + 6) = 4;
    uVar2 = (uint)bVar1;
  }
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 8) = 1;
  return param_2;
}



// FUNCTION 148e02ef6 FUN_148e02ef6 body=574 status=ok
// SIG undefined FUN_148e02ef6(void)

void FUN_148e02ef6(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  byte local_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar4 = (char *)(param_1 + 0x188);
  cVar6 = *(char *)(param_1 + 0x188);
  if (param_2 == '\0') {
    FUN_1400bc8c2(pcVar4,param_3);
  }
  else {
    FUN_1400bc96c(pcVar4,param_3);
  }
  if (cVar6 == *pcVar4) goto LAB_148e02f43;
  if (*pcVar4 == '\0') {
    if ((*(char *)(param_1 + 0x1b4) == '\x01') &&
       (FUN_145863238(param_1 + 0x48,*(undefined4 *)(param_1 + 0x1b0)),
       *(char *)(param_1 + 0x1b4) == '\x01')) {
      *(undefined1 *)(param_1 + 0x1b4) = 0;
    }
    goto LAB_148e02f43;
  }
  local_84 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  lVar12 = FUN_140fbc46a();
  uVar7 = *(undefined8 *)(lVar12 + 0x50);
  plVar8 = *(longlong **)(lVar12 + 0x58);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    plVar1 = plStack_a0;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_a8 = uVar7;
    if (plVar8 == plStack_a0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar10 = plStack_a0;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
        plVar1 = plVar8;
joined_r0x000148e03100:
        plVar10 = plStack_a0;
        if (iVar5 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar10 = plStack_a0;
        }
      }
    }
    else {
      plVar10 = plVar8;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar9 = (undefined8 *)*plStack_a0;
          plStack_a0 = plVar8;
          (*(code *)*puVar9)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar5 = *piVar2;
          UNLOCK();
          goto joined_r0x000148e03100;
        }
      }
    }
    plStack_a0 = plVar10;
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = local_a8;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar7 = local_a8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar7 = local_a8;
      }
    }
  }
  local_a8 = uVar7;
  FUN_140fbc5b2(param_1 + 0x48,&local_b0,&local_a8);
  if (&local_b0 != (undefined4 *)(param_1 + 0x1b0)) {
    if ((local_ac & 1) == 0) {
      if (*(char *)(param_1 + 0x1b4) != '\x01') goto LAB_148e030b8;
      uVar11 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0) = local_b0;
      uVar11 = 1;
    }
    *(undefined1 *)(param_1 + 0x1b4) = uVar11;
  }
LAB_148e030b8:
  if (*(char *)(param_1 + 0x1bc) == '\x01') {
    FUN_145863238(param_1 + 0x48,*(undefined4 *)(param_1 + 0x1b8));
  }
  FUN_141519bc8(&local_a8);
LAB_148e02f43:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e03136 FUN_148e03136 body=474 status=ok
// SIG undefined FUN_148e03136(void)

void FUN_148e03136(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  byte local_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(byte *)(param_1 + 0xc0) & 8) == 0) || (*(char *)(param_1 + 0x20b) != '\x01')) ||
     (*(char *)(param_1 + 0x1c4) != '\0')) goto LAB_148e03291;
  local_84 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  lVar10 = FUN_140fbc46a();
  uVar5 = *(undefined8 *)(lVar10 + 0x68);
  plVar6 = *(longlong **)(lVar10 + 0x70);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
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
    plVar1 = plStack_a0;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_a8 = uVar5;
    if (plVar6 == plStack_a0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar8 = plStack_a0;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar1 = plVar6;
joined_r0x000148e032dc:
        plVar8 = plStack_a0;
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar8 = plStack_a0;
        }
      }
    }
    else {
      plVar8 = plVar6;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar7 = (undefined8 *)*plStack_a0;
          plStack_a0 = plVar6;
          (*(code *)*puVar7)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2;
          UNLOCK();
          goto joined_r0x000148e032dc;
        }
      }
    }
    plStack_a0 = plVar8;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar5 = local_a8;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar5 = local_a8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar5 = local_a8;
      }
    }
  }
  local_a8 = uVar5;
  FUN_140fbc5b2(param_1 + 0x48,&local_b0,&local_a8);
  if (&local_b0 != (undefined4 *)(param_1 + 0x1c0)) {
    if ((local_ac & 1) == 0) {
      if (*(char *)(param_1 + 0x1c4) != '\x01') goto LAB_148e03287;
      uVar9 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = local_b0;
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 0x1c4) = uVar9;
  }
LAB_148e03287:
  FUN_141519bc8(&local_a8);
LAB_148e03291:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e03312 FUN_148e03312 body=121 status=ok
// SIG undefined FUN_148e03312(void)

void FUN_148e03312(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148e02ef6(param_1 + 0x6890,param_2,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0338c FUN_148e0338c body=82 status=ok
// SIG undefined FUN_148e0338c(void)

void FUN_148e0338c(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 8);
  FUN_14117bcd8(param_2 + 0x10,param_1 + 0x10);
  FUN_14117bcd8(param_2 + 0x1c,param_1 + 0x1c);
  FUN_14117bcd8(param_2 + 0x28,param_1 + 0x28);
  FUN_14117bcd8(param_2 + 0x34,param_1 + 0x34);
  return;
}



// FUNCTION 148e033e2 FUN_148e033e2 body=32 status=ok
// SIG undefined FUN_148e033e2(void)

undefined8 FUN_148e033e2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Removes specific types of Status Effects from AI on death.");
  return param_2;
}



// FUNCTION 148e03402 FUN_148e03402 body=32 status=ok
// SIG undefined FUN_148e03402(void)

undefined8 FUN_148e03402(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Freeze owner when pushed, unfreeze when popped.");
  return param_2;
}



// FUNCTION 148e03422 FUN_148e03422 body=60 status=ok
// SIG undefined FUN_148e03422(void)

void FUN_148e03422(longlong param_1,undefined8 param_2)

{
  FUN_140d077bc(param_1 + 8);
  FUN_140d077bc(param_1 + 0x158,param_2);
  FUN_140d077bc(param_1 + 0x2a8,param_2);
  return;
}



// FUNCTION 148e0345e FUN_148e0345e body=71 status=ok
// SIG undefined FUN_148e0345e(void)

void FUN_148e0345e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1489a50d2(param_1 + 8);
  FUN_1489a50d2(param_1 + 0x158,param_2,param_3);
  FUN_1489a50d2(param_1 + 0x2a8,param_2,param_3);
  return;
}



// FUNCTION 148e034a6 FUN_148e034a6 body=104 status=ok
// SIG undefined FUN_148e034a6(void)

void FUN_148e034a6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  FUN_141022b78(param_1 + 8,param_2,param_3,uVar1);
  FUN_141022b78(param_1 + 0x158,param_2,param_3,uVar1);
  FUN_141022b78(param_1 + 0x2a8,param_2,param_3,uVar1);
  return;
}



// FUNCTION 148e0350e FUN_148e0350e body=228 status=ok
// SIG undefined FUN_148e0350e(void)

void FUN_148e0350e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140880bb4();
  FUN_148e0fef2(param_1[0x24] + 0xd8,&local_30);
  plVar1 = local_28;
  param_1[0x2a] = local_30;
  local_30 = 0;
  plVar3 = (longlong *)param_1[0x2b];
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    param_1[0x2b] = (longlong)plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_148e035bf;
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
  plVar3 = local_28;
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
      }
    }
  }
LAB_148e035bf:
  (**(code **)(*param_1 + 0xb0))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000148e035e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 148e035f4 FUN_148e035f4 body=43 status=ok
// SIG undefined FUN_148e035f4(void)

bool FUN_148e035f4(longlong param_1)

{
  char cVar1;
  
  FUN_14087fa96();
  do {
    cVar1 = FUN_148e03620(param_1);
  } while (cVar1 != '\0');
  return *(char *)(param_1 + 0x148) == '\x04';
}



// FUNCTION 148e03620 FUN_148e03620 body=370 status=ok
// SIG undefined FUN_148e03620(void)

bool FUN_148e03620(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[0x29];
  switch((char)lVar1) {
  case '\0':
    *(undefined1 *)(param_1 + 0x29) = 1;
    (**(code **)(*param_1 + 0xa8))(param_1,1);
    if (param_1[0x2a] == 0) goto switchD_148e03644_default;
    lVar3 = param_1[0x2a] + 8;
    break;
  case '\x01':
    cVar2 = FUN_140ce3b60(param_1,0);
    if (cVar2 != '\0') goto switchD_148e03644_default;
    if ((char)param_1[0x29] != '\x02') {
      *(undefined1 *)(param_1 + 0x29) = 2;
      (**(code **)(*param_1 + 0xa8))(param_1,2);
    }
    cVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_148e037b6(param_1);
      uVar4 = 2;
    }
    if (param_1[0x2a] == 0) goto switchD_148e03644_default;
    lVar3 = param_1[0x2a] + 0x158;
    goto LAB_148e03671;
  case '\x02':
    cVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_140ce3b60(param_1,0);
      if (cVar2 != '\0') goto switchD_148e03644_default;
    }
    else if (param_1[0x26] != 0) goto switchD_148e03644_default;
    if ((char)param_1[0x29] != '\x03') {
      *(undefined1 *)(param_1 + 0x29) = 3;
      (**(code **)(*param_1 + 0xa8))(param_1,3);
    }
    if (param_1[0x2a] == 0) goto switchD_148e03644_default;
    lVar3 = param_1[0x2a] + 0x2a8;
    break;
  case '\x03':
    cVar2 = FUN_140ce3b60(param_1,0);
    if ((cVar2 == '\0') && ((char)param_1[0x29] != '\x04')) {
      *(undefined1 *)(param_1 + 0x29) = 4;
      (**(code **)(*param_1 + 0xa8))(param_1,4);
    }
  default:
    goto switchD_148e03644_default;
  }
  uVar4 = 0;
LAB_148e03671:
  FUN_1408838b6(param_1,lVar3,uVar4,1);
switchD_148e03644_default:
  return (char)lVar1 != (char)param_1[0x29];
}



// FUNCTION 148e03792 FUN_148e03792 body=36 status=ok
// SIG undefined FUN_148e03792(void)

void FUN_148e03792(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xb8))();
  FUN_140670e16(param_1,param_2);
  return;
}



// FUNCTION 148e037b6 FUN_148e037b6 body=326 status=ok
// SIG undefined FUN_148e037b6(void)

void FUN_148e037b6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined1 local_b8 [16];
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined4 local_a0;
  char local_9c;
  code *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148e03c2e(&local_a0,param_1 + 0x48);
  if (local_9c == '\x01') {
    lVar1 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        plVar2 = (longlong *)(lVar1 + 0x458);
      }
      else {
        plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        local_98 = FUN_148e03e70;
        local_90 = 0;
        FUN_148e03cee(local_b8,param_1,&local_98);
        local_98 = (code *)0x0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,local_b8);
        local_58 = 1;
        local_c8 = local_a8;
        local_a8[0] = 0;
        local_a4 = 0xbf800000;
        FUN_1406f4044(lVar1,param_1 + 0x130,&local_98,local_a0);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(local_b8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e038fe FUN_148e038fe body=192 status=ok
// SIG undefined FUN_148e038fe(void)

longlong * FUN_148e038fe(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x170,0x10);
  FUN_148e0ff46(plVar4,param_3,param_4);
  plVar1 = plVar4 + 2;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148e100c4(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e039c2 FUN_148e039c2 body=164 status=ok
// SIG undefined FUN_148e039c2(void)

longlong * FUN_148e039c2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  plVar4 = (longlong *)FUN_148e1016b(param_3,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148e1028e(&local_30,plVar1);
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



// FUNCTION 148e03a6a FUN_148e03a6a body=192 status=ok
// SIG undefined FUN_148e03a6a(void)

longlong * FUN_148e03a6a(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x170,0x10);
  FUN_148e10336(plVar4,param_3,param_4);
  plVar1 = plVar4 + 2;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148e104e4(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e03b2e FUN_148e03b2e body=135 status=ok
// SIG undefined FUN_148e03b2e(void)

void FUN_148e03b2e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x128) =
       *(byte *)(param_1 + 0x128) & 0xfe | *(char *)(lVar1 + 0x178) == '\x03';
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140b040c0();
    uVar2 = FUN_144718840(lVar1,uVar2);
  }
  FUN_140361b4a(&local_28,uVar2);
  *(undefined4 *)(param_1 + 0x138) = local_28;
  *(undefined4 *)(param_1 + 0x13c) = uStack_24;
  *(undefined4 *)(param_1 + 0x140) = uStack_20;
  *(undefined4 *)(param_1 + 0x144) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e03bb6 FUN_148e03bb6 body=119 status=ok
// SIG undefined FUN_148e03bb6(void)

void FUN_148e03bb6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    lVar1 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar1 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        puVar4 = (undefined8 *)(param_1 + 0x130);
        lVar2 = FUN_144a61814(lVar1,puVar4);
        if (lVar2 != 0) {
          FUN_1405a424c(lVar1,*puVar4);
        }
        *puVar4 = 0;
      }
    }
  }
  return;
}



// FUNCTION 148e03c2e FUN_148e03c2e body=191 status=ok
// SIG undefined FUN_148e03c2e(void)

undefined4 * FUN_148e03c2e(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cbd37d8 >> 0x10);
    uVar6 = (uint)DAT_14cbd37d8 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cbd37d8 >> 0x20) + ((uint)DAT_14cbd37d8 << 0x10 | uVar6)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x38) == DAT_14cbd37d8) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar7 = FUN_144a7b41a(lVar1 + 8,0);
            *param_1 = uVar7;
            uVar3 = 1;
            goto LAB_148e03c40;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_148e03c40:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 148e03cee FUN_148e03cee body=386 status=ok
// SIG undefined FUN_148e03cee(void)

longlong * FUN_148e03cee(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148e03dff:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b9a3010;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e03dff;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b9a3010;
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



// FUNCTION 148e03e70 FUN_148e03e70 body=167 status=ok
// SIG undefined FUN_148e03e70(void)

void FUN_148e03e70(longlong param_1)

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
  puVar2 = &local_40;
  local_28 = 4;
  local_40 = 1;
  local_20 = 1;
  FUN_1408834b4(param_1,&DAT_14cbd37d0,puVar2);
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
  *(undefined8 *)(param_1 + 0x130) = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e03f18 FUN_148e03f18 body=71 status=ok
// SIG undefined FUN_148e03f18(void)

void FUN_148e03f18(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  FUN_1411e5b4e();
  if (*param_2 == DAT_14cbd37d0) {
    cVar1 = FUN_144a7fca4(param_3);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x128) & 2) == 0)) {
      *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 2;
    }
  }
  return;
}



// FUNCTION 148e03f60 FUN_148e03f60 body=61 status=ok
// SIG undefined FUN_148e03f60(void)

undefined8 FUN_148e03f60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x138);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148e03f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x20))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148e03f9e FUN_148e03f9e body=76 status=ok
// SIG undefined FUN_148e03f9e(void)

undefined8 * FUN_148e03f9e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar1 = (longlong *)FUN_144a792bc(param_1 + 0xd8);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_1,param_3);
  }
  return param_2;
}



// FUNCTION 148e03fea FUN_148e03fea body=58 status=ok
// SIG undefined FUN_148e03fea(void)

void FUN_148e03fea(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = (longlong *)FUN_144a792bc(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x000148e0401a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,*(code **)(*plVar1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 148e04024 FUN_148e04024 body=67 status=ok
// SIG undefined FUN_148e04024(void)

void FUN_148e04024(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = (longlong *)FUN_144a792bc(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x000148e0405c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x20));
    return;
  }
  return;
}



// FUNCTION 148e04068 FUN_148e04068 body=76 status=ok
// SIG undefined FUN_148e04068(void)

void FUN_148e04068(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = (longlong *)FUN_144a792bc(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x000148e040a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 148e040b4 FUN_148e040b4 body=66 status=ok
// SIG undefined FUN_148e040b4(void)

undefined8 * FUN_148e040b4(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 148e040fc FUN_148e040fc body=353 status=ok
// SIG undefined FUN_148e040fc(void)

void FUN_148e040fc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0xa0) == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x98);
    lVar5 = (longlong)*(int *)(param_1 + 0xa0) * 0x18;
    do {
      if ((*(longlong *)(lVar4 + 8) == 0) || (cVar1 = FUN_144729dda(lVar4), cVar1 == '\0')) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(lVar4 + 8);
      }
      if (plVar2 == param_2) {
        return;
      }
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_148e10dd8(param_1 + 0x98,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 0x18;
  FUN_148e040b4(lVar4,param_2);
  *(undefined8 *)(lVar4 + 0x10) = param_3;
  plVar2 = (longlong *)FUN_148e0425e(param_1,param_3);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (iVar3 < 1) {
    FUN_148e0456c(param_1,1);
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,1);
    }
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_1449f3324();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_148e04219;
  }
  lVar4 = 0;
LAB_148e04219:
  FUN_148bd47db(param_1 + 0x78,lVar4);
                    /* WARNING: Could not recover jumptable at 0x000148e0423d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 148e0425e FUN_148e0425e body=153 status=ok
// SIG undefined FUN_148e0425e(void)

undefined8 FUN_148e0425e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20) == param_2) {
          if ((undefined8 *)(lVar2 + 8) != (undefined8 *)0x0 && lVar2 != 0) {
            return *(undefined8 *)(lVar2 + 8);
          }
          return 0;
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148e042f8 FUN_148e042f8 body=627 status=ok
// SIG undefined FUN_148e042f8(void)

void FUN_148e042f8(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if (((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     ((longlong)*(int *)(param_1 + 0xa0) != 0)) {
    lVar14 = *(longlong *)(param_1 + 0x98);
    lVar11 = (longlong)*(int *)(param_1 + 0xa0) * 0x18;
    do {
      if ((*(longlong *)(lVar14 + 8) == 0) || (cVar4 = FUN_144729dda(lVar14), cVar4 == '\0')) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(lVar14 + 8);
      }
      if (plVar7 == param_2) {
        iVar1 = *(int *)(param_1 + 0xa0);
        lVar14 = (longlong)iVar1;
        iVar13 = 0;
        if (lVar14 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x98);
          iVar13 = 0;
          if ((*(longlong *)(lVar11 + 8) == 0) || (cVar4 = FUN_144729dda(lVar11), cVar4 == '\0')) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = *(longlong **)(lVar11 + 8);
          }
          iVar8 = 0;
          bVar3 = plVar7 == param_2;
          do {
            lVar5 = (longlong)iVar8;
            iVar2 = iVar8 + 1;
            if (iVar8 + 1 < iVar1) {
              iVar2 = iVar1;
            }
            lVar12 = lVar11 + 0x18 + lVar5 * 0x18;
            iVar9 = iVar8;
            lVar6 = lVar5;
            do {
              lVar6 = lVar6 + 1;
              iVar10 = iVar2;
              if (lVar14 <= lVar6) break;
              if ((*(longlong *)(lVar12 + 8) == 0) || (cVar4 = FUN_144729dda(lVar12), cVar4 == '\0')
                 ) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = *(longlong **)(lVar12 + 8);
              }
              iVar9 = iVar9 + 1;
              lVar12 = lVar12 + 0x18;
              iVar10 = iVar9;
            } while (bVar3 == (plVar7 == param_2));
            if (bVar3 == false) {
              if (iVar13 != iVar8) {
                memmove((void *)(lVar11 + (longlong)iVar13 * 0x18),(void *)(lVar11 + lVar5 * 0x18),
                        (longlong)(iVar10 - iVar8) * 0x18);
              }
              iVar13 = iVar13 + (iVar10 - iVar8);
            }
            iVar8 = iVar10;
            bVar3 = (bool)(bVar3 ^ 1);
          } while (lVar6 < lVar14);
          *(int *)(param_1 + 0xa0) = iVar13;
        }
        plVar7 = (longlong *)FUN_148e0425e(param_1,param_3);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,*(undefined8 *)(param_1 + 0x10),param_2,param_4);
          iVar13 = *(int *)(param_1 + 0xa0);
        }
        if (iVar13 < 1) {
          FUN_148e0456c(param_1,0);
          plVar7 = *(longlong **)(param_1 + 0x10);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,0);
          }
        }
        lVar14 = (**(code **)(*param_2 + 8))(param_2);
        if (lVar14 != 0) {
          lVar11 = FUN_1449f3324();
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_148e0451f;
        }
        lVar14 = 0;
LAB_148e0451f:
        FUN_148bd47db(param_1 + 0x88,lVar14);
                    /* WARNING: Could not recover jumptable at 0x000148e04548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                  (*(longlong **)(param_1 + 0x10),param_2);
        return;
      }
      lVar14 = lVar14 + 0x18;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 148e0456c FUN_148e0456c body=370 status=ok
// SIG undefined FUN_148e0456c(void)

void FUN_148e0456c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = param_1 + 0x28;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar8 = *(int *)(param_1 + 0x40);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar8) || (uStack_58 != lVar2)) {
    do {
      lVar5 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x20);
      plVar6 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (((lVar5 != 0) &&
          (((*(longlong *)(lVar5 + 0x18) != 0 || (*(int *)(lVar5 + 0x20) != -1)) &&
           (lVar7 = *(longlong *)(param_1 + 8), lVar7 != 0)))) &&
         (*(char *)(lVar7 + 0x178) == '\x03')) {
        FUN_14128618c(lVar7,lVar5 + 0x18,param_2);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar8));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e046e0 FUN_148e046e0 body=111 status=ok
// SIG undefined FUN_148e046e0(void)

void FUN_148e046e0(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x03')) {
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*param_1 + 0x478))(param_1,&local_28,0,1);
  }
  FUN_1418d3b20(param_1,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e04750 FUN_148e04750 body=1 status=ok
// SIG undefined FUN_148e04750(void)

void FUN_148e04750(void)

{
  return;
}



// FUNCTION 148e04752 FUN_148e04752 body=1 status=ok
// SIG undefined FUN_148e04752(void)

void FUN_148e04752(void)

{
  return;
}



// FUNCTION 148e04754 FUN_148e04754 body=1 status=ok
// SIG undefined FUN_148e04754(void)

void FUN_148e04754(void)

{
  return;
}



// FUNCTION 148e04756 FUN_148e04756 body=128 status=ok
// SIG undefined FUN_148e04756(void)

ulonglong FUN_148e04756(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),0 < *(int *)(local_28 + 0xa0));
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



// FUNCTION 148e047d8 FUN_148e047d8 body=65 status=ok
// SIG undefined FUN_148e047d8(void)

undefined8 FUN_148e047d8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x138) != 0)) &&
     (cVar1 = FUN_144729dda(lVar2 + 0x130), cVar1 != '\0')) {
    return *(undefined8 *)(lVar2 + 0x138);
  }
  return 0;
}



// FUNCTION 148e0481a FUN_148e0481a body=42 status=ok
// SIG undefined FUN_148e0481a(void)

undefined8 * FUN_148e0481a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x128);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 148e04844 FUN_148e04844 body=54 status=ok
// SIG undefined FUN_148e04844(void)

void FUN_148e04844(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    FUN_14121574a(lVar1,param_2,param_3,0);
    return;
  }
  return;
}



// FUNCTION 148e0487a FUN_148e0487a body=229 status=ok
// SIG undefined FUN_148e0487a(void)

void FUN_148e0487a(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa08);
  if (lVar1 != 0) {
    lVar3 = FUN_144a78b9e();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (plVar2 = *(longlong **)(lVar1 + 0x11e8), plVar2 != (longlong *)0x0))
    {
      if (param_2 != '\0') {
        (**(code **)(*plVar2 + 0x490))();
        FUN_1400bc96c(*(longlong *)(lVar1 + 0x11e8) + 0x1bc0,&DAT_14cbd37e0);
        FUN_1400bc96c(*(longlong *)(lVar1 + 0x11e8) + 0x1b98,&DAT_14cbd37e0);
        FUN_1400bc96c(*(longlong *)(lVar1 + 0x11e8) + 0x1b70,&DAT_14cbd37e0);
        return;
      }
      FUN_1400bc8c2(plVar2 + 0x378,&DAT_14cbd37e0);
      FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1b98,&DAT_14cbd37e0);
      FUN_1400bc8c2(*(longlong *)(lVar1 + 0x11e8) + 0x1b70,&DAT_14cbd37e0);
      return;
    }
  }
  return;
}



// FUNCTION 148e04960 FUN_148e04960 body=119 status=ok
// SIG undefined FUN_148e04960(void)

void FUN_148e04960(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa08);
  if (lVar1 != 0) {
    uVar2 = FUN_141262f1a();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x18))();
      if (param_2 == '\0') {
        FUN_140bc1ec4(uVar2,DAT_14cbd37e0,0xff,0);
        return;
      }
      FUN_140d78b8a(uVar2,DAT_14cbd37e0,0xff,1,0,0);
    }
  }
  return;
}



// FUNCTION 148e049d8 FUN_148e049d8 body=868 status=ok
// SIG undefined FUN_148e049d8(void)

void FUN_148e049d8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_59;
  undefined2 *local_50;
  int local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((lVar5 == 0) || (plVar1 = *(longlong **)(lVar5 + 0xa8), plVar1 == (longlong *)0x0))
  goto LAB_148e04a38;
  lVar5 = FUN_1449f3324();
  if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e04a38;
  lVar5 = FUN_144a5dd5e();
  if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e04a38;
  cVar4 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
  if (cVar4 != '\0') {
    lVar5 = FUN_1447210f0(plVar1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar6 = *puVar7;
      param_3 = param_3 + 1;
      lVar5 = FUN_144a61814(uVar6,param_3);
      if (lVar5 != 0) {
        FUN_1405a424c(uVar6,*param_3);
      }
      *param_3 = 0;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400021e4(param_1 + 8,&local_50);
      puVar8 = local_50;
      if (local_48 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_d8,L"UI.State.%s",puVar8);
      iVar3 = (int)local_d0 + -1;
      if ((int)local_d0 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(local_40,iVar3,CONCAT44(uStack_d4,local_d8),1);
      FUN_1447683ea(local_38,local_40,1);
      if (CONCAT44(uStack_d4,local_d8) != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140c125e6(plVar1 + 0x1b3,local_38);
    }
    if (*(char *)(param_1 + 0x24) == '\x01') {
      local_e8 = (undefined4 *)((ulonglong)local_e8 & 0xffffffffffffff00);
      FUN_14187382e(plVar1,*(undefined8 *)(param_1 + 0x28),0,0xbf800000);
    }
  }
  if ((char)plVar1[0x2f] == '\x03') {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      uVar6 = FUN_145cd7928();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x120) = lVar5;
    }
    if (*(longlong *)(param_1 + 0x128) == 0) {
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0x128) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x118));
          *(longlong *)(param_1 + 0x128) = lVar5;
          if (lVar5 != 0) goto LAB_148e04bdf;
        }
      }
    }
    else {
LAB_148e04bdf:
      FUN_14585d6a8(plVar1,&DAT_14cbd37e0);
    }
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    FUN_148e0487a(plVar1,0);
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_148e04960(plVar1,0);
  }
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_5a = 1;
  local_59 = 0;
  lVar5 = plVar1[0x7a];
  uVar6 = FUN_1447210f0(plVar1);
  local_e8 = &local_d8;
  FUN_1407acb05(uVar6,param_1 + 0x198,param_1 + 0x1b0,lVar5);
LAB_148e04a38:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e04d3e FUN_148e04d3e body=220 status=ok
// SIG undefined FUN_148e04d3e(void)

void FUN_148e04d3e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_3 != (longlong *)0x0 && param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a89a40();
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_145a89a40();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = FUN_14037bb52();
        lVar4 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
        if (lVar4 != 0) {
          uVar1 = FUN_14037bb52();
          lVar5 = FUN_144718840(lVar4,uVar1);
          if (lVar5 != 0 && lVar4 != lVar5) {
            lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
            if (lVar4 != 0) {
              FUN_14121574a(lVar4,lVar5,param_2,0);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148e04e1a FUN_148e04e1a body=75 status=ok
// SIG undefined FUN_148e04e1a(void)

undefined8 FUN_148e04e1a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148e04e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148e04e66 FUN_148e04e66 body=664 status=ok
// SIG undefined FUN_148e04e66(void)

void FUN_148e04e66(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x138) == 0) {
LAB_148e04eb7:
    lVar6 = 0;
  }
  else {
    cVar5 = FUN_144729dda(lVar3);
    if (cVar5 == '\0') goto LAB_148e04eb7;
    lVar6 = *(longlong *)(param_1 + 0x138);
  }
  lVar8 = 0;
  if (*param_2 != 0) {
    lVar8 = param_2[1];
  }
  if (lVar6 == lVar8) {
    if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    cVar5 = FUN_144729dda(lVar3);
    if ((cVar5 != '\0') && (lVar6 = *(longlong *)(param_1 + 0x138), lVar6 != 0)) {
      FUN_14037baca(lVar6,&local_58);
      plVar2 = local_50;
      lVar8 = local_58;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (lVar8 != 0) {
        FUN_14037baca(lVar6,&local_58);
        lVar6 = local_58;
        uVar9 = *(undefined8 *)(param_1 + 0x128);
        uVar7 = FUN_148e0511a(param_1);
        FUN_148e042f8(lVar6,uVar7,uVar9,param_4);
        plVar2 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_50)(local_50);
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
  }
  *(undefined8 *)(param_1 + 0x128) = param_3;
  FUN_14485c47a(lVar3,*param_2);
  lVar6 = 0;
  if (*param_2 != 0) {
    lVar6 = param_2[1];
  }
  *(longlong *)(param_1 + 0x138) = lVar6;
  if (lVar6 == 0) goto LAB_148e04f58;
  cVar5 = FUN_144729dda(lVar3);
  if ((cVar5 == '\0') || (*(longlong *)(param_1 + 0x138) == 0)) goto LAB_148e04f58;
  cVar5 = FUN_144729dda(lVar3);
  if (cVar5 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x138);
  }
  FUN_14037baca(uVar9,&local_58);
  plVar2 = local_50;
  lVar6 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (lVar6 == 0) goto LAB_148e04f58;
  if (*(longlong *)(param_1 + 0x138) == 0) {
LAB_148e050b4:
    uVar9 = 0;
  }
  else {
    cVar5 = FUN_144729dda(lVar3);
    if (cVar5 == '\0') goto LAB_148e050b4;
    uVar9 = *(undefined8 *)(param_1 + 0x138);
  }
  FUN_14037baca(uVar9,&local_58);
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  uVar7 = FUN_148e0511a(param_1);
  FUN_148e040fc(local_58,uVar7,uVar9);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_148e04f58:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 148e0511a FUN_148e0511a body=78 status=ok
// SIG undefined FUN_148e0511a(void)

undefined8 FUN_148e0511a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_145a89a40();
      uVar3 = FUN_144718840(lVar1,uVar3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148e05190 FUN_148e05190 body=364 status=ok
// SIG undefined FUN_148e05190(void)

void FUN_148e05190(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 8;
  lVar2 = param_1 + 0x198;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_144a81a4c(&local_68);
    iVar7 = *(int *)(param_1 + 0x1a8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = lVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      iVar4 = iStack_74;
      lVar8 = *(longlong *)(local_90 + 0x180);
      if (*(longlong *)(local_90 + 0x180) == 0) {
        lVar8 = local_90;
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_148e10fa4(param_2,iVar3);
      }
      puVar5 = (undefined8 *)((longlong)iVar4 * 0x18 + lVar8);
      lVar8 = *param_2;
      lVar6 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar8 + lVar6) = 0;
      ((undefined8 *)(lVar8 + lVar6))[1] = 0;
      lVar8 = *param_2;
      *(undefined8 *)(lVar8 + lVar6) = *puVar5;
      *(undefined4 *)(lVar8 + 8 + lVar6) = *(undefined4 *)(puVar5 + 1);
      local_78 = local_78 & ~uStack_84;
      FUN_144a81a4c(&local_88);
    } while (local_90 != lVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e05376 FUN_148e05376 body=3539 status=ok
// SIG undefined FUN_148e05376(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_148e05376(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auStack_2c8 [32];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  puVar17 = &DAT_14c846480;
  pauVar18 = param_2;
  for (lVar14 = 0xc; auVar50 = _DAT_149934d80, lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined8 *)*pauVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
  }
  if (*(char *)(param_1 + 0x661) == '\x01') {
    if (*(longlong *)(param_1 + 0xa8) == 0) goto LAB_148e05d3f;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
    pdVar15 = (double *)(lVar14 + 0x240);
    if (lVar14 == 0) {
      pdVar15 = (double *)&DAT_14c846480;
    }
    auVar37 = *(undefined1 (*) [16])(pdVar15 + 8);
    dVar2 = auVar37._0_8_;
    dVar5 = auVar37._8_8_;
    auVar26 = *(undefined1 (*) [16])(pdVar15 + 10);
    dVar3 = auVar26._0_8_;
    auVar42 = *(undefined1 (*) [16])(param_1 + 0x6c0);
    dVar4 = auVar42._0_8_;
    dVar6 = auVar42._8_8_;
    auVar30 = *(undefined1 (*) [16])(param_1 + 0x6d0);
    dVar28 = auVar30._0_8_;
    auVar37 = minpd(auVar42,auVar37);
    auVar42 = minpd(auVar30,auVar26);
    auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
    iVar16 = movmskpd(0x4c846480,auVar38);
    auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    uVar19 = movmskpd((int)lVar14,auVar43);
    if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar40 = *(double *)(param_1 + 0x680);
      dVar44 = *(double *)(param_1 + 0x688);
      dVar45 = *(double *)(param_1 + 0x690);
      dVar47 = *(double *)(param_1 + 0x698);
      dVar25 = *pdVar15;
      dVar11 = pdVar15[1];
      dVar24 = pdVar15[2];
      dVar27 = pdVar15[3];
      dVar34 = pdVar15[3];
      dVar33 = pdVar15[3];
      dVar46 = pdVar15[1];
      dVar49 = pdVar15[1];
      dVar52 = pdVar15[2];
      dVar1 = pdVar15[2];
      dVar35 = dVar44 * dVar52 * -1.0 + dVar45 * dVar46 + dVar47 * *pdVar15 * 1.0 + dVar40 * dVar34;
      dVar41 = dVar40 * dVar1 * 1.0 + dVar47 * dVar49 + dVar45 * *pdVar15 * -1.0 + dVar44 * dVar33;
      auVar48._0_8_ =
           dVar47 * dVar52 * 1.0 + ((*pdVar15 * dVar44 * 1.0 + dVar45 * dVar34) - dVar40 * dVar46);
      auVar48._8_8_ =
           dVar45 * dVar1 * -1.0 + ((*pdVar15 * dVar40 * -1.0 + dVar47 * dVar33) - dVar44 * dVar49);
      dVar1 = *(double *)(param_1 + 0x6a0) * dVar2;
      dVar40 = *(double *)(param_1 + 0x6a8) * dVar5;
      dVar44 = *(double *)(param_1 + 0x6b0) * dVar3;
      dVar45 = *(double *)(param_1 + 0x6b8) * auVar26._8_8_;
      dVar46 = dVar40 * dVar25 - dVar11 * dVar1;
      dVar49 = dVar44 * dVar11 - dVar24 * dVar40;
      dVar52 = dVar1 * dVar24 - dVar25 * dVar44;
      dVar47 = dVar45 * dVar27 - dVar27 * dVar45;
      dVar49 = dVar49 + dVar49;
      dVar52 = dVar52 + dVar52;
      dVar46 = dVar46 + dVar46;
      dVar47 = dVar47 + dVar47;
      local_e8 = (dVar46 * dVar11 - dVar24 * dVar52) + dVar34 * dVar49 + dVar1 + pdVar15[4];
      dStack_e0 = (dVar49 * dVar24 - dVar46 * dVar25) + dVar33 * dVar52 + dVar40 + pdVar15[5];
      local_d8 = (dVar52 * dVar25 - dVar11 * dVar49) + dVar34 * dVar46 + dVar44 + pdVar15[6];
      dVar34 = (dVar47 * dVar27 - dVar47 * dVar27) + dVar33 * dVar47 + dVar45 + pdVar15[7];
    }
    else {
      dVar49 = *pdVar15;
      dVar52 = pdVar15[1];
      dVar1 = pdVar15[2];
      dVar40 = dVar52 + dVar52;
      dVar44 = dVar1 + dVar1;
      dVar33 = dVar49 * (dVar49 + dVar49);
      local_178 = (1.0 - (dVar33 + dVar52 * dVar40)) * dVar3;
      dVar34 = pdVar15[3];
      dVar45 = dVar44 * dVar34;
      dVar47 = (dVar49 + dVar49) * pdVar15[3];
      dVar34 = dVar40 * dVar34;
      dVar33 = (DAT_149934d80._8_8_ - (dVar1 * dVar44 + dVar33)) * dVar5;
      dVar46 = (dVar40 * dVar49 + dVar45) * dVar2;
      local_198 = (dVar44 * dVar52 + dVar47) * dVar5;
      local_1b8 = (*pdVar15 * dVar44 - dVar34) * dVar2;
      local_1c8._8_4_ = SUB84(dVar46,0);
      local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar1 * dVar44 + dVar52 * dVar40)) * dVar2;
      local_1c8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar33,0);
      local_1a8._0_8_ = (dVar40 * dVar49 - dVar45) * dVar5;
      local_1a8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      uStack_190 = 0;
      local_188._8_8_ = (dVar44 * dVar52 - dVar47) * dVar3;
      local_188._0_8_ = (dVar34 + *pdVar15 * dVar44) * dVar3;
      uStack_170 = 0;
      local_168 = pdVar15[4];
      dStack_160 = pdVar15[5];
      local_158 = pdVar15[6];
      uStack_150 = 0x3ff0000000000000;
      dVar49 = *(double *)(param_1 + 0x680);
      dVar52 = *(double *)(param_1 + 0x688);
      dVar1 = *(double *)(param_1 + 0x690);
      dVar40 = dVar52 + dVar52;
      dVar44 = dVar1 + dVar1;
      dVar33 = dVar49 * (dVar49 + dVar49);
      local_1f8 = (1.0 - (dVar33 + dVar52 * dVar40)) * dVar28;
      dVar46 = *(double *)(param_1 + 0x680) * dVar44;
      dVar34 = *(double *)(param_1 + 0x698);
      dVar45 = dVar44 * dVar34;
      dVar47 = (dVar49 + dVar49) * *(double *)(param_1 + 0x698);
      dVar34 = dVar40 * dVar34;
      local_208 = (dVar34 + dVar46) * dVar28;
      dStack_200 = (dVar44 * dVar52 - dVar47) * dVar28;
      local_248 = ((double)DAT_149934d80 - (dVar1 * dVar44 + dVar52 * dVar40)) * dVar4;
      dVar33 = (DAT_149934d80._8_8_ - (dVar1 * dVar44 + dVar33)) * dVar6;
      dStack_240 = (dVar40 * dVar49 + dVar45) * dVar4;
      local_218 = (dVar44 * dVar52 + dVar47) * dVar6;
      local_238 = (dVar46 - dVar34) * dVar4;
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar33,0);
      local_228._0_8_ = (dVar40 * dVar49 - dVar45) * dVar6;
      local_228._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = *(double *)(param_1 + 0x6a0);
      dStack_1e0 = *(double *)(param_1 + 0x6a8);
      local_1d8 = *(double *)(param_1 + 0x6b0);
      uStack_1d0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
      auVar37 = blendvpd(_DAT_149936790,auVar50,auVar21);
      uVar20 = -(ulonglong)(0.0 <= dVar3 * dVar28);
      dVar34 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar33 = auVar37._0_8_;
      local_138 = local_138 * dVar33;
      local_140 = local_140 * dVar33;
      local_148 = local_148 * dVar33;
      dVar33 = auVar37._8_8_;
      local_118 = local_118 * dVar33;
      local_120 = local_120 * dVar33;
      local_128 = dVar33 * local_128;
      local_f8 = local_f8 * dVar34;
      local_100 = local_100 * dVar34;
      local_108 = dVar34 * local_108;
      FUN_14481fd10(&local_268,&local_148);
      dVar34 = local_258 * local_258 + local_268 * local_268;
      dVar33 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar29._0_8_ = dVar34 + dVar33;
      auVar29._8_8_ = dVar34 + dVar33;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
      auVar37 = sqrtpd(auVar29,auVar29);
      auVar50 = divpd(auVar50,auVar37);
      auVar51._0_8_ = auVar50._0_8_ * local_258;
      auVar51._8_8_ = auVar50._8_8_ * dStack_250;
      dVar35 = (double)((ulonglong)(local_268 * auVar50._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
      dVar41 = (double)((ulonglong)(dStack_260 * auVar50._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
      auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar22);
      dVar34 = 0.0;
    }
    dVar33 = auVar26._8_8_ * auVar30._8_8_;
    dVar3 = dVar3 * dVar28;
    *(double *)*param_2 = dVar35;
    *(double *)(*param_2 + 8) = dVar41;
    param_2[1] = auVar48;
    auVar7._8_4_ = SUB84(dStack_e0,0);
    auVar7._0_8_ = local_e8;
    auVar7._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
    param_2[2] = auVar7;
    *(double *)param_2[3] = local_d8;
    *(double *)(param_2[3] + 8) = dVar34;
    auVar9._8_4_ = SUB84(dVar5 * dVar6,0);
    auVar9._0_8_ = dVar2 * dVar4;
    auVar9._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
    param_2[4] = auVar9;
  }
  else {
    puVar17 = (undefined8 *)(param_1 + 0x240);
    pauVar18 = param_2;
    for (lVar14 = 0xc; dVar3 = DAT_14c846520, dVar4 = DAT_14c846518, dVar2 = DAT_14c846510,
        auVar50 = _DAT_149934d80, lVar14 != 0; lVar14 = lVar14 + -1) {
      *(undefined8 *)*pauVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
    }
    dVar49 = *(double *)param_2[2] + 0.0;
    dVar52 = *(double *)(param_2[2] + 8) + 0.0;
    dVar46 = -*(double *)(param_1 + 0x650) * *(double *)(param_1 + 0x290) + *(double *)param_2[3];
    local_288 = *(double *)(param_1 + 0x668);
    dStack_280 = *(double *)(param_1 + 0x670);
    dVar28 = *(double *)(param_1 + 0x678);
    local_298 = param_2[4];
    dVar5 = local_298._0_8_;
    dVar34 = local_298._8_8_;
    auVar37 = param_2[5];
    dVar6 = auVar37._0_8_;
    dVar33 = auVar37._8_8_;
    auVar26._8_8_ = DAT_14c846518;
    auVar26._0_8_ = DAT_14c846510;
    auVar26 = minpd(auVar26,local_298);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = DAT_14c846520;
    auVar30 = minpd(auVar30,auVar37);
    auVar42._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
    iVar16 = movmskpd((int)param_1,auVar42);
    auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
    uVar19 = movmskpd(0,auVar31);
    if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
      local_2a8 = *(double *)*param_2;
      dStack_2a0 = *(double *)(*param_2 + 8);
      dVar40 = *(double *)(param_2[1] + 8);
      dVar1 = *(double *)(param_2[1] + 8);
      dVar45 = *(double *)(*param_2 + 8);
      dVar44 = *(double *)(*param_2 + 8);
      dVar36 = *(double *)param_2[1];
      dVar13 = *(double *)(param_2[1] + 8);
      dVar47 = *(double *)param_2[1];
      dVar25 = *(double *)param_2[1];
      dVar27 = DAT_14c8463d8 * dVar47 * -1.0 +
               DAT_14c8463e0 * dVar45 +
               DAT_14c8463e8 * *(double *)*param_2 * 1.0 + DAT_14c8463d0 * dVar40;
      dVar35 = DAT_14c8463d0 * dVar25 * 1.0 +
               DAT_14c8463e8 * dVar44 +
               DAT_14c8463e0 * *(double *)*param_2 * -1.0 + DAT_14c8463d8 * dVar1;
      auVar50._0_8_ =
           DAT_14c8463e8 * dVar47 * 1.0 +
           ((*(double *)*param_2 * DAT_14c8463d8 * 1.0 + DAT_14c8463e0 * dVar40) -
           DAT_14c8463d0 * dVar45);
      auVar50._8_8_ =
           DAT_14c8463e0 * dVar25 * -1.0 +
           ((*(double *)*param_2 * DAT_14c8463d0 * -1.0 + DAT_14c8463e8 * dVar1) -
           DAT_14c8463d8 * dVar44);
      dVar25 = local_288 * dVar5;
      dVar11 = dStack_280 * dVar34;
      dVar28 = dVar28 * dVar6;
      dVar41 = dVar33 * 0.0;
      dVar44 = dVar11 * local_2a8 - dVar25 * dStack_2a0;
      dVar45 = dVar28 * dStack_2a0 - dVar11 * dVar36;
      dVar47 = dVar25 * dVar36 - dVar28 * local_2a8;
      dVar24 = dVar41 * dVar13 - dVar41 * dVar13;
      dVar45 = dVar45 + dVar45;
      dVar47 = dVar47 + dVar47;
      dVar44 = dVar44 + dVar44;
      dVar24 = dVar24 + dVar24;
      local_e8 = dVar49 + (dVar44 * dStack_2a0 - dVar36 * dVar47) + dVar40 * dVar45 + dVar25;
      dStack_e0 = dVar52 + (dVar45 * dVar36 - dVar44 * local_2a8) + dVar1 * dVar47 + dVar11;
      local_d8 = dVar46 + (dVar47 * local_2a8 - dStack_2a0 * dVar45) + dVar40 * dVar44 + dVar28;
      dVar28 = *(double *)(param_2[3] + 8) + 0.0 +
               (dVar24 * dVar13 - dVar24 * dVar13) + dVar1 * dVar24 + dVar41;
      local_278 = auVar37;
    }
    else {
      dVar47 = *(double *)*param_2;
      dVar25 = *(double *)(*param_2 + 8);
      dVar11 = *(double *)param_2[1];
      dVar44 = dVar25 + dVar25;
      dVar27 = dVar11 + dVar11;
      local_298._8_8_ = 0;
      local_298._0_8_ = dVar28;
      dVar40 = dVar47 * (dVar47 + dVar47);
      dVar24 = *(double *)*param_2 * dVar27;
      dVar1 = *(double *)(param_2[1] + 8);
      dVar35 = dVar27 * dVar1;
      dVar41 = (dVar47 + dVar47) * *(double *)(param_2[1] + 8);
      dVar1 = dVar44 * dVar1;
      dVar36 = DAT_14c846520 * dVar6;
      dStack_2a0 = dVar33 * 0.0;
      local_178 = (1.0 - (dVar40 + dVar25 * dVar44)) * dVar6;
      dVar45 = (dVar27 * dVar25 - dVar41) * dVar6;
      dVar40 = (1.0 - (dVar11 * dVar27 + dVar40)) * dVar34;
      local_198 = (dVar27 * dVar25 + dVar41) * dVar34;
      local_1c8._8_8_ = (dVar44 * dVar47 + dVar35) * dVar5;
      local_1c8._0_8_ = (1.0 - (dVar11 * dVar27 + dVar25 * dVar44)) * dVar5;
      local_1b8 = (dVar24 - dVar1) * dVar5;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar40,0);
      local_1a8._0_8_ = (dVar44 * dVar47 - dVar35) * dVar34;
      local_1a8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_190 = 0;
      local_188._8_4_ = SUB84(dVar45,0);
      local_188._0_8_ = (dVar1 + dVar24) * dVar6;
      local_188._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
      uStack_170 = 0;
      uStack_150 = 0x3ff0000000000000;
      dVar1 = DAT_14c8463d8 + DAT_14c8463d8;
      dVar45 = DAT_14c8463e0 + DAT_14c8463e0;
      dVar25 = DAT_14c8463d0 * (DAT_14c8463d0 + DAT_14c8463d0);
      local_1f8 = (1.0 - (dVar25 + DAT_14c8463d8 * dVar1)) * DAT_14c846520;
      dVar47 = (DAT_14c8463d0 + DAT_14c8463d0) * DAT_14c8463e8;
      local_208 = (dVar1 * DAT_14c8463e8 + DAT_14c8463d0 * dVar45) * DAT_14c846520;
      dStack_200 = (dVar45 * DAT_14c8463d8 - dVar47) * DAT_14c846520;
      dVar40 = dVar5 * DAT_14c846510;
      dVar44 = dVar34 * DAT_14c846518;
      local_248 = ((double)DAT_149934d80 - (DAT_14c8463e0 * dVar45 + DAT_14c8463d8 * dVar1)) *
                  DAT_14c846510;
      dStack_240 = (dVar1 * DAT_14c8463d0 + dVar45 * DAT_14c8463e8) * DAT_14c846510;
      local_218 = (dVar45 * DAT_14c8463d8 + dVar47) * DAT_14c846518;
      local_238 = (DAT_14c8463d0 * dVar45 - dVar1 * DAT_14c8463e8) * DAT_14c846510;
      uStack_230 = 0;
      local_228._8_8_ = (DAT_149934d80._8_8_ - (DAT_14c8463e0 * dVar45 + dVar25)) * DAT_14c846518;
      local_228._0_8_ = (dVar1 * DAT_14c8463d0 - dVar45 * DAT_14c8463e8) * DAT_14c846518;
      uStack_210 = 0;
      uStack_1f0 = 0;
      uStack_1d0 = 0x3ff0000000000000;
      local_2a8 = dVar36;
      local_1e8 = local_288;
      dStack_1e0 = dStack_280;
      local_1d8 = dVar28;
      local_168 = dVar49;
      dStack_160 = dVar52;
      local_158 = dVar46;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar37._8_8_ = -(ulonglong)(0.0 <= dVar44);
      auVar37._0_8_ = -(ulonglong)(0.0 <= dVar40);
      auVar37 = blendvpd(_DAT_149936790,auVar50,auVar37);
      uVar20 = -(ulonglong)(0.0 <= dVar36);
      dVar28 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar46 = auVar37._0_8_;
      local_138 = local_138 * dVar46;
      local_140 = local_140 * dVar46;
      local_148 = local_148 * dVar46;
      dVar46 = auVar37._8_8_;
      local_118 = local_118 * dVar46;
      local_120 = local_120 * dVar46;
      local_128 = dVar46 * local_128;
      local_f8 = local_f8 * dVar28;
      local_100 = local_100 * dVar28;
      local_108 = dVar28 * local_108;
      FUN_14481fd10(&local_268,&local_148);
      dVar28 = local_258 * local_258 + local_268 * local_268;
      dVar46 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar32._0_8_ = dVar28 + dVar46;
      auVar32._8_8_ = dVar28 + dVar46;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
      auVar37 = sqrtpd(auVar32,auVar32);
      auVar50 = divpd(auVar50,auVar37);
      auVar39._0_8_ = auVar50._0_8_ * local_258;
      auVar39._8_8_ = auVar50._8_8_ * dStack_250;
      dVar27 = (double)((ulonglong)(local_268 * auVar50._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
      dVar35 = (double)((ulonglong)(dStack_260 * auVar50._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
      auVar50 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar23);
      dVar28 = 0.0;
    }
    dVar3 = dVar3 * dVar6;
    dVar33 = dVar33 * 0.0;
    auVar12._8_4_ = SUB84(dVar35,0);
    auVar12._0_8_ = dVar27;
    auVar12._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    *param_2 = auVar12;
    param_2[1] = auVar50;
    *(double *)param_2[2] = local_e8;
    *(double *)(param_2[2] + 8) = dStack_e0;
    *(double *)param_2[3] = local_d8;
    *(double *)(param_2[3] + 8) = dVar28;
    auVar10._8_4_ = SUB84(dVar34 * dVar4,0);
    auVar10._0_8_ = dVar5 * dVar2;
    auVar10._12_4_ = (int)((ulonglong)(dVar34 * dVar4) >> 0x20);
    param_2[4] = auVar10;
  }
  auVar8._8_4_ = SUB84(dVar33,0);
  auVar8._0_8_ = dVar3;
  auVar8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  param_2[5] = auVar8;
LAB_148e05d3f:
  if ((local_c0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0614a FUN_148e0614a body=870 status=ok
// SIG undefined FUN_148e0614a(void)

void FUN_148e0614a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0 [88];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x2960) != 0) {
    plVar3 = (longlong *)(param_1 + 0x2968);
    iVar4 = *(int *)(param_1 + 0x2974);
    FUN_1412a9efa(*(undefined8 *)(param_1 + 0x2968),*(undefined4 *)(param_1 + 0x2970));
    *(undefined4 *)(param_1 + 0x2970) = 0;
    if ((iVar4 < 0) && (*(int *)(param_1 + 0x2974) != 0)) {
      FUN_148e1195e(plVar3,0);
    }
    lVar5 = *(longlong *)(param_1 + 0x2960);
    lVar10 = *(longlong *)(lVar5 + 0x498);
    if (lVar10 == 0) {
      uVar9 = FUN_1458eaa58();
      lVar10 = FUN_14477b664(uVar9);
      *(longlong *)(lVar5 + 0x498) = lVar10;
    }
    local_f8 = *(longlong *)(lVar5 + 0x4a0);
    if (((local_f8 == 0) && (local_f8 = 0, lVar10 != 0)) && (*(longlong *)(lVar5 + 0x490) != 0)) {
      plVar6 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar8 == '\0')) {
        local_f8 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
        local_f8 = FUN_144aff482(uVar9,(longlong *)(lVar5 + 0x490));
      }
      *(longlong *)(lVar5 + 0x4a0) = local_f8;
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_148e0687e(param_1,&local_78);
    lVar5 = local_78;
    lVar10 = (longlong)(int)uStack_70;
    if (lVar10 != 0) {
      lVar13 = 0;
      lVar14 = local_f8;
      do {
        lVar7 = *(longlong *)(lVar5 + lVar13);
        lVar11 = *(longlong *)(lVar7 + 0x6f0);
        if (lVar11 == 0) {
          uVar9 = FUN_1401548e0();
          lVar11 = FUN_14477b664(uVar9);
          *(longlong *)(lVar7 + 0x6f0) = lVar11;
        }
        lVar12 = *(longlong *)(lVar7 + 0x6f8);
        if (lVar12 == 0) {
          if ((lVar11 != 0) && (*(longlong *)(lVar7 + 0x6e8) != 0)) {
            plVar6 = *(longlong **)(lVar11 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar8 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar8 == '\0')) {
              *(undefined8 *)(lVar7 + 0x6f8) = 0;
              lVar14 = local_f8;
            }
            else {
              uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar12 = FUN_144aff482(uVar9,(longlong *)(lVar7 + 0x6e8));
              *(longlong *)(lVar7 + 0x6f8) = lVar12;
              lVar14 = local_f8;
              if (lVar12 != 0) goto LAB_148e06300;
            }
          }
        }
        else {
LAB_148e06300:
          local_88 = 0;
          uStack_80 = 0;
          FUN_145bf6442(&local_88,lVar12);
          FUN_140861c24(local_f0,lVar14);
          uVar9 = FUN_140fb04f0(local_f0,param_1);
          uVar9 = FUN_1417ff450(uVar9,&local_88);
          FUN_140fb05f2(uVar9,&local_98);
          FUN_140861dac(local_f0);
          iVar4 = *(int *)(param_1 + 0x2970);
          *(uint *)(param_1 + 0x2970) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x2974) < iVar4 + 1U) {
            FUN_148e119be(plVar3,iVar4);
          }
          plVar6 = local_90;
          lVar7 = *plVar3;
          *(undefined8 *)(lVar7 + (longlong)iVar4 * 0x10) = local_98;
          *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_90 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_90)(local_90);
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
          FUN_140861e20(local_88,uStack_80 & 0xffffffff);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        lVar13 = lVar13 + 8;
      } while (lVar10 * 8 != lVar13);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e064b2 FUN_148e064b2 body=316 status=ok
// SIG undefined FUN_148e064b2(void)

void FUN_148e064b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410c7f42();
  if (param_2 == 0) goto LAB_148e064f7;
  lVar2 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      != lVar2 + 0x30)) goto LAB_148e064f7;
  FUN_145ac4942(param_2,0,0);
  if (*(longlong *)(param_2 + 0x448) == 0) goto LAB_148e064f7;
  lVar2 = FUN_1409b37ec();
  plVar1 = *(longlong **)(param_2 + 0x448);
  if (((((plVar1 == (longlong *)0x0) || (lVar2 == 0)) || (lVar3 = plVar1[2], lVar3 == 0)) ||
      ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)))) || (*(longlong *)(param_1 + 0x3270) != 0)) goto LAB_148e064f7;
  local_20 = FUN_1459f28ca();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar2 = (**(code **)(*plVar1 + 0x6b0))(plVar1,&local_20);
  if (lVar2 == 0) {
LAB_148e065d9:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1459f28ca();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_148e065d9;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
  }
  *(longlong *)(param_1 + 0x3270) = lVar2;
  FUN_145ecd194(param_1);
LAB_148e064f7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e065f0 FUN_148e065f0 body=335 status=ok
// SIG undefined FUN_148e065f0(void)

void FUN_148e065f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410b7f58();
  if (*(longlong *)(param_1 + 0x32b0) == 0) {
    lVar3 = FUN_1403ca102(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_140d27a2a(lVar3);
      if (0xf9 < (byte)(*(char *)(lVar3 + 0xb0) - 7U)) {
        local_30 = FUN_148e06840;
        local_28 = 0;
        FUN_148e06740(lVar3 + 0x18,&local_20,param_1);
        *(undefined8 *)(param_1 + 0x32b0) = local_20;
        goto LAB_148e0661a;
      }
    }
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0x3270) != 0)) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
          (*(longlong *)(param_2 + 0x448) != 0)))) {
        lVar3 = FUN_1409b37ec();
        plVar1 = *(longlong **)(param_2 + 0x448);
        if ((plVar1 != (longlong *)0x0) &&
           ((((lVar3 != 0 && (lVar2 = plVar1[2], lVar2 != 0)) &&
             (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          (**(code **)(*plVar1 + 0x6c0))(plVar1,*(undefined8 *)(param_1 + 0x3270));
          *(undefined8 *)(param_1 + 0x3270) = 0;
        }
      }
    }
  }
LAB_148e0661a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e06740 FUN_148e06740 body=254 status=ok
// SIG undefined FUN_148e06740(void)

undefined8
FUN_148e06740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_14b9a31d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e06840 FUN_148e06840 body=61 status=ok
// SIG undefined FUN_148e06840(void)

void FUN_148e06840(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x32b0) = 0;
  lVar1 = FUN_1403ca102();
  if (lVar1 != 0) {
    lVar1 = FUN_140d27a2a(lVar1);
    FUN_140457ffc(lVar1 + 0x18,param_1);
    return;
  }
  return;
}



// FUNCTION 148e0687e FUN_148e0687e body=478 status=ok
// SIG undefined FUN_148e0687e(void)

void FUN_148e0687e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_148e114a0(param_2);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_14621adf4(param_1,&local_78);
  lVar3 = local_78;
  local_88 = 0;
  uStack_80 = 0;
  lVar10 = (longlong)(int)uStack_70;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(lVar3 + lVar9);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x660) == '\x01')) {
        lVar7 = *(longlong *)(lVar8 + 0x6f0);
        if (lVar7 == 0) {
          uVar6 = FUN_1401548e0();
          lVar7 = FUN_14477b664(uVar6);
          *(longlong *)(lVar8 + 0x6f0) = lVar7;
        }
        if (*(longlong *)(lVar8 + 0x6f8) == 0) {
          if ((lVar7 != 0) && (*(longlong *)(lVar8 + 0x6e8) != 0)) {
            plVar1 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
              *(undefined8 *)(lVar8 + 0x6f8) = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x6e8));
              *(longlong *)(lVar8 + 0x6f8) = lVar7;
              if (lVar7 != 0) goto LAB_148e06932;
            }
          }
        }
        else {
LAB_148e06932:
          uVar2 = uStack_80;
          lVar8 = (longlong)(int)uStack_80;
          uVar5 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          if (uStack_80._4_4_ < uVar5) {
            FUN_14621b122(&local_88,uVar2 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + lVar8 * 8) = *(undefined8 *)(lVar3 + lVar9);
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  if (&local_88 == param_2) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_88;
    local_88 = 0;
    *(int *)(param_2 + 1) = (int)uStack_80;
    *(uint *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e06a5e FUN_148e06a5e body=478 status=ok
// SIG undefined FUN_148e06a5e(void)

void FUN_148e06a5e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_148e114d0(param_2);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_148e06c3e(param_1,&local_78);
  lVar3 = local_78;
  local_88 = 0;
  uStack_80 = 0;
  lVar10 = (longlong)(int)uStack_70;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(lVar3 + lVar9);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x660) == '\x01')) {
        lVar7 = *(longlong *)(lVar8 + 0x6f0);
        if (lVar7 == 0) {
          uVar6 = FUN_1401548e0();
          lVar7 = FUN_14477b664(uVar6);
          *(longlong *)(lVar8 + 0x6f0) = lVar7;
        }
        if (*(longlong *)(lVar8 + 0x6f8) == 0) {
          if ((lVar7 != 0) && (*(longlong *)(lVar8 + 0x6e8) != 0)) {
            plVar1 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
              *(undefined8 *)(lVar8 + 0x6f8) = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x6e8));
              *(longlong *)(lVar8 + 0x6f8) = lVar7;
              if (lVar7 != 0) goto LAB_148e06b12;
            }
          }
        }
        else {
LAB_148e06b12:
          uVar2 = uStack_80;
          lVar8 = (longlong)(int)uStack_80;
          uVar5 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          if (uStack_80._4_4_ < uVar5) {
            FUN_148e118d8(&local_88,uVar2 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + lVar8 * 8) = *(undefined8 *)(lVar3 + lVar9);
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  if (&local_88 == param_2) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_88;
    local_88 = 0;
    *(int *)(param_2 + 1) = (int)uStack_80;
    *(uint *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e06c3e FUN_148e06c3e body=125 status=ok
// SIG undefined FUN_148e06c3e(void)

void FUN_148e06c3e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148e114d0(param_2);
  }
  local_20 = FUN_145abc86c();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_148e11500(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e06cc6 FUN_148e06cc6 body=977 status=ok
// SIG undefined FUN_148e06cc6(void)

void FUN_148e06cc6(longlong param_1,float param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_b48 [32];
  undefined1 local_b28;
  double local_b18;
  double dStack_b10;
  double local_b08;
  double dStack_b00;
  double local_af8;
  double local_af0;
  double local_ae8;
  double local_ae0;
  double local_ad8;
  double local_ad0;
  double local_ac8;
  double local_ac0;
  double local_ab8;
  double local_ab0;
  double local_aa8;
  double local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  longlong local_1c0;
  longlong local_138;
  char local_a8;
  ulonglong local_60;
  double dVar6;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b48;
  if ((*(longlong *)(param_1 + 0x288) != 0) && (lVar7 = *(longlong *)(param_1 + 0x248), lVar7 != 0))
  {
    if (*(longlong *)(*(longlong *)(param_1 + 0x288) + 0xc40) != 0) {
      fVar18 = *(float *)(param_1 + 0xb80);
      if (fVar18 <= 0.0) {
        fVar18 = *(float *)(param_1 + 0xb7c);
      }
      else {
        fVar1 = *(float *)(lVar7 + 0x4d4);
        *(float *)(param_1 + 0xb80) = fVar18 - param_2;
        fVar18 = powf(1.0 - (fVar1 - fVar18) / fVar1,*(float *)(lVar7 + 0x4d8));
        fVar18 = (0.0 - *(float *)(param_1 + 0xb78)) * (1.0 - fVar18) + *(float *)(param_1 + 0xb78);
        *(float *)(param_1 + 0xb7c) = fVar18;
      }
      dStack_b10 = (double)fVar18;
      local_b18 = 0.0;
      local_b08 = 0.0;
      local_aa0 = *(double *)param_3[3] - *(double *)(param_1 + 0xb70);
      local_aa8 = *(double *)(param_3[2] + 8) - *(double *)(param_1 + 0xb68);
      local_ab0 = *(double *)param_3[2] - *(double *)(param_1 + 0xb60);
      FUN_1401c9a0e(&local_b18,&local_ac8);
      dVar2 = *(double *)(param_1 + 0xb70);
      dVar3 = *(double *)(param_1 + 0xb60);
      dVar9 = *(double *)(param_1 + 0xb68) + local_ac0;
      local_a98 = *(double *)*param_3;
      uStack_a90 = *(double *)(*param_3 + 8);
      local_a88 = *(undefined4 *)param_3[1];
      uStack_a84 = *(undefined4 *)(param_3[1] + 4);
      uStack_a80 = *(undefined4 *)(param_3[1] + 8);
      uStack_a7c = *(undefined4 *)(param_3[1] + 0xc);
      FUN_1448052ee(&local_a98,&local_af8);
      local_ad0 = local_ae8 + local_b08;
      local_ad8 = local_af0 + dStack_b10;
      local_ae0 = local_af8 + local_b18;
      FUN_144a7484c(&local_ae0,&local_a98);
      uVar17 = DAT_14c846520;
      uVar16 = DAT_14c846510._4_4_;
      uVar19 = (undefined4)DAT_14c846510;
      uVar20 = (undefined4)DAT_14c846518;
      uVar15 = (ulonglong)DAT_14c846518 >> 0x20;
      *(undefined4 *)*param_3 = (undefined4)local_a98;
      *(undefined4 *)(*param_3 + 4) = local_a98._4_4_;
      *(undefined4 *)(*param_3 + 8) = (undefined4)uStack_a90;
      *(undefined4 *)(*param_3 + 0xc) = uStack_a90._4_4_;
      *(undefined4 *)param_3[1] = local_a88;
      *(undefined4 *)(param_3[1] + 4) = uStack_a84;
      *(undefined4 *)(param_3[1] + 8) = uStack_a80;
      *(undefined4 *)(param_3[1] + 0xc) = uStack_a7c;
      auVar14._8_4_ = SUB84(dVar9,0);
      auVar14._0_8_ = dVar3 + local_ac8;
      auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      param_3[2] = auVar14;
      *(double *)param_3[3] = dVar2 + local_ab8;
      *(undefined8 *)(param_3[3] + 8) = 0;
      *(undefined4 *)param_3[4] = uVar19;
      *(undefined4 *)(param_3[4] + 4) = uVar16;
      *(undefined4 *)(param_3[4] + 8) = uVar20;
      *(int *)(param_3[4] + 0xc) = (int)uVar15;
      *(undefined8 *)param_3[5] = uVar17;
      *(undefined8 *)(param_3[5] + 8) = 0;
    }
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FUN_1400e6e60(&local_a98);
      uVar19 = 0x3f800000;
      if ((*(longlong *)(param_1 + 0x288) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x288) + 0xc40) != 0)) {
        uVar19 = *(undefined4 *)(*(longlong *)(param_1 + 0x248) + 0x500);
      }
      local_b28 = 0;
      (**(code **)(**(longlong **)(param_1 + 0xb88) + 8))
                (*(longlong **)(param_1 + 0xb88),param_2,uVar19,&local_a98);
      dVar3 = uStack_a90 + *(double *)(param_3[2] + 8);
      dVar2 = *(double *)param_3[3];
      dVar9 = *(double *)(param_3[3] + 8) + 0.0;
      auVar8._8_4_ = SUB84(dVar3,0);
      auVar8._0_8_ = local_a98 + *(double *)param_3[2];
      auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      param_3[2] = auVar8;
      auVar10._8_4_ = SUB84(dVar9,0);
      auVar10._0_8_ = (double)CONCAT44(uStack_a84,local_a88) + dVar2;
      auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      param_3[3] = auVar10;
      FUN_144a7484c(&uStack_a80,&local_b18);
      dVar3 = *(double *)(param_3[1] + 8);
      dVar2 = *(double *)(param_3[1] + 8);
      dVar4 = *(double *)(*param_3 + 8);
      dVar9 = *(double *)(*param_3 + 8);
      dVar5 = *(double *)param_3[1];
      dVar6 = *(double *)param_3[1];
      dVar12 = local_b18 * dVar6 * 1.0 +
               dStack_b00 * dVar9 + local_b08 * *(double *)*param_3 * -1.0 + dStack_b10 * dVar2;
      dVar2 = local_b08 * dVar6 * -1.0 +
              ((*(double *)*param_3 * local_b18 * -1.0 + dVar2 * dStack_b00) - dStack_b10 * dVar9);
      auVar11._8_4_ = SUB84(dVar12,0);
      auVar11._0_8_ =
           dStack_b10 * dVar5 * -1.0 +
           local_b08 * dVar4 + dStack_b00 * *(double *)*param_3 * 1.0 + local_b18 * dVar3;
      auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *param_3 = auVar11;
      auVar13._8_4_ = SUB84(dVar2,0);
      auVar13._0_8_ =
           dStack_b00 * dVar5 * 1.0 +
           ((*(double *)*param_3 * dStack_b10 * 1.0 + dVar3 * local_b08) - local_b18 * dVar4);
      auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      param_3[1] = auVar13;
      if (local_a8 == '\x01') {
        local_a8 = '\0';
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_1c0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e07098 FUN_148e07098 body=30 status=ok
// SIG undefined FUN_148e07098(void)

void FUN_148e07098(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x29a0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x29a0) + 0xc40);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 148e070b6 FUN_148e070b6 body=71 status=ok
// SIG undefined FUN_148e070b6(void)

void FUN_148e070b6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb58) != 0) {
    FUN_148e070fe();
    *(float *)(*(longlong *)(param_1 + 0x288) + 0x340) =
         1.0 - *(float *)(*(longlong *)(param_1 + 0xb58) + 0x938);
  }
  return;
}



// FUNCTION 148e070fe FUN_148e070fe body=348 status=ok
// SIG undefined FUN_148e070fe(void)

void FUN_148e070fe(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 < *(float *)(param_1 + 0x940)) {
    param_2 = *(float *)(param_1 + 0x940) - param_2;
    *(float *)(param_1 + 0x940) = param_2;
    fVar1 = (*(float *)(param_1 + 0x944) - param_2) / *(float *)(param_1 + 0x944);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (0.5 <= fVar1) {
      fVar1 = powf(1.0 - (fVar1 + fVar1 + -1.0),*(float *)(param_1 + 0x948));
      fVar1 = (1.0 - fVar1) * 0.5 + 0.5;
    }
    else {
      fVar1 = powf(fVar1 + fVar1,*(float *)(param_1 + 0x948));
      fVar1 = (fVar1 + 0.0) * 0.5;
    }
    *(float *)(param_1 + 0x938) =
         (*(float *)(param_1 + 0x93c) - *(float *)(param_1 + 0x938)) * (fVar1 + 0.0) +
         *(float *)(param_1 + 0x938);
    dVar2 = *(double *)(param_1 + 0x918) - *(double *)(param_3 + 0x20);
    dVar4 = *(double *)(param_1 + 0x920) - *(double *)(param_3 + 0x28);
    dVar3 = *(double *)(param_1 + 0x928) - *(double *)(param_3 + 0x30);
    fVar1 = (((float)SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2) +
             *(float *)(param_1 + 0x934)) - *(float *)(param_1 + 0x930)) * (fVar1 + 0.0) +
            *(float *)(param_1 + 0x930);
    *(float *)(param_1 + 0x930) = fVar1;
    *(float *)(param_1 + 0x690) = fVar1;
  }
  return;
}



// FUNCTION 148e0725a FUN_148e0725a body=954 status=ok
// SIG undefined FUN_148e0725a(void)

void FUN_148e0725a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong lStack_118;
  undefined8 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0x2960) != 0) {
    local_138 = 0;
    uStack_130 = 0;
    FUN_148e06a5e(param_1,&local_138);
    lVar14 = (longlong)(int)uStack_130;
    if (lVar14 != 0) {
      lVar15 = 0;
      local_1a8 = local_138;
      lVar9 = local_138;
      do {
        lVar8 = *(longlong *)(lVar9 + lVar15);
        lVar6 = *(longlong *)(lVar8 + 0x6f0);
        if (lVar6 == 0) {
          uVar5 = FUN_1401548e0();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(lVar8 + 0x6f0) = lVar6;
        }
        lVar7 = *(longlong *)(lVar8 + 0x6f8);
        if (lVar7 == 0) {
          if ((lVar6 != 0) && (*(longlong *)(lVar8 + 0x6e8) != 0)) {
            plVar2 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
              *(undefined8 *)(lVar8 + 0x6f8) = 0;
              lVar9 = local_1a8;
            }
            else {
              uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0x6e8));
              *(longlong *)(lVar8 + 0x6f8) = lVar7;
              lVar9 = local_1a8;
              if (lVar7 != 0) goto LAB_148e073a7;
            }
          }
        }
        else {
LAB_148e073a7:
          local_128 = DAT_14caa8578;
          local_120 = 0;
          lStack_118 = 0;
          local_110 = 0;
          puVar11 = &DAT_14c846480;
          puVar13 = local_108;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          local_84 = 0;
          lVar9 = *(longlong *)(param_1 + 0x2960);
          lVar6 = *(longlong *)(lVar9 + 0x498);
          if (lVar6 == 0) {
            uVar5 = FUN_1458eaa58();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar9 + 0x498) = lVar6;
          }
          lVar10 = *(longlong *)(lVar9 + 0x4a0);
          if (lVar10 == 0) {
            if (lVar6 == 0) {
              lVar10 = 0;
            }
            else {
              plVar2 = (longlong *)(lVar9 + 0x490);
              lVar10 = 0;
              if (*plVar2 != 0) {
                plVar3 = *(longlong **)(lVar6 + 0xb8);
                local_1a0 = plVar2;
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(), cVar4 == '\0')) {
                  lVar10 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar10 = FUN_144aff482(uVar5,local_1a0);
                }
                *(longlong *)(lVar9 + 0x4a0) = lVar10;
              }
            }
          }
          local_128 = *(undefined8 *)(lVar8 + 0x6e0);
          local_120 = lVar10;
          lStack_118 = lVar7;
          FUN_148e05376(lVar8,&local_198);
          ppuVar12 = &local_198;
          puVar11 = local_108;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar11 = *ppuVar12;
            ppuVar12 = ppuVar12 + 1;
            puVar11 = puVar11 + 1;
          }
          local_198 = (undefined8 *)0x0;
          local_190 = 0;
          FUN_1446efa72(&local_198,0,3,0x10);
          puVar11 = local_198;
          local_190 = 3;
          *local_198 = &PTR_LAB_14b40e8d0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar9 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          local_198[2] = lVar8;
          *local_198 = &PTR_FUN_14b9a3240;
          local_198[3] = 0;
          FUN_14485c47a(local_198 + 3,param_1);
          puVar11[4] = FUN_148e07616;
          *(undefined4 *)(puVar11 + 5) = 0;
          FUN_144a450dc(&uStack_80,&local_198);
          FUN_1449db362(&local_198);
          lVar9 = local_1a8;
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_148e11f9a(param_2,iVar1);
          }
          FUN_145a14a00((longlong)iVar1 * 0xc0 + *param_2,&local_128);
          FUN_145a1457c(&local_128);
        }
        lVar15 = lVar15 + 8;
      } while (lVar14 * 8 != lVar15);
    }
    if (local_138 != 0) {
      FUN_1400020a8(local_138);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e07616 FUN_148e07616 body=127 status=ok
// SIG undefined FUN_148e07616(void)

void FUN_148e07616(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a();
  iVar1 = *(int *)(param_1 + 0x2980);
  *(uint *)(param_1 + 0x2980) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2984) < iVar1 + 1U) {
    FUN_148e12058((longlong *)(param_1 + 0x2978),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x2978) + (longlong)iVar1 * 8) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e07696 FUN_148e07696 body=12 status=ok
// SIG undefined FUN_148e07696(void)

bool FUN_148e07696(longlong param_1)

{
  return *(longlong *)(param_1 + 0x2960) != 0;
}



// FUNCTION 148e076a2 FUN_148e076a2 body=284 status=ok
// SIG undefined FUN_148e076a2(void)

void FUN_148e076a2(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447210f0();
  FUN_14132b09a(&local_38,uVar6);
  if (plStack_30 != (longlong *)0x0) {
    iVar5 = (int)plStack_30[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_30[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plStack_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = plStack_30;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
    lVar3 = local_38;
    if (plVar8 != (longlong *)0x0) {
      if (local_38 != 0) {
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        FUN_148e0725a(param_1,&local_38);
        uVar7 = 0;
        if ((longlong)(int)plStack_30 != 0) {
          lVar10 = (longlong)(int)plStack_30 * 0xc0;
          lVar9 = local_38;
          do {
            thunk_FUN_14144ff90(lVar3,lVar9);
            lVar9 = lVar9 + 0xc0;
            lVar10 = lVar10 + -0xc0;
          } while (lVar10 != 0);
          uVar7 = (ulonglong)plStack_30 & 0xffffffff;
        }
        FUN_148e1202e(local_38,uVar7);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e077c0 FUN_148e077c0 body=330 status=ok
// SIG undefined FUN_148e077c0(void)

void FUN_148e077c0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *local_100;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = FUN_1447210f0();
  FUN_14132b09a(&local_108,uVar4);
  if (local_100 != (longlong *)0x0) {
    iVar3 = (int)local_100[1];
    do {
      if (iVar3 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_100[1];
      bVar9 = iVar3 == iVar2;
      if (bVar9) {
        *(int *)(local_100 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
      plVar6 = local_100;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_108 != 0) {
        local_48 = (longlong *)0x0;
        local_40 = 0x1800000000;
        FUN_148db7afc(param_1,&local_108,0);
        plVar7 = &local_108;
        if (local_48 != (longlong *)0x0) {
          plVar7 = local_48;
        }
        lVar5 = (longlong)(int)local_40;
        if (lVar5 != 0) {
          lVar8 = 0;
          do {
            FUN_143d842f2(local_108,*(longlong *)((longlong)plVar7 + lVar8) + 0x6e0,1);
            lVar8 = lVar8 + 8;
          } while (lVar5 * 8 != lVar8);
        }
        if (local_48 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0790c FUN_148e0790c body=101 status=ok
// SIG undefined FUN_148e0790c(void)

bool FUN_148e0790c(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_148e06a5e(0,&local_38);
  iVar2 = (int)uStack_30;
  iVar1 = *(int *)(param_1 + 0x2980);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2 == iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e07972 FUN_148e07972 body=576 status=ok
// SIG undefined FUN_148e07972(void)

void FUN_148e07972(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_b18 [40];
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  double local_ad8;
  double local_ad0;
  double local_ac8;
  undefined1 local_ac0 [24];
  double local_aa8;
  double local_aa0;
  double local_a98;
  undefined1 local_a90 [2240];
  longlong local_1d0;
  longlong local_148;
  char local_b8;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b18;
  if (*(longlong *)(param_1 + 0x29a0) != 0) {
    FUN_145747f90();
    FUN_148e07bb4(param_1,&local_70);
    if (local_58 == '\x01') {
      *(undefined8 *)(param_1 + 0x3288) = local_60;
      *(undefined4 *)(param_1 + 0x3278) = local_70;
      *(undefined4 *)(&DAT_0000327c + param_1) = uStack_6c;
      *(undefined4 *)(param_1 + 0x3280) = uStack_68;
      *(undefined4 *)(param_1 + 0x3284) = uStack_64;
      FUN_1400e6e60(&local_aa8);
      (**(code **)(**(longlong **)(param_1 + 0x29a0) + 0x5f8))
                (*(longlong **)(param_1 + 0x29a0),0,&local_aa8);
      FUN_144a76660(local_a90,local_ac0);
      local_af0 = 0;
      local_ae8 = 0x4056800000000000;
      local_ae0 = 0;
      FUN_1401c9a0e(&local_af0,&local_ad8,local_ac0);
      lVar1 = *(longlong *)(param_1 + 0x2960);
      uVar4 = *(uint *)(lVar1 + 0x4dc);
      uVar2 = -(uint)(0.0 < (float)((*(double *)(param_1 + 0x3288) - local_a98) * local_ac8 +
                                   (*(double *)(param_1 + 0x3278) - local_aa8) * local_ad8 +
                                   (*(double *)(param_1 + 0x3280) - local_aa0) * local_ad0));
      uVar4 = ~uVar2 & (uVar4 ^ 0x80000000) | uVar4 & uVar2;
      *(uint *)(param_1 + 0x3290) = uVar4;
      *(uint *)(&DAT_00003294 + param_1) = uVar4;
      *(undefined4 *)(param_1 + 0x3298) = *(undefined4 *)(lVar1 + 0x4d4);
      if (local_b8 == '\x01') {
        local_b8 = '\0';
      }
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      if (local_1d0 != 0) {
        FUN_1400020a8();
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x3270);
    if (lVar1 != 0) {
      uVar3 = 0;
      if (*param_2 != 0 && local_58 == '\x01') {
        *(undefined8 *)(lVar1 + 0x928) = local_60;
        *(ulonglong *)(lVar1 + 0x918) = CONCAT44(uStack_6c,local_70);
        *(ulonglong *)(lVar1 + 0x920) = CONCAT44(uStack_64,uStack_68);
        uVar3 = 0x3f800000;
      }
      *(undefined4 *)(lVar1 + 0x940) = *(undefined4 *)(lVar1 + 0x944);
      *(undefined4 *)(lVar1 + 0x93c) = uVar3;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b18) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e07bb4 FUN_148e07bb4 body=328 status=ok
// SIG undefined FUN_148e07bb4(void)

longlong FUN_148e07bb4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_1447210f0();
  FUN_14132b09a(&local_48,uVar5);
  if (local_40 != (longlong *)0x0) {
    iVar4 = (int)local_40[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_40[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_40;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (((local_48 == 0) || (*(longlong *)(param_1 + 0x2960) == 0)) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x2960) + 0x4e0) == 0)) {
        *(undefined1 *)(param_2 + 0x18) = 0;
      }
      else {
        uVar7 = 0;
        FUN_148e08160(param_1,&local_48,0);
        lVar6 = FUN_1488ae41c(local_48,&local_48);
        if (lVar6 != 0) {
          lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x3c0) + 0x58))(lVar6 + 0x3c0,&DAT_14cb71330);
          if (lVar6 == 0) {
            uVar7 = 0;
          }
          else {
            FUN_140d93764(lVar6,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x4e0),0);
            uVar7 = 1;
          }
        }
        *(undefined1 *)(param_2 + 0x18) = uVar7;
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
      goto LAB_148e07c65;
    }
  }
  *(undefined1 *)(param_2 + 0x18) = 0;
LAB_148e07c65:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148e07cfe FUN_148e07cfe body=1023 status=ok
// SIG undefined FUN_148e07cfe(void)

void FUN_148e07cfe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar15 = *(longlong *)(param_1 + 0x29a0);
  if ((lVar15 != 0) && (iVar2 = *(int *)(lVar15 + 0xc38), (longlong)iVar2 != 0)) {
    lVar15 = *(longlong *)(lVar15 + 0xc30);
    lVar16 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar15 + lVar16);
      lVar16 = lVar16 + 0x80;
    } while ((longlong)iVar2 * 0x80 != lVar16);
  }
  if ((int)param_2[1] != 0) {
    local_98 = (void *)0x0;
    uStack_90 = 0;
    FUN_148e06a5e(param_1,&local_98);
    pvVar7 = local_98;
    local_b8 = (void *)0x0;
    lVar15 = (longlong)(int)uStack_90;
    local_b0 = (int)uStack_90;
    if (lVar15 == 0) {
      local_ac = 0;
    }
    else {
      FUN_148e120de(&local_b8,uStack_90 & 0xffffffff);
      memcpy(local_b8,pvVar7,lVar15 << 3);
    }
    local_a8 = 0;
    uStack_a0 = 0;
    if ((longlong)(int)param_2[1] != 0) {
      local_c8 = (undefined8 *)*param_2;
      local_c0 = local_c8 + (int)param_2[1];
      do {
        pvVar7 = local_b8;
        lVar15 = (longlong)local_b0;
        if (lVar15 != 0) {
          uVar4 = *local_c8;
          lVar16 = 0;
          do {
            lVar5 = *(longlong *)((longlong)pvVar7 + lVar16);
            if (lVar5 != 0) {
              lVar12 = *(longlong *)(lVar5 + 0x6f0);
              if (lVar12 == 0) {
                uVar11 = FUN_1401548e0();
                lVar12 = FUN_14477b664(uVar11);
                *(longlong *)(lVar5 + 0x6f0) = lVar12;
              }
              plVar1 = (longlong *)(lVar5 + 0x6e8);
              lVar13 = *(longlong *)(lVar5 + 0x6f8);
              if (lVar13 == 0) {
                if ((lVar12 != 0) && (*plVar1 != 0)) {
                  plVar6 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar6 == (longlong *)0x0) ||
                     (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
                    *(undefined8 *)(lVar5 + 0x6f8) = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
                    lVar13 = FUN_144aff482(uVar11,plVar1);
                    *(longlong *)(lVar5 + 0x6f8) = lVar13;
                    if (lVar13 != 0) {
                      lVar12 = *(longlong *)(lVar5 + 0x6f0);
                      goto LAB_148e07e8d;
                    }
                  }
                }
              }
              else {
LAB_148e07e8d:
                if (lVar12 == 0) {
                  uVar11 = FUN_1401548e0();
                  lVar12 = FUN_14477b664(uVar11);
                  *(longlong *)(lVar5 + 0x6f0) = lVar12;
                  lVar13 = *(longlong *)(lVar5 + 0x6f8);
                  if (lVar13 == 0) {
                    if (lVar12 == 0) {
                      lVar13 = 0;
                    }
                    else {
                      lVar13 = 0;
                      if (*plVar1 != 0) {
                        plVar6 = *(longlong **)(lVar12 + 0xb8);
                        if ((plVar6 == (longlong *)0x0) ||
                           (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
                          lVar13 = 0;
                        }
                        else {
                          uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
                          lVar13 = FUN_144aff482(uVar11,plVar1);
                        }
                        *(longlong *)(lVar5 + 0x6f8) = lVar13;
                      }
                    }
                  }
                }
                puVar14 = &DAT_14c9485f0;
                if (*(undefined4 **)(lVar13 + 8) != (undefined4 *)0x0) {
                  puVar14 = *(undefined4 **)(lVar13 + 8);
                }
                local_88 = 0;
                uStack_80 = 0;
                FUN_1400b2348(puVar14,&local_88,1);
                local_70 = local_88;
                local_68 = (int)uStack_80 + -1;
                if ((int)uStack_80 == 0) {
                  local_68 = 0;
                }
                cVar9 = FUN_1412c97f8(uVar4,&local_70);
                if (local_88 != 0) {
                  FUN_1400020a8();
                }
                uVar8 = uStack_a0;
                if (cVar9 != '\0') {
                  lVar15 = (longlong)(int)uStack_a0;
                  uVar10 = (int)uStack_a0 + 1;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
                  if (uStack_a0._4_4_ < uVar10) {
                    FUN_1446f84a2(&local_a8,uVar8 & 0xffffffff);
                  }
                  *(undefined8 *)(local_a8 + lVar15 * 8) = *local_c8;
                  break;
                }
              }
            }
            lVar16 = lVar16 + 8;
          } while (lVar15 * 8 != lVar16);
        }
        local_c8 = local_c8 + 1;
      } while (local_c8 != local_c0);
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (&local_a8 == param_2) {
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_a8;
      local_a8 = 0;
      *(int *)(param_2 + 1) = (int)uStack_a0;
      *(uint *)((longlong)param_2 + 0xc) = uStack_a0._4_4_;
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e080fe FUN_148e080fe body=97 status=ok
// SIG undefined FUN_148e080fe(void)

void FUN_148e080fe(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xc38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xc30);
    lVar4 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar4);
  }
  return;
}



// FUNCTION 148e08160 FUN_148e08160 body=213 status=ok
// SIG undefined FUN_148e08160(void)

undefined8 * FUN_148e08160(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x29a0);
  if (lVar1 != 0) {
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    FUN_148e06a5e(0,&local_38);
    bVar3 = true;
    if ((longlong)(int)uStack_30 != 0) {
      lVar4 = (longlong)(int)uStack_30 << 3;
      plVar5 = local_38;
      do {
        lVar2 = *plVar5;
        if ((lVar2 != 0) &&
           (*(longlong *)(lVar2 + 0x6e8) == *(longlong *)(lVar1 + (param_3 & 0xff) * 8 + 0xc40))) {
          if (plVar5 != (longlong *)0x0) {
            *param_2 = *(undefined8 *)(lVar2 + 0x6e0);
            bVar3 = false;
          }
          break;
        }
        plVar5 = plVar5 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_148e08191;
  }
  *param_2 = DAT_14caa8578;
LAB_148e08191:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148e08236 FUN_148e08236 body=322 status=ok
// SIG undefined FUN_148e08236(void)

longlong ** FUN_148e08236(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(param_1 + 0x29a0);
  if (lVar6 != 0) {
    pplVar7 = &local_38;
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    FUN_148e06a5e(0,pplVar7);
    if ((longlong)(int)uStack_30 == 0) {
      bVar2 = true;
    }
    else {
      lVar4 = (longlong)(int)uStack_30 << 3;
      plVar8 = local_38;
      do {
        lVar1 = *plVar8;
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x6e8) == *(longlong *)(lVar6 + 0xc40))) {
          if (plVar8 != (longlong *)0x0) {
            lVar6 = *(longlong *)(lVar1 + 0x6f0);
            if (lVar6 == 0) {
              uVar5 = FUN_1401548e0();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(lVar1 + 0x6f0) = lVar6;
            }
            pplVar7 = *(longlong ***)(lVar1 + 0x6f8);
            if (pplVar7 == (longlong **)0x0) {
              pplVar7 = (longlong **)0x0;
              bVar2 = false;
              if ((lVar6 == 0) || (*(longlong *)(lVar1 + 0x6e8) == 0)) goto LAB_148e082cb;
              plVar8 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar8 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
                pplVar7 = (longlong **)0x0;
              }
              else {
                uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
                pplVar7 = (longlong **)FUN_144aff482(uVar5,(longlong *)(lVar1 + 0x6e8));
              }
              *(longlong ***)(lVar1 + 0x6f8) = pplVar7;
            }
            bVar2 = false;
            goto LAB_148e082cb;
          }
          break;
        }
        plVar8 = plVar8 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
      bVar2 = true;
    }
LAB_148e082cb:
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar2) goto LAB_148e0825b;
  }
  pplVar7 = (longlong **)0x0;
LAB_148e0825b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pplVar7;
}



// FUNCTION 148e0837a FUN_148e0837a body=467 status=ok
// SIG undefined FUN_148e0837a(void)

void FUN_148e0837a(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = FUN_1447210f0();
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x2960) != 0)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x2960) + 0x4b8);
    if (fVar1 <= 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
    }
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar6;
    uVar3 = *param_2;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar6 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_c0[2] = lVar7;
    *local_c0 = &PTR_FUN_14b9a32b0;
    local_c0[3] = 0;
    FUN_14485c47a(local_c0 + 3,lVar5);
    puVar6[4] = param_1;
    puVar6[5] = uVar3;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x32b8,&local_a8,fVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_c0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e08572 FUN_148e08572 body=720 status=ok
// SIG undefined FUN_148e08572(void)

void FUN_148e08572(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2960) != 0) {
    uVar7 = FUN_1447210f0();
    FUN_14132b09a(&local_58,uVar7);
    if (plStack_50 != (longlong *)0x0) {
      iVar8 = (int)plStack_50[1];
      do {
        if (iVar8 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar10 = (int)plStack_50[1];
        bVar18 = iVar8 == iVar10;
        if (bVar18) {
          *(int *)(plStack_50 + 1) = iVar8 + 1;
          iVar10 = iVar8;
        }
        iVar8 = iVar10;
        UNLOCK();
        plVar11 = plStack_50;
      } while (!bVar18);
      LOCK();
      piVar1 = (int *)((longlong)plStack_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_50 + 0x10))();
      }
      plVar17 = local_58;
      if (plVar11 != (longlong *)0x0) {
        if (local_58 != (longlong *)0x0) {
          local_58 = (longlong *)0x0;
          plStack_50 = (longlong *)0x0;
          FUN_148e06a5e(param_1,&local_58);
          plVar4 = local_58;
          iVar8 = (int)plStack_50;
          lVar16 = (longlong)(int)plStack_50;
          if (lVar16 == 0) {
            lVar16 = 0;
          }
          else {
            local_68 = plVar17;
            uVar9 = 0;
            if (*local_58 == 0) {
              bVar18 = false;
            }
            else {
              bVar18 = *(longlong *)(*local_58 + 0x6e8) == *param_2;
            }
            local_60 = -lVar16;
            iVar10 = 0;
            do {
              bVar2 = bVar18;
              local_70 = uVar9;
              if (iVar10 + 1 < iVar8) {
                do {
                  lVar15 = (longlong)iVar10 + 2;
                  bVar18 = true;
                  lVar13 = -1;
                  do {
                    if (plVar4[lVar15 + -1] == 0) {
                      if (bVar2) {
                        if (!bVar18) goto LAB_148e087ab;
                        iVar14 = iVar10 - (int)lVar13;
                        goto LAB_148e08719;
                      }
                    }
                    else if ((bool)(*(longlong *)(plVar4[lVar15 + -1] + 0x6e8) == *param_2 ^ bVar2))
                    {
                      iVar14 = iVar10 - (int)lVar13;
                      break;
                    }
                    bVar18 = lVar15 < lVar16;
                    lVar13 = lVar13 + -1;
                    lVar15 = lVar15 + 1;
                    iVar14 = iVar8;
                  } while (local_60 + iVar10 != lVar13);
                  bVar3 = !bVar2;
                  iVar6 = iVar14;
                  iVar12 = iVar10;
                  bVar2 = bVar18;
                  if (bVar3) break;
                  if (!bVar18) goto LAB_148e087ab;
LAB_148e08719:
                  bVar2 = false;
                  iVar6 = iVar14 + 1;
                  iVar12 = iVar14;
                  iVar10 = iVar14;
                } while (iVar14 + 1 < iVar8);
              }
              else {
                if (bVar2) break;
                iVar6 = iVar10 + 1;
                iVar12 = iVar10;
                bVar2 = false;
              }
              iVar10 = iVar6;
              iVar6 = (int)uVar9;
              if (iVar6 != iVar12) {
                memmove(plVar4 + iVar6,plVar4 + iVar12,(longlong)(iVar10 - iVar12) << 3);
                iVar6 = (int)local_70;
              }
              uVar9 = (ulonglong)(uint)(iVar6 + (iVar10 - iVar12));
              bVar18 = true;
            } while (bVar2);
LAB_148e087ab:
            iVar8 = (int)uVar9;
            plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,iVar8);
            if (iVar8 < 1) {
              lVar16 = 0;
              plVar17 = local_68;
            }
            else {
              uVar5 = rand();
              iVar6 = (int)((float)iVar8 * ((float)(uVar5 & 0x7fff) / 32767.0));
              iVar10 = iVar8 + -1;
              if (iVar6 < iVar8 + -1) {
                iVar10 = iVar6;
              }
              lVar16 = (longlong)iVar10;
              plVar17 = local_68;
            }
          }
          if (local_58[lVar16] != 0) {
            FUN_146552870(plVar17,local_58[lVar16] + 0x6e0,*(longlong *)(param_1 + 0x2960) + 0x4b0);
          }
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        LOCK();
        plVar17 = plVar11 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e08844 FUN_148e08844 body=114 status=ok
// SIG undefined FUN_148e08844(void)

void FUN_148e08844(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_1447210f0();
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(param_1 + 0x32b8), lVar1 != 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x32b8));
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x32b8) = 0;
  }
  return;
}



// FUNCTION 148e088b6 FUN_148e088b6 body=446 status=ok
// SIG undefined FUN_148e088b6(void)

void FUN_148e088b6(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x2990);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x2988);
    lVar8 = 0;
    do {
      uVar4 = uStack_50;
      lVar5 = *param_2;
      if (*(longlong *)(lVar10 + lVar8) == lVar5) {
        lVar9 = (longlong)(int)uStack_50;
        uVar7 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
        if (uStack_50._4_4_ < uVar7) {
          FUN_148e12138(&local_58,uVar4 & 0xffffffff);
          lVar5 = *(longlong *)(lVar10 + lVar8);
        }
        *(longlong *)(local_58 + lVar9 * 0x10) = lVar5;
        lVar5 = *(longlong *)(lVar10 + 8 + lVar8);
        *(longlong *)(local_58 + 8 + lVar9 * 0x10) = lVar5;
        if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
          FUN_1456cec3c();
        }
      }
      lVar5 = local_58;
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar8);
    lVar10 = (longlong)(int)uStack_50;
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar5 + 8 + lVar8) != 0) {
          lVar6 = FUN_145869874();
          lVar9 = *(longlong *)(lVar5 + 8 + lVar8);
          if (lVar9 != 0) {
            if ((((lVar6 == 0) || (lVar2 = *(longlong *)(lVar9 + 0x10), lVar2 == 0)) ||
                (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                lVar6 + 0x30)) {
              lVar9 = FUN_1403126c0();
              plVar3 = *(longlong **)(lVar5 + 8 + lVar8);
              if (((plVar3 != (longlong *)0x0) && (lVar9 != 0)) &&
                 ((lVar6 = plVar3[2], lVar6 != 0 &&
                  ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar6 + 0x38) &&
                   (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                    lVar9 + 0x30)))))) {
                (**(code **)(*plVar3 + 0x330))(plVar3,param_3 ^ 1);
                if (plVar3[0x72] != 0) {
                  FUN_14045627c(plVar3[0x72],param_3,1);
                }
              }
            }
            else {
              FUN_145ecd112(lVar9,param_3);
            }
          }
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar10 * 0x10 != lVar8);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e08a9c FUN_148e08a9c body=142 status=ok
// SIG undefined FUN_148e08a9c(void)

void FUN_148e08a9c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_145d73658();
  lVar1 = FUN_1447210f0(param_1 + -0x3c0);
  if ((lVar1 != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = (**(code **)(*(longlong *)(lVar1 + 0xe50) + 0x10))(lVar1 + 0xe50);
      if (lVar1 != 0) {
        FUN_14121574a(lVar1,param_1 + 0x16d8,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e08b44 FUN_148e08b44 body=201 status=ok
// SIG undefined FUN_148e08b44(void)

longlong * FUN_148e08b44(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x2650);
  if (lVar2 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x2640);
    lVar2 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar2;
    if (lVar2 != 0) goto LAB_148e08b69;
LAB_148e08bdb:
    FUN_144a5dc74(param_2);
  }
  else {
LAB_148e08b69:
    lVar3 = *(longlong *)(lVar2 + 0xb8);
    if (lVar3 == 0) {
      local_28 = *(undefined8 *)(lVar2 + 0xa8);
      lVar3 = FUN_14050aea0();
      *(longlong *)(lVar2 + 0xb8) = lVar3;
      if (lVar3 == 0) goto LAB_148e08bdb;
    }
    plVar1 = *(longlong **)(lVar3 + 0x98);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0xa0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148e08c0e FUN_148e08c0e body=231 status=ok
// SIG undefined FUN_148e08c0e(void)

ulonglong FUN_148e08c0e(longlong param_1)

{
  byte extraout_AL;
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  undefined7 extraout_var;
  byte bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x2650);
  if (lVar2 == 0) {
    local_20 = *(undefined8 *)(param_1 + 0x2640);
    lVar2 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar2;
    if (lVar2 == 0) {
      uVar5 = 0;
      bVar1 = 1;
      goto LAB_148e08cd6;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0xb8);
  if (lVar3 == 0) {
    local_20 = *(undefined8 *)(lVar2 + 0xa8);
    lVar3 = FUN_14050aea0();
    *(longlong *)(lVar2 + 0xb8) = lVar3;
    if (lVar3 != 0) goto LAB_148e08c3e;
LAB_148e08cd2:
    bVar1 = 0;
    uVar5 = 0;
    bVar6 = 1;
  }
  else {
LAB_148e08c3e:
    lVar2 = FUN_141450d48(lVar3);
    if (lVar2 == 0) goto LAB_148e08cd2;
    lVar3 = FUN_1447210f0(param_1);
    bVar6 = 0;
    uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
    bVar1 = 1;
    if ((lVar3 != 0) && (*(char *)(lVar2 + 0x2a) != '\0')) {
      uVar4 = FUN_141563480(lVar2 + 0x30);
      FUN_1411d9864(lVar3,uVar4);
      bVar6 = 0;
      bVar1 = extraout_AL;
      uVar5 = extraout_var;
    }
  }
  bVar1 = bVar1 | bVar6;
LAB_148e08cd6:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar1) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e08cf6 FUN_148e08cf6 body=218 status=ok
// SIG undefined FUN_148e08cf6(void)

ulonglong FUN_148e08cf6(longlong param_1,longlong param_2)

{
  byte extraout_AL;
  byte bVar1;
  longlong lVar2;
  undefined7 uVar5;
  undefined8 uVar3;
  undefined7 extraout_var;
  longlong lVar4;
  byte bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x2650);
  if (lVar2 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x2640);
    lVar2 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar2;
    if (lVar2 == 0) {
      uVar5 = 0;
      bVar1 = 1;
      goto LAB_148e08db0;
    }
  }
  lVar4 = *(longlong *)(lVar2 + 0xb8);
  if (lVar4 == 0) {
    local_28 = *(undefined8 *)(lVar2 + 0xa8);
    lVar4 = FUN_14050aea0();
    *(longlong *)(lVar2 + 0xb8) = lVar4;
    if (lVar4 != 0) goto LAB_148e08d27;
LAB_148e08dac:
    bVar1 = 0;
    uVar5 = 0;
    bVar6 = 1;
  }
  else {
LAB_148e08d27:
    lVar2 = FUN_141450d48(lVar4);
    if (lVar2 == 0) goto LAB_148e08dac;
    bVar6 = 0;
    uVar5 = (undefined7)((ulonglong)lVar2 >> 8);
    bVar1 = 1;
    if ((param_2 != 0) && (*(char *)(lVar2 + 0x2a) != '\0')) {
      uVar3 = FUN_141563480(lVar2 + 0x30);
      FUN_14125be1e(param_2,uVar3);
      bVar6 = 0;
      bVar1 = extraout_AL;
      uVar5 = extraout_var;
    }
  }
  bVar1 = bVar1 | bVar6;
LAB_148e08db0:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar1) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e08dd2 FUN_148e08dd2 body=52 status=ok
// SIG undefined FUN_148e08dd2(void)

undefined1 FUN_148e08dd2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x2a) != '\0')) {
    uVar1 = FUN_141563480(param_1 + 0x30);
    uVar2 = FUN_14125be1e(param_2,uVar1);
    return uVar2;
  }
  return 1;
}



// FUNCTION 148e08e06 FUN_148e08e06 body=962 status=ok
// SIG undefined FUN_148e08e06(void)

void FUN_148e08e06(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  longlong local_98 [2];
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145d73658();
  lVar7 = FUN_1447210f0(param_1 + -0x3c0);
  if (lVar7 == 0) goto LAB_148e08f44;
  FUN_1410d53f0(&local_60,lVar7);
  plVar13 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar13 == (longlong *)0x0) goto LAB_148e08f44;
  iVar6 = (int)plVar13[1];
  do {
    if (iVar6 == 0) {
      plVar13 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar4 = (int)plVar13[1];
    bVar15 = iVar6 == iVar4;
    if (bVar15) {
      *(int *)(plVar13 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
  } while (!bVar15);
  LOCK();
  piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
  }
  lVar3 = local_60;
  if (plVar13 == (longlong *)0x0) goto LAB_148e08f44;
  if (local_60 != 0) {
    lVar14 = *param_2;
    if (lVar14 == 0) {
LAB_148e08ed8:
      lVar14 = 0;
    }
    else {
      lVar8 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_148e08ed8;
    }
    lVar8 = *(longlong *)(param_1 + 0x2290);
    if (lVar8 == 0) {
      local_60 = *(longlong *)(param_1 + 0x2280);
      lVar8 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2290) = lVar8;
      if (lVar8 != 0) goto LAB_148e08eeb;
    }
    else {
LAB_148e08eeb:
      lVar11 = *(longlong *)(lVar8 + 0xb8);
      if (lVar11 == 0) {
        local_60 = *(longlong *)(lVar8 + 0xa8);
        lVar11 = FUN_14050aea0();
        *(longlong *)(lVar8 + 0xb8) = lVar11;
        if (lVar11 == 0) {
          if ((*(longlong *)(lVar8 + 0x118) != 0) && ((longlong)*(int *)(lVar8 + 0x128) != 0)) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0x120) + lVar11) != 0) {
                lVar11 = FUN_148e091ca(lVar3,lVar8 + 0x110,*(undefined8 *)(lVar8 + 0x1b0));
                if (lVar11 != 0) goto LAB_148e08efb;
                break;
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar8 + 0x128) * 8 != lVar11);
          }
          goto LAB_148e08f07;
        }
      }
LAB_148e08efb:
      cVar5 = FUN_1415dac4e(lVar11);
      if (cVar5 == '\0') {
        lVar8 = FUN_141450d48(lVar11);
        if (((lVar8 != 0) && (lVar9 = FUN_1447210f0(param_1 + -0x3c0), lVar9 != 0)) &&
           (*(char *)(lVar8 + 0x2a) != '\0')) {
          uVar10 = FUN_141563480(lVar8 + 0x30);
          cVar5 = FUN_1411d9864(lVar9,uVar10);
          if (cVar5 == '\0') goto LAB_148e08f27;
        }
        puVar12 = *(undefined4 **)(lVar11 + 8);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = &DAT_14c9485f0;
        }
        FUN_1447325ac(puVar12,&local_68,1);
        local_60 = local_68;
        local_58 = 0x6000;
        local_50 = 0;
        puVar12 = *(undefined4 **)(*(longlong *)(lVar11 + 0x1b0) + 8);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = &DAT_14c9485f0;
        }
        local_78 = 0;
        uStack_70 = 0;
        FUN_1400b2348(puVar12,&local_78,1);
        FUN_1410908dc(lVar7,local_98,0);
        FUN_14094a6a4(&local_88,local_98,0);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (local_80 == (int)uStack_70) {
          if ((local_80 < 2) || (iVar6 = FUN_144a80a00(local_88,local_78), iVar6 == 0)) {
LAB_148e090e4:
            local_a8 = 0;
            local_b0 = 1;
            local_b8 = 0;
            local_c0 = 0;
            local_c8 = 1;
            cVar5 = FUN_1416a3978(lVar3,lVar14,&local_60,0);
            if (cVar5 != '\0') {
              if (local_88 != 0) {
                FUN_1400020a8();
              }
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              goto LAB_148e08f27;
            }
          }
        }
        else if ((int)uStack_70 + local_80 == 1) goto LAB_148e090e4;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
    }
LAB_148e08f07:
    local_60 = *(longlong *)(param_1 + 0x2280);
    FUN_14422f498(lVar3,&local_60,lVar14,0);
  }
LAB_148e08f27:
  LOCK();
  plVar2 = plVar13 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_148e08f44:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e091ca FUN_148e091ca body=537 status=ok
// SIG undefined FUN_148e091ca(void)

longlong FUN_148e091ca(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  puVar7 = *(undefined4 **)(param_3 + 8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = &DAT_14c9485f0;
  }
  FUN_1447325ac(puVar7,&local_60,1);
  FUN_1488dd624(param_2,local_60,&local_58);
  lVar8 = local_58;
  lVar14 = (longlong)(int)uStack_50;
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  else {
    local_80 = (longlong *)(param_1 + 0x118);
    lVar10 = 0;
    lVar13 = 0;
    lVar11 = 0x2bca2875f4373fff;
    local_78 = param_1;
    do {
      lVar1 = *(longlong *)(lVar8 + lVar10);
      puVar7 = *(undefined4 **)(lVar1 + 8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = &DAT_14c9485f0;
      }
      FUN_1447325ac(puVar7,&local_68,1);
      uVar3 = (uint)((ulonglong)local_68 >> 0x10);
      uVar9 = (uint)local_68 & 0xffff;
      plVar5 = (longlong *)
               FUN_148e13f7a(local_80,((uint)local_68 << 0x10 | uVar9) +
                                      (int)((ulonglong)local_68 >> 0x20) +
                                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4),&local_68);
      plVar4 = local_80;
      lVar2 = *plVar5;
      lVar12 = lVar11;
      if (lVar2 <= lVar11) {
        lVar12 = lVar2;
      }
      if (lVar2 < lVar11) {
        lVar13 = lVar1;
      }
      lVar10 = lVar10 + 8;
      lVar11 = lVar12;
    } while (lVar14 * 8 != lVar10);
    if (lVar13 != 0) {
      FUN_1402160b8(&local_68);
      puVar7 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar13 + 8) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(lVar13 + 8);
      }
      FUN_1447325ac(puVar7,&local_70,1);
      if (*(int *)(local_78 + 0x120) != *(int *)(local_78 + 0x14c)) {
        uVar3 = (uint)((ulonglong)local_70 >> 0x10);
        uVar9 = (uint)local_70 & 0xffff;
        lVar8 = local_78 + 0x150;
        if (*(longlong *)(local_78 + 0x158) != 0) {
          lVar8 = *(longlong *)(local_78 + 0x158);
        }
        iVar6 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(local_78 + 0x160) - 1U &
                                 (int)((ulonglong)local_70 >> 0x20) +
                                 ((uint)local_70 << 0x10 | uVar9) + (uVar3 << 0x13 | uVar3 & 0xffff)
                                 + (uVar9 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar5 = (longlong *)(*plVar4 + (longlong)iVar6 * 0x18);
            if (*plVar5 == local_70) goto LAB_148e09317;
            iVar6 = (int)plVar5[2];
          } while (iVar6 != -1);
        }
      }
      plVar5 = (longlong *)0x0;
LAB_148e09317:
      plVar5[1] = local_68;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar13;
}



// FUNCTION 148e093e4 FUN_148e093e4 body=74 status=ok
// SIG undefined FUN_148e093e4(void)

undefined2 * FUN_148e093e4(longlong param_1,undefined2 *param_2)

{
  if (*(char *)(param_1 + 0x280) == '\0') {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    FUN_1406f1bc8(param_1 + -0x1ad8,param_2);
  }
  return param_2;
}



// FUNCTION 148e09436 FUN_148e09436 body=131 status=ok
// SIG undefined FUN_148e09436(void)

void FUN_148e09436(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_1478b9376();
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_1447210f0(param_1);
    lVar1 = FUN_140636ec6(uVar2);
    if (lVar1 != 0) {
      uVar2 = FUN_1447210f0(param_1);
      plVar3 = (longlong *)FUN_140636ec6(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000148e094ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x5a0))(plVar3,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 148e094ba FUN_148e094ba body=93 status=ok
// SIG undefined FUN_148e094ba(void)

ulonglong FUN_148e094ba(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x428);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x5d0))();
        if (lVar4 == param_2) {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148e0951c FUN_148e0951c body=19 status=ok
// SIG undefined FUN_148e0951c(void)

undefined4 FUN_148e0951c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140cb9f34();
  return *(undefined4 *)(lVar1 + 0x20);
}



// FUNCTION 148e09530 FUN_148e09530 body=409 status=ok
// SIG undefined FUN_148e09530(void)

void FUN_148e09530(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148e1501a();
  uVar6 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_48,uVar6);
  plVar8 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar8 != (longlong *)0x0) {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_3c,local_40) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_3c,local_40) + 0x10))();
    }
    lVar3 = local_48;
    if (plVar8 != (longlong *)0x0) {
      if (local_48 != 0) {
        if (*(char *)(param_1 + 0x460) == '\0') {
          lVar7 = *(longlong *)(param_1 + 0x490);
          iVar5 = *(int *)(param_1 + 0x498);
        }
        else {
          lVar7 = *(longlong *)(param_1 + 0x478);
          iVar5 = *(int *)(param_1 + 0x480);
        }
        if ((lVar7 != 0 || iVar5 != 0x6000) &&
           (local_38 = 0, local_48 = lVar7, local_40 = iVar5, lVar7 != 0 && iVar5 - 1U < 0xfffffffe)
           ) {
          local_60 = FUN_1447210f0(param_1);
          local_60 = local_60 + 0x230;
          local_58 = 0;
          FUN_1461e533c(&local_60);
          if (local_50 != 0) {
            do {
              FUN_14422f78e(lVar3,local_50,&local_48);
              local_58 = local_58 + 1;
              FUN_1461e533c(&local_60);
            } while (local_50 != 0);
          }
        }
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
  *(byte *)(param_1 + 0x460) = ~*(byte *)(param_1 + 0x460) & 1;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e096ca FUN_148e096ca body=82 status=ok
// SIG undefined FUN_148e096ca(void)

ulonglong FUN_148e096ca(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x470) == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    lVar2 = FUN_1447210f0();
    lVar3 = FUN_140149a73(lVar2,0);
    if (lVar3 == 0) {
      bVar1 = 0;
    }
    else {
      lVar2 = param_1 + 0x468;
      bVar1 = FUN_1405d584e(lVar2,lVar3);
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 != 0 & bVar1);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148e0971c FUN_148e0971c body=212 status=ok
// SIG undefined FUN_148e0971c(void)

void FUN_148e0971c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = (**(code **)(*param_1 + 0x670))();
  if (cVar3 != '\0') {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar2 = (int)local_28[1];
        bVar8 = iVar4 == iVar2;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if ((local_30 != 0) &&
           (plVar6 = (longlong *)FUN_14479d2ce(local_30 + 0x290), plVar6 == param_1)) {
          FUN_144234222(local_30);
        }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e097f2 FUN_148e097f2 body=50 status=ok
// SIG undefined FUN_148e097f2(void)

void FUN_148e097f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x290);
  if (lVar1 != param_2) {
    return;
  }
  FUN_144234222(param_1);
  return;
}



// FUNCTION 148e09958 FUN_148e09958 body=258 status=ok
// SIG undefined FUN_148e09958(void)

int FUN_148e09958(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = (int)param_1[1];
  iVar3 = iVar1;
  if (0 < iVar1) {
    lVar6 = 0;
    bVar5 = false;
    do {
      lVar7 = lVar6 * 8;
      while( true ) {
        cVar2 = FUN_145f8ec8c(*param_1 + lVar7,param_2);
        iVar3 = (int)param_1[1];
        if (cVar2 != '\0') break;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
        if (iVar3 <= lVar6) {
          if (bVar5) goto LAB_148e09a4d;
          goto LAB_148e09a25;
        }
      }
      do {
        if (iVar3 - 1U != (uint)lVar6) {
          iVar4 = iVar3 + ~(uint)lVar6;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 + -1;
        if (iVar3 + -1 <= lVar6) goto LAB_148e09a4d;
        cVar2 = FUN_145f8ec8c(*param_1 + lVar7,param_2);
        iVar3 = (int)param_1[1];
      } while (cVar2 != '\0');
      lVar6 = lVar6 + 1;
      bVar5 = true;
    } while (lVar6 < iVar3);
LAB_148e09a4d:
    FUN_148e12a88(param_1);
    iVar3 = (int)param_1[1];
  }
LAB_148e09a25:
  return iVar1 - iVar3;
}



// FUNCTION 148e09a5a FUN_148e09a5a body=161 status=ok
// SIG undefined FUN_148e09a5a(void)

void FUN_148e09a5a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  uVar1 = FUN_148e12b24(param_1 + 0x38,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38,
                        &local_38);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  FUN_148e13196(uVar1,&local_38);
  FUN_145f8ecc4(param_1);
  FUN_140e61a54(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e09afc FUN_148e09afc body=258 status=ok
// SIG undefined FUN_148e09afc(void)

void FUN_148e09afc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x38);
  local_50 = 0;
  FUN_14485c47a(&local_50);
  local_48 = local_50;
  iVar2 = FUN_140e620ac(plVar1,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *plVar1;
    if (lVar3 + 8 != 0 && lVar3 != 0) {
      local_48 = 0;
      FUN_14485c47a(&local_48,param_3);
      FUN_148e09958(lVar3 + 8,&local_48);
      if (*(int *)(lVar3 + 0x10) == 0) {
        local_58 = 0;
        FUN_14485c47a(&local_58,param_2);
        FUN_148e13212(plVar1,local_58);
      }
      FUN_145f8ecc4(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e09c16 FUN_148e09c16 body=256 status=ok
// SIG undefined FUN_148e09c16(void)

void FUN_148e09c16(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_3 + 0x5e8))(param_3), lVar5 != 0)
     ) {
    lVar6 = FUN_144a7b4ca();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30 && (lVar6 = FUN_1447210f0(param_1), lVar6 != 0)) &&
        (FUN_145cff6ec(&local_30,lVar6), local_28 != (longlong *)0x0)))) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_148e09a5a(local_30,lVar5,param_1);
        }
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
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
          }
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



// FUNCTION 148e09d28 FUN_148e09d28 body=256 status=ok
// SIG undefined FUN_148e09d28(void)

void FUN_148e09d28(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_3 + 0x5e8))(param_3), lVar5 != 0)
     ) {
    lVar6 = FUN_144a7b4ca();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30 && (lVar6 = FUN_1447210f0(param_1), lVar6 != 0)) &&
        (FUN_145cff6ec(&local_30,lVar6), local_28 != (longlong *)0x0)))) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_148e09afc(local_30,lVar5,param_1);
        }
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
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
          }
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



// FUNCTION 148e09e3a FUN_148e09e3a body=89 status=ok
// SIG undefined FUN_148e09e3a(void)

undefined1 FUN_148e09e3a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  
  cVar1 = FUN_148e14baa();
  uVar2 = 1;
  if (cVar1 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x4b8) == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + lVar3) == param_2) {
          return 1;
        }
        bVar4 = (longlong)*(int *)(param_1 + 0x4b8) * 8 + -8 != lVar3;
        uVar2 = 0;
        lVar3 = lVar3 + 8;
      } while (bVar4);
    }
  }
  return uVar2;
}



// FUNCTION 148e09e94 FUN_148e09e94 body=37 status=ok
// SIG undefined FUN_148e09e94(void)

bool FUN_148e09e94(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_148e14c00();
  bVar2 = true;
  if (cVar1 == '\0') {
    bVar2 = *(int *)(param_1 + 0x4b8) != 0;
  }
  return bVar2;
}



// FUNCTION 148e09eba FUN_148e09eba body=186 status=ok
// SIG undefined FUN_148e09eba(void)

bool FUN_148e09eba(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 == 0) {
LAB_148e09f66:
    bVar4 = false;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x428);
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x420);
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar6 + lVar7);
        if ((plVar2 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*plVar2 + 0x5d0))(), lVar5 == param_2)) {
          if (*(longlong *)(param_2 + 0x3d0) != 0) {
            cVar3 = FUN_148e14c90(param_1);
            return *(char *)(param_1 + 0x460) == cVar3;
          }
          goto LAB_148e09f66;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    if ((longlong)*(int *)(param_1 + 0x4b8) == 0) {
      bVar4 = true;
    }
    else {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + lVar6) == param_2) {
          return false;
        }
        bVar8 = (longlong)*(int *)(param_1 + 0x4b8) * 8 + -8 != lVar6;
        bVar4 = true;
        lVar6 = lVar6 + 8;
      } while (bVar8);
    }
  }
  return bVar4;
}



// FUNCTION 148e09f74 FUN_148e09f74 body=176 status=ok
// SIG undefined FUN_148e09f74(void)

void FUN_148e09f74(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x4b8) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + lVar1) == param_2) {
        local_30 = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        local_28 = &local_30;
        FUN_148e136b8(param_1 + 0x4b0);
        FUN_148dc20ac(param_2,0);
        break;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0x4b8) * 8 != lVar1);
  }
  thunk_FUN_148e14e3c(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0a026 FUN_148e0a026 body=38 status=ok
// SIG undefined FUN_148e0a026(void)

undefined4 FUN_148e0a026(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    lVar1 = FUN_140cb9f34();
    uVar2 = *(undefined4 *)(lVar1 + 0x20);
  }
  else {
    uVar2 = 0xbf800000;
  }
  return uVar2;
}



// FUNCTION 148e0a04c FUN_148e0a04c body=111 status=ok
// SIG undefined FUN_148e0a04c(void)

void FUN_148e0a04c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x4b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4b0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_148dc20ac(lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (*(int *)(param_1 + 0x4bc) != 0) {
    FUN_148e137ec(param_1 + 0x4b0);
  }
  FUN_148e09530(param_1);
  return;
}



// FUNCTION 148e0a0c4 FUN_148e0a0c4 body=263 status=ok
// SIG undefined FUN_148e0a0c4(void)

void FUN_148e0a0c4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_148e14c90();
  if (cVar1 != *(char *)(param_1 + 0x460)) {
    lVar2 = FUN_148e151fc(param_1,param_2);
    if (lVar2 != 0) {
      local_28 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      FUN_148e1381c(param_1 + 0x4b0,&local_28);
    }
  }
  if (*(char *)(param_1 + 0x4a8) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  FUN_148e15bbc(param_1,param_2);
  if (*(int *)(param_1 + 0x428) == 0) {
    *(undefined1 *)(param_1 + 0x4a8) = 0;
  }
  lVar2 = FUN_148e151fc(param_1);
  if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0x4b8) != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + lVar3) == lVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x4b8) * 8 != lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0a1f0 FUN_148e0a1f0 body=347 status=ok
// SIG undefined FUN_148e0a1f0(void)

void FUN_148e0a1f0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1 != (longlong *)0x0) && ((char)param_1[0x2f] == '\x03')) &&
     (lVar6 = (**(code **)(*param_1 + 0x5d8))(), lVar6 != 0)) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar8 = FUN_1447210f0(lVar6);
      FUN_1410d53f0(&local_40,uVar8);
      plVar9 = (longlong *)CONCAT44(uStack_34,local_38);
      if (plVar9 != (longlong *)0x0) {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) {
            plVar9 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar5 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
        }
        lVar7 = local_40;
        if (plVar9 != (longlong *)0x0) {
          if (local_40 != 0) {
            local_38 = 0x6000;
            local_30 = 0;
            local_40 = param_2;
            cVar4 = FUN_14423083a(lVar7);
            if (cVar4 != '\0') {
              local_38 = 0x6000;
              local_30 = 0;
              local_48 = 0;
              local_50 = 1;
              local_58 = 0;
              local_60 = 0;
              local_68 = 1;
              local_40 = param_2;
              FUN_1416a3978(lVar7,lVar6,&local_40,0);
            }
          }
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0a34c FUN_148e0a34c body=434 status=ok
// SIG undefined FUN_148e0a34c(void)

void FUN_148e0a34c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1 != (longlong *)0x0) && (lVar7 = (**(code **)(*param_1 + 0x180))(), lVar7 != 0)) &&
     (iVar6 = FUN_14490d72a(lVar7), iVar6 != 3)) {
    FUN_1410d53f0(&local_60,lVar7);
    plVar10 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar10 != (longlong *)0x0) {
      iVar6 = (int)plVar10[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar12 = iVar6 == iVar4;
        if (bVar12) {
          *(int *)(plVar10 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
      }
      lVar3 = local_60;
      if (plVar10 != (longlong *)0x0) {
        if (local_60 != 0) {
          local_58 = 0x6000;
          local_50 = 0;
          local_60 = param_2;
          cVar5 = FUN_14423083a(lVar3);
          if ((cVar5 != '\0') && (0 < *(int *)(lVar7 + 0x238))) {
            iVar6 = 0;
            lVar11 = 0;
            do {
              lVar8 = FUN_14479d2ce(*(longlong *)(lVar7 + 0x230) + lVar11);
              if (lVar8 != 0) {
                lVar9 = FUN_144a5dd5e();
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                  local_58 = 0x6000;
                  local_50 = 0;
                  local_68 = 0;
                  local_70 = 1;
                  local_78 = 0;
                  local_80 = 0;
                  local_88 = 1;
                  local_60 = param_2;
                  FUN_1416a3978(lVar3,lVar8,&local_60,0);
                }
              }
              lVar11 = lVar11 + 8;
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar7 + 0x238));
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0a500 FUN_148e0a500 body=551 status=ok
// SIG undefined FUN_148e0a500(void)

void FUN_148e0a500(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_1 != (longlong *)0x0) && (0 < (int)param_2[1])) &&
      (lVar6 = (**(code **)(*param_1 + 0x180))(), lVar6 != 0)) &&
     (iVar5 = FUN_14490d72a(lVar6), iVar5 != 3)) {
    FUN_1410d53f0(&local_60,lVar6);
    plVar9 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar10 = (int)plVar9[1];
        bVar13 = iVar5 == iVar10;
        if (bVar13) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar10 = iVar5;
        }
        iVar5 = iVar10;
        UNLOCK();
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
      }
      lVar12 = local_60;
      if (plVar9 != (longlong *)0x0) {
        local_70 = local_60;
        if (local_60 != 0) {
          lVar7 = param_2[1];
          if ((longlong)(int)lVar7 != 0) {
            lVar8 = *param_2;
            lVar11 = 0;
            do {
              local_60 = *(longlong *)(lVar8 + lVar11);
              local_58 = 0x6000;
              local_50 = 0;
              cVar4 = FUN_14423083a(lVar12,&local_60);
              if (cVar4 == '\0') goto LAB_148e0a6fe;
              lVar11 = lVar11 + 8;
            } while ((longlong)(int)lVar7 * 8 != lVar11);
          }
          if (0 < *(int *)(lVar6 + 0x238)) {
            iVar10 = 0;
            lVar12 = 0;
            iVar5 = 0;
            do {
              lVar7 = FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar12);
              iVar3 = iVar5;
              if (lVar7 != 0) {
                lVar8 = FUN_144a5dd5e();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                  local_68 = (longlong)iVar5;
                  local_60 = *(longlong *)(*param_2 + local_68 * 8);
                  local_58 = 0x6000;
                  local_50 = 0;
                  local_78 = 0;
                  local_80 = 1;
                  local_88 = 0;
                  local_90 = 0;
                  local_98 = 1;
                  FUN_1416a3978(local_70,lVar7,&local_60,0);
                  iVar3 = 0;
                  if (-2 < (int)local_68) {
                    iVar3 = iVar5 + 1;
                    if ((int)param_2[1] <= iVar5 + 1) {
                      iVar3 = 0;
                    }
                  }
                }
              }
              iVar5 = iVar3;
              lVar12 = lVar12 + 8;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar6 + 0x238));
          }
        }
LAB_148e0a6fe:
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
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0a728 FUN_148e0a728 body=312 status=ok
// SIG undefined FUN_148e0a728(void)

void FUN_148e0a728(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != (longlong *)0x0) && ((char)param_1[0x2f] == '\x03')) &&
     (lVar6 = (**(code **)(*param_1 + 0x5d8))(), lVar6 != 0)) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar8 = FUN_1447210f0(lVar6);
      FUN_1410d53f0(&local_38,uVar8);
      plVar9 = (longlong *)CONCAT44(uStack_2c,local_30);
      if (plVar9 != (longlong *)0x0) {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) {
            plVar9 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar5 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_2c,local_30) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_2c,local_30) + 0x10))();
        }
        if (plVar9 != (longlong *)0x0) {
          if (local_38 != 0) {
            local_30 = 0x6000;
            local_28 = 0;
            local_38 = param_2;
            cVar4 = FUN_14423083a();
            if (cVar4 != '\0') {
              local_30 = 0x6000;
              local_28 = 0;
              local_38 = param_2;
              FUN_1441ff9d0(lVar6,&local_38,0);
            }
          }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0a862 FUN_148e0a862 body=384 status=ok
// SIG undefined FUN_148e0a862(void)

void FUN_148e0a862(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_1 + 0x180))(), lVar6 != 0)) &&
     (iVar5 = FUN_14490d72a(lVar6), iVar5 != 3)) {
    FUN_1410d53f0(&local_58,lVar6);
    plVar9 = (longlong *)CONCAT44(uStack_4c,local_50);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_4c,local_50) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_58 != 0) {
          local_50 = 0x6000;
          local_48 = 0;
          local_58 = param_2;
          cVar4 = FUN_14423083a();
          if ((cVar4 != '\0') && (0 < *(int *)(lVar6 + 0x238))) {
            iVar5 = 0;
            lVar10 = 0;
            do {
              lVar7 = FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar10);
              if (lVar7 != 0) {
                lVar8 = FUN_144a5dd5e();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                  local_50 = 0x6000;
                  local_48 = 0;
                  local_58 = param_2;
                  FUN_1441ff9d0(lVar7,&local_58,0);
                }
              }
              lVar10 = lVar10 + 8;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar6 + 0x238));
          }
        }
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
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0a9e4 FUN_148e0a9e4 body=647 status=ok
// SIG undefined FUN_148e0a9e4(void)

void FUN_148e0a9e4(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined8 *local_128;
  undefined2 local_120 [2];
  undefined4 local_11c;
  code *local_118;
  longlong *local_108;
  longlong local_f8 [4];
  code *local_d8 [2];
  undefined8 *local_c8;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((param_2 != 0) && (cVar7 = FUN_148e0c274(param_1 + 8), cVar7 != '\0')) &&
     ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    local_128 = (undefined8 *)(param_2 + 0x458);
    lVar12 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x230) + 0x78);
    do {
      if ((*(char *)((longlong)plVar11 + 0x14) == '\x01') && (*plVar11 == 0)) {
        lVar8 = FUN_140cb9f34();
        fVar1 = *(float *)(lVar8 + 300);
        dVar3 = *(double *)(param_2 + 0x6d0);
        fVar2 = *(float *)(plVar11 + 1);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x1f0) + 0xf0);
        if (*(longlong *)(param_2 + 0x1f0) == 0) {
          puVar9 = local_128;
        }
        uVar4 = *puVar9;
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        lVar8 = *(longlong *)(param_1 + 0x18);
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
          UNLOCK();
        }
        lVar6 = plVar11[-0xd];
        local_118 = (code *)0x0;
        local_108 = (longlong *)0x0;
        local_c8 = (undefined8 *)FUN_14001cc68(0x28,8);
        *local_c8 = &PTR_FUN_14b9a3860;
        local_c8[1] = param_1;
        local_c8[2] = uVar5;
        local_c8[3] = lVar8;
        local_c8[4] = lVar6;
        if (local_c8 + 1 == (longlong *)0x0) {
          local_d8[0] = local_118;
          if (local_118 != (code *)0x0) goto LAB_148e0ab9b;
        }
        else {
          local_d8[0] = FUN_14423d45c;
LAB_148e0ab9b:
          local_118 = (code *)0x0;
        }
        local_108 = (longlong *)0x0;
        local_98 = 3;
        local_120[0] = 0;
        local_11c = 0xbf800000;
        local_138 = local_120;
        FUN_1406f4044(uVar4,plVar11,local_d8,(float)((double)fVar1 - (dVar3 - (double)fVar2)));
        (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(local_d8);
        if (local_118 != (code *)0x0) {
          plVar10 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar10 = local_f8;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      plVar11 = plVar11 + 0x13;
      lVar12 = lVar12 + -0x98;
    } while (lVar12 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0ac6c FUN_148e0ac6c body=642 status=ok
// SIG undefined FUN_148e0ac6c(void)

void FUN_148e0ac6c(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((*(longlong *)(param_1 + 0xd0) != 0) || (*(int *)(param_1 + 0xd8) != 0x6000)) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0x6000;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((*(longlong *)(param_1 + 0xb0) != 0) || (*(int *)(param_1 + 0xb8) != 0x6000)) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0x6000;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1b8) != 0) || (*(int *)(param_1 + 0x1c0) != 0x6000)) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0x6000;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = DAT_14c948618;
  *(undefined4 *)(param_1 + 0x1dc) = DAT_14c948620;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  if ((*(longlong *)(param_1 + 0x268) != 0) || (*(int *)(param_1 + 0x270) != 0x6000)) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x270) = 0x6000;
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 600),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 600);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x230);
  if ((longlong)*(int *)(param_1 + 0x238) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    plVar7 = (longlong *)(lVar4 + 0x78);
    do {
      cVar3 = FUN_144729dda(param_1 + 8);
      if ((cVar3 != '\0') && (*plVar7 != 0)) {
        lVar4 = FUN_14479d2ce(param_1 + 8);
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar5;
        lVar4 = FUN_144a61814(uVar2,plVar7);
        if (lVar4 != 0) {
          FUN_1405a424c(uVar2,*plVar7);
        }
        *plVar7 = 0;
      }
      cVar3 = FUN_14144f426(param_1);
      if ((cVar3 == '\0') && (plVar7[-0xf] != 0)) {
        FUN_14144fcb6(plVar7[-0xf],&DAT_14cbd3e00,0);
      }
      plVar7 = plVar7 + 0x13;
      lVar8 = lVar8 + -0x98;
    } while (lVar8 != 0);
    uVar6 = *(undefined4 *)(param_1 + 0x238);
    lVar4 = *(longlong *)(param_1 + 0x230);
  }
  FUN_14164267b(lVar4,uVar6);
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_1461e530c(param_1 + 0x230);
    return;
  }
  return;
}



// FUNCTION 148e0aeee FUN_148e0aeee body=213 status=ok
// SIG undefined FUN_148e0aeee(void)

undefined4
FUN_148e0aeee(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined1 *)(param_1 + 0x1d1) = param_3;
  *(undefined8 *)(param_1 + 0x1d4) = *param_4;
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_4 + 1);
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_5 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_148e0af65;
  }
  param_5 = 0;
LAB_148e0af65:
  local_50 = local_38;
  local_40 = 0;
  local_48 = 0xbf800000;
  local_58 = 1;
  uVar1 = FUN_144230d0e(param_1,param_2,param_5,2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0afc4 FUN_148e0afc4 body=417 status=ok
// SIG undefined FUN_148e0afc4(void)

undefined4 FUN_148e0afc4(longlong param_1,longlong *param_2,longlong *param_3)

{
  void **ppvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d2bdd2(&local_48);
  pvVar2 = local_48;
  ppvVar1 = (void **)(param_1 + 0x90);
  if (ppvVar1 != &local_48) {
    *(int *)(param_1 + 0x98) = local_40;
    if (local_40 == 0 && *(int *)(param_1 + 0x9c) == 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_40);
      if (local_40 != 0) {
        memcpy(*ppvVar1,pvVar2,(longlong)local_40 * 2);
      }
    }
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_3[1];
  lVar5 = (longlong)local_50;
  pvVar2 = (void *)*param_3;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar5 * 2);
  }
  local_68 = (void *)0x0;
  local_60 = (int)param_2[1];
  lVar5 = (longlong)local_60;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar2,lVar5 * 2);
  }
  uVar4 = FUN_14479d2ce(param_1 + 8);
  uVar3 = FUN_1416848a2(uVar4,&local_68,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0b166 FUN_148e0b166 body=318 status=ok
// SIG undefined FUN_148e0b166(void)

undefined4 FUN_148e0b166(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void **ppvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_48);
  pvVar2 = local_48;
  ppvVar1 = (void **)(param_1 + 0x90);
  if (ppvVar1 != &local_48) {
    *(int *)(param_1 + 0x98) = local_40;
    if (local_40 == 0 && *(int *)(param_1 + 0x9c) == 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_40);
      if (local_40 != 0) {
        memcpy(*ppvVar1,pvVar2,(longlong)local_40 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_3[1];
  lVar5 = (longlong)local_50;
  pvVar2 = (void *)*param_3;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar5 * 2);
  }
  uVar4 = FUN_14479d2ce(param_1 + 8);
  uVar3 = FUN_1488de36c(uVar4,param_2,&local_58);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0b2a6 FUN_148e0b2a6 body=372 status=ok
// SIG undefined FUN_148e0b2a6(void)

ulonglong FUN_148e0b2a6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  ulonglong unaff_RBX;
  undefined7 uVar10;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar5 = param_2[3];
    uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar7 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar5) {
          if (plVar1 != (longlong *)&DAT_fffffffffffffff8 && plVar1 != (longlong *)0x0) {
            cVar4 = FUN_144729dda();
            unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
            if (cVar4 != '\0') goto LAB_148e0b31e;
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  lVar5 = FUN_14479d2ce(param_1 + 8);
  uVar10 = (undefined7)(unaff_RBX >> 8);
  unaff_RBX = CONCAT71(uVar10,1);
  if ((lVar5 == 0) || (lVar5 = FUN_144a86a6e(lVar5), lVar5 == 0)) goto LAB_148e0b31e;
  lVar5 = param_2[5];
  if (lVar5 == 0) {
    local_28 = param_2[3];
    lVar5 = FUN_14050aea0();
    param_2[5] = lVar5;
    if (lVar5 != 0) goto LAB_148e0b2fd;
    bVar9 = 0;
    uVar10 = 0;
    bVar3 = 0;
  }
  else {
LAB_148e0b2fd:
    bVar9 = 1;
    if (*param_2 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_1487c1afa(*param_2,lVar5 + 0x68,0x38d1b717);
    }
  }
  unaff_RBX = CONCAT71(uVar10,bVar9 & bVar3);
LAB_148e0b31e:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 148e0b48c FUN_148e0b48c body=284 status=ok
// SIG undefined FUN_148e0b48c(void)

void FUN_148e0b48c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0x6000;
    local_70 = 0;
    uStack_68 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_2c = DAT_14c948618;
    local_24 = DAT_14c948620;
    local_60 = 0;
    FUN_148e0bc5e(param_1);
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      puVar3 = (undefined8 *)(param_1 + 0x288);
      lVar2 = FUN_144a61814(uVar1,puVar3);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*puVar3);
      }
      *puVar3 = 0;
    }
    FUN_140898514(param_1 + 0x58,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0b5aa FUN_148e0b5aa body=217 status=ok
// SIG undefined FUN_148e0b5aa(void)

void FUN_148e0b5aa(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
  if (cVar1 != '\0') {
    lVar3 = FUN_1447210f0(param_2);
    if (lVar3 != 0) {
      if ((*(char *)((longlong)param_2 + 0x22c9) == '\0') && ((char)param_2[0x44e] == '\x01')) {
        iVar2 = FUN_14490d72a(lVar3);
        if ((iVar2 == 3) && (param_2[0x451] == 0)) {
          local_20 = param_2[0x44f];
          lVar3 = FUN_14050aea0();
          param_2[0x451] = lVar3;
        }
      }
      FUN_148e14682(param_2 + 0x45b,param_2 + 0x44e);
      if ((char)param_2[0x44e] != '\x01') {
        lVar3 = FUN_1402a1246(param_2);
        if (lVar3 != 0) {
          uVar4 = FUN_1402a1246(param_2);
          FUN_148dc24ea(uVar4,0);
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



// FUNCTION 148e0b684 FUN_148e0b684 body=134 status=ok
// SIG undefined FUN_148e0b684(void)

void FUN_148e0b684(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    local_28 = lVar1 + 0x230;
    local_20 = 0;
    FUN_1461e533c(&local_28);
    if (local_18 != 0) {
      do {
        FUN_148dc1efa();
        local_20 = local_20 + 1;
        FUN_1461e533c(&local_28);
      } while (local_18 != 0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0b70c FUN_148e0b70c body=246 status=ok
// SIG undefined FUN_148e0b70c(void)

undefined8 FUN_148e0b70c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2[2] == 0) {
    local_48 = *param_2;
    lVar2 = FUN_14050aea0();
    param_2[2] = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_148e0b7a0;
    }
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x290);
  if (lVar2 != 0) {
    uVar3 = FUN_14479d2ce(param_1 + 0x290);
    FUN_1442300bc(param_1,uVar3);
  }
  if ((char)param_4 == '\0') {
    cVar1 = FUN_144231bb4(param_1,param_3);
    if (cVar1 == '\0') goto LAB_148e0b7e4;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0xbf800000;
    local_50 = param_3;
    FUN_144231c7c(param_1,param_2,0);
  }
  else {
LAB_148e0b7e4:
    FUN_146259a36(param_1,&DAT_14c9485f0);
    FUN_144234752(param_1,param_2,param_4);
  }
  uVar3 = 1;
LAB_148e0b7a0:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0b804 FUN_148e0b804 body=215 status=ok
// SIG undefined FUN_148e0b804(void)

undefined8 FUN_148e0b804(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x230);
    lVar4 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      lVar1 = FUN_14479d2ce(lVar3 + 0x10);
      if (lVar1 == param_2) {
        if (lVar3 != 0) {
          if ((*(longlong *)(lVar3 + 0x18) == 0) || (0xfffffffd < *(int *)(lVar3 + 0x20) - 1U)) {
            *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar3 + 0x58);
            uVar5 = *(undefined4 *)(lVar3 + 0x48);
            uVar6 = *(undefined4 *)(lVar3 + 0x4c);
            uVar7 = *(undefined4 *)(lVar3 + 0x50);
            uVar8 = *(undefined4 *)(lVar3 + 0x54);
LAB_148e0b8bd:
            *param_3 = uVar5;
            param_3[1] = uVar6;
            param_3[2] = uVar7;
            param_3[3] = uVar8;
          }
          else {
            lVar4 = *(longlong *)(lVar3 + 0x28);
            if (lVar4 != 0) {
LAB_148e0b8a3:
              *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar4 + 0x78);
              uVar5 = *(undefined4 *)(lVar4 + 0x68);
              uVar6 = *(undefined4 *)(lVar4 + 0x6c);
              uVar7 = *(undefined4 *)(lVar4 + 0x70);
              uVar8 = *(undefined4 *)(lVar4 + 0x74);
              goto LAB_148e0b8bd;
            }
            local_30 = *(longlong *)(lVar3 + 0x18);
            lVar4 = FUN_14050aea0();
            *(longlong *)(lVar3 + 0x28) = lVar4;
            if (lVar4 != 0) goto LAB_148e0b8a3;
          }
          uVar2 = 1;
          goto LAB_148e0b861;
        }
        break;
      }
      lVar3 = lVar3 + 0x98;
      lVar4 = lVar4 + -0x98;
    } while (lVar4 != 0);
  }
  uVar2 = 0;
LAB_148e0b861:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148e0b8dc FUN_148e0b8dc body=167 status=ok
// SIG undefined FUN_148e0b8dc(void)

void FUN_148e0b8dc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14144fccc();
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_140636ec6(lVar2);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_148e0b92e;
  }
  lVar2 = 0;
LAB_148e0b92e:
  cVar1 = FUN_1416d511e(param_1,param_2,lVar2,0,0,0);
  if (cVar1 == '\0') {
    FUN_1416a3978(param_1,param_2,param_1 + 0xd0,0,1,0,0,1,0);
  }
  return;
}



// FUNCTION 148e0b984 FUN_148e0b984 body=177 status=ok
// SIG undefined FUN_148e0b984(void)

void FUN_148e0b984(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = FUN_14479d2ce(param_2 + 0x10);
  if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x230);
    lVar5 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      lVar3 = FUN_14479d2ce(lVar4 + 0x10);
      if (lVar3 == lVar2) {
        if (lVar4 == 0) {
          return;
        }
        *(undefined1 *)(lVar4 + 0x93) = 0;
        *(char *)(lVar4 + 0x89) = *(char *)(lVar4 + 0x89) + '\x01';
        cVar1 = FUN_144729dda(param_1 + 8);
        if (cVar1 == '\0') {
          return;
        }
        lVar2 = FUN_14479d2ce(param_1 + 8);
        *(float *)(lVar4 + 0x80) = (float)*(double *)(lVar2 + 0x6d0);
        *(float *)(lVar4 + 0x84) = (float)*(byte *)(lVar4 + 0x89);
        return;
      }
      lVar4 = lVar4 + 0x98;
      lVar5 = lVar5 + -0x98;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 148e0ba36 FUN_148e0ba36 body=186 status=ok
// SIG undefined FUN_148e0ba36(void)

byte FUN_148e0ba36(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_140caa136(param_2);
  if (plVar3 == (longlong *)0x0) {
    bVar1 = 0;
    goto LAB_148e0bad2;
  }
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  local_40 = *param_1;
  local_38 = *(undefined4 *)(param_1 + 1);
  local_30 = 0;
  uVar5 = FUN_1414bd2c4();
  iVar2 = FUN_143d1d48e(uVar4,uVar5);
  if (iVar2 == 2) {
    lVar6 = param_1[2];
    if (lVar6 == 0) {
      local_28 = *param_1;
      lVar6 = FUN_14050aea0();
      param_1[2] = lVar6;
      iVar2 = 0;
      if (lVar6 == 0) goto LAB_148e0bace;
    }
    bVar1 = FUN_143dbe0cc(lVar6,param_2);
    bVar7 = 1;
  }
  else {
LAB_148e0bace:
    bVar1 = (byte)iVar2;
    bVar7 = 0;
  }
  bVar1 = bVar1 & bVar7;
LAB_148e0bad2:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0baf2 FUN_148e0baf2 body=146 status=ok
// SIG undefined FUN_148e0baf2(void)

undefined8 FUN_148e0baf2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = 0x6000;
    local_20 = 0;
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447325ac(puVar2,&local_38,1);
    if (local_38 != 0) {
      local_20 = 0;
    }
    local_30 = local_38;
    uVar1 = FUN_148e0ba36(&local_30,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0bb86 FUN_148e0bb86 body=215 status=ok
// SIG undefined FUN_148e0bb86(void)

undefined8 * FUN_148e0bb86(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar5;
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
  param_1[2] = param_2[2];
  if ((param_1[3] != param_2[3]) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    param_1[3] = param_2[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[5] = 0;
  }
  if ((param_1[6] != param_2[6]) || (*(int *)(param_1 + 7) != *(int *)(param_2 + 7))) {
    param_1[6] = param_2[6];
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    param_1[8] = 0;
  }
  puVar6 = param_2 + 9;
  puVar7 = param_1 + 9;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 148e0bc5e FUN_148e0bc5e body=185 status=ok
// SIG undefined FUN_148e0bc5e(void)

void FUN_148e0bc5e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    local_38 = lVar1 + 0x230;
    local_30 = 0;
    FUN_1461e533c(&local_38);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        FUN_145e0ea2c(local_28 + 0x2270,param_2);
        lVar1 = FUN_1402a1246(lVar1);
        if (lVar1 != 0) {
          FUN_148dc24ea(lVar1,0);
        }
        FUN_148e0b5aa();
        local_30 = local_30 + 1;
        FUN_1461e533c(&local_38);
      } while (local_28 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e0bd18 FUN_148e0bd18 body=12 status=ok
// SIG undefined FUN_148e0bd18(void)

bool FUN_148e0bd18(longlong param_1)

{
  return *(longlong *)(param_1 + 0x288) != 0;
}



// FUNCTION 148e0bd24 FUN_148e0bd24 body=659 status=ok
// SIG undefined FUN_148e0bd24(void)

void FUN_148e0bd24(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined8 *local_128;
  undefined4 local_120;
  undefined2 local_118 [2];
  undefined4 local_114;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      FUN_146259a36(param_1,&DAT_14c9485f0);
    }
    lVar3 = FUN_14479d2ce(param_1 + 8);
    if (lVar3 != 0) {
      lVar6 = 0;
      local_108 = 0;
      local_100 = 0x6000;
      local_f8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b4 = DAT_14c948618;
      local_ac = DAT_14c948620;
      lVar4 = FUN_140cb9f34();
      local_e8 = *(undefined4 *)(lVar4 + 0x20);
      local_110 = 1;
      local_b8._0_2_ = CONCAT11(1,(undefined1)local_b8);
      if (((param_2 != 0) && (lVar6 = *(longlong *)(param_2 + 0x398), lVar6 != 0)) &&
         (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      local_f0 = lVar6;
      FUN_148e0bc5e(param_1);
      uVar2 = local_e8;
      *(undefined1 *)(param_1 + 0x88) = 1;
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar5;
      local_128 = (undefined8 *)0x0;
      local_120 = 0;
      FUN_1446efa72(&local_128,0,3,0x10);
      puVar5 = local_128;
      local_120 = 3;
      *local_128 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_128[2] = lVar4;
      *local_128 = &PTR_FUN_14b9a37f0;
      local_128[3] = 0;
      FUN_14485c47a(local_128 + 3,lVar3);
      puVar5[4] = param_1;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_128);
      local_68 = 1;
      local_138 = local_118;
      local_118[0] = 0;
      local_114 = 0xbf800000;
      FUN_1406f4044(uVar1,param_1 + 0x288,&local_a8,uVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_128);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0bfb8 FUN_148e0bfb8 body=230 status=ok
// SIG undefined FUN_148e0bfb8(void)

void FUN_148e0bfb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    local_80 = 0;
    lVar1 = 0;
    local_78 = 0;
    local_70 = 0x6000;
    local_68 = 0;
    local_58 = 0x40a00000;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_24 = DAT_14c948618;
    local_1c = DAT_14c948620;
    local_28 = 0x100;
    if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x398), lVar1 != 0)) &&
       (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    local_60 = lVar1;
    FUN_146259ac8(param_1,&DAT_14cbd3d90);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0c0a0 FUN_148e0c0a0 body=188 status=ok
// SIG undefined FUN_148e0c0a0(void)

void FUN_148e0c0a0(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x88) = 0;
  local_30 = FUN_14479d2ce(param_1 + 8);
  if (local_30 != 0) {
    *(undefined8 *)(param_1 + 0x288) = 0;
    local_30 = local_30 + 0x230;
    local_28 = 0;
    FUN_1461e533c(&local_30);
    if (local_20 != 0) {
      do {
        if (*(char *)(local_20 + 0x2270) == '\x01') {
          *(undefined1 *)(local_20 + 0x2270) = 0;
          FUN_148e0b5aa();
        }
        local_28 = local_28 + 1;
        FUN_1461e533c(&local_30);
      } while (local_20 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0c16e FUN_148e0c16e body=244 status=ok
// SIG undefined FUN_148e0c16e(void)

void FUN_148e0c16e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x1b8) != *param_2) || (*(int *)(param_1 + 0x1c0) != (int)param_2[1])
     ) {
    local_28 = 0x6000;
    local_20 = 0;
    local_30 = *(longlong *)(param_1 + 0x1b8);
    lVar1 = FUN_141446784(param_1);
    if (lVar1 != 0) {
      FUN_1457fd84a(lVar1,0);
    }
    local_30 = *param_2;
    if ((*(longlong *)(param_1 + 0x1b8) != local_30) ||
       (*(int *)(param_1 + 0x1c0) != (int)param_2[1])) {
      *(longlong *)(param_1 + 0x1b8) = local_30;
      *(int *)(param_1 + 0x1c0) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
    local_28 = 0x6000;
    local_20 = 0;
    lVar1 = FUN_141446784(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0c274 FUN_148e0c274 body=118 status=ok
// SIG undefined FUN_148e0c274(void)

ulonglong FUN_148e0c274(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e0c2ec FUN_148e0c2ec body=38 status=ok
// SIG undefined FUN_148e0c2ec(void)

undefined8 FUN_148e0c2ec(undefined8 param_1,int param_2)

{
  FUN_148e0ca54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e0c31a FUN_148e0c31a body=38 status=ok
// SIG undefined FUN_148e0c31a(void)

undefined8 FUN_148e0c31a(undefined8 param_1,int param_2)

{
  FUN_1418f1fb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e0c346 FUN_148e0c346 body=31 status=ok
// SIG undefined FUN_148e0c346(void)

undefined8 FUN_148e0c346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e0c366 FUN_148e0c366 body=56 status=ok
// SIG undefined FUN_148e0c366(void)

undefined8 * FUN_148e0c366(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9a11e0;
  FUN_148e03bb6();
  FUN_140333dee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


