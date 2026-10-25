// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b38dfc FUN_148b38dfc body=24 status=ok
// SIG undefined FUN_148b38dfc(void)

void FUN_148b38dfc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b38e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148b38e14 FUN_148b38e14 body=29 status=ok
// SIG undefined FUN_148b38e14(void)

undefined8 FUN_148b38e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b38e32 FUN_148b38e32 body=313 status=ok
// SIG undefined FUN_148b38e32(void)

longlong * FUN_148b38e32(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b38f2e:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ee10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b38f2e;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ee10;
    puVar5[3] = uVar10;
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



// FUNCTION 148b38f6c FUN_148b38f6c body=64 status=ok
// SIG undefined FUN_148b38f6c(void)

undefined8 * FUN_148b38f6c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ee10;
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



// FUNCTION 148b38fb0 FUN_148b38fb0 body=81 status=ok
// SIG undefined FUN_148b38fb0(void)

undefined8 FUN_148b38fb0(longlong param_1)

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



// FUNCTION 148b39008 FUN_148b39008 body=89 status=ok
// SIG undefined FUN_148b39008(void)

bool FUN_148b39008(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b39053;
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
LAB_148b39053:
  return lVar6 == param_2;
}



// FUNCTION 148b3907e FUN_148b3907e body=118 status=ok
// SIG undefined FUN_148b3907e(void)

void FUN_148b3907e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55ee10;
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



// FUNCTION 148b390f4 FUN_148b390f4 body=118 status=ok
// SIG undefined FUN_148b390f4(void)

void FUN_148b390f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55ee10;
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



// FUNCTION 148b3916a FUN_148b3916a body=156 status=ok
// SIG undefined FUN_148b3916a(void)

void FUN_148b3916a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ee10;
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
                    /* WARNING: Could not recover jumptable at 0x000148b391f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b39206 FUN_148b39206 body=100 status=ok
// SIG undefined FUN_148b39206(void)

void FUN_148b39206(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b39252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b3925f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b3926a FUN_148b3926a body=100 status=ok
// SIG undefined FUN_148b3926a(void)

ulonglong FUN_148b3926a(longlong param_1)

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
LAB_148b392c3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b392c3;
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



// FUNCTION 148b392ce FUN_148b392ce body=130 status=ok
// SIG undefined FUN_148b392ce(void)

void FUN_148b392ce(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b39352 FUN_148b39352 body=130 status=ok
// SIG undefined FUN_148b39352(void)

void FUN_148b39352(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b393d6 FUN_148b393d6 body=130 status=ok
// SIG undefined FUN_148b393d6(void)

void FUN_148b393d6(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b3945a FUN_148b3945a body=313 status=ok
// SIG undefined FUN_148b3945a(void)

longlong * FUN_148b3945a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b39556:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ee80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b39556;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ee80;
    puVar5[3] = uVar10;
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



// FUNCTION 148b39594 FUN_148b39594 body=64 status=ok
// SIG undefined FUN_148b39594(void)

undefined8 * FUN_148b39594(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ee80;
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



// FUNCTION 148b395d8 FUN_148b395d8 body=81 status=ok
// SIG undefined FUN_148b395d8(void)

undefined8 FUN_148b395d8(longlong param_1)

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



// FUNCTION 148b39630 FUN_148b39630 body=89 status=ok
// SIG undefined FUN_148b39630(void)

bool FUN_148b39630(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3967b;
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
LAB_148b3967b:
  return lVar6 == param_2;
}



// FUNCTION 148b396a6 FUN_148b396a6 body=118 status=ok
// SIG undefined FUN_148b396a6(void)

void FUN_148b396a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ee80;
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



// FUNCTION 148b3971c FUN_148b3971c body=118 status=ok
// SIG undefined FUN_148b3971c(void)

void FUN_148b3971c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ee80;
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



// FUNCTION 148b39792 FUN_148b39792 body=156 status=ok
// SIG undefined FUN_148b39792(void)

void FUN_148b39792(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ee80;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3981e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3982e FUN_148b3982e body=105 status=ok
// SIG undefined FUN_148b3982e(void)

undefined8 FUN_148b3982e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b39882:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148b39882;
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
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
    LOCK();
    plVar1 = plVar3 + 1;
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



// FUNCTION 148b39898 FUN_148b39898 body=162 status=ok
// SIG undefined FUN_148b39898(void)

ulonglong FUN_148b39898(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b39918:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b39918;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b3993c FUN_148b3993c body=271 status=ok
// SIG undefined FUN_148b3993c(void)

undefined8 * FUN_148b3993c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x278);
      }
      uVar3 = (**(code **)(*plVar4 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar3;
    }
  }
  local_28 = *(longlong *)(param_1 + 0x268);
  if ((*(char *)(param_1 + 0x5b8) == '\0') && (local_28 == *(longlong *)(param_1 + 0x5a0))) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x5b0);
    _Src = *(void **)(param_1 + 0x5a8);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
              (*(longlong **)(param_1 + 0x2e8),param_2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b39a4e FUN_148b39a4e body=313 status=ok
// SIG undefined FUN_148b39a4e(void)

longlong * FUN_148b39a4e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b39b4a:
    *puVar5 = &PTR_LAB_149f05210;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55eef0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b39b4a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05210;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55eef0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b39b88 FUN_148b39b88 body=64 status=ok
// SIG undefined FUN_148b39b88(void)

undefined8 * FUN_148b39b88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55eef0;
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



// FUNCTION 148b39bcc FUN_148b39bcc body=81 status=ok
// SIG undefined FUN_148b39bcc(void)

undefined8 FUN_148b39bcc(longlong param_1)

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



// FUNCTION 148b39c24 FUN_148b39c24 body=89 status=ok
// SIG undefined FUN_148b39c24(void)

bool FUN_148b39c24(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b39c6f;
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
LAB_148b39c6f:
  return lVar6 == param_2;
}



// FUNCTION 148b39c9a FUN_148b39c9a body=118 status=ok
// SIG undefined FUN_148b39c9a(void)

void FUN_148b39c9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55eef0;
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



// FUNCTION 148b39d10 FUN_148b39d10 body=118 status=ok
// SIG undefined FUN_148b39d10(void)

void FUN_148b39d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55eef0;
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



// FUNCTION 148b39d86 FUN_148b39d86 body=156 status=ok
// SIG undefined FUN_148b39d86(void)

void FUN_148b39d86(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55eef0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b39e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b39e22 FUN_148b39e22 body=114 status=ok
// SIG undefined FUN_148b39e22(void)

undefined4 FUN_148b39e22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
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
        uVar7 = (**(code **)(param_1 + 0x28))
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
        return uVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b39e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b39e94 FUN_148b39e94 body=100 status=ok
// SIG undefined FUN_148b39e94(void)

ulonglong FUN_148b39e94(longlong param_1)

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
LAB_148b39eed:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b39eed;
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



// FUNCTION 148b39ef8 FUN_148b39ef8 body=313 status=ok
// SIG undefined FUN_148b39ef8(void)

longlong * FUN_148b39ef8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b39ff4:
    *puVar5 = &PTR_LAB_149f21180;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ef60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b39ff4;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f21180;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ef60;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3a032 FUN_148b3a032 body=64 status=ok
// SIG undefined FUN_148b3a032(void)

undefined8 * FUN_148b3a032(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ef60;
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



// FUNCTION 148b3a076 FUN_148b3a076 body=81 status=ok
// SIG undefined FUN_148b3a076(void)

undefined8 FUN_148b3a076(longlong param_1)

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



// FUNCTION 148b3a0ce FUN_148b3a0ce body=89 status=ok
// SIG undefined FUN_148b3a0ce(void)

bool FUN_148b3a0ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3a119;
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
LAB_148b3a119:
  return lVar6 == param_2;
}



// FUNCTION 148b3a144 FUN_148b3a144 body=118 status=ok
// SIG undefined FUN_148b3a144(void)

void FUN_148b3a144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ef60;
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



// FUNCTION 148b3a1ba FUN_148b3a1ba body=118 status=ok
// SIG undefined FUN_148b3a1ba(void)

void FUN_148b3a1ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ef60;
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



// FUNCTION 148b3a230 FUN_148b3a230 body=156 status=ok
// SIG undefined FUN_148b3a230(void)

void FUN_148b3a230(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f21180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ef60;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3a2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3a2cc FUN_148b3a2cc body=104 status=ok
// SIG undefined FUN_148b3a2cc(void)

ulonglong FUN_148b3a2cc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b3a331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b3a334 FUN_148b3a334 body=101 status=ok
// SIG undefined FUN_148b3a334(void)

ulonglong FUN_148b3a334(longlong param_1)

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
LAB_148b3a38e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3a38e;
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



// FUNCTION 148b3a39a FUN_148b3a39a body=313 status=ok
// SIG undefined FUN_148b3a39a(void)

longlong * FUN_148b3a39a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b3a496:
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55efd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b3a496;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55efd0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3a4d4 FUN_148b3a4d4 body=64 status=ok
// SIG undefined FUN_148b3a4d4(void)

undefined8 * FUN_148b3a4d4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55efd0;
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



// FUNCTION 148b3a518 FUN_148b3a518 body=81 status=ok
// SIG undefined FUN_148b3a518(void)

undefined8 FUN_148b3a518(longlong param_1)

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



// FUNCTION 148b3a570 FUN_148b3a570 body=89 status=ok
// SIG undefined FUN_148b3a570(void)

bool FUN_148b3a570(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3a5bb;
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
LAB_148b3a5bb:
  return lVar6 == param_2;
}



// FUNCTION 148b3a5e6 FUN_148b3a5e6 body=118 status=ok
// SIG undefined FUN_148b3a5e6(void)

void FUN_148b3a5e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55efd0;
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



// FUNCTION 148b3a65c FUN_148b3a65c body=118 status=ok
// SIG undefined FUN_148b3a65c(void)

void FUN_148b3a65c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55efd0;
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



// FUNCTION 148b3a6d2 FUN_148b3a6d2 body=156 status=ok
// SIG undefined FUN_148b3a6d2(void)

void FUN_148b3a6d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55efd0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3a75e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3a76e FUN_148b3a76e body=104 status=ok
// SIG undefined FUN_148b3a76e(void)

void FUN_148b3a76e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b3a7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b3a7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b3a7d6 FUN_148b3a7d6 body=101 status=ok
// SIG undefined FUN_148b3a7d6(void)

ulonglong FUN_148b3a7d6(longlong param_1)

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
LAB_148b3a830:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3a830;
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



// FUNCTION 148b3a83c FUN_148b3a83c body=313 status=ok
// SIG undefined FUN_148b3a83c(void)

longlong * FUN_148b3a83c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b3a938:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f040;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b3a938;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f040;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3a976 FUN_148b3a976 body=64 status=ok
// SIG undefined FUN_148b3a976(void)

undefined8 * FUN_148b3a976(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f040;
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



// FUNCTION 148b3a9ba FUN_148b3a9ba body=81 status=ok
// SIG undefined FUN_148b3a9ba(void)

undefined8 FUN_148b3a9ba(longlong param_1)

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



// FUNCTION 148b3aa12 FUN_148b3aa12 body=89 status=ok
// SIG undefined FUN_148b3aa12(void)

bool FUN_148b3aa12(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3aa5d;
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
LAB_148b3aa5d:
  return lVar6 == param_2;
}



// FUNCTION 148b3aa88 FUN_148b3aa88 body=118 status=ok
// SIG undefined FUN_148b3aa88(void)

void FUN_148b3aa88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f040;
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



// FUNCTION 148b3aafe FUN_148b3aafe body=118 status=ok
// SIG undefined FUN_148b3aafe(void)

void FUN_148b3aafe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f040;
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



// FUNCTION 148b3ab74 FUN_148b3ab74 body=156 status=ok
// SIG undefined FUN_148b3ab74(void)

void FUN_148b3ab74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f040;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3ac00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3ac10 FUN_148b3ac10 body=104 status=ok
// SIG undefined FUN_148b3ac10(void)

void FUN_148b3ac10(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b3ac5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b3ac6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b3ac78 FUN_148b3ac78 body=101 status=ok
// SIG undefined FUN_148b3ac78(void)

ulonglong FUN_148b3ac78(longlong param_1)

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
LAB_148b3acd2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3acd2;
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



// FUNCTION 148b3acde FUN_148b3acde body=324 status=ok
// SIG undefined FUN_148b3acde(void)

longlong * FUN_148b3acde(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x5e8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55f0b0;
  plVar4 = plVar3 + 2;
  FUN_148b3ae24(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b3e756(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b3adb5;
    param_1[1] = 0;
LAB_148b3ad7f:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b3adb5;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b3adb5;
      goto LAB_148b3ad7f;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b3adb5;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b3adb5:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x5d8;
  FUN_140a52e78(*param_1,"SSpinBox<uint64>",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SNumericPropertyValue.cpp"
                ,0x35);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3ae24 FUN_148b3ae24 body=464 status=ok
// SIG undefined FUN_148b3ae24(void)

undefined8 * FUN_148b3ae24(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b55f0d0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35d) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x375) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38d) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a5) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c1) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined2 *)((longlong)param_1 + 0x5bc) = 1;
  *(undefined1 *)(param_1 + 0xba) = 0;
  return param_1;
}



// FUNCTION 148b3aff4 FUN_148b3aff4 body=9 status=ok
// SIG undefined FUN_148b3aff4(void)

void FUN_148b3aff4(longlong param_1)

{
  FUN_148b3dcd0(param_1 + 0x10);
  return;
}



// FUNCTION 148b3affe FUN_148b3affe body=29 status=ok
// SIG undefined FUN_148b3affe(void)

undefined8 FUN_148b3affe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b3b01c FUN_148b3b01c body=38 status=ok
// SIG undefined FUN_148b3b01c(void)

undefined8 FUN_148b3b01c(undefined8 param_1,int param_2)

{
  FUN_148b3dcd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b3b042 FUN_148b3b042 body=139 status=ok
// SIG undefined FUN_148b3b042(void)

void FUN_148b3b042(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 0x5d0) == '\x01') {
    auVar2._0_8_ = *(double *)(param_1 + 0x5c0) + 0.5;
    auVar2._8_8_ = 0;
    auVar2 = roundpd(auVar2,auVar2,1);
    dVar1 = auVar2._0_8_;
    if (9007199254740992.0 <= dVar1) {
      dVar1 = 9007199254740992.0;
    }
    if (dVar1 <= -9007199254740992.0) {
      dVar1 = -9007199254740992.0;
    }
    FUN_143fab63c(param_1,(longlong)(dVar1 - 9.223372036854776e+18) & (longlong)dVar1 >> 0x3f |
                          (longlong)dVar1,*(double *)(param_1 + 0x5c0),
                  *(undefined4 *)(param_1 + 0x5c8),1);
    if (*(char *)(param_1 + 0x5d0) == '\x01') {
      *(undefined1 *)(param_1 + 0x5d0) = 0;
    }
  }
  return;
}



// FUNCTION 148b3b0ce FUN_148b3b0ce body=442 status=ok
// SIG undefined FUN_148b3b0ce(void)

undefined1 * FUN_148b3b0ce(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(param_1 + 0x5b9) == '\0') && ((byte)(*param_4 - 1U) < 2)) {
    local_f8 = DAT_14c96b1e1;
    local_f7 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))
              (*(longlong **)(param_1 + 0x2c8),&local_f8);
    local_110 = DAT_14c96b238;
    local_10f = 1;
    local_108 = 0;
    uStack_100 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
    local_f8 = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    cVar3 = *param_4;
    local_120 = *(undefined8 *)(param_1 + 0x2d8);
    plVar4 = *(longlong **)(param_1 + 0x2e0);
    if (plVar4 == (longlong *)0x0) {
      local_118 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_118 = plVar4;
    }
    uVar5 = FUN_140592b68(&local_f8,&local_120,cVar3,0);
    FUN_1403d4c6e(param_2,uVar5);
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
    FUN_14493db24(&local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3b28a FUN_148b3b28a body=1430 status=ok
// SIG undefined FUN_148b3b28a(void)

undefined1 * FUN_148b3b28a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar3 == DAT_14c964dd0) && (cVar5 = FUN_140591fd6(param_1), cVar5 != '\0')) {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
    uVar6 = *(undefined8 *)(param_1 + 0x598);
    auVar13._8_4_ = (int)((ulonglong)uVar6 >> 0x20);
    auVar13._0_8_ = uVar6;
    auVar13._12_4_ = 0x45300000;
    *(double *)(param_1 + 0x590) =
         ((double)CONCAT44(0x43300000,(int)uVar6) - 4503599627370496.0) +
         (auVar13._8_8_ - 1.9342813113834067e+25);
    FUN_148b3dfa0(param_1);
    local_108 = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_d0 = 0;
    uStack_c8 = 0;
    local_54 = 1;
    uVar6 = FUN_146948cd0(&local_108,param_1 + 0x584);
    FUN_1403d4c6e(param_2,uVar6);
LAB_148b3b481:
    FUN_14493db24(&local_108);
    goto LAB_148b3b5ed;
  }
  if ((lVar3 == DAT_14c964e78) || (lVar3 == DAT_14c964e90)) {
    if ((*(int *)(param_1 + 0x280) != 0) &&
       ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
        (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar5 != '\0')))) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x278);
      }
      uVar6 = (**(code **)(*plVar7 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar6;
    }
    lVar3 = *(longlong *)(param_1 + 0x268);
    if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x350);
      }
      uVar6 = (**(code **)(*plVar7 + 0x58))();
      *(undefined8 *)(param_1 + 0x340) = uVar6;
    }
    auVar11._8_4_ = (int)((ulonglong)lVar3 >> 0x20);
    auVar11._0_8_ = lVar3;
    auVar11._12_4_ = 0x45300000;
    dVar9 = ((double)CONCAT44(0x43300000,(int)lVar3) - 4503599627370496.0) +
            (auVar11._8_8_ - 1.9342813113834067e+25);
    lVar8 = *(longlong *)(param_1 + 0x340);
    auVar14._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
    auVar14._0_8_ = lVar8;
    auVar14._12_4_ = 0x45300000;
    *(double *)(param_1 + 0x590) = dVar9;
    dVar9 = ((double)CONCAT44(0x43300000,(int)lVar8) - 4503599627370496.0) +
            (auVar14._8_8_ - 1.9342813113834067e+25) + dVar9;
    lVar8 = lVar8 + lVar3;
LAB_148b3b565:
    local_138 = 1;
    FUN_143fab63c(param_1,lVar8,dVar9,2);
    local_108 = DAT_14c96b238;
    local_107 = 1;
    local_100 = 0;
    uStack_f8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
    local_120 = DAT_14c96b1e1;
    local_11f = 1;
    local_118 = 0;
    uStack_110 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    if ((lVar3 == DAT_14c964ea8) || (lVar3 == DAT_14c964e60)) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar5 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x278);
        }
        uVar6 = (**(code **)(*plVar7 + 0x58))();
        *(undefined8 *)(param_1 + 0x268) = uVar6;
      }
      lVar8 = *(longlong *)(param_1 + 0x268);
      if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x358) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x350);
        }
        uVar6 = (**(code **)(*plVar7 + 0x58))();
        *(undefined8 *)(param_1 + 0x340) = uVar6;
      }
      auVar12._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
      auVar12._0_8_ = lVar8;
      auVar12._12_4_ = 0x45300000;
      dVar9 = ((double)CONCAT44(0x43300000,(int)lVar8) - 4503599627370496.0) +
              (auVar12._8_8_ - 1.9342813113834067e+25);
      lVar3 = *(longlong *)(param_1 + 0x340);
      auVar15._8_4_ = (int)((ulonglong)lVar3 >> 0x20);
      auVar15._0_8_ = lVar3;
      auVar15._12_4_ = 0x45300000;
      *(double *)(param_1 + 0x590) = dVar9;
      dVar9 = ((double)CONCAT44(0x43300000,(int)lVar3) - 4503599627370496.0) +
              (auVar15._8_8_ - 1.9342813113834067e+25) + dVar9;
      lVar8 = lVar8 - lVar3;
      goto LAB_148b3b565;
    }
    if (lVar3 == DAT_14c964d88) {
      if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x278);
        }
        uVar6 = (**(code **)(*plVar7 + 0x58))();
        *(undefined8 *)(param_1 + 0x268) = uVar6;
      }
      auVar10._0_8_ = (double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x268));
      auVar10._8_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x268) >> 0x20);
      auVar10._12_4_ = 0x45300000;
      *(double *)(param_1 + 0x590) =
           (auVar10._0_8_ - 4503599627370496.0) + (auVar10._8_8_ - 1.9342813113834067e+25);
      local_108 = DAT_14c96b1e1;
      local_107 = 1;
      local_100 = 0;
      uStack_f8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))
                (*(longlong **)(param_1 + 0x2c8),&local_108);
      local_120 = DAT_14c96b238;
      local_11f = 1;
      local_118 = 0;
      uStack_110 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
      local_108 = 1;
      local_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      memset(local_e0,0,0x88);
      local_58 = 0x20702;
      local_54 = 0;
      local_130 = *(undefined8 *)(param_1 + 0x2d8);
      plVar7 = *(longlong **)(param_1 + 0x2e0);
      if (plVar7 == (longlong *)0x0) {
        local_128 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_128 = plVar7;
      }
      uVar6 = FUN_140592b68(&local_108,&local_130,1,0);
      FUN_1403d4c6e(param_2,uVar6);
      if (plVar7 != (longlong *)0x0) {
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
      goto LAB_148b3b481;
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b3b5ed:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b3b822 FUN_148b3b822 body=1064 status=ok
// SIG undefined FUN_148b3b822(void)

undefined1 * FUN_148b3b822(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  void *pvVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [136];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_4 + 0x40);
  plVar14 = *(longlong **)(param_4 + 0x50);
  if (plVar14 == (longlong *)0x0) {
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x580);
      goto joined_r0x000148b3b920;
    }
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x580);
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
joined_r0x000148b3b920:
      if (iVar11 == -1) {
        *(undefined4 *)(param_1 + 0x338) = 0;
        if (((*(int *)(param_1 + 0x280) != 0) &&
            (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x280) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x278);
          }
          uVar12 = (**(code **)(*plVar14 + 0x58))();
          *(undefined8 *)(param_1 + 0x268) = uVar12;
        }
        uVar12 = *(undefined8 *)(param_1 + 0x268);
        *(undefined8 *)(param_1 + 0x598) = uVar12;
        auVar17._8_4_ = (int)((ulonglong)uVar12 >> 0x20);
        auVar17._0_8_ = uVar12;
        auVar17._12_4_ = 0x45300000;
        *(double *)(param_1 + 0x590) =
             ((double)CONCAT44(0x43300000,(int)uVar12) - 4503599627370496.0) +
             (auVar17._8_8_ - 1.9342813113834067e+25);
        *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_4 + 0x58);
        *(ulonglong *)(param_1 + 0x584) =
             CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1
                      ,(int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >>
                       1);
        local_118[0] = 1;
        local_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        pvVar13 = memset(local_f0,0,0x88);
        local_68 = 0x20702;
        local_64 = 0;
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b3ba9d:
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          local_14c = (undefined4)CONCAT71((int7)((ulonglong)pvVar13 >> 8),1);
        }
        else {
          pvVar13 = (void *)(ulonglong)*(uint *)(plVar14 + 1);
          do {
            uVar10 = (uint)pvVar13;
            if (uVar10 == 0) goto LAB_148b3ba9d;
            LOCK();
            uVar5 = *(uint *)(plVar14 + 1);
            if (uVar10 == uVar5) {
              *(uint *)(plVar14 + 1) = uVar10 + 1;
            }
            else {
              pvVar13 = (void *)(ulonglong)uVar5;
            }
            UNLOCK();
          } while (uVar10 != uVar5);
          uVar12 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
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
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          local_14c = 0;
          local_128 = uVar12;
          plStack_120 = plVar14;
        }
        plVar1 = plStack_120;
        uVar12 = FUN_140592a6e(local_118,&local_128);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b3bb14:
          local_138 = 0;
          plStack_130 = (longlong *)0x0;
          bVar15 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_148b3bb14;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar15 = iVar11 == iVar8;
            if (bVar15) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar15);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar14 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar15 = false;
          local_138 = uVar7;
          plStack_130 = plVar14;
        }
        plVar3 = plStack_130;
        uVar12 = FUN_140592ae6(uVar12,&local_138);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b3bb89:
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          bVar16 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_148b3bb89;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar16 = iVar11 == iVar8;
            if (bVar16) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar16);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar16 = false;
          local_148 = uVar7;
          plStack_140 = plVar14;
        }
        plVar14 = plStack_140;
        uVar12 = FUN_140592b68(uVar12,&local_148,0,0);
        FUN_1403d4c6e(param_2,uVar12);
        if (!bVar16) {
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (!bVar15) {
          LOCK();
          plVar14 = plVar3 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        if ((char)local_14c == '\0') {
          LOCK();
          plVar14 = plVar1 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        FUN_14493db24(local_118);
        if (*(char *)(param_1 + 0x5bb) == '\x01') {
          param_2[0xb4] = param_2[0xb4] | 0x40;
        }
        goto LAB_148b3b8d7;
      }
    }
    else {
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
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b3b8d7:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3bc4c FUN_148b3bc4c body=999 status=ok
// SIG undefined FUN_148b3bc4c(void)

undefined1 * FUN_148b3bc4c(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if ((lVar7 == DAT_14c966e98) && (*(int *)(param_1 + 0x580) == *(int *)(param_4 + 0x58))) {
LAB_148b3bcd3:
      cVar6 = FUN_140591fd6(param_1);
      if (cVar6 == '\0') {
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
        *param_2 = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
      }
      else {
        if (*(char *)(param_1 + 0x5b9) == '\x01') {
          if (((*(int *)(param_1 + 0x358) == 0) ||
              (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar6 == '\0')) {
            lVar7 = *(longlong *)(param_1 + 0x340);
          }
          else {
            if (*(int *)(param_1 + 0x358) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(param_1 + 0x350);
            }
            lVar7 = (**(code **)(*plVar8 + 0x58))();
            *(longlong *)(param_1 + 0x340) = lVar7;
          }
          if ((lVar7 != 0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
            auVar13._8_4_ = (int)((ulonglong)lVar7 >> 0x20);
            auVar13._0_8_ = lVar7;
            auVar13._12_4_ = 0x45300000;
            dVar10 = ((double)CONCAT44(0x43300000,(int)lVar7) - 4503599627370496.0) +
                     (auVar13._8_8_ - 1.9342813113834067e+25);
            auVar12._0_8_ = (dVar10 * 0.5 + *(double *)(param_1 + 0x590)) / dVar10;
            auVar12._8_8_ = 0;
            auVar13 = roundpd(auVar12,auVar12,1);
            *(double *)(param_1 + 0x590) = auVar13._0_8_ * dVar10;
          }
          auVar11._0_8_ = *(double *)(param_1 + 0x590) + 0.5;
          auVar11._8_8_ = 0;
          roundpd(auVar11,auVar11,1);
          FUN_148b3dfa0(param_1);
        }
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
        local_108 = 1;
        local_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        memset(local_e0,0,0x88);
        local_58 = 0x20702;
        local_d0 = 0;
        uStack_c8 = 0;
        local_54 = 1;
        FUN_1403d4c6e(param_2,&local_108);
        FUN_14493db24(&local_108);
        if (*(char *)(param_4 + 100) == '\0') {
          FUN_146948cd0(param_2,param_1 + 0x584);
        }
        fVar3 = *(float *)(param_1 + 0x338);
        fVar9 = (float)FUN_1469aaa10(DAT_14c98e618);
        if (fVar3 < fVar9) {
          local_108 = DAT_14c96b1e1;
          local_107 = 1;
          local_100 = 0;
          uStack_f8 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
          local_120 = DAT_14c96b238;
          local_11f = 1;
          local_118 = 0;
          uStack_110 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
          local_130 = *(undefined8 *)(param_1 + 0x2d8);
          plVar8 = *(longlong **)(param_1 + 0x2e0);
          if (plVar8 == (longlong *)0x0) {
            local_128 = (longlong *)0x0;
            FUN_140592b68(param_2,&local_130,2,0);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_128 = plVar8;
            FUN_140592b68(param_2,&local_130,2,0);
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
          }
        }
      }
      goto LAB_148b3bea0;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (lVar7 == DAT_14c966e98) {
      iVar4 = *(int *)(param_1 + 0x580);
      iVar5 = *(int *)(param_4 + 0x58);
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
      if (iVar4 == iVar5) goto LAB_148b3bcd3;
    }
    else {
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
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b3bea0:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3c034 FUN_148b3c034 body=3954 status=ok
// SIG undefined FUN_148b3c034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_148b3c034(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 uVar15;
  longlong lVar16;
  float *pfVar17;
  bool bVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_122;
  undefined1 local_121;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar6 = FUN_148b3e702();
  uVar7 = 0;
  if ((cVar6 == '\0') || (*(int *)(param_1 + 0x580) != *(int *)(param_4 + 0x58)))
  goto LAB_148b3c1e7;
  cVar6 = FUN_140591fd6();
  if (cVar6 == '\0') {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
    uVar7 = 0;
    goto LAB_148b3c1e7;
  }
  if (*(char *)(param_1 + 0x5b9) == '\0') {
    fVar28 = ABS(*(float *)(param_4 + 0x30)) + *(float *)(param_1 + 0x338);
    *(float *)(param_1 + 0x338) = fVar28;
    fVar19 = (float)FUN_1469aaa10(DAT_14c98e618);
    if (fVar19 < fVar28) {
      local_108 = DAT_14c96b238;
      local_107 = 1;
      local_100 = 0;
      uStack_f8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
      local_120 = DAT_14c96b1e1;
      local_11f = 1;
      local_118 = 0;
      uStack_110 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
      *(undefined1 *)(param_1 + 0x5b9) = 1;
      if ((*(int *)(param_1 + 0x2b0) != 0) && (*(longlong **)(param_1 + 0x2a8) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x60))();
      }
    }
    *(ulonglong *)(param_1 + 0x584) =
         CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1,
                  (int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >> 1);
  }
  else {
    fVar19 = *param_3 * param_3[2];
    if (fVar19 <= 100.0) {
      fVar19 = 100.0;
    }
    if ((*(byte *)(param_4 + 8) & 0x30) != 0) {
      fVar28 = *(float *)(param_4 + 0x30);
      if (((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))(), cVar6 != '\0')) {
        if (*(int *)(param_1 + 0x500) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(param_1 + 0x4f8);
        }
        uVar7 = (**(code **)(*plVar14 + 0x58))();
        *(undefined1 *)(param_1 + 0x4f0) = uVar7;
      }
      fVar28 = fVar28 / fVar19;
      if (*(char *)(param_1 + 0x4f0) == '\x01') {
        dVar3 = *(double *)(param_1 + 0x590);
        uVar13 = (ulonglong)dVar3;
        FUN_148b3e488(param_1 + 0x458);
        uVar12 = 0xffffffffffffffff;
        if (*(char *)(param_1 + 0x460) != '\0') {
          uVar12 = *(ulonglong *)(param_1 + 0x458);
        }
        if (uVar12 == ((longlong)(dVar3 - 9.223372036854776e+18) & (longlong)uVar13 >> 0x3f | uVar13
                      )) {
          FUN_148b3e0a6(param_1,fVar28,0);
          goto LAB_148b3c2b8;
        }
      }
      if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))(), cVar6 != '\0')) {
        if (*(int *)(param_1 + 0x518) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(param_1 + 0x510);
        }
        uVar7 = (**(code **)(*plVar14 + 0x58))();
        *(undefined1 *)(param_1 + 0x508) = uVar7;
      }
      if (*(char *)(param_1 + 0x508) == '\x01') {
        dVar3 = *(double *)(param_1 + 0x590);
        uVar12 = (ulonglong)dVar3;
        FUN_148b3e488(param_1 + 0x430);
        if (*(char *)(param_1 + 0x438) == '\0') {
          uVar13 = 0;
        }
        else {
          uVar13 = *(ulonglong *)(param_1 + 0x430);
        }
        if (uVar13 == ((longlong)(dVar3 - 9.223372036854776e+18) & (longlong)uVar12 >> 0x3f | uVar12
                      )) {
          FUN_148b3e298(param_1,fVar28,0);
        }
      }
    }
LAB_148b3c2b8:
    lVar1 = param_1 + 0x458;
    FUN_148b3e488(lVar1);
    lVar16 = -1;
    if (*(char *)(param_1 + 0x460) != '\0') {
      lVar16 = *(longlong *)(param_1 + 0x458);
    }
    lVar2 = param_1 + 0x430;
    FUN_148b3e488(lVar2);
    if (*(char *)(param_1 + 0x438) == '\0') {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x430);
    }
    dVar3 = *(double *)(&DAT_149f20770 + (ulonglong)((ulonglong)(lVar16 - lVar10) < 0xb) * 8);
    if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
      if ((*(ushort *)(param_4 + 8) & 3) != 0) {
        pfVar17 = (float *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x370) != 0) {
          plVar14 = (longlong *)(param_1 + 0x368);
          if (((longlong *)*plVar14 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*(longlong *)*plVar14 + 0x30))(), cVar6 != '\0')) {
            iVar8 = *(int *)(param_1 + 0x370);
            goto joined_r0x000148b3c4e7;
          }
        }
        goto LAB_148b3c3b3;
      }
      uVar15 = 0;
      bVar5 = true;
    }
    else {
      pfVar17 = (float *)(param_1 + 0x378);
      if (*(int *)(param_1 + 0x388) != 0) {
        plVar14 = (longlong *)(param_1 + 0x380);
        if (((longlong *)*plVar14 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*(longlong *)*plVar14 + 0x30))(), cVar6 != '\0')) {
          iVar8 = *(int *)(param_1 + 0x388);
joined_r0x000148b3c4e7:
          if (iVar8 == 0) {
                    /* WARNING: Read-only address (ram,0x0001499dd810) is written */
            plVar14 = (longlong *)0x0;
          }
          else {
                    /* WARNING: Read-only address (ram,0x0001499dd810) is written */
            plVar14 = (longlong *)*plVar14;
          }
          fVar28 = (float)(**(code **)(*plVar14 + 0x58))();
          *pfVar17 = fVar28;
        }
      }
