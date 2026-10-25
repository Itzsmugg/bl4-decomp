// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d447d8 FUN_148d447d8 body=165 status=ok
// SIG undefined FUN_148d447d8(void)

void FUN_148d447d8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d447f9:
    local_20 = 0;
    FUN_148d44928(param_1 + 8,param_1 + 0x38);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d447f9;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_20 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d44928(param_1 + 8,param_1 + 0x38);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4488e FUN_148d4488e body=150 status=ok
// SIG undefined FUN_148d4488e(void)

ulonglong FUN_148d4488e(longlong param_1)

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
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_148d448ec:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d448ec;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = lVar4;
      FUN_148d44928(param_1 + 8,param_1 + 0x38);
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



// FUNCTION 148d44928 FUN_148d44928 body=118 status=ok
// SIG undefined FUN_148d44928(void)

void FUN_148d44928(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_40 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar4);
  local_30 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d449a0 FUN_148d449a0 body=376 status=ok
// SIG undefined FUN_148d449a0(void)

longlong * FUN_148d449a0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d44a22:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d44a22;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b974370;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b974300;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
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
  return param_1;
}



// FUNCTION 148d44b18 FUN_148d44b18 body=64 status=ok
// SIG undefined FUN_148d44b18(void)

undefined8 * FUN_148d44b18(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b974300;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d44b5c FUN_148d44b5c body=81 status=ok
// SIG undefined FUN_148d44b5c(void)

undefined8 FUN_148d44b5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
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



// FUNCTION 148d44bb4 FUN_148d44bb4 body=89 status=ok
// SIG undefined FUN_148d44bb4(void)

bool FUN_148d44bb4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d44bff;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148d44bff:
  return lVar6 == param_2;
}



// FUNCTION 148d44c36 FUN_148d44c36 body=131 status=ok
// SIG undefined FUN_148d44c36(void)

void FUN_148d44c36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974370;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b974300;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d44cba FUN_148d44cba body=131 status=ok
// SIG undefined FUN_148d44cba(void)

void FUN_148d44cba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974370;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b974300;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d44d3e FUN_148d44d3e body=169 status=ok
// SIG undefined FUN_148d44d3e(void)

void FUN_148d44d3e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b974370;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974300;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d44dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d44de8 FUN_148d44de8 body=202 status=ok
// SIG undefined FUN_148d44de8(void)

void FUN_148d44de8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_38 = param_3;
  local_20 = param_2;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d44e0e:
    local_28 = 0;
    FUN_148d44f72(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d44e0e;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_28 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d44f72(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d44ec4 FUN_148d44ec4 body=171 status=ok
// SIG undefined FUN_148d44ec4(void)

ulonglong FUN_148d44ec4(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_20 = param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_148d44f27:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d44f27;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_38 = param_3;
      local_28 = lVar4;
      FUN_148d44f72(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d44f72 FUN_148d44f72 body=143 status=ok
// SIG undefined FUN_148d44f72(void)

void FUN_148d44f72(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_50 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_48 = FUN_14477b664(uVar4);
  local_40 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,*param_4,param_5,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d45002 FUN_148d45002 body=376 status=ok
// SIG undefined FUN_148d45002(void)

longlong * FUN_148d45002(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d45084:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d45084;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b974450;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b9743e0;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
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
  return param_1;
}



// FUNCTION 148d4517a FUN_148d4517a body=64 status=ok
// SIG undefined FUN_148d4517a(void)

undefined8 * FUN_148d4517a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9743e0;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d451be FUN_148d451be body=81 status=ok
// SIG undefined FUN_148d451be(void)

undefined8 FUN_148d451be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
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



// FUNCTION 148d45216 FUN_148d45216 body=89 status=ok
// SIG undefined FUN_148d45216(void)

bool FUN_148d45216(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d45261;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148d45261:
  return lVar6 == param_2;
}



// FUNCTION 148d45298 FUN_148d45298 body=131 status=ok
// SIG undefined FUN_148d45298(void)

void FUN_148d45298(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974450;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9743e0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d4531c FUN_148d4531c body=131 status=ok
// SIG undefined FUN_148d4531c(void)

void FUN_148d4531c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974450;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9743e0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d453a0 FUN_148d453a0 body=169 status=ok
// SIG undefined FUN_148d453a0(void)

void FUN_148d453a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b974450;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9743e0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d45439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d4544a FUN_148d4544a body=212 status=ok
// SIG undefined FUN_148d4544a(void)

void FUN_148d4544a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_38 = param_3;
  local_30 = param_4;
  local_20 = param_2;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d45470:
    local_28 = 0;
    FUN_148d455e4(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d45470;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_28 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d455e4(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d45530 FUN_148d45530 body=176 status=ok
// SIG undefined FUN_148d45530(void)

ulonglong FUN_148d45530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_20 = param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_148d45593:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d45593;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_38 = param_3;
      local_30 = param_4;
      local_28 = lVar4;
      FUN_148d455e4(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d455e4 FUN_148d455e4 body=161 status=ok
// SIG undefined FUN_148d455e4(void)

void FUN_148d455e4(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_58 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_50 = FUN_14477b664(uVar4);
  local_48 = param_1[2];
  local_68 = &local_58;
  (*pcVar2)(iVar1 + lVar3,*param_4,param_5,param_6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d45686 FUN_148d45686 body=376 status=ok
// SIG undefined FUN_148d45686(void)

longlong * FUN_148d45686(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d45708:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d45708;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b974530;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b9744c0;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
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
  return param_1;
}



// FUNCTION 148d457fe FUN_148d457fe body=64 status=ok
// SIG undefined FUN_148d457fe(void)

undefined8 * FUN_148d457fe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9744c0;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d45842 FUN_148d45842 body=81 status=ok
// SIG undefined FUN_148d45842(void)

undefined8 FUN_148d45842(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
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



// FUNCTION 148d4589a FUN_148d4589a body=89 status=ok
// SIG undefined FUN_148d4589a(void)

bool FUN_148d4589a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d458e5;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148d458e5:
  return lVar6 == param_2;
}



// FUNCTION 148d4591c FUN_148d4591c body=131 status=ok
// SIG undefined FUN_148d4591c(void)

void FUN_148d4591c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974530;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9744c0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d459a0 FUN_148d459a0 body=131 status=ok
// SIG undefined FUN_148d459a0(void)

void FUN_148d459a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974530;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9744c0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d45a24 FUN_148d45a24 body=169 status=ok
// SIG undefined FUN_148d45a24(void)

void FUN_148d45a24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b974530;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9744c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d45abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d45ace FUN_148d45ace body=168 status=ok
// SIG undefined FUN_148d45ace(void)

void FUN_148d45ace(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d45af2:
    local_20 = 0;
    FUN_148d45c24(param_1 + 8,param_1 + 0x38,&local_20,param_2);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d45af2;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_20 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d45c24(param_1 + 8,param_1 + 0x38,&local_20,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d45b88 FUN_148d45b88 body=153 status=ok
// SIG undefined FUN_148d45b88(void)

ulonglong FUN_148d45b88(longlong param_1,undefined8 param_2)

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
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_148d45be9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d45be9;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = lVar4;
      FUN_148d45c24(param_1 + 8,param_1 + 0x38,&local_20,param_2);
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



// FUNCTION 148d45c24 FUN_148d45c24 body=128 status=ok
// SIG undefined FUN_148d45c24(void)

void FUN_148d45c24(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_48 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,param_4,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d45ca6 FUN_148d45ca6 body=31 status=ok
// SIG undefined FUN_148d45ca6(void)

undefined8 FUN_148d45ca6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d45cda FUN_148d45cda body=85 status=ok
// SIG undefined FUN_148d45cda(void)

void FUN_148d45cda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9745b0;
  return;
}



// FUNCTION 148d45d30 FUN_148d45d30 body=118 status=ok
// SIG undefined FUN_148d45d30(void)

void FUN_148d45d30(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9745b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d45d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d45da6 FUN_148d45da6 body=25 status=ok
// SIG undefined FUN_148d45da6(void)

undefined8 FUN_148d45da6(undefined8 param_1,undefined8 param_2)

{
  FUN_148d45e26(param_2);
  return param_2;
}



// FUNCTION 148d45dc0 FUN_148d45dc0 body=101 status=ok
// SIG undefined FUN_148d45dc0(void)

undefined8 FUN_148d45dc0(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d45e26(local_20);
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



// FUNCTION 148d45e26 FUN_148d45e26 body=388 status=ok
// SIG undefined FUN_148d45e26(void)

longlong * FUN_148d45e26(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbcb2f8 != (longlong *)0x0 && DAT_14cbcb300 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbcb2f8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cbcb2f8;
    if (DAT_14cbcb300 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    plVar4 = local_30;
    lVar3 = local_38;
    goto LAB_148d45f45;
  }
  lVar3 = FUN_14001cc68(0x30,0x10);
  FUN_148d04c8c(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b974620;
  plVar4[2] = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_148d45f45;
  }
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_148d45f45;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_148d45f10:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_148d45f24;
    }
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_148d45f10;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_148d45f24:
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
LAB_148d45f45:
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d45fac FUN_148d45fac body=24 status=ok
// SIG undefined FUN_148d45fac(void)

void FUN_148d45fac(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d45fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148d45fc4 FUN_148d45fc4 body=29 status=ok
// SIG undefined FUN_148d45fc4(void)

undefined8 FUN_148d45fc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d45fe2 FUN_148d45fe2 body=76 status=ok
// SIG undefined FUN_148d45fe2(void)

void FUN_148d45fe2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b93078();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148d4601f;
    }
  }
  lVar2 = 0;
LAB_148d4601f:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148d4602e FUN_148d4602e body=437 status=ok
// SIG undefined FUN_148d4602e(void)

longlong * FUN_148d4602e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e020b0;
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
    *puVar4 = &PTR_FUN_14b974640;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_14415de72;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
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
    *puVar4 = &PTR_FUN_14b974640;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_14415de72;
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
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d461e4 FUN_148d461e4 body=64 status=ok
// SIG undefined FUN_148d461e4(void)

undefined8 * FUN_148d461e4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b974640;
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



// FUNCTION 148d46228 FUN_148d46228 body=81 status=ok
// SIG undefined FUN_148d46228(void)

undefined8 FUN_148d46228(longlong param_1)

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



// FUNCTION 148d46280 FUN_148d46280 body=89 status=ok
// SIG undefined FUN_148d46280(void)

bool FUN_148d46280(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d462cb;
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
LAB_148d462cb:
  return lVar6 == param_2;
}



// FUNCTION 148d462f6 FUN_148d462f6 body=118 status=ok
// SIG undefined FUN_148d462f6(void)

void FUN_148d462f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974640;
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



// FUNCTION 148d4636c FUN_148d4636c body=118 status=ok
// SIG undefined FUN_148d4636c(void)

void FUN_148d4636c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974640;
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



// FUNCTION 148d463e2 FUN_148d463e2 body=156 status=ok
// SIG undefined FUN_148d463e2(void)

void FUN_148d463e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b974640;
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
                    /* WARNING: Could not recover jumptable at 0x000148d4646e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d4647e FUN_148d4647e body=94 status=ok
// SIG undefined FUN_148d4647e(void)

void FUN_148d4647e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d464c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d464d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d464dc FUN_148d464dc body=93 status=ok
// SIG undefined FUN_148d464dc(void)

ulonglong FUN_148d464dc(longlong param_1)

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
LAB_148d4652e:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d4652e;
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



// FUNCTION 148d4653a FUN_148d4653a body=64 status=ok
// SIG undefined FUN_148d4653a(void)

undefined8 * FUN_148d4653a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9746b0;
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



// FUNCTION 148d4657e FUN_148d4657e body=81 status=ok
// SIG undefined FUN_148d4657e(void)

undefined8 FUN_148d4657e(longlong param_1)

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



// FUNCTION 148d465d6 FUN_148d465d6 body=89 status=ok
// SIG undefined FUN_148d465d6(void)

bool FUN_148d465d6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d46621;
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
LAB_148d46621:
  return lVar6 == param_2;
}



// FUNCTION 148d4664c FUN_148d4664c body=118 status=ok
// SIG undefined FUN_148d4664c(void)

void FUN_148d4664c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9746b0;
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



// FUNCTION 148d466c2 FUN_148d466c2 body=118 status=ok
// SIG undefined FUN_148d466c2(void)

void FUN_148d466c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9746b0;
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



// FUNCTION 148d46738 FUN_148d46738 body=156 status=ok
// SIG undefined FUN_148d46738(void)

void FUN_148d46738(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9746b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d467c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d467d4 FUN_148d467d4 body=98 status=ok
// SIG undefined FUN_148d467d4(void)

void FUN_148d467d4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d4681d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d4682c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d46836 FUN_148d46836 body=94 status=ok
// SIG undefined FUN_148d46836(void)

ulonglong FUN_148d46836(longlong param_1)

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
LAB_148d46889:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d46889;
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



// FUNCTION 148d46894 FUN_148d46894 body=31 status=ok
// SIG undefined FUN_148d46894(void)

undefined8 FUN_148d46894(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d468ce FUN_148d468ce body=26 status=ok
// SIG undefined FUN_148d468ce(void)

bool FUN_148d468ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d468e8 FUN_148d468e8 body=101 status=ok
// SIG undefined FUN_148d468e8(void)

void FUN_148d468e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d4694e FUN_148d4694e body=101 status=ok
// SIG undefined FUN_148d4694e(void)

void FUN_148d4694e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d469b4 FUN_148d469b4 body=134 status=ok
// SIG undefined FUN_148d469b4(void)

void FUN_148d469b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b974790;
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
                    /* WARNING: Could not recover jumptable at 0x000148d46a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d46a3a FUN_148d46a3a body=52 status=ok
// SIG undefined FUN_148d46a3a(void)

void FUN_148d46a3a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d46a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d46a6e FUN_148d46a6e body=167 status=ok
// SIG undefined FUN_148d46a6e(void)

bool FUN_148d46a6e(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148d46b16 FUN_148d46b16 body=31 status=ok
// SIG undefined FUN_148d46b16(void)

undefined8 FUN_148d46b16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d46b50 FUN_148d46b50 body=26 status=ok
// SIG undefined FUN_148d46b50(void)

bool FUN_148d46b50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d46b6a FUN_148d46b6a body=101 status=ok
// SIG undefined FUN_148d46b6a(void)

void FUN_148d46b6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ec30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d46bd0 FUN_148d46bd0 body=101 status=ok
// SIG undefined FUN_148d46bd0(void)

void FUN_148d46bd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ec30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b974800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d46c36 FUN_148d46c36 body=134 status=ok
// SIG undefined FUN_148d46c36(void)

void FUN_148d46c36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96ec30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974800;
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
                    /* WARNING: Could not recover jumptable at 0x000148d46cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d46cbc FUN_148d46cbc body=62 status=ok
// SIG undefined FUN_148d46cbc(void)

void FUN_148d46cbc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d46cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d46cfa FUN_148d46cfa body=177 status=ok
// SIG undefined FUN_148d46cfa(void)

bool FUN_148d46cfa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d46dac FUN_148d46dac body=29 status=ok
// SIG undefined FUN_148d46dac(void)

undefined8 FUN_148d46dac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d46de4 FUN_148d46de4 body=29 status=ok
// SIG undefined FUN_148d46de4(void)

bool FUN_148d46de4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d46e02 FUN_148d46e02 body=26 status=ok
// SIG undefined FUN_148d46e02(void)

bool FUN_148d46e02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d46e1c FUN_148d46e1c body=24 status=ok
// SIG undefined FUN_148d46e1c(void)

bool FUN_148d46e1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d46e34 FUN_148d46e34 body=101 status=ok
// SIG undefined FUN_148d46e34(void)

void FUN_148d46e34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d46e9a FUN_148d46e9a body=101 status=ok
// SIG undefined FUN_148d46e9a(void)

void FUN_148d46e9a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d46f00 FUN_148d46f00 body=134 status=ok
// SIG undefined FUN_148d46f00(void)

void FUN_148d46f00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b974870;
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
                    /* WARNING: Could not recover jumptable at 0x000148d46f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d46f86 FUN_148d46f86 body=42 status=ok
// SIG undefined FUN_148d46f86(void)

void FUN_148d46f86(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d46fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d46fb0 FUN_148d46fb0 body=154 status=ok
// SIG undefined FUN_148d46fb0(void)

bool FUN_148d46fb0(longlong param_1,undefined4 param_2)

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



// FUNCTION 148d4704c FUN_148d4704c body=107 status=ok
// SIG undefined FUN_148d4704c(void)

void FUN_148d4704c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cbcb098;
  if (param_1 <= (int)DAT_14cbcb098) {
    iVar2 = 6;
    if (6 < DAT_14cbcb098) {
      lVar5 = (longlong)(int)DAT_14cbcb098;
      if (6 < DAT_14cbcb09c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cbcb09c = iVar2;
    FUN_148d470b8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cbcb098);
}



// FUNCTION 148d470b8 FUN_148d470b8 body=142 status=ok
// SIG undefined FUN_148d470b8(void)

void FUN_148d470b8(int param_1,uint param_2)

{
  if (param_2 < 7) {
    if (DAT_14cbcb090 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cbcb060,DAT_14cbcb090,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cbcb090 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cbcb090,0,param_2,8);
    memmove(DAT_14cbcb090,&DAT_14cbcb060,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cbcb090,param_1,param_2,8);
  return;
}



// FUNCTION 148d47146 FUN_148d47146 body=137 status=ok
// SIG undefined FUN_148d47146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148d47146(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cbcd1d8 = _DAT_14cbcd1d8 + 1;
  UNLOCK();
  uVar1 = FUN_148d471d0(DAT_14cbcd1d0);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cbcd1d0;
  LOCK();
  _DAT_14cbcd1d8 = _DAT_14cbcd1d8 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_148d47252(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cbcd1d0;
  LOCK();
  _DAT_14cbcd1d8 = _DAT_14cbcd1d8 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_148d47252(param_1 + 4);
  LOCK();
  _DAT_14cbcd1d8 = _DAT_14cbcd1d8 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 148d471d0 FUN_148d471d0 body=130 status=ok
// SIG undefined FUN_148d471d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148d471d0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_148d47242:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_148d47242;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 148d47252 FUN_148d47252 body=61 status=ok
// SIG undefined FUN_148d47252(void)

void FUN_148d47252(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_148d471d0(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 148d47290 FUN_148d47290 body=83 status=ok
// SIG undefined FUN_148d47290(void)

void FUN_148d47290(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
  iVar1 = (int)(uVar2 >> 4);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar3;
  FUN_148d472e4(param_1,*(undefined4 *)(param_1 + 0x208));
  return;
}



// FUNCTION 148d472e4 FUN_148d472e4 body=141 status=ok
// SIG undefined FUN_148d472e4(void)

void FUN_148d472e4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 148d47372 FUN_148d47372 body=119 status=ok
// SIG undefined FUN_148d47372(void)

void FUN_148d47372(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_148d472e4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d473ea FUN_148d473ea body=83 status=ok
// SIG undefined FUN_148d473ea(void)

void FUN_148d473ea(longlong param_1,uint param_2)

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
  FUN_148d4743e(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 148d4743e FUN_148d4743e body=141 status=ok
// SIG undefined FUN_148d4743e(void)

void FUN_148d4743e(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 148d474cc FUN_148d474cc body=119 status=ok
// SIG undefined FUN_148d474cc(void)

void FUN_148d474cc(longlong param_1,int param_2)

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
    FUN_148d4743e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d47544 FUN_148d47544 body=119 status=ok
// SIG undefined FUN_148d47544(void)

void FUN_148d47544(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_148d475bc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d475bc FUN_148d475bc body=141 status=ok
// SIG undefined FUN_148d475bc(void)

void FUN_148d475bc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 148d4764a FUN_148d4764a body=112 status=ok
// SIG undefined FUN_148d4764a(void)

void FUN_148d4764a(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar2);
  FUN_1405b9981(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x208);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x208);
  }
  *(int *)(param_1 + 0x208) = iVar1 - param_3;
  return;
}



// FUNCTION 148d476ba FUN_148d476ba body=67 status=ok
// SIG undefined FUN_148d476ba(void)

void FUN_148d476ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d476fe(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c));
  if (iVar1 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar1;
  FUN_148d475bc(param_1,*(undefined4 *)(param_1 + 0x208),iVar1);
  return;
}



// FUNCTION 148d476fe FUN_148d476fe body=108 status=ok
// SIG undefined FUN_148d476fe(void)

ulonglong FUN_148d476fe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
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



// FUNCTION 148d4776a FUN_148d4776a body=107 status=ok
// SIG undefined FUN_148d4776a(void)

/* WARNING: Removing unreachable block (ram,0x000148d4779c) */
/* WARNING: Removing unreachable block (ram,0x000148d47778) */
/* WARNING: Removing unreachable block (ram,0x000148d4778e) */
/* WARNING: Removing unreachable block (ram,0x000148d477a7) */
/* WARNING: Removing unreachable block (ram,0x000148d47790) */

void FUN_148d4776a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cbcb330;
  LOCK();
  UNLOCK();
  DAT_14cbcb330 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cbcb338 = DAT_14cbcb338 + -1;
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
    DAT_14cbcb338 = DAT_14cbcb338 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148d477d6 FUN_148d477d6 body=96 status=ok
// SIG undefined FUN_148d477d6(void)

void FUN_148d477d6(longlong param_1,int param_2)

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



// FUNCTION 148d47836 FUN_148d47836 body=614 status=ok
// SIG undefined FUN_148d47836(void)

void FUN_148d47836(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1410c745c(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148d47836(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d47a9e FUN_148d47a9e body=308 status=ok
// SIG undefined FUN_148d47a9e(void)

void FUN_148d47a9e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1410c745c(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d47bd4 FUN_148d47bd4 body=739 status=ok
// SIG undefined FUN_148d47bd4(void)

void FUN_148d47bd4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148d47cf8:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_148d47d0c;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_148d47cf8;
LAB_148d47d0c:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1410c745c(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148d47bd4(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d47eb8 FUN_148d47eb8 body=125 status=ok
// SIG undefined FUN_148d47eb8(void)

void FUN_148d47eb8(longlong param_1,int param_2)

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
    FUN_148bf5808(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d47f36 FUN_148d47f36 body=31 status=ok
// SIG undefined FUN_148d47f36(void)

undefined8 FUN_148d47f36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d47f72 FUN_148d47f72 body=93 status=ok
// SIG undefined FUN_148d47f72(void)

void FUN_148d47f72(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d47fd0 FUN_148d47fd0 body=93 status=ok
// SIG undefined FUN_148d47fd0(void)

void FUN_148d47fd0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b974ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d4802e FUN_148d4802e body=126 status=ok
// SIG undefined FUN_148d4802e(void)

void FUN_148d4802e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b974ac0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d4809d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d480ba FUN_148d480ba body=140 status=ok
// SIG undefined FUN_148d480ba(void)

void FUN_148d480ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  thunk_FUN_140c2c4ea();
  FUN_1446f470e(&local_38,L"AssociatedSiloBase",1);
  uVar1 = FUN_14595e2bc();
  FUN_14595e2bc();
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



// FUNCTION 148d48148 FUN_148d48148 body=30 status=ok
// SIG undefined FUN_148d48148(void)

void FUN_148d48148(longlong param_1)

{
  FUN_1459338cc();
  FUN_148d420f0(param_1 + -0x1ad8);
  return;
}



// FUNCTION 148d48166 FUN_148d48166 body=56 status=ok
// SIG undefined FUN_148d48166(void)

void FUN_148d48166(longlong param_1)

{
  FUN_14589c6ba();
  if (*(char *)(param_1 + -0x195f) == '\x02') {
    return;
  }
  FUN_148d41f98(param_1 + -0x1ad8,0x41200000);
  return;
}



// FUNCTION 148d481e6 FUN_148d481e6 body=135 status=ok
// SIG undefined FUN_148d481e6(void)

undefined8 FUN_148d481e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar3 = 0.0;
  uVar4 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
        (*(longlong *)(&DAT_00006850 + param_2) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(&DAT_00006850 + param_2) + 0x4210), lVar1 != 0)) {
      fVar3 = *(float *)(lVar1 + 1000);
      uVar2 = FUN_148dcb15a(*(undefined8 *)(param_1 + 0x26b8));
      uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      fVar3 = (float)uVar2 * fVar3;
    }
  }
  return CONCAT44(uVar4,fVar3);
}



// FUNCTION 148d4829a FUN_148d4829a body=441 status=ok
// SIG undefined FUN_148d4829a(void)

void FUN_148d4829a(longlong param_1,undefined8 param_2,double *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  if (*(longlong *)(param_1 + 0x26b8) != 0) {
    dVar8 = *param_3;
    dVar1 = param_3[1];
    dVar2 = param_3[2];
    dVar7 = dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1;
    if (((dVar7 != 1.0) || (dVar5 = dVar2, dVar4 = dVar1, dVar3 = dVar8, NAN(dVar7))) &&
       (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar7)) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar5 = dVar2 * dVar7;
      dVar4 = dVar1 * dVar7;
      dVar3 = dVar8 * dVar7;
    }
    dVar8 = (double)*param_4;
    dVar5 = dVar5 * dVar8;
    dVar4 = dVar4 * dVar8;
    dVar3 = dVar3 * dVar8;
    fVar6 = (float)FUN_148d481e6();
    dVar8 = (double)(fVar6 / (float)SQRT(dVar3 * dVar3 + dVar4 * dVar4));
    dVar3 = dVar3 * dVar8;
    dVar4 = dVar4 * dVar8;
    dVar8 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
    if (((dVar8 != 1.0) || (dVar1 = dVar5, dVar2 = dVar3, dVar7 = dVar4, NAN(dVar8))) &&
       (dVar1 = DAT_14c8464f0, dVar2 = DAT_14c8464e0, dVar7 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar8)) {
      dVar7 = 1.0 / SQRT(dVar8);
      dVar1 = dVar5 * dVar7;
      dVar2 = dVar3 * dVar7;
      dVar7 = dVar4 * dVar7;
    }
    *param_3 = dVar2;
    param_3[1] = dVar7;
    param_3[2] = dVar1;
    *param_4 = (float)SQRT(dVar8);
  }
  return;
}



// FUNCTION 148d48454 FUN_148d48454 body=92 status=ok
// SIG undefined FUN_148d48454(void)

void FUN_148d48454(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x26b8) = param_2;
  *(undefined4 *)(param_1 + 0x26c8) = param_3;
  *(undefined4 *)(param_1 + 0x26cc) = param_4;
  return;
}



// FUNCTION 148d484b0 FUN_148d484b0 body=1 status=ok
// SIG undefined FUN_148d484b0(void)

void FUN_148d484b0(void)

{
  return;
}



// FUNCTION 148d484b2 FUN_148d484b2 body=359 status=ok
// SIG undefined FUN_148d484b2(void)

undefined8 FUN_148d484b2(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x404)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x408;
    if (*(longlong *)(param_1 + 0x410) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x410);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x418) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 0x38) == lVar1) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            uVar5 = FUN_140963a30(lVar4 + 8);
            return uVar5;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  if (lVar1 == DAT_14cbcb4c8) {
    if (param_3 != '\0') {
      uVar5 = FUN_140963a30(param_1 + 0x5b0);
      return uVar5;
    }
    uVar5 = FUN_140963a30(param_1 + 0x358);
    return uVar5;
  }
  if (lVar1 == DAT_14cbcb4d0) {
    if (param_3 != '\0') {
      uVar5 = FUN_140963a30(param_1 + 0x560);
      return uVar5;
    }
    uVar5 = FUN_140963a30(param_1 + 0x308);
    return uVar5;
  }
  if (lVar1 == DAT_14cbcb4d8) {
    if (param_3 != '\0') {
      uVar5 = FUN_140963a30(param_1 + 0x588);
      return uVar5;
    }
    uVar5 = FUN_140963a30(param_1 + 0x330);
    return uVar5;
  }
  if (lVar1 != DAT_14cbcb4e0) {
    if (lVar1 != DAT_14cbcb4e8) {
      return 0;
    }
    if (param_3 != '\0') {
      uVar5 = FUN_140963a30(param_1 + 0x5d8);
      return uVar5;
    }
    uVar5 = FUN_140963a30(param_1 + 0x380);
    return uVar5;
  }
  if (param_3 != '\0') {
    uVar5 = FUN_140963a30(param_1 + 0x600);
    return uVar5;
  }
  uVar5 = FUN_140963a30(param_1 + 0x3a8);
  return uVar5;
}



// FUNCTION 148d48646 FUN_148d48646 body=546 status=ok
// SIG undefined FUN_148d48646(void)

void FUN_148d48646(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbcb5a0 != (longlong *)0x0) goto LAB_148d48669;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b975e00;
  DAT_14cbcb5a0 = plVar5 + 2;
  plVar5[2] = (longlong)&PTR_LAB_14b975e20;
  plVar6 = DAT_14cbcb5a8;
  if (plVar5 == (longlong *)0x0) {
    if (DAT_14cbcb5a8 != (longlong *)0x0) {
      DAT_14cbcb5a8 = (longlong *)0x0;
LAB_148d48702:
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
      if (plVar5 != (longlong *)0x0) goto LAB_148d48724;
      goto LAB_148d48741;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 == DAT_14cbcb5a8) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      bVar7 = DAT_14cbcb5a8 != (longlong *)0x0;
      plVar6 = DAT_14cbcb5a8;
      DAT_14cbcb5a8 = plVar5;
      if (bVar7) goto LAB_148d48702;
    }
LAB_148d48724:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
LAB_148d48741:
    plVar6 = DAT_14cbcb5a8;
    local_30 = DAT_14cbcb5a0;
    uVar3 = DAT_14c98e618;
    if (DAT_14cbcb5a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14cbcb5a8 + 1) = (int)DAT_14cbcb5a8[1] + 1;
      UNLOCK();
      local_28 = plVar6;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_1469aa3ce(uVar3);
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_148d48669;
    }
  }
  local_28 = (longlong *)0x0;
  local_30 = DAT_14cbcb5a0;
  FUN_1469aa3ce(DAT_14c98e618);
LAB_148d48669:
  lVar4 = FUN_1400b465c(param_1);
  if (lVar4 != 0) {
    FUN_148d4886a(lVar4 + 0xc0,&local_38,param_1,&LAB_148d48960);
    *(undefined8 *)(param_1 + 0x38) = local_38;
    FUN_148d4886a(lVar4 + 0xd8,&local_38,param_1,FUN_148d48982);
    *(undefined8 *)(param_1 + 0x40) = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4886a FUN_148d4886a body=244 status=ok
// SIG undefined FUN_148d4886a(void)

undefined8
FUN_148d4886a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14b412d70;
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
  *local_40 = &PTR_FUN_14b975e60;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_14127bc3c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d48982 FUN_148d48982 body=85 status=ok
// SIG undefined FUN_148d48982(void)

void FUN_148d48982(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_14cbcb5a0 != 0) {
    lVar1 = FUN_1400b465c();
    if (lVar1 != 0) {
      lVar2 = FUN_140cb3e38(lVar1,DAT_14cbcb598);
      if (lVar2 == 0) {
        lVar1 = FUN_14119d4d6(lVar1);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) != -1)) {
          DAT_14cbcb598 = *(int *)(lVar1 + 0xe0);
        }
      }
    }
  }
  return;
}



// FUNCTION 148d489d8 FUN_148d489d8 body=81 status=ok
// SIG undefined FUN_148d489d8(void)

void FUN_148d489d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_14480f766(lVar1 + 0xc0);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_14480f766(lVar1 + 0xd8);
      return;
    }
  }
  return;
}



// FUNCTION 148d48a2a FUN_148d48a2a body=250 status=ok
// SIG undefined FUN_148d48a2a(void)

void FUN_148d48a2a(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  
  lVar4 = *param_2;
  uVar6 = FUN_148b7d33b();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar5,uVar6,0);
  }
  FUN_1407cace8(lVar4,uVar6,0x3f800000,0);
  uVar7 = (uint)(float)(*(int *)(param_1 + 0x58) + -1);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x50))) {
    fVar8 = (float)FUN_1407caec0(*param_2,&DAT_14cbcb5b0,0x3f000000);
    iVar3 = *(int *)(param_1 + 0x5c);
    lVar4 = *param_2;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar7 * 8);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)uVar7 * 8);
    uVar6 = FUN_148b7d304();
    lVar5 = *(longlong *)(lVar4 + 0x200);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1403f69f4(lVar5,uVar6,iVar3 == 2);
    }
    FUN_1407cace8(lVar4,uVar6,(fVar2 - fVar1) * fVar8 + fVar1,0);
    return;
  }
  return;
}



