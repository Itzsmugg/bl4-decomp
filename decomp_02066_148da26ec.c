// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148da26ec FUN_148da26ec body=29 status=ok
// SIG undefined FUN_148da26ec(void)

undefined8 FUN_148da26ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da270a FUN_148da270a body=64 status=ok
// SIG undefined FUN_148da270a(void)

undefined8 * FUN_148da270a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da274c FUN_148da274c body=32 status=ok
// SIG undefined FUN_148da274c(void)

undefined8 FUN_148da274c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FReturnToMainMenuTask");
  return param_2;
}



// FUNCTION 148da276c FUN_148da276c body=167 status=ok
// SIG undefined FUN_148da276c(void)

void FUN_148da276c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da27e7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da27e7;
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
LAB_148da27e7:
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
                    /* WARNING: Could not recover jumptable at 0x000148da2807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da2814 FUN_148da2814 body=64 status=ok
// SIG undefined FUN_148da2814(void)

undefined8 * FUN_148da2814(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98bca0;
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



// FUNCTION 148da2858 FUN_148da2858 body=81 status=ok
// SIG undefined FUN_148da2858(void)

undefined8 FUN_148da2858(longlong param_1)

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



// FUNCTION 148da28b0 FUN_148da28b0 body=89 status=ok
// SIG undefined FUN_148da28b0(void)

bool FUN_148da28b0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da28fb;
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
LAB_148da28fb:
  return lVar6 == param_2;
}



// FUNCTION 148da2926 FUN_148da2926 body=118 status=ok
// SIG undefined FUN_148da2926(void)

void FUN_148da2926(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98bca0;
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



// FUNCTION 148da299c FUN_148da299c body=118 status=ok
// SIG undefined FUN_148da299c(void)

void FUN_148da299c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98bca0;
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



// FUNCTION 148da2a12 FUN_148da2a12 body=156 status=ok
// SIG undefined FUN_148da2a12(void)

void FUN_148da2a12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98bca0;
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
                    /* WARNING: Could not recover jumptable at 0x000148da2a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da2aae FUN_148da2aae body=104 status=ok
// SIG undefined FUN_148da2aae(void)

void FUN_148da2aae(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da2afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da2b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da2b16 FUN_148da2b16 body=101 status=ok
// SIG undefined FUN_148da2b16(void)

ulonglong FUN_148da2b16(longlong param_1)

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
LAB_148da2b70:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da2b70;
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



// FUNCTION 148da2b7c FUN_148da2b7c body=34 status=ok
// SIG undefined FUN_148da2b7c(void)

void FUN_148da2b7c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da2b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da2b9e FUN_148da2b9e body=64 status=ok
// SIG undefined FUN_148da2b9e(void)

undefined8 * FUN_148da2b9e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da2be0 FUN_148da2be0 body=32 status=ok
// SIG undefined FUN_148da2be0(void)

undefined8 FUN_148da2be0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCreateInitialSessionTask");
  return param_2;
}



// FUNCTION 148da2c04 FUN_148da2c04 body=81 status=ok
// SIG undefined FUN_148da2c04(void)

undefined8 FUN_148da2c04(longlong param_1)

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



// FUNCTION 148da2c5c FUN_148da2c5c body=89 status=ok
// SIG undefined FUN_148da2c5c(void)

bool FUN_148da2c5c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da2ca7;
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
LAB_148da2ca7:
  return lVar6 == param_2;
}



// FUNCTION 148da2cde FUN_148da2cde body=118 status=ok
// SIG undefined FUN_148da2cde(void)

void FUN_148da2cde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98bee0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b98be70;
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



// FUNCTION 148da2d54 FUN_148da2d54 body=156 status=ok
// SIG undefined FUN_148da2d54(void)

void FUN_148da2d54(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98bee0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b98be70;
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
                    /* WARNING: Could not recover jumptable at 0x000148da2de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da2df0 FUN_148da2df0 body=181 status=ok
// SIG undefined FUN_148da2df0(void)

void FUN_148da2df0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar6 = *(longlong **)(param_1 + 0x20);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148da2e38;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar3 = false;
  }
LAB_148da2e38:
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  (**(code **)(param_1 + 0x28))
            (*(int *)(param_1 + 0x30) + lVar7,&local_28,*(undefined8 *)(param_1 + 8));
  if (!bVar3) {
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148da2ea8 FUN_148da2ea8 body=64 status=ok
// SIG undefined FUN_148da2ea8(void)

undefined8 * FUN_148da2ea8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98bf50;
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



// FUNCTION 148da2eec FUN_148da2eec body=81 status=ok
// SIG undefined FUN_148da2eec(void)

undefined8 FUN_148da2eec(longlong param_1)

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



// FUNCTION 148da2f44 FUN_148da2f44 body=89 status=ok
// SIG undefined FUN_148da2f44(void)

bool FUN_148da2f44(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da2f8f;
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
LAB_148da2f8f:
  return lVar6 == param_2;
}



// FUNCTION 148da2fba FUN_148da2fba body=118 status=ok
// SIG undefined FUN_148da2fba(void)

void FUN_148da2fba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98bf50;
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



// FUNCTION 148da3030 FUN_148da3030 body=118 status=ok
// SIG undefined FUN_148da3030(void)

void FUN_148da3030(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98bf50;
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



// FUNCTION 148da30a6 FUN_148da30a6 body=156 status=ok
// SIG undefined FUN_148da30a6(void)

void FUN_148da30a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98bf50;
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
                    /* WARNING: Could not recover jumptable at 0x000148da3132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da3142 FUN_148da3142 body=104 status=ok
// SIG undefined FUN_148da3142(void)

void FUN_148da3142(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da318f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da31a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da31aa FUN_148da31aa body=101 status=ok
// SIG undefined FUN_148da31aa(void)

ulonglong FUN_148da31aa(longlong param_1)

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
LAB_148da3204:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da3204;
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



// FUNCTION 148da3210 FUN_148da3210 body=64 status=ok
// SIG undefined FUN_148da3210(void)

undefined8 * FUN_148da3210(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98bfc0;
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



// FUNCTION 148da3254 FUN_148da3254 body=81 status=ok
// SIG undefined FUN_148da3254(void)

undefined8 FUN_148da3254(longlong param_1)

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



// FUNCTION 148da32ac FUN_148da32ac body=89 status=ok
// SIG undefined FUN_148da32ac(void)

bool FUN_148da32ac(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da32f7;
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
LAB_148da32f7:
  return lVar6 == param_2;
}



// FUNCTION 148da332e FUN_148da332e body=118 status=ok
// SIG undefined FUN_148da332e(void)

void FUN_148da332e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98c030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bfc0;
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



// FUNCTION 148da33a4 FUN_148da33a4 body=118 status=ok
// SIG undefined FUN_148da33a4(void)

void FUN_148da33a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98c030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bfc0;
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



// FUNCTION 148da341a FUN_148da341a body=156 status=ok
// SIG undefined FUN_148da341a(void)

void FUN_148da341a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b98c030;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98bfc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148da34a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da34b6 FUN_148da34b6 body=181 status=ok
// SIG undefined FUN_148da34b6(void)

void FUN_148da34b6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148da352c:
    local_18 = *(undefined4 *)(param_2 + 1);
    local_20 = *param_2;
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),&local_20);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148da352c;
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
    local_18 = *(undefined4 *)(param_2 + 1);
    local_20 = *param_2;
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),&local_20);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148da356c FUN_148da356c body=164 status=ok
// SIG undefined FUN_148da356c(void)

ulonglong FUN_148da356c(longlong param_1,undefined8 *param_2)

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
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148da35ef:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da35ef;
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
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(param_2 + 1);
      local_28 = *param_2;
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148da3614 FUN_148da3614 body=29 status=ok
// SIG undefined FUN_148da3614(void)

undefined8 FUN_148da3614(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da364c FUN_148da364c body=29 status=ok
// SIG undefined FUN_148da364c(void)

bool FUN_148da364c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148da366a FUN_148da366a body=26 status=ok
// SIG undefined FUN_148da366a(void)

bool FUN_148da366a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148da3684 FUN_148da3684 body=24 status=ok
// SIG undefined FUN_148da3684(void)

bool FUN_148da3684(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148da36a8 FUN_148da36a8 body=93 status=ok
// SIG undefined FUN_148da36a8(void)

void FUN_148da36a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98c110;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b98c0a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148da3706 FUN_148da3706 body=93 status=ok
// SIG undefined FUN_148da3706(void)

void FUN_148da3706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98c110;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b98c0a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148da3764 FUN_148da3764 body=126 status=ok
// SIG undefined FUN_148da3764(void)

void FUN_148da3764(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98c110;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c0a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148da37d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da37e2 FUN_148da37e2 body=42 status=ok
// SIG undefined FUN_148da37e2(void)

void FUN_148da37e2(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148da3809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (uVar1,param_2,*(undefined8 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148da380c FUN_148da380c body=154 status=ok
// SIG undefined FUN_148da380c(void)

bool FUN_148da380c(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148da38aa FUN_148da38aa body=139 status=ok
// SIG undefined FUN_148da38aa(void)

void FUN_148da38aa(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14b98c180;
  uVar1 = *param_1;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar3 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  puVar3[6] = uVar1;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0x101;
  *(undefined1 *)((longlong)puVar3 + 0x54) = 3;
  puVar3[2] = &PTR_FUN_14b98c1a0;
  puVar3[8] = *param_2;
  return;
}



// FUNCTION 148da3958 FUN_148da3958 body=29 status=ok
// SIG undefined FUN_148da3958(void)

undefined8 FUN_148da3958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da3976 FUN_148da3976 body=64 status=ok
// SIG undefined FUN_148da3976(void)

undefined8 * FUN_148da3976(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da39b8 FUN_148da39b8 body=123 status=ok
// SIG undefined FUN_148da39b8(void)

undefined8 FUN_148da39b8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f380f4(param_1 + 0x30,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FApplyUserSelectedNetworkModeTask - %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148da3a34 FUN_148da3a34 body=167 status=ok
// SIG undefined FUN_148da3a34(void)

void FUN_148da3a34(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da3aaf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da3aaf;
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
LAB_148da3aaf:
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
                    /* WARNING: Could not recover jumptable at 0x000148da3acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da3adb FUN_148da3adb body=139 status=ok
// SIG undefined FUN_148da3adb(void)

void FUN_148da3adb(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14b98c180;
  uVar1 = *param_1;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar3 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  puVar3[6] = uVar1;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0x101;
  *(undefined1 *)((longlong)puVar3 + 0x54) = 3;
  puVar3[2] = &PTR_FUN_14b98c1a0;
  puVar3[8] = *param_2;
  return;
}



// FUNCTION 148da3b66 FUN_148da3b66 body=167 status=ok
// SIG undefined FUN_148da3b66(void)

undefined8 * FUN_148da3b66(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x41) = 0x3000101;
  *param_1 = &PTR_FUN_14b98c250;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = DAT_14cb977f8;
  (**(code **)(*param_2 + 0x308))(param_2,&local_28);
  param_1[7] = local_28;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da3c0e FUN_148da3c0e body=34 status=ok
// SIG undefined FUN_148da3c0e(void)

void FUN_148da3c0e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da3c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da3c30 FUN_148da3c30 body=29 status=ok
// SIG undefined FUN_148da3c30(void)

undefined8 FUN_148da3c30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da3c4e FUN_148da3c4e body=64 status=ok
// SIG undefined FUN_148da3c4e(void)

undefined8 * FUN_148da3c4e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da3c90 FUN_148da3c90 body=32 status=ok
// SIG undefined FUN_148da3c90(void)

undefined8 FUN_148da3c90(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FTransitionOfflineAndRestoreTask");
  return param_2;
}



// FUNCTION 148da3cb0 FUN_148da3cb0 body=167 status=ok
// SIG undefined FUN_148da3cb0(void)

void FUN_148da3cb0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da3d2b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da3d2b;
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
LAB_148da3d2b:
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
                    /* WARNING: Could not recover jumptable at 0x000148da3d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da3d57 FUN_148da3d57 body=122 status=ok
// SIG undefined FUN_148da3d57(void)

void FUN_148da3d57(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14b98c2d0;
  uVar1 = *param_1;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar3 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  puVar3[6] = uVar1;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x51) = 0x2000101;
  puVar3[2] = &PTR_FUN_14b98c2f0;
  return;
}



// FUNCTION 148da3df4 FUN_148da3df4 body=29 status=ok
// SIG undefined FUN_148da3df4(void)

undefined8 FUN_148da3df4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da3e12 FUN_148da3e12 body=64 status=ok
// SIG undefined FUN_148da3e12(void)

undefined8 * FUN_148da3e12(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da3e54 FUN_148da3e54 body=123 status=ok
// SIG undefined FUN_148da3e54(void)

undefined8 FUN_148da3e54(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f380f4(param_1 + 0x30,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FChangeNetworkModeForOnlineCapabilityLostTask - %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148da3ed0 FUN_148da3ed0 body=167 status=ok
// SIG undefined FUN_148da3ed0(void)

void FUN_148da3ed0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da3f4b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da3f4b;
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
LAB_148da3f4b:
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
                    /* WARNING: Could not recover jumptable at 0x000148da3f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da3f77 FUN_148da3f77 body=139 status=ok
// SIG undefined FUN_148da3f77(void)

void FUN_148da3f77(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b98c390;
  uVar1 = *param_2;
  uVar2 = *param_1;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar4 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  puVar4[6] = uVar2;
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined1 *)(puVar4 + 10) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x51) = 0x101;
  *(undefined1 *)((longlong)puVar4 + 0x53) = uVar1;
  *(undefined1 *)((longlong)puVar4 + 0x54) = 2;
  puVar4[2] = &PTR_FUN_14b98c3b0;
  return;
}



// FUNCTION 148da4024 FUN_148da4024 body=29 status=ok
// SIG undefined FUN_148da4024(void)

undefined8 FUN_148da4024(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da4042 FUN_148da4042 body=64 status=ok
// SIG undefined FUN_148da4042(void)

undefined8 * FUN_148da4042(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da4084 FUN_148da4084 body=123 status=ok
// SIG undefined FUN_148da4084(void)

undefined8 FUN_148da4084(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f380f4(param_1 + 0x30,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FAttemptNetworkModeRestoreTask - %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148da4100 FUN_148da4100 body=167 status=ok
// SIG undefined FUN_148da4100(void)

void FUN_148da4100(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da417b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da417b;
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
LAB_148da417b:
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
                    /* WARNING: Could not recover jumptable at 0x000148da419b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da41a8 FUN_148da41a8 body=215 status=ok
// SIG undefined FUN_148da41a8(void)

undefined8 *
FUN_148da41a8(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b98c430;
  local_40 = 0;
  local_38 = 0;
  FUN_148a88c36(&local_40,param_4);
  uVar1 = *param_3;
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = &PTR_FUN_14b98c450;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_148a88c36(param_1 + 9,&local_40);
  *(undefined4 *)(param_1 + 0xb) = 1;
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da4280 FUN_148da4280 body=73 status=ok
// SIG undefined FUN_148da4280(void)

void FUN_148da4280(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b98c450;
  FUN_1449db362(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da42be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da42ca FUN_148da42ca body=29 status=ok
// SIG undefined FUN_148da42ca(void)

undefined8 FUN_148da42ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da42e8 FUN_148da42e8 body=83 status=ok
// SIG undefined FUN_148da42e8(void)

undefined8 * FUN_148da42e8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c450;
  FUN_1449db362(param_1 + 7);
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da433c FUN_148da433c body=36 status=ok
// SIG undefined FUN_148da433c(void)

undefined8 FUN_148da433c(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FAddSplitscreenPlayerTask - %d",*(undefined4 *)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 148da4360 FUN_148da4360 body=167 status=ok
// SIG undefined FUN_148da4360(void)

void FUN_148da4360(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da43db;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da43db;
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
LAB_148da43db:
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
                    /* WARNING: Could not recover jumptable at 0x000148da43fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da4408 FUN_148da4408 body=64 status=ok
// SIG undefined FUN_148da4408(void)

undefined8 * FUN_148da4408(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c4c0;
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



// FUNCTION 148da444c FUN_148da444c body=81 status=ok
// SIG undefined FUN_148da444c(void)

undefined8 FUN_148da444c(longlong param_1)

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



// FUNCTION 148da44a4 FUN_148da44a4 body=89 status=ok
// SIG undefined FUN_148da44a4(void)

bool FUN_148da44a4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da44ef;
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
LAB_148da44ef:
  return lVar6 == param_2;
}



// FUNCTION 148da451a FUN_148da451a body=118 status=ok
// SIG undefined FUN_148da451a(void)

void FUN_148da451a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c4c0;
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



// FUNCTION 148da4590 FUN_148da4590 body=118 status=ok
// SIG undefined FUN_148da4590(void)

void FUN_148da4590(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c4c0;
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



// FUNCTION 148da4606 FUN_148da4606 body=156 status=ok
// SIG undefined FUN_148da4606(void)

void FUN_148da4606(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c4c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148da4692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da46a2 FUN_148da46a2 body=104 status=ok
// SIG undefined FUN_148da46a2(void)

void FUN_148da46a2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da46ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da4700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da470a FUN_148da470a body=101 status=ok
// SIG undefined FUN_148da470a(void)

ulonglong FUN_148da470a(longlong param_1)

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
LAB_148da4764:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da4764;
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



// FUNCTION 148da4770 FUN_148da4770 body=64 status=ok
// SIG undefined FUN_148da4770(void)

undefined8 * FUN_148da4770(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c530;
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



// FUNCTION 148da47b4 FUN_148da47b4 body=81 status=ok
// SIG undefined FUN_148da47b4(void)

undefined8 FUN_148da47b4(longlong param_1)

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



// FUNCTION 148da480c FUN_148da480c body=89 status=ok
// SIG undefined FUN_148da480c(void)

bool FUN_148da480c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da4857;
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
LAB_148da4857:
  return lVar6 == param_2;
}



// FUNCTION 148da4882 FUN_148da4882 body=118 status=ok
// SIG undefined FUN_148da4882(void)

void FUN_148da4882(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c530;
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



// FUNCTION 148da48f8 FUN_148da48f8 body=118 status=ok
// SIG undefined FUN_148da48f8(void)

void FUN_148da48f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c530;
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



// FUNCTION 148da496e FUN_148da496e body=156 status=ok
// SIG undefined FUN_148da496e(void)

void FUN_148da496e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c530;
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
                    /* WARNING: Could not recover jumptable at 0x000148da49fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da4a0a FUN_148da4a0a body=104 status=ok
// SIG undefined FUN_148da4a0a(void)

void FUN_148da4a0a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da4a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da4a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da4a72 FUN_148da4a72 body=101 status=ok
// SIG undefined FUN_148da4a72(void)

ulonglong FUN_148da4a72(longlong param_1)

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
LAB_148da4acc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da4acc;
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



// FUNCTION 148da4ad8 FUN_148da4ad8 body=64 status=ok
// SIG undefined FUN_148da4ad8(void)

undefined8 * FUN_148da4ad8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c5a0;
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



// FUNCTION 148da4b1c FUN_148da4b1c body=81 status=ok
// SIG undefined FUN_148da4b1c(void)

undefined8 FUN_148da4b1c(longlong param_1)

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



// FUNCTION 148da4b74 FUN_148da4b74 body=89 status=ok
// SIG undefined FUN_148da4b74(void)

bool FUN_148da4b74(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da4bbf;
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
LAB_148da4bbf:
  return lVar6 == param_2;
}



// FUNCTION 148da4bea FUN_148da4bea body=118 status=ok
// SIG undefined FUN_148da4bea(void)

void FUN_148da4bea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98c030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c5a0;
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



// FUNCTION 148da4c60 FUN_148da4c60 body=118 status=ok
// SIG undefined FUN_148da4c60(void)

void FUN_148da4c60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98c030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c5a0;
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



// FUNCTION 148da4cd6 FUN_148da4cd6 body=156 status=ok
// SIG undefined FUN_148da4cd6(void)

void FUN_148da4cd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b98c030;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c5a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148da4d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da4d72 FUN_148da4d72 body=181 status=ok
// SIG undefined FUN_148da4d72(void)

void FUN_148da4d72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148da4de8:
    local_18 = *(undefined4 *)(param_2 + 1);
    local_20 = *param_2;
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),&local_20);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148da4de8;
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
    local_18 = *(undefined4 *)(param_2 + 1);
    local_20 = *param_2;
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),&local_20);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148da4e28 FUN_148da4e28 body=164 status=ok
// SIG undefined FUN_148da4e28(void)

ulonglong FUN_148da4e28(longlong param_1,undefined8 *param_2)

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
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148da4eab:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da4eab;
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
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(param_2 + 1);
      local_28 = *param_2;
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148da4ece FUN_148da4ece body=212 status=ok
// SIG undefined FUN_148da4ece(void)

undefined8 *
FUN_148da4ece(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b98c680;
  local_40 = 0;
  local_38 = 0;
  FUN_14114e6dc(&local_40,param_4);
  uVar1 = *param_3;
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = &PTR_FUN_14b98c6a0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_14114e6dc(param_1 + 9,&local_40);
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da4fa4 FUN_148da4fa4 body=73 status=ok
// SIG undefined FUN_148da4fa4(void)

void FUN_148da4fa4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b98c6a0;
  FUN_1449db362(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da4fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da4fee FUN_148da4fee body=29 status=ok
// SIG undefined FUN_148da4fee(void)

undefined8 FUN_148da4fee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da500c FUN_148da500c body=83 status=ok
// SIG undefined FUN_148da500c(void)

undefined8 * FUN_148da500c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c6a0;
  FUN_1449db362(param_1 + 7);
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da5060 FUN_148da5060 body=36 status=ok
// SIG undefined FUN_148da5060(void)

undefined8 FUN_148da5060(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FRemoveSplitscreenPlayerTask - %d",*(undefined4 *)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 148da5084 FUN_148da5084 body=167 status=ok
// SIG undefined FUN_148da5084(void)

void FUN_148da5084(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da50ff;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da50ff;
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
LAB_148da50ff:
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
                    /* WARNING: Could not recover jumptable at 0x000148da511f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da512c FUN_148da512c body=83 status=ok
// SIG undefined FUN_148da512c(void)

undefined8 * FUN_148da512c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c7a0;
  FUN_1449db362(param_1 + 6);
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da5180 FUN_148da5180 body=32 status=ok
// SIG undefined FUN_148da5180(void)

undefined8 FUN_148da5180(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStartGameplayTask");
  return param_2;
}



// FUNCTION 148da51a4 FUN_148da51a4 body=81 status=ok
// SIG undefined FUN_148da51a4(void)

undefined8 FUN_148da51a4(longlong param_1)

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



// FUNCTION 148da51fc FUN_148da51fc body=89 status=ok
// SIG undefined FUN_148da51fc(void)

bool FUN_148da51fc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da5247;
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
LAB_148da5247:
  return lVar6 == param_2;
}



// FUNCTION 148da5272 FUN_148da5272 body=118 status=ok
// SIG undefined FUN_148da5272(void)

void FUN_148da5272(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c7f0;
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



// FUNCTION 148da52e8 FUN_148da52e8 body=156 status=ok
// SIG undefined FUN_148da52e8(void)

void FUN_148da52e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c7f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148da5374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da5384 FUN_148da5384 body=104 status=ok
// SIG undefined FUN_148da5384(void)

void FUN_148da5384(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da53d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da53e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da53ec FUN_148da53ec body=9 status=ok
// SIG undefined FUN_148da53ec(void)

void FUN_148da53ec(longlong param_1)

{
  FUN_148da545c(param_1 + 0x10);
  return;
}



// FUNCTION 148da53f6 FUN_148da53f6 body=29 status=ok
// SIG undefined FUN_148da53f6(void)

undefined8 FUN_148da53f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da5414 FUN_148da5414 body=38 status=ok
// SIG undefined FUN_148da5414(void)

undefined8 FUN_148da5414(undefined8 param_1,int param_2)

{
  FUN_148da545c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da543c FUN_148da543c body=32 status=ok
// SIG undefined FUN_148da543c(void)

undefined8 FUN_148da543c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FReassignPartyLeaderTask");
  return param_2;
}



// FUNCTION 148da545c FUN_148da545c body=103 status=ok
// SIG undefined FUN_148da545c(void)

void FUN_148da545c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b98c880;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_LAB_14b98b6e0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da54b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da54c4 FUN_148da54c4 body=167 status=ok
// SIG undefined FUN_148da54c4(void)

void FUN_148da54c4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da553f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da553f;
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
LAB_148da553f:
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
                    /* WARNING: Could not recover jumptable at 0x000148da555f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da556c FUN_148da556c body=29 status=ok
// SIG undefined FUN_148da556c(void)

undefined8 FUN_148da556c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da55a4 FUN_148da55a4 body=29 status=ok
// SIG undefined FUN_148da55a4(void)

bool FUN_148da55a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148da55c2 FUN_148da55c2 body=26 status=ok
// SIG undefined FUN_148da55c2(void)

bool FUN_148da55c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148da55dc FUN_148da55dc body=24 status=ok
// SIG undefined FUN_148da55dc(void)

bool FUN_148da55dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148da55f4 FUN_148da55f4 body=93 status=ok
// SIG undefined FUN_148da55f4(void)

void FUN_148da55f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148da5652 FUN_148da5652 body=93 status=ok
// SIG undefined FUN_148da5652(void)

void FUN_148da5652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148da56b0 FUN_148da56b0 body=126 status=ok
// SIG undefined FUN_148da56b0(void)

void FUN_148da56b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b98cfe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c8e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148da571f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da572e FUN_148da572e body=38 status=ok
// SIG undefined FUN_148da572e(void)

void FUN_148da572e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148da5751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148da5754 FUN_148da5754 body=150 status=ok
// SIG undefined FUN_148da5754(void)

bool FUN_148da5754(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148da57ec FUN_148da57ec body=34 status=ok
// SIG undefined FUN_148da57ec(void)

void FUN_148da57ec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da5809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da580e FUN_148da580e body=29 status=ok
// SIG undefined FUN_148da580e(void)

undefined8 FUN_148da580e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da582c FUN_148da582c body=64 status=ok
// SIG undefined FUN_148da582c(void)

undefined8 * FUN_148da582c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da586e FUN_148da586e body=32 status=ok
// SIG undefined FUN_148da586e(void)

undefined8 FUN_148da586e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLeavePartyTask");
  return param_2;
}



// FUNCTION 148da588e FUN_148da588e body=167 status=ok
// SIG undefined FUN_148da588e(void)

void FUN_148da588e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da5909;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da5909;
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
LAB_148da5909:
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
                    /* WARNING: Could not recover jumptable at 0x000148da5929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da5936 FUN_148da5936 body=64 status=ok
// SIG undefined FUN_148da5936(void)

undefined8 * FUN_148da5936(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c9c0;
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



// FUNCTION 148da597a FUN_148da597a body=81 status=ok
// SIG undefined FUN_148da597a(void)

undefined8 FUN_148da597a(longlong param_1)

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



// FUNCTION 148da59d2 FUN_148da59d2 body=89 status=ok
// SIG undefined FUN_148da59d2(void)

bool FUN_148da59d2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da5a1d;
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
LAB_148da5a1d:
  return lVar6 == param_2;
}



// FUNCTION 148da5a48 FUN_148da5a48 body=118 status=ok
// SIG undefined FUN_148da5a48(void)

void FUN_148da5a48(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c9c0;
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



// FUNCTION 148da5abe FUN_148da5abe body=118 status=ok
// SIG undefined FUN_148da5abe(void)

void FUN_148da5abe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98c9c0;
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



// FUNCTION 148da5b34 FUN_148da5b34 body=156 status=ok
// SIG undefined FUN_148da5b34(void)

void FUN_148da5b34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c9c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148da5bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da5bd0 FUN_148da5bd0 body=104 status=ok
// SIG undefined FUN_148da5bd0(void)

void FUN_148da5bd0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da5c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da5c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da5c38 FUN_148da5c38 body=101 status=ok
// SIG undefined FUN_148da5c38(void)

ulonglong FUN_148da5c38(longlong param_1)

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
LAB_148da5c92:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da5c92;
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



// FUNCTION 148da5c9e FUN_148da5c9e body=34 status=ok
// SIG undefined FUN_148da5c9e(void)

void FUN_148da5c9e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da5cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da5cc0 FUN_148da5cc0 body=29 status=ok
// SIG undefined FUN_148da5cc0(void)

undefined8 FUN_148da5cc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da5cde FUN_148da5cde body=64 status=ok
// SIG undefined FUN_148da5cde(void)

undefined8 * FUN_148da5cde(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da5d20 FUN_148da5d20 body=32 status=ok
// SIG undefined FUN_148da5d20(void)

undefined8 FUN_148da5d20(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FAttemptCrossplayStateChangeTask");
  return param_2;
}



// FUNCTION 148da5d40 FUN_148da5d40 body=167 status=ok
// SIG undefined FUN_148da5d40(void)

void FUN_148da5d40(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da5dbb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da5dbb;
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
LAB_148da5dbb:
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
                    /* WARNING: Could not recover jumptable at 0x000148da5ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da5de8 FUN_148da5de8 body=64 status=ok
// SIG undefined FUN_148da5de8(void)

undefined8 * FUN_148da5de8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98cb30;
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



// FUNCTION 148da5e2c FUN_148da5e2c body=81 status=ok
// SIG undefined FUN_148da5e2c(void)

undefined8 FUN_148da5e2c(longlong param_1)

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



// FUNCTION 148da5e84 FUN_148da5e84 body=89 status=ok
// SIG undefined FUN_148da5e84(void)

bool FUN_148da5e84(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148da5ecf;
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
LAB_148da5ecf:
  return lVar6 == param_2;
}



// FUNCTION 148da5f06 FUN_148da5f06 body=118 status=ok
// SIG undefined FUN_148da5f06(void)

void FUN_148da5f06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98cb30;
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



// FUNCTION 148da5f7c FUN_148da5f7c body=118 status=ok
// SIG undefined FUN_148da5f7c(void)

void FUN_148da5f7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98cb30;
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



// FUNCTION 148da5ff2 FUN_148da5ff2 body=156 status=ok
// SIG undefined FUN_148da5ff2(void)

void FUN_148da5ff2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b98cba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98cb30;
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
                    /* WARNING: Could not recover jumptable at 0x000148da607e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da608e FUN_148da608e body=104 status=ok
// SIG undefined FUN_148da608e(void)

void FUN_148da608e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148da60db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148da60ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148da60f6 FUN_148da60f6 body=101 status=ok
// SIG undefined FUN_148da60f6(void)

ulonglong FUN_148da60f6(longlong param_1)

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
LAB_148da6150:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148da6150;
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



// FUNCTION 148da615e FUN_148da615e body=29 status=ok
// SIG undefined FUN_148da615e(void)

undefined8 FUN_148da615e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da6196 FUN_148da6196 body=29 status=ok
// SIG undefined FUN_148da6196(void)

bool FUN_148da6196(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148da61b4 FUN_148da61b4 body=26 status=ok
// SIG undefined FUN_148da61b4(void)

bool FUN_148da61b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148da61ce FUN_148da61ce body=24 status=ok
// SIG undefined FUN_148da61ce(void)

bool FUN_148da61ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148da61f2 FUN_148da61f2 body=93 status=ok
// SIG undefined FUN_148da61f2(void)

void FUN_148da61f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cc80;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b98cc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148da6250 FUN_148da6250 body=93 status=ok
// SIG undefined FUN_148da6250(void)

void FUN_148da6250(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cc80;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b98cc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148da62ae FUN_148da62ae body=126 status=ok
// SIG undefined FUN_148da62ae(void)

void FUN_148da62ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98cc80;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b98cc10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148da631d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148da632c FUN_148da632c body=46 status=ok
// SIG undefined FUN_148da632c(void)

void FUN_148da632c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148da6357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (uVar1,param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 148da635a FUN_148da635a body=158 status=ok
// SIG undefined FUN_148da635a(void)

bool FUN_148da635a(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))
              (lVar2,param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
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



// FUNCTION 148da63fc FUN_148da63fc body=162 status=ok
// SIG undefined FUN_148da63fc(void)

undefined8 *
FUN_148da63fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14b98cd10;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_145cc348e(param_1 + 6,iVar1,0);
    FUN_145cc3452(param_1[6],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x44) = param_5;
  return param_1;
}



// FUNCTION 148da649e FUN_148da649e body=9 status=ok
// SIG undefined FUN_148da649e(void)

void FUN_148da649e(longlong param_1)

{
  FUN_148da650e(param_1 + 0x10);
  return;
}



// FUNCTION 148da64a8 FUN_148da64a8 body=29 status=ok
// SIG undefined FUN_148da64a8(void)

undefined8 FUN_148da64a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da64c6 FUN_148da64c6 body=38 status=ok
// SIG undefined FUN_148da64c6(void)

undefined8 FUN_148da64c6(undefined8 param_1,int param_2)

{
  FUN_148da650e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da64ee FUN_148da64ee body=32 status=ok
// SIG undefined FUN_148da64ee(void)

undefined8 FUN_148da64ee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStartMatchmakingTask");
  return param_2;
}



// FUNCTION 148da650e FUN_148da650e body=88 status=ok
// SIG undefined FUN_148da650e(void)

void FUN_148da650e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98cd10;
  FUN_141175adb(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b98b6e0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da655b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da6566 FUN_148da6566 body=167 status=ok
// SIG undefined FUN_148da6566(void)

void FUN_148da6566(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da65e1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da65e1;
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
LAB_148da65e1:
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
                    /* WARNING: Could not recover jumptable at 0x000148da6601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da660e FUN_148da660e body=34 status=ok
// SIG undefined FUN_148da660e(void)

void FUN_148da660e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148da662b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148da6630 FUN_148da6630 body=29 status=ok
// SIG undefined FUN_148da6630(void)

undefined8 FUN_148da6630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148da664e FUN_148da664e body=64 status=ok
// SIG undefined FUN_148da664e(void)

undefined8 * FUN_148da664e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b98b6e0;
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



// FUNCTION 148da6690 FUN_148da6690 body=32 status=ok
// SIG undefined FUN_148da6690(void)

undefined8 FUN_148da6690(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStopMatchmakingTask");
  return param_2;
}



// FUNCTION 148da66b0 FUN_148da66b0 body=167 status=ok
// SIG undefined FUN_148da66b0(void)

void FUN_148da66b0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148da672b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148da672b;
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
LAB_148da672b:
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
                    /* WARNING: Could not recover jumptable at 0x000148da674b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148da6758 FUN_148da6758 body=155 status=ok
// SIG undefined FUN_148da6758(void)

void FUN_148da6758(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x28);
    local_20 = *(longlong *)(param_1 + 0x30);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
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



// FUNCTION 148da6804 FUN_148da6804 body=83 status=ok
// SIG undefined FUN_148da6804(void)

undefined8 FUN_148da6804(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if ((lVar1 == 0) || ((longlong)*(int *)(lVar1 + 0x40) == 0)) {
    return 0;
  }
  lVar3 = 0;
  while ((lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar3), lVar2 == 0 ||
         (*(int *)(lVar2 + 0xe0) != param_2))) {
    lVar3 = lVar3 + 8;
    if ((longlong)*(int *)(lVar1 + 0x40) * 8 == lVar3) {
      return 0;
    }
  }
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x398);
  }
  return 0;
}



// FUNCTION 148da6858 FUN_148da6858 body=314 status=ok
// SIG undefined FUN_148da6858(void)

void FUN_148da6858(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_3c;
  local_3c = param_4;
  local_38 = param_3;
  FUN_1409bc59c(param_1 + 0x310,&local_48,&local_38,0);
  if (*(longlong *)(param_1 + 0x308) == 0) {
    plVar2 = (longlong *)FUN_1458b3986(param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2);
      local_38 = (undefined8 *)0x0;
      local_30 = (undefined4 *)((ulonglong)local_30 & 0xffffffff00000000);
      FUN_1446efa72(&local_38,0,3,0x10);
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,3);
      *local_38 = &PTR_LAB_14b405fd0;
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
      *local_38 = &PTR_FUN_14b98f500;
      local_38[3] = param_1;
      *(undefined4 *)(local_38 + 4) = param_2;
      FUN_141286bf6(uVar3,&local_48,&local_38);
      FUN_1449db362(&local_38);
      *(undefined8 *)(param_1 + 0x308) = local_48;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da6994 FUN_148da6994 body=108 status=ok
// SIG undefined FUN_148da6994(void)

undefined8 * FUN_148da6994(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (longlong *)FUN_1459b8f2e();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
      if (lVar3 == 0) {
        return param_1;
      }
    }
    iVar1 = *(int *)(lVar3 + 0xe0) + -1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1,*(undefined8 *)(lVar3 + 0xd8),iVar1);
  }
  return param_1;
}



// FUNCTION 148da6a00 FUN_148da6a00 body=68 status=ok
// SIG undefined FUN_148da6a00(void)

void FUN_148da6a00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14124efea(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148da6a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148da6a44 FUN_148da6a44 body=265 status=ok
// SIG undefined FUN_148da6a44(void)

void FUN_148da6a44(longlong param_1)

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
  if (((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x30) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b98f4c0;
    local_68[0] = FUN_1441e1440;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,
                  L"FOakPartyMatchmakingComponent_ExpectedMatchmakingHostFailsafeTimeout",0x40a00000
                 );
    *(undefined8 *)(param_1 + 0x28) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x30);
    *(longlong **)(param_1 + 0x30) = local_70;
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



// FUNCTION 148da6b4e FUN_148da6b4e body=315 status=ok
// SIG undefined FUN_148da6b4e(void)

void FUN_148da6b4e(longlong param_1,longlong param_2)

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
  if (((*(longlong *)(param_1 + 0x1c8) == 0) || (*(longlong *)(param_1 + 0x1d0) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1d0) + 8) < 1)) {
    FUN_1461f4a06(param_1 + 0x1d8,param_2);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x118);
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b98f4e0;
    local_68[0] = FUN_1441e14fc;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,
                  L"FOakPartyMatchmakingComponent_MatchmakingProcessingFailsafeTimeout",0x40a00000);
    *(undefined8 *)(param_1 + 0x1c8) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1d0);
    *(longlong **)(param_1 + 0x1d0) = local_70;
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



// FUNCTION 148da6c8a FUN_148da6c8a body=184 status=ok
// SIG undefined FUN_148da6c8a(void)

undefined8 * FUN_148da6c8a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined **local_48 [3];
  byte local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) != 0) {
    plVar1 = (longlong *)FUN_14119d4d6();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x350))(plVar1,local_48);
      FUN_1408e4d18(local_48,param_2);
      local_48[0] = &PTR_FUN_14a5af930;
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      local_48[0] = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148da6d44 FUN_148da6d44 body=231 status=ok
// SIG undefined FUN_148da6d44(void)

void FUN_148da6d44(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      bVar3 = (**(code **)(*plVar1 + 0x498))(plVar1);
      if (5 < bVar3) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
        if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar4 + 0x360);
        }
        FUN_148d1c467(*(undefined4 *)(param_1 + 0x2f8),uVar6);
        return;
      }
      lVar4 = FUN_14119d4d6(plVar1);
      if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) &&
         (*(longlong *)(lVar4 + 0x398) != 0)) {
        lVar5 = FUN_144a7b4ca();
        lVar4 = *(longlong *)(lVar4 + 0x398);
        if (((lVar4 != 0) && (lVar5 != 0)) &&
           ((lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0 &&
            ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)))))) {
          FUN_148dc0fa8(lVar4,*(undefined4 *)(param_1 + 0x2f8));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148da6e2c FUN_148da6e2c body=108 status=ok
// SIG undefined FUN_148da6e2c(void)

undefined8 * FUN_148da6e2c(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (longlong *)FUN_1459b8f2e();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
      if (lVar3 == 0) {
        return param_1;
      }
    }
    iVar1 = *(int *)(lVar3 + 0xb0) + -1;
    if (*(int *)(lVar3 + 0xb0) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1,*(undefined8 *)(lVar3 + 0xa8),iVar1);
  }
  return param_1;
}



// FUNCTION 148da6e98 FUN_148da6e98 body=140 status=ok
// SIG undefined FUN_148da6e98(void)

void FUN_148da6e98(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_145c08bc8();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
    lVar2 = FUN_140b6d0be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14619f8a0(local_28,2,param_2);
      FUN_148d965fc(lVar1,local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da6f26 FUN_148da6f26 body=70 status=ok
// SIG undefined FUN_148da6f26(void)

void FUN_148da6f26(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_148aaf052();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441bbed8(lVar1,param_2,&DAT_14c9485f0);
      return;
    }
  }
  return;
}



// FUNCTION 148da6f6c FUN_148da6f6c body=75 status=ok
// SIG undefined FUN_148da6f6c(void)

void FUN_148da6f6c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x198);
  lVar2 = FUN_145839968();
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x198);
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x358);
    *(longlong *)(param_1 + 0x198) = lVar2;
  }
  if (lVar2 == lVar1) {
    return;
  }
  FUN_14583bf3a(param_1);
  return;
}



// FUNCTION 148da6fbe FUN_148da6fbe body=423 status=ok
// SIG undefined FUN_148da6fbe(void)

void FUN_148da6fbe(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar2 = FUN_148a999b4();
    if (lVar2 != 0) {
      lVar2 = FUN_148a999b4(param_1);
      if (*(longlong *)(lVar2 + 0x178) != 0) {
        lVar3 = FUN_14041aabe();
        if ((((*(longlong *)(lVar2 + 0x178) != 0) && (lVar3 != 0)) &&
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x178) + 0x10), lVar2 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          lVar2 = FUN_14127bc34();
          if ((lVar2 == param_2) && ((param_2 != 0 && (lVar2 != 0)))) {
            lVar3 = FUN_1401b2ade(lVar2);
            if (lVar3 != 0) {
              plVar4 = (longlong *)FUN_1401b2ade(lVar2);
              cVar1 = (**(code **)(*plVar4 + 0x6c8))(plVar4);
              if (cVar1 != '\0') {
                lVar2 = FUN_1403b0700(param_2);
                local_70 = *(undefined8 *)(lVar2 + 0x38);
                local_80 = (undefined8 *)0x0;
                local_78 = 0;
                FUN_1446efa72(&local_80,0,2,0x10);
                local_78 = 2;
                *local_80 = &PTR_LAB_149e06450;
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
                local_80[2] = lVar3;
                *local_80 = &PTR_FUN_14b98f930;
                local_58 = 0;
                local_48 = &PTR_LAB_14b98f9a0;
                local_38 = &local_70;
                local_68[0] = FUN_1441e1c3a;
                local_40 = param_1;
                FUN_145c66056(param_1,local_68,0,&local_80);
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da7166 FUN_148da7166 body=223 status=ok
// SIG undefined FUN_148da7166(void)

undefined8 FUN_148da7166(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b968eb0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b98f9c0;
  local_30[3] = param_2;
  local_30[4] = FUN_148da6fbe;
  FUN_14586eb8c(&DAT_14cb717f8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da7246 FUN_148da7246 body=284 status=ok
// SIG undefined FUN_148da7246(void)

void FUN_148da7246(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b98fd60;
  plVar1 = plVar3 + 2;
  local_40 = (longlong *)*param_2;
  *param_2 = 0;
  local_38 = (longlong *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_148db00ea(plVar1,&local_40);
  local_50 = plVar1;
  local_48 = plVar3;
  FUN_148db0702(&local_50,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_1411d7792(param_1,&local_40);
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da7364 FUN_148da7364 body=230 status=ok
// SIG undefined FUN_148da7364(void)

void FUN_148da7364(undefined8 param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x48,0x10);
  FUN_148db07aa(plVar3,param_2);
  local_40 = plVar3 + 2;
  local_38 = plVar3;
  FUN_148db0da8(&local_40);
  local_30 = local_40;
  local_28 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_1411d7792(param_1,&local_30);
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
  plVar3 = local_38;
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da744c FUN_148da744c body=247 status=ok
// SIG undefined FUN_148da744c(void)

byte FUN_148da744c(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)FUN_140773fe2();
  if (plVar1 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    uVar2 = FUN_14111b7b0(param_1);
    lVar3 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar2);
    bVar4 = 0;
    if (lVar3 != 0) {
      local_a0 = 0x3000300000000;
      local_98 = 3;
      local_96 = 3;
      local_94 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = &local_38;
      local_30 = FUN_143ef2b5a;
      local_38 = &local_a0;
      bifrost::account::get(*(undefined8 *)(lVar3 + 0x2b8));
      if (local_a0._2_1_ < 4) {
        bVar4 = local_a0._2_1_;
      }
      FUN_14111b87a(&local_a0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da7544 FUN_148da7544 body=382 status=ok
// SIG undefined FUN_148da7544(void)

undefined8 FUN_148da7544(undefined8 param_1,int param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74();
  if (param_2 == 2) {
    local_38 = L"ShiftUIBlockReason_ShiftAgeRestriction";
    local_30 = 0x26;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OakShiftUI";
    local_30 = 10;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = 
    L"You do not meet the minimum requirements to access this feature. Please contact customer support for assistance."
    ;
  }
  else if (param_2 == 1) {
    local_38 = L"ShiftUIBlockReason_NetworkCapabilityLost";
    local_30 = 0x28;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OakShiftUI";
    local_30 = 10;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = 
    L"To access the Gearbox Software SHiFT menu, ensure you have an active network connection.";
  }
  else {
    if (param_2 != 0) goto LAB_148da769f;
    local_38 = L"ShiftUIBlockReason_InvalidSession";
    local_30 = 0x21;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OakShiftUI";
    local_30 = 10;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = 
    L"To access the Gearbox Software SHiFT menu, ensure all active users are connected to SHiFT.";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar1);
  FUN_140008f88(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
LAB_148da769f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da76c4 FUN_148da76c4 body=180 status=ok
// SIG undefined FUN_148da76c4(void)

void FUN_148da76c4(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0x114)) &&
      (*(int *)(param_1 + 0x138) == *(int *)(param_1 + 0x164))) ||
     (*(longlong *)(DAT_14cb98ab0 + 0x28) == 0)) {
    return;
  }
  if (DAT_14cbcecb0 != DAT_14cbcecdc) {
    puVar3 = &DAT_14cbcece0;
    if (DAT_14cbcece8 != (undefined *)0x0) {
      puVar3 = DAT_14cbcece8;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)(DAT_14cbcecf0 - 1U & param_2) * 4);
    while (uVar1 != 0xffffffff) {
      puVar2 = (uint *)(DAT_14cbceca8 + (longlong)(int)uVar1 * 0x14);
      if (*puVar2 == param_2) goto LAB_148da7739;
      uVar1 = puVar2[3];
    }
  }
  puVar2 = (uint *)0x0;
LAB_148da7739:
  FUN_148abe382(*(longlong *)(DAT_14cb98ab0 + 0x28),*(undefined8 *)(puVar2 + 1));
  FUN_148da7d44(param_1 + 0xe0,param_2);
  return;
}



// FUNCTION 148da7778 FUN_148da7778 body=74 status=ok
// SIG undefined FUN_148da7778(void)

void FUN_148da7778(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cbafe(param_1 + 0x88,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da77c4 FUN_148da77c4 body=150 status=ok
// SIG undefined FUN_148da77c4(void)

int FUN_148da77c4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) ||
     (iVar2 = -1, *(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164))) {
    FUN_148da8400();
    iVar2 = *local_28;
    if ((longlong)local_20 != 0) {
      lVar1 = 0;
      do {
        if (*(int *)((longlong)local_28 + lVar1) < iVar2) {
          iVar2 = *(int *)((longlong)local_28 + lVar1);
        }
        lVar1 = lVar1 + 4;
      } while ((longlong)local_20 * 4 != lVar1);
    }
    if (local_28 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da785c FUN_148da785c body=414 status=ok
// SIG undefined FUN_148da785c(void)

void FUN_148da785c(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  undefined *puVar7;
  
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) && (cVar3 = FUN_145ec0e6a(), cVar3 != '\0')) {
    plVar1 = (longlong *)(param_1 + 0x130);
    if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
      lVar5 = param_1 + 0x168;
      if (*(longlong *)(param_1 + 0x170) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x170);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x178) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar4 * 0x60;
          if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x60) == param_2) goto LAB_148da78a3;
          iVar4 = *(int *)(lVar5 + 0x58);
        } while (iVar4 != -1);
      }
    }
    lVar5 = 0;
LAB_148da78a3:
    FUN_144a7cc9e(lVar5 + 8,param_3);
    if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
      lVar5 = param_1 + 0x168;
      if (*(longlong *)(param_1 + 0x170) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x170);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x178) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar4 * 0x60;
          if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x60) == param_2) goto LAB_148da78c2;
          iVar4 = *(int *)(lVar5 + 0x58);
        } while (iVar4 != -1);
      }
    }
    lVar5 = 0;
LAB_148da78c2:
    if (*(int *)(lVar5 + 0x10) == *(int *)(lVar5 + 0x3c)) {
      FUN_148db26d6(plVar1,param_2);
      if (DAT_14cbcecb0 != DAT_14cbcecdc) {
        puVar7 = &DAT_14cbcece0;
        if (DAT_14cbcece8 != (undefined *)0x0) {
          puVar7 = DAT_14cbcece8;
        }
        uVar2 = *(uint *)(puVar7 + (ulonglong)(DAT_14cbcecf0 - 1U & param_2) * 4);
        while (uVar2 != 0xffffffff) {
          puVar6 = (uint *)(DAT_14cbceca8 + (longlong)(int)uVar2 * 0x14);
          if (*puVar6 == param_2) goto LAB_148da78f3;
          uVar2 = puVar6[3];
        }
      }
      puVar6 = (uint *)0x0;
LAB_148da78f3:
      FUN_148abe382(*(undefined8 *)(DAT_14cb98ab0 + 0x28),*(undefined8 *)(puVar6 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 148da79fa FUN_148da79fa body=527 status=ok
// SIG undefined FUN_148da79fa(void)

void FUN_148da79fa(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_94;
  uint *local_90;
  undefined8 *local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  local_94 = param_2;
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) &&
     (cVar3 = FUN_145ec0e6a(param_1,0,param_2), cVar3 == '\0')) {
    if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
      piVar7 = (int *)(param_1 + 0x168);
      if (*(int **)(param_1 + 0x170) != (int *)0x0) {
        piVar7 = *(int **)(param_1 + 0x170);
      }
      iVar4 = *piVar7;
      if (iVar4 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x130);
        iVar6 = iVar4;
        do {
          if (*(int *)(lVar2 + (longlong)iVar6 * 0x60) == 0) goto LAB_148da7b7c;
          iVar6 = *(int *)((longlong)iVar6 * 0x60 + lVar2 + 0x58);
        } while (iVar6 != -1);
      }
    }
    puVar9 = (uint *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_1447cbafe(&local_78,&local_90,&local_94,0);
    local_90 = &local_98;
    local_88 = &local_78;
    FUN_148db21c4((longlong *)(param_1 + 0x130),local_7c,&local_90);
    if (DAT_14cbcecb0 != DAT_14cbcecdc) {
      puVar8 = &DAT_14cbcece0;
      if (DAT_14cbcece8 != (undefined *)0x0) {
        puVar8 = DAT_14cbcece8;
      }
      uVar1 = *(uint *)(puVar8 + (ulonglong)(DAT_14cbcecf0 - 1U & local_98) * 4);
      while (uVar1 != 0xffffffff) {
        puVar9 = (uint *)(DAT_14cbceca8 + (longlong)(int)uVar1 * 0x14);
        if (*puVar9 == local_98) goto LAB_148da7b3f;
        uVar1 = puVar9[3];
      }
      puVar9 = (uint *)0x0;
    }
LAB_148da7b3f:
    FUN_143f5b7c6(*(undefined8 *)(DAT_14cb98ab0 + 0x28),*(undefined8 *)(puVar9 + 1));
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_78);
  }
LAB_148da7a32:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar4 = *(int *)(lVar5 + 0x58), iVar4 != -1) {
LAB_148da7b7c:
    lVar5 = lVar2 + (longlong)iVar4 * 0x60;
    if (*(int *)(lVar2 + (longlong)iVar4 * 0x60) == 0) goto LAB_148da7b95;
  }
  lVar5 = 0;
LAB_148da7b95:
  FUN_1447cbafe(lVar5 + 8,&local_78,&local_94,0);
  goto LAB_148da7a32;
}



// FUNCTION 148da7c0a FUN_148da7c0a body=296 status=ok
// SIG undefined FUN_148da7c0a(void)

void FUN_148da7c0a(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
    if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
      lVar5 = param_1 + 0x118;
      if (*(longlong *)(param_1 + 0x120) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x120);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        lVar5 = *(longlong *)(param_1 + 0xe0);
        do {
          if (*(uint *)(lVar5 + (longlong)iVar4 * 0xc) == param_2) goto LAB_148da7cdd;
          iVar4 = *(int *)(lVar5 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
    FUN_148db1ce2((longlong *)(param_1 + 0xe0),local_20,&local_1c);
    if (DAT_14cbcecb0 != DAT_14cbcecdc) {
      puVar3 = &DAT_14cbcece0;
      if (DAT_14cbcece8 != (undefined *)0x0) {
        puVar3 = DAT_14cbcece8;
      }
      uVar2 = *(uint *)(puVar3 + (ulonglong)(DAT_14cbcecf0 - 1U & param_2) * 4);
      while ((uVar2 != 0xffffffff &&
             (puVar1 = (uint *)(DAT_14cbceca8 + (longlong)(int)uVar2 * 0x14), *puVar1 != param_2)))
      {
        uVar2 = puVar1[3];
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_148da7cdd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da7d44 FUN_148da7d44 body=104 status=ok
// SIG undefined FUN_148da7d44(void)

undefined8 FUN_148da7d44(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xc) == param_2) {
          FUN_148db216c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 148da7dac FUN_148da7dac body=355 status=ok
// SIG undefined FUN_148da7dac(void)

void FUN_148da7dac(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
      lVar4 = FUN_140b6d0be();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_1446f470e(&local_50,L"SHIFT",1);
        plVar5 = (longlong *)FUN_140489acc();
        (**(code **)(*plVar5 + 0x2e8))(plVar5,&local_48,param_2,local_50);
        if ((&DAT_149fc1b6e)[local_30] == '\x01') {
          lVar4 = local_40;
          if (local_38 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
            plVar5 = local_38;
          }
        }
        else {
          plVar5 = (longlong *)0x0;
          lVar4 = 0;
        }
        local_48 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
        if (lVar4 != 0) {
          FUN_1441c0e62(lVar3,lVar4);
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
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da7f10 FUN_148da7f10 body=355 status=ok
// SIG undefined FUN_148da7f10(void)

void FUN_148da7f10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
      lVar4 = FUN_140b6d0be();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_1446f470e(&local_50,L"SHIFT",1);
        plVar5 = (longlong *)FUN_140489acc();
        (**(code **)(*plVar5 + 0x2e8))(plVar5,&local_48,param_2,local_50);
        if ((&DAT_149fc1b6e)[local_30] == '\x01') {
          lVar4 = local_40;
          if (local_38 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
            plVar5 = local_38;
          }
        }
        else {
          plVar5 = (longlong *)0x0;
          lVar4 = 0;
        }
        local_48 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
        if (lVar4 != 0) {
          FUN_1441c10d2(lVar3,lVar4);
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
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da8074 FUN_148da8074 body=273 status=ok
// SIG undefined FUN_148da8074(void)

void FUN_148da8074(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_48 = 0;
  FUN_1460dbc54(&local_50,param_4);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b5072b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b990910;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0;
  FUN_1460dbc54(local_40 + 3,&local_50);
  FUN_1460db8b2(param_1,param_2,param_3,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da8186 FUN_148da8186 body=106 status=ok
// SIG undefined FUN_148da8186(void)

undefined8 FUN_148da8186(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  lVar2 = FUN_1460dbbf4();
  if (lVar2 != 0) {
    lVar3 = FUN_14030d4a0();
    param_1 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      lVar2 = FUN_140f0c81a(lVar2);
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_14127ab10(lVar2,param_3);
      }
      bVar6 = lVar2 != 0 & (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_148da81be;
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_148da81be:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 148da81f0 FUN_148da81f0 body=122 status=ok
// SIG undefined FUN_148da81f0(void)

ulonglong FUN_148da81f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_1460dbbf4();
  if (lVar2 != 0) {
    lVar3 = FUN_14030d4a0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = FUN_140f0c81a(lVar2);
      if (lVar3 != 0) {
        cVar1 = FUN_14127ab10(lVar3,param_3);
        if (cVar1 != '\0') {
          lVar3 = FUN_140f0c81a(lVar2);
          uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          if (lVar3 != 0) {
            FUN_148aa7fdc(lVar3,param_3);
          }
          goto LAB_148da8228;
        }
      }
    }
  }
  uVar4 = 0;
LAB_148da8228:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148da826a FUN_148da826a body=41 status=ok
// SIG undefined FUN_148da826a(void)

void FUN_148da826a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_148aa7fdc(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148da8294 FUN_148da8294 body=100 status=ok
// SIG undefined FUN_148da8294(void)

undefined8 FUN_148da8294(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar1 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar1 = *(longlong *)(param_1 + 200);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        bVar4 = *(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0xc) == param_2;
        uVar2 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
        if (bVar4) {
          return uVar2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148da82f8 FUN_148da82f8 body=12 status=ok
// SIG undefined FUN_148da82f8(void)

void FUN_148da82f8(longlong param_1)

{
  FUN_144a7cc9e(param_1 + 0x88);
  return;
}



// FUNCTION 148da8304 FUN_148da8304 body=84 status=ok
// SIG undefined FUN_148da8304(void)

void FUN_148da8304(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x198),
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))();
    if (cVar2 != '\0') {
      FUN_143f5d32e(*(undefined8 *)(DAT_14cb98ab0 + 0x28),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148da8358 FUN_148da8358 body=84 status=ok
// SIG undefined FUN_148da8358(void)

void FUN_148da8358(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x198),
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))();
    if (cVar2 != '\0') {
      FUN_143f5d84e(*(undefined8 *)(DAT_14cb98ab0 + 0x28),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148da83ac FUN_148da83ac body=84 status=ok
// SIG undefined FUN_148da83ac(void)

void FUN_148da83ac(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x198),
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))();
    if (cVar2 != '\0') {
      FUN_143f5da08(*(undefined8 *)(DAT_14cb98ab0 + 0x28),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148da8400 FUN_148da8400 body=485 status=ok
// SIG undefined FUN_148da8400(void)

undefined8 * FUN_148da8400(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0xe0);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0xf0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x108) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x108);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      FUN_148db2972(param_2,(longlong)iStack_6c * 0xc + *local_88);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  plVar1 = (longlong *)(param_1 + 0x130);
  lVar2 = param_1 + 0x140;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x158) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x158);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      FUN_148db2972(param_2,(longlong)iStack_6c * 0x60 + *local_88);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da85ea FUN_148da85ea body=107 status=ok
// SIG undefined FUN_148da85ea(void)

void FUN_148da85ea(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_14586c8fe();
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_140d6e14c();
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
        uVar2 = FUN_14586c974(param_1);
        FUN_148d8f1f4(lVar3,uVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148da8656 FUN_148da8656 body=96 status=ok
// SIG undefined FUN_148da8656(void)

undefined8 FUN_148da8656(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_140d6e14c();
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
      uVar1 = FUN_14586c974(param_1);
      uVar3 = FUN_14586c980(lVar2,uVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148da86b6 FUN_148da86b6 body=107 status=ok
// SIG undefined FUN_148da86b6(void)

void FUN_148da86b6(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_148da8656();
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_140d6e14c();
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
        uVar2 = FUN_14586c974(param_1);
        FUN_148d8f254(lVar3,uVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148da8722 FUN_148da8722 body=74 status=ok
// SIG undefined FUN_148da8722(void)

void FUN_148da8722(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441bbed8(lVar1,param_2,&DAT_14c9485f0);
      return;
    }
  }
  return;
}



// FUNCTION 148da876c FUN_148da876c body=410 status=ok
// SIG undefined FUN_148da876c(void)

void FUN_148da876c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    lVar4 = FUN_14583d3ae();
    if (lVar4 != 0) {
      local_78 = param_2;
      local_70 = param_3;
      local_80 = FUN_140e82300();
      uVar5 = FUN_140e82300();
      local_68 = 0;
      local_60 = 0;
      FUN_14114e6dc(&local_68,param_4);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar1 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b98cfe0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b990aa0;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar1[4] = local_68;
      local_68 = 0;
      *(undefined4 *)(puVar1 + 5) = local_60;
      local_60 = 0;
      uVar3 = FUN_14586c974(param_1);
      local_88 = local_80;
      local_98 = &local_58;
      local_90 = uVar5;
      FUN_148d8e71a(lVar4,uVar3,local_78,local_70);
      FUN_1449db362(&local_68);
    }
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da8908 FUN_148da8908 body=161 status=ok
// SIG undefined FUN_148da8908(void)

void FUN_148da8908(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14094c9c2();
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
      (**(code **)(*param_2 + 0x30))(param_2,local_38);
      uVar1 = FUN_14586c974(param_1);
      FUN_1416a30d0(lVar2,uVar1,10,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da89ae FUN_148da89ae body=33 status=ok
// SIG undefined FUN_148da89ae(void)

undefined8 FUN_148da89ae(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1457e1a6a();
  if (lVar1 != 0) {
    uVar2 = FUN_143f37826(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148da89d0 FUN_148da89d0 body=41 status=ok
// SIG undefined FUN_148da89d0(void)

void FUN_148da89d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14585af82();
  if (lVar1 != 0) {
    FUN_148ef438e(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 148da89fa FUN_148da89fa body=41 status=ok
// SIG undefined FUN_148da89fa(void)

void FUN_148da89fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14585af82();
  if (lVar1 != 0) {
    FUN_148ef439a(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 148da8a24 FUN_148da8a24 body=176 status=ok
// SIG undefined FUN_148da8a24(void)

void FUN_148da8a24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000148da8ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148da8ad4 FUN_148da8ad4 body=460 status=ok
// SIG undefined FUN_148da8ad4(void)

void FUN_148da8ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_4 & 0x10) == 0) goto LAB_148da8afe;
  lVar5 = *param_5;
  if (*(longlong *)(lVar5 + 8) == 0) {
    FUN_1446f470e(local_60,L"SHIFT",1);
    FUN_1413d9c32(param_2,&local_58,param_3,local_60);
    if ((&DAT_149fc1b6e)[local_40] == '\x01') {
      if (local_48 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
        plVar6 = local_48;
      }
    }
    else {
      plVar6 = (longlong *)0x0;
      local_50 = 0;
    }
    lVar5 = *param_5;
    *(undefined8 *)(lVar5 + 8) = local_50;
    plVar3 = *(longlong **)(lVar5 + 0x10);
    if (plVar6 == plVar3) {
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
          iVar2 = *piVar1;
          UNLOCK();
          plVar3 = plVar6;
          goto joined_r0x000148da8c25;
        }
      }
    }
    else {
      *(longlong **)(lVar5 + 0x10) = plVar6;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000148da8c25:
          if (iVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    local_58 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    lVar5 = *param_5;
    if (*(longlong *)(lVar5 + 8) == 0) goto LAB_148da8b50;
    FUN_148da8ca2(param_1,param_5);
    lVar5 = *param_5;
    bVar4 = true;
  }
  else {
LAB_148da8b50:
    bVar4 = false;
  }
  if ((*(longlong *)(lVar5 + 0x30) == 0) &&
     (FUN_148da8fa0(param_1,param_5), *(longlong *)(*param_5 + 0x30) != 0)) {
    FUN_148da92b8(param_1,param_5);
  }
  else if (!bVar4) goto LAB_148da8afe;
  FUN_148da95b6(param_1,param_5);
LAB_148da8afe:
  plVar6 = (longlong *)param_5[1];
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da8ca2 FUN_148da8ca2 body=764 status=ok
// SIG undefined FUN_148da8ca2(void)

void FUN_148da8ca2(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(*param_2 + 8) != 0) && (*(char *)(*param_2 + 0x28) == '\0')) {
    uVar8 = FUN_14479d2ce();
    lVar9 = FUN_14119d4d6(uVar8);
    if (lVar9 != 0) {
      uVar8 = FUN_140b6de3c();
      FUN_140b6df48(uVar8,&local_50,lVar9,*(undefined8 *)(*param_2 + 8));
      plVar5 = local_48;
      lVar3 = *param_2;
      if ((undefined8 *)(lVar3 + 0x18) != &local_50) {
        *(undefined8 *)(lVar3 + 0x18) = local_50;
        local_50 = 0;
        plVar4 = *(longlong **)(lVar3 + 0x20);
        if (local_48 != plVar4) {
          local_48 = (longlong *)0x0;
          *(longlong **)(lVar3 + 0x20) = plVar5;
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
        }
      }
      plVar5 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      *(undefined1 *)(*param_2 + 0x28) = 1;
      uVar8 = FUN_140b6de3c();
      lVar3 = *param_2;
      plVar5 = (longlong *)param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,4,0x10);
      local_58 = 4;
      lVar6 = *param_2;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
        *local_60 = &PTR_LAB_14b4e4d80;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_60[2] = lVar10;
        *local_60 = &PTR_FUN_14b990d60;
        local_60[3] = lVar6;
        local_60[4] = 0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_60 = &PTR_LAB_14b4e4d80;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_60[2] = lVar10;
        *local_60 = &PTR_FUN_14b990d60;
        local_60[3] = lVar6;
        local_60[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_60[5] = param_1;
      local_60[6] = lVar3;
      local_60[7] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
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
      local_50 = *(undefined8 *)(*param_2 + 8);
      local_48 = *(longlong **)(*param_2 + 0x10);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      FUN_141335bfe(uVar8,lVar9,&local_50,&local_60);
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da8fa0 FUN_148da8fa0 body=791 status=ok
// SIG undefined FUN_148da8fa0(void)

void FUN_148da8fa0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_148da9c56(*param_2,0);
  if (cVar4 != '\0') goto LAB_148da8fcf;
  lVar7 = FUN_14479d2ce(*param_2);
  bVar3 = 1;
  if (lVar7 != 0) {
    lVar8 = FUN_140082f10();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      FUN_1408e4d18(lVar7 + 0x4e8,&local_48);
      if (local_48 == (longlong *)0x0) {
        bVar3 = 1;
      }
      else {
        bVar3 = 1;
        plVar10 = (longlong *)FUN_140a68038(1);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,&local_60);
          (**(code **)(*local_48 + 0x10))(local_48,&local_50);
          if (local_60 == local_50) {
            *(undefined1 *)(*param_2 + 0x52) = 1;
            FUN_1408e4d18(lVar7 + 0x4e8,&local_60);
            plVar10 = local_58;
            lVar7 = *param_2;
            if ((longlong *)(lVar7 + 0x30) != &local_60) {
              *(longlong *)(lVar7 + 0x30) = local_60;
              local_60 = 0;
              plVar2 = *(longlong **)(lVar7 + 0x38);
              if (local_58 != plVar2) {
                local_58 = (longlong *)0x0;
                *(longlong **)(lVar7 + 0x38) = plVar10;
                if (plVar2 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = plVar2 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*plVar2)(plVar2);
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
            plVar10 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_58 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_58)(local_58);
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
          else {
            bVar3 = 0;
          }
        }
      }
      plVar10 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_40)(local_40);
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
  lVar7 = *param_2;
  if (*(longlong *)(lVar7 + 0x30) == 0) {
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) goto LAB_148da8fcf;
    uVar9 = FUN_148da9c22(param_1);
    FUN_140b6e166(&local_48,uVar9,lVar7);
    plVar10 = local_40;
    lVar7 = *param_2;
    if ((longlong **)(lVar7 + 0x30) != &local_48) {
      *(longlong **)(lVar7 + 0x30) = local_48;
      local_48 = (longlong *)0x0;
      plVar2 = *(longlong **)(lVar7 + 0x38);
      if (local_40 != plVar2) {
        local_40 = (longlong *)0x0;
        *(longlong **)(lVar7 + 0x38) = plVar10;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar2 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar2)(plVar2);
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
    plVar10 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    lVar7 = *param_2;
    lVar8 = *(longlong *)(lVar7 + 0x30);
    if (!(bool)(bVar3 | lVar8 != 0)) {
      FUN_1441debe2(param_1,param_2);
      lVar7 = *param_2;
      lVar8 = *(longlong *)(lVar7 + 0x30);
    }
    if (lVar8 == 0) goto LAB_148da8fcf;
  }
  if (*(char *)(lVar7 + 0x52) == '\0') {
    (**(code **)(**(longlong **)(lVar7 + 8) + 0x30))(*(longlong **)(lVar7 + 8),&local_48);
    uVar6 = FUN_140b71325(&local_48);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14152c913(&local_48,uVar6);
    uVar9 = FUN_14101d2ea();
    uVar5 = FUN_143f3ac8a(&local_48,uVar9);
    *(undefined1 *)(*param_2 + 0x52) = uVar5;
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_148da8fcf:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148da92b8 FUN_148da92b8 body=764 status=ok
// SIG undefined FUN_148da92b8(void)

void FUN_148da92b8(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(*param_2 + 0x30) != 0) && (*(char *)(*param_2 + 0x50) == '\0')) {
    uVar8 = FUN_14479d2ce();
    lVar9 = FUN_14119d4d6(uVar8);
    if (lVar9 != 0) {
      uVar8 = FUN_140b6de3c();
      FUN_140b6df48(uVar8,&local_50,lVar9,*(undefined8 *)(*param_2 + 0x30));
      plVar5 = local_48;
      lVar3 = *param_2;
      if ((undefined8 *)(lVar3 + 0x40) != &local_50) {
        *(undefined8 *)(lVar3 + 0x40) = local_50;
        local_50 = 0;
        plVar4 = *(longlong **)(lVar3 + 0x48);
        if (local_48 != plVar4) {
          local_48 = (longlong *)0x0;
          *(longlong **)(lVar3 + 0x48) = plVar5;
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
        }
      }
      plVar5 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      *(undefined1 *)(*param_2 + 0x50) = 1;
      uVar8 = FUN_140b6de3c();
      lVar3 = *param_2;
      plVar5 = (longlong *)param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,4,0x10);
      local_58 = 4;
      lVar6 = *param_2;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
        *local_60 = &PTR_LAB_14b4e4d80;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_60[2] = lVar10;
        *local_60 = &PTR_FUN_14b990dd0;
        local_60[3] = lVar6;
        local_60[4] = 0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_60 = &PTR_LAB_14b4e4d80;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_60[2] = lVar10;
        *local_60 = &PTR_FUN_14b990dd0;
        local_60[3] = lVar6;
        local_60[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_60[5] = param_1;
      local_60[6] = lVar3;
      local_60[7] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
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
      local_50 = *(undefined8 *)(*param_2 + 0x30);
      local_48 = *(longlong **)(*param_2 + 0x38);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      FUN_141335bfe(uVar8,lVar9,&local_50,&local_60);
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da95b6 FUN_148da95b6 body=785 status=ok
// SIG undefined FUN_148da95b6(void)

void FUN_148da95b6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70 [2];
  undefined1 local_5c [8];
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_148da9c22();
  if (lVar3 == 0) goto LAB_148da989f;
  lVar3 = FUN_1400f6f32(lVar3);
  if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 == 0)) goto LAB_148da989f;
  lVar4 = FUN_14479d2ce(*param_2);
  if (lVar4 == 0) {
LAB_148da9635:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_140082f10();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148da9635;
  }
  FUN_1413d94b2(lVar3,&local_34,lVar4);
  if (-1 < (short)local_34) {
    local_40 = 0;
    lVar4 = *param_2;
    plVar6 = *(longlong **)(lVar4 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6,&local_50);
      (**(code **)(*local_50 + 0x10))(local_50,local_70);
      plVar6 = local_48;
      local_40 = local_70[0];
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      (**(code **)(**(longlong **)(*param_2 + 0x18) + 8))(*(longlong **)(*param_2 + 0x18),&local_50)
      ;
      (**(code **)(*local_50 + 0x10))(local_50,local_5c);
      local_88 = 0;
      uStack_80 = 0;
      (**(code **)(**(longlong **)(*param_2 + 0x18) + 0x18))
                (*(longlong **)(*param_2 + 0x18),local_70);
      local_98 = local_5c;
      FUN_141589eda(lVar3,&local_54,&local_34,local_70);
      local_34 = local_54;
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar4 = *param_2;
    }
    plVar6 = *(longlong **)(lVar4 + 0x40);
    if (plVar6 != (longlong *)0x0) {
      if (*(char *)(lVar4 + 0x52) == '\x01') {
        (**(code **)(*plVar6 + 8))(plVar6,&local_50);
        (**(code **)(*local_50 + 0x10))(local_50,local_70);
        plVar6 = local_48;
        local_40 = local_70[0];
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        plVar6 = *(longlong **)(*param_2 + 0x40);
      }
      (**(code **)(*plVar6 + 8))(plVar6,&local_50);
      (**(code **)(*local_50 + 0x10))(local_50,local_5c);
      local_88 = 0;
      uStack_80 = 0;
      (**(code **)(**(longlong **)(*param_2 + 0x40) + 0x18))
                (*(longlong **)(*param_2 + 0x40),local_70);
      local_98 = local_5c;
      FUN_141589eda(lVar3,&local_54,&local_34,local_70);
      local_34 = local_54;
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
    FUN_141589e20(lVar3,&local_50,&local_34,&local_40);
  }
LAB_148da989f:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da98c8 FUN_148da98c8 body=704 status=ok
// SIG undefined FUN_148da98c8(void)

void FUN_148da98c8(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_148da98eb;
  FUN_148da9b8a(param_1,&local_50,param_2);
  plVar6 = local_48;
  lVar5 = local_50;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (lVar5 != 0) goto LAB_148da98eb;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b990bf0;
  plVar6 = plVar4 + 2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  local_60 = plVar6;
  local_58 = plVar4;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_148db2dfc((longlong *)(param_1 + 8),iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  *(longlong **)(lVar5 + (longlong)iVar2 * 0x10) = plVar6;
  *(longlong **)(lVar5 + 8 + (longlong)iVar2 * 0x10) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar6 = local_60;
  }
  FUN_14485c47a(plVar6,param_2);
  FUN_1408e4d18(param_2 + 0x3a0,&local_50);
  plVar4 = local_48;
  if (plVar6 + 1 != &local_50) {
    plVar6[1] = local_50;
    local_50 = 0;
    plVar3 = (longlong *)plVar6[2];
    if (local_48 != plVar3) {
      local_48 = (longlong *)0x0;
      plVar6[2] = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
  }
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_148da8fa0(param_1,&local_60);
  plVar6 = local_60;
  if (local_60[1] == 0) {
    if (local_60[6] != 0) {
      FUN_148da92b8(param_1,&local_60);
    }
LAB_148da9ad5:
    lVar5 = FUN_148da9c22(param_1);
    if (lVar5 != 0) {
      lVar5 = FUN_1400f6f32(lVar5);
      if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) {
        FUN_148db2e82(&local_50,param_1,&local_60);
        FUN_1418bfcbc(lVar5 + 0x58,&local_68,&local_50);
        FUN_1449db362(&local_50);
        plVar6[0xb] = local_68;
      }
    }
  }
  else {
    FUN_148da8ca2(param_1,&local_60);
    if (plVar6[6] == 0) goto LAB_148da9ad5;
    FUN_148da92b8(param_1,&local_60);
  }
  FUN_148da95b6(param_1,&local_60);
  plVar6 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_148da98eb:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da9b8a FUN_148da9b8a body=151 status=ok
// SIG undefined FUN_148da9b8a(void)

undefined8 * FUN_148da9b8a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(undefined8 *)(lVar2 + lVar4));
      if (lVar3 == param_3) {
        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x10))) {
          lVar2 = *(longlong *)(param_1 + 8);
          lVar4 = (ulonglong)(uVar5 & 0x7fffffff) * 0x10;
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
        break;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148da9c22 FUN_148da9c22 body=51 status=ok
// SIG undefined FUN_148da9c22(void)

undefined8 FUN_148da9c22(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda();
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 148da9c56 FUN_148da9c56 body=16 status=ok
// SIG undefined FUN_148da9c56(void)

byte FUN_148da9c56(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 148da9c66 FUN_148da9c66 body=90 status=ok
// SIG undefined FUN_148da9c66(void)

void FUN_148da9c66(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(*param_2 + 0x58) == 0) {
    return;
  }
  lVar1 = FUN_148da9c22();
  if ((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) {
    lVar2 = *param_2;
    if ((*(longlong *)(lVar1 + 0x68) == 0) || (*(longlong *)(lVar2 + 0x58) == 0))
    goto LAB_148da9cb6;
    FUN_14480f766(*(longlong *)(lVar1 + 0x68) + 0x58);
  }
  lVar2 = *param_2;
LAB_148da9cb6:
  *(undefined8 *)(lVar2 + 0x58) = 0;
  return;
}



// FUNCTION 148da9cc0 FUN_148da9cc0 body=50 status=ok
// SIG undefined FUN_148da9cc0(void)

void FUN_148da9cc0(longlong param_1)

{
  FUN_148aa7340();
  FUN_1415d02ac(param_1);
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_1441d8528();
    return;
  }
  return;
}



// FUNCTION 148da9cf2 FUN_148da9cf2 body=479 status=ok
// SIG undefined FUN_148da9cf2(void)

void FUN_148da9cf2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = *(char *)(param_2 + 0x38);
  if (cVar3 == '\x03') {
    bVar7 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_148da9d20:
    uVar4 = (uint)!bVar7;
  }
  else if (cVar3 == '\x02') {
    uVar4 = *(uint *)(param_2 + 0x44);
  }
  else {
    if (cVar3 == '\x01') {
      bVar7 = *(int *)(param_2 + 0x44) == 0;
      goto LAB_148da9d20;
    }
    uVar4 = 0;
  }
  if (uVar4 == *(uint *)(param_1 + 0x760)) goto LAB_148da9d2b;
  FUN_145e1aa6e(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    local_48 = *local_38;
    plStack_40 = (longlong *)local_38[1];
    if (plStack_40 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      plVar6 = plStack_40;
    }
    FUN_145ce2ae6(param_1,&local_48);
    lVar5 = FUN_145ce2c3c(param_1);
    if (plVar6 != (longlong *)0x0) {
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
    }
    if (lVar5 != 0) {
      cVar3 = *(char *)(param_2 + 0x38);
      if (cVar3 == '\x03') {
        bVar7 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_148da9e27:
        uVar4 = (uint)!bVar7;
      }
      else if (cVar3 == '\x02') {
        uVar4 = *(uint *)(param_2 + 0x44);
      }
      else {
        uVar4 = 0;
        if (cVar3 == '\x01') {
          bVar7 = *(int *)(param_2 + 0x44) == 0;
          goto LAB_148da9e27;
        }
      }
      if (*(uint *)(lVar5 + 0xda8) == uVar4) {
        if (cVar3 == '\x03') {
          bVar7 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_148da9e3e:
          uVar4 = (uint)!bVar7;
        }
        else if (cVar3 == '\x02') {
          uVar4 = *(uint *)(param_2 + 0x44);
        }
        else {
          if (cVar3 == '\x01') {
            bVar7 = *(int *)(param_2 + 0x44) == 0;
            goto LAB_148da9e3e;
          }
          uVar4 = 0;
        }
        *(uint *)(param_1 + 0x760) = uVar4;
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        FUN_145ce2fee(param_1,&local_48);
        plVar6 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_40 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_40)(plStack_40);
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
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_148da9d2b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da9ed2 FUN_148da9ed2 body=281 status=ok
// SIG undefined FUN_148da9ed2(void)

void FUN_148da9ed2(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 local_54 [4];
  code *local_50;
  undefined4 local_48;
  uint *local_40;
  code **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  if (*(char *)(param_2 + 0x32b8) == '\0') {
    if (*(int *)(param_1 + 0x830) != *(int *)(param_1 + 0x85c)) {
      lVar1 = param_1 + 0x860;
      if (*(longlong *)(param_1 + 0x868) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x868);
      }
      iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x870) - 1U & param_3) * 4);
      if (iVar2 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x828);
        do {
          if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == param_3) goto LAB_148da9efd;
          iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0x18 + 0x10);
        } while (iVar2 != -1);
      }
    }
    local_50 = FUN_148daa118;
    local_48 = 0;
    FUN_148db49ae(&local_40,param_1,&local_50,&local_58);
    FUN_1448b6402(param_2 + 0x3228,&local_50,&local_40);
    FUN_1449db362(&local_40);
    local_40 = &local_58;
    local_38 = &local_50;
    FUN_146122ba8((longlong *)(param_1 + 0x828),local_54,&local_40,0);
  }
LAB_148da9efd:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148da9fec FUN_148da9fec body=39 status=ok
// SIG undefined FUN_148da9fec(void)

void FUN_148da9fec(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_00000028;
  
  uVar1 = FUN_145ce2dca(param_1,in_stack_00000028);
  FUN_148daa582(param_1,in_stack_00000028,uVar1);
  return;
}



// FUNCTION 148daa014 FUN_148daa014 body=260 status=ok
// SIG undefined FUN_148daa014(void)

void FUN_148daa014(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((param_3 == param_4) && (*(int *)(param_1 + 0x7e0) != *(int *)(param_1 + 0x80c))) {
    lVar2 = param_1 + 0x810;
    if (*(longlong *)(param_1 + 0x818) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x818);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x820) - 1U & param_3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x7d8) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_3) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x38) == 0) {
            return;
          }
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30);
          if (lVar2 == 0) {
            return;
          }
          lVar2 = *(longlong *)(lVar2 + 0x360);
          if (lVar2 == 0) {
            return;
          }
          if (*(longlong *)(lVar2 + 0x1f0) == 0) {
            return;
          }
          lVar2 = FUN_141028a6c();
          if (lVar2 == 0) {
            return;
          }
          FUN_14163b282(param_1,param_3);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_14480f766(lVar2 + 0x40);
          }
          FUN_146062ebc((longlong *)(param_1 + 0x7d8),param_3);
          return;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 148daa118 FUN_148daa118 body=592 status=ok
// SIG undefined FUN_148daa118(void)

void FUN_148daa118(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  longlong *local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x830) != *(int *)(param_1 + 0x85c)) {
    lVar5 = param_1 + 0x860;
    if (*(longlong *)(param_1 + 0x868) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x868);
    }
    uVar7 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x870) - 1U & param_2) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x828) + (longlong)(int)uVar7 * 0x18);
        if (*puVar3 == param_2) {
          if (puVar3 + 2 != (uint *)0x0 && puVar3 != (uint *)0x0) {
            FUN_14163b282(param_1,param_2);
            FUN_1413f457a(param_1,&local_80,param_2);
            if (local_80 != (undefined8 *)0x0) {
              local_68 = *local_80;
              plVar4 = (longlong *)local_80[1];
              if (plVar4 == (longlong *)0x0) {
                local_60 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                local_60 = plVar4;
              }
              local_58 = 0;
              local_70 = &PTR_FUN_14a5af930;
              local_50 = 0;
              uStack_48 = 0;
              if ((*(longlong *)(param_1 + 0x38) == 0) ||
                 (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar5 == 0)) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)(lVar5 + 0x360);
              }
              lVar5 = FUN_1463ce09c(uVar8,&local_70);
              if (lVar5 == 0) {
LAB_148daa2df:
                lVar5 = 0;
              }
              else {
                lVar6 = FUN_144a5dd5e();
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_148daa2df;
              }
              local_70 = &PTR_FUN_14a5af930;
              if (local_50 != 0) {
                FUN_1400020a8();
              }
              local_70 = &PTR_FUN_14a184370;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
              if (plVar4 != (longlong *)0x0) {
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
              if ((lVar5 != 0) && (*(longlong *)(puVar3 + 2) != 0)) {
                FUN_14480f766(lVar5 + 0x3228);
              }
              FUN_146062ebc((longlong *)(param_1 + 0x828),param_2);
            }
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_78 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar1 = (int *)((longlong)local_78 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_78 + 0x10))(local_78);
                }
              }
            }
          }
          break;
        }
        uVar7 = puVar3[4];
      } while (uVar7 != 0xffffffff);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148daa36a FUN_148daa36a body=536 status=ok
// SIG undefined FUN_148daa36a(void)

void FUN_148daa36a(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x830) != *(int *)(param_1 + 0x85c)) {
    lVar4 = param_1 + 0x860;
    if (*(longlong *)(param_1 + 0x868) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x868);
    }
    uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x870) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x828) + (longlong)(int)uVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            lVar4 = *(longlong *)(param_1 + 0x38);
            if ((lVar4 == 0) || ((longlong)*(int *)(lVar4 + 0x40) == 0)) goto LAB_148daa4e8;
            lVar3 = 0;
            goto LAB_148daa477;
          }
          break;
        }
        uVar5 = puVar1[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  goto LAB_148daa388;
  while (lVar3 = lVar3 + 8, (longlong)*(int *)(lVar4 + 0x40) * 8 != lVar3) {
LAB_148daa477:
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar3);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 0xe0) == param_2)) {
      if (*(longlong *)(lVar4 + 0x30) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x360);
      }
      lVar4 = FUN_140334a94(lVar2,uVar6);
      if (lVar4 != 0) {
        lVar3 = FUN_144a5dd5e();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (*(longlong *)(puVar1 + 2) != 0)) {
          FUN_14480f766(lVar4 + 0x3228);
        }
      }
      break;
    }
  }
LAB_148daa4e8:
  FUN_146062ebc((longlong *)(param_1 + 0x828),param_2);
LAB_148daa388:
  if (*(int *)(param_1 + 0x7e0) != *(int *)(param_1 + 0x80c)) {
    lVar4 = param_1 + 0x810;
    if (*(longlong *)(param_1 + 0x818) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x818);
    }
    uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x820) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x7d8) + (longlong)(int)uVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return;
          }
          if ((((*(longlong *)(param_1 + 0x38) != 0) &&
               (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar4 != 0)) &&
              ((lVar4 = *(longlong *)(lVar4 + 0x360), lVar4 != 0 &&
               ((*(longlong *)(lVar4 + 0x1f0) != 0 && (lVar4 = FUN_141028a6c(), lVar4 != 0)))))) &&
             (*(longlong *)(puVar1 + 2) != 0)) {
            FUN_14480f766(lVar4 + 0x40);
          }
          FUN_146062ebc((longlong *)(param_1 + 0x7d8),param_2);
          return;
        }
        uVar5 = puVar1[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 148daa582 FUN_148daa582 body=147 status=ok
// SIG undefined FUN_148daa582(void)

void FUN_148daa582(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413f457a(param_1,&local_40,param_2);
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
  if (local_40 != 0) {
    FUN_145ce2cda(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148daa616 FUN_148daa616 body=19 status=ok
// SIG undefined FUN_148daa616(void)

undefined8 FUN_148daa616(longlong param_1,longlong param_2,float *param_3)

{
  void *pvVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ushort uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ushort uVar27;
  longlong lVar28;
  int iVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_188 [40];
  float *pfStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  ulonglong uStack_148;
  uint uStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  longlong *plStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  longlong *plStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  int iStack_a4;
  longlong lStack_98;
  undefined4 uStack_90;
  ulonglong uStack_80;
  
  plVar9 = *(longlong **)(param_1 + 0x778);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  uStack_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((longlong)*(int *)(param_2 + 0x118) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x110);
    plVar13 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
    plVar25 = plVar7;
LAB_1441dad2d:
    if ((int)plVar25[1] == DAT_14cbce9c8) {
      if (1 < DAT_14cbce9c8) {
        lVar22 = 0;
        do {
          uVar27 = *(ushort *)(*plVar25 + lVar22);
          uVar19 = *(ushort *)(DAT_14cbce9c0 + lVar22);
          if (uVar27 == uVar19) {
            if (uVar27 == 0) break;
          }
          else {
            if (0x7f < (uVar19 | uVar27)) {
              iVar6 = (uint)uVar27 - (uint)uVar19;
              goto LAB_1441dada3;
            }
            if ((&DAT_149e05da0)[uVar27] != (&DAT_149e05da0)[(uint)uVar19])
            goto code_r0x0001441dada0;
          }
          lVar22 = lVar22 + 2;
        } while( true );
      }
      goto LAB_1441db2b5;
    }
    if ((int)plVar25[1] + DAT_14cbce9c8 == 1) goto LAB_1441db2b5;
    goto LAB_1441dad43;
  }
  goto LAB_1441dab05;
code_r0x0001441dada0:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar27] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
LAB_1441dada3:
  if (iVar6 == 0) {
LAB_1441db2b5:
    if (plVar9[0x6c] != 0) goto LAB_1441dc2df;
    plStack_d8 = (longlong *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    FUN_1446efa72(&plStack_d8,0,3,0x10);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
    plVar7 = (longlong *)plVar9[1];
    if (plVar7 == (longlong *)0x0) goto LAB_1441dbb2c;
    iVar6 = (int)plVar7[1];
    goto LAB_1441db30c;
  }
LAB_1441dad43:
  plVar25 = plVar25 + 2;
  if (plVar25 == plVar13) goto LAB_1441dc323;
  goto LAB_1441dad2d;
LAB_1441dbb2c:
  *plStack_d8 = (longlong)&PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar20 = DAT_14c758608 + 1;
  lVar22 = DAT_14c758608 + 1;
  if (lVar20 == 0) {
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 2;
    lVar22 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar22;
  plStack_d8[2] = lVar20;
  *plStack_d8 = (longlong)&PTR_FUN_14b98f450;
  plStack_d8[3] = 0;
  plStack_d8[4] = 0;
  plStack_d8[5] = (longlong)plVar9;
  goto LAB_1441dbb6b;
LAB_1441dc385:
  if (uVar27 == uVar19) {
LAB_1441dc38d:
    if ((*(longlong *)(plVar9[2] + 0x38) == 0) ||
       (lVar22 = *(longlong *)(*(longlong *)(plVar9[2] + 0x38) + 0x30), lVar22 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar22 + 0x360);
    }
    lVar22 = FUN_1459a1b3a(uVar8);
    if (lVar22 == 0) goto LAB_1441db02a;
    fVar31 = (float)FUN_143f2686a(lVar22,param_2);
    goto LAB_1441daf83;
  }
LAB_1441dc335:
  plVar7 = plVar7 + 2;
  if (plVar7 == plVar13) goto LAB_1441dab05;
  goto LAB_1441dc323;
LAB_1441dae4a:
  if (uVar27 == uVar19) goto LAB_1441dab87;
LAB_1441dade8:
  plVar7 = plVar7 + 2;
  bVar30 = false;
  if (plVar7 == plVar25) goto LAB_1441dab87;
  goto LAB_1441dadd2;
LAB_1441db0f7:
  if (uVar27 == uVar19) goto LAB_1441daecc;
LAB_1441db095:
  plVar7 = plVar7 + 2;
  bVar30 = false;
  if (plVar7 == plVar25) goto LAB_1441daecc;
  goto LAB_1441db07f;
LAB_1441db468:
  if (uVar27 == uVar19) {
LAB_1441db46e:
    plVar9 = (longlong *)FUN_1458b3986();
    fVar31 = 0.0;
    if (plVar9 != (longlong *)0x0) {
      uStack_b8 = 0;
      iVar6 = 0;
      uStack_b0 = 0;
      plStack_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      uStack_ac = 0xffffffff00000080;
      iStack_a4 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      FUN_140938dea();
      uStack_100 = &DAT_14cb86c40;
      lStack_f8 = 0;
      uStack_f0 = 0;
      ppuStack_108 = &PTR_FUN_14b41c0c0;
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd98);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdda8);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcddb0);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd68);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd70);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd78);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd80);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd88);
      FUN_140653d46(&ppuStack_108,&DAT_14cbcdd90);
      plStack_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_145779e36(&plStack_118);
      if ((longlong)(int)uStack_110 != 0) {
        plStack_158 = plStack_118 + (int)uStack_110;
        plVar7 = plStack_118;
        pfStack_160 = param_3;
        plStack_150 = plVar9;
        do {
          lVar22 = (longlong)*(int *)(*plVar7 + 0x68);
          if (lVar22 != 0) {
            plVar25 = *(longlong **)(*plVar7 + 0x60);
            plVar9 = plVar25 + lVar22;
            do {
              plVar13 = (longlong *)*plVar25;
              cVar3 = (**(code **)(*plVar13 + 0x50))(plVar13);
              if (cVar3 == '\0') {
                ppuStack_138 = (undefined **)&DAT_14a171d50;
                puStack_130 = (undefined *)0x0;
                lStack_128 = 0;
                uStack_120 = 0;
                FUN_1401004a0(&ppuStack_138,plVar13 + 0x9e);
                if (uStack_100 == puStack_130) {
                  uVar5 = (uint)uStack_120;
                  if ((int)(uint)uStack_f0 < (int)(uint)uStack_120) {
                    uVar5 = (uint)uStack_f0;
                  }
                  if (0 < (int)uVar5) {
                    uVar26 = 0;
                    do {
                      if ((*(ulonglong *)(lStack_128 + uVar26 * 8) &
                          ~*(ulonglong *)(lStack_f8 + uVar26 * 8)) != 0) goto LAB_1441db693;
                      uVar26 = uVar26 + 1;
                    } while (uVar5 != uVar26);
                  }
                  bVar30 = true;
                  if ((int)(uint)uStack_f0 < (int)(uint)uStack_120) {
                    lVar22 = 0;
                    do {
                      bVar30 = *(longlong *)
                                ((longlong)(int)(uint)uStack_f0 * 8 + lStack_128 + lVar22 * 8) == 0;
                      if (!bVar30) break;
                      iVar6 = (int)lVar22;
                      lVar22 = lVar22 + 1;
                    } while (~(uint)uStack_f0 + (uint)uStack_120 != iVar6);
                  }
                }
                else {
LAB_1441db693:
                  bVar30 = false;
                }
                ppuStack_138 = (undefined **)&DAT_14a171d50;
                uVar26 = uStack_120 >> 0x20;
                uStack_120 = uStack_120 & 0xffffffff00000000;
                if ((int)uVar26 != 0) {
                  FUN_140115c12(&lStack_128,0);
                }
                puStack_130 = (undefined *)0x0;
                if (lStack_128 != 0) {
                  FUN_1400020a8();
                }
                if (bVar30) {
                  piVar10 = (int *)plVar13[1];
                  if (piVar10 == (int *)0x0) {
                    piVar10 = &DAT_14c9485f0;
                  }
                  ppuStack_138 = DAT_14c948618;
                  iVar6 = DAT_14c948620;
                  if (((*piVar10 != 0) && (iVar29 = piVar10[1], iVar29 != 0)) &&
                     (*piVar10 != DAT_14c948000)) {
                    if ((iVar29 < 2) && (piVar10[9] < 1)) {
                      piVar10 = piVar10 + 2;
                    }
                    else {
                      piVar10 = *(int **)(piVar10 + 6);
                    }
                    if (0 < iVar29) {
                      ppuStack_138 = *(undefined ***)piVar10;
                      iVar6 = piVar10[2];
                    }
                  }
                  puStack_130 = (undefined *)CONCAT44(puStack_130._4_4_,iVar6);
                  FUN_1409612f0(&plStack_d8,&uStack_148,&ppuStack_138,0);
                }
              }
              plVar25 = plVar25 + 1;
            } while (plVar25 != plVar9);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plStack_158);
        iVar6 = (int)uStack_d0 - iStack_a4;
        plVar9 = plStack_150;
        param_3 = pfStack_160;
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar9 + 200))(plVar9);
      ppuStack_138 = (undefined **)0x0;
      iVar29 = *(int *)(puVar11 + 1);
      pvVar1 = (void *)*puVar11;
      puStack_130 = (undefined *)CONCAT44(puStack_130._4_4_,iVar29);
      if ((longlong)iVar29 == 0) {
        fVar31 = 0.0;
      }
      else {
        iVar21 = 0;
        FUN_1446dd7be(&ppuStack_138,iVar29,0);
        memcpy(ppuStack_138,pvVar1,(longlong)iVar29 * 0xc);
        ppuVar18 = ppuStack_138;
        lVar22 = (longlong)(int)puStack_130;
        if (lVar22 == 0) {
          fVar31 = 0.0;
        }
        else {
          lVar20 = 0;
          do {
            uStack_140 = *(uint *)((longlong)ppuVar18 + lVar20 + 8);
            uStack_148 = *(ulonglong *)((longlong)ppuVar18 + lVar20);
            uVar26 = uStack_148;
            if (uStack_140 != 0) {
              uVar5 = uStack_140 >> 0xd ^ (int)uStack_148 - uStack_140;
              uVar14 = uVar5 << 8 ^ (-0x61c88647 - uStack_140) - uVar5;
              uVar15 = uVar14 >> 0xd ^ (uStack_140 - uVar5) - uVar14;
              uVar5 = uVar15 >> 0xc ^ (uVar5 - uVar14) - uVar15;
              uVar14 = uVar5 << 0x10 ^ (uVar14 - uVar15) - uVar5;
              uVar24 = uVar14 >> 5 ^ (uVar15 - uVar5) - uVar14;
              uVar15 = uVar24 >> 3 ^ (uVar5 - uVar14) - uVar24;
              uVar5 = uVar15 << 10 ^ (uVar14 - uVar24) - uVar15;
              uVar26 = (ulonglong)(uVar5 >> 0xf ^ uVar24 - (uVar15 + uVar5));
            }
            iVar29 = FUN_1407a7398(&plStack_d8,uVar26,&uStack_148);
            iVar21 = iVar21 + (uint)(iVar29 != -1);
            lVar20 = lVar20 + 0xc;
          } while (lVar22 * 0xc != lVar20);
          fVar31 = (float)iVar21;
        }
        if (ppuStack_138 != (undefined **)0x0) {
          FUN_1400020a8(ppuStack_138);
        }
      }
      if (plStack_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      ppuStack_108 = (undefined **)&DAT_14a171d50;
      uVar26 = uStack_f0 >> 0x20;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      if ((int)uVar26 != 0) {
        FUN_140115c12(&lStack_f8,0);
      }
      uStack_100 = (undefined *)0x0;
      if (lStack_f8 != 0) {
        FUN_1400020a8();
      }
      uStack_90 = 0;
      if (lStack_98 != 0) {
        FUN_1400020a8();
      }
      FUN_1401bccca(&plStack_d8);
      if (iVar6 < 1) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = fVar31 / (float)iVar6;
      }
    }
    goto LAB_1441daf67;
  }
LAB_1441db418:
  plVar25 = plVar25 + 2;
  if (plVar25 == plVar13) goto LAB_1441dba25;
  goto LAB_1441db406;
code_r0x0001441dba95:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar27] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
LAB_1441dba98:
  if (iVar6 != 0) {
    while (plVar7 = plVar7 + 2, plVar7 != plVar13) {
LAB_1441dba25:
      if ((int)plVar7[1] == DAT_14cbce9b8) {
        if (1 < DAT_14cbce9b8) {
          lVar22 = 0;
          do {
            uVar27 = *(ushort *)(*plVar7 + lVar22);
            uVar19 = *(ushort *)(DAT_14cbce9b0 + lVar22);
            if (uVar27 == uVar19) {
              if (uVar27 == 0) break;
            }
            else {
              if (0x7f < (uVar19 | uVar27)) {
                iVar6 = (uint)uVar27 - (uint)uVar19;
                goto LAB_1441dba98;
              }
              if ((&DAT_149e05da0)[uVar27] != (&DAT_149e05da0)[(uint)uVar19])
              goto code_r0x0001441dba95;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
        goto LAB_1441dbcc0;
      }
      if ((int)plVar7[1] + DAT_14cbce9b8 == 1) goto LAB_1441dbcc0;
    }
    goto LAB_1441dafe2;
  }
LAB_1441dbcc0:
  plVar9 = (longlong *)FUN_1458b3986(plVar9);
  if (plVar9 == (longlong *)0x0) {
LAB_1441dc41f:
    fVar31 = 0.0;
  }
  else {
    uStack_b8 = 0;
    iVar6 = 0;
    uStack_b0 = 0;
    plStack_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    uStack_ac = 0xffffffff00000080;
    iStack_a4 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    if ((longlong)*(int *)(param_2 + 0x128) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x120);
      plStack_158 = plVar7 + (longlong)*(int *)(param_2 + 0x128) * 8;
      pfStack_160 = param_3;
      plStack_150 = plVar9;
      do {
        lVar22 = plVar7[7];
        if ((longlong)(int)lVar22 != 0) {
          lVar20 = plVar7[6];
          lVar28 = 0;
          do {
            ppuStack_138 = (undefined **)0x0;
            uVar5 = *(uint *)(lVar20 + 0x18 + lVar28);
            pvVar1 = *(void **)(lVar20 + 0x10 + lVar28);
            puStack_130 = (undefined *)CONCAT44(puStack_130._4_4_,uVar5);
            if ((longlong)(int)uVar5 == 0) {
              puStack_130 = (undefined *)(ulonglong)uVar5;
            }
            else {
              FUN_1446dd670(&ppuStack_138,uVar5,0);
              memcpy(ppuStack_138,pvVar1,(longlong)(int)uVar5 * 2);
              if (1 < (int)puStack_130) {
                FUN_14000bbd8(&ppuStack_108,&ppuStack_138);
                plVar9 = (longlong *)FUN_14060eaf6(&ppuStack_108);
                if (uStack_f0 != 0) {
                  FUN_1400020a8();
                }
                if ((plVar9 != (longlong *)0x0) &&
                   (cVar3 = (**(code **)(*plVar9 + 0x50))(plVar9), cVar3 == '\0')) {
                  piVar10 = (int *)plVar9[1];
                  if (piVar10 == (int *)0x0) {
                    piVar10 = &DAT_14c9485f0;
                  }
                  ppuStack_108 = DAT_14c948618;
                  iVar6 = DAT_14c948620;
                  if (((*piVar10 != 0) && (iVar29 = piVar10[1], iVar29 != 0)) &&
                     (*piVar10 != DAT_14c948000)) {
                    if ((iVar29 < 2) && (piVar10[9] < 1)) {
                      piVar10 = piVar10 + 2;
                    }
                    else {
                      piVar10 = *(int **)(piVar10 + 6);
                    }
                    if (0 < iVar29) {
                      ppuStack_108 = *(undefined ***)piVar10;
                      iVar6 = piVar10[2];
                    }
                  }
                  uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,iVar6);
                  FUN_1409612f0(&plStack_d8,&plStack_118,&ppuStack_108,0);
                }
              }
            }
            if (ppuStack_138 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            lVar28 = lVar28 + 0x40;
          } while ((longlong)(int)lVar22 * 0x40 != lVar28);
        }
        plVar7 = plVar7 + 8;
      } while (plVar7 != plStack_158);
      iVar6 = (int)uStack_d0 - iStack_a4;
      plVar9 = plStack_150;
      param_3 = pfStack_160;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar9 + 200))();
    ppuStack_108 = (undefined **)0x0;
    iVar29 = *(int *)(puVar11 + 1);
    pvVar1 = (void *)*puVar11;
    uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,iVar29);
    if ((longlong)iVar29 == 0) {
      fVar31 = 0.0;
    }
    else {
      iVar21 = 0;
      FUN_1446dd7be(&ppuStack_108,iVar29,0);
      memcpy(ppuStack_108,pvVar1,(longlong)iVar29 * 0xc);
      ppuVar18 = ppuStack_108;
      lVar22 = (longlong)(int)uStack_100;
      if (lVar22 == 0) {
        fVar31 = 0.0;
      }
      else {
        lVar20 = 0;
        do {
          uVar5 = *(uint *)((longlong)ppuVar18 + lVar20 + 8);
          puStack_130 = (undefined *)CONCAT44(puStack_130._4_4_,uVar5);
          ppuStack_138 = *(undefined ***)((longlong)ppuVar18 + lVar20);
          ppuVar17 = ppuStack_138;
          if (uVar5 != 0) {
            uVar14 = uVar5 >> 0xd ^ (int)ppuStack_138 - uVar5;
            uVar15 = uVar14 << 8 ^ (-0x61c88647 - uVar5) - uVar14;
            uVar24 = uVar15 >> 0xd ^ (uVar5 - uVar14) - uVar15;
            uVar5 = uVar24 >> 0xc ^ (uVar14 - uVar15) - uVar24;
            uVar14 = uVar5 << 0x10 ^ (uVar15 - uVar24) - uVar5;
            uVar24 = uVar14 >> 5 ^ (uVar24 - uVar5) - uVar14;
            uVar15 = uVar24 >> 3 ^ (uVar5 - uVar14) - uVar24;
            uVar5 = uVar15 << 10 ^ (uVar14 - uVar24) - uVar15;
            ppuVar17 = (undefined **)(ulonglong)(uVar5 >> 0xf ^ uVar24 - (uVar15 + uVar5));
          }
          iVar29 = FUN_1407a7398(&plStack_d8,ppuVar17,&ppuStack_138);
          iVar21 = iVar21 + (uint)(iVar29 != -1);
          lVar20 = lVar20 + 0xc;
        } while (lVar22 * 0xc != lVar20);
        fVar31 = (float)iVar21;
      }
      if (ppuStack_108 != (undefined **)0x0) {
        FUN_1400020a8(ppuStack_108);
      }
    }
    uStack_90 = 0;
    if (lStack_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bccca(&plStack_d8);
    if (iVar6 < 1) goto LAB_1441dc41f;
    fVar31 = fVar31 / (float)iVar6;
  }
  goto LAB_1441daf83;
LAB_1441db958:
  if (uVar27 == uVar19) goto LAB_1441db007;
LAB_1441db8f6:
  plVar7 = plVar7 + 2;
  bVar30 = false;
  if (plVar7 == plVar25) goto LAB_1441db007;
  goto LAB_1441db8e0;
code_r0x0001441db9ff:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar27] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
LAB_1441dba02:
  if (iVar6 == 0) {
LAB_1441dbc37:
    if ((*(longlong *)(plVar9[2] + 0x38) == 0) ||
       (lVar22 = *(longlong *)(*(longlong *)(plVar9[2] + 0x38) + 0x30), lVar22 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar22 + 0x360);
    }
    lVar22 = FUN_1459a1b3a(uVar8);
    if (lVar22 != 0) {
      fVar31 = (float)FUN_143f2686a(lVar22,param_2);
      *param_3 = fVar31;
      uVar8 = 1;
      if (fVar31 <= 0.0) goto LAB_1441daf8b;
    }
    if ((*(longlong *)(plVar9[2] + 0x38) == 0) ||
       (lVar22 = *(longlong *)(*(longlong *)(plVar9[2] + 0x38) + 0x30), lVar22 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar22 + 0x360);
    }
    iVar6 = FUN_144120955(uVar8);
    fVar31 = (float)iVar6 / 100.0;
    goto LAB_1441daf73;
  }
LAB_1441db99f:
  plVar7 = plVar7 + 2;
  uVar8 = 0;
  if (plVar7 == plVar25) goto LAB_1441daf8b;
  goto LAB_1441db98b;
  while( true ) {
    LOCK();
    iVar29 = (int)plVar7[1];
    bVar30 = iVar6 == iVar29;
    if (bVar30) {
      *(int *)(plVar7 + 1) = iVar6 + 1;
      iVar29 = iVar6;
    }
    iVar6 = iVar29;
    UNLOCK();
    if (bVar30) break;
LAB_1441db30c:
    if (iVar6 == 0) goto LAB_1441dbb2c;
  }
  lVar22 = *plVar9;
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  *plStack_d8 = (longlong)&PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar28 = DAT_14c758608 + 1;
  lVar20 = DAT_14c758608 + 1;
  if (lVar28 == 0) {
    LOCK();
    UNLOCK();
    lVar28 = DAT_14c758608 + 2;
    lVar20 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar20;
  plStack_d8[2] = lVar28;
  *plStack_d8 = (longlong)&PTR_FUN_14b98f450;
  plStack_d8[3] = lVar22;
  plStack_d8[4] = (longlong)plVar7;
  LOCK();
  *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
  UNLOCK();
  plStack_d8[5] = (longlong)plVar9;
  LOCK();
  plVar25 = plVar7 + 1;
  *(int *)plVar25 = (int)*plVar25 + -1;
  UNLOCK();
  if ((int)*plVar25 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar10 = (int *)((longlong)plVar7 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  LOCK();
  plVar25 = plVar7 + 1;
  *(int *)plVar25 = (int)*plVar25 + -1;
  UNLOCK();
  if ((int)*plVar25 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar10 = (int *)((longlong)plVar7 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  LOCK();
  plVar25 = plVar7 + 1;
  *(int *)plVar25 = (int)*plVar25 + -1;
  UNLOCK();
  if ((int)*plVar25 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar10 = (int *)((longlong)plVar7 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1441dbb6b:
  if (((int)uStack_d0 == 0) || (plStack_d8 == (longlong *)0x0)) {
LAB_1441dc533:
    if ((int)uStack_d0 == 0) {
      ppuVar18 = (undefined **)0x0;
      goto LAB_1441dc2cf;
    }
    if (plStack_d8 != (longlong *)0x0) {
      ppuVar18 = (undefined **)0x0;
      (**(code **)*plStack_d8)(plStack_d8,0);
      FUN_1446efa72(&plStack_d8,0,0,0x10);
      goto LAB_1441dc2bc;
    }
    ppuVar18 = (undefined **)0x0;
  }
  else {
    cVar3 = (**(code **)(*plStack_d8 + 0x30))();
    uVar5 = DAT_14c9647a8;
    if (cVar3 == '\0') {
      goto LAB_1441dc533;
    }
    if ((DAT_14c9647b4 < 1) &&
       (DAT_14c9647b0 = DAT_14c9647b0 + -1, DAT_14c9647b0 <= (int)DAT_14c9647a8)) {
      if (0 < (int)DAT_14c9647a8) {
        iVar6 = 0;
        do {
          if (((*(int *)(DAT_14c9647a0 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar7 = *(longlong **)(DAT_14c9647a0 + (longlong)iVar6 * 0x10),
              plVar7 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*plVar7 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(&DAT_14c9647a0,iVar6);
            FUN_14005b248(&DAT_14c9647a0);
          }
          else {
            iVar6 = iVar6 + 1;
          }
        } while (iVar6 < (int)DAT_14c9647a8);
      }
      DAT_14c9647b0 = 2;
      if (2 < (int)(DAT_14c9647a8 * 2)) {
        DAT_14c9647b0 = DAT_14c9647a8 * 2;
      }
      if ((DAT_14c9647b0 < (int)uVar5) && (DAT_14c9647ac != DAT_14c9647a8)) {
        FUN_14045812c();
      }
    }
    ppuVar18 = (undefined **)0x0;
    if (((int)uStack_d0 != 0) && (plStack_d8 != (longlong *)0x0)) {
      (**(code **)(*plStack_d8 + 0x38))(plStack_d8,&ppuStack_108);
      ppuVar18 = ppuStack_108;
    }
    uVar5 = DAT_14c9647a8;
    lVar22 = (longlong)(int)DAT_14c9647a8;
    DAT_14c9647a8 = DAT_14c9647a8 + 1;
    if (DAT_14c9647ac < DAT_14c9647a8) {
      FUN_1447a71f6(&DAT_14c9647a0,uVar5);
    }
    lVar20 = DAT_14c9647a0;
    lVar22 = lVar22 * 0x10;
    *(undefined8 *)(DAT_14c9647a0 + lVar22) = 0;
    *(undefined4 *)(lVar20 + 8 + lVar22) = 0;
    *(longlong **)(lVar20 + lVar22) = plStack_d8;
    plStack_d8 = (longlong *)0x0;
    *(int *)(lVar20 + 8 + lVar22) = (int)uStack_d0;
LAB_1441dc2bc:
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
LAB_1441dc2cf:
    if (plStack_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar9[0x6c] = (longlong)ppuVar18;
LAB_1441dc2df:
  cVar3 = FUN_1441dc5a2();
  *(char *)(plVar9 + 0x6d) = cVar3;
  fVar31 = 0.0;
  if (cVar3 == '\0') {
    if ((longlong)*(int *)(param_2 + 0x118) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x110);
      plVar13 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441dc323:
      if ((int)plVar7[1] == DAT_14cbce9d8) {
        if (1 < DAT_14cbce9d8) {
          lVar22 = 0;
          do {
            uVar27 = *(ushort *)(*plVar7 + lVar22);
            uVar26 = (ulonglong)uVar27;
            uVar19 = *(ushort *)(DAT_14cbce9d0 + lVar22);
            if (uVar27 == uVar19) {
              if (uVar27 == 0) break;
            }
            else {
              if (0x7f < (uVar19 | uVar27)) goto LAB_1441dc385;
              uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
              uVar23 = (ulonglong)uVar19;
              uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[uVar23]) goto LAB_1441dc385;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
        goto LAB_1441dc38d;
      }
      if ((int)plVar7[1] + DAT_14cbce9d8 == 1) goto LAB_1441dc38d;
      goto LAB_1441dc335;
    }
LAB_1441dab05:
    plVar7 = (longlong *)FUN_1459b8f2e();
    if (plVar7 == (longlong *)0x0) {
LAB_1441dab0f:
      uStack_d0 = 0;
LAB_1441dab73:
      plStack_d8 = (longlong *)0x0;
    }
    else {
      lVar22 = plVar7[0x22];
      if (lVar22 == 0) {
        (**(code **)(*plVar7 + 1000))();
        lVar22 = plVar7[0x22];
        if (lVar22 == 0) goto LAB_1441dab0f;
      }
      plStack_d8 = (longlong *)0x0;
      uVar5 = *(uint *)(lVar22 + 0x40);
      pvVar1 = *(void **)(lVar22 + 0x38);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        uStack_d0 = (ulonglong)uVar5;
        goto LAB_1441dab73;
      }
      FUN_1446dd670(&plStack_d8,uVar5,0);
      memcpy(plStack_d8,pvVar1,(longlong)(int)uVar5 * 2);
    }
    if ((longlong)*(int *)(param_2 + 0x118) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x110);
      plVar25 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441dadd2:
      if ((int)plVar7[1] == (int)uStack_d0) {
        bVar30 = true;
        if (1 < (int)uStack_d0) {
          lVar22 = 0;
          do {
            uVar27 = *(ushort *)(*plVar7 + lVar22);
            uVar26 = (ulonglong)uVar27;
            uVar19 = *(ushort *)((longlong)plStack_d8 + lVar22);
            if (uVar27 == uVar19) {
              if (uVar27 == 0) break;
            }
            else {
              if (0x7f < (uVar19 | uVar27)) goto LAB_1441dae4a;
              uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
              uVar23 = (ulonglong)uVar19;
              uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[uVar23]) goto LAB_1441dae4a;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
      }
      else {
        if ((int)plVar7[1] + (int)uStack_d0 != 1) goto LAB_1441dade8;
        bVar30 = true;
      }
      goto LAB_1441dab87;
    }
    bVar30 = false;
LAB_1441dab87:
    if (plStack_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar30) {
      FUN_1441da934(&plStack_d8);
      fVar31 = (float)FUN_1441dc70c(plVar9,&plStack_d8);
      if (lStack_c0 != 0) {
        FUN_1400020a8();
      }
      plVar7 = (longlong *)FUN_1459b8f2e();
      if (plVar7 == (longlong *)0x0) {
LAB_1441daf26:
        uStack_100 = (undefined *)0x0;
        ppuStack_108 = (undefined **)0x0;
        fVar33 = 0.0;
        iVar6 = 0;
      }
      else {
        lVar22 = plVar7[0x22];
        if (lVar22 == 0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          lVar22 = plVar7[0x22];
          if (lVar22 == 0) goto LAB_1441daf26;
        }
        ppuStack_108 = (undefined **)0x0;
        uStack_100 = (undefined *)0x0;
        iVar6 = *(int *)(lVar22 + 0x60);
        fVar33 = 0.0;
        if ((longlong)iVar6 == 0) goto LAB_1441daf26;
        lVar22 = *(longlong *)(lVar22 + 0x58);
        lVar20 = 0;
        pfStack_160 = param_3;
        plStack_158 = plVar9;
        do {
          puVar16 = &DAT_149dfb77a;
          if (*(int *)(lVar22 + 8 + lVar20) != 0) {
            puVar16 = *(undefined2 **)(lVar22 + lVar20);
          }
          FUN_1446f470e(&ppuStack_138,puVar16,1);
          FUN_1446dcdd4(&plStack_d8,&ppuStack_138);
          uVar26 = (ulonglong)uStack_100;
          lVar28 = (longlong)(int)uStack_100;
          uVar5 = (int)uStack_100 + 1;
          uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,uVar5);
          if (uStack_100._4_4_ < uVar5) {
            FUN_14014a81a(&ppuStack_108,uVar26 & 0xffffffff);
          }
          ppuVar18 = ppuStack_108 + lVar28 * 5;
          *ppuVar18 = (undefined *)0x0;
          ppuVar18[1] = (undefined *)0x0;
          *(undefined4 *)(ppuVar18 + 2) = 0;
          ppuVar18[3] = (undefined *)0x0;
          ppuVar18[4] = (undefined *)0x0;
          FUN_1404e49fa(ppuVar18,&plStack_d8);
          if (lStack_c0 != 0) {
            FUN_1400020a8();
          }
          plVar9 = plStack_158;
          param_3 = pfStack_160;
          lVar20 = lVar20 + 0x10;
        } while ((longlong)iVar6 * 0x10 != lVar20);
        iVar6 = 0;
        if ((longlong)(int)uStack_100 != 0) {
          lVar22 = (longlong)(int)uStack_100 * 0x28;
          fVar33 = 0.0;
          ppuVar18 = ppuStack_108;
          do {
            fVar32 = (float)FUN_1441dc70c(plVar9,ppuVar18);
            fVar33 = fVar33 + fVar32 / (float)(int)uStack_100;
            ppuVar18 = ppuVar18 + 5;
            lVar22 = lVar22 + -0x28;
            iVar6 = (int)uStack_100;
          } while (lVar22 != 0);
        }
      }
LAB_1441daf2a:
      if (1.0 <= fVar33) {
        fVar33 = 1.0;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      FUN_1456d172d(ppuStack_108,iVar6);
      if (ppuStack_108 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      fVar31 = fVar31 * 0.8 + fVar33 * 0.2;
LAB_1441daf67:
      fVar31 = 1.0 - fVar31;
LAB_1441daf73:
      fVar31 = fVar31 * 0.9 + 0.1;
    }
    else {
      plVar7 = (longlong *)FUN_1459b8f2e();
      if (plVar7 == (longlong *)0x0) {
LAB_1441dacf8:
        uStack_d0 = 0;
LAB_1441daeb8:
        plStack_d8 = (longlong *)0x0;
      }
      else {
        lVar22 = plVar7[0x22];
        if (lVar22 == 0) {
          (**(code **)(*plVar7 + 1000))();
          lVar22 = plVar7[0x22];
          if (lVar22 == 0) goto LAB_1441dacf8;
        }
        plStack_d8 = (longlong *)0x0;
        uVar5 = *(uint *)(lVar22 + 0x80);
        pvVar1 = *(void **)(lVar22 + 0x78);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
        if ((longlong)(int)uVar5 == 0) {
          uStack_d0 = (ulonglong)uVar5;
          goto LAB_1441daeb8;
        }
        FUN_1446dd670(&plStack_d8,uVar5,0);
        memcpy(plStack_d8,pvVar1,(longlong)(int)uVar5 * 2);
      }
      if ((longlong)*(int *)(param_2 + 0x118) != 0) {
        plVar7 = *(longlong **)(param_2 + 0x110);
        plVar25 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441db07f:
        if ((int)plVar7[1] == (int)uStack_d0) {
          bVar30 = true;
          if (1 < (int)uStack_d0) {
            lVar22 = 0;
            do {
              uVar27 = *(ushort *)(*plVar7 + lVar22);
              uVar26 = (ulonglong)uVar27;
              uVar19 = *(ushort *)((longlong)plStack_d8 + lVar22);
              if (uVar27 == uVar19) {
                if (uVar27 == 0) break;
              }
              else {
                if (0x7f < (uVar19 | uVar27)) goto LAB_1441db0f7;
                uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                uVar23 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[uVar23]) goto LAB_1441db0f7;
              }
              lVar22 = lVar22 + 2;
            } while( true );
          }
        }
        else {
          if ((int)plVar7[1] + (int)uStack_d0 != 1) goto LAB_1441db095;
          bVar30 = true;
        }
        goto LAB_1441daecc;
      }
      bVar30 = false;
LAB_1441daecc:
      if (plStack_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (bVar30) {
        FUN_1441da9ee(&plStack_d8);
        fVar31 = (float)FUN_1441dc70c(plVar9,&plStack_d8);
        if (lStack_c0 != 0) {
          FUN_1400020a8();
        }
        plVar7 = (longlong *)FUN_1459b8f2e();
        if (plVar7 != (longlong *)0x0) {
          lVar22 = plVar7[0x22];
          if (lVar22 == 0) {
            (**(code **)(*plVar7 + 1000))(plVar7);
            lVar22 = plVar7[0x22];
            if (lVar22 == 0) goto LAB_1441daf26;
          }
          ppuStack_108 = (undefined **)0x0;
          uStack_100 = (undefined *)0x0;
          iVar6 = *(int *)(lVar22 + 0xa0);
          fVar33 = 0.0;
          if ((longlong)iVar6 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x98);
            lVar20 = 0;
            pfStack_160 = param_3;
            plStack_158 = plVar9;
            do {
              puVar16 = &DAT_149dfb77a;
              if (*(int *)(lVar22 + 8 + lVar20) != 0) {
                puVar16 = *(undefined2 **)(lVar22 + lVar20);
              }
              FUN_1446f470e(&ppuStack_138,puVar16,1);
              FUN_1446dcdd4(&plStack_d8,&ppuStack_138);
              uVar26 = (ulonglong)uStack_100;
              lVar28 = (longlong)(int)uStack_100;
              uVar5 = (int)uStack_100 + 1;
              uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,uVar5);
              if (uStack_100._4_4_ < uVar5) {
                FUN_14014a81a(&ppuStack_108,uVar26 & 0xffffffff);
              }
              ppuVar18 = ppuStack_108 + lVar28 * 5;
              *ppuVar18 = (undefined *)0x0;
              ppuVar18[1] = (undefined *)0x0;
              *(undefined4 *)(ppuVar18 + 2) = 0;
              ppuVar18[3] = (undefined *)0x0;
              ppuVar18[4] = (undefined *)0x0;
              FUN_1404e49fa(ppuVar18,&plStack_d8);
              if (lStack_c0 != 0) {
                FUN_1400020a8();
              }
              plVar9 = plStack_158;
              param_3 = pfStack_160;
              lVar20 = lVar20 + 0x10;
            } while ((longlong)iVar6 * 0x10 != lVar20);
            iVar6 = 0;
            if ((longlong)(int)uStack_100 != 0) {
              lVar22 = (longlong)(int)uStack_100 * 0x28;
              fVar33 = 0.0;
              ppuVar18 = ppuStack_108;
              do {
                fVar32 = (float)FUN_1441dc70c(plVar9,ppuVar18);
                fVar33 = fVar33 + fVar32 / (float)(int)uStack_100;
                ppuVar18 = ppuVar18 + 5;
                lVar22 = lVar22 + -0x28;
                iVar6 = (int)uStack_100;
              } while (lVar22 != 0);
            }
            goto LAB_1441daf2a;
          }
        }
        goto LAB_1441daf26;
      }
      if ((longlong)*(int *)(param_2 + 0x118) != 0) {
        plVar7 = *(longlong **)(param_2 + 0x110);
        plVar13 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
        plVar25 = plVar7;
LAB_1441db406:
        if ((int)plVar25[1] == DAT_14cbce9a8) {
          if (1 < DAT_14cbce9a8) {
            lVar22 = 0;
            do {
              uVar27 = *(ushort *)(*plVar25 + lVar22);
              uVar26 = (ulonglong)uVar27;
              uVar19 = *(ushort *)(DAT_14cbce9a0 + lVar22);
              if (uVar27 == uVar19) {
                if (uVar27 == 0) break;
              }
              else {
                if (0x7f < (uVar19 | uVar27)) goto LAB_1441db468;
                uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                uVar23 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[uVar23]) goto LAB_1441db468;
              }
              lVar22 = lVar22 + 2;
            } while( true );
          }
          goto LAB_1441db46e;
        }
        if ((int)plVar25[1] + DAT_14cbce9a8 == 1) goto LAB_1441db46e;
        goto LAB_1441db418;
      }
LAB_1441dafe2:
      FUN_148da6994(&plStack_d8);
      if ((longlong)*(int *)(param_2 + 0x118) != 0) {
        plVar7 = *(longlong **)(param_2 + 0x110);
        plVar25 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441db8e0:
        if ((int)plVar7[1] == (int)uStack_d0) {
          bVar30 = true;
          if (1 < (int)uStack_d0) {
            lVar22 = 0;
            do {
              uVar27 = *(ushort *)(*plVar7 + lVar22);
              uVar26 = (ulonglong)uVar27;
              uVar19 = *(ushort *)((longlong)plStack_d8 + lVar22);
              if (uVar27 == uVar19) {
                if (uVar27 == 0) break;
              }
              else {
                if (0x7f < (uVar19 | uVar27)) goto LAB_1441db958;
                uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                uVar23 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[uVar23]) goto LAB_1441db958;
              }
              lVar22 = lVar22 + 2;
            } while( true );
          }
        }
        else {
          if ((int)plVar7[1] + (int)uStack_d0 != 1) goto LAB_1441db8f6;
          bVar30 = true;
        }
        goto LAB_1441db007;
      }
      bVar30 = false;
LAB_1441db007:
      if (plStack_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar30) {
        if ((longlong)*(int *)(param_2 + 0x118) != 0) {
          plVar7 = *(longlong **)(param_2 + 0x110);
          plVar25 = plVar7 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441db98b:
          if ((int)plVar7[1] == DAT_14cbce9e8) {
            if (1 < DAT_14cbce9e8) {
              lVar22 = 0;
              do {
                uVar27 = *(ushort *)(*plVar7 + lVar22);
                uVar19 = *(ushort *)(DAT_14cbce9e0 + lVar22);
                if (uVar27 == uVar19) {
                  if (uVar27 == 0) break;
                }
                else {
                  if (0x7f < (uVar19 | uVar27)) {
                    iVar6 = (uint)uVar27 - (uint)uVar19;
                    goto LAB_1441dba02;
                  }
                  if ((&DAT_149e05da0)[uVar27] != (&DAT_149e05da0)[(uint)uVar19])
                  goto code_r0x0001441db9ff;
                }
                lVar22 = lVar22 + 2;
              } while( true );
            }
            goto LAB_1441dbc37;
          }
          if ((int)plVar7[1] + DAT_14cbce9e8 == 1) goto LAB_1441dbc37;
          goto LAB_1441db99f;
        }
LAB_1441db02a:
        uVar8 = 0;
        goto LAB_1441daf8b;
      }
      pfStack_160 = param_3;
      lVar22 = FUN_1458b3986(plVar9);
      if ((lVar22 != 0) && ((longlong)*(int *)(param_2 + 0x128) != 0)) {
        plVar7 = *(longlong **)(param_2 + 0x120);
        plStack_150 = plVar7 + (longlong)*(int *)(param_2 + 0x128) * 8;
        iVar6 = 0;
        iVar29 = 0;
        do {
          lVar22 = plVar7[7];
          plStack_158 = plVar7;
          if ((longlong)(int)lVar22 != 0) {
            lVar20 = plVar7[6];
            lVar28 = 0;
            do {
              plStack_d8 = (longlong *)0x0;
              uVar5 = *(uint *)(lVar20 + 0x18 + lVar28);
              pvVar1 = *(void **)(lVar20 + 0x10 + lVar28);
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
              if ((longlong)(int)uVar5 == 0) {
                uStack_d0 = (ulonglong)uVar5;
              }
              else {
                FUN_1446dd670(&plStack_d8,uVar5,0);
                memcpy(plStack_d8,pvVar1,(longlong)(int)uVar5 * 2);
                if (1 < (int)uStack_d0) {
                  FUN_1446f82e2(&ppuStack_108,(int)uStack_d0 + -1,plStack_d8,1);
                  lVar12 = plVar9[0x30];
                  if (lVar12 == 0) {
                    ppuStack_108 = (undefined **)plVar9[0x2e];
                    lVar12 = FUN_14050aea0(&ppuStack_108);
                    plVar9[0x30] = lVar12;
                    if (lVar12 == 0) goto LAB_1441dc19a;
                  }
                  if ((*(longlong *)(plVar9[2] + 0x38) == 0) ||
                     (lVar2 = *(longlong *)(*(longlong *)(plVar9[2] + 0x38) + 0x30), lVar2 == 0)) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = *(undefined8 *)(lVar2 + 0x360);
                  }
                  plVar7 = *(longlong **)(lVar12 + 0x38);
                  if ((plVar7 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar8), cVar3 != '\0')) {
                    bVar4 = FUN_140db3cd0(lVar12,uVar8);
                  }
                  else {
                    bVar4 = 0;
                  }
                  iVar29 = iVar29 + (uint)bVar4;
                }
              }
LAB_1441dc19a:
              if (plStack_d8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              lVar28 = lVar28 + 0x40;
              iVar6 = iVar6 + 1;
            } while ((longlong)(int)lVar22 * 0x40 != lVar28);
          }
          plVar7 = plStack_158 + 8;
        } while (plVar7 != plStack_150);
        if (iVar6 != 0) {
          fVar31 = (float)iVar29 / (float)iVar6;
          param_3 = pfStack_160;
          goto LAB_1441daf83;
        }
      }
      fVar31 = 0.0;
      param_3 = pfStack_160;
    }
  }
LAB_1441daf83:
  *param_3 = fVar31;
  uVar8 = 1;
LAB_1441daf8b:
  if ((uStack_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 148daa62a FUN_148daa62a body=19 status=ok
// SIG undefined FUN_148daa62a(void)

int FUN_148daa62a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_208 [32];
  undefined1 uStack_1e8;
  int iStack_1dc;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong *plStack_1b0;
  longlong alStack_1a8 [2];
  longlong lStack_198;
  ulonglong uStack_190;
  undefined8 *puStack_188;
  longlong *plStack_180;
  void *pvStack_178;
  longlong *plStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  lVar12 = *(longlong *)(param_1 + 0x778);
  if (lVar12 == 0) {
    return 0;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  pvStack_178 = (void *)*param_2;
  plVar9 = (longlong *)param_2[1];
  plStack_170 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_140b7090e(*(undefined8 *)(lVar12 + 0x10),&puStack_188,&pvStack_178);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_140b7090e(*(undefined8 *)(lVar12 + 0x10),&puStack_188);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  plVar9 = (longlong *)(lVar12 + 0x10);
  if (puStack_188 == (undefined8 *)0x0) {
    cVar7 = FUN_1414e62ca(*plVar9);
    if (cVar7 != '\0') {
      *(undefined1 *)(*plVar9 + 0x1c8) = 1;
    }
    if (*(char *)(lVar12 + 0x168) == '\x01') {
      puVar15 = *(undefined8 **)(lVar12 + 0x38);
      cVar7 = (**(code **)*puVar15)(puVar15,*param_2);
      if (cVar7 != '\0') {
        pvStack_178 = *(void **)(lVar12 + 0x38);
        plStack_170 = *(longlong **)(lVar12 + 0x40);
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
          UNLOCK();
        }
        FUN_14589e2aa(auStack_168,lVar12 + 0x48);
        uStack_50 = *(undefined4 *)(lVar12 + 0x160);
        if (*(char *)(lVar12 + 0x168) == '\x01') {
          FUN_148da6a00((undefined8 *)(lVar12 + 0x38));
          *(undefined1 *)(lVar12 + 0x168) = 0;
        }
        FUN_1441dcec2(lVar12,auStack_168,1);
        FUN_148da6a00(&pvStack_178);
        goto LAB_1441dcb01;
      }
    }
    lVar14 = *param_2;
    lVar11 = param_2[1];
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(lVar12 + 0x20);
    *(longlong *)(lVar12 + 0x18) = lVar14;
    *(longlong *)(lVar12 + 0x20) = lVar11;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    FUN_148da6a44(lVar12);
    iVar13 = 1;
  }
  else {
    if (*(int *)((longlong)puStack_188 + 0x14) == 0) {
      plStack_1d8 = (longlong *)(lVar12 + 0x1b8);
      uStack_1c0 = param_3;
      FUN_148a8319e(*(undefined8 *)(lVar12 + 0x1b8),*(undefined4 *)(lVar12 + 0x1c0));
      *(undefined4 *)(lVar12 + 0x1c0) = 0;
      lStack_1c8 = lVar12;
      if (*(int *)(lVar12 + 0x1c4) != 0) {
        FUN_148dae846();
      }
      lStack_198 = 0;
      uStack_190 = 0;
      iStack_1dc = 2;
      plStack_1d0 = param_2;
      if ((longlong)(int)param_2[3] != 0) {
        puVar15 = (undefined8 *)param_2[2];
        lVar12 = (longlong)(int)param_2[3] * 0x30;
        iStack_1dc = 2;
        do {
          FUN_140b7090e(*plVar9,&pvStack_178,puVar15);
          plVar5 = plStack_170;
          pvVar4 = pvStack_178;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_170 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_170)();
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))();
              }
            }
          }
          if (pvVar4 == (void *)0x0) {
            pvStack_178 = (void *)0x0;
            uVar3 = *(uint *)(puVar15 + 3);
            pvVar4 = (void *)puVar15[2];
            plStack_170 = (longlong *)CONCAT44(plStack_170._4_4_,uVar3);
            if ((longlong)(int)uVar3 == 0) {
              plStack_170 = (longlong *)(ulonglong)uVar3;
            }
            else {
              FUN_1446dd670(&pvStack_178,uVar3,0);
              memcpy(pvStack_178,pvVar4,(longlong)(int)uVar3 * 2);
            }
            FUN_140056680(alStack_1a8,L"Enabled");
            uStack_1e8 = 0;
            cVar7 = FUN_1416496fc(*plVar9,puVar15,&pvStack_178,alStack_1a8);
            if (cVar7 != '\0') {
              uStack_1b8 = *puStack_188;
              plVar5 = (longlong *)puStack_188[1];
              plStack_1b0 = plVar5;
              if (plVar5 == (longlong *)0x0) {
                uVar8 = FUN_145ce2ae6(*plVar9,&uStack_1b8);
              }
              else {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                uVar8 = FUN_145ce2ae6(*plVar9,&uStack_1b8);
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
              }
              lVar14 = lStack_1c8;
              FUN_1462029ae(*(undefined8 *)(lStack_1c8 + 0x10),uVar8,*puVar15,&DAT_14cb97838);
              FUN_1412fabe8(&lStack_198,puVar15 + 4);
              iVar13 = *(int *)(lVar14 + 0x1c0);
              *(uint *)(lVar14 + 0x1c0) = iVar13 + 1U;
              if (*(uint *)(lVar14 + 0x1c4) < iVar13 + 1U) {
                FUN_148a84a88(plStack_1d8,iVar13);
              }
              FUN_148dae876((longlong)iVar13 * 0x30 + *plStack_1d8,puVar15);
              iStack_1dc = 1;
            }
            if (alStack_1a8[0] != 0) {
              FUN_1400020a8();
            }
            if (pvStack_178 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          puVar15 = puVar15 + 6;
          lVar12 = lVar12 + -0x30;
        } while (lVar12 != 0);
      }
      param_3 = uStack_1c0;
      lVar12 = lStack_1c8;
      iVar13 = iStack_1dc;
      if (0 < (longlong)*(int *)(lStack_1c8 + 0x1c0)) {
        uStack_158 = 0;
        uStack_150 = 0;
        pvStack_178 = (void *)0x0;
        plStack_170 = (longlong *)0x0;
        uStack_14c = 0xffffffff00000080;
        uStack_144 = 0;
        lStack_138 = 0;
        uStack_130 = 0;
        lVar14 = *plStack_1d8;
        lVar11 = (longlong)*(int *)(lStack_1c8 + 0x1c0) * 0x30;
        do {
          FUN_1465803e2(&pvStack_178,alStack_1a8,lVar14,0);
          lVar14 = lVar14 + 0x30;
          lVar11 = lVar11 + -0x30;
        } while (lVar11 != 0);
        lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x38);
        if ((lVar14 == 0) || (lVar14 = *(longlong *)(lVar14 + 0x30), lVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar14 + 0x360);
        }
        FUN_148a7a965(uVar10,&pvStack_178,(int)uStack_190 < *(int *)(lVar12 + 0x1c0));
        uStack_130 = 0;
        if (lStack_138 != 0) {
          FUN_1400020a8();
        }
        FUN_140b6c31a(&pvStack_178);
      }
      FUN_1447a1747(lStack_198,uStack_190 & 0xffffffff);
      param_2 = plStack_1d0;
      if (lStack_198 != 0) {
        FUN_1400020a8();
      }
      bVar6 = true;
      goto LAB_1441dcb08;
    }
LAB_1441dcb01:
    iVar13 = 2;
  }
  bVar6 = false;
LAB_1441dcb08:
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_180 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plStack_180 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
      }
    }
  }
  if (iVar13 == 1) {
    if ((*(longlong *)(lVar12 + 0x170) != param_2[4]) ||
       (*(int *)(lVar12 + 0x178) != (int)param_2[5])) {
      *(longlong *)(lVar12 + 0x170) = param_2[4];
      *(int *)(lVar12 + 0x178) = (int)param_2[5];
      *(undefined8 *)(lVar12 + 0x180) = 0;
    }
    FUN_140bee9ec(lVar12 + 0x188,param_2 + 7);
    *(int *)(lVar12 + 0x198) = (int)param_2[9];
    *(undefined1 *)(lVar12 + 0x19c) = 1;
    FUN_14009d848(lVar12 + 0x1a8,param_3);
  }
  else if (bVar6) {
    if ((*(longlong *)(lVar12 + 0x170) != param_2[4]) ||
       (*(int *)(lVar12 + 0x178) != (int)param_2[5])) {
      *(longlong *)(lVar12 + 0x170) = param_2[4];
      *(int *)(lVar12 + 0x178) = (int)param_2[5];
      *(undefined8 *)(lVar12 + 0x180) = 0;
    }
    FUN_140bee9ec(lVar12 + 0x188,param_2 + 7);
    *(int *)(lVar12 + 0x198) = (int)param_2[9];
    *(undefined1 *)(lVar12 + 0x19c) = 1;
    FUN_1441dcf24(lVar12);
  }
  if (*(longlong *)(lVar12 + 0x1a0) != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
  }
  *(undefined8 *)(lVar12 + 0x1a0) = 0;
  plVar9 = (longlong *)FUN_1458b3986(lVar12);
  if (plVar9 != (longlong *)0x0) {
    uVar10 = (**(code **)(*plVar9 + 0xe8))(plVar9);
    if (*(longlong *)(lVar12 + 0x308) != 0) {
      FUN_14480f766(uVar10);
    }
    *(undefined8 *)(lVar12 + 0x308) = 0;
  }
  FUN_14062e8ba(lVar12 + 0x310,0);
  if ((uStack_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar13;
}



// FUNCTION 148daa63e FUN_148daa63e body=72 status=ok
// SIG undefined FUN_148daa63e(void)

void FUN_148daa63e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_143f455c2();
  uVar2 = FUN_148a95d1e(param_2);
  if ((*(int *)(param_1 + 0x6d8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x6d0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148daa67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,uVar2,*(code **)(*plVar1 + 0x60));
    return;
  }
  return;
}



// FUNCTION 148daa686 FUN_148daa686 body=221 status=ok
// SIG undefined FUN_148daa686(void)

void FUN_148daa686(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_145c29964();
  if ((((cVar1 != '\0') && (*(longlong *)(param_1 + 0x38) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar2 != 0)) &&
     ((lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0 && (*(longlong *)(lVar2 + 0x1f0) != 0)))) {
    lVar2 = FUN_140cb14ac();
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
      FUN_146584316(lVar2);
      *(undefined1 *)(lVar2 + 0x20) = 0;
    }
  }
  FUN_143f455e4(param_1,param_2,param_3);
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x14) == 0)) {
    FUN_141529848(param_1);
    FUN_145ce2ef0(param_1,*param_2);
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (lVar2 != 0) {
      lVar3 = FUN_1403ca142();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_148d31a42(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148daa764 FUN_148daa764 body=32 status=ok
// SIG undefined FUN_148daa764(void)

void FUN_148daa764(undefined8 param_1,undefined4 param_2)

{
  FUN_148aa74ae();
  FUN_14163b282(param_1,param_2);
  return;
}



// FUNCTION 148daa784 FUN_148daa784 body=40 status=ok
// SIG undefined FUN_148daa784(void)

void FUN_148daa784(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_145cc76be();
  FUN_148aa756a(param_1,param_2,param_3);
  return;
}



// FUNCTION 148daa7ac FUN_148daa7ac body=398 status=ok
// SIG undefined FUN_148daa7ac(void)

ulonglong FUN_148daa7ac(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong unaff_RBX;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar9 != 0)) &&
      (lVar9 = *(longlong *)(lVar9 + 0x360), lVar9 != 0)) && (*(longlong *)(lVar9 + 0x1f0) != 0)) {
    lVar9 = FUN_140d6e14c();
    if (((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0)) &&
       ((lVar11 = *(longlong *)(param_1 + 0x38), lVar11 != 0 &&
        (iVar3 = *(int *)(lVar11 + 0x40), (longlong)iVar3 != 0)))) {
      local_60 = *(longlong *)(lVar11 + 0x38);
      lVar11 = 0;
      do {
        lVar4 = *(longlong *)(local_60 + lVar11);
        cVar8 = FUN_145cf80ce(lVar9,*(undefined4 *)(lVar4 + 0xe0),*param_2);
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
        if (cVar8 != '\0') goto LAB_148daa90a;
        if ((*(longlong *)(param_1 + 0x38) == 0) ||
           (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar5 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar5 + 0x360);
        }
        FUN_140b6deae(&local_58,uVar10,*param_2);
        if (local_58 == 0) {
LAB_148daa8c6:
          bVar6 = true;
        }
        else {
          cVar8 = FUN_145cf80ce(lVar9,*(undefined4 *)(lVar4 + 0xe0));
          if (cVar8 == '\0') goto LAB_148daa8c6;
          bVar6 = false;
        }
        plVar7 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (!bVar6) goto LAB_148daa90a;
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar3 * 8 != lVar11);
    }
  }
  unaff_RBX = 0;
LAB_148daa90a:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148daa940 FUN_148daa940 body=90 status=ok
// SIG undefined FUN_148daa940(void)

void FUN_148daa940(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x48), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_140b6d0be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148daa997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x388))(plVar1,4,0);
      return;
    }
  }
  return;
}



// FUNCTION 148daa99a FUN_148daa99a body=125 status=ok
// SIG undefined FUN_148daa99a(void)

void FUN_148daa99a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141146118();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = FUN_14061d010();
    if (lVar1 != 0) {
      FUN_145c96d9a(lVar1,param_2);
      local_20 = 0;
      local_1c = 1;
      FUN_145c96f3c(lVar1,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148daaa18 FUN_148daaa18 body=125 status=ok
// SIG undefined FUN_148daaa18(void)

void FUN_148daaa18(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fe2b48();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = FUN_14061d010();
    if (lVar1 != 0) {
      FUN_145c96d9a(lVar1,param_2);
      local_20 = 0;
      local_1c = 1;
      FUN_145c96f3c(lVar1,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148daaa96 FUN_148daaa96 body=621 status=ok
// SIG undefined FUN_148daaa96(void)

void FUN_148daaa96(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408c7d08();
  if (param_1[0xc] != 0) {
    cVar3 = FUN_144729dda(param_1 + 0xb);
    if (cVar3 != '\0') {
      lVar4 = (**(code **)(*(longlong *)param_1[0xc] + 0x18))();
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar2 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14b3f7600;
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
      local_30[2] = lVar8;
      *local_30 = &PTR_FUN_14b9912e0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      puVar2[4] = param_1;
      FUN_140740a5e(lVar4 + 0x58,local_38,&local_30);
      FUN_1449db362(&local_30);
    }
  }
  if (((char)param_1[0x19] == '\x01') && ((int)param_1[0x1f] == 0)) {
    lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar5 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
      lVar5 = FUN_1447210f0(uVar6);
      if (lVar5 != 0) {
        uVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
        uVar6 = FUN_1447210f0(uVar6);
        cVar3 = FUN_1407579fa(uVar6);
        if (cVar3 == '\0') {
          FUN_1446f470e(&local_40,L"RadialForce",1);
          uVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
          uVar6 = FUN_148daad04(uVar6,local_40);
          plVar1 = param_1 + 0x18;
          FUN_14485c47a(plVar1,uVar6);
          lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
          if (*(longlong *)(lVar5 + 0x1c8) != 0) {
            plVar7 = (longlong *)FUN_14479d2ce(plVar1);
            lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
            (**(code **)(*plVar7 + 0x588))
                      (plVar7,*(undefined1 *)(*(longlong *)(lVar5 + 0x1c8) + 0x1fb));
            uVar6 = FUN_14479d2ce(plVar1);
            lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
            FUN_140486fc4(uVar6,*(undefined8 *)(lVar5 + 0x1c8),0);
          }
          lVar5 = FUN_14479d2ce(plVar1);
          *(byte *)(lVar5 + 0x2b4) = *(byte *)(lVar5 + 0x2b4) | 1;
          uVar6 = FUN_14479d2ce(plVar1);
          FUN_147c8dc8e(uVar6,1);
        }
      }
    }
  }
  if ((char)param_1[0x1b] == '\x01') {
    FUN_148daadda(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148daad04 FUN_148daad04 body=183 status=ok
// SIG undefined FUN_148daad04(void)

undefined8 FUN_148daad04(undefined8 param_1,longlong param_2)

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
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595a198();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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


