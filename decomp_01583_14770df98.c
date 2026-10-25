// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14770df98 FUN_14770df98 body=89 status=ok
// SIG undefined FUN_14770df98(void)

bool FUN_14770df98(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14770dfe3;
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
LAB_14770dfe3:
  return lVar6 == param_2;
}



// FUNCTION 14770e00e FUN_14770e00e body=118 status=ok
// SIG undefined FUN_14770e00e(void)

void FUN_14770e00e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c5c0;
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



// FUNCTION 14770e084 FUN_14770e084 body=118 status=ok
// SIG undefined FUN_14770e084(void)

void FUN_14770e084(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c5c0;
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



// FUNCTION 14770e0fa FUN_14770e0fa body=156 status=ok
// SIG undefined FUN_14770e0fa(void)

void FUN_14770e0fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50c5c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014770e186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770e196 FUN_14770e196 body=102 status=ok
// SIG undefined FUN_14770e196(void)

undefined8 FUN_14770e196(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014770e1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 14770e1fc FUN_14770e1fc body=100 status=ok
// SIG undefined FUN_14770e1fc(void)

ulonglong FUN_14770e1fc(longlong param_1)

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
LAB_14770e255:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14770e255;
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



// FUNCTION 14770e260 FUN_14770e260 body=397 status=ok
// SIG undefined FUN_14770e260(void)

longlong * FUN_14770e260(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_14770e37c:
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14a50c630;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14770e37c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a50c630;
    puVar5[3] = lVar9;
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



// FUNCTION 14770e3ee FUN_14770e3ee body=64 status=ok
// SIG undefined FUN_14770e3ee(void)

undefined8 * FUN_14770e3ee(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50c630;
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



// FUNCTION 14770e432 FUN_14770e432 body=81 status=ok
// SIG undefined FUN_14770e432(void)

undefined8 FUN_14770e432(longlong param_1)

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



// FUNCTION 14770e48a FUN_14770e48a body=89 status=ok
// SIG undefined FUN_14770e48a(void)

bool FUN_14770e48a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14770e4d5;
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
LAB_14770e4d5:
  return lVar6 == param_2;
}



// FUNCTION 14770e500 FUN_14770e500 body=118 status=ok
// SIG undefined FUN_14770e500(void)

void FUN_14770e500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c630;
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



// FUNCTION 14770e576 FUN_14770e576 body=118 status=ok
// SIG undefined FUN_14770e576(void)

void FUN_14770e576(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c630;
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



// FUNCTION 14770e5ec FUN_14770e5ec body=156 status=ok
// SIG undefined FUN_14770e5ec(void)

void FUN_14770e5ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50c630;
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
                    /* WARNING: Could not recover jumptable at 0x00014770e678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770e688 FUN_14770e688 body=105 status=ok
// SIG undefined FUN_14770e688(void)

undefined8 FUN_14770e688(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14770e6dc:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14770e6dc;
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



// FUNCTION 14770e6f2 FUN_14770e6f2 body=143 status=ok
// SIG undefined FUN_14770e6f2(void)

ulonglong FUN_14770e6f2(longlong param_1)

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
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14770e760:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14770e760;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14770e782 FUN_14770e782 body=130 status=ok
// SIG undefined FUN_14770e782(void)

void FUN_14770e782(longlong *param_1,longlong *param_2)

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



// FUNCTION 14770e806 FUN_14770e806 body=130 status=ok
// SIG undefined FUN_14770e806(void)

void FUN_14770e806(longlong *param_1,longlong *param_2)

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



// FUNCTION 14770e88a FUN_14770e88a body=386 status=ok
// SIG undefined FUN_14770e88a(void)

longlong * FUN_14770e88a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14770e99b:
    *puVar5 = &PTR_LAB_14a50bbf0;
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
    *puVar5 = &PTR_FUN_14a509cd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14770e99b;
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
    *puVar5 = &PTR_LAB_14a50bbf0;
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
    *puVar5 = &PTR_FUN_14a509cd0;
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



// FUNCTION 14770ea0c FUN_14770ea0c body=64 status=ok
// SIG undefined FUN_14770ea0c(void)

undefined8 * FUN_14770ea0c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a509cd0;
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



// FUNCTION 14770ea50 FUN_14770ea50 body=81 status=ok
// SIG undefined FUN_14770ea50(void)

undefined8 FUN_14770ea50(longlong param_1)

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



// FUNCTION 14770eaa8 FUN_14770eaa8 body=89 status=ok
// SIG undefined FUN_14770eaa8(void)

bool FUN_14770eaa8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14770eaf3;
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
LAB_14770eaf3:
  return lVar6 == param_2;
}



// FUNCTION 14770eb2a FUN_14770eb2a body=118 status=ok
// SIG undefined FUN_14770eb2a(void)

void FUN_14770eb2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509cd0;
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



// FUNCTION 14770eba0 FUN_14770eba0 body=118 status=ok
// SIG undefined FUN_14770eba0(void)

void FUN_14770eba0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509cd0;
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



// FUNCTION 14770ec16 FUN_14770ec16 body=156 status=ok
// SIG undefined FUN_14770ec16(void)

void FUN_14770ec16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509cd0;
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
                    /* WARNING: Could not recover jumptable at 0x00014770eca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770ecb2 FUN_14770ecb2 body=104 status=ok
// SIG undefined FUN_14770ecb2(void)

void FUN_14770ecb2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014770ecff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014770ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14770ed1a FUN_14770ed1a body=101 status=ok
// SIG undefined FUN_14770ed1a(void)

ulonglong FUN_14770ed1a(longlong param_1)

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
LAB_14770ed74:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14770ed74;
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



// FUNCTION 14770ed82 FUN_14770ed82 body=386 status=ok
// SIG undefined FUN_14770ed82(void)

longlong * FUN_14770ed82(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14770ee93:
    *puVar5 = &PTR_LAB_149f1b5c0;
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
    *puVar5 = &PTR_FUN_14a509d40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14770ee93;
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
    *puVar5 = &PTR_LAB_149f1b5c0;
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
    *puVar5 = &PTR_FUN_14a509d40;
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



// FUNCTION 14770ef04 FUN_14770ef04 body=64 status=ok
// SIG undefined FUN_14770ef04(void)

undefined8 * FUN_14770ef04(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a509d40;
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



// FUNCTION 14770ef48 FUN_14770ef48 body=81 status=ok
// SIG undefined FUN_14770ef48(void)

undefined8 FUN_14770ef48(longlong param_1)

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



// FUNCTION 14770efa0 FUN_14770efa0 body=89 status=ok
// SIG undefined FUN_14770efa0(void)

bool FUN_14770efa0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14770efeb;
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
LAB_14770efeb:
  return lVar6 == param_2;
}



// FUNCTION 14770f016 FUN_14770f016 body=118 status=ok
// SIG undefined FUN_14770f016(void)

void FUN_14770f016(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509d40;
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



// FUNCTION 14770f08c FUN_14770f08c body=118 status=ok
// SIG undefined FUN_14770f08c(void)

void FUN_14770f08c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509d40;
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



// FUNCTION 14770f102 FUN_14770f102 body=156 status=ok
// SIG undefined FUN_14770f102(void)

void FUN_14770f102(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f1b5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509d40;
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
                    /* WARNING: Could not recover jumptable at 0x00014770f18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770f19e FUN_14770f19e body=105 status=ok
// SIG undefined FUN_14770f19e(void)

undefined8 FUN_14770f19e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14770f1f2:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14770f1f2;
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



// FUNCTION 14770f208 FUN_14770f208 body=174 status=ok
// SIG undefined FUN_14770f208(void)

ulonglong FUN_14770f208(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14770f28e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14770f28e;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8,param_2,param_3);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14770f2b8 FUN_14770f2b8 body=371 status=ok
// SIG undefined FUN_14770f2b8(void)

longlong *
FUN_14770f2b8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x8c0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a50bc60;
  plVar1 = plVar4 + 2;
  FUN_14770f42c(plVar1,0);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_14771645c(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14770f3bf;
    param_1[1] = 0;
LAB_14770f382:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14770f3bf;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_14770f3bf;
      goto LAB_14770f382;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14770f3bf;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14770f3bf:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 0x8b0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770f42c FUN_14770f42c body=731 status=ok
// SIG undefined FUN_14770f42c(void)

undefined8 * FUN_14770f42c(undefined8 *param_1)

{
  FUN_146af608e();
  param_1[0x9b] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  FUN_1405bceb4(param_1 + 0x9b);
  *param_1 = &PTR_FUN_14a50bc80;
  param_1[0x4d] = &PTR_FUN_14a50bf50;
  param_1[0x9b] = &PTR_FUN_14a50bf70;
  param_1[0x9d] = &PTR_LAB_14a50bf90;
  param_1[0x9e] = param_1;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = param_1;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xfb] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 2;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined2 *)(param_1 + 0x107) = 0x101;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x857) = 0;
  *(undefined1 *)((longlong)param_1 + 0x859) = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x86c) = 0;
  param_1[0x114] = 0;
  *(undefined8 *)((longlong)param_1 + 0x87d) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 14770f708 FUN_14770f708 body=9 status=ok
// SIG undefined FUN_14770f708(void)

void FUN_14770f708(longlong param_1)

{
  FUN_14771303e(param_1 + 0x10);
  return;
}



// FUNCTION 14770f712 FUN_14770f712 body=29 status=ok
// SIG undefined FUN_14770f712(void)

undefined8 FUN_14770f712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770f730 FUN_14770f730 body=38 status=ok
// SIG undefined FUN_14770f730(void)

undefined8 FUN_14770f730(undefined8 param_1,int param_2)

{
  FUN_14771303e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770f756 FUN_14770f756 body=133 status=ok
// SIG undefined FUN_14770f756(void)

char * FUN_14770f756(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x830) != 0) && (*(longlong **)(param_1 + 0x828) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x830) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x828);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_14493db24(param_2);
  }
  FUN_1477134ea(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14770f7dc FUN_14770f7dc body=348 status=ok
// SIG undefined FUN_14770f7dc(void)

undefined1 * FUN_14770f7dc(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x854) == '\x01') {
    if (((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
      iVar5 = *(int *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x398);
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar5;
    }
    if (iVar5 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == DAT_14c966e98) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) {
        bVar7 = (*(ushort *)(param_4 + 8) & 3) == 0;
      }
      else {
        bVar7 = false;
      }
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
      if (bVar7) {
        plVar6 = (longlong *)(param_1 + 0x4e8);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x70))(plVar6);
        if (0 < iVar5) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        return param_2;
      }
    }
  }
  FUN_146af49bc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14770f938 FUN_14770f938 body=298 status=ok
// SIG undefined FUN_14770f938(void)

undefined8 FUN_14770f938(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x854) != '\x01') goto LAB_14770fa27;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_14770f9a1:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_14770f9a1;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_14c966fa0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
      bVar5 = FUN_146af41be(param_1);
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
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
    if (bVar5 != 0) {
      plVar7 = (longlong *)(param_1 + 0x4e8);
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x70))(plVar7);
      if (0 < iVar6) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7,2);
      }
    }
  }
LAB_14770fa27:
  FUN_146af4b8a(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14770fa62 FUN_14770fa62 body=566 status=ok
// SIG undefined FUN_14770fa62(void)

undefined8 FUN_14770fa62(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50;
  int local_48;
  undefined1 local_40 [8];
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_1[0x114];
  if (((plVar3 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x856) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x855) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_50);
    iVar4 = (**(code **)(*param_1 + 0x268))(param_1);
    iVar5 = -1;
    if ((param_1[0xec] != 0) && ((longlong)local_48 != 0)) {
      lVar6 = (longlong)local_48 << 3;
      lVar9 = 0;
      do {
        if (*(longlong *)(local_50 + lVar9 * 8) == param_1[0xec]) {
          iVar5 = (int)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    cVar1 = *(char *)(param_4 + 0x20);
    iVar2 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar1 == '\x02' && iVar2 == 1) || (cVar1 == '\0' && iVar2 == 0)) {
      uVar8 = (ulonglong)(uint)(iVar5 - iVar4);
    }
    else {
      if ((cVar1 != '\x03' || iVar2 != 1) && (cVar1 != '\x01' || iVar2 != 0)) goto LAB_14770faac;
      uVar7 = iVar5 + iVar4;
      uVar8 = (ulonglong)uVar7;
      if (0 < local_48 && (local_48 <= (int)uVar7 || (int)uVar7 < 0)) {
        fVar10 = (float)local_48 / (float)iVar4;
        fVar11 = (float)(iVar5 + 1) / (float)iVar4;
        if ((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1 < (int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1) {
          uVar7 = local_48 - 1;
        }
        uVar8 = (ulonglong)uVar7;
      }
    }
    iVar4 = (int)uVar8;
    if (((-1 < iVar4) && (iVar4 < local_48)) && (*(char *)((longlong)param_1 + 0x3e9) == '\x01')) {
      local_78 = iVar5 <= iVar4;
      FUN_147713c26(param_1,local_40,uVar8 * 8 + local_50);
      if (local_38 == '\x01') {
        (**(code **)(*param_1 + 0x2c8))(param_1,local_40,param_4);
        local_68 = 0;
        uStack_60 = 0;
        FUN_146a35cca(param_2);
        goto LAB_14770fabd;
      }
    }
  }
LAB_14770faac:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_14770fabd:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770fc9a FUN_14770fc9a body=451 status=ok
// SIG undefined FUN_14770fc9a(void)

longlong * FUN_14770fc9a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_14770fcd8:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_14770fcd8;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_147713d1c(lVar6,&local_48,0xc);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_14770fe17;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_14770fe17;
LAB_14770fd7a:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_14770fe17;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_14770fd7a;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
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
LAB_14770fe17:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770fe5e FUN_14770fe5e body=83 status=ok
// SIG undefined FUN_14770fe5e(void)

undefined1 FUN_14770fe5e(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x848) != 0) && (*(longlong **)(param_1 + 0x840) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x848) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x840);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x838) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x838);
}



// FUNCTION 14770feb2 FUN_14770feb2 body=203 status=ok
// SIG undefined FUN_14770feb2(void)

undefined8 FUN_14770feb2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7710) {
    FUN_144b3d300(&DAT_14cab7710);
    if (DAT_14cab7710 == -1) {
      FUN_140056680(&DAT_14cab7700,L"List");
      atexit((_func_5014 *)&LAB_143332544);
      _Init_thread_footer(&DAT_14cab7710);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cab7700);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770ff7e FUN_14770ff7e body=50 status=ok
// SIG undefined FUN_14770ff7e(void)

void FUN_14770ff7e(longlong *param_1)

{
  FUN_147714232(param_1 + 0x9e);
  FUN_147714232(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014770ffa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 14770ffb0 FUN_14770ffb0 body=1758 status=ok
// SIG undefined FUN_14770ffb0(void)

void FUN_14770ffb0(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_13c [4];
  float local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar13 = (double)param_1[0x5e];
  if ((param_4 != '\x01') ||
     (((0.0 <= param_3 || (9.999999747378752e-05 <= dVar13)) &&
      ((param_3 <= 0.0 || ((char)param_1[0x66] == '\0')))))) {
    fVar18 = ABS(param_3);
    if ((dVar13 != 0.0) || (NAN(dVar13))) {
      cVar7 = '\0';
    }
    else {
      cVar7 = (char)param_1[0x66];
    }
    uVar9 = (uint)(double)param_1[0x5d];
    if (param_4 == '\0') {
      cVar6 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar13 == 0.0) & 1,(char)param_1[0x66]);
      if (cVar6 != '\0') {
        fVar18 = (float)FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2);
        if ((fVar18 != 0.0) || (NAN(fVar18))) {
          FUN_146af42a2(param_1);
        }
        goto LAB_147710372;
      }
    }
    if (cVar7 == '\0') {
      plVar4 = (longlong *)param_1[0x114];
      if (plVar4 == (longlong *)0x0) {
        local_100 = 0;
        local_f8 = 0;
      }
      else {
        (**(code **)(*plVar4 + 8))(plVar4,&local_100);
        if (0 < (int)local_f8) {
          do {
            if ((((fVar18 == 0.0) && (!NAN(fVar18))) || ((int)uVar9 < 0)) ||
               ((int)local_f8 <= (int)uVar9)) break;
            if (*(longlong *)(local_100 + (ulonglong)uVar9 * 8) == 0) {
              uVar9 = uVar9 + 1;
              iVar8 = 2;
            }
            else {
              puVar3 = (undefined8 *)(local_100 + (ulonglong)uVar9 * 8);
              FUN_147713b68(param_1 + 0x9e,&local_110,puVar3);
              if (local_110 == (longlong *)0x0) {
                (**(code **)(*param_1 + 0x2c0))(param_1,&local_120,*puVar3);
                plVar4 = local_108;
                plVar1 = local_118;
                local_110 = local_120;
                if (local_118 == (longlong *)0x0) {
                  if (local_108 != (longlong *)0x0) {
                    local_108 = (longlong *)0x0;
LAB_147710653:
                    local_110 = local_120;
                    LOCK();
                    plVar1 = plVar4 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar4)(plVar4);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar4 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
joined_r0x000147710642:
                      if (iVar8 == 0) {
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_118 + 1) = (int)local_118[1] + 1;
                  UNLOCK();
                  if (local_118 == local_108) {
                    LOCK();
                    plVar4 = local_118 + 1;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)*plVar4 == 0) {
                      (**(code **)*local_118)(local_118);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar1 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
                      plVar4 = plVar1;
                      goto joined_r0x000147710642;
                    }
                  }
                  else {
                    bVar10 = local_108 != (longlong *)0x0;
                    local_108 = local_118;
                    if (bVar10) goto LAB_147710653;
                  }
                }
                plVar4 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar4 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                  }
                }
                (**(code **)(*local_110 + 0x10))(local_110,uVar9);
                local_130 = local_110;
                local_128 = local_108;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                  UNLOCK();
                }
                FUN_147714d08(param_1 + 0x9e,*puVar3,&local_130);
                (**(code **)(*local_110 + 0x58))(local_110,&local_120);
                FUN_1405d299c(local_120);
                plVar4 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
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
              (**(code **)(*local_110 + 0x58))(local_110,&local_120);
              FUN_144b013c4(local_120,&local_150);
              local_148 = local_150;
              FUN_146af3580(local_13c,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_148);
              plVar4 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_118 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              plVar4 = local_108;
              if (param_3 <= 0.0) {
                auVar15 = roundss(ZEXT816(0),ZEXT416((uint)(float)dVar13),0xb);
                fVar17 = (float)dVar13 - auVar15._0_4_;
                fVar12 = ABS(fVar17);
                dVar5 = dVar13 + -1.0;
                if (1e-08 < fVar12) {
                  dVar5 = dVar13;
                }
                uVar11 = -(uint)(fVar12 <= 1e-08);
                fVar12 = (float)(uVar11 & 0x3f800000 | ~uVar11 & (uint)fVar17) * local_138;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)((fVar12 - fVar18) / local_138 + (float)(int)dVar5);
                    goto LAB_14771027b;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar5;
                  auVar15 = roundpd(auVar15,auVar15,3);
                  dVar13 = auVar15._0_8_;
                  iVar8 = 3;
                }
                else {
                  if (uVar9 == 0) {
                    iVar8 = 3;
                    dVar13 = 0.0;
                    uVar9 = 0;
                    goto LAB_147710280;
                  }
                  fVar18 = fVar18 - fVar12;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = dVar5;
                  auVar15 = roundpd(auVar16,auVar16,3);
                  dVar13 = auVar15._0_8_;
                  uVar9 = uVar9 - 1;
                  iVar8 = 0;
                }
                dVar13 = dVar5 - (dVar5 - dVar13);
              }
              else {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = dVar13;
                auVar15 = roundpd(auVar14,auVar14,3);
                fVar12 = (float)((auVar15._0_8_ - dVar13) + 1.0) * local_138;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)(int)dVar13 + (1.0 - (double)((fVar12 - fVar18) / local_138));
                  }
                  else {
                    dVar13 = (double)(int)dVar13 + 1.0;
                  }
                }
                else {
                  if (uVar9 != local_f8) {
                    fVar18 = fVar18 - fVar12;
                    dVar13 = (double)(int)dVar13 + 1.0;
                    uVar9 = uVar9 + 1;
                    iVar8 = 0;
                    goto LAB_147710280;
                  }
                  dVar13 = (double)(int)uVar9;
                }
LAB_14771027b:
                iVar8 = 3;
              }
LAB_147710280:
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
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
          } while (iVar8 != 3);
        }
      }
      (**(code **)(*param_1 + 600))(param_1,(float)dVar13);
    }
  }
LAB_147710372:
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147710690 FUN_147710690 body=625 status=ok
// SIG undefined FUN_147710690(void)

void FUN_147710690(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_128 [36];
  undefined1 local_104 [4];
  ulonglong local_100;
  longlong local_f8;
  int local_f0;
  ulonglong local_e8;
  int local_e0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x270) != 2) {
    plVar1 = *(longlong **)(param_1 + 0x8a0);
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x30))(param_1 + 0x4e8);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar1 + 8))(plVar1,&local_f8);
      if (0 < local_f0) {
        lVar6 = 0;
        do {
          uVar2 = *(ulonglong *)(local_f8 + lVar6 * 8);
          local_100 = uVar2;
          if (uVar2 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar2);
          }
          uVar3 = local_100;
          if (((DAT_14c950c29 & 1) != 0) && (local_100 != 0)) {
            FUN_1456cec3c(local_100);
          }
          uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          iVar5 = FUN_14075b868((longlong *)(param_1 + 0x710),uVar4 >> 0x10 ^ uVar4,&local_100);
          if ((iVar5 != -1) && ((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x710) != 0)) {
            local_e8 = uVar2;
            if ((uVar2 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(uVar2);
            }
            FUN_14075b584(&local_98,local_104,&local_e8,0);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < local_f0);
      }
      FUN_1477157fa(param_1 + 0x710,&local_e8,&local_98);
      FUN_140200ab6(param_1 + 0x710,&local_98);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1400dbf0e(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1400dbf0e(&local_98);
      if (local_e0 <= local_b4) goto LAB_1477106f7;
    }
    (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x40))(param_1 + 0x4e8,3);
  }
LAB_1477106f7:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147710902 FUN_147710902 body=1024 status=ok
// SIG undefined FUN_147710902(void)

double * FUN_147710902(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double *local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  float local_e8;
  longlong local_e0;
  uint local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146af6b36();
  lVar1 = param_1 + 0x4f0;
  FUN_147715eea(lVar1);
  plVar4 = *(longlong **)(param_1 + 0x8a0);
  if ((plVar4 == (longlong *)0x0) ||
     ((**(code **)(*plVar4 + 8))(plVar4,&local_e0), (int)local_d8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    goto LAB_147710b65;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
  auVar19 = roundpd(auVar19,auVar19,1);
  uVar5 = local_d8 - 1;
  if ((int)auVar19._0_8_ < (int)(local_d8 - 1)) {
    uVar5 = (int)auVar19._0_8_;
  }
  uVar11 = 0;
  if (0 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  local_f8 = *param_3;
  FUN_146af3580(local_ec,*(undefined4 *)(param_1 + 0x3ec));
  uVar8 = (ulonglong)local_d8;
  if ((int)uVar11 < (int)local_d8) {
    uVar15 = (ulonglong)uVar11;
    lVar13 = uVar15 * 8;
    fVar25 = 0.0;
    lVar12 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    bVar9 = false;
    uVar14 = uVar15;
    local_100 = param_2;
    do {
      if (*(longlong *)(local_e0 + lVar13) == 0) {
        bVar10 = false;
      }
      else {
        local_108 = uVar2;
        uVar17 = FUN_147715bd4(param_1,local_e0 + lVar13,uVar14 & 0xffffffff,uVar11);
        fVar16 = (float)uVar17;
        if (lVar12 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
          auVar19 = roundpd(auVar21,auVar21,3);
          dVar18 = *(double *)(param_1 + 0x2e8) - auVar19._0_8_;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar23 = 1.0 - (float)dVar18;
          fVar20 = local_e8 / (fVar16 * fVar23);
          fVar27 = fVar16;
          if (fVar23 <= fVar20) {
            fVar20 = fVar23;
          }
        }
        else if (fVar26 + fVar16 <= local_e8) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (local_e8 - fVar26) / fVar16;
        }
        fVar25 = fVar25 + fVar20;
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar17;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (lVar12 == 0) {
          auVar22._0_4_ = fVar16 * fVar25;
        }
        fVar26 = fVar26 + auVar22._0_4_;
        uVar8 = (ulonglong)(int)local_d8;
        bVar9 = (longlong)(uVar8 - 1) <= (longlong)uVar14;
        fVar24 = fVar24 + fVar16;
        bVar10 = local_e8 + 0.001 <= fVar26 || lVar12 == 0 && local_e8 <= fVar26;
      }
      param_2 = local_100;
      uVar7 = (uint)uVar8;
      if (bVar10) break;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar14 < (int)uVar7);
    if (bVar10 || bVar9 != true) {
      dVar18 = (double)fVar25;
      goto LAB_147710bea;
    }
    dVar3 = (double)((fVar24 - local_e8) / fVar27) + (double)(int)uVar11;
    if ((0 < (int)uVar5) && (fVar24 < local_e8)) {
      lVar13 = uVar15 * 8;
      fVar27 = local_e8;
      do {
        lVar13 = lVar13 + -8;
        if (*(longlong *)(local_e0 + lVar13) != 0) {
          local_108 = uVar2;
          fVar25 = (float)FUN_147715bd4(param_1,local_e0 + lVar13,uVar15 - 1 & 0xffffffff,uVar11);
          fVar24 = fVar24 + fVar25;
          fVar27 = local_e8;
          if ((0.0 < fVar25) && (local_e8 < fVar24)) {
            dVar3 = (double)((fVar24 - local_e8) / fVar25) + (double)(int)(uVar15 - 1);
          }
        }
        uVar7 = local_d8;
      } while ((1 < uVar15) && (uVar15 = uVar15 - 1, fVar24 < fVar27));
    }
    dVar18 = (double)(int)uVar7 - dVar3;
    uVar6 = 1;
  }
  else {
    fVar24 = 0.0;
    dVar18 = 0.0;
LAB_147710bea:
    dVar3 = *(double *)(param_1 + 0x2e8);
    uVar6 = 0;
  }
  *param_2 = dVar3;
  param_2[1] = (double)fVar24;
  param_2[2] = dVar18;
  *(undefined1 *)(param_2 + 3) = uVar6;
LAB_147710b65:
  FUN_1477142c6(lVar1);
  FUN_143332556(lVar1);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147710d04 FUN_147710d04 body=81 status=ok
// SIG undefined FUN_147710d04(void)

undefined4 FUN_147710d04(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8a0);
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147710d56 FUN_147710d56 body=1851 status=ok
// SIG undefined FUN_147710d56(void)

undefined1 FUN_147710d56(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong *local_118;
  float local_10c;
  float local_108;
  undefined1 local_104 [4];
  float local_100;
  undefined8 local_f8;
  undefined1 local_f0 [4];
  float local_ec;
  undefined1 local_e4 [4];
  float local_e0;
  undefined1 local_d8 [4];
  float local_d4;
  undefined1 local_cc [4];
  float local_c8;
  float local_c0;
  float fStack_bc;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  int local_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar3 = (longlong *)param_1[0x114];
  if ((plVar3 == (longlong *)0x0) || (param_1[0xf9] == 0)) goto LAB_147710e17;
  (**(code **)(*plVar3 + 8))(plVar3,&local_a0);
  if ((longlong)local_98 != 0) {
    lVar7 = (longlong)local_98 << 3;
    lVar10 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(local_a0 + lVar10 * 8) == param_1[0xf9]) {
        if ((int)lVar10 != -1) {
          fVar13 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          dVar5 = (double)fVar13;
          if (((fVar13 == 0.0) && (!NAN(fVar13))) && (cVar6 = FUN_146af5c6c(param_1), cVar6 != '\0')
             ) {
            dVar5 = (double)param_1[100];
            if ((dVar5 == 0.0) && (!NAN(dVar5))) {
              uVar11 = 1;
              goto LAB_147710e93;
            }
          }
          FUN_146af65f2(param_1);
          dVar19 = (double)param_1[0x5d];
          auVar15._0_8_ = dVar5 + dVar19;
          auVar15._8_8_ = 0;
          auVar20 = roundpd(in_XMM2,auVar15,1);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = param_1[0x5d];
          auVar16 = roundpd(auVar15,auVar16,2);
          dVar14 = auVar16._0_8_;
          dVar18 = (double)(int)(auVar20._0_8_ - dVar14);
          if (*(char *)((longlong)param_1 + 0x859) == '\x01') {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = param_1[0x5d];
            auVar16 = roundpd(auVar16,auVar4,1);
            dVar14 = auVar16._0_8_;
            auVar17._0_8_ = dVar19 + dVar18;
            auVar17._8_8_ = 0;
            auVar16 = roundpd(auVar17,auVar17,2);
            dVar19 = auVar16._0_8_;
          }
          else {
            auVar20._0_8_ = dVar19 + dVar18;
            auVar20._8_8_ = 0;
            auVar16 = roundpd(auVar20,auVar20,1);
            dVar19 = auVar16._0_8_;
          }
          dVar18 = (double)(int)lVar10;
          cVar6 = (char)param_1[0xfc];
          if ((dVar18 < dVar14) || (dVar19 < dVar18)) {
            if (cVar6 == '\0') {
              if (dVar19 < dVar18) goto LAB_147710fc5;
            }
            else if (cVar6 == '\x03') {
LAB_147710fc5:
              dVar18 = dVar18 - (dVar5 + -1.0);
            }
            else if (cVar6 == '\x02') {
              dVar18 = dVar18 + dVar5 * -0.5;
            }
          }
          else if (cVar6 != '\x01') {
            if (cVar6 == '\x03') goto LAB_147710fc5;
            if (*(char *)((longlong)param_1 + 0x859) == '\0') goto LAB_147711008;
            (**(code **)(param_1[0x9d] + 0xd8))
                      (param_1 + 0x9d,&local_b0,(lVar9 >> 0x20) * 8 + local_a0);
            if (local_b0 == (longlong *)0x0) goto LAB_1477111e1;
            (**(code **)(*local_b0 + 0x58))(local_b0,&local_c0);
            pfVar8 = (float *)FUN_144b013e4(CONCAT44(fStack_bc,local_c0));
            plVar3 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            fStack_bc = pfVar8[8] * (float)DAT_14c8463f0 * *pfVar8 +
                        pfVar8[10] * (float)DAT_14c8463f8 * pfVar8[1] + pfVar8[0xc];
            local_c0 = (float)DAT_14c8463f0 * *pfVar8 * pfVar8[7] +
                       (float)DAT_14c8463f8 * pfVar8[1] * pfVar8[9] + pfVar8[0xb];
            FUN_146af3580(local_cc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            fStack_bc = param_2[8] * (float)DAT_14c8463f0 * *param_2 +
                        param_2[10] * (float)DAT_14c8463f8 * param_2[1] + param_2[0xc];
            local_c0 = (float)DAT_14c8463f0 * *param_2 * param_2[7] +
                       (float)DAT_14c8463f8 * param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_d8,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            if (local_c8 < local_d4) {
              dVar18 = dVar18 - (double)*(float *)(param_1 + 0x10a);
              goto LAB_1477111d2;
            }
            dVar18 = (double)param_1[0x5e];
            fStack_bc = pfVar8[8] * *pfVar8 + pfVar8[10] * pfVar8[1] + pfVar8[0xc];
            local_c0 = *pfVar8 * pfVar8[7] + pfVar8[1] * pfVar8[9] + pfVar8[0xb];
            FUN_146af3580(local_e4,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            fStack_bc = param_2[8] * *param_2 + param_2[10] * param_2[1] + param_2[0xc];
            local_c0 = *param_2 * param_2[7] + param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_f0,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            if (local_e0 <= local_ec) goto LAB_1477111d2;
            lVar7 = param_1[0xb4];
            dVar18 = 0.0;
            dVar5 = 0.0;
            if ((longlong)(int)lVar7 == 0) goto LAB_14771146d;
            lVar9 = param_1[0xb3];
            fVar21 = local_e0 - local_ec;
            fVar13 = 0.0;
            lVar10 = 0;
            goto LAB_14771134f;
          }
          dVar19 = 0.0;
          if (0.0 <= (double)local_98 - dVar5) {
            dVar19 = (double)local_98 - dVar5;
          }
          if (dVar19 <= dVar18) {
            dVar18 = dVar19;
          }
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          FUN_146af48d8(param_1,(float)dVar18);
          goto LAB_147711008;
        }
        break;
      }
      lVar9 = lVar9 + 0x100000000;
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  goto LAB_147710e0c;
  while( true ) {
    fVar21 = fVar21 - local_100;
    bVar12 = (longlong)(int)lVar7 * 8 + -8 == lVar10;
    lVar10 = lVar10 + 8;
    if (bVar12) break;
LAB_14771134f:
    local_f8 = *(undefined8 *)(lVar9 + lVar10);
    FUN_147713b68(param_1 + 0x9e,&local_120,&local_f8);
    (**(code **)(*local_120 + 0x58))(local_120,&local_c0);
    pfVar8 = (float *)FUN_144b013e4(CONCAT44(fStack_bc,local_c0));
    local_108 = pfVar8[8] * *pfVar8 + pfVar8[10] * pfVar8[1];
    local_10c = *pfVar8 * pfVar8[7] + pfVar8[1] * pfVar8[9];
    FUN_146af3580(local_104,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_10c);
    plVar3 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    fVar13 = fVar13 + (float)(~-(uint)(fVar21 <= local_100) & 0x3f800000 |
                             (uint)(fVar21 / local_100) & -(uint)(fVar21 <= local_100));
    if (fVar21 <= local_100) break;
  }
  dVar5 = (double)fVar13;
LAB_14771146d:
  if ((char)param_1[0x5a] == '\0') {
    dVar18 = (double)*(float *)(param_1 + 0x10a);
  }
  dVar18 = dVar5 + (double)param_1[0x5e] + dVar18;
LAB_1477111d2:
  FUN_146af48d8(param_1,(float)dVar18);
LAB_1477111e1:
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
LAB_147711008:
  FUN_146af42a2(param_1);
  param_1[0xfb] = param_1[0xf9];
LAB_147710e0c:
  param_1[0xf9] = 0;
LAB_147710e17:
  if ((longlong *)param_1[0xfb] == (longlong *)0x0) {
    uVar11 = 2;
  }
  else {
    uVar11 = 0;
    if ((char)param_1[0x5b] == '\x01') {
      local_b0 = (longlong *)param_1[0xfb];
      (**(code **)(param_1[0x9d] + 0xd8))(param_1 + 0x9d,&local_a0);
      plVar3 = (longlong *)CONCAT44(uStack_94,local_98);
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
      uVar11 = local_a0 == 0;
    }
  }
LAB_147710e93:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 147711492 FUN_147711492 body=383 status=ok
// SIG undefined FUN_147711492(void)

void FUN_147711492(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    local_20 = *(longlong *)(param_1 + 0x7d8);
    FUN_147713b68(param_1 + 0x4f0,&local_30);
    if (local_30 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x859) == '\x01') {
        *(longlong *)(param_1 + 0x760) = local_20;
        (**(code **)(*local_30 + 0x58))(local_30,&local_50);
        local_40 = local_50;
        local_38 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        FUN_146af6ffc(param_1,*(undefined4 *)(param_1 + 2000),&local_40,0);
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
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_48 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      if ((*(int *)(param_1 + 0x6f8) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x6f0), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,local_20,&local_30);
      }
    }
    *(undefined1 *)(param_1 + 0x859) = 0;
    *(undefined8 *)(param_1 + 0x7d8) = 0;
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
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147711630 FUN_147711630 body=1199 status=ok
// SIG undefined FUN_147711630(void)

undefined8 * FUN_147711630(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_7f8 [32];
  undefined8 **local_7d8;
  undefined8 local_7c8;
  longlong *plStack_7c0;
  undefined8 *local_7b8;
  undefined1 local_7b0 [8];
  longlong *local_7a8;
  undefined1 local_791;
  wchar_t *local_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined1 local_778 [4];
  undefined1 local_774 [4];
  longlong *local_770 [2];
  undefined1 local_760 [16];
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *local_720;
  undefined8 local_718;
  longlong *plStack_710;
  undefined1 local_2a8 [600];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (((*(int *)(param_1 + 0x6b8) == 0) || (*(longlong **)(param_1 + 0x6b0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x30))(), cVar5 == '\0')) {
    FUN_14770d6ea(local_2a8);
    FUN_140a570d8(&local_718);
    local_790 = L"OnGeneratePinnedRowNotAssignedMessage";
    local_788 = 0x25;
    FUN_1446e940c(local_774,&local_790);
    local_790 = L"SListView";
    local_788 = 9;
    FUN_1446e940c(local_778,&local_790);
    FUN_140208bae(local_770,local_778,local_774,L"OnGeneratePinnedRow() not assigned.");
    FUN_14023423e(local_760,local_770);
    local_750 = 1;
    local_748 = 0;
    uStack_740 = 0;
    uVar8 = FUN_140a54906(&local_718,local_760);
    local_7d8 = (undefined8 **)&local_791;
    FUN_140a54526(&local_790,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x666)
    ;
    FUN_140a52852(&local_790,&local_738,uVar8);
    plVar9 = local_48;
    plVar3 = local_730;
    if (local_730 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
    }
    local_50 = local_738;
    local_48 = local_730;
    if (plVar9 != (longlong *)0x0) {
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_1477118ee:
      local_7c8 = 0;
      plStack_7c0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_1477118ee;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7c8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7c0 = plVar9;
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
    local_7b8 = &local_7c8;
    local_7d8 = &local_7b8;
    FUN_147716000(local_7b0,"STableRow<ItemType>",
                  "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x663);
    FUN_147715f82(local_7b0,&local_728,local_2a8);
    if (local_7a8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7a8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7a8)(local_7a8);
        LOCK();
        piVar1 = (int *)((longlong)local_7a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7a8 + 0x10))(local_7a8);
        }
      }
    }
    plVar9 = plStack_7c0;
    if (plStack_7c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7c0)(plStack_7c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_730 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_730 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_730)(local_730);
        LOCK();
        piVar1 = (int *)((longlong)local_730 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_730 + 0x10))(local_730);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_784,local_788);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_770[0] != (longlong *)0x0) {
      (**(code **)(*local_770[0] + 0x10))();
    }
    FUN_140a59ae6(&local_718);
    FUN_14770d8a6(local_2a8);
    *param_2 = local_728;
    param_2[1] = local_720;
    if (local_720 == (longlong *)0x0) goto LAB_147711761;
    LOCK();
    *(int *)(local_720 + 1) = (int)local_720[1] + 1;
    UNLOCK();
    if (local_720 == (longlong *)0x0) goto LAB_147711761;
    LOCK();
    plVar3 = local_720 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147711761;
    (**(code **)*local_720)(local_720);
    LOCK();
    piVar1 = (int *)((longlong)local_720 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147711761;
    lVar7 = *local_720;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_1477116de:
      local_718 = 0;
      plStack_710 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1477116de;
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
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_718 = uVar8;
      plStack_710 = plVar3;
    }
    plVar3 = plStack_710;
    if (*(int *)(param_1 + 0x6b8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6b0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,param_3,&local_718);
    plVar9 = plStack_710;
    if (plStack_710 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_710 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_710)(plStack_710);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_147711761;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147711761;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147711761;
    lVar7 = *plVar3;
    local_720 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_720);
LAB_147711761:
  if ((local_40 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147711ae0 FUN_147711ae0 body=1199 status=ok
// SIG undefined FUN_147711ae0(void)

undefined8 * FUN_147711ae0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_7f8 [32];
  undefined8 **local_7d8;
  undefined8 local_7c8;
  longlong *plStack_7c0;
  undefined8 *local_7b8;
  undefined1 local_7b0 [8];
  longlong *local_7a8;
  undefined1 local_791;
  wchar_t *local_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined1 local_778 [4];
  undefined1 local_774 [4];
  longlong *local_770 [2];
  undefined1 local_760 [16];
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *local_720;
  undefined8 local_718;
  longlong *plStack_710;
  undefined1 local_2a8 [600];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar5 == '\0')) {
    FUN_14770d6ea(local_2a8);
    FUN_140a570d8(&local_718);
    local_790 = L"OnGenerateWidgetNotAssignedMessage";
    local_788 = 0x22;
    FUN_1446e940c(local_774,&local_790);
    local_790 = L"SListView";
    local_788 = 9;
    FUN_1446e940c(local_778,&local_790);
    FUN_140208bae(local_770,local_778,local_774,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_760,local_770);
    local_750 = 1;
    local_748 = 0;
    uStack_740 = 0;
    uVar8 = FUN_140a54906(&local_718,local_760);
    local_7d8 = (undefined8 **)&local_791;
    FUN_140a54526(&local_790,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x682)
    ;
    FUN_140a52852(&local_790,&local_738,uVar8);
    plVar9 = local_48;
    plVar3 = local_730;
    if (local_730 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
    }
    local_50 = local_738;
    local_48 = local_730;
    if (plVar9 != (longlong *)0x0) {
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_147711d9e:
      local_7c8 = 0;
      plStack_7c0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_147711d9e;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7c8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7c0 = plVar9;
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
    local_7b8 = &local_7c8;
    local_7d8 = &local_7b8;
    FUN_147716000(local_7b0,"STableRow<ItemType>",
                  "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x67f);
    FUN_147715f82(local_7b0,&local_728,local_2a8);
    if (local_7a8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7a8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7a8)(local_7a8);
        LOCK();
        piVar1 = (int *)((longlong)local_7a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7a8 + 0x10))(local_7a8);
        }
      }
    }
    plVar9 = plStack_7c0;
    if (plStack_7c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7c0)(plStack_7c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_730 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_730 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_730)(local_730);
        LOCK();
        piVar1 = (int *)((longlong)local_730 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_730 + 0x10))(local_730);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_784,local_788);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_770[0] != (longlong *)0x0) {
      (**(code **)(*local_770[0] + 0x10))();
    }
    FUN_140a59ae6(&local_718);
    FUN_14770d8a6(local_2a8);
    *param_2 = local_728;
    param_2[1] = local_720;
    if (local_720 == (longlong *)0x0) goto LAB_147711c11;
    LOCK();
    *(int *)(local_720 + 1) = (int)local_720[1] + 1;
    UNLOCK();
    if (local_720 == (longlong *)0x0) goto LAB_147711c11;
    LOCK();
    plVar3 = local_720 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147711c11;
    (**(code **)*local_720)(local_720);
    LOCK();
    piVar1 = (int *)((longlong)local_720 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147711c11;
    lVar7 = *local_720;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_147711b8e:
      local_718 = 0;
      plStack_710 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_147711b8e;
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
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_718 = uVar8;
      plStack_710 = plVar3;
    }
    plVar3 = plStack_710;
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,param_3,&local_718);
    plVar9 = plStack_710;
    if (plStack_710 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_710 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_710)(plStack_710);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_147711c11;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147711c11;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147711c11;
    lVar7 = *plVar3;
    local_720 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_720);
LAB_147711c11:
  if ((local_40 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147711f90 FUN_147711f90 body=387 status=ok
// SIG undefined FUN_147711f90(void)

void FUN_147711f90(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14770610a(param_1,&local_30,param_2);
  if (local_28 != '\x01') goto LAB_14771209f;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_147712009:
    iVar4 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar3 == '\0') goto LAB_147712009;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x398);
    }
    iVar4 = (**(code **)(*plVar5 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar4;
  }
  if (iVar4 != 0) {
    *(undefined8 *)(param_1 + 0x760) = local_30;
    uVar2 = *(undefined4 *)(param_3 + 0xc);
    *(undefined1 *)(param_1 + 0x859) = 1;
    *(undefined8 *)(param_1 + 0x7c8) = local_30;
    *(undefined4 *)(param_1 + 2000) = uVar2;
    FUN_146af42a2(param_1);
    if ((iVar4 == 3) && (uVar1 = *(ushort *)(param_3 + 8), (uVar1 & 0xf) != 0)) {
      if ((uVar1 & 3) == 0) {
        (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x28))(param_1 + 0x4e8,local_30,1,1);
      }
      else {
        if ((uVar1 & 0xc) == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x30))(param_1 + 0x4e8);
        }
        (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x38))(param_1 + 0x4e8,local_30);
      }
      (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x40))(param_1 + 0x4e8,1);
    }
    else {
      local_38 = local_30;
      FUN_147706306(param_1 + 0x710,0);
      FUN_147706374(param_1,&local_38,1,1);
    }
  }
LAB_14771209f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147712132 FUN_147712132 body=32 status=ok
// SIG undefined FUN_147712132(void)

undefined8 FUN_147712132(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SListView");
  return param_2;
}



// FUNCTION 147712164 FUN_147712164 body=242 status=ok
// SIG undefined FUN_147712164(void)

undefined8 FUN_147712164(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  if (uVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(uVar1);
  }
  local_20 = uVar1;
  if ((~DAT_14c950c29 & 1) == 0 && uVar1 != 0) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_14075b868((longlong *)(param_1 + 0x228),uVar2 >> 0x10 ^ uVar2,&local_20);
  if (iVar3 == -1) {
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x228);
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147712258 FUN_147712258 body=91 status=ok
// SIG undefined FUN_147712258(void)

undefined8 FUN_147712258(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x318) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x310);
      }
                    /* WARNING: Could not recover jumptable at 0x0001477122a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,*param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1477122b4 FUN_1477122b4 body=242 status=ok
// SIG undefined FUN_1477122b4(void)

undefined8 FUN_1477122b4(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  if (uVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(uVar1);
  }
  local_20 = uVar1;
  if ((~DAT_14c950c29 & 1) == 0 && uVar1 != 0) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_14075b868((longlong *)(param_1 + 0x288),uVar2 >> 0x10 ^ uVar2,&local_20);
  if (iVar3 == -1) {
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x288);
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477123a8 FUN_1477123a8 body=858 status=ok
// SIG undefined FUN_1477123a8(void)

void FUN_1477123a8(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  longlong local_b0 [10];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = param_2;
  if ((((int)param_1[-0x29] == 0) || ((longlong *)param_1[-0x2a] == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)param_1[-0x2a] + 0x30))(), cVar4 == '\0')) {
    iVar5 = (int)param_1[-0x2b];
  }
  else {
    if ((int)param_1[-0x29] == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_1[-0x2a];
    }
    iVar5 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x2b) = iVar5;
  }
  if (iVar5 == 0) goto LAB_1477125e3;
  if (param_3 == '\0') {
    local_40 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_147489a76(param_1 + 0x45,&local_40);
  }
  else {
    local_b0[0] = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_14075b584(param_1 + 0x45,&local_50,local_b0,0);
  }
  if (param_4 == '\0') {
    if ((((int)param_1[-0x29] == 0) || ((longlong *)param_1[-0x2a] == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[-0x2a] + 0x30))(), cVar4 == '\0')) {
      iVar5 = (int)param_1[-0x2b];
    }
    else {
      if ((int)param_1[-0x29] == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)param_1[-0x2a];
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + -0x2b) = iVar5;
    }
    if (iVar5 == 1) goto LAB_147712472;
    if (((int)param_1[-0x29] != 0) && ((longlong *)param_1[-0x2a] != (longlong *)0x0)) {
      cVar4 = (**(code **)(*(longlong *)param_1[-0x2a] + 0x30))();
      if (cVar4 == '\0') {
        iVar5 = (int)param_1[-0x2b];
      }
      else {
        if ((int)param_1[-0x29] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)param_1[-0x2a];
        }
        iVar5 = (**(code **)(*plVar6 + 0x58))();
        *(int *)(param_1 + -0x2b) = iVar5;
      }
    }
    if (iVar5 == 2) goto LAB_147712472;
  }
  else {
LAB_147712472:
    param_1[0x4f] = local_38;
    param_1[0x50] = local_38;
  }
  FUN_1469ffd58(param_1 + -0x26,0);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_50,&local_38);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50,&local_60);
      uVar3 = *(undefined8 *)(DAT_14c968098 + 200);
      plVar6 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      FUN_14171d2aa(local_c8,1);
      FUN_14171d2aa(local_e0,0);
      local_f0 = local_60;
      local_e8 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_100 = 0;
      local_108 = local_c8;
      FUN_14171f2ba(local_b0,&local_f0,0,local_e0);
      FUN_1428785ec(uVar3,local_b0);
      FUN_1417211dc(local_b0);
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_58 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
LAB_1477125e3:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147712704 FUN_147712704 body=44 status=ok
// SIG undefined FUN_147712704(void)

void FUN_147712704(longlong param_1)

{
  FUN_147706306(param_1 + 0x228,0);
  FUN_1469ffd58(param_1 + -0x130,0);
  return;
}



// FUNCTION 147712730 FUN_147712730 body=544 status=ok
// SIG undefined FUN_147712730(void)

void FUN_147712730(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined1 local_64 [4];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x148) == 0) || (*(longlong **)(param_1 + -0x150) == (longlong *)0x0))
     || (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x150) + 0x30))(), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + -0x158);
  }
  else {
    if (*(int *)(param_1 + -0x148) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + -0x150);
    }
    iVar3 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x158) = iVar3;
  }
  if (iVar3 != 0) {
    if (*(longlong **)(param_1 + 0x3b8) == (longlong *)0x0) {
      local_58 = 0;
      local_50 = 0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x3b8) + 8))();
      lVar5 = (longlong)local_50;
      if (lVar5 != 0) {
        if (*(longlong *)(param_1 + 0x280) == 0) {
          lVar8 = 0;
        }
        else {
          lVar10 = lVar5 * 8;
          lVar8 = 0;
          do {
            if (*(longlong *)(local_58 + lVar8 * 8) == *(longlong *)(param_1 + 0x280))
            goto LAB_147712814;
            lVar8 = lVar8 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
          lVar8 = 0xffffffff;
        }
LAB_147712814:
        lVar5 = lVar5 * 8;
        lVar10 = 0;
        do {
          if (*(longlong *)(local_58 + lVar10 * 8) == param_2) goto LAB_147712834;
          lVar10 = lVar10 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
        lVar10 = 0xffffffff;
LAB_147712834:
        uVar4 = local_50 - 1;
        uVar7 = (uint)lVar8;
        if ((int)uVar4 <= (int)(uint)lVar8) {
          uVar7 = uVar4;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0;
        }
        if ((int)(uint)lVar10 < (int)uVar4) {
          uVar4 = (uint)lVar10;
        }
        uVar9 = 0;
        if (0 < (int)uVar4) {
          uVar9 = uVar4;
        }
        iVar3 = uVar9 - uVar7;
        if (uVar9 != uVar7) {
          bVar1 = (int)uVar7 < (int)uVar4;
          uVar11 = (ulonglong)uVar7;
          lVar5 = 0;
          local_68 = uVar9;
          do {
            local_60 = *(longlong *)(local_58 + uVar11 * 8 + lVar5 * 8);
            if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c();
            }
            FUN_14075b584(param_1 + 0x228,local_64,&local_60,0);
            lVar5 = lVar5 + (ulonglong)bVar1 * 2 + -1;
            uVar7 = local_68;
          } while (iVar3 != (int)lVar5);
        }
        local_60 = *(longlong *)(local_58 + (ulonglong)uVar7 * 8);
        if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c();
        }
        FUN_14075b584(param_1 + 0x228,local_64,&local_60,0);
      }
    }
    FUN_1469ffd58(param_1 + -0x130,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147712952 FUN_147712952 body=353 status=ok
// SIG undefined FUN_147712952(void)

void FUN_147712952(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + -0x148) != 0) && (*(longlong **)(param_1 + -0x150) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x150) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x148) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + -0x150);
      }
      iVar2 = (**(code **)(*plVar4 + 0x58))();
      *(int *)(param_1 + -0x158) = iVar2;
      goto LAB_1477129b4;
    }
  }
  iVar2 = *(int *)(param_1 + -0x158);
LAB_1477129b4:
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x308) != 0)) &&
     (*(longlong **)(param_1 + 0x300) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x230)) {
        local_38 = param_1 + 0x238;
        local_40 = 0x100000000;
        local_30 = 0xffffffff;
        local_28 = 0;
        if (*(int *)(param_1 + 0x250) == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1449c0562(&local_40);
          lVar3 = (longlong)local_30._4_4_;
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x228) + lVar3 * 0x10);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
      }
      else {
        lVar3 = 0;
      }
      if ((*(int *)(param_1 + 0x308) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x300), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,lVar3,param_2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147712c16 FUN_147712c16 body=155 status=ok
// SIG undefined FUN_147712c16(void)

void FUN_147712c16(longlong param_1,longlong param_2,char param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_1c [4];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    local_28 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_147489a76(param_1 + 0x288,&local_28);
  }
  else {
    local_18 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_14075b584(param_1 + 0x288,local_1c,&local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147712cea FUN_147712cea body=46 status=ok
// SIG undefined FUN_147712cea(void)

undefined8 FUN_147712cea(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x328) == 0) ||
     (plVar1 = (longlong *)(param_1 + 800), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 147712d18 FUN_147712d18 body=46 status=ok
// SIG undefined FUN_147712d18(void)

undefined8 FUN_147712d18(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x338) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x330), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0))
  {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 147712d46 FUN_147712d46 body=83 status=ok
// SIG undefined FUN_147712d46(void)

undefined4 FUN_147712d46(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + -0x148) != 0) && (*(longlong **)(param_1 + -0x150) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x150) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x148) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x150);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + -0x158) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + -0x158);
}



// FUNCTION 147712dae FUN_147712dae body=329 status=ok
// SIG undefined FUN_147712dae(void)

longlong * FUN_147712dae(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_14079e7a6(param_2);
  }
  local_40 = param_1 + 0x238;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x228);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      uVar1 = *(undefined8 *)(*local_70 + (longlong)iStack_54 * 0x10);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447f76d2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar1;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147712efa FUN_147712efa body=176 status=ok
// SIG undefined FUN_147712efa(void)

longlong * FUN_147712efa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147713b68(param_1 + 8,&local_38);
  if (local_38 == 0) {
    FUN_147713b68(param_1 + 0xd8,param_2,param_3);
  }
  else {
    *param_2 = local_38;
    param_2[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147712fb4 FUN_147712fb4 body=138 status=ok
// SIG undefined FUN_147712fb4(void)

undefined8 * FUN_147712fb4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x4d8);
  if (plVar3 == (longlong *)0x0) {
LAB_14771302d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14771302d;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + -0x4e0);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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



// FUNCTION 14771303e FUN_14771303e body=448 status=ok
// SIG undefined FUN_14771303e(void)

void FUN_14771303e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a50bc80;
  param_1[0x4d] = &PTR_FUN_14a50bf50;
  param_1[0x9b] = &PTR_FUN_14a50bf70;
  param_1[0x9d] = &PTR_LAB_14a50bf90;
  puVar1 = (undefined8 *)param_1[0x114];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1449db362(param_1 + 0x111);
  FUN_1449db362(param_1 + 0x10e);
  FUN_1449db362(param_1 + 0x108);
  FUN_1449db362(param_1 + 0x105);
  FUN_1449db362(param_1 + 0x103);
  FUN_1449db362(param_1 + 0x101);
  FUN_1449db362(param_1 + 0xff);
  FUN_1449db362(param_1 + 0xfd);
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0xee);
  *(undefined4 *)(param_1 + 0xeb) = 0;
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0xe2);
  FUN_1449db362(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xde);
  FUN_1449db362(param_1 + 0xdc);
  FUN_1449db362(param_1 + 0xda);
  FUN_1449db362(param_1 + 0xd8);
  FUN_1449db362(param_1 + 0xd6);
  FUN_1449db362(param_1 + 0xd4);
  FUN_1449db362(param_1 + 0xd2);
  FUN_1477131fe(param_1 + 0xb8);
  FUN_1477131fe(param_1 + 0x9e);
  param_1[0x9b] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x4e1) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0x9b);
    *(undefined1 *)((longlong)param_1 + 0x4e1) = 0;
  }
  FUN_146af62c8(param_1);
  return;
}



// FUNCTION 1477131fe FUN_1477131fe body=121 status=ok
// SIG undefined FUN_1477131fe(void)

void FUN_1477131fe(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_147713278(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_147713330(param_1 + 8);
  return;
}



// FUNCTION 147713278 FUN_147713278 body=54 status=ok
// SIG undefined FUN_147713278(void)

void FUN_147713278(longlong *param_1)

{
  FUN_1477132ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477132ae FUN_1477132ae body=128 status=ok
// SIG undefined FUN_1477132ae(void)

void FUN_1477132ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147713330 FUN_147713330 body=54 status=ok
// SIG undefined FUN_147713330(void)

void FUN_147713330(longlong *param_1)

{
  FUN_147713366(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147713366 FUN_147713366 body=386 status=ok
// SIG undefined FUN_147713366(void)

void FUN_147713366(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1477134ea FUN_1477134ea body=1661 status=ok
// SIG undefined FUN_1477134ea(void)

undefined1 *
FUN_1477134ea(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong *)param_1[0x114] == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x114] + 8))();
    if ((0 < local_50) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
      lVar10 = *(longlong *)(param_4 + 0x20);
      plVar8 = *(longlong **)(param_4 + 0x30);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = local_58;
        if (lVar10 == DAT_14c964e48) goto LAB_147713592;
LAB_147713643:
        if (lVar10 == DAT_14c964e30) goto LAB_147713654;
LAB_14771372a:
        lVar10 = *(longlong *)(param_4 + 0x20);
        plVar8 = *(longlong **)(param_4 + 0x30);
        if (plVar8 == (longlong *)0x0) {
          if (lVar10 != DAT_14c964e00) {
LAB_1477138b6:
            if (lVar10 != DAT_14c964e18) goto LAB_14771394c;
LAB_1477138c3:
            if (param_1[0xec] == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = -1;
              if ((longlong)local_50 != 0) {
                lVar10 = (longlong)local_50 << 3;
                lVar12 = 0;
                do {
                  if (local_58[lVar12] == param_1[0xec]) {
                    iVar7 = (int)lVar12;
                    break;
                  }
                  lVar12 = lVar12 + 1;
                  lVar10 = lVar10 + -8;
                } while (lVar10 != 0);
              }
            }
            fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
            iVar5 = (**(code **)(*param_1 + 0x268))(param_1);
            iVar5 = (int)fVar14 - (int)fVar14 % iVar5;
            if (local_50 - iVar5 <= iVar7) goto LAB_147713654;
            lVar10 = (longlong)(iVar5 + iVar7);
            goto LAB_147713658;
          }
LAB_14771376f:
          iVar7 = 0;
          if (param_1[0xec] != 0) {
            iVar7 = -1;
            if ((longlong)local_50 != 0) {
              lVar10 = (longlong)local_50 << 3;
              lVar12 = 0;
              do {
                if (local_58[lVar12] == param_1[0xec]) {
                  iVar7 = (int)lVar12;
                  break;
                }
                lVar12 = lVar12 + 1;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
          }
          fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          iVar5 = (**(code **)(*param_1 + 0x268))(param_1);
          iVar11 = (int)fVar14 - (int)fVar14 % iVar5;
          iVar5 = iVar7 - iVar11;
          if (iVar7 < iVar11) {
            iVar5 = 0;
          }
          lVar10 = (longlong)iVar5;
          goto LAB_147713658;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        lVar12 = DAT_14c964e00;
        UNLOCK();
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (lVar10 == lVar12) goto LAB_14771376f;
        lVar10 = *(longlong *)(param_4 + 0x20);
        plVar8 = *(longlong **)(param_4 + 0x30);
        if (plVar8 == (longlong *)0x0) goto LAB_1477138b6;
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        lVar12 = DAT_14c964e18;
        UNLOCK();
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (lVar10 == lVar12) goto LAB_1477138c3;
LAB_14771394c:
        bVar2 = false;
LAB_147713669:
        if ((*(char *)((longlong)param_1 + 0x857) == '\x01') && (param_1[0xec] != 0)) {
          lVar10 = *(longlong *)(param_4 + 0x20);
          plVar8 = *(longlong **)(param_4 + 0x30);
          lVar12 = DAT_14c964de8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            lVar12 = DAT_14c964de8;
            UNLOCK();
            LOCK();
            plVar9 = plVar8 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          if (lVar10 != lVar12) goto LAB_1477136c1;
          local_60 = param_1[0xec];
          if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
            if ((((int)param_1[0x74] == 0) || ((longlong *)param_1[0x73] == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar3 == '\0')) {
              iVar7 = (int)param_1[0x72];
            }
            else {
              if ((int)param_1[0x74] == 0) {
                plVar8 = (longlong *)0x0;
              }
              else {
                plVar8 = (longlong *)param_1[0x73];
              }
              iVar7 = (**(code **)(*plVar8 + 0x58))();
              *(int *)(param_1 + 0x72) = iVar7;
            }
            if (iVar7 == 2) goto LAB_147713a4b;
            plVar8 = param_1 + 0x9d;
            cVar3 = (**(code **)(param_1[0x9d] + 0x10))(plVar8,&local_60);
            if (cVar3 == '\0') {
              (**(code **)(*plVar8 + 0x28))(plVar8,local_60,1,1);
              goto LAB_147713a81;
            }
            bVar2 = false;
          }
          else {
LAB_147713a4b:
            uVar6 = (**(code **)(param_1[0x9d] + 0x10))(param_1 + 0x9d,&local_60);
            (**(code **)(param_1[0x9d] + 0x28))(param_1 + 0x9d,local_60,uVar6 ^ 1,1);
LAB_147713a81:
            (**(code **)(param_1[0x9d] + 0x40))(param_1 + 0x9d,0);
            bVar2 = true;
          }
          param_1[0xed] = param_1[0xec];
          FUN_147713b68(param_1 + 0x9e,&local_70,&local_60);
          if (local_70 == 0) {
            uVar4 = *(undefined4 *)(param_4 + 0xc);
            param_1[0xf9] = local_60;
            *(undefined4 *)(param_1 + 0xfa) = uVar4;
            FUN_146af42a2(param_1);
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_68 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)local_68 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
        }
        else {
LAB_1477136c1:
          if ((*(ushort *)(param_4 + 8) & 0xc) != 0 && (*(ushort *)(param_4 + 8) & 0x33) == 0) {
            lVar10 = *(longlong *)(param_4 + 0x20);
            plVar8 = *(longlong **)(param_4 + 0x30);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            if (lVar10 == DAT_14c966f88) {
              if ((((int)param_1[0x74] != 0) && ((longlong *)param_1[0x73] != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar3 != '\0')) {
                if ((int)param_1[0x74] == 0) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  plVar9 = (longlong *)param_1[0x73];
                }
                uVar4 = (**(code **)(*plVar9 + 0x58))();
                *(undefined4 *)(param_1 + 0x72) = uVar4;
              }
              bVar13 = (int)param_1[0x72] == 3;
            }
            else {
              bVar13 = false;
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar8 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
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
            if (bVar13) {
              plVar8 = param_1 + 0x9d;
              (**(code **)(param_1[0x9d] + 0x30))(plVar8);
              if (0 < local_50) {
                lVar10 = 0;
                do {
                  (**(code **)(*plVar8 + 0x28))(plVar8,local_58[lVar10],1,0);
                  lVar10 = lVar10 + 1;
                } while (lVar10 < local_50);
              }
              (**(code **)(*plVar8 + 0x40))(plVar8);
              goto LAB_1477135b5;
            }
          }
        }
        if (!bVar2) goto LAB_1477135fa;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        lVar12 = DAT_14c964e48;
        UNLOCK();
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        plVar8 = local_58;
        if (lVar10 != lVar12) {
          lVar10 = *(longlong *)(param_4 + 0x20);
          plVar8 = *(longlong **)(param_4 + 0x30);
          if (plVar8 == (longlong *)0x0) goto LAB_147713643;
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          lVar12 = DAT_14c964e30;
          UNLOCK();
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
          if (lVar10 != lVar12) goto LAB_14771372a;
LAB_147713654:
          lVar10 = (longlong)(local_50 + -1);
LAB_147713658:
          plVar8 = local_58 + lVar10;
        }
LAB_147713592:
        if (*plVar8 == 0) {
          bVar2 = true;
          goto LAB_147713669;
        }
        local_70 = *plVar8;
        (**(code **)(*param_1 + 0x2c8))(param_1,&local_70,param_4);
      }
LAB_1477135b5:
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      goto LAB_14771360b;
    }
  }
LAB_1477135fa:
  FUN_146af5694(param_1,param_2,param_3,param_4);
LAB_14771360b:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147713b68 FUN_147713b68 body=189 status=ok
// SIG undefined FUN_147713b68(void)

void FUN_147713b68(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = *param_3;
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x20) == uVar1) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar4 + 8);
            lVar4 = *(longlong *)(lVar4 + 0x10);
            param_2[1] = lVar4;
            if (lVar4 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 147713c26 FUN_147713c26 body=245 status=ok
// SIG undefined FUN_147713c26(void)

undefined8 *
FUN_147713c26(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,byte param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  if ((*(int *)(param_1 + 0x800) != 0) && (*(longlong **)(param_1 + 0x7f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x30))();
    if (cVar1 != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x8a0);
      if (plVar2 == (longlong *)0x0) {
        local_40 = 0;
        local_38 = 0;
      }
      else {
        (**(code **)(*plVar2 + 8))(plVar2,&local_40);
      }
      while( true ) {
        param_4 = param_4 + (param_5 - 1 | 1);
        if (*(int *)(param_1 + 0x800) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x7f8);
        }
        cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,uVar3);
        if (cVar1 != '\0') goto LAB_147713cd4;
        if (((int)param_4 < 0) || (local_38 <= (int)param_4)) break;
        uVar3 = *(undefined8 *)(local_40 + (ulonglong)param_4 * 8);
      }
      *(undefined1 *)(param_2 + 1) = 0;
      goto LAB_147713cdb;
    }
  }
LAB_147713cd4:
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 1) = 1;
LAB_147713cdb:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147713d1c FUN_147713d1c body=140 status=ok
// SIG undefined FUN_147713d1c(void)

undefined8 * FUN_147713d1c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28);
  *param_1 = &PTR_FUN_14a50c080;
  param_1[0xd] = &PTR_FUN_14a50c170;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147713daa FUN_147713daa body=38 status=ok
// SIG undefined FUN_147713daa(void)

undefined8 FUN_147713daa(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147713dd6 FUN_147713dd6 body=896 status=ok
// SIG undefined FUN_147713dd6(void)

longlong * FUN_147713dd6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar10 = *(longlong **)(param_1 + -0x48), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    lVar9 = 0;
    iVar8 = (int)plVar10[1];
    do {
      iVar7 = iVar8;
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_147713e8e;
      }
      LOCK();
      iVar8 = (int)plVar10[1];
      bVar11 = iVar7 == iVar8;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
LAB_147713e8e:
    FUN_146a38fda(param_2,*(int *)(lVar9 + 0x718) - *(int *)(lVar9 + 0x744));
    local_60 = (longlong *)(lVar9 + 0x720);
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(lVar9 + 0x738) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = (longlong *)(lVar9 + 0x710);
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        local_98 = *(undefined8 *)(*local_90 + (longlong)iVar8 * 0x10);
        FUN_147713b68(lVar9 + 0x4f0,&local_68,&local_98);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x58))(local_68,&local_b8);
          plVar1 = local_b0;
          local_a8 = local_b8;
          local_a0 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_b0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_b0)(local_b0);
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
          FUN_146974758(&local_b8,&local_a8);
          plVar1 = local_b0;
          lVar5 = local_b8;
          if (local_b0 == (longlong *)0x0) {
            if (local_b8 != 0) goto LAB_147714033;
          }
          else {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_b0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (lVar5 != 0) {
LAB_147714033:
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_14697b806(param_2,iVar8);
              }
              lVar4 = *param_2;
              *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = lVar5;
              *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = plVar1;
              if (plVar1 == (longlong *)0x0) goto LAB_147714081;
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
            }
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
LAB_147714081:
          plVar1 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_a0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_a0)(local_a0);
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
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
    local_78 = uVar6;
    if (iVar7 != 0) {
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147714158 FUN_147714158 body=213 status=ok
// SIG undefined FUN_147714158(void)

ulonglong FUN_147714158(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar9 = *(longlong **)(param_1 + -0x48), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar8 = 0;
  }
  else {
    lVar7 = 0;
    iVar4 = (int)plVar9[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1477141c1;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
LAB_1477141c1:
    if (((*(int *)(lVar7 + 0x3a0) != 0) && (*(longlong **)(lVar7 + 0x398) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x398) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar7 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar7 + 0x398);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar7 + 0x390) = uVar5;
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(int *)(lVar7 + 0x390) == 3);
    if (iVar3 != 0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 147714232 FUN_147714232 body=147 status=ok
// SIG undefined FUN_147714232(void)

void FUN_147714232(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_14010590e((undefined8 *)(param_1 + 0xc0),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xc0),_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_140c6998c(param_1 + 0xa8,0);
  }
  FUN_1477142c6(param_1);
  return;
}



// FUNCTION 1477142c6 FUN_1477142c6 body=855 status=ok
// SIG undefined FUN_1477142c6(void)

void FUN_1477142c6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < (int)param_1[0x19]) {
    plVar1 = param_1 + 1;
    plVar2 = param_1 + 0xb;
    lVar12 = 0;
    local_b0 = param_1 + 3;
    do {
      uVar6 = *(ulonglong *)(param_1[0x18] + lVar12 * 8);
      if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
        uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        plVar10 = (longlong *)param_1[9];
        if ((longlong *)param_1[9] == (longlong *)0x0) {
          plVar10 = param_1 + 8;
        }
        iVar11 = *(int *)((longlong)plVar10 +
                         (ulonglong)((int)param_1[10] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar11 != -1) {
          do {
            lVar5 = *plVar1 + (longlong)iVar11 * 0x20;
            if (*(ulonglong *)(*plVar1 + (longlong)iVar11 * 0x20) == uVar6) {
              if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
                local_a8 = *(longlong **)(lVar5 + 8);
                local_a0 = *(longlong **)(lVar5 + 0x10);
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                }
                FUN_14771475c(plVar1);
                FUN_147714956(plVar2,local_a8);
                if (*param_1 != 0) {
                  (**(code **)(*local_a8 + 8))();
                  if ((*(int *)(*param_1 + 0x6e8) != 0) &&
                     (plVar10 = *(longlong **)(*param_1 + 0x6e0), plVar10 != (longlong *)0x0)) {
                    (**(code **)(*plVar10 + 0x60))(plVar10,&local_a8);
                  }
                }
                plVar10 = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_a0 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar10 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
                goto LAB_147714339;
              }
              break;
            }
            iVar11 = *(int *)(lVar5 + 0x18);
          } while (iVar11 != -1);
        }
      }
      if (uVar6 == 0) {
        local_a8 = (longlong *)0x0;
        plVar10 = (longlong *)FUN_14771461e(plVar2,&local_a8);
        if (plVar10 != (longlong *)0x0) {
          local_68 = (longlong *)&DAT_100000000;
          local_60 = local_b0;
          local_58 = 0xffffffff;
          local_50 = 0;
          if ((int)param_1[6] != 0) {
            FUN_1449c0562(&local_68);
          }
          local_a0 = local_68;
          local_98 = local_60;
          local_90 = local_58;
          uVar8 = local_90;
          local_88 = local_50;
          local_84 = local_4c;
          local_70 = 0;
          local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          bVar7 = local_90._4_4_ < (int)local_60[3];
          iVar11 = local_90._4_4_;
          local_a8 = plVar1;
          local_90 = uVar8;
          local_80 = plVar1;
          local_78 = plVar1;
          if (bVar7) {
            do {
              if (*(longlong *)(*local_a8 + 8 + (longlong)iVar11 * 0x20) == *plVar10) {
                FUN_1477147f6(local_80);
                local_70 = CONCAT11(local_70._1_1_,1);
                goto LAB_1477145ee;
              }
              local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
              FUN_1449c0562(&local_a0);
              iVar11 = local_90._4_4_;
            } while (local_90._4_4_ < (int)local_98[3]);
            if ((local_70 & 1) != 0) {
LAB_1477145ee:
              if (local_70._1_1_ == '\x01') {
                FUN_147714ada(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
              }
            }
          }
          FUN_147714956(plVar2,*plVar10);
        }
      }
LAB_147714339:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x19]);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) < 0) {
    FUN_14079e7a6(param_1 + 0x18,0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14771461e FUN_14771461e body=317 status=ok
// SIG undefined FUN_14771461e(void)

longlong FUN_14771461e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    lVar4 = 0;
    do {
      iVar3 = iStack_64;
      lVar1 = *local_80;
      lVar2 = *param_2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x18 + 8) == lVar2) {
        lVar4 = (longlong)iStack_64 * 0x18 + *local_80;
        break;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  else {
    lVar4 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14771475c FUN_14771475c body=154 status=ok
// SIG undefined FUN_14771475c(void)

undefined8 FUN_14771475c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1477147f6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477147f6 FUN_1477147f6 body=96 status=ok
// SIG undefined FUN_1477147f6(void)

void FUN_1477147f6(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147714856(param_1,param_2,1);
  return;
}



// FUNCTION 147714856 FUN_147714856 body=117 status=ok
// SIG undefined FUN_147714856(void)

void FUN_147714856(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_1477148cc(param_1,param_2,param_3);
  return;
}



// FUNCTION 1477148cc FUN_1477148cc body=138 status=ok
// SIG undefined FUN_1477148cc(void)

void FUN_1477148cc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147714956 FUN_147714956 body=155 status=ok
// SIG undefined FUN_147714956(void)

undefined8 FUN_147714956(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1477149f2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477149f2 FUN_1477149f2 body=93 status=ok
// SIG undefined FUN_1477149f2(void)

void FUN_1477149f2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147714a50(param_1,param_2,1);
  return;
}



// FUNCTION 147714a50 FUN_147714a50 body=138 status=ok
// SIG undefined FUN_147714a50(void)

void FUN_147714a50(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147714ada FUN_147714ada body=79 status=ok
// SIG undefined FUN_147714ada(void)

undefined8 FUN_147714ada(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_147714b2a(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147714b2a FUN_147714b2a body=477 status=ok
// SIG undefined FUN_147714b2a(void)

void FUN_147714b2a(longlong *param_1)

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



// FUNCTION 147714d08 FUN_147714d08 body=555 status=ok
// SIG undefined FUN_147714d08(void)

void FUN_147714d08(longlong *param_1,ulonglong param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar7 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[9];
    }
    iVar8 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)param_1[10] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar8 != -1) {
      lVar4 = param_1[1];
      do {
        lVar3 = lVar4 + (longlong)iVar8 * 0x20;
        if (*(ulonglong *)(lVar4 + (longlong)iVar8 * 0x20) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) goto LAB_147714e26;
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x18);
      } while (iVar8 != -1);
    }
  }
  local_48 = &local_50;
  local_40 = param_3;
  FUN_147714f34(param_1 + 1,&local_58,&local_48,0);
  local_58 = local_50;
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_60 = *param_3;
  local_48 = &local_60;
  local_40 = &local_58;
  FUN_147715262(param_1 + 0xb,local_34,&local_48,0);
  (*(code *)**(undefined8 **)*param_3)();
  if ((*(int *)(*param_1 + 0x698) != 0) &&
     (plVar7 = *(longlong **)(*param_1 + 0x690), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,local_50,param_3);
  }
LAB_147714e26:
  local_48 = &local_50;
  FUN_147715728(param_1 + 0x18);
  uVar5 = local_50;
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  iVar8 = (int)param_1[0x16];
  *(uint *)(param_1 + 0x16) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar8 + 1U) {
    FUN_140845902(param_1 + 0x15,iVar8);
  }
  *(ulonglong *)(param_1[0x15] + (longlong)iVar8 * 8) = uVar5;
  if ((uVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(uVar5);
  }
  plVar7 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147714f34 FUN_147714f34 body=361 status=ok
// SIG undefined FUN_147714f34(void)

undefined4 *
FUN_147714f34(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14771509e(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  uVar2 = puVar1[1];
  local_40[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = param_4;
  cVar3 = FUN_147715184(param_1,uVar4,local_40);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147714b2a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771509e FUN_14771509e body=229 status=ok
// SIG undefined FUN_14771509e(void)

int * FUN_14771509e(longlong *param_1,int *param_2)

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



// FUNCTION 147715184 FUN_147715184 body=221 status=ok
// SIG undefined FUN_147715184(void)

void FUN_147715184(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_1477148cc(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_1477151fa;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_1477151fa:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 147715262 FUN_147715262 body=366 status=ok
// SIG undefined FUN_147715262(void)

undefined4 *
FUN_147715262(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477153d2(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  uVar2 = *puVar1;
  local_40[1] = uVar2;
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = param_4;
  cVar3 = FUN_1477154b8(param_1,uVar4,local_40);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14771554c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477153d2 FUN_1477153d2 body=230 status=ok
// SIG undefined FUN_1477153d2(void)

int * FUN_1477153d2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1477154b8 FUN_1477154b8 body=148 status=ok
// SIG undefined FUN_1477154b8(void)

void FUN_1477154b8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147714a50((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_147715522;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_147715522:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14771554c FUN_14771554c body=474 status=ok
// SIG undefined FUN_14771554c(void)

void FUN_14771554c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147715728 FUN_147715728 body=209 status=ok
// SIG undefined FUN_147715728(void)

int FUN_147715728(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 1477157fa FUN_1477157fa body=553 status=ok
// SIG undefined FUN_1477157fa(void)

undefined8 * FUN_1477157fa(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_147715a26(param_2,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_14075bc1a(param_2);
    }
  }
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      local_90 = *(ulonglong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if ((DAT_14c950c29 == 1) && (local_90 != 0)) {
        FUN_1456cec3c(local_90);
      }
      uVar1 = local_90;
      if (((DAT_14c950c29 & 1) != 0) && (local_90 != 0)) {
        FUN_1456cec3c(local_90);
      }
      uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      iVar2 = FUN_14075b868(param_3,uVar3 >> 0x10 ^ uVar3,&local_90);
      if (iVar2 == -1) {
        FUN_1468f9566(param_2,&local_60,(longlong)iStack_6c * 0x10 + *local_88,0);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147715a26 FUN_147715a26 body=428 status=ok
// SIG undefined FUN_147715a26(void)

void FUN_147715a26(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147715bd4 FUN_147715bd4 body=788 status=ok
// SIG undefined FUN_147715bd4(void)

undefined4
FUN_147715bd4(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_c8 [40];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147713b68(param_1 + 0x9e,&local_60,param_2);
  if (local_60 != (longlong *)0x0) goto LAB_147715c9a;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_70,*param_2);
  plVar1 = local_58;
  plVar2 = local_68;
  local_60 = local_70;
  if (local_68 == (longlong *)0x0) {
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
LAB_147715ea9:
      local_60 = local_70;
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000147715e98:
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 == local_58) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar2;
        goto joined_r0x000147715e98;
      }
    }
    else {
      bVar6 = local_58 != (longlong *)0x0;
      local_58 = local_68;
      if (bVar6) goto LAB_147715ea9;
    }
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_147715c9a:
  (**(code **)(*local_60 + 0x10))(local_60,param_3);
  local_80 = local_60;
  local_78 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FUN_147714d08(param_1 + 0x9e,*param_2,&local_80);
  (**(code **)(*local_60 + 0x58))(local_60,&local_70);
  *(byte *)(local_70 + 6) = *(byte *)(local_70 + 6) | 0x80;
  FUN_1405d299c(local_70,param_5);
  if (param_3 < param_4) {
    local_90 = local_60;
    local_88 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af67c8(param_1,&local_90);
  }
  else {
    local_90 = local_60;
    local_88 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af6a2a(param_1,&local_90);
  }
  plVar1 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(byte *)((longlong)local_70 + 0x39) & 0x19) == 0) {
    local_9c = (float)DAT_14c8463f8;
    local_a0 = (float)DAT_14c8463f0;
  }
  else {
    FUN_144b013c4(local_70,&local_a0);
  }
  local_98 = local_a0;
  local_94 = local_9c;
  FUN_146af3580(&local_90,*(undefined4 *)((longlong)param_1 + 0x3ec));
  uVar5 = local_90._4_4_;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147715eea FUN_147715eea body=152 status=ok
// SIG undefined FUN_147715eea(void)

void FUN_147715eea(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_14010590e((undefined8 *)(param_1 + 0xc0),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xc0),_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_140c6998c(param_1 + 0xa8,0);
    return;
  }
  return;
}



// FUNCTION 147715f82 FUN_147715f82 body=125 status=ok
// SIG undefined FUN_147715f82(void)

longlong * FUN_147715f82(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_14771624a(param_1[2],*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147716000 FUN_147716000 body=373 status=ok
// SIG undefined FUN_147716000(void)

longlong *
FUN_147716000(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a50c190;
  plVar1 = plVar4 + 2;
  FUN_147708f12(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_14771619e(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147716105;
    param_1[1] = 0;
LAB_1477160c8:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147716105;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_147716105;
      goto LAB_1477160c8;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147716105;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_147716105:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 0x380;
  FUN_140a52e78(*param_1 + 8,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147716176 FUN_147716176 body=9 status=ok
// SIG undefined FUN_147716176(void)

void FUN_147716176(longlong param_1)

{
  FUN_14770c654(param_1 + 0x10);
  return;
}



// FUNCTION 147716180 FUN_147716180 body=29 status=ok
// SIG undefined FUN_147716180(void)

undefined8 FUN_147716180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14771619e FUN_14771619e body=171 status=ok
// SIG undefined FUN_14771619e(void)

void FUN_14771619e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_14771621d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_14771621d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14771621d:
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
                    /* WARNING: Could not recover jumptable at 0x00014771623d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14771624a FUN_14771624a body=182 status=ok
// SIG undefined FUN_14771624a(void)

void FUN_14771624a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(longlong *)*param_1;
  local_28 = (longlong *)((longlong *)*param_1)[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_14770d946(param_2,param_3,&local_30);
  (**(code **)(*param_2 + 0x80))
            (param_2,*(undefined4 *)(local_30 + 0x270),param_3 + 0x228,param_3 + 600);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147716302 FUN_147716302 body=344 status=ok
// SIG undefined FUN_147716302(void)

void FUN_147716302(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  iVar2 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,*param_2,*(undefined4 *)(param_2 + 1),0);
  plVar1 = param_4 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_4[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar2 = (int)param_4[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_4;
  if ((iStack_44 != iVar2) || (local_50 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x88))(param_1,*local_80 + (longlong)iStack_64 * 0x18 + 8,0,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_4 || (local_70 != plVar1 || iStack_64 != iVar2));
  }
  FUN_140a2c062(param_1,param_3,0,0);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771645c FUN_14771645c body=167 status=ok
// SIG undefined FUN_14771645c(void)

void FUN_14771645c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1477164d7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1477164d7;
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
LAB_1477164d7:
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
                    /* WARNING: Could not recover jumptable at 0x0001477164f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147716504 FUN_147716504 body=2300 status=ok
// SIG undefined FUN_147716504(void)

void FUN_147716504(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_5c8 [32];
  undefined1 *local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  longlong local_590;
  undefined8 local_588;
  undefined1 local_580;
  undefined2 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  longlong *local_550;
  undefined8 uStack_548;
  undefined1 local_539;
  undefined8 local_538;
  longlong *plStack_530;
  undefined8 uStack_528;
  longlong *local_520 [2];
  undefined1 local_510 [16];
  undefined1 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  longlong *plStack_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  longlong *local_4a0;
  undefined8 uStack_498;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  FUN_147717182((longlong *)(param_1 + 0x6a0),param_2 + 0x1b0);
  FUN_147717182(param_1 + 0x6b0,param_2 + 0x1c0);
  FUN_147717206(param_1 + 0x690,param_2 + 0x1d0);
  FUN_146a3ba92(param_1 + 0x6e0,param_2 + 0x1e0);
  FUN_14771728a(param_1 + 0x6f0,param_2 + 0x200);
  FUN_14009d848(param_1 + 0x700,param_2 + 0x210);
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_1477165b6:
    local_4c8 = 0;
    plStack_4c0 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_1477165b6;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar11 = iVar7 == iVar4;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar11 = false;
    local_4c8 = uVar8;
    plStack_4c0 = plVar9;
  }
  plVar9 = plStack_4c0;
  FUN_147716eda(param_2,local_4b0,&local_4c8);
  FUN_147716e02(param_1,local_4b0);
  if (!bVar11) {
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
  FUN_146a3c65e(param_1 + 0x370,param_2 + 0x270);
  FUN_14009d848(param_1 + 0x380,param_2 + 0x280);
  FUN_146229de2(param_1 + 0x808,param_2 + 0x290);
  FUN_146229de2(param_1 + 0x818,param_2 + 0x2a0);
  FUN_147708582(param_1 + 0x7e8,param_2 + 0x2b0);
  FUN_1469b6af2(param_1 + 0x7f8,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x2d0);
  FUN_146a3c86e(param_1 + 0x398,param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x854) = *(undefined1 *)(param_2 + 0x2f8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x341);
  *(undefined1 *)(param_1 + 0x4c9) = *(undefined1 *)(param_2 + 0x351);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x855) = *(undefined1 *)(param_2 + 0x36c);
  *(undefined1 *)(param_1 + 0x856) = *(undefined1 *)(param_2 + 0x36d);
  *(undefined1 *)(param_1 + 0x857) = *(undefined1 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 0x838) = *(undefined2 *)(param_2 + 0x370);
  FUN_14096c7c0(param_1 + 0x840,param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x858) = *(undefined1 *)(param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x315);
  if ((undefined8 *)(param_2 + 0x318) != (undefined8 *)(param_1 + 0x2c8)) {
    if (*(char *)(param_2 + 800) == '\x01') {
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x318);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2d0) != '\x01') goto LAB_147716766;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x2d0) = uVar6;
  }
LAB_147716766:
  *(undefined1 *)(param_1 + 0x7e0) = *(undefined1 *)(param_2 + 0x314);
  if (*(longlong **)(param_2 + 0x390) != (longlong *)0x0 && *(int *)(param_2 + 0x398) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x390) + 0x30))();
    if (cVar5 != '\0') {
      local_4a8 = (longlong *)0x0;
      local_4a0 = (longlong *)((ulonglong)local_4a0 & 0xffffffff00000000);
      FUN_147717de0(&local_4a8,param_2 + 0x390);
      goto LAB_147716832;
    }
  }
  local_4a8 = (longlong *)0x0;
  local_4a0._0_4_ = 0;
  FUN_1446efa72(&local_4a8,0,2,0x10);
  local_4a0 = (longlong *)CONCAT44(local_4a0._4_4_,2);
  *local_4a8 = (longlong)&PTR_LAB_14a50c8c0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_4a8[2] = lVar10;
  *local_4a8 = (longlong)&PTR_FUN_14a50c850;
  local_4a8[3] = (longlong)FUN_147717e64;
LAB_147716832:
  FUN_147717de0(param_1 + 0x6c0,&local_4a8);
  FUN_1449db362(&local_4a8);
  FUN_14009d848(param_1 + 0x6d0,param_2 + 0x3a0);
  FUN_14603678a(param_1 + 0x828,param_2 + 0x3b0);
  FUN_14771708c(param_1,*(undefined8 *)(param_2 + 0x1a8));
  *(undefined1 *)(param_1 + 0x86c) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x870,param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x884) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x888,param_2 + 0x260);
  uVar8 = *(undefined8 *)(param_2 + 0x364);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x35c);
  *(undefined8 *)(param_1 + 0x2b0) = uVar8;
  local_4d8 = 0;
  uStack_4d0 = 0;
  if (((*(int *)(param_1 + 0x6a8) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x6a0), plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar9 + 0x30))(), cVar5 == '\0')) {
    FUN_1400020e8(&local_4d8,L"Please specify an OnGenerateRow. \n",0x22);
  }
  if (*(longlong *)(param_1 + 0x8a0) == 0) {
    FUN_1400020e8(&local_4d8,L"Please specify a ListItemsSource. \n",0x23);
  }
  if ((int)uStack_4d0 - 2U < 0x7fffffff) {
    *(undefined1 **)(param_1 + 0x228) = &DAT_200000002;
    FUN_140a570d8(&local_4a8);
    FUN_140009b9a(local_520,&local_4d8);
    FUN_14023423e(local_510,local_520);
    local_500 = 1;
    local_4f8 = 0;
    uStack_4f0 = 0;
    uVar8 = FUN_140a54906(&local_4a8,local_510);
    local_5a8 = &local_539;
    FUN_140a54526(&local_538,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x122)
    ;
    FUN_140a52852(&local_538,&local_4e8,uVar8);
    local_558 = local_4e8;
    local_550 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_558);
    plVar9 = local_550;
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_550 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_4e0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)local_4e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4e0 + 0x10))(local_4e0);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_520[0] != (longlong *)0x0) {
      (**(code **)(*local_520[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4a8);
  }
  else {
    local_580 = *(undefined1 *)(param_2 + 0x350);
    local_588 = *(undefined8 *)(param_2 + 0x348);
    local_590 = param_2 + 0x1f0;
    local_598 = *(undefined4 *)(param_2 + 0x310);
    local_5a0 = param_2 + 0x300;
    local_5a8 = (undefined1 *)(param_2 + 0x2e8);
    local_4a8 = (longlong *)CONCAT62(local_4a8._2_6_,0x103);
    local_4a0 = (longlong *)0x0;
    uStack_498 = 0;
    local_538 = CONCAT35((int3)((ulonglong)local_538 >> 0x28),0x100000000);
    plStack_530 = (longlong *)0x0;
    uStack_528 = 0;
    local_558 = CONCAT35(local_558._5_3_,0x100000000);
    local_550 = (longlong *)0x0;
    uStack_548 = 0;
    FUN_1429092be(param_1,&local_558,&local_538,&local_4a8);
    FUN_1449db362(&local_550);
    FUN_1449db362(&plStack_530);
    FUN_1449db362(&local_4a0);
    if (*(longlong *)(param_1 + 0x298) != 0) {
      FUN_146a92d5a(*(longlong *)(param_1 + 0x298),*(undefined1 *)(param_2 + 0x340));
      lVar3 = *(longlong *)(param_1 + 0x298);
      local_570 = *(undefined2 *)(param_2 + 0x328);
      local_568 = 0;
      local_560 = 0;
      FUN_140fe25fc(&local_568,param_2 + 0x330);
      *(undefined1 *)(lVar3 + 0x2a0) = (undefined1)local_570;
      *(undefined1 *)(lVar3 + 0x2a1) = local_570._1_1_;
      FUN_140fe25fc(lVar3 + 0x2a8,&local_568);
      FUN_1449db362(&local_568);
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_147716cea:
      local_538 = 0;
      plStack_530 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_147716cea;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar7 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_538 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_530 = plVar9;
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
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_1477180fa(plVar9,&local_538);
    local_4a8 = plVar9 + 2;
    local_4a0 = plVar9;
    FUN_147717104(param_1,&local_4a8);
    plVar9 = local_4a0;
    if (local_4a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4a0)(local_4a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
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
  if (local_4d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147716e02 FUN_147716e02 body=215 status=ok
// SIG undefined FUN_147716e02(void)

void FUN_147716e02(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x31) & 4) == 0) {
    param_1 = param_1 + 0x114;
    if (param_1 != param_2) {
      puVar2 = (undefined8 *)*param_1;
      *param_1 = *param_2;
      *param_2 = 0;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    (**(code **)(param_1[0x9d] + 0x30))(param_1 + 0x9d);
    *(undefined4 *)(param_1 + 0xfa) = 0;
    *(undefined1 *)((longlong)param_1 + 0x859) = 0;
    param_1[0xf9] = 0;
    FUN_146af6b36(param_1);
    plVar1 = param_1 + 0x114;
    if (plVar1 != param_2) {
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = *param_2;
      *param_2 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    (**(code **)(*param_1 + 0x248))(param_1);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147716ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1);
  return;
}



// FUNCTION 147716eda FUN_147716eda body=432 status=ok
// SIG undefined FUN_147716eda(void)

undefined8 * FUN_147716eda(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x228);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x230);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x238);
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_14001cc68(0x30,0x10);
          local_38 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_14001cc68(0x30,0x10);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = plVar4;
        }
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_1477178de(uVar6,&local_50,&local_40);
        *param_2 = uVar6;
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
    else {
      uVar6 = FUN_14001cc68(0x28,0x10);
      local_40 = *param_3;
      local_38 = (longlong *)param_3[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_147717348(uVar6,&local_40,lVar3);
      *param_2 = uVar6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = &PTR_FUN_14a50c6a0;
    puVar5[1] = lVar3;
    *param_2 = puVar5;
  }
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771708c FUN_14771708c body=119 status=ok
// SIG undefined FUN_14771708c(void)

void FUN_14771708c(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x860) = param_2;
  if (param_2 == 0) {
    local_38 = FUN_141319416();
  }
  else {
    local_38 = param_2 + 0x10;
  }
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_146af67b6(param_1,&local_38);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717104 FUN_147717104 body=125 status=ok
// SIG undefined FUN_147717104(void)

void FUN_147717104(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14287bbd4(param_1,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717182 FUN_147717182 body=130 status=ok
// SIG undefined FUN_147717182(void)

void FUN_147717182(longlong *param_1,longlong *param_2)

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



// FUNCTION 147717206 FUN_147717206 body=130 status=ok
// SIG undefined FUN_147717206(void)

void FUN_147717206(longlong *param_1,longlong *param_2)

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



// FUNCTION 14771728a FUN_14771728a body=130 status=ok
// SIG undefined FUN_14771728a(void)

void FUN_14771728a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14771730e FUN_14771730e body=29 status=ok
// SIG undefined FUN_14771730e(void)

undefined8 FUN_14771730e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147717348 FUN_147717348 body=182 status=ok
// SIG undefined FUN_147717348(void)

undefined8 * FUN_147717348(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a50c6c0;
  param_1[1] = param_3;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  FUN_147717400(param_3 + 0x10,&local_28,param_1,FUN_1477174e6);
  param_1[4] = local_28;
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717400 FUN_147717400 body=228 status=ok
// SIG undefined FUN_147717400(void)

undefined8
FUN_147717400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a50c750;
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
  *local_40 = &PTR_FUN_14a50c6e0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_147717588(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477174e6 FUN_1477174e6 body=91 status=ok
// SIG undefined FUN_1477174e6(void)

void FUN_1477174e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x000147717536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147717542 FUN_147717542 body=38 status=ok
// SIG undefined FUN_147717542(void)

undefined8 FUN_147717542(undefined8 param_1,int param_2)

{
  FUN_147717894();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147717588 FUN_147717588 body=230 status=ok
// SIG undefined FUN_147717588(void)

undefined8 * FUN_147717588(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717670 FUN_147717670 body=29 status=ok
// SIG undefined FUN_147717670(void)

undefined8 FUN_147717670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477176b6 FUN_1477176b6 body=93 status=ok
// SIG undefined FUN_1477176b6(void)

void FUN_1477176b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50c750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147717714 FUN_147717714 body=93 status=ok
// SIG undefined FUN_147717714(void)

void FUN_147717714(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50c750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147717772 FUN_147717772 body=126 status=ok
// SIG undefined FUN_147717772(void)

void FUN_147717772(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50c750;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50c6e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477177e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477177f0 FUN_1477177f0 body=79 status=ok
// SIG undefined FUN_1477177f0(void)

void FUN_1477177f0(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717840 FUN_147717840 body=81 status=ok
// SIG undefined FUN_147717840(void)

undefined8 FUN_147717840(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717894 FUN_147717894 body=74 status=ok
// SIG undefined FUN_147717894(void)

void FUN_147717894(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50c6c0;
  if (param_1[4] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477178d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1477178de FUN_1477178de body=247 status=ok
// SIG undefined FUN_1477178de(void)

undefined8 * FUN_1477178de(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a50c7c0;
  param_1[1] = *param_3;
  lVar3 = param_3[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  FUN_1477179d6(*param_3 + 0x10,&local_30,param_1,FUN_147717abc);
  param_1[5] = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477179d6 FUN_1477179d6 body=228 status=ok
// SIG undefined FUN_1477179d6(void)

undefined8
FUN_1477179d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a50c750;
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
  *local_40 = &PTR_FUN_14a50c7e0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_147717588(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717abc FUN_147717abc body=91 status=ok
// SIG undefined FUN_147717abc(void)

void FUN_147717abc(longlong param_1)

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
    do {
      if (iVar5 == 0) {
        return;
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
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x000147717b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147717b18 FUN_147717b18 body=38 status=ok
// SIG undefined FUN_147717b18(void)

undefined8 FUN_147717b18(undefined8 param_1,int param_2)

{
  FUN_147717d70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147717b5a FUN_147717b5a body=29 status=ok
// SIG undefined FUN_147717b5a(void)

undefined8 FUN_147717b5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147717b94 FUN_147717b94 body=93 status=ok
// SIG undefined FUN_147717b94(void)

void FUN_147717b94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50c750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147717bf2 FUN_147717bf2 body=93 status=ok
// SIG undefined FUN_147717bf2(void)

void FUN_147717bf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50c750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147717c50 FUN_147717c50 body=126 status=ok
// SIG undefined FUN_147717c50(void)

void FUN_147717c50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50c750;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50c7e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147717cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147717cce FUN_147717cce body=79 status=ok
// SIG undefined FUN_147717cce(void)

void FUN_147717cce(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717d1e FUN_147717d1e body=81 status=ok
// SIG undefined FUN_147717d1e(void)

undefined8 FUN_147717d1e(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717d70 FUN_147717d70 body=112 status=ok
// SIG undefined FUN_147717d70(void)

void FUN_147717d70(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a50c7c0;
  if (param_1[5] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000147717dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147717de0 FUN_147717de0 body=130 status=ok
// SIG undefined FUN_147717de0(void)

void FUN_147717de0(longlong *param_1,longlong *param_2)

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



// FUNCTION 147717e64 FUN_147717e64 body=172 status=ok
// SIG undefined FUN_147717e64(void)

undefined8 FUN_147717e64(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e2b65a);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_28 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,L"0x%08llx [%s]",param_2,puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147717f12 FUN_147717f12 body=29 status=ok
// SIG undefined FUN_147717f12(void)

undefined8 FUN_147717f12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147717f52 FUN_147717f52 body=93 status=ok
// SIG undefined FUN_147717f52(void)

void FUN_147717f52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50c8c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147717fb0 FUN_147717fb0 body=93 status=ok
// SIG undefined FUN_147717fb0(void)

void FUN_147717fb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50c8c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50c850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14771800e FUN_14771800e body=126 status=ok
// SIG undefined FUN_14771800e(void)

void FUN_14771800e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a50c8c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50c850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014771807d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14771808c FUN_14771808c body=29 status=ok
// SIG undefined FUN_14771808c(void)

undefined8 FUN_14771808c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 1477180aa FUN_1477180aa body=77 status=ok
// SIG undefined FUN_1477180aa(void)

undefined8 FUN_1477180aa(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477180fa FUN_1477180fa body=150 status=ok
// SIG undefined FUN_1477180fa(void)

undefined8 * FUN_1477180fa(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a50c950;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2 + 0x4e8;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = &PTR_FUN_14a50c970;
    param_1[3] = lVar4;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = &PTR_FUN_14a50c970;
    param_1[3] = lVar4;
    param_1[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
  return param_1;
}



// FUNCTION 1477181b2 FUN_1477181b2 body=29 status=ok
// SIG undefined FUN_1477181b2(void)

undefined8 FUN_1477181b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477181d0 FUN_1477181d0 body=64 status=ok
// SIG undefined FUN_1477181d0(void)

undefined8 * FUN_1477181d0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50c970;
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



// FUNCTION 147718210 FUN_147718210 body=45 status=ok
// SIG undefined FUN_147718210(void)

bool FUN_147718210(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = (longlong *)FUN_1477183b4();
  bVar2 = true;
  if (*plVar1 != *param_2) {
    plVar1 = (longlong *)FUN_146a3cf3e();
    bVar2 = *plVar1 == *param_2;
  }
  return bVar2;
}



// FUNCTION 14771823e FUN_14771823e body=373 status=ok
// SIG undefined FUN_14771823e(void)

longlong * FUN_14771823e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_14771838a;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
      if ((longlong)local_48 != 0) {
        lVar9 = (longlong)local_48 << 3;
        lVar10 = local_50;
        do {
          (**(code **)(*plVar4 + 0xd8))(plVar4,&local_60,lVar10);
          if (local_60 != 0) {
            iVar8 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              FUN_146a3d014(param_2,iVar8);
            }
            lVar5 = *param_2;
            *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = local_60;
            *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
          }
          plVar6 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          lVar10 = lVar10 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (local_50 != 0) {
        FUN_1400020a8(local_50);
      }
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14771838a:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477183b4 FUN_1477183b4 body=109 status=ok
// SIG undefined FUN_1477183b4(void)

undefined * FUN_1477183b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7728) {
    FUN_144b3d300(&DAT_14cab7728);
    if (DAT_14cab7728 == -1) {
      FUN_1446f470e(&DAT_14cab7720,L"TTableViewMetadata",1);
      _Init_thread_footer(&DAT_14cab7728);
    }
  }
  return &DAT_14cab7720;
}



// FUNCTION 147718422 FUN_147718422 body=386 status=ok
// SIG undefined FUN_147718422(void)

longlong * FUN_147718422(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_147718533:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14a509db0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_147718533;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14a509db0;
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



// FUNCTION 1477185a4 FUN_1477185a4 body=64 status=ok
// SIG undefined FUN_1477185a4(void)

undefined8 * FUN_1477185a4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a509db0;
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



// FUNCTION 1477185e8 FUN_1477185e8 body=81 status=ok
// SIG undefined FUN_1477185e8(void)

undefined8 FUN_1477185e8(longlong param_1)

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



// FUNCTION 147718640 FUN_147718640 body=89 status=ok
// SIG undefined FUN_147718640(void)

bool FUN_147718640(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14771868b;
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
LAB_14771868b:
  return lVar6 == param_2;
}



// FUNCTION 1477186b6 FUN_1477186b6 body=118 status=ok
// SIG undefined FUN_1477186b6(void)

void FUN_1477186b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a509db0;
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



// FUNCTION 14771872c FUN_14771872c body=118 status=ok
// SIG undefined FUN_14771872c(void)

void FUN_14771872c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a509db0;
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



// FUNCTION 1477187a2 FUN_1477187a2 body=156 status=ok
// SIG undefined FUN_1477187a2(void)

void FUN_1477187a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a509db0;
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
                    /* WARNING: Could not recover jumptable at 0x00014771882e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14771883e FUN_14771883e body=104 status=ok
// SIG undefined FUN_14771883e(void)

void FUN_14771883e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014771888b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014771889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1477188a6 FUN_1477188a6 body=101 status=ok
// SIG undefined FUN_1477188a6(void)

ulonglong FUN_1477188a6(longlong param_1)

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
LAB_147718900:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147718900;
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



// FUNCTION 14771890c FUN_14771890c body=324 status=ok
// SIG undefined FUN_14771890c(void)

longlong * FUN_14771890c(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x460,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a509e20;
  plVar4 = plVar3 + 2;
  FUN_147718a52(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147719c80(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1477189e3;
    param_1[1] = 0;
LAB_1477189ad:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1477189e3;
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
      if (plVar4 == (longlong *)0x0) goto LAB_1477189e3;
      goto LAB_1477189ad;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477189e3;
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
LAB_1477189e3:
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
  local_38 = 0x450;
  FUN_140a52e78(*param_1,"SComboBox<FName>",".\\Runtime/UMG/Private/Components/ComboBoxKey.cpp",0x40
               );
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147718a52 FUN_147718a52 body=203 status=ok
// SIG undefined FUN_147718a52(void)

undefined8 * FUN_147718a52(undefined8 *param_1)

{
  FUN_146a6d0b8();
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *param_1 = &PTR_FUN_14a509e40;
  param_1[0x3c] = &PTR_LAB_14a50a0a0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 147718b1e FUN_147718b1e body=9 status=ok
// SIG undefined FUN_147718b1e(void)

void FUN_147718b1e(longlong param_1)

{
  FUN_1477192fa(param_1 + 0x10);
  return;
}



// FUNCTION 147718b28 FUN_147718b28 body=29 status=ok
// SIG undefined FUN_147718b28(void)

undefined8 FUN_147718b28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147718b46 FUN_147718b46 body=38 status=ok
// SIG undefined FUN_147718b46(void)

undefined8 FUN_147718b46(undefined8 param_1,int param_2)

{
  FUN_1477192fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147718b6c FUN_147718b6c body=1037 status=ok
// SIG undefined FUN_147718b6c(void)

undefined1 *
FUN_147718b6c(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = (**(code **)(*param_1 + 0x1a8))();
  if (cVar4 == '\0') {
LAB_147718e7c:
    FUN_14171f816(param_1,param_2,param_3,param_4);
LAB_147718e8d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  cVar4 = (**(code **)(*DAT_14c98e618 + 0xb0))(DAT_14c98e618,param_4);
  cVar5 = (**(code **)(*DAT_14c98e618 + 0xa0))();
  if ((char)param_1[0x87] == '\x01') {
    if (cVar4 == '\0') {
      if (*(char *)((longlong)param_1 + 0x439) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x439) = 0;
        (**(code **)(*(longlong *)(param_1[0x7f] + 0x4d8) + 0xd0))(param_1[0x7f] + 0x4d8);
        if (0 < local_50) {
          FUN_1477193c8(param_1,*local_58,3);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        local_60 = param_1[2];
        if (local_60 == 0) {
LAB_147718e20:
          local_68 = 0;
          local_60 = 0;
        }
        else {
          iVar6 = *(int *)(local_60 + 8);
          do {
            if (iVar6 == 0) goto LAB_147718e20;
            LOCK();
            iVar8 = *(int *)(local_60 + 8);
            bVar11 = iVar6 == iVar8;
            if (bVar11) {
              *(int *)(local_60 + 8) = iVar6 + 1;
              iVar8 = iVar6;
            }
            iVar6 = iVar8;
            UNLOCK();
          } while (!bVar11);
          local_68 = param_1[1];
        }
        FUN_140592b68(param_2,&local_68,2,0);
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_147718c77;
      }
      *(undefined1 *)((longlong)param_1 + 0x439) = 1;
      FUN_1469a9da8(DAT_14c98e618,param_1 + 0x72,0);
      if (((int)param_1[0x84] != 0) && ((longlong *)param_1[0x83] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x83] + 0x60))();
      }
      FUN_146a62c5e(param_1,param_2);
      goto LAB_147718e8d;
    }
    if (cVar4 == '\x01') {
LAB_147718e61:
      cVar4 = *(char *)((longlong)param_1 + 0x439);
      FUN_14771944e(param_1);
    }
    else {
      lVar10 = *(longlong *)(param_4 + 0x20);
      plVar3 = *(longlong **)(param_4 + 0x30);
      lVar7 = DAT_14c966f40;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        lVar7 = DAT_14c966f40;
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
      if (lVar10 == lVar7) goto LAB_147718e61;
      cVar4 = *(char *)((longlong)param_1 + 0x439);
    }
    if (cVar4 != '\x01') goto LAB_147718e7c;
  }
  else if (cVar5 == '\x03') {
    lVar10 = param_1[0x7e];
    if (lVar10 != 0) {
      plVar3 = *(longlong **)(param_1[0x7f] + 0x888);
      if (plVar3 == (longlong *)0x0) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
LAB_147718f0b:
        iVar6 = -1;
        iVar8 = 0;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,&local_58);
        iVar6 = -1;
        if ((longlong)local_50 == 0) goto LAB_147718f0b;
        lVar9 = (longlong)local_50 << 3;
        lVar7 = 0;
        do {
          iVar8 = local_50;
          if (local_58[lVar7] == lVar10) {
            iVar6 = (int)lVar7;
            break;
          }
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (iVar6 < iVar8 + -1) {
        lVar10 = local_58[(longlong)iVar6 + 1];
LAB_147718f1f:
        if (lVar10 == 0) {
          FUN_14772b540();
        }
        else {
          FUN_1477194fa(param_1[0x7f],lVar10,3);
        }
      }
    }
  }
  else {
    if (cVar5 != '\x02') {
      FUN_146a63056(param_1,param_2,param_3,param_4);
      goto LAB_147718e8d;
    }
    lVar10 = param_1[0x7e];
    if ((lVar10 != 0) && (plVar3 = *(longlong **)(param_1[0x7f] + 0x888), plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 8))(plVar3,&local_58);
      if ((longlong)local_50 != 0) {
        lVar9 = (longlong)local_50 << 3;
        lVar7 = 0;
        do {
          if (local_58[lVar7] == lVar10) {
            if (0 < (int)(uint)lVar7) {
              lVar10 = local_58[(ulonglong)((uint)lVar7 & 0x7fffffff) - 1];
              goto LAB_147718f1f;
            }
            break;
          }
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_147718c77:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147718f7a FUN_147718f7a body=461 status=ok
// SIG undefined FUN_147718f7a(void)

longlong * FUN_147718f7a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_147718fb8:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147718fb8;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_147719902(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_1477190f4;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_1477190f4;
LAB_147719057:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_1477190f4;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_147719057;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
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
LAB_1477190f4:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147719156 FUN_147719156 body=203 status=ok
// SIG undefined FUN_147719156(void)

undefined8 FUN_147719156(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7698) {
    FUN_144b3d300(&DAT_14cab7698);
    if (DAT_14cab7698 == -1) {
      FUN_140056680(&DAT_14cab7688,L"Combo Box");
      atexit((_func_5014 *)&LAB_14333278a);
      _Init_thread_footer(&DAT_14cab7698);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cab7688);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147719222 FUN_147719222 body=215 status=ok
// SIG undefined FUN_147719222(void)

undefined8 FUN_147719222(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_146a62c32();
  if (cVar1 == '\0') {
    FUN_1469a9da8(DAT_14c98e618,param_1 + 0x390,0);
    if ((*(int *)(param_1 + 0x420) != 0) && (*(longlong **)(param_1 + 0x418) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x418) + 0x60))();
    }
  }
  else {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x4d8) + 0xd0))
              (*(longlong *)(param_1 + 0x3f8) + 0x4d8,&local_30);
    if (0 < local_28) {
      FUN_1477193c8(param_1,*local_30,3);
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146a62c5e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477192fa FUN_1477192fa body=206 status=ok
// SIG undefined FUN_1477192fa(void)

void FUN_1477192fa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a509e40;
  param_1[0x3c] = &PTR_LAB_14a50a0a0;
  plVar3 = (longlong *)param_1[0x89];
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
  FUN_1449db362(param_1 + 0x85);
  FUN_1449db362(param_1 + 0x83);
  plVar3 = (longlong *)param_1[0x82];
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
  plVar3 = (longlong *)param_1[0x80];
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
  FUN_1449db362(param_1 + 0x7c);
  FUN_146a3ee4c(param_1);
  return;
}



// FUNCTION 1477193c8 FUN_1477193c8 body=134 status=ok
// SIG undefined FUN_1477193c8(void)

void FUN_1477193c8(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  
  if (param_3 == 1) {
    return;
  }
  if (param_1[0x7e] != param_2) {
    FUN_1469a9da8(DAT_14c98e618,param_1 + 0x75,0);
    param_1[0x7e] = param_2;
    if (((int)param_1[0x7d] != 0) && (plVar1 = (longlong *)param_1[0x7c], plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147719408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,0,1,0);
  return;
}



// FUNCTION 14771944e FUN_14771944e body=170 status=ok
// SIG undefined FUN_14771944e(void)

void FUN_14771944e(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x439) = 0;
    lVar1 = *(longlong *)(param_1 + 0x3f0);
    if (lVar1 != 0) {
      FUN_1477194fa(*(undefined8 *)(param_1 + 0x3f8),lVar1,1);
      lVar2 = *(longlong *)(param_1 + 0x3f8);
      *(longlong *)(lVar2 + 0x7b8) = lVar1;
      *(undefined4 *)(lVar2 + 0x7c0) = 0;
      FUN_146af42a2();
    }
    local_20 = &local_30;
    local_28 = &LAB_14771981c;
    local_30 = param_1;
    FUN_1469a9e54(DAT_14c98e618,&local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477194fa FUN_1477194fa body=127 status=ok
// SIG undefined FUN_1477194fa(void)

void FUN_1477194fa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [8];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  FUN_14771957a(param_1,local_28);
  if (local_28[0] != -1) {
    FUN_1408d9e0e(param_1 + 0x700,0);
    FUN_147719776(param_1,local_30,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771957a FUN_14771957a body=507 status=ok
// SIG undefined FUN_14771957a(void)

longlong * FUN_14771957a(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_3;
  if (((*(int *)(param_1 + 0x7e8) != 0) && (*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x7e8) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x7e0);
    }
    cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar3);
    if (cVar1 == '\0') {
      if (*(longlong **)(param_1 + 0x888) == (longlong *)0x0) {
        local_60 = 0;
        local_58 = 0;
        uVar6 = 0xffffffff;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x888) + 8))();
        uVar6 = 0xffffffff;
        if ((longlong)local_58 != 0) {
          lVar2 = (longlong)local_58 << 3;
          lVar5 = 0;
          do {
            if (*(longlong *)(local_60 + lVar5 * 8) == lVar3) {
              uVar6 = (uint)lVar5;
              break;
            }
            lVar5 = lVar5 + 1;
            lVar2 = lVar2 + -8;
          } while (lVar2 != 0);
        }
      }
      iVar7 = 1;
      if (*(int *)(param_1 + 0x708) - *(int *)(param_1 + 0x734) == 1) {
        local_48 = param_1 + 0x710;
        local_50 = 0x100000000;
        local_40 = 0xffffffff;
        local_38 = 0;
        if (*(int *)(param_1 + 0x728) == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1449c0562(&local_50);
          lVar3 = (longlong)local_40._4_4_;
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x700) + lVar3 * 0x10);
        if (lVar3 != 0) {
          iVar7 = -1;
          if ((longlong)local_58 != 0) {
            lVar2 = (longlong)local_58 << 3;
            lVar5 = 0;
            do {
              if (*(longlong *)(local_60 + lVar5 * 8) == lVar3) {
                iVar7 = (int)lVar5;
                break;
              }
              lVar5 = lVar5 + 1;
              lVar2 = lVar2 + -8;
            } while (lVar2 != 0);
          }
          iVar7 = (uint)(iVar7 < (int)uVar6) * 2 + -1;
        }
      }
      do {
        uVar6 = uVar6 + iVar7;
        if (((int)uVar6 < 0) || (local_58 <= (int)uVar6)) {
          *param_2 = 0xffffffff;
          goto LAB_1477195df;
        }
        if (*(int *)(param_1 + 0x7e8) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x7e0);
        }
        lVar3 = *(longlong *)(local_60 + (ulonglong)uVar6 * 8);
        cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar3);
      } while (cVar1 == '\0');
    }
  }
  *param_2 = lVar3;
LAB_1477195df:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147719776 FUN_147719776 body=165 status=ok
// SIG undefined FUN_147719776(void)

void FUN_147719776(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_1477197cb;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_1477197cb:
  if (iVar2 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x28))(param_1 + 0x4d8,*param_2,1,param_3 != 3);
                    /* WARNING: Could not recover jumptable at 0x000147719809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,param_3);
    return;
  }
  return;
}



// FUNCTION 147719822 FUN_147719822 body=222 status=ok
// SIG undefined FUN_147719822(void)

void FUN_147719822(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  local_18 = *(longlong **)(lVar3 + 0x10);
  if (local_18 == (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    iVar7 = (int)local_18[1];
    local_20 = 0;
    do {
      if (iVar7 == 0) {
        local_18 = (longlong *)0x0;
        goto LAB_14771986a;
      }
      LOCK();
      iVar5 = (int)local_18[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(local_18 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    local_20 = *(undefined8 *)(lVar3 + 8);
  }
LAB_14771986a:
  local_30 = *(undefined8 *)(lVar3 + 0x3f8);
  local_28 = *(longlong *)(lVar3 + 0x400);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_1469b70dc(param_2,&local_30);
  if (cVar6 != '\0') {
    FUN_1410a3cc2(param_2,&local_20,2);
  }
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147719902 FUN_147719902 body=143 status=ok
// SIG undefined FUN_147719902(void)

undefined8 * FUN_147719902(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,3);
  *param_1 = &PTR_FUN_14a50a0c0;
  param_1[0xd] = &PTR_LAB_14a50a1b0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147719992 FUN_147719992 body=38 status=ok
// SIG undefined FUN_147719992(void)

undefined8 FUN_147719992(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477199be FUN_1477199be body=622 status=ok
// SIG undefined FUN_1477199be(void)

undefined8 * FUN_1477199be(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong *local_70 [2];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar9 = 0;
    iVar5 = (int)plVar8[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_147719a3f;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar4 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + -0x50);
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
LAB_147719a3f:
    bVar10 = true;
    if (*(longlong *)(lVar9 + 0x3f0) != 0) {
      local_40 = *(longlong *)(lVar9 + 0x3f0);
      (**(code **)(*(longlong *)(*(longlong *)(lVar9 + 0x3f8) + 0x4d8) + 0xd8))
                (*(longlong *)(lVar9 + 0x3f8) + 0x4d8,&local_50);
      if (local_50 == (longlong *)0x0) {
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
      }
      else {
        (**(code **)(*local_50 + 0x58))(local_50,&local_60);
        FUN_14697f6be(local_60,local_70,0);
        puVar6 = (undefined8 *)FUN_1447a1f4a(local_70);
        *param_2 = 0;
        iVar5 = *(int *)(puVar6 + 1);
        pvVar3 = (void *)*puVar6;
        *(int *)(param_2 + 1) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar5,0);
          memcpy((void *)*param_2,pvVar3,(longlong)iVar5 * 2);
        }
        if (local_70[0] != (longlong *)0x0) {
          (**(code **)(*local_70[0] + 0x10))();
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
        bVar10 = false;
      }
    }
    if (iVar4 != 0) {
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
    if (!bVar10) goto LAB_147719bb7;
  }
  uVar7 = FUN_140e82300();
  puVar6 = (undefined8 *)FUN_1447a1f4a(uVar7);
  *param_2 = 0;
  iVar5 = *(int *)(puVar6 + 1);
  pvVar3 = (void *)*puVar6;
  *(int *)(param_2 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar5,0);
    memcpy((void *)*param_2,pvVar3,(longlong)iVar5 * 2);
  }
LAB_147719bb7:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147719c2e FUN_147719c2e body=81 status=ok
// SIG undefined FUN_147719c2e(void)

undefined8 FUN_147719c2e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x28))(param_1,local_28);
  FUN_146918c70(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147719c80 FUN_147719c80 body=167 status=ok
// SIG undefined FUN_147719c80(void)

void FUN_147719c80(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147719cfb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147719cfb;
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
LAB_147719cfb:
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
                    /* WARNING: Could not recover jumptable at 0x000147719d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147719d28 FUN_147719d28 body=29 status=ok
// SIG undefined FUN_147719d28(void)

undefined8 FUN_147719d28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147719d60 FUN_147719d60 body=29 status=ok
// SIG undefined FUN_147719d60(void)

bool FUN_147719d60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147719d7e FUN_147719d7e body=26 status=ok
// SIG undefined FUN_147719d7e(void)

bool FUN_147719d7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147719d98 FUN_147719d98 body=24 status=ok
// SIG undefined FUN_147719d98(void)

bool FUN_147719d98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147719dbc FUN_147719dbc body=101 status=ok
// SIG undefined FUN_147719dbc(void)

void FUN_147719dbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147719e22 FUN_147719e22 body=101 status=ok
// SIG undefined FUN_147719e22(void)

void FUN_147719e22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147719e88 FUN_147719e88 body=134 status=ok
// SIG undefined FUN_147719e88(void)

void FUN_147719e88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50a260;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50a1f0;
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
                    /* WARNING: Could not recover jumptable at 0x000147719eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147719f0e FUN_147719f0e body=52 status=ok
// SIG undefined FUN_147719f0e(void)

undefined8 FUN_147719f0e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return param_2;
}



// FUNCTION 147719f42 FUN_147719f42 body=206 status=ok
// SIG undefined FUN_147719f42(void)

bool FUN_147719f42(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_48,param_2);
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
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771a014 FUN_14771a014 body=29 status=ok
// SIG undefined FUN_14771a014(void)

undefined8 FUN_14771a014(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14771a04c FUN_14771a04c body=29 status=ok
// SIG undefined FUN_14771a04c(void)

bool FUN_14771a04c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14771a06a FUN_14771a06a body=26 status=ok
// SIG undefined FUN_14771a06a(void)

bool FUN_14771a06a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14771a084 FUN_14771a084 body=24 status=ok
// SIG undefined FUN_14771a084(void)

bool FUN_14771a084(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14771a0a8 FUN_14771a0a8 body=101 status=ok
// SIG undefined FUN_14771a0a8(void)

void FUN_14771a0a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a2d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14771a10e FUN_14771a10e body=101 status=ok
// SIG undefined FUN_14771a10e(void)

void FUN_14771a10e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a2d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14771a174 FUN_14771a174 body=134 status=ok
// SIG undefined FUN_14771a174(void)

void FUN_14771a174(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50a340;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50a2d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014771a1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14771a1fa FUN_14771a1fa body=52 status=ok
// SIG undefined FUN_14771a1fa(void)

void FUN_14771a1fa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014771a22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14771a22e FUN_14771a22e body=167 status=ok
// SIG undefined FUN_14771a22e(void)

bool FUN_14771a22e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771a2d8 FUN_14771a2d8 body=29 status=ok
// SIG undefined FUN_14771a2d8(void)

undefined8 FUN_14771a2d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14771a310 FUN_14771a310 body=29 status=ok
// SIG undefined FUN_14771a310(void)

bool FUN_14771a310(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14771a32e FUN_14771a32e body=26 status=ok
// SIG undefined FUN_14771a32e(void)

bool FUN_14771a32e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14771a348 FUN_14771a348 body=24 status=ok
// SIG undefined FUN_14771a348(void)

bool FUN_14771a348(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14771a360 FUN_14771a360 body=101 status=ok
// SIG undefined FUN_14771a360(void)

void FUN_14771a360(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a3b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14771a3c6 FUN_14771a3c6 body=101 status=ok
// SIG undefined FUN_14771a3c6(void)

void FUN_14771a3c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a3b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14771a42c FUN_14771a42c body=134 status=ok
// SIG undefined FUN_14771a42c(void)

void FUN_14771a42c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50a3b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014771a4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14771a4b2 FUN_14771a4b2 body=39 status=ok
// SIG undefined FUN_14771a4b2(void)

void FUN_14771a4b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014771a4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14771a4da FUN_14771a4da body=146 status=ok
// SIG undefined FUN_14771a4da(void)

bool FUN_14771a4da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771a56e FUN_14771a56e body=3275 status=ok
// SIG undefined FUN_14771a56e(void)

void FUN_14771a56e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong *plVar9;
  code *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStack_948 [32];
  undefined1 *local_928;
  longlong *local_920;
  undefined8 *local_918;
  longlong local_910;
  undefined8 local_908;
  longlong local_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined1 uStack_8e4;
  undefined8 local_8e0;
  undefined4 local_8d8;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 local_8b8;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined4 local_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  uint local_888;
  undefined1 local_884;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined1 local_870 [16];
  undefined1 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined1 local_848 [8];
  longlong *local_840;
  undefined1 local_831;
  code *local_830;
  undefined8 local_828;
  undefined1 local_811;
  code *local_810;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined8 local_7f8;
  longlong local_7f0;
  undefined4 local_7e8;
  undefined1 local_7e4;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  longlong *local_7a8;
  undefined4 local_7a0;
  undefined1 local_79c;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  longlong *local_780;
  undefined8 local_778;
  undefined1 local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  longlong local_5d0;
  longlong local_5c8;
  code *local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong *local_5a8;
  undefined1 local_590 [32];
  undefined1 local_570;
  undefined1 local_56f;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined1 local_554;
  undefined1 local_550 [56];
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 local_508;
  undefined1 local_500 [48];
  undefined1 local_4d0;
  char local_4cf;
  undefined1 local_4ce;
  undefined1 local_4c8 [32];
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined1 local_4a0 [112];
  undefined8 local_430;
  undefined1 local_3c8 [192];
  wchar_t *local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [64];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_948;
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x1c8);
  lVar15 = *(longlong *)(param_2 + 0x1b8);
  *(longlong *)(param_1 + 0x3c8) = lVar15;
  uVar5 = *(undefined4 *)(lVar15 + 0x594);
  uVar6 = *(undefined4 *)(lVar15 + 0x598);
  uVar7 = *(undefined4 *)(lVar15 + 0x59c);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(lVar15 + 0x590);
  *(undefined4 *)(param_1 + 0x3d4) = uVar5;
  *(undefined4 *)(param_1 + 0x3d8) = uVar6;
  *(undefined4 *)(param_1 + 0x3dc) = uVar7;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  local_910 = lVar15 + 0x20;
  if (*(longlong *)(param_2 + 0x1c0) != 0) {
    local_910 = *(longlong *)(param_2 + 0x1c0);
  }
  plVar14 = (longlong *)(lVar15 + 0x550);
  if (*(char *)(param_2 + 0x2b0) != '\0') {
    plVar14 = (longlong *)(param_2 + 0x298);
  }
  lVar11 = *plVar14;
  lVar13 = lVar15;
  if (DAT_14c950c29 == 1) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *plVar14;
      lVar13 = *(longlong *)(param_1 + 0x3c8);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x390) = lVar11;
  *(longlong *)(param_1 + 0x398) = plVar14[1];
  *(longlong *)(param_1 + 0x3a0) = plVar14[2];
  plVar14 = (longlong *)(lVar13 + 0x568);
  if (*(char *)(param_2 + 0x2d0) != '\0') {
    plVar14 = (longlong *)(param_2 + 0x2b8);
  }
  lVar11 = *plVar14;
  if ((bVar8 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *plVar14;
    }
  }
  *(longlong *)(param_1 + 0x3a8) = lVar11;
  *(longlong *)(param_1 + 0x3b0) = plVar14[1];
  *(longlong *)(param_1 + 0x3b8) = plVar14[2];
  FUN_14009d848(param_1 + 0x418,param_2 + 0x268);
  FUN_14771be34(param_1 + 0x3e0,param_2 + 0x248);
  FUN_14771beb8(param_1 + 0x428,param_2 + 600);
  *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_2 + 0x2d9);
  *(undefined1 *)(param_1 + 0x439) = 0;
  uVar12 = *(undefined8 *)(param_2 + 0x278);
  lVar11 = *(longlong *)(param_2 + 0x280);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x408) = uVar12;
  *(longlong *)(param_1 + 0x410) = lVar11;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_140a53a96(&local_308);
  local_7a0 = *(undefined4 *)(param_2 + 0x294);
  local_79c = 1;
  local_798 = 0;
  uStack_790 = 0;
  local_a4 = 1;
  local_a8 = local_7a0;
  FUN_144a450dc(local_a0,&local_798);
  FUN_1449db362(&local_798);
  FUN_14771b23a(&local_778);
  local_7d0 = *(undefined8 *)(param_2 + 0x228);
  local_7c8 = *(undefined8 *)(param_2 + 0x230);
  local_7c0 = *(undefined8 *)(param_2 + 0x238);
  local_7b8 = *(longlong *)(param_2 + 0x240);
  if (local_7b8 != 0) {
    LOCK();
    *(int *)(local_7b8 + 8) = *(int *)(local_7b8 + 8) + 1;
    UNLOCK();
  }
  FUN_14771b4b4(&local_778,&local_7d0);
  local_830 = FUN_14771b598;
  local_828._0_4_ = 0;
  FUN_14771bf3c(&local_810,param_1,&local_830);
  FUN_144a450dc(&local_5c8,&local_810);
  FUN_1449db362(&local_810);
  local_830 = FUN_1477193c8;
  local_828._0_4_ = 0;
  FUN_147721f98(&local_810,param_1,&local_830);
  FUN_144a450dc(local_4c8,&local_810);
  FUN_1449db362(&local_810);
  local_830 = FUN_14771ba56;
  local_828 = (longlong *)((ulonglong)local_828._4_4_ << 0x20);
  FUN_147722482(&local_810,param_1,&local_830);
  FUN_144a450dc(local_3c8,&local_810);
  FUN_1449db362(&local_810);
  local_7e8 = 1;
  local_7e4 = 1;
  local_7e0 = 0;
  uStack_7d8 = 0;
  local_4a8 = 1;
  local_4a4 = 1;
  FUN_144a450dc(local_4a0,&local_7e0);
  FUN_1449db362(&local_7e0);
  local_430 = *(undefined8 *)(param_2 + 0x1d0);
  local_7f8 = *(undefined8 *)(param_2 + 0x278);
  local_7f0 = *(longlong *)(param_2 + 0x280);
  if (local_7f0 != 0) {
    LOCK();
    *(int *)(local_7f0 + 8) = *(int *)(local_7f0 + 8) + 1;
    UNLOCK();
  }
  FUN_14771bb9c(&local_778,&local_7f8);
  FUN_1477229b8(&local_810,&local_811);
  lVar11 = CONCAT44(uStack_804,local_808);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x400);
  *(code **)(param_1 + 0x3f8) = local_810;
  *(longlong *)(param_1 + 0x400) = lVar11;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_14771bc22(&local_810,&local_7b0,&local_778);
  plVar4 = local_128;
  plVar14 = local_7a8;
  if (local_7a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7a8 + 1) = (int)local_7a8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_7a8 + 1) = (int)local_7a8[1] + 1;
    UNLOCK();
  }
  local_130 = local_7b0;
  local_128 = local_7a8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar4 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  local_928 = &local_831;
  FUN_140a53d66(&local_830,&DAT_149efe19f,"Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xd7);
  FUN_140a50bf4(&local_830,&local_788,&local_308);
  plVar4 = local_780;
  if (local_780 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x440) = local_788;
    local_920 = (longlong *)(param_1 + 0x448);
    plVar17 = *(longlong **)(param_1 + 0x448);
    if (plVar17 == (longlong *)0x0) goto LAB_14771aaa8;
    *local_920 = 0;
LAB_14771b200:
    local_920 = (longlong *)(param_1 + 0x448);
    LOCK();
    plVar4 = plVar17 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14771aaa8;
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_780 + 1) = (int)local_780[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x440) = local_788;
    local_920 = (longlong *)(param_1 + 0x448);
    plVar17 = *(longlong **)(param_1 + 0x448);
    if (local_780 != plVar17) {
      *local_920 = (longlong)local_780;
      if (plVar17 == (longlong *)0x0) goto LAB_14771aaa8;
      goto LAB_14771b200;
    }
    LOCK();
    plVar17 = local_780 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 != 0) goto LAB_14771aaa8;
    (**(code **)*local_780)(local_780);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar17 = plVar4;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
LAB_14771aaa8:
  puVar16 = (undefined8 *)(param_1 + 0x440);
  if (local_780 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_780 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_780)(local_780);
      LOCK();
      piVar1 = (int *)((longlong)local_780 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_780 + 0x10))(local_780);
      }
    }
  }
  plVar4 = local_828;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_828 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_828)(local_828);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_7a8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_7a8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_7a8)(local_7a8);
      LOCK();
      piVar1 = (int *)((longlong)local_7a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_7a8 + 0x10))(local_7a8);
      }
    }
  }
  plVar14 = (longlong *)CONCAT44(uStack_804,local_808);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_14771bc96(&local_778);
  FUN_140a5660c(&local_308);
  local_830 = *(code **)(param_2 + 0x1a8);
  local_828 = *(longlong **)(param_2 + 0x1b0);
  pcVar10 = local_830;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
    pcVar10 = *(code **)(param_2 + 0x1a8);
  }
  lVar15 = lVar15 + 0x10;
  if (pcVar10 == DAT_14c98dec8) {
    local_918 = puVar16;
    FUN_140a570d8(&local_778);
    local_308 = L"ContentWarning";
    local_300 = 0xe;
    FUN_1446e940c(&local_788,&local_308);
    local_308 = L"SComboBox";
    local_300 = 9;
    FUN_1446e940c(&local_7b0,&local_308);
    FUN_140208bae(&local_810,&local_7b0,&local_788,L"No Content Provided");
    FUN_14023423e(local_870,&local_810);
    local_860 = 1;
    local_858 = 0;
    uStack_850 = 0;
    lVar11 = FUN_140a54906(&local_778,local_870);
    local_898 = 0x3f800000;
    uStack_894 = 0;
    uStack_890 = 0;
    uStack_88c = 0x3f800000;
    local_888 = local_888 & 0xffffff00;
    local_884 = 1;
    local_880 = 0;
    uStack_878 = 0;
    *(uint *)(lVar11 + 0x280) = local_888;
    *(undefined4 *)(lVar11 + 0x270) = 0x3f800000;
    *(undefined4 *)(lVar11 + 0x274) = 0;
    *(undefined4 *)(lVar11 + 0x278) = 0;
    *(undefined4 *)(lVar11 + 0x27c) = 0x3f800000;
    *(undefined1 *)(lVar11 + 0x284) = 1;
    FUN_144a450dc(lVar11 + 0x288,&local_880);
    FUN_1449db362(&local_880);
    local_928 = &local_811;
    FUN_140a54526(&local_308,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xe9);
    uVar12 = FUN_146abbae8(&local_308,&local_830);
    FUN_140a52852(uVar12,local_848,lVar11);
    if (local_840 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_840 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_840)(local_840);
        LOCK();
        piVar1 = (int *)((longlong)local_840 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_840 + 0x10))(local_840);
        }
      }
    }
    plVar14 = (longlong *)CONCAT44(uStack_2fc,local_300);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar14 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    puVar16 = local_918;
    if (local_810 != (code *)0x0) {
      (**(code **)(*(longlong *)local_810 + 0x10))();
    }
    FUN_140a59ae6(&local_778);
  }
  FUN_146a0f1de(&local_778);
  plVar4 = local_5b8;
  plVar14 = local_828;
  local_5c8 = local_910;
  if (*(char *)(param_2 + 0x291) == '\x01') {
    local_4d0 = *(undefined1 *)(param_2 + 0x290);
    local_4cf = '\x01';
  }
  else if (local_4cf == '\x01') {
    local_4cf = '\0';
  }
  if (local_828 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
  }
  local_5c0 = local_830;
  local_5b8 = local_828;
  local_5d0 = lVar15;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar4 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  plVar17 = local_5a8;
  local_5b0 = *puVar16;
  plVar4 = (longlong *)*local_920;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar9 = plVar4;
  if (local_5a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar16 = (undefined8 *)*local_5a8;
      local_5a8 = plVar4;
      (*(code *)*puVar16)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = local_5a8;
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar9 = local_5a8;
      }
    }
  }
  local_5a8 = plVar9;
  local_56f = *(undefined1 *)(param_2 + 0x2d8);
  local_8c8 = *(undefined4 *)(param_2 + 0x1d8);
  uStack_8c4 = *(undefined4 *)(param_2 + 0x1dc);
  uStack_8c0 = *(undefined4 *)(param_2 + 0x1e0);
  uStack_8bc = *(undefined4 *)(param_2 + 0x1e4);
  local_8b8 = *(undefined1 *)(param_2 + 0x1e8);
  local_8b0 = 0;
  local_8a8 = 0;
  FUN_140a58be0(&local_8b0,param_2 + 0x1f0);
  local_508 = local_8b8;
  local_518 = local_8c8;
  uStack_514 = uStack_8c4;
  uStack_510 = uStack_8c0;
  uStack_50c = uStack_8bc;
  FUN_144a450dc(local_500,&local_8b0);
  FUN_1449db362(&local_8b0);
  uStack_8e8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20d) >> 0x18);
  uStack_8e4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x20d) >> 0x38);
  local_8f8 = *(undefined4 *)(param_2 + 0x200);
  uStack_8f4 = *(undefined4 *)(param_2 + 0x204);
  uStack_8f0 = *(undefined4 *)(param_2 + 0x208);
  uStack_8ec = *(undefined4 *)(param_2 + 0x20c);
  local_8e0 = 0;
  local_8d8 = 0;
  FUN_140a5aaa0(&local_8e0,param_2 + 0x218);
  local_558 = uStack_8e8;
  local_568 = local_8f8;
  uStack_564 = uStack_8f4;
  uStack_560 = uStack_8f0;
  uStack_55c = uStack_8ec;
  local_554 = uStack_8e4;
  FUN_144a450dc(local_550,&local_8e0);
  FUN_1449db362(&local_8e0);
  local_810 = FUN_14771944e;
  local_808 = 0;
  FUN_14772b056(&local_308,param_1);
  FUN_144a450dc(local_590,&local_308);
  FUN_1449db362(&local_308);
  local_570 = *(undefined1 *)(param_2 + 0x2da);
  local_4ce = *(undefined1 *)(param_2 + 0x2db);
  FUN_146a616ac(param_1,&local_778);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar4 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar17 = plVar4 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_146a0f6a8(&local_778);
  local_908 = *(undefined8 *)(param_1 + 0x3f8);
  local_900 = *(longlong *)(param_1 + 0x400);
  if (local_900 != 0) {
    LOCK();
    *(int *)(local_900 + 0xc) = *(int *)(local_900 + 0xc) + 1;
    UNLOCK();
  }
  FUN_146abbb6e(param_1,&local_908);
  lVar15 = *(longlong *)(param_2 + 0x288);
  *(longlong *)(param_1 + 0x3f0) = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x4d8) + 0x28))
              (*(longlong *)(param_1 + 0x3f8) + 0x4d8,lVar15,1,0);
    lVar11 = *(longlong *)(param_1 + 0x3f8);
    *(longlong *)(lVar11 + 0x7b8) = lVar15;
    *(undefined4 *)(lVar11 + 0x7c0) = 0;
    FUN_146af42a2();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x3f8);
  local_778 = FUN_141319416();
  local_770 = 1;
  local_768 = 0;
  uStack_760 = 0;
  FUN_146af67b6(uVar12,&local_778);
  FUN_1449db362(&local_768);
  plVar14 = local_828;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_828 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_828)(local_828);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_948) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771b23a FUN_14771b23a body=633 status=ok
// SIG undefined FUN_14771b23a(void)

longlong FUN_14771b23a(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"ListView",1);
  uVar4 = 0;
  uVar3 = FUN_1458178ee(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 3;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined1 *)(param_1 + 0x315) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0x19;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_38,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar3;
  *(undefined2 *)(param_1 + 0x350) = 0;
  lVar2 = DAT_14c96b2f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar1 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar1 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(lVar2 + uVar4 * 4);
  *(undefined4 *)(param_1 + 0x358) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x36c) = 0x101;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x101;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771b4b4 FUN_14771b4b4 body=228 status=ok
// SIG undefined FUN_14771b4b4(void)

longlong FUN_14771b4b4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x220) = *param_2;
  *(undefined8 *)(param_1 + 0x228) = param_2[1];
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = uVar4;
  *(longlong *)(param_1 + 0x238) = lVar5;
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
  plVar3 = (longlong *)param_2[3];
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
  return param_1;
}



// FUNCTION 14771b598 FUN_14771b598 body=1212 status=ok
// SIG undefined FUN_14771b598(void)

undefined8 *
FUN_14771b598(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_788 [32];
  undefined1 *local_768;
  undefined8 local_758;
  undefined8 local_750;
  longlong *local_748;
  undefined1 local_731;
  wchar_t *local_730;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined1 local_718 [4];
  undefined1 local_714 [4];
  longlong *local_710 [2];
  undefined1 local_700 [16];
  undefined1 local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  longlong *local_6d0;
  undefined8 local_6c8;
  longlong *local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined1 local_690 [424];
  undefined8 local_4e8;
  undefined8 local_4e0;
  longlong *local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 local_4c0;
  undefined1 local_4b8 [664];
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if ((*(int *)(param_1 + 0x430) != 0) && (*(longlong **)(param_1 + 0x428) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x30))();
    if (cVar6 != '\0') {
      FUN_14771c492(local_690);
      local_4e8 = *(undefined8 *)(param_1 + 0x3c0);
      uVar7 = *(undefined8 *)(param_1 + 0x3d0);
      uVar4 = *(undefined8 *)(param_1 + 0x3d8);
      local_6a8 = 1;
      local_6a0 = 0;
      uStack_698 = 0;
      local_4c0 = 1;
      local_6b8._0_4_ = (undefined4)uVar7;
      local_6b8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_6b0._0_4_ = (undefined4)uVar4;
      uStack_6b0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_4d0 = (undefined4)local_6b8;
      uStack_4cc = local_6b8._4_4_;
      uStack_4c8 = (undefined4)uStack_6b0;
      uStack_4c4 = uStack_6b0._4_4_;
      local_6b8 = uVar7;
      uStack_6b0 = uVar4;
      FUN_144a450dc(local_4b8,&local_6a0);
      FUN_1449db362();
      if (*(int *)(param_1 + 0x430) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x428);
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,&local_750,param_3);
      plVar8 = local_4d8;
      if (local_748 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_748 + 1) = (int)local_748[1] + 1;
        UNLOCK();
      }
      local_4e0 = local_750;
      local_4d8 = local_748;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_6c8 = param_4;
      FUN_14771c628(local_220,0x22d);
      FUN_14771c55c(local_220,&local_730,local_690);
      *param_2 = local_730;
      lVar5 = CONCAT44(uStack_724,local_728);
      param_2[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        plVar8 = (longlong *)CONCAT44(uStack_724,local_728);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_218 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar3 = (int *)((longlong)local_218 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_218 + 0x10))(local_218);
          }
        }
      }
      if (local_748 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_748 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_748)(local_748);
          LOCK();
          piVar3 = (int *)((longlong)local_748 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_748 + 0x10))(local_748);
          }
        }
      }
      puVar9 = local_690;
      goto LAB_14771b8ec;
    }
  }
  FUN_14771c492(local_220);
  FUN_140a570d8(local_690);
  local_730 = L"ComboBoxMissingOnGenerateWidgetMethod";
  local_728 = 0x25;
  FUN_1446e940c(local_714,&local_730);
  local_730 = L"SlateCore";
  local_728 = 9;
  FUN_1446e940c(local_718,&local_730);
  FUN_140208bae(local_710,local_718,local_714,L"Please provide a .OnGenerateWidget() handler.");
  FUN_14023423e(local_700,local_710);
  local_6f0 = 1;
  local_6e8 = 0;
  uStack_6e0 = 0;
  uVar7 = FUN_140a54906(local_690,local_700);
  local_768 = &local_731;
  FUN_140a54526(&local_730,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0x238);
  FUN_140a52852(&local_730,&local_6d8,uVar7);
  plVar2 = local_68;
  plVar8 = local_6d0;
  if (local_6d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6d0 + 1) = (int)local_6d0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_6d0 + 1) = (int)local_6d0[1] + 1;
    UNLOCK();
  }
  local_70 = local_6d8;
  local_68 = local_6d0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_758 = param_4;
  FUN_14771c628(&local_750,0x236);
  FUN_14771c55c(&local_750,&local_6c8,local_220);
  *param_2 = local_6c8;
  param_2[1] = local_6c0;
  if (local_6c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c0 + 1) = (int)local_6c0[1] + 1;
    UNLOCK();
    if (local_6c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_6c0)(local_6c0);
        LOCK();
        piVar3 = (int *)((longlong)local_6c0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_6c0 + 0x10))(local_6c0);
        }
      }
    }
  }
  if (local_748 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_748 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_748)(local_748);
      LOCK();
      piVar3 = (int *)((longlong)local_748 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_748 + 0x10))(local_748);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_6d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_6d0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_6d0)(local_6d0);
      LOCK();
      piVar3 = (int *)((longlong)local_6d0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6d0 + 0x10))(local_6d0);
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_724,local_728);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_710[0] != (longlong *)0x0) {
    (**(code **)(*local_710[0] + 0x10))();
  }
  FUN_140a59ae6(local_690);
  puVar9 = local_220;
LAB_14771b8ec:
  FUN_14771c5dc(puVar9);
  if ((local_38 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771ba56 FUN_14771ba56 body=325 status=ok
// SIG undefined FUN_14771ba56(void)

undefined1 * FUN_14771ba56(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  lVar5 = DAT_14c964d88;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c964d88;
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
  if (lVar3 == lVar5) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x4d8) + 0xd0))
              (*(longlong *)(param_1 + 0x3f8) + 0x4d8);
    if (0 < local_40) {
      FUN_1477193c8(param_1,*local_48,0);
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (0 < local_40) goto LAB_14771bb2b;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14771bb2b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771bb9c FUN_14771bb9c body=133 status=ok
// SIG undefined FUN_14771bb9c(void)

longlong FUN_14771bb9c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = uVar3;
  *(longlong *)(param_1 + 0x308) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14771bc22 FUN_14771bc22 body=115 status=ok
// SIG undefined FUN_14771bc22(void)

longlong * FUN_14771bc22(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147729124(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14771bc96 FUN_14771bc96 body=414 status=ok
// SIG undefined FUN_14771bc96(void)

void FUN_14771bc96(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x378);
  FUN_1449db362(param_1 + 0x330);
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x308);
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
  plVar3 = *(longlong **)(param_1 + 0x2f0);
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
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14771be34 FUN_14771be34 body=130 status=ok
// SIG undefined FUN_14771be34(void)

void FUN_14771be34(longlong *param_1,longlong *param_2)

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



// FUNCTION 14771beb8 FUN_14771beb8 body=130 status=ok
// SIG undefined FUN_14771beb8(void)

void FUN_14771beb8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14771bf3c FUN_14771bf3c body=386 status=ok
// SIG undefined FUN_14771bf3c(void)

longlong * FUN_14771bf3c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14771c04d:
    *puVar5 = &PTR_LAB_14a50a490;
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
    *puVar5 = &PTR_FUN_14a50a420;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14771c04d;
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
    *puVar5 = &PTR_LAB_14a50a490;
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
    *puVar5 = &PTR_FUN_14a50a420;
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



// FUNCTION 14771c0be FUN_14771c0be body=64 status=ok
// SIG undefined FUN_14771c0be(void)

undefined8 * FUN_14771c0be(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50a420;
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



// FUNCTION 14771c102 FUN_14771c102 body=81 status=ok
// SIG undefined FUN_14771c102(void)

undefined8 FUN_14771c102(longlong param_1)

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



// FUNCTION 14771c15a FUN_14771c15a body=89 status=ok
// SIG undefined FUN_14771c15a(void)

bool FUN_14771c15a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14771c1a5;
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
LAB_14771c1a5:
  return lVar6 == param_2;
}



// FUNCTION 14771c1dc FUN_14771c1dc body=118 status=ok
// SIG undefined FUN_14771c1dc(void)

void FUN_14771c1dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a420;
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



// FUNCTION 14771c252 FUN_14771c252 body=118 status=ok
// SIG undefined FUN_14771c252(void)

void FUN_14771c252(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50a420;
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



// FUNCTION 14771c2c8 FUN_14771c2c8 body=156 status=ok
// SIG undefined FUN_14771c2c8(void)

void FUN_14771c2c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50a490;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50a420;
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
                    /* WARNING: Could not recover jumptable at 0x00014771c354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14771c364 FUN_14771c364 body=105 status=ok
// SIG undefined FUN_14771c364(void)

undefined8 FUN_14771c364(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14771c3b8:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14771c3b8;
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



// FUNCTION 14771c3ce FUN_14771c3ce body=192 status=ok
// SIG undefined FUN_14771c3ce(void)

ulonglong FUN_14771c3ce(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14771c46c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14771c46c;
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
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30,param_2,param_3),
       local_28 != (longlong *)0x0)) {
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
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
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



// FUNCTION 14771c492 FUN_14771c492 body=201 status=ok
// SIG undefined FUN_14771c492(void)

longlong FUN_14771c492(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"ComboBox.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771c55c FUN_14771c55c body=128 status=ok
// SIG undefined FUN_14771c55c(void)

longlong * FUN_14771c55c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_147720cf4(*param_1,param_3,*(undefined8 *)param_1[2]);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14771c5dc FUN_14771c5dc body=76 status=ok
// SIG undefined FUN_14771c5dc(void)

void FUN_14771c5dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14771c628 FUN_14771c628 body=371 status=ok
// SIG undefined FUN_14771c628(void)

longlong * FUN_14771c628(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x390);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a50a500;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x380);
  FUN_14771c7c4(plVar4);
  plVar3[2] = (longlong)&PTR_LAB_14a50a520;
  plVar3[3] = (longlong)&PTR_FUN_14a50a5c0;
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_147720c48(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14771c72b;
    param_1[1] = 0;
LAB_14771c6f3:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14771c72b;
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
      if (plVar4 == (longlong *)0x0) goto LAB_14771c72b;
      goto LAB_14771c6f3;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14771c72b;
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
LAB_14771c72b:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x380;
  FUN_140a52e78(*param_1 + 8,"SComboRow<OptionType>",
                "Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771c79c FUN_14771c79c body=9 status=ok
// SIG undefined FUN_14771c79c(void)

void FUN_14771c79c(longlong param_1)

{
  FUN_14771fda2(param_1 + 0x10);
  return;
}



// FUNCTION 14771c7a6 FUN_14771c7a6 body=29 status=ok
// SIG undefined FUN_14771c7a6(void)

undefined8 FUN_14771c7a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14771c7c4 FUN_14771c7c4 body=202 status=ok
// SIG undefined FUN_14771c7c4(void)

undefined8 * FUN_14771c7c4(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_14a50a810;
  param_1[1] = &PTR_FUN_14a50a8b0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 14771c8a2 FUN_14771c8a2 body=149 status=ok
// SIG undefined FUN_14771c8a2(void)

byte FUN_14771c8a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14771c8de;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14771c8de:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 14771c938 FUN_14771c938 body=190 status=ok
// SIG undefined FUN_14771c938(void)

void FUN_14771c938(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14771c978;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14771c978:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    (**(code **)(*plVar9 + 0x50))(plVar9,*puVar7,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014771c9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14771c9f6 FUN_14771c9f6 body=149 status=ok
// SIG undefined FUN_14771c9f6(void)

byte FUN_14771c9f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14771ca32;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14771ca32:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}