// FUNCTION 148d48b24 FUN_148d48b24 body=636 status=ok
// SIG undefined FUN_148d48b24(void)

void FUN_148d48b24(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ***pppuVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 **local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  undefined8 **local_68;
  longlong *plStack_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_3 & 1) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
    uVar5 = FUN_140840456();
    plVar6 = (longlong *)FUN_144718840(param_2,uVar5);
    if (plVar6 == (longlong *)0x0) {
      uVar11 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
      if (local_78 == 0) {
        uVar11 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x5c);
        uVar5 = FUN_148b7d304();
        if (*(longlong *)(local_78 + 0x200) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1403f69f4(*(longlong *)(local_78 + 0x200),uVar5,iVar3 == 2);
        }
        FUN_140d4c8ba(local_78,&local_68,uVar5);
        uVar11 = FUN_144a7b41a(&local_68,0);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppuVar10 = &local_68;
          if (0x18 < local_50) {
            pppuVar10 = (undefined8 ***)local_68;
          }
          (*pcVar4)(pppuVar10);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(local_68);
        }
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
    lVar7 = FUN_14011c349();
    uVar5 = FUN_140e1f0aa();
    lVar8 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
    if (lVar8 != 0) {
      uVar5 = FUN_140e1f0aa();
      lVar9 = FUN_144718840(lVar8,uVar5);
      if (lVar9 != 0 && lVar8 != lVar9) {
        FUN_140db960a(param_1 + 0x30,&local_68);
        local_88 = local_68;
        plStack_80 = plStack_60;
        local_68 = (undefined8 ***)0x0;
        plStack_60 = (longlong *)0x0;
        local_a0 = 0;
        local_a8 = 0;
        local_b8 = 0;
        local_98 = 0;
        local_b0 = uVar11;
        FUN_141348940(lVar9,&local_88,lVar7 + 0xe8,0);
        plVar6 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_60)(plStack_60);
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
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d48dbc FUN_148d48dbc body=602 status=ok
// SIG undefined FUN_148d48dbc(void)

float FUN_148d48dbc(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar8 = 0.0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = param_1 + 0x290;
    cVar3 = FUN_144729dda(lVar1);
    if (cVar3 != '\0') {
      lVar5 = *(longlong *)(param_1 + 8);
      if ((longlong)*(int *)(lVar5 + 0x90) == 0) {
        fVar8 = 0.0;
      }
      else {
        lVar6 = (longlong)*(int *)(lVar5 + 0x90) * 0x70;
        lVar5 = *(longlong *)(lVar5 + 0x88) + 0x20;
        fVar8 = 0.0;
        do {
          fVar7 = *(float *)(param_1 + 0x2d0);
          if (fVar7 <= 0.0) {
            local_c8[0] = 0;
            local_a0 = 0;
            FUN_148d54b6a(local_c8,lVar1);
            FUN_1448729ea(lVar5,local_98,local_c8);
            fVar7 = (float)FUN_144a7b41a(local_98,0);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar4 = local_98;
              if (0x18 < local_80) {
                ppppuVar4 = (undefined8 ****)local_98[0];
              }
              (*pcVar2)(ppppuVar4);
            }
            if (0x18 < local_80) {
              FUN_1400020a8(local_98[0]);
            }
            FUN_144a5ac3a(local_c8);
          }
          fVar8 = fVar8 + fVar7;
          lVar5 = lVar5 + 0x70;
          lVar6 = lVar6 + -0x70;
        } while (lVar6 != 0);
        lVar5 = *(longlong *)(param_1 + 8);
      }
      if ((longlong)*(int *)(lVar5 + 0xa0) != 0) {
        lVar6 = (longlong)*(int *)(lVar5 + 0xa0) * 0x70;
        lVar5 = *(longlong *)(lVar5 + 0x98) + 0x20;
        do {
          fVar7 = *(float *)(param_1 + 0x2d0);
          if (fVar7 <= 0.0) {
            local_c8[0] = 0;
            local_a0 = 0;
            FUN_148d54b6a(local_c8,lVar1);
            FUN_1448729ea(lVar5,local_98,local_c8);
            fVar7 = (float)FUN_144a7b41a(local_98,0);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar4 = local_98;
              if (0x18 < local_80) {
                ppppuVar4 = (undefined8 ****)local_98[0];
              }
              (*pcVar2)(ppppuVar4);
            }
            if (0x18 < local_80) {
              FUN_1400020a8(local_98[0]);
            }
            FUN_144a5ac3a(local_c8);
          }
          fVar8 = fVar8 + fVar7;
          lVar5 = lVar5 + 0x70;
          lVar6 = lVar6 + -0x70;
        } while (lVar6 != 0);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar8;
}



// FUNCTION 148d4901a FUN_148d4901a body=107 status=ok
// SIG undefined FUN_148d4901a(void)

void FUN_148d4901a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d0) = param_2;
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_140e0c48e(param_1,*(longlong *)(param_1 + 8) + 0x88,param_1 + 0x18,1,
                  *(undefined8 *)(param_1 + 0x290));
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_140e0c48e(param_1,*(longlong *)(param_1 + 8) + 0x98,param_1 + 0x28,1,
                  *(undefined8 *)(param_1 + 0x290));
  }
  return;
}



// FUNCTION 148d49086 FUN_148d49086 body=107 status=ok
// SIG undefined FUN_148d49086(void)

void FUN_148d49086(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d4) = param_2;
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_140e0c48e(param_1,*(longlong *)(param_1 + 8) + 0x88,param_1 + 0x18,1,
                  *(undefined8 *)(param_1 + 0x290));
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_140e0c48e(param_1,*(longlong *)(param_1 + 8) + 0x98,param_1 + 0x28,1,
                  *(undefined8 *)(param_1 + 0x290));
  }
  return;
}



// FUNCTION 148d49104 FUN_148d49104 body=247 status=ok
// SIG undefined FUN_148d49104(void)

void FUN_148d49104(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a87d38(param_2);
  if (cVar2 == '\0') goto LAB_148d49191;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x290);
  cVar2 = (**(code **)(*plVar3 + 0x700))(plVar3);
  if (cVar2 == '\0') goto LAB_148d49191;
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_1405b1a32();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  local_48 = param_3[2];
  if (((local_48 == 0) && (local_48 = 0, lVar5 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_148d491f8:
      local_48 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_148d491f8;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      local_48 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = local_48;
  }
  FUN_140b32deb(local_40,plVar3,param_2,0);
LAB_148d49191:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d491fc FUN_148d491fc body=60 status=ok
// SIG undefined FUN_148d491fc(void)

longlong FUN_148d491fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
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



// FUNCTION 148d49238 FUN_148d49238 body=17 status=ok
// SIG undefined FUN_148d49238(void)

undefined8 FUN_148d49238(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return 0;
}



// FUNCTION 148d4924a FUN_148d4924a body=337 status=ok
// SIG undefined FUN_148d4924a(void)

undefined8
FUN_148d4924a(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (((param_3 != 0) && (cVar2 != '\0')) &&
     (plVar3 = (longlong *)FUN_1447262c2(param_4), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_140e1f0aa();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140e1f0aa();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        plVar3 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
        if ((longlong)(int)plVar3[1] != 0) {
          lVar6 = 0;
          do {
            lVar1 = *(longlong *)(*plVar3 + lVar6);
            if ((lVar1 != 0) && (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d4) == param_1[1])) {
              if ((ulonglong)*(byte *)(param_1 + 2) < 3) {
                local_38 = param_7;
                FUN_1402a4426(lVar1 + (ulonglong)*(byte *)(param_1 + 2) * 0xc + 0x2a0,local_30,
                              param_5,param_6);
                FUN_14162be86(param_2,1);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
              }
              break;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)plVar3[1] * 8 != lVar6);
        }
      }
    }
  }
  FUN_14162be86(param_2,0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d493a2 FUN_148d493a2 body=459 status=ok
// SIG undefined FUN_148d493a2(void)

undefined8 *
FUN_148d493a2(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_1412cbf0e(param_5);
  if (cVar2 == '\0') {
    local_68 = param_8;
    local_70 = CONCAT44(local_70._4_4_,param_7);
    local_78 = CONCAT31(local_78._1_3_,param_6);
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4);
  }
  else {
    cVar2 = FUN_142b2fcbc(param_5);
    if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x28))(param_1), cVar2 == '\0')) {
      *param_2 = *param_5;
LAB_148d49473:
      if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((param_3 != 0) && (plVar3 = (longlong *)FUN_1447262c2(param_4), plVar3 != (longlong *)0x0))
    {
      uVar4 = FUN_140e1f0aa();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = FUN_140e1f0aa();
        plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
        if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
          plVar3 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
          if ((longlong)(int)plVar3[1] != 0) {
            lVar6 = 0;
            do {
              lVar1 = *(longlong *)(*plVar3 + lVar6);
              if ((lVar1 != 0) && (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d4) == param_1[1])) {
                if ((ulonglong)*(byte *)(param_1 + 2) < 3) {
                  local_70 = param_8;
                  local_78 = param_7;
                  FUN_140cda184(lVar1 + (ulonglong)*(byte *)(param_1 + 2) * 0xc + 0x2a0,local_58,
                                param_5,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) &
                                        0xffffffff);
                  FUN_14162be86(param_2,1);
                  goto LAB_148d49473;
                }
                break;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)plVar3[1] * 8 != lVar6);
          }
        }
      }
    }
    FUN_14162be86(param_2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
}



// FUNCTION 148d4956e FUN_148d4956e body=241 status=ok
// SIG undefined FUN_148d4956e(void)

undefined8 FUN_148d4956e(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (((param_2 != 0) && (cVar2 != '\0')) &&
     (plVar3 = (longlong *)FUN_1447262c2(param_3), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_140e1f0aa();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140e1f0aa();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        plVar3 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
        if ((longlong)(int)plVar3[1] != 0) {
          lVar6 = 0;
          while ((lVar1 = *(longlong *)(*plVar3 + lVar6), lVar1 == 0 ||
                 (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d4) != param_1[1]))) {
            lVar6 = lVar6 + 8;
            if ((longlong)(int)plVar3[1] * 8 == lVar6) {
              return 0;
            }
          }
          if ((ulonglong)*(byte *)(param_1 + 2) < 3) {
            thunk_FUN_1409d14a4(lVar1 + (ulonglong)*(byte *)(param_1 + 2) * 0xc + 0x2a0,param_4);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148d49660 FUN_148d49660 body=237 status=ok
// SIG undefined FUN_148d49660(void)

void FUN_148d49660(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x28))(param_1), param_2 != 0)) &&
      (cVar2 != '\0')) && (plVar3 = (longlong *)FUN_1447262c2(param_3), plVar3 != (longlong *)0x0))
  {
    uVar4 = FUN_140e1f0aa();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140e1f0aa();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        plVar3 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
        if ((longlong)(int)plVar3[1] != 0) {
          lVar6 = 0;
          do {
            lVar1 = *(longlong *)(*plVar3 + lVar6);
            if ((lVar1 != 0) && (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d4) == param_1[1])) {
              if (2 < (ulonglong)*(byte *)(param_1 + 2)) {
                return;
              }
              thunk_FUN_1470b0b0e(lVar1 + (ulonglong)*(byte *)(param_1 + 2) * 0xc + 0x2a0);
              return;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)plVar3[1] * 8 != lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 148d4974e FUN_148d4974e body=108 status=ok
// SIG undefined FUN_148d4974e(void)

void FUN_148d4974e(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x150 + lVar3) == param_2) {
          uVar2 = (int)(lVar3 >> 5) * -0x45d1745d;
          if (iVar1 <= (int)uVar2 || (int)uVar2 < 0) {
            return;
          }
          FUN_140cd99cc(CONCAT71((int7)(lVar3 >> 0xd),(int)uVar2 < 0),
                        *(longlong *)(param_1 + 8) + (ulonglong)(uVar2 & 0x7fffffff) * 0x160,0);
          return;
        }
        lVar3 = lVar3 + 0x160;
      } while ((longlong)iVar1 * 0x160 - lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 148d497ba FUN_148d497ba body=206 status=ok
// SIG undefined FUN_148d497ba(void)

void FUN_148d497ba(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x2e1) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x698) == '\x01')) {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0);
    local_30 = 0x3005;
    local_28 = 0;
    FUN_1410228c2(param_2);
    FUN_1460dc37e(param_1);
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x318);
    uVar2 = FUN_1401b4c98(param_2);
    lVar3 = FUN_144a61814(uVar2,puVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*puVar1);
    }
    *puVar1 = 0;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4988a FUN_148d4988a body=119 status=ok
// SIG undefined FUN_148d4988a(void)

void FUN_148d4988a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (*(char *)(lVar1 + 0x699) == '\x01') {
    local_28 = *(undefined8 *)(lVar1 + 0x4d0);
    local_20 = *(undefined4 *)(lVar1 + 0x4d8);
    local_18 = 0;
    uVar2 = FUN_14479d2ce(param_1 + 0x298);
    FUN_1410228c2(uVar2,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4990e FUN_148d4990e body=131 status=ok
// SIG undefined FUN_148d4990e(void)

void FUN_148d4990e(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    puVar1 = &DAT_14c9485f0;
  }
  else {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_2 + 8);
    }
  }
  FUN_1447325ac(puVar1,&local_20,1);
  if (*(longlong *)(param_1 + 0x2f8) != local_20) {
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  *(longlong *)(param_1 + 0x2f8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d49992 FUN_148d49992 body=556 status=ok
// SIG undefined FUN_148d49992(void)

void FUN_148d49992(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_338 [40];
  undefined **local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [8];
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined2 local_2a8;
  undefined4 local_29c;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_250;
  undefined4 local_24c;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined2 local_220;
  undefined1 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined2 local_198;
  undefined4 local_18c;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined1 local_108;
  undefined4 local_100;
  undefined1 local_f8 [180];
  undefined4 local_44;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *param_1 = &PTR_FUN_14b694010;
  if (param_1[0x5f] != 0) {
    cVar4 = FUN_144729dda(param_1 + 0x51);
    if (cVar4 != '\0') {
      uVar5 = FUN_14479d2ce(param_1 + 0x51);
      lVar6 = FUN_1447210f0(uVar5);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar7;
      lVar6 = FUN_144a61814(uVar5);
      if (lVar6 != 0) {
        FUN_1405a424c(uVar5);
      }
      param_1[0x5f] = 0;
    }
  }
  memset(local_2d8,0,0x2b0);
  local_310 = &PTR_FUN_14b6879e0;
  local_2d0 = 0;
  local_29c = 0;
  local_24c = 0;
  local_218 = 0;
  local_210 = 0;
  local_1c0 = 0;
  local_18c = 0;
  local_13c = 0;
  local_108 = 0;
  local_100 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8[0] = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  local_250 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_110 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_44 = 0;
  memset(local_f8,0,0xac);
  local_2c = 1;
  FUN_141420c64(&local_310);
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
  FUN_141420c64(param_1);
  if ((local_28 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d49bc0 FUN_148d49bc0 body=367 status=ok
// SIG undefined FUN_148d49bc0(void)

void FUN_148d49bc0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x2f0);
    if (plVar6 == (longlong *)0x0) goto LAB_148d49c63;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
LAB_148d49c20:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d49c63;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x2f0);
    if (plVar4 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0x2f0) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_148d49c20;
    }
  }
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
LAB_148d49c63:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_14141b0b0(param_1,param_2,&local_40);
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d49d46 FUN_148d49d46 body=206 status=ok
// SIG undefined FUN_148d49d46(void)

void FUN_148d49d46(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1415b561e();
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xdc) == 0)) {
    lVar5 = *(longlong *)(lVar1 + 0xf0);
    if (lVar5 == 0) {
      uVar4 = FUN_14016979c();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar1 + 0xf0) = lVar5;
    }
    if (*(longlong *)(lVar1 + 0xf8) == 0) {
      if ((lVar5 != 0) && (*(longlong *)(lVar1 + 0xe8) != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(lVar1 + 0xf8) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0xe8));
          *(longlong *)(lVar1 + 0xf8) = lVar5;
          if (lVar5 != 0) {
            return;
          }
        }
      }
      FUN_148d49e14(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d49e14 FUN_148d49e14 body=960 status=ok
// SIG undefined FUN_148d49e14(void)

void FUN_148d49e14(undefined8 ****param_1)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 *****pppppuVar9;
  undefined2 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  undefined8 ****local_138;
  undefined4 local_130;
  ushort local_120;
  byte local_118;
  undefined4 local_110;
  undefined8 ****local_108 [3];
  ushort local_f0;
  byte local_e8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 local_90;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_1[0x5f] == (undefined8 ***)0x0) && (param_1[0x5d] != (undefined8 ***)0x0)) {
    lVar5 = FUN_14479d2ce(param_1 + 0x51);
    pppuVar1 = param_1[0x5d];
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,lVar5);
    FUN_1448729ea(pppuVar1 + 0xa4,&local_138,&local_b8);
    fVar11 = (float)FUN_144a7b41a(&local_138,0);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_118 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppppuVar9 = &local_138;
      if (0x18 < local_120) {
        pppppuVar9 = (undefined8 *****)local_138;
      }
      (*pcVar2)(pppppuVar9);
    }
    if (0x18 < local_120) {
      FUN_1400020a8(local_138);
    }
    FUN_144a5ac3a(&local_b8);
    if ((lVar5 != 0) && (0.0001 < fVar11)) {
      pppuVar1 = param_1[0x5d];
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_90 = 0;
      FUN_1456bb102(&local_b8,lVar5);
      puVar10 = &local_e0;
      FUN_1448729ea(pppuVar1 + 0x9a,puVar10,&local_b8);
      fVar12 = (float)FUN_144a7b41a(puVar10,0);
      if (0.0001 < fVar12) {
        pppuVar1 = param_1[0x5d];
        local_138 = (undefined8 ****)((ulonglong)local_138 & 0xffffffffffffff00);
        local_110 = 0;
        FUN_1456bb102(&local_138,lVar5);
        FUN_1448729ea(pppuVar1 + 0xae,local_108,&local_138);
        fVar12 = (float)FUN_144a7b41a(local_108,0);
        bVar3 = 0.0001 < fVar12;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppppuVar9 = local_108;
          if (0x18 < local_f0) {
            pppppuVar9 = (undefined8 *****)local_108[0];
          }
          (*pcVar2)(pppppuVar9);
        }
        if (0x18 < local_f0) {
          FUN_1400020a8(local_108[0]);
        }
        FUN_144a5ac3a(&local_138);
      }
      else {
        bVar3 = false;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_c8) {
          puVar10 = (undefined2 *)CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
        }
        (*pcVar2)(puVar10);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0)));
      }
      FUN_144a5ac3a(&local_b8);
      if (bVar3) {
        uVar6 = FUN_1401b4c98(lVar5);
        uVar7 = FUN_14479d2ce(param_1 + 0x51);
        local_138 = (undefined8 *****)0x0;
        local_130 = 0;
        FUN_1446efa72(&local_138,0,3,0x10);
        ppppuVar4 = local_138;
        local_130 = 3;
        *local_138 = (undefined8 ***)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 1);
        lVar5 = DAT_14c758608 + 1;
        if (ppppuVar8 == (undefined8 ****)0x0) {
          LOCK();
          UNLOCK();
          ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 2);
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_138[2] = ppppuVar8;
        *local_138 = (undefined8 ***)&PTR_FUN_14b976280;
        local_138[3] = (undefined8 ****)0x0;
        FUN_14485c47a(local_138 + 3,uVar7);
        ppppuVar4[4] = param_1;
        local_b8 = 0;
        local_b0 = 0;
        FUN_14487d8d8(&local_b8,&local_138);
        local_78 = 1;
        local_148 = &local_e0;
        local_e0 = 0;
        uStack_dc = 0xbf800000;
        FUN_1406f4044(uVar6,param_1 + 0x5f,&local_b8,fVar11);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
        FUN_1449db362(&local_138);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4a1d6 FUN_148d4a1d6 body=26 status=ok
// SIG undefined FUN_148d4a1d6(void)

void FUN_148d4a1d6(undefined8 param_1)

{
  FUN_148d4a1f0();
  FUN_14147079a(param_1);
  return;
}



// FUNCTION 148d4a1f0 FUN_148d4a1f0 body=105 status=ok
// SIG undefined FUN_148d4a1f0(void)

void FUN_148d4a1f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x288);
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x2f8);
      uVar2 = FUN_1401b4c98(lVar1);
      lVar1 = FUN_144a61814(uVar2,puVar3);
      if (lVar1 != 0) {
        FUN_1405a424c(uVar2,*puVar3);
      }
      *puVar3 = 0;
    }
  }
  return;
}



// FUNCTION 148d4a25a FUN_148d4a25a body=26 status=ok
// SIG undefined FUN_148d4a25a(void)

void FUN_148d4a25a(undefined8 param_1)

{
  FUN_140e0bb56();
  FUN_148d49e14(param_1);
  return;
}



// FUNCTION 148d4a274 FUN_148d4a274 body=32 status=ok
// SIG undefined FUN_148d4a274(void)

void FUN_148d4a274(undefined8 param_1,undefined4 param_2)

{
  FUN_148d4a1f0();
  FUN_140d7749e(param_1,param_2);
  return;
}



// FUNCTION 148d4a294 FUN_148d4a294 body=960 status=ok
// SIG undefined FUN_148d4a294(void)

