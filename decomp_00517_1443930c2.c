// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1443930c2 FUN_1443930c2 body=83 status=ok
// SIG undefined FUN_1443930c2(void)

undefined8 * FUN_1443930c2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3e8c0;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 14439312a FUN_14439312a body=124 status=ok
// SIG undefined FUN_14439312a(void)

void FUN_14439312a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443931a6 FUN_1443931a6 body=124 status=ok
// SIG undefined FUN_1443931a6(void)

void FUN_1443931a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144393222 FUN_144393222 body=162 status=ok
// SIG undefined FUN_144393222(void)

void FUN_144393222(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e8c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
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
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443932b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443932ce FUN_1443932ce body=20 status=ok
// SIG undefined FUN_1443932ce(void)

undefined1 FUN_1443932ce(longlong param_1)

{
  FUN_1443932e2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443932e2 FUN_1443932e2 body=140 status=ok
// SIG undefined FUN_1443932e2(void)

void FUN_1443932e2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  local_48 = (longlong *)param_1[2];
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_1 + 1),0,2);
  local_48 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),1,param_1[2]);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144393370 FUN_144393370 body=29 status=ok
// SIG undefined FUN_144393370(void)

undefined8 FUN_144393370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443933a2 FUN_1443933a2 body=93 status=ok
// SIG undefined FUN_1443933a2(void)

void FUN_1443933a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144393400 FUN_144393400 body=93 status=ok
// SIG undefined FUN_144393400(void)

void FUN_144393400(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14439345e FUN_14439345e body=126 status=ok
// SIG undefined FUN_14439345e(void)

void FUN_14439345e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e930;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443934cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443934e6 FUN_1443934e6 body=20 status=ok
// SIG undefined FUN_1443934e6(void)

undefined1 FUN_1443934e6(longlong param_1)

{
  FUN_1443934fa(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443934fa FUN_1443934fa body=126 status=ok
// SIG undefined FUN_1443934fa(void)

void FUN_1443934fa(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"Shift login failed");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439357a FUN_14439357a body=29 status=ok
// SIG undefined FUN_14439357a(void)

undefined8 FUN_14439357a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443935ac FUN_1443935ac body=93 status=ok
// SIG undefined FUN_1443935ac(void)

void FUN_1443935ac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14439360a FUN_14439360a body=93 status=ok
// SIG undefined FUN_14439360a(void)

void FUN_14439360a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144393668 FUN_144393668 body=126 status=ok
// SIG undefined FUN_144393668(void)

void FUN_144393668(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e9c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443936d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443936f0 FUN_1443936f0 body=20 status=ok
// SIG undefined FUN_1443936f0(void)

undefined1 FUN_1443936f0(longlong param_1)

{
  FUN_144393704(param_1 + 0x18);
  return 1;
}



// FUNCTION 144393704 FUN_144393704 body=126 status=ok
// SIG undefined FUN_144393704(void)

void FUN_144393704(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"The specified account is already signed in");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144393784 FUN_144393784 body=83 status=ok
// SIG undefined FUN_144393784(void)

undefined8 * FUN_144393784(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3ea80;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 1443937ec FUN_1443937ec body=130 status=ok
// SIG undefined FUN_1443937ec(void)

void FUN_1443937ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ea80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 14439386e FUN_14439386e body=130 status=ok
// SIG undefined FUN_14439386e(void)

void FUN_14439386e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ea80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1443938f0 FUN_1443938f0 body=168 status=ok
// SIG undefined FUN_1443938f0(void)

void FUN_1443938f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3ea80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
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
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)&p_Var1[1].CriticalSection = *(undefined1 *)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144393988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144393998 FUN_144393998 body=85 status=ok
// SIG undefined FUN_144393998(void)

void FUN_144393998(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x40))
            (plVar1,*(undefined4 *)(param_1 + 0x20),2,0,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001443939ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd0))(plVar1,*(undefined4 *)(param_1 + 0x20),1);
  return;
}



// FUNCTION 1443939ee FUN_1443939ee body=77 status=ok
// SIG undefined FUN_1443939ee(void)

undefined8 FUN_1443939ee(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x40))
            (plVar1,*(undefined4 *)(param_1 + 0x20),2,0,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x38) == '\0') {
    (**(code **)(*plVar1 + 0xd0))(plVar1,*(undefined4 *)(param_1 + 0x20),1);
  }
  return 1;
}



// FUNCTION 144393a3c FUN_144393a3c body=29 status=ok
// SIG undefined FUN_144393a3c(void)

undefined8 FUN_144393a3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144393a6e FUN_144393a6e body=93 status=ok
// SIG undefined FUN_144393a6e(void)

void FUN_144393a6e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3eaf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144393acc FUN_144393acc body=93 status=ok
// SIG undefined FUN_144393acc(void)

void FUN_144393acc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3eaf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144393b2a FUN_144393b2a body=126 status=ok
// SIG undefined FUN_144393b2a(void)

void FUN_144393b2a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3eaf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144393b99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144393bb2 FUN_144393bb2 body=20 status=ok
// SIG undefined FUN_144393bb2(void)

undefined1 FUN_144393bb2(longlong param_1)

{
  FUN_144393bc6(param_1 + 0x18);
  return 1;
}



// FUNCTION 144393bc6 FUN_144393bc6 body=150 status=ok
// SIG undefined FUN_144393bc6(void)

void FUN_144393bc6(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"User logged out");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    (**(code **)(*plVar1 + 0xd0))(plVar1,*(undefined4 *)(param_1 + 1),1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144393c5e FUN_144393c5e body=29 status=ok
// SIG undefined FUN_144393c5e(void)

undefined8 FUN_144393c5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144393c90 FUN_144393c90 body=93 status=ok
// SIG undefined FUN_144393c90(void)

void FUN_144393c90(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3eb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144393cee FUN_144393cee body=93 status=ok
// SIG undefined FUN_144393cee(void)

void FUN_144393cee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3eb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144393d4c FUN_144393d4c body=126 status=ok
// SIG undefined FUN_144393d4c(void)

void FUN_144393d4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3eb60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144393dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144393de4 FUN_144393de4 body=34 status=ok
// SIG undefined FUN_144393de4(void)

undefined8 FUN_144393de4(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))
            (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0);
  return 1;
}



// FUNCTION 144393e06 FUN_144393e06 body=29 status=ok
// SIG undefined FUN_144393e06(void)

undefined8 FUN_144393e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144393e38 FUN_144393e38 body=93 status=ok
// SIG undefined FUN_144393e38(void)

void FUN_144393e38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ebd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144393e96 FUN_144393e96 body=93 status=ok
// SIG undefined FUN_144393e96(void)

void FUN_144393e96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3ebd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144393ef4 FUN_144393ef4 body=126 status=ok
// SIG undefined FUN_144393ef4(void)

void FUN_144393ef4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3ebd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144393f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144393f7c FUN_144393f7c body=20 status=ok
// SIG undefined FUN_144393f7c(void)

undefined1 FUN_144393f7c(longlong param_1)

{
  FUN_144393f90(param_1 + 0x18);
  return 1;
}



// FUNCTION 144393f90 FUN_144393f90 body=809 status=ok
// SIG undefined FUN_144393f90(void)