LAB_148b3c3b3:
      dVar3 = dVar3 * (double)*pfVar17;
      uVar15 = 4;
      bVar5 = false;
    }
    if (*(char *)(param_1 + 0x2f8) == '\0') {
      if (*(char *)(param_1 + 0x3c8) == '\x01') {
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar6 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar11 = (**(code **)(*plVar14 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar11;
        }
        uVar12 = *(ulonglong *)(param_1 + 0x3c0);
        FUN_148b3e488(lVar2);
        if (*(char *)(param_1 + 0x438) == '\0') {
          uVar13 = 0;
        }
        else {
          uVar13 = *(ulonglong *)(param_1 + 0x430);
        }
        bVar18 = false;
        if (uVar13 < uVar12) {
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar6 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar11 = (**(code **)(*plVar14 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar11;
          }
          uVar12 = *(ulonglong *)(param_1 + 0x3c0);
          FUN_148b3e488(lVar1);
          uVar13 = 0xffffffffffffffff;
          if (*(char *)(param_1 + 0x460) != '\0') {
            uVar13 = *(ulonglong *)(param_1 + 0x458);
          }
          bVar18 = uVar12 < uVar13;
        }
      }
      else {
        bVar18 = false;
      }
      if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar6 != '\0')) {
        if (*(int *)(param_1 + 0x3b8) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(param_1 + 0x3b0);
        }
        uVar9 = (**(code **)(*plVar14 + 0x58))();
        *(undefined4 *)(param_1 + 0x3a8) = uVar9;
      }
      fVar28 = *(float *)(param_1 + 0x3a8);
      FUN_148b3e488(lVar1);
      dVar27 = (double)DAT_1499dd810;
      uVar9 = (undefined4)DAT_1499dd810;
      uVar30 = DAT_1499dd810._4_4_;
      dVar21 = DAT_1499dd810._8_8_;
      uVar20 = DAT_1499dd810._8_4_;
      uVar31 = DAT_1499dd810._12_4_;
      if (*(char *)(param_1 + 0x460) == '\0') {
        dVar4 = 9.223372036854776e+18;
      }
      else {
        dVar4 = (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x458)) - dVar27) +
                ((double)CONCAT44(0x45300000,
                                  (int)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20)) -
                dVar21)) * 0.5;
      }
      FUN_148b3e488(lVar2);
      if (*(char *)(param_1 + 0x438) == '\0') {
        dVar27 = 0.0;
      }
      else {
        dVar27 = (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x430)) - dVar27) +
                 ((double)CONCAT44(0x45300000,
                                   (int)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20)) -
                 dVar21)) * 0.5;
      }
      dVar27 = (*(double *)(param_1 + 0x590) * 0.5 - dVar27) / (dVar4 - dVar27);
      if (1.0 <= dVar27) {
        dVar27 = 1.0;
      }
      if (dVar27 <= 0.0) {
        dVar27 = 0.0;
      }
      fVar29 = (float)dVar27;
      if (1e-08 < ABS(fVar28 + -1.0)) {
        if (bVar18) {
          FUN_148b3e488(lVar1);
          local_121 = *(undefined1 *)(param_1 + 0x460);
          FUN_148b3e488(lVar2);
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (local_122 = *(undefined1 *)(param_1 + 0x438),
             cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar6 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar11 = (**(code **)(*plVar14 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar11;
          }
          fVar29 = (float)FUN_146a86e44();
          uVar9 = 0;
          uVar30 = 0x43300000;
          uVar20 = 0;
          uVar31 = 0x45300000;
        }
        else {
          fVar29 = powf(1.0 - fVar29,fVar28);
          fVar29 = 1.0 - fVar29;
        }
      }
      fVar29 = (float)(dVar3 * (double)*(float *)(param_4 + 0x30)) + fVar29 * fVar19;
      if (fVar19 <= fVar29) {
        fVar29 = fVar19;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar29 = fVar29 / fVar19;
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1e-08 < ABS(fVar28 + -1.0)) {
        if (bVar18) {
          FUN_148b3e488(lVar1);
          FUN_148b3e488(lVar2);
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar6 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar11 = (**(code **)(*plVar14 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar11;
          }
          fVar29 = (float)FUN_146a86e44();
        }
        else {
          fVar29 = powf(1.0 - fVar29,1.0 / fVar28);
          fVar29 = 1.0 - fVar29;
        }
      }
      FUN_148b3e488(lVar1);
      if (*(char *)(param_1 + 0x460) == '\0') {
        dVar3 = 1.8446744073709552e+19;
      }
      else {
        dVar3 = ((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x458)) -
                (double)CONCAT44(uVar30,uVar9)) +
                ((double)CONCAT44(0x45300000,
                                  (int)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20)) -
                (double)CONCAT44(uVar31,uVar20));
      }
      FUN_148b3e488(lVar2);
      if (*(char *)(param_1 + 0x438) == '\0') {
        dVar27 = 0.0;
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 0x430);
        auVar24._8_4_ = (int)((ulonglong)uVar11 >> 0x20);
        auVar24._0_8_ = uVar11;
        auVar24._12_4_ = 0x45300000;
        dVar27 = ((double)CONCAT44(0x43300000,(int)uVar11) - (double)CONCAT44(uVar30,uVar9)) +
                 (auVar24._8_8_ - (double)CONCAT44(uVar31,uVar20));
      }
      dVar3 = dVar3 * (double)fVar29 + (double)(1.0 - fVar29) * dVar27;
    }
    else {
      dVar27 = (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x30)];
      if (*(char *)(param_1 + 0x394) == '\x01') {
        if (((*(int *)(param_1 + 0x3a0) == 0) ||
            (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar6 == '\0')) {
          iVar8 = *(int *)(param_1 + 0x390);
        }
        else {
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x398);
          }
          iVar8 = (**(code **)(*plVar14 + 0x58))();
          *(int *)(param_1 + 0x390) = iVar8;
        }
        if ((iVar8 == 0) || (*(char *)(param_1 + 0x348) != '\x01')) goto LAB_148b3c629;
        if ((*(int *)(param_1 + 0x358) == 0) ||
           ((*(longlong **)(param_1 + 0x350) == (longlong *)0x0 ||
            (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar6 == '\0')))) {
          lVar16 = *(longlong *)(param_1 + 0x340);
        }
        else {
          if (*(int *)(param_1 + 0x358) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x350);
          }
          lVar16 = (**(code **)(*plVar14 + 0x58))();
          *(longlong *)(param_1 + 0x340) = lVar16;
        }
        if (lVar16 == 0) goto LAB_148b3c629;
        fVar19 = *(float *)(param_4 + 0x30);
        if (((*(int *)(param_1 + 0x3a0) != 0) &&
            (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar6 != '\0')) {
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x398);
          }
          uVar9 = (**(code **)(*plVar14 + 0x58))();
          *(undefined4 *)(param_1 + 0x390) = uVar9;
        }
        fVar19 = fVar19 / (float)*(int *)(param_1 + 0x390);
        uVar9 = (undefined4)*(undefined8 *)(param_1 + 0x590);
        uVar30 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x590) >> 0x20);
        if (((*(int *)(param_1 + 0x3b8) != 0) &&
            (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar6 != '\0')) {
          if (*(int *)(param_1 + 0x3b8) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x3b0);
          }
          uVar20 = (**(code **)(*plVar14 + 0x58))();
          *(undefined4 *)(param_1 + 0x3a8) = uVar20;
        }
        fVar28 = *(float *)(param_1 + 0x3a8);
        if (((*(int *)(param_1 + 0x358) != 0) &&
            (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar6 != '\0')) {
          if (*(int *)(param_1 + 0x358) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x350);
          }
          uVar11 = (**(code **)(*plVar14 + 0x58))();
          *(undefined8 *)(param_1 + 0x340) = uVar11;
        }
        auVar22._0_8_ = (double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x340));
        auVar22._8_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x340) >> 0x20);
        auVar22._12_4_ = 0x45300000;
        dVar21 = (auVar22._0_8_ - 4503599627370496.0) + (auVar22._8_8_ - 1.9342813113834067e+25);
      }
      else {
LAB_148b3c629:
        fVar19 = *(float *)(param_4 + 0x30) / fVar19;
        dVar21 = *(double *)(param_1 + 0x590);
        uVar9 = SUB84(dVar21,0);
        uVar30 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar21 = ABS(dVar21);
        if (1.8446744073709552e+19 <= dVar21) {
          dVar21 = 1.8446744073709552e+19;
        }
        if (dVar21 <= 1.0) {
          dVar21 = 1.0;
        }
        if (((*(int *)(param_1 + 0x3b8) != 0) &&
            (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar6 != '\0')) {
          if (*(int *)(param_1 + 0x3b8) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x3b0);
          }
          uVar20 = (**(code **)(*plVar14 + 0x58))();
          *(undefined4 *)(param_1 + 0x3a8) = uVar20;
        }
        fVar28 = *(float *)(param_1 + 0x3a8);
      }
      dVar21 = pow(dVar21,(double)fVar28);
      dVar3 = dVar27 * (double)ABS(fVar19) * dVar21 * dVar3 + (double)CONCAT44(uVar30,uVar9);
    }
    if (DAT_14c75ef58 == '\x01') {
      if (bVar5) {
        FUN_148b3e488(lVar1);
        if (*(char *)(param_1 + 0x460) == '\0') {
          dVar27 = 1.8446744073709552e+19;
        }
        else {
          dVar27 = ((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x458)) -
                   4503599627370496.0) +
                   ((double)CONCAT44(0x45300000,
                                     (int)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20)) -
                   1.9342813113834067e+25);
        }
        FUN_148b3e488(lVar2);
        if (*(char *)(param_1 + 0x438) == '\0') {
          dVar21 = 0.0;
        }
        else {
          uVar11 = *(undefined8 *)(param_1 + 0x430);
          auVar25._8_4_ = (int)((ulonglong)uVar11 >> 0x20);
          auVar25._0_8_ = uVar11;
          auVar25._12_4_ = 0x45300000;
          dVar21 = ((double)CONCAT44(0x43300000,(int)uVar11) - 4503599627370496.0) +
                   (auVar25._8_8_ - 1.9342813113834067e+25);
        }
        if (dVar27 <= dVar3) {
          dVar3 = dVar27;
        }
        if (dVar3 <= dVar21) {
          dVar3 = dVar21;
        }
      }
      FUN_148b3e488(param_1 + 0x408);
      if (*(char *)(param_1 + 0x410) == '\0') {
        dVar27 = 1.8446744073709552e+19;
      }
      else {
        dVar27 = ((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x408)) -
                 4503599627370496.0) +
                 ((double)CONCAT44(0x45300000,
                                   (int)((ulonglong)*(undefined8 *)(param_1 + 0x408) >> 0x20)) -
                 1.9342813113834067e+25);
      }
      FUN_148b3e488(param_1 + 0x3e0);
      if (*(char *)(param_1 + 1000) == '\0') {
        dVar21 = 0.0;
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 0x3e0);
        auVar26._8_4_ = (int)((ulonglong)uVar11 >> 0x20);
        auVar26._0_8_ = uVar11;
        auVar26._12_4_ = 0x45300000;
        dVar21 = ((double)CONCAT44(0x43300000,(int)uVar11) - 4503599627370496.0) +
                 (auVar26._8_8_ - 1.9342813113834067e+25);
      }
      if (dVar27 <= dVar3) {
        dVar3 = dVar27;
      }
      if (dVar3 <= dVar21) {
        dVar3 = dVar21;
      }
      *(double *)(param_1 + 0x590) = dVar3;
      *(double *)(param_1 + 0x5c0) = dVar3;
      *(undefined4 *)(param_1 + 0x5c8) = uVar15;
      *(undefined1 *)(param_1 + 0x5d0) = 1;
    }
    else {
      auVar23._0_8_ = dVar3 + 0.5;
      auVar23._8_8_ = 0;
      auVar24 = roundpd(auVar23,auVar23,1);
      dVar27 = auVar24._0_8_;
      if (9007199254740992.0 <= dVar27) {
        dVar27 = 9007199254740992.0;
      }
      if (dVar27 <= -9007199254740992.0) {
        dVar27 = -9007199254740992.0;
      }
      local_138 = 1;
      FUN_143fab63c(param_1,(longlong)(dVar27 - 9.223372036854776e+18) & (longlong)dVar27 >> 0x3f |
                            (longlong)dVar27,dVar3,uVar15);
    }
  }
  uVar7 = 1;
LAB_148b3c1e7:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b3cfa8 FUN_148b3cfa8 body=968 status=ok
// SIG undefined FUN_148b3cfa8(void)

undefined1 *
FUN_148b3cfa8(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  float *pfVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  ulonglong local_b0;
  longlong local_a8 [2];
  longlong *local_98 [2];
  longlong *local_88 [2];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(char *)((longlong)param_1 + 0x5bc) != '\x01') || ((int)param_1[0xb0] != -1)) ||
     (cVar5 = (**(code **)(*param_1 + 0x198))(param_1), cVar5 == '\0')) {
    uVar4 = 0;
    goto LAB_148b3cfed;
  }
  dVar3 = 1.0;
  if ((char)param_1[0xa6] == '\x01') {
    plVar6 = param_1 + 0xa4;
    FUN_148b3e488(plVar6);
    dVar3 = 1.0;
    if ((char)param_1[0xa5] == '\x01') {
      FUN_148b3e488(plVar6);
      dVar3 = ((double)CONCAT44(0x43300000,(int)*plVar6) - 4503599627370496.0) +
              ((double)CONCAT44(0x45300000,(int)((ulonglong)*plVar6 >> 0x20)) -
              1.9342813113834067e+25);
    }
  }
  if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
    if ((*(ushort *)(param_4 + 8) & 3) != 0) {
      pfVar7 = (float *)(param_1 + 0x6c);
      if ((int)param_1[0x6e] != 0) {
        plVar6 = param_1 + 0x6d;
        if (((longlong *)*plVar6 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x30))(), cVar5 != '\0')) {
          iVar1 = (int)param_1[0x6e];
          goto joined_r0x000148b3d323;
        }
      }
      goto LAB_148b3d0ce;
    }
  }
  else {
    pfVar7 = (float *)(param_1 + 0x6f);
    if ((int)param_1[0x71] != 0) {
      plVar6 = param_1 + 0x70;
      if (((longlong *)*plVar6 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x30))(), cVar5 != '\0')) {
        iVar1 = (int)param_1[0x71];
joined_r0x000148b3d323:
        if (iVar1 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)*plVar6;
        }
        fVar8 = (float)(**(code **)(*plVar6 + 0x58))();
        *pfVar7 = fVar8;
      }
    }