void FUN_148d4a294(undefined8 ****param_1)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 *****pppppuVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 local_e8 [2];
  undefined4 local_e4;
  undefined8 ****local_e0;
  undefined4 local_d8;
  ushort local_c8;
  byte local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 local_90;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar5 = FUN_14479d2ce(param_1 + 0x51);
  pppuVar1 = param_1[0x5d];
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_90 = 0;
  FUN_1456bb102(&local_b8,uVar5);
  FUN_1448729ea(pppuVar1 + 0xa4,&local_e0,&local_b8);
  fVar9 = (float)FUN_144a7b41a(&local_e0,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar8 = &local_e0;
    if (0x18 < local_c8) {
      pppppuVar8 = (undefined8 *****)local_e0;
    }
    (*pcVar2)(pppppuVar8);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0);
  }
  FUN_144a5ac3a(&local_b8);
  pppuVar1 = param_1[0x5d];
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_90 = 0;
  FUN_1456bb102(&local_b8,uVar5);
  FUN_1448729ea(pppuVar1 + 0xae,&local_e0,&local_b8);
  fVar10 = (float)FUN_144a7b41a(&local_e0,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar8 = &local_e0;
    if (0x18 < local_c8) {
      pppppuVar8 = (undefined8 *****)local_e0;
    }
    (*pcVar2)(pppppuVar8);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0);
  }
  FUN_144a5ac3a(&local_b8);
  if (*(char *)(param_1[0x5d] + 0xb8) == '\0') {
    fVar10 = -fVar10;
  }
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + fVar9;
  FUN_148d49086(param_1,fVar10 + *(float *)((longlong)param_1 + 0x2d4));
  param_1[0x5f] = (undefined8 ***)0x0;
  pppuVar1 = param_1[0x5d];
  fVar10 = *(float *)(param_1 + 0x60);
  local_b8 = local_b8 & 0xffffffffffffff00;
  local_90 = 0;
  FUN_1456bb102(&local_b8,uVar5);
  FUN_1448729ea(pppuVar1 + 0x9a,&local_e0,&local_b8);
  fVar11 = (float)FUN_144a7b41a(&local_e0,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar8 = &local_e0;
    if (0x18 < local_c8) {
      pppppuVar8 = (undefined8 *****)local_e0;
    }
    (*pcVar2)(pppppuVar8);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0);
  }
  FUN_144a5ac3a(&local_b8);
  if (0.0001 < ABS(fVar10 - fVar11)) {
    uVar5 = FUN_1401b4c98(uVar5);
    uVar6 = FUN_14479d2ce(param_1 + 0x51);
    local_e0 = (undefined8 *****)0x0;
    local_d8 = 0;
    FUN_1446efa72(&local_e0,0,3,0x10);
    ppppuVar3 = local_e0;
    local_d8 = 3;
    *local_e0 = (undefined8 ***)&PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    ppppuVar7 = (undefined8 ****)(DAT_14c758608 + 1);
    lVar4 = DAT_14c758608 + 1;
    if (ppppuVar7 == (undefined8 ****)0x0) {
      LOCK();
      UNLOCK();
      ppppuVar7 = (undefined8 ****)(DAT_14c758608 + 2);
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_e0[2] = ppppuVar7;
    *local_e0 = (undefined8 ***)&PTR_FUN_14b9762f0;
    local_e0[3] = (undefined8 ****)0x0;
    FUN_14485c47a(local_e0 + 3,uVar6);
    ppppuVar3[4] = param_1;
    local_b8 = 0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_e0);
    local_78 = 1;
    local_f8 = local_e8;
    local_e8[0] = 0;
    local_e4 = 0xbf800000;
    FUN_1406f4044(uVar5,param_1 + 0x5f,&local_b8,fVar9);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    FUN_1449db362(&local_e0);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4a656 FUN_148d4a656 body=800 status=ok
// SIG undefined FUN_148d4a656(void)

void FUN_148d4a656(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [24];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xe0))(param_2);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14018fb44();
    if (lVar4 != 0) {
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (cVar1 = *(char *)((longlong)plVar2 + 0x121), cVar1 != '\0')) {
        if (*(char *)(param_1 + 0x304) == '\0') {
          *(char *)(param_1 + 0x304) = cVar1;
          lVar3 = FUN_1405831b2();
          uVar5 = FUN_144873cc0((ulonglong)((uint)*(byte *)(param_1 + 0x304) * 0x30) + lVar3 + 0xdc0
                               );
          if (*(longlong *)(param_1 + 0x310) == 0) {
            uVar6 = FUN_14016979c();
            uVar6 = FUN_14477b664(uVar6);
            *(undefined8 *)(param_1 + 0x310) = uVar6;
          }
          uVar6 = FUN_14016979c();
          uVar7 = FUN_14016979c();
          FUN_1402d1bfa(&local_58,uVar7,uVar5);
          if (*(longlong *)(param_1 + 0x308) != local_58) {
            *(undefined8 *)(param_1 + 0x318) = 0;
          }
          *(longlong *)(param_1 + 0x308) = local_58;
          uVar7 = FUN_14016979c();
          lVar3 = FUN_141459e9e(uVar6,uVar7);
          if (*(longlong *)(param_1 + 0x310) != lVar3) {
            *(undefined8 *)(param_1 + 0x318) = 0;
          }
          uVar6 = FUN_14477b664(lVar3);
          lVar3 = FUN_14477b664(uVar6);
          *(longlong *)(param_1 + 0x310) = lVar3;
          if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
            *(undefined8 *)(param_1 + 0x318) = uVar5;
          }
          *(undefined8 *)(param_1 + 0x330) = 0;
          *(undefined8 *)(param_1 + 0x338) = 0;
          *(undefined8 *)(param_1 + 0x340) = 0;
          plVar8 = (longlong *)FUN_1449e3f1e();
          if (plVar8 != (longlong *)0x0) {
            local_58 = FUN_14479d2ce(param_1 + 0x290);
            puVar9 = &DAT_14c9485f0;
            if ((undefined4 *)plVar2[1] != (undefined4 *)0x0) {
              puVar9 = (undefined4 *)plVar2[1];
            }
            FUN_1447325ac(puVar9,&local_60,1);
            local_50 = local_60;
            local_48 = CONCAT44(local_48._4_4_,0x3002);
            local_40 = 0;
            (**(code **)(*plVar8 + 0x2b8))(plVar8,local_78,&local_58);
            FUN_141818ba6(param_1 + 0x330,local_78);
          }
          if (*(char *)((longlong)plVar2 + 0x39) == '\0') {
            cVar1 = FUN_144a87d38(*(longlong *)(param_1 + 0x350) + 0x610);
            if (cVar1 != '\0') {
              FUN_148d49104(param_1,*(longlong *)(param_1 + 0x350) + 0x610,param_1 + 0x330);
              puVar9 = &DAT_14c9485f0;
              if ((undefined4 *)plVar2[1] != (undefined4 *)0x0) {
                puVar9 = (undefined4 *)plVar2[1];
              }
              FUN_1447325ac(puVar9,&local_80,1);
              local_58 = local_80;
              local_50 = CONCAT44(local_50._4_4_,0x3002);
              local_48 = 0;
              FUN_140e0bd1c(param_1);
            }
          }
          lVar3 = FUN_14479d2ce(param_1 + 0x290);
          FUN_148d4974e(lVar3 + 0x70d0,*(undefined4 *)(param_1 + 0x2c4));
        }
        else if ((*(char *)(param_1 + 0x304) == cVar1) &&
                (*(char *)((longlong)plVar2 + 0x39) == '\0')) {
          cVar1 = FUN_144a87d38(*(longlong *)(param_1 + 0x350) + 0x640);
          if (cVar1 != '\0') {
            uVar5 = FUN_14479d2ce(param_1 + 0x290);
            lVar3 = FUN_1447210f0(uVar5);
            if (*(float *)(param_1 + 0x348) <= (float)*(double *)(lVar3 + 0x6d0)) {
              *(float *)(param_1 + 0x348) = (float)*(double *)(lVar3 + 0x6d0) + 1.0;
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4a992 FUN_148d4a992 body=461 status=ok
// SIG undefined FUN_148d4a992(void)

void FUN_148d4a992(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1415b561e();
  cVar4 = FUN_144729dda(param_1 + 0x290);
  if (((cVar4 == '\0') || (lVar5 = *(longlong *)(param_1 + 0x2e8), lVar5 == 0)) ||
     (*(longlong *)(lVar5 + 0x4d0) == 0)) goto LAB_148d4aaa1;
  if (*(char *)(lVar5 + 0x4e8) == '\0') {
    lVar5 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar5 + 0xdc) != 0) goto LAB_148d4aaa1;
    lVar7 = *(longlong *)(lVar5 + 0xf0);
    if (lVar7 == 0) {
      uVar6 = FUN_14016979c();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(lVar5 + 0xf0) = lVar7;
    }
    if (*(longlong *)(lVar5 + 0xf8) != 0) goto LAB_148d4aaa1;
    if ((lVar7 != 0) && (*(longlong *)(lVar5 + 0xe8) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(lVar5 + 0xf8) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0xe8));
        *(longlong *)(lVar5 + 0xf8) = lVar7;
        if (lVar7 != 0) goto LAB_148d4aaa1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  lVar5 = FUN_14479d2ce(param_1 + 0x290);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x4d8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  local_40 = uVar6;
  local_38 = plVar3;
  FUN_1458d2ad6(lVar5 + 0x4ad0,&local_40,0,0);
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
LAB_148d4aaa1:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4ab60 FUN_148d4ab60 body=259 status=ok
// SIG undefined FUN_148d4ab60(void)

void FUN_148d4ab60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    cVar5 = FUN_144729dda(param_1 + 0x290);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x2f8) = 0;
      lVar6 = FUN_14479d2ce(param_1 + 0x290);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x4d8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      local_40 = uVar3;
      local_38 = plVar4;
      FUN_145a508ea(lVar6 + 0x4ad0,&local_40,0);
      plVar4 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
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
  FUN_14147079a(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4ac64 FUN_148d4ac64 body=285 status=ok
// SIG undefined FUN_148d4ac64(void)

void FUN_148d4ac64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e0bb56();
  if (*(char *)(param_1 + 0x2f8) == '\0') {
    cVar5 = FUN_144729dda(param_1 + 0x290);
    if (((cVar5 != '\0') && (*(longlong *)(param_1 + 0x2e8) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0) != 0)) {
      *(undefined1 *)(param_1 + 0x2f8) = 1;
      lVar6 = FUN_14479d2ce(param_1 + 0x290);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x4d8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      local_38 = uVar3;
      local_30 = plVar4;
      FUN_1458d2ad6(lVar6 + 0x4ad0,&local_38,0,0);
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4ad82 FUN_148d4ad82 body=252 status=ok
// SIG undefined FUN_148d4ad82(void)

void FUN_148d4ad82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140d7749e();
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    cVar5 = FUN_144729dda(param_1 + 0x290);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x2f8) = 0;
      lVar6 = FUN_14479d2ce(param_1 + 0x290);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x4d8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      local_38 = uVar3;
      local_30 = plVar4;
      FUN_145a508ea(lVar6 + 0x4ad0,&local_38,0);
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4ae84 FUN_148d4ae84 body=85 status=ok
// SIG undefined FUN_148d4ae84(void)

void FUN_148d4ae84(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1402566a4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148d4aeda(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d4aeda FUN_148d4aeda body=254 status=ok
// SIG undefined FUN_148d4aeda(void)

void FUN_148d4aeda(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (iVar2 = *(int *)(param_2 + 0x38), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(param_2 + 0x30);
    lVar6 = lVar4 + 0x28;
    do {
      iVar3 = *(int *)(param_1 + 0x8f0);
      *(uint *)(param_1 + 0x8f0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x8f4) < iVar3 + 1U) {
        FUN_14115016a((longlong *)(param_1 + 0x8e8),iVar3);
      }
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x8e8) + (longlong)iVar3 * 0x70);
      *puVar1 = *(undefined8 *)(lVar6 + -0x28);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar6 + -0x20);
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(lVar6 + -0x10);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(lVar6 + -8);
      FUN_144a7f96e(puVar1 + 5,lVar6);
      uVar5 = *(undefined8 *)(lVar6 + 0x20);
      puVar1[8] = *(undefined8 *)(lVar6 + 0x18);
      puVar1[9] = uVar5;
      puVar1[10] = *(undefined8 *)(lVar6 + 0x28);
      *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(lVar6 + 0x30);
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(lVar6 + 0x40);
      lVar7 = lVar6 + 0x48;
      lVar6 = lVar6 + 0x70;
    } while (lVar7 != (longlong)iVar2 * 0x70 + lVar4);
  }
  return;
}



// FUNCTION 148d4afd8 FUN_148d4afd8 body=33 status=ok
// SIG undefined FUN_148d4afd8(void)

void FUN_148d4afd8(longlong param_1)

{
  FUN_1488c6e08();
  FUN_148d57ca0(param_1 + 0x8c8);
  return;
}



// FUNCTION 148d4affa FUN_148d4affa body=218 status=ok
// SIG undefined FUN_148d4affa(void)

void FUN_148d4affa(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = *(int *)(param_3 + 8);
  if (0 < iVar2) {
    FUN_14053d8da(param_3,1);
    iVar2 = *(int *)(param_3 + 8);
  }
  if (((0 < *(int *)(param_2 + 8)) && (iVar2 == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x940), lVar1 != 0)) {
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,lVar1);
    local_68[0] = 0;
    local_40 = 0;
    local_b0 = &local_99;
    local_b8 = 1;
    FUN_140c3fc86(param_2,param_3,lVar1,local_98);
    FUN_144a5ac3a(local_68);
    FUN_144a5ac3a(local_98);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4b0d6 FUN_148d4b0d6 body=156 status=ok
// SIG undefined FUN_148d4b0d6(void)

longlong * FUN_148d4b0d6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (*param_1 != lVar4) {
    param_1[2] = 0;
  }
  *param_1 = lVar4;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar3 = FUN_14477b664();
  lVar4 = FUN_14477b664(uVar3);
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[6] = param_2[6];
  *(int *)(param_1 + 7) = (int)param_2[7];
  return param_1;
}



// FUNCTION 148d4b176 FUN_148d4b176 body=33 status=ok
// SIG undefined FUN_148d4b176(void)

void FUN_148d4b176(longlong param_1)

{
  FUN_1488c6e08();
  FUN_148d57ca0(param_1 + 0x8c8);
  return;
}



// FUNCTION 148d4b19c FUN_148d4b19c body=102 status=ok
// SIG undefined FUN_148d4b19c(void)

void FUN_148d4b19c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148cd5d78();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148b951cb(param_1 + 0xb70,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d4b202 FUN_148d4b202 body=102 status=ok
// SIG undefined FUN_148d4b202(void)

void FUN_148d4b202(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148cd62ee();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148b9520a(param_1 + 0xb80,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d4b294 FUN_148d4b294 body=85 status=ok
// SIG undefined FUN_148d4b294(void)

void FUN_148d4b294(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_145a8ebdc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148d60206(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d4b2ee FUN_148d4b2ee body=85 status=ok
// SIG undefined FUN_148d4b2ee(void)

void FUN_148d4b2ee(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_145a8ecc8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148d611c2(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d4b34e FUN_148d4b34e body=1435 status=ok
// SIG undefined FUN_148d4b34e(void)

void FUN_148d4b34e(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [8];
  longlong local_1a8;
  ulonglong uStack_1a0;
  code *local_198;
  undefined8 local_188;
  undefined **local_178;
  longlong local_170;
  ulonglong local_168;
  undefined8 local_160;
  ulonglong local_150 [5];
  undefined4 local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  longlong local_110;
  int local_108;
  undefined4 local_f8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((param_2 == 0 || (param_3 & 1) == 0) || (*(char *)(param_2 + 0x178) != '\x03'))
  goto LAB_148d4b3bf;
  lVar4 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     ((*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30 || (*(uint *)(param_2 + 0x6190) <= (uint)*(byte *)(param_1 + 0x68)))))
  goto LAB_148d4b3bf;
  uVar3 = (**(code **)(*(longlong *)(param_2 + 0x10c0) + 0x18))(param_2 + 0x10c0);
  lVar4 = FUN_140cbc0ba(param_2);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_120 = 0;
  local_f8 = 0;
  FUN_1456bb102(&local_120,param_2);
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 1;
  local_1e8 = lVar4;
  FUN_140371a87(&local_1a8,param_1 + 0x30,uVar3,&local_120);
  FUN_144a5ac3a(&local_120);
  uVar11 = uStack_1a0 & 0xffffffff;
  if ((0 < (int)uStack_1a0) && (*(longlong *)(local_1a8 + 8) != 0)) {
    uVar5 = FUN_140840456();
    plVar6 = (longlong *)FUN_144718840(param_2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar4 = *(longlong *)(local_1a8 + 8);
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((*(longlong *)(local_1a8 + 0x10) != 0) && (lVar8 = FUN_14087dee0(lVar7), lVar8 != 0)) {
        puVar10 = *(undefined4 **)(lVar4 + 8);
        puVar9 = &DAT_14c9485f0;
        if (puVar10 != (undefined4 *)0x0) {
          puVar9 = puVar10;
        }
        FUN_1447325ac(puVar9,&local_120,1);
        lVar8 = thunk_FUN_1488d6706(&local_120,lVar8);
        if (lVar8 != 0) {
          *(longlong *)(local_1a8 + 0x10) = lVar8;
        }
      }
      local_150[0] = 0;
      uVar5 = FUN_140265f12();
      FUN_1446ddc76(&local_120,&DAT_14b976c08,1);
      cVar2 = FUN_1407a7474(uVar5,local_150,&local_120);
      if (cVar2 != '\0') {
        FUN_142b16116(local_1b0,local_150);
        FUN_142b16116(&local_120,local_1b0);
        if ((longlong)*(int *)(lVar7 + 0x18) != 0) {
          plVar6 = *(longlong **)(lVar7 + 0x10);
          lVar7 = (longlong)*(int *)(lVar7 + 0x18) << 3;
          do {
            if (*plVar6 != 0) {
              uVar5 = FUN_143da4474();
              cVar2 = FUN_140cde234(uVar5,&local_120);
              if (cVar2 != '\0') goto LAB_148d4b5a0;
            }
            plVar6 = plVar6 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        plVar6 = (longlong *)0x0;
LAB_148d4b5a0:
        FUN_1414aeae6(&local_120);
        FUN_1414aeae6(local_1b0);
        lVar7 = local_1a8;
        if (plVar6 == (longlong *)0x0) {
          FUN_142b160fc(local_150,&local_120);
          FUN_14100ab56(lVar7,&local_120);
        }
        else {
          puVar10 = &DAT_14c9485f0;
          if (*(undefined4 **)(*plVar6 + 8) != (undefined4 *)0x0) {
            puVar10 = *(undefined4 **)(*plVar6 + 8);
          }
          FUN_144a7c8fe(puVar10,&local_120,1,1);
          FUN_140e3418c(&local_120,&local_1b8,1);
          lVar4 = FUN_14005fc76(lVar4,&local_1b8);
          if (lVar4 != 0) {
            FUN_140feb76e(local_1a8,lVar4,0x3f800000);
          }
        }
      }
      FUN_1414aeae6(local_150);
    }
    lVar4 = local_1a8;
    local_150[0] = local_150[0] & 0xffffffffffffff00;
    local_128 = 0;
    FUN_1456bb102(local_150,param_2);
    FUN_140368c94(lVar4,&local_120,local_150,0);
    FUN_144a5ac3a(local_150);
    lVar4 = CONCAT71(uStack_11f,local_120);
    if (lVar4 != 0) {
      if ((longlong)local_108 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(local_110 + lVar7) == 0) goto LAB_148d4b8cf;
          lVar7 = lVar7 + 8;
        } while ((longlong)local_108 * 8 != lVar7);
      }
      lVar7 = lVar4 + 0x70;
      lVar8 = FUN_14479d2ce(lVar7);
      if (lVar8 == 0) {
        if (*(longlong *)(lVar4 + 0x78) != 0) {
          lVar8 = FUN_140007850();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(lVar7,lVar8);
            if (lVar8 == 0) goto LAB_148d4b8cf;
          }
          else {
            uVar1 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar7,lVar8);
            }
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_148d4b68d;
        }
      }
      else {
LAB_148d4b68d:
        lVar4 = FUN_144a797b2();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
            (lVar4 = FUN_140126fc0(), lVar4 != 0)) &&
           ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)))) {
          uVar5 = FUN_1447210f0(param_2);
          local_1d8 = CONCAT71(local_1d8._1_7_,1);
          local_1e0 = 1;
          local_1e8 = param_2;
          lVar4 = FUN_141020042(uVar5,lVar8,&DAT_14c846480,param_2);
          if (lVar4 != 0) {
            local_150[0] = 0;
            FUN_14485c47a(local_150,lVar4);
            local_1b8 = 0;
            FUN_14485c47a(&local_1b8,param_2);
            local_188 = 0;
            local_178 = &PTR_LAB_14b976510;
            local_168 = local_150[0];
            local_160 = local_1b8;
            local_198 = FUN_144173706;
            local_170 = param_1;
            FUN_140f6405a(lVar4,&local_120);
          }
        }
      }
    }
LAB_148d4b8cf:
    FUN_140368b56(&local_120);
    uVar11 = uStack_1a0 & 0xffffffff;
  }
  FUN_14036924e(local_1a8,uVar11);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
LAB_148d4b3bf:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4b8ec FUN_148d4b8ec body=444 status=ok
// SIG undefined FUN_148d4b8ec(void)

void FUN_148d4b8ec(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 *local_d0;
  undefined1 local_b9;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((param_3 >> 0x10 & 1) != 0) && (param_2 != 0)) && (*(char *)(param_2 + 0x178) == '\x03')) {
    lVar2 = FUN_145b8c670();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       ((int)(uint)*(byte *)(param_1 + 0xd0) < *(int *)(param_2 + 0x6190))) {
      lVar2 = *(longlong *)
               (*(longlong *)(param_2 + 0x6188) + 0x20 +
               (ulonglong)*(byte *)(param_1 + 0xd0) * 0x170);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      else if (lVar2 == 0) goto LAB_148d4b918;
      local_a8[0] = 0;
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar2);
      local_78[0] = 0;
      local_50 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_d8 = 0;
      local_d0 = &local_b9;
      FUN_140c3fc86(param_1 + 0xb0,&local_b8,param_2,local_a8);
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        puVar3 = *(undefined4 **)(param_1 + 0xc0);
        puVar1 = puVar3 + (longlong)*(int *)(param_1 + 200) * 6;
        do {
          *(undefined4 *)(lVar2 + 0x8f8) = *puVar3;
          local_d8 = 0;
          local_d0 = &local_b9;
          FUN_140c3fc86(puVar3 + 2,&local_b8,param_2,local_a8);
          *(undefined4 *)(lVar2 + 0x8f8) = 0;
          puVar3 = puVar3 + 6;
        } while (puVar3 != puVar1);
      }
      FUN_140368c45(local_b8,uStack_b0 & 0xffffffff);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_144a5ac3a(local_78);
      FUN_144a5ac3a(local_a8);
    }
  }
LAB_148d4b918:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4baaa FUN_148d4baaa body=81 status=ok
// SIG undefined FUN_148d4baaa(void)

undefined8 * FUN_148d4baaa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = *(undefined8 *)(lVar3 + 0x58);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = *(undefined8 *)(lVar3 + 0x58);
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
  return param_2;
}



// FUNCTION 148d4bafc FUN_148d4bafc body=342 status=ok
// SIG undefined FUN_148d4bafc(void)

undefined8 * FUN_148d4bafc(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b677890;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf00000d0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadDamageAmp";
  local_30 = 0x30;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4bc54 FUN_148d4bc54 body=288 status=ok
// SIG undefined FUN_148d4bc54(void)

void FUN_148d4bc54(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_2;
  local_98[0] = 0;
  local_70 = 0;
  FUN_140b359ca(local_98);
  FUN_1448729ea(param_1 + 0x88,local_68,local_98);
  uVar6 = FUN_144a7b41a(local_68,0x3f800000);
  uVar4 = FUN_148bc9ce0();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,0);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_68;
    if (0x18 < local_50) {
      pppuVar5 = (undefined8 ***)local_68[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(local_98);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4bd76 FUN_148d4bd76 body=349 status=ok
// SIG undefined FUN_148d4bd76(void)

void FUN_148d4bd76(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x40);
    if (plVar6 == (longlong *)0x0) goto LAB_148d4be10;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_148d4bdcd:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d4be10;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x40);
    if (plVar4 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0x40) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_148d4bdcd;
    }
  }
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
LAB_148d4be10:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4beea FUN_148d4beea body=837 status=ok
// SIG undefined FUN_148d4beea(void)

void FUN_148d4beea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined8 *local_128;
  undefined4 local_120;
  undefined2 local_118 [2];
  undefined4 local_114;
  undefined1 local_110;
  undefined7 uStack_10f;
  longlong *local_108;
  undefined4 local_e8;
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined8 ***local_b8;
  undefined4 local_b0;
  ushort local_a0;
  byte local_98;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if ((*(char *)(lVar6 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(longlong *)(lVar6 + 0x1878) + 0x20))(lVar6 + 0x1878,&local_110);
    lVar3 = CONCAT71(uStack_10f,local_110);
    if (lVar3 != 0) {
      uVar7 = FUN_148bc9ce0();
      if (*(longlong *)(lVar3 + 0x200) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1403f69f4(*(longlong *)(lVar3 + 0x200),uVar7,0);
      }
      FUN_140d4c8ba(lVar3,&local_b8,uVar7);
      uVar10 = FUN_144a7b41a(&local_b8,0x3f800000);
      *(undefined4 *)(param_1 + 0x50) = uVar10;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar9 = &local_b8;
        if (0x18 < local_a0) {
          ppppuVar9 = (undefined8 ****)local_b8;
        }
        (*pcVar4)(ppppuVar9);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(local_b8);
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
    FUN_148d55b98(lVar6,2,*(undefined1 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar7 = FUN_1401b4c98(lVar6);
    lVar3 = *(longlong *)(param_1 + 0x38);
    local_110 = 0;
    local_e8 = 0;
    FUN_1456bb102(&local_110,lVar6);
    FUN_1448729ea(lVar3 + 0xd8,local_e0,&local_110);
    uVar10 = FUN_144a7b41a(local_e0,0x3f800000);
    local_128 = (undefined8 *)0x0;
    local_120 = 0;
    FUN_1446efa72(&local_128,0,3,0x10);
    puVar5 = local_128;
    local_120 = 3;
    *local_128 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_128[2] = lVar8;
    *local_128 = &PTR_FUN_14b976530;
    local_128[3] = 0;
    FUN_14485c47a(local_128 + 3,lVar6);
    puVar5[4] = param_1;
    local_b8 = (undefined8 ****)0x0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_128);
    local_78 = 1;
    local_138 = local_118;
    local_118[0] = 0;
    local_114 = 0xbf800000;
    FUN_1406f4044(uVar7,param_1 + 0x48,&local_b8,uVar10);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    FUN_1449db362(&local_128);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar9 = local_e0;
      if (0x18 < local_c8) {
        ppppuVar9 = (undefined8 ****)local_e0[0];
      }
      (*pcVar4)(ppppuVar9);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(local_e0[0]);
    }
    FUN_144a5ac3a(&local_110);
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4c230 FUN_148d4c230 body=59 status=ok
// SIG undefined FUN_148d4c230(void)

void FUN_148d4c230(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    FUN_148d55dc6(lVar1,2,*(undefined1 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148d4c26c FUN_148d4c26c body=57 status=ok
// SIG undefined FUN_148d4c26c(void)

undefined8 FUN_148d4c26c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  lVar2 = FUN_14492b4b4(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_1418e90d0(lVar2,param_2);
    return uVar1;
  }
  return 1;
}



// FUNCTION 148d4c2a6 FUN_148d4c2a6 body=349 status=ok
// SIG undefined FUN_148d4c2a6(void)

void FUN_148d4c2a6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x30);
    if (plVar6 == (longlong *)0x0) goto LAB_148d4c340;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d4c2fd:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d4c340;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_148d4c2fd;
    }
  }
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
LAB_148d4c340:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4c41a FUN_148d4c41a body=36 status=ok
// SIG undefined FUN_148d4c41a(void)

void FUN_148d4c41a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  FUN_148d55b98(uVar1,1,*(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 148d4c440 FUN_148d4c440 body=123 status=ok
// SIG undefined FUN_148d4c440(void)

void FUN_148d4c440(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_148d55dc6(lVar1,1,*(undefined1 *)(param_1 + 0x20));
    if (*(char *)(lVar1 + 0x178) == '\x03') {
      FUN_140457ffc(lVar1 + 0x1890,lVar1);
    }
    lVar1 = FUN_14082ce84(*(longlong *)(param_1 + 0x28) + 0x230);
    if (lVar1 != 0) {
      FUN_148d4c4bc(param_1,*(longlong *)(param_1 + 0x28) + 0x230,0);
    }
  }
  FUN_148d4c7dc(param_1);
  return;
}



// FUNCTION 148d4c4bc FUN_148d4c4bc body=799 status=ok
// SIG undefined FUN_148d4c4bc(void)

void FUN_148d4c4bc(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  undefined4 uVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 **local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = FUN_14082ce84(param_2);
  if (lVar7 != 0) {
    lVar8 = FUN_14479d2ce(param_1 + 0x18);
    FUN_1405fab15(&local_d8);
    lVar6 = local_d8;
    local_c8[0] = 0;
    local_a0 = 0;
    FUN_1456bb102(local_c8,lVar8);
    FUN_1448729ea(param_2 + 0x18,local_98,local_c8);
    uVar11 = FUN_144a7b41a(local_98,0);
    *(undefined4 *)(lVar6 + 8) = uVar11;
    *(undefined1 *)(lVar6 + 0xc) = 1;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar10 = local_98;
      if (0x18 < local_80) {
        pppuVar10 = (undefined8 ***)local_98[0];
      }
      (*pcVar3)(pppuVar10);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
    FUN_144a5ac3a(local_c8);
    local_c8[0] = 0;
    local_a0 = 0;
    FUN_1456bb102(local_c8,lVar8);
    FUN_1448729ea(param_2 + 0x68,local_98,local_c8);
    uVar11 = FUN_144a7b41a(local_98,0);
    *(undefined4 *)(lVar6 + 0x78) = uVar11;
    *(undefined1 *)(lVar6 + 0x7c) = 1;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar10 = local_98;
      if (0x18 < local_80) {
        pppuVar10 = (undefined8 ***)local_98[0];
      }
      (*pcVar3)(pppuVar10);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
    FUN_144a5ac3a(local_c8);
    if (0.0 < param_3) {
      *(float *)(lVar6 + 0x260) = param_3;
      *(undefined1 *)(lVar6 + 0x264) = 1;
    }
    uVar9 = (**(code **)(*(longlong *)(lVar8 + 0x3c8) + 0x18))(lVar8 + 0x3c8);
    *(undefined8 *)(lVar6 + 0x10) = uVar9;
    FUN_14118c70e(lVar6 + 0x18,lVar8 + 0xe78);
    (**(code **)(*(longlong *)(lVar6 + 0x58) + 0x20))(lVar6 + 0x58,0);
    *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar8 + 0xec0);
    FUN_1406022fe(lVar6 + 0x68,lVar8 + 0xec8);
    if ((0.0 < *(float *)(param_1 + 0x60)) && (param_1 + 0x60 != lVar6 + 0x270)) {
      *(float *)(lVar6 + 0x270) = *(float *)(param_1 + 0x60);
      *(undefined1 *)(lVar6 + 0x274) = 1;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb8) == '\0') {
      if ((undefined4 *)(param_1 + 0x38) != (undefined4 *)(lVar6 + 0x1e0)) {
        *(undefined8 *)(lVar6 + 0x1f0) = *(undefined8 *)(param_1 + 0x48);
        uVar11 = *(undefined4 *)(param_1 + 0x3c);
        uVar4 = *(undefined4 *)(param_1 + 0x40);
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(lVar6 + 0x1e0) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(lVar6 + 0x1e4) = uVar11;
        *(undefined4 *)(lVar6 + 0x1e8) = uVar4;
        *(undefined4 *)(lVar6 + 0x1ec) = uVar5;
        *(undefined1 *)(lVar6 + 0x1f8) = 1;
      }
    }
    local_e8 = local_d8;
    local_e0 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_f8 = 0;
    FUN_1405fd19a(lVar8,lVar7,0,&local_e8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4c7dc FUN_148d4c7dc body=582 status=ok
// SIG undefined FUN_148d4c7dc(void)

void FUN_148d4c7dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x178) == '\x03') {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_140c3c3ce();
      *(undefined8 *)(param_1 + 200) = 0;
      plVar4 = *(longlong **)(param_1 + 0xd0);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xd0) = 0;
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
    if (*(longlong *)(param_1 + 0x78) != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x78);
      uVar7 = FUN_1401b4c98(lVar6);
      lVar8 = FUN_144a61814(uVar7,puVar3);
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,*puVar3);
      }
      *puVar3 = 0;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x80);
      uVar7 = FUN_1401b4c98(lVar6);
      lVar8 = FUN_144a61814(uVar7,puVar3);
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,*puVar3);
      }
      *puVar3 = 0;
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x88);
      uVar7 = FUN_1401b4c98(lVar6);
      lVar8 = FUN_144a61814(uVar7,puVar3);
      if (lVar8 != 0) {
        FUN_1405a424c(uVar7,*puVar3);
      }
      *puVar3 = 0;
    }
    uVar7 = FUN_1447210f0(lVar6);
    lVar8 = FUN_1412af310(uVar7);
    if (lVar8 != 0) {
      FUN_14127ea9c(lVar8,lVar6,0);
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x70);
    uVar7 = FUN_1401b4c98(lVar6);
    lVar6 = FUN_144a61814(uVar7,puVar3);
    if (lVar6 != 0) {
      FUN_1405a424c(uVar7,*puVar3);
    }
    *puVar3 = 0;
  }
  cVar5 = FUN_1404fa388(param_1 + 0x90);
  if (cVar5 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar8 = *(longlong *)(lVar6 + 0x3a8);
    if (lVar8 == 0) {
      uVar7 = FUN_140067708();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(lVar6 + 0x3a8) = lVar8;
    }
    lVar9 = *(longlong *)(lVar6 + 0x3b0);
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*(longlong *)(lVar6 + 0x3a0) != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 0x3a0));
      }
      *(longlong *)(lVar6 + 0x3b0) = lVar9;
    }
    FUN_140bd765a(param_1 + 0x90,lVar9,0);
    return;
  }
  return;
}



// FUNCTION 148d4ca22 FUN_148d4ca22 body=1969 status=ok
// SIG undefined FUN_148d4ca22(void)

