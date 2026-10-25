// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f1d2fe FUN_143f1d2fe body=29 status=ok
// SIG undefined FUN_143f1d2fe(void)

undefined8 FUN_143f1d2fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f1d330 FUN_143f1d330 body=93 status=ok
// SIG undefined FUN_143f1d330(void)

void FUN_143f1d330(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f1d38e FUN_143f1d38e body=93 status=ok
// SIG undefined FUN_143f1d38e(void)

void FUN_143f1d38e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f1d3ec FUN_143f1d3ec body=126 status=ok
// SIG undefined FUN_143f1d3ec(void)

void FUN_143f1d3ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2960;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1d45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1d46a FUN_143f1d46a body=37 status=ok
// SIG undefined FUN_143f1d46a(void)

void FUN_143f1d46a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_148a6cee0(uVar1,1);
  FUN_148a6cee0(uVar1,0);
  return;
}



// FUNCTION 143f1d490 FUN_143f1d490 body=40 status=ok
// SIG undefined FUN_143f1d490(void)

undefined1 FUN_143f1d490(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_148a6cee0(uVar1,1);
  FUN_148a6cee0(uVar1,0);
  return 1;
}



// FUNCTION 143f1d4b8 FUN_143f1d4b8 body=29 status=ok
// SIG undefined FUN_143f1d4b8(void)

undefined8 FUN_143f1d4b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f1d4ea FUN_143f1d4ea body=93 status=ok
// SIG undefined FUN_143f1d4ea(void)

void FUN_143f1d4ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e29d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f1d548 FUN_143f1d548 body=93 status=ok
// SIG undefined FUN_143f1d548(void)

void FUN_143f1d548(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e29d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f1d5a6 FUN_143f1d5a6 body=126 status=ok
// SIG undefined FUN_143f1d5a6(void)

void FUN_143f1d5a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e29d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1d615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1d62e FUN_143f1d62e body=20 status=ok
// SIG undefined FUN_143f1d62e(void)

undefined1 FUN_143f1d62e(longlong param_1)

{
  FUN_143f1d642(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f1d642 FUN_143f1d642 body=364 status=ok
// SIG undefined FUN_143f1d642(void)

void FUN_143f1d642(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x508) != 0) && (*(longlong *)(lVar2 + 0x510) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x510) + 8))) {
    FUN_1401cb356();
    local_38 = *(undefined8 *)(lVar2 + 0x508);
    local_30 = *(longlong *)(lVar2 + 0x510);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_38);
  }
  uVar4 = FUN_1401cb356();
  local_48 = FUN_148a6db0e;
  local_40 = (longlong *)((ulonglong)local_40._4_4_ << 0x20);
  FUN_148a76962(&local_58,lVar2);
  local_68 = 0x41f00000;
  FUN_1405f67fc(uVar4,&local_48,&local_58,L"FGbxFriends_ForceRefresh");
  *(code **)(lVar2 + 0x508) = local_48;
  local_48 = (code *)0x0;
  plVar3 = *(longlong **)(lVar2 + 0x510);
  *(longlong **)(lVar2 + 0x510) = local_40;
  local_40 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_143f1d787;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f1d787:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1d7b0 FUN_143f1d7b0 body=29 status=ok
// SIG undefined FUN_143f1d7b0(void)

undefined8 FUN_143f1d7b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f1d7e2 FUN_143f1d7e2 body=85 status=ok
// SIG undefined FUN_143f1d7e2(void)

void FUN_143f1d7e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2b50;
  return;
}



// FUNCTION 143f1d838 FUN_143f1d838 body=85 status=ok
// SIG undefined FUN_143f1d838(void)

void FUN_143f1d838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2b50;
  return;
}



// FUNCTION 143f1d88e FUN_143f1d88e body=118 status=ok
// SIG undefined FUN_143f1d88e(void)

void FUN_143f1d88e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4392c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2b50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1d8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1d90a FUN_143f1d90a body=29 status=ok
// SIG undefined FUN_143f1d90a(void)

undefined8 FUN_143f1d90a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f1d93c FUN_143f1d93c body=93 status=ok
// SIG undefined FUN_143f1d93c(void)

void FUN_143f1d93c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2df0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f1d99a FUN_143f1d99a body=93 status=ok
// SIG undefined FUN_143f1d99a(void)

void FUN_143f1d99a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2df0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f1d9f8 FUN_143f1d9f8 body=126 status=ok
// SIG undefined FUN_143f1d9f8(void)

void FUN_143f1d9f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2df0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1da67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1da76 FUN_143f1da76 body=81 status=ok
// SIG undefined FUN_143f1da76(void)

undefined1 FUN_143f1da76(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (0.0 < *(float *)(lVar1 + 0x534)) {
    param_2 = *(float *)(lVar1 + 0x534) - param_2;
    *(float *)(lVar1 + 0x534) = param_2;
    if (param_2 <= 0.0) {
      FUN_148a6cee0(lVar1,1);
      *(undefined4 *)(lVar1 + 0x534) = *(undefined4 *)(lVar1 + 0x530);
    }
  }
  return 1;
}



// FUNCTION 143f1dac8 FUN_143f1dac8 body=81 status=ok
// SIG undefined FUN_143f1dac8(void)

undefined1 FUN_143f1dac8(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (0.0 < *(float *)(lVar1 + 0x534)) {
    param_2 = *(float *)(lVar1 + 0x534) - param_2;
    *(float *)(lVar1 + 0x534) = param_2;
    if (param_2 <= 0.0) {
      FUN_148a6cee0(lVar1,1);
      *(undefined4 *)(lVar1 + 0x534) = *(undefined4 *)(lVar1 + 0x530);
    }
  }
  return 1;
}



// FUNCTION 143f1db1a FUN_143f1db1a body=29 status=ok
// SIG undefined FUN_143f1db1a(void)

undefined8 FUN_143f1db1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f1db4c FUN_143f1db4c body=85 status=ok
// SIG undefined FUN_143f1db4c(void)

void FUN_143f1db4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2e60;
  return;
}



// FUNCTION 143f1dba2 FUN_143f1dba2 body=85 status=ok
// SIG undefined FUN_143f1dba2(void)

void FUN_143f1dba2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2e60;
  return;
}



// FUNCTION 143f1dbf8 FUN_143f1dbf8 body=118 status=ok
// SIG undefined FUN_143f1dbf8(void)

void FUN_143f1dbf8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438950;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2e60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1dc5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1dc74 FUN_143f1dc74 body=64 status=ok
// SIG undefined FUN_143f1dc74(void)

undefined8 * FUN_143f1dc74(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e2ed0;
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



// FUNCTION 143f1dcb8 FUN_143f1dcb8 body=81 status=ok
// SIG undefined FUN_143f1dcb8(void)

undefined8 FUN_143f1dcb8(longlong param_1)

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



// FUNCTION 143f1dd0e FUN_143f1dd0e body=89 status=ok
// SIG undefined FUN_143f1dd0e(void)

bool FUN_143f1dd0e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f1dd59;
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
LAB_143f1dd59:
  return lVar6 == param_2;
}



// FUNCTION 143f1dd84 FUN_143f1dd84 body=118 status=ok
// SIG undefined FUN_143f1dd84(void)

void FUN_143f1dd84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2ed0;
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



// FUNCTION 143f1ddfa FUN_143f1ddfa body=118 status=ok
// SIG undefined FUN_143f1ddfa(void)

void FUN_143f1ddfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2ed0;
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



// FUNCTION 143f1de70 FUN_143f1de70 body=156 status=ok
// SIG undefined FUN_143f1de70(void)

void FUN_143f1de70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2ed0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f1defc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1df18 FUN_143f1df18 body=49 status=ok
// SIG undefined FUN_143f1df18(void)