void FUN_144393f90(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  byte local_71;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  code *local_48;
  longlong **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[2] != 0) goto LAB_144394290;
  param_1 = (longlong *)*param_1;
  FUN_1411cb701(&local_60,param_2[1]);
  if (1 < local_58) {
    FUN_140e8ce9a(&local_70);
    uVar6 = local_70;
    iVar11 = DAT_14cbf4b20 + -1;
    if (DAT_14cbf4b20 == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar11 != iVar12);
    }
    uVar8 = FUN_14152bbd0(param_1 + 8);
    plVar9 = (longlong *)FUN_1414cd70d(uVar8,uVar6);
    local_71 = 0;
    FUN_144384823(param_2 + 4,*plVar9 + 0x20);
    FUN_141904dca((char)param_2[3] != '\x03',*plVar9 + 0x20,plVar9);
    local_88 = 0;
    uStack_80 = 0;
    if (*param_2 == 0) {
LAB_144394112:
      puVar4 = (undefined8 *)*plVar9;
      *puVar4 = 0;
      plVar5 = (longlong *)puVar4[1];
      if (plVar5 != (longlong *)0x0) {
        puVar4[1] = 0;
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
      *(uint *)(*plVar9 + 0x10) = *(uint *)(*plVar9 + 0x10) & 0xfffffff7;
    }
    else {
      local_50 = &local_98;
      local_98 = 0;
      uStack_90 = 0;
      local_40 = &local_50;
      local_48 = FUN_143efb77c;
      bifrost::messaging::getRoomJID();
      local_88 = local_98;
      uStack_80 = uStack_90;
      if ((int)uStack_90 < 2) goto LAB_144394112;
      FUN_1446f470e(&local_98,L"SHIFT",1);
      FUN_1414c2d8e(&local_48,&local_88,local_98);
      pplVar3 = local_40;
      pcVar7 = local_48;
      if (local_40 == (longlong **)0x0) {
        puVar4 = (undefined8 *)*plVar9;
        *puVar4 = local_48;
        pplVar10 = (longlong **)puVar4[1];
        if (pplVar10 != (longlong **)0x0) {
          puVar4[1] = 0;
LAB_1443941c7:
          LOCK();
          pplVar3 = pplVar10 + 1;
          *(int *)pplVar3 = *(int *)pplVar3 + -1;
          UNLOCK();
          if (*(int *)pplVar3 == 0) {
            (*(code *)**pplVar10)(pplVar10);
            LOCK();
            piVar2 = (int *)((longlong)pplVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar11 = *piVar2;
            UNLOCK();
joined_r0x0001443941f4:
            if (iVar11 == 0) {
              (*(code *)(*pplVar10)[2])(pplVar10);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_40 + 1) = *(int *)(local_40 + 1) + 1;
        UNLOCK();
        puVar4 = (undefined8 *)*plVar9;
        *puVar4 = pcVar7;
        pplVar10 = (longlong **)puVar4[1];
        if (pplVar3 == pplVar10) {
          LOCK();
          pplVar10 = pplVar3 + 1;
          *(int *)pplVar10 = *(int *)pplVar10 + -1;
          UNLOCK();
          if (*(int *)pplVar10 == 0) {
            (*(code *)**pplVar3)(pplVar3);
            LOCK();
            piVar2 = (int *)((longlong)pplVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar11 = *piVar2;
            UNLOCK();
            pplVar10 = pplVar3;
            goto joined_r0x0001443941f4;
          }
        }
        else {
          puVar4[1] = pplVar3;
          if (pplVar10 != (longlong **)0x0) goto LAB_1443941c7;
        }
      }
      pplVar3 = local_40;
      if (local_40 != (longlong **)0x0) {
        LOCK();
        pplVar10 = local_40 + 1;
        *(int *)pplVar10 = *(int *)pplVar10 + -1;
        UNLOCK();
        if (*(int *)pplVar10 == 0) {
          (*(code *)**pplVar3)(pplVar3);
          LOCK();
          piVar2 = (int *)((longlong)pplVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar3)[2])(pplVar3);
          }
        }
      }
      *(uint *)(*plVar9 + 0x10) = (*(uint *)(*plVar9 + 0x10) & 0xfffffff7) + (uint)local_71 * 8;
    }
    (**(code **)(*param_1 + 0x40))(param_1,local_70,plVar9);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_68 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_144394290:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443942ba FUN_1443942ba body=211 status=ok
// SIG undefined FUN_1443942ba(void)

undefined8 * FUN_1443942ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba3ec40;
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = param_1 + 0x11;
  if (*(int *)(param_1 + 0x12) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14439433d;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14439433d:
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 7);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443943a2 FUN_1443943a2 body=314 status=ok
// SIG undefined FUN_1443943a2(void)

void FUN_1443943a2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 0xb) {
    FUN_1446efa72(param_2,0,0xb,0x10);
    *(undefined4 *)(param_2 + 1) = 0xb;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b507400;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3ec40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  FUN_140c39ec6(puVar2 + 7,param_1 + 0x38);
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  FUN_141532ff6(puVar2 + 0x11,param_1 + 0x88);
  puVar2[0x13] = *(undefined8 *)(param_1 + 0x98);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  puVar2[0x14] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443944dc FUN_1443944dc body=314 status=ok
// SIG undefined FUN_1443944dc(void)

void FUN_1443944dc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 0xb) {
    FUN_1446efa72(param_2,0,0xb,0x10);
    *(undefined4 *)(param_2 + 1) = 0xb;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b507400;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3ec40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  FUN_140c39ec6(puVar2 + 7,param_1 + 0x38);
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  FUN_141532ff6(puVar2 + 0x11,param_1 + 0x88);
  puVar2[0x13] = *(undefined8 *)(param_1 + 0x98);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  puVar2[0x14] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144394616 FUN_144394616 body=381 status=ok
// SIG undefined FUN_144394616(void)

void FUN_144394616(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xb) {
    FUN_1446efa72(param_2 + 1,0,0xb,0x10);
    param_2[1].LockCount = 0xb;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b507400;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3ec40;
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
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  *(undefined1 *)&p_Var2[1].Type = *(undefined1 *)(param_1 + 0x30);
  p_Var2[1].Flags = 0;
  p_Var2[1].CreatorBackTraceIndexHigh = 0;
  p_Var2[1].SpareWORD = 0;
  p_Var2[2].Type = 0;
  p_Var2[2].CreatorBackTraceIndex = 0;
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined8 *)&p_Var2[2].field_0x4 = 0xffffffff00000080;
  *(undefined4 *)((longlong)&p_Var2[2].CriticalSection + 4) = 0;
  p_Var2[2].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  p_Var2[2].EntryCount = 0;
  FUN_140c39ec6(&p_Var2[1].CriticalSection,param_1 + 0x38);
  p_Var2[2].Flags = 0;
  p_Var2[2].CreatorBackTraceIndexHigh = 0;
  p_Var2[2].SpareWORD = 0;
  p_Var2[3].Type = 0;
  p_Var2[3].CreatorBackTraceIndex = 0;
  FUN_141532ff6(&p_Var2[2].Flags,param_1 + 0x88);
  p_Var2[3].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x98);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0xa0);
  p_Var2[3].ProcessLocksList.Flink = p_Var3;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var3->Blink = *(int *)&p_Var3->Blink + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439476f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144394794 FUN_144394794 body=65 status=ok
// SIG undefined FUN_144394794(void)

void FUN_144394794(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14439481a(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443947d6 FUN_1443947d6 body=67 status=ok
// SIG undefined FUN_1443947d6(void)

undefined8 FUN_1443947d6(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14439481a(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439481a FUN_14439481a body=510 status=ok
// SIG undefined FUN_14439481a(void)

void FUN_14439481a(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 == 0) {
    plVar1 = (longlong *)*param_1;
    lVar2 = param_1[0x10];
    iVar4 = DAT_14cbf4b20 + -1;
    if (DAT_14cbf4b20 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
    uVar3 = FUN_14152bbd0(plVar1 + 8);
    FUN_1414cd70d(uVar3,lVar2);
    FUN_141904dca((char)param_1[3] != '\x01',param_1 + 1);
    if ((longlong *)param_1[0xe] != (longlong *)0x0 && (int)param_1[0xf] != 0) {
      (**(code **)(*(longlong *)param_1[0xe] + 0x60))();
    }
    lVar2 = param_1[0x10];
    iVar4 = DAT_14cbf4b20 + -1;
    if (DAT_14cbf4b20 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
    uVar3 = FUN_14152bbd0(plVar1 + 8);
    uVar3 = FUN_1414cd70d(uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000144394a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,param_1[0x10],uVar3,*(code **)(*plVar1 + 0x40));
    return;
  }
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 == (longlong *)0x0 || (int)param_1[0xf] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001443948a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1[0x10],0);
  return;
}



// FUNCTION 144394a18 FUN_144394a18 body=31 status=ok
// SIG undefined FUN_144394a18(void)

undefined8 FUN_144394a18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144394a38 FUN_144394a38 body=48 status=ok
// SIG undefined FUN_144394a38(void)

undefined8 FUN_144394a38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  return 1;
}



// FUNCTION 144394a68 FUN_144394a68 body=149 status=ok
// SIG undefined FUN_144394a68(void)

undefined8 * FUN_144394a68(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba3edc0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_144394adf;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144394adf:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144394b12 FUN_144394b12 body=146 status=ok
// SIG undefined FUN_144394b12(void)

void FUN_144394b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ee30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3edc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141532ff6(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144394ba4 FUN_144394ba4 body=146 status=ok
// SIG undefined FUN_144394ba4(void)

void FUN_144394ba4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ee30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3edc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141532ff6(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144394c36 FUN_144394c36 body=184 status=ok
// SIG undefined FUN_144394c36(void)

void FUN_144394c36(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3ee30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3edc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_141532ff6(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144394cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144394cee FUN_144394cee body=92 status=ok
// SIG undefined FUN_144394cee(void)

void FUN_144394cee(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  FUN_144394db0(param_1 + 0x18,&local_14);
  if (*(longlong *)(param_3 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144394d58 FUN_144394d58 body=86 status=ok
// SIG undefined FUN_144394d58(void)

undefined8 FUN_144394d58(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  FUN_144394db0(param_1 + 0x18,&local_14);
  if (*(longlong *)(param_3 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144394db0 FUN_144394db0 body=881 status=ok
// SIG undefined FUN_144394db0(void)

void FUN_144394db0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  longlong local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 5) >> 0x18);
  iStack_bc._0_1_ = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_3 + 5) >> 0x38);
  local_c8 = (undefined4)*param_3;
  local_c4 = (undefined4)((ulonglong)*param_3 >> 0x20);
  lVar2 = param_3[2];
  param_3[2] = 0;
  iVar1 = *(int *)(param_3 + 3);
  local_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  local_d0 = (longlong *)*param_1;
  lVar3 = param_1[3];
  iVar12 = DAT_14cbf4b20 + -1;
  if (DAT_14cbf4b20 == 0) {
    iVar12 = 0;
  }
  uVar10 = 0;
  if (0 < iVar12) {
    puVar11 = DAT_14cbf4b18;
    if (DAT_14cbf4b20 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    lVar13 = 0;
    uVar10 = 0;
    do {
      uVar9 = ((uint)(ushort)puVar11[lVar13] + (uint)(0x19 < (ushort)puVar11[lVar13] - 0x61) * 0x20)
              - 0x20;
      uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar9) & 0xff) * 4);
      uVar10 = uVar10 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      lVar13 = lVar13 + 1;
    } while (iVar12 != (int)lVar13);
  }
  local_d4 = *param_2;
  local_b8 = lVar2;
  local_b0 = iVar1;
  uVar6 = FUN_14152bbd0(local_d0 + 8,uVar10);
  plVar7 = (longlong *)FUN_1414cd70d(uVar6,lVar3);
  uVar8 = 1;
  if ((byte)iStack_bc < 4) {
    uVar8 = (char)(0x1040200 >> ((byte)(iStack_bc << 3) & 0x1f));
  }
  *(undefined1 *)(*plVar7 + 0x30) = uVar8;
  iVar12 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar12 = 0;
  }
  FUN_1402980a2(*plVar7 + 0x20,lVar2,iVar12);
  uVar5 = local_c8;
  lVar2 = *plVar7;
  local_98[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_140c3a2ac(local_98);
  local_98[0] = 2;
  local_90 = CONCAT44(local_90._4_4_,uVar5);
  FUN_1400b22c2(local_a8,"current_lobby_id");
  local_78 = local_a8;
  local_70 = local_98;
  FUN_140c3a2ee(lVar2 + 0x38,local_64,&local_78,0);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(local_98);
  uVar5 = local_c4;
  lVar2 = *plVar7;
  local_98[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_140c3a2ac(local_98);
  local_98[0] = 2;
  local_90 = CONCAT44(local_90._4_4_,uVar5);
  FUN_1400b22c2(local_a8,&DAT_14ba3eea9);
  local_78 = local_a8;
  local_70 = local_98;
  FUN_140c3a2ee(lVar2 + 0x38,local_64,&local_78,0);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(local_98);
  uVar5 = uStack_c0;
  lVar2 = *plVar7;
  local_98[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_140c3a2ac(local_98);
  local_98[0] = 2;
  local_90 = CONCAT44(local_90._4_4_,uVar5);
  FUN_1400b22c2(local_a8,"room_id");
  local_78 = local_a8;
  local_70 = local_98;
  FUN_140c3a2ee(lVar2 + 0x38,local_64,&local_78,0);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(local_98);
  FUN_144384823(&local_b8,*plVar7 + 0x20,local_98);
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0 && (int)param_1[2] != 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_1[3],local_d4 == 0);
  }
  (**(code **)(*local_d0 + 0x40))(local_d0,param_1[3],plVar7);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144395122 FUN_144395122 body=44 status=ok
// SIG undefined FUN_144395122(void)

void FUN_144395122(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014439514b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14439514e FUN_14439514e body=29 status=ok
// SIG undefined FUN_14439514e(void)

undefined8 FUN_14439514e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144395180 FUN_144395180 body=93 status=ok
// SIG undefined FUN_144395180(void)

void FUN_144395180(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3eff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443951de FUN_1443951de body=93 status=ok
// SIG undefined FUN_1443951de(void)

void FUN_1443951de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3eff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14439523c FUN_14439523c body=126 status=ok
// SIG undefined FUN_14439523c(void)

void FUN_14439523c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3f060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3eff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443952ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443952ba FUN_1443952ba body=77 status=ok
// SIG undefined FUN_1443952ba(void)

void FUN_1443952ba(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_144395358(param_1 + 0x18,&local_10,param_3,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144395308 FUN_144395308 body=79 status=ok
// SIG undefined FUN_144395308(void)

undefined8 FUN_144395308(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_144395358(param_1 + 0x18,&local_10,param_3,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144395358 FUN_144395358 body=882 status=ok
// SIG undefined FUN_144395358(void)

void FUN_144395358(longlong *param_1,undefined4 *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Src;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined8 *local_100;
  int local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar13 = *param_2;
  plVar5 = (longlong *)*param_1;
  local_ec = uVar13;
  if (*param_4 != 0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_1[1]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  lVar10 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1[1]);
  if ((lVar10 == 0) || (lVar11 = *(longlong *)(lVar10 + 0x100), lVar11 == 0)) goto LAB_1443953f8;
  plVar6 = *(longlong **)(lVar10 + 0x108);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    uVar13 = local_ec;
  }
  FUN_145b2066a(lVar11,uVar13);
  local_e8 = *(undefined8 *)(lVar10 + 0x128);
  plStack_e0 = *(longlong **)(lVar10 + 0x130);
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
    UNLOCK();
  }
  FUN_140b6d1a4(lVar11 + 8,&local_100,&local_e8,0);
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
  puVar3 = (undefined8 *)(lVar11 + 0xf0);
  if (puVar3 != param_3) {
    iVar4 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(lVar11 + 0xf8) = iVar4;
    if (iVar4 == 0 && *(int *)(lVar11 + 0xfc) == 0) {
      *(undefined4 *)(lVar11 + 0xfc) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
      }
    }
  }
  if (*(char *)(lVar10 + 0x38) == '\x01') {
    if (*(longlong *)(lVar10 + 0x128) != 0) {
      lVar11 = FUN_141424e9e(plVar5[0x51]);
      if (lVar11 != 0) {
        local_c8 = 0;
        local_c0 = 0;
        local_e8 = 0;
        plStack_e0 = (longlong *)0x0;
        local_bc = 0xffffffff00000080;
        local_b4 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        FUN_14438567c(&local_e8,lVar10 + 0x28);
        lVar10 = plVar5[0x51];
        lVar7 = param_1[1];
        local_100 = (undefined8 *)0x0;
        local_f8 = 0;
        FUN_1446efa72(&local_100,0,3,0x10);
        local_f8 = 3;
        *local_100 = &PTR_LAB_14b4f3a00;
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
        local_100[2] = lVar12;
        *local_100 = &PTR_FUN_14ba3f200;
        local_100[3] = plVar5;
        local_100[4] = lVar7;
        local_108 = &local_100;
        FUN_148fa3ef2(lVar10,lVar11,&local_ec,&local_e8);
        if (local_f8 == 0) {
LAB_1443956b9:
          if (local_100 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_100 != (undefined8 *)0x0) {
          (**(code **)*local_100)(local_100,0);
          FUN_1446efa72(&local_100,0,0,0x10);
          local_f8 = 0;
          goto LAB_1443956b9;
        }
        FUN_148fa4006(&local_e8);
        goto LAB_144395545;
      }
    }
    lVar10 = param_1[1];
    (**(code **)(*plVar5 + 0x28))(plVar5,lVar10);
    (**(code **)(*plVar5 + 0x68))(plVar5,lVar10,0);
  }
  else {
    *(undefined4 *)(lVar10 + 0x148) = 2;
    FUN_145c71422(plVar5,param_1[1]);
  }
LAB_144395545:
  if (plVar6 != (longlong *)0x0) {
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
  }
LAB_1443953f8:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443956ee FUN_1443956ee body=44 status=ok
// SIG undefined FUN_1443956ee(void)

void FUN_1443956ee(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144395717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14439571a FUN_14439571a body=29 status=ok
// SIG undefined FUN_14439571a(void)

undefined8 FUN_14439571a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439574c FUN_14439574c body=93 status=ok
// SIG undefined FUN_14439574c(void)

void FUN_14439574c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443957aa FUN_1443957aa body=93 status=ok
// SIG undefined FUN_1443957aa(void)

void FUN_1443957aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144395808 FUN_144395808 body=126 status=ok
// SIG undefined FUN_144395808(void)

void FUN_144395808(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f200;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144395877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144395886 FUN_144395886 body=63 status=ok
// SIG undefined FUN_144395886(void)

void FUN_144395886(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144395908(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443958c6 FUN_1443958c6 body=65 status=ok
// SIG undefined FUN_1443958c6(void)

undefined8 FUN_1443958c6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144395908(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144395908 FUN_144395908 body=111 status=ok
// SIG undefined FUN_144395908(void)

void FUN_144395908(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  uVar2 = param_1[1];
  if (*param_2 != 0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00014439593e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar2,0);
    return;
  }
  lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  if (lVar3 == 0) {
    return;
  }
  *(undefined4 *)(lVar3 + 0x148) = 2;
  FUN_145c71422(plVar1,param_1[1]);
  return;
}



// FUNCTION 144395978 FUN_144395978 body=44 status=ok
// SIG undefined FUN_144395978(void)

void FUN_144395978(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001443959a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1443959a4 FUN_1443959a4 body=29 status=ok
// SIG undefined FUN_1443959a4(void)

undefined8 FUN_1443959a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443959d6 FUN_1443959d6 body=101 status=ok
// SIG undefined FUN_1443959d6(void)

void FUN_1443959d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144395a3c FUN_144395a3c body=101 status=ok
// SIG undefined FUN_144395a3c(void)

void FUN_144395a3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144395aa2 FUN_144395aa2 body=134 status=ok
// SIG undefined FUN_144395aa2(void)

void FUN_144395aa2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f380;
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
                    /* WARNING: Could not recover jumptable at 0x000144395b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144395b28 FUN_144395b28 body=63 status=ok
// SIG undefined FUN_144395b28(void)

void FUN_144395b28(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144395baa(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144395b68 FUN_144395b68 body=65 status=ok
// SIG undefined FUN_144395b68(void)

undefined8 FUN_144395b68(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144395baa(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144395baa FUN_144395baa body=968 status=ok
// SIG undefined FUN_144395baa(void)

void FUN_144395baa(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined4 local_fc;
  undefined8 *local_f8;
  int local_f0;
  undefined8 *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = (longlong *)*param_1;
  if (((*param_2 != 0) || (lVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1[1]), lVar6 == 0)) ||
     (*(longlong *)(lVar6 + 0x100) == 0)) {
LAB_144395d73:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  if ((char)param_1[2] == '\x01') {
    if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
      if ((*(longlong *)(lVar6 + 0x128) == 0) || (lVar7 = FUN_141424e9e(plVar2[0x51]), lVar7 == 0))
      goto LAB_144395d73;
      lVar3 = *(longlong *)(lVar6 + 0x100);
      plVar9 = *(longlong **)(lVar6 + 0x108);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      lVar6 = plVar2[0x51];
      lVar4 = param_1[1];
      local_e8 = (undefined8 *)0x0;
      iStack_e0 = 0;
      FUN_1446efa72(&local_e8,0,3,0x10);
      iStack_e0 = 3;
      *local_e8 = &PTR_LAB_14b4f3a00;
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
      local_e8[2] = lVar8;
      *local_e8 = &PTR_FUN_14ba3f4e0;
      local_e8[3] = plVar2;
      local_e8[4] = lVar4;
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar3 + 0xd8));
      FUN_148fa46fc(lVar6,lVar7,&local_f8,&local_e8);
      if (iStack_e0 != 0) {
        if (local_e8 == (undefined8 *)0x0) goto LAB_144395f37;
        (**(code **)*local_e8)(local_e8,0);
        FUN_1446efa72(&local_e8,0,0,0x10);
        iStack_e0 = 0;
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_144395f37;
    }
  }
  else if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  if ((*(longlong *)(lVar6 + 0x128) == 0) || (lVar7 = FUN_141424e9e(plVar2[0x51]), lVar7 == 0))
  goto LAB_144395d73;
  lVar3 = *(longlong *)(lVar6 + 0x100);
  plVar9 = *(longlong **)(lVar6 + 0x108);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = (undefined8 *)0x0;
  iStack_e0 = 0;
  uStack_dc = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14438567c(&local_e8,lVar6 + 0x28);
  lVar6 = plVar2[0x51];
  lVar4 = param_1[1];
  local_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  FUN_1446efa72(&local_f8,0,3,0x10);
  local_f0 = 3;
  *local_f8 = &PTR_LAB_14b4f3a00;
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
  local_f8[2] = lVar8;
  *local_f8 = &PTR_FUN_14ba3f550;
  local_f8[3] = plVar2;
  local_f8[4] = lVar4;
  local_fc = *(undefined4 *)(lVar3 + 0xd8);
  local_108 = &local_f8;
  FUN_148fa47fa(lVar6,lVar7,&local_fc,&local_e8);
  if (local_f0 == 0) {
LAB_144395f23:
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)(local_f8,0);
    FUN_1446efa72(&local_f8,0,0,0x10);
    local_f0 = 0;
    goto LAB_144395f23;
  }
  FUN_148fa4006(&local_e8);
LAB_144395f37:
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
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144395fb6 FUN_144395fb6 body=29 status=ok
// SIG undefined FUN_144395fb6(void)

undefined8 FUN_144395fb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144395fe8 FUN_144395fe8 body=93 status=ok
// SIG undefined FUN_144395fe8(void)

void FUN_144395fe8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144396046 FUN_144396046 body=93 status=ok
// SIG undefined FUN_144396046(void)

void FUN_144396046(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443960a4 FUN_1443960a4 body=126 status=ok
// SIG undefined FUN_1443960a4(void)

void FUN_1443960a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f4e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144396113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439613a FUN_14439613a body=34 status=ok
// SIG undefined FUN_14439613a(void)

undefined8 FUN_14439613a(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_148f9d778(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_3 == 0);
  return 1;
}



// FUNCTION 14439615c FUN_14439615c body=29 status=ok
// SIG undefined FUN_14439615c(void)

undefined8 FUN_14439615c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439618e FUN_14439618e body=93 status=ok
// SIG undefined FUN_14439618e(void)

void FUN_14439618e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443961ec FUN_1443961ec body=93 status=ok
// SIG undefined FUN_1443961ec(void)

void FUN_1443961ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14439624a FUN_14439624a body=126 status=ok
// SIG undefined FUN_14439624a(void)

void FUN_14439624a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443962b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443962e0 FUN_1443962e0 body=34 status=ok
// SIG undefined FUN_1443962e0(void)

undefined8 FUN_1443962e0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_148f9d778(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_3 == 0);
  return 1;
}



// FUNCTION 144396302 FUN_144396302 body=547 status=ok
// SIG undefined FUN_144396302(void)

longlong * FUN_144396302(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 144396528 FUN_144396528 body=110 status=ok
// SIG undefined FUN_144396528(void)

undefined8 * FUN_144396528(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144396596 FUN_144396596 body=149 status=ok
// SIG undefined FUN_144396596(void)

undefined8 * FUN_144396596(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba3f720;
  plVar4 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443965e7;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443965e7:
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144396640 FUN_144396640 body=156 status=ok
// SIG undefined FUN_144396640(void)

void FUN_144396640(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_1413d6220(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 1443966dc FUN_1443966dc body=156 status=ok
// SIG undefined FUN_1443966dc(void)

void FUN_1443966dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_1413d6220(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 144396778 FUN_144396778 body=195 status=ok
// SIG undefined FUN_144396778(void)

void FUN_144396778(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f720;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = 0;
  FUN_1413d6220(&p_Var1[1].CriticalSection,param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439682b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439683c FUN_14439683c body=63 status=ok
// SIG undefined FUN_14439683c(void)

void FUN_14439683c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_1443968be(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439687c FUN_14439687c body=65 status=ok
// SIG undefined FUN_14439687c(void)

undefined8 FUN_14439687c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_1443968be(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443968be FUN_1443968be body=113 status=ok
// SIG undefined FUN_1443968be(void)

void FUN_1443968be(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  iVar1 = *param_2;
  plVar2 = (longlong *)*param_1;
  FUN_14582babe(plVar2,param_1[3]);
  uVar3 = param_1[3];
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar3);
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0 && *(int *)(param_1 + 5) != 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,uVar3,iVar1 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014439692c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x108))(plVar2,uVar3,iVar1 == 0);
  return;
}



// FUNCTION 144396930 FUN_144396930 body=52 status=ok
// SIG undefined FUN_144396930(void)

undefined8 * FUN_144396930(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3f8d0;
  FUN_148fa3ea2(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144396978 FUN_144396978 body=135 status=ok
// SIG undefined FUN_144396978(void)

void FUN_144396978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f8d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 144396a00 FUN_144396a00 body=135 status=ok
// SIG undefined FUN_144396a00(void)

void FUN_144396a00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f8d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 144396a88 FUN_144396a88 body=173 status=ok
// SIG undefined FUN_144396a88(void)

void FUN_144396a88(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3f940;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f8d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    p_Var1->Flags = 0;
    p_Var1->CreatorBackTraceIndexHigh = 0;
    p_Var1->SpareWORD = 0;
    p_Var1[1].Type = 0;
    p_Var1[1].CreatorBackTraceIndex = 0;
    *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  }
  else {
    p_Var1->Flags = (int)lVar2;
    p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar2 >> 0x20);
    p_Var1->SpareWORD = (short)((ulonglong)lVar2 >> 0x30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    p_Var1[1].Type = (short)lVar2;
    p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
    *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144396b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144396b36 FUN_144396b36 body=66 status=ok
// SIG undefined FUN_144396b36(void)

void FUN_144396b36(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144396bc0(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144396b7a FUN_144396b7a body=68 status=ok
// SIG undefined FUN_144396b7a(void)

undefined8 FUN_144396b7a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144396bc0(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144396bc0 FUN_144396bc0 body=1041 status=ok
// SIG undefined FUN_144396bc0(void)

void FUN_144396bc0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138 [12];
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_148fa534c(local_138,param_3);
  lVar8 = *param_2;
  plVar2 = (longlong *)*param_1;
  lVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1[1]);
  if ((lVar7 == 0) || (lVar10 = *(longlong *)(lVar7 + 0x100), lVar10 == 0)) {
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0x18) = 3;
    }
    (**(code **)(*plVar2 + 0x140))(plVar2,param_1[1],0);
    goto LAB_144396c3f;
  }
  plVar3 = *(longlong **)(lVar7 + 0x108);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(lVar10 + 0x104) = local_138[0];
  lVar7 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  uVar6 = FUN_140b71325(lVar8 + 0x228);
  if (*(int *)(lVar10 + 0x60) != *(int *)(lVar10 + 0x8c)) {
    lVar8 = lVar10 + 0x90;
    if (*(longlong *)(lVar10 + 0x98) != 0) {
      lVar8 = *(longlong *)(lVar10 + 0x98);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar10 + 0xa0) - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      do {
        lVar7 = *(longlong *)(lVar10 + 0x58) + (longlong)iVar9 * 0x60;
        if (*(uint *)(*(longlong *)(lVar10 + 0x58) + (longlong)iVar9 * 0x60) == uVar6)
        goto LAB_144396d52;
        iVar9 = *(int *)(lVar7 + 0x58);
      } while (iVar9 != -1);
    }
    lVar7 = 0;
  }
LAB_144396d52:
  FUN_14058acb2(&local_a8,lVar7 + 8);
  *(undefined1 *)(lVar10 + 0x108) = 1;
  uVar4 = param_1[1];
  lVar8 = param_1[2];
  if ((lVar8 == 0) || (plVar11 = (longlong *)param_1[3], plVar11 == (longlong *)0x0)) {
    plVar11 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_108 = (undefined8 *)0x0;
  uStack_100._0_4_ = 0;
  FUN_1446efa72(&local_108,0,4,0x10);
  puVar5 = local_108;
  *local_108 = &PTR_LAB_14ba3fa20;
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
  local_108[2] = lVar10;
  *local_108 = &PTR_FUN_14ba3f9b0;
  local_108[3] = plVar2;
  local_108[4] = uVar4;
  if (lVar8 == 0) {
    local_108[5] = 0;
    local_108[6] = 0;
  }
  else {
    local_108[5] = lVar8;
    local_108[6] = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
  }
  local_108 = (undefined8 *)0x0;
  uStack_100._0_4_ = 0;
  iVar9 = (int)uStack_100;
  uStack_100._0_4_ = 0;
  if (local_50 == 0) {
LAB_144396e4b:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    uStack_100._0_4_ = iVar9;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_144396e4b;
  }
  local_58 = puVar5;
  local_50 = 4;
  if ((int)uStack_100 == 0) {
LAB_144396ea6:
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_108 != (undefined8 *)0x0) {
    (**(code **)*local_108)(local_108,0);
    FUN_1446efa72(&local_108,0,0,0x10);
    uStack_100._0_4_ = 0;
    goto LAB_144396ea6;
  }
  if (plVar11 != (longlong *)0x0 && lVar8 != 0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14058acb2(&local_108,&local_a8);
  local_b8 = 0;
  local_b0 = 0;
  FUN_148fa574e(&local_b8,&local_58);
  FUN_148a6182c(&local_108);
  FUN_148a6182c(&local_a8);
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
LAB_144396c3f:
  FUN_148fa53f2(local_138);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144396fd2 FUN_144396fd2 body=52 status=ok
// SIG undefined FUN_144396fd2(void)

undefined8 * FUN_144396fd2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3f9b0;
  FUN_148fa3ea2(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439701a FUN_14439701a body=135 status=ok
// SIG undefined FUN_14439701a(void)

void FUN_14439701a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fa20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f9b0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1443970a2 FUN_1443970a2 body=135 status=ok
// SIG undefined FUN_1443970a2(void)

void FUN_1443970a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fa20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f9b0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14439712a FUN_14439712a body=173 status=ok
// SIG undefined FUN_14439712a(void)

void FUN_14439712a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3fa20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3f9b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    p_Var1->Flags = 0;
    p_Var1->CreatorBackTraceIndexHigh = 0;
    p_Var1->SpareWORD = 0;
    p_Var1[1].Type = 0;
    p_Var1[1].CreatorBackTraceIndex = 0;
    *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  }
  else {
    p_Var1->Flags = (int)lVar2;
    p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar2 >> 0x20);
    p_Var1->SpareWORD = (short)((ulonglong)lVar2 >> 0x30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    p_Var1[1].Type = (short)lVar2;
    p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
    *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443971c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443971d8 FUN_1443971d8 body=109 status=ok
// SIG undefined FUN_1443971d8(void)

void FUN_1443971d8(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  FUN_1443972bc(param_1 + 0x18,&local_14,param_4);
  if (*(longlong *)(param_4 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_4 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144397254 FUN_144397254 body=103 status=ok
// SIG undefined FUN_144397254(void)

undefined8 FUN_144397254(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  FUN_1443972bc(param_1 + 0x18,&local_14,param_4);
  if (*(longlong *)(param_4 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_4 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443972bc FUN_1443972bc body=950 status=ok
// SIG undefined FUN_1443972bc(void)

void FUN_1443972bc(longlong *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  int local_e0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar4 = *(longlong *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  iVar2 = *param_2;
  plVar5 = (longlong *)*param_1;
  lVar10 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1[1]);
  if ((lVar10 == 0) || (lVar6 = *(longlong *)(lVar10 + 0x100), lVar6 == 0)) {
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0x18) = 3;
    }
    (**(code **)(*plVar5 + 0x140))(plVar5,param_1[1],0);
    goto LAB_1443973a9;
  }
  plVar7 = *(longlong **)(lVar10 + 0x108);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    if (*(longlong *)(lVar10 + 8) != 0) {
      FUN_141424e9e(plVar5[0x51]);
    }
    plVar12 = (longlong *)0x0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    lVar10 = param_1[1];
    lVar6 = param_1[2];
    if (lVar6 != 0) {
      plVar12 = (longlong *)param_1[3];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
    }
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,4,0x10);
    puVar8 = local_e8;
    *local_e8 = &PTR_LAB_14ba3fb00;
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
    local_e8[2] = lVar11;
    *local_e8 = &PTR_FUN_14ba3fa90;
    local_e8[3] = plVar5;
    local_e8[4] = lVar10;
    if (lVar6 == 0) {
      local_e8[5] = 0;
      local_e8[6] = 0;
    }
    else {
      local_e8[5] = lVar6;
      local_e8[6] = plVar12;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
    }
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    if (local_50 == 0) {
LAB_14439753e:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_14439753e;
    }
    local_58 = puVar8;
    local_50 = 4;
    if (local_e0 == 0) {
LAB_144397593:
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (undefined8 *)0x0) {
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      local_e0 = 0;
      goto LAB_144397593;
    }
    if (plVar12 != (longlong *)0x0 && lVar6 != 0) {
      LOCK();
      plVar5 = plVar12 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_148fa5456(&local_e8,&local_98);
    local_a8 = 0;
    local_a0 = 0;
    FUN_148fa56ca(&local_a8,&local_58);
    FUN_148a617ee(&local_e8);
    FUN_148a617ee(&local_98);
  }
  else {
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0x18) = 3;
    }
    *(undefined1 *)(lVar6 + 0x108) = 0;
    (**(code **)(*plVar5 + 0x140))(plVar5,param_1[1],0);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_1443973a9:
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144397674 FUN_144397674 body=52 status=ok
// SIG undefined FUN_144397674(void)

undefined8 * FUN_144397674(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3fa90;
  FUN_148fa3ea2(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443976bc FUN_1443976bc body=135 status=ok
// SIG undefined FUN_1443976bc(void)

void FUN_1443976bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fb00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fa90;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 144397744 FUN_144397744 body=135 status=ok
// SIG undefined FUN_144397744(void)

void FUN_144397744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fb00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fa90;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1443977cc FUN_1443977cc body=173 status=ok
// SIG undefined FUN_1443977cc(void)

void FUN_1443977cc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3fb00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3fa90;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    p_Var1->Flags = 0;
    p_Var1->CreatorBackTraceIndexHigh = 0;
    p_Var1->SpareWORD = 0;
    p_Var1[1].Type = 0;
    p_Var1[1].CreatorBackTraceIndex = 0;
    *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  }
  else {
    p_Var1->Flags = (int)lVar2;
    p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar2 >> 0x20);
    p_Var1->SpareWORD = (short)((ulonglong)lVar2 >> 0x30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    p_Var1[1].Type = (short)lVar2;
    p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
    *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144397869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439787a FUN_14439787a body=65 status=ok
// SIG undefined FUN_14439787a(void)

void FUN_14439787a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144397900(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443978bc FUN_1443978bc body=67 status=ok
// SIG undefined FUN_1443978bc(void)

undefined8 FUN_1443978bc(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144397900(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144397900 FUN_144397900 body=521 status=ok
// SIG undefined FUN_144397900(void)

void FUN_144397900(longlong *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar3 = *param_2;
  plVar4 = (longlong *)*param_1;
  lVar10 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1[1]);
  if ((lVar10 == 0) || (lVar5 = *(longlong *)(lVar10 + 0x100), lVar5 == 0)) {
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0x18) = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x000144397a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x140))(plVar4,param_1[1],0);
    return;
  }
  plVar6 = *(longlong **)(lVar10 + 0x108);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    lVar10 = plVar4[0x53];
    if ((longlong)(int)lVar10 != 0) {
      lVar7 = plVar4[0x52];
      lVar11 = 0;
      do {
        lVar8 = *(longlong *)(lVar7 + 0x100 + lVar11);
        if (lVar8 != 0) {
          plVar9 = *(longlong **)(lVar7 + 0x108 + lVar11);
          if (plVar9 == (longlong *)0x0) {
            if (*(int *)(lVar8 + 0x100) == *param_3) goto LAB_144397aa1;
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            if (*(int *)(lVar8 + 0x100) == *param_3) {
LAB_144397aa1:
              if (param_1[2] != 0) {
                *(undefined4 *)(param_1[2] + 0x18) = 2;
              }
              *(undefined1 *)(lVar8 + 0x108) = 0;
              (**(code **)(*plVar4 + 0x140))(plVar4,*(undefined8 *)(lVar7 + 0x118 + lVar11),1);
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar9 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
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
              goto LAB_144397a21;
            }
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
        }
        lVar11 = lVar11 + 0x150;
      } while ((longlong)(int)lVar10 * 0x150 - lVar11 != 0);
    }
    *(int *)(lVar5 + 0x100) = *param_3;
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0x18) = 2;
    }
    *(undefined1 *)(lVar5 + 0x108) = 0;
    (**(code **)(*plVar4 + 0x140))(plVar4,param_1[1],1);
  }
LAB_144397a21:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144397a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144397b0a FUN_144397b0a body=29 status=ok
// SIG undefined FUN_144397b0a(void)

undefined8 FUN_144397b0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144397b3c FUN_144397b3c body=93 status=ok
// SIG undefined FUN_144397b3c(void)

void FUN_144397b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fb70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144397b9a FUN_144397b9a body=93 status=ok
// SIG undefined FUN_144397b9a(void)

void FUN_144397b9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fb70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144397bf8 FUN_144397bf8 body=126 status=ok
// SIG undefined FUN_144397bf8(void)

void FUN_144397bf8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3f860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3fb70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144397c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144397c76 FUN_144397c76 body=65 status=ok
// SIG undefined FUN_144397c76(void)

void FUN_144397c76(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144397cfc(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144397cb8 FUN_144397cb8 body=67 status=ok
// SIG undefined FUN_144397cb8(void)

undefined8 FUN_144397cb8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144397cfc(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144397cfc FUN_144397cfc body=157 status=ok
// SIG undefined FUN_144397cfc(void)

void FUN_144397cfc(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar3 = (longlong *)*param_1;
  uVar7 = param_1[1];
  if (*param_2 == 0) {
    lVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar7);
    if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x100), lVar4 != 0)) {
      plVar5 = *(longlong **)(lVar6 + 0x108);
      if (plVar5 == (longlong *)0x0) {
        *(undefined1 *)(lVar4 + 0x108) = 0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *(undefined1 *)(lVar4 + 0x108) = 0;
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
    uVar7 = param_1[1];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x170);
    uVar8 = 1;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x170);
    uVar8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144397d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,uVar7,uVar8);
  return;
}



// FUNCTION 144397d9a FUN_144397d9a body=121 status=ok
// SIG undefined FUN_144397d9a(void)

undefined8 * FUN_144397d9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3fbe0;
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
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 144397e28 FUN_144397e28 body=143 status=ok
// SIG undefined FUN_144397e28(void)

void FUN_144397e28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fc50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fbe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144397eb8 FUN_144397eb8 body=143 status=ok
// SIG undefined FUN_144397eb8(void)

void FUN_144397eb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3fc50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3fbe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144397f48 FUN_144397f48 body=181 status=ok
// SIG undefined FUN_144397f48(void)

void FUN_144397f48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3fc50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3fbe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144397fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144397ffe FUN_144397ffe body=65 status=ok
// SIG undefined FUN_144397ffe(void)

void FUN_144397ffe(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144398084(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398040 FUN_144398040 body=67 status=ok
// SIG undefined FUN_144398040(void)

undefined8 FUN_144398040(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144398084(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398084 FUN_144398084 body=205 status=ok
// SIG undefined FUN_144398084(void)

void FUN_144398084(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1[3] + 0x18) == 1) {
    uVar1 = *param_1;
    if (*param_2 != 0) {
      *(undefined4 *)(param_1[3] + 0x18) = 3;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_3 + 1);
    lVar2 = (longlong)local_40;
    _Src = (void *)*param_3;
    if (lVar2 == 0) {
      local_3c = 0;
    }
    else {
      FUN_148fa5a74(&local_48,local_40);
      memcpy(local_48,_Src,lVar2 << 2);
    }
    local_58 = param_1 + 3;
    FUN_144388986(uVar1,param_1[1],&local_48,0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398168 FUN_144398168 body=44 status=ok
// SIG undefined FUN_144398168(void)

void FUN_144398168(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144398191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 144398194 FUN_144398194 body=135 status=ok
// SIG undefined FUN_144398194(void)

undefined8 * FUN_144398194(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3fea0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
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
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 144398230 FUN_144398230 body=227 status=ok
// SIG undefined FUN_144398230(void)

void FUN_144398230(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba3ff10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3fea0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  }
  else {
    FUN_148fa5a74(puVar2 + 8,iVar1);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  return;
}



// FUNCTION 144398314 FUN_144398314 body=227 status=ok
// SIG undefined FUN_144398314(void)

void FUN_144398314(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba3ff10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3fea0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  }
  else {
    FUN_148fa5a74(puVar2 + 8,iVar1);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  return;
}



// FUNCTION 1443983f8 FUN_1443983f8 body=286 status=ok
// SIG undefined FUN_1443983f8(void)

void FUN_1443983f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  _RTL_CRITICAL_SECTION *p_Var5;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ba3ff10;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3fea0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var2->Flags = (int)lVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var5 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].CriticalSection = p_Var5;
  if (p_Var5 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var5->LockCount = p_Var5->LockCount + 1;
    UNLOCK();
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)&p_Var2[1].ProcessLocksList.Blink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = 0;
  }
  else {
    FUN_148fa5a74(&p_Var2[1].ProcessLocksList,iVar1);
    memcpy(p_Var2[1].ProcessLocksList.Flink,_Src,(longlong)iVar1 << 2);
  }
  p_Var2[1].EntryCount = *(DWORD *)(param_1 + 0x50);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443984dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144398516 FUN_144398516 body=66 status=ok
// SIG undefined FUN_144398516(void)

void FUN_144398516(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_1443985a0(param_1 + 0x18,&local_c,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439855a FUN_14439855a body=68 status=ok
// SIG undefined FUN_14439855a(void)

undefined8 FUN_14439855a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_1443985a0(param_1 + 0x18,&local_c,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443985a0 FUN_1443985a0 body=240 status=ok
// SIG undefined FUN_1443985a0(void)

void FUN_1443985a0(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1[3] + 0x18) == 1) {
    uVar2 = *param_1;
    if (*param_2 == 0) {
      uVar3 = FUN_148fa65b6(param_1[3] + 8);
      FUN_145b20464(uVar2,*(undefined4 *)(param_1[5] + (longlong)*(int *)(param_1 + 7) * 4),param_3,
                    uVar3);
    }
    iVar1 = *(int *)(param_1 + 7);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_1 + 6);
    lVar4 = (longlong)local_48;
    _Src = (void *)param_1[5];
    if (lVar4 == 0) {
      local_44 = 0;
    }
    else {
      FUN_148fa5a74(&local_50,local_48);
      memcpy(local_50,_Src,lVar4 << 2);
    }
    local_58 = param_1 + 3;
    FUN_144388986(uVar2,param_1[1],&local_50,iVar1 + 1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398692 FUN_144398692 body=44 status=ok
// SIG undefined FUN_144398692(void)

void FUN_144398692(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001443986bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1443986be FUN_1443986be body=111 status=ok
// SIG undefined FUN_1443986be(void)

undefined8 * FUN_1443986be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba40080;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14439870f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14439870f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144398742 FUN_144398742 body=129 status=ok
// SIG undefined FUN_144398742(void)

void FUN_144398742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ff10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_1459ae89c(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443987c4 FUN_1443987c4 body=129 status=ok
// SIG undefined FUN_1443987c4(void)

void FUN_1443987c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ff10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_1459ae89c(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 144398846 FUN_144398846 body=163 status=ok
// SIG undefined FUN_144398846(void)

void FUN_144398846(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3ff10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40080;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_1459ae89c(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443988da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443988ea FUN_1443988ea body=77 status=ok
// SIG undefined FUN_1443988ea(void)

void FUN_1443988ea(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_144398988(param_1 + 0x18,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398938 FUN_144398938 body=79 status=ok
// SIG undefined FUN_144398938(void)

undefined8 FUN_144398938(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_144398988(param_1 + 0x18,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398988 FUN_144398988 body=626 status=ok
// SIG undefined FUN_144398988(void)

void FUN_144398988(undefined8 *param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_198 [40];
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*param_3 == 0) {
    uVar1 = *param_2;
    uVar4 = *param_1;
    local_170 = &PTR_FUN_14b4c3b18;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = &PTR_FUN_14b4c3b20;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = FUN_1414a827a();
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 9999;
    FUN_145b20464(uVar4,uVar1,param_4,&local_170);
    plVar3 = (longlong *)param_1[2];
    if (plVar3 == (longlong *)0x0 || *(int *)(param_1 + 3) == 0) goto LAB_144398ab4;
    uVar1 = *(undefined4 *)(param_1 + 1);
    lVar2 = *plVar3;
    uVar4 = 1;
  }
  else {
    local_170 = &PTR_FUN_14b4c3b18;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = &PTR_FUN_14b4c3b20;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = FUN_1414a827a();
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 9999;
    plVar3 = (longlong *)param_1[2];
    if (plVar3 == (longlong *)0x0 || *(int *)(param_1 + 3) == 0) goto LAB_144398ab4;
    uVar1 = *(undefined4 *)(param_1 + 1);
    lVar2 = *plVar3;
    uVar4 = 0;
  }
  (**(code **)(lVar2 + 0x60))(plVar3,uVar1,uVar4,&local_170);
LAB_144398ab4:
  FUN_14124efea(&local_170);
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398bfc FUN_144398bfc body=83 status=ok
// SIG undefined FUN_144398bfc(void)

undefined8 * FUN_144398bfc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba40110;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 144398c64 FUN_144398c64 body=126 status=ok
// SIG undefined FUN_144398c64(void)

void FUN_144398c64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 144398ce2 FUN_144398ce2 body=126 status=ok
// SIG undefined FUN_144398ce2(void)

void FUN_144398ce2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 144398d60 FUN_144398d60 body=164 status=ok
// SIG undefined FUN_144398d60(void)

void FUN_144398d60(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144398df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144398e04 FUN_144398e04 body=77 status=ok
// SIG undefined FUN_144398e04(void)

void FUN_144398e04(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_144398ea2(param_1 + 0x18,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398e52 FUN_144398e52 body=79 status=ok
// SIG undefined FUN_144398e52(void)

undefined8 FUN_144398e52(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_144398ea2(param_1 + 0x18,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144398ea2 FUN_144398ea2 body=667 status=ok
// SIG undefined FUN_144398ea2(void)

void FUN_144398ea2(longlong *param_1,undefined4 *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined8 *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = *param_2;
  plVar4 = (longlong *)*param_1;
  if (*param_3 != 0) {
    (**(code **)(*plVar4 + 0x28))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  lVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1[3]);
  if ((lVar9 != 0) && (lVar5 = *(longlong *)(lVar9 + 0x100), lVar5 != 0)) {
    plVar6 = *(longlong **)(lVar9 + 0x108);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = (undefined8 *)param_1[1];
    local_40 = (longlong *)param_1[2];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_140b6d1a4(lVar5 + 8,local_4c,&local_48,0);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
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
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  lVar9 = param_1[1];
  plVar6 = (longlong *)param_1[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_141424e9e(plVar4[0x51]);
  }
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
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1[3]);
    (**(code **)(*plVar4 + 0x230))(plVar4,param_1[3],5);
  }
  else {
    lVar5 = plVar4[0x51];
    lVar7 = param_1[3];
    local_48 = (undefined8 *)0x0;
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
    *local_48 = &PTR_LAB_14b4f3a70;
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
    local_48[2] = lVar10;
    *local_48 = &PTR_FUN_14ba40290;
    local_48[3] = plVar4;
    local_48[4] = lVar7;
    FUN_1461daeaa(lVar5,lVar9,&local_34,&local_48);
    if ((int)local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_14439903d;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14439903d:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144399158 FUN_144399158 body=44 status=ok
// SIG undefined FUN_144399158(void)

void FUN_144399158(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144399181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 144399184 FUN_144399184 body=29 status=ok
// SIG undefined FUN_144399184(void)

undefined8 FUN_144399184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443991b6 FUN_1443991b6 body=93 status=ok
// SIG undefined FUN_1443991b6(void)

void FUN_1443991b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144399214 FUN_144399214 body=93 status=ok
// SIG undefined FUN_144399214(void)

void FUN_144399214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144399272 FUN_144399272 body=126 status=ok
// SIG undefined FUN_144399272(void)

void FUN_144399272(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40290;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443992e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443992f0 FUN_1443992f0 body=65 status=ok
// SIG undefined FUN_1443992f0(void)

void FUN_1443992f0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144399376(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144399332 FUN_144399332 body=67 status=ok
// SIG undefined FUN_144399332(void)

undefined8 FUN_144399332(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144399376(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144399376 FUN_144399376 body=213 status=ok
// SIG undefined FUN_144399376(void)

void FUN_144399376(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  char cVar12;
  undefined7 uVar11;
  
  iVar4 = *param_2;
  plVar5 = (longlong *)*param_1;
  if (iVar4 == 0) {
    lVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1[1]);
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x148) = 2;
      if (*(char *)(lVar9 + 0x3e) == '\x01') {
        lVar6 = plVar5[0x51];
        uVar7 = *(undefined8 *)(lVar6 + 0xf8);
        plVar8 = *(longlong **)(lVar6 + 0x100);
        bVar3 = 1;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          bVar3 = *(byte *)(lVar9 + 0x3e);
        }
        uVar11 = (undefined7)((ulonglong)lVar6 >> 8);
        uVar10 = CONCAT71(uVar11,1);
        if ((bVar3 & 1) != 0) {
          if (*(char *)(lVar9 + 0x3d) == '\x01') {
            uVar10 = CONCAT71(uVar11,*(undefined1 *)(lVar9 + 0x3f));
          }
          else {
            uVar10 = 0;
          }
        }
        FUN_14582bb32(uVar7,uVar10);
        if (plVar8 != (longlong *)0x0) {
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
  }
  else {
    (**(code **)(*plVar5 + 0x28))();
  }
  cVar12 = (iVar4 != 1) * '\x03' + '\x02';
  if (iVar4 == 0) {
    cVar12 = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x0001443993e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x230))(plVar5,param_1[1],cVar12);
  return;
}



// FUNCTION 14439944c FUN_14439944c body=29 status=ok
// SIG undefined FUN_14439944c(void)

undefined8 FUN_14439944c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439947e FUN_14439947e body=85 status=ok
// SIG undefined FUN_14439947e(void)

void FUN_14439947e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40440;
  return;
}



// FUNCTION 1443994d4 FUN_1443994d4 body=85 status=ok
// SIG undefined FUN_1443994d4(void)

void FUN_1443994d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40440;
  return;
}



// FUNCTION 14439952a FUN_14439952a body=118 status=ok
// SIG undefined FUN_14439952a(void)

void FUN_14439952a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40440;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144399591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443995a6 FUN_1443995a6 body=149 status=ok
// SIG undefined FUN_1443995a6(void)

undefined8 * FUN_1443995a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba40670;
  plVar4 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443995f7;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443995f7:
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144399650 FUN_144399650 body=156 status=ok
// SIG undefined FUN_144399650(void)

void FUN_144399650(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_148fa736c(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 1443996ec FUN_1443996ec body=156 status=ok
// SIG undefined FUN_1443996ec(void)

void FUN_1443996ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_148fa736c(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 144399788 FUN_144399788 body=195 status=ok
// SIG undefined FUN_144399788(void)

void FUN_144399788(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40670;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = 0;
  FUN_148fa736c(&p_Var1[1].CriticalSection,param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439983b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439984c FUN_14439984c body=63 status=ok
// SIG undefined FUN_14439984c(void)

void FUN_14439984c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_1443998ce(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439988c FUN_14439988c body=65 status=ok
// SIG undefined FUN_14439988c(void)

undefined8 FUN_14439988c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_1443998ce(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443998ce FUN_1443998ce body=300 status=ok
// SIG undefined FUN_1443998ce(void)

void FUN_1443998ce(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = *param_2;
  if (iVar4 == 0) {
    lVar7 = (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_1[3]);
    if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0x100), lVar6 != 0)) {
      plVar5 = *(longlong **)(lVar7 + 0x108);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_38 = param_1[1];
      local_30 = (longlong *)param_1[2];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_140b6d1a4(lVar6 + 8,local_3c,&local_38,0);
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
  plVar5 = (longlong *)param_1[4];
  if (plVar5 != (longlong *)0x0 && *(int *)(param_1 + 5) != 0) {
    cVar8 = (iVar4 != 1) * '\x03' + '\x02';
    if (iVar4 == 0) {
      cVar8 = '\0';
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,param_1[1],cVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443999fc FUN_1443999fc body=149 status=ok
// SIG undefined FUN_1443999fc(void)

undefined8 * FUN_1443999fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba406e0;
  plVar4 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_144399a4d;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_144399a4d:
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144399aa6 FUN_144399aa6 body=156 status=ok
// SIG undefined FUN_144399aa6(void)

void FUN_144399aa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba406e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_141532ff6(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 144399b42 FUN_144399b42 body=156 status=ok
// SIG undefined FUN_144399b42(void)

void FUN_144399b42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba406e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_141532ff6(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 144399bde FUN_144399bde body=195 status=ok
// SIG undefined FUN_144399bde(void)

void FUN_144399bde(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba406e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = 0;
  FUN_141532ff6(&p_Var1[1].CriticalSection,param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144399c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144399ca2 FUN_144399ca2 body=63 status=ok
// SIG undefined FUN_144399ca2(void)

void FUN_144399ca2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144399d24(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144399ce2 FUN_144399ce2 body=65 status=ok
// SIG undefined FUN_144399ce2(void)

undefined8 FUN_144399ce2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144399d24(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144399d24 FUN_144399d24 body=215 status=ok
// SIG undefined FUN_144399d24(void)

void FUN_144399d24(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *param_2;
  lVar6 = (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_1[3]);
  if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x100), lVar4 != 0)) {
    plVar5 = *(longlong **)(lVar6 + 0x108);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_30 = param_1[1];
    local_28 = param_1[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1459b6cd8(lVar4 + 8,&local_30);
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
  plVar5 = (longlong *)param_1[4];
  if (plVar5 != (longlong *)0x0 && *(int *)(param_1 + 5) != 0) {
    (**(code **)(*plVar5 + 0x60))(plVar5,param_1[1],iVar3 == 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144399dfc FUN_144399dfc body=29 status=ok
// SIG undefined FUN_144399dfc(void)

undefined8 FUN_144399dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144399e2e FUN_144399e2e body=93 status=ok
// SIG undefined FUN_144399e2e(void)

void FUN_144399e2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba407c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144399e8c FUN_144399e8c body=93 status=ok
// SIG undefined FUN_144399e8c(void)

void FUN_144399e8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba407c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144399eea FUN_144399eea body=126 status=ok
// SIG undefined FUN_144399eea(void)

void FUN_144399eea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba407c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba40750;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144399f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144399f68 FUN_144399f68 body=43 status=ok
// SIG undefined FUN_144399f68(void)

void FUN_144399f68(longlong param_1,longlong param_2)

{
  FUN_144399fbc(param_1 + 0x18);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144399f94 FUN_144399f94 body=39 status=ok
// SIG undefined FUN_144399f94(void)

undefined1 FUN_144399f94(longlong param_1,longlong param_2)

{
  FUN_144399fbc(param_1 + 0x18);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 144399fbc FUN_144399fbc body=999 status=ok
// SIG undefined FUN_144399fbc(void)

void FUN_144399fbc(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  longlong *plVar6;
  code *pcVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = *param_2;
  _Src = (void *)param_2[1];
  iVar4 = (int)param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  param_1 = (longlong *)*param_1;
  (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],&local_58);
  pplVar8 = local_50;
  pcVar7 = local_58;
  if (local_50 != (longlong **)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
    UNLOCK();
    if (local_50 != (longlong **)0x0) {
      LOCK();
      pplVar2 = local_50 + 1;
      *(int *)pplVar2 = *(int *)pplVar2 + -1;
      UNLOCK();
      if (*(int *)pplVar2 == 0) {
        (*(code *)**local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)pplVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (*(code *)(*pplVar8)[2])(pplVar8);
        }
      }
    }
  }
  if (pcVar7 == (code *)0x0) goto LAB_14439a329;
  local_78 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = &local_78;
  local_58 = FUN_143efb77c;
  bifrost::messaging::getRoomJID(uVar5 >> 0x20);
  FUN_1411cb701(&local_58,uVar5 & 0xffffffff);
  if ((1 < (int)uStack_60) && (1 < (int)local_50)) {
    (**(code **)(*(longlong *)pcVar7 + 0x18))(pcVar7,&local_78,&local_68);
    (**(code **)(**(longlong **)(pcVar7 + 0x288) + 0x80))(*(longlong **)(pcVar7 + 0x288),&local_98);
    (**(code **)(*local_98 + 0x120))(local_98,&local_88,&local_58);
    plVar6 = (longlong *)CONCAT44(uStack_8c,local_90);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if ((local_78 != (longlong *)0x0) && (local_88 != 0)) {
      local_98 = (longlong *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,5,0x10);
      plVar6 = local_98;
      local_90 = 5;
      *local_98 = (longlong)&PTR_LAB_14ba40600;
      local_98[1] = local_88;
      local_98[2] = (longlong)local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      local_98[3] = 0;
      *(int *)(local_98 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)local_98 + 0x24) = 0;
      }
      else {
        plVar1 = local_98 + 3;
        FUN_1446dd670(plVar1,iVar4,0);
        memcpy((void *)*plVar1,_Src,(longlong)iVar4 * 2);
      }
      plVar1 = local_78;
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
      plVar6[5] = lVar10;
      *plVar6 = (longlong)&PTR_FUN_14ba40590;
      plVar6[6] = (longlong)pcVar7;
      plVar6[7] = (longlong)FUN_14164e79e;
      *(undefined4 *)(plVar6 + 8) = 0;
      (**(code **)(*param_1 + 8))(param_1,&local_a8);
      local_b8 = &local_98;
      (**(code **)(*(longlong *)pcVar7 + 0x1b0))(pcVar7,local_a8,plVar1,local_88);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar3 = (int *)((longlong)local_a0 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
          }
        }
      }
      if (local_90 != 0) {
        if (local_98 == (longlong *)0x0) goto LAB_14439a2ba;
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14439a2ba:
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar3 = (int *)((longlong)local_80 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
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
        piVar3 = (int *)((longlong)local_70 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_14439a329:
  if (pplVar8 != (longlong **)0x0) {
    LOCK();
    pplVar2 = pplVar8 + 1;
    *(int *)pplVar2 = *(int *)pplVar2 + -1;
    UNLOCK();
    if (*(int *)pplVar2 == 0) {
      (*(code *)**pplVar8)(pplVar8);
      LOCK();
      piVar3 = (int *)((longlong)pplVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*pplVar8)[2])(pplVar8);
      }
    }
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439a3a4 FUN_14439a3a4 body=69 status=ok
// SIG undefined FUN_14439a3a4(void)

undefined8 * FUN_14439a3a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba40c60;
  FUN_14127b1cd(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439a3fe FUN_14439a3fe body=168 status=ok
// SIG undefined FUN_14439a3fe(void)

void FUN_14439a3fe(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba40c60;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 != 0) {
    FUN_1413eadba(puVar2 + 5,iVar1,0);
    FUN_1413ead8c(puVar2[5],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14439a4a6 FUN_14439a4a6 body=168 status=ok
// SIG undefined FUN_14439a4a6(void)

void FUN_14439a4a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba40c60;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 != 0) {
    FUN_1413eadba(puVar2 + 5,iVar1,0);
    FUN_1413ead8c(puVar2[5],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14439a54e FUN_14439a54e body=202 status=ok
// SIG undefined FUN_14439a54e(void)

void FUN_14439a54e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e001f0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba40c60;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1413eadba(&p_Var2->Flags,iVar1,0);
    uVar4._0_4_ = p_Var2->Flags;
    uVar4._4_2_ = p_Var2->CreatorBackTraceIndexHigh;
    uVar4._6_2_ = p_Var2->SpareWORD;
    FUN_1413ead8c(uVar4,uVar3,iVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439a607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439a622 FUN_14439a622 body=20 status=ok
// SIG undefined FUN_14439a622(void)

undefined1 FUN_14439a622(longlong param_1)

{
  FUN_14439a636(param_1 + 0x18);
  return 1;
}



// FUNCTION 14439a636 FUN_14439a636 body=540 status=ok
// SIG undefined FUN_14439a636(void)

void FUN_14439a636(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)*param_1;
  if (*(int *)(param_2 + 8) == 0) {
    FUN_140056680(&local_68,L"Failed to get Shift display names");
    local_78 = &local_68;
    (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined4 *)(param_1 + 1),0,param_1 + 2);
    plVar5 = local_68;
    goto LAB_14439a68f;
  }
  local_60 = *(undefined4 *)(param_1 + 1);
  local_58 = (longlong *)0x0;
  iVar1 = *(int *)(param_1 + 3);
  uVar2 = param_1[2];
  local_68 = plVar5;
  local_50 = iVar1;
  if (iVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1413eadba(&local_58,iVar1,0);
    FUN_1413ead8c(local_58,uVar2,iVar1);
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  iVar1 = local_50;
  plVar3 = local_58;
  local_40 = 4;
  *local_48 = &PTR_LAB_14b4f7950;
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
  *local_48 = &PTR_FUN_14ba40d10;
  local_48[3] = local_68;
  *(undefined4 *)(local_48 + 4) = local_60;
  local_48[5] = 0;
  *(int *)(local_48 + 6) = local_50;
  if (local_50 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x34) = 0;
  }
  else {
    puVar7 = local_48 + 5;
    FUN_1413eadba(puVar7,local_50,0);
    FUN_1413ead8c(*puVar7,plVar3,iVar1);
  }
  FUN_145c49716(plVar5,*(undefined4 *)(param_1 + 1),param_2,&local_48);
  if (local_40 == 0) {
LAB_14439a816:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_14439a816;
  }
  FUN_14127b1cd(local_58,local_50);
  plVar5 = local_58;
LAB_14439a68f:
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439a854 FUN_14439a854 body=69 status=ok
// SIG undefined FUN_14439a854(void)

undefined8 * FUN_14439a854(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba40d10;
  FUN_14127b1cd(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439a8ae FUN_14439a8ae body=168 status=ok
// SIG undefined FUN_14439a8ae(void)

void FUN_14439a8ae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7950;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba40d10;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 != 0) {
    FUN_1413eadba(puVar2 + 5,iVar1,0);
    FUN_1413ead8c(puVar2[5],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14439a956 FUN_14439a956 body=168 status=ok
// SIG undefined FUN_14439a956(void)

void FUN_14439a956(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7950;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba40d10;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 != 0) {
    FUN_1413eadba(puVar2 + 5,iVar1,0);
    FUN_1413ead8c(puVar2[5],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14439a9fe FUN_14439a9fe body=202 status=ok
// SIG undefined FUN_14439a9fe(void)

void FUN_14439a9fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4f7950;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba40d10;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1413eadba(&p_Var2->Flags,iVar1,0);
    uVar4._0_4_ = p_Var2->Flags;
    uVar4._4_2_ = p_Var2->CreatorBackTraceIndexHigh;
    uVar4._6_2_ = p_Var2->SpareWORD;
    FUN_1413ead8c(uVar4,uVar3,iVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439aab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439aac8 FUN_14439aac8 body=65 status=ok
// SIG undefined FUN_14439aac8(void)

void FUN_14439aac8(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14439ab4e(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439ab0a FUN_14439ab0a body=67 status=ok
// SIG undefined FUN_14439ab0a(void)

undefined8 FUN_14439ab0a(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14439ab4e(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439ab4e FUN_14439ab4e body=406 status=ok
// SIG undefined FUN_14439ab4e(void)

void FUN_14439ab4e(undefined8 *param_1,char *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  void *_Src;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)*param_1;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 3) == (int)param_3[1])) {
    local_60 = param_1 + 2;
    if (0 < *(int *)(param_1 + 3)) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        FUN_1415ca7f2(plVar6,&local_58,*local_60 + lVar11);
        lVar7 = *param_3;
        puVar1 = (undefined8 *)(local_58 + 0x28);
        if ((undefined8 *)(lVar7 + lVar11) != puVar1) {
          iVar4 = *(int *)(lVar7 + 8 + lVar11);
          _Src = *(void **)(lVar7 + lVar11);
          *(int *)(local_58 + 0x30) = iVar4;
          if (iVar4 == 0 && *(int *)(local_58 + 0x34) == 0) {
            *(undefined4 *)(local_58 + 0x34) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar4);
            if (iVar4 != 0) {
              memcpy((void *)*puVar1,_Src,(longlong)iVar4 * 2);
            }
          }
        }
        plVar9 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar10 < *(int *)(param_1 + 3));
    }
    FUN_140056680(&local_58,&DAT_149dfb77a);
    uVar5 = *(undefined4 *)(param_1 + 1);
    lVar10 = *plVar6;
    uVar8 = 1;
    plVar9 = local_60;
  }
  else {
    FUN_140056680(&local_58,L"Failed to sanitize display names");
    uVar5 = *(undefined4 *)(param_1 + 1);
    plVar9 = param_1 + 2;
    lVar10 = *plVar6;
    uVar8 = 0;
  }
  local_68 = &local_58;
  (**(code **)(lVar10 + 0x28))(plVar6,uVar5,uVar8,plVar9);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439ace6 FUN_14439ace6 body=44 status=ok
// SIG undefined FUN_14439ace6(void)

void FUN_14439ace6(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014439ad0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14439ad12 FUN_14439ad12 body=163 status=ok
// SIG undefined FUN_14439ad12(void)

undefined8 * FUN_14439ad12(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba40ef0;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14439ad63;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14439ad63:
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439adca FUN_14439adca body=228 status=ok
// SIG undefined FUN_14439adca(void)

void FUN_14439adca(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e063e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba40ef0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa8e54(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 14439aeae FUN_14439aeae body=228 status=ok
// SIG undefined FUN_14439aeae(void)

void FUN_14439aeae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e063e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba40ef0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa8e54(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 14439af92 FUN_14439af92 body=288 status=ok
// SIG undefined FUN_14439af92(void)

void FUN_14439af92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e063e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba40ef0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var2->Flags = (int)lVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_148fa8e54(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439b09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439b0bc FUN_14439b0bc body=20 status=ok
// SIG undefined FUN_14439b0bc(void)

undefined1 FUN_14439b0bc(longlong param_1)

{
  FUN_14439b0d0(param_1 + 0x18);
  return 1;
}



// FUNCTION 14439b0d0 FUN_14439b0d0 body=455 status=ok
// SIG undefined FUN_14439b0d0(void)

void FUN_14439b0d0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 8) < 2) {
    FUN_140056680(&local_48,L"ShiftIdString not found");
    FUN_148f9f0a2();
    plVar4 = (longlong *)param_1[5];
    if (plVar4 == (longlong *)0x0 || *(int *)(param_1 + 6) == 0) goto LAB_14439b264;
    uVar7 = param_1[1];
    lVar3 = *plVar4;
    local_58 = DAT_14cbf4b80;
    uVar5 = 0;
  }
  else {
    lVar3 = FUN_148f9f35a(*param_1,param_1 + 3);
    FUN_140e8ce9a(&local_48,param_2);
    plVar4 = local_40;
    if (local_40 == (longlong *)0x0) {
      *(longlong *)(lVar3 + 0x10) = local_48;
      plVar6 = *(longlong **)(lVar3 + 0x18);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_14439b1be:
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x00014439b1eb:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      *(longlong *)(lVar3 + 0x10) = local_48;
      plVar6 = *(longlong **)(lVar3 + 0x18);
      if (local_40 == plVar6) {
        LOCK();
        plVar6 = local_40 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar4;
          goto joined_r0x00014439b1eb;
        }
      }
      else {
        *(longlong **)(lVar3 + 0x18) = local_40;
        if (plVar6 != (longlong *)0x0) goto LAB_14439b1be;
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
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    FUN_140056680(&local_48,&DAT_149dfb77a);
    plVar4 = (longlong *)param_1[5];
    if (plVar4 == (longlong *)0x0 || *(int *)(param_1 + 6) == 0) goto LAB_14439b264;
    uVar7 = param_1[1];
    local_58 = *(undefined8 *)(lVar3 + 0x10);
    lVar3 = *plVar4;
    uVar5 = 1;
  }
  local_50 = &local_48;
  (**(code **)(lVar3 + 0x60))(plVar4,uVar5,uVar7,param_1 + 3);
LAB_14439b264:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439b298 FUN_14439b298 body=44 status=ok
// SIG undefined FUN_14439b298(void)

void FUN_14439b298(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014439b2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14439b2c4 FUN_14439b2c4 body=189 status=ok
// SIG undefined FUN_14439b2c4(void)

undefined8 * FUN_14439b2c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba410b0;
  plVar4 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14439b315;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14439b315:
  FUN_1447a1747(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439b396 FUN_14439b396 body=299 status=ok
// SIG undefined FUN_14439b396(void)

void FUN_14439b396(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba410b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 9,iVar1,0);
    FUN_140b8566a(puVar2[9],uVar4,iVar1);
  }
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  FUN_14666dbf2(puVar2 + 0xb,param_1 + 0x58);
  return;
}



// FUNCTION 14439b4c2 FUN_14439b4c2 body=299 status=ok
// SIG undefined FUN_14439b4c2(void)

void FUN_14439b4c2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba410b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 9,iVar1,0);
    FUN_140b8566a(puVar2[9],uVar4,iVar1);
  }
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  FUN_14666dbf2(puVar2 + 0xb,param_1 + 0x58);
  return;
}



// FUNCTION 14439b5ee FUN_14439b5ee body=364 status=ok
// SIG undefined FUN_14439b5ee(void)

void FUN_14439b5ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  _LIST_ENTRY **pp_Var1;
  int iVar2;
  DWORD DVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var4 = param_2[1].DebugInfo;
  *(undefined ***)p_Var4 = &PTR_LAB_149e001f0;
  (p_Var4->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var4 = &PTR_FUN_14ba410b0;
  (p_Var4->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  p_Var4->EntryCount = (int)uVar5;
  p_Var4->ContentionCount = (int)((ulonglong)uVar5 >> 0x20);
  lVar6 = *(longlong *)(param_1 + 0x28);
  p_Var4->Flags = (int)lVar6;
  p_Var4->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar6 >> 0x20);
  p_Var4->SpareWORD = (short)((ulonglong)lVar6 >> 0x30);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  p_Var4[1].Type = 0;
  p_Var4[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var4[1].field_0x4 = 0;
  iVar2 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var4[1].CriticalSection = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var4[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var4 + 1,iVar2,0);
    memcpy(*(void **)(p_Var4 + 1),_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)&p_Var4[1].ProcessLocksList.Flink = *(undefined1 *)(param_1 + 0x40);
  p_Var4[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  DVar3 = *(DWORD *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  p_Var4[1].EntryCount = DVar3;
  if (DVar3 == 0) {
    p_Var4[1].ContentionCount = 0;
  }
  else {
    pp_Var1 = &p_Var4[1].ProcessLocksList.Blink;
    FUN_140b856de(pp_Var1,DVar3,0);
    FUN_140b8566a(*pp_Var1,uVar5,DVar3);
  }
  p_Var4[1].Flags = 0;
  p_Var4[1].CreatorBackTraceIndexHigh = 0;
  p_Var4[1].SpareWORD = 0;
  p_Var4[2].Type = 0;
  p_Var4[2].CreatorBackTraceIndex = 0;
  FUN_14666dbf2(&p_Var4[1].Flags,param_1 + 0x58);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439b764 FUN_14439b764 body=20 status=ok
// SIG undefined FUN_14439b764(void)

undefined1 FUN_14439b764(longlong param_1)

{
  FUN_14439b778(param_1 + 0x18);
  return 1;
}



// FUNCTION 14439b778 FUN_14439b778 body=448 status=ok
// SIG undefined FUN_14439b778(void)

void FUN_14439b778(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_2[1];
  if (0 < iVar4) {
    uVar6 = *param_1;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar2 = *param_2;
      if ((1 < *(int *)(lVar2 + 8 + lVar7)) && (1 < *(int *)(param_1[6] + 8 + lVar7))) {
        local_60 = uVar6;
        lVar5 = FUN_145a1b1e0(uVar6,param_1[6] + lVar7);
        FUN_140e8ce9a(&local_58,lVar2 + lVar7);
        plVar3 = local_50;
        if (local_50 == (longlong *)0x0) {
          *(longlong *)(lVar5 + 0x10) = local_58;
          plVar9 = *(longlong **)(lVar5 + 0x18);
          if (plVar9 != (longlong *)0x0) {
            *(undefined8 *)(lVar5 + 0x18) = 0;
LAB_14439b847:
            LOCK();
            plVar3 = plVar9 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar4 = *piVar1;
              UNLOCK();
joined_r0x00014439b877:
              if (iVar4 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          *(longlong *)(lVar5 + 0x10) = local_58;
          plVar9 = *(longlong **)(lVar5 + 0x18);
          if (local_50 == plVar9) {
            LOCK();
            plVar9 = local_50 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar4 = *piVar1;
              UNLOCK();
              plVar9 = plVar3;
              goto joined_r0x00014439b877;
            }
          }
          else {
            *(longlong **)(lVar5 + 0x18) = local_50;
            if (plVar9 != (longlong *)0x0) goto LAB_14439b847;
          }
        }
        plVar3 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        iVar4 = (int)param_2[1];
        uVar6 = local_60;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < iVar4);
  }
  FUN_140056680(&local_58,&DAT_149dfb77a);
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0 && *(int *)(param_1 + 9) != 0) {
    local_78 = param_1 + 6;
    local_70 = &local_58;
    (**(code **)(*plVar3 + 0x60))(plVar3,1,param_1[1],param_1 + 3);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439b93a FUN_14439b93a body=69 status=ok
// SIG undefined FUN_14439b93a(void)

undefined8 * FUN_14439b93a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba41240;
  FUN_141323308(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439b994 FUN_14439b994 body=168 status=ok
// SIG undefined FUN_14439b994(void)

void FUN_14439b994(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7950;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba41240;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    return;
  }
  FUN_145c496b4(puVar2 + 5,iVar1,0);
  FUN_14150193d(puVar2[5],uVar3,iVar1);
  return;
}



// FUNCTION 14439ba3c FUN_14439ba3c body=168 status=ok
// SIG undefined FUN_14439ba3c(void)

void FUN_14439ba3c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7950;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba41240;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    return;
  }
  FUN_145c496b4(puVar2 + 5,iVar1,0);
  FUN_14150193d(puVar2[5],uVar3,iVar1);
  return;
}



// FUNCTION 14439bae4 FUN_14439bae4 body=202 status=ok
// SIG undefined FUN_14439bae4(void)

void FUN_14439bae4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4f7950;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba41240;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_145c496b4(&p_Var2->Flags,iVar1,0);
    uVar4._0_4_ = p_Var2->Flags;
    uVar4._4_2_ = p_Var2->CreatorBackTraceIndexHigh;
    uVar4._6_2_ = p_Var2->SpareWORD;
    FUN_14150193d(uVar4,uVar3,iVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439bb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439bbae FUN_14439bbae body=65 status=ok
// SIG undefined FUN_14439bbae(void)

void FUN_14439bbae(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14439bc34(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439bbf0 FUN_14439bbf0 body=67 status=ok
// SIG undefined FUN_14439bbf0(void)

undefined8 FUN_14439bbf0(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14439bc34(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439bc34 FUN_14439bc34 body=684 status=ok
// SIG undefined FUN_14439bc34(void)

void FUN_14439bc34(undefined8 *param_1,char *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 3) == (int)param_3[1])) {
    local_b8 = (longlong *)*param_1;
    local_78 = 0;
    uStack_70 = 0;
    if (0 < *(int *)(param_1 + 3)) {
      lVar9 = 8;
      lVar7 = 0;
      lVar8 = 0;
      local_b0 = param_1;
      do {
        FUN_140e8ce9a(&local_98,local_b0[2] + lVar9);
        plVar3 = local_90;
        local_88 = local_98;
        plStack_80 = local_90;
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
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        FUN_1415ca7f2(local_b8,&local_98,&local_88);
        plVar1 = local_98;
        lVar10 = *param_3;
        plVar3 = local_98 + 5;
        if ((longlong *)(lVar10 + lVar7) != plVar3) {
          iVar4 = *(int *)(lVar10 + 8 + lVar7);
          _Src = *(void **)(lVar10 + lVar7);
          *(int *)(local_98 + 6) = iVar4;
          if (iVar4 == 0 && *(int *)((longlong)local_98 + 0x34) == 0) {
            *(undefined4 *)((longlong)local_98 + 0x34) = 0;
          }
          else {
            FUN_1446dd670(plVar3,iVar4);
            if (iVar4 != 0) {
              memcpy((void *)*plVar3,_Src,(longlong)iVar4 * 2);
            }
          }
        }
        (**(code **)(*plVar1 + 8))(plVar1,&local_a8);
        uVar5 = uStack_70;
        lVar10 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_1413eac7e(&local_78,uVar5 & 0xffffffff);
        }
        plVar3 = local_a0;
        *(undefined8 *)(local_78 + lVar10 * 0x10) = local_a8;
        *(longlong **)(local_78 + 8 + lVar10 * 0x10) = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_a0)(local_a0);
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
        plVar3 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
        lVar9 = lVar9 + 0x40;
        param_1 = local_b0;
      } while (lVar8 < *(int *)(local_b0 + 3));
    }
    local_c8 = &local_88;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    (**(code **)(*local_b8 + 0x28))(local_b8,*(undefined4 *)(param_1 + 1),1,&local_78);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14127b1cd(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439bee1 FUN_14439bee1 body=1454 status=ok
// SIG undefined FUN_14439bee1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14439bee1(void)

{
  uint uVar1;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cbf4978,L"UNSET",1);
  local_60 = L"Online";
  local_58 = 6;
  FUN_1446e940c(&local_4c,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Online";
  local_58 = 6;
  FUN_140208c1e(&DAT_14cbf4980,local_64,&local_4c,&local_60);
  atexit((_func_5014 *)&LAB_144380014);
  local_60 = L"Offline";
  local_58 = 7;
  FUN_1446e940c(&local_4c,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Offline";
  local_58 = 7;
  FUN_140208c1e(&DAT_14cbf4990,local_64,&local_4c,&local_60);
  atexit((_func_5014 *)&LAB_144380028);
  local_60 = L"Away";
  local_58 = 4;
  FUN_1446e940c(&local_4c,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Away";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cbf49a0,local_64,&local_4c,&local_60);
  atexit((_func_5014 *)&LAB_14438003c);
  local_60 = L"DoNotDisturb";
  local_58 = 0xc;
  FUN_1446e940c(&local_4c,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Do Not Disturb";
  local_58 = 0xe;
  FUN_140208c1e(&DAT_14cbf49b0,local_64,&local_4c,&local_60);
  atexit((_func_5014 *)&LAB_144380050);
  local_60 = L"Chat";
  local_58 = 4;
  FUN_1446e940c(&local_4c,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"Chat";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cbf49c0,local_64,&local_4c,&local_60);
  atexit((_func_5014 *)&LAB_144380064);
  FUN_1400b22c2(&DAT_14cbf49d0,"Invalid local user");
  atexit((_func_5014 *)&LAB_144380078);
  FUN_1400b22c2(&DAT_14cbf49e0,"No cached friend");
  atexit((_func_5014 *)&LAB_144380089);
  FUN_1400b22c2(&DAT_14cbf49f0,"Account does not exist");
  atexit((_func_5014 *)&LAB_14438009a);
  FUN_1400b22c2(&DAT_14cbf4a00,"Already friends");
  atexit((_func_5014 *)&LAB_1443800ab);
  FUN_1400b22c2(&DAT_14cbf4a10,"Invalid user id");
  atexit((_func_5014 *)&LAB_1443800bc);
  FUN_1400b22c2(&DAT_14cbf4a20,"Invalid list name");
  atexit((_func_5014 *)&LAB_1443800cd);
  FUN_1400b22c2(&DAT_14cbf4a30,"Friend not found");
  atexit((_func_5014 *)&LAB_1443800de);
  FUN_1400b22c2(&DAT_14cbf4a40,"BlockedPlayers");
  atexit((_func_5014 *)&LAB_1443800ef);
  FUN_1400b22c2(&DAT_14cbf4a50,"Forbidden");
  atexit((_func_5014 *)&LAB_144380100);
  FUN_1400b22c2(&DAT_14cbf4a60,"Internal Error");
  atexit((_func_5014 *)&LAB_144380111);
  FUN_1400b22c2(&DAT_14cbf4a70,"Not Found");
  atexit((_func_5014 *)&LAB_144380122);
  FUN_1400b22c2(&DAT_14cbf4a80,&DAT_149e02088);
  atexit((_func_5014 *)&LAB_144380133);
  _DAT_14cbf4a90 = 0;
  DAT_14cbf4a98 = 0;
  _DAT_14cbf4aa8 = 0;
  DAT_14cbf4ab0 = 0;
  _DAT_14cbf4ab8 = 0;
  DAT_14cbf4ac0 = 1;
  _DAT_14cbf4ae8 = 0;
  _DAT_14cbf4af0 = 0;
  _DAT_14cbf4ac8 = 0;
  uRam000000014cbf4ad0 = 0;
  _DAT_14cbf4af4 = 0xffffffff00000080;
  _DAT_14cbf4afc = 0;
  DAT_14cbf4b08 = 0;
  _DAT_14cbf4b10 = 0;
  FUN_140dfac6a(&DAT_14cbf4a90);
  atexit(FUN_144380144);
  FUN_1400b22c2(&DAT_14cbf4b18,"DefaultAppId");
  atexit((_func_5014 *)&LAB_144384812);
  FUN_1446f470e(&DAT_14cbf4b28,L"PRESENCESEARCH",1);
  local_60 = L"ExperienceIds";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  DAT_14cbf4b30 = (ulonglong)uVar1;
  local_60 = L"ExperienceVersions";
  local_58 = 0x12;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  DAT_14cbf4b38 = (ulonglong)uVar1;
  local_60 = L"Regions";
  local_58 = 7;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  DAT_14cbf4b40 = (ulonglong)uVar1;
  local_60 = L"TicketAcceptParams";
  local_58 = 0x12;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  DAT_14cbf4b48 = (ulonglong)uVar1;
  local_60 = (wchar_t *)0x800000014ba3cd7e;
  local_4c = 0x14;
  local_58 = FUN_14577453c(L"OnlineSubsystemShift",&local_4c);
  local_54 = 1;
  FUN_14666cccc(&local_60);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439c490 FUN_14439c490 body=315 status=ok
// SIG undefined FUN_14439c490(void)

void FUN_14439c490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (((*(longlong *)(param_1 + 0x20) != 0) &&
        (plVar3 = *(longlong **)(param_1 + 0x28), plVar3 != (longlong *)0x0)) &&
       (0 < (int)plVar3[1])) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_14439c4eb;
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
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
LAB_14439c4eb:
    plVar3 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (((*(longlong *)(param_1 + 0x30) != 0) &&
        (plVar3 = *(longlong **)(param_1 + 0x38), plVar3 != (longlong *)0x0)) &&
       (0 < (int)plVar3[1])) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_14439c54e;
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
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
LAB_14439c54e:
    plVar3 = *(longlong **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x28) + 8) < 1)) &&
     (((*(longlong *)(param_1 + 0x30) == 0 || (*(longlong *)(param_1 + 0x38) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x38) + 8) < 1)))) {
    if (*(HMODULE *)(param_1 + 8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 14439c5cc FUN_14439c5cc body=412 status=ok
// SIG undefined FUN_14439c5cc(void)

undefined8 * FUN_14439c5cc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (((*(longlong *)(param_1 + 0x20) == 0) || (lVar4 = *(longlong *)(param_1 + 0x28), lVar4 == 0))
     || (*(int *)(lVar4 + 8) < 1)) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    FUN_14666def2(puVar7);
    *puVar7 = &PTR_FUN_14ba41950;
    if (((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
       (cVar5 = SteamAPI_Init(), cVar5 != '\0')) {
      *(undefined1 *)(puVar7 + 1) = 1;
    }
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14ba41ad0;
    plVar8[2] = (longlong)puVar7;
    *(undefined8 **)(param_1 + 0x20) = puVar7;
    plVar9 = *(longlong **)(param_1 + 0x28);
    if (plVar9 != plVar8) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar9 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x28) = plVar8;
      plVar9 = plVar8;
    }
    cVar5 = *(char *)(puVar7 + 1);
    if (cVar5 == '\x01') {
      *param_2 = 0;
      param_2[1] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) {
            param_2[1] = 0;
            goto LAB_14439c733;
          }
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar6 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar3 = iVar6;
          }
          iVar6 = iVar3;
          UNLOCK();
        } while (!bVar10);
        if (param_2[1] != 0) {
          *param_2 = *puVar1;
        }
      }
    }
    else {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
LAB_14439c733:
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (cVar5 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar4;
    iVar6 = *(int *)(lVar4 + 8);
    do {
      if (iVar6 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 8);
      bVar10 = iVar6 == iVar3;
      if (bVar10) {
        *(int *)(lVar4 + 8) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar10);
    if (param_2[1] != 0) {
      *param_2 = *puVar1;
    }
  }
  return param_2;
}



// FUNCTION 14439c768 FUN_14439c768 body=1155 status=ok
// SIG undefined FUN_14439c768(void)

undefined8 * FUN_14439c768(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  wchar_t *_Str;
  wchar_t *pwVar13;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong **local_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  byte local_109;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f4;
  longlong **local_f0;
  uint local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong **local_60;
  longlong **local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14666def2();
  *param_1 = &PTR_FUN_14ba41980;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    local_f4 = 0;
    local_108 = 0;
    uStack_100 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_138 = (undefined8 *)0x0;
    cVar6 = FUN_14063337c(&DAT_14c846b20,L"MULTIHOME=",&local_108,1);
    if ((cVar6 != '\0') && (1 < (int)uStack_100)) {
      FUN_1446f470e(&local_128,L"WINDOWS",1);
      plVar7 = (longlong *)FUN_140272950(&local_128);
      (**(code **)(*plVar7 + 0x58))(plVar7,&local_e0,&local_108);
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x20))(local_e0,&local_f4);
      }
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_d8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d8 + 0x10))(local_d8);
          }
        }
      }
    }
    puVar2 = param_1 + 2;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar6 = FUN_141369f9a(&DAT_14c846b20,L"QueryPort=",puVar2);
    if (cVar6 == '\0') {
      local_138 = &DAT_14c872ce8;
      cVar6 = FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystemSteam",L"GameServerQueryPort",puVar2);
      if (cVar6 == '\0') {
        *(undefined4 *)puVar2 = 0x6987;
      }
    }
    local_109 = 0;
    local_138 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"bVACEnabled");
    local_128 = (wchar_t *)0x0;
    uStack_120 = 0;
    local_138 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemSteam",L"GameVersion",&local_128);
    _Str = local_128;
    if ((int)uStack_120 == 0) {
      _Str = L"";
    }
    local_60 = (longlong **)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (longlong **)0x0;
      local_50 = 0;
    }
    else {
      sVar8 = wcslen(_Str);
      local_e4 = 0;
      local_f0 = (longlong **)CONCAT44(local_f0._4_4_,0x7fffffff);
      uVar10 = sVar8 & 0xffffffff;
      pwVar13 = _Str;
      do {
        iVar11 = (int)uVar10;
        if (iVar11 < 1) {
LAB_14439ca3a:
          local_50 = local_e4;
          uVar9 = local_e4 + 1;
          if (uVar9 < 0x81) goto LAB_14439ca57;
          FUN_1446efa72(&local_60,0,uVar9,1);
          local_f0 = local_60;
          goto LAB_14439ca59;
        }
        wVar3 = *pwVar13;
        uVar9 = (uint)(ushort)wVar3;
        pwVar4 = pwVar13 + 1;
        uVar12 = iVar11 - 1;
        if ((wVar3 & 0xfc00U) == 0xd800) {
          if (iVar11 == 1) {
            cVar6 = FUN_140024707(uVar9,&local_e4,&local_f0);
            if (cVar6 != '\0') goto LAB_14439ca3a;
            break;
          }
          if (((ushort)*pwVar4 & 0xfc00) == 0xdc00) {
            uVar9 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar4 + 0xfca02400;
            uVar12 = iVar11 - 2;
            pwVar4 = pwVar13 + 2;
          }
        }
        pwVar13 = pwVar4;
        cVar6 = FUN_140024707(uVar9,&local_e4,&local_f0);
        uVar10 = (ulonglong)uVar12;
      } while (cVar6 != '\0');
      local_50 = 0xffffffff;
      uVar9 = 0;
LAB_14439ca57:
      local_f0 = (longlong **)0x0;
LAB_14439ca59:
      if (local_f0 == (longlong **)0x0) {
        local_f0 = &local_e0;
      }
      iVar11 = (int)sVar8 + 1;
      local_e4 = uVar9;
      local_58 = local_f0;
      do {
        if (iVar11 < 1) break;
        wVar3 = *_Str;
        uVar9 = (uint)(ushort)wVar3;
        pwVar13 = _Str + 1;
        iVar5 = iVar11 + -1;
        if ((wVar3 & 0xfc00U) == 0xd800) {
          if (iVar11 == 1) {
            FUN_1400247af(uVar9,&local_f0,&local_e4);
            break;
          }
          if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
            uVar9 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
            pwVar13 = _Str + 2;
            iVar5 = iVar11 + -2;
          }
        }
        iVar11 = iVar5;
        _Str = pwVar13;
        cVar6 = FUN_1400247af(uVar9,&local_f0,&local_e4);
      } while (cVar6 != '\0');
    }
    local_138 = (undefined8 *)(CONCAT44(local_138._4_4_,(uint)local_109) | 2);
    local_130 = local_58;
    cVar6 = SteamInternal_GameServer_Init
                      (local_f4,0,*(undefined2 *)((longlong)param_1 + 0xc),
                       *(undefined2 *)(param_1 + 2));
    if (local_60 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (cVar6 != '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    if (local_128 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14439cbec FUN_14439cbec body=83 status=ok
// SIG undefined FUN_14439cbec(void)

void FUN_14439cbec(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
  if (*plVar2 != 0) {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
    cVar1 = (**(code **)(*(longlong *)*puVar3 + 0x40))();
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
      (**(code **)(*(longlong *)*puVar3 + 0x38))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014439cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SteamGameServer_Shutdown();
  return;
}



// FUNCTION 14439cc3f FUN_14439cc3f body=102 status=ok
// SIG undefined FUN_14439cc3f(void)

void FUN_14439cc3f(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba418a4;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666dcf6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439cca8 FUN_14439cca8 body=2646 status=ok
// SIG undefined FUN_14439cca8(void)

void FUN_14439cca8(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  ushort uVar27;
  ulonglong uVar28;
  wchar_t *pwVar29;
  uint *puVar30;
  uint uVar31;
  longlong lVar32;
  float fVar33;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  int local_19c;
  uint *local_198;
  longlong local_190;
  ulonglong local_188;
  uint local_17c;
  longlong **local_178;
  ulonglong local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  float local_13c;
  wchar_t *local_138;
  int local_130;
  longlong *local_128;
  int local_120;
  undefined4 uStack_11c;
  longlong *local_118;
  uint local_10c;
  longlong local_108;
  longlong *local_100;
  longlong *local_88;
  longlong *local_80;
  uint local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    *(undefined4 *)(*param_3 + 0x58) = 3;
    if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_1c8);
    }
  }
  else {
    lVar24 = *(longlong *)(param_2 + 0x18);
    plVar8 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    if (*plVar8 != 0) {
      puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
      (**(code **)(*(longlong *)*puVar9 + 0x10))((longlong *)*puVar9,&local_108);
      if (local_108 == lVar24) {
        FUN_140df9946(param_2,&local_128);
        plVar8 = (longlong *)CONCAT44(uStack_11c,local_120);
        if (plVar8 == (longlong *)0x0) {
          local_100 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_100 = plVar8;
        }
        uVar6 = (**(code **)(*local_128 + 0x40))();
        iVar7 = FUN_14152c858((longlong *)(param_1 + 0x30),uVar6,&local_108);
        plVar4 = local_100;
        if (iVar7 == -1) {
          lVar24 = 0;
        }
        else {
          lVar24 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x30);
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_100)();
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar8)();
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        plVar8 = (longlong *)(lVar24 + 0x10);
        if (lVar24 == 0) {
          plVar8 = (longlong *)0x0;
        }
        plVar4 = (longlong *)CONCAT44(uStack_11c,local_120);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar4)();
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
        if (plVar8 != (longlong *)0x0) {
          local_170 = (ulonglong)*(uint *)(plVar8 + 1);
          lVar24 = *param_3;
          puVar30 = (uint *)(lVar24 + 0x18);
          iVar7 = *(int *)(lVar24 + 0x30);
          local_168 = param_1;
          local_160 = param_3;
          local_158 = param_4;
          local_150 = param_2;
          local_148 = plVar8;
          if (iVar7 == 0) {
            uVar25 = 1;
            uVar19 = 0;
            iVar17 = 0;
            iVar14 = 0;
          }
          else {
            puVar15 = *(uint **)(lVar24 + 0x28);
            if (*(uint **)(lVar24 + 0x28) == (uint *)0x0) {
              puVar15 = puVar30;
            }
            uVar26 = *puVar15;
            if (uVar26 == 0) {
              iVar17 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar17 = iVar7 + -1;
              }
              uVar19 = 0;
              uVar16 = (ulonglong)(uint)(iVar17 >> 5);
              if (iVar17 >> 5 < 1) {
                uVar16 = uVar19;
              }
              iVar17 = 0;
              do {
                if (uVar16 == uVar19) goto LAB_14439d6d5;
                iVar17 = iVar17 + 0x20;
                uVar26 = puVar15[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar26 == 0);
            }
            else {
              uVar19 = 0;
              iVar17 = 0;
            }
            uVar25 = (ulonglong)(-uVar26 & uVar26);
            uVar16 = uVar25 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar14 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar14) {
              iVar14 = iVar7;
            }
          }
          if (iVar14 < iVar7) {
            local_178 = &local_88;
            uVar26 = 0xffffffff;
            local_198 = puVar30;
            local_190 = lVar24;
LAB_14439d02a:
            lVar32 = (longlong)iVar14 * 0x38;
            local_128 = (longlong *)0x0;
            local_120 = *(int *)(*(longlong *)(lVar24 + 8) + 8 + lVar32);
            lVar20 = (longlong)local_120;
            _Src = *(void **)(*(longlong *)(lVar24 + 8) + lVar32);
            local_19c = iVar17;
            local_188 = uVar19;
            local_17c = uVar26;
            if (lVar20 == 0) {
              uStack_11c = 0;
            }
            else {
              FUN_1446dd670(&local_128,local_120,0);
              memcpy(local_128,_Src,lVar20 * 2);
            }
            uVar19 = local_188;
            iVar17 = local_19c;
            if (0 < (int)local_170) {
              uVar16 = 0;
LAB_14439d0c3:
              iVar7 = *(int *)(*local_148 + 8 + uVar16 * 0x20);
              if (iVar7 != local_120) {
                if (iVar7 + local_120 == 1) goto LAB_14439d149;
                goto LAB_14439d131;
              }
              if (1 < local_120) {
                lVar20 = 0;
                do {
                  uVar27 = *(ushort *)(*(longlong *)(uVar16 * 0x20 + *local_148) + lVar20);
                  uVar28 = (ulonglong)uVar27;
                  uVar18 = *(ushort *)((longlong)local_128 + lVar20);
                  if (uVar27 == uVar18) {
                    if (uVar27 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar18 | uVar27)) goto LAB_14439d11e;
                    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
                    uVar21 = (ulonglong)uVar18;
                    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                    if ((&DAT_149e05da0)[uVar28] != (&DAT_149e05da0)[uVar21]) goto LAB_14439d11e;
                  }
                  lVar20 = lVar20 + 2;
                } while( true );
              }
              goto LAB_14439d149;
            }
            goto LAB_14439d632;
          }
LAB_14439d6d5:
          lVar24 = *(longlong *)(local_168 + 0x28);
          uVar11 = FUN_14001cc68(0x68,0x10);
          local_1a8 = local_158;
          FUN_145d136e0(uVar11,*(undefined8 *)(lVar24 + 0x38),local_150,local_160);
          FUN_1410d2116(*(undefined8 *)(*(longlong *)(lVar24 + 0x38) + 0x210),uVar11);
          goto LAB_14439cef5;
        }
      }
    }
    *(undefined4 *)(*param_3 + 0x58) = 3;
    plVar8 = (longlong *)*param_4;
    if (plVar8 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar8 + 0x60))(plVar8,param_2,0);
    }
  }
LAB_14439cef5:
  if ((local_70 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14439d11e:
  if (uVar27 == uVar18) {
LAB_14439d149:
    plVar8 = local_128;
    if (local_120 == 0) {
      plVar8 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_138,L"%s_stat",plVar8);
    if (*(char *)(*(longlong *)(lVar24 + 8) + 0x10 + lVar32) == '\a') {
      fVar33 = *(float *)(*(longlong *)(lVar24 + 8) + 0x18 + lVar32);
    }
    else {
      fVar33 = 0.0;
    }
    local_13c = 0.0;
    puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    plVar8 = (longlong *)*puVar9;
    pwVar29 = L"";
    if (local_130 != 0) {
      pwVar29 = local_138;
    }
    local_88 = (longlong *)0x0;
    if (pwVar29 != (wchar_t *)0x0) {
      sVar10 = wcslen(pwVar29);
      local_10c = 0;
      local_118 = (longlong *)CONCAT44(local_118._4_4_,0x7fffffff);
      uVar19 = sVar10 & 0xffffffff;
      pwVar23 = pwVar29;
      goto LAB_14439d1f1;
    }
    local_80 = (longlong *)0x0;
    local_78 = 0;
    goto LAB_14439d385;
  }
LAB_14439d131:
  uVar16 = uVar16 + 1;
  if (uVar16 == local_170) goto LAB_14439d632;
  goto LAB_14439d0c3;
  while( true ) {
    cVar5 = FUN_140024707(uVar26,&local_10c,&local_118);
    uVar19 = (ulonglong)uVar31;
    pwVar23 = pwVar22;
    if (cVar5 == '\0') break;
LAB_14439d1f1:
    iVar7 = (int)uVar19;
    if (iVar7 < 1) {
LAB_14439d29b:
      local_78 = local_10c;
      uVar26 = local_10c + 1;
      if (uVar26 < 0x81) goto LAB_14439d2b7;
      FUN_1446efa72(local_178,0,uVar26,1);
      local_118 = local_88;
      goto LAB_14439d2b9;
    }
    wVar3 = *pwVar23;
    uVar26 = (uint)(ushort)wVar3;
    pwVar22 = pwVar23 + 1;
    uVar31 = iVar7 - 1;
    if ((wVar3 & 0xfc00U) == 0xd800) {
      if (iVar7 == 1) {
        cVar5 = FUN_140024707(uVar26,&local_10c,&local_118);
        if (cVar5 != '\0') goto LAB_14439d29b;
        break;
      }
      if (((ushort)*pwVar22 & 0xfc00) == 0xdc00) {
        uVar26 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar22 + 0xfca02400;
        pwVar22 = pwVar23 + 2;
        uVar31 = iVar7 - 2;
      }
    }
  }
  local_78 = 0xffffffff;
  uVar26 = 0;
LAB_14439d2b7:
  local_118 = (longlong *)0x0;
LAB_14439d2b9:
  if (local_118 == (longlong *)0x0) {
    local_118 = &local_108;
  }
  iVar7 = (int)sVar10 + 1;
  local_10c = uVar26;
  local_80 = local_118;
  do {
    if (iVar7 < 1) break;
    wVar3 = *pwVar29;
    uVar26 = (uint)(ushort)wVar3;
    pwVar23 = pwVar29 + 1;
    iVar17 = iVar7 + -1;
    if ((wVar3 & 0xfc00U) == 0xd800) {
      if (iVar7 == 1) {
        FUN_1400247af(uVar26,&local_118,&local_10c);
        break;
      }
      if (((ushort)*pwVar23 & 0xfc00) == 0xdc00) {
        uVar26 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar23 + 0xfca02400;
        pwVar23 = pwVar29 + 2;
        iVar17 = iVar7 + -2;
      }
    }
    iVar7 = iVar17;
    cVar5 = FUN_1400247af(uVar26,&local_118,&local_10c);
    pwVar29 = pwVar23;
  } while (cVar5 != '\0');
LAB_14439d385:
  lVar24 = local_190;
  puVar30 = local_198;
  cVar5 = (**(code **)(*plVar8 + 8))(plVar8,local_80,&local_13c);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (cVar5 == '\0') {
    if (fVar33 <= 0.0) goto LAB_14439d618;
  }
  else if ((fVar33 <= 0.0) || (fVar33 <= local_13c)) goto LAB_14439d618;
  puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
  pwVar29 = L"";
  if (local_130 != 0) {
    pwVar29 = local_138;
  }
  plVar8 = (longlong *)*puVar9;
  local_88 = (longlong *)0x0;
  if (pwVar29 == (wchar_t *)0x0) {
    local_80 = (longlong *)0x0;
    local_78 = 0;
  }
  else {
    sVar10 = wcslen(pwVar29);
    local_10c = 0;
    local_118 = (longlong *)CONCAT44(local_118._4_4_,0x7fffffff);
    uVar19 = sVar10 & 0xffffffff;
    pwVar23 = pwVar29;
    do {
      iVar7 = (int)uVar19;
      if (iVar7 < 1) {
LAB_14439d4fd:
        local_78 = local_10c;
        uVar26 = local_10c + 1;
        if (uVar26 < 0x81) goto LAB_14439d519;
        FUN_1446efa72(local_178,0,uVar26,1);
        local_118 = local_88;
        goto LAB_14439d51b;
      }
      wVar3 = *pwVar23;
      uVar26 = (uint)(ushort)wVar3;
      pwVar22 = pwVar23 + 1;
      uVar31 = iVar7 - 1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar7 == 1) {
          cVar5 = FUN_140024707(uVar26,&local_10c,&local_118);
          if (cVar5 != '\0') goto LAB_14439d4fd;
          break;
        }
        if (((ushort)*pwVar22 & 0xfc00) == 0xdc00) {
          uVar26 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar22 + 0xfca02400;
          pwVar22 = pwVar23 + 2;
          uVar31 = iVar7 - 2;
        }
      }
      cVar5 = FUN_140024707(uVar26,&local_10c,&local_118);
      uVar19 = (ulonglong)uVar31;
      pwVar23 = pwVar22;
    } while (cVar5 != '\0');
    local_78 = 0xffffffff;
    uVar26 = 0;
LAB_14439d519:
    local_118 = (longlong *)0x0;
LAB_14439d51b:
    if (local_118 == (longlong *)0x0) {
      local_118 = &local_108;
    }
    iVar7 = (int)sVar10 + 1;
    local_10c = uVar26;
    local_80 = local_118;
    do {
      if (iVar7 < 1) break;
      wVar3 = *pwVar29;
      uVar26 = (uint)(ushort)wVar3;
      pwVar23 = pwVar29 + 1;
      iVar17 = iVar7 + -1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar7 == 1) {
          FUN_1400247af(uVar26,&local_118,&local_10c);
          break;
        }
        if (((ushort)*pwVar23 & 0xfc00) == 0xdc00) {
          uVar26 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar23 + 0xfca02400;
          pwVar23 = pwVar29 + 2;
          iVar17 = iVar7 + -2;
        }
      }
      iVar7 = iVar17;
      cVar5 = FUN_1400247af(uVar26,&local_118,&local_10c);
      pwVar29 = pwVar23;
    } while (cVar5 != '\0');
  }
  lVar24 = local_190;
  puVar30 = local_198;
  (**(code **)(*plVar8 + 0x18))(plVar8,local_80,fVar33);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14439d618:
  uVar19 = local_188;
  iVar17 = local_19c;
  if (local_138 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_14439d632:
  if (local_128 != (longlong *)0x0) {
    FUN_1400020a8(local_128);
  }
  uVar26 = local_17c & ~(uint)uVar25;
  puVar15 = *(uint **)(lVar24 + 0x28);
  if (*(uint **)(lVar24 + 0x28) == (uint *)0x0) {
    puVar15 = puVar30;
  }
  iVar7 = *(int *)(lVar24 + 0x30);
  iVar14 = (int)uVar19;
  lVar20 = (longlong)iVar14;
  uVar31 = puVar15[lVar20] & uVar26;
  if (uVar31 == 0) {
    iVar12 = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      iVar12 = iVar7 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar13 = iVar12;
    if (iVar12 < iVar14) {
      iVar13 = iVar14;
    }
    if (iVar12 <= iVar14) goto LAB_14439d6d5;
    lVar32 = 0;
    while( true ) {
      iVar17 = iVar17 + 0x20;
      uVar31 = puVar15[lVar20 + lVar32 + 1];
      if (uVar31 != 0) break;
      lVar32 = lVar32 + 1;
      if (iVar13 - lVar20 == lVar32) goto LAB_14439d6d5;
    }
    uVar19 = (ulonglong)(iVar14 + (int)lVar32 + 1);
    uVar26 = 0xffffffff;
  }
  uVar25 = (ulonglong)(-uVar31 & uVar31);
  uVar16 = uVar25 * 2 + 1;
  lVar20 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
  }
  iVar14 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
  if (iVar7 <= iVar14) goto LAB_14439d6d5;
  goto LAB_14439d02a;
}



// FUNCTION 14439d732 FUN_14439d732 body=147 status=ok
// SIG undefined FUN_14439d732(void)

void FUN_14439d732(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar3 = FUN_14001cc68(0x68,0x10);
    FUN_14666e6d8(uVar3,*(undefined8 *)(lVar2 + 0x38),param_2,param_3);
    FUN_1410d2116(*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x210),uVar3);
    return;
  }
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014439d77e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2,0);
  return;
}



// FUNCTION 14439d7c6 FUN_14439d7c6 body=147 status=ok
// SIG undefined FUN_14439d7c6(void)

void FUN_14439d7c6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar3 = FUN_14001cc68(0x68,0x10);
    FUN_14666e6d8(uVar3,*(undefined8 *)(lVar2 + 0x38),param_2,param_3);
    FUN_1410d2116(*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x210),uVar3);
    return;
  }
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014439d812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2,0);
  return;
}



// FUNCTION 14439d85a FUN_14439d85a body=541 status=ok
// SIG undefined FUN_14439d85a(void)

bool FUN_14439d85a(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar17 = true;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plStack_50 = *(longlong **)(param_2 + 0x10);
    if (plStack_50 == (longlong *)0x0) {
LAB_14439d8ce:
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
      bVar18 = true;
    }
    else {
      iVar7 = (int)plStack_50[1];
      do {
        if (iVar7 == 0) goto LAB_14439d8ce;
        LOCK();
        iVar12 = (int)plStack_50[1];
        bVar18 = iVar7 == iVar12;
        if (bVar18) {
          *(int *)(plStack_50 + 1) = iVar7 + 1;
          iVar12 = iVar7;
        }
        iVar7 = iVar12;
        UNLOCK();
      } while (!bVar18);
      local_58 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      bVar18 = false;
    }
    plVar4 = plStack_50;
    uVar6 = (**(code **)(*local_58 + 0x40))();
    iVar7 = FUN_14152c858((longlong *)(param_1 + 0x30),uVar6,&local_58);
    plVar3 = plStack_50;
    if (iVar7 == -1) {
      lVar15 = 0;
    }
    else {
      lVar15 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x30);
    }
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
    if (!bVar18) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar15 != 0) {
      uVar8 = (ulonglong)*(int *)(lVar15 + 0x18);
      if (0 < (longlong)uVar8) {
        iVar7 = (int)param_3[1];
        uVar14 = 0;
        bVar17 = false;
LAB_14439d986:
        plVar4 = (longlong *)(*(longlong *)(lVar15 + 0x10) + uVar14 * 0x20);
        iVar12 = *(int *)(*(longlong *)(lVar15 + 0x10) + 8 + uVar14 * 0x20);
        if (iVar12 != iVar7) {
          if (iVar7 + iVar12 == 1) goto LAB_14439d9fd;
          goto LAB_14439d9ed;
        }
        iVar12 = iVar7;
        if (1 < iVar7) {
          lVar9 = 0;
          do {
            uVar11 = *(ushort *)(*plVar4 + lVar9);
            uVar13 = (ulonglong)uVar11;
            uVar10 = *(ushort *)(*param_3 + lVar9);
            if (uVar11 == uVar10) {
              if (uVar11 == 0) break;
            }
            else {
              if (0x7f < (uVar10 | uVar11)) goto LAB_14439d9db;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar16 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar16]) goto LAB_14439d9db;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
        goto LAB_14439d9fd;
      }
      bVar17 = true;
    }
  }
LAB_14439da50:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
LAB_14439d9db:
  if (uVar11 == uVar10) {
LAB_14439d9fd:
    if (plVar4 != param_4) {
      _Src = (void *)*plVar4;
      *(int *)(param_4 + 1) = iVar12;
      if (*(int *)((longlong)param_4 + 0xc) == 0 && iVar12 == 0) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_4,iVar12);
        if (iVar12 != 0) {
          memcpy((void *)*param_4,_Src,(longlong)iVar12 * 2);
        }
      }
    }
    uVar6 = *(undefined4 *)((longlong)plVar4 + 0x14);
    lVar15 = plVar4[3];
    uVar5 = *(undefined4 *)((longlong)plVar4 + 0x1c);
    *(int *)(param_4 + 2) = (int)plVar4[2];
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar6;
    *(int *)(param_4 + 3) = (int)lVar15;
    *(undefined4 *)((longlong)param_4 + 0x1c) = uVar5;
    goto LAB_14439da50;
  }
LAB_14439d9ed:
  uVar14 = uVar14 + 1;
  bVar17 = uVar8 <= uVar14;
  if (uVar14 == uVar8) goto LAB_14439da50;
  goto LAB_14439d986;
}



// FUNCTION 14439da78 FUN_14439da78 body=301 status=ok
// SIG undefined FUN_14439da78(void)

undefined8 FUN_14439da78(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = 1;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plStack_40 = *(longlong **)(param_2 + 0x10);
    if (plStack_40 == (longlong *)0x0) {
LAB_14439dae4:
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar7 = (int)plStack_40[1];
      do {
        if (iVar7 == 0) goto LAB_14439dae4;
        LOCK();
        iVar5 = (int)plStack_40[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plStack_40 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_48 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar4 = plStack_40;
    uVar6 = (**(code **)(*local_48 + 0x40))();
    iVar7 = FUN_14152c858((longlong *)(param_1 + 0x30),uVar6,&local_48);
    plVar3 = plStack_40;
    if (iVar7 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x30);
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar9 != 0) {
      FUN_140f5ad80(param_3,lVar9 + 0x10);
      uVar8 = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14439dba6 FUN_14439dba6 body=248 status=ok
// SIG undefined FUN_14439dba6(void)

undefined8 FUN_14439dba6(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = 1;
  if ((*(char *)(param_1 + 0xe0) == '\x01') &&
     (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4))) {
    iVar1 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar1 = 0;
    }
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    iVar1 = FUN_141263ed8((longlong *)(param_1 + 0x80));
    if ((iVar1 != -1) &&
       (lVar2 = (longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x80), lVar2 != -0x10 && lVar2 != 0
       )) {
      FUN_148fab174(param_3);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14439dd02 FUN_14439dd02 body=64 status=ok
// SIG undefined FUN_14439dd02(void)

void FUN_14439dd02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x588);
  if (*(char *)(lVar1 + 0xd8) == '\x01') {
    SteamAPI_RunCallbacks();
    lVar1 = *(longlong *)(param_1 + 0x588);
  }
  if (*(char *)(lVar1 + 0xd9) != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014439dd3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SteamGameServer_RunCallbacks();
  return;
}



// FUNCTION 14439dd42 FUN_14439dd42 body=283 status=ok
// SIG undefined FUN_14439dd42(void)

void FUN_14439dd42(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong *local_160;
  longlong local_158 [2];
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar3 = FUN_14001cc68(0x40,0x10);
  local_48 = 0;
  sVar4 = strlen((char *)(param_2 + 8));
  FUN_1446e6fe8(local_148,(char *)(param_2 + 8),sVar4 & 0xffffffff,1);
  FUN_140056680(local_158,local_40);
  FUN_140dfab96(&local_168,param_2);
  FUN_148fab222(uVar3,*(undefined8 *)(param_1 + 0x588),local_168,local_158);
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_160 + 0x10))(local_160);
      }
    }
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_143e6b0f2(param_1,uVar3);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439de5e FUN_14439de5e body=392 status=ok
// SIG undefined FUN_14439de5e(void)

void FUN_14439de5e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_2 + 4) & 0xf40000) == 0x840000) {
    FUN_140dfab96(&local_48);
    (**(code **)(**(longlong **)(param_1 + 0x588) + 0x20))
              (*(longlong **)(param_1 + 0x588),&local_58);
    plVar3 = local_50;
    lVar4 = local_58;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
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
    if (lVar4 != 0) {
      cVar5 = FUN_148fab30e(lVar4,local_48);
      if (cVar5 == '\0') {
        uVar6 = FUN_14001cc68(0x40,0x10);
        FUN_140dfab96(&local_58,param_2 + 8);
        FUN_148fab388(uVar6,*(undefined8 *)(param_1 + 0x588),local_58,local_48);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        FUN_143e6b0f2(param_1,uVar6);
      }
    }
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
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439dfe8 FUN_14439dfe8 body=232 status=ok
// SIG undefined FUN_14439dfe8(void)

void FUN_14439dfe8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  FUN_140dfab96(&local_50,param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_40);
  puVar4[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar4[2] = uVar3;
  *puVar4 = &PTR_FUN_14ba43e70;
  FUN_140df9946(local_50,puVar4 + 3);
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
  FUN_143e6b0f2(param_1,puVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e0d2 FUN_14439e0d2 body=164 status=ok
// SIG undefined FUN_14439e0d2(void)

void FUN_14439e0d2(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  cVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar3[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar3[2] = uVar2;
  *puVar3 = &PTR_FUN_14ba43ef0;
  *(bool *)(puVar3 + 3) = cVar1 != '\0';
  FUN_143e6b0f2(param_1,puVar3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e178 FUN_14439e178 body=153 status=ok
// SIG undefined FUN_14439e178(void)

void FUN_14439e178(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_30);
  puVar2[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14ba43f10;
  *(undefined1 *)(puVar2 + 3) = 2;
  FUN_143e6b0f2(param_1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e212 FUN_14439e212 body=169 status=ok
// SIG undefined FUN_14439e212(void)

void FUN_14439e212(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = FUN_148fc126f(*param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar3[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar3[2] = uVar1;
  *puVar3 = &PTR_FUN_14ba43f10;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  FUN_143e6b0f2(param_1,puVar3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e2bc FUN_14439e2bc body=259 status=ok
// SIG undefined FUN_14439e2bc(void)

void FUN_14439e2bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
  (**(code **)(*(longlong *)*puVar5 + 0x50))((longlong *)*puVar5,local_58);
  FUN_140adf1ea(&local_50,local_58);
  uVar3 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_40);
  puVar4[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar4[2] = uVar3;
  *puVar4 = &PTR_FUN_14ba43fb0;
  FUN_140df9946(local_50,puVar4 + 3);
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
  FUN_143e6b0f2(param_1,puVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e3c0 FUN_14439e3c0 body=161 status=ok
// SIG undefined FUN_14439e3c0(void)

void FUN_14439e3c0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar2[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14ba44040;
  *(undefined4 *)(puVar2 + 3) = *param_2;
  FUN_143e6b0f2(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e462 FUN_14439e462 body=169 status=ok
// SIG undefined FUN_14439e462(void)

void FUN_14439e462(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_2 + 4) == '\0') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x588);
    QueryPerformanceCounter(&local_38);
    puVar2[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_14ba440d0;
    puVar2[3] = *param_2;
    FUN_143e6b0f2(param_1,puVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e50c FUN_14439e50c body=161 status=ok
// SIG undefined FUN_14439e50c(void)

void FUN_14439e50c(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar2[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14ba44150;
  *(undefined1 *)(puVar2 + 3) = *param_2;
  FUN_143e6b0f2(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e5ae FUN_14439e5ae body=174 status=ok
// SIG undefined FUN_14439e5ae(void)

void FUN_14439e5ae(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0xa28,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar2[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14ba441e0;
  memcpy(puVar2 + 3,param_2,0xa0c);
  FUN_143e6b0f2(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e65e FUN_14439e65e body=173 status=ok
// SIG undefined FUN_14439e65e(void)

void FUN_14439e65e(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar5[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar5[2] = uVar1;
  *puVar5 = &PTR_FUN_14ba44290;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 3) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
  *(undefined4 *)(puVar5 + 5) = param_2[4];
  *(undefined1 *)((longlong)puVar5 + 0x2c) = 1;
  FUN_143e6b0f2(param_1,puVar5);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