void FUN_148d4ca22(undefined8 ****param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ****ppppuVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuVar12;
  undefined8 *****pppppuVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 local_d8 [2];
  undefined4 local_d4;
  undefined8 ****local_d0;
  undefined4 local_c8;
  ushort local_b8;
  byte local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_80;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = FUN_14479d2ce(param_1 + 3);
  if ((lVar7 != 0) && (pppuVar12 = param_1[5], pppuVar12 != (undefined8 ***)0x0)) {
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,lVar7);
    FUN_1448729ea(pppuVar12 + 0xd,&local_d0,&local_a8);
    uVar14 = FUN_144a7b41a(&local_d0,0);
    *(undefined4 *)(param_1 + 10) = uVar14;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppuVar13 = &local_d0;
      if (0x18 < local_b8) {
        pppppuVar13 = (undefined8 *****)local_d0;
      }
      (*pcVar1)(pppppuVar13);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    pppuVar12 = param_1[5];
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,lVar7);
    FUN_1448729ea(pppuVar12 + 0x3c,&local_d0,&local_a8);
    uVar14 = FUN_144a7b41a(&local_d0,0x3f800000);
    *(undefined4 *)(param_1 + 0xb) = uVar14;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppuVar13 = &local_d0;
      if (0x18 < local_b8) {
        pppppuVar13 = (undefined8 *****)local_d0;
      }
      (*pcVar1)(pppppuVar13);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    pppuVar12 = param_1[5];
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,lVar7);
    FUN_1448729ea(pppuVar12 + 0x9e,&local_d0,&local_a8);
    uVar14 = FUN_14005fbd2(&local_d0,0);
    *(undefined4 *)((longlong)param_1 + 100) = uVar14;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppuVar13 = &local_d0;
      if (0x18 < local_b8) {
        pppppuVar13 = (undefined8 *****)local_d0;
      }
      (*pcVar1)(pppppuVar13);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    pppuVar12 = param_1[5];
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,lVar7);
    FUN_1448729ea(pppuVar12 + 0xbf,&local_d0,&local_a8);
    uVar14 = FUN_144a7b41a(&local_d0,0x3f800000);
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar14;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppuVar13 = &local_d0;
      if (0x18 < local_b8) {
        pppppuVar13 = (undefined8 *****)local_d0;
      }
      (*pcVar1)(pppppuVar13);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    pppuVar12 = param_1[5];
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,lVar7);
    FUN_1448729ea(pppuVar12 + 0xd3,&local_d0,&local_a8);
    iVar6 = FUN_14005fbd2(&local_d0,0);
    *(float *)(param_1 + 0xc) = (float)iVar6;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppuVar13 = &local_d0;
      if (0x18 < local_b8) {
        pppppuVar13 = (undefined8 *****)local_d0;
      }
      (*pcVar1)(pppppuVar13);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(lVar7 + 0x6c);
    lVar2 = *(longlong *)(lVar7 + 0x1c8);
    if (lVar2 == 0) {
      puVar8 = &DAT_14c8464e0;
      pppuVar12 = DAT_14c8464f0;
    }
    else {
      pppuVar12 = *(undefined8 ****)(lVar2 + 0x270);
      puVar8 = (undefined8 *)(lVar2 + 0x260);
    }
    uVar14 = *(undefined4 *)((longlong)puVar8 + 4);
    uVar3 = *(undefined4 *)(puVar8 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)puVar8;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar14;
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
    param_1[9] = pppuVar12;
    FUN_148d4d1d4(param_1);
    pppuVar12 = param_1[5];
    if ((*(char *)(pppuVar12 + 0xdd) == '\x01') && (*(char *)(lVar7 + 0x178) == '\x03')) {
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      FUN_1446efa72(&local_a8,0,3,0x10);
      puVar8 = local_a8;
      local_a0 = 3;
      *local_a8 = &PTR_LAB_14b3e9ef0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_a8[2] = lVar10;
      *local_a8 = &PTR_FUN_14b9765a0;
      local_a8[3] = 0;
      FUN_14485c47a(local_a8 + 3,lVar7);
      puVar8[4] = param_1;
      FUN_1403524de(lVar7 + 0x1890,&local_d0,&local_a8);
      FUN_1449db362(&local_a8);
      pppuVar12 = param_1[5];
    }
    FUN_148d4c4bc(param_1,pppuVar12 + 0x18,0);
    fVar15 = *(float *)(param_1 + 10);
    if (fVar15 <= 0.0) {
      fVar15 = *(float *)((longlong)param_1 + 0x54);
    }
    FUN_148d4c4bc(param_1,param_1[5] + 0x2f,fVar15);
    FUN_148d4d2b8(param_1);
    FUN_148d4d6a4(param_1);
    if (*(char *)(lVar7 + 0x178) == '\x03') {
      FUN_148d4dd1c(param_1);
      pppuVar12 = param_1[5];
      local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(&local_a8,lVar7);
      FUN_1448729ea(pppuVar12 + 0x94,&local_d0,&local_a8);
      fVar15 = (float)FUN_144a7b41a(&local_d0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppppuVar13 = &local_d0;
        if (0x18 < local_b8) {
          pppppuVar13 = (undefined8 *****)local_d0;
        }
        (*pcVar1)(pppppuVar13);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(local_d0);
      }
      FUN_144a5ac3a(&local_a8);
      if (fVar15 <= 0.0) {
        FUN_148d4e2c0(param_1,1);
      }
      else {
        uVar9 = FUN_1401b4c98(lVar7);
        local_d0 = (undefined8 *****)0x0;
        local_c8 = 0;
        FUN_1446efa72(&local_d0,0,3,0x10);
        ppppuVar5 = local_d0;
        local_c8 = 3;
        *local_d0 = (undefined8 ***)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 1);
        lVar2 = DAT_14c758608 + 1;
        if (ppppuVar11 == (undefined8 ****)0x0) {
          LOCK();
          UNLOCK();
          ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 2);
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_d0[2] = ppppuVar11;
        *local_d0 = (undefined8 ***)&PTR_FUN_14b976610;
        local_d0[3] = (undefined8 ****)0x0;
        FUN_14485c47a(local_d0 + 3,lVar7);
        ppppuVar5[4] = param_1;
        local_a8 = (undefined8 *)0x0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_d0);
        local_68 = 1;
        local_e8 = local_d8;
        local_d8[0] = 0;
        local_d4 = 0xbf800000;
        FUN_1406f4044(uVar9,param_1 + 0x10,&local_a8,fVar15);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        FUN_1449db362(&local_d0);
      }
    }
    if (0.0 < *(float *)(param_1 + 10)) {
      uVar9 = FUN_1401b4c98(lVar7);
      uVar14 = *(undefined4 *)(param_1 + 10);
      local_d0 = (undefined8 *****)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      ppppuVar5 = local_d0;
      local_c8 = 3;
      *local_d0 = (undefined8 ***)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 1);
      lVar2 = DAT_14c758608 + 1;
      if (ppppuVar11 == (undefined8 ****)0x0) {
        LOCK();
        UNLOCK();
        ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 2);
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_d0[2] = ppppuVar11;
      *local_d0 = (undefined8 ***)&PTR_FUN_14b976680;
      local_d0[3] = (undefined8 ****)0x0;
      FUN_14485c47a(local_d0 + 3,lVar7);
      ppppuVar5[4] = param_1;
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_d0);
      local_68 = 1;
      local_e8 = local_d8;
      local_d8[0] = 1;
      local_d4 = 0xbf800000;
      FUN_1406f4044(uVar9,param_1 + 0xe,&local_a8,uVar14);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_d0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4d1d4 FUN_148d4d1d4 body=226 status=ok
// SIG undefined FUN_148d4d1d4(void)

void FUN_148d4d1d4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3c8) + 0x18))(lVar1 + 0x3c8);
  if (lVar2 != 0) {
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(lVar2 + 8);
    }
    local_38 = lVar1;
    FUN_1447325ac(puVar4,&local_40,1);
    local_30 = local_40;
    local_28 = 0x3002;
    local_20 = 0;
    plVar3 = (longlong *)FUN_1449e3f1e();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b8))(plVar3,local_58,&local_38);
      FUN_141818ba6(param_1 + 0xb0,local_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4d2b8 FUN_148d4d2b8 body=1003 status=ok
// SIG undefined FUN_148d4d2b8(void)

void FUN_148d4d2b8(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  ulonglong local_f8 [2];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d0;
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar6 = FUN_14479d2ce(param_1 + 0x18);
  local_108 = 0;
  local_100 = 0;
  lVar7 = FUN_140b51ce6();
  if (lVar7 == 0) {
    lVar7 = FUN_1402d1dc0(*(longlong *)(param_1 + 0x28) + 0x338);
  }
  else {
    local_f8[1] = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_f8[0] = uVar6;
    lVar7 = FUN_1415d7f30(lVar7,local_f8,&local_108,0);
  }
  if (lVar7 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    local_f8[0] = local_f8[0] & 0xffffffffffffff00;
    local_d0 = 0;
    FUN_1456bb102(local_f8,uVar6);
    FUN_1448729ea(lVar9 + 0x2e8,local_c8,local_f8);
    iVar5 = FUN_14005fbd2(local_c8,1);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar10 = local_c8;
      if (0x18 < local_b0) {
        ppppuVar10 = (undefined8 ****)local_c8[0];
      }
      (*pcVar1)(ppppuVar10);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(local_c8[0]);
    }
    FUN_144a5ac3a(local_f8);
    uVar4 = DAT_14c846508;
    uVar3 = DAT_14c8464f8;
    if (0 < iVar5) {
      fVar11 = (float)iVar5;
      dVar2 = DAT_14c846500;
      do {
        local_198 = &local_150;
        if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb8) == '\0') {
          local_150 = uVar3;
          local_140 = uVar4;
          local_168 = *(undefined4 *)(param_1 + 0x38);
          uStack_164 = *(undefined4 *)(param_1 + 0x3c);
          uStack_160 = *(undefined4 *)(param_1 + 0x40);
          uStack_15c = *(undefined4 *)(param_1 + 0x44);
          local_158 = *(undefined8 *)(param_1 + 0x48);
          local_178 = 0;
          local_180 = 0;
          local_188 = 0;
          local_190 = 0;
          local_148 = dVar2;
          plVar8 = (longlong *)FUN_140a44468(lVar7,*(undefined8 *)(uVar6 + 0x1c8),0,&local_168);
          if (plVar8 != (longlong *)0x0) {
            FUN_14057a3b2(plVar8,1,1,1);
            goto LAB_148d4d5df;
          }
        }
        else {
          local_120 = uVar3;
          local_110 = uVar4;
          local_138 = (undefined4)DAT_14c8464e0;
          uStack_134 = DAT_14c8464e0._4_4_;
          uStack_130 = (undefined4)DAT_14c8464e8;
          uStack_12c = DAT_14c8464e8._4_4_;
          local_128 = DAT_14c8464f0;
          local_178 = 0;
          local_180 = 0;
          local_188 = 0;
          local_198 = &local_120;
          local_190 = 0;
          local_118 = dVar2;
          plVar8 = (longlong *)FUN_140a44468(lVar7,*(undefined8 *)(uVar6 + 0x1c8),0,&local_138);
          if (plVar8 != (longlong *)0x0) {
LAB_148d4d5df:
            if (0 < local_100) {
              local_f8[0] = local_f8[0] & 0xffffffffffffff00;
              local_d0 = 0;
              FUN_1456bb102(local_f8,uVar6);
              FUN_140e99737(plVar8,&local_108);
              FUN_144a5ac3a(local_f8);
            }
            lVar9 = *(longlong *)(param_1 + 0x28);
            if (*(longlong *)(lVar9 + 0x378) != 0) {
              (**(code **)(*plVar8 + 0xa08))
                        (plVar8,*(longlong *)(lVar9 + 0x378),*(undefined4 *)(param_1 + 0x58));
              lVar9 = *(longlong *)(param_1 + 0x28);
            }
            if (*(longlong *)(lVar9 + 0x380) != 0) {
              fVar12 = *(float *)(param_1 + 0x50);
              if (fVar12 <= 0.0) {
                fVar12 = *(float *)(param_1 + 0x54);
              }
              (**(code **)(*plVar8 + 0xa08))(plVar8,*(longlong *)(lVar9 + 0x380),fVar12);
            }
            (**(code **)(*plVar8 + 0xa60))(plVar8,1);
          }
        }
        dVar2 = dVar2 + (double)(360.0 / fVar11);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4d6a4 FUN_148d4d6a4 body=1655 status=ok
// SIG undefined FUN_148d4d6a4(void)

void FUN_148d4d6a4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = (undefined8 *)(param_1 + 0x90);
  cVar5 = FUN_1404fa388(puVar2);
  if (cVar5 != '\0') {
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar7 = *(longlong *)(lVar8 + 0x3a8);
    if (lVar7 == 0) {
      uVar6 = FUN_140067708();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(lVar8 + 0x3a8) = lVar7;
    }
    lVar9 = *(longlong *)(lVar8 + 0x3b0);
    if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(lVar8 + 0x3a0) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x3a0));
      }
      *(longlong *)(lVar8 + 0x3b0) = lVar9;
    }
    FUN_140bd765a(puVar2,lVar9,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x28);
  lVar7 = *(longlong *)(lVar8 + 0x390);
  if (lVar7 == 0) {
    uVar6 = FUN_140067708();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar8 + 0x390) = lVar7;
  }
  if (*(longlong *)(lVar8 + 0x398) == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar8 + 0x388) == 0)) goto LAB_148d4d9a6;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      *(undefined8 *)(lVar8 + 0x398) = 0;
      goto LAB_148d4d9a6;
    }
    uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x388));
    *(longlong *)(lVar8 + 0x398) = lVar7;
    if (lVar7 == 0) goto LAB_148d4d9a6;
  }
  lVar8 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(*(longlong *)(lVar8 + 0x3d8) + 0x10))(lVar8 + 0x3d8,&local_60);
  if (local_60 != 0) {
    uVar11 = FUN_1403c747e(local_60,&local_68,0);
    if (local_68 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      lVar7 = *(longlong *)(lVar8 + 0x3c0);
      if (lVar7 == 0) {
        uVar6 = FUN_1407f787c();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar8 + 0x3c0) = lVar7;
        uVar11 = extraout_XMM0_Da;
      }
      if (*(longlong *)(lVar8 + 0x3c8) == 0) {
        if ((lVar7 != 0) && (*(longlong *)(lVar8 + 0x3b8) != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar11 = extraout_XMM0_Da_01,
             cVar5 == '\0')) {
            *(undefined8 *)(lVar8 + 0x3c8) = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x3b8));
            *(longlong *)(lVar8 + 0x3c8) = lVar7;
            uVar11 = extraout_XMM0_Da_02;
            if (lVar7 != 0) goto LAB_148d4d7cd;
          }
        }
      }
      else {
LAB_148d4d7cd:
        lVar9 = local_68;
        uVar11 = *(undefined4 *)(param_1 + 0x58);
        lVar8 = *(longlong *)(param_1 + 0x28);
        lVar7 = *(longlong *)(lVar8 + 0x3c0);
        if (lVar7 == 0) {
          uVar6 = FUN_1407f787c();
          lVar7 = FUN_14477b664(uVar6);
          *(longlong *)(lVar8 + 0x3c0) = lVar7;
        }
        lVar10 = *(longlong *)(lVar8 + 0x3c8);
        if (((lVar10 == 0) && (lVar10 = 0, lVar7 != 0)) && (*(longlong *)(lVar8 + 0x3b8) != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar10 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x3b8));
          }
          *(longlong *)(lVar8 + 0x3c8) = lVar10;
        }
        local_a8 = 0;
        uVar11 = FUN_1447997cc(lVar9,lVar10,uVar11,0);
      }
      lVar8 = *(longlong *)(param_1 + 0xb8);
      if (lVar8 == 0) {
        uVar6 = FUN_1405b1a32();
        lVar8 = FUN_14477b664(uVar6);
        *(longlong *)(param_1 + 0xb8) = lVar8;
        uVar11 = extraout_XMM0_Da_00;
      }
      plVar3 = (longlong *)(param_1 + 0xb0);
      lVar7 = *(longlong *)(param_1 + 0xc0);
      if (lVar7 == 0) {
        if ((lVar8 != 0) && (*plVar3 != 0)) {
          plVar4 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            *(undefined8 *)(param_1 + 0xc0) = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar7 = FUN_144aff482(uVar6,plVar3);
            *(longlong *)(param_1 + 0xc0) = lVar7;
            if (lVar7 != 0) {
              lVar8 = *(longlong *)(param_1 + 0xb8);
              uVar11 = extraout_XMM0_Da_03;
              goto LAB_148d4d858;
            }
          }
        }
      }
      else {
LAB_148d4d858:
        if (lVar8 == 0) {
          uVar6 = FUN_1405b1a32(uVar11,lVar7);
          lVar8 = FUN_14477b664(uVar6);
          *(longlong *)(param_1 + 0xb8) = lVar8;
          if (((*(longlong *)(param_1 + 0xc0) == 0) && (lVar8 != 0)) && (*plVar3 != 0)) {
            plVar4 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
              uVar6 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
              uVar6 = FUN_144aff482(uVar6,plVar3);
            }
            *(undefined8 *)(param_1 + 0xc0) = uVar6;
          }
        }
        FUN_140849a08(local_68);
      }
      lVar8 = *(longlong *)(param_1 + 0x28);
      lVar7 = *(longlong *)(lVar8 + 0x390);
      if (lVar7 == 0) {
        uVar6 = FUN_140067708();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar8 + 0x390) = lVar7;
      }
      lVar9 = *(longlong *)(lVar8 + 0x398);
      if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(lVar8 + 0x388) != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          lVar9 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x388));
        }
        *(longlong *)(lVar8 + 0x398) = lVar9;
      }
      FUN_141505908(local_90,&local_68);
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        local_98 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
        local_98 = local_58;
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      FUN_140c72376(&local_88,local_a0,local_90,lVar9);
      if (puVar2 != &local_88) {
        *(undefined8 *)(param_1 + 0x90) = local_88;
        local_88 = 0;
        plVar4 = *(longlong **)(param_1 + 0x98);
        *(longlong **)(param_1 + 0x98) = local_80;
        local_80 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0xa0) = local_78;
      *(undefined4 *)(param_1 + 0xa4) = uStack_74;
      *(undefined4 *)(param_1 + 0xa8) = uStack_70;
      *(undefined4 *)(param_1 + 0xac) = uStack_6c;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    FUN_144a61ac8(&local_68);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_148d4d9a6:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4dd1c FUN_148d4dd1c body=1442 status=ok
// SIG undefined FUN_148d4dd1c(void)

void FUN_148d4dd1c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 ****ppppuVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined1 auStack_388 [32];
  undefined1 local_368;
  undefined1 local_358 [40];
  undefined4 local_330;
  undefined8 ***local_328 [3];
  ushort local_310;
  byte local_308;
  undefined8 *local_300;
  longlong *local_2f8;
  undefined2 local_2e0;
  undefined1 local_2d8;
  char local_2d0;
  longlong local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar11 = FUN_14479d2ce(param_1 + 0x18);
  if ((*(char *)(lVar11 + 0x178) == '\x03') &&
     (lVar12 = FUN_1407a0dc0(*(longlong *)(param_1 + 0x28) + 0x3d0), lVar12 != 0)) {
    uVar13 = FUN_1447210f0(lVar11);
    FUN_1409e0c66(&local_2c8,uVar13);
    if (plStack_2c0 != (longlong *)0x0) {
      iVar10 = (int)plStack_2c0[1];
      do {
        if (iVar10 == 0) {
          plVar15 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar9 = (int)plStack_2c0[1];
        bVar18 = iVar10 == iVar9;
        if (bVar18) {
          *(int *)(plStack_2c0 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
        plVar15 = plStack_2c0;
      } while (!bVar18);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))();
      }
      lVar14 = local_2c8;
      if (plVar15 != (longlong *)0x0) {
        if (local_2c8 != 0) {
          local_2a0 = 0;
          local_298 = 0;
          local_2c8 = 0;
          plStack_2c0 = (longlong *)0x0;
          local_2b8 = 0;
          local_294 = 0xffffffff00000080;
          local_28c = 0;
          local_280 = 0;
          local_278 = 0;
          local_250 = 0;
          local_248 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_244 = 0xffffffff00000080;
          local_23c = 0;
          local_230 = 0;
          local_228 = 0;
          local_220 = 0;
          local_218 = 0xffffffff00000000;
          local_1f0 = 0;
          local_1e8 = 0;
          local_210 = 0;
          uStack_208 = 0;
          local_1e4 = 0xffffffff00000080;
          local_1dc = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          local_198 = 0;
          local_170 = 0;
          local_168 = 0x200000000;
          local_158 = 0;
          local_150 = 0;
          uStack_14c = 0x20;
          uStack_148 = 0xffffffff;
          uStack_144 = 0;
          local_138 = 0;
          local_130 = 0;
          local_108 = 0;
          local_100 = 0x200000000;
          local_f0 = 0;
          local_e8 = 0;
          uStack_e4 = 0x20;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_a0 = 0;
          local_98 = 0x200000000;
          local_88 = 0;
          local_80 = 0;
          uStack_7c = 0x20;
          uStack_78 = 0xffffffff;
          uStack_74 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar12);
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          local_2c8 = lVar12;
          if (*(longlong *)(lVar3 + 0x498) != 0) {
            local_358[0] = 0;
            local_330 = 0;
            FUN_1456bb102(local_358,lVar11);
            FUN_1448729ea(lVar3 + 0x448,local_328,local_358);
            uVar19 = FUN_144a7b41a(local_328,0x3f800000);
            local_300 = (undefined8 *)0x0;
            local_2e0 = 4;
            local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,uVar19);
            local_2d8 = 3;
            local_2d0 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
            uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x498);
            uVar7 = (uint)((ulonglong)uVar13 >> 0x10);
            uVar16 = (uint)uVar13 & 0xffff;
            FUN_1488e4742(&plStack_2c0,
                          ((uint)uVar13 << 0x10 | uVar16) + (int)((ulonglong)uVar13 >> 0x20) +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar16 >> 4),
                          *(longlong *)(param_1 + 0x28) + 0x498,&local_300);
            FUN_144a2da94(&local_300);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_308 * 0x120));
            if (pcVar6 != (code *)0x0) {
              ppppuVar17 = local_328;
              if (0x18 < local_310) {
                ppppuVar17 = (undefined8 ****)local_328[0];
              }
              (*pcVar6)(ppppuVar17);
            }
            if (0x18 < local_310) {
              FUN_1400020a8(local_328[0]);
            }
            FUN_144a5ac3a(local_358);
          }
          FUN_140ff15b2(&local_2c8);
          local_368 = 0;
          FUN_140a41f04(lVar14,&local_300,lVar11,&local_2c8);
          plVar2 = local_2f8;
          if ((undefined8 **)(param_1 + 200) != &local_300) {
            *(undefined8 **)(param_1 + 200) = local_300;
            local_300 = (undefined8 *)0x0;
            plVar4 = *(longlong **)(param_1 + 0xd0);
            if (local_2f8 != plVar4) {
              local_2f8 = (longlong *)0x0;
              *(longlong **)(param_1 + 0xd0) = plVar2;
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
            }
          }
          plVar2 = local_2f8;
          if (local_2f8 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_2f8 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_2f8)(local_2f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          puVar5 = *(undefined8 **)(param_1 + 200);
          if (puVar5 != (undefined8 *)0x0) {
            local_300 = (undefined8 *)0x0;
            local_2f8 = (longlong *)((ulonglong)local_2f8 & 0xffffffff00000000);
            FUN_1446efa72(&local_300,0,3,0x10);
            puVar8 = local_300;
            local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,3);
            *local_300 = &PTR_LAB_14ac8b4c0;
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 1;
            lVar12 = DAT_14c758608 + 1;
            if (lVar14 == 0) {
              LOCK();
              UNLOCK();
              lVar14 = DAT_14c758608 + 2;
              lVar12 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar12;
            local_300[2] = lVar14;
            *local_300 = &PTR_FUN_14b9766f0;
            local_300[3] = 0;
            FUN_14485c47a(local_300 + 3,lVar11);
            puVar8[4] = param_1;
            FUN_140e0aeb0(puVar5 + 0x26,local_358,&local_300);
            FUN_1449db362(&local_300);
          }
          local_2c8 = 0;
          FUN_14076ba36(&plStack_2c0);
        }
        LOCK();
        plVar2 = plVar15 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4e2c0 FUN_148d4e2c0 body=2722 status=ok
// SIG undefined FUN_148d4e2c0(void)

