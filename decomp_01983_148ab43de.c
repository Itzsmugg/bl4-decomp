// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ab43de FUN_148ab43de body=24 status=ok
// SIG undefined FUN_148ab43de(void)

bool FUN_148ab43de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ab43f6 FUN_148ab43f6 body=93 status=ok
// SIG undefined FUN_148ab43f6(void)

void FUN_148ab43f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456c10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab4454 FUN_148ab4454 body=126 status=ok
// SIG undefined FUN_148ab4454(void)

void FUN_148ab4454(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b456c10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab44c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab44d2 FUN_148ab44d2 body=56 status=ok
// SIG undefined FUN_148ab44d2(void)

void FUN_148ab44d2(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab4507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ab450a FUN_148ab450a body=159 status=ok
// SIG undefined FUN_148ab450a(void)

void FUN_148ab450a(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_148ab4547;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148ab4547;
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
LAB_148ab4547:
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
                    /* WARNING: Could not recover jumptable at 0x000148ab45a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ab45aa FUN_148ab45aa body=31 status=ok
// SIG undefined FUN_148ab45aa(void)

undefined8 FUN_148ab45aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab45e4 FUN_148ab45e4 body=29 status=ok
// SIG undefined FUN_148ab45e4(void)

bool FUN_148ab45e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab4602 FUN_148ab4602 body=26 status=ok
// SIG undefined FUN_148ab4602(void)

bool FUN_148ab4602(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab461c FUN_148ab461c body=93 status=ok
// SIG undefined FUN_148ab461c(void)

void FUN_148ab461c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab467a FUN_148ab467a body=93 status=ok
// SIG undefined FUN_148ab467a(void)

void FUN_148ab467a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab46d8 FUN_148ab46d8 body=126 status=ok
// SIG undefined FUN_148ab46d8(void)

void FUN_148ab46d8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e62de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab4747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab4756 FUN_148ab4756 body=48 status=ok
// SIG undefined FUN_148ab4756(void)

void FUN_148ab4756(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab4783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ab4786 FUN_148ab4786 body=31 status=ok
// SIG undefined FUN_148ab4786(void)

undefined8 FUN_148ab4786(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab47c0 FUN_148ab47c0 body=29 status=ok
// SIG undefined FUN_148ab47c0(void)

bool FUN_148ab47c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab47de FUN_148ab47de body=26 status=ok
// SIG undefined FUN_148ab47de(void)

bool FUN_148ab47de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab47f8 FUN_148ab47f8 body=93 status=ok
// SIG undefined FUN_148ab47f8(void)

void FUN_148ab47f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab4856 FUN_148ab4856 body=93 status=ok
// SIG undefined FUN_148ab4856(void)

void FUN_148ab4856(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab48b4 FUN_148ab48b4 body=126 status=ok
// SIG undefined FUN_148ab48b4(void)

void FUN_148ab48b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6a00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab4923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab4932 FUN_148ab4932 body=58 status=ok
// SIG undefined FUN_148ab4932(void)

void FUN_148ab4932(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab4969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ab496c FUN_148ab496c body=173 status=ok
// SIG undefined FUN_148ab496c(void)

bool FUN_148ab496c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
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



// FUNCTION 148ab4a1c FUN_148ab4a1c body=31 status=ok
// SIG undefined FUN_148ab4a1c(void)

undefined8 FUN_148ab4a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab4a56 FUN_148ab4a56 body=29 status=ok
// SIG undefined FUN_148ab4a56(void)

bool FUN_148ab4a56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab4a74 FUN_148ab4a74 body=26 status=ok
// SIG undefined FUN_148ab4a74(void)

bool FUN_148ab4a74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab4a8e FUN_148ab4a8e body=93 status=ok
// SIG undefined FUN_148ab4a8e(void)

void FUN_148ab4a8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4f6b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab4aec FUN_148ab4aec body=93 status=ok
// SIG undefined FUN_148ab4aec(void)

void FUN_148ab4aec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4f6b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab4b4a FUN_148ab4b4a body=126 status=ok
// SIG undefined FUN_148ab4b4a(void)

void FUN_148ab4b4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6bc0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6b50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab4bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab4bc8 FUN_148ab4bc8 body=52 status=ok
// SIG undefined FUN_148ab4bc8(void)

void FUN_148ab4bc8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab4bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148ab4bfe FUN_148ab4bfe body=68 status=ok
// SIG undefined FUN_148ab4bfe(void)

undefined8 * FUN_148ab4bfe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6c70;
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



// FUNCTION 148ab4c46 FUN_148ab4c46 body=81 status=ok
// SIG undefined FUN_148ab4c46(void)

undefined8 FUN_148ab4c46(longlong param_1)

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



// FUNCTION 148ab4c9e FUN_148ab4c9e body=89 status=ok
// SIG undefined FUN_148ab4c9e(void)

bool FUN_148ab4c9e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab4ce9;
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
LAB_148ab4ce9:
  return lVar6 == param_2;
}



// FUNCTION 148ab4d14 FUN_148ab4d14 body=118 status=ok
// SIG undefined FUN_148ab4d14(void)

void FUN_148ab4d14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6c70;
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



// FUNCTION 148ab4d8a FUN_148ab4d8a body=156 status=ok
// SIG undefined FUN_148ab4d8a(void)

void FUN_148ab4d8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6c70;
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
                    /* WARNING: Could not recover jumptable at 0x000148ab4e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab4e26 FUN_148ab4e26 body=98 status=ok
// SIG undefined FUN_148ab4e26(void)

void FUN_148ab4e26(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ab4e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ab4e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ab4e9c FUN_148ab4e9c body=81 status=ok
// SIG undefined FUN_148ab4e9c(void)

undefined8 FUN_148ab4e9c(longlong param_1)

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



// FUNCTION 148ab4ef4 FUN_148ab4ef4 body=89 status=ok
// SIG undefined FUN_148ab4ef4(void)

bool FUN_148ab4ef4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab4f3f;
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
LAB_148ab4f3f:
  return lVar6 == param_2;
}



// FUNCTION 148ab4f76 FUN_148ab4f76 body=118 status=ok
// SIG undefined FUN_148ab4f76(void)

void FUN_148ab4f76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6dc0;
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



// FUNCTION 148ab4fec FUN_148ab4fec body=156 status=ok
// SIG undefined FUN_148ab4fec(void)

void FUN_148ab4fec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6dc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ab5078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5088 FUN_148ab5088 body=98 status=ok
// SIG undefined FUN_148ab5088(void)

void FUN_148ab5088(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ab50d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ab50e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ab50ec FUN_148ab50ec body=68 status=ok
// SIG undefined FUN_148ab50ec(void)

undefined8 * FUN_148ab50ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6ea0;
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



// FUNCTION 148ab5134 FUN_148ab5134 body=81 status=ok
// SIG undefined FUN_148ab5134(void)

undefined8 FUN_148ab5134(longlong param_1)

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



// FUNCTION 148ab518c FUN_148ab518c body=89 status=ok
// SIG undefined FUN_148ab518c(void)

bool FUN_148ab518c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab51d7;
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
LAB_148ab51d7:
  return lVar6 == param_2;
}



// FUNCTION 148ab5202 FUN_148ab5202 body=118 status=ok
// SIG undefined FUN_148ab5202(void)

void FUN_148ab5202(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ea0;
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



// FUNCTION 148ab5278 FUN_148ab5278 body=156 status=ok
// SIG undefined FUN_148ab5278(void)

void FUN_148ab5278(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6ea0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ab5304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5314 FUN_148ab5314 body=98 status=ok
// SIG undefined FUN_148ab5314(void)

void FUN_148ab5314(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ab535d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ab536c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ab537a FUN_148ab537a body=81 status=ok
// SIG undefined FUN_148ab537a(void)

undefined8 FUN_148ab537a(longlong param_1)

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



// FUNCTION 148ab53d2 FUN_148ab53d2 body=89 status=ok
// SIG undefined FUN_148ab53d2(void)

bool FUN_148ab53d2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab541d;
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
LAB_148ab541d:
  return lVar6 == param_2;
}



// FUNCTION 148ab5448 FUN_148ab5448 body=118 status=ok
// SIG undefined FUN_148ab5448(void)

void FUN_148ab5448(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6f10;
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



// FUNCTION 148ab54be FUN_148ab54be body=156 status=ok
// SIG undefined FUN_148ab54be(void)

void FUN_148ab54be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6f10;
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
                    /* WARNING: Could not recover jumptable at 0x000148ab554a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab555a FUN_148ab555a body=98 status=ok
// SIG undefined FUN_148ab555a(void)

void FUN_148ab555a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ab55a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ab55b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ab55ca FUN_148ab55ca body=151 status=ok
// SIG undefined FUN_148ab55ca(void)

void FUN_148ab55ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4f7220;
  puVar1[2] = &PTR_FUN_14b4c3a80;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x100000000;
  puVar1[6] = &PTR_FUN_14b4c3a98;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
  return;
}



// FUNCTION 148ab566c FUN_148ab566c body=29 status=ok
// SIG undefined FUN_148ab566c(void)

undefined8 FUN_148ab566c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab568a FUN_148ab568a body=29 status=ok
// SIG undefined FUN_148ab568a(void)

undefined8 FUN_148ab568a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab56c4 FUN_148ab56c4 body=93 status=ok
// SIG undefined FUN_148ab56c4(void)

void FUN_148ab56c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5722 FUN_148ab5722 body=93 status=ok
// SIG undefined FUN_148ab5722(void)

void FUN_148ab5722(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5780 FUN_148ab5780 body=126 status=ok
// SIG undefined FUN_148ab5780(void)

void FUN_148ab5780(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7240;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab57ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab580c FUN_148ab580c body=21 status=ok
// SIG undefined FUN_148ab580c(void)

undefined8 FUN_148ab580c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab5822 FUN_148ab5822 body=31 status=ok
// SIG undefined FUN_148ab5822(void)

undefined8 FUN_148ab5822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab585e FUN_148ab585e body=93 status=ok
// SIG undefined FUN_148ab585e(void)

void FUN_148ab585e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab58bc FUN_148ab58bc body=126 status=ok
// SIG undefined FUN_148ab58bc(void)

void FUN_148ab58bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab592b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5948 FUN_148ab5948 body=31 status=ok
// SIG undefined FUN_148ab5948(void)

undefined8 FUN_148ab5948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab5984 FUN_148ab5984 body=93 status=ok
// SIG undefined FUN_148ab5984(void)

void FUN_148ab5984(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab59e2 FUN_148ab59e2 body=93 status=ok
// SIG undefined FUN_148ab59e2(void)

void FUN_148ab59e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5a40 FUN_148ab5a40 body=126 status=ok
// SIG undefined FUN_148ab5a40(void)

void FUN_148ab5a40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab5aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5aca FUN_148ab5aca body=21 status=ok
// SIG undefined FUN_148ab5aca(void)

undefined8 FUN_148ab5aca(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab5ae0 FUN_148ab5ae0 body=31 status=ok
// SIG undefined FUN_148ab5ae0(void)

undefined8 FUN_148ab5ae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab5b1c FUN_148ab5b1c body=93 status=ok
// SIG undefined FUN_148ab5b1c(void)

void FUN_148ab5b1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5b7a FUN_148ab5b7a body=126 status=ok
// SIG undefined FUN_148ab5b7a(void)

void FUN_148ab5b7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab5be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5c06 FUN_148ab5c06 body=29 status=ok
// SIG undefined FUN_148ab5c06(void)

undefined8 FUN_148ab5c06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab5c40 FUN_148ab5c40 body=93 status=ok
// SIG undefined FUN_148ab5c40(void)

void FUN_148ab5c40(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5c9e FUN_148ab5c9e body=93 status=ok
// SIG undefined FUN_148ab5c9e(void)

void FUN_148ab5c9e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5cfc FUN_148ab5cfc body=126 status=ok
// SIG undefined FUN_148ab5cfc(void)

void FUN_148ab5cfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab5d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5d88 FUN_148ab5d88 body=21 status=ok
// SIG undefined FUN_148ab5d88(void)

undefined8 FUN_148ab5d88(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab5d9e FUN_148ab5d9e body=31 status=ok
// SIG undefined FUN_148ab5d9e(void)

undefined8 FUN_148ab5d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab5de6 FUN_148ab5de6 body=93 status=ok
// SIG undefined FUN_148ab5de6(void)

void FUN_148ab5de6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f76a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5e44 FUN_148ab5e44 body=126 status=ok
// SIG undefined FUN_148ab5e44(void)

void FUN_148ab5e44(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f76a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab5eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5ed2 FUN_148ab5ed2 body=31 status=ok
// SIG undefined FUN_148ab5ed2(void)

undefined8 FUN_148ab5ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab5f0e FUN_148ab5f0e body=93 status=ok
// SIG undefined FUN_148ab5f0e(void)

void FUN_148ab5f0e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab5f6c FUN_148ab5f6c body=126 status=ok
// SIG undefined FUN_148ab5f6c(void)

void FUN_148ab5f6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f7730;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab5fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab5fea FUN_148ab5fea body=21 status=ok
// SIG undefined FUN_148ab5fea(void)

undefined8 FUN_148ab5fea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab6000 FUN_148ab6000 body=79 status=ok
// SIG undefined FUN_148ab6000(void)

void FUN_148ab6000(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4f77d0;
  FUN_1449db362(param_1 + 7);
  FUN_1449db362(param_1 + 5);
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148ab606a FUN_148ab606a body=347 status=ok
// SIG undefined FUN_148ab606a(void)

void FUN_148ab606a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) != 0) {
    QueryPerformanceCounter(&local_78);
    dVar2 = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 + 0.001 + 0.5;
    QueryPerformanceCounter(&local_78);
    if ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 <= dVar2) {
      do {
        FUN_148ab61c6(param_1);
        pcVar1 = (code *)*param_2;
        plVar5 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar5 = param_2 + 4;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar3 = (*pcVar1)(uVar4);
        if (cVar3 != '\0') break;
        FUN_14000f986(0x3c23d70a);
        QueryPerformanceCounter(&local_78);
      } while ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 <= dVar2);
    }
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ab61c6 FUN_148ab61c6 body=100 status=ok
// SIG undefined FUN_148ab61c6(void)

void FUN_148ab61c6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140185c36(*(longlong *)(param_1 + 8),0x3c23d70a);
    cVar1 = FUN_14273280c();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*DAT_14c82b500 + 0x38))(DAT_14c82b500,1);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
      }
    }
    uVar2 = FUN_144a82cde();
    FUN_1400e4168(uVar2,0);
    return;
  }
  return;
}



// FUNCTION 148ab622a FUN_148ab622a body=38 status=ok
// SIG undefined FUN_148ab622a(void)

undefined8 FUN_148ab622a(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab6250 FUN_148ab6250 body=38 status=ok
// SIG undefined FUN_148ab6250(void)

undefined8 FUN_148ab6250(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab6276 FUN_148ab6276 body=133 status=ok
// SIG undefined FUN_148ab6276(void)

longlong * FUN_148ab6276(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar5 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar5,iVar1);
    }
    lVar2 = *plVar5;
    lVar6 = (longlong)iVar1 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *(undefined8 *)(lVar2 + 0x10 + lVar6) = param_3[2];
    *(undefined8 *)(lVar2 + lVar6) = uVar3;
    ((undefined8 *)(lVar2 + lVar6))[1] = uVar4;
    *(undefined1 *)(lVar2 + 0x20 + lVar6) = 7;
    *(undefined8 *)(lVar2 + 0x28 + lVar6) = *param_2;
  }
  return param_1;
}



// FUNCTION 148ab62fc FUN_148ab62fc body=93 status=ok
// SIG undefined FUN_148ab62fc(void)

ulonglong FUN_148ab62fc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 148ab635a FUN_148ab635a body=38 status=ok
// SIG undefined FUN_148ab635a(void)

undefined8 FUN_148ab635a(undefined8 param_1,int param_2)

{
  FUN_143f524d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab638e FUN_148ab638e body=57 status=ok
// SIG undefined FUN_148ab638e(void)

undefined8 * FUN_148ab638e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a185980;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab63c8 FUN_148ab63c8 body=207 status=ok
// SIG undefined FUN_148ab63c8(void)

undefined8 FUN_148ab63c8(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4118);
    bifrost::telemetry::rowBuilder::vDouble
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),*param_3);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      bifrost::telemetry::rowBuilder::vEndObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
      bifrost::telemetry::rowBuilder::vBeginObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
    }
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4120);
    bifrost::telemetry::rowBuilder::vDouble
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3[1]);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      bifrost::telemetry::rowBuilder::vEndObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
      bifrost::telemetry::rowBuilder::vBeginObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
    }
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4128);
    bifrost::telemetry::rowBuilder::vDouble
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3[2]);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 148ab6498 FUN_148ab6498 body=136 status=ok
// SIG undefined FUN_148ab6498(void)

void FUN_148ab6498(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb979d0;
  if (DAT_14cb97a04 != 0) {
    *(int *)(DAT_14cb979d0 + (longlong)DAT_14cb97a00 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb97a04) {
    iVar4 = DAT_14cb97a00;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x30) = iVar4;
  DAT_14cb97a04 = DAT_14cb97a04 + 1;
  puVar3 = &DAT_14cb979e0;
  if (DAT_14cb979f0 != (undefined *)0x0) {
    puVar3 = DAT_14cb979f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb97a00 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148ab6520 FUN_148ab6520 body=83 status=ok
// SIG undefined FUN_148ab6520(void)

void FUN_148ab6520(longlong param_1,uint param_2)

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
  if (iVar3 == *(int *)(param_1 + 0x40c)) {
    return;
  }
  *(int *)(param_1 + 0x40c) = iVar3;
  FUN_148ab6574(param_1,*(undefined4 *)(param_1 + 0x408));
  return;
}



// FUNCTION 148ab6574 FUN_148ab6574 body=144 status=ok
// SIG undefined FUN_148ab6574(void)

void FUN_148ab6574(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 148ab6604 FUN_148ab6604 body=125 status=ok
// SIG undefined FUN_148ab6604(void)

void FUN_148ab6604(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_148ab6574(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148ab6682 FUN_148ab6682 body=31 status=ok
// SIG undefined FUN_148ab6682(void)

undefined8 FUN_148ab6682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab66b8 FUN_148ab66b8 body=93 status=ok
// SIG undefined FUN_148ab66b8(void)

void FUN_148ab66b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4d9490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ab6716 FUN_148ab6716 body=93 status=ok
// SIG undefined FUN_148ab6716(void)

void FUN_148ab6716(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4d9490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ab6774 FUN_148ab6774 body=126 status=ok
// SIG undefined FUN_148ab6774(void)

void FUN_148ab6774(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4d9490;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f8550;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab67e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab6800 FUN_148ab6800 body=31 status=ok
// SIG undefined FUN_148ab6800(void)

undefined8 FUN_148ab6800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab6838 FUN_148ab6838 body=93 status=ok
// SIG undefined FUN_148ab6838(void)

void FUN_148ab6838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f86a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab6896 FUN_148ab6896 body=93 status=ok
// SIG undefined FUN_148ab6896(void)

void FUN_148ab6896(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f86a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab68f4 FUN_148ab68f4 body=126 status=ok
// SIG undefined FUN_148ab68f4(void)

void FUN_148ab68f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f86a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f8630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab6963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab6972 FUN_148ab6972 body=137 status=ok
// SIG undefined FUN_148ab6972(void)

void FUN_148ab6972(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_stack_00000028;
  longlong *in_stack_00000030;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  local_30 = *in_stack_00000030;
  local_40 = &local_30;
  *in_stack_00000030 = 0;
  local_28 = (undefined4)in_stack_00000030[1];
  local_24 = *(undefined4 *)((longlong)in_stack_00000030 + 0xc);
  in_stack_00000030[1] = 0;
  local_48 = in_stack_00000028;
  (*pcVar2)(uVar1);
  if (*in_stack_00000030 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab69fe FUN_148ab69fe body=31 status=ok
// SIG undefined FUN_148ab69fe(void)

undefined8 FUN_148ab69fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab6a32 FUN_148ab6a32 body=93 status=ok
// SIG undefined FUN_148ab6a32(void)

void FUN_148ab6a32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ab6a90 FUN_148ab6a90 body=93 status=ok
// SIG undefined FUN_148ab6a90(void)

void FUN_148ab6a90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148ab6aee FUN_148ab6aee body=126 status=ok
// SIG undefined FUN_148ab6aee(void)

void FUN_148ab6aee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f8710;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab6b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab6b6c FUN_148ab6b6c body=56 status=ok
// SIG undefined FUN_148ab6b6c(void)

void FUN_148ab6b6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_14155ddc2(lVar1);
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_140457ffc(*(longlong *)(lVar1 + 8) + 0x28,lVar1);
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined1 *)(lVar1 + 0x31) = 0;
  return;
}



// FUNCTION 148ab6ba4 FUN_148ab6ba4 body=31 status=ok
// SIG undefined FUN_148ab6ba4(void)

undefined8 FUN_148ab6ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab6be0 FUN_148ab6be0 body=93 status=ok
// SIG undefined FUN_148ab6be0(void)

void FUN_148ab6be0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f8780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab6c3e FUN_148ab6c3e body=126 status=ok
// SIG undefined FUN_148ab6c3e(void)

void FUN_148ab6c3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f8780;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab6cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab6cbc FUN_148ab6cbc body=21 status=ok
// SIG undefined FUN_148ab6cbc(void)

undefined8 FUN_148ab6cbc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab6cd6 FUN_148ab6cd6 body=72 status=ok
// SIG undefined FUN_148ab6cd6(void)

undefined8 * FUN_148ab6cd6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1400b22c2(&local_20,&DAT_149e02088);
  *param_2 = local_20;
  *(undefined4 *)(param_2 + 1) = local_18;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_14;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 7) = 1;
  return param_2;
}



// FUNCTION 148ab6dba FUN_148ab6dba body=74 status=ok
// SIG undefined FUN_148ab6dba(void)

undefined8 * FUN_148ab6dba(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  FUN_148ab6e04();
  return param_2;
}



// FUNCTION 148ab6e04 FUN_148ab6e04 body=50 status=ok
// SIG undefined FUN_148ab6e04(void)

void FUN_148ab6e04(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_148ab7152(param_1);
  return;
}



// FUNCTION 148ab6e36 Unwind@148ab6e36 body=20 status=ok
// SIG undefined Unwind@148ab6e36(void)

void Unwind_148ab6e36(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab6e80 FUN_148ab6e80 body=72 status=ok
// SIG undefined FUN_148ab6e80(void)

undefined8 * FUN_148ab6e80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1400b22c2(&local_20,&DAT_149e02088);
  *param_2 = local_20;
  *(undefined4 *)(param_2 + 1) = local_18;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_14;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 7) = 1;
  return param_2;
}



// FUNCTION 148ab6ee2 FUN_148ab6ee2 body=72 status=ok
// SIG undefined FUN_148ab6ee2(void)

undefined8 * FUN_148ab6ee2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1400b22c2(&local_20,&DAT_149e02088);
  *param_2 = local_20;
  *(undefined4 *)(param_2 + 1) = local_18;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_14;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 7) = 1;
  return param_2;
}



// FUNCTION 148ab6f44 FUN_148ab6f44 body=74 status=ok
// SIG undefined FUN_148ab6f44(void)

undefined8 * FUN_148ab6f44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  FUN_148ab6f8e();
  return param_2;
}



// FUNCTION 148ab6f8e FUN_148ab6f8e body=57 status=ok
// SIG undefined FUN_148ab6f8e(void)

void FUN_148ab6f8e(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 148ab6fc8 Unwind@148ab6fc8 body=20 status=ok
// SIG undefined Unwind@148ab6fc8(void)

void Unwind_148ab6fc8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab6fde Unwind@148ab6fde body=20 status=ok
// SIG undefined Unwind@148ab6fde(void)

void Unwind_148ab6fde(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab6ff4 FUN_148ab6ff4 body=139 status=ok
// SIG undefined FUN_148ab6ff4(void)

undefined8 * FUN_148ab6ff4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  FUN_148ab7080();
  return param_2;
}



// FUNCTION 148ab7080 FUN_148ab7080 body=99 status=ok
// SIG undefined FUN_148ab7080(void)

void FUN_148ab7080(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 148ab70e4 Unwind@148ab70e4 body=20 status=ok
// SIG undefined Unwind@148ab70e4(void)

void Unwind_148ab70e4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab70fa Unwind@148ab70fa body=20 status=ok
// SIG undefined Unwind@148ab70fa(void)

void Unwind_148ab70fa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab7110 Unwind@148ab7110 body=20 status=ok
// SIG undefined Unwind@148ab7110(void)

void Unwind_148ab7110(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab7126 Unwind@148ab7126 body=20 status=ok
// SIG undefined Unwind@148ab7126(void)

void Unwind_148ab7126(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab713c Unwind@148ab713c body=20 status=ok
// SIG undefined Unwind@148ab713c(void)

void Unwind_148ab713c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab7152 FUN_148ab7152 body=54 status=ok
// SIG undefined FUN_148ab7152(void)

void FUN_148ab7152(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_148ab719d(*param_1,(int)param_1[1],param_3,param_4,0xfffffffffffffffe);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 148ab7188 Unwind@148ab7188 body=20 status=ok
// SIG undefined Unwind@148ab7188(void)

void Unwind_148ab7188(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab719d FUN_148ab719d body=41 status=ok
// SIG undefined FUN_148ab719d(void)

void FUN_148ab719d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148ab71c6(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 148ab71c6 FUN_148ab71c6 body=127 status=ok
// SIG undefined FUN_148ab71c6(void)

void FUN_148ab71c6(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 148ab7246 Unwind@148ab7246 body=20 status=ok
// SIG undefined Unwind@148ab7246(void)

void Unwind_148ab7246(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab725c Unwind@148ab725c body=20 status=ok
// SIG undefined Unwind@148ab725c(void)

void Unwind_148ab725c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab7272 Unwind@148ab7272 body=20 status=ok
// SIG undefined Unwind@148ab7272(void)

void Unwind_148ab7272(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab7288 Unwind@148ab7288 body=20 status=ok
// SIG undefined Unwind@148ab7288(void)

void Unwind_148ab7288(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab729e Unwind@148ab729e body=20 status=ok
// SIG undefined Unwind@148ab729e(void)

void Unwind_148ab729e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab72b4 Unwind@148ab72b4 body=20 status=ok
// SIG undefined Unwind@148ab72b4(void)

void Unwind_148ab72b4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab72ca Unwind@148ab72ca body=20 status=ok
// SIG undefined Unwind@148ab72ca(void)

void Unwind_148ab72ca(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab72e0 FUN_148ab72e0 body=36 status=ok
// SIG undefined FUN_148ab72e0(void)

undefined8 FUN_148ab72e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148ab7320 FUN_148ab7320 body=60 status=ok
// SIG undefined FUN_148ab7320(void)

void FUN_148ab7320(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f8870;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ab735c FUN_148ab735c body=111 status=ok
// SIG undefined FUN_148ab735c(void)

void FUN_148ab735c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f8870;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
  }
  return;
}



// FUNCTION 148ab73cc Unwind@148ab73cc body=41 status=ok
// SIG undefined Unwind@148ab73cc(void)

void Unwind_148ab73cc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 148ab73f6 Unwind@148ab73f6 body=21 status=ok
// SIG undefined Unwind@148ab73f6(void)

void Unwind_148ab73f6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 148ab740c FUN_148ab740c body=21 status=ok
// SIG undefined FUN_148ab740c(void)

undefined8 FUN_148ab740c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab744e FUN_148ab744e body=183 status=ok
// SIG undefined FUN_148ab744e(void)

void FUN_148ab744e(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 0x28);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(local_28,&DAT_14c846b20);
  local_30 = 0xffffffff;
  local_38 = 0;
  iVar1 = FUN_1447ee042(local_28,L"-host_gamelift",0xe,1);
  *(bool *)(param_1 + 0x30) = iVar1 != -1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab7506 FUN_148ab7506 body=162 status=ok
// SIG undefined FUN_148ab7506(void)

void FUN_148ab7506(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_148ab75a8();
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  *(longlong **)(param_1 + 0x1e0) = plVar3;
  (**(code **)(*plVar3 + 0x2a0))();
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    lVar4 = FUN_1459984cc();
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148ab754c;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(lVar1);
        }
        goto LAB_148ab754c;
      }
    }
  }
  lVar5 = 0;
LAB_148ab754c:
  *(longlong *)(param_1 + 0x438) = lVar5;
  return;
}



// FUNCTION 148ab75a8 FUN_148ab75a8 body=148 status=ok
// SIG undefined FUN_148ab75a8(void)

undefined8 FUN_148ab75a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459984cc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab763e FUN_148ab763e body=47 status=ok
// SIG undefined FUN_148ab763e(void)

void FUN_148ab763e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x598))();
  (**(code **)(*param_1 + 0x590))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ab7666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5a0))(param_1);
  return;
}



// FUNCTION 148ab766e FUN_148ab766e body=60 status=ok
// SIG undefined FUN_148ab766e(void)

void FUN_148ab766e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x1f8) == '\x01')) &&
     (*(char *)(param_1 + 0x128) == '\x01')) {
    FUN_143f54cbe(param_1);
    return;
  }
  return;
}



// FUNCTION 148ab76aa FUN_148ab76aa body=501 status=ok
// SIG undefined FUN_148ab76aa(void)

void FUN_148ab76aa(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 ***local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1488b0b4c(&local_78);
  FUN_145f8d864(&local_88);
  iVar9 = local_70 + -1;
  if (local_70 == 0) {
    iVar9 = 0;
  }
  FUN_1412cfe60(&local_58,&local_88,iVar9 + 1 + (uint)((int)local_80 == 0));
  FUN_1401aebe8(&local_58,local_78,iVar9);
  ppppuVar7 = (undefined8 ****)local_58;
  if ((int)uStack_50 == 0) {
    ppppuVar7 = (undefined8 ****)&DAT_149dfb77a;
  }
  cVar5 = FUN_14158b496(&local_68,ppppuVar7,0);
  if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar4 = uStack_60;
  if (cVar5 != '\0') {
    lVar8 = (longlong)(int)uStack_60;
    uVar6 = (int)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
    if (uStack_60._4_4_ < uVar6) {
      FUN_1447403be(&local_68,uVar4 & 0xffffffff);
    }
    *(undefined1 *)(local_68 + lVar8) = 0;
    local_48 = 0;
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_40 = 0xf;
    FUN_1401d7cf8(&local_58,local_68);
    local_98 = L"UnspecifiedFile";
    local_90 = 0xf;
    local_a8 = 0;
    local_a6 = 0;
    local_a0 = 0;
    local_88 = &local_58;
    if (0xf < local_40) {
      local_88 = local_58;
    }
    local_80 = local_48;
    FUN_141183efe(&local_78,&local_88,&local_a8,&local_98);
    FUN_1446dcc2e(param_1,&local_78);
    plVar3 = (longlong *)CONCAT44(uStack_6c,local_70);
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
    FUN_1401d9a90(&local_58);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ab78a0 FUN_148ab78a0 body=40 status=ok
// SIG undefined FUN_148ab78a0(void)

void FUN_148ab78a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140dddae6(param_2);
  if (cVar1 != '\0') {
    FUN_1488b09de(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab78c8 FUN_148ab78c8 body=99 status=ok
// SIG undefined FUN_148ab78c8(void)

void FUN_148ab78c8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x428);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (plVar4 = (longlong *)FUN_14494016c(lVar3,0,0), plVar4 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar4 + 0x690))(plVar4);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 148ab7930 FUN_148ab7930 body=107 status=ok
// SIG undefined FUN_148ab7930(void)

void FUN_148ab7930(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_144757f48(lVar2,0x40000000);
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar2 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar3 = uVar1 == *(uint *)(lVar2 + 8);
      if (bVar3) {
        *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar3);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 148ab799c FUN_148ab799c body=52 status=ok
// SIG undefined FUN_148ab799c(void)

void FUN_148ab799c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_148ab79d0(param_1,(undefined8 *)(param_1 + 0x80));
  if (cVar1 == '\0') {
    return;
  }
  FUN_148ab744e(*(undefined8 *)(param_1 + 0x80),param_2);
  return;
}



// FUNCTION 148ab79d0 FUN_148ab79d0 body=67 status=ok
// SIG undefined FUN_148ab79d0(void)

ulonglong FUN_148ab79d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_148ab9d6d();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ab7a14 FUN_148ab7a14 body=61 status=ok
// SIG undefined FUN_148ab7a14(void)

void FUN_148ab7a14(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_148ab7a52(param_1,(undefined8 *)(param_1 + 0x88));
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000148ab7a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148ab7a52 FUN_148ab7a52 body=67 status=ok
// SIG undefined FUN_148ab7a52(void)

ulonglong FUN_148ab7a52(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_148ab9e02();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ab7a96 FUN_148ab7a96 body=239 status=ok
// SIG undefined FUN_148ab7a96(void)

undefined8 FUN_148ab7a96(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a79d330;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4fe590;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_143f53e8a;
  FUN_140fee05c(&DAT_14cadbe60,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab7b86 FUN_148ab7b86 body=244 status=ok
// SIG undefined FUN_148ab7b86(void)

undefined8
FUN_148ab7b86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14b3e62a0;
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
  *local_40 = &PTR_FUN_14b4fe600;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141285884(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab7c7c FUN_148ab7c7c body=81 status=ok
// SIG undefined FUN_148ab7c7c(void)

void FUN_148ab7c7c(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (((lVar1 == param_2) && (*param_4 == '\x05')) && (*(char *)(param_1 + 0xb8) == '\0')) {
    FUN_14144c0b6(param_2 + 0x200,&DAT_14cb98530);
    return;
  }
  return;
}



// FUNCTION 148ab7cd7 FUN_148ab7cd7 body=107 status=ok
// SIG undefined FUN_148ab7cd7(void)

undefined8
FUN_148ab7cd7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_148aba413(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return param_1;
}



// FUNCTION 148ab7d42 FUN_148ab7d42 body=218 status=ok
// SIG undefined FUN_148ab7d42(void)

undefined8 FUN_148ab7d42(longlong param_1)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = uVar2;
  if ((DAT_14c866ff0 == '\0') && (DAT_14c846539 != '\x01')) {
    dVar4 = DAT_14c866ff8 - DAT_14c846540;
  }
  else {
    BVar1 = QueryPerformanceCounter(&local_20);
    uVar2 = CONCAT44(extraout_var,BVar1);
    dVar4 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar5 = *(double *)(param_1 + 0x68);
    uVar3 = -(ulonglong)(dVar5 == 0.0);
    *(double *)(param_1 + 0x68) = dVar4;
    dVar4 = dVar4 - (double)(~uVar3 & (ulonglong)dVar5 | uVar3 & (ulonglong)dVar4);
  }
  dVar4 = dVar4 * 1000.0;
  dVar5 = *(double *)(param_1 + 0x48);
  if (dVar4 <= *(double *)(param_1 + 0x48)) {
    dVar5 = dVar4;
  }
  *(double *)(param_1 + 0x48) = dVar5;
  dVar5 = *(double *)(param_1 + 0x50);
  if (*(double *)(param_1 + 0x50) <= dVar4) {
    dVar5 = dVar4;
  }
  *(double *)(param_1 + 0x50) = dVar5;
  *(double *)(param_1 + 0x58) = dVar4 + *(double *)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab7e1e FUN_148ab7e1e body=93 status=ok
// SIG undefined FUN_148ab7e1e(void)

void FUN_148ab7e1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x438) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x438) + 0x80), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x30) == '\x01')) {
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e(lVar1);
    }
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  FUN_14479d2ce(param_1 + 0x28);
  return;
}



// FUNCTION 148ab7e7c FUN_148ab7e7c body=441 status=ok
// SIG undefined FUN_148ab7e7c(void)

void FUN_148ab7e7c(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  uVar3 = (**(code **)(*local_30 + 0xf0))();
  FUN_148ab8036(uVar3,param_1,FUN_143f55d42);
  plVar2 = local_30;
  FUN_1400b22c2(local_40,"http://checkip.amazonaws.com");
  (**(code **)(*plVar2 + 0x68))(plVar2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_1400b22c2(local_40,&DAT_14b4fcdd9);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_1400b22c2(local_40,"X-UnrealEngine-Agent");
  FUN_140056680(local_50,L"User-Agent");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_140056680(local_40,L"application/json");
  FUN_1400b22c2(local_50,"Content-Type");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*local_30 + 0xe8))();
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab8036 FUN_148ab8036 body=190 status=ok
// SIG undefined FUN_148ab8036(void)

void FUN_148ab8036(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe670;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab80d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 148ab80f4 FUN_148ab80f4 body=532 status=ok
// SIG undefined FUN_148ab80f4(void)

void FUN_148ab80f4(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  uVar3 = (**(code **)(*local_30 + 0xf0))();
  FUN_148ab8036(uVar3,param_1,FUN_143f55e4e);
  plVar2 = local_30;
  FUN_1400b22c2(local_40,"http://169.254.169.254/latest/api/token");
  (**(code **)(*plVar2 + 0x68))(plVar2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_1400b22c2(local_40,&DAT_14b4fcdd9);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_1400b22c2(local_40,"X-UnrealEngine-Agent");
  FUN_1400b22c2(local_50,"User-Agent");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_1400b22c2(local_40,"21600");
  FUN_1400b22c2(local_50,"X-aws-ec2-metadata-token-ttl-seconds");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_1400b22c2(local_40,"application/json");
  FUN_1400b22c2(local_50,"Content-Type");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*local_30 + 0xe8))();
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab830a FUN_148ab830a body=508 status=ok
// SIG undefined FUN_148ab830a(void)

void FUN_148ab830a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_38);
  uVar3 = (**(code **)(*local_38 + 0xf0))();
  FUN_148ab8036(uVar3,param_1,FUN_143f55f54);
  plVar2 = local_38;
  FUN_1400b22c2(local_48,"http://169.254.169.254/latest/meta-data/placement/region");
  (**(code **)(*plVar2 + 0x68))(plVar2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_1400b22c2(local_48,&DAT_14b4fcdd9);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_1400b22c2(local_48,"X-UnrealEngine-Agent");
  FUN_1400b22c2(local_58,"User-Agent");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_1400b22c2(local_48,"X-aws-ec2-metadata-token");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_48,param_1 + 0x100);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_1400b22c2(local_48,"application/json");
  FUN_1400b22c2(local_58,"Content-Type");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*local_38 + 0xe8))();
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab8508 FUN_148ab8508 body=189 status=ok
// SIG undefined FUN_148ab8508(void)

void FUN_148ab8508(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    FUN_14479d2ce(param_1 + 0x28);
  }
  else if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x31) == '\x01') {
    uVar2 = 1;
    goto LAB_148ab8524;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 == DAT_14cadad70) {
    uVar2 = 3;
  }
  else {
    if (lVar1 != DAT_14cadad78) {
      if (lVar1 == DAT_14cadad80) {
        *(undefined1 *)(param_1 + 0xb8) = 5;
        if (*(char *)(param_1 + 0x134) == '\0') {
          *(undefined1 *)(param_1 + 0x134) = 1;
        }
      }
      else {
        if (lVar1 == DAT_14cadad88) {
          *(undefined1 *)(param_1 + 0xb8) = 6;
        }
        else {
          *(undefined1 *)(param_1 + 0xb8) = 7;
        }
        if (*(char *)(param_1 + 0x134) != '\0') {
          *(undefined1 *)(param_1 + 0x134) = 0;
        }
      }
      FUN_143f54cbe(param_1);
      return;
    }
    uVar2 = 4;
  }
LAB_148ab8524:
  FUN_143f547cc(param_1,uVar2);
  return;
}



// FUNCTION 148ab85dc FUN_148ab85dc body=45 status=ok
// SIG undefined FUN_148ab85dc(void)

longlong FUN_148ab85dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458d399e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab864a FUN_148ab864a body=73 status=ok
// SIG undefined FUN_148ab864a(void)

undefined1 FUN_148ab864a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ab86bc FUN_148ab86bc body=59 status=ok
// SIG undefined FUN_148ab86bc(void)

undefined8 FUN_148ab86bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab8702 FUN_148ab8702 body=38 status=ok
// SIG undefined FUN_148ab8702(void)

void FUN_148ab8702(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148ab87e4 FUN_148ab87e4 body=59 status=ok
// SIG undefined FUN_148ab87e4(void)

undefined8 FUN_148ab87e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab8900 FUN_148ab8900 body=139 status=ok
// SIG undefined FUN_148ab8900(void)

undefined1 FUN_148ab8900(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_141238a10();
      FUN_144a787a6(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      FUN_144a787a6(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      *(undefined1 *)(param_2 + lVar6 + 0x60) = *(undefined1 *)(param_3 + lVar6 + 0x60);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ab89b4 FUN_148ab89b4 body=59 status=ok
// SIG undefined FUN_148ab89b4(void)

undefined8 FUN_148ab89b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab89fa FUN_148ab89fa body=34 status=ok
// SIG undefined FUN_148ab89fa(void)

void FUN_148ab89fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148ab8a6a(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148ab8a6a FUN_148ab8a6a body=99 status=ok
// SIG undefined FUN_148ab8a6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ab8a6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 1:
    return;
  case 2:
    *(code **)(param_1 + 0x18) = switchD_1458da17c::caseD_0;
    *(undefined **)(param_1 + 0x20) = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x18) = 0x4053b5c6;
    return;
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ab8ade FUN_148ab8ade body=44 status=ok
// SIG undefined FUN_148ab8ade(void)

void FUN_148ab8ade(undefined8 param_1,longlong *param_2)

{
  FUN_148ab8c1a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ab8b20 FUN_148ab8b20 body=54 status=ok
// SIG undefined FUN_148ab8b20(void)

undefined1 FUN_148ab8b20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ab8c40(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148ab8b7e FUN_148ab8b7e body=59 status=ok
// SIG undefined FUN_148ab8b7e(void)

undefined8 FUN_148ab8b7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab8c1a FUN_148ab8c1a body=38 status=ok
// SIG undefined FUN_148ab8c1a(void)

void FUN_148ab8c1a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148ab8a6a(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 148ab8c40 FUN_148ab8c40 body=95 status=ok
// SIG undefined FUN_148ab8c40(void)

undefined8 * FUN_148ab8c40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148ab8c1a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ab8ca0(param_1,iVar1);
      FUN_148ab8d0f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ab8ca0 FUN_148ab8ca0 body=111 status=ok
// SIG undefined FUN_148ab8ca0(void)

void FUN_148ab8ca0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ab8d0f FUN_148ab8d0f body=52 status=ok
// SIG undefined FUN_148ab8d0f(void)

void FUN_148ab8d0f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148ab8d44(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148ab8d44 FUN_148ab8d44 body=231 status=ok
// SIG undefined FUN_148ab8d44(void)

undefined4 * FUN_148ab8d44(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined ***)(param_1 + 4) = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 10);
  *(byte *)(param_1 + 10) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 6,param_2 + 6);
  *(undefined ***)(param_1 + 4) = &PTR_FUN_14a5af930;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar2 = param_2[0x12];
  pvVar3 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar2,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar2 = param_2[0x16];
  pvVar3 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x17] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar2,0);
    memcpy(*(void **)(param_1 + 0x14),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 148ab8e2c FUN_148ab8e2c body=50 status=ok
// SIG undefined FUN_148ab8e2c(void)

void FUN_148ab8e2c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_148ab8c1a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148ab8e92 FUN_148ab8e92 body=54 status=ok
// SIG undefined FUN_148ab8e92(void)

undefined1 FUN_148ab8e92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ab8faa(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148ab8ef0 FUN_148ab8ef0 body=59 status=ok
// SIG undefined FUN_148ab8ef0(void)

undefined8 FUN_148ab8ef0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab8f36 FUN_148ab8f36 body=37 status=ok
// SIG undefined FUN_148ab8f36(void)

void FUN_148ab8f36(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148ab8faa FUN_148ab8faa body=88 status=ok
// SIG undefined FUN_148ab8faa(void)

undefined8 * FUN_148ab8faa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ab9002(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ab9002 FUN_148ab9002 body=98 status=ok
// SIG undefined FUN_148ab9002(void)

void FUN_148ab9002(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ab90c0 FUN_148ab90c0 body=67 status=ok
// SIG undefined FUN_148ab90c0(void)

undefined1 FUN_148ab90c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_141238a10(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 148ab912c FUN_148ab912c body=59 status=ok
// SIG undefined FUN_148ab912c(void)

undefined8 FUN_148ab912c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab9172 FUN_148ab9172 body=34 status=ok
// SIG undefined FUN_148ab9172(void)

void FUN_148ab9172(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148ab91e2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148ab91e2 FUN_148ab91e2 body=87 status=ok
// SIG undefined FUN_148ab91e2(void)

void FUN_148ab91e2(longlong *param_1)

{
  param_1[2] = (longlong)&PTR_FUN_14a5af930;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = (longlong)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 5)])(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ab927c FUN_148ab927c body=73 status=ok
// SIG undefined FUN_148ab927c(void)

undefined1 FUN_148ab927c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c96fa4(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148ab92ee FUN_148ab92ee body=59 status=ok
// SIG undefined FUN_148ab92ee(void)

undefined8 FUN_148ab92ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab9334 FUN_148ab9334 body=34 status=ok
// SIG undefined FUN_148ab9334(void)

void FUN_148ab9334(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148ab93a4(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148ab93a4 FUN_148ab93a4 body=58 status=ok
// SIG undefined FUN_148ab93a4(void)

void FUN_148ab93a4(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_147ca6f0e(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ab9414 FUN_148ab9414 body=54 status=ok
// SIG undefined FUN_148ab9414(void)

undefined1 FUN_148ab9414(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148ab9472 FUN_148ab9472 body=59 status=ok
// SIG undefined FUN_148ab9472(void)

undefined8 FUN_148ab9472(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab94b8 FUN_148ab94b8 body=37 status=ok
// SIG undefined FUN_148ab94b8(void)

void FUN_148ab94b8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148ab9562 FUN_148ab9562 body=54 status=ok
// SIG undefined FUN_148ab9562(void)

undefined1 FUN_148ab9562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148ab95c0 FUN_148ab95c0 body=59 status=ok
// SIG undefined FUN_148ab95c0(void)

undefined8 FUN_148ab95c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab9606 FUN_148ab9606 body=37 status=ok
// SIG undefined FUN_148ab9606(void)

void FUN_148ab9606(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148ab96da FUN_148ab96da body=67 status=ok
// SIG undefined FUN_148ab96da(void)

undefined1 FUN_148ab96da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 148ab9746 FUN_148ab9746 body=59 status=ok
// SIG undefined FUN_148ab9746(void)

undefined8 FUN_148ab9746(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab978c FUN_148ab978c body=34 status=ok
// SIG undefined FUN_148ab978c(void)

void FUN_148ab978c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148ab97fc(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148ab97fc FUN_148ab97fc body=83 status=ok
// SIG undefined FUN_148ab97fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ab97fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ab98ba FUN_148ab98ba body=73 status=ok
// SIG undefined FUN_148ab98ba(void)

undefined1 FUN_148ab98ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148ab992c FUN_148ab992c body=59 status=ok
// SIG undefined FUN_148ab992c(void)

undefined8 FUN_148ab992c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab9972 FUN_148ab9972 body=34 status=ok
// SIG undefined FUN_148ab9972(void)

void FUN_148ab9972(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148ab99e2(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148ab99e2 FUN_148ab99e2 body=83 status=ok
// SIG undefined FUN_148ab99e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ab99e2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ab9a36 FUN_148ab9a36 body=38 status=ok
// SIG undefined FUN_148ab9a36(void)

undefined8 FUN_148ab9a36(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab9a5c FUN_148ab9a5c body=48 status=ok
// SIG undefined FUN_148ab9a5c(void)

void FUN_148ab9a5c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148ab9a8c FUN_148ab9a8c body=31 status=ok
// SIG undefined FUN_148ab9a8c(void)

undefined8 FUN_148ab9a8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab9ac6 FUN_148ab9ac6 body=101 status=ok
// SIG undefined FUN_148ab9ac6(void)

void FUN_148ab9ac6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4fe470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab9b2c FUN_148ab9b2c body=101 status=ok
// SIG undefined FUN_148ab9b2c(void)

void FUN_148ab9b2c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4fe470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab9b92 FUN_148ab9b92 body=134 status=ok
// SIG undefined FUN_148ab9b92(void)

void FUN_148ab9b92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe470;
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
                    /* WARNING: Could not recover jumptable at 0x000148ab9c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab9c18 FUN_148ab9c18 body=39 status=ok
// SIG undefined FUN_148ab9c18(void)

void FUN_148ab9c18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab9c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148ab9c40 FUN_148ab9c40 body=31 status=ok
// SIG undefined FUN_148ab9c40(void)

undefined8 FUN_148ab9c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab9c7c FUN_148ab9c7c body=93 status=ok
// SIG undefined FUN_148ab9c7c(void)

void FUN_148ab9c7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab9cda FUN_148ab9cda body=126 status=ok
// SIG undefined FUN_148ab9cda(void)

void FUN_148ab9cda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe4e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab9d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab9d58 FUN_148ab9d58 body=21 status=ok
// SIG undefined FUN_148ab9d58(void)

undefined8 FUN_148ab9d58(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab9d6d FUN_148ab9d6d body=148 status=ok
// SIG undefined FUN_148ab9d6d(void)

undefined8 FUN_148ab9d6d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145909f10();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab9e02 FUN_148ab9e02 body=148 status=ok
// SIG undefined FUN_148ab9e02(void)

undefined8 FUN_148ab9e02(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987fdc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab9e98 FUN_148ab9e98 body=29 status=ok
// SIG undefined FUN_148ab9e98(void)

undefined8 FUN_148ab9e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab9ed0 FUN_148ab9ed0 body=29 status=ok
// SIG undefined FUN_148ab9ed0(void)

bool FUN_148ab9ed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab9eee FUN_148ab9eee body=26 status=ok
// SIG undefined FUN_148ab9eee(void)

bool FUN_148ab9eee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab9f08 FUN_148ab9f08 body=24 status=ok
// SIG undefined FUN_148ab9f08(void)

bool FUN_148ab9f08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ab9f20 FUN_148ab9f20 body=93 status=ok
// SIG undefined FUN_148ab9f20(void)

void FUN_148ab9f20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab9f7e FUN_148ab9f7e body=93 status=ok
// SIG undefined FUN_148ab9f7e(void)

void FUN_148ab9f7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab9fdc FUN_148ab9fdc body=126 status=ok
// SIG undefined FUN_148ab9fdc(void)

void FUN_148ab9fdc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aba04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aba05a FUN_148aba05a body=40 status=ok
// SIG undefined FUN_148aba05a(void)

void FUN_148aba05a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148aba07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148aba082 FUN_148aba082 body=152 status=ok
// SIG undefined FUN_148aba082(void)

bool FUN_148aba082(longlong param_1,undefined8 param_2)

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



// FUNCTION 148aba11c FUN_148aba11c body=29 status=ok
// SIG undefined FUN_148aba11c(void)

undefined8 FUN_148aba11c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aba154 FUN_148aba154 body=29 status=ok
// SIG undefined FUN_148aba154(void)

bool FUN_148aba154(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148aba172 FUN_148aba172 body=26 status=ok
// SIG undefined FUN_148aba172(void)

bool FUN_148aba172(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aba18c FUN_148aba18c body=24 status=ok
// SIG undefined FUN_148aba18c(void)

bool FUN_148aba18c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148aba1a4 FUN_148aba1a4 body=93 status=ok
// SIG undefined FUN_148aba1a4(void)

void FUN_148aba1a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aba202 FUN_148aba202 body=93 status=ok
// SIG undefined FUN_148aba202(void)

void FUN_148aba202(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4fe600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aba260 FUN_148aba260 body=126 status=ok
// SIG undefined FUN_148aba260(void)

void FUN_148aba260(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4fe600;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aba2cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aba2de FUN_148aba2de body=58 status=ok
// SIG undefined FUN_148aba2de(void)

void FUN_148aba2de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148aba315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148aba318 FUN_148aba318 body=173 status=ok
// SIG undefined FUN_148aba318(void)

bool FUN_148aba318(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
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



// FUNCTION 148aba3c6 FUN_148aba3c6 body=77 status=ok
// SIG undefined FUN_148aba3c6(void)

undefined8 * FUN_148aba3c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1470b6b52(param_1,iVar1,0);
    FUN_1470b6bb4(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148aba413 FUN_148aba413 body=188 status=ok
// SIG undefined FUN_148aba413(void)

undefined8
FUN_148aba413(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140d76916(param_1,6);
  FUN_1411b30c0(param_1,&DAT_14cb98488,param_2);
  FUN_145853c0e(param_1,&DAT_14cb98498,param_3);
  FUN_1404eef5c(param_1,&DAT_14cb984a8,param_4);
  FUN_1404eef5c(param_1,&DAT_14cb984b8,param_5);
  FUN_145c5d5ce(param_1,&DAT_14cb984c8,param_6);
  FUN_145c5d5ce(param_1,&DAT_14cb984d8,param_7);
  return param_1;
}



// FUNCTION 148aba4d0 FUN_148aba4d0 body=164 status=ok
// SIG undefined FUN_148aba4d0(void)

void FUN_148aba4d0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148aba550;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148aba550:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148aba574 FUN_148aba574 body=29 status=ok
// SIG undefined FUN_148aba574(void)

undefined8 FUN_148aba574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aba5ac FUN_148aba5ac body=29 status=ok
// SIG undefined FUN_148aba5ac(void)

bool FUN_148aba5ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}