LAB_148b3d0ce:
    dVar3 = dVar3 * (double)*pfVar7;
  }
  dVar3 = dVar3 * (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x6c)] + (double)param_1[0xb2]
  ;
  auVar10._0_8_ = dVar3 + 0.5;
  auVar10._8_8_ = 0;
  auVar10 = roundpd(auVar10,auVar10,1);
  dVar9 = auVar10._0_8_;
  if (9007199254740992.0 <= dVar9) {
    dVar9 = 9007199254740992.0;
  }
  if (dVar9 <= -9007199254740992.0) {
    dVar9 = -9007199254740992.0;
  }
  lVar2 = param_1[0x5b];
  local_b0 = (longlong)(dVar3 - 9.223372036854776e+18) & (longlong)dVar3 >> 0x3f | (longlong)dVar3;
  (**(code **)(*(longlong *)param_1[0x5d] + 0x28))((longlong *)param_1[0x5d],local_a8);
  FUN_140233b1a(local_98,local_a8);
  FUN_14023423e(local_88,local_98);
  local_78 = 1;
  local_70 = 0;
  uStack_68 = 0;
  FUN_146a5407e(lVar2,local_88);
  FUN_1449db362(&local_70);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  local_b8 = 1;
  FUN_143fab63c(param_1,(longlong)dVar9 |
                        (longlong)(dVar9 - 9.223372036854776e+18) & (longlong)dVar9 >> 0x3f,dVar3,0)
  ;
  lVar2 = param_1[0x5b];
  local_b0 = (ulonglong)(double)param_1[0xb2];
  local_b0 = (longlong)((double)param_1[0xb2] - 9.223372036854776e+18) & (longlong)local_b0 >> 0x3f
             | local_b0;
  (**(code **)(*(longlong *)param_1[0x5d] + 0x28))((longlong *)param_1[0x5d],local_a8);
  FUN_140233b1a(local_98,local_a8);
  FUN_14023423e(local_88,local_98);
  local_78 = 1;
  local_70 = 0;
  uStack_68 = 0;
  FUN_146a5407e(lVar2);
  FUN_1449db362(&local_70);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
LAB_148b3cfed:
  *param_2 = uVar4;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b3d372 FUN_148b3d372 body=117 status=ok
// SIG undefined FUN_148b3d372(void)

undefined1 * FUN_148b3d372(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_148b3e702();
  if (cVar1 == '\0') {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x5b9);
    *param_2 = 1;
    if (cVar1 == '\x01') {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 3;
    }
  }
  return param_2;
}



// FUNCTION 148b3d3ec FUN_148b3d3ec body=58 status=ok
// SIG undefined FUN_148b3d3ec(void)

undefined8 FUN_148b3d3ec(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14697dddc();
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b3d41b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x198))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148b3d426 FUN_148b3d426 body=2216 status=ok
// SIG undefined FUN_148b3d426(void)

int FUN_148b3d426(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined8 in_RAX;
  undefined8 uVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  char cVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  float *local_150;
  float *local_148;
  undefined1 local_140;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined8 local_cc;
  byte local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(char *)(param_1 + 0x5b9) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x39) != DAT_14c96b238)) {
    uVar20 = *(byte *)(param_1 + 0x3b) ^ 1;
    lVar19 = (ulonglong)uVar20 * 8 + 0x328;
    plVar21 = (longlong *)((ulonglong)(uVar20 << 4) + param_1 + 0x308);
  }
  else {
    plVar21 = (longlong *)(param_1 + 0x310);
    lVar19 = 800;
  }
  lVar10 = *plVar21;
  if (param_8 == '\0') {
    cVar23 = ' ';
    local_12c = 0;
  }
  else {
    local_12c = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_1 + 0x3a));
    cVar23 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
  }
  local_120 = *(longlong *)(param_1 + lVar19);
  pfVar16 = (float *)(lVar10 + 8);
  cVar12 = *(char *)(lVar10 + 0x18);
  local_118 = param_2;
  local_110 = param_4;
  if (cVar12 != '\0') {
    if (cVar12 == '\x01') {
      pfVar16 = (float *)FUN_1400c06fe(pfVar16);
    }
    else if (cVar12 == '\x03') {
      pfVar16 = param_7 + 8;
    }
    else {
      pfVar16 = param_7 + 4;
    }
  }
  local_fc = pfVar16[3] * param_7[3];
  local_100 = pfVar16[2] * param_7[2];
  local_104 = pfVar16[1] * param_7[1];
  local_108 = *pfVar16 * *param_7;
  local_e4 = *(undefined8 *)param_3;
  local_f8 = *(undefined8 *)(param_3 + 3);
  local_f0 = param_3[2];
  local_ec = 0;
  local_dc = param_3[7];
  fStack_d8 = param_3[8];
  fStack_d4 = param_3[9];
  fStack_d0 = param_3[10];
  local_cc = *(undefined8 *)(param_3 + 0xb);
  local_c4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_158 = CONCAT71(local_158._1_7_,cVar23);
  local_150 = &local_108;
  FUN_140239bd2(param_5,param_6,&local_f8,lVar10);
  param_6 = param_6 + 1;
  if (*(char *)(param_1 + 0x2f8) != '\0') goto LAB_148b3d60b;
  if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar12 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar21 = (longlong *)0x0;
    }
    else {
      plVar21 = *(longlong **)(param_1 + 0x278);
    }
    uVar15 = (**(code **)(*plVar21 + 0x58))();
    *(undefined8 *)(param_1 + 0x268) = uVar15;
  }
  lVar19 = *(longlong *)(param_1 + 0x268);
  if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar12 == '\0')) {
    uVar17 = *(ulonglong *)(param_1 + 0x340);
  }
  else {
    if (*(int *)(param_1 + 0x358) == 0) {
      plVar21 = (longlong *)0x0;
    }
    else {
      plVar21 = *(longlong **)(param_1 + 0x350);
    }
    uVar17 = (**(code **)(*plVar21 + 0x58))();
    *(ulonglong *)(param_1 + 0x340) = uVar17;
  }
  if (uVar17 != 0) {
    uVar22 = (uVar17 >> 1) + lVar19;
    lVar19 = uVar22 - uVar22 % uVar17;
  }
  lVar10 = param_1 + 0x458;
  FUN_148b3e488(lVar10);
  local_128 = param_1 + 0x430;
  if (*(char *)(param_1 + 0x460) == '\0') {
    dVar27 = 9.223372036854776e+18;
  }
  else {
    dVar27 = (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x458)) -
              4503599627370496.0) +
             ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20)
                              ) - 1.9342813113834067e+25)) * 0.5;
  }
  FUN_148b3e488();
  auVar28._8_4_ = (int)((ulonglong)lVar19 >> 0x20);
  auVar28._0_8_ = lVar19;
  auVar28._12_4_ = 0x45300000;
  if (*(char *)(param_1 + 0x438) == '\0') {
    dVar11 = 0.0;
  }
  else {
    dVar11 = (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x430)) -
              4503599627370496.0) +
             ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20)
                              ) - 1.9342813113834067e+25)) * 0.5;
  }
  dVar27 = ((((double)CONCAT44(0x43300000,(int)lVar19) - 4503599627370496.0) +
            (auVar28._8_8_ - 1.9342813113834067e+25)) * 0.5 - dVar11) / (dVar27 - dVar11);
  if (1.0 <= dVar27) {
    dVar27 = 1.0;
  }
  if (dVar27 <= 0.0) {
    dVar27 = 0.0;
  }
  if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar12 != '\0')) {
    if (*(int *)(param_1 + 0x3b8) == 0) {
      plVar21 = (longlong *)0x0;
    }
    else {
      plVar21 = *(longlong **)(param_1 + 0x3b0);
    }
    uVar24 = (**(code **)(*plVar21 + 0x58))();
    *(undefined4 *)(param_1 + 0x3a8) = uVar24;
  }
  fVar26 = (float)dVar27;
  fVar1 = *(float *)(param_1 + 0x3a8);
  if (1e-08 < ABS(fVar1 + -1.0)) {
    if (*(char *)(param_1 + 0x3c8) == '\x01') {
      if (((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0))
         && (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar12 != '\0')) {
        if (*(int *)(param_1 + 0x3d8) == 0) {
          plVar21 = (longlong *)0x0;
        }
        else {
          plVar21 = *(longlong **)(param_1 + 0x3d0);
        }
        uVar15 = (**(code **)(*plVar21 + 0x58))();
        *(undefined8 *)(param_1 + 0x3c0) = uVar15;
      }
      uVar17 = *(ulonglong *)(param_1 + 0x3c0);
      FUN_148b3e488(local_128);
      if (*(char *)(param_1 + 0x438) == '\0') {
        uVar22 = 0;
      }
      else {
        uVar22 = *(ulonglong *)(param_1 + 0x430);
      }
      if (uVar22 < uVar17) {
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar12 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar21 = (longlong *)0x0;
          }
          else {
            plVar21 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar15 = (**(code **)(*plVar21 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar15;
        }
        uVar17 = *(ulonglong *)(param_1 + 0x3c0);
        FUN_148b3e488(lVar10);
        uVar22 = 0xffffffffffffffff;
        if (*(char *)(param_1 + 0x460) != '\0') {
          uVar22 = *(ulonglong *)(param_1 + 0x458);
        }
        if (uVar17 < uVar22) {
          FUN_148b3e488(lVar10);
          cVar12 = *(char *)(param_1 + 0x460);
          uVar15 = *(undefined8 *)(param_1 + 0x458);
          FUN_148b3e488(local_128);
          cVar9 = *(char *)(param_1 + 0x438);
          uVar8 = *(undefined8 *)(param_1 + 0x430);
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar13 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar13 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar21 = (longlong *)0x0;
            }
            else {
              plVar21 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar18 = (**(code **)(*plVar21 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar18;
          }
          if (cVar12 == '\0') {
            dVar27 = 9.223372036854776e+18;
          }
          else {
            dVar27 = (((double)CONCAT44(0x43300000,(int)uVar15) - 4503599627370496.0) +
                     ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar15 >> 0x20)) -
                     1.9342813113834067e+25)) * 0.5;
          }
          if (cVar9 == '\0') {
            dVar11 = 0.0;
          }
          else {
            dVar11 = (((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0) +
                     ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar8 >> 0x20)) -
                     1.9342813113834067e+25)) * 0.5;
          }
          dVar27 = ((((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x3c0)) -
                     4503599627370496.0) +
                    ((double)CONCAT44(0x45300000,
                                      (int)((ulonglong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20)) -
                    1.9342813113834067e+25)) * 0.5 - dVar11) / (dVar27 - dVar11);
          if (1.0 <= dVar27) {
            dVar27 = 1.0;
          }
          if (dVar27 <= 0.0) {
            dVar27 = 0.0;
          }
          fVar26 = (float)FUN_146a86e44(fVar26,(float)dVar27,fVar1);
          goto LAB_148b3d8b3;
        }
      }
    }
    fVar26 = powf(1.0 - fVar26,fVar1);
    fVar26 = 1.0 - fVar26;
  }
LAB_148b3d8b3:
  lVar19 = local_120;
  if (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x39) != DAT_14c96b238) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    pfVar16 = (float *)(local_120 + 8);
    cVar12 = *(char *)(local_120 + 0x18);
    if (cVar12 != '\0') {
      if (cVar12 == '\x01') {
        pfVar16 = (float *)FUN_1400c06fe(pfVar16);
      }
      else if (cVar12 == '\x03') {
        pfVar16 = param_7 + 8;
      }
      else {
        pfVar16 = param_7 + 4;
      }
    }
    local_fc = pfVar16[3] * param_7[3];
    local_100 = pfVar16[2] * param_7[2];
    local_104 = pfVar16[1] * param_7[1];
    local_108 = *pfVar16 * *param_7;
    lVar10 = *(longlong *)(param_1 + 0x300);
    fVar3 = *(float *)(lVar10 + 0x504);
    fVar4 = *(float *)(lVar10 + 0x508);
    local_f0 = param_3[2];
    local_dc = param_3[7];
    local_f8 = CONCAT44(fVar4 * local_f0 + param_3[4],fVar3 * local_f0 + param_3[3]);
    fVar5 = param_3[8];
    fVar6 = param_3[10];
    fVar7 = param_3[9];
    fVar25 = fVar3 * local_dc + fVar4 * fVar7 + param_3[0xb];
    fStack_d0 = fVar5 * 0.0 + fVar6;
    fStack_d4 = local_dc * 0.0 + fVar7;
    fStack_d8 = fVar6 * 0.0 + fVar5;
    local_dc = fVar7 * 0.0 + local_dc;
    local_ec = 0;
    local_e4 = CONCAT44(fVar2 - (*(float *)(lVar10 + 0x510) + fVar4),
                        fVar26 * fVar1 - (*(float *)(lVar10 + 0x50c) + fVar3));
    local_cc = CONCAT44(fVar3 * fVar5 + fVar4 * fVar6 + param_3[0xc],fVar25);
    local_c4 = local_c4 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_158 = CONCAT71(local_158._1_7_,cVar23);
    local_150 = &local_108;
    FUN_140239bd2(fVar25,param_6,&local_f8,lVar19);
  }
LAB_148b3d60b:
  local_140 = (undefined1)local_12c;
  local_148 = param_7;
  local_150 = (float *)CONCAT44(local_150._4_4_,param_6);
  local_158 = param_5;
  iVar14 = FUN_1400c0302(param_1,local_118,param_3,local_110);
  if (param_6 < iVar14) {
    param_6 = iVar14;
  }
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 148b3dcd0 FUN_148b3dcd0 body=719 status=ok
// SIG undefined FUN_148b3dcd0(void)

void FUN_148b3dcd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  *param_1 = &PTR_FUN_14b55f0d0;
  if ((*(char *)((longlong)param_1 + 0x5b9) != '\0') || (*(int *)(param_1 + 0xb0) != -1)) {
    *(undefined1 *)((longlong)param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    uVar4 = param_1[0xb3];
    auVar5._8_4_ = (int)((ulonglong)uVar4 >> 0x20);
    auVar5._0_8_ = uVar4;
    auVar5._12_4_ = 0x45300000;
    param_1[0xb2] =
         ((double)CONCAT44(0x43300000,(int)uVar4) - 4503599627370496.0) +
         (auVar5._8_8_ - 1.9342813113834067e+25);
    FUN_148b3dfa0(param_1);
  }
  if (*(char *)(param_1 + 0xba) == '\x01') {
    *(undefined1 *)(param_1 + 0xba) = 0;
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xae);
  FUN_1449db362(param_1 + 0xab);
  FUN_1449db362(param_1 + 0xa9);
  FUN_1449db362(param_1 + 0xa7);
  if (*(char *)(param_1 + 0xa5) == '\x01') {
    *(undefined1 *)(param_1 + 0xa5) = 0;
  }
  FUN_1449db362(param_1 + 0xa2);
  FUN_1449db362(param_1 + 0x9f);
  FUN_1449db362(param_1 + 0x9c);
  FUN_1449db362(param_1 + 0x99);
  FUN_1449db362(param_1 + 0x96);
  if (*(char *)((longlong)param_1 + 0x4a4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  }
  FUN_1449db362(param_1 + 0x92);
  if (*(char *)((longlong)param_1 + 0x484) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  }
  FUN_1449db362(param_1 + 0x8e);
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  FUN_1449db362(param_1 + 0x89);
  if (*(char *)(param_1 + 0x87) == '\x01') {
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  FUN_1449db362(param_1 + 0x84);
  if (*(char *)(param_1 + 0x82) == '\x01') {
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  FUN_1449db362(param_1 + 0x7f);
  if (*(char *)(param_1 + 0x7d) == '\x01') {
    *(undefined1 *)(param_1 + 0x7d) = 0;
  }
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x76);
  FUN_1449db362(param_1 + 0x73);
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x6d);
  FUN_1449db362(param_1 + 0x6a);
  plVar3 = (longlong *)param_1[0x5e];
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
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x5a];
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
  FUN_1449db362(param_1 + 0x57);
  FUN_1449db362(param_1 + 0x55);
  FUN_1449db362(param_1 + 0x53);
  FUN_1449db362(param_1 + 0x51);
  FUN_1449db362(param_1 + 0x4f);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 148b3dfa0 FUN_148b3dfa0 body=96 status=ok
// SIG undefined FUN_148b3dfa0(void)

void FUN_148b3dfa0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x2a0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1);
  }
  if ((*(int *)(param_1 + 0x2c0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2b8), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148b3dff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148b3e000 FUN_148b3e000 body=82 status=ok
// SIG undefined FUN_148b3e000(void)

void FUN_148b3e000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 3) != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 2,0,0,0x10);
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 148b3e052 FUN_148b3e052 body=83 status=ok
// SIG undefined FUN_148b3e052(void)

undefined1 FUN_148b3e052(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4d0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4c8);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4c0) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4c0);
}



// FUNCTION 148b3e0a6 FUN_148b3e0a6 body=497 status=ok
// SIG undefined FUN_148b3e0a6(void)

void FUN_148b3e0a6(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  byte local_88;
  ulonglong local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x468) == '\x01') {
    lVar2 = param_1 + 0x458;
    FUN_148b3e488(lVar2);
    if (*(char *)(param_1 + 0x460) == '\x01') {
      FUN_148b3e488(lVar2);
      uVar8 = 0xffffffffffffffff;
      if (*(char *)(param_1 + 0x460) != '\0') {
        uVar8 = *(ulonglong *)(param_1 + 0x458);
      }
      uVar10 = ((longlong)(param_2 - 9.223372e+18) & (longlong)param_2 >> 0x3f | (longlong)param_2)
               + uVar8;
      FUN_148b3e488(lVar2);
      if (((byte)(param_3 ^ 1 |
                 *(ulonglong *)(param_1 + 0x458) < uVar10 & *(byte *)(param_1 + 0x460)) == 1) &&
         (((uVar8 = uVar10, *(int *)(param_1 + 0x478) == 0 ||
           (*(longlong **)(param_1 + 0x470) == (longlong *)0x0)) ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x30))(), cVar5 == '\0')))) {
        local_70 = (longlong *)CONCAT71(local_70._1_7_,1);
        local_68 = 1;
        local_60 = 0;
        uStack_58 = 0;
        local_78 = uVar10;
        FUN_148b3e51a(param_1);
        FUN_1449db362(&local_60);
      }
      goto LAB_148b3e0db;
    }
  }
  uVar8 = 0;
LAB_148b3e0db:
  if (((*(int *)(param_1 + 0x550) != 0) && (*(longlong **)(param_1 + 0x548) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x30))(), cVar5 != '\0')) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_148b3e136:
      local_78 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_148b3e136;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_78 = *(ulonglong *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    if (*(int *)(param_1 + 0x550) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x548);
    }
    local_88 = param_3;
    local_70 = plVar9;
    (**(code **)(*plVar7 + 0x58))(plVar7,uVar8,&local_78,1);
    if (!bVar3) {
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
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b3e298 FUN_148b3e298 body=494 status=ok
// SIG undefined FUN_148b3e298(void)

void FUN_148b3e298(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  byte local_88;
  ulonglong local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x440) == '\x01') {
    lVar2 = param_1 + 0x430;
    FUN_148b3e488(lVar2);
    if (*(char *)(param_1 + 0x438) == '\x01') {
      FUN_148b3e488(lVar2);
      if (*(char *)(param_1 + 0x438) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulonglong *)(param_1 + 0x430);
      }
      uVar10 = ((longlong)(param_2 - 9.223372e+18) & (longlong)param_2 >> 0x3f | (longlong)param_2)
               + uVar8;
      FUN_148b3e488(lVar2);
      if (((byte)(param_3 ^ 1 |
                 uVar10 < *(ulonglong *)(param_1 + 0x430) & *(byte *)(param_1 + 0x438)) == 1) &&
         (((uVar8 = uVar10, *(int *)(param_1 + 0x450) == 0 ||
           (*(longlong **)(param_1 + 0x448) == (longlong *)0x0)) ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x30))(), cVar5 == '\0')))) {
        local_70 = (longlong *)CONCAT71(local_70._1_7_,1);
        local_68 = 1;
        local_60 = 0;
        uStack_58 = 0;
        local_78 = uVar10;
        FUN_148b3e688(param_1);
        FUN_1449db362(&local_60);
      }
      goto LAB_148b3e2cd;
    }
  }
  uVar8 = 0;
LAB_148b3e2cd:
  if (((*(int *)(param_1 + 0x560) != 0) && (*(longlong **)(param_1 + 0x558) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x558) + 0x30))(), cVar5 != '\0')) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_148b3e328:
      local_78 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_148b3e328;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_78 = *(ulonglong *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    if (*(int *)(param_1 + 0x560) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x558);
    }
    local_88 = param_3;
    local_70 = plVar9;
    (**(code **)(*plVar7 + 0x58))(plVar7,uVar8,&local_78,1);
    if (!bVar3) {
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
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b3e488 FUN_148b3e488 body=144 status=ok
// SIG undefined FUN_148b3e488(void)

undefined8 * FUN_148b3e488(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 4) != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_28);
      if (&local_28 != param_1) {
        if ((local_20 & 1) == 0) {
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_148b3e4ea;
          uVar2 = 0;
        }
        else {
          *param_1 = local_28;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar2;
      }
    }
  }
LAB_148b3e4ea:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b3e51a FUN_148b3e51a body=121 status=ok
// SIG undefined FUN_148b3e51a(void)

void FUN_148b3e51a(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  FUN_148b3e488(param_2);
  puVar2 = (undefined8 *)(param_1 + 0x408);
  if (*(char *)(param_2 + 1) != '\0') {
    puVar2 = param_2;
  }
  if (puVar2 != (undefined8 *)(param_1 + 0x458)) {
    if (*(char *)(puVar2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x458) = *puVar2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x460) != '\x01') goto LAB_148b3e549;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x460) = uVar1;
  }
LAB_148b3e549:
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(puVar2 + 2);
  FUN_148b3e604(param_1 + 0x470,puVar2 + 3);
  FUN_148b3e594(param_1);
  return;
}



// FUNCTION 148b3e594 FUN_148b3e594 body=111 status=ok
// SIG undefined FUN_148b3e594(void)

void FUN_148b3e594(longlong param_1)

{
  byte bVar1;
  
  FUN_148b3e488(param_1 + 0x3e0);
  if (*(char *)(param_1 + 1000) == '\x01') {
    FUN_148b3e488(param_1 + 0x408);
    if (*(char *)(param_1 + 0x410) != '\0') {
      bVar1 = 0;
      goto LAB_148b3e5e1;
    }
  }
  FUN_148b3e488(param_1 + 0x430);
  bVar1 = 1;
  if (*(char *)(param_1 + 0x438) == '\x01') {
    FUN_148b3e488(param_1 + 0x458);
    bVar1 = *(byte *)(param_1 + 0x460) ^ 1;
  }
LAB_148b3e5e1:
  *(byte *)(param_1 + 0x2f8) = bVar1;
  return;
}



// FUNCTION 148b3e604 FUN_148b3e604 body=130 status=ok
// SIG undefined FUN_148b3e604(void)

void FUN_148b3e604(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b3e688 FUN_148b3e688 body=121 status=ok
// SIG undefined FUN_148b3e688(void)

void FUN_148b3e688(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  FUN_148b3e488(param_2);
  puVar2 = (undefined8 *)(param_1 + 0x3e0);
  if (*(char *)(param_2 + 1) != '\0') {
    puVar2 = param_2;
  }
  if (puVar2 != (undefined8 *)(param_1 + 0x430)) {
    if (*(char *)(puVar2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x430) = *puVar2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x438) != '\x01') goto LAB_148b3e6b7;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x438) = uVar1;
  }
LAB_148b3e6b7:
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(puVar2 + 2);
  FUN_148b3e604(param_1 + 0x448,puVar2 + 3);
  FUN_148b3e594(param_1);
  return;
}



// FUNCTION 148b3e702 FUN_148b3e702 body=83 status=ok
// SIG undefined FUN_148b3e702(void)

undefined1 FUN_148b3e702(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4e8) != 0) && (*(longlong **)(param_1 + 0x4e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4e8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4e0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4d8) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4d8);
}



// FUNCTION 148b3e756 FUN_148b3e756 body=167 status=ok
// SIG undefined FUN_148b3e756(void)