void FUN_148d4e2c0(undefined8 ****param_1,char param_2)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined8 *****pppppuVar15;
  longlong lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 auStack_3f8 [32];
  undefined2 *local_3d8;
  void *local_3d0;
  int local_3c8;
  undefined4 local_3c4;
  longlong *local_3c0;
  undefined1 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined **local_388;
  undefined8 *local_380;
  int local_378;
  undefined4 uStack_374;
  undefined8 local_370;
  longlong *plStack_368;
  ulonglong local_360;
  longlong alStack_358 [2];
  ulonglong uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  longlong local_330;
  undefined8 uStack_328;
  undefined1 local_320;
  undefined8 local_31c;
  undefined8 uStack_314;
  longlong local_308;
  undefined8 uStack_300;
  undefined8 ****local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined8 uStack_2c7;
  undefined8 local_2bc;
  undefined8 uStack_2b4;
  undefined4 local_2a8;
  undefined8 local_2a0;
  longlong *plStack_298;
  undefined8 local_290;
  undefined8 ****ppppuStack_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined1 local_270 [48];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined **local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 ****local_168;
  undefined4 local_160;
  longlong local_158;
  ushort local_150;
  byte local_148;
  undefined7 uStack_147;
  undefined4 local_140;
  longlong local_138 [4];
  int local_118;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  longlong local_f8;
  ushort local_f0;
  byte local_e8;
  undefined7 uStack_e7;
  longlong local_d8 [5];
  longlong local_b0 [8];
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  pppuVar1 = param_1[5];
  if ((pppuVar1[0xbc] != (undefined8 **)0x0) && (*(int *)(pppuVar1 + 0xbd) - 1U < 0xfffffffe)) {
    if ((param_2 == '\0') || (lVar7 = FUN_1407a0dc0(pppuVar1 + 0x7a), lVar7 == 0)) {
      plVar8 = (longlong *)FUN_14479d2ce(param_1 + 3);
      uVar9 = FUN_1447210f0(plVar8);
      lVar7 = FUN_1412af310(uVar9);
      if (lVar7 != 0) {
        local_3b0 = 0;
        uStack_3a8 = 0;
        local_3a0 = 0x34002;
        local_398 = 0;
        uStack_390 = 0;
        if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(plVar8);
        }
        local_3b8 = 3;
        local_70 = (longlong *)0x0;
        local_68 = 0x800000000;
        local_3c0 = plVar8;
        FUN_1488e1570(lVar7,&local_108);
        FUN_1458e842a(&local_108,&local_388);
        FUN_1458e84aa(&local_108,&local_168);
        if ((int)uStack_338 != local_118) {
          do {
            uVar4 = local_68;
            lVar16 = local_330;
            if ((int)uStack_338 < 0) {
              if ((local_118 < 0) || (*(int *)(local_168 + 0x73) <= local_118)) break;
            }
            else if (local_118 < 0) {
              if (*(int *)(local_388 + 0x73) <= (int)uStack_338) break;
            }
            else if (local_118 < *(int *)(local_168 + 0x73) ==
                     (int)uStack_338 < *(int *)(local_388 + 0x73)) break;
            lVar12 = (longlong)(int)local_68;
            uVar5 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,uVar5);
            if (local_68._4_4_ < uVar5) {
              FUN_148d553e0(local_b0,uVar4 & 0xffffffff);
            }
            plVar10 = local_70;
            if (local_70 == (longlong *)0x0) {
              plVar10 = local_b0;
            }
            plVar10[lVar12] = lVar16;
            uStack_338 = CONCAT44(uStack_338._4_4_,(int)uStack_338 + 1);
            FUN_14131935c(&local_388);
          } while ((int)uStack_338 != local_118);
        }
        if (local_158 != 0) {
          plVar10 = (longlong *)CONCAT71(uStack_147,local_148);
          if ((longlong *)CONCAT71(uStack_147,local_148) == (longlong *)0x0) {
            plVar10 = local_138;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (CONCAT44(uStack_374,local_378) != 0) {
          plVar10 = plStack_368;
          if (plStack_368 == (longlong *)0x0) {
            plVar10 = alStack_358;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_f8 != 0) {
          plVar10 = (longlong *)CONCAT71(uStack_e7,local_e8);
          if ((longlong *)CONCAT71(uStack_e7,local_e8) == (longlong *)0x0) {
            plVar10 = local_d8;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if ((int)local_68 < *(int *)((longlong)param_1 + 100)) {
          local_3d0 = (void *)0x0;
          local_3c8 = *(int *)(param_1 + 0x1c);
          lVar16 = (longlong)local_3c8;
          pppuVar1 = param_1[0x1b];
          if (lVar16 == 0) {
            local_3c4 = 0;
          }
          else {
            FUN_140bf0c0e(&local_3d0,local_3c8,0);
            memcpy(local_3d0,pppuVar1,lVar16 << 3);
            if (0 < local_3c8) {
              do {
                iVar13 = local_3c8;
                uVar5 = local_3c8 - 1;
                uVar6 = rand();
                uVar6 = (uint)((float)iVar13 * ((float)(uVar6 & 0x7fff) / 32767.0));
                if ((int)uVar6 < (int)uVar5) {
                  uVar5 = uVar6;
                }
                lVar16 = FUN_14479d2ce((void *)((longlong)(int)uVar5 * 8 + (longlong)local_3d0));
                iVar13 = ~uVar5 + local_3c8;
                if (iVar13 != 0) {
                  if (0 < iVar13) {
                    iVar13 = 1;
                  }
                  memmove((void *)((longlong)local_3d0 + (longlong)(int)uVar5 * 8),
                          (void *)((longlong)local_3d0 + (longlong)(local_3c8 - iVar13) * 8),
                          (longlong)iVar13 << 3);
                }
                local_3c8 = local_3c8 + -1;
                FUN_14819c8f6(&local_3d0);
                if (lVar16 != 0) {
                  plVar10 = local_70;
                  if (local_70 == (longlong *)0x0) {
                    plVar10 = local_b0;
                  }
                  if ((longlong)(int)local_68 != 0) {
                    lVar12 = (longlong)(int)local_68 << 3;
                    while (*(longlong *)(*plVar10 + 0x128) != lVar16) {
                      plVar10 = plVar10 + 1;
                      lVar12 = lVar12 + -8;
                      if (lVar12 == 0) goto LAB_148d4e8b7;
                    }
                    if (plVar10 != (longlong *)0x0) goto LAB_148d4e85f;
                  }
LAB_148d4e8b7:
                  local_388 = &PTR_FUN_14b322ee0;
                  local_380 = (undefined8 **)0x0;
                  local_378 = 0x34002;
                  local_2a8 = 0;
                  local_370 = 0;
                  plStack_368 = (longlong *)0x0;
                  local_360 = 0;
                  alStack_358[0] = 0;
                  alStack_358[1] = 0;
                  uStack_348 = 0;
                  local_340 = 0;
                  uStack_338 = 0;
                  local_330 = 0;
                  uStack_328 = 0;
                  local_320 = 0;
                  local_31c = 0;
                  uStack_314 = 0;
                  local_308 = 0;
                  uStack_300 = 0;
                  local_2f8 = (undefined8 *****)0x0;
                  uStack_2f0 = 0;
                  local_2e8 = 0;
                  uStack_2e0 = 0;
                  local_2d8 = 0;
                  uStack_2d0 = 0;
                  uStack_2cf = 0;
                  uStack_2c8 = 0;
                  uStack_2c7 = 0;
                  local_2bc = 0;
                  uStack_2b4 = 0;
                  local_2a0 = 0;
                  plStack_298 = (longlong *)0x0;
                  local_290 = 0;
                  ppppuStack_288 = (undefined8 ****)0x0;
                  local_280 = 0x3002;
                  local_278 = 0;
                  local_240 = 0;
                  local_238 = 0x200000000;
                  local_230 = 0;
                  local_228 = 0x3f800000;
                  local_220 = 0;
                  local_21c = 0;
                  local_210 = 0;
                  local_208 = 0xf00000d0;
                  local_200 = 0;
                  local_1f8 = 0;
                  local_1f4 = 0;
                  local_1c8 = 0;
                  uStack_1c0 = 0;
                  local_1b8 = 0;
                  local_1f0 = 0;
                  uStack_1e8 = 0;
                  local_1e0 = 0;
                  uStack_1d8 = 0;
                  local_1d0 = 0;
                  local_1b4 = 0xbf800000;
                  FUN_1405c5fa2();
                  local_1a8 = &DAT_14cb769e8;
                  local_1a0 = 0;
                  uStack_198 = 0;
                  local_1b0 = &PTR_FUN_14b0394b0;
                  local_178 = 0;
                  local_190 = 0;
                  uStack_188 = 0;
                  local_180 = 0;
                  pppuVar1 = param_1[5];
                  if (pppuVar1[0xbc] != (undefined8 **)0x0 || *(int *)(pppuVar1 + 0xbd) != 0x34002)
                  {
                    local_370 = 0;
                    local_380 = pppuVar1[0xbc];
                    local_378 = *(int *)(pppuVar1 + 0xbd);
                  }
                  local_168 = (undefined8 ****)((ulonglong)local_168 & 0xffffffffffffff00);
                  local_140 = 0;
                  FUN_1456bb102(&local_168,plVar8);
                  puVar14 = &local_108;
                  FUN_1448729ea(pppuVar1 + 0xa8,puVar14,&local_168);
                  uVar18 = FUN_144a7b41a(puVar14,0);
                  local_290 = CONCAT44(local_290._4_4_,uVar18);
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120)
                                     );
                  if (pcVar2 != (code *)0x0) {
                    if (0x18 < local_f0) {
                      puVar14 = (undefined2 *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
                    }
                    (*pcVar2)(puVar14);
                  }
                  if (0x18 < local_f0) {
                    FUN_1400020a8(CONCAT44(uStack_104,CONCAT22(uStack_106,local_108)));
                  }
                  FUN_144a5ac3a(&local_168);
                  pppuVar1 = param_1[5];
                  local_168 = (undefined8 ****)((ulonglong)local_168 & 0xffffffffffffff00);
                  local_140 = 0;
                  FUN_1456bb102(&local_168,plVar8);
                  puVar14 = &local_108;
                  FUN_1448729ea(pppuVar1 + 0xb2,puVar14,&local_168);
                  uVar18 = FUN_144a7b41a(puVar14,0);
                  local_290 = CONCAT44(uVar18,(undefined4)local_290);
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120)
                                     );
                  if (pcVar2 != (code *)0x0) {
                    if (0x18 < local_f0) {
                      puVar14 = (undefined2 *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
                    }
                    (*pcVar2)(puVar14);
                  }
                  if (0x18 < local_f0) {
                    FUN_1400020a8(CONCAT44(uStack_104,CONCAT22(uStack_106,local_108)));
                  }
                  FUN_144a5ac3a(&local_168);
                  uVar9 = (**(code **)(plVar8[0x79] + 0x18))(plVar8 + 0x79);
                  FUN_144a79b68(&local_168,uVar9);
                  if ((undefined8 *****)local_168 != (undefined8 *****)0x0) {
                    local_278 = 0;
                  }
                  ppppuStack_288 = local_168;
                  FUN_14118c70e(local_270,plVar8 + 0x1cf);
                  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(plVar8);
                  }
                  plStack_298 = plVar8;
                  (*(code *)local_1b0[4])(&local_1b0,0);
                  local_1a8 = (undefined *)plVar8[0x1d8];
                  FUN_1406022fe(&local_1a0,plVar8 + 0x1d9);
                  local_1b4 = *(undefined4 *)((longlong)param_1 + 0x5c);
                  if (DAT_14c950c29 == 1 && plVar8 != (longlong *)0x0) {
                    FUN_1456cec3c(plVar8);
                  }
                  plStack_368 = plVar8;
                  if ((DAT_14c950c29 & 1) != 0) {
                    FUN_1456cec3c(lVar16);
                  }
                  local_308 = lVar16;
                  uVar9 = FUN_14069ce7c();
                  lVar16 = FUN_144718840(lVar16,uVar9);
                  if (lVar16 != 0) {
                    uVar9 = FUN_144b2f384(lVar16);
                    FUN_147f5de74(uVar9,&local_168);
                    local_2f8 = local_168;
                  }
                  FUN_1412af85e(lVar7,&local_168,&local_388);
                  FUN_140df0e32(&local_388);
                  break;
                }
LAB_148d4e85f:
              } while (0 < local_3c8);
            }
          }
          if (local_3d0 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        pppuVar1 = param_1[5];
        local_388 = (undefined **)((ulonglong)local_388 & 0xffffffffffffff00);
        local_360 = local_360 & 0xffffffff00000000;
        FUN_1456bb102(&local_388,plVar8);
        FUN_1448729ea(pppuVar1 + 0xc9,&local_168,&local_388);
        fVar17 = (float)FUN_144a7b41a(&local_168,0x3e800000);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppppuVar15 = &local_168;
          if (0x18 < local_150) {
            pppppuVar15 = (undefined8 *****)local_168;
          }
          (*pcVar2)(pppppuVar15);
        }
        if (0x18 < local_150) {
          FUN_1400020a8(local_168);
        }
        FUN_144a5ac3a(&local_388);
        if (0.0 < fVar17) {
          param_1[0x11] = (undefined8 ***)0x0;
          uVar9 = FUN_1401b4c98(plVar8);
          local_168 = (undefined8 *****)0x0;
          local_160 = 0;
          FUN_1446efa72(&local_168,0,3,0x10);
          ppppuVar3 = local_168;
          local_160 = 3;
          *local_168 = (undefined8 ***)&PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 1);
          lVar7 = DAT_14c758608 + 1;
          if (ppppuVar11 == (undefined8 ****)0x0) {
            LOCK();
            UNLOCK();
            ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 2);
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_168[2] = ppppuVar11;
          *local_168 = (undefined8 ***)&PTR_FUN_14b9767d0;
          local_168[3] = (undefined8 ****)0x0;
          FUN_14485c47a(local_168 + 3,plVar8);
          ppppuVar3[4] = param_1;
          local_388 = (undefined **)0x0;
          local_380 = (undefined8 *)((ulonglong)local_380 & 0xffffffff00000000);
          FUN_14487d8d8(&local_388,&local_168);
          uStack_348 = CONCAT71(uStack_348._1_7_,1);
          local_108 = 0;
          uStack_104 = 0xbf800000;
          local_3d8 = &local_108;
          FUN_1406f4044(uVar9,param_1 + 0x11,&local_388,fVar17);
          (*(code *)(&PTR_LAB_14a1c87a0)[uStack_348 & 0xff])(&local_388);
          FUN_1449db362(&local_168);
        }
        if (local_70 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4ed64 FUN_148d4ed64 body=835 status=ok
// SIG undefined FUN_148d4ed64(void)

void FUN_148d4ed64(undefined8 *****param_1)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  undefined8 *****pppppuVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 local_d8 [2];
  undefined4 local_d4;
  undefined8 *****local_d0;
  undefined4 local_c8;
  ushort local_b8;
  byte local_b0;
  undefined8 **local_a8;
  undefined4 local_a0;
  undefined4 local_80;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x19] != (undefined8 ****)0x0) {
    uVar8 = FUN_14479d2ce(param_1 + 3);
    pppppuVar3 = param_1 + 0x1b;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)((longlong)param_1 + 0xe4) < 0) {
      FUN_140373bdc(pppppuVar3,0);
    }
    lVar9 = FUN_1412e3d68(param_1[0x19]);
    lVar13 = *(longlong *)(lVar9 + 0x380);
    if (*(longlong *)(lVar9 + 0x380) == 0) {
      lVar13 = lVar9;
    }
    if ((longlong)*(int *)(lVar9 + 0x388) != 0) {
      lVar9 = (longlong)*(int *)(lVar9 + 0x388) * 0x38;
      do {
        if ((*(byte *)(lVar13 + 0x34) & 1) == 0) {
          cVar7 = FUN_144a7b75a(*(undefined1 *)(lVar13 + 0x20),7);
          if (cVar7 != '\0') {
            uVar10 = FUN_14030a32e(lVar13);
            local_a8 = (undefined8 ***)0x0;
            FUN_14485c47a(&local_a8,uVar10);
            iVar4 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xe4) < iVar4 + 1U) {
              FUN_140155462(pppppuVar3,iVar4);
            }
            (*pppppuVar3)[iVar4] = (undefined8 ***)local_a8;
          }
        }
        lVar13 = lVar13 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    ppppuVar5 = param_1[5];
    local_a8 = (undefined8 **)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,uVar8);
    FUN_1448729ea(ppppuVar5 + 0x7f,&local_d0,&local_a8);
    fVar14 = (float)FUN_144a7b41a(&local_d0,0x3f800000);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppppuVar12 = &local_d0;
      if (0x18 < local_b8) {
        ppppppuVar12 = (undefined8 ******)local_d0;
      }
      (*pcVar6)(ppppppuVar12);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    if (0.0 < fVar14) {
      param_1[0xf] = (undefined8 ****)0x0;
      uVar10 = FUN_1401b4c98(uVar8);
      local_d0 = (undefined8 ******)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      pppppuVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = (undefined8 ****)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppppuVar11 = (undefined8 *****)(DAT_14c758608 + 1);
      lVar13 = DAT_14c758608 + 1;
      if (pppppuVar11 == (undefined8 *****)0x0) {
        LOCK();
        UNLOCK();
        pppppuVar11 = (undefined8 *****)(DAT_14c758608 + 2);
        lVar13 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar13;
      local_d0[2] = pppppuVar11;
      *local_d0 = (undefined8 ****)&PTR_FUN_14b976760;
      local_d0[3] = (undefined8 *****)0x0;
      FUN_14485c47a(local_d0 + 3,uVar8);
      pppppuVar3[4] = param_1;
      local_a8 = (undefined8 ***)0x0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_d0);
      local_68 = 1;
      local_e8 = local_d8;
      local_d8[0] = 0;
      local_d4 = 0xbf800000;
      FUN_1406f4044(uVar10,param_1 + 0xf,&local_a8,fVar14);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_d0);
    }
    param_1[0x19] = (undefined8 ****)0x0;
    ppppuVar5 = param_1[0x1a];
    if (ppppuVar5 != (undefined8 ****)0x0) {
      param_1[0x1a] = (undefined8 ****)0x0;
      LOCK();
      ppppuVar1 = ppppuVar5 + 1;
      *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppppuVar1 == 0) {
        (*(code *)**ppppuVar5)(ppppuVar5);
        LOCK();
        piVar2 = (int *)((longlong)ppppuVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppuVar5)[2])(ppppuVar5);
        }
      }
    }
    if (*(char *)(param_1 + 0xd) == '\x01') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      FUN_148d4e2c0(param_1,0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4f0a8 FUN_148d4f0a8 body=2131 status=ok
// SIG undefined FUN_148d4f0a8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148d4f0a8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong ******pppppplVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *******ppppppplVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_718 [32];
  undefined8 *local_6f8;
  longlong *local_6f0;
  undefined1 local_6e8;
  undefined8 local_6e0;
  undefined4 *local_6d8;
  undefined4 local_6d0;
  undefined4 local_6c8;
  undefined1 local_6c0;
  undefined4 local_6b8;
  longlong local_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  longlong ******local_678;
  undefined1 local_66c [4];
  undefined8 local_668;
  undefined8 uStack_660;
  longlong *****local_658;
  undefined2 local_648;
  undefined4 local_640;
  undefined1 local_638;
  undefined8 local_628;
  longlong *******local_360;
  longlong *local_358;
  ushort local_348;
  byte local_340;
  undefined1 local_338 [56];
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2d8;
  byte local_2d0;
  longlong local_2c8 [5];
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_718;
  cVar6 = (**(code **)(*param_2 + 0x40))(param_2);
  if ((cVar6 != '\0') && (lVar8 = FUN_1407a0dc0(*(longlong *)(param_1 + 0x28) + 0x708), lVar8 != 0))
  {
    lVar9 = FUN_14479d2ce(param_1 + 0x18);
    local_2a0 = 0;
    local_298 = 0;
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    local_2c8[2] = 0;
    local_294 = 0xffffffff00000080;
    local_28c = 0;
    local_280 = 0;
    local_278 = 0;
    local_250 = 0;
    local_248 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_244 = 0xffffffff00000080;
    local_23c = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0xffffffff00000000;
    local_1f0 = 0;
    local_1e8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_1e4 = 0xffffffff00000080;
    local_1dc = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_198 = 0;
    local_170 = 0;
    local_168 = 0x200000000;
    local_158 = 0;
    local_150 = 0;
    uStack_14c = 0x20;
    uStack_148 = 0xffffffff;
    uStack_144 = 0;
    local_138 = 0;
    local_130 = 0;
    local_108 = 0;
    local_100 = 0x200000000;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e4 = 0x20;
    uStack_e0 = 0xffffffff;
    uStack_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0x200000000;
    local_88 = 0;
    local_80 = 0;
    uStack_7c = 0x20;
    uStack_78 = 0xffffffff;
    uStack_74 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar8);
    }
    local_2c8[0] = lVar8;
    lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
    lVar8 = *(longlong *)(lVar8 + 0x1c8);
    if (lVar8 == 0) {
      puVar10 = &DAT_14c8464e0;
      uVar18 = (undefined4)DAT_14c8464f0;
      uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar18 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
      puVar10 = (undefined8 *)(lVar8 + 0x260);
    }
    local_2f8 = *(undefined4 *)puVar10;
    uStack_2f4 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_2f0 = *(undefined4 *)(puVar10 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar10 + 0xc);
    local_300 = 0;
    local_2e0 = 0x18;
    local_2e8 = CONCAT44(uVar19,uVar18);
    local_2d8 = 4;
    local_2d0 = (byte)~DAT_14c9a8994 >> 3 & 4;
    lVar8 = *(longlong *)(param_1 + 0x28);
    local_668 = (longlong *******)((ulonglong)local_668 & 0xffffffffffffff00);
    local_640 = 0;
    FUN_1456bb102(&local_668,lVar9);
    FUN_1448729ea(lVar8 + 0x730,&local_360,&local_668);
    FUN_140cc7bf8(local_338,&local_360);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_340 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppppplVar16 = (longlong *******)&local_360;
      if (0x18 < local_348) {
        ppppppplVar16 = local_360;
      }
      (*pcVar4)(ppppppplVar16);
    }
    local_6b0 = lVar9;
    if (0x18 < local_348) {
      FUN_1400020a8(local_360);
    }
    FUN_144a5ac3a(&local_668);
    FUN_1412d0e8a(&local_360);
    uStack_660 = &local_300;
    plVar14 = local_2c8 + 1;
    local_668 = (longlong *******)&local_360;
    FUN_140ffad64(plVar14,&local_678,&local_668,0);
    FUN_143e0e83f(&local_360);
    local_668 = (longlong *******)&local_360;
    uStack_660 = (undefined8 *)local_338;
    FUN_140ffad64(plVar14,&local_678,&local_668,0);
    uVar11 = (**(code **)(*param_2 + 0xf8))(param_2);
    local_668 = (longlong *******)0x0;
    uStack_660 = (undefined8 *)0x0;
    local_648 = 8;
    FUN_14485c47a(&uStack_660,uVar11);
    local_640 = CONCAT31(local_640._1_3_,7);
    local_638 = 7;
    if ((DAT_14c9a8cf4 & 0x20) != 0) {
      local_638 = 0;
    }
    FUN_1412d0e98(&local_678);
    local_360 = &local_678;
    local_358 = &local_668;
    FUN_140ff1448(plVar14,local_66c,&local_360,0);
    FUN_144a2da94(&local_668);
    FUN_140ff15b2(local_2c8);
    pppppplVar12 = (longlong ******)FUN_14001cc68(0x1c8,0x10);
    FUN_140e35e6c(pppppplVar12);
    *(byte *)((longlong)pppppplVar12 + 0x1c2) = *(byte *)((longlong)pppppplVar12 + 0x1c2) & 0xfe;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((pppppplVar12[1] != *(longlong ******)(lVar8 + 0x6f0)) ||
       (*(int *)(pppppplVar12 + 2) != *(int *)(lVar8 + 0x6f8))) {
      pppppplVar12[1] = *(longlong ******)(lVar8 + 0x6f0);
      *(undefined4 *)(pppppplVar12 + 2) = *(undefined4 *)(lVar8 + 0x6f8);
      pppppplVar12[3] = (longlong *****)0x0;
    }
    local_678 = pppppplVar12;
    uVar11 = (**(code **)(*param_2 + 0x108))(param_2);
    FUN_14485c47a((longlong)pppppplVar12 + 0x6c,uVar11);
    (**(code **)(*param_2 + 0xb0))(param_2,&local_668);
    pppppplVar12[6] = local_658;
    *(undefined4 *)(pppppplVar12 + 4) = (undefined4)local_668;
    *(undefined4 *)((longlong)pppppplVar12 + 0x24) = local_668._4_4_;
    *(undefined4 *)(pppppplVar12 + 5) = (undefined4)uStack_660;
    *(undefined4 *)((longlong)pppppplVar12 + 0x2c) = uStack_660._4_4_;
    uVar11 = (**(code **)(*param_2 + 0xf8))(param_2);
    FUN_14485c47a((longlong)pppppplVar12 + 0x74,uVar11);
    *(undefined4 *)((longlong)pppppplVar12 + 0x7c) = *(undefined4 *)(local_6b0 + 0xe40);
    uVar11 = (**(code **)(*param_2 + 0x100))(param_2);
    FUN_14485c47a(pppppplVar12 + 0x10,uVar11);
    uVar11 = (**(code **)(*param_2 + 0xe0))(param_2);
    FUN_144a79b68(&local_668,uVar11);
    if ((longlong *******)pppppplVar12[0x11] != local_668) {
      pppppplVar12[0x13] = (longlong *****)0x0;
    }
    pppppplVar12[0x11] = (longlong *****)local_668;
    uVar11 = (**(code **)(*param_2 + 0xd8))(param_2);
    FUN_14118c70e(pppppplVar12 + 0x14,uVar11);
    lVar8 = (**(code **)(*param_2 + 0xe8))(param_2);
    (*(code *)pppppplVar12[0x32][4])(pppppplVar12 + 0x32,0);
    pppppplVar12[0x33] = *(longlong ******)(lVar8 + 8);
    FUN_1406022fe(pppppplVar12 + 0x34,lVar8 + 0x10);
    lVar8 = *(longlong *)(param_1 + 0x28);
    local_6a8 = *(undefined4 *)(lVar8 + 0x780);
    uStack_6a4 = *(undefined4 *)(lVar8 + 0x784);
    uStack_6a0 = *(undefined4 *)(lVar8 + 0x788);
    uStack_69c = *(undefined4 *)(lVar8 + 0x78c);
    local_698 = *(undefined4 *)(lVar8 + 0x790);
    uStack_694 = *(undefined4 *)(lVar8 + 0x794);
    uStack_690 = *(undefined4 *)(lVar8 + 0x798);
    uStack_68c = *(undefined4 *)(lVar8 + 0x79c);
    local_688 = *(undefined4 *)(lVar8 + 0x7a0);
    uStack_684 = *(undefined4 *)(lVar8 + 0x7a4);
    uStack_680 = *(undefined4 *)(lVar8 + 0x7a8);
    uStack_67c = *(undefined4 *)(lVar8 + 0x7ac);
    uVar11 = FUN_14479d2ce((longlong)pppppplVar12 + 0x74);
    uVar13 = FUN_14479d2ce((longlong)pppppplVar12 + 0x6c);
    local_6b8 = 0;
    local_6c8 = 0;
    local_6f0 = local_2c8;
    local_6f8 = &DAT_14c8464f8;
    local_6c0 = 0;
    local_6d0 = 1;
    local_6e0 = 0;
    local_6e8 = 2;
    local_6d8 = &local_6a8;
    FUN_140ff1788(&local_668,uVar13,pppppplVar12 + 4,uVar11);
    plVar14 = (longlong *)FUN_14001cc68(0x360,0x10);
    plVar14[1] = (longlong)&DAT_100000001;
    *plVar14 = (longlong)&PTR_FUN_14b415260;
    FUN_1412d0ea6(plVar14 + 2,&local_668,&local_678);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    uVar11 = (**(code **)(*param_2 + 0xf8))(param_2);
    uVar11 = FUN_1447210f0(uVar11);
    FUN_140e67fb0(&local_360,uVar11);
    plVar15 = local_358;
    if (local_358 != (longlong *)0x0) {
      iVar7 = (int)local_358[1];
      do {
        if (iVar7 == 0) {
          plVar15 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)plVar15[1];
        bVar17 = iVar7 == iVar5;
        if (bVar17) {
          *(int *)(plVar15 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar17);
      plVar3 = local_358;
      LOCK();
      piVar1 = (int *)((longlong)local_358 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      ppppppplVar16 = local_360;
      if (plVar15 != (longlong *)0x0) {
        if (local_360 != (longlong *******)0x0) {
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          local_360 = (longlong *******)(plVar14 + 2);
          local_358 = plVar14;
          FUN_140e67c44(ppppppplVar16,&local_360);
          plVar3 = local_358;
          if (local_358 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_358 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_358)(local_358);
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
        LOCK();
        plVar3 = plVar15 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    local_628 = 0;
    FUN_14076ba36();
    if (local_678 != (longlong ******)0x0) {
      (*(code *)**local_678)(local_678,1);
    }
    FUN_144a2da94(local_338);
    FUN_144a2da94(&local_300);
    local_2c8[0] = 0;
    FUN_14076ba36(local_2c8 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4f8fc FUN_148d4f8fc body=1020 status=ok
// SIG undefined FUN_148d4f8fc(void)

void FUN_148d4f8fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined4 *local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined1 local_290;
  undefined4 local_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined1 local_258 [40];
  undefined4 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined1 local_1bc [8];
  undefined1 local_1b4 [8];
  undefined4 local_1ac;
  undefined1 local_1a8 [8];
  longlong local_1a0;
  int local_198;
  undefined8 local_190;
  undefined4 local_148;
  undefined1 local_140;
  undefined8 local_13c;
  longlong local_130;
  int local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined1 local_e0 [72];
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_144a76660(param_5,&local_270);
  if (*(int *)(param_1 + 0x368) != 0x4000) {
    if (*(int *)(param_1 + 0x368) != 0x34001) goto LAB_148d4fc54;
    FUN_140e35e6c(&local_228);
    if ((local_220 != *(longlong *)(param_1 + 0x360)) || ((int)local_218 != 0x34001)) {
      local_218 = CONCAT44(local_218._4_4_,0x34001);
      local_210 = 0;
      local_220 = *(longlong *)(param_1 + 0x360);
    }
    local_1f8 = param_4[2];
    local_208 = *param_4;
    uStack_200 = param_4[1];
    local_1f0 = local_270;
    uStack_1ec = uStack_26c;
    uStack_1e8 = uStack_268;
    uStack_1e4 = uStack_264;
    local_1e0 = local_260;
    lVar1 = param_1 + 8;
    uVar4 = FUN_14479d2ce(lVar1);
    FUN_14485c47a(local_1bc,uVar4);
    uVar4 = FUN_14479d2ce(lVar1);
    FUN_14485c47a(local_1a8,uVar4);
    uVar4 = FUN_14479d2ce(param_1 + 0x348);
    FUN_14485c47a(local_1b4,uVar4);
    local_1ac = *(undefined4 *)(param_1 + 0x378);
    local_148 = *(undefined4 *)(param_1 + 0x3d8);
    uVar4 = FUN_14479d2ce(lVar1);
    local_258[0] = 0;
    local_230 = 0;
    FUN_1456bb102(local_258,uVar4);
    local_118 = FUN_140a8b8c6(param_1 + 0x3e0,local_258);
    local_140 = 0;
    local_13c = 0;
    if ((local_130 != 0) || (local_128 != -0xfffff30)) {
      local_130 = 0;
      local_128 = -0xfffff30;
      local_120 = 0;
    }
    local_114 = 0;
    local_10c = 0;
    local_100 = 0;
    local_110 = local_118;
    local_104 = local_118;
    FUN_144a5ac3a(local_258);
    (**(code **)(local_98 + 0x20))(&local_98,0);
    local_90 = *(undefined8 *)(param_1 + 0x430);
    FUN_1406022fe(local_88,param_1 + 0x438);
    if (local_1a0 == *(longlong *)(param_1 + 0x380)) {
      iVar7 = *(int *)(param_1 + 0x388);
      if (local_198 != iVar7) goto LAB_148d4fc98;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x388);
LAB_148d4fc98:
      local_190 = 0;
      local_1a0 = *(longlong *)(param_1 + 0x380);
      local_198 = iVar7;
    }
    FUN_140a0a642(*(longlong *)(param_1 + 0x350) + 0x120,local_78);
    FUN_14485c47a(local_e0,param_6);
    FUN_14130e0a2(&local_228);
    FUN_140bba396(&local_228);
    goto LAB_148d4fc54;
  }
  lVar1 = param_1 + 8;
  local_278 = param_2;
  local_2c8 = FUN_14479d2ce(lVar1);
  if (local_2c8 == 0) {
LAB_148d4fb8b:
    lVar5 = FUN_14479d2ce(lVar1);
    if (lVar5 == 0) {
      local_2c8 = 0;
    }
    else {
      lVar5 = FUN_14479d2ce(lVar1);
      local_2c8 = *(longlong *)(lVar5 + 0x1b0);
    }
  }
  else {
    lVar5 = FUN_144a7cbb2();
    if ((*(int *)(*(longlong *)(local_2c8 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_2c8 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_148d4fb8b;
  }
  uVar3 = *(undefined1 *)(param_1 + 0x45c);
  uVar2 = *(undefined4 *)(param_1 + 0x458);
  uVar4 = FUN_14479d2ce(param_1 + 0x348);
  uVar6 = FUN_14479d2ce(lVar1);
  local_228 = *(undefined8 *)(param_1 + 0x360);
  local_218 = 0;
  local_220 = CONCAT44(local_220._4_4_,0x4000);
  local_2a8 = &local_270;
  local_2b8 = param_6;
  local_290 = 0;
  local_2c0 = uVar4;
  local_2b0 = param_1 + 0x10;
  local_2a0 = param_1 + 0x378;
  local_298 = param_1 + 0x448;
  local_288 = uVar2;
  local_280 = uVar3;
  FUN_14417d743(local_278,&local_228,*(undefined8 *)(param_1 + 0x350),uVar6);
LAB_148d4fc54:
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d4fcfa FUN_148d4fcfa body=590 status=ok
// SIG undefined FUN_148d4fcfa(void)

undefined8 FUN_148d4fcfa(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  double local_b8;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar1 = *(float *)(param_1 + 0x450);
  fVar2 = *(float *)(param_1 + 0x454);
  uVar6 = rand();
  uStack_a0 = (double)(((float)(uVar6 & 0x7fff) / 32767.0) * (fVar2 - fVar1) + fVar1);
  local_a8 = 0.0;
  local_98 = 0.0;
  FUN_144a76660(&local_a8,local_c8);
  local_e0 = 0x3ff0000000000000;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_140ccff96(local_c8,&local_a8,(double)*(float *)(param_1 + 0x460) * 0.017453292519943295);
  dVar5 = local_98;
  dVar4 = local_a8;
  local_b8 = local_98;
  local_c8._8_4_ = (undefined4)uStack_a0;
  local_c8._0_8_ = local_a8;
  uStack_bc = uStack_a0._4_4_;
  dVar3 = stack0xffffffffffffff40;
  FUN_144a7484c(param_1 + 0x30,&local_a8);
  dVar7 = dVar3 * local_a8 - dVar4 * uStack_a0;
  dVar8 = dVar5 * uStack_a0 - dVar3 * local_98;
  dVar9 = dVar4 * local_98 - local_a8 * dVar5;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  local_b8 = dVar7 * dStack_90 + dVar5 + (dVar9 * local_a8 - dVar8 * uStack_a0);
  dVar3 = (local_98 * dVar8 - local_a8 * dVar7) + dStack_90 * dVar9 + dVar3;
  local_c8._8_4_ = SUB84(dVar3,0);
  local_c8._0_8_ = (dVar7 * uStack_a0 - dVar9 * local_98) + dStack_90 * dVar8 + dVar4;
  uStack_bc = (int)((ulonglong)dVar3 >> 0x20);
  *(float *)(param_1 + 0x460) =
       360.0 / (float)*(int *)(param_1 + 0x300) + *(float *)(param_1 + 0x460);
  FUN_144a79a9c(local_c8,param_2);
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4ff4a FUN_148d4ff4a body=349 status=ok
// SIG undefined FUN_148d4ff4a(void)

void FUN_148d4ff4a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x30);
    if (plVar6 == (longlong *)0x0) goto LAB_148d4ffe4;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d4ffa1:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d4ffe4;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_148d4ffa1;
    }
  }
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
LAB_148d4ffe4:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d500be FUN_148d500be body=1962 status=ok
// SIG undefined FUN_148d500be(void)

void FUN_148d500be(undefined8 ****param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  code *pcVar9;
  byte bVar10;
  undefined8 ****ppppuVar11;
  undefined8 *****pppppuVar12;
  undefined4 uVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined8 ****local_90;
  undefined4 local_88;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined8 ****local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_14479d2ce(param_1 + 3);
  if (*(char *)(lVar6 + 0x178) == '\x03') {
    (**(code **)(*(longlong *)(lVar6 + 0x1878) + 0x20))(lVar6 + 0x1878,&local_a0);
    lVar3 = local_a0;
    if (local_a0 != 0) {
      if (*(int *)(lVar6 + 0x1b38) == 0) {
        uVar8 = FUN_14114d39f();
        if (*(longlong *)(lVar3 + 0x200) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(*(longlong *)(lVar3 + 0x200),uVar8,0);
        }
        FUN_140d4c8ba(lVar3,&local_90,uVar8);
        uVar13 = FUN_1405d5f74(&local_90);
        *(undefined4 *)(param_1 + 7) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
        if (pcVar9 != (code *)0x0) {
          pppppuVar12 = &local_90;
          if (0x18 < local_78) {
            pppppuVar12 = (undefined8 *****)local_90;
          }
          (*pcVar9)(pppppuVar12);
        }
        if (0x18 < local_78) {
          FUN_1400020a8(local_90);
        }
        lVar4 = local_a0;
        uVar8 = FUN_14114d39f();
        lVar3 = *(longlong *)(lVar4 + 0x200);
        if (lVar3 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(lVar3,uVar8,2);
        }
        FUN_140d4c8ba(lVar4,&local_90,uVar8);
        uVar13 = FUN_1405d5f74(&local_90);
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
        if (pcVar9 != (code *)0x0) {
          pppppuVar12 = &local_90;
          if (0x18 < local_78) {
            pppppuVar12 = (undefined8 *****)local_90;
          }
          (*pcVar9)(pppppuVar12);
        }
        if (0x18 < local_78) {
          FUN_1400020a8(local_90);
        }
        lVar4 = local_a0;
        uVar8 = FUN_14114d39f();
        lVar3 = *(longlong *)(lVar4 + 0x200);
        if (lVar3 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(lVar3,uVar8,3);
        }
        FUN_140d4c8ba(lVar4,&local_90,uVar8);
        uVar13 = FUN_144a7b41a(&local_90,0x3f800000);
        *(undefined4 *)(param_1 + 8) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
        if (pcVar9 != (code *)0x0) {
          pppppuVar12 = &local_90;
          if (0x18 < local_78) {
            pppppuVar12 = (undefined8 *****)local_90;
          }
          (*pcVar9)(pppppuVar12);
        }
        if (0x18 < local_78) {
          FUN_1400020a8(local_90);
        }
        uVar8 = FUN_14114d39f();
        if (*(longlong *)(local_a0 + 0x200) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(*(longlong *)(local_a0 + 0x200),uVar8,5);
        }
        FUN_140d4c8ba(local_a0,&local_90,uVar8);
        uVar13 = FUN_144a7b41a(&local_90,0x3f800000);
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
      }
      else {
        uVar8 = FUN_14114d39f();
        if (*(longlong *)(lVar3 + 0x200) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(*(longlong *)(lVar3 + 0x200),uVar8,1);
        }
        FUN_140d4c8ba(lVar3,&local_90,uVar8);
        uVar13 = FUN_1405d5f74(&local_90);
        *(undefined4 *)(param_1 + 7) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
        if (pcVar9 != (code *)0x0) {
          pppppuVar12 = &local_90;
          if (0x18 < local_78) {
            pppppuVar12 = (undefined8 *****)local_90;
          }
          (*pcVar9)(pppppuVar12);
        }
        if (0x18 < local_78) {
          FUN_1400020a8(local_90);
        }
        pppuVar7 = param_1[5];
        local_90 = (undefined8 ****)((ulonglong)local_90 & 0xffffffffffffff00);
        local_68 = 0;
        FUN_1456bb102(&local_90,lVar6);
        FUN_1448729ea(pppuVar7 + 0x16,local_60,&local_90);
        uVar13 = FUN_14005fbd2(local_60,1);
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
        if (pcVar9 != (code *)0x0) {
          pppppuVar12 = local_60;
          if (0x18 < local_48) {
            pppppuVar12 = (undefined8 *****)local_60[0];
          }
          (*pcVar9)(pppppuVar12);
        }
        if (0x18 < local_48) {
          FUN_1400020a8(local_60[0]);
        }
        FUN_144a5ac3a(&local_90);
        lVar4 = local_a0;
        uVar8 = FUN_14114d39f();
        lVar3 = *(longlong *)(lVar4 + 0x200);
        if (lVar3 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(lVar3,uVar8,4);
        }
        FUN_140d4c8ba(lVar4,&local_90,uVar8);
        uVar13 = FUN_144a7b41a(&local_90,0x3f800000);
        *(undefined4 *)(param_1 + 8) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
        if (pcVar9 != (code *)0x0) {
          pppppuVar12 = &local_90;
          if (0x18 < local_78) {
            pppppuVar12 = (undefined8 *****)local_90;
          }
          (*pcVar9)(pppppuVar12);
        }
        if (0x18 < local_78) {
          FUN_1400020a8(local_90);
        }
        uVar8 = FUN_14114d39f();
        if (*(longlong *)(local_a0 + 0x200) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1403f69f4(*(longlong *)(local_a0 + 0x200),uVar8,6);
        }
        FUN_140d4c8ba(local_a0,&local_90,uVar8);
        uVar13 = FUN_144a7b41a(&local_90,0x3f800000);
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar13;
        pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
      }
      if (pcVar9 != (code *)0x0) {
        pppppuVar12 = &local_90;
        if (0x18 < local_78) {
          pppppuVar12 = (undefined8 *****)local_90;
        }
        (*pcVar9)(pppppuVar12);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(local_90);
      }
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
    pppuVar7 = param_1[5];
    local_90 = (undefined8 ****)((ulonglong)local_90 & 0xffffffffffffff00);
    local_68 = 0;
    FUN_1456bb102(&local_90,lVar6);
    FUN_1448729ea(pppuVar7 + 0x55,local_60,&local_90);
    uVar13 = FUN_144a7b41a(local_60,0x44e10000);
    *(undefined4 *)(param_1 + 10) = uVar13;
    pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar9 != (code *)0x0) {
      pppppuVar12 = local_60;
      if (0x18 < local_48) {
        pppppuVar12 = (undefined8 *****)local_60[0];
      }
      (*pcVar9)(pppppuVar12);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_144a5ac3a(&local_90);
    pppuVar7 = param_1[5];
    local_90 = (undefined8 ****)((ulonglong)local_90 & 0xffffffffffffff00);
    local_68 = 0;
    FUN_1456bb102(&local_90,lVar6);
    FUN_1448729ea(pppuVar7 + 0x60,local_60,&local_90);
    uVar13 = FUN_144a7b41a(local_60,0);
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar13;
    pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar9 != (code *)0x0) {
      pppppuVar12 = local_60;
      if (0x18 < local_48) {
        pppppuVar12 = (undefined8 *****)local_60[0];
      }
      (*pcVar9)(pppppuVar12);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_144a5ac3a(&local_90);
    pppuVar7 = param_1[5];
    bVar10 = *(byte *)(pppuVar7 + 0x20);
    if ((bVar10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      FUN_148d55b98(lVar6,0,*(undefined1 *)(param_1 + 4));
      pppuVar7 = param_1[5];
      bVar10 = *(byte *)(pppuVar7 + 0x20);
    }
    if ((bVar10 & 2) != 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      FUN_148d55b98(lVar6,2,*(undefined1 *)(param_1 + 4));
      pppuVar7 = param_1[5];
      bVar10 = *(byte *)(pppuVar7 + 0x20);
    }
    if ((bVar10 & 4) != 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      FUN_148d55b98(lVar6,3,*(undefined1 *)(param_1 + 4));
      pppuVar7 = param_1[5];
    }
    if (*(char *)((longlong)pppuVar7 + 0x101) != '\0') {
      *(undefined1 *)(param_1 + 0x34) = 1;
      local_90 = (undefined8 *****)0x0;
      local_88 = 0;
      FUN_1446efa72(&local_90,0,3,0x10);
      ppppuVar5 = local_90;
      local_88 = 3;
      *local_90 = (undefined8 ***)&PTR_LAB_14b3e9ef0;
      LOCK();
      UNLOCK();
      ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 1);
      lVar3 = DAT_14c758608 + 1;
      if (ppppuVar11 == (undefined8 ****)0x0) {
        LOCK();
        UNLOCK();
        ppppuVar11 = (undefined8 ****)(DAT_14c758608 + 2);
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_90[2] = ppppuVar11;
      *local_90 = (undefined8 ***)&PTR_FUN_14b976840;
      local_90[3] = (undefined8 ****)0x0;
      FUN_14485c47a(local_90 + 3,lVar6);
      ppppuVar5[4] = param_1;
      FUN_1403524de(lVar6 + 0x1890,local_60,&local_90);
      FUN_1449db362(&local_90);
      param_1[0x33] = local_60[0];
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5086a FUN_148d5086a body=251 status=ok
// SIG undefined FUN_148d5086a(void)

void FUN_148d5086a(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (*(longlong *)(param_1 + 400) != 0) {
    puVar1 = (undefined8 *)(param_1 + 400);
    lVar4 = FUN_1447210f0(lVar3);
    if (lVar4 != 0) {
      uVar5 = FUN_1401b4c98(lVar3);
      lVar4 = FUN_144a61814(uVar5,puVar1);
      if (lVar4 != 0) {
        FUN_1405a424c(uVar5,*puVar1);
      }
    }
    *puVar1 = 0;
  }
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x100);
    if ((bVar2 & 1) != 0) {
      FUN_148d55dc6(lVar3,0,*(undefined1 *)(param_1 + 0x20));
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x100);
    }
    if ((bVar2 & 2) != 0) {
      FUN_148d55dc6(lVar3,2,*(undefined1 *)(param_1 + 0x20));
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x100);
    }
    if ((bVar2 & 4) != 0) {
      FUN_148d55dc6(lVar3,3,*(undefined1 *)(param_1 + 0x20));
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_14480f766(lVar3 + 0x1890);
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  return;
}



// FUNCTION 148d50966 FUN_148d50966 body=468 status=ok
// SIG undefined FUN_148d50966(void)

void FUN_148d50966(longlong param_1)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (*(char *)(lVar4 + 0x178) == '\x03') {
    if (0.0 < *(float *)(param_1 + 0x54)) {
      *(undefined1 *)(param_1 + 0x162) = 1;
      FUN_148d50b3c(param_1);
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x108 +
                      (ulonglong)((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x100) & 8) == 0) * 4);
    if (0.0 < fVar1) {
      uVar5 = FUN_1401b4c98(lVar4);
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar2 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_c0[2] = lVar6;
      *local_c0 = &PTR_FUN_14b9768b0;
      local_c0[3] = 0;
      FUN_14485c47a(local_c0 + 3,lVar4);
      puVar2[4] = param_1;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 0;
      local_ac = 0xbf800000;
      FUN_1406f4044(uVar5,param_1 + 400,&local_a8,fVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_c0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d50b3c FUN_148d50b3c body=1551 status=ok
// SIG undefined FUN_148d50b3c(void)

void FUN_148d50b3c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  longlong local_388;
  undefined8 local_380;
  undefined1 local_374 [4];
  undefined8 *local_370;
  longlong *local_368;
  undefined2 local_350;
  undefined1 local_348;
  char local_340;
  longlong local_338;
  undefined4 local_330;
  undefined2 local_318;
  undefined1 local_310;
  char local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2d8;
  byte local_2d0;
  longlong local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar8 = FUN_14479d2ce(param_1 + 0x18);
  if ((*(char *)(lVar8 + 0x178) == '\x03') &&
     (lVar9 = FUN_1407a0dc0(*(longlong *)(param_1 + 0x28) + 0x278), lVar9 != 0)) {
    uVar10 = FUN_1447210f0(lVar8);
    FUN_1409e0c66(&local_2c8,uVar10);
    if (plStack_2c0 != (longlong *)0x0) {
      iVar7 = (int)plStack_2c0[1];
      do {
        if (iVar7 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)plStack_2c0[1];
        bVar15 = iVar7 == iVar6;
        if (bVar15) {
          *(int *)(plStack_2c0 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
        plVar13 = plStack_2c0;
      } while (!bVar15);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))();
      }
      if (plVar13 != (longlong *)0x0) {
        if (local_2c8 != 0) {
          local_388 = local_2c8;
          local_2a0 = 0;
          local_298 = 0;
          local_2c8 = 0;
          plStack_2c0 = (longlong *)0x0;
          local_2b8 = 0;
          local_294 = 0xffffffff00000080;
          local_28c = 0;
          local_280 = 0;
          local_278 = 0;
          local_250 = 0;
          local_248 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_244 = 0xffffffff00000080;
          local_23c = 0;
          local_230 = 0;
          local_228 = 0;
          local_220 = 0;
          local_218 = 0xffffffff00000000;
          local_1f0 = 0;
          local_1e8 = 0;
          local_210 = 0;
          uStack_208 = 0;
          local_1e4 = 0xffffffff00000080;
          local_1dc = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          local_198 = 0;
          local_170 = 0;
          local_168 = 0x200000000;
          local_158 = 0;
          local_150 = 0;
          uStack_14c = 0x20;
          uStack_148 = 0xffffffff;
          uStack_144 = 0;
          local_138 = 0;
          local_130 = 0;
          local_108 = 0;
          local_100 = 0x200000000;
          local_f0 = 0;
          local_e8 = 0;
          uStack_e4 = 0x20;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_a0 = 0;
          local_98 = 0x200000000;
          local_88 = 0;
          local_80 = 0;
          uStack_7c = 0x20;
          uStack_78 = 0xffffffff;
          uStack_74 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar9);
          }
          lVar12 = *(longlong *)(lVar8 + 0x1c8);
          if (lVar12 == 0) {
            puVar11 = &DAT_14c8464e0;
            uVar16 = (undefined4)DAT_14c8464f0;
            uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar16 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
            uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
            puVar11 = (undefined8 *)(lVar12 + 0x260);
          }
          local_2f8 = *(undefined4 *)puVar11;
          uStack_2f4 = *(undefined4 *)((longlong)puVar11 + 4);
          uStack_2f0 = *(undefined4 *)(puVar11 + 1);
          uStack_2ec = *(undefined4 *)((longlong)puVar11 + 0xc);
          local_300 = 0;
          local_2e0 = 0x18;
          local_2e8 = CONCAT44(uVar17,uVar16);
          local_2d8 = 4;
          local_2d0 = (byte)~DAT_14c9a8994 >> 3 & 4;
          local_330 = *(undefined4 *)(param_1 + 0x50);
          local_338 = 0;
          local_318 = 4;
          local_310 = 3;
          local_308 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
          local_2c8 = lVar9;
          FUN_1412d0e8a(&local_380);
          local_370 = &local_380;
          local_368 = &local_300;
          FUN_140ffad64(&plStack_2c0,local_374,&local_370,0);
          FUN_143e0e83f(&local_380);
          local_370 = &local_380;
          local_368 = &local_338;
          FUN_140ffad64(&plStack_2c0,local_374,&local_370,0);
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x2f8);
          if (lVar9 != 0) {
            local_370 = (undefined8 *)0x0;
            local_350 = 4;
            local_368 = (longlong *)CONCAT44(local_368._4_4_,*(undefined4 *)(param_1 + 0x50));
            local_348 = 3;
            local_340 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
            uVar4 = (uint)((ulonglong)lVar9 >> 0x10);
            uVar14 = (uint)lVar9 & 0xffff;
            FUN_1488e4742(&plStack_2c0,
                          ((uint)lVar9 << 0x10 | uVar14) + (int)((ulonglong)lVar9 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar14 >> 4),
                          *(longlong *)(param_1 + 0x28) + 0x2f8,&local_370);
            FUN_144a2da94(&local_370);
          }
          FUN_140ff15b2(&local_2c8);
          lVar9 = lVar8;
          if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x2a0) == '\0') {
            lVar9 = *(longlong *)(lVar8 + 0x1b0);
          }
          local_398 = 0;
          FUN_140a41f04(local_388,&local_370,lVar9,&local_2c8);
          plVar2 = local_368;
          if ((undefined8 **)(param_1 + 0x170) != &local_370) {
            *(undefined8 **)(param_1 + 0x170) = local_370;
            local_370 = (undefined8 *)0x0;
            plVar3 = *(longlong **)(param_1 + 0x178);
            if (local_368 != plVar3) {
              local_368 = (longlong *)0x0;
              *(longlong **)(param_1 + 0x178) = plVar2;
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
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
            }
          }
          plVar2 = local_368;
          if (local_368 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_368 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_368)(local_368);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          puVar11 = *(undefined8 **)(param_1 + 0x170);
          if (puVar11 != (undefined8 *)0x0) {
            local_370 = (undefined8 *)0x0;
            local_368 = (longlong *)((ulonglong)local_368 & 0xffffffff00000000);
            FUN_1446efa72(&local_370,0,3,0x10);
            puVar5 = local_370;
            local_368 = (longlong *)CONCAT44(local_368._4_4_,3);
            *local_370 = &PTR_LAB_14ac8b4c0;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_370[2] = lVar12;
            *local_370 = &PTR_FUN_14b9769e0;
            local_370[3] = 0;
            FUN_14485c47a(local_370 + 3,lVar8);
            puVar5[4] = param_1;
            FUN_140e0aeb0(puVar11 + 0x26,&local_380,&local_370);
            FUN_1449db362(&local_370);
          }
          FUN_144a2da94(&local_338);
          FUN_144a2da94(&local_300);
          local_2c8 = 0;
          FUN_14076ba36(&plStack_2c0);
        }
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
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5114c FUN_148d5114c body=176 status=ok
// SIG undefined FUN_148d5114c(void)

void FUN_148d5114c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x168);
    uVar5 = FUN_14479d2ce(param_1 + 0x18);
    uVar5 = FUN_1401b4c98(uVar5);
    lVar6 = FUN_144a61814(uVar5,puVar3);
    if (lVar6 != 0) {
      FUN_1405a424c(uVar5,*puVar3);
    }
    *puVar3 = 0;
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_140c3c3ce();
    *(undefined8 *)(param_1 + 0x170) = 0;
    plVar4 = *(longlong **)(param_1 + 0x178);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
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
  FUN_148d5086a(param_1);
  return;
}



// FUNCTION 148d511fc FUN_148d511fc body=172 status=ok
// SIG undefined FUN_148d511fc(void)

void FUN_148d511fc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined4 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(local_118,0,0x100);
  local_48 = 0xffffffff;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x1118) == '\x01') {
    memcpy(local_118,(void *)(lVar1 + 0x1018),0x100);
  }
  FUN_148d512aa(param_1,local_118,0,0);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d512aa FUN_148d512aa body=6439 status=ok
// SIG undefined FUN_148d512aa(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148d512aa(longlong param_1,void *param_2,char param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  void *_Src;
  void **ppvVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  double *pdVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_a28 [32];
  void **local_a08;
  float *local_a00;
  float local_9f8;
  undefined8 local_9f0;
  ulonglong *local_9e8;
  longlong *local_9e0;
  undefined4 local_9d8;
  undefined1 local_9d0;
  undefined4 local_9c8;
  longlong *local_9c0;
  float local_9b8;
  float local_9b4;
  longlong local_9b0;
  longlong *local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  longlong *local_988;
  longlong *local_980;
  undefined8 local_978;
  longlong *local_970;
  longlong *local_968;
  ulonglong local_960 [2];
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  double local_918;
  longlong local_910;
  undefined4 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  double local_8e8;
  float local_8d8;
  undefined1 local_8d4;
  undefined8 local_8d0;
  undefined8 *local_8c8;
  undefined8 uStack_8c0;
  void *local_7b8;
  ulonglong local_7b0;
  undefined4 local_7a8;
  undefined8 local_7a0;
  undefined8 local_768;
  undefined8 local_760;
  float local_758;
  undefined1 local_750;
  undefined8 local_74c;
  longlong local_740;
  int local_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined1 local_724;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 local_710;
  undefined **local_708;
  undefined *local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  double local_6c8;
  undefined8 uStack_6c0;
  double local_6b8;
  undefined8 uStack_6b0;
  ulonglong local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined2 local_680;
  undefined8 local_67c;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined2 local_3b8;
  undefined1 local_3b0;
  char local_3a8;
  undefined8 local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  undefined2 local_380;
  undefined1 local_378;
  byte local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong local_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined4 local_32c;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined1 local_260;
  undefined4 local_238;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  local_368 = (double)CONCAT44(local_368._4_4_,(uint)local_368);
  uStack_360 = (double)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360);
  if ((*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x48)) ||
     (local_368 = (double)CONCAT44(local_368._4_4_,(uint)local_368),
     uStack_360 = (double)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360),
     *(int *)(param_1 + 0x38) == 0)) goto LAB_148d51371;
  plVar14 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x276) == '\x01') {
    lVar15 = FUN_144944cf2(plVar14);
    if (lVar15 != 0) goto LAB_148d51371;
  }
  lVar15 = FUN_1447210f0(plVar14);
  if (((param_3 == '\0') && (0 < *(int *)(param_1 + 0x48))) &&
     ((float)*(double *)(lVar15 + 0x6d0) - *(float *)(*(longlong *)(param_1 + 0x28) + 0x104) <
      *(float *)(param_1 + 0x4c))) goto LAB_148d51371;
  if ((*(char *)(param_1 + 0x162) == '\x01') && (*(longlong *)(param_1 + 0x170) != 0)) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    memcpy((void *)(param_1 + 0x60),param_2,0x100);
    *(char *)(param_1 + 0x161) = param_3;
    *(char *)(param_1 + 0x160) = param_4;
    goto LAB_148d51371;
  }
  *(float *)(param_1 + 0x4c) = (float)*(double *)(lVar15 + 0x6d0);
  local_9b0 = lVar15;
  plVar16 = (longlong *)FUN_14485cccc((longlong)param_2 + 0xb8);
  if (plVar16 == (longlong *)0x0) {
    lVar15 = 0;
  }
  else {
    uVar17 = FUN_144a7b040();
    lVar15 = FUN_144718840(plVar16,uVar17);
  }
  local_8e8 = DAT_14c8462d0;
  local_8f8 = (double)CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
  uStack_8f0 = (double)CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
  lVar18 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(lVar18 + 0x268) == '\0') {
    fVar33 = *(float *)(lVar18 + 0x26c);
  }
  else {
    fVar33 = -1.0;
  }
  cVar10 = *(char *)(lVar18 + 0x274);
  if (cVar10 == '\0') {
    if ((lVar15 == 0) && ((*(byte *)((longlong)param_2 + 0xad) & 1) != 0)) {
LAB_148d51fdd:
      local_8e8 = *(double *)((longlong)param_2 + 0x68);
      local_8f8 = *(double *)((longlong)param_2 + 0x58);
      uStack_8f0 = *(double *)((longlong)param_2 + 0x60);
    }
  }
  else {
    if (cVar10 == '\x03') {
      if ((*(byte *)((longlong)param_2 + 0xad) & 1) == 0) {
LAB_148d5153f:
        lVar18 = *plVar14;
        pdVar21 = (double *)&local_368;
        goto LAB_148d5154a;
      }
      (**(code **)(*plVar14 + 0x328))(plVar14,&local_368);
      local_910 = plVar14[0x39d];
      local_908 = (undefined4)plVar14[0x39e];
      local_900 = 0;
      cVar10 = FUN_148d52c88(&local_910,param_2,&local_368,&local_6e8);
      if (cVar10 == '\0') goto LAB_148d5153f;
      uVar26 = SUB84(local_6e8,0);
      uVar27 = (undefined4)((ulonglong)local_6e8 >> 0x20);
      uVar28 = SUB84(uStack_6e0,0);
      uVar29 = (undefined4)((ulonglong)uStack_6e0 >> 0x20);
      if (0.0 <= fVar33) {
        local_8e8 = (double)CONCAT44(uStack_6d4,local_6d8);
        dVar32 = (double)local_6e8 * (double)local_6e8 + (double)uStack_6e0 * (double)uStack_6e0;
        goto LAB_148d51578;
      }
      local_8e8 = (double)CONCAT44(uStack_6d4,local_6d8);
      dVar32 = local_8e8 * local_8e8 +
               (double)local_6e8 * (double)local_6e8 + (double)uStack_6e0 * (double)uStack_6e0;
      fVar33 = (float)SQRT(dVar32);
    }
    else {
      if (cVar10 != '\x01') goto LAB_148d515b3;
      if ((lVar15 == 0) && ((*(byte *)((longlong)param_2 + 0xad) & 1) != 0)) goto LAB_148d51fdd;
      lVar18 = *plVar14;
      pdVar21 = (double *)&local_6e8;
LAB_148d5154a:
      (**(code **)(lVar18 + 0x328))(plVar14,pdVar21);
      dVar32 = *pdVar21;
      uVar26 = SUB84(dVar32,0);
      uVar27 = (undefined4)((ulonglong)dVar32 >> 0x20);
      dVar5 = pdVar21[1];
      uVar28 = SUB84(dVar5,0);
      uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar32 = dVar32 * dVar32 + dVar5 * dVar5;
      local_8e8 = pdVar21[2];
LAB_148d51578:
      dVar32 = local_8e8 * local_8e8 + dVar32;
    }
    local_8f8 = (double)CONCAT44(uVar27,uVar26);
    uStack_8f0 = (double)CONCAT44(uVar29,uVar28);
    if ((dVar32 != 1.0) || (NAN(dVar32))) {
      if (9.99999993922529e-09 <= dVar32) {
        local_8f8 = 1.0 / SQRT(dVar32);
        local_8e8 = local_8e8 * local_8f8;
        uStack_8f0 = (double)CONCAT44(uVar29,uVar28) * local_8f8;
        local_8f8 = (double)CONCAT44(uVar27,uVar26) * local_8f8;
      }
      else {
        local_8f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_8f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_8e8 = DAT_14c8464f0;
      }
    }
  }