undefined8 FUN_143f1df18(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f1df4a(param_1 + 0x28,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f1df4a FUN_143f1df4a body=250 status=ok
// SIG undefined FUN_143f1df4a(void)

void FUN_143f1df4a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar4 = (longlong *)*param_1;
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      local_30 = (longlong *)param_2[1];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      local_38 = lVar5;
      (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined4 *)(param_1 + 1),&local_38);
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
      lVar5 = *param_2;
    }
    local_30 = (longlong *)param_2[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_38 = lVar5;
    (**(code **)(*plVar4 + 0x40))(plVar4,*(undefined4 *)(param_1 + 1),&local_38);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1e046 FUN_143f1e046 body=90 status=ok
// SIG undefined FUN_143f1e046(void)

undefined8 * FUN_143f1e046(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e2f40;
  FUN_140b6c1c2(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 143f1e0a4 FUN_143f1e0a4 body=81 status=ok
// SIG undefined FUN_143f1e0a4(void)

undefined8 FUN_143f1e0a4(longlong param_1)

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



// FUNCTION 143f1e0fa FUN_143f1e0fa body=89 status=ok
// SIG undefined FUN_143f1e0fa(void)

bool FUN_143f1e0fa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f1e145;
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
LAB_143f1e145:
  return lVar6 == param_2;
}



// FUNCTION 143f1e170 FUN_143f1e170 body=193 status=ok
// SIG undefined FUN_143f1e170(void)

void FUN_143f1e170(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438b20;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e2f40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if (iVar1 != 0) {
    FUN_140b6f604(puVar2 + 7,iVar1,0);
    FUN_140b6ce2b(puVar2[7],uVar4,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143f1e232 FUN_143f1e232 body=193 status=ok
// SIG undefined FUN_143f1e232(void)

void FUN_143f1e232(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438b20;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e2f40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if (iVar1 != 0) {
    FUN_140b6f604(puVar2 + 7,iVar1,0);
    FUN_140b6ce2b(puVar2[7],uVar4,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143f1e2f4 FUN_143f1e2f4 body=227 status=ok
// SIG undefined FUN_143f1e2f4(void)

void FUN_143f1e2f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  undefined8 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14b438b20;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14b4e2f40;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x20);
  p_Var3->EntryCount = (int)lVar4;
  p_Var3->ContentionCount = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var3[1].Type = (short)uVar1;
  p_Var3[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  p_Var3->Flags = (int)uVar5;
  p_Var3->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar5 >> 0x20);
  p_Var3->SpareWORD = (short)((ulonglong)uVar5 >> 0x30);
  p_Var3[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar2 = *(int *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(int *)&p_Var3[1].ProcessLocksList.Flink = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_140b6f604(&p_Var3[1].CriticalSection,iVar2,0);
    FUN_140b6ce2b(p_Var3[1].CriticalSection,uVar5,iVar2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1e3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1e3f2 FUN_143f1e3f2 body=65 status=ok
// SIG undefined FUN_143f1e3f2(void)

bool FUN_143f1e3f2(longlong param_1,byte param_2)

{
  bool bVar1;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8);
    if ((param_2 & bVar1) == 1) {
      FUN_141335756(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_1 + 0x38);
      bVar1 = true;
    }
  }
  return bVar1;
}



// FUNCTION 143f1e434 FUN_143f1e434 body=64 status=ok
// SIG undefined FUN_143f1e434(void)

undefined8 * FUN_143f1e434(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e2fb0;
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



// FUNCTION 143f1e478 FUN_143f1e478 body=81 status=ok
// SIG undefined FUN_143f1e478(void)

undefined8 FUN_143f1e478(longlong param_1)

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



// FUNCTION 143f1e4ce FUN_143f1e4ce body=89 status=ok
// SIG undefined FUN_143f1e4ce(void)

bool FUN_143f1e4ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f1e519;
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
LAB_143f1e519:
  return lVar6 == param_2;
}



// FUNCTION 143f1e544 FUN_143f1e544 body=118 status=ok
// SIG undefined FUN_143f1e544(void)

void FUN_143f1e544(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2fb0;
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



// FUNCTION 143f1e5ba FUN_143f1e5ba body=118 status=ok
// SIG undefined FUN_143f1e5ba(void)

void FUN_143f1e5ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2fb0;
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



// FUNCTION 143f1e630 FUN_143f1e630 body=156 status=ok
// SIG undefined FUN_143f1e630(void)

void FUN_143f1e630(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2fb0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f1e6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1e6e8 FUN_143f1e6e8 body=69 status=ok
// SIG undefined FUN_143f1e6e8(void)

ulonglong FUN_143f1e6e8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*param_3 == 0) {
      FUN_148a6da54(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2);
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 143f1e72e FUN_143f1e72e body=64 status=ok
// SIG undefined FUN_143f1e72e(void)

undefined8 * FUN_143f1e72e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e3020;
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



// FUNCTION 143f1e772 FUN_143f1e772 body=81 status=ok
// SIG undefined FUN_143f1e772(void)

undefined8 FUN_143f1e772(longlong param_1)

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



// FUNCTION 143f1e7c8 FUN_143f1e7c8 body=89 status=ok
// SIG undefined FUN_143f1e7c8(void)

bool FUN_143f1e7c8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f1e813;
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
LAB_143f1e813:
  return lVar6 == param_2;
}



// FUNCTION 143f1e83e FUN_143f1e83e body=118 status=ok
// SIG undefined FUN_143f1e83e(void)

void FUN_143f1e83e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e3020;
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



// FUNCTION 143f1e8b4 FUN_143f1e8b4 body=118 status=ok
// SIG undefined FUN_143f1e8b4(void)

void FUN_143f1e8b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e3020;
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



// FUNCTION 143f1e92a FUN_143f1e92a body=156 status=ok
// SIG undefined FUN_143f1e92a(void)

void FUN_143f1e92a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4392c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e3020;
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
                    /* WARNING: Could not recover jumptable at 0x000143f1e9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1e9c6 FUN_143f1e9c6 body=87 status=ok
// SIG undefined FUN_143f1e9c6(void)

void FUN_143f1e9c6(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_5;
  local_10 = param_2;
  local_9 = param_3;
  FUN_143f1ea90(param_1 + 0x28,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1ea1e FUN_143f1ea1e body=112 status=ok
// SIG undefined FUN_143f1ea1e(void)

undefined8
FUN_143f1ea1e(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    local_18 = param_5;
    FUN_143f1ea90(param_1 + 0x28,&local_10,&local_9);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1ea90 FUN_143f1ea90 body=1006 status=ok
// SIG undefined FUN_143f1ea90(void)

void FUN_143f1ea90(longlong *param_1,uint *param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_2d;
  uint local_2c;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = *param_3;
  local_2c = *param_2;
  local_58 = &local_2c;
  lVar3 = *param_1;
  local_50 = &local_2d;
  local_40 = param_5;
  local_38 = param_1 + 1;
  local_60 = lVar3;
  local_48 = param_4;
  if ((int)param_1[1] == 1) {
    if (*(int *)(lVar3 + 0x620) != *(int *)(lVar3 + 0x64c)) {
      lVar5 = lVar3 + 0x650;
      lVar6 = *(longlong *)(lVar3 + 0x658);
      if (*(longlong *)(lVar3 + 0x658) == 0) {
        lVar6 = lVar5;
      }
      uVar9 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x660) - 1U & local_2c) * 4);
      if (uVar9 != 0xffffffff) {
        lVar6 = *(longlong *)(lVar3 + 0x618);
        uVar10 = uVar9;
        do {
          if (*(uint *)(lVar6 + (longlong)(int)uVar10 * 0x28) == local_2c) goto LAB_143f1ec00;
          uVar10 = *(uint *)(lVar6 + (longlong)(int)uVar10 * 0x28 + 0x20);
        } while (uVar10 != 0xffffffff);
      }
    }
  }
  else if (((int)param_1[1] == 0) && (*(int *)(lVar3 + 0x5d0) != *(int *)(lVar3 + 0x5fc))) {
    lVar5 = lVar3 + 0x600;
    lVar6 = *(longlong *)(lVar3 + 0x608);
    if (*(longlong *)(lVar3 + 0x608) == 0) {
      lVar6 = lVar5;
    }
    uVar9 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x610) - 1U & local_2c) * 4);
    if (uVar9 != 0xffffffff) {
      lVar6 = *(longlong *)(lVar3 + 0x5c8);
      uVar10 = uVar9;
      do {
        if (*(uint *)(lVar6 + (longlong)(int)uVar10 * 0x28) == local_2c) goto LAB_143f1eb71;
        uVar10 = *(uint *)(lVar6 + (longlong)(int)uVar10 * 0x28 + 0x20);
      } while (uVar10 != 0xffffffff);
    }
  }
  goto LAB_143f1edbe;
  while (uVar9 = puVar8[8], uVar9 != 0xffffffff) {
LAB_143f1ec00:
    puVar8 = (uint *)(lVar6 + (longlong)(int)uVar9 * 0x28);
    if (*puVar8 == local_2c) goto LAB_143f1ed2a;
  }
  puVar8 = (uint *)0x0;
LAB_143f1ed2a:
  *(char *)(puVar8 + 7) = cVar2;
  if (cVar2 != '\0') {
    if (*(int *)(lVar3 + 0x620) != *(int *)(lVar3 + 0x64c)) {
      if (*(longlong *)(lVar3 + 0x658) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x658);
      }
      uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x660) - 1U & local_2c) * 4);
      if (uVar9 != 0xffffffff) {
        do {
          puVar8 = (uint *)(*(longlong *)(lVar3 + 0x618) + (longlong)(int)uVar9 * 0x28);
          if (*puVar8 == local_2c) goto LAB_143f1ee21;
          uVar9 = puVar8[8];
        } while (uVar9 != 0xffffffff);
      }
    }
    puVar8 = (uint *)0x0;
LAB_143f1ee21:
    puVar8[6] = 0;
    FUN_1401cb356();
    local_28 = *(longlong *)(puVar8 + 2);
    local_20 = *(longlong *)(puVar8 + 4);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar4 = *(longlong **)(puVar8 + 4);
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    FUN_146221bd8(lVar3,local_2c);
    goto LAB_143f1edbe;
  }
  if (*(int *)(lVar3 + 0x620) != *(int *)(lVar3 + 0x64c)) {
    if (*(longlong *)(lVar3 + 0x658) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x658);
    }
    uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x660) - 1U & local_2c) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar8 = (uint *)(*(longlong *)(lVar3 + 0x618) + (longlong)(int)uVar9 * 0x28);
        if (*puVar8 == local_2c) goto LAB_143f1ed89;
        uVar9 = puVar8[8];
      } while (uVar9 != 0xffffffff);
    }
  }
  puVar8 = (uint *)0x0;
LAB_143f1ed89:
  pwVar7 = L"Platform";
  goto LAB_143f1ed94;
  while (uVar9 = puVar8[8], uVar9 != 0xffffffff) {
LAB_143f1eb71:
    puVar8 = (uint *)(lVar6 + (longlong)(int)uVar9 * 0x28);
    if (*puVar8 == local_2c) goto LAB_143f1ec18;
  }
  puVar8 = (uint *)0x0;
LAB_143f1ec18:
  *(char *)(puVar8 + 7) = cVar2;
  if (cVar2 != '\0') {
    if (*(int *)(lVar3 + 0x5d0) != *(int *)(lVar3 + 0x5fc)) {
      if (*(longlong *)(lVar3 + 0x608) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x608);
      }
      uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x610) - 1U & local_2c) * 4);
      if (uVar9 != 0xffffffff) {
        do {
          puVar8 = (uint *)(*(longlong *)(lVar3 + 0x5c8) + (longlong)(int)uVar9 * 0x28);
          if (*puVar8 == local_2c) goto LAB_143f1ec77;
          uVar9 = puVar8[8];
        } while (uVar9 != 0xffffffff);
      }
    }
    puVar8 = (uint *)0x0;
LAB_143f1ec77:
    puVar8[6] = 0;
    FUN_1401cb356();
    local_28 = *(longlong *)(puVar8 + 2);
    local_20 = *(longlong *)(puVar8 + 4);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar4 = *(longlong **)(puVar8 + 4);
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    FUN_141334968(lVar3,local_2c);
    goto LAB_143f1edbe;
  }
  if (*(int *)(lVar3 + 0x5d0) != *(int *)(lVar3 + 0x5fc)) {
    if (*(longlong *)(lVar3 + 0x608) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x608);
    }
    uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x610) - 1U & local_2c) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar8 = (uint *)(*(longlong *)(lVar3 + 0x5c8) + (longlong)(int)uVar9 * 0x28);
        if (*puVar8 == local_2c) goto LAB_143f1ed1a;
        uVar9 = puVar8[8];
      } while (uVar9 != 0xffffffff);
    }
  }
  puVar8 = (uint *)0x0;
LAB_143f1ed1a:
  pwVar7 = L"Shift";
LAB_143f1ed94:
  FUN_140056680(&local_28,pwVar7);
  FUN_143f1ee80(&local_60,&local_28,puVar8 + 2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_143f1edbe:
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f1ee80 FUN_143f1ee80 body=865 status=ok
// SIG undefined FUN_143f1ee80(void)

void FUN_143f1ee80(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (4 < (int)param_3[2]) {
    *(undefined4 *)(param_3 + 2) = 0;
    FUN_1401cb356();
    local_50 = *param_3;
    local_48 = (longlong *)param_3[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_50);
    plVar6 = (longlong *)param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    goto LAB_143f1f18d;
  }
  lVar5 = *param_1;
  *(int *)(param_3 + 2) = (int)param_3[2] + 1;
  if (((*param_3 != 0) && (param_3[1] != 0)) && (0 < *(int *)(param_3[1] + 8))) goto LAB_143f1f18d;
  uVar11 = FUN_1401cb356();
  puVar12 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar12 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_60,L"FGbxFriends_FriendsUpdateTick_%s",puVar12);
  puVar12 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar12 = local_60;
  }
  uVar3 = *(undefined4 *)param_1[1];
  uVar4 = *(undefined4 *)param_1[5];
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,4,0x10);
  local_68 = 4;
  plVar6 = *(longlong **)(lVar5 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_143f1f095:
    *local_70 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_70[2] = lVar13;
    *local_70 = &PTR_FUN_14b4e30d0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = lVar5;
    *(undefined4 *)(local_70 + 6) = uVar3;
    *(undefined4 *)((longlong)local_70 + 0x34) = uVar4;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_143f1f095;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar14 = iVar10 == iVar8;
      if (bVar14) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar14);
    uVar7 = *(undefined8 *)(lVar5 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *local_70 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_70[2] = lVar13;
    *local_70 = &PTR_FUN_14b4e30d0;
    local_70[3] = uVar7;
    local_70[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    local_70[5] = lVar5;
    *(undefined4 *)(local_70 + 6) = uVar3;
    *(undefined4 *)((longlong)local_70 + 0x34) = uVar4;
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
  local_78 = 0x40a00000;
  FUN_1405f67fc(uVar11,&local_50,&local_70,puVar12);
  *param_3 = local_50;
  local_50 = 0;
  plVar6 = (longlong *)param_3[1];
  param_3[1] = (longlong)local_48;
  local_48 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (local_68 == 0) {
LAB_143f1f174:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143f1f174;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f1f18d:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f1f1e2 FUN_143f1f1e2 body=64 status=ok
// SIG undefined FUN_143f1f1e2(void)

undefined8 * FUN_143f1f1e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e30d0;
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



// FUNCTION 143f1f226 FUN_143f1f226 body=81 status=ok
// SIG undefined FUN_143f1f226(void)

undefined8 FUN_143f1f226(longlong param_1)

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



// FUNCTION 143f1f27c FUN_143f1f27c body=89 status=ok
// SIG undefined FUN_143f1f27c(void)

bool FUN_143f1f27c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f1f2c7;
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
LAB_143f1f2c7:
  return lVar6 == param_2;
}



// FUNCTION 143f1f2f2 FUN_143f1f2f2 body=118 status=ok
// SIG undefined FUN_143f1f2f2(void)

void FUN_143f1f2f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4e30d0;
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



// FUNCTION 143f1f368 FUN_143f1f368 body=118 status=ok
// SIG undefined FUN_143f1f368(void)

void FUN_143f1f368(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4e30d0;
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



// FUNCTION 143f1f3de FUN_143f1f3de body=156 status=ok
// SIG undefined FUN_143f1f3de(void)

void FUN_143f1f3de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e30d0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f1f46a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1f47a FUN_143f1f47a body=20 status=ok
// SIG undefined FUN_143f1f47a(void)

undefined8 FUN_143f1f47a(longlong param_1)

{
  FUN_143f1f4bc(param_1 + 0x28);
  return 0;
}



// FUNCTION 143f1f48e FUN_143f1f48e body=46 status=ok
// SIG undefined FUN_143f1f48e(void)

undefined8 FUN_143f1f48e(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f1f4bc(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f1f4bc FUN_143f1f4bc body=257 status=ok
// SIG undefined FUN_143f1f4bc(void)

void FUN_143f1f4bc(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    if (*(int *)(lVar2 + 0x620) != *(int *)(lVar2 + 0x64c)) {
      lVar4 = lVar2 + 0x650;
      if (*(longlong *)(lVar2 + 0x658) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x658);
      }
      uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x660) - 1U & *(uint *)(param_1 + 1)) *
                                4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*(longlong *)(lVar2 + 0x618) + (longlong)(int)uVar5 * 0x28);
          if (*puVar6 == *(uint *)(param_1 + 1)) goto LAB_143f1f58c;
          uVar5 = puVar6[8];
        } while (uVar5 != 0xffffffff);
      }
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc) != 0) goto LAB_143f1f5a8;
    if (*(int *)(lVar2 + 0x5d0) != *(int *)(lVar2 + 0x5fc)) {
      lVar4 = lVar2 + 0x600;
      if (*(longlong *)(lVar2 + 0x608) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x608);
      }
      uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x610) - 1U & *(uint *)(param_1 + 1)) *
                                4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*(longlong *)(lVar2 + 0x5c8) + (longlong)(int)uVar5 * 0x28);
          if (*puVar6 == *(uint *)(param_1 + 1)) goto LAB_143f1f58c;
          uVar5 = puVar6[8];
        } while (uVar5 != 0xffffffff);
      }
    }
  }
  puVar6 = (uint *)0x0;
LAB_143f1f58c:
  plVar3 = *(longlong **)(puVar6 + 4);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
LAB_143f1f5a8:
  FUN_14591dd0c(lVar2,(int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc));
  return;
}



// FUNCTION 143f1f5be FUN_143f1f5be body=262 status=ok
// SIG undefined FUN_143f1f5be(void)

void FUN_143f1f5be(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143f1f6c4 FUN_143f1f6c4 body=294 status=ok
// SIG undefined FUN_143f1f6c4(void)

void FUN_143f1f6c4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_143f1f78d;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_143f1f73c:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_143f1f73c;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143f1f78d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f1f78d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1f7eb FUN_143f1f7eb body=1454 status=ok
// SIG undefined FUN_143f1f7eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f1f7eb(void)

{
  uint uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&DAT_14cb96dfc,L"UNSET",1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dbb50,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dbf00,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dc3c0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dca60,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dce40,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dd1c0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4dd550,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4ddb30,1,&PTR_FUN_14b4ddae0);
  FUN_14098d3d2(FUN_143f02aa5,L"/Script/GbxOnline",L"EGbxMatchmakingState",&DAT_14cb96ef8);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4de0f0,1,0);
  FUN_140056680(&DAT_14cb96f40,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_143f02adc);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4de1b0,1,0);
  FUN_14098d3d2(FUN_143f02aed,L"/Script/GbxOnline",L"EGbxNetworkDestroyReason",&DAT_14cb96f68);
  local_70 = L"Online";
  local_68 = 6;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Online";
  local_68 = 6;
  FUN_140208c1e(&DAT_14cb96f80,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_143f02b24);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_140208c1e(&DAT_14cb96f90,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_143f02b38);
  local_70 = L"Away";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Away";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cb96fa0,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_143f02b4c);
  local_70 = L"DoNotDisturb";
  local_68 = 0xc;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Do Not Disturb";
  local_68 = 0xe;
  FUN_140208c1e(&DAT_14cb96fb0,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_143f02b60);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cb96fc0,local_78,local_74);
  atexit((_func_5014 *)&LAB_143f02b74);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4de5e0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4de960,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4ded00,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4df080,1,0);
  ppuStack_90 = &PTR_FUN_14b4df2a0;
  local_98 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxOnline",&PTR_FUN_14b4df2c0,1,0);
  local_70 = L"AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb97060 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cb97068,L"default");
  atexit((_func_5014 *)&LAB_143f11f60);
  FUN_140056680(&DAT_14cb97078,L"F2PFlag");
  atexit((_func_5014 *)&LAB_143f12343);
  FUN_1446f470e(&DAT_14cb970b4,L"PRESENCESEARCH",1);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1fdc6 FUN_143f1fdc6 body=5860 status=ok
// SIG undefined FUN_143f1fdc6(void)

void FUN_143f1fdc6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  SessionId SVar7;
  ulonglong uVar8;
  void ***pppvVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  void **ppvVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ushort uVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  void *pvVar21;
  void ***pppvVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  longlong lVar25;
  longlong lVar26;
  ushort uVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  undefined4 *puVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_328 [40];
  undefined4 *local_300;
  ulonglong local_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  void **local_2c8;
  ulonglong uStack_2c0;
  void *local_2b8;
  ulonglong uStack_2b0;
  longlong local_2a8 [2];
  void **local_298;
  undefined8 uStack_290;
  undefined4 *local_288;
  code *local_278;
  void ***local_270;
  void **local_268;
  undefined8 uStack_260;
  undefined4 local_24c;
  void **local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  void ***local_1f8;
  void ***local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  void *local_1c0;
  uint local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined8 *local_e8;
  int local_e0;
  byte local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    plVar15 = *(longlong **)(param_1 + 0xf8);
    if (plVar15 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      LOCK();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
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
  lVar34 = *(longlong *)(param_1 + 0x100);
  if (lVar34 == 0) {
    pppvVar9 = (void ***)FUN_14001cc68(0x1f0,0x10);
    pppvVar9[1] = (void **)&DAT_100000001;
    *pppvVar9 = &PTR_FUN_14b4e8cf0;
    pppvVar22 = pppvVar9 + 2;
    FUN_148a7975a(pppvVar22,param_1);
    local_1f8 = pppvVar22;
    local_1f0 = pppvVar9;
    FUN_148a845a8(&local_1f8,pppvVar22);
    if (pppvVar9 == (void ***)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0x10;
      pppvVar22 = *(void ****)(param_1 + 0x108);
      if (pppvVar22 != (void ***)0x0) {
        *(undefined8 *)(param_1 + 0x108) = 0;
LAB_143f20214:
        LOCK();
        pppvVar9 = pppvVar22 + 1;
        *(int *)pppvVar9 = *(int *)pppvVar9 + -1;
        UNLOCK();
        if (*(int *)pppvVar9 == 0) {
          (***pppvVar22)(pppvVar22);
          LOCK();
          piVar1 = (int *)((longlong)pppvVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x000143f20204:
          if (iVar5 == 0) {
            (*(*pppvVar22)[2])(pppvVar22);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(pppvVar9 + 1) = *(int *)(pppvVar9 + 1) + 1;
      UNLOCK();
      *(void ****)(param_1 + 0x100) = pppvVar22;
      pppvVar22 = *(void ****)(param_1 + 0x108);
      if (pppvVar9 == pppvVar22) {
        LOCK();
        pppvVar22 = pppvVar9 + 1;
        *(int *)pppvVar22 = *(int *)pppvVar22 + -1;
        UNLOCK();
        if (*(int *)pppvVar22 == 0) {
          (***pppvVar9)(pppvVar9);
          LOCK();
          piVar1 = (int *)((longlong)pppvVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          pppvVar22 = pppvVar9;
          goto joined_r0x000143f20204;
        }
      }
      else {
        *(void ****)(param_1 + 0x108) = pppvVar9;
        if (pppvVar22 != (void ***)0x0) goto LAB_143f20214;
      }
    }
    pppvVar22 = local_1f0;
    if (local_1f0 != (void ***)0x0) {
      LOCK();
      pppvVar9 = local_1f0 + 1;
      *(int *)pppvVar9 = *(int *)pppvVar9 + -1;
      UNLOCK();
      if (*(int *)pppvVar9 == 0) {
        (***local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)pppvVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(*pppvVar22)[2])(pppvVar22);
        }
      }
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN_1401861f4(param_1 + 0x48,0);
    }
    FUN_148a7815e(param_1);
    lVar34 = *(longlong *)(param_1 + 0x100);
    if (lVar34 == 0) goto LAB_143f20349;
  }
  if ((*(int *)(lVar34 + 0x78) == 5) || (*(char *)(lVar34 + 0x1d8) != '\0')) goto LAB_143f20349;
  lVar26 = *(longlong *)(param_2 + 0x28);
  plVar15 = *(longlong **)(param_2 + 0x30);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  if (lVar26 != 0) {
    local_248 = &local_2b8;
    local_2b8 = (void *)0x0;
    uStack_2b0 = 0;
    local_1f0 = &local_248;
    local_1f8 = (void ***)FUN_143efb77c;
    bifrost::messaging::getRoomJID(param_3[1]);
    if (((*(int *)(lVar34 + 0x38) != 0) && (*(longlong **)(lVar34 + 0x30) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar34 + 0x30) + 0x30))(), cVar3 != '\0')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb97158) && (FUN_144b3d300(), DAT_14cb97158 == -1)) {
        FUN_140056680(&DAT_14cb97148,L"build_unique_id");
        atexit((_func_5014 *)&LAB_143f26a87);
        _Init_thread_footer();
      }
      local_228 = 0;
      local_220 = 0;
      local_248 = (void **)0x0;
      uStack_240 = 0;
      local_21c = 0xffffffff00000080;
      local_214 = 0;
      local_208 = 0;
      local_200 = 0;
      local_300 = param_3;
      local_2d0 = plVar15;
      if ((longlong)(int)param_3[0xc] != 0) {
        pppvVar22 = *(void ****)(param_3 + 10);
        pppvVar9 = pppvVar22 + (longlong)(int)param_3[0xc] * 3;
        local_2e0 = 0;
        local_2f8 = 0;
        local_2e8 = 0;
LAB_143f1ffb3:
        uVar31 = *(uint *)(pppvVar22 + 1);
        uVar8 = (ulonglong)uVar31;
        ppvVar14 = (void **)&DAT_149dfb77a;
        if (uVar31 != 0) {
          ppvVar14 = *pppvVar22;
        }
        lVar25 = 0;
        while( true ) {
          uVar17 = *(ushort *)((longlong)ppvVar14 + lVar25);
          uVar18 = (ulonglong)uVar17;
          uVar27 = *(ushort *)((longlong)L"nat_type" + lVar25);
          if (uVar17 != uVar27) break;
          if (uVar17 == 0) goto LAB_143f2012e;
LAB_143f1ffdc:
          lVar25 = lVar25 + 2;
        }
        if ((uVar27 | uVar17) < 0x80) {
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          uVar29 = (ulonglong)uVar27;
          uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar29];
          if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar29]) goto LAB_143f1ffdc;
        }
        if (uVar17 != uVar27) {
          ppvVar14 = (void **)&DAT_149dfb77a;
          if (uVar31 != 0) {
            ppvVar14 = *pppvVar22;
          }
          lVar25 = 0;
          goto LAB_143f20018;
        }
LAB_143f2012e:
        local_2e0 = CONCAT71((uint7)(uint3)(uVar31 >> 8),1);
        goto LAB_143f20135;
      }
      local_2e8 = 0;
      local_2f8 = 0;
      local_2e0 = 0;
LAB_143f202af:
      puVar32 = local_300;
      if (*(int *)(lVar34 + 0x38) == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = *(longlong **)(lVar34 + 0x30);
      }
      cVar3 = (**(code **)(*plVar15 + 0x58))(plVar15,&local_2b8,lVar26,&local_248);
      if (cVar3 != '\0') {
        if (((local_2e0 & 1) != 0) || ((local_2f8 & 1) != 0)) {
          local_2c8 = (void **)0x0;
          uStack_2c0 = 0;
          iVar5 = 0;
          iVar30 = 0;
          bVar2 = true;
          switch(*(undefined4 *)(param_2 + 0x36c)) {
          case 0:
          case 1:
            bVar2 = false;
            pwVar19 = L"STRICT";
            uVar6 = 0;
            break;
          case 2:
            uVar6 = 5000;
            pwVar19 = L"MODERATE";
            break;
          case 3:
            uVar6 = 10000;
            pwVar19 = L"OPEN";
            break;
          default:
            bVar2 = false;
            uVar6 = 0;
            goto LAB_143f2040c;
          }
          FUN_14020fad6(&local_2c8,pwVar19);
LAB_143f2040c:
          if (*(int *)(lVar34 + 0xfc) != 0) {
            uVar31 = *(uint *)(lVar34 + 0xf8);
            if (((((-1 < (int)uVar31) && ((int)uVar31 < DAT_14c9647dc)) &&
                 (lVar26 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8),
                 iVar5 = iVar30, lVar26 != 0)) &&
                ((*(int *)(lVar26 + 0x10) == *(int *)(lVar34 + 0xfc) &&
                 ((*(uint *)(lVar26 + 8) & 0x10200000) == 0)))) &&
               (cVar3 = FUN_148a79dea((uint *)(lVar34 + 0xf8),param_2), pvVar21 = DAT_14cb97178,
               cVar3 != '\0')) {
              local_1f8 = (void ***)0x0;
              lVar26 = (longlong)(int)DAT_14cb97180;
              local_1f0 = (void ***)CONCAT44(local_1f0._4_4_,DAT_14cb97180);
              if (lVar26 == 0) {
                local_1f0 = (void ***)(ulonglong)DAT_14cb97180;
              }
              else {
                FUN_1446dd670(&local_1f8,DAT_14cb97180,0);
                memcpy(local_1f8,pvVar21,lVar26 * 2);
              }
              ppvVar14 = local_2c8;
              local_1e8 = (void *)0x0;
              lVar26 = (longlong)(int)uStack_2c0;
              local_1e0 = (int)uStack_2c0;
              if (lVar26 == 0) {
                local_1dc = 0;
              }
              else {
                FUN_1446dd670(&local_1e8,uStack_2c0 & 0xffffffff,0);
                memcpy(local_1e8,ppvVar14,lVar26 * 2);
              }
              uStack_1d4 = 0;
              local_1d0 = 0;
              local_1d8 = uVar6;
              FUN_148a7a8d2(&local_1f8);
              if (local_1e8 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_1f8 != (void ***)0x0) {
                FUN_1400020a8();
              }
              if (bVar2) {
                local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
                iVar5 = 2;
                if ((longlong)(int)puVar32[8] != 0) {
                  plVar15 = *(longlong **)(puVar32 + 6);
                  plVar23 = plVar15 + (longlong)(int)puVar32[8] * 2;
                  iVar5 = 2;
                  do {
                    lVar26 = FUN_145d6e79a();
                    if ((longlong)*(int *)(lVar26 + 0x28) == 0) {
LAB_143f206d8:
                      DAT_14cb971cc = 0;
                      goto LAB_143f208fd;
                    }
                    plVar33 = *(longlong **)(lVar26 + 0x20);
                    plVar10 = plVar33 + (longlong)*(int *)(lVar26 + 0x28) * 5;
                    iVar30 = (int)plVar15[1];
LAB_143f20618:
                    if ((int)plVar33[1] == iVar30) {
                      if (1 < iVar30) {
                        lVar26 = 0;
                        do {
                          uVar17 = *(ushort *)(*plVar33 + lVar26);
                          uVar27 = *(ushort *)(*plVar15 + lVar26);
                          if (uVar17 == uVar27) {
                            if (uVar17 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar27 | uVar17)) {
                              iVar13 = (uint)uVar17 - (uint)uVar27;
                              goto LAB_143f2066b;
                            }
                            if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[(uint)uVar27])
                            goto code_r0x000143f20668;
                          }
                          lVar26 = lVar26 + 2;
                        } while( true );
                      }
                    }
                    else if ((int)plVar33[1] + iVar30 != 1) goto LAB_143f20679;
LAB_143f20689:
                    if (plVar33 == (longlong *)0x0) goto LAB_143f206d8;
                    lVar26 = FUN_148a78032();
                    if (*(int *)(lVar26 + 0x28) < (int)plVar33[2]) goto LAB_143f206d8;
                    if (*(int *)(lVar26 + 0x20) < (int)plVar33[2]) {
                      iVar5 = 1;
                    }
                    plVar15 = plVar15 + 2;
                  } while (plVar15 != plVar23);
                  uVar6 = (int)local_2f0;
                  if (iVar5 != 2) {
                    uVar6 = 1000;
                  }
                  local_2f0 = CONCAT44(local_2f0._4_4_,uVar6);
                  iVar5 = (iVar5 == 2) + 1;
                  puVar32 = local_300;
                }
                DAT_14cb971cc = iVar5;
                if ((longlong)(int)puVar32[4] == 0) {
                  fVar37 = (float)(int)local_2f0 + 2000.0;
                  DAT_14cb971d0 = 1.0;
                }
                else {
                  puVar24 = *(undefined4 **)(local_300 + 2);
                  puVar32 = puVar24 + (int)puVar32[4];
                  local_2d8 = lVar34 + 0x100;
                  fVar37 = 1.0;
                  do {
                    uVar6 = *puVar24;
                    uVar11 = FUN_141546c72();
                    FUN_148a99c30(uVar11,&local_1f8,uVar6);
                    bVar4 = local_90;
                    fVar36 = 0.0;
                    if (local_90 == 1) {
                      if ((longlong)local_e0 != 0) {
                        puVar16 = local_e8;
LAB_143f20780:
                        puVar20 = &DAT_149dfb77a;
                        if (*(int *)(puVar16 + 1) != 0) {
                          puVar20 = (undefined2 *)*puVar16;
                        }
                        lVar26 = 0;
                        do {
                          uVar17 = *(ushort *)((longlong)puVar20 + lVar26);
                          uVar8 = (ulonglong)uVar17;
                          uVar27 = *(ushort *)
                                    ((longlong)L"ContentAvailibilityRating_Custom" + lVar26);
                          if (uVar17 == uVar27) {
                            if (uVar17 == 0) goto LAB_143f207e2;
                          }
                          else {
                            if (0x7f < (uVar27 | uVar17)) goto LAB_143f207cc;
                            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                            uVar18 = (ulonglong)uVar27;
                            uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                            if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar18])
                            goto LAB_143f207cc;
                          }
                          lVar26 = lVar26 + 2;
                        } while( true );
                      }
LAB_143f2075d:
                      fVar36 = (float)FUN_143f2686a(*(undefined8 *)(lVar34 + 0x70),&local_1f8);
LAB_143f2085a:
                      if (fVar37 <= fVar36) {
                        fVar36 = fVar37;
                      }
                    }
                    fVar37 = fVar36;
                    if ((local_90 & 1) != 0) {
                      FUN_141175be2(local_1c8);
                      FUN_141175b88(CONCAT44(uStack_1d4,local_1d8),local_1d0 & 0xffffffff);
                      if (CONCAT44(uStack_1d4,local_1d8) != 0) {
                        FUN_1400020a8();
                      }
                      if (local_1e8 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      FUN_141175b4a(local_1f8,(ulonglong)local_1f0 & 0xffffffff);
                      if (local_1f8 != (void ***)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  } while ((bVar4 != 0) && (puVar24 = puVar24 + 1, puVar24 != puVar32));
                  DAT_14cb971d0 = fVar37;
                  if ((fVar37 == 0.0) && (!NAN(fVar37))) {
LAB_143f208fd:
                    iVar5 = 0;
                    puVar24 = local_300;
                    goto LAB_143f209d7;
                  }
                  fVar37 = fVar37 * 2000.0 + (float)(int)local_2f0;
                }
                iVar5 = (int)fVar37;
                puVar24 = local_300;
                if ((((0 < iVar5) && (*(int *)(lVar34 + 0x58) != 0)) &&
                    (*(longlong **)(lVar34 + 0x50) != (longlong *)0x0)) &&
                   (cVar3 = (**(code **)(**(longlong **)(lVar34 + 0x50) + 0x30))(),
                   puVar24 = local_300, cVar3 != '\0')) {
                  if (*(int *)(lVar34 + 0x58) == 0) {
                    plVar15 = (longlong *)0x0;
                  }
                  else {
                    plVar15 = *(longlong **)(lVar34 + 0x50);
                  }
                  bVar4 = (**(code **)(*plVar15 + 0x58))
                                    (plVar15,lVar34 + 0x100,&local_1f8,&local_298);
                  puVar24 = local_300;
                  if ((0 < (int)local_298._0_4_ & bVar4) == 1) {
                    DAT_14cb971d4 = (float)(int)local_1f8 / (float)(int)local_298._0_4_;
                    if (1.0 <= DAT_14cb971d4) {
                      DAT_14cb971d4 = 1.0;
                    }
                    if (DAT_14cb971d4 <= 0.0) {
                      DAT_14cb971d4 = 0.0;
                    }
                    iVar5 = (int)(DAT_14cb971d4 * 50.0 + (float)iVar5);
                  }
                }
              }
              else {
                iVar5 = 0;
                puVar24 = puVar32;
              }
LAB_143f209d7:
              local_24c = puVar24[4];
              uVar11 = FUN_141546c72();
              puVar32 = local_300;
              if ((longlong)(int)puVar24[4] != 0) {
                lVar26 = *(longlong *)(local_300 + 2);
                lVar25 = (longlong)(int)puVar24[4] << 2;
                lVar35 = 0;
                local_2f0 = lVar25;
                do {
                  FUN_148a99c30(uVar11,&local_1f8,*(undefined4 *)(lVar26 + lVar35));
                  pvVar21 = local_1c0;
                  if (local_90 == 1) {
                    local_268 = (void **)0x0;
                    lVar25 = (longlong)(int)local_1b8;
                    uStack_260 = CONCAT44(uStack_260._4_4_,local_1b8);
                    if (lVar25 == 0) {
                      uStack_260 = (ulonglong)local_1b8;
                    }
                    else {
                      FUN_1446dd670(&local_268,local_1b8,0);
                      memcpy(local_268,pvVar21,lVar25 * 2);
                    }
                    uStack_290 = &local_268;
                    local_298 = (void **)CONCAT44(local_298._4_4_,iVar5);
                    local_288 = &local_24c;
                    local_270 = &local_298;
                    local_278 = FUN_143f2fa5c;
                    FUN_140056680(local_2a8,L"host_rating");
                    FUN_148a7a793(param_2,local_2a8,&local_278);
                    if (local_2a8[0] != 0) {
                      FUN_1400020a8();
                    }
                    lVar25 = local_2f0;
                    if (local_268 != (void **)0x0) {
                      FUN_1400020a8();
                      lVar25 = local_2f0;
                    }
                  }
                  if ((local_90 & 1) != 0) {
                    FUN_141175be2(local_1c8);
                    FUN_141175b88(CONCAT44(uStack_1d4,local_1d8),local_1d0 & 0xffffffff);
                    if (CONCAT44(uStack_1d4,local_1d8) != 0) {
                      FUN_1400020a8();
                    }
                    if (local_1e8 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    FUN_141175b4a(local_1f8,(ulonglong)local_1f0 & 0xffffffff);
                    if (local_1f8 != (void ***)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  lVar35 = lVar35 + 4;
                  puVar32 = local_300;
                } while (lVar25 != lVar35);
              }
            }
          }
          if ((local_2e0 & 1) != 0) {
            FUN_140056680(&local_298,L"nat_type");
            local_1f0 = &local_2c8;
            local_1f8 = &local_298;
            FUN_1413216f2(&local_248,&local_268,&local_1f8,0);
            if (local_298 != (void **)0x0) {
              FUN_1400020a8();
            }
          }
          if ((local_2f8 & 1) != 0) {
            lVar26 = 0x1000000000;
            local_298 = (void **)0x0;
            uStack_290 = (void ***)0x0;
            lVar25 = 0xf;
            iVar13 = 0x10;
            iVar30 = iVar5;
            do {
              lVar26 = lVar26 + -0x100000000;
              *(undefined2 *)((longlong)&local_1f8 + lVar25 * 2) =
                   *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar30 % 10) * 2);
              uVar31 = iVar30 + 9;
              lVar25 = lVar25 + -1;
              iVar13 = iVar13 + -1;
              iVar30 = iVar30 / 10;
            } while (0x12 < uVar31);
            if (iVar5 < 0) {
              iVar13 = (int)lVar25;
              lVar26 = (longlong)iVar13;
              *(undefined2 *)((longlong)&local_1f8 + lVar26 * 2) = 0x2d;
            }
            else {
              lVar26 = lVar26 >> 0x20;
            }
            FUN_1400020e8(&local_298,(longlong)&local_1f8 + lVar26 * 2,0x10 - iVar13);
            FUN_140056680(&local_268,L"host_rating");
            local_1f8 = &local_268;
            local_1f0 = &local_298;
            FUN_1411f1c38(&local_248,&local_278,&local_1f8,0);
            if (local_268 != (void **)0x0) {
              FUN_1400020a8();
            }
            if (local_298 != (void **)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_2c8 != (void **)0x0) {
            FUN_1400020a8();
          }
        }
        if ((local_2e8 & 1) != 0) {
          uVar6 = FUN_1414a827a();
          FUN_148a796be(&local_298);
          ppvVar14 = (void **)&DAT_149dfb77a;
          if ((int)uStack_290 != 0) {
            ppvVar14 = local_298;
          }
          FUN_140002266(&local_1f8,L"%d-%s",uVar6,ppvVar14);
          pppvVar22 = (void ***)&DAT_149dfb77a;
          if ((int)local_1f0 != 0) {
            pppvVar22 = local_1f8;
          }
          iVar5 = FUN_144a1ccda(pppvVar22,0);
          if (local_1f8 != (void ***)0x0) {
            FUN_1400020a8();
          }
          lVar26 = 0x1000000000;
          local_268 = (void **)0x0;
          uStack_260 = 0;
          lVar25 = 0xf;
          iVar13 = 0x10;
          iVar30 = iVar5;
          do {
            lVar26 = lVar26 + -0x100000000;
            *(undefined2 *)((longlong)&local_1f8 + lVar25 * 2) =
                 *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar30 % 10) * 2);
            uVar31 = iVar30 + 9;
            lVar25 = lVar25 + -1;
            iVar13 = iVar13 + -1;
            iVar30 = iVar30 / 10;
          } while (0x12 < uVar31);
          if (iVar5 < 0) {
            iVar13 = (int)lVar25;
            lVar26 = (longlong)iVar13;
            *(undefined2 *)((longlong)&local_1f8 + lVar26 * 2) = 0x2d;
          }
          else {
            lVar26 = lVar26 >> 0x20;
          }
          FUN_1400020e8(&local_268,(longlong)&local_1f8 + lVar26 * 2,0x10 - iVar13);
          local_1f8 = (void ***)&DAT_14cb97148;
          local_1f0 = &local_268;
          FUN_140dbdf0c(&local_248,&local_278,&local_1f8,0);
          if (local_268 != (void **)0x0) {
            FUN_1400020a8();
          }
          if (local_298 != (void **)0x0) {
            FUN_1400020a8();
          }
        }
        cVar3 = FUN_146076bce(lVar34 + 0xf8,0);
        if ((cVar3 != '\0') && (*(int *)(lVar34 + 0x78) == 0)) {
          local_298 = (void **)0x0;
          uStack_290 = (void ***)0x0;
          iVar5 = puVar32[4];
          if ((longlong)iVar5 != 0) {
            lVar26 = *(longlong *)(local_300 + 2);
            lVar25 = 0;
            do {
              uVar6 = *(undefined4 *)(lVar26 + lVar25);
              iVar30 = *(int *)(lVar34 + 0x130);
              *(uint *)(lVar34 + 0x130) = iVar30 + 1U;
              if (*(uint *)(lVar34 + 0x134) < iVar30 + 1U) {
                FUN_1446f48e2((longlong *)(lVar34 + 0x128),iVar30);
              }
              *(undefined4 *)(*(longlong *)(lVar34 + 0x128) + (longlong)iVar30 * 4) = uVar6;
              uVar11 = FUN_141546c72();
              FUN_148a99c30(uVar11,&local_1f8,uVar6);
              pppvVar22 = uStack_290;
              if (local_90 == 1) {
                FUN_141175be2(local_1c8);
                FUN_141175b88(CONCAT44(uStack_1d4,local_1d8),local_1d0 & 0xffffffff);
                if (CONCAT44(uStack_1d4,local_1d8) != 0) {
                  FUN_1400020a8();
                }
                if (local_1e8 != (void *)0x0) {
                  FUN_1400020a8();
                }
                FUN_141175b4a(local_1f8,(ulonglong)local_1f0 & 0xffffffff);
                if (local_1f8 != (void ***)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                lVar35 = (longlong)(int)uStack_290;
                uVar31 = (int)uStack_290 + 1;
                uStack_290 = (void ***)CONCAT44(uStack_290._4_4_,uVar31);
                if (uStack_290._4_4_ < uVar31) {
                  FUN_148a66b1a(&local_298,(ulonglong)pppvVar22 & 0xffffffff);
                }
                *(undefined4 *)((longlong)local_298 + lVar35 * 4) = uVar6;
              }
              lVar25 = lVar25 + 4;
            } while ((longlong)iVar5 * 4 != lVar25);
            if (0 < (int)uStack_290) {
              uVar11 = FUN_141546c72();
              uVar6 = *(undefined4 *)(param_2 + 0x38);
              uVar12 = FUN_148a783be(*(undefined8 *)(lVar34 + 0x70));
              FUN_143f3b068(uVar11,uVar12,uVar6);
              uVar11 = FUN_141546c72();
              ppvVar14 = local_298;
              local_268 = (void **)0x0;
              lVar26 = (longlong)(int)uStack_290;
              uStack_260 = CONCAT44(uStack_260._4_4_,(int)uStack_290);
              if (lVar26 == 0) {
                uStack_260 = (ulonglong)uStack_290 & 0xffffffff;
              }
              else {
                FUN_148a831c6(&local_268,(ulonglong)uStack_290 & 0xffffffff,0);
                memcpy(local_268,ppvVar14,lVar26 << 2);
              }
              local_1f8 = (void ***)0x0;
              local_1f0 = (void ***)((ulonglong)local_1f0 & 0xffffffff00000000);
              FUN_1446efa72(&local_1f8,0,3,0x10);
              local_1f0 = (void ***)CONCAT44(local_1f0._4_4_,3);
              *local_1f8 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              ppvVar14 = (void **)(DAT_14c758608 + 1);
              lVar26 = DAT_14c758608 + 1;
              if (ppvVar14 == (void **)0x0) {
                LOCK();
                UNLOCK();
                ppvVar14 = (void **)(DAT_14c758608 + 2);
                lVar26 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar26;
              local_1f8[2] = ppvVar14;
              *local_1f8 = &PTR_FUN_14b4e9190;
              local_1f8[3] = local_268;
              local_268 = (void **)0x0;
              *(int *)(local_1f8 + 4) = (int)uStack_260;
              *(undefined4 *)((longlong)local_1f8 + 0x24) = uStack_260._4_4_;
              uStack_260 = 0;
              uVar6 = *(undefined4 *)(param_2 + 0x38);
              uVar12 = FUN_148a783be(*(undefined8 *)(lVar34 + 0x70));
              FUN_14160246e(uVar11,uVar12,uVar6,&local_1f8);
              if ((int)local_1f0 == 0) {
LAB_143f211ce:
                if (local_1f8 != (void ***)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_1f8 != (void ***)0x0) {
                (***local_1f8)(local_1f8,0);
                FUN_1446efa72(&local_1f8,0,0,0x10);
                local_1f0 = (void ***)((ulonglong)local_1f0 & 0xffffffff00000000);
                goto LAB_143f211ce;
              }
              if (local_268 != (void **)0x0) {
                FUN_1400020a8();
              }
            }
          }
          pvVar21 = local_2b8;
          ppvVar14 = (void **)(lVar34 + 0x100);
          if (ppvVar14 != &local_2b8) {
            iVar5 = (int)uStack_2b0;
            lVar26 = (longlong)(int)uStack_2b0;
            *(int *)(lVar34 + 0x108) = (int)uStack_2b0;
            if ((int)uStack_2b0 == 0 && *(int *)(lVar34 + 0x10c) == 0) {
              *(undefined4 *)(lVar34 + 0x10c) = 0;
            }
            else {
              FUN_1446dd670(ppvVar14,uStack_2b0 & 0xffffffff);
              if (iVar5 != 0) {
                memcpy(*ppvVar14,pvVar21,lVar26 * 2);
              }
            }
          }
          if (((*(int *)(lVar34 + 0x78) != 2) &&
              (*(undefined4 *)(lVar34 + 0x78) = 2, *(int *)(lVar34 + 0x18) != 0)) &&
             (plVar15 = *(longlong **)(lVar34 + 0x10), plVar15 != (longlong *)0x0)) {
            (**(code **)(*plVar15 + 0x60))(plVar15,2);
          }
          puVar32 = local_300;
          if (local_298 != (void **)0x0) {
            FUN_1400020a8();
          }
        }
        SVar7 = 0;
        *(undefined4 *)(lVar34 + 0x120) = *puVar32;
        if (*(User **)(param_2 + 0x2b8) != (User *)0x0) {
          SVar7 = bifrost::session::id(*(User **)(param_2 + 0x2b8));
        }
        FUN_148a79e62(&local_298,lVar34,FUN_143f26a98);
        local_1f8 = (void ***)CONCAT44(local_1f8._4_4_,SVar7);
        FUN_145936eee(&local_1f0,&local_248);
        local_268 = (void **)0x0;
        uStack_260 = uStack_260 & 0xffffffff00000000;
        FUN_1446efa72(&local_268,0,7,0x10);
        uStack_260 = CONCAT44(uStack_260._4_4_,7);
        *local_268 = &PTR_LAB_14b4e9270;
        LOCK();
        UNLOCK();
        pvVar21 = (void *)(DAT_14c758608 + 1);
        lVar34 = DAT_14c758608 + 1;
        if (pvVar21 == (void *)0x0) {
          LOCK();
          UNLOCK();
          pvVar21 = (void *)(DAT_14c758608 + 2);
          lVar34 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar34;
        local_268[2] = pvVar21;
        *local_268 = &PTR_FUN_14b4e9200;
        *(int *)(local_268 + 3) = (int)local_1f8;
        FUN_145936eee(local_268 + 4,&local_1f0);
        FUN_148a614b3(param_2,*puVar32,&local_268,&local_298);
        if ((int)uStack_260 == 0) {
LAB_143f213c3:
          if (local_268 != (void **)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_268 != (void **)0x0) {
          (**(code **)*local_268)(local_268,0);
          FUN_1446efa72(&local_268,0,0,0x10);
          uStack_260 = uStack_260 & 0xffffffff00000000;
          goto LAB_143f213c3;
        }
        local_1a8 = 0;
        if (local_1b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1407a3a68(&local_1f0);
      }
      local_200 = 0;
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      FUN_1407a3a68(&local_248);
      plVar15 = local_2d0;
    }
    if (local_2b8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar15 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
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
LAB_143f20349:
  if ((local_80 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143f20018:
  uVar17 = *(ushort *)((longlong)ppvVar14 + lVar25);
  uVar18 = (ulonglong)uVar17;
  uVar27 = *(ushort *)((longlong)L"host_rating" + lVar25);
  if (uVar17 == uVar27) {
    if (uVar17 == 0) goto LAB_143f20147;
LAB_143f20037:
    lVar25 = lVar25 + 2;
    goto LAB_143f20018;
  }
  if ((uVar27 | uVar17) < 0x80) {
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
    uVar29 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar29];
    if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar29]) goto LAB_143f20037;
  }
  if (uVar17 != uVar27) {
    if (uVar31 != DAT_14cb97150) {
      if (DAT_14cb97150 + uVar31 == 1) goto LAB_143f20157;
      goto LAB_143f200d0;
    }
    if ((int)uVar31 < 2) goto LAB_143f20157;
    lVar25 = 0;
    goto LAB_143f2008a;
  }
LAB_143f20147:
  local_2f8 = CONCAT71((int7)(local_2f8 >> 8),1);
  goto LAB_143f20135;
LAB_143f2008a:
  uVar17 = *(ushort *)((longlong)*pppvVar22 + lVar25);
  uVar31 = (uint)uVar17;
  uVar27 = *(ushort *)(DAT_14cb97148 + lVar25);
  uVar28 = (uint)uVar27;
  uVar8 = DAT_14cb97148;
  if (uVar17 == uVar27) {
    if (uVar17 == 0) goto LAB_143f20157;
LAB_143f200a2:
    lVar25 = lVar25 + 2;
    goto LAB_143f2008a;
  }
  if ((uVar27 | uVar17) < 0x80) {
    uVar31 = (uint)(byte)(&DAT_149e05da0)[uVar17];
    uVar18 = (ulonglong)uVar28;
    uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar18];
    if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar18]) goto LAB_143f200a2;
  }
  if (uVar31 != uVar28) goto LAB_143f200d0;
LAB_143f20157:
  local_2e8 = CONCAT71((int7)(uVar8 >> 8),1);
LAB_143f20135:
  pppvVar22 = pppvVar22 + 3;
  if (pppvVar22 == pppvVar9) goto LAB_143f202af;
  goto LAB_143f1ffb3;
LAB_143f200d0:
  local_298 = (void **)0x0;
  uStack_290 = (void ***)0x0;
  local_1f0 = &local_298;
  local_1f8 = pppvVar22;
  FUN_140dbdf0c(&local_248,&local_268,&local_1f8,0);
  if (local_298 != (void **)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143f20135;
code_r0x000143f20668:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar17] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar27];
LAB_143f2066b:
  if (iVar13 == 0) goto LAB_143f20689;
LAB_143f20679:
  plVar33 = plVar33 + 5;
  if (plVar33 == plVar10) goto LAB_143f206d8;
  goto LAB_143f20618;
LAB_143f207cc:
  if (uVar17 == uVar27) {
LAB_143f207e2:
    local_298 = (void **)CONCAT44(local_298._4_4_,0x3f800000);
    fVar36 = 1.0;
    if (*(int *)(lVar34 + 0x48) != 0) {
      fVar36 = 1.0;
      if (*(longlong **)(lVar34 + 0x40) != (longlong *)0x0) {
        cVar3 = (**(code **)(**(longlong **)(lVar34 + 0x40) + 0x30))();
        fVar36 = 1.0;
        if (cVar3 != '\0') {
          if (*(int *)(lVar34 + 0x48) == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = *(longlong **)(lVar34 + 0x40);
          }
          cVar3 = (**(code **)(*plVar15 + 0x58))(plVar15,local_2d8,&local_1f8);
          fVar36 = 1.0;
          if (cVar3 != '\0') {
            fVar36 = local_298._0_4_;
            if (1.0 <= local_298._0_4_) {
              fVar36 = 1.0;
            }
            fVar36 = (float)(~-(uint)(0.0 <= local_298._0_4_) & 0x3f800000 |
                            (uint)fVar36 & -(uint)(0.0 <= local_298._0_4_));
          }
        }
      }
    }
    goto LAB_143f2085a;
  }
  puVar16 = puVar16 + 2;
  if (puVar16 == local_e8 + (longlong)local_e0 * 2) goto LAB_143f2075d;
  goto LAB_143f20780;
}



// FUNCTION 143f214ac FUN_143f214ac body=610 status=ok
// SIG undefined FUN_143f214ac(void)

void FUN_143f214ac(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (lVar3 == 0) goto LAB_143f21560;
  if (*(int *)(lVar3 + 0x78) - 2U < 2) {
    if (*param_3 != *(int *)(lVar3 + 0x120)) goto LAB_143f21560;
    uVar9 = 0xe;
    switch((char)param_3[2]) {
    case '\0':
      uVar9 = 0xf;
      break;
    case '\x01':
      uVar9 = 0x10;
      break;
    case '\x02':
      goto switchD_143f21513_caseD_2;
    case '\x03':
      uVar9 = 0x12;
      break;
    case '\x04':
      uVar9 = 0x13;
      break;
    case '\x06':
      *(undefined4 *)(lVar3 + 0x120) = 0;
      if (*(char *)(lVar3 + 0x188) == '\x01') {
        FUN_148a865c8(lVar3 + 0x138,0xe);
        *(undefined1 *)(lVar3 + 0x188) = 0;
      }
      *(undefined1 *)(lVar3 + 0x1a8) = 0;
      FUN_143f26ba0(lVar3);
      FUN_148a79fd8(lVar3);
      if (((*(int *)(lVar3 + 0x78) != 2) &&
          (*(undefined4 *)(lVar3 + 0x78) = 2, *(int *)(lVar3 + 0x18) != 0)) &&
         (plVar4 = *(longlong **)(lVar3 + 0x10), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,2);
      }
      cVar6 = FUN_146076bce((uint *)(lVar3 + 0xf8),0);
      if (cVar6 != '\0') goto LAB_143f21560;
      iVar1 = param_3[6];
      if ((longlong)iVar1 != 0) {
        lVar5 = *(longlong *)(param_3 + 4);
        lVar10 = 0;
        do {
          local_58[0] = *(undefined4 *)(lVar5 + lVar10);
          FUN_148a86602(lVar3 + 0x110,local_58);
          lVar10 = lVar10 + 4;
        } while ((longlong)iVar1 * 4 != lVar10);
      }
      iVar1 = *(int *)(lVar3 + 0x118);
      _Src = *(void **)(lVar3 + 0x110);
      *(int *)(lVar3 + 0xf0) = iVar1;
      if (iVar1 == 0 && *(int *)(lVar3 + 0xf4) == 0) {
        *(undefined4 *)(lVar3 + 0xf4) = 0;
      }
      else {
        FUN_148a675d8((undefined8 *)(lVar3 + 0xe8),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(lVar3 + 0xe8),_Src,(longlong)iVar1 << 2);
        }
      }
      FUN_148a7a09a(local_58,lVar3,param_2 + 0x38);
      if (*(int *)(lVar3 + 0xfc) == 0) {
LAB_143f2170b:
        uVar7 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar3 + 0xf8);
        uVar7 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)(lVar3 + 0xfc) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_143f2170b;
          uVar7 = *puVar8;
        }
      }
      FUN_148a60ef0(uVar7,lVar3 + 0x80,local_58);
      goto LAB_143f21560;
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x70);
  }
  else {
    if (((*(int *)(lVar3 + 0x78) != 5) || (*param_3 != *(int *)(lVar3 + 0x120))) ||
       ((char)param_3[2] != '\x04')) goto LAB_143f21560;
    uVar7 = *(undefined8 *)(lVar3 + 0x70);
    uVar9 = 0x13;
  }
  FUN_143f22faa(uVar7,uVar9);
switchD_143f21513_caseD_2:
  FUN_143f26ae2(lVar3);
LAB_143f21560:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f21710 FUN_143f21710 body=2300 status=ok
// SIG undefined FUN_143f21710(void)

void FUN_143f21710(longlong param_1,longlong **param_2,longlong **param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  void *_Src;
  char cVar7;
  byte bVar8;
  AccountId AVar9;
  uint uVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  longlong **pplVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  longlong *plVar19;
  byte bVar20;
  longlong **unaff_R15;
  longlong lVar21;
  void **ppvVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  longlong **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  longlong **pplStack_a0;
  ulonglong local_98;
  void *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (lVar4 == 0) goto LAB_143f217c3;
  if (*(int *)(lVar4 + 0x78) == 2) {
    if ((*(int *)((longlong)param_3 + 4) != *(int *)(lVar4 + 0x120)) ||
       (*(char *)(lVar4 + 0x1a8) != '\0')) goto LAB_143f217c3;
    iVar14 = *(int *)(param_3 + 6);
    pplVar15 = param_2;
    if ((longlong)iVar14 != 0) {
      plVar19 = param_3[5];
      lVar17 = 0;
      do {
        pplVar15 = &local_a8;
        FUN_148a79ce2(lVar4,&local_a8,*(undefined4 *)((longlong)plVar19 + lVar17 + 4));
        unaff_R15 = pplStack_a0;
        if (pplStack_a0 != (longlong **)0x0) {
          LOCK();
          pplVar11 = pplStack_a0 + 1;
          *(int *)pplVar11 = *(int *)pplVar11 + -1;
          UNLOCK();
          if (*(int *)pplVar11 == 0) {
            (*(code *)**pplStack_a0)(pplStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)unaff_R15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*unaff_R15)[2])(unaff_R15);
            }
          }
        }
        lVar17 = lVar17 + 0xc;
      } while ((longlong)iVar14 * 0xc != lVar17);
    }
    pplVar11 = (longlong **)(lVar4 + 0x138);
    if (pplVar11 != param_3) {
      if (*(char *)(lVar4 + 0x188) == '\x01') {
        FUN_148a865c8(pplVar11);
      }
      pplVar15 = param_3;
      FUN_148a8666a(pplVar11);
      *(undefined1 *)(lVar4 + 0x188) = 1;
    }
    local_88 = (void *)0x0;
    uStack_80 = (longlong *)0x0;
    cVar7 = FUN_148a79c62(*(undefined4 *)(param_3 + 4));
    if ((cVar7 != '\0') && ((longlong)*(int *)(param_3 + 6) != 0)) {
      plVar19 = param_3[5];
      local_c0 = (longlong *)((longlong)plVar19 + (longlong)*(int *)(param_3 + 6) * 0xc);
      do {
        uVar3 = *(undefined4 *)((longlong)plVar19 + 4);
        pplVar11 = (longlong **)FUN_148a783be(*(undefined8 *)(lVar4 + 0x70));
        if (((pplVar11 != (longlong **)0x0) &&
            (plVar5 = pplVar11[0x3e], unaff_R15 = pplVar11, plVar5 != (longlong *)0x0)) &&
           (puVar12 = (undefined8 *)FUN_140b703aa(plVar5), puVar12 != (undefined8 *)0x0)) {
          pplVar15 = (longlong **)*puVar12;
          lVar17 = (*(code *)pplVar15[0x57])(puVar12);
          if (lVar17 != 0) {
            pplVar15 = &local_a8;
            FUN_148a79ce2(lVar4,pplVar15,uVar3);
            if (local_a8 == (longlong *)0x0) {
              cVar7 = '\0';
            }
            else {
              FUN_140b6e166(&local_70);
              if ((local_70 == (undefined8 *)0x0) ||
                 (lVar16 = plVar5[8], (longlong)(int)lVar16 == 0)) {
                cVar7 = '\0';
                pplVar15 = pplVar11;
              }
              else {
                local_c8 = plVar5[7];
                lVar21 = 0;
                do {
                  pplVar15 = (longlong **)
                             (ulonglong)*(uint *)(*(longlong *)(local_c8 + lVar21) + 0xe0);
                  cVar7 = FUN_145cf80ce(lVar17,pplVar15,local_70);
                  if (cVar7 != '\0') break;
                  bVar23 = (longlong)(int)lVar16 * 8 + -8 != lVar21;
                  lVar21 = lVar21 + 8;
                } while (bVar23);
              }
              plVar5 = (longlong *)CONCAT44(uStack_64,local_68);
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
            unaff_R15 = pplStack_a0;
            if (pplStack_a0 != (longlong **)0x0) {
              LOCK();
              pplVar11 = pplStack_a0 + 1;
              *(int *)pplVar11 = *(int *)pplVar11 + -1;
              UNLOCK();
              if (*(int *)pplVar11 == 0) {
                (*(code *)**pplStack_a0)(pplStack_a0);
                LOCK();
                piVar1 = (int *)((longlong)unaff_R15 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*unaff_R15)[2])(unaff_R15);
                }
              }
            }
            if (cVar7 != '\0') {
              AVar9 = bifrost::account::id(*(SessionId *)((longlong)plVar19 + 4));
              plVar5 = uStack_80;
              unaff_R15 = (longlong **)(longlong)(int)uStack_80;
              uVar10 = (int)uStack_80 + 1;
              uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar10);
              if (uStack_80._4_4_ < uVar10) {
                pplVar15 = (longlong **)((ulonglong)plVar5 & 0xffffffff);
                FUN_14657e454(&local_88);
              }
              *(AccountId *)((longlong)local_88 + (longlong)unaff_R15 * 4) = AVar9;
            }
          }
        }
        plVar19 = (longlong *)((longlong)plVar19 + 0xc);
      } while (plVar19 != local_c0);
    }
    _Src = local_88;
    iVar14 = (int)uStack_80;
    lVar17 = (longlong)(int)uStack_80;
    if (0 < lVar17) {
      *(undefined1 *)(lVar4 + 0x1a8) = 1;
      pplStack_a0 = (longlong **)0x0;
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar4 + 0x120));
      local_98 = (ulonglong)uStack_80 & 0xffffffff;
      FUN_148a675d8(&pplStack_a0,(ulonglong)uStack_80 & 0xffffffff,0);
      memcpy(pplStack_a0,_Src,lVar17 << 2);
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,2,0x10);
      local_b0 = 2;
      *local_b8 = &PTR_LAB_14b4e9350;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar17 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      local_b8[2] = lVar16;
      *local_b8 = &PTR_FUN_14b4e93c0;
      unaff_R15 = &local_a8;
      pplVar15 = unaff_R15;
      FUN_148a613b4(param_2,unaff_R15,&local_b8);
      if (pplStack_a0 != (longlong **)0x0) {
        FUN_1400020a8();
      }
    }
    bVar20 = (byte)unaff_R15;
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (0 < iVar14) goto LAB_143f217c3;
    dVar6 = (double)FUN_148a79bd2(param_3[8]);
    fVar24 = 10.0;
    if ((float)dVar6 + -3.0 <= 10.0) {
      fVar24 = (float)dVar6 + -3.0;
    }
    if (fVar24 <= 0.0) goto LAB_143f21f32;
    if (((*(int *)(lVar4 + 0x78) != 3) &&
        (*(undefined4 *)(lVar4 + 0x78) = 3, *(int *)(lVar4 + 0x18) != 0)) &&
       (*(longlong **)(lVar4 + 0x10) != (longlong *)0x0)) {
      pplVar15 = (longlong **)&DAT_00000003;
      (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x60))();
    }
    lVar17 = FUN_148a783be(*(undefined8 *)(lVar4 + 0x70));
    bVar8 = (byte)pplVar15;
    bVar18 = 1;
    if (lVar17 != 0) {
      plVar19 = *(longlong **)(lVar17 + 0x1f0);
      if (plVar19 == (longlong *)0x0) {
LAB_143f21cf6:
        bVar8 = (byte)pplVar15;
        bVar18 = 0;
      }
      else {
        if (DAT_14cb5e538 == 0) {
          local_e0 = &local_a8;
          local_a8 = (longlong *)&LAB_1417c5d06;
          local_d0 = FUN_14081d0ea;
          local_d8 = &LAB_1417ad04a;
          local_e8 = &LAB_1486a7af7;
          local_f0 = &LAB_1464e1631;
          local_f8 = &DAT_149e063b2;
          local_100 = 0;
          local_108 = 0x1000000c;
          local_110 = 8;
          local_118 = 0x420;
          pplVar15 = (longlong **)0x0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
          bVar8 = (byte)pplVar15;
          plVar19 = *(longlong **)(lVar17 + 0x1f0);
          if (plVar19 == (longlong *)0x0) goto LAB_143f21cf6;
        }
        bVar18 = 0;
        if ((DAT_14cb5e538 != 0) && (lVar17 = plVar19[2], lVar17 != 0)) {
          pplVar15 = (longlong **)(longlong)*(int *)(DAT_14cb5e538 + 0x38);
          if ((*(int *)(lVar17 + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
             (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)pplVar15 * 8) !=
              DAT_14cb5e538 + 0x30)) goto LAB_143f21cf6;
          bVar8 = (**(code **)(*plVar19 + 0x498))();
          bVar8 = bVar8 < 6;
          bVar18 = 1;
        }
      }
      bVar18 = bVar18 & bVar8 ^ 1;
    }
    if (*(char *)((longlong)param_3 + 0x3c) == '\x01') {
      uVar3 = *(undefined4 *)(param_3 + 7);
      FUN_1446f470e(&local_78,L"SHIFT",1);
      FUN_148a783be(*(undefined8 *)(lVar4 + 0x70));
      local_70 = local_78;
      plVar19 = (longlong *)FUN_1401e3228();
      if (plVar19 == (longlong *)0x0) {
        local_a8 = (longlong *)0x0;
        pplStack_a0 = (longlong **)0x0;
LAB_143f21d7b:
        bVar23 = false;
      }
      else {
        (**(code **)(*plVar19 + 0x80))(plVar19,&local_a8);
        if (local_a8 == (longlong *)0x0) goto LAB_143f21d7b;
        FUN_1411cb701(&local_70,uVar3);
        ppvVar22 = &local_88;
        (**(code **)(*local_a8 + 0x120))(local_a8,ppvVar22,&local_70);
        bVar23 = local_88 != (void *)0x0;
        if (bVar23) {
          iVar14 = (**(code **)(*local_a8 + 0x130))();
          ppvVar22 = (void **)(ulonglong)(iVar14 != 0);
        }
        plVar19 = uStack_80;
        bVar20 = (byte)ppvVar22;
        if (uStack_80 != (longlong *)0x0) {
          LOCK();
          plVar5 = uStack_80 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*uStack_80)(uStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        if (local_70 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      pplVar15 = pplStack_a0;
      if (pplStack_a0 != (longlong **)0x0) {
        LOCK();
        pplVar11 = pplStack_a0 + 1;
        *(int *)pplVar11 = *(int *)pplVar11 + -1;
        UNLOCK();
        if (*(int *)pplVar11 == 0) {
          (*(code *)**pplStack_a0)(pplStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)pplVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pplVar15)[2])(pplVar15);
          }
        }
      }
      bVar20 = bVar20 & bVar23 ^ 1;
    }
    else {
      bVar20 = 0;
    }
    bVar8 = FUN_146076bce(lVar4 + 0xf8,0);
    if ((byte)((bVar8 ^ 1) & bVar18 & bVar20) == 1) {
      *(float *)(lVar4 + 400) = fVar24;
      iVar14 = -((int)ROUND(-0.5 - (fVar24 + fVar24)) >> 1);
      if (((*(int *)(lVar4 + 0x194) != iVar14) &&
          (*(int *)(lVar4 + 0x194) = iVar14, *(int *)(lVar4 + 0x28) != 0)) &&
         (*(longlong **)(lVar4 + 0x20) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x60))();
      }
      iVar14 = *(int *)(lVar4 + 0x1a0);
      *(uint *)(lVar4 + 0x1a0) = iVar14 + 1U;
      if (*(uint *)(lVar4 + 0x1a4) < iVar14 + 1U) {
        FUN_1446f48e2(lVar4 + 0x198,iVar14);
      }
      *(undefined4 *)(*(longlong *)(lVar4 + 0x198) + (longlong)iVar14 * 4) =
           *(undefined4 *)(param_2 + 7);
      uVar13 = FUN_1401cb356();
      FUN_148a7a1ea(&local_70,lVar4);
      local_118 = 0;
      FUN_1405f67fc(uVar13,&local_a8,&local_70,L"FGbxMatchmakingSearch_TickConfirmingPlayers");
      *(longlong **)(lVar4 + 0x1b0) = local_a8;
      local_a8 = (longlong *)0x0;
      plVar19 = *(longlong **)(lVar4 + 0x1b8);
      *(longlong ***)(lVar4 + 0x1b8) = pplStack_a0;
      pplStack_a0 = (longlong **)0x0;
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
        if (pplStack_a0 != (longlong **)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)pplStack_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pplStack_a0)[2])();
          }
        }
      }
      if (local_68 != 0) {
        if (local_70 == (undefined8 *)0x0) goto LAB_143f217c3;
        (**(code **)*local_70)(local_70,0);
        FUN_1446efa72(&local_70,0,0,0x10);
        local_68 = 0;
      }
      if (local_70 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f217c3;
    }
  }
  else {
    if ((*(int *)(lVar4 + 0x78) != 3) ||
       (*(int *)((longlong)param_3 + 4) != *(int *)(lVar4 + 0x120))) goto LAB_143f217c3;
    if (0.0 < *(float *)(lVar4 + 400)) {
      iVar14 = *(int *)(lVar4 + 0x1a0);
      *(uint *)(lVar4 + 0x1a0) = iVar14 + 1U;
      if (*(uint *)(lVar4 + 0x1a4) < iVar14 + 1U) {
        FUN_1446f48e2((longlong *)(lVar4 + 0x198),iVar14);
      }
      *(undefined4 *)(*(longlong *)(lVar4 + 0x198) + (longlong)iVar14 * 4) =
           *(undefined4 *)(param_2 + 7);
      goto LAB_143f217c3;
    }
  }
LAB_143f21f32:
  FUN_148a79e62(&local_a8,lVar4,FUN_143f26cc4);
  FUN_148a6173a(param_2,*(undefined4 *)param_3,&local_a8);
LAB_143f217c3:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2200e FUN_143f2200e body=133 status=ok
// SIG undefined FUN_143f2200e(void)

void FUN_143f2200e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x78) & 0xfffffffe) == 2)) &&
     (*(int *)(param_3 + 4) == *(int *)(lVar1 + 0x120))) {
    if (*(char *)(lVar1 + 0x188) == '\x01') {
      FUN_148a865c8(lVar1 + 0x138);
      *(undefined1 *)(lVar1 + 0x188) = 0;
    }
    FUN_143f26ba0(lVar1);
    if (((*(int *)(lVar1 + 0x78) != 2) &&
        (*(undefined4 *)(lVar1 + 0x78) = 2, *(int *)(lVar1 + 0x18) != 0)) &&
       (plVar2 = *(longlong **)(lVar1 + 0x10), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f22074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2,2);
      return;
    }
  }
  return;
}



// FUNCTION 143f22094 FUN_143f22094 body=2005 status=ok
// SIG undefined FUN_143f22094(void)

void FUN_143f22094(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  code *pcVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_2e8 [32];
  code *local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  code *local_290;
  longlong *local_288;
  code *local_280;
  code *local_278;
  longlong *local_270;
  longlong local_268;
  int local_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248 [2];
  code *local_238;
  undefined8 **ppuStack_230;
  longlong local_228;
  undefined8 uStack_220;
  code *local_218;
  int local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 *local_1e8;
  code *local_1e0;
  undefined8 **local_1d8;
  code *local_1d0;
  code **local_1c8;
  longlong local_1c0;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0 [2];
  undefined1 local_198 [216];
  undefined1 local_c0 [88];
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((((*(char *)((longlong)param_3 + 9) != '\a') ||
       (lVar5 = *(longlong *)(param_1 + 0x100), lVar5 == 0)) ||
      (*param_3 != *(int *)(lVar5 + 0x120))) ||
     (((*(uint *)(lVar5 + 0x78) & 0xfffffffe) != 2 || (*(char *)(lVar5 + 0x188) != '\x01'))))
  goto LAB_143f220f3;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = (code *)0x0;
  ppuStack_230 = (undefined8 **)0x0;
  local_218 = (code *)0x0;
  local_210 = 0x6000;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0xffffffff;
  local_2c8 = (code *)local_248;
  local_248[0] = 0;
  local_248[1] = 0;
  local_1c8 = &local_2c8;
  local_1d0 = FUN_143efb77c;
  bifrost::messaging::getRoomJID(*(undefined4 *)(lVar5 + 0x140));
  uVar12 = FUN_141546c72();
  FUN_148a99c30(uVar12,&local_1d0,*(undefined4 *)(lVar5 + 0x158));
  if (*(char *)(lVar5 + 0x174) == '\x01') {
    FUN_1411cb701(&local_258,*(undefined4 *)(lVar5 + 0x170));
  }
  else {
    local_258 = 0;
    uStack_250 = 0;
  }
  iVar4 = *(int *)(lVar5 + 0x168);
  if ((longlong)iVar4 != 0) {
    lVar7 = *(longlong *)(lVar5 + 0x160);
    lVar16 = 0;
    do {
      FUN_1411cb701(&local_268,*(undefined4 *)(lVar7 + 4 + lVar16));
      if (1 < local_260) {
        FUN_1446f470e(&local_280,L"SHIFT",1);
        FUN_148a783be(*(undefined8 *)(lVar5 + 0x70));
        local_2c8 = local_280;
        plVar13 = (longlong *)FUN_1401e3228(&local_2c8);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x80))(plVar13,&local_278);
          if (local_278 != (code *)0x0) {
            (**(code **)(*(longlong *)local_278 + 0x120))(local_278,&local_290,&local_268);
            if (local_290 != (code *)0x0) {
              local_2c8 = local_290;
              plStack_2c0 = local_288;
              if (local_288 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_288 + 1) = (int)local_288[1] + 1;
                UNLOCK();
              }
              local_1e8 = &local_2b8;
              local_2b8 = 0;
              uStack_2b0 = 0;
              local_1e0 = FUN_143efd7ea;
              local_1d8 = &local_1e8;
              bifrost::sessions::serviceName(*(undefined4 *)(lVar7 + 4 + lVar16),&local_1e0);
              local_1e8 = &local_2a8;
              local_2a8 = 0;
              uStack_2a0 = 0;
              local_1e0 = FUN_143efb77c;
              local_1d8 = &local_1e8;
              bifrost::messaging::getRoomJID(*(undefined4 *)(lVar7 + 8 + lVar16),&local_1e0);
              uVar9 = uStack_220;
              lVar15 = (longlong)(int)uStack_220;
              uVar11 = (int)uStack_220 + 1;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar11);
              if (uStack_220._4_4_ < uVar11) {
                FUN_148a84a88(&local_228,uVar9 & 0xffffffff);
              }
              lVar15 = lVar15 * 0x30;
              *(code **)(local_228 + lVar15) = local_2c8;
              *(longlong **)(local_228 + 8 + lVar15) = plStack_2c0;
              if (plStack_2c0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_2c0 + 1) = (int)plStack_2c0[1] + 1;
                UNLOCK();
              }
              lVar15 = local_228 + lVar15;
              *(undefined8 *)(lVar15 + 0x10) = 0;
              *(undefined8 *)(lVar15 + 0x10) = local_2b8;
              local_2b8 = 0;
              *(undefined4 *)(lVar15 + 0x18) = (undefined4)uStack_2b0;
              *(undefined4 *)(lVar15 + 0x1c) = uStack_2b0._4_4_;
              uStack_2b0 = 0;
              *(undefined8 *)(lVar15 + 0x20) = 0;
              *(undefined8 *)(lVar15 + 0x20) = local_2a8;
              local_2a8 = 0;
              *(undefined4 *)(lVar15 + 0x28) = (undefined4)uStack_2a0;
              *(undefined4 *)(lVar15 + 0x2c) = uStack_2a0._4_4_;
              uStack_2a0 = 0;
              FUN_148a787bc(&local_2c8);
            }
            plVar13 = local_288;
            if (local_288 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_288 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_288)(local_288);
                LOCK();
                piVar3 = (int *)((longlong)plVar13 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
          }
          plVar13 = local_270;
          if (local_270 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_270 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
      }
      if (local_268 != 0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 0xc;
    } while ((longlong)iVar4 * 0xc != lVar16);
  }
  if (1 < (int)uStack_250) {
    FUN_1446f470e(&local_278,L"SHIFT",1);
    FUN_148a783be(*(undefined8 *)(lVar5 + 0x70));
    local_1e0 = local_278;
    plVar13 = (longlong *)FUN_1401e3228();
    if (plVar13 == (longlong *)0x0) {
      local_2c8 = (code *)0x0;
      plStack_2c0 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar13 + 0x80))(plVar13,&local_2c8);
      if (local_2c8 != (code *)0x0) {
        (**(code **)(*(longlong *)local_2c8 + 0x120))(local_2c8,&local_1e0,&local_258);
        ppuVar2 = local_1d8;
        ppuVar8 = ppuStack_230;
        local_238 = local_1e0;
        local_1e0 = (code *)0x0;
        if (local_1d8 != ppuStack_230) {
          local_1d8 = (undefined8 **)0x0;
          ppuStack_230 = ppuVar2;
          if (ppuVar8 == (undefined8 **)0x0) goto LAB_143f2257a;
          LOCK();
          ppuVar2 = ppuVar8 + 1;
          *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
          UNLOCK();
          if (*(int *)ppuVar2 == 0) {
            (*(code *)**ppuVar8)(ppuVar8);
            LOCK();
            piVar3 = (int *)((longlong)ppuVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (*(code *)(*ppuVar8)[2])(ppuVar8);
            }
          }
        }
        ppuVar8 = local_1d8;
        if (local_1d8 != (undefined8 **)0x0) {
          LOCK();
          ppuVar2 = local_1d8 + 1;
          *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
          UNLOCK();
          if (*(int *)ppuVar2 == 0) {
            (*(code *)**local_1d8)(local_1d8);
            LOCK();
            piVar3 = (int *)((longlong)ppuVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (*(code *)(*ppuVar8)[2])(ppuVar8);
            }
          }
        }
      }
    }
LAB_143f2257a:
    plVar13 = plStack_2c0;
    if (plStack_2c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_2c0)(plStack_2c0);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (local_238 != (code *)0x0) {
    FUN_1446f470e(&local_2c8,L"SHIFT",1);
    FUN_148a783be(*(undefined8 *)(lVar5 + 0x70));
    plVar13 = (longlong *)FUN_1401e3228(&local_2c8);
    if ((plVar13 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar13 + 0x138))(plVar13,local_238), cVar10 == '\0')) {
      FUN_140056680(&local_2c8,L"Matchmaking success (client)");
      pcVar14 = local_2c8;
LAB_143f2271e:
      if (pcVar14 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar6 = *(undefined8 **)(param_2 + 0x28);
      if ((puVar6 != (undefined8 *)0x0) &&
         (cVar10 = (**(code **)*puVar6)(puVar6,local_238), cVar10 != '\0')) {
        FUN_140056680(&local_2c8,L"Matchmaking success (host)");
        if (local_2c8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 == '\x01') {
          uVar17 = FUN_140bee9ec(&uStack_200,local_c0);
          local_1f0 = local_1a0[0];
          FUN_143f24b18(uVar17,&local_1e0,&local_1d0);
          if (0 < (int)local_1d8) {
            FUN_143f25604(*(undefined8 *)(lVar5 + 0x70),&local_268,&local_1e0);
            if (0 < local_260) {
              FUN_148a78814(*(undefined8 *)(lVar5 + 0x70),&local_2c8,local_198,&local_268);
              if ((local_218 != local_2c8) || (local_210 != (int)plStack_2c0)) {
                local_218 = local_2c8;
                local_210 = (int)plStack_2c0;
                local_208 = 0;
              }
            }
            if (local_268 != 0) {
              FUN_1400020a8();
            }
          }
          FUN_1447a1747(local_1e0,(int)local_1d8);
          pcVar14 = local_1e0;
          goto LAB_143f2271e;
        }
      }
    }
    lVar7 = *(longlong *)(lVar5 + 0x70);
    if (*(int *)(lVar7 + 0x110) != *(int *)(lVar5 + 0x158)) {
      *(int *)(lVar7 + 0x110) = *(int *)(lVar5 + 0x158);
      FUN_1401861f4(lVar7 + 0x48);
    }
    if ((*(int *)(lVar5 + 0x68) != 0) &&
       (plVar13 = *(longlong **)(lVar5 + 0x60), plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x60))(plVar13,local_248,&local_238);
    }
  }
  FUN_143f26ae2(lVar5);
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  if (local_68 == '\x01') {
    FUN_141175be2(local_1a0);
    FUN_141175b88(local_1b0,local_1a8);
    if (local_1b0 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 != 0) {
      FUN_1400020a8();
    }
    FUN_141175b4a(local_1d0,(ulonglong)local_1c8 & 0xffffffff);
    if (local_1d0 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  FUN_148a78a16(&local_238);
LAB_143f220f3:
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2286a FUN_143f2286a body=1855 status=ok
// SIG undefined FUN_143f2286a(void)

void FUN_143f2286a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  void *local_108;
  int local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  GUID local_a8;
  uint local_98;
  int iStack_94;
  ulonglong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_145e1aa6e(param_2,&local_c8);
  if (local_c8 == (undefined8 *)0x0) {
    uVar16 = 1;
  }
  else {
    if (*(int *)((longlong)local_c8 + 0x14) == 0) {
      plVar8 = (longlong *)FUN_140773fe2();
      local_d8 = *local_c8;
      plVar10 = (longlong *)local_c8[1];
      if (plVar10 == (longlong *)0x0) {
        local_d0 = (longlong *)0x0;
        lVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        local_d0 = plVar10;
        lVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
        LOCK();
        plVar8 = plVar10 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      uVar13 = 0;
      if (lVar9 == 0) {
        uVar16 = 3;
        goto LAB_143f22958;
      }
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_14101cf30(param_2,&local_98);
      lVar12 = CONCAT44(iStack_94,local_98);
      lVar11 = (longlong)(int)local_90[0];
      if (lVar11 != 0) {
        lVar14 = 0;
        local_120 = lVar9;
        local_118 = param_3;
        local_110 = param_1;
        do {
          uVar13 = uStack_e0;
          uVar16 = **(undefined8 **)(lVar12 + lVar14);
          plVar10 = (longlong *)(*(undefined8 **)(lVar12 + lVar14))[1];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          lVar9 = (longlong)(int)uStack_e0;
          uVar6 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
          if (uStack_e0._4_4_ < uVar6) {
            FUN_1413eac7e(&local_e8,uVar13 & 0xffffffff);
          }
          *(undefined8 *)(local_e8 + lVar9 * 0x10) = uVar16;
          *(longlong **)(local_e8 + 8 + lVar9 * 0x10) = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            plVar8 = plVar10 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          lVar14 = lVar14 + 0x10;
        } while (lVar11 * 0x10 != lVar14);
        uVar13 = local_90[0] & 0xffffffff;
        lVar12 = CONCAT44(iStack_94,local_98);
        lVar9 = local_120;
        param_3 = local_118;
        param_1 = local_110;
      }
      FUN_14101cee4(lVar12,uVar13);
      if (CONCAT44(iStack_94,local_98) != 0) {
        FUN_1400020a8();
      }
      FUN_146048f14(param_2,&local_108);
      pvVar5 = local_108;
      local_f8 = (void *)0x0;
      local_f0 = local_100;
      if ((longlong)local_100 == 0) {
        local_ec = 0;
      }
      else {
        FUN_1446dd670(&local_f8,local_100,0);
        memcpy(local_f8,pvVar5,(longlong)local_100 * 2);
      }
      if ((*(int *)(param_1 + 0xd8) == 0) && (*(longlong *)(param_1 + 0xf0) == 0)) {
        plVar10 = (longlong *)FUN_14001cc68(0x58,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14b4e8d10;
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[4] = 0;
        plVar10[5] = 0;
        plVar10[6] = 0;
        plVar10[7] = 0;
        plVar10[8] = 0;
        plVar10[9] = 0;
        plVar10[10] = 0;
        local_120 = lVar9;
        if (plVar10 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xf0) = 0x10;
          plVar8 = *(longlong **)(param_1 + 0xf8);
          if (plVar8 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0xf8) = 0;
LAB_143f22c31:
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
            if (plVar10 != (longlong *)0x0) goto LAB_143f22c55;
          }
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          *(longlong **)(param_1 + 0xf0) = plVar10 + 2;
          plVar8 = *(longlong **)(param_1 + 0xf8);
          if (plVar10 == plVar8) {
            LOCK();
            plVar8 = plVar10 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          else {
            *(longlong **)(param_1 + 0xf8) = plVar10;
            if (plVar8 != (longlong *)0x0) goto LAB_143f22c31;
          }
LAB_143f22c55:
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
        iVar7 = *(int *)(param_1 + 0xe8) + 1;
        *(int *)(param_1 + 0xe8) = iVar7;
        **(int **)(param_1 + 0xf0) = iVar7;
        lVar9 = *(longlong *)(param_1 + 0xf0);
        uVar6 = *(uint *)(local_120 + 0xc);
        *(uint *)(lVar9 + 4) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar7 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar7 = *(int *)(lVar12 + 0x10);
          bVar17 = iVar7 == 0;
          if (bVar17) {
            *(int *)(lVar12 + 0x10) = iVar15;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar7 = iVar15;
          }
        }
        iVar15 = local_f0;
        pvVar5 = local_f8;
        *(int *)(lVar9 + 8) = iVar7;
        lVar9 = *(longlong *)(param_1 + 0xf0);
        ppvVar3 = (void **)(lVar9 + 0x10);
        if (ppvVar3 != &local_f8) {
          lVar12 = (longlong)local_f0;
          *(int *)(lVar9 + 0x18) = local_f0;
          if (local_f0 == 0 && *(int *)(lVar9 + 0x1c) == 0) {
            *(undefined4 *)(lVar9 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar3,local_f0);
            if (iVar15 != 0) {
              memcpy(*ppvVar3,pvVar5,lVar12 * 2);
            }
          }
        }
        FUN_148a7824c(*(longlong *)(param_1 + 0xf0) + 0x20,param_3);
        FUN_145eea3ba(*(longlong *)(param_1 + 0xf0) + 0x30,&local_e8);
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        lVar9 = param_3[1];
        if ((longlong)(int)lVar9 != 0) {
          lVar12 = *param_3;
          lVar11 = 0;
          do {
            uVar13 = uStack_b0;
            uVar4 = *(undefined4 *)(lVar12 + 0x30 + lVar11);
            lVar14 = (longlong)(int)uStack_b0;
            uVar6 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
            if (uStack_b0._4_4_ < uVar6) {
              FUN_148a66b1a(&local_b8,uVar13 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_b8 + lVar14 * 4) = uVar4;
            lVar11 = lVar11 + 0x168;
          } while ((longlong)(int)lVar9 * 0x168 - lVar11 != 0);
        }
        uVar4 = (int)uStack_e0;
        iStack_94 = 0;
        local_98 = *(uint *)(local_120 + 0xc);
        if ((int)local_98 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((local_98 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_98 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar17 = iVar7 == 0;
          if (bVar17) {
            *(int *)(lVar9 + 0x10) = iVar15;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar7 = iVar15;
          }
        }
        local_a8.Data1 = 0;
        local_a8.Data2 = 0;
        local_a8.Data3 = 0;
        local_a8.Data4[0] = '\0';
        local_a8.Data4[1] = '\0';
        local_a8.Data4[2] = '\0';
        local_a8.Data4[3] = '\0';
        local_a8.Data4[4] = '\0';
        local_a8.Data4[5] = '\0';
        local_a8.Data4[6] = '\0';
        local_a8.Data4[7] = '\0';
        iStack_94 = iVar7;
        CoCreateGuid(&local_a8);
        local_90[0] = 0;
        local_90[1] = 0;
        FUN_1407c869a(&local_a8,local_90,0);
        pvVar5 = local_b8;
        local_80 = (void *)0x0;
        lVar9 = (longlong)(int)uStack_b0;
        local_78 = (int)uStack_b0;
        if (lVar9 == 0) {
          local_74 = 0;
        }
        else {
          FUN_148a831c6(&local_80,uStack_b0 & 0xffffffff,0);
          memcpy(local_80,pvVar5,lVar9 << 2);
        }
        local_70 = uVar4;
        local_6c = 0;
        local_64 = 0;
        FUN_148a7a818(&local_98);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        FUN_143f234fe(param_1,1);
        FUN_148a782aa(param_1);
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_f8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_14127b1cd(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      uVar16 = 0;
      uVar13 = 1;
      goto LAB_143f22958;
    }
    uVar16 = 2;
  }
  uVar13 = 0;
LAB_143f22958:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_c0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
  if ((char)uVar13 == '\0') {
    FUN_143f22faa(param_1,uVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f22faa FUN_143f22faa body=1362 status=ok
// SIG undefined FUN_143f22faa(void)

void FUN_143f22faa(longlong *param_1,int param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [23];
  undefined1 local_69;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  longlong *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (1 < DAT_14cb97180) {
    DAT_14cb971a4 = param_2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_50 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_48 = 0;
  switch(param_2) {
  case 1:
    local_40 = L"MatchmakingError_InvalidParty";
    local_38 = 0x1d;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxMatchmaking";
    local_38 = 0xe;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Unable to start matchmaking with the current party.";
    local_38 = 0x33;
    break;
  case 2:
    local_40 = L"MatchmakingError_NotPartyLeader";
    local_38 = 0x1f;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxMatchmaking";
    local_38 = 0xe;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Only the party leader is allowed to start matchmaking.";
    local_38 = 0x36;
    break;
  case 3:
    local_40 = L"MatchmakingError_NotLoggedIntoShift";
    local_38 = 0x23;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxMatchmaking";
    local_38 = 0xe;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"You must be in an online network mode in order to start matchmaking.";
    local_38 = 0x44;
    break;
  case 4:
    goto switchD_143f2304a_caseD_4;
  case 5:
    local_40 = L"MatchmakingError_InvalidExperience";
    local_38 = 0x22;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxMatchmaking";
    local_38 = 0xe;
    FUN_1446e940c(local_68,&local_40);
    local_40 = 
    L"The selected activity is no longer available. The activity list has been updated. Please select a new activity."
    ;
    local_38 = 0x6f;
    break;
  default:
    if (param_2 == 0xf) {
      local_40 = L"MatchmakingError_TicketTimeout";
      local_38 = 0x1e;
      FUN_1446e940c(local_64,&local_40);
      local_40 = L"GbxMatchmaking";
      local_38 = 0xe;
      FUN_1446e940c(local_68,&local_40);
      local_40 = L"We were unable to find any matches. Please try again later.";
      local_38 = 0x3b;
    }
    else {
      if (param_2 != 0x13) goto switchD_143f2304a_caseD_4;
      local_40 = L"MatchmakingError_Suspended";
      local_38 = 0x1a;
      FUN_1446e940c(local_64,&local_40);
      local_40 = L"GbxMatchmaking";
      local_38 = 0xe;
      FUN_1446e940c(local_68,&local_40);
      local_40 = L"Matchmaking was canceled because the game was suspended.";
      local_38 = 0x38;
    }
  }
  FUN_140208c1e(local_60,local_68,local_64,&local_40);
  FUN_140008f88(&local_50,local_60);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
switchD_143f2304a_caseD_4:
  plVar2 = local_50;
  if (*(code **)(*local_50 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*local_50 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  pcVar1 = *(code **)(*local_50 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar2 = local_50 + 3;
    if (local_50[5] != 0) {
      plVar2 = (longlong *)(local_50[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar2 = local_50 + 2;
  }
  else {
    plVar2 = (longlong *)(*pcVar1)(local_50);
  }
  if ((int)plVar2[1] < 2) {
    local_69 = (undefined1)param_2;
    local_40 = L"MatchmakingError";
    local_38 = 0x10;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxMatchmaking";
    local_38 = 0xe;
    FUN_1446e940c(local_68,&local_40);
    local_40 = 
    L"An error occurred during matchmaking. Please check your network connection and try again.\nError Code: {0}"
    ;
    local_38 = 0x69;
    FUN_140208c1e(local_60,local_68,local_64,&local_40);
    FUN_14023409e(local_80,local_60,1);
    FUN_148a793da(&local_40,local_80,&local_69);
    FUN_140008f88(&local_50,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_50);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f234fe FUN_143f234fe body=942 status=ok
// SIG undefined FUN_143f234fe(void)

void FUN_143f234fe(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_258 [40];
  longlong local_230;
  longlong local_228;
  longlong local_220 [2];
  float local_210 [2];
  void **local_208;
  int *local_200;
  code *local_1f8;
  float *local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  int local_1d4;
  longlong local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [8];
  void *local_198;
  int local_190;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(int *)(param_1 + 0xd8) != param_2) {
    if (*(int *)(param_1 + 0xd8) == 0) {
      FUN_140212f8e(&local_1d0);
      *(longlong *)(param_1 + 0xe0) = local_1d0;
    }
    else if (param_2 == 0) {
      FUN_140212f8e(&local_228);
      lVar1 = *(longlong *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      local_1d4 = DAT_14cb97190;
      uVar3 = FUN_141546c72();
      lVar2 = DAT_14cb97188;
      if ((longlong)DAT_14cb97190 != 0) {
        lVar8 = (longlong)DAT_14cb97190 << 2;
        lVar7 = 0;
        local_230 = lVar8;
        while ((((DAT_14cb97174 != 0 && (-1 < (int)DAT_14cb97170)) &&
                ((int)DAT_14cb97170 < DAT_14c9647dc)) &&
               (((lVar6 = (ulonglong)((DAT_14cb97170 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb97170 >> 0x10) * 8),
                 lVar6 != 0 && (*(int *)(lVar6 + 0x10) == DAT_14cb97174)) &&
                ((*(uint *)(lVar6 + 8) & 0x10200000) == 0))))) {
          FUN_148a99c30(uVar3,&local_1d0,*(undefined4 *)(lVar2 + lVar7));
          _Src = local_198;
          iVar9 = 3;
          if (local_68 == 1) {
            local_1e8 = (void *)0x0;
            lVar8 = (longlong)local_190;
            local_1e0 = local_190;
            if (lVar8 == 0) {
              local_1dc = 0;
            }
            else {
              FUN_1446dd670(&local_1e8,local_190,0);
              memcpy(local_1e8,_Src,lVar8 * 2);
            }
            local_208 = &local_1e8;
            local_200 = &local_1d4;
            local_1f0 = local_210;
            local_1f8 = FUN_143f2f80e;
            local_210[0] = (float)((double)(local_228 - lVar1) / 10000000.0);
            FUN_140056680(local_220,L"matchmaking_results");
            lVar8 = local_230;
            if ((DAT_14cb97174 == 0) || ((int)DAT_14cb97170 < 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 0;
              if ((int)DAT_14cb97170 < DAT_14c9647dc) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((DAT_14cb97170 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb97170 >> 0x10) * 8));
                if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != DAT_14cb97174)) ||
                   ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *puVar5;
                }
              }
            }
            FUN_148a7a793(uVar4,local_220,&local_1f8);
            if (local_220[0] != 0) {
              FUN_1400020a8();
            }
            if (local_1e8 != (void *)0x0) {
              FUN_1400020a8();
            }
            iVar9 = 0;
          }
          if ((local_68 & 1) != 0) {
            FUN_141175be2(local_1a0);
            FUN_141175b88(local_1b0,local_1a8);
            if (local_1b0 != 0) {
              FUN_1400020a8();
            }
            if (local_1c0 != 0) {
              FUN_1400020a8();
            }
            FUN_141175b4a(local_1d0,local_1c8);
            if (local_1d0 != 0) {
              FUN_1400020a8();
            }
          }
          if (((iVar9 != 3) && (iVar9 != 0)) || (lVar7 = lVar7 + 4, lVar8 == lVar7)) break;
        }
      }
      DAT_14cb97180 = 0;
      if (DAT_14cb97184 != 0) {
        FUN_1446f8c06(&DAT_14cb97178,0);
      }
    }
    *(int *)(param_1 + 0xd8) = param_2;
    FUN_148a85e3c(param_1 + 0x18,param_2);
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f238ae FUN_143f238ae body=186 status=ok
// SIG undefined FUN_143f238ae(void)

void FUN_143f238ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xd8) != 1) {
    return;
  }
  uVar4 = FUN_145d6e79a();
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(lVar5 + 0x40) != 0) {
    FUN_14480f766(uVar4);
    lVar5 = *(longlong *)(param_1 + 0xf0);
  }
  *(undefined8 *)(lVar5 + 0x40) = 0;
  lVar5 = FUN_145d6e79a();
  if (*(int *)(lVar5 + 0x28) != 0) {
    FUN_143f23968(param_1);
    return;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xf8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_143f22faa(param_1,4);
  FUN_143f234fe(param_1,0);
  return;
}



// FUNCTION 143f23968 FUN_143f23968 body=337 status=ok
// SIG undefined FUN_143f23968(void)

void FUN_143f23968(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_141546c72();
  local_50 = FUN_143f23aba;
  local_48 = 0;
  FUN_148a783fc(&local_40,param_1,&local_50,*(undefined8 *)(param_1 + 0xf0));
  lVar7 = *(longlong *)(param_1 + 0xf0);
  puVar1 = (uint *)(lVar7 + 4);
  cVar4 = FUN_146076bce(puVar1,0);
  uVar9 = 0xffffffff;
  if (cVar4 == '\0') {
    iVar2 = *(int *)(lVar7 + 8);
    if (iVar2 == 0) {
LAB_143f23aac:
      lVar7 = 0;
    }
    else {
      uVar3 = *puVar1;
      lVar7 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != iVar2 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
        goto LAB_143f23aac;
        lVar7 = *plVar8;
      }
    }
    uVar9 = *(undefined4 *)(lVar7 + 0x38);
  }
  uVar6 = FUN_148a783be(param_1);
  FUN_14160246e(uVar5,uVar6,uVar9,&local_40);
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_143f23a8a;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f23a8a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f23aba FUN_143f23aba body=1140 status=ok
// SIG undefined FUN_143f23aba(void)

void FUN_143f23aba(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  void *local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  void *local_1a8;
  int local_1a0;
  void *local_198;
  int local_190;
  undefined1 local_188 [24];
  longlong local_170;
  int local_168;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((*(int *)(param_1 + 0xd8) != 1) || (piVar4 = *(int **)(param_1 + 0xf0), piVar4 == (int *)0x0)
      ) || (*piVar4 != param_2)) goto LAB_143f23e52;
  if ((longlong)piVar4[10] != 0) {
    plVar12 = *(longlong **)(piVar4 + 8);
    plVar11 = plVar12 + (longlong)piVar4[10] * 0x2d;
    bVar18 = true;
    do {
      uVar6 = FUN_141546c72();
      FUN_1418c091c(uVar6,&local_1b8);
      bVar5 = local_50;
      if (local_50 == 1) {
        if (local_168 == (int)plVar12[10]) {
          if (1 < local_168) {
            lVar13 = 0;
            while( true ) {
              uVar8 = *(ushort *)(local_170 + lVar13);
              uVar9 = (ulonglong)uVar8;
              uVar14 = *(ushort *)(plVar12[9] + lVar13);
              if (uVar8 != uVar14) break;
              if (uVar8 == 0) goto LAB_143f23bc6;
LAB_143f23b89:
              lVar13 = lVar13 + 2;
            }
            if ((uVar14 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar15 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar15]) goto LAB_143f23b89;
            }
            if (uVar8 != uVar14) goto LAB_143f23c38;
          }
        }
        else if ((int)plVar12[10] + local_168 != 1) {
LAB_143f23c38:
          FUN_148a82e76(plVar12,&local_1b8);
          iVar2 = local_1a0;
          if (plVar12 != &local_1b8) {
            lVar13 = (longlong)local_1a0;
            *(int *)(plVar12 + 3) = local_1a0;
            if (local_1a0 == 0 && *(int *)((longlong)plVar12 + 0x1c) == 0) {
              *(undefined4 *)((longlong)plVar12 + 0x1c) = 0;
            }
            else {
              local_1c0 = local_1a8;
              FUN_1446dd670(plVar12 + 2,local_1a0);
              if (iVar2 != 0) {
                memcpy((void *)plVar12[2],local_1c0,lVar13 * 2);
              }
            }
            FUN_141175b88(plVar12[4],(int)plVar12[5]);
            iVar2 = local_190;
            *(int *)(plVar12 + 5) = local_190;
            if (local_190 == 0 && *(int *)((longlong)plVar12 + 0x2c) == 0) {
              *(undefined4 *)((longlong)plVar12 + 0x2c) = 0;
            }
            else {
              local_1c0 = local_198;
              FUN_143f2df04(plVar12 + 4,local_190);
              FUN_143f2e047(plVar12[4],local_1c0,iVar2);
            }
          }
          FUN_148a82ed4(plVar12 + 6,local_188);
        }
      }
      else {
        bVar18 = false;
      }
LAB_143f23bc6:
      if ((local_50 & 1) != 0) {
        FUN_141175be2(local_188);
        FUN_141175b88(local_198,local_190);
        if (local_198 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_141175b4a(local_1b8,local_1b0);
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
      }
    } while ((bVar5 != 0) && (plVar12 = plVar12 + 0x2d, plVar12 != plVar11));
    if (!bVar18) {
LAB_143f23dfc:
      *(undefined8 *)(param_1 + 0xf0) = 0;
      plVar12 = *(longlong **)(param_1 + 0xf8);
      if (plVar12 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xf8) = 0;
        LOCK();
        plVar11 = plVar12 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar4 = (int *)((longlong)plVar12 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      FUN_143f22faa(param_1,5);
      FUN_143f234fe(param_1,0);
      goto LAB_143f23e52;
    }
    lVar13 = *(longlong *)(param_1 + 0xf0);
    iVar2 = *(int *)(lVar13 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar10 = *(longlong *)(lVar13 + 0x20);
      lVar16 = 0;
      iVar7 = 0;
      do {
        iVar17 = 0;
        if ((*(char *)(lVar10 + 0x100 + lVar16) == '\x01') && (0 < *(int *)(lVar10 + 0xe8 + lVar16))
           ) {
          iVar17 = **(int **)(lVar10 + 0xe0 + lVar16);
        }
        if (iVar17 < *(int *)(lVar13 + 0x38)) goto LAB_143f23dfc;
        iVar7 = iVar7 + (uint)(iVar17 == *(int *)(lVar13 + 0x38));
        lVar16 = lVar16 + 0x168;
      } while ((longlong)iVar2 * 0x168 - lVar16 != 0);
      if (iVar7 != 0) {
        if (iVar7 != iVar2) goto LAB_143f23dfc;
        plVar12 = *(longlong **)(param_1 + 0xf8);
        if (plVar12 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xf0) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          plVar11 = *(longlong **)(param_1 + 0xf8);
          *(undefined8 *)(param_1 + 0xf0) = 0;
          if (plVar11 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0xf8) = 0;
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
        }
        if (*(int *)(lVar13 + 8) == 0) {
LAB_143f23f2b:
          lVar10 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar13 + 4);
          lVar10 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar11 == (longlong *)0x0) ||
               (((int)plVar11[2] != *(int *)(lVar13 + 8) ||
                ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f23f2b;
            lVar10 = *plVar11;
          }
        }
        local_1c8 = lVar13 + 0x20;
        FUN_143f23f30(param_1,lVar10 + 0x28,lVar13 + 0x30,lVar13 + 0x10);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar12 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar4 = (int *)((longlong)plVar12 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        goto LAB_143f23e52;
      }
    }
  }
  FUN_148a78552(param_1);
LAB_143f23e52:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f23f30 FUN_143f23f30 body=1815 status=ok
// SIG undefined FUN_143f23f30(void)

/* WARNING: Removing unreachable block (ram,0x000143f24169) */
/* WARNING: Removing unreachable block (ram,0x000143f2438d) */
/* WARNING: Removing unreachable block (ram,0x000143f24393) */
/* WARNING: Removing unreachable block (ram,0x000143f243a1) */

void FUN_143f23f30(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  void *_Src;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_298 [40];
  longlong *local_270;
  longlong local_268;
  longlong local_260;
  longlong *local_258;
  undefined8 local_250;
  code *local_248;
  void ***local_240;
  void *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218 [2];
  void *local_208;
  ulonglong uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  void **local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int local_190;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar11 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_270 = param_2;
  local_258 = param_3;
  local_250 = param_4;
  if ((longlong)(int)param_5[1] != 0) {
    lVar10 = *param_5;
    lVar4 = (longlong)(int)param_5[1] * 0x168;
    local_268 = param_1;
    do {
      FUN_143f24b18(uVar11,&local_248,lVar10);
      if ((int)local_240 < 1) {
        iVar3 = 0;
        lVar8 = 0;
LAB_143f23ff7:
        FUN_1411769de(&local_1d8,lVar10);
        local_70 = 0;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (iVar3 == 0) {
          local_68 = 0;
        }
        else {
          FUN_148a849e8(&local_70,iVar3,0);
          FUN_148a84a5b(local_70,lVar8,iVar3);
        }
        uVar1 = uStack_1f0;
        lVar9 = (longlong)(int)uStack_1f0;
        uVar2 = (int)uStack_1f0 + 1;
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar2);
        if (uStack_1f0._4_4_ < uVar2) {
          FUN_143f2ea24(&local_1f8,uVar1 & 0xffffffff);
        }
        plVar5 = (longlong *)(local_1f8 + lVar9 * 0x178);
        *plVar5 = 0;
        *plVar5 = local_1d8;
        local_1d8 = 0;
        *(int *)(plVar5 + 1) = (int)uStack_1d0;
        *(undefined4 *)((longlong)plVar5 + 0xc) = uStack_1d0._4_4_;
        uStack_1d0 = 0;
        plVar5[2] = 0;
        plVar5[2] = local_1c8;
        local_1c8 = 0;
        *(int *)(plVar5 + 3) = (int)uStack_1c0;
        *(uint *)((longlong)plVar5 + 0x1c) = uStack_1c0._4_4_;
        uStack_1c0 = 0;
        plVar5[4] = 0;
        plVar5[4] = (longlong)local_1b8;
        local_1b8 = (code *)0x0;
        *(int *)(plVar5 + 5) = (int)local_1b0;
        *(undefined4 *)((longlong)plVar5 + 0x2c) = local_1b0._4_4_;
        local_1b0 = 0;
        FUN_1412efe78(plVar5 + 6,&local_1a8);
        plVar5[0x2d] = 0;
        plVar5[0x2d] = local_70;
        *(undefined4 *)(plVar5 + 0x2e) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar5 + 0x174) = local_68._4_4_;
        local_68 = 0;
        local_70 = 0;
        FUN_141175be2(&local_1a8);
        FUN_141175b88(local_1b8,local_1b0 & 0xffffffff);
        if (local_1b8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        FUN_141175b4a(local_1d8,uStack_1d0 & 0xffffffff);
        if (local_1d8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_143f25604(local_268,&local_1d8,&local_248);
        lVar8 = local_1d8;
        iVar3 = (int)uStack_1d0;
        if ((int)uStack_1d0 != 0) goto LAB_143f23ff7;
      }
      uVar11 = FUN_1447a1747(local_248,(ulonglong)local_240 & 0xffffffff);
      if (local_248 != (code *)0x0) {
        uVar11 = FUN_1400020a8();
      }
      if (lVar8 != 0) {
        uVar11 = FUN_1400020a8(lVar8);
      }
      lVar10 = lVar10 + 0x168;
      lVar4 = lVar4 + -0x168;
    } while (lVar4 != 0);
    iVar3 = (int)uStack_1f0;
    param_1 = local_268;
    if (0 < (int)uStack_1f0) {
      iVar6 = (int)uStack_1f0 + -1;
      uVar2 = rand();
      iVar3 = (int)((float)iVar3 * ((float)(uVar2 & 0x7fff) / 32767.0));
      if (iVar3 < iVar6) {
        iVar6 = iVar3;
      }
      local_1b8 = (code *)0x0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b0 = CONCAT44(local_1b0._4_4_,0x6000);
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = 0xffffffff;
      local_1d8 = *local_270;
      uStack_1d0 = local_270[1];
      if (uStack_1d0 == 0) {
        uStack_1d0 = 0;
      }
      else {
        LOCK();
        *(int *)(uStack_1d0 + 8) = *(int *)(uStack_1d0 + 8) + 1;
        UNLOCK();
      }
      local_270 = (longlong *)(local_1f8 + (longlong)iVar6 * 0x178);
      local_260 = local_1f8 + (longlong)iVar6 * 0x178 + 0x168;
      if ((longlong)(int)local_258[1] != 0) {
        plVar5 = (longlong *)*local_258;
        plVar7 = plVar5 + (longlong)(int)local_258[1] * 2;
        do {
          (**(code **)(*(longlong *)*plVar5 + 0x30))((longlong *)*plVar5,local_218);
          uVar11 = FUN_140b71325(local_218);
          local_208 = (void *)0x0;
          uStack_200 = 0;
          local_1e0 = &local_208;
          local_248 = FUN_143efd7ea;
          local_240 = &local_1e0;
          bifrost::sessions::serviceName(uVar11,&local_248);
          if (local_218[0] != 0) {
            FUN_1400020a8();
          }
          _Src = local_208;
          local_248 = (code *)*plVar5;
          local_240 = (void ***)plVar5[1];
          if (local_240 != (void ***)0x0) {
            LOCK();
            *(int *)((longlong)local_240 + 8U) = *(int *)((longlong)local_240 + 8U) + 1;
            UNLOCK();
          }
          local_238 = (void *)0x0;
          lVar10 = (longlong)(int)uStack_200;
          local_230 = CONCAT44(local_230._4_4_,(int)uStack_200);
          if (lVar10 == 0) {
            local_230 = uStack_200 & 0xffffffff;
          }
          else {
            FUN_1446dd670(&local_238,uStack_200 & 0xffffffff,0);
            memcpy(local_238,_Src,lVar10 * 2);
          }
          uVar1 = uStack_1c0;
          local_228 = 0;
          uStack_220 = 0;
          lVar10 = (longlong)(int)uStack_1c0;
          uVar2 = (int)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar2);
          if (uStack_1c0._4_4_ < uVar2) {
            FUN_148a84a88(&local_1c8,uVar1 & 0xffffffff);
          }
          lVar10 = lVar10 * 0x30;
          *(code **)(local_1c8 + lVar10) = local_248;
          *(void ****)(local_1c8 + 8 + lVar10) = local_240;
          if (local_240 != (void ***)0x0) {
            LOCK();
            *(int *)((longlong)local_240 + 8U) = *(int *)((longlong)local_240 + 8U) + 1;
            UNLOCK();
          }
          lVar10 = local_1c8 + lVar10;
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(void **)(lVar10 + 0x10) = local_238;
          local_238 = (void *)0x0;
          *(undefined4 *)(lVar10 + 0x18) = (undefined4)local_230;
          *(undefined4 *)(lVar10 + 0x1c) = local_230._4_4_;
          local_230 = 0;
          *(undefined8 *)(lVar10 + 0x20) = 0;
          *(undefined8 *)(lVar10 + 0x20) = local_228;
          local_228 = 0;
          *(undefined4 *)(lVar10 + 0x28) = (undefined4)uStack_220;
          *(undefined4 *)(lVar10 + 0x2c) = uStack_220._4_4_;
          uStack_220 = 0;
          FUN_148a787bc(&local_248);
          if (local_208 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar7);
      }
      lVar10 = local_268;
      plVar5 = local_270;
      FUN_148a78814(local_268,&local_248,local_270 + 7,local_260);
      if ((local_1b8 != local_248) || ((int)local_1b0 != (int)local_240)) {
        local_1b8 = local_248;
        local_1b0 = CONCAT44(local_1b0._4_4_,(int)local_240);
        local_1a8 = 0;
      }
      local_190 = (int)plVar5[6];
      if (*(int *)(lVar10 + 0x110) != local_190) {
        *(int *)(lVar10 + 0x110) = local_190;
        FUN_1401861f4(lVar10 + 0x48);
      }
      FUN_143f234fe(lVar10,4);
      FUN_143f2574a(lVar10,local_250,&local_1d8);
      FUN_148a78a16(&local_1d8);
      goto LAB_143f24266;
    }
  }
  FUN_143f22faa(param_1,5);
  FUN_143f234fe(param_1,0);
LAB_143f24266:
  FUN_143f2e9a8(local_1f8,uStack_1f0 & 0xffffffff);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f24648 FUN_143f24648 body=1230 status=ok
// SIG undefined FUN_143f24648(void)

void FUN_143f24648(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void **ppvVar2;
  longlong *plVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c4 [4];
  undefined4 local_c0 [2];
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x78) == 0)) {
    uVar7 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xf8) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar6 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar16 + 0x10);
      bVar20 = iVar6 == 0;
      if (bVar20) {
        *(int *)(lVar16 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar6 = iVar9;
      }
    }
    *(int *)(param_1 + 0xfc) = iVar6;
    puVar1 = (undefined8 *)(param_1 + 0x100);
    if (puVar1 != param_3) {
      iVar6 = *(int *)(param_3 + 1);
      pvVar5 = (void *)*param_3;
      *(int *)(param_1 + 0x108) = iVar6;
      if (iVar6 == 0 && *(int *)(param_1 + 0x10c) == 0) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        FUN_1446dd670(puVar1);
        if (iVar6 != 0) {
          memcpy((void *)*puVar1,pvVar5,(longlong)iVar6 * 2);
        }
      }
    }
    local_c0[0] = 0;
    local_88 = 0;
    local_80 = 0;
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    lVar16 = param_4[1];
    local_108 = param_2;
    if ((longlong)(int)lVar16 != 0) {
      lVar10 = *param_4;
      lVar17 = 0;
      do {
        uVar15 = uStack_b0;
        lVar18 = (longlong)(int)uStack_b0;
        uVar7 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
        if (uStack_b0._4_4_ < uVar7) {
          FUN_148a66b1a(&local_b8,uVar15 & 0xffffffff);
        }
        uVar4 = *(undefined4 *)(lVar10 + 0x30 + lVar17);
        *(undefined4 *)((longlong)local_b8 + lVar18 * 4) = uVar4;
        iVar6 = *(int *)(param_1 + 0x130);
        *(uint *)(param_1 + 0x130) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x134) < iVar6 + 1U) {
          FUN_1446f48e2((longlong *)(param_1 + 0x128),iVar6);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar6 * 4) = uVar4;
        lVar17 = lVar17 + 0x168;
      } while ((longlong)(int)lVar16 * 0x168 - lVar17 != 0);
    }
    local_c0[0] = FUN_14119d5f0(param_3);
    FUN_148a79508(*(undefined8 *)(param_1 + 0x70),&local_e8);
    if ((longlong)local_e0 == 0) {
      local_e0 = 0;
    }
    else {
      plVar11 = local_e8 + (longlong)local_e0 * 2;
      plVar19 = local_e8;
      do {
        lVar16 = FUN_145d6e79a();
        if ((longlong)*(int *)(lVar16 + 0x28) != 0) {
          plVar8 = *(longlong **)(lVar16 + 0x20);
          plVar3 = plVar8 + (longlong)*(int *)(lVar16 + 0x28) * 5;
          iVar6 = (int)plVar19[1];
LAB_143f24884:
          if ((int)plVar8[1] != iVar6) {
            if ((int)plVar8[1] + iVar6 == 1) goto LAB_143f248ef;
            goto LAB_143f248e4;
          }
          if (1 < iVar6) {
            lVar16 = 0;
            do {
              uVar14 = *(ushort *)(*plVar8 + lVar16);
              uVar15 = (ulonglong)uVar14;
              uVar12 = *(ushort *)(*plVar19 + lVar16);
              if (uVar14 == uVar12) {
                if (uVar14 == 0) break;
              }
              else {
                if (0x7f < (uVar12 | uVar14)) goto LAB_143f248d1;
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                uVar13 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar13]) goto LAB_143f248d1;
              }
              lVar16 = lVar16 + 2;
            } while( true );
          }
          goto LAB_143f248ef;
        }
LAB_143f24922:
        plVar19 = plVar19 + 2;
      } while (plVar19 != plVar11);
    }
    FUN_1447a1747(local_e8,local_e0);
    lVar16 = local_108;
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (((*(int *)(param_1 + 0x78) != 1) &&
        (*(undefined4 *)(param_1 + 0x78) = 1, *(int *)(param_1 + 0x18) != 0)) &&
       (plVar19 = *(longlong **)(param_1 + 0x10), plVar19 != (longlong *)0x0)) {
      (**(code **)(*plVar19 + 0x60))(plVar19,1);
    }
    if (*(longlong *)(lVar16 + 0x2b8) == 0) {
      FUN_148a79ae6(param_1);
      FUN_143f22faa(*(undefined8 *)(param_1 + 0x70),0xe);
      FUN_143f26ae2(param_1);
    }
    else {
      FUN_148a79826(param_1,*(undefined4 *)(lVar16 + 0x38));
      pvVar5 = local_b8;
      *(undefined4 *)(param_1 + 0x80) = local_c0[0];
      ppvVar2 = (void **)(param_1 + 0x88);
      if (ppvVar2 != &local_b8) {
        iVar6 = (int)uStack_b0;
        lVar10 = (longlong)(int)uStack_b0;
        *(int *)(param_1 + 0x90) = (int)uStack_b0;
        if ((int)uStack_b0 == 0 && *(int *)(param_1 + 0x94) == 0) {
          *(undefined4 *)(param_1 + 0x94) = 0;
        }
        else {
          FUN_148a831c6(ppvVar2,uStack_b0 & 0xffffffff);
          if (iVar6 != 0) {
            memcpy(*ppvVar2,pvVar5,lVar10 << 2);
          }
        }
      }
      FUN_148a83228(param_1 + 0x98,&local_a8);
      pvVar5 = local_58;
      ppvVar2 = (void **)(param_1 + 0xe8);
      if (ppvVar2 != &local_58) {
        iVar6 = (int)uStack_50;
        lVar10 = (longlong)(int)uStack_50;
        *(int *)(param_1 + 0xf0) = (int)uStack_50;
        if ((int)uStack_50 == 0 && *(int *)(param_1 + 0xf4) == 0) {
          *(undefined4 *)(param_1 + 0xf4) = 0;
        }
        else {
          FUN_148a675d8(ppvVar2,uStack_50 & 0xffffffff);
          if (iVar6 != 0) {
            memcpy(*ppvVar2,pvVar5,lVar10 << 2);
          }
        }
      }
      FUN_148a79942(local_100,param_1,lVar16 + 0x38);
      FUN_148a60ef0(lVar16,local_c0,local_100);
    }
    FUN_148a79a92(local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143f248d1:
  if (uVar14 == uVar12) {
LAB_143f248ef:
    if (plVar8 != (longlong *)0x0) {
      local_f0 = (longlong)(int)plVar8[2];
      local_d0 = &local_f0;
      local_d8 = plVar19;
      FUN_146b55f3e(&local_a8,local_c4,&local_d8,0);
    }
    goto LAB_143f24922;
  }
LAB_143f248e4:
  plVar8 = plVar8 + 5;
  if (plVar8 == plVar3) goto LAB_143f24922;
  goto LAB_143f24884;
}



// FUNCTION 143f24b18 FUN_143f24b18 body=2794 status=ok
// SIG undefined FUN_143f24b18(void)

/* WARNING: Removing unreachable block (ram,0x000143f24d16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143f24b18(undefined8 param_1,longlong *param_2,longlong param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  size_t sVar16;
  void **ppvVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  code *pcVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  int iVar32;
  longlong lVar33;
  undefined8 *puVar34;
  int iVar35;
  undefined8 *puVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  wchar_t *_Str;
  longlong lVar41;
  bool bVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  undefined4 local_3d0;
  longlong local_3c0;
  longlong *local_3b8;
  longlong local_3b0;
  void *local_3a8;
  undefined8 uStack_3a0;
  void *local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_3a8 = (void *)0x0;
  uStack_3a0 = 0;
  if ((longlong)*(int *)(param_3 + 0x128) != 0) {
    lVar24 = *(longlong *)(param_3 + 0x120);
    local_3b0 = (longlong)*(int *)(param_3 + 0x128) * 0x40 + lVar24;
    local_3c0 = 0;
    local_3b8 = param_2;
    do {
      _Str = L"";
      if (DAT_14cb970d8 != 0) {
        _Str = DAT_14cb970d0;
      }
      if (_Str == (wchar_t *)0x0) {
LAB_143f24beb:
        iVar14 = *(int *)(lVar24 + 0x38);
        if ((longlong)iVar14 != 0) {
          lVar33 = *(longlong *)(lVar24 + 0x30);
          lVar27 = 0;
          do {
            local_98 = (void *)0x0;
            iVar40 = *(int *)(lVar33 + 0x18 + lVar27);
            pvVar1 = *(void **)(lVar33 + 0x10 + lVar27);
            uStack_90 = CONCAT44(uStack_90._4_4_,iVar40);
            if ((longlong)iVar40 != 0) {
              FUN_1446dd670(&local_98,iVar40,0);
              memcpy(local_98,pvVar1,(longlong)iVar40 * 2);
              pvVar1 = local_98;
              uVar21 = uStack_90 & 0xffffffff;
              if (1 < (int)uStack_90) {
                local_398 = (void *)0x0;
                local_390 = CONCAT44(local_390._4_4_,(int)uStack_90);
                FUN_1446dd670(&local_398,uVar21,0);
                memcpy(local_398,pvVar1,uVar21 * 2);
                uVar21 = uStack_3a0;
                local_388 = *(undefined8 *)(lVar33 + 0x20 + lVar27);
                uStack_380 = *(undefined8 *)(lVar33 + 0x28 + lVar27);
                lVar41 = (longlong)(int)(uint)uStack_3a0;
                uVar15 = (uint)uStack_3a0 + 1;
                uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar15);
                if (uStack_3a0._4_4_ < uVar15) {
                  FUN_143f2ebbe(&local_3a8,uVar21 & 0xffffffff);
                }
                lVar41 = lVar41 * 0x20;
                *(undefined8 *)((longlong)local_3a8 + lVar41) = 0;
                *(void **)((longlong)local_3a8 + lVar41) = local_398;
                *(undefined4 *)((longlong)local_3a8 + lVar41 + 8) = (undefined4)local_390;
                *(undefined4 *)((longlong)local_3a8 + lVar41 + 0xc) = local_390._4_4_;
                puVar28 = (undefined8 *)((longlong)local_3a8 + lVar41 + 0x10);
                *puVar28 = local_388;
                puVar28[1] = uStack_380;
                local_390 = 0;
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
                local_398 = (void *)0x0;
                local_3c0 = local_3c0 + *(longlong *)(lVar33 + 0x28 + lVar27);
              }
              if (local_98 != (void *)0x0) {
                FUN_1400020a8(local_98);
              }
            }
            lVar27 = lVar27 + 0x40;
          } while ((longlong)iVar14 * 0x40 != lVar27);
        }
      }
      else {
        sVar16 = wcslen(_Str);
        local_3d0 = 0xffffffff;
        local_3d8 = 0;
        iVar14 = FUN_1447ee042(lVar24 + 0x20,_Str,sVar16 & 0xffffffff,1);
        if (iVar14 == -1) goto LAB_143f24beb;
      }
      pvVar1 = local_3a8;
      auVar11 = _DAT_149931e80;
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != local_3b0);
    uVar15 = (uint)uStack_3a0;
    lVar24 = (longlong)(int)(uint)uStack_3a0;
    param_2 = local_3b8;
    if (lVar24 != 0) {
      if (local_3c0 == 0) {
        uVar21 = lVar24 + 0x7ffffffffffffffU & 0x7ffffffffffffff;
        auVar44._8_4_ = (int)uVar21;
        auVar44._0_8_ = uVar21;
        auVar44._12_4_ = (int)(uVar21 >> 0x20);
        puVar28 = (undefined8 *)((longlong)local_3a8 + 0x38);
        uVar20 = 0;
        auVar45 = pmovsxbq(in_XMM1,0x100);
        auVar44 = auVar44 | _DAT_149931e80;
        do {
          if ((bool)(~(auVar44._0_8_ < (longlong)(uVar20 ^ auVar11._0_8_)) & 1)) {
            puVar28[-4] = 1;
          }
          auVar46._8_4_ = (int)uVar20;
          auVar46._0_8_ = uVar20;
          auVar46._12_4_ = (int)(uVar20 >> 0x20);
          if ((longlong)((auVar46._8_8_ | auVar45._8_8_) ^ auVar11._8_8_) <= auVar44._8_8_) {
            *puVar28 = 1;
          }
          uVar20 = uVar20 + 2;
          puVar28 = puVar28 + 8;
          uVar22 = (uint)uStack_3a0;
          local_3c0 = lVar24;
        } while ((uVar21 - ((uint)(lVar24 + 0x7ffffffffffffffU) & 1)) + 2 != uVar20);
      }
      else {
        uVar22 = 0;
        uVar37 = 0;
        bVar42 = *(longlong *)((longlong)local_3a8 + 0x18) == 0;
        do {
          lVar33 = (longlong)(int)uVar37;
          uVar3 = uVar37 + 1;
          if ((int)(uVar37 + 1) < (int)uVar15) {
            uVar3 = uVar15;
          }
          lVar27 = lVar33 * 0x20;
          plVar31 = (longlong *)((longlong)pvVar1 + lVar27 + 0x38);
          uVar38 = uVar37;
          do {
            lVar33 = lVar33 + 1;
            uVar39 = uVar3;
            if (lVar24 <= lVar33) break;
            lVar41 = *plVar31;
            uVar38 = uVar38 + 1;
            plVar31 = plVar31 + 4;
            uVar39 = uVar38;
          } while (bVar42 == (lVar41 == 0));
          if (bVar42 == false) {
            if (uVar22 != uVar37) {
              memmove((void *)((longlong)(int)uVar22 * 0x20 + (longlong)pvVar1),
                      (void *)(lVar27 + (longlong)pvVar1),(longlong)(int)(uVar39 - uVar37) << 5);
            }
            uVar22 = uVar22 + (uVar39 - uVar37);
          }
          else {
            FUN_143f2eb92((void *)(lVar27 + (longlong)pvVar1));
          }
          uVar37 = uVar39;
          bVar42 = (bool)(bVar42 ^ 1);
        } while (lVar33 < lVar24);
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar22);
      }
      pvVar1 = local_3a8;
      if (1 < (int)uVar22) {
        memset(&local_388,0,0x2f0);
        local_398 = pvVar1;
        local_390 = (longlong)pvVar1 + (ulonglong)uVar22 * 0x20 + -0x20;
        fVar43 = logf((float)(int)uVar22);
        local_388 = CONCAT44(local_388._4_4_,(int)(longlong)(fVar43 + fVar43));
        ppvVar17 = &local_398;
        do {
          puVar19 = *ppvVar17;
          puVar28 = ppvVar17[1];
          iVar14 = *(int *)(ppvVar17 + 2);
          iVar40 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar19) >> 5);
          uVar15 = iVar40 + 1;
          puVar25 = puVar19;
          puVar36 = puVar28;
          if (iVar14 != 0) {
LAB_143f24fbd:
            if (8 < (int)uVar15) {
              uVar21 = (ulonglong)(uVar15 >> 1);
              uVar4 = puVar19[uVar21 * 4];
              uVar5 = (puVar19 + uVar21 * 4)[1];
              uVar6 = puVar19[uVar21 * 4 + 2];
              uVar7 = (puVar19 + uVar21 * 4 + 2)[1];
              uVar8 = *puVar19;
              uVar9 = puVar19[1];
              uVar10 = puVar19[3];
              puVar19[uVar21 * 4 + 2] = puVar19[2];
              (puVar19 + uVar21 * 4 + 2)[1] = uVar10;
              puVar19[uVar21 * 4] = uVar8;
              (puVar19 + uVar21 * 4)[1] = uVar9;
              puVar19[2] = uVar6;
              puVar19[3] = uVar7;
              *puVar19 = uVar4;
              puVar19[1] = uVar5;
              puVar34 = puVar28 + 4;
              puVar18 = puVar19;
              do {
                puVar13 = puVar18 + 4;
                puVar30 = puVar18 + 4;
                do {
                  puVar18 = puVar30;
                  puVar29 = puVar13;
                  if (puVar28 < puVar18) break;
                  puVar13 = puVar29 + 4;
                  puVar30 = puVar18 + 4;
                } while ((longlong)puVar19[2] <= (longlong)puVar18[2]);
                puVar13 = puVar34 + -8;
                do {
                  puVar30 = puVar34;
                  puVar23 = puVar13;
                  puVar34 = puVar30 + -4;
                  if (puVar34 <= puVar19) break;
                  puVar13 = puVar23 + -4;
                } while ((longlong)puVar30[-2] <= (longlong)puVar19[2]);
                if (puVar34 < puVar18) goto LAB_143f250b6;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                uVar8 = *puVar34;
                uVar9 = puVar30[-3];
                uVar10 = puVar30[-1];
                puVar18[2] = puVar30[-2];
                puVar18[3] = uVar10;
                *puVar18 = uVar8;
                puVar18[1] = uVar9;
                puVar30[-2] = uVar6;
                puVar30[-1] = uVar7;
                *puVar34 = uVar4;
                puVar30[-3] = uVar5;
              } while( true );
            }
            for (; puVar36 = puVar19, puVar25 = puVar19, puVar19 < puVar28; puVar28 = puVar28 + -4)
            {
              while (puVar34 = puVar36, puVar25 = puVar25 + 4, puVar25 <= puVar28) {
                puVar36 = puVar25;
                if ((longlong)puVar34[2] <= (longlong)puVar25[2]) {
                  puVar36 = puVar34;
                }
              }
              local_98 = (void *)*puVar34;
              uStack_90 = puVar34[1];
              auVar11 = *(undefined1 (*) [16])(puVar34 + 2);
              local_88 = *(undefined8 *)*(undefined1 (*) [16])(puVar34 + 2);
              uStack_80 = puVar34[3];
              pvVar1 = local_98;
              uVar21 = uStack_90;
              uVar4 = *puVar28;
              uVar5 = puVar28[1];
              uVar6 = puVar28[3];
              puVar34[2] = puVar28[2];
              puVar34[3] = uVar6;
              *puVar34 = uVar4;
              puVar34[1] = uVar5;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
              *(undefined1 (*) [16])(puVar28 + 2) = auVar11;
              *(undefined4 *)puVar28 = (undefined4)local_98;
              *(undefined4 *)((longlong)puVar28 + 4) = local_98._4_4_;
              *(int *)(puVar28 + 1) = (int)uStack_90;
              *(undefined4 *)((longlong)puVar28 + 0xc) = uStack_90._4_4_;
              local_98 = pvVar1;
              uStack_90 = uVar21;
            }
            goto LAB_143f2546a;
          }
LAB_143f25182:
          if (uVar15 != 0) {
            iVar14 = (iVar40 - (iVar40 + -1 >> 0x1f)) + -1 >> 1;
            iVar40 = iVar14;
joined_r0x000143f251a5:
            do {
              iVar32 = iVar14 * 2 + 1;
              if (iVar32 < (int)uVar15) {
                iVar35 = iVar14 * 2 + 2;
                if ((iVar35 < (int)uVar15) &&
                   ((longlong)puVar19[(longlong)iVar35 * 4 + 2] <=
                    (longlong)puVar19[(longlong)iVar32 * 4 + 2])) {
                  iVar32 = iVar35;
                }
                if ((longlong)puVar19[(longlong)iVar32 * 4 + 2] <
                    (longlong)puVar19[(longlong)iVar14 * 4 + 2]) {
                  puVar25 = puVar19 + (longlong)iVar14 * 4;
                  puVar28 = puVar19 + (longlong)iVar32 * 4;
                  local_98 = (void *)*puVar25;
                  uStack_90 = puVar25[1];
                  auVar11 = *(undefined1 (*) [16])(puVar25 + 2);
                  local_88 = *(undefined8 *)*(undefined1 (*) [16])(puVar25 + 2);
                  uStack_80 = puVar25[3];
                  pvVar1 = local_98;
                  uVar21 = uStack_90;
                  uVar4 = *puVar28;
                  uVar5 = puVar28[1];
                  uVar6 = puVar28[3];
                  puVar25[2] = puVar28[2];
                  puVar25[3] = uVar6;
                  *puVar25 = uVar4;
                  puVar25[1] = uVar5;
                  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                  uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
                  *(undefined1 (*) [16])(puVar28 + 2) = auVar11;
                  *(undefined4 *)puVar28 = (undefined4)local_98;
                  *(undefined4 *)((longlong)puVar28 + 4) = local_98._4_4_;
                  *(int *)(puVar28 + 1) = (int)uStack_90;
                  *(undefined4 *)((longlong)puVar28 + 0xc) = uStack_90._4_4_;
                  iVar14 = iVar32;
                  local_98 = pvVar1;
                  uStack_90 = uVar21;
                  goto joined_r0x000143f251a5;
                }
              }
              bVar42 = iVar40 != 0;
              iVar14 = iVar40 + -1;
              iVar40 = iVar14;
            } while (bVar42);
            if (1 < (int)uVar15) {
              uVar20 = (ulonglong)uVar15 - 1;
              local_98 = (void *)*puVar19;
              uStack_90 = puVar19[1];
              auVar11 = *(undefined1 (*) [16])(puVar19 + 2);
              local_88 = *(undefined8 *)*(undefined1 (*) [16])(puVar19 + 2);
              uStack_80 = puVar19[3];
              pvVar1 = local_98;
              uVar21 = uStack_90;
              uVar4 = puVar19[uVar20 * 4];
              uVar5 = (puVar19 + uVar20 * 4)[1];
              uVar6 = (puVar19 + uVar20 * 4 + 2)[1];
              puVar19[2] = puVar19[uVar20 * 4 + 2];
              puVar19[3] = uVar6;
              *puVar19 = uVar4;
              puVar19[1] = uVar5;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
              *(undefined1 (*) [16])(puVar19 + uVar20 * 4 + 2) = auVar11;
              puVar28 = puVar19 + uVar20 * 4;
              *(undefined4 *)puVar28 = (undefined4)local_98;
              *(undefined4 *)((longlong)puVar28 + 4) = local_98._4_4_;
              *(int *)(puVar28 + 1) = (int)uStack_90;
              *(undefined4 *)((longlong)puVar28 + 0xc) = uStack_90._4_4_;
              local_98 = pvVar1;
              uStack_90 = uVar21;
              if (uVar15 != 2) {
                do {
                  iVar14 = 0;
                  iVar32 = 1;
                  iVar40 = 0;
                  do {
                    iVar14 = iVar14 + 2;
                    iVar35 = iVar32;
                    if (((longlong)iVar14 < (longlong)uVar20) &&
                       ((longlong)puVar19[(longlong)iVar14 * 4 + 2] <=
                        (longlong)puVar19[(longlong)iVar32 * 4 + 2])) {
                      iVar35 = iVar14;
                    }
                    if ((longlong)puVar19[(longlong)iVar40 * 4 + 2] <=
                        (longlong)puVar19[(longlong)iVar35 * 4 + 2]) break;
                    puVar25 = puVar19 + (longlong)iVar40 * 4;
                    puVar28 = puVar19 + (longlong)iVar35 * 4;
                    uVar4 = *puVar25;
                    uVar5 = puVar25[1];
                    uVar6 = puVar25[2];
                    uVar7 = puVar25[3];
                    uVar8 = *puVar28;
                    uVar9 = puVar28[1];
                    uVar10 = puVar28[3];
                    puVar25[2] = puVar28[2];
                    puVar25[3] = uVar10;
                    *puVar25 = uVar8;
                    puVar25[1] = uVar9;
                    puVar28[2] = uVar6;
                    puVar28[3] = uVar7;
                    *puVar28 = uVar4;
                    puVar28[1] = uVar5;
                    iVar14 = iVar35 * 2;
                    iVar32 = iVar35 * 2 + 1;
                    iVar40 = iVar35;
                  } while ((longlong)iVar32 < (longlong)uVar20);
                  uVar21 = uVar20 - 1;
                  local_98 = (void *)*puVar19;
                  uStack_90 = puVar19[1];
                  auVar11 = *(undefined1 (*) [16])(puVar19 + 2);
                  local_88 = *(undefined8 *)*(undefined1 (*) [16])(puVar19 + 2);
                  uStack_80 = puVar19[3];
                  pvVar1 = local_98;
                  uVar12 = uStack_90;
                  uVar4 = puVar19[uVar21 * 4];
                  uVar5 = (puVar19 + uVar21 * 4)[1];
                  uVar6 = (puVar19 + uVar21 * 4 + 2)[1];
                  puVar19[2] = puVar19[uVar21 * 4 + 2];
                  puVar19[3] = uVar6;
                  *puVar19 = uVar4;
                  puVar19[1] = uVar5;
                  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                  uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
                  *(undefined1 (*) [16])(puVar19 + uVar21 * 4 + 2) = auVar11;
                  puVar28 = puVar19 + uVar21 * 4;
                  *(undefined4 *)puVar28 = (undefined4)local_98;
                  *(undefined4 *)((longlong)puVar28 + 4) = local_98._4_4_;
                  *(int *)(puVar28 + 1) = (int)uStack_90;
                  *(undefined4 *)((longlong)puVar28 + 0xc) = uStack_90._4_4_;
                  bVar42 = 2 < uVar20;
                  uVar20 = uVar21;
                  local_98 = pvVar1;
                  uStack_90 = uVar12;
                } while (bVar42);
              }
            }
          }
LAB_143f2546a:
          ppvVar17 = ppvVar17 + -3;
        } while (&local_398 <= ppvVar17);
        uVar22 = (uint)uStack_3a0;
      }
      param_2 = local_3b8;
      *local_3b8 = 0;
      local_3b8[1] = 0;
      FUN_1408be27e(local_3b8,uVar22);
      uVar21 = uStack_3a0 & 0xffffffff;
      pcVar26 = rand_exref;
      lVar24 = local_3c0;
      iVar14 = (uint)uStack_3a0;
      while (0 < iVar14) {
        uVar15 = (*pcVar26)();
        pvVar1 = local_3a8;
        uVar21 = (ulonglong)(int)(uint)uStack_3a0;
        if ((longlong)uVar21 < 1) break;
        fVar43 = ((float)(uVar15 & 0x7fff) / 32767.0) * (float)lVar24 + 0.0;
        iVar14 = 1;
        lVar33 = 0;
        do {
          fVar43 = fVar43 - (float)*(longlong *)((longlong)local_3a8 + lVar33 + 0x18);
          if (fVar43 <= 0.0) {
            iVar40 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar40 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar40 + 1U) {
              FUN_1447a1bd6(param_2,iVar40);
            }
            lVar27 = *param_2;
            lVar41 = (longlong)iVar40 * 0x10;
            puVar28 = (undefined8 *)(lVar27 + lVar41);
            *(undefined8 *)(lVar27 + lVar41) = 0;
            iVar40 = *(int *)((longlong)pvVar1 + lVar33 + 8);
            pvVar2 = *(void **)((longlong)pvVar1 + lVar33);
            *(int *)(lVar27 + 8 + lVar41) = iVar40;
            if ((longlong)iVar40 == 0) {
              *(undefined4 *)((longlong)puVar28 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar28,iVar40,0);
              memcpy((void *)*puVar28,pvVar2,(longlong)iVar40 * 2);
            }
            pvVar2 = local_3a8;
            param_2 = local_3b8;
            pcVar26 = rand_exref;
            lVar24 = lVar24 - *(longlong *)((longlong)pvVar1 + lVar33 + 0x18);
            if (*(longlong *)((longlong)local_3a8 + lVar33) != 0) {
              FUN_1400020a8();
            }
            if ((uint)uStack_3a0 - iVar14 != 0) {
              memmove((void *)((longlong)pvVar2 + lVar33),(void *)((longlong)pvVar2 + lVar33 + 0x20)
                      ,(longlong)(int)((uint)uStack_3a0 - iVar14) << 5);
            }
            uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(uint)uStack_3a0 + -1);
            FUN_143f2ecb6(&local_3a8);
            uVar21 = uStack_3a0 & 0xffffffff;
            break;
          }
          lVar33 = lVar33 + 0x20;
          iVar14 = iVar14 + 1;
        } while (uVar21 << 5 != lVar33);
        iVar14 = (int)uVar21;
      }
      goto LAB_143f24e3b;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar21 = 0;
LAB_143f24e3b:
  FUN_143f2eb92(local_3a8,uVar21);
  if (local_3a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143f250b6:
  local_98 = (void *)*puVar19;
  uStack_90 = puVar19[1];
  auVar11 = *(undefined1 (*) [16])(puVar19 + 2);
  local_88 = *(undefined8 *)*(undefined1 (*) [16])(puVar19 + 2);
  uStack_80 = puVar19[3];
  pvVar1 = local_98;
  uVar21 = uStack_90;
  uVar4 = *puVar34;
  uVar5 = puVar30[-3];
  uVar6 = puVar30[-1];
  puVar19[2] = puVar30[-2];
  puVar19[3] = uVar6;
  *puVar19 = uVar4;
  puVar19[1] = uVar5;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
  *(undefined1 (*) [16])(puVar30 + -2) = auVar11;
  *(undefined4 *)puVar34 = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar30 + -0x1c) = local_98._4_4_;
  *(int *)(puVar30 + -3) = (int)uStack_90;
  *(undefined4 *)((longlong)puVar30 + -0x14) = uStack_90._4_4_;
  iVar14 = iVar14 + -1;
  puVar30 = puVar30 + -8;
  local_98 = pvVar1;
  uStack_90 = uVar21;
  if ((longlong)puVar23 - (longlong)puVar25 < (longlong)puVar36 - (longlong)puVar29) {
    if (puVar18 < puVar28) {
      *ppvVar17 = puVar18;
      ppvVar17[1] = puVar28;
      *(int *)(ppvVar17 + 2) = iVar14;
      ppvVar17 = ppvVar17 + 3;
    }
    puVar29 = puVar19;
    if (puVar34 <= puVar19 + 4) goto LAB_143f2546a;
  }
  else {
    if (puVar19 + 4 < puVar34) {
      *ppvVar17 = puVar19;
      ppvVar17[1] = puVar30;
      *(int *)(ppvVar17 + 2) = iVar14;
      ppvVar17 = ppvVar17 + 3;
    }
    puVar19 = puVar18;
    puVar23 = puVar28;
    puVar30 = puVar28;
    if (puVar28 <= puVar18) goto LAB_143f2546a;
  }
  iVar40 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar29) >> 5);
  uVar15 = iVar40 + 1;
  puVar25 = puVar29;
  puVar28 = puVar30;
  puVar36 = puVar23;
  if (iVar14 == 0) goto LAB_143f25182;
  goto LAB_143f24fbd;
}



// FUNCTION 143f25604 FUN_143f25604 body=324 status=ok
// SIG undefined FUN_143f25604(void)

longlong * FUN_143f25604(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = param_3[1];
  local_70 = param_2;
  local_60 = param_1;
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_3;
    lVar11 = 0;
    do {
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar11) != 0) {
        puVar10 = *(undefined2 **)(lVar2 + lVar11);
      }
      FUN_1446f470e(&local_58,puVar10,1);
      uVar6 = local_58;
      local_50 = local_58;
      lVar8 = FUN_14050aea0(&local_50);
      if (lVar8 != 0) {
        uVar9 = FUN_148a783be(local_60);
        plVar3 = *(longlong **)(lVar8 + 0x38);
        if (((plVar3 == (longlong *)0x0) ||
            (local_68 = uVar9, cVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar9), uVar9 = local_68
            , cVar7 != '\0')) && (cVar7 = FUN_140db3cd0(lVar8,uVar9), cVar7 != '\0')) {
          iVar1 = (int)local_70[1];
          lVar8 = (longlong)iVar1;
          *(uint *)(local_70 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)local_70 + 0xc) < iVar1 + 1U) {
            FUN_146581d16(local_70,iVar1);
          }
          lVar4 = *local_70;
          *(undefined8 *)(lVar4 + lVar8 * 0x18) = uVar6;
          *(undefined4 *)(lVar4 + 8 + lVar8 * 0x18) = 0x6000;
          *(undefined8 *)(lVar4 + 0x10 + lVar8 * 0x18) = 0;
        }
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_70;
}



// FUNCTION 143f2574a FUN_143f2574a body=299 status=ok
// SIG undefined FUN_143f2574a(void)

void FUN_143f2574a(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14cb9719c = *(undefined4 *)(param_3 + 0x18);
  uVar4 = 0;
  if ((*(int *)(param_1 + 0xa8) == 0) || (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0))
  goto LAB_143f25797;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
  if (cVar1 == '\0') goto LAB_143f25797;
  local_50 = FUN_143f25e4c;
  local_48 = 0;
  FUN_148a78f10(&local_40,param_1);
  if (*(int *)(param_1 + 0xa8) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0xa0);
  }
  iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3,&local_40);
  if (local_38 == 0) {
LAB_143f25848:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_143f25848;
  }
  uVar4 = 0;
  if (iVar2 == 1) {
    FUN_148a79092(param_1);
    uVar4 = 4;
  }
LAB_143f25797:
  FUN_143f234fe(param_1,uVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f25876 FUN_143f25876 body=1449 status=ok
// SIG undefined FUN_143f25876(void)

void FUN_143f25876(longlong param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *_Src;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong local_218;
  uint *local_210;
  longlong local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  ulonglong uStack_1f0;
  void *local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [312];
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    plVar9 = *(longlong **)(param_1 + 0x108);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x108) = 0;
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
  if (*(int *)(param_1 + 0xd8) == 4) goto LAB_143f258d0;
  if (*(char *)(param_1 + 0x140) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_248);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) goto LAB_143f258d0;
  puVar11 = (uint *)(param_1 + 0x118);
  cVar4 = FUN_146076bce(puVar11,0);
  if (cVar4 != '\0') {
    FUN_1461b9706(puVar11);
    FUN_143f22faa(param_1,0x14);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_248);
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
LAB_143f25e44:
    lVar13 = 0;
  }
  else {
    uVar5 = *puVar11;
    lVar13 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_1 + 0x11c) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143f25e44;
      lVar13 = *plVar9;
    }
  }
  local_1e0 = (void *)0x0;
  local_1d8 = *(int *)(param_1 + 0x128);
  lVar14 = (longlong)local_1d8;
  _Src = *(void **)(param_1 + 0x120);
  if (lVar14 == 0) {
    local_1d4 = 0;
  }
  else {
    FUN_1446dd670(&local_1e0,local_1d8,0);
    memcpy(local_1e0,_Src,lVar14 * 2);
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  if (((*(int *)(param_1 + 0x98) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x98) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x90);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_1e0,&local_1f8);
  }
  local_208 = 0;
  uStack_200 = 0;
  iVar8 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar8 == 0) {
LAB_143f25bd5:
    plVar7 = (longlong *)FUN_14001cc68(0x1f0,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b4e8cf0;
    plVar9 = plVar7 + 2;
    FUN_148a7975a(plVar9,param_1);
    local_1d0 = plVar9;
    local_1c8 = plVar7;
    FUN_148a845a8(&local_1d0,plVar9);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0x10;
      plVar9 = *(longlong **)(param_1 + 0x108);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x108) = 0;
LAB_143f25d39:
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
joined_r0x000143f25c85:
          if (iVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x100) = plVar9;
      plVar9 = *(longlong **)(param_1 + 0x108);
      if (plVar7 == plVar9) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
          plVar9 = plVar7;
          goto joined_r0x000143f25c85;
        }
      }
      else {
        *(longlong **)(param_1 + 0x108) = plVar7;
        if (plVar9 != (longlong *)0x0) goto LAB_143f25d39;
      }
    }
    plVar9 = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1c8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN_1401861f4(param_1 + 0x48,0);
    }
    FUN_148a7815e(param_1);
    DAT_14cb971a0 = DAT_14cb971a0 + 1;
    FUN_143f24648(*(undefined8 *)(param_1 + 0x100),lVar13,&local_1e0,&local_208);
    FUN_1461b9706(puVar11);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x130);
    lVar10 = 0;
    local_218 = lVar13;
    local_210 = puVar11;
    do {
      uVar2 = *(undefined4 *)(lVar14 + lVar10);
      uVar6 = FUN_141546c72();
      FUN_148a99c30(uVar6,&local_1d0,uVar2);
      uVar3 = uStack_200;
      if (local_68 == 1) {
        lVar13 = (longlong)(int)uStack_200;
        uVar5 = (int)uStack_200 + 1;
        uStack_200 = CONCAT44(uStack_200._4_4_,uVar5);
        if (uStack_200._4_4_ < uVar5) {
          FUN_14581ec00(&local_208,uVar3 & 0xffffffff);
        }
        FUN_1411769de(lVar13 * 0x168 + local_208,&local_1d0);
      }
      if ((local_68 & 1) != 0) {
        FUN_141175be2(local_1a0);
        FUN_141175b88(local_1b0,local_1a8);
        if (local_1b0 != 0) {
          FUN_1400020a8();
        }
        if (local_1c0 != 0) {
          FUN_1400020a8();
        }
        FUN_141175b4a(local_1d0,(ulonglong)local_1c8 & 0xffffffff);
        if (local_1d0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar13 = local_218;
      lVar10 = lVar10 + 4;
    } while ((longlong)iVar8 * 4 != lVar10);
    puVar11 = local_210;
    if ((longlong)(int)uStack_200 == 0) goto LAB_143f25bd5;
    lVar14 = 0;
    iVar8 = 0;
    do {
      iVar12 = 0;
      if ((*(char *)(local_208 + 0x100 + lVar14) == '\x01') &&
         (0 < *(int *)(local_208 + 0xe8 + lVar14))) {
        iVar12 = **(int **)(local_208 + 0xe0 + lVar14);
      }
      if (iVar12 < (int)uStack_1f0) goto LAB_143f25e23;
      iVar8 = iVar8 + (uint)(iVar12 == (int)uStack_1f0);
      lVar14 = lVar14 + 0x168;
    } while ((longlong)(int)uStack_200 * 0x168 - lVar14 != 0);
    if (iVar8 == 0) goto LAB_143f25bd5;
    if (iVar8 == (int)uStack_200) {
      FUN_1461b9706(local_210);
      local_228 = &local_208;
      FUN_143f23f30(param_1,lVar13 + 0x28,&local_1f8,&local_1e0);
    }
    else {
LAB_143f25e23:
      FUN_1461b9706(local_210);
      FUN_143f22faa(param_1,5);
      FUN_143f234fe(param_1,0);
    }
  }
  FUN_141175adb(local_208,uStack_200 & 0xffffffff);
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  FUN_14127b1cd(local_1f8,uStack_1f0 & 0xffffffff);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if (local_1e0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f258d0:
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f25e4c FUN_143f25e4c body=43 status=ok
// SIG undefined FUN_143f25e4c(void)

void FUN_143f25e4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xd8) != 4) {
    return;
  }
  FUN_148a79196();
  FUN_143f234fe(param_1,0);
  return;
}



// FUNCTION 143f25e78 FUN_143f25e78 body=73 status=ok
// SIG undefined FUN_143f25e78(void)

undefined8 FUN_143f25e78(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_143f22faa(param_1,0x15);
  FUN_143f234fe(param_1,0);
  return 0;
}



// FUNCTION 143f25ec2 FUN_143f25ec2 body=607 status=ok
// SIG undefined FUN_143f25ec2(void)

void FUN_143f25ec2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  uint local_60;
  int local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((((*(char *)(param_1 + 0x140) == '\0') && (*(int *)(param_1 + 0xd8) != 4)) &&
        (lVar2 = *(longlong *)(param_1 + 0x100), lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0xfc) != 0 && (uVar1 = *(uint *)(lVar2 + 0xf8), -1 < (int)uVar1)))) &&
      (((int)uVar1 < DAT_14c9647dc &&
       ((plVar7 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar2 + 0xfc))))))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar2 = *plVar7, lVar2 != 0)))) {
    local_5c = 0;
    local_60 = *(uint *)(lVar2 + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_60 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar5;
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x100);
    local_58 = (void *)0x0;
    local_50 = *(int *)(lVar8 + 0x108);
    lVar6 = (longlong)local_50;
    pvVar3 = *(void **)(lVar8 + 0x100);
    local_5c = iVar4;
    if (lVar6 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar3,lVar6 * 2);
      lVar8 = *(longlong *)(param_1 + 0x100);
    }
    local_48 = (void *)0x0;
    local_40 = *(int *)(lVar8 + 0x130);
    lVar6 = (longlong)local_40;
    pvVar3 = *(void **)(lVar8 + 0x128);
    if (lVar6 == 0) {
      local_3c = 0;
    }
    else {
      FUN_144a06ca8(&local_48,local_40,0);
      memcpy(local_48,pvVar3,lVar6 << 2);
    }
    if (&local_60 != (uint *)(param_1 + 0x118)) {
      FUN_148a85db8((uint *)(param_1 + 0x118),&local_60);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_143f26122(*(undefined8 *)(param_1 + 0x100),lVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f26122 FUN_143f26122 body=257 status=ok
// SIG undefined FUN_143f26122(void)

void FUN_143f26122(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
LAB_143f26169:
    if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_2 + 0x2b8) != 0) {
      if (iVar1 != 5) {
        if (iVar1 == 1) {
          *(undefined1 *)(param_1 + 0x1d8) = 1;
        }
        else {
          FUN_148a79826(param_1,*(undefined4 *)(param_2 + 0x38));
          if (((*(int *)(param_1 + 0x78) != 5) &&
              (*(undefined4 *)(param_1 + 0x78) = 5, *(int *)(param_1 + 0x18) != 0)) &&
             (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x60))(plVar2,5);
          }
          local_40 = 0;
          uStack_38 = 0;
          local_48[0] = *(undefined4 *)(param_1 + 0x120);
          FUN_148a7a480(local_58,param_1,FUN_143f26f18,param_2 + 0x38);
          FUN_148a613b4(param_2,local_48,local_58);
        }
      }
      goto LAB_143f26169;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x38);
  }
  FUN_148a79ae6(param_1,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 143f26238 FUN_143f26238 body=500 status=ok
// SIG undefined FUN_143f26238(void)

void FUN_143f26238(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e1aa6e(param_2,&local_40);
  if ((local_40 != (undefined8 *)0x0) && (*(int *)((longlong)local_40 + 0x14) == 0)) {
    plVar4 = (longlong *)FUN_140773fe2();
    local_50 = *local_40;
    plVar2 = (longlong *)local_40[1];
    if (plVar2 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      lVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_48 = plVar2;
      lVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (lVar5 == 0) {
      FUN_146048f14(param_2,&local_70);
      pvVar3 = local_70;
      local_60 = (void *)0x0;
      local_58 = local_68;
      if ((longlong)local_68 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_68,0);
        memcpy(local_60,pvVar3,(longlong)local_68 * 2);
      }
      lVar5 = 0;
    }
    else {
      FUN_146048f14(param_2,&local_70);
      pvVar3 = local_70;
      local_60 = (void *)0x0;
      local_58 = local_68;
      if ((longlong)local_68 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_68,0);
        memcpy(local_60,pvVar3,(longlong)local_68 * 2);
      }
    }
    FUN_143f2642e(param_1,lVar5,&local_60);
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2642e FUN_143f2642e body=630 status=ok
// SIG undefined FUN_143f2642e(void)

void FUN_143f2642e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0xd8) == 0) || (*(int *)(param_1 + 0xd8) == 5)) goto LAB_143f26459;
  if (*(char *)(param_1 + 0x140) == '\x01') {
    FUN_1461b9706(param_1 + 0x118);
  }
  lVar8 = *(longlong *)(param_1 + 0xf0);
  if (lVar8 != 0) {
    iVar5 = *(int *)(lVar8 + 0x18);
    if (iVar5 == (int)param_3[1]) {
      if (1 < iVar5) {
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(*(longlong *)(lVar8 + 0x10) + lVar7);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)(*param_3 + lVar7);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_143f265e8;
LAB_143f264e0:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar13 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar13]) goto LAB_143f264e0;
        }
        if (uVar9 != uVar11) goto LAB_143f26459;
      }
    }
    else if ((int)param_3[1] + iVar5 != 1) goto LAB_143f26459;
LAB_143f265e8:
    *(undefined8 *)(param_1 + 0xf0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xf8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  lVar8 = *(longlong *)(param_1 + 0x100);
  if (lVar8 == 0) goto LAB_143f26459;
  local_48 = (void *)0x0;
  local_40 = *(int *)(lVar8 + 0x108);
  lVar7 = (longlong)local_40;
  _Src = *(void **)(lVar8 + 0x100);
  if (lVar7 == 0) {
    local_3c = 0;
    iVar5 = (int)param_3[1];
    if (iVar5 != 0) {
      iVar6 = 0;
      goto LAB_143f2665e;
    }
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar7 * 2);
    iVar5 = (int)param_3[1];
    iVar6 = local_40;
    if (local_40 == iVar5) {
      if (local_40 < 2) {
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143f2669b;
      }
      lVar8 = 0;
      while( true ) {
        uVar9 = *(ushort *)((longlong)local_48 + lVar8);
        uVar4 = (uint)uVar9;
        uVar11 = *(ushort *)(*param_3 + lVar8);
        uVar12 = (uint)uVar11;
        if (uVar9 != uVar11) {
          if ((uVar11 | uVar9) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar9];
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143f265b1;
          }
          iVar5 = uVar4 - uVar12;
          goto LAB_143f26684;
        }
        if (uVar9 == 0) break;
LAB_143f265b1:
        lVar8 = lVar8 + 2;
      }
      iVar5 = 0;
LAB_143f26684:
      bVar14 = iVar5 == 0;
    }
    else {
LAB_143f2665e:
      bVar14 = iVar5 + iVar6 == 1;
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar14) goto LAB_143f26459;
  }
LAB_143f2669b:
  FUN_143f234fe(param_1,5);
  FUN_143f26122(*(undefined8 *)(param_1 + 0x100),param_2);
LAB_143f26459:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f266bc FUN_143f266bc body=429 status=ok
// SIG undefined FUN_143f266bc(void)

longlong * FUN_143f266bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0xc0) == 0) {
    lVar7 = FUN_148a78032();
    iVar9 = *(int *)(lVar7 + 0x20);
    lVar8 = FUN_145d6e79a();
    if (0 < *(int *)(lVar8 + 0x28)) {
      lVar8 = FUN_145d6e79a();
      iVar2 = *(int *)(*(longlong *)(lVar8 + 0x20) + 0x10);
      iVar3 = *(int *)(lVar7 + 0x28);
      bVar6 = iVar3 < iVar9;
      if (iVar9 < iVar2 && !bVar6) {
        do {
          iVar9 = iVar9 + *(int *)(lVar7 + 0x24);
          bVar6 = iVar3 < iVar9;
          if (iVar2 <= iVar9) break;
        } while (iVar9 <= iVar3);
      }
      lVar8 = FUN_145d6e79a();
      lVar7 = *(longlong *)(lVar8 + 0x20);
      iVar2 = *(int *)(lVar8 + 0x28);
      if (bVar6) {
        if (iVar2 != 0) {
          lVar8 = 0;
          do {
            iVar9 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
              FUN_1447a1bd6(param_2,iVar9);
            }
            lVar4 = *param_2;
            lVar10 = (longlong)iVar9 * 0x10;
            puVar1 = (undefined8 *)(lVar4 + lVar10);
            *(undefined8 *)(lVar4 + lVar10) = 0;
            iVar9 = *(int *)(lVar7 + 8 + lVar8);
            pvVar5 = *(void **)(lVar7 + lVar8);
            *(int *)(lVar4 + 8 + lVar10) = iVar9;
            if ((longlong)iVar9 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar9,0);
              memcpy((void *)*puVar1,pvVar5,(longlong)iVar9 * 2);
            }
            lVar8 = lVar8 + 0x28;
          } while ((longlong)iVar2 * 0x28 != lVar8);
        }
      }
      else if (iVar2 != 0) {
        lVar8 = 0;
        do {
          if (*(int *)(lVar7 + 0x10 + lVar8) <= iVar9) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_1447a1bd6(param_2,iVar3);
            }
            lVar4 = *param_2;
            lVar10 = (longlong)iVar3 * 0x10;
            puVar1 = (undefined8 *)(lVar4 + lVar10);
            *(undefined8 *)(lVar4 + lVar10) = 0;
            iVar3 = *(int *)(lVar7 + 8 + lVar8);
            pvVar5 = *(void **)(lVar7 + lVar8);
            *(int *)(lVar4 + 8 + lVar10) = iVar3;
            if ((longlong)iVar3 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar3,0);
              memcpy((void *)*puVar1,pvVar5,(longlong)iVar3 * 2);
            }
          }
          lVar8 = lVar8 + 0x28;
        } while ((longlong)iVar2 * 0x28 != lVar8);
      }
    }
  }
  return param_2;
}



// FUNCTION 143f2686a FUN_143f2686a body=199 status=ok
// SIG undefined FUN_143f2686a(void)

float FUN_143f2686a(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143f24b18(param_1,&local_40,param_2);
  if (local_38 < 1) {
    fVar1 = 1.0;
  }
  else {
    FUN_143f25604(param_1,&local_50,&local_40);
    if (local_48 < 1) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)local_48 / (float)local_38;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f26954 FUN_143f26954 body=307 status=ok
// SIG undefined FUN_143f26954(void)

void FUN_143f26954(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_148a79ae6(param_1,param_4);
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x120) = param_3;
    if (((*(int *)(param_1 + 0x78) != 2) &&
        (*(undefined4 *)(param_1 + 0x78) = 2, *(int *)(param_1 + 0x18) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,2);
    }
    if (*(char *)(param_1 + 0x1d8) != '\x01') {
      return;
    }
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      uVar1 = *(uint *)(param_1 + 0xf8);
      uVar4 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143f26a16;
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 != (undefined8 *)0x0) &&
         ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0xfc) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
        uVar4 = *puVar3;
        goto LAB_143f26a16;
      }
    }
    uVar4 = 0;
LAB_143f26a16:
    FUN_143f26122(param_1,uVar4);
    return;
  case 1:
    uVar4 = 7;
    break;
  case 2:
    uVar4 = 8;
    break;
  case 3:
    uVar4 = 9;
    break;
  case 4:
    uVar4 = 10;
    break;
  case 5:
    uVar4 = 0xb;
    break;
  case 6:
    uVar4 = 5;
    break;
  case 7:
    uVar4 = 0xc;
    break;
  case 8:
    uVar4 = 0xd;
    break;
  default:
    uVar4 = 0xe;
  }
  FUN_143f22faa(*(undefined8 *)(param_1 + 0x70),uVar4);
  FUN_143f26ae2(param_1);
  return;
}



// FUNCTION 143f26a98 FUN_143f26a98 body=74 status=ok
// SIG undefined FUN_143f26a98(void)

void FUN_143f26a98(longlong param_1,byte param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x78) == 2)) {
    uVar1 = 0xe;
    if (param_2 < 9) {
      uVar1 = *(undefined4 *)(&DAT_14b4edf84 + (longlong)(char)param_2 * 4);
    }
    FUN_143f22faa(*(undefined8 *)(param_1 + 0x70),uVar1);
    FUN_143f26ae2(param_1);
    return;
  }
  return;
}



// FUNCTION 143f26ae2 FUN_143f26ae2 body=190 status=ok
// SIG undefined FUN_143f26ae2(void)

void FUN_143f26ae2(longlong param_1)

{
  longlong *plVar1;
  
  FUN_143f26ba0();
  FUN_148a79fd8(param_1);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_14481578e(param_1 + 0x128,0);
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_148a865c8(param_1 + 0x138);
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if (((*(int *)(param_1 + 0x78) != 0) &&
      (*(undefined4 *)(param_1 + 0x78) = 0, *(int *)(param_1 + 0x18) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f26b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 143f26ba0 FUN_143f26ba0 body=275 status=ok
// SIG undefined FUN_143f26ba0(void)

void FUN_143f26ba0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1b0) != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 8))) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    if (*(int *)(param_1 + 0x1a4) != 0) {
      FUN_14481578e(param_1 + 0x198,0);
    }
    *(undefined4 *)(param_1 + 400) = 0;
    if (((*(int *)(param_1 + 0x194) != 1) &&
        (*(undefined4 *)(param_1 + 0x194) = 1, *(int *)(param_1 + 0x28) != 0)) &&
       (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))();
    }
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x1b0);
    local_20 = *(longlong *)(param_1 + 0x1b8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
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



// FUNCTION 143f26cc4 FUN_143f26cc4 body=147 status=ok
// SIG undefined FUN_143f26cc4(void)

void FUN_143f26cc4(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0x78) & 0xfffffffe) == 2) && (*(char *)(param_1 + 0x188) == '\x01')) {
    switch(param_2) {
    case 0:
      goto switchD_143f26cf6_caseD_0;
    case 1:
      uVar1 = 7;
      break;
    case 2:
      uVar1 = 8;
      break;
    case 3:
      uVar1 = 9;
      break;
    case 4:
      FUN_148a7a366(param_1);
      return;
    case 5:
      uVar1 = 0xb;
      break;
    case 6:
      uVar1 = 5;
      break;
    case 7:
      uVar1 = 0xc;
      break;
    case 8:
      uVar1 = 0xd;
      break;
    default:
      uVar1 = 0xe;
    }
    FUN_143f22faa(*(undefined8 *)(param_1 + 0x70),uVar1);
    FUN_143f26ae2(param_1);
    return;
  }
switchD_143f26cf6_caseD_0:
  return;
}



// FUNCTION 143f26d58 FUN_143f26d58 body=447 status=ok
// SIG undefined FUN_143f26d58(void)

ulonglong FUN_143f26d58(longlong param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (0.0 < *(float *)(param_1 + 400)) {
    param_2 = *(float *)(param_1 + 400) - param_2;
    *(float *)(param_1 + 400) = param_2;
    iVar7 = -((int)ROUND(-0.5 - (param_2 + param_2)) >> 1);
    if (((*(int *)(param_1 + 0x194) != iVar7) &&
        (*(int *)(param_1 + 0x194) = iVar7, *(int *)(param_1 + 0x28) != 0)) &&
       (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))();
      param_2 = *(float *)(param_1 + 400);
    }
    if (param_2 <= 0.0) {
      *(undefined4 *)(param_1 + 400) = 0;
      if (((*(int *)(param_1 + 0x194) != 1) &&
          (*(undefined4 *)(param_1 + 0x194) = 1, *(int *)(param_1 + 0x28) != 0)) &&
         (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))();
      }
      iVar7 = *(int *)(param_1 + 0x1a0);
      if ((longlong)iVar7 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x198);
        lVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar3 + lVar9);
          plVar4 = (longlong *)FUN_140773fe2();
          uVar5 = FUN_148a783be(*(undefined8 *)(param_1 + 0x70));
          lVar6 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar2,uVar5);
          if (lVar6 != 0) {
            FUN_148a79e62(local_58,param_1,FUN_143f26cc4);
            FUN_148a6173a(lVar6,*(undefined4 *)(param_1 + 0x138),local_58);
          }
          lVar9 = lVar9 + 4;
        } while ((longlong)iVar7 * 4 != lVar9);
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      if (*(int *)(param_1 + 0x1a4) != 0) {
        FUN_14481578e(param_1 + 0x198,0);
      }
      plVar4 = *(longlong **)(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      uVar8 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143f26f18 FUN_143f26f18 body=29 status=ok
// SIG undefined FUN_143f26f18(void)

void FUN_143f26f18(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_148a79ae6(param_1,param_3);
  FUN_143f26ae2(param_1);
  return;
}



// FUNCTION 143f26f46 FUN_143f26f46 body=48 status=ok
// SIG undefined FUN_143f26f46(void)

void FUN_143f26f46(void)

{
  if (DAT_14cb97188 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb97178 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f26f76 FUN_143f26f76 body=48 status=ok
// SIG undefined FUN_143f26f76(void)

void FUN_143f26f76(void)

{
  if (DAT_14cb971b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb971a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f26fa6 FUN_143f26fa6 body=49 status=ok
// SIG undefined FUN_143f26fa6(void)

void FUN_143f26fa6(void)

{
  FUN_148a871e6(DAT_14cb971d8,DAT_14cb971e0);
  if (DAT_14cb971d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f26ff1 FUN_143f26ff1 body=3266 status=ok
// SIG undefined FUN_143f26ff1(void)

undefined8 FUN_143f26ff1(float param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  SessionId SVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  undefined **ppuVar28;
  byte bVar29;
  undefined **ppuVar30;
  float fVar31;
  undefined1 auStack_1f8 [47];
  byte local_1c9;
  undefined **local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  int local_1ac;
  undefined **local_1a8;
  ulonglong local_1a0;
  undefined **local_198;
  uint *local_190;
  ulonglong local_188;
  ulonglong local_180;
  code *local_178;
  undefined8 *local_170;
  longlong local_168 [2];
  code *local_158;
  undefined8 *local_150;
  longlong local_148 [5];
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_114;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (0 < DAT_14cb971e0) {
    uVar24 = 0;
    do {
      lVar22 = DAT_14cb971d8;
      lVar16 = (longlong)(int)uVar24 * 0x88;
      puVar21 = (uint *)(DAT_14cb971d8 + lVar16 + 0x10);
      cVar5 = FUN_14111b834(puVar21);
      if (cVar5 == '\0') {
        ppuVar30 = (undefined **)(lVar22 + lVar16);
        fVar31 = *(float *)(ppuVar30 + 0x10);
        *(float *)(ppuVar30 + 0x10) = fVar31 - param_1;
        *(float *)((longlong)ppuVar30 + 0x84) = *(float *)((longlong)ppuVar30 + 0x84) - param_1;
        if (fVar31 - param_1 <= 0.0) {
          uVar27 = *(uint *)((longlong)ppuVar30 + 0x14);
          uVar9 = (ulonglong)uVar27;
          if ((uVar27 == 0) || (uVar7 = *puVar21, (int)uVar7 < 0)) {
LAB_143f278c0:
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              plVar17 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((plVar17 == (longlong *)0x0) || (*(uint *)(plVar17 + 2) != uVar27)) ||
                 (uVar9 = (ulonglong)*(uint *)(plVar17 + 1),
                 (*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143f278c0;
              lVar16 = *plVar17;
            }
          }
          plVar17 = *(longlong **)(lVar16 + 0x48);
          if (plVar17 == (longlong *)0x0) {
LAB_143f2716e:
            local_f8 = 0;
            uStack_f0 = 0;
            local_1b0 = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
            plVar17 = (longlong *)0x0;
          }
          else {
            uVar9 = FUN_140b7066c();
            piVar1 = (int *)(uVar9 + 0x38);
            if ((*(int *)(plVar17[2] + 0x38) < *piVar1) ||
               (uVar9 = uVar9 + 0x30,
               *(ulonglong *)(*(longlong *)(plVar17[2] + 0x30) + (longlong)*piVar1 * 8) != uVar9))
            goto LAB_143f2716e;
            cVar5 = (**(code **)(*plVar17 + 0x390))(plVar17);
            if (cVar5 != '\0') {
              uVar13 = 1;
              goto LAB_143f27c4e;
            }
            FUN_14127bdbc(plVar17);
            local_1b0 = 0;
          }
          ppuVar28 = ppuVar30 + 5;
          uVar27 = *(uint *)(ppuVar30 + 8);
          local_1b8 = plVar17;
          local_190 = puVar21;
          local_188 = uVar24;
          if (uVar27 == 0) {
            uVar9 = 1;
            uVar24 = 0;
            iVar26 = 0;
            uVar7 = 0;
          }
          else {
            ppuVar10 = (undefined **)ppuVar30[7];
            if ((undefined **)ppuVar30[7] == (undefined **)0x0) {
              ppuVar10 = ppuVar28;
            }
            uVar7 = *(uint *)ppuVar10;
            if (uVar7 == 0) {
              iVar26 = uVar27 + 0x1e;
              if (-1 < (int)(uVar27 - 1)) {
                iVar26 = uVar27 - 1;
              }
              uVar24 = 0;
              uVar9 = (ulonglong)(uint)(iVar26 >> 5);
              if (iVar26 >> 5 < 1) {
                uVar9 = uVar24;
              }
              iVar26 = 0;
              do {
                if (uVar9 == uVar24) {
                  bVar29 = 1;
                  goto LAB_143f2721c;
                }
                iVar26 = iVar26 + 0x20;
                uVar7 = *(uint *)((longlong)ppuVar10 + (uVar24 + 1) * 4);
                uVar24 = uVar24 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar24 = 0;
              iVar26 = 0;
            }
            uVar9 = (ulonglong)(-uVar7 & uVar7);
            uVar2 = uVar9 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar7 = (iVar26 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar27 <= (int)uVar7) {
              uVar7 = uVar27;
            }
          }
          bVar29 = 1;
          if (uVar7 != uVar27) {
            local_198 = ppuVar30 + 0xe;
            uVar20 = 0xffffffff;
            bVar29 = 1;
            local_1a8 = ppuVar28;
            local_1a0 = (ulonglong)uVar27;
LAB_143f27295:
            lVar16 = local_f8;
            local_1c8 = (undefined **)CONCAT44(local_1c8._4_4_,uVar20);
            local_1ac = iVar26;
            local_180 = uVar24;
            if ((longlong)(int)uStack_f0 != 0) {
              plVar17 = (longlong *)(ppuVar30[3] + (longlong)(int)uVar7 * 0x18);
              lVar22 = (longlong)(int)uStack_f0 << 3;
              lVar25 = 0;
              local_1c9 = bVar29;
              do {
                lVar3 = *(longlong *)(lVar16 + lVar25 * 8);
                local_e0 = &PTR_FUN_14a184370;
                local_d8 = (longlong *)*plVar17;
                lStack_d0 = plVar17[1];
                if (lStack_d0 != 0) {
                  LOCK();
                  *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
                  UNLOCK();
                }
                local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffffffffff00);
                cVar5 = FUN_140ba41f1(lVar3 + 0x3a0,&local_e0);
                local_e0 = &PTR_FUN_14a184370;
                (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(ulonglong)local_c8 & 0xff])
                          (&local_d8);
                ppuVar28 = local_1a8;
                if (cVar5 != '\0') {
                  bVar29 = 0;
                  uVar27 = (uint)lVar25;
                  uVar20 = (uint)local_1c8;
                  if (((int)uVar27 < 0) || (bVar29 = 0, (int)uStack_f0 <= (int)uVar27))
                  goto LAB_143f27641;
                  plVar12 = *(longlong **)(local_f8 + (ulonglong)(uVar27 & 0x7fffffff) * 8);
                  if (plVar12 != (longlong *)0x0) {
                    lVar16 = FUN_140082f10();
                    if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
                        == lVar16 + 0x30)) {
                      bVar29 = 0;
                      cVar5 = (**(code **)(*plVar12 + 2000))(plVar12,0);
                      if (cVar5 == '\0') goto LAB_143f27641;
                      fVar31 = *(float *)(plVar12 + 0x7b);
                      if (fVar31 <= 0.0) {
                        fVar31 = (float)*(byte *)(plVar12 + 0x73) * 4.0;
                      }
                      if (0.0 < fVar31) {
                        if ((longlong)*(int *)(ppuVar30 + 0xf) == 0) goto LAB_143f27462;
                        puVar18 = (undefined8 *)ppuVar30[0xe];
                        lVar16 = (longlong)*(int *)(ppuVar30 + 0xf) * 0x30;
                        goto LAB_143f2743b;
                      }
                    }
                  }
                  bVar29 = 0;
                  goto LAB_143f27641;
                }
                lVar25 = lVar25 + 1;
                lVar22 = lVar22 + -8;
              } while (lVar22 != 0);
            }
            goto LAB_143f2763d;
          }
LAB_143f2721c:
          uVar24 = local_188;
          if (((*(int *)(ppuVar30 + 4) - *(int *)((longlong)ppuVar30 + 0x4c) <=
                *(int *)(ppuVar30 + 0xf) & bVar29) != 0) ||
             (*(float *)((longlong)ppuVar30 + 0x84) <= 0.0)) {
            if (*(int *)((longlong)ppuVar30 + 0x14) == 0) {
              lVar16 = 0;
            }
            else {
              uVar27 = *local_190;
              if ((int)uVar27 < 0) {
LAB_143f27c0d:
                lVar16 = 0;
              }
              else {
                lVar16 = 0;
                if ((int)uVar27 < DAT_14c9647dc) {
                  plVar17 = (longlong *)
                            ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
                  if (((plVar17 == (longlong *)0x0) ||
                      ((int)plVar17[2] != *(int *)((longlong)ppuVar30 + 0x14))) ||
                     ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143f27c0d;
                  lVar16 = *plVar17;
                }
              }
            }
            if (*(int *)(lVar16 + 0x40) < 1) {
              lVar16 = 0;
            }
            else {
              plVar17 = (longlong *)**(longlong **)(lVar16 + 0x38);
              if ((DAT_14c950c29 == '\x01') && (plVar17 != (longlong *)0x0)) {
                FUN_14689c22e(plVar17);
LAB_143f278a9:
                plVar12 = (longlong *)FUN_140773fe2();
                if (plVar12 != (longlong *)0x0) {
                  uVar13 = (**(code **)(*plVar17 + 0x180))(plVar17);
                  lVar16 = (**(code **)(*plVar12 + 0x2d0))(plVar12,(int)plVar17[0x1c],uVar13);
                  goto LAB_143f278f5;
                }
              }
              else if (plVar17 != (longlong *)0x0) goto LAB_143f278a9;
              lVar16 = 0;
            }
LAB_143f278f5:
            fStack_104 = 0.0;
            uStack_100 = 0;
            local_114 = 0;
            uStack_10c = 0;
            fStack_108 = 0.0;
            local_11c = *(undefined4 *)(ppuVar30 + 0xf);
            local_118 = *(undefined1 *)(ppuVar30 + 0xd);
            local_1c8 = ppuVar30;
            if ((longlong)*(int *)(ppuVar30 + 0xf) != 0) {
              plVar17 = (longlong *)ppuVar30[0xe];
              lVar22 = (longlong)*(int *)(ppuVar30 + 0xf) * 0x30;
              plVar12 = local_1b8;
              do {
                iVar26 = (int)plVar17[4];
                fVar31 = *(float *)((longlong)plVar17 + 0x1c) / (float)iVar26;
                fStack_108 = *(float *)((longlong)plVar17 + 0x14) + fStack_108;
                fStack_104 = *(float *)(plVar17 + 3) + fStack_104;
                uStack_100 = CONCAT44(uStack_100._4_4_ + iVar26,(float)uStack_100 + fVar31);
                if ((char)plVar17[2] == '\x01') {
                  local_114 = CONCAT44(local_114._4_4_,(int)local_114 + 1);
                }
                if (iVar26 < 10) {
                  local_114 = CONCAT44(local_114._4_4_ + 1,(int)local_114);
                }
                if (lVar16 != 0) {
                  if ((char)local_1b0 == '\0') {
                    FUN_140b74390(plVar12,local_148 + 2);
                    local_e0 = (undefined **)*plVar17;
                    plVar19 = (longlong *)plVar17[1];
                    local_d8 = plVar19;
                    if (plVar19 == (longlong *)0x0) {
                      FUN_140b7124e(plVar12,local_148,&local_e0);
                    }
                    else {
                      LOCK();
                      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                      UNLOCK();
                      FUN_140b7124e(plVar12,local_148,&local_e0);
                      if (plVar19 != (longlong *)0x0) {
                        LOCK();
                        plVar12 = plVar19 + 1;
                        *(int *)plVar12 = (int)*plVar12 + -1;
                        UNLOCK();
                        if ((int)*plVar12 == 0) {
                          (**(code **)*plVar19)(plVar19);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar19 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar19 + 0x10))(plVar19);
                          }
                        }
                      }
                    }
                  }
                  else {
                    local_148[2] = 0;
                    local_148[3] = 0;
                    local_148[0] = 0;
                    local_148[1] = 0;
                  }
                  local_e0 = local_1c8;
                  lStack_d0 = CONCAT44(lStack_d0._4_4_,fVar31);
                  local_c8 = local_148 + 2;
                  local_c0 = local_148;
                  local_150 = &local_e0;
                  local_158 = FUN_143f2fcde;
                  local_d8 = plVar17;
                  local_b8 = iVar26 < 10;
                  FUN_140056680(local_168,L"player_latency");
                  FUN_148a7a793(lVar16,local_168,&local_158);
                  if (local_168[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_148[0] != 0) {
                    FUN_1400020a8();
                  }
                  plVar12 = local_1b8;
                  if (local_148[2] != 0) {
                    FUN_1400020a8();
                  }
                }
                plVar17 = plVar17 + 6;
                lVar22 = lVar22 + -0x30;
              } while (lVar22 != 0);
            }
            if (lVar16 != 0) {
              local_e0 = local_1c8;
              local_d8 = (longlong *)&local_11c;
              local_170 = &local_e0;
              local_178 = FUN_143f2ff26;
              FUN_140056680(local_148 + 2,L"match_latency");
              FUN_148a7a793(lVar16,local_148 + 2,&local_178);
              if (local_148[2] != 0) {
                FUN_1400020a8();
              }
            }
            FUN_148a7ac40(uVar24 & 0xffffffff);
            uVar24 = (ulonglong)((int)uVar24 - 1);
          }
          else {
            *(undefined4 *)(ppuVar30 + 0x10) = 0x3f800000;
          }
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        FUN_148a7ac40(uVar24);
        uVar24 = (ulonglong)((int)uVar24 - 1);
      }
      uVar27 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar27;
    } while ((int)uVar27 < DAT_14cb971e0);
  }
  plVar17 = DAT_14cb971f0;
  uVar13 = 1;
  if (DAT_14cb971e0 == 0) {
    DAT_14cb971e8 = 0;
    DAT_14cb971f0 = (longlong *)0x0;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    uVar13 = 0;
  }
LAB_143f27c4e:
  if ((local_b0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
  while( true ) {
    puVar18 = puVar18 + 6;
    lVar16 = lVar16 + -0x30;
    if (lVar16 == 0) break;
LAB_143f2743b:
    cVar5 = (*(code *)**(undefined8 **)*puVar18)((undefined8 *)*puVar18,*plVar17);
    if (cVar5 != '\0') {
      if (puVar18 != (undefined8 *)0x0) goto LAB_143f27628;
      break;
    }
  }
LAB_143f27462:
  lVar16 = *plVar17;
  plVar19 = (longlong *)plVar17[1];
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
  }
  puVar18 = (undefined8 *)(longlong)*(int *)(ppuVar30 + 0xf);
  uVar27 = *(int *)(ppuVar30 + 0xf) + 1;
  *(uint *)(ppuVar30 + 0xf) = uVar27;
  if (*(uint *)((longlong)ppuVar30 + 0x7c) < uVar27) {
    local_1c0 = puVar18;
    FUN_148a873f8(local_198,puVar18);
    puVar18 = local_1c0;
  }
  puVar4 = *local_198;
  lVar22 = (longlong)puVar18 * 0x30;
  *(longlong *)(puVar4 + lVar22) = lVar16;
  *(longlong **)(puVar4 + lVar22 + 8) = plVar19;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
  }
  puVar4[lVar22 + 0x10] = 0;
  *(undefined2 *)(puVar4 + lVar22 + 0x11) = (undefined2)local_e0;
  puVar4[lVar22 + 0x13] = local_e0._2_1_;
  *(undefined8 *)(puVar4 + lVar22 + 0x14) = 0x461c3c00;
  *(undefined8 *)(puVar4 + lVar22 + 0x1c) = 0;
  *(undefined8 *)(puVar4 + lVar22 + 0x24) = 0xffffffff00000005;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar19 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  puVar18 = (undefined8 *)(ppuVar30[0xe] + lVar22);
  if ((*(int *)((longlong)ppuVar30 + 0x14) == 0) || (uVar27 = *local_190, (int)uVar27 < 0)) {
LAB_143f27799:
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if ((int)uVar27 < DAT_14c9647dc) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
      if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)((longlong)ppuVar30 + 0x14)))
         || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_143f27799;
      lVar16 = *plVar19;
    }
  }
  if (0 < *(int *)(lVar16 + 0x40)) {
    plVar19 = (longlong *)**(longlong **)(lVar16 + 0x38);
    if ((DAT_14c950c29 == '\x01') && (plVar19 != (longlong *)0x0)) {
      FUN_14689c22e(plVar19);
    }
    else if (plVar19 == (longlong *)0x0) goto LAB_143f27628;
    local_1c0 = puVar18;
    plVar11 = (longlong *)FUN_140773fe2();
    puVar18 = local_1c0;
    if (plVar11 != (longlong *)0x0) {
      uVar13 = (**(code **)(*plVar19 + 0x180))(plVar19);
      lVar16 = (**(code **)(*plVar11 + 0x2d0))(plVar11,(int)plVar19[0x1c],uVar13);
      puVar18 = local_1c0;
      if (lVar16 != 0) {
        (**(code **)(*(longlong *)*plVar17 + 0x30))((longlong *)*plVar17,&local_e0);
        SVar8 = FUN_140b71325(&local_e0);
        if (local_e0 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        puVar18 = local_1c0;
        if (SVar8 != 0) {
          bVar6 = bifrost::sockets::isUsingTURN(*(User **)(lVar16 + 0x2b8),SVar8);
          *(bool *)(local_1c0 + 2) = bVar6;
          puVar18 = local_1c0;
        }
      }
    }
  }
LAB_143f27628:
  if (*(int *)((longlong)puVar18 + 0x24) < 1) {
    iVar26 = *(int *)(puVar18 + 4);
    if (*(int *)(puVar18 + 5) != *(int *)((longlong)plVar12 + 0x51c)) {
      iVar26 = iVar26 + 1;
      *(int *)(puVar18 + 4) = iVar26;
      *(undefined4 *)(puVar18 + 5) = *(undefined4 *)((longlong)plVar12 + 0x51c);
      *(float *)((longlong)puVar18 + 0x1c) = *(float *)((longlong)puVar18 + 0x1c) + fVar31;
      if (fVar31 < *(float *)((longlong)puVar18 + 0x14)) {
        *(float *)((longlong)puVar18 + 0x14) = fVar31;
      }
      if (*(float *)(puVar18 + 3) <= fVar31 && fVar31 != *(float *)(puVar18 + 3)) {
        *(float *)(puVar18 + 3) = fVar31;
      }
    }
    bVar29 = 9 < iVar26 & local_1c9;
    uVar20 = (uint)local_1c8;
  }
  else {
    *(int *)((longlong)puVar18 + 0x24) = *(int *)((longlong)puVar18 + 0x24) + -1;
LAB_143f2763d:
    uVar20 = (uint)local_1c8;
    bVar29 = 0;
  }
LAB_143f27641:
  uVar20 = uVar20 & ~(uint)uVar9;
  ppuVar10 = (undefined **)ppuVar30[7];
  if ((undefined **)ppuVar30[7] == (undefined **)0x0) {
    ppuVar10 = ppuVar28;
  }
  uVar27 = *(uint *)(ppuVar30 + 8);
  iVar23 = (int)local_180;
  lVar16 = (longlong)iVar23;
  uVar7 = *(uint *)((longlong)ppuVar10 + lVar16 * 4) & uVar20;
  uVar24 = local_180;
  iVar26 = local_1ac;
  if (uVar7 == 0) {
    iVar14 = uVar27 + 0x1e;
    if (-1 < (int)(uVar27 - 1)) {
      iVar14 = uVar27 - 1;
    }
    iVar14 = iVar14 >> 5;
    iVar26 = local_1ac + 0x20;
    iVar15 = iVar14;
    if (iVar14 < iVar23) {
      iVar15 = iVar23;
    }
    if (iVar23 < iVar14) {
      lVar22 = 0;
      do {
        uVar7 = *(uint *)((longlong)ppuVar10 + (lVar16 + lVar22 + 1) * 4);
        if (uVar7 != 0) {
          uVar20 = 0xffffffff;
          uVar24 = (ulonglong)(iVar23 + (int)lVar22 + 1);
          goto LAB_143f276cc;
        }
        iVar26 = iVar26 + 0x20;
        lVar22 = lVar22 + 1;
      } while (iVar15 - lVar16 != lVar22);
      uVar20 = 0xffffffff;
      iVar23 = iVar15;
    }
    uVar24 = (ulonglong)(iVar23 + 1);
    ppuVar28 = local_1a8;
    uVar7 = uVar27;
  }
  else {
LAB_143f276cc:
    uVar9 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar9 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar7 = (iVar26 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar27 <= (int)uVar7) {
      uVar7 = uVar27;
    }
  }
  if (uVar7 == (uint)local_1a0) goto LAB_143f2721c;
  goto LAB_143f27295;
}



// FUNCTION 143f27cb4 FUN_143f27cb4 body=944 status=ok
// SIG undefined FUN_143f27cb4(void)

void FUN_143f27cb4(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong **)(param_2 + 0x100) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x100) + 0x20))(), cVar6 != '\0')) {
    cVar6 = FUN_14658082c(param_2);
    if (cVar6 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x161) = 1;
    }
    if (*(char *)(param_2 + 0x3a) == '\x01') {
      if (param_1[8] == 0) {
        FUN_146581e10(param_1 + 0x19,param_3);
        FUN_141551f14(param_2,&local_40);
        if (&local_40 == (undefined8 **)(param_1 + 0xc)) {
          if (local_40 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          param_1[0xc] = (longlong)local_40;
          *(int *)(param_1 + 0xd) = local_38;
          *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_34;
        }
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        local_38 = 3;
        *local_40 = &PTR_LAB_14b4edb10;
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
        local_40[2] = lVar7;
        *local_40 = &PTR_FUN_14b4e9b10;
        local_40[3] = param_1;
        local_40[4] = FUN_141644ede;
        *(undefined4 *)(local_40 + 5) = 0;
        FUN_14613e4c2(param_1,param_1,param_2,&local_40);
        if (local_38 != 0) {
          if (local_40 == (undefined8 *)0x0) goto LAB_143f27cf4;
          (**(code **)*local_40)(local_40,0);
          FUN_1446efa72(&local_40,0,0,0x10);
          local_38 = 0;
        }
        if (local_40 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if (param_1[10] == 0) {
      FUN_146581e10(param_1 + 0x19,param_3);
      (**(code **)(*param_1 + 0x50))(param_1,&local_40);
      plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
      if (plVar5 == (longlong *)0x0) {
        param_1[10] = (longlong)local_40;
        plVar9 = (longlong *)param_1[0xb];
        if (plVar9 != (longlong *)0x0) {
          param_1[0xb] = 0;
LAB_143f27f3f:
          LOCK();
          plVar5 = plVar9 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x000143f27f6e:
            if (iVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        param_1[10] = (longlong)local_40;
        plVar9 = (longlong *)param_1[0xb];
        if (plVar5 == plVar9) {
          LOCK();
          plVar9 = plVar5 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar9 = plVar5;
            goto joined_r0x000143f27f6e;
          }
        }
        else {
          param_1[0xb] = (longlong)plVar5;
          if (plVar9 != (longlong *)0x0) goto LAB_143f27f3f;
        }
      }
      plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      lVar4 = param_1[10];
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      local_48 = 3;
      *local_50 = &PTR_LAB_14b4e9d50;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14b4e9ce0;
      local_50[3] = param_1;
      local_50[4] = FUN_14619f5fe;
      *(undefined4 *)(local_50 + 5) = 0;
      FUN_145deed1c(lVar4,param_2,&local_50);
    }
  }
LAB_143f27cf4:
  if ((int)param_3[1] != 0) {
    puVar3 = (undefined8 *)*param_3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143f27d2f;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143f27d2f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f28066 FUN_143f28066 body=199 status=ok
// SIG undefined FUN_143f28066(void)

void FUN_143f28066(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143f280ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x340))(plVar1,&DAT_14c844840,1);
  return;
}



// FUNCTION 143f2812e FUN_143f2812e body=46 status=ok
// SIG undefined FUN_143f2812e(void)

undefined8 FUN_143f2812e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar2 != 0) && (iVar1 = FUN_14490d72a(lVar2), iVar1 == 3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143f2815c FUN_143f2815c body=690 status=ok
// SIG undefined FUN_143f2815c(void)

void FUN_143f2815c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  code *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = (undefined1)param_2;
  local_29 = uVar7;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar3 = FUN_1414e62ca();
    if (cVar3 != '\0') {
      local_48 = (code *)0x0;
      plStack_40 = (longlong *)0x0;
      local_38 = 0;
      FUN_145c2b718(*(undefined8 *)(param_1 + 0x50),&local_48,1);
      if (plStack_40 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
      if (lVar5 != 0) {
        iVar4 = FUN_14490d72a(lVar5);
        if (iVar4 == 3) goto LAB_143f2818f;
      }
      lVar5 = *(longlong *)(param_1 + 0x50);
      if (1 < (*(int *)(lVar5 + 0x430) + *(int *)(lVar5 + 0x78)) - *(int *)(lVar5 + 0x45c)) {
        local_48 = (code *)0x0;
        plStack_40 = (longlong *)0x0;
        cVar3 = FUN_148a7bf60(param_1);
        if (cVar3 != '\0') {
          if (*(longlong *)(param_1 + 0xb0) == 0) {
            local_48 = FUN_148a7c1e6;
            plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
            FUN_148a7c0ee(&local_58,param_1,&local_48,&local_29);
            *(undefined8 **)(param_1 + 0xb0) = local_58;
          }
          if (((*(longlong *)(param_1 + 0xb8) == 0) || (*(longlong *)(param_1 + 0xc0) == 0)) ||
             (*(int *)(*(longlong *)(param_1 + 0xc0) + 8) < 1)) {
            uVar6 = FUN_1401cb356();
            local_58 = (undefined8 *)0x0;
            local_50 = 0;
            FUN_1446efa72(&local_58,0,3,0x10);
            local_50 = 3;
            *local_58 = &PTR_LAB_149e02020;
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
            local_58[2] = lVar8;
            *local_58 = &PTR_FUN_14b4ea6d0;
            local_58[3] = param_1;
            *(undefined1 *)(local_58 + 4) = uVar7;
            local_68 = 0x40a00000;
            FUN_1405f67fc(uVar6,&local_48,&local_58,L"FGbxNetwork_WaitForSocialPartyMembersToTravel"
                         );
            *(code **)(param_1 + 0xb8) = local_48;
            local_48 = (code *)0x0;
            plVar2 = *(longlong **)(param_1 + 0xc0);
            *(longlong **)(param_1 + 0xc0) = plStack_40;
            plStack_40 = (longlong *)0x0;
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))();
              }
              if (plStack_40 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plStack_40 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plStack_40 + 0x10))();
                }
              }
            }
            if (local_50 != 0) {
              if (local_58 == (undefined8 *)0x0) goto LAB_143f281ac;
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50 = 0;
            }
            if (local_58 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          goto LAB_143f281ac;
        }
      }
    }
  }
LAB_143f2818f:
  if ((*(int *)(param_1 + 0xa8) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xa0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
  }
LAB_143f281ac:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f28410 FUN_143f28410 body=436 status=ok
// SIG undefined FUN_143f28410(void)

void FUN_143f28410(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x161) = 0;
  cVar1 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x6c) != -1) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0xffffffff00000000;
    }
    cVar1 = FUN_145d53b76(param_1);
    if (cVar1 == '\0') {
      if ((param_2 & 0xfffffffe) == 2) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x398))();
    if (cVar1 != '\0') {
      local_28 = (undefined8 *)0x0;
      local_20 = 0;
      FUN_1446efa72(&local_28,0,2,0x10);
      local_20 = 2;
      *local_28 = &PTR_LAB_149e06450;
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
      local_28[2] = lVar3;
      *local_28 = &PTR_FUN_14b4eacf0;
      local_28[3] = param_1;
      FUN_145dd0ba6(param_1,param_1,&local_28);
      if (local_20 != 0) {
        if (local_28 == (undefined8 *)0x0) goto LAB_143f2843e;
        (**(code **)*local_28)(local_28,0);
        FUN_1446efa72(&local_28,0,0,0x10);
        local_20 = 0;
      }
      if (local_28 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143f2843e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f285fe FUN_143f285fe body=368 status=ok
// SIG undefined FUN_143f285fe(void)

void FUN_143f285fe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      if (plVar2 == (longlong *)0x0) {
        local_98 = 0;
        uStack_90 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_88 = local_98;
      uStack_80._0_4_ = (int)uStack_90;
      uStack_80._4_4_ = uStack_90._4_4_;
      if (1 < (int)uStack_90) {
        FUN_1400020e8(&local_78,local_98,(int)uStack_90 + -1);
        FUN_1400020e8(&local_78,&DAT_149e19f34,2);
      }
      uVar4 = uStack_80._4_4_;
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      if (uVar4 != 0) {
        FUN_1446f8c06(&local_88,0);
      }
      lVar5 = lVar5 + 0x38;
    } while ((longlong)(int)lVar3 * 0x38 - lVar5 != 0);
    if (1 < (int)uStack_70) {
      FUN_140b127b8(&local_78,&DAT_149e19f34,2,1);
    }
  }
  FUN_140b702ac(param_1 + 8,param_2);
  FUN_145879b88(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f287d4 FUN_143f287d4 body=979 status=ok
// SIG undefined FUN_143f287d4(void)

void FUN_143f287d4(longlong *param_1,uint param_2,int param_3,longlong *param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_1[0x38] == 0) || (param_1[0x39] == 0)) || (param_3 == 0)) ||
     (*(int *)(param_1[0x39] + 8) < 1)) {
    if ((int)param_1[0x3b] != *(int *)((longlong)param_1 + 0x204)) {
      plVar3 = param_1 + 0x41;
      if ((longlong *)param_1[0x42] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x42];
      }
      iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0x43] - 1U & param_2) * 4);
      if (iVar4 != -1) {
        lVar10 = param_1[0x3a];
        iVar16 = iVar4;
        do {
          if (*(uint *)(lVar10 + (longlong)iVar16 * 0x20) == param_2) goto LAB_143f2891b;
          iVar16 = *(int *)((longlong)iVar16 * 0x20 + lVar10 + 0x18);
        } while (iVar16 != -1);
      }
    }
    iVar4 = (int)param_1[0x3f];
    local_70 = param_4;
    if (iVar4 == 0) {
      uVar15 = 1;
      uVar6 = 0;
      iVar11 = 0;
      iVar16 = 0;
    }
    else {
      puVar12 = (uint *)param_1[0x3e];
      if ((uint *)param_1[0x3e] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x3c);
      }
      uVar8 = *puVar12;
      if (uVar8 == 0) {
        iVar16 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar16 = iVar4 + -1;
        }
        uVar6 = 0;
        uVar15 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar15 = uVar6;
        }
        iVar11 = 0;
        do {
          if (uVar15 == uVar6) goto LAB_143f28a0b;
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar12[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar6 = 0;
        iVar11 = 0;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar15 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar16 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar16) {
        iVar16 = iVar4;
      }
    }
    if (iVar16 != iVar4) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      iVar13 = iVar13 >> 5;
      uVar8 = 0xffffffff;
      do {
        if (*(char *)(*(longlong *)(param_1[0x3a] + 8 + (longlong)iVar16 * 0x20) + 4) != '\x01') {
          if ((int)param_4[1] == 0) goto LAB_143f28aac;
          plVar3 = (longlong *)*param_4;
          if (plVar3 == (longlong *)0x0) goto LAB_143f28abe;
          lVar10 = *plVar3;
          uVar7 = 1;
          goto LAB_143f28aa3;
        }
        uVar8 = uVar8 & ~(uint)uVar15;
        puVar12 = (uint *)param_1[0x3e];
        if ((uint *)param_1[0x3e] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x3c);
        }
        iVar16 = (int)uVar6;
        lVar10 = (longlong)iVar16;
        uVar17 = puVar12[lVar10] & uVar8;
        if (uVar17 == 0) {
          iVar9 = iVar13;
          if (iVar13 < iVar16) {
            iVar9 = iVar16;
          }
          if (iVar13 <= iVar16) break;
          lVar14 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar17 = puVar12[lVar10 + lVar14 + 1];
            if (uVar17 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar9 - lVar10 == lVar14) goto LAB_143f28a0b;
          }
          uVar6 = (ulonglong)(iVar16 + (int)lVar14 + 1);
          uVar8 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar16 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar4);
    }
LAB_143f28a0b:
    if (param_3 == 1) {
      cVar2 = FUN_14144bed0(param_1);
      param_4 = local_70;
      if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x318))(param_1), cVar2 == '\0'))
      goto LAB_143f28a90;
      local_68 = 0;
      local_60 = 0;
      FUN_14594ec66(&local_68,param_4);
      FUN_148a7d04e(param_1,param_2,&local_68);
    }
    else {
      if ((param_3 != 0) || (cVar2 = FUN_14144bed0(param_1), cVar2 != '\0')) goto LAB_143f28a90;
      *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
      (**(code **)(*param_1 + 0x3f0))(param_1);
      local_58 = 0;
      local_50 = 0;
      FUN_14594ec66(&local_58,param_4);
      FUN_14600671e(param_1,param_2,&local_58);
    }
  }
  else {
LAB_143f28a90:
    if ((int)param_4[1] != 0) {
      plVar3 = (longlong *)*param_4;
      if (plVar3 == (longlong *)0x0) goto LAB_143f28abe;
      lVar10 = *plVar3;
      uVar7 = 0;
      goto LAB_143f28aa3;
    }
  }
  goto LAB_143f28aac;
  while (iVar4 = *(int *)(lVar14 + 0x18), iVar4 != -1) {
LAB_143f2891b:
    lVar14 = lVar10 + (longlong)iVar4 * 0x20;
    if (*(uint *)(lVar10 + (longlong)iVar4 * 0x20) == param_2) goto LAB_143f28b3a;
  }
  lVar14 = 0;
LAB_143f28b3a:
  uVar7 = 0x16;
  if (*(char *)(*(longlong *)(lVar14 + 8) + 4) != '\0') {
    uVar7 = 0xc;
  }
  if ((int)param_4[1] == 0) goto LAB_143f28aac;
  plVar3 = (longlong *)*param_4;
  if (plVar3 == (longlong *)0x0) goto LAB_143f28abe;
  lVar10 = *plVar3;
LAB_143f28aa3:
  (**(code **)(lVar10 + 0x60))(plVar3,uVar7,param_2,param_2);
LAB_143f28aac:
  puVar5 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_143f28abe;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar5 = (undefined8 *)*param_4;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f28abe:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f28ba8 FUN_143f28ba8 body=987 status=ok
// SIG undefined FUN_143f28ba8(void)

undefined8 * FUN_143f28ba8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0x18 < param_2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
    goto LAB_143f28ede;
  }
  switch(param_2) {
  case 0xf:
    local_38 = L"LoginFailed_IsGuest";
    local_30 = 0x13;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = L"Please sign into a non-guest profile to continue.";
    local_30 = 0x31;
    break;
  default:
    local_38 = L"LoginFailed_GenericError";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = L"Login failed with an unspecified error.";
    goto LAB_143f28d9a;
  case 0x11:
    local_38 = L"LoginFailed_FailedToWriteProfile";
    local_30 = 0x20;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = L"Failed to create saved data for this user.";
    local_30 = 0x2a;
    break;
  case 0x12:
    local_38 = L"LoginFailed_FailedToLoadProfile";
    local_30 = 0x1f;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = L"Failed to load saved data for this user.";
    local_30 = 0x28;
    break;
  case 0x15:
    local_38 = L"LoginFailed_FailedToCheckLicenseType";
    local_30 = 0x24;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = 
    L"Unable to verify trial status. Please make sure that you are logged in and connected to the internet."
    ;
    local_30 = 0x65;
    break;
  case 0x17:
    local_38 = L"LoginFailed_AbortedLogin";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = L"The player was logged out";
    local_30 = 0x19;
    break;
  case 0x18:
    local_38 = L"LoginFailed_NotLoggedIn";
    local_30 = 0x17;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxOnlineLoginManager";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    local_38 = L"Please sign into a profile to continue.";
LAB_143f28d9a:
    local_30 = 0x27;
  }
  FUN_140208c1e(param_1,local_40,local_3c,&local_38);
LAB_143f28ede:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f28f84 FUN_143f28f84 body=101 status=ok
// SIG undefined FUN_143f28f84(void)

undefined8 FUN_143f28f84(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if ((int)param_3[1] != 0) {
    plVar1 = (longlong *)*param_3;
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    if ((int)param_3[1] != 0) {
      puVar2 = (undefined8 *)*param_3;
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_3,0,0,0x10);
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 143f28fea FUN_143f28fea body=320 status=ok
// SIG undefined FUN_143f28fea(void)

ulonglong FUN_143f28fea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_1 + 800))();
  if (cVar3 != '\0') {
    lVar4 = FUN_1400b465c(param_1);
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x48), lVar2 != 0)) {
      lVar5 = FUN_140b7066c();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30 &&
          (*(longlong *)(lVar4 + 0x30) != 0)))) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2a0);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_14689c22e(lVar4);
        }
        else if (lVar4 == 0) goto LAB_143f2904c;
        if ((int)param_1[0x3b] - *(int *)((longlong)param_1 + 0x204) < *(int *)(lVar4 + 0x68)) {
          plVar6 = (longlong *)FUN_140c13176();
          lVar4 = plVar6[0x22];
          uVar8 = (undefined7)((ulonglong)param_1 >> 8);
          if (lVar4 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar4 = plVar6[0x22];
            if (lVar4 == 0) {
              uVar7 = CONCAT71(uVar8,1);
              goto LAB_143f2904e;
            }
          }
          lVar5 = param_1[0x3b];
          iVar1 = *(int *)((longlong)param_1 + 0x204);
          FUN_14127bdbc(lVar2,&local_40);
          uVar7 = CONCAT71(uVar8,((int)lVar5 - iVar1) + local_38 < *(int *)(lVar4 + 0x394));
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          goto LAB_143f2904e;
        }
      }
    }
  }
LAB_143f2904c:
  uVar7 = 0;
LAB_143f2904e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2912c FUN_143f2912c body=41 status=ok
// SIG undefined FUN_143f2912c(void)

bool FUN_143f2912c(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)((longlong)param_1 + 0x224) < 1;
  }
  return bVar2;
}



// FUNCTION 143f29156 FUN_143f29156 body=2204 status=ok
// SIG undefined FUN_143f29156(void)

void FUN_143f29156(longlong *param_1,int param_2,undefined4 param_3,uint param_4,longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78 [2];
  longlong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = *(int *)((longlong)param_1 + 0x224);
  *(int *)((longlong)param_1 + 0x224) = iVar5 + -1;
  local_84 = param_3;
  if (iVar5 == 1) {
    FUN_1447f69b6(param_1 + 0x14);
  }
  (**(code **)(*param_1 + 0x388))(param_1);
  plVar2 = param_1 + 0x3a;
  if ((int)param_1[0x3b] != *(int *)((longlong)param_1 + 0x204)) {
    plVar4 = param_1 + 0x41;
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x42];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x43] - 1U & param_4) * 4);
    if (iVar5 != -1) {
      lVar1 = *plVar2;
      iVar7 = iVar5;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar7 * 0x20) == param_4) {
          if (0x18 < param_2) goto LAB_143f29224;
          break;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_68 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_60 = 0;
  switch(param_2) {
  case 3:
    local_58 = L"SplitscreenLoginFailed_NoOnlinePermission";
    local_50 = 0x29;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You do not have permission to play in the current game.";
    local_50 = 0x59;
    break;
  case 4:
    local_58 = L"SplitscreenLoginFailed_NoCrossplayPermission";
    local_50 = 0x2c;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You do not have crossplay permissions. The current game requires all players to have crossplay permissions."
    ;
    local_50 = 0x8d;
    break;
  case 5:
    local_58 = L"SplitscreenLoginFailed_AgeRestriction";
    local_50 = 0x25;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You do not meet the minimum age requirements to play this game online."
    ;
    local_50 = 0x68;
    break;
  case 6:
    local_58 = L"SplitscreenLoginFailed_ShiftAgeRestriction";
    local_50 = 0x2a;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You do not meet the minimum requirements to access this feature. Please contact customer support for assistance."
    ;
    local_50 = 0x92;
    FUN_140208c1e(local_78,local_80,local_7c,&local_58);
    FUN_140008f88(&local_68,local_78);
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    FUN_148a8d43a(plVar2,param_4);
    FUN_146062814(param_1,param_4);
    (**(code **)(*param_1 + 0x358))(param_1,param_4,&local_68);
    goto LAB_143f29880;
  case 7:
    local_58 = L"SplitscreenLoginFailed_NotLoggedIntoShiftForOnline";
    local_50 = 0x32;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You must connect to Gearbox Software SHiFT to play online.";
    local_50 = 0x5c;
    break;
  case 8:
    local_58 = L"SplitscreenLoginFailed_NotLoggedIntoShiftForLan";
    local_50 = 0x2f;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. At least one controller has a gamer profile that is not signed in. To continue, sign in gamer profiles for all controllers."
    ;
    local_50 = 0x9d;
    break;
  case 9:
    local_58 = L"SplitscreenLoginFailed_NotLoggedIntoPlatformForOnline";
    local_50 = 0x35;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You must connect to the online service to play online.";
    local_50 = 0x58;
    break;
  case 10:
    local_58 = L"SplitscreenLoginFailed_InvalidShiftDisplayName";
    local_50 = 0x2e;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. You must have a valid SHiFT display name to play online.";
    local_50 = 0x5a;
    break;
  case 0xb:
    local_58 = L"SplitscreenLoginFailed_AlreadyInSession";
    local_50 = 0x27;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = L"Unable to add splitscreen player. An active player is already in the game session."
    ;
    local_50 = 0x52;
    break;
  default:
    FUN_143f28ba8(&local_58,param_2);
    FUN_140008f88(&local_68,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FUN_148a8d43a(plVar2,param_4);
    FUN_146062814(param_1,param_4);
    if (param_2 == 0x17) goto LAB_143f29880;
    goto LAB_143f2986f;
  case 0xd:
    local_58 = L"SplitscreenLoginFailed_SessionIsFull";
    local_50 = 0x24;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = 
    L"Unable to add splitscreen player. The maximum number of splitscreen players is already in game."
    ;
    local_50 = 0x5f;
    break;
  case 0xe:
    local_58 = L"SplitscreenLoginFailed_NotAllowedInSession";
    local_50 = 0x2a;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = L"Unable to add splitscreen player. You are not allowed to join the session.";
    local_50 = 0x4a;
    break;
  case 0x10:
    local_58 = L"SplitscreenLoginFailed_ProfileInUse";
    local_50 = 0x23;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"GbxOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_80,&local_58);
    local_58 = L"Unable to add splitscreen player. The selected profile is already in use.";
    local_50 = 0x49;
    FUN_140208c1e(local_78,local_80,local_7c,&local_58);
    FUN_140008f88(&local_68,local_78);
    goto LAB_143f29850;
  }
  FUN_140208c1e(local_78,local_80,local_7c,&local_58);
  FUN_140008f88(&local_68,local_78);
LAB_143f29850:
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  FUN_148a8d43a(plVar2,param_4);
  FUN_146062814(param_1,param_4);
LAB_143f2986f:
  (**(code **)(*param_1 + 0x350))(param_1,&local_68);
LAB_143f29880:
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  goto LAB_143f29890;
  while (iVar5 = *(int *)(lVar6 + 0x18), iVar5 != -1) {
LAB_143f29224:
    lVar6 = lVar1 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar1 + (longlong)iVar5 * 0x20) == param_4) goto LAB_143f2923e;
  }
  lVar6 = 0;
LAB_143f2923e:
  *(undefined1 *)(*(longlong *)(lVar6 + 8) + 4) = 1;
  (**(code **)(*param_1 + 0x3e0))(param_1);
  FUN_146068fdc(param_1,param_4);
  (**(code **)(*param_1 + 1000))(param_1,param_4);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_4);
  FUN_148a8d1f4(param_1 + 8,param_2,param_4);
LAB_143f29890:
  if ((int)param_5[1] != 0) {
    plVar2 = (longlong *)*param_5;
    if (plVar2 == (longlong *)0x0) goto LAB_143f298ea;
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2,local_84,param_4);
    if ((int)param_5[1] != 0) {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 == (undefined8 *)0x0) goto LAB_143f298ea;
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(param_5,0,0,0x10);
      *(undefined4 *)(param_5 + 1) = 0;
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_143f298ea:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f299f4 FUN_143f299f4 body=1000 status=ok
// SIG undefined FUN_143f299f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f299f4(longlong param_1,uint param_2,longlong *param_3)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  int local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar4 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x210);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar7 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar7 * 0x20) == param_2) {
          if ((longlong *)(lVar4 + 8) != (longlong *)0x0 && lVar4 != 0) {
            lVar5 = FUN_1400b465c(param_1);
            if (*(int *)(lVar5 + 0x40) < 1) {
              lVar5 = 0;
            }
            else {
              lVar5 = **(longlong **)(lVar5 + 0x38);
              if ((lVar5 != 0 & DAT_14c950c29) == 1) {
                FUN_14689c22e(lVar5);
              }
            }
            if (*(uint *)(lVar5 + 0xe0) == param_2) goto LAB_143f29a9c;
            *(undefined1 *)(*(longlong *)(lVar4 + 8) + 5) = 1;
            local_58 = FUN_143f29dde;
            local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
            FUN_148a7d3da(&local_78,param_1,&local_58,param_3);
            plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
            plVar6[1] = (longlong)&DAT_100000001;
            *plVar6 = (longlong)&PTR_FUN_14b4eb530;
            pcVar1 = (code *)(plVar6 + 2);
            local_68 = local_78;
            local_78 = (undefined8 *)0x0;
            local_60 = local_70;
            local_70 = 0;
            local_58 = (code *)0x0;
            local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
            FUN_148a92ac4(&local_58,&local_68);
            FUN_148a813a2(pcVar1,param_2,param_1,&local_58);
            plVar6[2] = (longlong)&PTR_FUN_14b4e8220;
            plVar6[6] = (longlong)&PTR_FUN_14b4e8248;
            if (local_60 == 0) {
LAB_143f29c2f:
              if (local_68 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_68 != (undefined8 *)0x0) {
              (**(code **)*local_68)(local_68,0);
              FUN_1446efa72(&local_68,0,0,0x10);
              local_60 = 0;
              goto LAB_143f29c2f;
            }
            if ((pcVar1 == (code *)0x0) ||
               (((plVar6[3] != 0 && (plVar6[4] != 0)) && (0 < *(int *)(plVar6[4] + 8))))) {
              bVar3 = true;
              if (plVar6 != (longlong *)0x0) goto LAB_143f29d04;
            }
            else if (plVar6 == (longlong *)0x0) {
              _DAT_00000018 = 0x10;
              plVar10 = (longlong *)&DAT_00000020;
              plVar9 = _DAT_00000020;
              if (_DAT_00000020 != (longlong *)0x0) {
LAB_143f29cba:
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
                *plVar10 = (longlong)plVar6;
                if (plVar6 != (longlong *)0x0) goto LAB_143f29cdd;
              }
              bVar3 = true;
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              plVar6[3] = (longlong)pcVar1;
              if ((longlong *)plVar6[4] != plVar6) {
                LOCK();
                *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
                UNLOCK();
                plVar9 = (longlong *)plVar6[4];
                if (plVar9 != (longlong *)0x0) {
                  plVar10 = plVar6 + 4;
                  goto LAB_143f29cba;
                }
                plVar6[4] = (longlong)plVar6;
              }
LAB_143f29cdd:
              LOCK();
              plVar9 = plVar6 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
LAB_143f29d04:
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              bVar3 = false;
            }
            local_58 = pcVar1;
            local_50 = plVar6;
            FUN_145837c4c(param_1 + 0x30,&local_58);
            plVar9 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_50 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            if (!bVar3) {
              LOCK();
              plVar9 = plVar6 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
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
            if (local_70 != 0) {
              if (local_78 == (undefined8 *)0x0) goto LAB_143f29a9c;
              (**(code **)*local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              local_70 = 0;
            }
            if (local_78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_143f29a9c;
          }
          break;
        }
        iVar7 = *(int *)(lVar4 + 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((int)param_3[1] != 0) {
    plVar6 = (longlong *)*param_3;
    if (plVar6 == (longlong *)0x0) goto LAB_143f29ad7;
    (**(code **)(*plVar6 + 0x60))(plVar6,param_2);
  }
LAB_143f29a9c:
  puVar8 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar8 == (undefined8 *)0x0) goto LAB_143f29ad7;
    (**(code **)*puVar8)(puVar8,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar8 = (undefined8 *)*param_3;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f29ad7:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f29dde FUN_143f29dde body=152 status=ok
// SIG undefined FUN_143f29dde(void)

void FUN_143f29dde(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_148a8d43a(param_1 + 0x1d0,param_3);
  FUN_146062814(param_1,param_3);
  if (((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
  }
  FUN_1401861f4(param_1 + 0x58,param_3);
  if ((int)param_4[1] != 0) {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f29e76 FUN_143f29e76 body=702 status=ok
// SIG undefined FUN_143f29e76(void)

void FUN_143f29e76(code *param_1,undefined1 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_39 = param_2;
  if (param_1[0x221] == (code)0x1) {
LAB_143f29ea1:
    if ((int)param_3[1] != 0) {
      plVar3 = (longlong *)*param_3;
      if (plVar3 == (longlong *)0x0) goto LAB_143f29ef2;
      (**(code **)(*plVar3 + 0x60))(plVar3,0);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar5 = 0;
      iVar10 = 0;
      iVar8 = 0;
    }
    else {
      pcVar11 = *(code **)(param_1 + 0x1f0);
      if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
        pcVar11 = param_1 + 0x1e0;
      }
      uVar6 = *(uint *)pcVar11;
      if (uVar6 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar5 = 0;
        uVar14 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar14 = uVar5;
        }
        iVar10 = 0;
        do {
          if (uVar14 == uVar5) goto LAB_143f2a085;
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)(pcVar11 + (uVar5 + 1) * 4);
          uVar5 = uVar5 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar5 = 0;
        iVar10 = 0;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      iVar12 = iVar12 >> 5;
      uVar6 = 0xffffffff;
      do {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8 + (longlong)iVar8 * 0x20);
        if ((*(char *)(lVar15 + 4) != '\x01') || (*(char *)(lVar15 + 5) == '\x01'))
        goto LAB_143f29ea1;
        uVar6 = uVar6 & ~(uint)uVar14;
        pcVar11 = *(code **)(param_1 + 0x1f0);
        if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
          pcVar11 = param_1 + 0x1e0;
        }
        iVar8 = (int)uVar5;
        lVar15 = (longlong)iVar8;
        uVar9 = *(uint *)(pcVar11 + lVar15 * 4) & uVar6;
        if (uVar9 == 0) {
          iVar13 = iVar12;
          if (iVar12 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar12 <= iVar8) break;
          lVar7 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar9 = *(uint *)(pcVar11 + (lVar15 + lVar7 + 1) * 4);
            if (uVar9 != 0) break;
            lVar7 = lVar7 + 1;
            if (iVar13 - lVar15 == lVar7) goto LAB_143f2a085;
          }
          uVar5 = (ulonglong)(iVar8 + (int)lVar7 + 1);
          uVar6 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar8 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar2);
    }
LAB_143f2a085:
    local_60 = FUN_148a7d6ae;
    local_58 = 0;
    FUN_148a7d5e6(&local_50,param_1,&local_60,param_3);
    local_60 = param_1;
    FUN_148a7d4ea(param_1 + 0x30,&local_60,&local_39,&local_50);
    if (local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_143f29eb7;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f29eb7:
  puVar4 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f29ef2;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar4 = (undefined8 *)*param_3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f29ef2:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2a136 FUN_143f2a136 body=504 status=ok
// SIG undefined FUN_143f2a136(void)

void FUN_143f2a136(code *param_1,uint param_2,undefined1 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  code *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  int local_40;
  uint local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  local_31 = param_3;
  if (param_1[0x221] == (code)0x1) {
    uVar3 = FUN_143f2a330(param_1,param_2);
    if ((int)param_4[1] != 0) {
      plVar2 = (longlong *)*param_4;
      if (plVar2 == (longlong *)0x0) goto LAB_143f2a2fe;
      (**(code **)(*plVar2 + 0x60))(plVar2,uVar3,param_2);
    }
  }
  else {
    if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
      pcVar4 = param_1 + 0x208;
      if (*(code **)(param_1 + 0x210) != (code *)0x0) {
        pcVar4 = *(code **)(param_1 + 0x210);
      }
      iVar5 = *(int *)(pcVar4 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar5 * 0x20;
          if (*(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar5 * 0x20) == param_2) {
            if (((lVar1 != 0) && ((longlong *)(lVar1 + 8) != (longlong *)0x0)) &&
               ((lVar1 = *(longlong *)(lVar1 + 8), *(char *)(lVar1 + 4) != '\x01' ||
                (*(char *)(lVar1 + 5) == '\x01')))) {
              if ((int)param_4[1] == 0) goto LAB_143f2a2c7;
              plVar2 = (longlong *)*param_4;
              if (plVar2 == (longlong *)0x0) goto LAB_143f2a2fe;
              (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(lVar1 + 0x28),param_2);
              goto LAB_143f2a2c7;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x18);
        } while (iVar5 != -1);
      }
    }
    local_58 = FUN_148a7d8da;
    local_50 = 0;
    FUN_148a7d812(&local_48,param_1,&local_58,param_4);
    local_68 = &local_48;
    local_58 = param_1;
    FUN_148a7d6d8(param_1 + 0x30,&local_38,&local_58,&local_31);
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_143f2a2c7;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f2a2c7:
  puVar6 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_143f2a2fe;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar6 = (undefined8 *)*param_4;
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f2a2fe:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2a330 FUN_143f2a330 body=141 status=ok
// SIG undefined FUN_143f2a330(void)

undefined4 FUN_143f2a330(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar3 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x210);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
      iVar4 = iVar2;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar4 * 0x20) == param_2) goto LAB_143f2a3a0;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  return 2;
  while (iVar2 = *(int *)(lVar1 + 0x18), iVar2 != -1) {
LAB_143f2a3a0:
    lVar1 = lVar3 + (longlong)iVar2 * 0x20;
    if (*(uint *)(lVar3 + (longlong)iVar2 * 0x20) == param_2) goto LAB_143f2a3b5;
  }
  lVar1 = 0;
LAB_143f2a3b5:
  return *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x28);
}



// FUNCTION 143f2a3be FUN_143f2a3be body=597 status=ok
// SIG undefined FUN_143f2a3be(void)

void FUN_143f2a3be(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_54;
  undefined4 local_50;
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[0x3b] != *(int *)((longlong)param_1 + 0x204)) {
    plVar8 = param_1 + 0x41;
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x42];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x43] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar2 = param_1[0x3a];
      iVar4 = iVar7;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == param_2) {
          local_50 = FUN_143f2a330(param_1,param_2);
          goto LAB_143f2a476;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_143f2a440;
  while (iVar7 = *(int *)(lVar9 + 0x18), iVar7 != -1) {
LAB_143f2a476:
    lVar9 = lVar2 + (longlong)iVar7 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar7 * 0x20) == param_2) goto LAB_143f2a493;
  }
  lVar9 = 0;
LAB_143f2a493:
  lVar2 = *(longlong *)(lVar9 + 8);
  puVar3 = *(undefined8 **)(lVar9 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  *(int *)(lVar2 + 0x20) = param_4;
  if (0x17 < *(int *)(lVar2 + 0x28)) {
    if (param_4 == 0) {
      uVar5 = 0x18;
    }
    else if (param_4 == 1) {
      uVar5 = 0x19;
    }
    else {
      uVar5 = *(int *)(lVar2 + 0x24) == 2 | 0x1a;
    }
    *(uint *)(lVar2 + 0x28) = uVar5;
  }
  uVar6 = FUN_143f2a330(param_1,param_2);
  lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar9 != 0) && (lVar9 = FUN_1400f6f32(lVar9), lVar9 != 0)) &&
      (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 != 0)) &&
     (local_54 = uVar6, FUN_140ceec26(lVar9,local_4c), uVar6 = local_54, -1 < local_4c[0])) {
    FUN_145ff15e4(lVar9,local_4c);
    uVar6 = local_54;
  }
  lVar9 = FUN_1400b465c(param_1);
  if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x40) != 0)) {
    lVar10 = 0;
    do {
      plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x38) + lVar10);
      if ((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 0x1c) == param_2)) {
        iVar7 = (**(code **)(*plVar8 + 0x328))();
        if (iVar7 == 0) {
          if (param_4 != 0) goto LAB_143f2a5b2;
          goto LAB_143f2a5a0;
        }
        break;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(lVar9 + 0x40) * 8 != lVar10);
  }
  if ((param_4 == 0) && (*(char *)(lVar2 + 4) == '\0')) {
LAB_143f2a5a0:
    *(undefined1 *)(lVar2 + 7) = 1;
    FUN_1447f69b6(param_1 + 0x17);
  }
LAB_143f2a5b2:
  local_68 = 0;
  FUN_143f2a89a(param_1,param_2,param_3,param_4);
  FUN_148a8e8c0(param_1 + 0xe,param_2,local_50,uVar6);
  if (puVar3 != (undefined8 *)0x0) {
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
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
LAB_143f2a440:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2a62e FUN_143f2a62e body=593 status=ok
// SIG undefined FUN_143f2a62e(void)

void FUN_143f2a62e(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_54;
  undefined4 local_50;
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[0x3b] != *(int *)((longlong)param_1 + 0x204)) {
    plVar8 = param_1 + 0x41;
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x42];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x43] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar2 = param_1[0x3a];
      iVar4 = iVar7;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == param_2) {
          local_50 = FUN_143f2a330(param_1,param_2);
          goto LAB_143f2a6e6;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_143f2a6b0;
  while (iVar7 = *(int *)(lVar9 + 0x18), iVar7 != -1) {
LAB_143f2a6e6:
    lVar9 = lVar2 + (longlong)iVar7 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar7 * 0x20) == param_2) goto LAB_143f2a703;
  }
  lVar9 = 0;
LAB_143f2a703:
  lVar2 = *(longlong *)(lVar9 + 8);
  puVar3 = *(undefined8 **)(lVar9 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  *(int *)(lVar2 + 0x24) = param_4;
  if (0x17 < *(int *)(lVar2 + 0x28)) {
    if (*(int *)(lVar2 + 0x20) == 0) {
      uVar5 = 0x18;
    }
    else if (*(int *)(lVar2 + 0x20) == 1) {
      uVar5 = 0x19;
    }
    else {
      uVar5 = param_4 == 2 | 0x1a;
    }
    *(uint *)(lVar2 + 0x28) = uVar5;
  }
  uVar6 = FUN_143f2a330(param_1,param_2);
  lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar9 != 0) && (lVar9 = FUN_1400f6f32(lVar9), lVar9 != 0)) &&
      (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 != 0)) &&
     (local_54 = uVar6, FUN_140ceec26(lVar9,local_4c), uVar6 = local_54, -1 < local_4c[0])) {
    FUN_1488c25d4(lVar9,local_4c);
    uVar6 = local_54;
  }
  lVar9 = FUN_1400b465c(param_1);
  if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x40) != 0)) {
    lVar10 = 0;
    do {
      plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x38) + lVar10);
      if ((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 0x1c) == param_2)) {
        iVar7 = (**(code **)(*plVar8 + 0x328))();
        if (iVar7 == 0) {
          if (param_4 != 0) goto LAB_143f2a81e;
          goto LAB_143f2a812;
        }
        break;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(lVar9 + 0x40) * 8 != lVar10);
  }
  if ((param_4 == 0) && (*(char *)(lVar2 + 4) == '\0')) {
LAB_143f2a812:
    FUN_1447f69b6(param_1 + 0x17);
  }
LAB_143f2a81e:
  local_68 = 1;
  FUN_143f2a89a(param_1,param_2,param_3,param_4);
  FUN_148a8e8c0(param_1 + 0xe,param_2,local_50,uVar6);
  if (puVar3 != (undefined8 *)0x0) {
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
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
LAB_143f2a6b0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2a89a FUN_143f2a89a body=705 status=ok
// SIG undefined FUN_143f2a89a(void)

void FUN_143f2a89a(longlong *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_50 [2];
  ulonglong local_40;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_1460695f4();
  if (plVar2 == (longlong *)0x0) goto LAB_143f2aa0f;
  lVar3 = FUN_1400b465c(param_1);
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x40))) {
    lVar3 = **(longlong **)(lVar3 + 0x38);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar3);
    }
    else if (lVar3 == 0) goto LAB_143f2a98f;
    if (*(int *)(lVar3 + 0xe0) == param_2) {
      if ((param_4 == 1) || (param_4 == 0 && (param_5 ^ 1) == 0)) {
        (**(code **)(*param_1 + 0x368))(param_1,local_50,uVar4 & 0xffffffff);
        FUN_148a7d980(param_1,local_50);
        if (local_50[0] != (longlong *)0x0) {
          (**(code **)(*local_50[0] + 0x10))();
        }
        if (param_5 != 0) {
          (**(code **)(*param_1 + 0x408))(param_1,param_2);
          cVar1 = (**(code **)(*param_1 + 0x418))(param_1,param_2);
          if (cVar1 != '\0') {
            (**(code **)(*param_1 + 0x420))(param_1,param_2);
          }
        }
        if (param_3 == 2) {
          (**(code **)(*param_1 + 0x370))(param_1,uVar4 & 0xffffffff);
        }
      }
      else if (param_4 == 2) {
        if (param_5 == 0) {
          local_68 = 0;
          uStack_60 = 0;
          FUN_143f2a136(param_1,param_2,0);
        }
        FUN_148a7d9e0(param_1);
        if ((param_3 != 1 & (param_3 != 0 | param_5 ^ 1)) == 0) {
          (**(code **)(*param_1 + 0x378))(param_1,uVar4 & 0xffffffff);
          if (param_5 != 0) {
            (**(code **)(*param_1 + 1000))(param_1,param_2);
          }
        }
      }
      else if (param_4 == 0) {
        (**(code **)(*plVar2 + 0x498))(plVar2);
        (**(code **)(*param_1 + 0x3f8))(param_1,param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
      }
      goto LAB_143f2aa0f;
    }
  }
LAB_143f2a98f:
  if ((param_4 == 1) || (param_4 == 0 && (param_5 ^ 1) == 0)) {
    (**(code **)(*param_1 + 0x368))(param_1,local_50,uVar4 & 0xffffffff);
    FUN_148a7d980(param_1,local_50);
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (param_5 != 0) {
      (**(code **)(*param_1 + 0x408))(param_1,param_2);
      cVar1 = (**(code **)(*param_1 + 0x418))(param_1,param_2);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x420))(param_1,param_2);
      }
    }
  }
  else if (param_4 == 0) {
    (**(code **)(*param_1 + 0x3f8))(param_1,param_2);
    local_78 = 0;
    uStack_70 = 0;
    FUN_143f299f4(param_1,param_2);
  }
  else if (param_4 == 2 && (param_5 ^ 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
LAB_143f2aa0f:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2ab8c FUN_143f2ab8c body=142 status=ok
// SIG undefined FUN_143f2ab8c(void)

undefined8 FUN_143f2ab8c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = FUN_1460695f4();
  if (lVar4 == 0) {
LAB_143f2abd8:
    *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  }
  else {
    plVar2 = *(longlong **)(lVar4 + 0x48);
    if (plVar2 != (longlong *)0x0) {
      lVar4 = FUN_140b7066c();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (cVar3 = (**(code **)(*plVar2 + 0x380))(plVar2), cVar3 != '\0'))
      goto LAB_143f2abd8;
    }
    if (*(int *)(param_1 + 0x1b8) != -1) {
      return 1;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return 0;
}



// FUNCTION 143f2ac1a FUN_143f2ac1a body=124 status=ok
// SIG undefined FUN_143f2ac1a(void)

undefined8 FUN_143f2ac1a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20) == param_2) {
          if ((longlong *)(lVar1 + 8) == (longlong *)0x0 || lVar1 == 0) {
            return 0;
          }
          lVar1 = *(longlong *)(lVar1 + 8);
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 4));
        }
        iVar2 = *(int *)(lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 143f2ac96 FUN_143f2ac96 body=125 status=ok
// SIG undefined FUN_143f2ac96(void)

ulonglong FUN_143f2ac96(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  if (0x17 < param_2) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (*(int *)(lVar2 + 0x1d8) != *(int *)(lVar2 + 0x204)) {
      uVar1 = *(uint *)(param_1 + 0x30);
      lVar3 = lVar2 + 0x208;
      if (*(longlong *)(lVar2 + 0x210) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x210);
      }
      iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x218) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)(lVar2 + 0x1d0);
        iVar6 = iVar5;
        do {
          if (*(uint *)(lVar2 + (longlong)iVar6 * 0x20) == uVar1) goto LAB_1415b1d5f;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar2 + 0x18);
        } while (iVar6 != -1);
      }
    }
    return 2;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar2 + 0x1d8) != *(int *)(lVar2 + 0x204)) {
    lVar3 = lVar2 + 0x208;
    if (*(longlong *)(lVar2 + 0x210) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x210);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x218) - 1U & *(uint *)(param_1 + 0x30)) *
                             4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x1d0) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(lVar2 + 0x1d0) + (longlong)iVar5 * 0x20) ==
            *(uint *)(param_1 + 0x30)) goto LAB_143f2ad07;
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_143f2ad07:
  *(int *)(*(longlong *)(lVar3 + 8) + 0x28) = param_2;
  uVar4 = FUN_1415b1ce8();
  return uVar4;
  while (iVar5 = *(int *)(lVar3 + 0x18), iVar5 != -1) {
LAB_1415b1d5f:
    lVar3 = lVar2 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar5 * 0x20) == uVar1) goto LAB_1415b1d74;
  }
  lVar3 = 0;
LAB_1415b1d74:
  return (ulonglong)*(uint *)(*(longlong *)(lVar3 + 8) + 0x28);
}



// FUNCTION 143f2ad14 FUN_143f2ad14 body=237 status=ok
// SIG undefined FUN_143f2ad14(void)

undefined8 FUN_143f2ad14(longlong param_1,undefined4 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar3 + 0x1d8) != *(int *)(lVar3 + 0x204)) {
    uVar4 = *(uint *)(param_1 + 0x30);
    lVar2 = lVar3 + 0x208;
    if (*(longlong *)(lVar3 + 0x210) != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x210);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar3 + 0x218) - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x1d0);
      iVar6 = iVar5;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0x20) == uVar4) {
          if (param_3 == '\0') goto LAB_143f2adaa;
          goto LAB_143f2ad83;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar3 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return 0;
  while (iVar5 = *(int *)(lVar2 + 0x18), iVar5 != -1) {
LAB_143f2ad83:
    lVar2 = lVar3 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x20) == uVar4) goto LAB_143f2ada1;
  }
  lVar2 = 0;
LAB_143f2ada1:
  lVar3 = *(longlong *)(lVar2 + 8);
  *(undefined4 *)(lVar3 + 0x24) = param_2;
  goto LAB_143f2adcf;
  while (iVar5 = *(int *)(lVar2 + 0x18), iVar5 != -1) {
LAB_143f2adaa:
    lVar2 = lVar3 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x20) == uVar4) goto LAB_143f2adc8;
  }
  lVar2 = 0;
LAB_143f2adc8:
  lVar3 = *(longlong *)(lVar2 + 8);
  *(undefined4 *)(lVar3 + 0x20) = param_2;
LAB_143f2adcf:
  uVar1 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  if (*(int *)(lVar3 + 0x28) < 0x18) {
    return uVar1;
  }
  if (*(int *)(lVar3 + 0x20) == 0) {
    uVar4 = 0x18;
  }
  else if (*(int *)(lVar3 + 0x20) == 1) {
    uVar4 = 0x19;
  }
  else {
    uVar4 = *(int *)(lVar3 + 0x24) == 2 | 0x1a;
  }
  *(uint *)(lVar3 + 0x28) = uVar4;
  return uVar1;
}



// FUNCTION 143f2ae02 FUN_143f2ae02 body=138 status=ok
// SIG undefined FUN_143f2ae02(void)

undefined4 FUN_143f2ae02(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  
  cVar2 = FUN_143f2ad14();
  uVar3 = 2;
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (*(int *)(lVar1 + 0x1d8) != *(int *)(lVar1 + 0x204)) {
      lVar4 = lVar1 + 0x208;
      if (*(longlong *)(lVar1 + 0x210) != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x210);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x218) - 1U & *(uint *)(param_1 + 0x30))
                               * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(lVar1 + 0x1d0) + (longlong)iVar5 * 0x20;
          if (*(uint *)(*(longlong *)(lVar1 + 0x1d0) + (longlong)iVar5 * 0x20) ==
              *(uint *)(param_1 + 0x30)) goto LAB_143f2ae7f;
          iVar5 = *(int *)(lVar4 + 0x18);
        } while (iVar5 != -1);
      }
    }
    lVar4 = 0;
LAB_143f2ae7f:
    uVar3 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x28);
  }
  return uVar3;
}



// FUNCTION 143f2ae8c FUN_143f2ae8c body=481 status=ok
// SIG undefined FUN_143f2ae8c(void)

void FUN_143f2ae8c(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [2];
  LARGE_INTEGER local_68 [2];
  undefined ***local_58;
  undefined2 local_4a;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_14350bf76(0);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_1414354ce(param_1);
    if (plVar4 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar4 + 0x4a0))(plVar4);
      if (cVar2 != '\0') goto LAB_143f2af10;
    }
    QueryPerformanceCounter(local_68);
    *(double *)(param_1 + 0x60) = (double)local_68[0].QuadPart * DAT_14c83f420 + 16777216.0;
    uVar3 = FUN_140635a7c();
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    FUN_14350c05a(0);
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_146581584(param_1);
      *(undefined1 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x8c) < 100) {
        FUN_14482f6fa(param_1 + 0x80,100);
      }
      if (*(int *)(param_1 + 0x9c) < 100) {
        FUN_140cb0586(param_1 + 0x90,100);
      }
      local_78[0] = 0;
      local_78[1] = 0;
      local_4a = 0x30;
      FUN_1400020e8(local_78,&local_4a,1);
      FUN_140056680(local_68,L"TitleActivateCompilingShadersText");
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
                (*(longlong **)(param_1 + 0x38),local_68,local_78);
      if ((code *)local_68[0].QuadPart != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = FUN_1401cb356();
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b4eb9c0;
      local_68[0].QuadPart = (LONGLONG)FUN_143f31f28;
      local_98 = local_68;
      local_40 = param_1;
      FUN_1401cbba4(uVar5,local_88,L"FGbxLoginTask_CompileShaders",0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if ((code *)local_68[0].QuadPart != (code *)0x0) {
        pppuVar6 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar6 = &local_48;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      goto LAB_143f2af14;
    }
  }
LAB_143f2af10:
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f2af14:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2b06e FUN_143f2b06e body=490 status=ok
// SIG undefined FUN_143f2b06e(void)

void FUN_143f2b06e(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)FUN_140a68038(1);
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    uVar7 = 0x18;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
    uVar7 = 0x18;
    if ((local_38 != (longlong *)0x0) &&
       (iVar4 = (**(code **)(*local_38 + 0x138))(local_38,*(undefined4 *)(param_1 + 0x30)),
       iVar4 != 0)) {
      if (iVar4 == 1) {
        uVar7 = 0x19;
      }
      else {
        (**(code **)(*local_38 + 0x118))(local_38,&local_48);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        uVar7 = 0xf;
        if ((local_48 == 0) && (uVar7 = 0x1b, *(char *)(param_1 + 0x6f) == '\x01')) {
          iVar4 = *(int *)(param_1 + 0x30);
          lVar6 = FUN_1414354ce(param_1);
          if (lVar6 != 0) {
            if ((longlong)*(int *)(lVar6 + 0x40) == 0) {
              param_4 = 0;
            }
            else {
              lVar8 = 0;
              do {
                lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar8);
                if ((lVar3 != 0) && (param_4 = 1, *(int *)(lVar3 + 0xe0) == iVar4)) break;
                lVar8 = lVar8 + 8;
                param_4 = 0;
              } while ((longlong)*(int *)(lVar6 + 0x40) * 8 != lVar8);
            }
          }
          uVar7 = 0x10;
          if ((param_4 & 1) == 0) {
            uVar7 = 0x1b;
          }
          if (lVar6 == 0) {
            uVar7 = 0x1b;
          }
        }
      }
    }
  }
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (0x19 < uVar7) {
LAB_143f2b20d:
      *(uint *)(param_1 + 0x40) = uVar7;
      *(undefined1 *)(param_1 + 0x6c) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else if (0x18 < uVar7) goto LAB_143f2b20d;
  if ((uVar7 == 0x18) && (*(char *)(param_1 + 0x6d) == '\x01')) {
    *(undefined1 *)(param_1 + 0x6d) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (*(char *)(param_1 + 0x6e) == '\x01') {
    *(undefined1 *)(param_1 + 0x6e) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(uint *)(param_1 + 0x40) = uVar7;
  *(bool *)(param_1 + 0x6c) = 0x18 < uVar7;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_145ff1340(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2b27c FUN_143f2b27c body=54 status=ok
// SIG undefined FUN_143f2b27c(void)

void FUN_143f2b27c(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_14480f766(param_1[7] + 0xb8);
    param_1[10] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f2b2ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



// FUNCTION 143f2b2b2 FUN_143f2b2b2 body=1306 status=ok
// SIG undefined FUN_143f2b2b2(void)

void FUN_143f2b2b2(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined8 *local_a0 [2];
  longlong local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  longlong *local_68;
  longlong *local_60;
  code *local_58;
  code *local_50;
  undefined8 *local_48;
  int local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = FUN_1414354ce();
  if (lVar5 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    goto LAB_143f2b2ea;
  }
  FUN_14658150c(param_1,&local_c8);
  if (local_c8 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar4 = FUN_1415b1ce8(param_1);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
  }
  else {
    iVar3 = (**(code **)(*local_c8 + 0x138))(local_c8,*(undefined4 *)(param_1 + 0x30));
    FUN_143f2ad14(param_1,iVar3,1);
    if (iVar3 == 1) {
      uVar4 = FUN_1415b1ce8(param_1);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
    }
    else if (iVar3 == 2) {
      uVar4 = FUN_1415b1ce8(param_1);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      *(undefined1 *)(param_1 + 0x18) = 1;
      goto LAB_143f2b459;
    }
    plVar6 = (longlong *)FUN_140a68038(1);
    if (plVar6 == (longlong *)0x0) {
      local_d8 = (longlong *)0x0;
      plStack_d0 = (longlong *)0x0;
LAB_143f2b427:
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_1 + 0x40) = 0x19;
    }
    else {
      (**(code **)(*plVar6 + 0x80))(plVar6,&local_d8);
      if ((local_d8 == (longlong *)0x0) || (local_d8 == local_c8)) goto LAB_143f2b427;
      (**(code **)(*local_d8 + 0x110))(local_d8,&local_e8,*(undefined4 *)(param_1 + 0x30));
      if ((local_e8 == 0) ||
         (iVar3 = (**(code **)(*local_d8 + 0x130))(), plVar6 = local_e0, iVar3 != 2)) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(undefined4 *)(param_1 + 0x40) = 0x18;
      }
      else {
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
          UNLOCK();
        }
        FUN_14658150c(param_1,&local_68);
        if (local_68 == (longlong *)0x0) {
          *(undefined1 *)(param_1 + 0x18) = 1;
          uVar4 = FUN_1415b1ce8(param_1);
          *(undefined4 *)(param_1 + 0x40) = uVar4;
        }
        else {
          plVar7 = (longlong *)FUN_140a68038(1);
          if (plVar7 == (longlong *)0x0) {
            *(undefined1 *)(param_1 + 0x18) = 1;
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
          else {
            local_80 = 0;
            uStack_78 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_70 = 0;
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_a8);
            local_b8 = local_a8;
            FUN_1446f470e(&local_38,&DAT_14b4367f4,1);
            if (local_38 == local_a8) {
              pcVar9 = "xboxlive";
LAB_143f2b5d0:
              FUN_1400b22c2(&local_48,pcVar9);
            }
            else {
              if ((DAT_14cb8e1d8 == local_a8) ||
                 (FUN_1446f470e(&local_50,&DAT_14b4367ec,1), local_50 == local_a8)) {
                pcVar9 = "psn";
                goto LAB_143f2b5d0;
              }
              if (DAT_14cb8e468 == local_a8) {
                pcVar9 = "steam";
                goto LAB_143f2b5d0;
              }
              FUN_1446f470e(&local_58,L"EPIC",1);
              if (local_58 == local_a8) {
                pcVar9 = "epic";
                goto LAB_143f2b5d0;
              }
              if (DAT_14cb8e210 == local_a8) {
                pcVar9 = "nintendo";
                goto LAB_143f2b5d0;
              }
              FUN_1400021e4(&local_b8,&local_48);
              uVar8 = local_40 - 1;
              if (local_40 == 0) {
                uVar8 = 0;
              }
              if (0 < (int)uVar8) {
                uVar10 = 0;
                do {
                  uVar2 = *(ushort *)((longlong)local_48 + uVar10 * 2);
                  *(ushort *)((longlong)local_48 + uVar10 * 2) =
                       (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
                  uVar10 = uVar10 + 1;
                } while (uVar8 != uVar10);
              }
            }
            plVar7 = local_68;
            local_b8 = FUN_14164a37c;
            local_b0 = 0;
            local_a0[0] = local_48;
            FUN_1465816c4(&local_48,param_1);
            (**(code **)(*plVar7 + 0x90))
                      (plVar7,&local_b8,*(undefined4 *)(param_1 + 0x30),&local_48);
            *(code **)(param_1 + 0x58) = local_b8;
            if (local_40 == 0) {
LAB_143f2b687:
              if (local_48 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_48 != (undefined8 *)0x0) {
              (**(code **)*local_48)(local_48,0);
              FUN_1446efa72(&local_48,0,0,0x10);
              local_40 = 0;
              goto LAB_143f2b687;
            }
            (**(code **)(*local_68 + 0x88))(local_68,*(undefined4 *)(param_1 + 0x30),local_a0);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            if (local_a0[0] != (undefined8 *)0x0) {
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
        if (plVar6 != (longlong *)0x0) {
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
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_e0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
    }
    plVar6 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_d0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
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
LAB_143f2b459:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
LAB_143f2b2ea:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2b7ce FUN_143f2b7ce body=142 status=ok
// SIG undefined FUN_143f2b7ce(void)

void FUN_143f2b7ce(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1414354ce();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1e0) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x30), lVar2 != 0)) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      cVar1 = FUN_14480f766(lVar2 + 0x298);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      cVar1 = FUN_14480f766(lVar2 + 0x280);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14480f766(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 143f2b85c FUN_143f2b85c body=307 status=ok
// SIG undefined FUN_143f2b85c(void)

void FUN_143f2b85c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_44 = param_2;
  FUN_143f2b7ce();
  local_40 = (undefined8 *)&LAB_143f2b990;
  local_38 = 0;
  FUN_148a7e954(&local_58,param_1,&local_40);
  local_40 = local_58;
  local_58 = (undefined8 *)0x0;
  local_38 = local_50;
  local_50 = 0;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x330))
                    (*(longlong **)(param_1 + 0x38),&local_44,&local_40);
  if (local_50 == 0) {
LAB_143f2b915:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143f2b915;
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar2 == 0) {
    if (lVar1 == 0) goto LAB_143f2b967;
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar1 == lVar2) goto LAB_143f2b967;
    if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar2);
  }
  *(longlong *)(param_1 + 0x88) = lVar2;
LAB_143f2b967:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2ba1a FUN_143f2ba1a body=3474 status=ok
// SIG undefined FUN_143f2ba1a(void)

void FUN_143f2ba1a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = FUN_145d47f82();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar6 = FUN_14054d46e(&DAT_14c846b20,L"SkipInitialPatchDiscovery");
  if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_143f2bada:
    *local_58 = (longlong)&PTR_LAB_14b4ede20;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_58[2] = lVar11;
    *local_58 = (longlong)&PTR_FUN_14b4ec0a0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = param_1;
    local_58[6] = lVar9;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143f2bada;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar15 = iVar7 == iVar8;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      UNLOCK();
    } while (!bVar15);
    lVar14 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_58 = (longlong)&PTR_LAB_14b4ede20;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_58[2] = lVar13;
    *local_58 = (longlong)&PTR_FUN_14b4ec0a0;
    local_58[3] = lVar14;
    local_58[4] = (longlong)plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_58[5] = param_1;
    local_58[6] = lVar9;
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
  FUN_146146674(lVar2 + 0x70,local_68,&local_58);
  if (local_50 == 0) {
LAB_143f2bb6a:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143f2bb6a;
  }
  *(longlong *)(param_1 + 0x50) = local_68[0];
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_143f2bc95:
    *local_58 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_58[2] = lVar11;
    *local_58 = (longlong)&PTR_FUN_14b4ec110;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = param_1;
    local_58[6] = lVar9;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_143f2bc95;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar15 = iVar7 == iVar8;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      UNLOCK();
    } while (!bVar15);
    lVar14 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_58 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_58[2] = lVar13;
    *local_58 = (longlong)&PTR_FUN_14b4ec110;
    local_58[3] = lVar14;
    local_58[4] = (longlong)plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_58[5] = param_1;
    local_58[6] = lVar9;
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
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*local_58 + 0x30))(), cVar6 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) {
        lVar14 = 0;
        goto LAB_143f2bf1e;
      }
      lVar14 = 0;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_143f2bf08;
    }
    lVar14 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0xb8);
    if (*(int *)(lVar2 + 0xcc) < 1) {
      iVar7 = *(int *)(lVar2 + 0xc0);
      iVar8 = *(int *)(lVar2 + 200) + -1;
      *(int *)(lVar2 + 200) = iVar8;
      if (iVar8 <= iVar7) {
        iVar8 = iVar7;
        if (0 < iVar7) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar3 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar3 + (longlong)iVar12 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
              FUN_14005b288(plVar3,iVar12);
              FUN_14005b248(plVar3);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar8 = *(int *)(lVar2 + 0xc0);
          } while (iVar12 < iVar8);
        }
        iVar12 = 2;
        if (2 < iVar8 * 2) {
          iVar12 = iVar8 * 2;
        }
        *(int *)(lVar2 + 200) = iVar12;
        if ((iVar12 < iVar7) && (*(int *)(lVar2 + 0xc4) != iVar8)) {
          FUN_14045812c();
        }
      }
    }
    lVar14 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_68);
      lVar14 = local_68[0];
    }
    iVar7 = *(int *)(lVar2 + 0xc0);
    *(uint *)(lVar2 + 0xc0) = iVar7 + 1U;
    if (*(uint *)(lVar2 + 0xc4) < iVar7 + 1U) {
      FUN_1447a71f6(plVar3,iVar7);
    }
    lVar2 = *plVar3;
    lVar11 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar2 + lVar11) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar11) = 0;
    *(longlong **)(lVar2 + lVar11) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar11) = local_50;
LAB_143f2bf08:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f2bf1e:
  *(longlong *)(param_1 + 0x58) = lVar14;
  FUN_140056680(&local_58,&DAT_149dfb77a);
  FUN_140056680(local_68,L"TitleActivatePatchText");
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
            (*(longlong **)(param_1 + 0x38),local_68,&local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  cVar6 = FUN_140b3f358();
  if (cVar6 == '\0') {
    if (*(int *)(lVar9 + 0x20) != 3) {
      FUN_1446efa72((longlong *)(lVar9 + 0x18),0,3,0x10);
      *(undefined4 *)(lVar9 + 0x20) = 3;
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x18);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143f2c087:
      *puVar5 = &PTR_LAB_14b4ec1f0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec180;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143f2c087;
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar15 = iVar7 == iVar8;
        if (bVar15) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar15);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b4ec1f0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec180;
      puVar5[3] = uVar10;
      puVar5[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      puVar5[5] = param_1;
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
    if (*(int *)(lVar9 + 0x30) != 3) {
      FUN_1446efa72((longlong *)(lVar9 + 0x28),0,3,0x10);
      *(undefined4 *)(lVar9 + 0x30) = 3;
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x28);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143f2c1c7:
      *puVar5 = &PTR_LAB_14b4ec320;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec2b0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143f2c1c7;
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar15 = iVar7 == iVar8;
        if (bVar15) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar15);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b4ec320;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec2b0;
      puVar5[3] = uVar10;
      puVar5[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      puVar5[5] = param_1;
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
    if (*(int *)(lVar9 + 0x60) != 3) {
      FUN_1446efa72((longlong *)(lVar9 + 0x58),0,3,0x10);
      *(undefined4 *)(lVar9 + 0x60) = 3;
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x58);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143f2c307:
      *puVar5 = &PTR_LAB_14b4ec440;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec3d0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143f2c307;
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar15 = iVar7 == iVar8;
        if (bVar15) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar15);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b4ec440;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec3d0;
      puVar5[3] = uVar10;
      puVar5[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      puVar5[5] = param_1;
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
    if (*(int *)(lVar9 + 0x50) != 3) {
      FUN_1446efa72((longlong *)(lVar9 + 0x48),0,3,0x10);
      *(undefined4 *)(lVar9 + 0x50) = 3;
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x48);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143f2c447:
      *puVar5 = &PTR_LAB_14b4ec5a0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec530;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143f2c447;
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar15 = iVar7 == iVar8;
        if (bVar15) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar15);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b4ec5a0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec530;
      puVar5[3] = uVar10;
      puVar5[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      puVar5[5] = param_1;
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
    if (*(int *)(lVar9 + 0x40) != 3) {
      FUN_1446efa72((longlong *)(lVar9 + 0x38),0,3,0x10);
      *(undefined4 *)(lVar9 + 0x40) = 3;
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x38);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143f2c57c:
      *puVar5 = &PTR_LAB_14b4ec700;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec690;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143f2c57c;
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar15 = iVar7 == iVar8;
        if (bVar15) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar15);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b4ec700;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar5[2] = lVar14;
      *puVar5 = &PTR_FUN_14b4ec690;
      puVar5[3] = uVar10;
      puVar5[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      puVar5[5] = param_1;
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
    uVar10 = FUN_1414354ce(param_1);
    FUN_141541152(lVar9,0,uVar10);
  }
  else {
    uVar10 = FUN_1414354ce(param_1);
    FUN_141541152(lVar9,0,uVar10);
    FUN_1465818a0(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2c7c6 FUN_143f2c7c6 body=763 status=ok
// SIG undefined FUN_143f2c7c6(void)

void FUN_143f2c7c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a4;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x44) == 0) {
    plVar3 = (longlong *)FUN_140773fe2();
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
      lVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3,*(undefined4 *)(param_1 + 0x30),uVar4);
      if (lVar5 != 0) {
        local_c8 = &local_b0;
        local_b0 = 0x3000300000000;
        local_a8 = 3;
        local_a6 = 3;
        local_a4 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        uStack_40 = &local_c8;
        local_48 = FUN_143ef2b5a;
        bifrost::account::get(*(undefined8 *)(lVar5 + 0x2b8),&local_48);
        if ((int)uStack_90 < 2) {
          local_48 = (code *)0x0;
          uStack_40 = (longlong **)0x0;
          plVar3 = (longlong *)FUN_140a68038(1);
          if (plVar3 == (longlong *)0x0) {
            local_c8 = (longlong *)0x0;
            plStack_c0 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar3 + 0x80))(plVar3,&local_c8);
            if (local_c8 != (longlong *)0x0) {
              (**(code **)(*local_c8 + 0x148))(local_c8,&local_d8,*(undefined4 *)(param_1 + 0x30));
              local_48 = (code *)CONCAT44(uStack_d4,local_d8);
              uStack_40 = (longlong **)CONCAT44(uStack_cc,uStack_d0);
            }
          }
          plVar3 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_c0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if ((int)uStack_40 < 2) {
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
                < DAT_14c844850) {
              FUN_144b3d300(&DAT_14c844850);
              if (DAT_14c844850 == -1) {
                DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                DAT_14c844840[1] = 0;
                *DAT_14c844840 = &PTR_FUN_149e19310;
                DAT_14c844840[2] = 0xffffffffffffffff;
                DAT_14c844840[3] = 0;
                DAT_14c844840[4] = 0;
                DAT_14c844840[5] = 0;
                if (DAT_14c844840 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                  UNLOCK();
                }
                DAT_14c844848 = 0;
                atexit(FUN_142760bef);
                _Init_thread_footer(&DAT_14c844850);
              }
            }
            plVar3 = &local_48;
            if ((int)uStack_40 < 2) {
              plVar3 = &local_98;
            }
            FUN_148a7fec2(param_1,plVar3,&DAT_14c844840);
          }
          else {
            FUN_148a7fbee(param_1,&local_48);
          }
          if (local_48 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_148a7df94(param_1,1);
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        goto LAB_143f2c833;
      }
    }
  }
  FUN_148a7df94(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f2c833:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2cac2 FUN_143f2cac2 body=47 status=ok
// SIG undefined FUN_143f2cac2(void)

void FUN_143f2cac2(longlong param_1,longlong param_2)

{
  if (1 < *(int *)(param_2 + 8)) {
    FUN_148a7fbee(param_1);
    return;
  }
  FUN_148a7df94(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 143f2caf2 FUN_143f2caf2 body=259 status=ok
// SIG undefined FUN_143f2caf2(void)

void FUN_143f2caf2(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = FUN_1415b1ce8();
  if ((iVar2 < 0x18) || (*(int *)(param_1 + 0x44) != 2)) {
LAB_143f2cb45:
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
      lVar4 = FUN_14127aa70(uVar3,uVar1);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x22) != '\0')) goto LAB_143f2cb45;
    }
    FUN_148a80134(0);
    local_38 = FUN_148a8031c;
    local_30 = 0;
    FUN_148a8019a(&local_28,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3c8))
              (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),&local_28);
    if (local_20 != 0) {
      if (local_28 == (undefined8 *)0x0) goto LAB_143f2cb49;
      (**(code **)*local_28)(local_28,0);
      FUN_1446efa72(&local_28,0,0,0x10);
      local_20 = 0;
    }
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f2cb49:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2cc0c FUN_143f2cc0c body=422 status=ok
// SIG undefined FUN_143f2cc0c(void)

void FUN_143f2cc0c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  int local_60;
  code *local_58;
  longlong *local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1414354ce();
  if (lVar3 == 0) goto LAB_143f2cc33;
  local_48[0] = 0;
  local_48[1] = 0;
  lVar3 = FUN_147aa5516(lVar3,*(undefined4 *)(param_1 + 0x30),local_48,1);
  if (lVar3 == 0) {
LAB_143f2cc98:
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    lVar4 = FUN_140628492();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_143f2cc98;
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      uVar5 = FUN_1401cb356();
      local_58 = FUN_148a812bc;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_148a8113a(&local_68,param_1);
      local_78 = 0;
      FUN_1405f67fc(uVar5,&local_58,&local_68,
                    L"FGbxLoginTask_SplitscreenAdd_TickWaitForPlayerController");
      *(code **)(param_1 + 0x60) = local_58;
      local_58 = (code *)0x0;
      plVar2 = *(longlong **)(param_1 + 0x68);
      *(longlong **)(param_1 + 0x68) = local_50;
      local_50 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      if (local_60 != 0) {
        if (local_68 == (undefined8 *)0x0) goto LAB_143f2cca3;
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_148a81018(param_1,lVar3);
    }
  }
LAB_143f2cca3:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_143f2cc33:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2ce32 FUN_143f2ce32 body=290 status=ok
// SIG undefined FUN_143f2ce32(void)

void FUN_143f2ce32(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_1414354ce();
  if (plVar2 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    if ((longlong)(int)plVar2[8] != 0) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(plVar2[7] + lVar3);
        if ((plVar1 != (longlong *)0x0) && ((int)plVar1[0x1c] == *(int *)(param_1 + 0x44))) {
          lVar3 = FUN_140628492();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
              == lVar3 + 0x30)) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
          }
          (**(code **)(*plVar2 + 0x338))(plVar2,plVar1);
          break;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[8] * 8 != lVar3);
    }
    plVar2 = (longlong *)plVar2[9];
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_140b7066c();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        local_40 = FUN_143f2cf56;
        local_38 = 0;
        FUN_148a8141e(local_30,param_1);
        (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined4 *)(param_1 + 0x44),local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2cf56 FUN_143f2cf56 body=573 status=ok
// SIG undefined FUN_143f2cf56(void)

void FUN_143f2cf56(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x40) = param_2;
  lVar6 = FUN_1414354ce();
  if ((((lVar6 == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) ||
      (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360), lVar6 == 0)) ||
     (*(longlong *)(lVar6 + 0x1f0) == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_145c548d8();
  }
  plVar7 = (longlong *)FUN_140773fe2();
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
    lVar9 = (**(code **)(*plVar7 + 0x2d0))(plVar7,*(undefined4 *)(param_1 + 0x44),uVar8);
    if ((lVar6 != 0) && (lVar9 != 0)) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      local_30 = 3;
      plVar7 = *(longlong **)(param_1 + 0x10);
      if (plVar7 == (longlong *)0x0) {
LAB_143f2d103:
        *local_38 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_38[2] = lVar10;
        *local_38 = &PTR_FUN_14b4ed0a0;
        local_38[3] = 0;
        local_38[4] = 0;
        local_38[5] = param_1;
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_143f2d103;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar11 = iVar5 == iVar3;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar11);
        uVar8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *local_38 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_38[2] = lVar10;
        *local_38 = &PTR_FUN_14b4ed0a0;
        local_38[3] = uVar8;
        local_38[4] = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        local_38[5] = param_1;
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
      FUN_143f04c94(lVar6,lVar9,&local_38);
      goto LAB_143f2d14e;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f2d14e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2d204 FUN_143f2d204 body=32 status=ok
// SIG undefined FUN_143f2d204(void)

undefined8 FUN_143f2d204(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_SplitscreenRemove_OnlyIfTracked");
  return param_2;
}



// FUNCTION 143f2d224 FUN_143f2d224 body=285 status=ok
// SIG undefined FUN_143f2d224(void)

void FUN_143f2d224(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_1414354ce();
  if (plVar3 != (longlong *)0x0) {
    uVar5 = (longlong)(int)plVar3[8];
    if (0 < (longlong)(int)plVar3[8]) {
      do {
        if (((0 < (int)uVar5) && ((int)uVar5 <= (int)plVar3[8])) &&
           (plVar1 = *(longlong **)(plVar3[7] + -8 + uVar5 * 8), plVar1 != (longlong *)0x0)) {
          lVar4 = FUN_140628492();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              == lVar4 + 0x30)) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
          }
          if (uVar5 == 1) break;
          (**(code **)(*plVar3 + 0x338))(plVar3,plVar1);
        }
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar2);
    }
    plVar3 = (longlong *)plVar3[9];
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_140b7066c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        local_48 = FUN_14163a3d0;
        local_40 = 0;
        FUN_146581b44(local_38,param_1);
        (**(code **)(*plVar3 + 0x330))(plVar3,local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2d342 FUN_143f2d342 body=183 status=ok
// SIG undefined FUN_143f2d342(void)

void FUN_143f2d342(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_1[7];
  uVar5 = *(uint *)(param_1 + 6);
  if (*(int *)(lVar1 + 0x1d8) != *(int *)(lVar1 + 0x204)) {
    lVar4 = lVar1 + 0x208;
    if (*(longlong *)(lVar1 + 0x210) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x210);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x218) - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar1 + 0x1d0) + (longlong)iVar6 * 0x20) == uVar5)
        goto LAB_143f2d3b4;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x1d0) + 0x18);
      } while (iVar6 != -1);
    }
  }
  FUN_146006c10();
  uVar5 = *(uint *)(param_1 + 6);
LAB_143f2d3b4:
  *(uint *)(param_1 + 0xb) = uVar5;
  cVar2 = FUN_1458c7f24(param_1);
  if (cVar2 != '\0') {
    uVar3 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000143f2d3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  FUN_145d7c4e6(param_1);
  return;
}



// FUNCTION 143f2d3fa FUN_143f2d3fa body=73 status=ok
// SIG undefined FUN_143f2d3fa(void)

void FUN_143f2d3fa(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 != '\0') {
    uVar2 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000143f2d426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1);
    return;
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_145d7c4e6(param_1);
  return;
}



// FUNCTION 143f2d444 FUN_143f2d444 body=176 status=ok
// SIG undefined FUN_143f2d444(void)

void FUN_143f2d444(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14144bed0(*(undefined8 *)(param_1 + 0x38));
  if (cVar1 == '\0') {
    FUN_140056680(local_30,&DAT_149dfb77a);
    FUN_140056680(local_40,L"TitleActivateText");
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
              (*(longlong **)(param_1 + 0x38),local_40,local_30);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    FUN_143f2d342(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2d4f6 FUN_143f2d4f6 body=241 status=ok
// SIG undefined FUN_143f2d4f6(void)

void FUN_143f2d4f6(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 0:
    goto switchD_143f2d51a_caseD_0;
  default:
    uVar4 = 0;
    break;
  case 2:
    uVar4 = 8;
    break;
  case 3:
    uVar4 = 9;
    break;
  case 4:
    uVar4 = 7;
    break;
  case 5:
    uVar4 = 10;
    break;
  case 6:
    uVar4 = 3;
    break;
  case 7:
    uVar4 = 5;
    break;
  case 8:
    uVar4 = 6;
    break;
  case 9:
    uVar4 = 4;
    break;
  case 10:
    uVar4 = 0xb;
    break;
  case 0xb:
    uVar4 = 0xd;
    break;
  case 0xc:
    uVar4 = 0xe;
    break;
  case 0xe:
    uVar4 = 0x17;
  }
  uVar3 = FUN_143f2ac96(param_1,uVar4);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
switchD_143f2d51a_caseD_0:
  *(bool *)(param_1 + 0x68) = param_2 == 0;
  if ((int)param_4[1] != 0) {
    plVar1 = (longlong *)*param_4;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2 == 0);
    if ((int)param_4[1] != 0) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
    }
  }
  if (*param_4 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f2d5e8 FUN_143f2d5e8 body=359 status=ok
// SIG undefined FUN_143f2d5e8(void)

void FUN_143f2d5e8(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 uStack_48;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar4 = false;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0x80;
  uStack_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  FUN_1460626ac(*(longlong *)(param_1 + 0x38) + 0x1d0,&local_78);
  if ((int)uStack_70 != local_44) {
    puVar3 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar3 = local_40;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(local_30 - 1U & *(uint *)(param_1 + 0x30)) * 4);
    if (iVar2 == -1) {
      bVar4 = false;
    }
    else {
      do {
        bVar4 = *(uint *)(local_78 + (longlong)iVar2 * 0xc) == *(uint *)(param_1 + 0x30);
        if (bVar4) break;
        iVar2 = *(int *)(local_78 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_1447a08a2(&local_78,0);
  }
  uStack_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    FUN_1446efbd8(local_68,0);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (!bVar4) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0x18;
  }
  FUN_143f2d342(param_1);
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2d750 FUN_143f2d750 body=527 status=ok
// SIG undefined FUN_143f2d750(void)

void FUN_143f2d750(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = FUN_143f2d960();
  plVar7 = (longlong *)FUN_140773fe2();
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
    lVar9 = (**(code **)(*plVar7 + 0x2d0))(plVar7,*(undefined4 *)(param_1 + 0x30),uVar8);
    if ((lVar6 != 0) && (lVar9 != 0)) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      local_30 = 3;
      plVar7 = *(longlong **)(param_1 + 0x10);
      if (plVar7 == (longlong *)0x0) {
LAB_143f2d8cf:
        *local_38 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_38[2] = lVar10;
        *local_38 = &PTR_FUN_14b4ed9b0;
        local_38[3] = 0;
        local_38[4] = 0;
        local_38[5] = param_1;
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_143f2d8cf;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar11 = iVar5 == iVar3;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar11);
        uVar8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *local_38 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_38[2] = lVar10;
        *local_38 = &PTR_FUN_14b4ed9b0;
        local_38[3] = uVar8;
        local_38[4] = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        local_38[5] = param_1;
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
      FUN_143f03234(lVar6,lVar9,&local_38);
      goto LAB_143f2d91a;
    }
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f2d91a:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2d960 FUN_143f2d960 body=63 status=ok
// SIG undefined FUN_143f2d960(void)

undefined8 FUN_143f2d960(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1414354ce();
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    uVar2 = FUN_145c548d8();
    return uVar2;
  }
  return 0;
}



// FUNCTION 143f2d9a0 FUN_143f2d9a0 body=291 status=ok
// SIG undefined FUN_143f2d9a0(void)

void FUN_143f2d9a0(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != '\0') {
    lVar3 = FUN_140d75dd6(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30));
    if ((lVar3 != 0) && (DAT_14c872bf0 == '\0')) {
      cVar2 = FUN_140b3f358();
      if ((cVar2 == '\0') && ((DAT_14c872bf2 & 1) == 0)) {
        iVar1 = *(int *)(lVar3 + 0xd8);
        if (iVar1 == 2) {
          if (*(char *)(param_1 + 0x40) == '\x01') {
            local_38 = FUN_143f2dd5e;
            local_30 = 0;
            FUN_148a82588(&local_28,param_1);
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3d0))
                      (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),&local_28);
            if (local_20 != 0) {
              if (local_28 == (undefined8 *)0x0) goto LAB_143f2d9f3;
              (**(code **)*local_28)(local_28,0);
              FUN_1446efa72(&local_28,0,0,0x10);
              local_20 = 0;
            }
            if (local_28 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_143f2d9f3;
          }
        }
        else if (iVar1 != 1) {
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
          }
          goto LAB_143f2d9f3;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f2d9f3:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2dad4 FUN_143f2dad4 body=649 status=ok
// SIG undefined FUN_143f2dad4(void)

void FUN_143f2dad4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = FUN_143f2d960();
  if ((lVar6 != 0) && (plVar7 = (longlong *)FUN_140773fe2(), plVar7 != (longlong *)0x0)) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
    lVar9 = (**(code **)(*plVar7 + 0x2d0))(plVar7,*(undefined4 *)(param_1 + 0x30),uVar8);
    if (lVar9 != 0) {
      FUN_140056680(local_48,&DAT_149dfb77a);
      FUN_140056680(local_58,L"TitleInitializingCrossSave");
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
                (*(longlong **)(param_1 + 0x38),local_58,local_48);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      local_60 = 3;
      plVar7 = *(longlong **)(param_1 + 0x10);
      if (plVar7 == (longlong *)0x0) {
LAB_143f2dcc2:
        *local_68 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_68[2] = lVar10;
        *local_68 = &PTR_FUN_14b4eda90;
        local_68[3] = 0;
        local_68[4] = 0;
        local_68[5] = param_1;
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_143f2dcc2;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar11 = iVar5 == iVar3;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar11);
        uVar8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *local_68 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_68[2] = lVar10;
        *local_68 = &PTR_FUN_14b4eda90;
        local_68[3] = uVar8;
        local_68[4] = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        local_68[5] = param_1;
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
      local_78 = &local_68;
      FUN_143f036f2(lVar6,lVar9,param_2,*(undefined1 *)(param_1 + 0x40));
      goto LAB_143f2dd14;
    }
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f2dd14:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2dd5e FUN_143f2dd5e body=81 status=ok
// SIG undefined FUN_143f2dd5e(void)

void FUN_143f2dd5e(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d75dd6(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30));
  if (lVar1 != 0) {
    FUN_148a95ad2(lVar1,param_2 ^ 1);
  }
  if (param_2 != 0) {
    FUN_143f2dad4(param_1,1);
    return;
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 143f2ddb0 FUN_143f2ddb0 body=130 status=ok
// SIG undefined FUN_143f2ddb0(void)

undefined8 * FUN_143f2ddb0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4e81b0;
  param_1[4] = &PTR_LAB_14b4e81d8;
  plVar1 = param_1 + 9;
  if (*(int *)(param_1 + 10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f2de0c;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f2de0c:
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f2de32 FUN_143f2de32 body=138 status=ok
// SIG undefined FUN_143f2de32(void)

undefined8 * FUN_143f2de32(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = param_1 + -4;
  param_1[-4] = &PTR_FUN_14b4e81b0;
  *param_1 = &PTR_LAB_14b4e81d8;
  plVar2 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143f2de94;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_143f2de94:
  FUN_1457f3dec(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 143f2ded4 FUN_143f2ded4 body=47 status=ok
// SIG undefined FUN_143f2ded4(void)

void FUN_143f2ded4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143f2df04 FUN_143f2df04 body=323 status=ok
// SIG undefined FUN_143f2df04(void)

void FUN_143f2df04(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_143f2df6e;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_143f2df6e:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143f2e047 FUN_143f2e047 body=169 status=ok
// SIG undefined FUN_143f2e047(void)

void FUN_143f2e047(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar4[-5] = *param_2;
      plVar2 = (longlong *)param_2[1];
      puVar4[-4] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(undefined4 *)(puVar4 + -3) = *(undefined4 *)(param_2 + 2);
      plVar2 = (longlong *)param_2[3];
      puVar4[-2] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(undefined4 *)(puVar4 + -1) = *(undefined4 *)(param_2 + 4);
      *puVar4 = 0;
      iVar1 = *(int *)(param_2 + 6);
      uVar3 = param_2[5];
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_143f2e0f0(puVar4,iVar1,0);
        FUN_143f2e237(*puVar4,uVar3);
      }
      param_2 = param_2 + 7;
      puVar4 = puVar4 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143f2e0f0 FUN_143f2e0f0 body=327 status=ok
// SIG undefined FUN_143f2e0f0(void)

void FUN_143f2e0f0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143f2e15e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_143f2e15e:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143f2e237 FUN_143f2e237 body=134 status=ok
// SIG undefined FUN_143f2e237(void)

void FUN_143f2e237(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x10);
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -2) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(puVar5 + 2) = param_2[8];
      param_2 = param_2 + 10;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143f2e2be FUN_143f2e2be body=93 status=ok
// SIG undefined FUN_143f2e2be(void)

void FUN_143f2e2be(longlong *param_1)

{
  FUN_141175be2(param_1 + 6);
  FUN_141175b88(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_141175b4a(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f2e31c FUN_143f2e31c body=29 status=ok
// SIG undefined FUN_143f2e31c(void)

undefined8 FUN_143f2e31c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f2e34e FUN_143f2e34e body=93 status=ok
// SIG undefined FUN_143f2e34e(void)

void FUN_143f2e34e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e8820;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f2e3ac FUN_143f2e3ac body=93 status=ok
// SIG undefined FUN_143f2e3ac(void)

void FUN_143f2e3ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e8820;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f2e40a FUN_143f2e40a body=126 status=ok
// SIG undefined FUN_143f2e40a(void)

void FUN_143f2e40a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e8820;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f2e479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f2e492 FUN_143f2e492 body=20 status=ok
// SIG undefined FUN_143f2e492(void)

undefined1 FUN_143f2e492(longlong param_1)

{
  FUN_143f2e4a6(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f2e4a6 FUN_143f2e4a6 body=649 status=ok
// SIG undefined FUN_143f2e4a6(void)

void FUN_143f2e4a6(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  
  lVar5 = *param_1;
  uVar4 = *(uint *)(lVar5 + 0xd0);
  uVar10 = (ulonglong)(int)uVar4;
  if (uVar10 == 0) {
    return;
  }
  plVar6 = *(longlong **)(lVar5 + 200);
  lVar8 = FUN_145d6e79a();
  if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
    plVar9 = *(longlong **)(lVar8 + 0x20);
    plVar1 = plVar9 + (longlong)*(int *)(lVar8 + 0x28) * 5;
    iVar15 = (int)plVar6[1];
LAB_143f2e50f:
    if ((int)plVar9[1] == iVar15) {
      if (1 < iVar15) {
        lVar8 = 0;
        do {
          uVar2 = *(ushort *)(*plVar9 + lVar8);
          uVar3 = *(ushort *)(*plVar6 + lVar8);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar12 = (uint)uVar2 - (uint)uVar3;
              goto LAB_143f2e55e;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x000143f2e55b;
          }
          lVar8 = lVar8 + 2;
        } while( true );
      }
    }
    else if ((int)plVar9[1] + iVar15 != 1) goto LAB_143f2e573;
    goto LAB_143f2e58b;
  }
  bVar16 = true;
LAB_143f2e597:
  iVar15 = 0;
  uVar14 = 0;
  do {
    iVar12 = (int)uVar14;
    uVar14 = (ulonglong)(iVar12 + 1U);
    if ((int)(iVar12 + 1U) < (int)uVar4) {
      uVar14 = (longlong)iVar12 + 1;
      bVar7 = true;
      do {
        lVar8 = FUN_145d6e79a();
        if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
          plVar9 = *(longlong **)(lVar8 + 0x20);
          plVar1 = plVar9 + (longlong)*(int *)(lVar8 + 0x28) * 5;
          iVar11 = (int)(plVar6 + uVar14 * 2)[1];
LAB_143f2e5e9:
          if ((int)plVar9[1] != iVar11) {
            if ((int)plVar9[1] + iVar11 == 1) goto LAB_143f2e66e;
            goto LAB_143f2e659;
          }
          if (1 < iVar11) {
            lVar8 = 0;
            do {
              uVar2 = *(ushort *)(*plVar9 + lVar8);
              uVar3 = *(ushort *)(plVar6[uVar14 * 2] + lVar8);
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar13 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_143f2e649;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                goto code_r0x000143f2e646;
              }
              lVar8 = lVar8 + 2;
            } while( true );
          }
          goto LAB_143f2e66e;
        }
LAB_143f2e682:
        if (bVar16 == false) {
          iVar11 = (int)uVar14 - iVar12;
          goto LAB_143f2e6d4;
        }
LAB_143f2e688:
        uVar14 = uVar14 + 1;
        bVar7 = (longlong)uVar14 < (longlong)uVar10;
      } while (uVar14 != uVar10);
      uVar14 = (ulonglong)uVar4;
    }
    else {
      bVar7 = false;
    }
LAB_143f2e69f:
    iVar11 = (int)uVar14 - iVar12;
    if (bVar16 == false) {
LAB_143f2e6d4:
      if (iVar15 != iVar12) {
        memmove(plVar6 + (longlong)iVar15 * 2,plVar6 + (longlong)iVar12 * 2,(longlong)iVar11 << 4);
      }
      iVar15 = iVar15 + iVar11;
      bVar16 = true;
    }
    else {
      FUN_1447a1747(plVar6 + (longlong)iVar12 * 2,iVar11);
      bVar16 = false;
    }
    if (!bVar7) {
      *(int *)(lVar5 + 0xd0) = iVar15;
      return;
    }
  } while( true );
code_r0x000143f2e55b:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143f2e55e:
  if (iVar12 == 0) goto LAB_143f2e58b;
LAB_143f2e573:
  plVar9 = plVar9 + 5;
  if (plVar9 == plVar1) goto LAB_143f2e728;
  goto LAB_143f2e50f;
LAB_143f2e728:
  plVar9 = (longlong *)0x0;
LAB_143f2e58b:
  bVar16 = plVar9 == (longlong *)0x0;
  goto LAB_143f2e597;
code_r0x000143f2e646:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143f2e649:
  if (iVar13 == 0) {
LAB_143f2e66e:
    if ((plVar9 == (longlong *)0x0) != bVar16) goto LAB_143f2e69f;
    goto LAB_143f2e688;
  }
LAB_143f2e659:
  plVar9 = plVar9 + 5;
  if (plVar9 == plVar1) goto LAB_143f2e682;
  goto LAB_143f2e5e9;
}



// FUNCTION 143f2e730 FUN_143f2e730 body=632 status=ok
// SIG undefined FUN_143f2e730(void)

void FUN_143f2e730(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x1b8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_148a865c8(param_1 + 0x138);
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_148a79a92(param_1 + 0x80);
  plVar2 = (longlong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_143f2e808:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0x68) = 0;
      goto LAB_143f2e808;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) == 0) {
LAB_143f2e847:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_143f2e847;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_143f2e886:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto LAB_143f2e886;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_143f2e8c5:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_143f2e8c5;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_143f2e904:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_143f2e904;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143f2e94b;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_143f2e94b:
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f2e963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143f2e9a8 FUN_143f2e9a8 body=123 status=ok
// SIG undefined FUN_143f2e9a8(void)

void FUN_143f2e9a8(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[0x2d] != 0) {
      FUN_1400020a8();
    }
    FUN_141175be2(param_1 + 6);
    FUN_141175b88(param_1[4],(int)param_1[5]);
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    FUN_141175b4a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x2f;
  }
  return;
}



// FUNCTION 143f2ea24 FUN_143f2ea24 body=366 status=ok
// SIG undefined FUN_143f2ea24(void)

void FUN_143f2ea24(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x178;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143f2eab9;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143f2eab9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x178)) {
    uVar7 = uVar5 / 0x178 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x178,8);
  return;
}



// FUNCTION 143f2eb92 FUN_143f2eb92 body=43 status=ok
// SIG undefined FUN_143f2eb92(void)

void FUN_143f2eb92(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 143f2ebbe FUN_143f2ebbe body=248 status=ok
// SIG undefined FUN_143f2ebbe(void)

void FUN_143f2ebbe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143f2ecb6 FUN_143f2ecb6 body=254 status=ok
// SIG undefined FUN_143f2ecb6(void)

void FUN_143f2ecb6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x400) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 * 2]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 5 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x20,8);
    }
  }
  return;
}



// FUNCTION 143f2edb4 FUN_143f2edb4 body=57 status=ok
// SIG undefined FUN_143f2edb4(void)

undefined8 * FUN_143f2edb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e9190;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f2ee02 FUN_143f2ee02 body=160 status=ok
// SIG undefined FUN_143f2ee02(void)

void FUN_143f2ee02(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e9190;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    return;
  }
  FUN_148a831c6(puVar2 + 3,iVar1,0);
  memcpy((void *)puVar2[3],_Src,(longlong)iVar1 << 2);
  return;
}



// FUNCTION 143f2eea2 FUN_143f2eea2 body=160 status=ok
// SIG undefined FUN_143f2eea2(void)

void FUN_143f2eea2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e9190;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    return;
  }
  FUN_148a831c6(puVar2 + 3,iVar1,0);
  memcpy((void *)puVar2[3],_Src,(longlong)iVar1 << 2);
  return;
}



// FUNCTION 143f2ef42 FUN_143f2ef42 body=199 status=ok
// SIG undefined FUN_143f2ef42(void)

void FUN_143f2ef42(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4e9190;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_148a831c6(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 << 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f2efd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f2f014 FUN_143f2f014 body=20 status=ok
// SIG undefined FUN_143f2f014(void)

undefined1 FUN_143f2f014(longlong param_1)

{
  FUN_143f2f028(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f2f028 FUN_143f2f028 body=232 status=ok
// SIG undefined FUN_143f2f028(void)

void FUN_143f2f028(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  longlong local_188;
  undefined4 local_180;
  undefined1 local_178 [312];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar2 + lVar5);
      uVar4 = FUN_141546c72();
      FUN_148a99c30(uVar4,&local_1a8,uVar1);
      if (local_40 == '\x01') {
        FUN_141175be2(local_178);
        FUN_141175b88(local_188,local_180);
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        if (local_198 != 0) {
          FUN_1400020a8();
        }
        FUN_141175b4a(local_1a8,local_1a0);
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
      }
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2f112 FUN_143f2f112 body=73 status=ok
// SIG undefined FUN_143f2f112(void)

undefined8 * FUN_143f2f112(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e9200;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f2f170 FUN_143f2f170 body=146 status=ok
// SIG undefined FUN_143f2f170(void)

void FUN_143f2f170(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e9270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9200;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  FUN_14058acb2(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f2f202 FUN_143f2f202 body=146 status=ok
// SIG undefined FUN_143f2f202(void)

void FUN_143f2f202(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e9270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9200;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  FUN_14058acb2(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f2f294 FUN_143f2f294 body=180 status=ok
// SIG undefined FUN_143f2f294(void)

void FUN_143f2f294(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e9270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e9200;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Blink = 0;
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  *(undefined8 *)((longlong)&p_Var1[1].ProcessLocksList.Blink + 4) = 0xffffffff00000080;
  p_Var1[1].ContentionCount = 0;
  p_Var1[2].Type = 0;
  p_Var1[2].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[2].field_0x4 = 0;
  *(undefined4 *)&p_Var1[2].CriticalSection = 0;
  FUN_14058acb2(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f2f339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f2f348 FUN_143f2f348 body=53 status=ok
// SIG undefined FUN_143f2f348(void)

void FUN_143f2f348(longlong param_1,longlong *param_2)

{
  FUN_143f2f3b0(param_1 + 0x18);
  FUN_148a6685a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f2f37e FUN_143f2f37e body=49 status=ok
// SIG undefined FUN_143f2f37e(void)

undefined1 FUN_143f2f37e(longlong param_1,longlong *param_2)

{
  FUN_143f2f3b0(param_1 + 0x18);
  FUN_148a6685a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 143f2f3b0 FUN_143f2f3b0 body=680 status=ok
// SIG undefined FUN_143f2f3b0(void)

void FUN_143f2f3b0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  wchar_t *_Str;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar7 = (undefined8 *)*param_2;
  local_b0 = (longlong)*(int *)(param_2 + 1);
  *param_2 = 0;
  param_2[1] = 0;
  local_b8 = param_1;
  local_a8 = puVar7;
  local_a0 = param_3;
  if (local_b0 != 0) {
    local_98 = puVar7 + local_b0 * 3;
    do {
      iVar2 = *(int *)(puVar7 + 1);
      uVar4 = (ulonglong)(iVar2 - 1);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      uVar5 = 0;
      if (0 < (int)uVar4) {
        puVar3 = &DAT_149dfb77a;
        if (iVar2 != 0) {
          puVar3 = (undefined2 *)*puVar7;
        }
        lVar8 = 0;
        uVar5 = 0;
        do {
          uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8])
                  - 0x20;
          uVar9 = (uint)(uVar5 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
          uVar5 = (ulonglong)
                  (uVar9 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
          lVar8 = lVar8 + 1;
        } while ((int)uVar4 != (int)lVar8);
      }
      iVar2 = FUN_1457511aa(param_1 + 2,uVar5,puVar7);
      uVar4 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 2);
      if (iVar2 == -1) {
        uVar4 = 0;
      }
      if (*(char *)(puVar7 + 2) == '\0') {
        _Str = L"";
        if (*(int *)(uVar4 + 0x18) != 0) {
          _Str = *(wchar_t **)(uVar4 + 0x10);
        }
        dVar10 = _wtof(_Str);
        local_90 = (void *)0x0;
        local_88 = *(int *)(puVar7 + 1);
        lVar8 = (longlong)local_88;
        pvVar1 = (void *)*puVar7;
        if (lVar8 == 0) {
          local_84 = 0;
        }
        else {
          FUN_1446dd670(&local_90,local_88,0);
          memcpy(local_90,pvVar1,lVar8 * 2);
        }
        local_80 = puVar7[2];
        FUN_148a61687(local_a0,*local_b8,&local_90,(float)dVar10);
      }
      else if (*(char *)(puVar7 + 2) == '\x01') {
        local_78 = (void *)0x0;
        local_70 = *(int *)(puVar7 + 1);
        lVar8 = (longlong)local_70;
        pvVar1 = (void *)*puVar7;
        if (lVar8 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,pvVar1,lVar8 * 2);
        }
        local_68 = puVar7[2];
        FUN_148a61582(local_a0,*local_b8,&local_78,(undefined8 *)(uVar4 + 0x10));
      }
      puVar7 = puVar7 + 3;
    } while (puVar7 != local_98);
  }
  puVar7 = local_a8;
  FUN_148a6685a(local_a8,local_b0);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f2f65a FUN_143f2f65a body=29 status=ok
// SIG undefined FUN_143f2f65a(void)

undefined8 FUN_143f2f65a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f2f68c FUN_143f2f68c body=85 status=ok
// SIG undefined FUN_143f2f68c(void)

void FUN_143f2f68c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e9350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e93c0;
  return;
}



// FUNCTION 143f2f6e2 FUN_143f2f6e2 body=85 status=ok
// SIG undefined FUN_143f2f6e2(void)

void FUN_143f2f6e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e9350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e93c0;
  return;
}



// FUNCTION 143f2f738 FUN_143f2f738 body=118 status=ok
// SIG undefined FUN_143f2f738(void)

void FUN_143f2f738(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e9350;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e93c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f2f79f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f2f7b4 FUN_143f2f7b4 body=38 status=ok
// SIG undefined FUN_143f2f7b4(void)

undefined8 FUN_143f2f7b4(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_143f22faa(*(undefined8 *)(lVar1 + 0x70),10);
  FUN_143f26ae2(lVar1);
  return 0;
}



// FUNCTION 143f2f7e4 FUN_143f2f7e4 body=12 status=ok
// SIG undefined FUN_143f2f7e4(void)

void FUN_143f2f7e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f2f7ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f2f7f0 FUN_143f2f7f0 body=29 status=ok
// SIG undefined FUN_143f2f7f0(void)

undefined8 FUN_143f2f7f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f2f80e FUN_143f2f80e body=589 status=ok
// SIG undefined FUN_143f2f80e(void)

void FUN_143f2f80e(float *param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb9719c == 0 && DAT_14cb971a4 == 0) {
    pwVar1 = L"Manual Exit";
  }
  else {
    pwVar1 = (wchar_t *)FUN_148a7a8b7();
  }
  FUN_140056680(local_30,pwVar1);
  FUN_140056680(local_40,L"experience_guid");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,*(undefined8 *)(param_1 + 2));
  FUN_140056680(local_40,L"experience_count");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,**(int **)(param_1 + 4));
  FUN_140056680(local_40,L"correlation_guid");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,&DAT_14cb97178);
  FUN_140056680(local_40,L"total_time");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,*param_1);
  FUN_140056680(local_40,L"num_retries");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,DAT_14cb971a0);
  FUN_140056680(local_40,L"start_player_count");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,DAT_14cb97198);
  FUN_140056680(local_40,L"end_player_count");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,DAT_14cb9719c);
  FUN_140056680(local_40,L"result");
  FUN_1401e7dd2(param_2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2fa5c FUN_143f2fa5c body=640 status=ok
// SIG undefined FUN_143f2fa5c(void)

void FUN_143f2fa5c(int *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"experience_guid");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,*(undefined8 *)(param_1 + 2));
  FUN_140056680(local_30,L"experience_count");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,**(int **)(param_1 + 4));
  FUN_140056680(local_30,L"correlation_guid");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,&DAT_14cb971a8);
  FUN_140056680(local_30,L"host_rating");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*param_1);
  FUN_140056680(local_30,L"nat_type");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,&DAT_14cb971b8);
  FUN_140056680(local_30,L"nat_type_rating");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,DAT_14cb971c8);
  FUN_140056680(local_30,L"region_quality");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((ulonglong)DAT_14cb971cc < 3) {
    puVar1 = (undefined2 *)(&PTR_DAT_14b4ee090)[DAT_14cb971cc];
  }
  else {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_30,puVar1);
  FUN_1401e7c72(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_30,L"content_availability_alpha");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,DAT_14cb971d0);
  FUN_140056680(local_30,L"party_member_count_alpha");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,DAT_14cb971d4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2fcde FUN_143f2fcde body=583 status=ok
// SIG undefined FUN_143f2fcde(void)

void FUN_143f2fcde(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"correlation_guid");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,*param_1);
  FUN_140056680(local_30,L"platform_host");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,param_1[3]);
  FUN_140056680(local_30,L"platform_client");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,param_1[4]);
  FUN_140056680(local_30,L"is_turn_connection");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,*(bool *)(param_1[1] + 0x10));
  FUN_140056680(local_30,L"is_partial");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,*(bool *)(param_1 + 5));
  FUN_140056680(local_30,L"ping_min");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,*(float *)(param_1[1] + 0x14));
  FUN_140056680(local_30,L"ping_max");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,*(float *)(param_1[1] + 0x18));
  FUN_140056680(local_30,L"ping_avg");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,*(float *)(param_1 + 2));
  FUN_140056680(local_30,L"samples");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(param_1[1] + 0x20));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f2ff26 FUN_143f2ff26 body=728 status=ok
// SIG undefined FUN_143f2ff26(void)

void FUN_143f2ff26(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  piVar1 = (int *)param_1[1];
  if (*piVar1 < 1) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)*piVar1;
    fVar4 = (float)piVar1[5] / fVar2;
    fVar3 = (float)piVar1[6] / fVar2;
    fVar2 = (float)piVar1[7] / fVar2;
  }
  FUN_140056680(local_60,L"correlation_guid");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,*param_1);
  FUN_140056680(local_60,L"players");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)param_1[1]);
  FUN_140056680(local_60,L"includes_party_members");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,*(bool *)(param_1[1] + 4));
  FUN_140056680(local_60,L"turn_connections");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(param_1[1] + 8));
  FUN_140056680(local_60,L"partial_records");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(param_1[1] + 0xc));
  FUN_140056680(local_60,L"party_members");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(param_1[1] + 0x10));
  FUN_140056680(local_60,L"ping_min_avg");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,fVar4);
  FUN_140056680(local_60,L"ping_max_avg");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,fVar3);
  FUN_140056680(local_60,L"ping_avg");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vFloat((rowBuilder *)*param_2,fVar2);
  FUN_140056680(local_60,L"samples");
  FUN_1401e7dd2(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(param_1[1] + 0x20));
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f30200 FUN_143f30200 body=57 status=ok
// SIG undefined FUN_143f30200(void)

undefined8 * FUN_143f30200(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e9950;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3024e FUN_143f3024e body=168 status=ok
// SIG undefined FUN_143f3024e(void)

void FUN_143f3024e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4eddb0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e9950;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_144a06ca8(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f302f6 FUN_143f302f6 body=168 status=ok
// SIG undefined FUN_143f302f6(void)

void FUN_143f302f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4eddb0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e9950;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_144a06ca8(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f3039e FUN_143f3039e body=207 status=ok
// SIG undefined FUN_143f3039e(void)

void FUN_143f3039e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4eddb0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4e9950;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_144a06ca8(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 << 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3045b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3047e FUN_143f3047e body=26 status=ok
// SIG undefined FUN_143f3047e(void)

undefined1 FUN_143f3047e(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0xd8);
  *piVar1 = *piVar1 + 1;
  FUN_145d53660();
  return 1;
}



// FUNCTION 143f30498 FUN_143f30498 body=29 status=ok
// SIG undefined FUN_143f30498(void)

undefined8 FUN_143f30498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f304ca FUN_143f304ca body=101 status=ok
// SIG undefined FUN_143f304ca(void)

void FUN_143f304ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f30530 FUN_143f30530 body=101 status=ok
// SIG undefined FUN_143f30530(void)

void FUN_143f30530(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f30596 FUN_143f30596 body=134 status=ok
// SIG undefined FUN_143f30596(void)

void FUN_143f30596(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e9a30;
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
                    /* WARNING: Could not recover jumptable at 0x000143f3060d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3061c FUN_143f3061c body=104 status=ok
// SIG undefined FUN_143f3061c(void)

void FUN_143f3061c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0xf0) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xe8), plVar1 != (longlong *)0x0)) {
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_18 = *(undefined8 *)(param_1 + 0x20);
    (**(code **)(*plVar1 + 0x60))(plVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f30686 FUN_143f30686 body=106 status=ok
// SIG undefined FUN_143f30686(void)

undefined8 FUN_143f30686(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0xf0) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xe8), plVar1 != (longlong *)0x0)) {
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_18 = *(undefined8 *)(param_1 + 0x20);
    (**(code **)(*plVar1 + 0x60))(plVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f306f2 FUN_143f306f2 body=29 status=ok
// SIG undefined FUN_143f306f2(void)

undefined8 FUN_143f306f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f30724 FUN_143f30724 body=93 status=ok
// SIG undefined FUN_143f30724(void)

void FUN_143f30724(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f30782 FUN_143f30782 body=93 status=ok
// SIG undefined FUN_143f30782(void)

void FUN_143f30782(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f307e0 FUN_143f307e0 body=126 status=ok
// SIG undefined FUN_143f307e0(void)

void FUN_143f307e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e9aa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3084f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3085e FUN_143f3085e body=77 status=ok
// SIG undefined FUN_143f3085e(void)

void FUN_143f3085e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_143f308fc(param_1 + 0x18,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f308ac FUN_143f308ac body=79 status=ok
// SIG undefined FUN_143f308ac(void)

undefined8 FUN_143f308ac(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_143f308fc(param_1 + 0x18,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f308fc FUN_143f308fc body=104 status=ok
// SIG undefined FUN_143f308fc(void)

void FUN_143f308fc(longlong *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  if (local_18 == 0) {
    piVar1 = (int *)(*param_1 + 0xd8);
    *piVar1 = *piVar1 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  local_14 = *param_3;
  local_1c = 3;
  FUN_145d53d3a(*param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f30972 FUN_143f30972 body=29 status=ok
// SIG undefined FUN_143f30972(void)

undefined8 FUN_143f30972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f309a4 FUN_143f309a4 body=93 status=ok
// SIG undefined FUN_143f309a4(void)

void FUN_143f309a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f30a02 FUN_143f30a02 body=93 status=ok
// SIG undefined FUN_143f30a02(void)

void FUN_143f30a02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f30a60 FUN_143f30a60 body=126 status=ok
// SIG undefined FUN_143f30a60(void)

void FUN_143f30a60(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ea040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f30acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f30ade FUN_143f30ade body=65 status=ok
// SIG undefined FUN_143f30ade(void)

void FUN_143f30ade(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f30b64(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f30b20 FUN_143f30b20 body=67 status=ok
// SIG undefined FUN_143f30b20(void)

undefined8 FUN_143f30b20(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f30b64(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f30b64 FUN_143f30b64 body=108 status=ok
// SIG undefined FUN_143f30b64(void)

void FUN_143f30b64(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  switch(*param_2) {
  case 0:
    *(int *)(lVar1 + 300) = *(int *)(lVar1 + 300) + 1;
    FUN_148a7b1cc();
    return;
  default:
    FUN_148a7b6a8(lVar1,1);
    return;
  case 3:
    FUN_148a7b6a8(lVar1,5);
    return;
  case 4:
    FUN_148a7b6a8(lVar1,6);
    return;
  case 5:
    FUN_148a7b6a8(lVar1,8);
    return;
  case 6:
    FUN_148a7b6a8(lVar1,9);
    return;
  case 9:
    FUN_148a7b6a8(lVar1,10);
    return;
  case 10:
    FUN_148a7b6a8(lVar1,0xb);
    return;
  }
}



// FUNCTION 143f30bd0 FUN_143f30bd0 body=29 status=ok
// SIG undefined FUN_143f30bd0(void)

undefined8 FUN_143f30bd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f30c02 FUN_143f30c02 body=93 status=ok
// SIG undefined FUN_143f30c02(void)

void FUN_143f30c02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea0b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f30c60 FUN_143f30c60 body=93 status=ok
// SIG undefined FUN_143f30c60(void)

void FUN_143f30c60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea0b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f30cbe FUN_143f30cbe body=126 status=ok
// SIG undefined FUN_143f30cbe(void)

void FUN_143f30cbe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4eddb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ea0b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f30d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f30d5a FUN_143f30d5a body=42 status=ok
// SIG undefined FUN_143f30d5a(void)

undefined1 FUN_143f30d5a(longlong param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 300);
    *piVar1 = *piVar1 + 1;
    FUN_148a7b1cc();
  }
  else {
    FUN_148a7b6a8(*(longlong *)(param_1 + 0x18),0xc);
  }
  return 1;
}



// FUNCTION 143f30d84 FUN_143f30d84 body=29 status=ok
// SIG undefined FUN_143f30d84(void)

undefined8 FUN_143f30d84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f30db6 FUN_143f30db6 body=93 status=ok
// SIG undefined FUN_143f30db6(void)

void FUN_143f30db6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f30e14 FUN_143f30e14 body=93 status=ok
// SIG undefined FUN_143f30e14(void)

void FUN_143f30e14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f30e72 FUN_143f30e72 body=126 status=ok
// SIG undefined FUN_143f30e72(void)

void FUN_143f30e72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ea220;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f30ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f30f1a FUN_143f30f1a body=49 status=ok
// SIG undefined FUN_143f30f1a(void)

undefined8 FUN_143f30f1a(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0x140) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x138), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 143f30f4c FUN_143f30f4c body=29 status=ok
// SIG undefined FUN_143f30f4c(void)

undefined8 FUN_143f30f4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f30f7e FUN_143f30f7e body=85 status=ok
// SIG undefined FUN_143f30f7e(void)

void FUN_143f30f7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea490;
  return;
}



// FUNCTION 143f30fd4 FUN_143f30fd4 body=85 status=ok
// SIG undefined FUN_143f30fd4(void)

void FUN_143f30fd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea490;
  return;
}



// FUNCTION 143f3102a FUN_143f3102a body=118 status=ok
// SIG undefined FUN_143f3102a(void)

void FUN_143f3102a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ea490;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f31091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f310a6 FUN_143f310a6 body=29 status=ok
// SIG undefined FUN_143f310a6(void)

undefined8 FUN_143f310a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f310d8 FUN_143f310d8 body=93 status=ok
// SIG undefined FUN_143f310d8(void)

void FUN_143f310d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f31136 FUN_143f31136 body=93 status=ok
// SIG undefined FUN_143f31136(void)

void FUN_143f31136(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f31194 FUN_143f31194 body=126 status=ok
// SIG undefined FUN_143f31194(void)

void FUN_143f31194(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ea6d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f31203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f31212 FUN_143f31212 body=20 status=ok
// SIG undefined FUN_143f31212(void)

undefined8 FUN_143f31212(longlong param_1)

{
  FUN_143f3123a(param_1 + 0x18);
  return 0;
}



// FUNCTION 143f31226 FUN_143f31226 body=20 status=ok
// SIG undefined FUN_143f31226(void)

undefined1 FUN_143f31226(longlong param_1)

{
  FUN_143f3123a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f3123a FUN_143f3123a body=369 status=ok
// SIG undefined FUN_143f3123a(void)

void FUN_143f3123a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    FUN_14480f766(&DAT_14cadbec8);
  }
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x180))();
  if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x38), lVar4 != 0)) &&
     (iVar1 = *(int *)(lVar4 + 0x100), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0xf8);
    lVar5 = 0;
    do {
      _Src = DAT_14cb97160;
      plVar3 = *(longlong **)(lVar4 + lVar5);
      local_58 = (void *)0x0;
      lVar6 = (longlong)DAT_14cb97168;
      local_50 = DAT_14cb97168;
      if (lVar6 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,DAT_14cb97168,0);
        memcpy(local_58,_Src,lVar6 * 2);
      }
      FUN_147a4786e(plVar3,&local_58);
      (**(code **)(*plVar3 + 0x2f8))(plVar3,1);
      (**(code **)(*plVar3 + 0x330))(plVar3);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((*(int *)(lVar2 + 0xa8) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0xa0), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,(char)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f313ac FUN_143f313ac body=29 status=ok
// SIG undefined FUN_143f313ac(void)

undefined8 FUN_143f313ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f313de FUN_143f313de body=93 status=ok
// SIG undefined FUN_143f313de(void)

void FUN_143f313de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eacf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3143c FUN_143f3143c body=93 status=ok
// SIG undefined FUN_143f3143c(void)

void FUN_143f3143c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eacf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3149a FUN_143f3149a body=126 status=ok
// SIG undefined FUN_143f3149a(void)

void FUN_143f3149a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4eacf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f31509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