void FUN_148b3e756(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b3e7d1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b3e7d1;
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
LAB_148b3e7d1:
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
                    /* WARNING: Could not recover jumptable at 0x000148b3e7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b3e7fe FUN_148b3e7fe body=313 status=ok
// SIG undefined FUN_148b3e7fe(void)

longlong * FUN_148b3e7fe(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b3e8fa:
    *puVar5 = &PTR_LAB_14b55f380;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f310;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b3e8fa;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55f380;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f310;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3e938 FUN_148b3e938 body=130 status=ok
// SIG undefined FUN_148b3e938(void)

void FUN_148b3e938(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b3e9bc FUN_148b3e9bc body=64 status=ok
// SIG undefined FUN_148b3e9bc(void)

undefined8 * FUN_148b3e9bc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f310;
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



// FUNCTION 148b3ea00 FUN_148b3ea00 body=81 status=ok
// SIG undefined FUN_148b3ea00(void)

undefined8 FUN_148b3ea00(longlong param_1)

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



// FUNCTION 148b3ea58 FUN_148b3ea58 body=89 status=ok
// SIG undefined FUN_148b3ea58(void)

bool FUN_148b3ea58(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3eaa3;
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
LAB_148b3eaa3:
  return lVar6 == param_2;
}



// FUNCTION 148b3eada FUN_148b3eada body=118 status=ok
// SIG undefined FUN_148b3eada(void)

void FUN_148b3eada(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55f380;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f310;
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



// FUNCTION 148b3eb50 FUN_148b3eb50 body=118 status=ok
// SIG undefined FUN_148b3eb50(void)

void FUN_148b3eb50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55f380;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f310;
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



// FUNCTION 148b3ebc6 FUN_148b3ebc6 body=156 status=ok
// SIG undefined FUN_148b3ebc6(void)

void FUN_148b3ebc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b55f380;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f310;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3ec52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3ec62 FUN_148b3ec62 body=102 status=ok
// SIG undefined FUN_148b3ec62(void)

undefined8 FUN_148b3ec62(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
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
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b3ecc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 148b3ecc8 FUN_148b3ecc8 body=100 status=ok
// SIG undefined FUN_148b3ecc8(void)

ulonglong FUN_148b3ecc8(longlong param_1)

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
LAB_148b3ed21:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3ed21;
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



// FUNCTION 148b3ed2e FUN_148b3ed2e body=313 status=ok
// SIG undefined FUN_148b3ed2e(void)

longlong * FUN_148b3ed2e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b3ee2a:
    *puVar5 = &PTR_LAB_14acb8d40;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f3f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b3ee2a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14acb8d40;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f3f0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3ee68 FUN_148b3ee68 body=64 status=ok
// SIG undefined FUN_148b3ee68(void)

undefined8 * FUN_148b3ee68(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f3f0;
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



// FUNCTION 148b3eeac FUN_148b3eeac body=81 status=ok
// SIG undefined FUN_148b3eeac(void)

undefined8 FUN_148b3eeac(longlong param_1)

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



// FUNCTION 148b3ef04 FUN_148b3ef04 body=89 status=ok
// SIG undefined FUN_148b3ef04(void)

bool FUN_148b3ef04(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3ef4f;
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
LAB_148b3ef4f:
  return lVar6 == param_2;
}



// FUNCTION 148b3ef7a FUN_148b3ef7a body=118 status=ok
// SIG undefined FUN_148b3ef7a(void)

void FUN_148b3ef7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f3f0;
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



// FUNCTION 148b3eff0 FUN_148b3eff0 body=118 status=ok
// SIG undefined FUN_148b3eff0(void)

void FUN_148b3eff0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f3f0;
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



// FUNCTION 148b3f066 FUN_148b3f066 body=156 status=ok
// SIG undefined FUN_148b3f066(void)

void FUN_148b3f066(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14acb8d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f3f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3f0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3f102 FUN_148b3f102 body=104 status=ok
// SIG undefined FUN_148b3f102(void)

void FUN_148b3f102(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b3f14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b3f160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b3f16a FUN_148b3f16a body=101 status=ok
// SIG undefined FUN_148b3f16a(void)

ulonglong FUN_148b3f16a(longlong param_1)

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
LAB_148b3f1c4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3f1c4;
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



// FUNCTION 148b3f1d0 FUN_148b3f1d0 body=313 status=ok
// SIG undefined FUN_148b3f1d0(void)

longlong * FUN_148b3f1d0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b3f2cc:
    *puVar5 = &PTR_LAB_14b55f4d0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f460;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b3f2cc;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55f4d0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f460;
    puVar5[3] = uVar10;
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



// FUNCTION 148b3f30a FUN_148b3f30a body=64 status=ok
// SIG undefined FUN_148b3f30a(void)

undefined8 * FUN_148b3f30a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f460;
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



// FUNCTION 148b3f34e FUN_148b3f34e body=81 status=ok
// SIG undefined FUN_148b3f34e(void)

undefined8 FUN_148b3f34e(longlong param_1)

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



// FUNCTION 148b3f3a6 FUN_148b3f3a6 body=89 status=ok
// SIG undefined FUN_148b3f3a6(void)

bool FUN_148b3f3a6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b3f3f1;
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
LAB_148b3f3f1:
  return lVar6 == param_2;
}



// FUNCTION 148b3f428 FUN_148b3f428 body=118 status=ok
// SIG undefined FUN_148b3f428(void)

void FUN_148b3f428(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55f4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f460;
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



// FUNCTION 148b3f49e FUN_148b3f49e body=118 status=ok
// SIG undefined FUN_148b3f49e(void)

void FUN_148b3f49e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55f4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f460;
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



// FUNCTION 148b3f514 FUN_148b3f514 body=156 status=ok
// SIG undefined FUN_148b3f514(void)

void FUN_148b3f514(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b55f4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f460;
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
                    /* WARNING: Could not recover jumptable at 0x000148b3f5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b3f5b0 FUN_148b3f5b0 body=104 status=ok
// SIG undefined FUN_148b3f5b0(void)

void FUN_148b3f5b0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b3f5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b3f60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b3f618 FUN_148b3f618 body=101 status=ok
// SIG undefined FUN_148b3f618(void)

ulonglong FUN_148b3f618(longlong param_1)

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
LAB_148b3f672:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b3f672;
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



// FUNCTION 148b3f680 FUN_148b3f680 body=6233 status=ok
// SIG undefined FUN_148b3f680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b3f680(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined1 auStack_1438 [32];
  undefined1 *local_1418;
  longlong local_1408;
  undefined8 *local_1400;
  longlong local_13f8;
  longlong local_13f0;
  undefined4 *local_13e8;
  longlong local_13e0;
  longlong local_13d8;
  undefined1 local_13c9;
  undefined1 local_13c8 [8];
  longlong *local_13c0;
  undefined1 local_13a9;
  undefined1 local_13a8 [8];
  longlong *local_13a0;
  undefined8 local_1390;
  undefined1 *puStack_1388;
  undefined4 local_1380;
  undefined1 local_137c;
  undefined8 local_1378;
  undefined8 uStack_1370;
  longlong local_1368;
  undefined1 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  longlong *local_1340;
  undefined8 local_1338;
  longlong *local_1330;
  undefined1 local_1321;
  undefined8 local_1320;
  longlong *local_1318;
  undefined2 local_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined8 local_12e8;
  undefined4 local_12e0;
  undefined4 local_12d8;
  undefined1 local_12d4;
  undefined8 local_12d0;
  undefined4 local_12c8;
  undefined2 local_12c0;
  undefined8 local_12b8;
  undefined4 local_12b0;
  undefined2 local_12a8;
  undefined8 local_12a0;
  undefined4 local_1298;
  undefined2 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined1 local_1278 [96];
  undefined1 local_1218;
  undefined8 local_1210;
  undefined4 local_1208;
  undefined2 local_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  longlong *local_11e0;
  undefined8 local_11d8;
  longlong *local_11d0;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined1 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined1 local_1181;
  undefined8 local_1180;
  longlong *local_1178;
  undefined4 local_1168;
  undefined1 local_1164;
  undefined8 local_1160;
  undefined4 local_1158;
  undefined1 local_1150 [96];
  undefined1 local_10f0;
  undefined8 local_10e8;
  undefined4 local_10e0;
  undefined8 local_10d8;
  longlong *local_10d0;
  undefined8 local_10c8;
  longlong *local_10c0;
  undefined4 local_10b8;
  undefined4 uStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined1 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined4 local_1090;
  undefined1 local_108c;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  longlong *local_1070;
  undefined8 local_1068;
  longlong *local_1060;
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined8 local_1010;
  undefined8 uStack_1008;
  code *local_ff8;
  undefined4 local_ff0;
  longlong local_e50;
  undefined1 local_e48;
  undefined1 local_e40 [16];
  undefined4 local_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined1 local_e18 [88];
  code *local_dc0;
  undefined4 local_db8;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined2 local_c90;
  undefined1 local_c88 [432];
  undefined1 local_ad8 [96];
  undefined1 local_a78;
  undefined1 local_a70 [224];
  undefined2 local_990;
  undefined1 local_988 [64];
  undefined2 local_948;
  undefined1 local_940 [16];
  undefined4 local_930;
  undefined1 local_92c;
  undefined1 local_928 [56];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [40];
  undefined2 local_8a8;
  undefined1 local_8a0 [48];
  undefined1 local_870 [16];
  undefined4 local_860;
  undefined1 local_85c;
  undefined1 local_858 [24];
  undefined2 local_840;
  undefined1 local_838 [48];
  undefined1 local_808 [192];
  code *local_748;
  undefined4 local_740;
  undefined1 local_570 [96];
  undefined1 local_510;
  undefined1 local_508 [464];
  undefined4 local_338;
  undefined1 local_334;
  undefined1 auStack_330 [88];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x148b3f696;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1438;
  lVar9 = *(longlong *)(param_2 + 0x1a8);
  *(longlong *)(param_1 + 0x300) = lVar9;
  local_1018 = *(undefined4 *)(lVar9 + 0x4f0);
  local_1028 = *(undefined8 *)(lVar9 + 0x4e0);
  uStack_1020 = *(undefined8 *)(lVar9 + 0x4e8);
  local_1014 = 1;
  local_1010 = 0;
  uStack_1008 = 0;
  FUN_140a5c8a2(param_1 + 0x250,param_1,&local_1028);
  FUN_1449db362(&local_1010);
  puVar7 = *(undefined8 **)(param_2 + 0x570);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = &PTR_FUN_14b55f540;
    puVar7[1] = 0x600000001;
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b55f590;
    plVar8[2] = (longlong)puVar7;
    if (plVar8 != (longlong *)0x0) goto LAB_148b3f7a3;
LAB_148b3f791:
    bVar4 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x578);
    if (plVar8 == (longlong *)0x0) goto LAB_148b3f791;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
LAB_148b3f7a3:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar4 = false;
  }
  plVar13 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 **)(param_1 + 0x2e8) = puVar7;
  *(longlong **)(param_1 + 0x2f0) = plVar8;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if (!bVar4) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((*(longlong *)(param_2 + 0x570) != 0) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x40))(), lVar9 != 0)) {
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x40))();
    local_748 = FUN_148b40eda;
    local_740 = 0;
    FUN_148b41ea8(&local_d00,param_1);
    FUN_1448b6402(uVar10,&local_748,&local_d00);
    FUN_1449db362(&local_d00);
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1b0);
  plVar8 = (longlong *)(param_1 + 0x278);
  FUN_148b3e938(plVar8,param_2 + 0x1c0);
  FUN_148b42344(param_1 + 0x288,param_2 + 0x4b8);
  FUN_148b423c8(param_1 + 0x298,param_2 + 0x4c8);
  FUN_14009d848(param_1 + 0x2a8,param_2 + 0x4d8);
  FUN_148b42344(param_1 + 0x2b8,param_2 + 0x4e8);
  *(undefined1 *)(param_1 + 0x56c) = *(undefined1 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x528);
  FUN_140a52b3c(param_1 + 0x570,param_2 + 0x530);
  puVar7 = (undefined8 *)(param_1 + 0x3e0);
  if ((undefined8 *)(param_2 + 0x1d0) != puVar7) {
    if (*(char *)(param_2 + 0x1d8) == '\x01') {
      *puVar7 = *(undefined8 *)(param_2 + 0x1d0);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 1000) != '\x01') goto LAB_148b3f933;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 1000) = uVar6;
  }
LAB_148b3f933:
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 0x1e0);
  FUN_148b3e604(param_1 + 0x3f8,param_2 + 0x1e8);
  puVar15 = (undefined8 *)(param_1 + 0x408);
  if ((undefined8 *)(param_2 + 0x1f8) != puVar15) {
    if (*(char *)(param_2 + 0x200) == '\x01') {
      *puVar15 = *(undefined8 *)(param_2 + 0x1f8);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x410) != '\x01') goto LAB_148b3f969;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x410) = uVar6;
  }
LAB_148b3f969:
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x208);
  FUN_148b3e604(param_1 + 0x420,param_2 + 0x210);
  FUN_148b3e488((undefined8 *)(param_2 + 0x220));
  if (*(char *)(param_2 + 0x228) != '\0') {
    puVar7 = (undefined8 *)(param_2 + 0x220);
  }
  puVar2 = (undefined8 *)(param_1 + 0x430);
  if (puVar7 != puVar2) {
    if (*(char *)(puVar7 + 1) == '\x01') {
      *puVar2 = *puVar7;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x438) != '\x01') goto LAB_148b3f9b2;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x438) = uVar6;
  }
LAB_148b3f9b2:
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(puVar7 + 2);
  FUN_148b3e604(param_1 + 0x448,puVar7 + 3);
  FUN_148b3e488((undefined8 *)(param_2 + 0x248));
  if (*(char *)(param_2 + 0x250) != '\0') {
    puVar15 = (undefined8 *)(param_2 + 0x248);
  }
  puVar7 = (undefined8 *)(param_1 + 0x458);
  if (puVar15 != puVar7) {
    if (*(char *)(puVar15 + 1) == '\x01') {
      *puVar7 = *puVar15;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x460) != '\x01') goto LAB_148b3f9f9;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x460) = uVar6;
  }
LAB_148b3f9f9:
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(puVar15 + 2);
  FUN_148b3e604(param_1 + 0x470,puVar15 + 3);
  lVar9 = FUN_146b06eb6((undefined4 *)(param_2 + 0x270));
  local_1400 = puVar2;
  if (*(char *)(lVar9 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x274),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x274) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x270));
    }
    local_cf8._0_1_ = *(undefined1 *)(param_2 + 0x278);
    local_cf0 = 0;
    uStack_ce8 = (ulonglong)uStack_ce8._4_4_ << 0x20;
    FUN_146aa7480(&local_cf0,param_2 + 0x280);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000001);
    local_cf8._0_1_ = 1;
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar15 = (undefined8 *)(param_1 + 0x480);
  if (&local_d00 != puVar15) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar15 = (undefined4)local_d00;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x484) != '\x01') goto LAB_148b3fb3e;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x484) = uVar6;
  }
LAB_148b3fb3e:
  *(undefined1 *)(param_1 + 0x488) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x490,&local_cf0);
  FUN_1449db362(&local_cf0);
  lVar9 = FUN_146b06eb6((undefined4 *)(param_2 + 0x290));
  if (*(char *)(lVar9 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x294),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x294) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x290));
    }
    local_cf8 = CONCAT31(local_cf8._1_3_,*(undefined1 *)(param_2 + 0x298));
    local_cf0 = 0;
    uStack_ce8 = uStack_ce8 & 0xffffffff00000000;
    FUN_146aa7480(&local_cf0,param_2 + 0x2a0);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000006);
    local_cf8 = CONCAT31(local_cf8._1_3_,1);
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x4a0);
  if (&local_d00 != puVar2) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar2 = (undefined4)local_d00;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x4a4) != '\x01') goto LAB_148b3fc1f;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x4a4) = uVar6;
  }
LAB_148b3fc1f:
  *(undefined1 *)(param_1 + 0x4a8) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x4b0,&local_cf0);
  FUN_1449db362(&local_cf0);
  FUN_148b40fd0(param_1,puVar2);
  FUN_148b410a8(param_1,puVar15);
  *(undefined2 *)(param_1 + 0x4c0) = *(undefined2 *)(param_2 + 0x2b0);
  FUN_14096c7c0(param_1 + 0x4c8,param_2 + 0x2b8);
  *(undefined2 *)(param_1 + 0x4d8) = *(undefined2 *)(param_2 + 0x2c8);
  FUN_14096c7c0(param_1 + 0x4e0,param_2 + 0x2d0);
  *(undefined2 *)(param_1 + 0x4f0) = *(undefined2 *)(param_2 + 0x360);
  plVar13 = (longlong *)(param_1 + 0x4f8);
  FUN_14096c7c0(plVar13,param_2 + 0x368);
  *(undefined2 *)(param_1 + 0x508) = *(undefined2 *)(param_2 + 0x378);
  plVar14 = (longlong *)(param_1 + 0x510);
  FUN_14096c7c0(plVar14,param_2 + 0x380);
  FUN_148b4244c(param_1 + 0x548,param_2 + 0x390);
  FUN_148b4244c(param_1 + 0x558,param_2 + 0x3a0);
  *(undefined1 *)(param_1 + 0x5bc) = *(undefined1 *)(param_2 + 1000);
  *(undefined1 *)(param_1 + 0x5bd) = *(undefined1 *)(param_2 + 0x3e9);
  if ((undefined8 *)(param_2 + 0x3f0) != (undefined8 *)(param_1 + 0x520)) {
    if (*(char *)(param_2 + 0x3f8) == '\x01') {
      *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_2 + 0x3f0);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x528) != '\x01') goto LAB_148b3fd3c;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x528) = uVar6;
  }
LAB_148b3fd3c:
  *(undefined1 *)(param_1 + 0x530) = *(undefined1 *)(param_2 + 0x400);
  FUN_148b3e604(param_1 + 0x538,param_2 + 0x408);
  *(undefined1 *)(param_1 + 0x5bb) = *(undefined1 *)(param_2 + 0x580);
  if (((*(int *)(param_1 + 0x280) != 0) && ((longlong *)*plVar8 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)*plVar8;
    }
    uVar10 = (**(code **)(*plVar8 + 0x58))();
    *(undefined8 *)(param_1 + 0x268) = uVar10;
  }
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
            (*(longlong **)(param_1 + 0x2e8),&local_d00,param_1 + 0x5a0);
  if ((undefined8 *)(param_1 + 0x5a8) == &local_d00) {
    if (local_d00 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_1 + 0x5a8) = local_d00;
    local_d00 = (code *)0x0;
    *(undefined4 *)(param_1 + 0x5b0) = local_cf8;
    *(undefined4 *)(param_1 + 0x5b4) = local_cf4;
  }
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  *(double *)(param_1 + 0x590) =
       ((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x5a0)) - 4503599627370496.0) +
       ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x5a0) >> 0x20)) -
       1.9342813113834067e+25);
  if (((*(int *)(param_1 + 0x500) != 0) && ((longlong *)*plVar13 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar13 + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x500) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)*plVar13;
    }
    uVar6 = (**(code **)(*plVar13 + 0x58))();
    *(undefined1 *)(param_1 + 0x4f0) = uVar6;
  }
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    uVar3 = *(ulonglong *)(param_1 + 0x5a0);
    FUN_148b3e488(puVar7);
    if ((*(char *)(param_1 + 0x460) == '\x01') && (*(ulonglong *)(param_1 + 0x458) < uVar3)) {
      lVar9 = *(longlong *)(param_1 + 0x5a0);
      FUN_148b3e488(puVar7);
      lVar11 = -1;
      if (*(char *)(param_1 + 0x460) != '\0') {
        lVar11 = *(longlong *)(param_1 + 0x458);
      }
      FUN_148b3e0a6(param_1,(float)(ulonglong)(lVar9 - lVar11),1);
      goto LAB_148b400ac;
    }
  }
  if (((*(int *)(param_1 + 0x518) != 0) && ((longlong *)*plVar14 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar14 + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x518) == 0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)*plVar14;
    }
    uVar6 = (**(code **)(*plVar14 + 0x58))();
    *(undefined1 *)(param_1 + 0x508) = uVar6;
  }
  puVar7 = local_1400;
  if (*(char *)(param_1 + 0x508) == '\x01') {
    uVar3 = *(ulonglong *)(param_1 + 0x5a0);
    FUN_148b3e488(local_1400);
    if ((*(char *)(param_1 + 0x438) == '\x01') && (uVar3 < *(ulonglong *)(param_1 + 0x430))) {
      lVar9 = *(longlong *)(param_1 + 0x5a0);
      FUN_148b3e488(puVar7);
      if (*(char *)(param_1 + 0x438) == '\0') {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(param_1 + 0x430);
      }
      FUN_148b3e298(param_1,(float)(ulonglong)(lVar9 - lVar11),1);
    }
  }
LAB_148b400ac:
  FUN_148b3e594(param_1);
  *(undefined1 *)(param_1 + 0x3ac) = *(undefined1 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3b0);
  FUN_140a52b3c(param_1 + 0x3b0,param_2 + 0x3b8);
  *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x3c8);
  FUN_148b3e938(param_1 + 0x3d0,param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x2e8);
  FUN_148b3e938(param_1 + 0x350,param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x318);
  FUN_140a52b3c(param_1 + 0x368,param_2 + 800);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x330);
  FUN_140a52b3c(param_1 + 0x380,param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x348);
  FUN_146a24854(param_1 + 0x398,param_2 + 0x350);
  lVar11 = *(longlong *)(param_2 + 0x1a8) + 0x170;
  *(longlong *)(param_1 + 0x308) = lVar11;
  *(longlong *)(param_1 + 0x318) = *(longlong *)(param_2 + 0x1a8) + 0x10;
  lVar9 = *(longlong *)(param_2 + 0x1a8) + 0xc0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x154) & 4) == 0) {
    lVar9 = lVar11;
  }
  *(longlong *)(param_1 + 0x310) = lVar9;
  lVar11 = *(longlong *)(param_2 + 0x1a8) + 0x220;
  *(longlong *)(param_1 + 800) = lVar11;
  lVar9 = *(longlong *)(param_2 + 0x1a8) + 0x2d0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x364) & 4) == 0) {
    lVar9 = lVar11;
  }
  *(longlong *)(param_1 + 0x328) = lVar9;
  *(longlong *)(param_1 + 0x330) = *(longlong *)(param_2 + 0x1a8) + 0x380;
  lVar9 = *(longlong *)(param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x5b9) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
  local_1048 = *(undefined1 *)(param_2 + 0x4a0);
  local_1058 = *(undefined4 *)(param_2 + 0x490);
  uStack_1054 = *(undefined4 *)(param_2 + 0x494);
  uStack_1050 = *(undefined4 *)(param_2 + 0x498);
  uStack_104c = *(undefined4 *)(param_2 + 0x49c);
  local_1040 = 0;
  local_1038 = 0;
  FUN_140a58be0(&local_1040,param_2 + 0x4a8);
  local_1400 = (undefined8 *)FUN_140a58d14(param_1 + 0x218,&local_1058);
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  local_1090 = 0x3f800000;
  local_108c = 1;
  local_1088 = 0;
  uStack_1080 = 0;
  lVar11 = FUN_140a5475a(local_2d8);
  local_10b8 = *(undefined4 *)(lVar9 + 0x4f4);
  uStack_10b4 = *(undefined4 *)(lVar9 + 0x4f8);
  uStack_10b0 = *(undefined4 *)(lVar9 + 0x4fc);
  uStack_10ac = *(undefined4 *)(lVar9 + 0x500);
  local_10a8 = 1;
  local_10a0 = 0;
  uStack_1098 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = local_10b8;
  *(undefined4 *)(lVar11 + 0x1c) = uStack_10b4;
  *(undefined4 *)(lVar11 + 0x20) = uStack_10b0;
  *(undefined4 *)(lVar11 + 0x24) = uStack_10ac;
  local_1408 = lVar9;
  FUN_144a450dc(lVar11 + 0x30,&local_10a0);
  FUN_1449db362(&local_10a0);
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  FUN_140a570d8(&local_748);
  local_13f8 = param_2 + 0x418;
  FUN_144a87366(local_1150);
  local_10f0 = *(undefined1 *)(param_2 + 0x478);
  local_13f0 = param_2 + 0x480;
  local_10e8 = 0;
  local_10e0 = 0;
  FUN_140a5d470(&local_10e8);
  FUN_1412cc59c(local_570,local_1150);
  local_510 = local_10f0;
  FUN_144a450dc(local_508,&local_10e8);
  FUN_141515cba(local_1150);
  local_d00 = FUN_148b41258;
  local_cf8 = 0;
  FUN_148b41180(&local_748,param_1,&local_d00);
  local_d00 = FUN_148b41366;
  local_cf8 = 0;
  FUN_148b412b6(&local_748,param_1,&local_d00);
  local_1168 = *(undefined4 *)(param_2 + 0x540);
  local_1164 = *(undefined1 *)(param_2 + 0x544);
  local_13d8 = param_2 + 0x548;
  local_1160 = 0;
  local_1158 = 0;
  FUN_140a5d648(&local_1160);
  local_334 = local_1164;
  local_338 = local_1168;
  FUN_144a450dc(auStack_330,&local_1160);
  FUN_1449db362(&local_1160);
  local_1418 = &local_1181;
  FUN_140a54526(&local_1180,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",300);
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1178 + 1) = (int)local_1178[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = local_1180;
  *(longlong **)(param_1 + 0x2d0) = local_1178;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  lVar9 = local_1408;
  puVar16 = (undefined4 *)(local_1408 + 0x4f4);
  local_13e8 = (undefined4 *)(param_2 + 0x540);
  FUN_140a52852(&local_1180,&local_10d8,&local_748);
  local_10c8 = local_10d8;
  local_10c0 = local_10d0;
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10d0 + 1) = (int)local_10d0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar11,&local_10c8);
  local_1408 = FUN_140a52392(local_218,uVar10);
  FUN_140a50426(local_808);
  local_11a0 = 0x3f800000;
  local_119c = 1;
  local_1198 = 0;
  uStack_1190 = 0;
  lVar11 = FUN_140a5475a(local_808);
  local_11c8 = *puVar16;
  uStack_11c4 = *(undefined4 *)(lVar9 + 0x4f8);
  uStack_11c0 = *(undefined4 *)(lVar9 + 0x4fc);
  uStack_11bc = *(undefined4 *)(lVar9 + 0x500);
  local_11b8 = 1;
  local_11b0 = 0;
  uStack_11a8 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = local_11c8;
  *(undefined4 *)(lVar11 + 0x1c) = uStack_11c4;
  *(undefined4 *)(lVar11 + 0x20) = uStack_11c0;
  *(undefined4 *)(lVar11 + 0x24) = uStack_11bc;
  FUN_144a450dc(lVar11 + 0x30,&local_11b0);
  FUN_1449db362(&local_11b0);
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  local_13e0 = lVar11;
  FUN_146a63634(&local_d00);
  local_1200 = CONCAT11(1,DAT_14c96b1e1);
  local_11f8 = 0;
  uStack_11f0 = 0;
  local_c90 = local_1200;
  FUN_144a450dc(local_c88,&local_11f8);
  FUN_1449db362(&local_11f8);
  FUN_144a87366(local_1278,local_13f8);
  local_1218 = *(undefined1 *)(param_2 + 0x478);
  local_1210 = 0;
  local_1208 = 0;
  FUN_140a5d470(&local_1210,local_13f0);
  FUN_1412cc59c(local_ad8,local_1278);
  local_a78 = local_1218;
  FUN_144a450dc(local_a70,&local_1210);
  FUN_141515cba(local_1278);
  local_1290 = 0x101;
  local_1288 = 0;
  uStack_1280 = 0;
  local_990 = 0x101;
  FUN_144a450dc(local_988,&local_1288);
  FUN_1449db362(&local_1288);
  local_ff8 = FUN_148b41258;
  local_ff0 = 0;
  FUN_148b413d4(&local_d00,param_1);
  local_dc0 = (code *)&LAB_148b414ac;
  local_db8 = 0;
  FUN_148b42f6e(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8f0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_148b414be;
  local_db8 = 0;
  FUN_148b43410(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8e0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_148b417ac;
  local_db8 = 0;
  FUN_148b438b2(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8d0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_12a8 = *(undefined2 *)(param_2 + 0x4f8);
  local_12a0 = 0;
  local_1298 = 0;
  FUN_14096c7c0(&local_12a0,param_2 + 0x500);
  local_948 = local_12a8;
  FUN_144a450dc(local_940,&local_12a0);
  FUN_1449db362(&local_12a0);
  local_12c0 = *(undefined2 *)(param_2 + 0x510);
  local_12b8 = 0;
  local_12b0 = 0;
  FUN_14096c7c0(&local_12b8,param_2 + 0x518);
  local_8a8 = local_12c0;
  FUN_144a450dc(local_8a0,&local_12b8);
  FUN_1449db362(&local_12b8);
  local_ff8 = FUN_148b41366;
  local_ff0 = 0;
  FUN_148b418fc(&local_d00,param_1,&local_ff8);
  local_12d8 = *(undefined4 *)(param_2 + 0x558);
  local_12d4 = *(undefined1 *)(param_2 + 0x55c);
  local_12d0 = 0;
  local_12c8 = 0;
  FUN_146a74c58(&local_12d0,param_2 + 0x560);
  local_85c = local_12d4;
  local_860 = local_12d8;
  FUN_144a450dc(local_858,&local_12d0);
  FUN_1449db362(&local_12d0);
  local_12ec = *(undefined1 *)(local_13e8 + 1);
  local_12f0 = *local_13e8;
  local_12e8 = 0;
  local_12e0 = 0;
  FUN_140a5d648(&local_12e8,local_13d8);
  local_92c = local_12ec;
  local_930 = local_12f0;
  FUN_144a450dc(local_928,&local_12e8);
  FUN_1449db362(&local_12e8);
  local_1308 = 0x101;
  local_1300 = 0;
  uStack_12f8 = 0;
  local_840 = 0x101;
  FUN_144a450dc(local_838,&local_1300);
  FUN_1449db362(&local_1300);
  FUN_146a26a60(local_870,param_2 + 0x588);
  local_1418 = &local_1321;
  FUN_146a7c5de(&local_1320,"SEditableText","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x138
               );
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1318 + 1) = (int)local_1318[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = local_1320;
  *(longlong **)(param_1 + 0x2e0) = local_1318;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  FUN_146a639a0(&local_1320,&local_11e8,&local_d00);
  local_11d8 = local_11e8;
  local_11d0 = local_11e0;
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11e0 + 1) = (int)local_11e0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(local_13e0,&local_11d8);
  uVar10 = FUN_140a52392(local_1408,uVar10);
  FUN_140a50426(&local_dc0);
  lVar9 = FUN_140a52578(&local_dc0);
  *(undefined4 *)(lVar9 + 0x40) = 0;
  *(undefined1 *)(lVar9 + 0x44) = 1;
  *(undefined4 *)(lVar9 + 0x48) = 2;
  *(undefined1 *)(lVar9 + 0x4c) = 1;
  FUN_140a53334(&local_ff8);
  local_1368 = *(longlong *)(param_2 + 0x1a8) + 0x430;
  local_1360 = 1;
  local_1358 = 0;
  uStack_1350 = 0;
  local_e48 = 1;
  local_e50 = local_1368;
  FUN_144a450dc(local_e40,&local_1358);
  FUN_1449db362(&local_1358);
  local_1390 = 0x3f800000;
  puStack_1388 = &DAT_3f8000003f800000;
  local_1380 = CONCAT22(local_1380._2_2_,2);
  local_137c = 1;
  local_1378 = 0;
  uStack_1370 = 0;
  local_e30 = 0x3f800000;
  uStack_e2c = 0;
  uStack_e28 = 0x3f800000;
  uStack_e24 = 0x3f800000;
  local_e20 = local_1380;
  local_e1c = 1;
  FUN_144a450dc(local_e18,&local_1378);
  FUN_1449db362(&local_1378);
  local_1418 = &local_13a9;
  FUN_140a554b8(local_13a8,"SImage","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x14d);
  FUN_140a52c70(local_13a8,&local_1348,&local_ff8);
  local_1338 = local_1348;
  local_1330 = local_1340;
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1340 + 1) = (int)local_1340[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar9,&local_1338);
  uVar10 = FUN_140a52392(uVar10,uVar12);
  local_1418 = &local_13c9;
  FUN_140a541dc(local_13c8,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x124
               );
  FUN_140a50ec6(local_13c8,&local_1078,uVar10);
  local_1068 = local_1078;
  local_1060 = local_1070;
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1070 + 1) = (int)local_1070[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_1400,&local_1068);
  plVar8 = local_1060;
  if (local_1060 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1060 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1060)(local_1060);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1070 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1070)(local_1070);
      LOCK();
      piVar1 = (int *)((longlong)local_1070 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1070 + 0x10))(local_1070);
      }
    }
  }
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_13c0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_13c0)(local_13c0);
      LOCK();
      piVar1 = (int *)((longlong)local_13c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13c0 + 0x10))(local_13c0);
      }
    }
  }
  plVar8 = local_1330;
  if (local_1330 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1330 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1330)(local_1330);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1340 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1340)(local_1340);
      LOCK();
      piVar1 = (int *)((longlong)local_1340 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1340 + 0x10))(local_1340);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_13a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar1 = (int *)((longlong)local_13a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  FUN_140a55a86(&local_ff8);
  FUN_140a509a6(&local_dc0);
  plVar8 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_11d0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_11e0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_11e0)(local_11e0);
      LOCK();
      piVar1 = (int *)((longlong)local_11e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11e0 + 0x10))(local_11e0);
      }
    }
  }
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1318 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1318)(local_1318);
      LOCK();
      piVar1 = (int *)((longlong)local_1318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1318 + 0x10))(local_1318);
      }
    }
  }
  FUN_146a63a14(&local_d00);
  FUN_140a509a6(local_808);
  plVar8 = local_10c0;
  if (local_10c0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_10c0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_10c0)(local_10c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10d0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_10d0)(local_10d0);
      LOCK();
      piVar1 = (int *)((longlong)local_10d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_10d0 + 0x10))(local_10d0);
      }
    }
  }
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1178 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1178)(local_1178);
      LOCK();
      piVar1 = (int *)((longlong)local_1178 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1178 + 0x10))(local_1178);
      }
    }
  }
  FUN_140a59ae6(&local_748);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  if ((local_60 ^ (ulonglong)auStack_1438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b40eda FUN_148b40eda body=244 status=ok
// SIG undefined FUN_148b40eda(void)

void FUN_148b40eda(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x278);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
            (*(longlong **)(param_1 + 0x2e8),&local_28,param_1 + 0x5a0);
  if ((longlong *)(param_1 + 0x5a8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x5a8) = local_28;
    *(undefined4 *)(param_1 + 0x5b0) = local_20;
    *(undefined4 *)(param_1 + 0x5b4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b40fd0 FUN_148b40fd0 body=215 status=ok
// SIG undefined FUN_148b40fd0(void)

void FUN_148b40fd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x4a4);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x4a0);
    }
    local_38 = *(undefined1 *)(param_1 + 0x4a8);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x4b0);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b410a8 FUN_148b410a8 body=215 status=ok
// SIG undefined FUN_148b410a8(void)

void FUN_148b410a8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x484);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x480);
    }
    local_38 = *(undefined1 *)(param_1 + 0x488);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x490);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b41180 FUN_148b41180 body=215 status=ok
// SIG undefined FUN_148b41180(void)

longlong FUN_148b41180(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b424d0(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b41258 FUN_148b41258 body=93 status=ok
// SIG undefined FUN_148b41258(void)

undefined8 FUN_148b41258(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148b429b2(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b412b6 FUN_148b412b6 body=175 status=ok
// SIG undefined FUN_148b412b6(void)

longlong FUN_148b412b6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b42ac4(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x42c) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x428) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x430,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b41366 FUN_148b41366 body=109 status=ok
// SIG undefined FUN_148b41366(void)

float FUN_148b41366(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x578) != 0) && (*(longlong **)(param_1 + 0x570) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x570) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x578) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x570);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x568) = uVar3;
    }
  }
  fVar5 = *(float *)(param_1 + 0x568) - *(float *)(*(longlong *)(param_1 + 0x300) + 0x450);
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  return fVar4;
}



// FUNCTION 148b413d4 FUN_148b413d4 body=215 status=ok
// SIG undefined FUN_148b413d4(void)

longlong FUN_148b413d4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b424d0(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b414be FUN_148b414be body=749 status=ok
// SIG undefined FUN_148b414be(void)

void FUN_148b414be(longlong param_1,undefined8 param_2)

{
  wint_t _C;
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  wint_t *pwVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90 [2];
  longlong local_80 [2];
  wint_t *local_70;
  int local_68;
  undefined4 local_64;
  longlong *local_60;
  char local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x5ba) == '\0') {
    *(undefined1 *)(param_1 + 0x5ba) = 1;
    puVar5 = (undefined8 *)FUN_1447a1f4a(param_2);
    local_70 = (wint_t *)0x0;
    local_68 = *(int *)(puVar5 + 1);
    lVar11 = (longlong)local_68;
    _Src = (void *)*puVar5;
    if (lVar11 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar11 * 2);
      iVar4 = local_68 + -1;
      if (local_68 == 0) {
        iVar4 = 0;
      }
      if (local_68 - 2U < 0x7fffffff) {
        lVar11 = 0;
        do {
          cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x38))
                            (*(longlong **)(param_1 + 0x2e8),local_70[lVar11]);
          iVar8 = local_68 + -1;
          if (local_68 == 0) {
            iVar8 = 0;
          }
          if (cVar3 == '\0') {
            iVar4 = (int)lVar11;
            break;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        if (iVar4 < iVar8) {
          if (iVar4 < 1) {
            FUN_148b429b2(param_1,local_80);
          }
          else {
            pwVar9 = local_70;
            if (local_68 == 0) {
              pwVar9 = &DAT_149dfb77a;
            }
            FUN_14006620a(local_80,pwVar9,iVar4);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x2d8);
          FUN_140009b9a(local_90,local_80);
          FUN_14023423e(&local_60,local_90);
          local_50 = 1;
          local_48 = 0;
          uStack_40 = 0;
          FUN_146a5407e(uVar6,&local_60);
          FUN_1449db362(&local_48);
          if (local_60 != (longlong *)0x0) {
            (**(code **)(*local_60 + 0x10))();
          }
          if (local_90[0] != (longlong *)0x0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
          if (local_80[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x5bd) == '\x01') {
      pwVar9 = local_70;
      if (local_68 == 0) {
        pwVar9 = &DAT_149dfb77a;
      }
      if ((*pwVar9 == 0x2d) || (*pwVar9 == 0x2b)) {
        pwVar9 = pwVar9 + 1;
      }
      bVar10 = false;
      do {
        _C = *pwVar9;
        if (_C == 0x2e) {
          bVar2 = true;
          if (bVar10) break;
        }
        else {
          if (_C == 0) {
            plVar1 = *(longlong **)(param_1 + 0x2e8);
            if (((*(int *)(param_1 + 0x280) != 0) &&
                (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
               (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar3 != '\0')) {
              if (*(int *)(param_1 + 0x280) == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = *(longlong **)(param_1 + 0x278);
              }
              uVar6 = (**(code **)(*plVar7 + 0x58))();
              *(undefined8 *)(param_1 + 0x268) = uVar6;
            }
            (**(code **)(*plVar1 + 0x30))
                      (plVar1,&local_60,&local_70,(undefined8 *)(param_1 + 0x268));
            if (local_58 == '\x01') {
              auVar12._8_4_ = (int)((ulonglong)local_60 >> 0x20);
              auVar12._0_8_ = local_60;
              auVar12._12_4_ = 0x45300000;
              local_98 = 0;
              FUN_143fab63c(param_1,local_60,
                            ((double)CONCAT44(0x43300000,(int)local_60) - 4503599627370496.0) +
                            (auVar12._8_8_ - 1.9342813113834067e+25),3);
            }
            break;
          }
          iVar4 = iswdigit(_C);
          bVar2 = bVar10;
          if (iVar4 == 0) break;
        }
        bVar10 = bVar2;
        pwVar9 = pwVar9 + 1;
      } while( true );
    }
    if (local_70 != (wint_t *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x5ba) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b417ac FUN_148b417ac body=334 status=ok
// SIG undefined FUN_148b417ac(void)

void FUN_148b417ac(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 1) {
    local_68 = DAT_14c96b238;
    uStack_67 = 1;
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
    local_80 = DAT_14c96b1e1;
    local_7f = 1;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x278);
      }
      uVar3 = (**(code **)(*plVar4 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar3;
    }
  }
  uVar3 = FUN_1447a1f4a(param_2);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_68,uVar3,(undefined8 *)(param_1 + 0x268));
  if ((char)local_60 == '\x01') {
    uVar3 = CONCAT62(uStack_66,CONCAT11(uStack_67,local_68));
    auVar5._8_4_ = (int)((uint6)uStack_66 >> 0x10);
    auVar5._0_8_ = uVar3;
    auVar5._12_4_ = 0x45300000;
    local_88 = param_3;
    FUN_143fab63c(param_1,uVar3,
                  ((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0) +
                  (auVar5._8_8_ - 1.9342813113834067e+25),1);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b418fc FUN_148b418fc body=175 status=ok
// SIG undefined FUN_148b418fc(void)

longlong FUN_148b418fc(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b42ac4(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x444) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x440) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x448,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b419ac FUN_148b419ac body=29 status=ok
// SIG undefined FUN_148b419ac(void)

undefined8 FUN_148b419ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b419d2 FUN_148b419d2 body=60 status=ok
// SIG undefined FUN_148b419d2(void)

void FUN_148b419d2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 1;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}



// FUNCTION 148b41a0e FUN_148b41a0e body=60 status=ok
// SIG undefined FUN_148b41a0e(void)

void FUN_148b41a0e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 6;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 148b41a4a FUN_148b41a4a body=176 status=ok
// SIG undefined FUN_148b41a4a(void)

undefined8 * FUN_148b41a4a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined4 uStack_54;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined4 uStack_34;
  undefined2 uStack_2a;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141366fce(&local_38);
  uStack_37 = 0;
  local_58 = local_38;
  uStack_57 = 0;
  uStack_54 = uStack_34;
  uStack_4a = uStack_2a;
  local_48 = 0;
  uVar2 = FUN_140b6087d();
  uVar1 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = local_48;
  local_38 = local_58;
  uStack_37 = uStack_57;
  uStack_34 = uStack_54;
  uStack_2a = uStack_4a;
  local_68 = param_2;
  FUN_14010d0dd(0,uVar1,uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b41afc FUN_148b41afc body=664 status=ok
// SIG undefined FUN_148b41afc(void)

ulonglong *
FUN_148b41afc(undefined8 param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_b8 [32];
  double *local_98;
  char *local_90;
  ulonglong *local_88;
  int *local_80;
  int local_78;
  undefined2 local_74;
  undefined1 local_72;
  ulonglong local_70;
  char local_61;
  double local_60 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1467cf2b8(local_60);
  iVar2 = 0;
  local_60[0] = (double)((ulonglong)local_60[0] & 0xffffffffffffff00);
  local_74 = local_60[0]._0_2_;
  local_72 = 1;
  local_78 = 0;
  uVar3 = FUN_140b6087d();
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
    iVar2 = *(int *)(param_3 + 1) + -1;
  }
  local_61 = '\0';
  local_70 = 0;
  local_60[0] = 0.0;
  local_60[1] = -NAN;
  local_50 = 0;
  local_98 = local_60;
  local_90 = &local_61;
  local_88 = &local_70;
  local_80 = &local_78;
  cVar1 = FUN_1467c5604(puVar5,iVar2,uVar3,&local_74);
  uVar4 = -local_70;
  if (local_61 == '\0') {
    uVar4 = local_70;
  }
  if (cVar1 == '\0') {
LAB_148b41be4:
    iVar2 = 0;
    local_78 = 0;
    uVar3 = FUN_140b60818();
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
      iVar2 = *(int *)(param_3 + 1) + -1;
    }
    local_61 = '\0';
    local_70 = 0;
    local_60[0] = 0.0;
    local_60[1] = -NAN;
    local_50 = 0;
    local_98 = local_60;
    local_90 = &local_61;
    local_88 = &local_70;
    local_80 = &local_78;
    cVar1 = FUN_1467c5604(puVar5,iVar2,uVar3,&local_74);
    uVar4 = -local_70;
    if (local_61 == '\0') {
      uVar4 = local_70;
    }
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar2 = 0;
      }
      if (local_78 == iVar2) goto LAB_148b41bd8;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb9bc58) && (FUN_144b3d300(&DAT_14cb9bc58), DAT_14cb9bc58 == -1)) {
      FUN_1467ebd14(&DAT_14cb9b9c0);
      atexit((_func_5014 *)&LAB_143fabdb2);
      _Init_thread_footer(&DAT_14cb9bc58);
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    FUN_1467ecfa6(&DAT_14cb9b9c0,local_60,puVar5,
                  SUB84(((double)CONCAT44(0x43300000,(int)*param_4) - 4503599627370496.0) +
                        ((double)CONCAT44(0x45300000,(int)((ulonglong)*param_4 >> 0x20)) -
                        1.9342813113834067e+25),0));
    cVar1 = (&DAT_149f209a8)[local_50];
    if (cVar1 == '\x01') {
      *param_2 = (longlong)(local_60[0] - 9.223372036854776e+18) & (longlong)local_60[0] >> 0x3f |
                 (longlong)local_60[0];
    }
    *(bool *)(param_2 + 1) = cVar1 == '\x01';
    (*(code *)(&PTR_FUN_149f209b0)[local_50])(local_60);
  }
  else {
    iVar2 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar2 = 0;
    }
    if (local_78 != iVar2) goto LAB_148b41be4;
LAB_148b41bd8:
    *param_2 = uVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b41d96 FUN_148b41d96 body=216 status=ok
// SIG undefined FUN_148b41d96(void)

ulonglong FUN_148b41d96(undefined8 param_1,short param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((int)puVar3[0x44] < DAT_14cb9bc70) {
    puVar3 = &DAT_14cb9bc70;
    FUN_144b3d300(&DAT_14cb9bc70);
    if (DAT_14cb9bc70 == -1) {
      FUN_140056680(&DAT_14cb9bc60);
      atexit((_func_5014 *)&LAB_143fabdbe);
      puVar3 = &DAT_14cb9bc70;
      _Init_thread_footer(&DAT_14cb9bc70);
    }
  }
  if (param_2 != 0) {
    if ((longlong)DAT_14cb9bc68 != 0) {
      lVar4 = 0;
      do {
        if (*(short *)((longlong)DAT_14cb9bc60 + lVar4) == param_2) {
          uVar1 = CONCAT71((int7)((ulonglong)DAT_14cb9bc60 >> 8),1);
          goto LAB_148b41e15;
        }
        lVar4 = lVar4 + 2;
        puVar3 = DAT_14cb9bc60;
      } while ((longlong)DAT_14cb9bc68 * 2 != lVar4);
    }
    lVar4 = FUN_140b6087d();
    uVar1 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    if ((*(short *)(lVar4 + 0x70) == param_2) || (*(short *)(lVar4 + 0x72) == param_2))
    goto LAB_148b41e15;
    lVar2 = 0;
    do {
      if (*(short *)(lVar4 + 0x78 + lVar2) == param_2) {
        uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 + 0x78 + lVar2 != 0);
        goto LAB_148b41e15;
      }
      lVar2 = lVar2 + 2;
    } while (lVar2 != 0x14);
  }
  uVar1 = 0;
LAB_148b41e15:
  return uVar1 & 0xffffffff;
}



// FUNCTION 148b41e6e FUN_148b41e6e body=3 status=ok
// SIG undefined FUN_148b41e6e(void)

undefined8 FUN_148b41e6e(void)

{
  return 0;
}



// FUNCTION 148b41e72 FUN_148b41e72 body=24 status=ok
// SIG undefined FUN_148b41e72(void)

void FUN_148b41e72(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b41e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148b41e8a FUN_148b41e8a body=29 status=ok
// SIG undefined FUN_148b41e8a(void)

undefined8 FUN_148b41e8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b41ea8 FUN_148b41ea8 body=313 status=ok
// SIG undefined FUN_148b41ea8(void)

longlong * FUN_148b41ea8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b41fa4:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f5b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b41fa4;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f5b0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b41fe2 FUN_148b41fe2 body=64 status=ok
// SIG undefined FUN_148b41fe2(void)

undefined8 * FUN_148b41fe2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f5b0;
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



// FUNCTION 148b42026 FUN_148b42026 body=81 status=ok
// SIG undefined FUN_148b42026(void)

undefined8 FUN_148b42026(longlong param_1)

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



// FUNCTION 148b4207e FUN_148b4207e body=89 status=ok
// SIG undefined FUN_148b4207e(void)

bool FUN_148b4207e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b420c9;
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
LAB_148b420c9:
  return lVar6 == param_2;
}



// FUNCTION 148b420f4 FUN_148b420f4 body=118 status=ok
// SIG undefined FUN_148b420f4(void)

void FUN_148b420f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55f5b0;
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



// FUNCTION 148b4216a FUN_148b4216a body=118 status=ok
// SIG undefined FUN_148b4216a(void)

void FUN_148b4216a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b55f5b0;
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



// FUNCTION 148b421e0 FUN_148b421e0 body=156 status=ok
// SIG undefined FUN_148b421e0(void)

void FUN_148b421e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f5b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b4226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4227c FUN_148b4227c body=100 status=ok
// SIG undefined FUN_148b4227c(void)

void FUN_148b4227c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b422c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b422d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b422e0 FUN_148b422e0 body=100 status=ok
// SIG undefined FUN_148b422e0(void)

ulonglong FUN_148b422e0(longlong param_1)

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
LAB_148b42339:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b42339;
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



// FUNCTION 148b42344 FUN_148b42344 body=130 status=ok
// SIG undefined FUN_148b42344(void)

void FUN_148b42344(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b423c8 FUN_148b423c8 body=130 status=ok
// SIG undefined FUN_148b423c8(void)

void FUN_148b423c8(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b4244c FUN_148b4244c body=130 status=ok
// SIG undefined FUN_148b4244c(void)

void FUN_148b4244c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b424d0 FUN_148b424d0 body=313 status=ok
// SIG undefined FUN_148b424d0(void)

longlong * FUN_148b424d0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b425cc:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f620;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b425cc;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f620;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4260a FUN_148b4260a body=64 status=ok
// SIG undefined FUN_148b4260a(void)

undefined8 * FUN_148b4260a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f620;
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



// FUNCTION 148b4264e FUN_148b4264e body=81 status=ok
// SIG undefined FUN_148b4264e(void)

undefined8 FUN_148b4264e(longlong param_1)

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



// FUNCTION 148b426a6 FUN_148b426a6 body=89 status=ok
// SIG undefined FUN_148b426a6(void)

bool FUN_148b426a6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b426f1;
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
LAB_148b426f1:
  return lVar6 == param_2;
}



// FUNCTION 148b4271c FUN_148b4271c body=118 status=ok
// SIG undefined FUN_148b4271c(void)

void FUN_148b4271c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f620;
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



// FUNCTION 148b42792 FUN_148b42792 body=118 status=ok
// SIG undefined FUN_148b42792(void)

void FUN_148b42792(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f620;
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



// FUNCTION 148b42808 FUN_148b42808 body=156 status=ok
// SIG undefined FUN_148b42808(void)

void FUN_148b42808(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f620;
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
                    /* WARNING: Could not recover jumptable at 0x000148b42894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b428a4 FUN_148b428a4 body=105 status=ok
// SIG undefined FUN_148b428a4(void)

undefined8 FUN_148b428a4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b428f8:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148b428f8;
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
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
    LOCK();
    plVar1 = plVar3 + 1;
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



// FUNCTION 148b4290e FUN_148b4290e body=162 status=ok
// SIG undefined FUN_148b4290e(void)

ulonglong FUN_148b4290e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b4298e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4298e;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b429b2 FUN_148b429b2 body=271 status=ok
// SIG undefined FUN_148b429b2(void)

undefined8 * FUN_148b429b2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x278);
      }
      uVar3 = (**(code **)(*plVar4 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar3;
    }
  }
  local_28 = *(longlong *)(param_1 + 0x268);
  if ((*(char *)(param_1 + 0x5b8) == '\0') && (local_28 == *(longlong *)(param_1 + 0x5a0))) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x5b0);
    _Src = *(void **)(param_1 + 0x5a8);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
              (*(longlong **)(param_1 + 0x2e8),param_2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b42ac4 FUN_148b42ac4 body=313 status=ok
// SIG undefined FUN_148b42ac4(void)

longlong * FUN_148b42ac4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b42bc0:
    *puVar5 = &PTR_LAB_149f05210;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f690;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b42bc0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05210;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f690;
    puVar5[3] = uVar10;
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



// FUNCTION 148b42bfe FUN_148b42bfe body=64 status=ok
// SIG undefined FUN_148b42bfe(void)

undefined8 * FUN_148b42bfe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f690;
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



// FUNCTION 148b42c42 FUN_148b42c42 body=81 status=ok
// SIG undefined FUN_148b42c42(void)

undefined8 FUN_148b42c42(longlong param_1)

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



// FUNCTION 148b42c9a FUN_148b42c9a body=89 status=ok
// SIG undefined FUN_148b42c9a(void)

bool FUN_148b42c9a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b42ce5;
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
LAB_148b42ce5:
  return lVar6 == param_2;
}



// FUNCTION 148b42d10 FUN_148b42d10 body=118 status=ok
// SIG undefined FUN_148b42d10(void)

void FUN_148b42d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f690;
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



// FUNCTION 148b42d86 FUN_148b42d86 body=118 status=ok
// SIG undefined FUN_148b42d86(void)

void FUN_148b42d86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f690;
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



// FUNCTION 148b42dfc FUN_148b42dfc body=156 status=ok
// SIG undefined FUN_148b42dfc(void)

void FUN_148b42dfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f690;
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
                    /* WARNING: Could not recover jumptable at 0x000148b42e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b42e98 FUN_148b42e98 body=114 status=ok
// SIG undefined FUN_148b42e98(void)

undefined4 FUN_148b42e98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
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
        uVar7 = (**(code **)(param_1 + 0x28))
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
        return uVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b42f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b42f0a FUN_148b42f0a body=100 status=ok
// SIG undefined FUN_148b42f0a(void)

ulonglong FUN_148b42f0a(longlong param_1)

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
LAB_148b42f63:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b42f63;
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



// FUNCTION 148b42f6e FUN_148b42f6e body=313 status=ok
// SIG undefined FUN_148b42f6e(void)

longlong * FUN_148b42f6e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4306a:
    *puVar5 = &PTR_LAB_149f21180;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f700;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4306a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f21180;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f700;
    puVar5[3] = uVar10;
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



// FUNCTION 148b430a8 FUN_148b430a8 body=64 status=ok
// SIG undefined FUN_148b430a8(void)

undefined8 * FUN_148b430a8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f700;
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



// FUNCTION 148b430ec FUN_148b430ec body=81 status=ok
// SIG undefined FUN_148b430ec(void)

undefined8 FUN_148b430ec(longlong param_1)

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



// FUNCTION 148b43144 FUN_148b43144 body=89 status=ok
// SIG undefined FUN_148b43144(void)

bool FUN_148b43144(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b4318f;
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
LAB_148b4318f:
  return lVar6 == param_2;
}



// FUNCTION 148b431ba FUN_148b431ba body=118 status=ok
// SIG undefined FUN_148b431ba(void)

void FUN_148b431ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f700;
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



// FUNCTION 148b43230 FUN_148b43230 body=118 status=ok
// SIG undefined FUN_148b43230(void)

void FUN_148b43230(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f700;
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



// FUNCTION 148b432a6 FUN_148b432a6 body=156 status=ok
// SIG undefined FUN_148b432a6(void)

void FUN_148b432a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f21180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f700;
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
                    /* WARNING: Could not recover jumptable at 0x000148b43332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b43342 FUN_148b43342 body=104 status=ok
// SIG undefined FUN_148b43342(void)

ulonglong FUN_148b43342(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b433a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b433aa FUN_148b433aa body=101 status=ok
// SIG undefined FUN_148b433aa(void)

ulonglong FUN_148b433aa(longlong param_1)

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
LAB_148b43404:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b43404;
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



// FUNCTION 148b43410 FUN_148b43410 body=313 status=ok
// SIG undefined FUN_148b43410(void)

longlong * FUN_148b43410(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4350c:
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f770;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4350c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f770;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4354a FUN_148b4354a body=64 status=ok
// SIG undefined FUN_148b4354a(void)

undefined8 * FUN_148b4354a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f770;
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



// FUNCTION 148b4358e FUN_148b4358e body=81 status=ok
// SIG undefined FUN_148b4358e(void)

undefined8 FUN_148b4358e(longlong param_1)

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



// FUNCTION 148b435e6 FUN_148b435e6 body=89 status=ok
// SIG undefined FUN_148b435e6(void)

bool FUN_148b435e6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b43631;
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
LAB_148b43631:
  return lVar6 == param_2;
}



// FUNCTION 148b4365c FUN_148b4365c body=118 status=ok
// SIG undefined FUN_148b4365c(void)

void FUN_148b4365c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f770;
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



// FUNCTION 148b436d2 FUN_148b436d2 body=118 status=ok
// SIG undefined FUN_148b436d2(void)

void FUN_148b436d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f770;
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



// FUNCTION 148b43748 FUN_148b43748 body=156 status=ok
// SIG undefined FUN_148b43748(void)

void FUN_148b43748(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f770;
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
                    /* WARNING: Could not recover jumptable at 0x000148b437d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b437e4 FUN_148b437e4 body=104 status=ok
// SIG undefined FUN_148b437e4(void)

void FUN_148b437e4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b43831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b43842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b4384c FUN_148b4384c body=101 status=ok
// SIG undefined FUN_148b4384c(void)

ulonglong FUN_148b4384c(longlong param_1)

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
LAB_148b438a6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b438a6;
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



// FUNCTION 148b438b2 FUN_148b438b2 body=313 status=ok
// SIG undefined FUN_148b438b2(void)

longlong * FUN_148b438b2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b439ae:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55f7e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b439ae;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55f7e0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b439ec FUN_148b439ec body=64 status=ok
// SIG undefined FUN_148b439ec(void)

undefined8 * FUN_148b439ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55f7e0;
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



// FUNCTION 148b43a30 FUN_148b43a30 body=81 status=ok
// SIG undefined FUN_148b43a30(void)

undefined8 FUN_148b43a30(longlong param_1)

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



// FUNCTION 148b43a88 FUN_148b43a88 body=89 status=ok
// SIG undefined FUN_148b43a88(void)

bool FUN_148b43a88(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b43ad3;
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
LAB_148b43ad3:
  return lVar6 == param_2;
}



// FUNCTION 148b43afe FUN_148b43afe body=118 status=ok
// SIG undefined FUN_148b43afe(void)

void FUN_148b43afe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f7e0;
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



// FUNCTION 148b43b74 FUN_148b43b74 body=118 status=ok
// SIG undefined FUN_148b43b74(void)

void FUN_148b43b74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55f7e0;
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



// FUNCTION 148b43bea FUN_148b43bea body=156 status=ok
// SIG undefined FUN_148b43bea(void)

void FUN_148b43bea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55f7e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b43c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b43c86 FUN_148b43c86 body=104 status=ok
// SIG undefined FUN_148b43c86(void)

void FUN_148b43c86(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b43cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b43ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b43cee FUN_148b43cee body=101 status=ok
// SIG undefined FUN_148b43cee(void)

ulonglong FUN_148b43cee(longlong param_1)

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
LAB_148b43d48:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b43d48;
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



// FUNCTION 148b43d54 FUN_148b43d54 body=324 status=ok
// SIG undefined FUN_148b43d54(void)

longlong * FUN_148b43d54(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x5e8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55f850;
  plVar4 = plVar3 + 2;
  FUN_148b43e9a(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b474d8(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b43e2b;
    param_1[1] = 0;
LAB_148b43df5:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b43e2b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b43e2b;
      goto LAB_148b43df5;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b43e2b;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b43e2b:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x5d8;
  FUN_140a52e78(*param_1,"SSpinBox<double>",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SNumericPropertyValue.cpp"
                ,0x42);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b43e9a FUN_148b43e9a body=464 status=ok
// SIG undefined FUN_148b43e9a(void)

undefined8 * FUN_148b43e9a(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b55f870;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35d) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x375) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38d) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a5) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c1) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined2 *)((longlong)param_1 + 0x5bc) = 1;
  *(undefined1 *)(param_1 + 0xba) = 0;
  return param_1;
}



// FUNCTION 148b4406a FUN_148b4406a body=9 status=ok
// SIG undefined FUN_148b4406a(void)

void FUN_148b4406a(longlong param_1)

{
  FUN_148b46a44(param_1 + 0x10);
  return;
}



// FUNCTION 148b44074 FUN_148b44074 body=29 status=ok
// SIG undefined FUN_148b44074(void)

undefined8 FUN_148b44074(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b44092 FUN_148b44092 body=38 status=ok
// SIG undefined FUN_148b44092(void)

undefined8 FUN_148b44092(undefined8 param_1,int param_2)

{
  FUN_148b46a44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b440b8 FUN_148b440b8 body=87 status=ok
// SIG undefined FUN_148b440b8(void)

void FUN_148b440b8(longlong param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x5d0) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x5c0);
    dVar2 = dVar1;
    if (1.79769313486232e+308 <= dVar1) {
      dVar2 = 1.79769313486232e+308;
    }
    if (dVar2 <= -1.79769313486232e+308) {
      dVar2 = -1.79769313486232e+308;
    }
    FUN_143fabdd0(param_1,dVar2,dVar1,*(undefined4 *)(param_1 + 0x5c8),1);
    if (*(char *)(param_1 + 0x5d0) == '\x01') {
      *(undefined1 *)(param_1 + 0x5d0) = 0;
    }
  }
  return;
}



// FUNCTION 148b44110 FUN_148b44110 body=442 status=ok
// SIG undefined FUN_148b44110(void)

undefined1 * FUN_148b44110(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(param_1 + 0x5b9) == '\0') && ((byte)(*param_4 - 1U) < 2)) {
    local_f8 = DAT_14c96b1e1;
    local_f7 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))
              (*(longlong **)(param_1 + 0x2c8),&local_f8);
    local_110 = DAT_14c96b238;
    local_10f = 1;
    local_108 = 0;
    uStack_100 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
    local_f8 = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    cVar3 = *param_4;
    local_120 = *(undefined8 *)(param_1 + 0x2d8);
    plVar4 = *(longlong **)(param_1 + 0x2e0);
    if (plVar4 == (longlong *)0x0) {
      local_118 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_118 = plVar4;
    }
    uVar5 = FUN_140592b68(&local_f8,&local_120,cVar3,0);
    FUN_1403d4c6e(param_2,uVar5);
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
    FUN_14493db24(&local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b442cc FUN_148b442cc body=1315 status=ok
// SIG undefined FUN_148b442cc(void)

undefined1 * FUN_148b442cc(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar3 == DAT_14c964dd0) && (cVar5 = FUN_140591fd6(param_1), cVar5 != '\0')) {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x598);
    FUN_148b46cfc(param_1);
    local_108 = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_d0 = 0;
    uStack_c8 = 0;
    local_54 = 1;
    uVar7 = FUN_146948cd0(&local_108,param_1 + 0x584);
    FUN_1403d4c6e(param_2,uVar7);
LAB_148b444b6:
    FUN_14493db24(&local_108);
    goto LAB_148b445f9;
  }
  if ((lVar3 == DAT_14c964e78) || (lVar3 == DAT_14c964e90)) {
    if ((*(int *)(param_1 + 0x280) != 0) &&
       ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
        (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar5 != '\0')))) {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x278);
      }
      uVar7 = (**(code **)(*plVar6 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar7;
    }
    dVar8 = *(double *)(param_1 + 0x268);
    if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x350);
      }
      uVar7 = (**(code **)(*plVar6 + 0x58))();
      *(undefined8 *)(param_1 + 0x340) = uVar7;
    }
    *(double *)(param_1 + 0x590) = dVar8;
    dVar8 = dVar8 + *(double *)(param_1 + 0x340);
    dVar9 = dVar8;
LAB_148b4456d:
    local_138 = 1;
    FUN_143fabdd0(param_1,dVar8,dVar9,2);
    local_108 = DAT_14c96b238;
    local_107 = 1;
    local_100 = 0;
    uStack_f8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
    local_120 = DAT_14c96b1e1;
    local_11f = 1;
    local_118 = 0;
    uStack_110 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    if ((lVar3 == DAT_14c964ea8) || (lVar3 == DAT_14c964e60)) {
      if ((*(int *)(param_1 + 0x280) != 0) &&
         ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0 &&
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar5 != '\0')))) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x278);
        }
        uVar7 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 0x268) = uVar7;
      }
      dVar9 = *(double *)(param_1 + 0x268);
      if (((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x358) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x350);
        }
        uVar7 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 0x340) = uVar7;
      }
      *(double *)(param_1 + 0x590) = dVar9;
      dVar8 = dVar9 - *(double *)(param_1 + 0x340);
      dVar9 = dVar9 + *(double *)(param_1 + 0x340);
      goto LAB_148b4456d;
    }
    if (lVar3 == DAT_14c964d88) {
      if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x278);
        }
        uVar7 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 0x268) = uVar7;
      }
      *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x268);
      local_108 = DAT_14c96b1e1;
      local_107 = 1;
      local_100 = 0;
      uStack_f8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))
                (*(longlong **)(param_1 + 0x2c8),&local_108);
      local_120 = DAT_14c96b238;
      local_11f = 1;
      local_118 = 0;
      uStack_110 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
      local_108 = 1;
      local_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      memset(local_e0,0,0x88);
      local_58 = 0x20702;
      local_54 = 0;
      local_130 = *(undefined8 *)(param_1 + 0x2d8);
      plVar6 = *(longlong **)(param_1 + 0x2e0);
      if (plVar6 == (longlong *)0x0) {
        local_128 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_128 = plVar6;
      }
      uVar7 = FUN_140592b68(&local_108,&local_130,1,0);
      FUN_1403d4c6e(param_2,uVar7);
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
      goto LAB_148b444b6;
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b445f9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b447f0 FUN_148b447f0 body=1042 status=ok
// SIG undefined FUN_148b447f0(void)

undefined1 * FUN_148b447f0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [136];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_4 + 0x40);
  plVar14 = *(longlong **)(param_4 + 0x50);
  if (plVar14 == (longlong *)0x0) {
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x580);
      goto joined_r0x000148b448ee;
    }
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x580);
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
joined_r0x000148b448ee:
      if (iVar11 == -1) {
        *(undefined4 *)(param_1 + 0x338) = 0;
        if (((*(int *)(param_1 + 0x280) != 0) &&
            (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x280) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x278);
          }
          uVar13 = (**(code **)(*plVar14 + 0x58))();
          *(undefined8 *)(param_1 + 0x268) = uVar13;
        }
        *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x268);
        *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x268);
        *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_4 + 0x58);
        *(ulonglong *)(param_1 + 0x584) =
             CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1
                      ,(int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >>
                       1);
        local_118[0] = 1;
        local_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        pvVar12 = memset(local_f0,0,0x88);
        local_68 = 0x20702;
        local_64 = 0;
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b44a55:
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          local_14c = (undefined4)CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
        }
        else {
          pvVar12 = (void *)(ulonglong)*(uint *)(plVar14 + 1);
          do {
            uVar10 = (uint)pvVar12;
            if (uVar10 == 0) goto LAB_148b44a55;
            LOCK();
            uVar5 = *(uint *)(plVar14 + 1);
            if (uVar10 == uVar5) {
              *(uint *)(plVar14 + 1) = uVar10 + 1;
            }
            else {
              pvVar12 = (void *)(ulonglong)uVar5;
            }
            UNLOCK();
          } while (uVar10 != uVar5);
          uVar13 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
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
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          local_14c = 0;
          local_128 = uVar13;
          plStack_120 = plVar14;
        }
        plVar1 = plStack_120;
        uVar13 = FUN_140592a6e(local_118,&local_128);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b44acc:
          local_138 = 0;
          plStack_130 = (longlong *)0x0;
          bVar15 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_148b44acc;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar15 = iVar11 == iVar8;
            if (bVar15) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar15);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar14 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar15 = false;
          local_138 = uVar7;
          plStack_130 = plVar14;
        }
        plVar3 = plStack_130;
        uVar13 = FUN_140592ae6(uVar13,&local_138);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_148b44b41:
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          bVar16 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_148b44b41;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar16 = iVar11 == iVar8;
            if (bVar16) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar16);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar16 = false;
          local_148 = uVar7;
          plStack_140 = plVar14;
        }
        plVar14 = plStack_140;
        uVar13 = FUN_140592b68(uVar13,&local_148,0,0);
        FUN_1403d4c6e(param_2,uVar13);
        if (!bVar16) {
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (!bVar15) {
          LOCK();
          plVar14 = plVar3 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        if ((char)local_14c == '\0') {
          LOCK();
          plVar14 = plVar1 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        FUN_14493db24(local_118);
        if (*(char *)(param_1 + 0x5bb) == '\x01') {
          param_2[0xb4] = param_2[0xb4] | 0x40;
        }
        goto LAB_148b448a5;
      }
    }
    else {
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
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b448a5:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b44c04 FUN_148b44c04 body=924 status=ok
// SIG undefined FUN_148b44c04(void)

undefined1 * FUN_148b44c04(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if ((lVar6 == DAT_14c966e98) && (*(int *)(param_1 + 0x580) == *(int *)(param_4 + 0x58))) {
LAB_148b44c8b:
      cVar7 = FUN_140591fd6(param_1);
      if (cVar7 == '\0') {
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
        *param_2 = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
      }
      else {
        if (*(char *)(param_1 + 0x5b9) == '\x01') {
          if (((*(int *)(param_1 + 0x358) == 0) ||
              (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar7 == '\0')) {
            dVar10 = *(double *)(param_1 + 0x340);
          }
          else {
            if (*(int *)(param_1 + 0x358) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(param_1 + 0x350);
            }
            dVar10 = (double)(**(code **)(*plVar8 + 0x58))();
            *(double *)(param_1 + 0x340) = dVar10;
          }
          if (((dVar10 != 0.0) || (NAN(dVar10))) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
            auVar11._0_8_ = (dVar10 * 0.5 + *(double *)(param_1 + 0x590)) / dVar10;
            auVar11._8_8_ = 0;
            auVar11 = roundpd(auVar11,auVar11,1);
            *(double *)(param_1 + 0x590) = auVar11._0_8_ * dVar10;
          }
          dVar10 = *(double *)(param_1 + 0x590);
          if (1.79769313486232e+308 <= dVar10) {
            dVar10 = 1.79769313486232e+308;
          }
          if (dVar10 <= -1.79769313486232e+308) {
            dVar10 = -1.79769313486232e+308;
          }
          FUN_148b46cfc(param_1,dVar10);
        }
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
        local_108 = 1;
        local_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        memset(local_e0,0,0x88);
        local_58 = 0x20702;
        local_d0 = 0;
        uStack_c8 = 0;
        local_54 = 1;
        FUN_1403d4c6e(param_2,&local_108);
        FUN_14493db24(&local_108);
        if (*(char *)(param_4 + 100) == '\0') {
          FUN_146948cd0(param_2,param_1 + 0x584);
        }
        fVar3 = *(float *)(param_1 + 0x338);
        fVar9 = (float)FUN_1469aaa10(DAT_14c98e618);
        if (fVar3 < fVar9) {
          local_108 = DAT_14c96b1e1;
          local_107 = 1;
          local_100 = 0;
          uStack_f8 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
          local_120 = DAT_14c96b238;
          local_11f = 1;
          local_118 = 0;
          uStack_110 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
          local_130 = *(undefined8 *)(param_1 + 0x2d8);
          plVar8 = *(longlong **)(param_1 + 0x2e0);
          if (plVar8 == (longlong *)0x0) {
            local_128 = (longlong *)0x0;
            FUN_140592b68(param_2,&local_130,2,0);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_128 = plVar8;
            FUN_140592b68(param_2,&local_130,2,0);
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
          }
        }
      }
      goto LAB_148b44e58;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (lVar6 == DAT_14c966e98) {
      iVar4 = *(int *)(param_1 + 0x580);
      iVar5 = *(int *)(param_4 + 0x58);
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
      if (iVar4 == iVar5) goto LAB_148b44c8b;
    }
    else {
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
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148b44e58:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b44fa2 FUN_148b44fa2 body=3579 status=ok
// SIG undefined FUN_148b44fa2(void)

undefined1 * FUN_148b44fa2(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  float *pfVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_112;
  char local_111;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar7 = FUN_148b47484();
  uVar8 = 0;
  if ((cVar7 == '\0') || (*(int *)(param_1 + 0x580) != *(int *)(param_4 + 0x58)))
  goto LAB_148b4514c;
  cVar7 = FUN_140591fd6();
  if (cVar7 == '\0') {
    *(undefined1 *)(param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
    uVar8 = 0;
    goto LAB_148b4514c;
  }
  if (*(char *)(param_1 + 0x5b9) == '\0') {
    fVar22 = ABS(*(float *)(param_4 + 0x30)) + *(float *)(param_1 + 0x338);
    *(float *)(param_1 + 0x338) = fVar22;
    fVar15 = (float)FUN_1469aaa10(DAT_14c98e618);
    if (fVar15 < fVar22) {
      local_f8 = DAT_14c96b238;
      local_f7 = 1;
      local_f0 = 0;
      uStack_e8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
      local_110 = DAT_14c96b1e1;
      local_10f = 1;
      local_108 = 0;
      uStack_100 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
      *(undefined1 *)(param_1 + 0x5b9) = 1;
      if ((*(int *)(param_1 + 0x2b0) != 0) && (*(longlong **)(param_1 + 0x2a8) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x60))();
      }
    }
    *(ulonglong *)(param_1 + 0x584) =
         CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1,
                  (int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >> 1);
  }
  else {
    fVar15 = *param_3 * param_3[2];
    if (fVar15 <= 100.0) {
      fVar15 = 100.0;
    }
    if ((*(byte *)(param_4 + 8) & 0x30) != 0) {
      fVar22 = *(float *)(param_4 + 0x30);
      if (((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))(), cVar7 != '\0')) {
        if (*(int *)(param_1 + 0x500) == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)(param_1 + 0x4f8);
        }
        uVar8 = (**(code **)(*plVar13 + 0x58))();
        *(undefined1 *)(param_1 + 0x4f0) = uVar8;
      }
      fVar22 = fVar22 / fVar15;
      if (*(char *)(param_1 + 0x4f0) == '\x01') {
        dVar3 = *(double *)(param_1 + 0x590);
        FUN_148b47204(param_1 + 0x458);
        if (*(char *)(param_1 + 0x460) == '\0') {
          uVar18 = 0xffffffff;
          uVar12 = 0x7fefffff;
        }
        else {
          uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x458);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
        }
        if ((dVar3 == (double)CONCAT44(uVar12,uVar18)) &&
           (!NAN(dVar3) && !NAN((double)CONCAT44(uVar12,uVar18)))) {
          FUN_148b46e10(param_1,fVar22,0);
          goto LAB_148b45212;
        }
      }
      if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x30))(), cVar7 != '\0')) {
        if (*(int *)(param_1 + 0x518) == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)(param_1 + 0x510);
        }
        uVar8 = (**(code **)(*plVar13 + 0x58))();
        *(undefined1 *)(param_1 + 0x508) = uVar8;
      }
      if (*(char *)(param_1 + 0x508) == '\x01') {
        dVar3 = *(double *)(param_1 + 0x590);
        FUN_148b47204(param_1 + 0x430);
        if (*(char *)(param_1 + 0x438) == '\0') {
          uVar18 = 0xffffffff;
          uVar12 = 0xffefffff;
        }
        else {
          uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x430);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
        }
        if ((dVar3 == (double)CONCAT44(uVar12,uVar18)) &&
           (!NAN(dVar3) && !NAN((double)CONCAT44(uVar12,uVar18)))) {
          FUN_148b4700a(param_1,fVar22,0);
        }
      }
    }
LAB_148b45212:
    lVar1 = param_1 + 0x458;
    FUN_148b47204(lVar1);
    if (*(char *)(param_1 + 0x460) == '\0') {
      uVar18 = 0xffffffff;
      uVar12 = 0x7fefffff;
    }
    else {
      uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x458);
      uVar12 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
    }
    lVar2 = param_1 + 0x430;
    FUN_148b47204(lVar2);
    if (*(char *)(param_1 + 0x438) == '\0') {
      uVar16 = 0xffffffff;
      uVar17 = 0xffefffff;
    }
    else {
      uVar16 = (undefined4)*(undefined8 *)(param_1 + 0x430);
      uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
    }
    dVar3 = *(double *)
             (&DAT_149f20770 +
             (ulonglong)((double)CONCAT44(uVar12,uVar18) - (double)CONCAT44(uVar17,uVar16) <= 10.0)
             * 8);
    if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
      if ((*(ushort *)(param_4 + 8) & 3) != 0) {
        pfVar14 = (float *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x370) != 0) {
          plVar13 = (longlong *)(param_1 + 0x368);
          if (((longlong *)*plVar13 != (longlong *)0x0) &&
             (cVar7 = (**(code **)(*(longlong *)*plVar13 + 0x30))(), cVar7 != '\0')) {
            iVar11 = *(int *)(param_1 + 0x370);
            goto joined_r0x000148b45456;
          }
        }
        goto LAB_148b45321;
      }
      uVar18 = 0;
      bVar6 = true;
    }
    else {
      pfVar14 = (float *)(param_1 + 0x378);
      if (*(int *)(param_1 + 0x388) != 0) {
        plVar13 = (longlong *)(param_1 + 0x380);
        if (((longlong *)*plVar13 != (longlong *)0x0) &&
           (cVar7 = (**(code **)(*(longlong *)*plVar13 + 0x30))(), cVar7 != '\0')) {
          iVar11 = *(int *)(param_1 + 0x388);
joined_r0x000148b45456:
          if (iVar11 == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)*plVar13;
          }
          fVar22 = (float)(**(code **)(*plVar13 + 0x58))();
          *pfVar14 = fVar22;
        }
      }
LAB_148b45321:
      dVar3 = dVar3 * (double)*pfVar14;
      uVar18 = 4;
      bVar6 = false;
    }
    if (*(char *)(param_1 + 0x2f8) == '\0') {
      if (*(char *)(param_1 + 0x3c8) == '\x01') {
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar4 = (**(code **)(*plVar13 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar4;
        }
        dVar21 = *(double *)(param_1 + 0x3c0);
        FUN_148b47204(lVar2);
        if (*(char *)(param_1 + 0x438) == '\0') {
          uVar12 = 0xffffffff;
          uVar16 = 0xffefffff;
        }
        else {
          uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x430);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
        }
        if (dVar21 < (double)CONCAT44(uVar16,uVar12) || dVar21 == (double)CONCAT44(uVar16,uVar12))
        goto LAB_148b4593e;
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar4 = (**(code **)(*plVar13 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar4;
        }
        dVar21 = *(double *)(param_1 + 0x3c0);
        FUN_148b47204(lVar1);
        if (*(char *)(param_1 + 0x460) == '\0') {
          uVar12 = 0xffffffff;
          uVar16 = 0x7fefffff;
        }
        else {
          uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x458);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
        }
        bVar5 = dVar21 <= (double)CONCAT44(uVar16,uVar12) &&
                (double)CONCAT44(uVar16,uVar12) != dVar21;
      }
      else {
LAB_148b4593e:
        bVar5 = false;
      }
      if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar7 != '\0')) {
        if (*(int *)(param_1 + 0x3b8) == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)(param_1 + 0x3b0);
        }
        uVar12 = (**(code **)(*plVar13 + 0x58))();
        *(undefined4 *)(param_1 + 0x3a8) = uVar12;
      }
      fVar22 = *(float *)(param_1 + 0x3a8);
      FUN_148b47204(lVar1);
      if (*(char *)(param_1 + 0x460) == '\0') {
        dVar21 = 8.988465674311579e+307;
      }
      else {
        dVar21 = *(double *)(param_1 + 0x458) * 0.5;
      }
      FUN_148b47204(lVar2);
      if (*(char *)(param_1 + 0x438) == '\0') {
        dVar19 = -8.988465674311579e+307;
      }
      else {
        dVar19 = *(double *)(param_1 + 0x430) * 0.5;
      }
      dVar21 = (*(double *)(param_1 + 0x590) * 0.5 - dVar19) / (dVar21 - dVar19);
      if (1.0 <= dVar21) {
        dVar21 = 1.0;
      }
      if (dVar21 <= 0.0) {
        dVar21 = 0.0;
      }
      fVar23 = (float)dVar21;
      if (1e-08 < ABS(fVar22 + -1.0)) {
        if (bVar5) {
          FUN_148b47204(lVar1);
          local_111 = *(char *)(param_1 + 0x460);
          dVar21 = *(double *)(param_1 + 0x458) * 0.5;
          FUN_148b47204(lVar2);
          cVar7 = *(char *)(param_1 + 0x438);
          dVar19 = *(double *)(param_1 + 0x430) * 0.5;
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (local_112 = cVar7, cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(),
             cVar7 = local_112, cVar9 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar4 = (**(code **)(*plVar13 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar4;
            cVar7 = local_112;
          }
          if (local_111 == '\0') {
            dVar21 = 8.988465674311579e+307;
          }
          if (cVar7 == '\0') {
            dVar19 = -8.988465674311579e+307;
          }
          dVar21 = (*(double *)(param_1 + 0x3c0) * 0.5 - dVar19) / (dVar21 - dVar19);
          if (1.0 <= dVar21) {
            dVar21 = 1.0;
          }
          if (dVar21 <= 0.0) {
            dVar21 = 0.0;
          }
          fVar23 = (float)FUN_146a86e44(fVar23,(float)dVar21,fVar22);
        }
        else {
          fVar23 = powf(1.0 - fVar23,fVar22);
          fVar23 = 1.0 - fVar23;
        }
      }
      fVar23 = (float)(dVar3 * (double)*(float *)(param_4 + 0x30)) + fVar23 * fVar15;
      if (fVar15 <= fVar23) {
        fVar23 = fVar15;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar23 = fVar23 / fVar15;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (1e-08 < ABS(fVar22 + -1.0)) {
        if (bVar5) {
          FUN_148b47204(lVar1);
          cVar7 = *(char *)(param_1 + 0x460);
          dVar3 = *(double *)(param_1 + 0x458) * 0.5;
          FUN_148b47204(lVar2);
          cVar9 = *(char *)(param_1 + 0x438);
          dVar21 = *(double *)(param_1 + 0x430) * 0.5;
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar10 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar10 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar4 = (**(code **)(*plVar13 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar4;
          }
          if (cVar7 == '\0') {
            dVar3 = 8.988465674311579e+307;
          }
          if (cVar9 == '\0') {
            dVar21 = -8.988465674311579e+307;
          }
          dVar3 = (*(double *)(param_1 + 0x3c0) * 0.5 - dVar21) / (dVar3 - dVar21);
          if (1.0 <= dVar3) {
            dVar3 = 1.0;
          }
          if (dVar3 <= 0.0) {
            dVar3 = 0.0;
          }
          fVar23 = (float)FUN_146a86e44(fVar23,(float)dVar3,1.0 / fVar22);
        }
        else {
          fVar23 = powf(1.0 - fVar23,1.0 / fVar22);
          fVar23 = 1.0 - fVar23;
        }
      }
      FUN_148b47204(lVar1);
      if (*(char *)(param_1 + 0x460) == '\0') {
        uVar12 = 0xffffffff;
        uVar16 = 0x7fefffff;
      }
      else {
        uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x458);
        uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
      }
      FUN_148b47204(lVar2);
      if (*(char *)(param_1 + 0x438) == '\0') {
        uVar17 = 0xffffffff;
        uVar20 = 0xffefffff;
      }
      else {
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x430);
        uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
      }
      dVar3 = (double)CONCAT44(uVar16,uVar12) * (double)fVar23 +
              (double)(1.0 - fVar23) * (double)CONCAT44(uVar20,uVar17);
    }
    else {
      dVar21 = (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x30)];
      if (*(char *)(param_1 + 0x394) == '\x01') {
        if (((*(int *)(param_1 + 0x3a0) == 0) ||
            (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar7 == '\0')) {
          iVar11 = *(int *)(param_1 + 0x390);
        }
        else {
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x398);
          }
          iVar11 = (**(code **)(*plVar13 + 0x58))();
          *(int *)(param_1 + 0x390) = iVar11;
        }
        if ((iVar11 == 0) || (*(char *)(param_1 + 0x348) != '\x01')) goto LAB_148b4558b;
        if ((*(int *)(param_1 + 0x358) == 0) ||
           ((*(longlong **)(param_1 + 0x350) == (longlong *)0x0 ||
            (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar7 == '\0')))) {
          dVar19 = *(double *)(param_1 + 0x340);
        }
        else {
          if (*(int *)(param_1 + 0x358) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x350);
          }
          dVar19 = (double)(**(code **)(*plVar13 + 0x58))();
          *(double *)(param_1 + 0x340) = dVar19;
        }
        if (dVar19 <= 0.0) goto LAB_148b4558b;
        fVar15 = *(float *)(param_4 + 0x30);
        if (((*(int *)(param_1 + 0x3a0) != 0) &&
            (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x398);
          }
          uVar12 = (**(code **)(*plVar13 + 0x58))();
          *(undefined4 *)(param_1 + 0x390) = uVar12;
        }
        fVar15 = fVar15 / (float)*(int *)(param_1 + 0x390);
        uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x590);
        uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x590) >> 0x20);
        if (((*(int *)(param_1 + 0x3b8) != 0) &&
            (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x3b8) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x3b0);
          }
          uVar17 = (**(code **)(*plVar13 + 0x58))();
          *(undefined4 *)(param_1 + 0x3a8) = uVar17;
        }
        fVar22 = *(float *)(param_1 + 0x3a8);
        if (((*(int *)(param_1 + 0x358) != 0) &&
            (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x358) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x350);
          }
          uVar4 = (**(code **)(*plVar13 + 0x58))();
          *(undefined8 *)(param_1 + 0x340) = uVar4;
        }
        dVar19 = *(double *)(param_1 + 0x340);
      }
      else {
LAB_148b4558b:
        fVar15 = *(float *)(param_4 + 0x30) / fVar15;
        dVar19 = *(double *)(param_1 + 0x590);
        uVar12 = SUB84(dVar19,0);
        uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
        dVar19 = ABS(dVar19);
        if (1.79769313486232e+308 <= dVar19) {
          dVar19 = 1.79769313486232e+308;
        }
        if (dVar19 <= 1.0) {
          dVar19 = 1.0;
        }
        if (((*(int *)(param_1 + 0x3b8) != 0) &&
            (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x3b8) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(param_1 + 0x3b0);
          }
          uVar17 = (**(code **)(*plVar13 + 0x58))();
          *(undefined4 *)(param_1 + 0x3a8) = uVar17;
        }
        fVar22 = *(float *)(param_1 + 0x3a8);
      }
      dVar19 = pow(dVar19,(double)fVar22);
      dVar3 = dVar21 * (double)ABS(fVar15) * dVar19 * dVar3 + (double)CONCAT44(uVar16,uVar12);
    }
    if (DAT_14c75ef58 == '\x01') {
      if (bVar6) {
        FUN_148b47204(lVar1);
        if (*(char *)(param_1 + 0x460) == '\0') {
          uVar12 = 0xffffffff;
          uVar16 = 0x7fefffff;
        }
        else {
          uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x458);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
        }
        FUN_148b47204(lVar2);
        if (*(char *)(param_1 + 0x438) == '\0') {
          uVar17 = 0xffffffff;
          uVar20 = 0xffefffff;
        }
        else {
          uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x430);
          uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
        }
        if ((double)CONCAT44(uVar16,uVar12) <= dVar3) {
          dVar3 = (double)CONCAT44(uVar16,uVar12);
        }
        if (dVar3 <= (double)CONCAT44(uVar20,uVar17)) {
          dVar3 = (double)CONCAT44(uVar20,uVar17);
        }
      }
      FUN_148b47204(param_1 + 0x408);
      if (*(char *)(param_1 + 0x410) == '\0') {
        uVar12 = 0xffffffff;
        uVar16 = 0x7fefffff;
      }
      else {
        uVar12 = (undefined4)*(undefined8 *)(param_1 + 0x408);
        uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x408) >> 0x20);
      }
      FUN_148b47204(param_1 + 0x3e0);
      if (*(char *)(param_1 + 1000) == '\0') {
        uVar17 = 0xffffffff;
        uVar20 = 0xffefffff;
      }
      else {
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x3e0);
        uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20);
      }
      if ((double)CONCAT44(uVar16,uVar12) <= dVar3) {
        dVar3 = (double)CONCAT44(uVar16,uVar12);
      }
      if (dVar3 <= (double)CONCAT44(uVar20,uVar17)) {
        dVar3 = (double)CONCAT44(uVar20,uVar17);
      }
      *(double *)(param_1 + 0x590) = dVar3;
      *(double *)(param_1 + 0x5c0) = dVar3;
      *(undefined4 *)(param_1 + 0x5c8) = uVar18;
      *(undefined1 *)(param_1 + 0x5d0) = 1;
    }
    else {
      dVar21 = dVar3;
      if (1.79769313486232e+308 <= dVar3) {
        dVar21 = 1.79769313486232e+308;
      }
      if (dVar21 <= -1.79769313486232e+308) {
        dVar21 = -1.79769313486232e+308;
      }
      local_128 = 1;
      FUN_143fabdd0(param_1,dVar21,dVar3,uVar18);
    }
  }
  uVar8 = 1;
LAB_148b4514c:
  *param_2 = uVar8;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b45d9e FUN_148b45d9e body=941 status=ok
// SIG undefined FUN_148b45d9e(void)

undefined1 *
FUN_148b45d9e(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  double local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  longlong *local_78 [2];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(char *)((longlong)param_1 + 0x5bc) != '\x01') || ((int)param_1[0xb0] != -1)) ||
     (cVar5 = (**(code **)(*param_1 + 0x198))(param_1), cVar5 == '\0')) {
    uVar6 = 0;
    goto LAB_148b45dfa;
  }
  FUN_148b47204(param_1 + 0x8b);
  if ((char)param_1[0x8c] == '\0') {
    uVar10 = 0xffffffff;
    uVar12 = 0x7fefffff;
  }
  else {
    uVar10 = (undefined4)param_1[0x8b];
    uVar12 = (undefined4)((ulonglong)param_1[0x8b] >> 0x20);
  }
  FUN_148b47204(param_1 + 0x86);
  if ((char)param_1[0x87] == '\0') {
    uVar13 = 0xffffffff;
    uVar14 = 0xffefffff;
  }
  else {
    uVar13 = (undefined4)param_1[0x86];
    uVar14 = (undefined4)((ulonglong)param_1[0x86] >> 0x20);
  }
  if ((char)param_1[0xa6] == '\x01') {
    plVar7 = param_1 + 0xa4;
    FUN_148b47204(plVar7);
    if ((char)param_1[0xa5] != '\x01') goto LAB_148b45ebf;
    FUN_148b47204(plVar7);
    uVar11 = (undefined4)*plVar7;
    uVar10 = (undefined4)((ulonglong)*plVar7 >> 0x20);
  }
  else {
LAB_148b45ebf:
    uVar11 = (undefined4)
             *(undefined8 *)
              (&DAT_149f20770 +
              (ulonglong)((double)CONCAT44(uVar12,uVar10) - (double)CONCAT44(uVar14,uVar13) <= 10.0)
              * 8);
    uVar10 = (undefined4)
             ((ulonglong)
              *(undefined8 *)
               (&DAT_149f20770 +
               (ulonglong)
               ((double)CONCAT44(uVar12,uVar10) - (double)CONCAT44(uVar14,uVar13) <= 10.0) * 8) >>
             0x20);
  }
  dVar3 = (double)CONCAT44(uVar10,uVar11);
  if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
    if ((*(ushort *)(param_4 + 8) & 3) != 0) {
      pfVar8 = (float *)(param_1 + 0x6c);
      if ((int)param_1[0x6e] != 0) {
        plVar7 = param_1 + 0x6d;
        if (((longlong *)*plVar7 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar5 != '\0')) {
          iVar1 = (int)param_1[0x6e];
          goto joined_r0x000148b46111;
        }
      }
      goto LAB_148b45f30;
    }
  }
  else {
    pfVar8 = (float *)(param_1 + 0x6f);
    if ((int)param_1[0x71] != 0) {
      plVar7 = param_1 + 0x70;
      if (((longlong *)*plVar7 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar5 != '\0')) {
        iVar1 = (int)param_1[0x71];
joined_r0x000148b46111:
        if (iVar1 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)*plVar7;
        }
        fVar9 = (float)(**(code **)(*plVar7 + 0x58))();
        *pfVar8 = fVar9;
      }
    }
LAB_148b45f30:
    dVar3 = (double)CONCAT44(uVar10,uVar11) * (double)*pfVar8;
  }
  dVar3 = dVar3 * (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x6c)] + (double)param_1[0xb2]
  ;
  lVar2 = param_1[0x5b];
  local_a0 = dVar3;
  (**(code **)(*(longlong *)param_1[0x5d] + 0x28))((longlong *)param_1[0x5d],local_98);
  FUN_140233b1a(local_88,local_98);
  FUN_14023423e(local_78,local_88);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_146a5407e(lVar2,local_78);
  FUN_1449db362(&local_60);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  dVar4 = dVar3;
  if (1.79769313486232e+308 <= dVar3) {
    dVar4 = 1.79769313486232e+308;
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (dVar4 <= -1.79769313486232e+308) {
    dVar4 = -1.79769313486232e+308;
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  local_a8 = 1;
  FUN_143fabdd0(param_1,dVar4,dVar3,0);
  lVar2 = param_1[0x5b];
  local_a0 = (double)param_1[0xb2];
  (**(code **)(*(longlong *)param_1[0x5d] + 0x28))((longlong *)param_1[0x5d],local_98);
  FUN_140233b1a(local_88,local_98);
  FUN_14023423e(local_78,local_88);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_146a5407e(lVar2);
  FUN_1449db362(&local_60);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  uVar6 = 1;
LAB_148b45dfa:
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b4614c FUN_148b4614c body=117 status=ok
// SIG undefined FUN_148b4614c(void)

undefined1 * FUN_148b4614c(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_148b47484();
  if (cVar1 == '\0') {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x5b9);
    *param_2 = 1;
    if (cVar1 == '\x01') {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 3;
    }
  }
  return param_2;
}



// FUNCTION 148b461c6 FUN_148b461c6 body=58 status=ok
// SIG undefined FUN_148b461c6(void)

undefined8 FUN_148b461c6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14697dddc();
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b461f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x198))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148b46200 FUN_148b46200 body=2115 status=ok
// SIG undefined FUN_148b46200(void)

int FUN_148b46200(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined8 in_RAX;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  char cVar19;
  undefined4 uVar20;
  float fVar21;
  double dVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  float *local_130;
  float *local_128;
  undefined1 local_120;
  undefined4 local_114;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_bc;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(char *)(param_1 + 0x5b9) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x39) != DAT_14c96b238)) {
    uVar17 = *(byte *)(param_1 + 0x3b) ^ 1;
    lVar16 = (ulonglong)uVar17 * 8 + 0x328;
    plVar18 = (longlong *)((ulonglong)(uVar17 << 4) + param_1 + 0x308);
  }
  else {
    plVar18 = (longlong *)(param_1 + 0x310);
    lVar16 = 800;
  }
  lVar9 = *plVar18;
  if (param_8 == '\0') {
    cVar19 = ' ';
    local_114 = 0;
  }
  else {
    local_114 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_1 + 0x3a));
    cVar19 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
  }
  local_110 = *(longlong *)(param_1 + lVar16);
  pfVar15 = (float *)(lVar9 + 8);
  cVar12 = *(char *)(lVar9 + 0x18);
  local_108 = param_2;
  local_100 = param_4;
  if (cVar12 != '\0') {
    if (cVar12 == '\x01') {
      pfVar15 = (float *)FUN_1400c06fe(pfVar15);
    }
    else if (cVar12 == '\x03') {
      pfVar15 = param_7 + 8;
    }
    else {
      pfVar15 = param_7 + 4;
    }
  }
  local_ec = pfVar15[3] * param_7[3];
  local_f0 = pfVar15[2] * param_7[2];
  local_f4 = pfVar15[1] * param_7[1];
  local_f8 = *pfVar15 * *param_7;
  local_d4 = *(undefined8 *)param_3;
  local_e8 = *(undefined8 *)(param_3 + 3);
  local_e0 = param_3[2];
  local_dc = 0;
  local_cc = param_3[7];
  fStack_c8 = param_3[8];
  fStack_c4 = param_3[9];
  fStack_c0 = param_3[10];
  local_bc = *(undefined8 *)(param_3 + 0xb);
  local_b4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_138 = CONCAT71(local_138._1_7_,cVar19);
  local_130 = &local_f8;
  FUN_140239bd2(param_5,param_6,&local_e8,lVar9);
  param_6 = param_6 + 1;
  if (*(char *)(param_1 + 0x2f8) != '\0') goto LAB_148b463d6;
  if (((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar12 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = *(longlong **)(param_1 + 0x278);
    }
    uVar10 = (**(code **)(*plVar18 + 0x58))();
    *(undefined8 *)(param_1 + 0x268) = uVar10;
  }
  dVar26 = *(double *)(param_1 + 0x268);
  if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))(), cVar12 == '\0')) {
    dVar22 = *(double *)(param_1 + 0x340);
  }
  else {
    if (*(int *)(param_1 + 0x358) == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = *(longlong **)(param_1 + 0x350);
    }
    dVar22 = (double)(**(code **)(*plVar18 + 0x58))();
    *(double *)(param_1 + 0x340) = dVar22;
  }
  if ((dVar22 != 0.0) || (NAN(dVar22))) {
    auVar27._0_8_ = (dVar26 + dVar22 * 0.5) / dVar22;
    auVar27._8_8_ = 0;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = auVar27._0_8_;
    auVar24 = roundpd(auVar27,auVar24,1);
    dVar26 = auVar24._0_8_ * dVar22;
  }
  lVar16 = param_1 + 0x458;
  FUN_148b47204(lVar16);
  lVar9 = param_1 + 0x430;
  if (*(char *)(param_1 + 0x460) == '\0') {
    dVar22 = 8.988465674311579e+307;
  }
  else {
    dVar22 = *(double *)(param_1 + 0x458) * 0.5;
  }
  FUN_148b47204(lVar9);
  if (*(char *)(param_1 + 0x438) == '\0') {
    dVar11 = -8.988465674311579e+307;
  }
  else {
    dVar11 = *(double *)(param_1 + 0x430) * 0.5;
  }
  dVar26 = (dVar26 * 0.5 - dVar11) / (dVar22 - dVar11);
  if (1.0 <= dVar26) {
    dVar26 = 1.0;
  }
  if (dVar26 <= 0.0) {
    dVar26 = 0.0;
  }
  if (((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))(), cVar12 != '\0')) {
    if (*(int *)(param_1 + 0x3b8) == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = *(longlong **)(param_1 + 0x3b0);
    }
    uVar20 = (**(code **)(*plVar18 + 0x58))();
    *(undefined4 *)(param_1 + 0x3a8) = uVar20;
  }
  fVar25 = (float)dVar26;
  fVar1 = *(float *)(param_1 + 0x3a8);
  if (1e-08 < ABS(fVar1 + -1.0)) {
    if (*(char *)(param_1 + 0x3c8) == '\x01') {
      if (((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0))
         && (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar12 != '\0')) {
        if (*(int *)(param_1 + 0x3d8) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0x3d0);
        }
        uVar10 = (**(code **)(*plVar18 + 0x58))();
        *(undefined8 *)(param_1 + 0x3c0) = uVar10;
      }
      dVar26 = *(double *)(param_1 + 0x3c0);
      FUN_148b47204(lVar9);
      if (*(char *)(param_1 + 0x438) == '\0') {
        uVar20 = 0xffffffff;
        uVar23 = 0xffefffff;
      }
      else {
        uVar20 = (undefined4)*(undefined8 *)(param_1 + 0x430);
        uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
      }
      if ((double)CONCAT44(uVar23,uVar20) <= dVar26 && dVar26 != (double)CONCAT44(uVar23,uVar20)) {
        if (((*(int *)(param_1 + 0x3d8) != 0) &&
            (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
           (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar12 != '\0')) {
          if (*(int *)(param_1 + 0x3d8) == 0) {
            plVar18 = (longlong *)0x0;
          }
          else {
            plVar18 = *(longlong **)(param_1 + 0x3d0);
          }
          uVar10 = (**(code **)(*plVar18 + 0x58))();
          *(undefined8 *)(param_1 + 0x3c0) = uVar10;
        }
        dVar26 = *(double *)(param_1 + 0x3c0);
        FUN_148b47204(lVar16);
        if (*(char *)(param_1 + 0x460) == '\0') {
          uVar20 = 0xffffffff;
          uVar23 = 0x7fefffff;
        }
        else {
          uVar20 = (undefined4)*(undefined8 *)(param_1 + 0x458);
          uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
        }
        if (dVar26 <= (double)CONCAT44(uVar23,uVar20) && (double)CONCAT44(uVar23,uVar20) != dVar26)
        {
          FUN_148b47204(lVar16);
          cVar12 = *(char *)(param_1 + 0x460);
          dVar22 = *(double *)(param_1 + 0x458) * 0.5;
          FUN_148b47204(lVar9);
          cVar8 = *(char *)(param_1 + 0x438);
          dVar26 = *(double *)(param_1 + 0x430) * 0.5;
          if (((*(int *)(param_1 + 0x3d8) != 0) &&
              (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) &&
             (cVar13 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))(), cVar13 != '\0')) {
            if (*(int *)(param_1 + 0x3d8) == 0) {
              plVar18 = (longlong *)0x0;
            }
            else {
              plVar18 = *(longlong **)(param_1 + 0x3d0);
            }
            uVar10 = (**(code **)(*plVar18 + 0x58))();
            *(undefined8 *)(param_1 + 0x3c0) = uVar10;
          }
          if (cVar12 == '\0') {
            dVar22 = 8.988465674311579e+307;
          }
          if (cVar8 == '\0') {
            dVar26 = -8.988465674311579e+307;
          }
          dVar26 = (*(double *)(param_1 + 0x3c0) * 0.5 - dVar26) / (dVar22 - dVar26);
          if (1.0 <= dVar26) {
            dVar26 = 1.0;
          }
          if (dVar26 <= 0.0) {
            dVar26 = 0.0;
          }
          fVar25 = (float)FUN_146a86e44(fVar25,(float)dVar26,fVar1);
          goto LAB_148b46650;
        }
      }
    }
    fVar25 = powf(1.0 - fVar25,fVar1);
    fVar25 = 1.0 - fVar25;
  }
LAB_148b46650:
  lVar16 = local_110;
  if (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x39) != DAT_14c96b238) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    pfVar15 = (float *)(local_110 + 8);
    cVar12 = *(char *)(local_110 + 0x18);
    if (cVar12 != '\0') {
      if (cVar12 == '\x01') {
        pfVar15 = (float *)FUN_1400c06fe(pfVar15);
      }
      else if (cVar12 == '\x03') {
        pfVar15 = param_7 + 8;
      }
      else {
        pfVar15 = param_7 + 4;
      }
    }
    local_ec = pfVar15[3] * param_7[3];
    local_f0 = pfVar15[2] * param_7[2];
    local_f4 = pfVar15[1] * param_7[1];
    local_f8 = *pfVar15 * *param_7;
    lVar9 = *(longlong *)(param_1 + 0x300);
    fVar3 = *(float *)(lVar9 + 0x504);
    fVar4 = *(float *)(lVar9 + 0x508);
    local_e0 = param_3[2];
    local_cc = param_3[7];
    local_e8 = CONCAT44(fVar4 * local_e0 + param_3[4],fVar3 * local_e0 + param_3[3]);
    fVar5 = param_3[8];
    fVar6 = param_3[10];
    fVar7 = param_3[9];
    fVar21 = fVar3 * local_cc + fVar4 * fVar7 + param_3[0xb];
    fStack_c0 = fVar5 * 0.0 + fVar6;
    fStack_c4 = local_cc * 0.0 + fVar7;
    fStack_c8 = fVar6 * 0.0 + fVar5;
    local_cc = fVar7 * 0.0 + local_cc;
    local_dc = 0;
    local_d4 = CONCAT44(fVar2 - (*(float *)(lVar9 + 0x510) + fVar4),
                        fVar25 * fVar1 - (*(float *)(lVar9 + 0x50c) + fVar3));
    local_bc = CONCAT44(fVar3 * fVar5 + fVar4 * fVar6 + param_3[0xc],fVar21);
    local_b4 = local_b4 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_138 = CONCAT71(local_138._1_7_,cVar19);
    local_130 = &local_f8;
    FUN_140239bd2(fVar21,param_6,&local_e8,lVar16);
  }
LAB_148b463d6:
  local_120 = (undefined1)local_114;
  local_128 = param_7;
  local_130 = (float *)CONCAT44(local_130._4_4_,param_6);
  local_138 = param_5;
  iVar14 = FUN_1400c0302(param_1,local_108,param_3,local_100);
  if (param_6 < iVar14) {
    param_6 = iVar14;
  }
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 148b46a44 FUN_148b46a44 body=695 status=ok
// SIG undefined FUN_148b46a44(void)

void FUN_148b46a44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b55f870;
  if ((*(char *)((longlong)param_1 + 0x5b9) != '\0') || (*(int *)(param_1 + 0xb0) != -1)) {
    *(undefined1 *)((longlong)param_1 + 0x5b9) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    param_1[0xb2] = param_1[0xb3];
    FUN_148b46cfc(param_1);
  }
  if (*(char *)(param_1 + 0xba) == '\x01') {
    *(undefined1 *)(param_1 + 0xba) = 0;
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xae);
  FUN_1449db362(param_1 + 0xab);
  FUN_1449db362(param_1 + 0xa9);
  FUN_1449db362(param_1 + 0xa7);
  if (*(char *)(param_1 + 0xa5) == '\x01') {
    *(undefined1 *)(param_1 + 0xa5) = 0;
  }
  FUN_1449db362(param_1 + 0xa2);
  FUN_1449db362(param_1 + 0x9f);
  FUN_1449db362(param_1 + 0x9c);
  FUN_1449db362(param_1 + 0x99);
  FUN_1449db362(param_1 + 0x96);
  if (*(char *)((longlong)param_1 + 0x4a4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  }
  FUN_1449db362(param_1 + 0x92);
  if (*(char *)((longlong)param_1 + 0x484) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  }
  FUN_1449db362(param_1 + 0x8e);
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  FUN_1449db362(param_1 + 0x89);
  if (*(char *)(param_1 + 0x87) == '\x01') {
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  FUN_1449db362(param_1 + 0x84);
  if (*(char *)(param_1 + 0x82) == '\x01') {
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  FUN_1449db362(param_1 + 0x7f);
  if (*(char *)(param_1 + 0x7d) == '\x01') {
    *(undefined1 *)(param_1 + 0x7d) = 0;
  }
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x76);
  FUN_1449db362(param_1 + 0x73);
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x6d);
  FUN_1449db362(param_1 + 0x6a);
  plVar3 = (longlong *)param_1[0x5e];
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
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x5a];
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
  FUN_1449db362(param_1 + 0x57);
  FUN_1449db362(param_1 + 0x55);
  FUN_1449db362(param_1 + 0x53);
  FUN_1449db362(param_1 + 0x51);
  FUN_1449db362(param_1 + 0x4f);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 148b46cfc FUN_148b46cfc body=107 status=ok
// SIG undefined FUN_148b46cfc(void)

void FUN_148b46cfc(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x2a0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1);
  }
  if ((*(int *)(param_1 + 0x2c0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2b8), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148b46d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148b46d68 FUN_148b46d68 body=84 status=ok
// SIG undefined FUN_148b46d68(void)

void FUN_148b46d68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 3) != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 2,0,0,0x10);
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 148b46dbc FUN_148b46dbc body=83 status=ok
// SIG undefined FUN_148b46dbc(void)

undefined1 FUN_148b46dbc(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4d0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4c8);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4c0) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4c0);
}



// FUNCTION 148b46e10 FUN_148b46e10 body=504 status=ok
// SIG undefined FUN_148b46e10(void)

void FUN_148b46e10(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_b8 [32];
  byte local_98;
  double local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar5 = 2.2250738585072014e-308;
  if (*(char *)(param_1 + 0x468) == '\x01') {
    lVar2 = param_1 + 0x458;
    FUN_148b47204(lVar2);
    dVar5 = 2.2250738585072014e-308;
    if (*(char *)(param_1 + 0x460) == '\x01') {
      FUN_148b47204(lVar2);
      uVar14 = 0xffffffff;
      uVar15 = 0x7fefffff;
      uVar12 = uVar14;
      uVar13 = uVar15;
      if (*(char *)(param_1 + 0x460) != '\0') {
        uVar12 = (int)*(undefined8 *)(param_1 + 0x458);
        uVar13 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
      }
      dVar3 = (double)param_2 + (double)CONCAT44(uVar13,uVar12);
      FUN_148b47204(lVar2);
      if (*(char *)(param_1 + 0x460) != '\0') {
        uVar14 = (undefined4)*(undefined8 *)(param_1 + 0x458);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
      }
      dVar5 = (double)CONCAT44(uVar13,uVar12);
      if ((((dVar3 < (double)CONCAT44(uVar15,uVar14) || dVar3 == (double)CONCAT44(uVar15,uVar14)) &
           param_3) == 0) &&
         (((dVar5 = dVar3, *(int *)(param_1 + 0x478) == 0 ||
           (*(longlong **)(param_1 + 0x470) == (longlong *)0x0)) ||
          (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x30))(), cVar7 == '\0')))) {
        local_80 = (longlong *)CONCAT71(local_80._1_7_,1);
        local_78 = 1;
        local_70 = 0;
        uStack_68 = 0;
        local_88 = dVar3;
        FUN_148b47298(param_1);
        FUN_1449db362(&local_70);
      }
    }
  }
  if (((*(int *)(param_1 + 0x550) != 0) && (*(longlong **)(param_1 + 0x548) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x30))(), cVar7 != '\0')) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    bVar4 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_148b46ead:
      local_88 = 0.0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar10[1];
      do {
        if (iVar8 == 0) goto LAB_148b46ead;
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      local_88 = *(double *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      bVar4 = false;
    }
    if (*(int *)(param_1 + 0x550) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x548);
    }
    local_98 = param_3;
    local_80 = plVar10;
    (**(code **)(*plVar9 + 0x58))(plVar9,dVar5,&local_88,1);
    if (!bVar4) {
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
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b4700a FUN_148b4700a body=504 status=ok
// SIG undefined FUN_148b4700a(void)

void FUN_148b4700a(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_b8 [32];
  byte local_98;
  double local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar5 = 2.2250738585072014e-308;
  if (*(char *)(param_1 + 0x440) == '\x01') {
    lVar2 = param_1 + 0x430;
    FUN_148b47204(lVar2);
    dVar5 = 2.2250738585072014e-308;
    if (*(char *)(param_1 + 0x438) == '\x01') {
      FUN_148b47204(lVar2);
      uVar14 = 0xffffffff;
      uVar15 = 0xffefffff;
      uVar12 = uVar14;
      uVar13 = uVar15;
      if (*(char *)(param_1 + 0x438) != '\0') {
        uVar12 = (int)*(undefined8 *)(param_1 + 0x430);
        uVar13 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
      }
      dVar3 = (double)param_2 + (double)CONCAT44(uVar13,uVar12);
      FUN_148b47204(lVar2);
      if (*(char *)(param_1 + 0x438) != '\0') {
        uVar14 = (undefined4)*(undefined8 *)(param_1 + 0x430);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
      }
      dVar5 = (double)CONCAT44(uVar13,uVar12);
      if (((((double)CONCAT44(uVar15,uVar14) < dVar3 || (double)CONCAT44(uVar15,uVar14) == dVar3) &
           param_3) == 0) &&
         (((dVar5 = dVar3, *(int *)(param_1 + 0x450) == 0 ||
           (*(longlong **)(param_1 + 0x448) == (longlong *)0x0)) ||
          (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x30))(), cVar7 == '\0')))) {
        local_80 = (longlong *)CONCAT71(local_80._1_7_,1);
        local_78 = 1;
        local_70 = 0;
        uStack_68 = 0;
        local_88 = dVar3;
        FUN_148b47408(param_1);
        FUN_1449db362(&local_70);
      }
    }
  }
  if (((*(int *)(param_1 + 0x560) != 0) && (*(longlong **)(param_1 + 0x558) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x558) + 0x30))(), cVar7 != '\0')) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    bVar4 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_148b470a7:
      local_88 = 0.0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar10[1];
      do {
        if (iVar8 == 0) goto LAB_148b470a7;
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      local_88 = *(double *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      bVar4 = false;
    }
    if (*(int *)(param_1 + 0x560) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x558);
    }
    local_98 = param_3;
    local_80 = plVar10;
    (**(code **)(*plVar9 + 0x58))(plVar9,dVar5,&local_88,1);
    if (!bVar4) {
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
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b47204 FUN_148b47204 body=146 status=ok
// SIG undefined FUN_148b47204(void)

undefined8 * FUN_148b47204(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 4) != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_28);
      if (&local_28 != param_1) {
        if ((local_20 & 1) == 0) {
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_148b47268;
          uVar2 = 0;
        }
        else {
          *param_1 = local_28;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar2;
      }
    }
  }
LAB_148b47268:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b47298 FUN_148b47298 body=123 status=ok
// SIG undefined FUN_148b47298(void)

void FUN_148b47298(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  FUN_148b47204(param_2);
  puVar2 = (undefined8 *)(param_1 + 0x408);
  if (*(char *)(param_2 + 1) != '\0') {
    puVar2 = param_2;
  }
  if (puVar2 != (undefined8 *)(param_1 + 0x458)) {
    if (*(char *)(puVar2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x458) = *puVar2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x460) != '\x01') goto LAB_148b472c7;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x460) = uVar1;
  }
LAB_148b472c7:
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(puVar2 + 2);
  FUN_148b47384(param_1 + 0x470,puVar2 + 3);
  FUN_148b47314(param_1);
  return;
}



// FUNCTION 148b47314 FUN_148b47314 body=111 status=ok
// SIG undefined FUN_148b47314(void)

void FUN_148b47314(longlong param_1)

{
  byte bVar1;
  
  FUN_148b47204(param_1 + 0x3e0);
  if (*(char *)(param_1 + 1000) == '\x01') {
    FUN_148b47204(param_1 + 0x408);
    if (*(char *)(param_1 + 0x410) != '\0') {
      bVar1 = 0;
      goto LAB_148b47361;
    }
  }
  FUN_148b47204(param_1 + 0x430);
  bVar1 = 1;
  if (*(char *)(param_1 + 0x438) == '\x01') {
    FUN_148b47204(param_1 + 0x458);
    bVar1 = *(byte *)(param_1 + 0x460) ^ 1;
  }
LAB_148b47361:
  *(byte *)(param_1 + 0x2f8) = bVar1;
  return;
}



// FUNCTION 148b47384 FUN_148b47384 body=130 status=ok
// SIG undefined FUN_148b47384(void)

void FUN_148b47384(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b47408 FUN_148b47408 body=123 status=ok
// SIG undefined FUN_148b47408(void)

void FUN_148b47408(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  FUN_148b47204(param_2);
  puVar2 = (undefined8 *)(param_1 + 0x3e0);
  if (*(char *)(param_2 + 1) != '\0') {
    puVar2 = param_2;
  }
  if (puVar2 != (undefined8 *)(param_1 + 0x430)) {
    if (*(char *)(puVar2 + 1) == '\x01') {
      *(undefined8 *)(param_1 + 0x430) = *puVar2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x438) != '\x01') goto LAB_148b47437;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x438) = uVar1;
  }
LAB_148b47437:
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(puVar2 + 2);
  FUN_148b47384(param_1 + 0x448,puVar2 + 3);
  FUN_148b47314(param_1);
  return;
}



// FUNCTION 148b47484 FUN_148b47484 body=83 status=ok
// SIG undefined FUN_148b47484(void)

undefined1 FUN_148b47484(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4e8) != 0) && (*(longlong **)(param_1 + 0x4e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4e8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4e0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4d8) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4d8);
}



// FUNCTION 148b474d8 FUN_148b474d8 body=167 status=ok
// SIG undefined FUN_148b474d8(void)

void FUN_148b474d8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b47553;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b47553;
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
LAB_148b47553:
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
                    /* WARNING: Could not recover jumptable at 0x000148b47573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b47580 FUN_148b47580 body=313 status=ok
// SIG undefined FUN_148b47580(void)

longlong * FUN_148b47580(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4767c:
    *puVar5 = &PTR_LAB_14b55fb20;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fab0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4767c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55fb20;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fab0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b476ba FUN_148b476ba body=130 status=ok
// SIG undefined FUN_148b476ba(void)

void FUN_148b476ba(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b4773e FUN_148b4773e body=64 status=ok
// SIG undefined FUN_148b4773e(void)

undefined8 * FUN_148b4773e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fab0;
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



// FUNCTION 148b47782 FUN_148b47782 body=81 status=ok
// SIG undefined FUN_148b47782(void)

undefined8 FUN_148b47782(longlong param_1)

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



// FUNCTION 148b477da FUN_148b477da body=89 status=ok
// SIG undefined FUN_148b477da(void)

bool FUN_148b477da(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b47825;
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
LAB_148b47825:
  return lVar6 == param_2;
}



// FUNCTION 148b4785c FUN_148b4785c body=118 status=ok
// SIG undefined FUN_148b4785c(void)

void FUN_148b4785c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55fb20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fab0;
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



// FUNCTION 148b478d2 FUN_148b478d2 body=118 status=ok
// SIG undefined FUN_148b478d2(void)

void FUN_148b478d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55fb20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fab0;
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



// FUNCTION 148b47948 FUN_148b47948 body=156 status=ok
// SIG undefined FUN_148b47948(void)

void FUN_148b47948(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b55fb20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fab0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b479d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b479e4 FUN_148b479e4 body=114 status=ok
// SIG undefined FUN_148b479e4(void)

undefined4 FUN_148b479e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
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
        uVar7 = (**(code **)(param_1 + 0x28))
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
        return uVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b47a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b47a56 FUN_148b47a56 body=100 status=ok
// SIG undefined FUN_148b47a56(void)

ulonglong FUN_148b47a56(longlong param_1)

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
LAB_148b47aaf:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b47aaf;
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



// FUNCTION 148b47abc FUN_148b47abc body=313 status=ok
// SIG undefined FUN_148b47abc(void)

longlong * FUN_148b47abc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b47bb8:
    *puVar5 = &PTR_LAB_14a5412f0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fb90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b47bb8;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a5412f0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fb90;
    puVar5[3] = uVar10;
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



// FUNCTION 148b47bf6 FUN_148b47bf6 body=64 status=ok
// SIG undefined FUN_148b47bf6(void)

undefined8 * FUN_148b47bf6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fb90;
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



// FUNCTION 148b47c3a FUN_148b47c3a body=81 status=ok
// SIG undefined FUN_148b47c3a(void)

undefined8 FUN_148b47c3a(longlong param_1)

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



// FUNCTION 148b47c92 FUN_148b47c92 body=89 status=ok
// SIG undefined FUN_148b47c92(void)

bool FUN_148b47c92(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b47cdd;
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
LAB_148b47cdd:
  return lVar6 == param_2;
}



// FUNCTION 148b47d08 FUN_148b47d08 body=118 status=ok
// SIG undefined FUN_148b47d08(void)

void FUN_148b47d08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fb90;
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



// FUNCTION 148b47d7e FUN_148b47d7e body=118 status=ok
// SIG undefined FUN_148b47d7e(void)

void FUN_148b47d7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5412f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fb90;
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



// FUNCTION 148b47df4 FUN_148b47df4 body=156 status=ok
// SIG undefined FUN_148b47df4(void)

void FUN_148b47df4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5412f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fb90;
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
                    /* WARNING: Could not recover jumptable at 0x000148b47e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b47e90 FUN_148b47e90 body=103 status=ok
// SIG undefined FUN_148b47e90(void)

void FUN_148b47e90(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b47edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b47eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b47ef8 FUN_148b47ef8 body=100 status=ok
// SIG undefined FUN_148b47ef8(void)

ulonglong FUN_148b47ef8(longlong param_1)

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
LAB_148b47f51:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b47f51;
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



// FUNCTION 148b47f5c FUN_148b47f5c body=313 status=ok
// SIG undefined FUN_148b47f5c(void)

longlong * FUN_148b47f5c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b48058:
    *puVar5 = &PTR_LAB_14b55fc70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fc00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b48058;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b55fc70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fc00;
    puVar5[3] = uVar10;
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



// FUNCTION 148b48096 FUN_148b48096 body=64 status=ok
// SIG undefined FUN_148b48096(void)

undefined8 * FUN_148b48096(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fc00;
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



// FUNCTION 148b480da FUN_148b480da body=81 status=ok
// SIG undefined FUN_148b480da(void)

undefined8 FUN_148b480da(longlong param_1)

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



// FUNCTION 148b48132 FUN_148b48132 body=89 status=ok
// SIG undefined FUN_148b48132(void)

bool FUN_148b48132(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148b4817d;
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
LAB_148b4817d:
  return lVar6 == param_2;
}



// FUNCTION 148b481b4 FUN_148b481b4 body=118 status=ok
// SIG undefined FUN_148b481b4(void)

void FUN_148b481b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55fc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fc00;
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



// FUNCTION 148b4822a FUN_148b4822a body=118 status=ok
// SIG undefined FUN_148b4822a(void)

void FUN_148b4822a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b55fc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fc00;
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



// FUNCTION 148b482a0 FUN_148b482a0 body=156 status=ok
// SIG undefined FUN_148b482a0(void)

void FUN_148b482a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b55fc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fc00;
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
                    /* WARNING: Could not recover jumptable at 0x000148b4832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4833c FUN_148b4833c body=103 status=ok
// SIG undefined FUN_148b4833c(void)

void FUN_148b4833c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148b48388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b48399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}