LAB_148d515b3:
  if ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x268) == '\x01') && (fVar33 < 0.0)) {
    (**(code **)(*plVar14 + 0x328))(plVar14,&local_6e8);
    fVar33 = (float)SQRT((double)CONCAT44(uStack_6d4,local_6d8) *
                         (double)CONCAT44(uStack_6d4,local_6d8) +
                         (double)local_6e8 * (double)local_6e8 +
                         (double)uStack_6e0 * (double)uStack_6e0);
  }
  lVar18 = plVar14[0x39];
  if (lVar18 == 0) {
    local_918 = DAT_14c8464f0;
    local_928 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_920 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_928 = *(double *)(lVar18 + 0x260);
    uStack_920 = *(double *)(lVar18 + 0x268);
    local_918 = *(double *)(lVar18 + 0x270);
  }
  if ((*(byte *)((longlong)param_2 + 0xad) & 1) != 0) {
    local_928 = local_8f8 * 10.0 + local_928;
    uStack_920 = uStack_8f0 * 10.0 + uStack_920;
    local_918 = local_8e8 * 10.0 + local_918;
  }
  fVar35 = *(float *)(plVar14 + 0x1c8) * *(float *)(param_1 + 0x40);
  if (param_4 != '\0') {
    fVar35 = fVar35 * *(float *)(param_1 + 0x44);
  }
  lVar18 = *(longlong *)(param_1 + 0x28);
  local_9c0 = plVar14;
  if ((*(byte *)(lVar18 + 0x1b0) & 1) == 0) {
    local_9b8 = *(float *)((longlong)plVar14 + 0xe44);
    if ((*(byte *)(lVar18 + 0x208) & 1) != 0) {
      local_6e8 = (undefined8 *)((ulonglong)local_6e8._1_7_ << 8);
      uStack_6c0 = (double)((ulonglong)uStack_6c0._4_4_ << 0x20);
      FUN_1456bb102(&local_6e8,plVar14);
      puVar22 = &local_368;
      FUN_1448729ea(lVar18 + 0x210,puVar22,&local_6e8);
      fVar36 = (float)FUN_144a7b41a(puVar22);
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_348 * 0x120));
      if (pcVar7 != (code *)0x0) {
        if (0x18 < (ushort)local_350) {
          puVar22 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)local_368);
        }
        (*pcVar7)(puVar22);
      }
      if (0x18 < (ushort)local_350) {
        FUN_1400020a8(CONCAT44(local_368._4_4_,(uint)local_368));
      }
      local_9b8 = local_9b8 * fVar36;
      goto LAB_148d52852;
    }
  }
  else {
    local_6e8 = (undefined8 *)((ulonglong)local_6e8._1_7_ << 8);
    uStack_6c0 = (double)((ulonglong)uStack_6c0._4_4_ << 0x20);
    FUN_1456bb102(&local_6e8,plVar14);
    puVar22 = &local_368;
    FUN_1448729ea(lVar18 + 0x1b8,puVar22,&local_6e8);
    local_9b8 = (float)FUN_144a7b41a(puVar22);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_348 * 0x120));
    if (pcVar7 != (code *)0x0) {
      if (0x18 < (ushort)local_350) {
        puVar22 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)local_368);
      }
      (*pcVar7)(puVar22);
    }
    if (0x18 < (ushort)local_350) {
      FUN_1400020a8(CONCAT44(local_368._4_4_,(uint)local_368));
    }
LAB_148d52852:
    FUN_144a5ac3a(&local_6e8);
  }
  plVar14 = local_9c0;
  local_9a8 = plVar16;
  if ((plVar16 == (longlong *)0x0 || lVar15 == 0) &&
     (lVar15 = FUN_144944cf2(local_9c0), local_9a8 = plVar14, lVar15 != 0)) {
    uVar17 = FUN_144a7b040();
    lVar15 = FUN_144718840(lVar15,uVar17);
    if (lVar15 != 0) {
      local_9a8 = (longlong *)FUN_144944cf2(plVar14);
    }
  }
  lVar15 = FUN_1407a0dc0(*(longlong *)(param_1 + 0x28) + 0x278);
  if ((lVar15 == 0) || (0.0 < *(float *)(param_1 + 0x54))) {
    iVar24 = *(int *)(param_1 + 0x38);
    uVar12 = rand();
    local_7b8 = (void *)0x0;
    uVar13 = *(uint *)(param_1 + 0x188);
    _Src = *(void **)(param_1 + 0x180);
    local_7b0 = CONCAT44(local_7b0._4_4_,uVar13);
    if ((longlong)(int)uVar13 == 0) {
      local_7b0 = (ulonglong)uVar13;
    }
    else {
      FUN_140bf0c0e(&local_7b8,uVar13,0);
      memcpy(local_7b8,_Src,(longlong)(int)uVar13 << 3);
    }
    plVar14 = local_9c0;
    if (0 < *(int *)(param_1 + 0x38)) {
      fVar36 = 360.0 / (float)iVar24;
      fVar37 = ((float)(uVar12 & 0x7fff) / 32767.0) * fVar36 + 0.0;
      fVar38 = 0.0;
      iVar24 = 0;
      local_9b4 = fVar33;
LAB_148d5181b:
      do {
        iVar23 = (int)local_7b0;
        if ((int)local_7b0 < 1) {
          lVar15 = *(longlong *)(param_1 + 0x28);
          plVar16 = (longlong *)0x0;
LAB_148d51990:
          fVar33 = *(float *)(lVar15 + 0x260);
          fVar4 = *(float *)(lVar15 + 0x264);
          uVar13 = rand();
          local_8c8 = (undefined8 *)
                      (double)(((float)(uVar13 & 0x7fff) / 32767.0) * (fVar4 - fVar33) + fVar33);
          local_8d0 = (void *)0x0;
          uStack_8c0 = 0;
          FUN_144a76660(&local_8d0,&local_6e8);
          local_368._0_4_ = (uint)local_6e8;
          local_368._4_4_ = (undefined4)((ulonglong)local_6e8 >> 0x20);
          uStack_360._0_4_ = SUB84(uStack_6e0,0);
          uStack_360._4_4_ = (undefined4)((ulonglong)uStack_6e0 >> 0x20);
          local_8d0 = (void **)&DAT_3ff0000000000000;
          local_8c8 = (undefined8 *)0x0;
          uStack_8c0 = 0;
          FUN_140ccff96(&local_368,&local_6e8,(double)fVar37 * 0.017453292519943295,&local_8d0);
          dVar9 = (double)uStack_6e0;
          dVar8 = (double)local_6e8;
          dVar32 = (double)CONCAT44(uStack_6d4,local_6d8);
          local_368._0_4_ = (undefined4)local_6e8;
          local_368._4_4_ = local_6e8._4_4_;
          uStack_360._0_4_ = (undefined4)uStack_6e0;
          uStack_360._4_4_ = uStack_6e0._4_4_;
          FUN_144a79a9c(&local_8f8,&local_8d0);
          FUN_144a7484c(&local_8d0,&local_6e8);
          dVar5 = (double)CONCAT44(uStack_6d4,local_6d8);
          dVar30 = dVar9 * (double)local_6e8 - dVar8 * (double)uStack_6e0;
          dVar31 = dVar32 * (double)uStack_6e0 - dVar9 * dVar5;
          dVar34 = dVar8 * dVar5 - (double)local_6e8 * dVar32;
          dVar31 = dVar31 + dVar31;
          dVar34 = dVar34 + dVar34;
          dVar30 = dVar30 + dVar30;
          local_358 = dVar30 * (double)CONCAT44(uStack_6cc,uStack_6d0) + dVar32 +
                      (dVar34 * (double)local_6e8 - dVar31 * (double)uStack_6e0);
          local_368 = (dVar30 * (double)uStack_6e0 - dVar34 * dVar5) +
                      (double)CONCAT44(uStack_6cc,uStack_6d0) * dVar31 + dVar8;
          uStack_360 = (dVar5 * dVar31 - (double)local_6e8 * dVar30) +
                       (double)CONCAT44(uStack_6cc,uStack_6d0) * dVar34 + dVar9;
          fVar33 = local_9b4;
        }
        else {
          uVar13 = (int)local_7b0 - 1;
          uVar12 = rand();
          uVar12 = (uint)((float)iVar23 * ((float)(uVar12 & 0x7fff) / 32767.0));
          if ((int)uVar13 <= (int)uVar12) {
            uVar12 = uVar13;
          }
          plVar16 = (longlong *)
                    FUN_14479d2ce((void *)((longlong)(int)uVar12 * 8 + (longlong)local_7b8));
          iVar23 = ~uVar12 + (int)local_7b0;
          if (iVar23 != 0) {
            if (0 < iVar23) {
              iVar23 = 1;
            }
            memmove((void *)((longlong)local_7b8 + (longlong)(int)uVar12 * 8),
                    (void *)((longlong)local_7b8 + (longlong)((int)local_7b0 - iVar23) * 8),
                    (longlong)iVar23 << 3);
          }
          local_7b0 = CONCAT44(local_7b0._4_4_,(int)local_7b0 + -1);
          FUN_14819c8f6(&local_7b8);
          if (plVar16 == (longlong *)0x0) goto LAB_148d5181b;
          lVar15 = *(longlong *)(param_1 + 0x28);
          if (*(char *)(lVar15 + 0x2a1) == '\x01') goto LAB_148d51990;
          (**(code **)(*plVar16 + 0x590))(plVar16,&local_6e8,0);
          local_358 = (double)CONCAT44(uStack_6d4,local_6d8) - local_918;
          uStack_360 = (double)uStack_6e0 - uStack_920;
          local_368 = (double)local_6e8 - local_928;
          dVar32 = local_358 * local_358 + local_368 * local_368 + uStack_360 * uStack_360;
          if ((dVar32 != 1.0) || (NAN(dVar32))) {
            if (9.99999993922529e-09 <= dVar32) {
              dVar32 = 1.0 / SQRT(dVar32);
              local_358 = local_358 * dVar32;
              uStack_360 = uStack_360 * dVar32;
              local_368 = local_368 * dVar32;
            }
            else {
              local_368 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_360 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_358 = DAT_14c8464f0;
            }
          }
        }
        plVar14 = local_9c0;
        local_9d8 = 0;
        if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x275) == '\x01') {
          local_9d8 = *(undefined4 *)((longlong)local_9c0 + 0xee4);
        }
        local_9e8 = (ulonglong *)local_9a8;
        local_9f0 = CONCAT44(local_9f0._4_4_,fVar33);
        local_a00 = (float *)CONCAT44(local_a00._4_4_,(int)local_9c0[0x1c9]);
        local_a08 = (void **)CONCAT44(local_a08._4_4_,local_9b8);
        local_9f8 = fVar38;
        local_9e0 = plVar16;
        FUN_148d588ac(local_9c0,&local_928,&local_368,fVar35);
        fVar38 = fVar38 + *(float *)(*(longlong *)(param_1 + 0x28) + 0x270);
        fVar37 = fVar37 + fVar36;
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)(param_1 + 0x38));
    }
    if (local_7b8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_340 = 0;
    local_338 = 0;
    local_368._0_4_ = 0;
    local_368._4_4_ = 0;
    uStack_360._0_4_ = 0;
    uStack_360._4_4_ = 0;
    local_358 = 0.0;
    local_334 = 0xffffffff00000080;
    local_32c = 0;
    local_320 = 0;
    local_318 = 0;
    local_2f0 = 0;
    local_2e8 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_2e4 = 0xffffffff00000080;
    local_2dc = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0xffffffff00000000;
    local_290 = 0;
    local_288 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_284 = 0xffffffff00000080;
    local_27c = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_238 = 0;
    local_210 = 0;
    local_208 = 0x200000000;
    local_1f8 = 0;
    local_1f0 = 0;
    uStack_1ec = 0x20;
    uStack_1e8 = 0xffffffff;
    uStack_1e4 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1a8 = 0;
    local_1a0 = 0x200000000;
    local_190 = 0;
    local_188 = 0;
    uStack_184 = 0x20;
    uStack_180 = 0xffffffff;
    uStack_17c = 0;
    local_170 = 0;
    local_168 = 0;
    local_140 = 0;
    local_138 = 0x200000000;
    local_128 = 0;
    local_120 = 0;
    uStack_11c = 0x20;
    uStack_118 = 0xffffffff;
    uStack_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar15);
    }
    local_368._0_4_ = (uint)lVar15;
    local_368._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
    local_388 = local_918;
    local_398 = local_928;
    dStack_390 = uStack_920;
    local_3a0 = 0;
    local_380 = 0x18;
    local_378 = 4;
    local_370 = (byte)~DAT_14c9a8994 >> 3 & 4;
    local_3d0 = *(undefined4 *)(param_1 + 0x50);
    local_3d8 = 0;
    local_3b8 = 4;
    local_3b0 = 3;
    local_3a8 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1412d0e8a(&local_8d0);
    local_6e8 = &local_8d0;
    uStack_6e0 = &local_3a0;
    FUN_140ffad64(&uStack_360,&local_7b8,&local_6e8,0);
    FUN_143e0e83f(&local_8d0);
    local_6e8 = &local_8d0;
    uStack_6e0 = &local_3d8;
    FUN_140ffad64(&uStack_360,&local_7b8,&local_6e8,0);
    uVar17 = FUN_14485cccc((longlong)param_2 + 0xb8);
    local_6e8 = (undefined8 *)0x0;
    uStack_6e0 = (undefined8 *)0x0;
    local_6c8 = (double)CONCAT62(local_6c8._2_6_,8);
    FUN_14485c47a(&uStack_6e0,uVar17);
    uStack_6c0 = (double)CONCAT71(uStack_6c0._1_7_,7);
    uVar11 = 7;
    if ((DAT_14c9a8cf4 & 0x20) != 0) {
      uVar11 = 0;
    }
    local_6b8 = (double)CONCAT71(local_6b8._1_7_,uVar11);
    FUN_1412d0e98(&local_7b8);
    local_8d0 = &local_7b8;
    local_8c8 = &local_6e8;
    FUN_140ff1448(&uStack_360,&local_988,&local_8d0,0);
    FUN_144a2da94(&local_6e8);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x2f8);
    if (lVar15 != 0) {
      local_6e8 = (undefined8 *)0x0;
      local_6c8 = (double)CONCAT62(local_6c8._2_6_,4);
      uStack_6e0 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,*(undefined4 *)(param_1 + 0x50));
      uStack_6c0 = (double)CONCAT71(uStack_6c0._1_7_,3);
      local_6b8 = (double)CONCAT71(local_6b8._1_7_,((DAT_14c9a8874 & 0x20) == 0) * '\x03');
      uVar13 = (uint)((ulonglong)lVar15 >> 0x10);
      uVar12 = (uint)lVar15 & 0xffff;
      FUN_1488e4742(&uStack_360,
                    ((uint)lVar15 << 0x10 | uVar12) + (int)((ulonglong)lVar15 >> 0x20) +
                    (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar12 >> 4),
                    *(longlong *)(param_1 + 0x28) + 0x2f8,&local_6e8);
      FUN_144a2da94(&local_6e8);
    }
    FUN_140ff15b2(&local_368);
    plVar16 = local_9c0;
    plVar14 = local_9c0;
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x2a0) == '\0') {
      plVar14 = (longlong *)local_9c0[0x36];
      plVar16 = (longlong *)0x0;
    }
    uVar11 = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2a1);
    uVar26 = *(undefined4 *)(param_1 + 0x38);
    local_960[1] = 0;
    local_938 = 0;
    uStack_930 = 0;
    _uStack_950 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    _local_948 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    uStack_940 = DAT_14c846508;
    FUN_144a79a9c(&local_8f8,&local_8d0);
    local_9c8 = 0;
    local_9d8 = 0;
    local_9e0 = (longlong *)CONCAT44(local_9e0._4_4_,uVar26);
    local_9f0 = 0;
    local_a00 = (float *)&local_368;
    local_9f8 = (float)CONCAT31(local_9f8._1_3_,3);
    local_a08 = (void **)&local_8d0;
    local_9e8 = local_960 + 1;
    local_9d0 = uVar11;
    FUN_140ff1788(&local_6e8,plVar14,&local_928,plVar16);
    local_7b8._0_4_ = 0;
    local_7b0 = 0;
    local_7a8 = 0x3002;
    local_7a0 = 0;
    local_768 = 0;
    local_760 = 0x200000000;
    local_758 = 0.0;
    local_750 = 0;
    local_74c = 0;
    local_740 = 0;
    local_738 = -0xfffff30;
    local_730 = 0;
    local_728 = 0;
    local_724 = 0;
    local_720 = 0;
    uStack_71c = 0;
    uStack_718 = 0;
    uStack_714 = 0;
    local_710 = 0;
    FUN_1405c5fa2();
    local_700 = &DAT_14cb769e8;
    local_6f8 = 0;
    uStack_6f0 = 0;
    local_708 = &PTR_FUN_14b0394b0;
    local_7b8 = (void *)CONCAT44(local_7b8._4_4_,fVar35);
    local_758 = local_9b8;
    local_728 = (undefined4)local_9c0[0x1c9];
    local_750 = 0;
    local_74c = 0;
    if ((local_740 != 0) || (local_738 != -0xfffff30)) {
      local_740 = 0;
      local_738 = -0xfffff30;
      local_730 = 0;
    }
    local_724 = 0;
    uStack_71c = 0;
    uStack_718 = 0;
    local_710 = 0;
    plVar14 = local_9c0 + 0x79;
    local_720 = local_728;
    uStack_714 = local_728;
    lVar15 = (**(code **)(local_9c0[0x79] + 0x18))(plVar14);
    if (lVar15 != 0) {
      lVar15 = (**(code **)(*plVar14 + 0x18))(plVar14);
      puVar20 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar15 + 8) != (undefined4 *)0x0) {
        puVar20 = *(undefined4 **)(lVar15 + 8);
      }
      FUN_1447325ac(puVar20,local_960,1);
      if (local_7b0 != local_960[0]) {
        local_7a0 = 0;
      }
      local_7b0 = local_960[0];
    }
    (*(code *)local_708[4])(&local_708,0);
    plVar14 = local_9c0;
    local_700 = (undefined *)local_9c0[0x1d8];
    FUN_1406022fe(&local_6f8,local_9c0 + 0x1d9);
    plVar16 = (longlong *)FUN_148d554d4();
    local_970 = plVar16 + 2;
    local_968 = plVar16;
    FUN_148d58198(plVar14);
    *(int *)(plVar16 + 2) = (int)plVar16[2] + 1;
    lVar15 = *(longlong *)(param_1 + 0x28);
    uVar26 = 0;
    if (*(char *)(lVar15 + 0x275) == '\x01') {
      uVar26 = *(undefined4 *)((longlong)plVar14 + 0xee4);
    }
    local_9f8 = *(float *)(lVar15 + 0x260);
    local_8d4 = 0.0 <= fVar33;
    if (!(bool)local_8d4) {
      fVar33 = local_8d8;
    }
    local_8d8 = fVar33;
    local_a00 = &local_8d8;
    local_988 = (longlong *)plVar14[0x39d];
    local_980 = (longlong *)CONCAT44(local_980._4_4_,(int)plVar14[0x39e]);
    local_978 = 0;
    local_9e0 = (longlong *)CONCAT71(local_9e0._1_7_,(char)plVar14[0x3a0]);
    local_9e8 = (ulonglong *)CONCAT44(local_9e8._4_4_,uVar26);
    local_9f0 = CONCAT44(local_9f0._4_4_,*(undefined4 *)(lVar15 + 0x264));
    local_a08 = &local_7b8;
    FUN_148d52dac(&local_8d0,local_9a8,&local_970);
    plVar14 = (longlong *)FUN_14001cc68(0x478,0x10);
    FUN_148d555a6(plVar14,&local_6e8,&local_8d0);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar16 = plVar14 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    FUN_140e67fb0(&local_988,local_9b0);
    if (local_980 != (longlong *)0x0) {
      iVar24 = (int)local_980[1];
      do {
        if (iVar24 == 0) {
          plVar16 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar23 = (int)local_980[1];
        bVar25 = iVar24 == iVar23;
        if (bVar25) {
          *(int *)(local_980 + 1) = iVar24 + 1;
          iVar23 = iVar24;
        }
        iVar24 = iVar23;
        UNLOCK();
        plVar16 = local_980;
      } while (!bVar25);
      LOCK();
      piVar1 = (int *)((longlong)local_980 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_980 + 0x10))();
      }
      plVar2 = local_988;
      if (plVar16 != (longlong *)0x0) {
        if (local_988 != (longlong *)0x0) {
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          local_988 = plVar14 + 2;
          local_980 = plVar14;
          FUN_140e67c44(plVar2,&local_988);
          plVar2 = local_980;
          if (local_980 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_980 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_980)(local_980);
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
        LOCK();
        plVar2 = plVar16 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar14 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    FUN_148d52eb2(&local_8d0);
    plVar16 = local_968;
    plVar14 = local_9c0;
    if (local_968 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_968 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_968)(local_968);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    FUN_1414dc478(&local_7b8);
    local_6a8 = 0;
    FUN_14076ba36();
    FUN_144a2da94(&local_3d8);
    FUN_144a2da94(&local_3a0);
    local_368._0_4_ = 0;
    local_368._4_4_ = 0;
    FUN_14076ba36(&uStack_360);
  }
  lVar15 = *(longlong *)(param_1 + 0x28);
  lVar18 = *(longlong *)(lVar15 + 0x358);
  if (lVar18 == 0) {
    uVar17 = FUN_140067708();
    lVar18 = FUN_14477b664(uVar17);
    *(longlong *)(lVar15 + 0x358) = lVar18;
  }
  if (*(longlong *)(lVar15 + 0x360) == 0) {
    if ((lVar18 != 0) && (*(longlong *)(lVar15 + 0x350) != 0)) {
      plVar14 = *(longlong **)(lVar18 + 0xb8);
      if (plVar14 != (longlong *)0x0) {
        cVar10 = (**(code **)(*plVar14 + 0x108))(plVar14);
        if (cVar10 != '\0') {
          uVar17 = (**(code **)(*plVar14 + 0x110))(plVar14);
          lVar18 = FUN_144aff482(uVar17,(longlong *)(lVar15 + 0x350));
          *(longlong *)(lVar15 + 0x360) = lVar18;
          plVar14 = local_9c0;
          if (lVar18 != 0) goto LAB_148d51c95;
          goto LAB_148d51da0;
        }
      }
      *(undefined8 *)(lVar15 + 0x360) = 0;
      plVar14 = local_9c0;
    }
  }
  else {
LAB_148d51c95:
    ppvVar6 = (void **)plVar14[0x36];
    local_6e8 = (undefined8 *)0x0;
    uStack_6e0 = (undefined8 *)0x0;
    local_6d8 = 0;
    uStack_6d4 = 0;
    uStack_6d0 = 0;
    uStack_6cc = 0x3ff00000;
    local_6c8 = local_928;
    uStack_6c0 = uStack_920;
    local_6b8 = local_918;
    uStack_6b0 = 0;
    local_6a8 = 0x3ff0000000000000;
    uStack_6a0 = 0;
    uStack_69c = 0x3ff00000;
    local_698 = 0x3ff0000000000000;
    uStack_690 = 0;
    local_688 = 0x3f800000;
    local_680 = 0;
    local_67c = 0;
    lVar15 = *(longlong *)(param_1 + 0x28);
    dVar32 = *(double *)(lVar15 + 0x350);
    uVar17 = FUN_14477b664(*(undefined8 *)(lVar15 + 0x358));
    uVar19 = FUN_14477b664(uVar17);
    uVar17 = *(undefined8 *)(lVar15 + 0x360);
    local_368._0_4_ = (uint)local_368 & 0xffffff00;
    local_368._4_4_ = 0;
    uStack_360._0_4_ = 0;
    local_358 = dVar32;
    uVar19 = FUN_14477b664(uVar19);
    local_350 = FUN_14477b664(uVar19);
    local_340 = 0;
    local_a00 = (float *)0x0;
    local_a08 = ppvVar6;
    local_348 = uVar17;
    FUN_140cb5d65(&local_9a0,local_9b0,&local_368,&local_6e8);
    local_9a0 = 0;
    local_998 = 0xffffffffffffffff;
    plVar14 = local_9c0;
    local_368 = (double)CONCAT44(local_368._4_4_,(uint)local_368);
    uStack_360 = (double)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360);
    if ((local_340 != 0) &&
       (local_368 = (double)CONCAT44(local_368._4_4_,(uint)local_368),
       uStack_360 = (double)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360),
       (DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_340 + 0x50));
      plVar14 = local_9c0;
    }
  }
LAB_148d51da0:
  iVar24 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar24;
  if (iVar24 == *(int *)(param_1 + 0x3c)) {
    FUN_148d5086a(param_1);
  }
  else if (0.0 < *(float *)(*(longlong *)(param_1 + 0x28) + 0x10c)) {
    uVar17 = FUN_1401b4c98(plVar14);
    uVar26 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10c);
    local_368._0_4_ = 0;
    local_368._4_4_ = 0;
    uStack_360._0_4_ = 0;
    FUN_1446efa72(&local_368,0,3,0x10);
    uStack_360._0_4_ = 3;
    puVar22 = (undefined8 *)CONCAT44(local_368._4_4_,(uint)local_368);
    *puVar22 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    puVar22[2] = lVar18;
    *puVar22 = &PTR_FUN_14b976970;
    puVar22[3] = 0;
    FUN_14485c47a(puVar22 + 3,plVar14);
    puVar22[4] = param_1;
    local_6e8 = (undefined8 *)0x0;
    uStack_6e0 = (undefined8 *)((ulonglong)uStack_6e0 & 0xffffffff00000000);
    FUN_14487d8d8(&local_6e8,&local_368);
    local_6a8 = CONCAT71(local_6a8._1_7_,1);
    local_a08 = (void **)&local_8d0;
    uVar13 = (uint)local_8d0;
    local_8d0 = (void **)CONCAT44(0xbf800000,uVar13 & 0xffff0000);
    FUN_1406f4044(uVar17,param_1 + 400,&local_6e8,uVar26);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_6a8 & 0xff])(&local_6e8);
    FUN_1449db362(&local_368);
  }
LAB_148d51371:
  if ((local_f0 ^ (ulonglong)auStack_a28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d52bea FUN_148d52bea body=158 status=ok
// SIG undefined FUN_148d52bea(void)

void FUN_148d52bea(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  
  if (param_2 != (longlong *)0x0) {
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x28) + 0x101);
    if (cVar2 == '\x01') {
      if ((int)param_2[0xa2] != 2) {
        return;
      }
      lVar3 = (**(code **)(*param_2 + 8))(param_2);
      uVar1 = *(undefined1 *)(lVar3 + 0x7c);
      uVar4 = (**(code **)(*param_2 + 0xa8))(param_2);
      FUN_148d512aa(param_1,uVar4,0,
                    (uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffff01);
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x28) + 0x101);
    }
    if ((cVar2 == '\x02') &&
       (lVar3 = (**(code **)(*param_2 + 8))(param_2), (*(byte *)(lVar3 + 0x7c) & 1) != 0)) {
      uVar4 = (**(code **)(*param_2 + 0xa8))(param_2);
      FUN_148d512aa(param_1,uVar4,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 148d52c88 FUN_148d52c88 body=290 status=ok
// SIG undefined FUN_148d52c88(void)

undefined8
FUN_148d52c88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 1) == 0x34001) {
    local_60 = *param_1;
    FUN_1446dcdd4(local_58);
    if (DAT_14cb853e8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb853e8,local_58);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      local_68 = param_4;
      uVar2 = FUN_148d53162(lVar1,*(undefined4 *)(lVar1 + 0x2d4),param_2,param_3);
      goto LAB_148d52d54;
    }
  }
  else if (*(int *)(param_1 + 1) == 0x4000) {
    local_60 = *param_1;
    FUN_1446dcdd4(local_58);
    lVar1 = FUN_140a4bd48(local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      uVar3 = FUN_140b536be(lVar1);
      local_68 = param_4;
      uVar2 = FUN_148d52f06(lVar1,uVar3,param_2,param_3);
      goto LAB_148d52d54;
    }
  }
  uVar2 = 0;
LAB_148d52d54:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148d52dac FUN_148d52dac body=261 status=ok
// SIG undefined FUN_148d52dac(void)

undefined8 *
FUN_148d52dac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined1 param_10)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  FUN_14485c47a();
  param_1[1] = *param_3;
  lVar2 = param_3[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_4;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 1);
  param_1[5] = 0;
  FUN_1418a644c(param_1 + 6,param_5);
  cVar1 = *(char *)(param_6 + 1);
  *(char *)((longlong)param_1 + 0x104) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x20) = *param_6;
  }
  *(undefined4 *)(param_1 + 0x21) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x10c) = param_8;
  *(undefined4 *)(param_1 + 0x22) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x114) = param_10;
  if (*(char *)(param_6 + 1) == '\x01') {
    *(undefined1 *)(param_6 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 148d52eb2 FUN_148d52eb2 body=84 status=ok
// SIG undefined FUN_148d52eb2(void)

void FUN_148d52eb2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x104) == '\x01') {
    *(undefined1 *)(param_1 + 0x104) = 0;
  }
  FUN_1414dc478(param_1 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x000148d52efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d52f06 FUN_148d52f06 body=603 status=ok
// SIG undefined FUN_148d52f06(void)

undefined8
FUN_148d52f06(longlong param_1,undefined8 param_2,longlong param_3,double *param_4,double *param_5)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  float local_78;
  undefined4 *local_70;
  double local_60;
  double dStack_58;
  double local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_5[2] = param_4[2];
  uVar2 = *(undefined4 *)((longlong)param_4 + 4);
  uVar3 = *(undefined4 *)(param_4 + 1);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined4 *)param_5 = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    local_78 = 1.0;
    pdVar6 = (double *)&local_48;
    FUN_148936e52(param_1 + 0x13c,pdVar6,param_4,param_2);
  }
  else {
    local_38 = *(double *)(param_3 + 0x50);
    local_48._0_4_ = *(undefined4 *)(param_3 + 0x40);
    local_48._4_4_ = *(undefined4 *)(param_3 + 0x44);
    dVar12 = *(double *)(param_3 + 0x40);
    uStack_40 = *(undefined4 *)(param_3 + 0x48);
    uStack_3c = *(undefined4 *)(param_3 + 0x4c);
    dVar8 = *(double *)(param_3 + 0x48);
    if ((*(byte *)(param_1 + 0x138) & 2) == 0) {
      fVar10 = (float)(param_4[2] * local_38 + *param_4 * dVar12 + param_4[1] * dVar8);
      if (fVar10 <= 0.0) {
        dVar13 = (double)-fVar10;
        dVar12 = dVar12 * dVar13 + *param_5;
        *param_5 = dVar12;
        dVar8 = dVar8 * dVar13 + param_5[1];
        param_5[1] = dVar8;
        dVar13 = local_38 * dVar13 + param_5[2];
        param_5[2] = dVar13;
        goto LAB_148d53058;
      }
      uVar5 = 0;
    }
    else {
      local_70 = (undefined4 *)&local_48;
      local_78 = 1.0;
      FUN_148936eb8(&local_60,param_4,param_3,0);
      param_5[2] = local_50;
      *param_5 = local_60;
      param_5[1] = dStack_58;
      dVar12 = *param_5;
      dVar8 = param_5[1];
      dVar13 = param_5[2];
LAB_148d53058:
      dVar11 = dVar13 * dVar13 + dVar12 * dVar12 + dVar8 * dVar8;
      if (((dVar11 != 1.0) || (dVar7 = dVar8, dVar9 = dVar13, dVar1 = dVar12, NAN(dVar11))) &&
         (dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464f0, dVar1 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar7 = dVar8 * dVar11;
        dVar9 = dVar13 * dVar11;
        dVar1 = dVar12 * dVar11;
      }
      dVar12 = (double)(float)param_2;
      *param_5 = dVar1 * dVar12;
      param_5[1] = dVar7 * dVar12;
      param_5[2] = dVar9 * dVar12;
      uVar5 = 1;
    }
    if (*(char *)(param_1 + 0x144) != '\x01') goto LAB_148d52f83;
    pdVar6 = &local_60;
    local_78 = (float)param_2;
    FUN_148936b10(param_1 + 0x144,pdVar6,param_5,&local_48);
  }
  param_5[2] = pdVar6[2];
  uVar2 = *(undefined4 *)((longlong)pdVar6 + 4);
  uVar3 = *(undefined4 *)(pdVar6 + 1);
  uVar4 = *(undefined4 *)((longlong)pdVar6 + 0xc);
  *(undefined4 *)param_5 = *(undefined4 *)pdVar6;
  *(undefined4 *)((longlong)param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
  uVar5 = 1;
LAB_148d52f83:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148d53162 FUN_148d53162 body=603 status=ok
// SIG undefined FUN_148d53162(void)

undefined8
FUN_148d53162(longlong param_1,undefined8 param_2,longlong param_3,double *param_4,double *param_5)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  float local_78;
  undefined4 *local_70;
  double local_60;
  double dStack_58;
  double local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_5[2] = param_4[2];
  uVar2 = *(undefined4 *)((longlong)param_4 + 4);
  uVar3 = *(undefined4 *)(param_4 + 1);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined4 *)param_5 = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
  if (*(char *)(param_1 + 0x338) == '\x01') {
    local_78 = 1.0;
    pdVar6 = (double *)&local_48;
    FUN_148936e52(param_1 + 0x338,pdVar6,param_4,param_2);
  }
  else {
    local_38 = *(double *)(param_3 + 0x50);
    local_48._0_4_ = *(undefined4 *)(param_3 + 0x40);
    local_48._4_4_ = *(undefined4 *)(param_3 + 0x44);
    dVar12 = *(double *)(param_3 + 0x40);
    uStack_40 = *(undefined4 *)(param_3 + 0x48);
    uStack_3c = *(undefined4 *)(param_3 + 0x4c);
    dVar8 = *(double *)(param_3 + 0x48);
    if ((*(byte *)(param_1 + 0x334) & 2) == 0) {
      fVar10 = (float)(param_4[2] * local_38 + *param_4 * dVar12 + param_4[1] * dVar8);
      if (fVar10 <= 0.0) {
        dVar13 = (double)-fVar10;
        dVar12 = dVar12 * dVar13 + *param_5;
        *param_5 = dVar12;
        dVar8 = dVar8 * dVar13 + param_5[1];
        param_5[1] = dVar8;
        dVar13 = local_38 * dVar13 + param_5[2];
        param_5[2] = dVar13;
        goto LAB_148d532b4;
      }
      uVar5 = 0;
    }
    else {
      local_70 = (undefined4 *)&local_48;
      local_78 = 1.0;
      FUN_148936eb8(&local_60,param_4,param_3,0);
      param_5[2] = local_50;
      *param_5 = local_60;
      param_5[1] = dStack_58;
      dVar12 = *param_5;
      dVar8 = param_5[1];
      dVar13 = param_5[2];
LAB_148d532b4:
      dVar11 = dVar13 * dVar13 + dVar12 * dVar12 + dVar8 * dVar8;
      if (((dVar11 != 1.0) || (dVar7 = dVar8, dVar9 = dVar13, dVar1 = dVar12, NAN(dVar11))) &&
         (dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464f0, dVar1 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar7 = dVar8 * dVar11;
        dVar9 = dVar13 * dVar11;
        dVar1 = dVar12 * dVar11;
      }
      dVar12 = (double)(float)param_2;
      *param_5 = dVar1 * dVar12;
      param_5[1] = dVar7 * dVar12;
      param_5[2] = dVar9 * dVar12;
      uVar5 = 1;
    }
    if (*(char *)(param_1 + 0x340) != '\x01') goto LAB_148d531df;
    pdVar6 = &local_60;
    local_78 = (float)param_2;
    FUN_148936b10(param_1 + 0x340,pdVar6,param_5,&local_48);
  }
  param_5[2] = pdVar6[2];
  uVar2 = *(undefined4 *)((longlong)pdVar6 + 4);
  uVar3 = *(undefined4 *)(pdVar6 + 1);
  uVar4 = *(undefined4 *)((longlong)pdVar6 + 0xc);
  *(undefined4 *)param_5 = *(undefined4 *)pdVar6;
  *(undefined4 *)((longlong)param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
  uVar5 = 1;
LAB_148d531df:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148d533be FUN_148d533be body=864 status=ok
// SIG undefined FUN_148d533be(void)

void FUN_148d533be(undefined8 *****param_1)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  undefined8 *****pppppuVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 local_d8 [2];
  undefined4 local_d4;
  undefined8 *****local_d0;
  undefined4 local_c8;
  ushort local_b8;
  byte local_b0;
  undefined8 **local_a8;
  undefined4 local_a0;
  undefined4 local_80;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x2e] != (undefined8 ****)0x0) {
    uVar8 = FUN_14479d2ce(param_1 + 3);
    *(undefined1 *)((longlong)param_1 + 0x162) = 0;
    pppppuVar3 = param_1 + 0x30;
    *(undefined4 *)(param_1 + 0x31) = 0;
    if (*(int *)((longlong)param_1 + 0x18c) < 0) {
      FUN_140373bdc(pppppuVar3,0);
    }
    lVar9 = FUN_1412e3d68(param_1[0x2e]);
    lVar13 = *(longlong *)(lVar9 + 0x380);
    if (*(longlong *)(lVar9 + 0x380) == 0) {
      lVar13 = lVar9;
    }
    if ((longlong)*(int *)(lVar9 + 0x388) != 0) {
      lVar9 = (longlong)*(int *)(lVar9 + 0x388) * 0x38;
      do {
        if ((*(byte *)(lVar13 + 0x34) & 1) == 0) {
          cVar7 = FUN_144a7b75a(*(undefined1 *)(lVar13 + 0x20),7);
          if (cVar7 != '\0') {
            uVar10 = FUN_14030a32e(lVar13);
            local_a8 = (undefined8 ***)0x0;
            FUN_14485c47a(&local_a8,uVar10);
            iVar4 = *(int *)(param_1 + 0x31);
            *(uint *)(param_1 + 0x31) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x18c) < iVar4 + 1U) {
              FUN_140155462(pppppuVar3,iVar4);
            }
            (*pppppuVar3)[iVar4] = (undefined8 ***)local_a8;
          }
        }
        lVar13 = lVar13 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    ppppuVar5 = param_1[5];
    local_a8 = (undefined8 **)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,uVar8);
    FUN_1448729ea(ppppuVar5 + 0x60,&local_d0,&local_a8);
    fVar14 = (float)FUN_144a7b41a(&local_d0,0x3f800000);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppppuVar12 = &local_d0;
      if (0x18 < local_b8) {
        ppppppuVar12 = (undefined8 ******)local_d0;
      }
      (*pcVar6)(ppppppuVar12);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
    FUN_144a5ac3a(&local_a8);
    if (0.0 < fVar14) {
      param_1[0x2d] = (undefined8 ****)0x0;
      uVar10 = FUN_1401b4c98(uVar8);
      local_d0 = (undefined8 ******)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      pppppuVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = (undefined8 ****)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppppuVar11 = (undefined8 *****)(DAT_14c758608 + 1);
      lVar13 = DAT_14c758608 + 1;
      if (pppppuVar11 == (undefined8 *****)0x0) {
        LOCK();
        UNLOCK();
        pppppuVar11 = (undefined8 *****)(DAT_14c758608 + 2);
        lVar13 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar13;
      local_d0[2] = pppppuVar11;
      *local_d0 = (undefined8 ****)&PTR_FUN_14b976a50;
      local_d0[3] = (undefined8 *****)0x0;
      FUN_14485c47a(local_d0 + 3,uVar8);
      pppppuVar3[4] = param_1;
      local_a8 = (undefined8 ***)0x0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_d0);
      local_68 = 1;
      local_e8 = local_d8;
      local_d8[0] = 0;
      local_d4 = 0xbf800000;
      FUN_1406f4044(uVar10,param_1 + 0x2d,&local_a8,fVar14);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_d0);
    }
    param_1[0x2e] = (undefined8 ****)0x0;
    ppppuVar5 = param_1[0x2f];
    if (ppppuVar5 != (undefined8 ****)0x0) {
      param_1[0x2f] = (undefined8 ****)0x0;
      LOCK();
      ppppuVar1 = ppppuVar5 + 1;
      *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppppuVar1 == 0) {
        (*(code *)**ppppuVar5)(ppppuVar5);
        LOCK();
        piVar2 = (int *)((longlong)ppppuVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppuVar5)[2])(ppppuVar5);
        }
      }
    }
    if (*(char *)(param_1 + 0xb) == '\x01') {
      *(undefined1 *)(param_1 + 0xb) = 0;
      FUN_148d512aa(param_1,param_1 + 0xc,*(undefined1 *)((longlong)param_1 + 0x161),
                    *(undefined1 *)(param_1 + 0x2c));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d53720 FUN_148d53720 body=838 status=ok
// SIG undefined FUN_148d53720(void)

void FUN_148d53720(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = *param_3;
  plVar2 = (longlong *)param_3[1];
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    plVar8 = *(longlong **)(param_1 + 0x30);
    if (plVar8 == (longlong *)0x0) goto LAB_148d537be;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d5377b:
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (plVar2 == (longlong *)0x0) goto LAB_148d537be;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    plVar8 = *(longlong **)(param_1 + 0x30);
    if (plVar2 == plVar8) {
      LOCK();
      plVar8 = plVar2 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x30) = plVar2;
      if (plVar8 != (longlong *)0x0) goto LAB_148d5377b;
    }
  }
  LOCK();
  plVar8 = plVar2 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_148d537be:
  local_50 = *param_3;
  local_48 = param_3[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_50);
  lVar5 = *(longlong *)(param_2 + 0x1b0);
  if (lVar5 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar5 = FUN_1404281d6(lVar5);
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x520) + 0x10))(lVar5 + 0x520,&local_60);
        plVar2 = local_58;
        lVar5 = local_60;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_58 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_58)(local_58);
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
        if (lVar5 != 0) {
          lVar4 = FUN_14479d2ce(param_1 + 0x18);
          if (lVar4 != 0) {
            lVar6 = FUN_145b98922();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              uVar7 = FUN_1447210f0(param_2);
              lVar6 = param_2 + 0x3d8;
              if (param_2 == 0) {
                lVar6 = 0;
              }
              local_78 = *(undefined8 *)(lVar5 + 0x40);
              local_70 = *(undefined4 *)(lVar5 + 0x48);
              local_68 = 0;
              local_88 = 1;
              FUN_14103ce14(&local_60,&local_78,lVar6,uVar7);
              plVar8 = local_58;
              if ((longlong *)(lVar4 + 0x1d40) != &local_60) {
                *(longlong *)(lVar4 + 0x1d40) = local_60;
                local_60 = 0;
                plVar3 = *(longlong **)(lVar4 + 0x1d48);
                if (local_58 != plVar3) {
                  local_58 = (longlong *)0x0;
                  *(longlong **)(lVar4 + 0x1d48) = plVar8;
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
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                }
              }
              plVar8 = local_58;
              if (local_58 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_58 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_58)(local_58);
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
        }
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar2 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d53a68 FUN_148d53a68 body=845 status=ok
// SIG undefined FUN_148d53a68(void)

void FUN_148d53a68(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  longlong *local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar5 == 0) goto LAB_148d53aa4;
  lVar6 = FUN_145b98922();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_148d53aa4;
  plVar7 = (longlong *)FUN_148d5feb8(lVar5);
  if (*plVar7 != 0) {
    FUN_148d55762(*plVar7 + 0x48,&local_98);
    plVar10 = local_90;
    *(undefined8 *)(param_1 + 0x58) = local_98;
    local_98 = 0;
    plVar7 = *(longlong **)(param_1 + 0x60);
    if (local_90 == plVar7) {
LAB_148d53ce0:
      plVar7 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_90 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_90)();
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
      }
    }
    else {
      local_90 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x60) = plVar10;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar7)();
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        goto LAB_148d53ce0;
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x58);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0xa0) < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined8 **)(lVar6 + 0x98);
      }
      *(undefined8 *)(param_1 + 0x88) = uVar8;
      plVar7 = *(longlong **)(param_1 + 0x60);
      if (plVar7 == (longlong *)0x0) {
        *(longlong *)(param_1 + 0x68) = lVar6;
        plVar10 = *(longlong **)(param_1 + 0x70);
        if (plVar10 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x70) = 0;
LAB_148d53d71:
          LOCK();
          plVar7 = plVar10 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x000148d53dac:
            if (iVar3 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(longlong *)(param_1 + 0x68) = lVar6;
        plVar10 = *(longlong **)(param_1 + 0x70);
        if (plVar7 == plVar10) {
          LOCK();
          plVar10 = plVar7 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
            plVar10 = plVar7;
            goto joined_r0x000148d53dac;
          }
        }
        else {
          *(longlong **)(param_1 + 0x70) = plVar7;
          if (plVar10 != (longlong *)0x0) goto LAB_148d53d71;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar5 + 0x1d1c);
  lVar6 = FUN_1447210f0(lVar5);
  *(float *)(param_1 + 0x80) =
       (float)((double)*(float *)(param_1 + 0x78) + *(double *)(lVar6 + 0x6d0));
  if (*(float *)(param_1 + 0x78) <= 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  uVar8 = FUN_1401b4c98(lVar5);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar9 = FUN_14479d2ce(param_1 + 0x18);
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  FUN_1446efa72(&local_b0,0,3,0x10);
  puVar4 = local_b0;
  local_a8 = 3;
  *local_b0 = &PTR_LAB_14a1c8830;
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
  local_b0[2] = lVar6;
  *local_b0 = &PTR_FUN_14b976ac0;
  local_b0[3] = 0;
  FUN_14485c47a(local_b0 + 3,uVar9);
  puVar4[4] = param_1;
  local_98 = 0;
  local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
  FUN_14487d8d8(&local_98,&local_b0);
  local_58 = 1;
  local_b8 = local_a0;
  local_a0[0] = 0;
  local_9c = 0xbf800000;
  FUN_1406f4044(uVar8,param_1 + 0x90,&local_98,uVar2);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  FUN_1449db362(&local_b0);
LAB_148d53aa4:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d53dd4 FUN_148d53dd4 body=216 status=ok
// SIG undefined FUN_148d53dd4(void)

void FUN_148d53dd4(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar3 = FUN_145b98922();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(longlong *)(param_1 + 0x90) != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x90);
        uVar4 = FUN_1401b4c98(lVar2);
        lVar3 = FUN_144a61814(uVar4,puVar1);
        if (lVar3 != 0) {
          FUN_1405a424c(uVar4,*puVar1);
        }
        *puVar1 = 0;
      }
      if (*(char *)(param_1 + 0x98) == '\x01') {
        *(undefined1 *)(param_1 + 0x98) = 0;
        uVar4 = FUN_1447210f0(lVar2);
        lVar3 = FUN_1412af310(uVar4);
        if (lVar3 != 0) {
          FUN_14127ea9c(lVar3,lVar2,0);
        }
      }
      if (*(longlong *)(lVar2 + 0x1d40) != 0) {
        FUN_140994ddc(*(longlong *)(lVar2 + 0x1d40),0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d53eac FUN_148d53eac body=1101 status=ok
// SIG undefined FUN_148d53eac(void)

void FUN_148d53eac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined2 local_1f8;
  undefined2 uStack_1f6;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 local_1e4;
  undefined1 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [48];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined **local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  byte local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  double local_60;
  
  dVar10 = (double)(DAT_14c707940 ^ (ulonglong)auStack_298);
  local_60 = dVar10;
  if (*(longlong *)(param_2 + 0x1d38) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      local_238 = DAT_14c8464f0;
      local_248 = DAT_14c8464e0;
      uStack_240 = DAT_14c8464e8;
      local_258 = DAT_14c846508;
      local_268 = (undefined4)DAT_14c8464f8;
      uStack_264 = DAT_14c8464f8._4_4_;
      uStack_260 = (undefined4)DAT_14c846500;
      uStack_25c = DAT_14c846500._4_4_;
    }
    else {
      local_238 = *(undefined8 *)(lVar1 + 0x270);
      local_248 = *(undefined8 *)(lVar1 + 0x260);
      uStack_240 = *(undefined8 *)(lVar1 + 0x268);
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      local_1f8 = SUB82(dVar6,0);
      uStack_1f6 = (undefined2)((ulonglong)dVar6 >> 0x10);
      uStack_1f4 = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_1f0 = SUB84(dVar7,0);
      uStack_1ec = (undefined4)((ulonglong)dVar7 >> 0x20);
      pdVar11 = *(double **)(lVar1 + 0x228);
      uVar12 = 0;
      local_208 = dVar4;
      uStack_200 = dVar5;
      if (pdVar11 == (double *)0x0) {
        uVar12 = 0x40;
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
        *(double **)(lVar1 + 0x228) = pdVar11;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar10,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
      uVar13 = movmskpd(uVar12,auVar3);
      if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(uint *)(pdVar11 + 2) = CONCAT22(uStack_1f6,local_1f8);
        *(undefined4 *)((longlong)pdVar11 + 0x14) = uStack_1f4;
        *(undefined4 *)(pdVar11 + 3) = uStack_1f0;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_1ec;
        *(undefined4 *)pdVar11 = (undefined4)local_208;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_208._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_200;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_200._4_4_;
        FUN_1448052ee(&local_208,&local_228);
        pdVar11[6] = local_218;
        pdVar11[4] = (double)CONCAT44(uStack_224,local_228);
        pdVar11[5] = (double)CONCAT44(uStack_21c,uStack_220);
      }
      local_258 = pdVar11[6];
      local_268 = *(undefined4 *)(pdVar11 + 4);
      uStack_264 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_260 = *(undefined4 *)(pdVar11 + 5);
      uStack_25c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
    }
    local_218 = local_258;
    local_228 = local_268;
    uStack_224 = uStack_264;
    uStack_220 = uStack_260;
    uStack_21c = uStack_25c;
  }
  else {
    local_278 = 0;
    FUN_14059f62a(*(longlong *)(param_2 + 0x1d38),*(undefined8 *)(param_1 + 0x88),&local_248,
                  &local_228);
  }
  if (*(char *)(param_2 + 0x178) == '\x03') {
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_200 = 0.0;
    local_1f8 = 0;
    local_1e4 = 0x3f800000;
    local_1dc = 0;
    local_1d8 = 0;
    local_1d4 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 1;
    local_180 = 0;
    local_178 = 0x200000000;
    local_170 = 0;
    local_168 = 0x4fc71eb4;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    FUN_1405c5fa2();
    local_140 = &DAT_14cb769e8;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = &PTR_FUN_14b0394b0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    local_f8 = (undefined4)DAT_14c8464f8;
    uStack_f4 = DAT_14c8464f8._4_4_;
    uStack_f0 = (undefined4)DAT_14c846500;
    uStack_ec = DAT_14c846500._4_4_;
    local_e8 = DAT_14c846508;
    local_80 = &DAT_3f8000003f800000;
    local_78 = 0;
    local_70 = 0;
    local_208 = *(double *)(param_1 + 0x40);
    if (local_208 == 0.0) {
      uStack_200 = *(double *)(param_1 + 0x48);
    }
    local_128 = 0;
    FUN_142b2fc9c(&uStack_1f4,*(undefined4 *)(param_2 + 0x1d58));
    local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)(param_2 + 0x1d5c));
    local_e0 = local_248;
    uStack_d8 = uStack_240;
    local_d0 = local_238;
    local_1c0 = CONCAT44(local_1c0._4_4_,*(undefined4 *)(param_2 + 0x1d50));
    local_b8 = local_238;
    local_c8 = local_248;
    uStack_c0 = uStack_240;
    local_a0 = local_218;
    local_b0 = local_228;
    uStack_ac = uStack_224;
    uStack_a8 = uStack_220;
    uStack_a4 = uStack_21c;
    local_1b8 = (**(code **)(*(longlong *)(param_2 + 0x3c8) + 0x18))(param_2 + 0x3c8);
    (*(code *)local_148[4])(&local_148,0);
    local_140 = *(undefined **)(param_2 + 0xec0);
    FUN_1406022fe(&local_138,param_2 + 0xec8);
    local_1d0 = CONCAT44(*(undefined4 *)(param_2 + 0x1d98),(undefined4)local_1d0);
    local_80 = (undefined1 *)CONCAT44(0x3f800000,*(undefined4 *)(param_2 + 0x1d54));
    cVar8 = FUN_148d600b6(param_2,&local_120);
    local_128 = local_128 & 0xfd | cVar8 * '\x02';
    local_78 = *(undefined8 *)(param_2 + 0x1dd0);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_14118c70e(local_1b0,*(longlong *)(param_1 + 0x58) + 0x100);
    }
    FUN_14416d11a(param_1,&local_208,local_1c0 & 0xffffffff);
    FUN_1418e8ab6(&local_1f8);
  }
  if (((ulonglong)local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d54310 FUN_148d54310 body=93 status=ok
// SIG undefined FUN_148d54310(void)

void FUN_148d54310(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b975b70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d5436e FUN_148d5436e body=93 status=ok
// SIG undefined FUN_148d5436e(void)

void FUN_148d5436e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b975b70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d543cc FUN_148d543cc body=126 status=ok
// SIG undefined FUN_148d543cc(void)

void FUN_148d543cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b975b70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d5443b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d54468 FUN_148d54468 body=93 status=ok
// SIG undefined FUN_148d54468(void)

void FUN_148d54468(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b975be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d544c6 FUN_148d544c6 body=93 status=ok
// SIG undefined FUN_148d544c6(void)

void FUN_148d544c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b975be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d54524 FUN_148d54524 body=126 status=ok
// SIG undefined FUN_148d54524(void)

void FUN_148d54524(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab9f910;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b975be0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d54593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d545ca FUN_148d545ca body=93 status=ok
// SIG undefined FUN_148d545ca(void)

void FUN_148d545ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b975cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b975c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d54628 FUN_148d54628 body=126 status=ok
// SIG undefined FUN_148d54628(void)

void FUN_148d54628(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b975cc0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b975c50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d54697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d546a6 FUN_148d546a6 body=25 status=ok
// SIG undefined FUN_148d546a6(void)

undefined8 FUN_148d546a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 148d546da FUN_148d546da body=93 status=ok
// SIG undefined FUN_148d546da(void)

void FUN_148d546da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b975d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d54738 FUN_148d54738 body=93 status=ok
// SIG undefined FUN_148d54738(void)

void FUN_148d54738(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b975d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d54796 FUN_148d54796 body=126 status=ok
// SIG undefined FUN_148d54796(void)

void FUN_148d54796(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b975d30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d54805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d54822 FUN_148d54822 body=133 status=ok
// SIG undefined FUN_148d54822(void)

void FUN_148d54822(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar4;
    FUN_148c24d66(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d548a8 FUN_148d548a8 body=1 status=ok
// SIG undefined FUN_148d548a8(void)

void FUN_148d548a8(void)

{
  return;
}



// FUNCTION 148d548aa FUN_148d548aa body=29 status=ok
// SIG undefined FUN_148d548aa(void)

undefined8 FUN_148d548aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d548e6 FUN_148d548e6 body=29 status=ok
// SIG undefined FUN_148d548e6(void)

undefined8 FUN_148d548e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d5491e FUN_148d5491e body=29 status=ok
// SIG undefined FUN_148d5491e(void)

bool FUN_148d5491e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d5493c FUN_148d5493c body=26 status=ok
// SIG undefined FUN_148d5493c(void)

bool FUN_148d5493c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d54956 FUN_148d54956 body=24 status=ok
// SIG undefined FUN_148d54956(void)

bool FUN_148d54956(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d5496e FUN_148d5496e body=93 status=ok
// SIG undefined FUN_148d5496e(void)

void FUN_148d5496e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b975e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d549cc FUN_148d549cc body=93 status=ok
// SIG undefined FUN_148d549cc(void)

void FUN_148d549cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b975e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d54a2a FUN_148d54a2a body=126 status=ok
// SIG undefined FUN_148d54a2a(void)

void FUN_148d54a2a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b975e60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d54a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d54aa8 FUN_148d54aa8 body=40 status=ok
// SIG undefined FUN_148d54aa8(void)

void FUN_148d54aa8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d54acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d54ad0 FUN_148d54ad0 body=152 status=ok
// SIG undefined FUN_148d54ad0(void)

bool FUN_148d54ad0(longlong param_1,undefined8 param_2)

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



// FUNCTION 148d54b6a FUN_148d54b6a body=109 status=ok
// SIG undefined FUN_148d54b6a(void)

void FUN_148d54b6a(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*param_1 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x02';
  *(undefined8 *)(param_1 + 8) = *param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 148d54bd8 FUN_148d54bd8 body=61 status=ok
// SIG undefined FUN_148d54bd8(void)

longlong FUN_148d54bd8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1402566a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148d54c16 FUN_148d54c16 body=61 status=ok
// SIG undefined FUN_148d54c16(void)

longlong FUN_148d54c16(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_141322e0c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148d54c54 FUN_148d54c54 body=128 status=ok
// SIG undefined FUN_148d54c54(void)

void FUN_148d54c54(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cbcb620;
  if (DAT_14cbcb654 != 0) {
    *(int *)(DAT_14cbcb620 + (longlong)DAT_14cbcb650 * 0x14) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x14) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbcb654) {
    iVar4 = DAT_14cbcb650;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x14) = iVar4;
  DAT_14cbcb654 = DAT_14cbcb654 + 1;
  puVar3 = &DAT_14cbcb630;
  if (DAT_14cbcb640 != (undefined4 *)0x0) {
    puVar3 = DAT_14cbcb640;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cbcb650 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148d54cd4 FUN_148d54cd4 body=73 status=ok
// SIG undefined FUN_148d54cd4(void)

undefined8 * FUN_148d54cd4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b975f70;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d54d2e FUN_148d54d2e body=144 status=ok
// SIG undefined FUN_148d54d2e(void)

void FUN_148d54d2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b975fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b975f70;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d54db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148d54dbe FUN_148d54dbe body=144 status=ok
// SIG undefined FUN_148d54dbe(void)

void FUN_148d54dbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b975fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b975f70;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d54e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148d54e4e FUN_148d54e4e body=171 status=ok
// SIG undefined FUN_148d54e4e(void)

void FUN_148d54e4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b975fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b975f70;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d54ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d54efa FUN_148d54efa body=91 status=ok
// SIG undefined FUN_148d54efa(void)

void FUN_148d54efa(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_20 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d54f58 FUN_148d54f58 body=73 status=ok
// SIG undefined FUN_148d54f58(void)

undefined8 * FUN_148d54f58(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b976050;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d54fb6 FUN_148d54fb6 body=144 status=ok
// SIG undefined FUN_148d54fb6(void)

void FUN_148d54fb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b976050;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d5503b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148d55046 FUN_148d55046 body=144 status=ok
// SIG undefined FUN_148d55046(void)

void FUN_148d55046(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b976050;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d550cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148d550d6 FUN_148d550d6 body=171 status=ok
// SIG undefined FUN_148d550d6(void)

void FUN_148d550d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b976050;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d55171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d55182 FUN_148d55182 body=90 status=ok
// SIG undefined FUN_148d55182(void)

void FUN_148d55182(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_19 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d551f6 FUN_148d551f6 body=93 status=ok
// SIG undefined FUN_148d551f6(void)

void FUN_148d551f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9760c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d55254 FUN_148d55254 body=126 status=ok
// SIG undefined FUN_148d55254(void)

void FUN_148d55254(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9760c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d552c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d552de FUN_148d552de body=9 status=ok
// SIG undefined FUN_148d552de(void)

void FUN_148d552de(longlong param_1)

{
  FUN_14592512a(param_1 + 0x10);
  return;
}



// FUNCTION 148d552e8 FUN_148d552e8 body=29 status=ok
// SIG undefined FUN_148d552e8(void)

undefined8 FUN_148d552e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d55306 FUN_148d55306 body=122 status=ok
// SIG undefined FUN_148d55306(void)

void FUN_148d55306(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 148d55380 FUN_148d55380 body=96 status=ok
// SIG undefined FUN_148d55380(void)

void FUN_148d55380(longlong param_1,int param_2)

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



// FUNCTION 148d553e0 FUN_148d553e0 body=110 status=ok
// SIG undefined FUN_148d553e0(void)

void FUN_148d553e0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_148d55450(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d55450 FUN_148d55450 body=132 status=ok
// SIG undefined FUN_148d55450(void)

void FUN_148d55450(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 148d554d4 FUN_148d554d4 body=170 status=ok
// SIG undefined FUN_148d554d4(void)

undefined8 * FUN_148d554d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1a8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b976c60;
  memset(puVar1 + 2,0,0x198);
  *(undefined4 *)((longlong)puVar1 + 0x84) = 0x80;
  *(undefined4 *)(puVar1 + 0x11) = 0xffffffff;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0xf;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
  FUN_140c4ac3c(puVar1 + 0x1e);
  FUN_14187c194(puVar1 + 0x26);
  return puVar1;
}


