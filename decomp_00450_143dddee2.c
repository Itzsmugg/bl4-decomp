// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143dddee2 FUN_143dddee2 body=207 status=ok
// SIG undefined FUN_143dddee2(void)

void FUN_143dddee2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4169d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)&p_Var1[1].field_0x5 = *(undefined8 *)(param_1 + 0x35);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  p_Var1[1].Type = (short)uVar5;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar6;
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var1[1].ProcessLocksList.Flink = p_Var3;
  if ((p_Var3 != (_LIST_ENTRY *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)&p_Var1[1].ProcessLocksList.Blink = *(undefined1 *)(param_1 + 0x48);
  *(undefined1 *)&p_Var1[1].EntryCount = *(undefined1 *)(param_1 + 0x50);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dddf9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dddfc2 FUN_143dddfc2 body=26 status=ok
// SIG undefined FUN_143dddfc2(void)

undefined8 FUN_143dddfc2(longlong param_1,undefined8 param_2)

{
  FUN_14189baac(param_2,param_1 + 0x18);
  return 1;
}



// FUNCTION 143dddfdc FUN_143dddfdc body=29 status=ok
// SIG undefined FUN_143dddfdc(void)

undefined8 FUN_143dddfdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dde00e FUN_143dde00e body=93 status=ok
// SIG undefined FUN_143dde00e(void)

void FUN_143dde00e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde06c FUN_143dde06c body=93 status=ok
// SIG undefined FUN_143dde06c(void)

void FUN_143dde06c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde0ca FUN_143dde0ca body=126 status=ok
// SIG undefined FUN_143dde0ca(void)

void FUN_143dde0ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dde139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dde148 FUN_143dde148 body=112 status=ok
// SIG undefined FUN_143dde148(void)

void FUN_143dde148(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) &&
       (plVar3 = *(longlong **)(param_1 + 0x18), (*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      uVar1 = *(undefined1 *)((longlong)plVar3 + 0xcc);
      *(undefined1 *)((longlong)plVar3 + 0xcc) = 1;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined1 *)((longlong)plVar3 + 0xcc) = uVar1;
    }
  }
  return;
}



// FUNCTION 143dde1b8 FUN_143dde1b8 body=114 status=ok
// SIG undefined FUN_143dde1b8(void)

undefined8 FUN_143dde1b8(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) {
      plVar3 = *(longlong **)(param_1 + 0x18);
      if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
        uVar1 = *(undefined1 *)((longlong)plVar3 + 0xcc);
        *(undefined1 *)((longlong)plVar3 + 0xcc) = 1;
        (**(code **)(*plVar3 + 0x10))(plVar3);
        *(undefined1 *)((longlong)plVar3 + 0xcc) = uVar1;
      }
    }
  }
  return 1;
}



// FUNCTION 143dde22a FUN_143dde22a body=29 status=ok
// SIG undefined FUN_143dde22a(void)

undefined8 FUN_143dde22a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dde25c FUN_143dde25c body=93 status=ok
// SIG undefined FUN_143dde25c(void)

void FUN_143dde25c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde2ba FUN_143dde2ba body=93 status=ok
// SIG undefined FUN_143dde2ba(void)

void FUN_143dde2ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde318 FUN_143dde318 body=126 status=ok
// SIG undefined FUN_143dde318(void)

void FUN_143dde318(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416ab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dde387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dde396 FUN_143dde396 body=112 status=ok
// SIG undefined FUN_143dde396(void)

void FUN_143dde396(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) &&
       (plVar3 = *(longlong **)(param_1 + 0x18), (*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      uVar1 = *(undefined1 *)((longlong)plVar3 + 0xcc);
      *(undefined1 *)((longlong)plVar3 + 0xcc) = 1;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      *(undefined1 *)((longlong)plVar3 + 0xcc) = uVar1;
    }
  }
  return;
}



// FUNCTION 143dde406 FUN_143dde406 body=114 status=ok
// SIG undefined FUN_143dde406(void)

undefined8 FUN_143dde406(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) {
      plVar3 = *(longlong **)(param_1 + 0x18);
      if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
        uVar1 = *(undefined1 *)((longlong)plVar3 + 0xcc);
        *(undefined1 *)((longlong)plVar3 + 0xcc) = 1;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        *(undefined1 *)((longlong)plVar3 + 0xcc) = uVar1;
      }
    }
  }
  return 1;
}



// FUNCTION 143dde478 FUN_143dde478 body=29 status=ok
// SIG undefined FUN_143dde478(void)

undefined8 FUN_143dde478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dde4aa FUN_143dde4aa body=93 status=ok
// SIG undefined FUN_143dde4aa(void)

void FUN_143dde4aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde508 FUN_143dde508 body=93 status=ok
// SIG undefined FUN_143dde508(void)

void FUN_143dde508(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde566 FUN_143dde566 body=126 status=ok
// SIG undefined FUN_143dde566(void)

void FUN_143dde566(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dde5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dde5e4 FUN_143dde5e4 body=112 status=ok
// SIG undefined FUN_143dde5e4(void)

void FUN_143dde5e4(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) &&
       (plVar3 = *(longlong **)(param_1 + 0x18), (*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      uVar1 = *(undefined1 *)((longlong)plVar3 + 0xcc);
      *(undefined1 *)((longlong)plVar3 + 0xcc) = 1;
      (**(code **)(*plVar3 + 0x20))(plVar3);
      *(undefined1 *)((longlong)plVar3 + 0xcc) = uVar1;
    }
  }
  return;
}



// FUNCTION 143dde654 FUN_143dde654 body=114 status=ok
// SIG undefined FUN_143dde654(void)

undefined8 FUN_143dde654(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) {
      plVar3 = *(longlong **)(param_1 + 0x18);
      if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
        uVar1 = *(undefined1 *)((longlong)plVar3 + 0xcc);
        *(undefined1 *)((longlong)plVar3 + 0xcc) = 1;
        (**(code **)(*plVar3 + 0x20))(plVar3);
        *(undefined1 *)((longlong)plVar3 + 0xcc) = uVar1;
      }
    }
  }
  return 1;
}



// FUNCTION 143dde6c6 FUN_143dde6c6 body=29 status=ok
// SIG undefined FUN_143dde6c6(void)

undefined8 FUN_143dde6c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dde6f8 FUN_143dde6f8 body=93 status=ok
// SIG undefined FUN_143dde6f8(void)

void FUN_143dde6f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde756 FUN_143dde756 body=93 status=ok
// SIG undefined FUN_143dde756(void)

void FUN_143dde756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde7b4 FUN_143dde7b4 body=126 status=ok
// SIG undefined FUN_143dde7b4(void)

void FUN_143dde7b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416b90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dde823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dde832 FUN_143dde832 body=111 status=ok
// SIG undefined FUN_143dde832(void)

void FUN_143dde832(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) &&
       (lVar3 = *(longlong *)(param_1 + 0x18), (*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      uVar1 = *(undefined1 *)(lVar3 + 0xcc);
      *(undefined1 *)(lVar3 + 0xcc) = 1;
      FUN_140844034(lVar3);
      *(undefined1 *)(lVar3 + 0xcc) = uVar1;
    }
  }
  return;
}



// FUNCTION 143dde8a2 FUN_143dde8a2 body=113 status=ok
// SIG undefined FUN_143dde8a2(void)

undefined8 FUN_143dde8a2(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x24))) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
        uVar1 = *(undefined1 *)(lVar3 + 0xcc);
        *(undefined1 *)(lVar3 + 0xcc) = 1;
        FUN_140844034(lVar3);
        *(undefined1 *)(lVar3 + 0xcc) = uVar1;
      }
    }
  }
  return 1;
}



// FUNCTION 143dde914 FUN_143dde914 body=29 status=ok
// SIG undefined FUN_143dde914(void)

undefined8 FUN_143dde914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dde946 FUN_143dde946 body=93 status=ok
// SIG undefined FUN_143dde946(void)

void FUN_143dde946(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dde9a4 FUN_143dde9a4 body=93 status=ok
// SIG undefined FUN_143dde9a4(void)

void FUN_143dde9a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddea02 FUN_143ddea02 body=126 status=ok
// SIG undefined FUN_143ddea02(void)

void FUN_143ddea02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b416c00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddea71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddead0 FUN_143ddead0 body=93 status=ok
// SIG undefined FUN_143ddead0(void)

undefined8 FUN_143ddead0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        FUN_1488e7892(*(undefined8 *)(param_1 + 0x18));
      }
    }
  }
  return 1;
}



// FUNCTION 143ddeb2e FUN_143ddeb2e body=29 status=ok
// SIG undefined FUN_143ddeb2e(void)

undefined8 FUN_143ddeb2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddeb60 FUN_143ddeb60 body=93 status=ok
// SIG undefined FUN_143ddeb60(void)

void FUN_143ddeb60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddebbe FUN_143ddebbe body=93 status=ok
// SIG undefined FUN_143ddebbe(void)

void FUN_143ddebbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddec1c FUN_143ddec1c body=126 status=ok
// SIG undefined FUN_143ddec1c(void)

void FUN_143ddec1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416c70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddec8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddecea FUN_143ddecea body=88 status=ok
// SIG undefined FUN_143ddecea(void)

undefined8 FUN_143ddecea(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
      }
    }
  }
  return 1;
}



// FUNCTION 143dded42 FUN_143dded42 body=29 status=ok
// SIG undefined FUN_143dded42(void)

undefined8 FUN_143dded42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dded74 FUN_143dded74 body=93 status=ok
// SIG undefined FUN_143dded74(void)

void FUN_143dded74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddedd2 FUN_143ddedd2 body=93 status=ok
// SIG undefined FUN_143ddedd2(void)

void FUN_143ddedd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddee30 FUN_143ddee30 body=126 status=ok
// SIG undefined FUN_143ddee30(void)

void FUN_143ddee30(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416ce0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddee9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddeefe FUN_143ddeefe body=88 status=ok
// SIG undefined FUN_143ddeefe(void)

undefined8 FUN_143ddeefe(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
      }
    }
  }
  return 1;
}



// FUNCTION 143ddef56 FUN_143ddef56 body=29 status=ok
// SIG undefined FUN_143ddef56(void)

undefined8 FUN_143ddef56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddef88 FUN_143ddef88 body=93 status=ok
// SIG undefined FUN_143ddef88(void)

void FUN_143ddef88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddefe6 FUN_143ddefe6 body=93 status=ok
// SIG undefined FUN_143ddefe6(void)

void FUN_143ddefe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf044 FUN_143ddf044 body=126 status=ok
// SIG undefined FUN_143ddf044(void)

void FUN_143ddf044(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416d50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddf0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddf10e FUN_143ddf10e body=87 status=ok
// SIG undefined FUN_143ddf10e(void)

undefined8 FUN_143ddf10e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        FUN_140844034(*(undefined8 *)(param_1 + 0x18));
      }
    }
  }
  return 1;
}



// FUNCTION 143ddf166 FUN_143ddf166 body=29 status=ok
// SIG undefined FUN_143ddf166(void)

undefined8 FUN_143ddf166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddf198 FUN_143ddf198 body=93 status=ok
// SIG undefined FUN_143ddf198(void)

void FUN_143ddf198(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf1f6 FUN_143ddf1f6 body=93 status=ok
// SIG undefined FUN_143ddf1f6(void)

void FUN_143ddf1f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf254 FUN_143ddf254 body=126 status=ok
// SIG undefined FUN_143ddf254(void)

void FUN_143ddf254(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416dc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddf2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddf37e FUN_143ddf37e body=29 status=ok
// SIG undefined FUN_143ddf37e(void)

undefined8 FUN_143ddf37e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddf3b0 FUN_143ddf3b0 body=93 status=ok
// SIG undefined FUN_143ddf3b0(void)

void FUN_143ddf3b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf40e FUN_143ddf40e body=93 status=ok
// SIG undefined FUN_143ddf40e(void)

void FUN_143ddf40e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf46c FUN_143ddf46c body=126 status=ok
// SIG undefined FUN_143ddf46c(void)

void FUN_143ddf46c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddf4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddf4f4 FUN_143ddf4f4 body=20 status=ok
// SIG undefined FUN_143ddf4f4(void)

undefined1 FUN_143ddf4f4(longlong param_1)

{
  FUN_143ddf508(param_1 + 0x18);
  return 1;
}



// FUNCTION 143ddf508 FUN_143ddf508 body=104 status=ok
// SIG undefined FUN_143ddf508(void)

void FUN_143ddf508(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)((longlong)param_1 + 0xc))) &&
       (uVar2 = *param_1, (*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      FUN_14084408c(uVar2);
      FUN_143dd7634(uVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 143ddf570 FUN_143ddf570 body=29 status=ok
// SIG undefined FUN_143ddf570(void)

undefined8 FUN_143ddf570(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddf5a2 FUN_143ddf5a2 body=93 status=ok
// SIG undefined FUN_143ddf5a2(void)

void FUN_143ddf5a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf600 FUN_143ddf600 body=93 status=ok
// SIG undefined FUN_143ddf600(void)

void FUN_143ddf600(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf65e FUN_143ddf65e body=126 status=ok
// SIG undefined FUN_143ddf65e(void)

void FUN_143ddf65e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b416ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddf6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddf72c FUN_143ddf72c body=91 status=ok
// SIG undefined FUN_143ddf72c(void)

undefined8 FUN_143ddf72c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        FUN_143dd7634(*(undefined8 *)(param_1 + 0x18));
      }
    }
  }
  return 1;
}



// FUNCTION 143ddf788 FUN_143ddf788 body=29 status=ok
// SIG undefined FUN_143ddf788(void)

undefined8 FUN_143ddf788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddf7ba FUN_143ddf7ba body=93 status=ok
// SIG undefined FUN_143ddf7ba(void)

void FUN_143ddf7ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf818 FUN_143ddf818 body=93 status=ok
// SIG undefined FUN_143ddf818(void)

void FUN_143ddf818(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddf876 FUN_143ddf876 body=126 status=ok
// SIG undefined FUN_143ddf876(void)

void FUN_143ddf876(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddf8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddf9a0 FUN_143ddf9a0 body=29 status=ok
// SIG undefined FUN_143ddf9a0(void)

undefined8 FUN_143ddf9a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddf9d2 FUN_143ddf9d2 body=93 status=ok
// SIG undefined FUN_143ddf9d2(void)

void FUN_143ddf9d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddfa30 FUN_143ddfa30 body=93 status=ok
// SIG undefined FUN_143ddfa30(void)

void FUN_143ddfa30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b416f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ddfa8e FUN_143ddfa8e body=126 status=ok
// SIG undefined FUN_143ddfa8e(void)

void FUN_143ddfa8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b416f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddfafd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ddfb58 FUN_143ddfb58 body=89 status=ok
// SIG undefined FUN_143ddfb58(void)

undefined8 FUN_143ddfb58(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) {
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        FUN_146556040(*(undefined8 *)(param_1 + 0x18));
      }
    }
  }
  return 1;
}



// FUNCTION 143ddfc50 FUN_143ddfc50 body=510 status=ok
// SIG undefined FUN_143ddfc50(void)

void FUN_143ddfc50(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  size_t sVar5;
  longlong lVar6;
  wchar_t *_Str;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  wchar_t *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  int local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  FUN_14009b010(&local_d8,1,0);
  FUN_140b12754(param_2 + 0x38,&local_e8);
  _Str = local_e8;
  if (local_e0 == 0) {
    _Str = L"";
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    FUN_1449b853c(local_c0,_Str,sVar5 & 0xffffffff,1);
  }
  if ((local_d8 != 0) && ((*(byte *)(local_d8 + 1) & 2) == 0)) {
    FUN_140126aca(local_d8,local_38);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (iVar3 = *(int *)(param_2 + 0x14), iVar3 != 0)) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    lVar6 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar6 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar3) {
      lVar6 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar3 != 1) && (2 < iVar3)) {
      local_e0 = *(undefined4 *)(lVar6 + 0x20);
      local_f8 = *(wchar_t **)(lVar6 + 0x18);
      goto LAB_143ddfd92;
    }
  }
  local_e0 = DAT_14c948620;
  local_f8 = DAT_14c948618;
LAB_143ddfd92:
  plVar4 = (longlong *)*param_1;
  local_f0 = local_e0;
  local_e8 = local_f8;
  FUN_1448075d0(local_c0);
  if (*plVar4 != 0) {
    local_108 = 0;
    FUN_14014191c(*plVar4,local_c0,&local_d8,0);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ddfe7a FUN_143ddfe7a body=29 status=ok
// SIG undefined FUN_143ddfe7a(void)

undefined8 FUN_143ddfe7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddfe98 FUN_143ddfe98 body=942 status=ok
// SIG undefined FUN_143ddfe98(void)

void FUN_143ddfe98(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wchar_t *_Str;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  uint local_108;
  undefined4 uStack_104;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_14009b010(&local_e8,3,0);
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,1,0);
  FUN_140b12754(param_2 + 0x38,&local_108);
  if (local_100 == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)CONCAT44(uStack_104,local_108);
  }
  local_58 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar7 = wcslen(_Str);
    FUN_1449b853c(local_d8,_Str,sVar7 & 0xffffffff,1);
  }
  if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
    FUN_140126aca(local_f8,local_50);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_104,local_108) != 0) {
    FUN_1400020a8();
  }
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar4 = *(int *)(param_2 + 0x14), iVar4 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_143de0220:
    local_110 = DAT_14c948620;
    local_118 = DAT_14c948618;
  }
  else {
    lVar8 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar8 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar4) {
      lVar8 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar4 == 1) || (iVar4 < 4)) goto LAB_143de0220;
    local_110 = *(undefined4 *)(lVar8 + 0x2c);
    local_118 = *(undefined8 *)(lVar8 + 0x24);
  }
  local_108 = local_108 & 0xffffff00;
  uStack_104 = 0;
  local_100 = 0;
  local_fc = 0;
  FUN_1488e952c(*(undefined8 *)(*(longlong *)param_1[1] + 0x10),&local_128,&local_118);
  if (local_128 == 0) goto LAB_143de0179;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)param_1[1] + 8) + 0x3c);
  if (iVar4 == 0) {
LAB_143de0236:
    uVar9 = 0;
  }
  else {
    uVar5 = *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 8) + 0x38);
    uVar9 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != iVar4 || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_143de0236;
      uVar9 = *puVar10;
    }
  }
  lVar8 = FUN_14040226a(uVar9,0);
  if (lVar8 != 0) {
    FUN_14039fc7b(local_128 + 0x18,&local_108,lVar8,0);
  }
  local_d8[0] = 0;
  local_d4 = 0;
  local_cc = 0;
  FUN_144976b9c(local_d8,DAT_14cb858a8);
  cVar6 = FUN_1403218c0(&local_108,local_d8);
  if (cVar6 == '\0') {
    local_138 = local_118;
    local_130 = local_110;
    FUN_1448075d0(local_d8);
    if (local_e8 != 0) {
      local_148 = 0;
      FUN_14014191c(local_e8,local_d8,&local_f8,0);
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)*param_1 != 0) {
      local_148 = 0;
      FUN_140141db6(*(longlong *)*param_1,&local_e8,0,0);
    }
  }
LAB_143de0179:
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
      }
    }
  }
  plVar1 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de0272 FUN_143de0272 body=29 status=ok
// SIG undefined FUN_143de0272(void)

undefined8 FUN_143de0272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de0290 FUN_143de0290 body=624 status=ok
// SIG undefined FUN_143de0290(void)

void FUN_143de0290(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  size_t sVar5;
  longlong lVar6;
  wchar_t *_Str;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  int local_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [24];
  longlong local_c0;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_14009b010(&local_e8,3,0);
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,1,0);
  FUN_140b12754(param_2 + 0x38,&local_108);
  _Str = local_108;
  if (local_100 == 0) {
    _Str = L"";
  }
  local_58 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    FUN_1449b853c(local_d8,_Str,sVar5 & 0xffffffff,1);
  }
  if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
    FUN_140126aca(local_f8,local_50);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (iVar3 = *(int *)(param_2 + 0x14), iVar3 != 0)) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    lVar6 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar6 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar3) {
      lVar6 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar3 != 1) && (3 < iVar3)) {
      local_100 = *(undefined4 *)(lVar6 + 0x2c);
      local_118 = *(wchar_t **)(lVar6 + 0x24);
      goto LAB_143de03ef;
    }
  }
  local_100 = DAT_14c948620;
  local_118 = DAT_14c948618;
LAB_143de03ef:
  local_110 = local_100;
  local_108 = local_118;
  FUN_1448075d0(local_d8);
  if (local_e8 != 0) {
    local_128 = 0;
    FUN_14014191c(local_e8,local_d8,&local_f8,0);
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)*param_1 != 0) {
    local_128 = 0;
    FUN_140141db6(*(longlong *)*param_1,&local_e8,0,0);
  }
  plVar4 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de052c FUN_143de052c body=29 status=ok
// SIG undefined FUN_143de052c(void)

undefined8 FUN_143de052c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de054a FUN_143de054a body=83 status=ok
// SIG undefined FUN_143de054a(void)

undefined8 * FUN_143de054a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b417130;
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



// FUNCTION 143de071c FUN_143de071c body=140 status=ok
// SIG undefined FUN_143de071c(void)

void FUN_143de071c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143de07a8 FUN_143de07a8 body=140 status=ok
// SIG undefined FUN_143de07a8(void)

void FUN_143de07a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143de0834 FUN_143de0834 body=178 status=ok
// SIG undefined FUN_143de0834(void)

void FUN_143de0834(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
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
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de08d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143de08f0 FUN_143de08f0 body=269 status=ok
// SIG undefined FUN_143de08f0(void)

undefined8 FUN_143de08f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143de09f7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143de09f7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143de09f7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143de09ab;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143de09fe(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143de09ab;
    }
  }
  uVar6 = 0;
LAB_143de09ab:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de09fe FUN_143de09fe body=610 status=ok
// SIG undefined FUN_143de09fe(void)

void FUN_143de09fe(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  int local_2c;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  puVar6 = &DAT_14cb858a0;
  if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
    plVar1 = param_1 + 3;
    plVar10 = *(longlong **)(lVar4 + 0x40);
    lVar8 = (longlong)*(int *)(lVar4 + 0x48) << 3;
    do {
      lVar5 = *plVar10;
      if ((*(int *)(lVar5 + 0x18) == (int)param_1[3]) && (*(int *)(lVar5 + 0x20) == (int)param_1[4])
         ) {
        if (lVar5 != 0 && plVar10 != (longlong *)0x0) {
          cVar2 = *(char *)(lVar5 + 0x30);
          if (cVar2 == '\x03') {
            bVar12 = *(longlong *)(lVar5 + 0x34) == 0;
LAB_143de0aa2:
            uVar9 = (uint)!bVar12;
          }
          else if (cVar2 == '\x02') {
            uVar9 = *(uint *)(lVar5 + 0x3c);
          }
          else {
            uVar9 = 0;
            if (cVar2 == '\x01') {
              bVar12 = *(int *)(lVar5 + 0x3c) == 0;
              goto LAB_143de0aa2;
            }
          }
          lVar8 = (longlong)*(int *)(param_1[1] + 0x58);
          if (lVar8 != 0) {
            puVar11 = *(uint **)(param_1[1] + 0x50);
            lVar8 = lVar8 * 0x14;
            goto LAB_143de0ac5;
          }
        }
        break;
      }
      plVar10 = plVar10 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  goto LAB_143de0b53;
  while( true ) {
    puVar11 = puVar11 + 5;
    lVar8 = lVar8 + -0x14;
    if (lVar8 == 0) break;
LAB_143de0ac5:
    if (*puVar11 == uVar9) {
      if (puVar11 == (uint *)0x0) break;
      cVar3 = (char)puVar11[1];
      if (cVar3 == '\x03') {
        local_30 = puVar11[4];
        local_38 = (undefined4)*(undefined8 *)(puVar11 + 2);
        uStack_34 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 2) >> 0x20);
        local_28 = *plVar1;
        local_20 = (undefined4)param_1[4];
        FUN_143dd7816(lVar4,&local_28,&local_38,0xbf800000);
      }
      else if (cVar3 == '\x01') {
        if (cVar2 == '\x03') {
          bVar12 = *(longlong *)(lVar5 + 0x34) == 0;
LAB_143de0c24:
          uVar9 = (uint)!bVar12;
        }
        else if (cVar2 == '\x02') {
          uVar9 = *(uint *)(lVar5 + 0x3c);
        }
        else {
          uVar9 = 0;
          if (cVar2 == '\x01') {
            bVar12 = *(int *)(lVar5 + 0x3c) == 0;
            goto LAB_143de0c24;
          }
        }
        local_2c = uVar9 + 1;
        local_38 = CONCAT31(local_38._1_3_,2);
        uStack_34 = 0;
        local_30 = 0;
        local_28 = *plVar1;
        local_20 = (undefined4)param_1[4];
        FUN_1488e86f0(lVar4);
      }
      else {
        if (cVar3 != '\x02') break;
        local_30 = *(uint *)(param_1 + 4);
        local_38 = (undefined4)*plVar1;
        uStack_34 = (undefined4)((ulonglong)*plVar1 >> 0x20);
        FUN_1488e8b04(lVar4,local_48);
      }
      puVar6 = &DAT_14cb858a8;
      break;
    }
  }
LAB_143de0b53:
  local_48[0] = 0;
  local_44 = 0;
  local_3c = 0;
  FUN_144976b9c(local_48,*puVar6);
  if (*(int *)(lVar4 + 0x3c) != 0) {
    uVar9 = *(uint *)(lVar4 + 0x38);
    uVar7 = 0;
    if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_143de0bba;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar9 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(lVar4 + 0x3c) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar7 = *puVar6;
      goto LAB_143de0bba;
    }
  }
  uVar7 = 0;
LAB_143de0bba:
  lVar4 = param_1[1];
  lVar8 = FUN_14040226a(uVar7,0);
  if (lVar8 != 0) {
    FUN_140bc53f1(lVar4 + 0x18,local_48,lVar8,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de0c62 FUN_143de0c62 body=29 status=ok
// SIG undefined FUN_143de0c62(void)

undefined8 FUN_143de0c62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de0dfe FUN_143de0dfe body=109 status=ok
// SIG undefined FUN_143de0dfe(void)

void FUN_143de0dfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4171a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143de0e6c FUN_143de0e6c body=109 status=ok
// SIG undefined FUN_143de0e6c(void)

void FUN_143de0e6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4171a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143de0eda FUN_143de0eda body=142 status=ok
// SIG undefined FUN_143de0eda(void)

void FUN_143de0eda(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4171a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de0f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143de0f72 FUN_143de0f72 body=278 status=ok
// SIG undefined FUN_143de0f72(void)

undefined8 FUN_143de0f72(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143de1082;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143de1082;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143de1082:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143de1035;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143de108a(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_143de1035;
    }
  }
  uVar6 = 0;
LAB_143de1035:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de108a FUN_143de108a body=1723 status=ok
// SIG undefined FUN_143de108a(void)

void FUN_143de108a(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)*param_1;
  if ((longlong)(int)plVar5[9] != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x14);
    plVar16 = (longlong *)plVar5[8];
    lVar10 = (longlong)(int)plVar5[9] << 3;
    do {
      lVar6 = *plVar16;
      if ((*(int *)(lVar6 + 0x18) == *(int *)((longlong)param_1 + 0x14)) &&
         (*(int *)(lVar6 + 0x20) == *(int *)((longlong)param_1 + 0x1c))) {
        if (lVar6 != 0 && plVar16 != (longlong *)0x0) {
          plVar2 = (longlong *)(lVar6 + 0x90);
          plVar16 = param_1 + 1;
          uVar8 = *(uint *)(param_1 + 1);
          uVar13 = *(uint *)(param_1 + 2);
          if (uVar13 != 0) {
            uVar8 = uVar13 >> 0xd ^ uVar8 - uVar13;
            uVar14 = uVar8 << 8 ^ (-0x61c88647 - uVar13) - uVar8;
            uVar19 = uVar14 >> 0xd ^ (uVar13 - uVar8) - uVar14;
            uVar13 = uVar19 >> 0xc ^ (uVar8 - uVar14) - uVar19;
            uVar8 = uVar13 << 0x10 ^ (uVar14 - uVar19) - uVar13;
            uVar14 = uVar8 >> 5 ^ (uVar19 - uVar13) - uVar8;
            uVar13 = uVar14 >> 3 ^ (uVar13 - uVar8) - uVar14;
            uVar8 = uVar13 << 10 ^ (uVar8 - uVar14) - uVar13;
            uVar8 = uVar8 >> 0xf ^ uVar14 - (uVar13 + uVar8);
          }
          iVar9 = FUN_1488f0e38(plVar2,uVar8,plVar16);
          if (iVar9 != -1) {
            FUN_1403a0728(param_2 + 0x38,&local_88);
            uVar7 = FUN_1405f6250(local_88);
            uVar8 = *(uint *)(param_1 + 1);
            uVar13 = *(uint *)(param_1 + 2);
            if (uVar13 != 0) {
              uVar8 = uVar13 >> 0xd ^ uVar8 - uVar13;
              uVar14 = uVar8 << 8 ^ (-0x61c88647 - uVar13) - uVar8;
              uVar19 = uVar14 >> 0xd ^ (uVar13 - uVar8) - uVar14;
              uVar13 = uVar19 >> 0xc ^ (uVar8 - uVar14) - uVar19;
              uVar8 = uVar13 << 0x10 ^ (uVar14 - uVar19) - uVar13;
              uVar14 = uVar8 >> 5 ^ (uVar19 - uVar13) - uVar8;
              uVar13 = uVar14 >> 3 ^ (uVar13 - uVar8) - uVar14;
              uVar8 = uVar13 << 10 ^ (uVar8 - uVar14) - uVar13;
              uVar8 = uVar8 >> 0xf ^ uVar14 - (uVar13 + uVar8);
            }
            iVar9 = FUN_1488f0e38(plVar2,uVar8,plVar16);
            if (iVar9 == -1) {
              lVar10 = 0;
            }
            else {
              lVar10 = (longlong)iVar9 * 0x60 + *plVar2;
            }
            *(undefined1 *)(lVar10 + 0x18) = uVar7;
            local_98 = *plVar16;
            local_90 = (undefined4)param_1[2];
            local_a8 = *puVar1;
            local_a0 = *(undefined4 *)((longlong)param_1 + 0x1c);
            FUN_1488416a9(local_80,&local_a8,&local_98,2);
            if (*(int *)((longlong)plVar5 + 0x3c) == 0) {
LAB_143de152a:
              uVar11 = 0;
            }
            else {
              uVar8 = *(uint *)(plVar5 + 7);
              uVar11 = 0;
              if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                puVar17 = (undefined8 *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                if ((puVar17 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar17 + 2) != *(int *)((longlong)plVar5 + 0x3c) ||
                    ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_143de152a;
                uVar11 = *puVar17;
              }
            }
            local_d8 = plVar2;
            FUN_1403a0728(param_2 + 0x38,&local_c0);
            local_b8 = local_b8 & 0xffffff00;
            uStack_b4 = 0;
            uStack_b0 = 0;
            local_ac = 0;
            FUN_144976b9c(&local_b8,local_c0);
            lVar10 = FUN_14040226a(uVar11,0);
            if (lVar10 != 0) {
              FUN_140bc53f1(local_80,&local_b8,lVar10,0);
            }
            plVar2 = local_d8;
            uVar8 = *(uint *)(param_1 + 1);
            uVar13 = *(uint *)(param_1 + 2);
            if (uVar13 != 0) {
              uVar8 = uVar13 >> 0xd ^ uVar8 - uVar13;
              uVar14 = uVar8 << 8 ^ (-0x61c88647 - uVar13) - uVar8;
              uVar19 = uVar14 >> 0xd ^ (uVar13 - uVar8) - uVar14;
              uVar13 = uVar19 >> 0xc ^ (uVar8 - uVar14) - uVar19;
              uVar8 = uVar13 << 0x10 ^ (uVar14 - uVar19) - uVar13;
              uVar14 = uVar8 >> 5 ^ (uVar19 - uVar13) - uVar8;
              uVar13 = uVar14 >> 3 ^ (uVar13 - uVar8) - uVar14;
              uVar8 = uVar13 << 10 ^ (uVar8 - uVar14) - uVar13;
              uVar8 = uVar8 >> 0xf ^ uVar14 - (uVar13 + uVar8);
            }
            iVar9 = FUN_1488f0e38(local_d8,uVar8,plVar16);
            if (iVar9 == -1) {
              lVar10 = 0;
            }
            else {
              lVar10 = (longlong)iVar9 * 0x60 + *plVar2;
            }
            if (*(char *)(lVar10 + 0x18) != '\x06') goto LAB_143de1438;
            uVar11 = (**(code **)(*plVar5 + 0x180))(plVar5);
            plVar12 = (longlong *)FUN_1406f625c(uVar11);
            (**(code **)(*plVar12 + 0x2b0))(plVar12);
            plVar12 = (longlong *)FUN_14039ffc6();
            if (plVar12 != (longlong *)0x0) {
              uVar8 = *(uint *)(param_1 + 1);
              uVar13 = *(uint *)(param_1 + 2);
              uVar14 = uVar8;
              if (uVar13 != 0) {
                uVar14 = uVar13 >> 0xd ^ uVar8 - uVar13;
                uVar19 = uVar14 << 8 ^ (-0x61c88647 - uVar13) - uVar14;
                uVar15 = uVar19 >> 0xd ^ (uVar13 - uVar14) - uVar19;
                uVar20 = uVar15 >> 0xc ^ (uVar14 - uVar19) - uVar15;
                uVar14 = uVar20 << 0x10 ^ (uVar19 - uVar15) - uVar20;
                uVar19 = uVar14 >> 5 ^ (uVar15 - uVar20) - uVar14;
                uVar15 = uVar19 >> 3 ^ (uVar20 - uVar14) - uVar19;
                uVar14 = uVar15 << 10 ^ (uVar14 - uVar19) - uVar15;
                uVar14 = uVar14 >> 0xf ^ uVar19 - (uVar15 + uVar14);
              }
              iVar9 = FUN_1488f0e38(plVar2,uVar14,plVar16);
              if (iVar9 == -1) {
                lVar10 = 0;
              }
              else {
                lVar10 = (longlong)iVar9 * 0x60 + *plVar2;
              }
              if (uVar13 != 0) {
                uVar8 = uVar13 >> 0xd ^ uVar8 - uVar13;
                uVar14 = uVar8 << 8 ^ (-0x61c88647 - uVar13) - uVar8;
                uVar13 = uVar14 >> 0xd ^ (uVar13 - uVar8) - uVar14;
                uVar19 = uVar13 >> 0xc ^ (uVar8 - uVar14) - uVar13;
                uVar8 = uVar19 << 0x10 ^ (uVar14 - uVar13) - uVar19;
                uVar13 = uVar8 >> 5 ^ (uVar13 - uVar19) - uVar8;
                uVar14 = uVar13 >> 3 ^ (uVar19 - uVar8) - uVar13;
                uVar8 = uVar14 << 10 ^ (uVar8 - uVar13) - uVar14;
                uVar8 = uVar8 >> 0xf ^ uVar13 - (uVar14 + uVar8);
              }
              uVar11 = *(undefined8 *)(lVar10 + 0x10);
              iVar9 = FUN_1488f0e38(plVar2,uVar8,plVar16);
              if (iVar9 == -1) {
                lVar10 = 0;
              }
              else {
                lVar10 = (longlong)iVar9 * 0x60 + *plVar2;
              }
              (**(code **)(*plVar12 + 0x28))(plVar12,lVar10 + 0x20,uVar11);
            }
            cVar3 = *(char *)(lVar6 + 0x30);
            if (cVar3 == '\x03') {
              bVar21 = *(longlong *)(lVar6 + 0x34) == 0;
LAB_143de162b:
              uVar8 = (uint)!bVar21;
            }
            else if (cVar3 == '\x02') {
              uVar8 = *(uint *)(lVar6 + 0x3c);
            }
            else {
              uVar8 = 0;
              if (cVar3 == '\x01') {
                bVar21 = *(int *)(lVar6 + 0x3c) == 0;
                goto LAB_143de162b;
              }
            }
            lVar10 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x10) + 0x88);
            if (lVar10 == 0) goto LAB_143de1667;
            puVar18 = *(uint **)(*(longlong *)(lVar6 + 0x10) + 0x80);
            lVar10 = lVar10 * 0x14;
            goto LAB_143de1652;
          }
        }
        break;
      }
      plVar16 = plVar16 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  goto LAB_143de10fe;
  while( true ) {
    puVar18 = puVar18 + 5;
    lVar10 = lVar10 + -0x14;
    if (lVar10 == 0) break;
LAB_143de1652:
    if (*puVar18 == uVar8) {
      if (puVar18 != (uint *)0x0) {
        cVar4 = (char)puVar18[1];
        if (cVar4 == '\x01') {
          if (cVar3 == '\x03') {
            bVar21 = *(longlong *)(lVar6 + 0x34) == 0;
LAB_143de1704:
            uVar8 = (uint)!bVar21;
          }
          else if (cVar3 == '\x02') {
            uVar8 = *(uint *)(lVar6 + 0x3c);
          }
          else {
            if (cVar3 == '\x01') {
              bVar21 = *(int *)(lVar6 + 0x3c) == 0;
              goto LAB_143de1704;
            }
            uVar8 = 0;
          }
          local_ac = uVar8 + 1;
          local_b8 = CONCAT31(local_b8._1_3_,2);
          uStack_b4 = 0;
          uStack_b0 = 0;
          local_d0 = *puVar1;
          local_c8 = *(undefined4 *)((longlong)param_1 + 0x1c);
          FUN_1488e86f0(plVar5);
        }
        else if (cVar4 == '\x03') {
          uStack_b0 = puVar18[4];
          local_b8 = (uint)*(undefined8 *)(puVar18 + 2);
          uStack_b4 = (undefined4)((ulonglong)*(undefined8 *)(puVar18 + 2) >> 0x20);
          local_d0 = *puVar1;
          local_c8 = *(undefined4 *)((longlong)param_1 + 0x1c);
          FUN_143dd7816(plVar5,&local_d0,&local_b8,0xbf800000);
        }
        else if (cVar4 == '\x02') {
          uStack_b0 = *(uint *)((longlong)param_1 + 0x1c);
          local_b8 = (uint)*puVar1;
          uStack_b4 = (undefined4)((ulonglong)*puVar1 >> 0x20);
          FUN_1488e8b04(plVar5,&local_d0);
        }
      }
      break;
    }
  }
LAB_143de1667:
  FUN_1488f186a(plVar2,plVar16);
LAB_143de1438:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143de10fe:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de174c FUN_143de174c body=29 status=ok
// SIG undefined FUN_143de174c(void)

undefined8 FUN_143de174c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de18e8 FUN_143de18e8 body=93 status=ok
// SIG undefined FUN_143de18e8(void)

void FUN_143de18e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143de1946 FUN_143de1946 body=93 status=ok
// SIG undefined FUN_143de1946(void)

void FUN_143de1946(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143de19a4 FUN_143de19a4 body=126 status=ok
// SIG undefined FUN_143de19a4(void)

void FUN_143de19a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417280;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de1a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143de1a22 FUN_143de1a22 body=113 status=ok
// SIG undefined FUN_143de1a22(void)

void FUN_143de1a22(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  FUN_141881e36(local_30,L"Finished");
  local_40 = *(undefined8 *)(lVar1 + 0x20);
  local_38 = *(undefined4 *)(lVar1 + 0x28);
  FUN_143dd9b42(uVar2,&local_40,lVar1 + 0x2c,local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de1a94 FUN_143de1a94 body=323 status=ok
// SIG undefined FUN_143de1a94(void)

ulonglong FUN_143de1a94(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143de1bd1;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143de1bd1;
    }
    FUN_140192332(param_1 + 0x18,local_38,0);
  }
  else {
LAB_143de1bd1:
    local_38[0] = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143de1b83;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(lVar6 + 0x18);
      FUN_141881e36(local_38,L"Finished");
      local_48 = *(undefined8 *)(lVar6 + 0x20);
      local_40 = *(undefined4 *)(lVar6 + 0x28);
      FUN_143dd9b42(uVar3,&local_48,lVar6 + 0x2c,local_38);
      uVar7 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
      goto LAB_143de1b83;
    }
  }
  uVar7 = 0;
LAB_143de1b83:
  if ((local_38[0] != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de1bd8 FUN_143de1bd8 body=111 status=ok
// SIG undefined FUN_143de1bd8(void)

undefined8 * FUN_143de1bd8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4172f0;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143de1c29;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143de1c29:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de1dc6 FUN_143de1dc6 body=137 status=ok
// SIG undefined FUN_143de1dc6(void)

void FUN_143de1dc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4172f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_1488f286a(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143de1e50 FUN_143de1e50 body=137 status=ok
// SIG undefined FUN_143de1e50(void)

void FUN_143de1e50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4172f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_1488f286a(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143de1eda FUN_143de1eda body=171 status=ok
// SIG undefined FUN_143de1eda(void)

void FUN_143de1eda(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4172f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_1488f286a(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de1f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143de1f86 FUN_143de1f86 body=111 status=ok
// SIG undefined FUN_143de1f86(void)

void FUN_143de1f86(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined4 *)(param_2 + 0x38);
    uStack_14 = *(undefined4 *)(param_2 + 0x3c);
    uStack_10 = *(undefined4 *)(param_2 + 0x40);
    uStack_c = *(undefined4 *)(param_2 + 0x44);
    local_28 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*plVar1 + 0x60))(plVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de1ff6 FUN_143de1ff6 body=321 status=ok
// SIG undefined FUN_143de1ff6(void)

undefined8 FUN_143de1ff6(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143de2131;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143de2131;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar7 = CONCAT44(uStack_34,local_38);
  }
  else {
LAB_143de2131:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143de20e4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0 && *(int *)(param_1 + 0x38) != 0) {
        local_38 = *(undefined4 *)(param_2 + 0x38);
        uStack_34 = *(undefined4 *)(param_2 + 0x3c);
        uStack_30 = *(undefined4 *)(param_2 + 0x40);
        uStack_2c = *(undefined4 *)(param_2 + 0x44);
        local_48 = *(undefined8 *)(param_1 + 0x20);
        local_40 = *(undefined4 *)(param_1 + 0x28);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))();
      }
      uVar6 = 1;
      goto LAB_143de20e4;
    }
  }
  uVar6 = 0;
LAB_143de20e4:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de2138 FUN_143de2138 body=50 status=ok
// SIG undefined FUN_143de2138(void)

void FUN_143de2138(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_2 + 0x84) & 2) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar1 != '\0') {
      *(longlong **)*param_1 = param_2;
    }
  }
  return;
}



// FUNCTION 143de216a FUN_143de216a body=2076 status=ok
// SIG undefined FUN_143de216a(void)

void FUN_143de216a(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 **ppuVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 *local_78;
  undefined8 **local_70;
  undefined **local_68;
  undefined8 **local_60 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar21 = *param_1;
  plVar3 = (longlong *)param_1[1];
  if (plVar3[0x73] == 0) {
LAB_143de21a0:
    local_c0 = 0;
  }
  else {
    lVar20 = FUN_140082f10();
    lVar13 = plVar3[0x73];
    if (lVar13 == 0) goto LAB_143de21a0;
    local_c0 = 0;
    if ((lVar20 != 0) && (lVar4 = *(longlong *)(lVar13 + 0x10), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < *(int *)(lVar20 + 0x38)) goto LAB_143de21a0;
      local_c0 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
          lVar20 + 0x30) {
        local_c0 = lVar13;
      }
    }
  }
  sVar1 = *(short *)(local_c0 + 0x538);
  iVar18 = (int)sVar1;
  plVar12 = (longlong *)(**(code **)(*plVar3 + 0x498))(plVar3);
  if ((plVar12 == (longlong *)0x0) ||
     (lVar13 = (**(code **)(*plVar12 + 0x2b8))(plVar12), lVar13 != 0)) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_141364a4a(plVar12,&DAT_14cb85aa0,2,0xffffffff);
  }
  plVar12 = (longlong *)(lVar21 + 0x40);
  if ((sVar1 < 0) || (*(int *)(lVar21 + 0x48) <= iVar18)) {
    FUN_1488ed3a0(plVar12,iVar18 + 1);
  }
  local_a8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  ppuVar15 = (undefined8 **)((longlong)iVar18 * 8 + *plVar12);
  if (ppuVar15 != &local_a8) {
    puVar5 = *ppuVar15;
    *ppuVar15 = local_a8;
    local_a8 = (undefined8 *)0x0;
    FUN_14878e9a6(ppuVar15,puVar5);
  }
  FUN_14878e9a6(&local_a8,local_a8);
  iVar22 = DAT_14cb7cb34;
  piVar6 = *(int **)(*plVar12 + (longlong)iVar18 * 8);
  iVar19 = DAT_14cb7cb38;
  if (DAT_14cb7cb30 != 0) {
    iVar19 = iVar18 + 1;
  }
  *piVar6 = DAT_14cb7cb30;
  piVar6[1] = iVar22;
  piVar6[2] = iVar19;
  local_c8 = lVar21;
  if (plVar3 == (longlong *)0x0) {
    piVar6[3] = 0;
    iVar18 = 0;
  }
  else {
    uVar11 = *(uint *)((longlong)plVar3 + 0xc);
    piVar6[3] = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    iVar18 = *(int *)(lVar21 + 0x10);
    if (*(int *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar18 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar18;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar18 = *(int *)(lVar21 + 0x10);
      bVar23 = iVar18 == 0;
      if (bVar23) {
        *(int *)(lVar21 + 0x10) = iVar22;
        iVar18 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar18 = iVar22;
      }
    }
  }
  piVar6[4] = iVar18;
  if (lVar13 == 0) {
    piVar6[5] = 0;
    iVar18 = 0;
  }
  else {
    uVar11 = *(uint *)(lVar13 + 0xc);
    piVar6[5] = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    iVar18 = *(int *)(lVar21 + 0x10);
    if (*(int *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar18 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar18;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar18 = *(int *)(lVar21 + 0x10);
      bVar23 = iVar18 == 0;
      if (bVar23) {
        *(int *)(lVar21 + 0x10) = iVar22;
        iVar18 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar18 = iVar22;
      }
    }
  }
  piVar6[6] = iVar18;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = piVar6[2];
  local_a8 = *(undefined8 **)piVar6;
  iVar18 = *(int *)(local_c8 + 0xb8);
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar18);
  }
  if (iVar18 != 0) {
    FUN_1488ee78c(&local_98);
    iVar18 = *(int *)(local_c8 + 0xb8);
    if ((longlong)iVar18 != 0) {
      lVar21 = *(longlong *)(local_c8 + 0xb0);
      lVar13 = 0;
      do {
        uVar8 = uStack_90;
        uVar7 = *(undefined8 *)(lVar21 + lVar13);
        lVar20 = (longlong)(int)uStack_90;
        uVar11 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar11);
        if (uStack_90._4_4_ < uVar11) {
          FUN_1488ee822(&local_98,uVar8 & 0xffffffff);
        }
        FUN_1488ed79c(lVar20 * 0x50 + local_98,uVar7);
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar18 * 8 != lVar13);
    }
  }
  lVar21 = local_c8;
  local_b0 = piVar6[2];
  local_78 = &local_b8;
  local_b8 = *(undefined8 *)piVar6;
  local_60[0] = &local_78;
  local_70 = &local_a8;
  local_68 = (undefined **)&LAB_1488f48a0;
  local_88 = local_b8;
  local_80 = local_b0;
  FUN_1488eda1c(local_c8);
  FUN_1488ed45c(lVar21,&local_68,plVar3);
  plVar12 = (longlong *)(lVar21 + 0x50);
  bVar10 = (&DAT_149fc1b6e)[local_50];
  if (bVar10 == 1) {
    uVar11 = 0xffffffff;
    if ((local_60[0] != (undefined8 **)0x0) &&
       (cVar9 = (*(code *)(*local_60[0])[5])(), cVar9 != '\0')) {
      bVar10 = (&DAT_149fc1b6e)[local_50];
LAB_143de24c7:
      if ((bVar10 & 1) == 0) {
        uVar16 = (uint)local_60[0] & 0xffffff;
        uVar11 = uVar16 >> 0xd ^ ((uint)local_60[0] >> 0x18) - uVar16;
        uVar14 = uVar11 << 8 ^ (-0x61c88647 - uVar16) - uVar11;
        uVar17 = uVar14 >> 0xd ^ (uVar16 - uVar11) - uVar14;
        uVar16 = uVar17 >> 0xc ^ (uVar11 - uVar14) - uVar17;
        uVar11 = uVar16 << 0x10 ^ (uVar14 - uVar17) - uVar16;
        uVar14 = uVar11 >> 5 ^ (uVar17 - uVar16) - uVar11;
        uVar16 = uVar14 >> 3 ^ (uVar16 - uVar11) - uVar14;
        uVar11 = uVar16 << 10 ^ (uVar11 - uVar14) - uVar16;
        uVar11 = uVar11 >> 0xf ^ uVar14 - (uVar16 + uVar11);
      }
      else {
        uVar11 = (*(code *)(*local_60[0])[8])();
      }
    }
  }
  else {
    if (((ulonglong)local_60[0] & 0xffffff) != 0) goto LAB_143de24c7;
    uVar11 = 0xffffffff;
  }
  iVar18 = FUN_1488f499a(plVar12,uVar11,&local_68);
  lVar21 = local_c8;
  if ((iVar18 != -1) &&
     (lVar13 = (longlong)iVar18 * 0x38 + *plVar12, lVar13 != -0x20 && lVar13 != 0)) {
    FUN_143ddbe4e(local_c8,plVar3);
  }
  plVar12 = (longlong *)FUN_1488ecc96(lVar21);
  if (plVar12 != (longlong *)0x0) {
    local_78 = (undefined8 *)0x0;
    local_70 = (undefined8 **)((ulonglong)local_70 & 0xffffffff00000000);
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar5 = local_78;
    local_70 = (undefined8 **)CONCAT44(local_70._4_4_,3);
    *local_78 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar21 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar21 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar21;
    local_78[2] = lVar13;
    *local_78 = &PTR_FUN_14b417520;
    local_78[3] = 0;
    iVar18 = 0;
    if (local_c8 != 0) {
      uVar11 = *(uint *)(local_c8 + 0xc);
      *(uint *)(local_78 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      iVar18 = *(int *)(lVar21 + 0x10);
      if (*(int *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar22 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar22);
        }
        LOCK();
        iVar18 = *(int *)(lVar21 + 0x10);
        bVar23 = iVar18 == 0;
        if (bVar23) {
          *(int *)(lVar21 + 0x10) = iVar22;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar18 = iVar22;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar18;
    puVar5[4] = FUN_143ddb028;
    local_80 = piVar6[2];
    local_88 = *(undefined8 *)piVar6;
    (**(code **)(*plVar12 + 0x50))(plVar12,&local_88,&local_78);
    lVar21 = local_c8;
    if ((int)local_70 != 0) {
      if (local_78 == (undefined8 *)0x0) goto LAB_143de266c;
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = (undefined8 **)((ulonglong)local_70 & 0xffffffff00000000);
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143de266c:
  if (((((*(int *)(local_c0 + 0x4e4) != 0) &&
        (uVar11 = *(uint *)(local_c0 + 0x4e0), -1 < (int)uVar11)) && ((int)uVar11 < DAT_14c9647dc))
      && ((plVar12 = (longlong *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(local_c0 + 0x4e4))))) &&
     (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (*plVar12 != 0)))) {
    uVar2 = *(ushort *)(*plVar12 + 0x420);
    if (((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(lVar21 + 0xa8))) &&
       (*(longlong *)(*(longlong *)(lVar21 + 0xa0) + (ulonglong)uVar2 * 8) != 0)) {
      FUN_143ddab86(lVar21);
    }
  }
  iVar18 = *(int *)(lVar21 + 0xb8);
  if ((longlong)iVar18 != 0) {
    lVar21 = *(longlong *)(lVar21 + 0xb0);
    lVar13 = 0;
    do {
      plVar12 = *(longlong **)(lVar21 + lVar13);
      (**(code **)(*plVar12 + 0x10))(plVar12,plVar3);
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar18 * 8 != lVar13);
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(local_60);
  FUN_1488ee481(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de29b2 FUN_143de29b2 body=29 status=ok
// SIG undefined FUN_143de29b2(void)

undefined8 FUN_143de29b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de29d0 FUN_143de29d0 body=29 status=ok
// SIG undefined FUN_143de29d0(void)

undefined8 FUN_143de29d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de2b6c FUN_143de2b6c body=109 status=ok
// SIG undefined FUN_143de2b6c(void)

void FUN_143de2b6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143de2bda FUN_143de2bda body=109 status=ok
// SIG undefined FUN_143de2bda(void)

void FUN_143de2bda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143de2c48 FUN_143de2c48 body=142 status=ok
// SIG undefined FUN_143de2c48(void)

void FUN_143de2c48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417690;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de2cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143de2cd6 FUN_143de2cd6 body=80 status=ok
// SIG undefined FUN_143de2cd6(void)

void FUN_143de2cd6(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *(undefined4 *)(param_1 + 0x30);
  FUN_143ddce00(*(undefined8 *)(param_1 + 0x20),&local_18,param_1 + 0x34);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de2d28 FUN_143de2d28 body=290 status=ok
// SIG undefined FUN_143de2d28(void)

undefined8 FUN_143de2d28(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143de2e44;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143de2e44;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_143de2e44:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143de2df8;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = *(longlong *)(param_1 + 0x28);
      local_28 = *(undefined4 *)(param_1 + 0x30);
      FUN_143ddce00(*(undefined8 *)(param_1 + 0x20),&local_30,param_1 + 0x34);
      uVar6 = 1;
      goto LAB_143de2df8;
    }
  }
  uVar6 = 0;
LAB_143de2df8:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de2e4c FUN_143de2e4c body=71 status=ok
// SIG undefined FUN_143de2e4c(void)

undefined8 * FUN_143de2e4c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b417700;
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



// FUNCTION 143de3012 FUN_143de3012 body=146 status=ok
// SIG undefined FUN_143de3012(void)

void FUN_143de3012(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143de30a4 FUN_143de30a4 body=146 status=ok
// SIG undefined FUN_143de30a4(void)

void FUN_143de30a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143de3136 FUN_143de3136 body=184 status=ok
// SIG undefined FUN_143de3136(void)

void FUN_143de3136(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar4)(puVar4,p_Var1 + 1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  p_Var1[2].Type = (short)uVar3;
  p_Var1[2].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[2].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de31de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143de31fc FUN_143de31fc body=274 status=ok
// SIG undefined FUN_143de31fc(void)

undefined8 FUN_143de31fc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143de3308;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143de3308;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143de3308:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143de32bc;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143de3310(param_1 + 0x20,in_stack_00000028);
      uVar6 = 1;
      goto LAB_143de32bc;
    }
  }
  uVar6 = 0;
LAB_143de32bc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de3310 FUN_143de3310 body=398 status=ok
// SIG undefined FUN_143de3310(void)

void FUN_143de3310(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 1;
  if (((((*(int *)(param_1 + 0x44) != 0) && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x44))))) &&
     ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    if ((*(longlong *)(lVar2 + 0xa08) != 0) && (DAT_14cb5b388 == 0)) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    plVar3 = (longlong *)(param_1 + 0x20);
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x10);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de3510 FUN_143de3510 body=479 status=ok
// SIG undefined FUN_143de3510(void)

void FUN_143de3510(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  wchar_t *_Str;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  wchar_t *local_118;
  int local_110;
  undefined4 local_104;
  undefined1 *local_100;
  undefined4 *local_f8;
  int local_ec;
  undefined1 local_e8 [24];
  longlong local_d0;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_1 = (undefined8 *)*param_1;
  FUN_140b12754(param_2 + 0x38,&local_118);
  _Str = local_118;
  if (local_110 == 0) {
    _Str = L"";
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar4 = wcslen(_Str);
    FUN_1449b853c(local_c0,_Str,sVar4 & 0xffffffff,1);
  }
  uVar3 = local_38;
  if (((*(int *)(param_2 + 0x10) != 0) && (iVar1 = *(int *)(param_2 + 0x14), iVar1 != 0)) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    lVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 != 1) && (3 < iVar1)) {
      local_120 = *(undefined4 *)(lVar5 + 0x2c);
      local_128 = *(undefined8 *)(lVar5 + 0x24);
      goto LAB_143de3607;
    }
  }
  local_120 = DAT_14c948620;
  local_128 = DAT_14c948618;
LAB_143de3607:
  FUN_1448075d0(local_e8,&local_128);
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 != (byte *)0x0) && ((~*pbVar2 & 3) == 0)) {
    lVar5 = *(longlong *)(pbVar2 + 8);
    local_f8 = &local_104;
    local_104 = 1;
    local_100 = local_e8;
    FUN_14049fede(lVar5 + 0x18,&local_ec,&local_100,0);
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x28 + (longlong)local_ec * 0x40);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 1) & 2) == 0)) {
      FUN_140126aca(lVar5,uVar3);
    }
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de371a FUN_143de371a body=29 status=ok
// SIG undefined FUN_143de371a(void)

undefined8 FUN_143de371a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143de3737 FUN_143de3737 body=2733 status=ok
// SIG undefined FUN_143de3737(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143de3737(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb852d0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cb852d8);
  if (cVar2 == '\0') {
    _DAT_14cb852d8 = 0;
    uRam000000014cb852e0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_b8 = 0;
  FUN_141471170(&DAT_14cb852e8,L"gbx.LightProjectile.BatchSize",&DAT_14c7639d8,
                L"Maximum number of projectiles to batch together for ticking.\n");
  atexit(FUN_143dcf7f0);
  local_b8 = 0x40;
  FUN_141471170(&DAT_14cb852f8,L"gbx.LightProjectile.TracerThrottleLevel",&DAT_14c7639dc,
                L"Controls tracer effect throttling.\n3:all, 2: remote players and npc, 1: npc 0: none\n"
               );
  atexit(FUN_143dcf835);
  local_b8 = 0x40;
  FUN_141471170(&DAT_14cb85308,L"gbx.LightProjectile.ThrottleTracerFramePeriod",&DAT_14c7639e0,
                L"Controls tracer spawning based on how many frame since the last spawn.");
  atexit(FUN_143dcf87a);
  local_b8 = 0x40;
  FUN_141471170(&DAT_14cb85318,L"gbx.LightProjectile.StartThrottlingNPCTracerCount",&DAT_14c7639e4,
                L"Number of NPC tracers that are allowed to spawn within the throttle frame period before throttling is started."
               );
  atexit(FUN_143dcf8bf);
  local_b8 = 0x40;
  FUN_141471170(&DAT_14cb85328,L"gbx.LightProjectile.StartThrottlingPlayerTracerCount",
                &DAT_14c7639e8,
                L"Number of player tracers that are allowed to spawn within the throttle frame period before throttling is started."
               );
  atexit(FUN_143dcf904);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cb85338,L"gbx.LightProjectile.RecycleUnusedParticlesTime",&DAT_14c7639ec,
                L"How long a pooled particle component needs to be unused for before it can be recycled for use for a different template."
               );
  atexit(FUN_143dcf949);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cb85348,L"gbx.LightProjectile.KillUnusedParticlesTime",&DAT_14c7639f0,
                L"How long a pooled particle component needs to be unused for before it is destroyed."
               );
  atexit(FUN_143dcf98e);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cb85358,L"gbx.LightProjectile.ParticleCleanTime",&DAT_14c7639f4,
                L"How often should the pool be cleaned (in seconds).");
  atexit(FUN_143dcf9d3);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cb85368,L"gbx.LightProjectile.KeepParticlesRegistered",&DAT_14c7639f8,
                L"If true, components returned to the pool are kept registered with the world but set invisible. This will reduce the cost of pushing/popping components int."
               );
  atexit(FUN_143dcfa18);
  local_b8 = 0;
  local_b0 = 0x200;
  FUN_1412c7f16(&DAT_14cb85378,L"TaskGraph.TaskPriorities.ParallelLightProjectileBatchTickTask",
                L"Task and thread priority for FParallelLightProjectileBatchTickTask",0x400);
  atexit(FUN_143dcfa5d);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cb853b8,L"CriticalPathStall.LightProjectileBatch",&DAT_14cb853c8,
                L"Sleep for the given time in each light projectile batch tick task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
               );
  atexit(FUN_143dcfac7);
  _DAT_14cb853d8 = &LAB_143dd16d1;
  _DAT_14cb853e0 = 0x44278666;
  DAT_14cb853e4 = 1;
  DAT_14cb853d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb853d0;
  atexit((_func_5014 *)&LAB_143dd16d6);
  DAT_14cb85450 = 0;
  _DAT_14cb85458 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143dddb22;
  local_a8 = &DAT_14011fc1e;
  FUN_146185bee(&local_a8);
  atexit((_func_5014 *)&LAB_143dd1733);
  _DAT_14cb854e8 = &LAB_143dd1738;
  _DAT_14cb854f0 = 0x43d20000;
  DAT_14cb854f4 = 1;
  DAT_14cb854e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb854e0;
  atexit((_func_5014 *)&LAB_143dd173d);
  _DAT_14cb85500 = 0x47efffffe0000000;
  _DAT_14cb85508 = 0x47efffffe0000000;
  _DAT_14cb85510 = 0x47efffffe0000000;
  _DAT_14cb85518 = 0x47efffffe0000000;
  _DAT_14cb85520 = 0x47efffffe0000000;
  _DAT_14cb85528 = 0x47efffffe0000000;
  _DAT_14cb85530 = 0x47efffffe0000000;
  _DAT_14cb85538 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb85540,L"CharacterMantleTrace",1);
  FUN_1446f470e(&DAT_14cb85548,L"Mantling",1);
  DAT_14cb85550 = 0;
  atexit((_func_5014 *)&LAB_143dd26bd);
  _DAT_14cb85650 = &LAB_143dd26d5;
  _DAT_14cb85658 = 0x444d4000;
  DAT_14cb8565c = 1;
  DAT_14cb85648 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb85648;
  atexit((_func_5014 *)&LAB_143dd26da);
  DAT_14cb856c8 = 0;
  _DAT_14cb856d0 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143dddb2c;
  local_a8 = &DAT_14011fc1e;
  FUN_1461862ea(&local_a8);
  atexit((_func_5014 *)&LAB_143dd2737);
  _DAT_14cb85760 = 0;
  DAT_14cb85768 = 2;
  _DAT_14cb8576c = 0xffffffff;
  DAT_14cb85770 = 0;
  DAT_14cb85798 = 0;
  DAT_14cb857a0 = 0;
  DAT_14cb85778 = 0;
  _DAT_14cb85780 = 0;
  _DAT_14cb857a4 = 0xffffffff00000080;
  DAT_14cb857ac = 0;
  DAT_14cb857b8 = 0;
  DAT_14cb857c0 = 0;
  atexit(FUN_143dd341e);
  _DAT_14cb857d0 = &LAB_143dd349a;
  _DAT_14cb857d8 = 0x43120000;
  DAT_14cb857dc = 1;
  DAT_14cb857c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb857c8;
  atexit((_func_5014 *)&LAB_143dd349f);
  local_a8 = "GbxMeleeRebound";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb857e8 = (ulonglong)uVar3;
  _DAT_14cb857f0 = 0x47efffffe0000000;
  _DAT_14cb857f8 = 0x47efffffe0000000;
  _DAT_14cb85800 = 0x47efffffe0000000;
  _DAT_14cb85810 = 0x47efffffe0000000;
  _DAT_14cb85818 = 0x47efffffe0000000;
  _DAT_14cb85820 = 0x47efffffe0000000;
  _DAT_14cb85828 = 0x47efffffe0000000;
  DAT_14cb85830 = 0x47efffffe0000000;
  DAT_14cb85838 = 0x47efffffe0000000;
  DAT_14cb85840 = 0x47efffffe0000000;
  _DAT_14cb85850 = &LAB_143dd77dc;
  _DAT_14cb85858 = 0x461df800;
  DAT_14cb8585c = 1;
  DAT_14cb85848 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb85848;
  atexit((_func_5014 *)&LAB_143dd77e1);
  local_a8 = "__ms";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb85868 = (ulonglong)uVar3;
  local_a8 = "timers";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb85870 = (ulonglong)uVar3;
  local_a8 = "missions";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb85878 = (ulonglong)uVar3;
  _DAT_14cb85884 = 0;
  FUN_14052b5e0(&DAT_14cb85880,"timer",0);
  _DAT_14cb85890 = "timer";
  local_a8 = "Running";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85898 = (ulonglong)uVar3;
  local_a8 = "Finished";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb858a0 = (ulonglong)uVar3;
  local_a8 = "Inactive";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb858a8 = (ulonglong)uVar3;
  local_a8 = "Active";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb858b0 = (ulonglong)uVar3;
  local_a8 = "Inactive";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb858b8 = (ulonglong)uVar3;
  local_a8 = "Remove";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb858c0 = (ulonglong)uVar3;
  DAT_14cb85928 = 0;
  uRam000000014cb85930 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143ddfbb2;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f4370(&local_a8);
  atexit((_func_5014 *)&LAB_143dd83d5);
  _DAT_14cb859c0 = 0;
  uRam000000014cb859c8 = 0;
  _DAT_14cb859d0 = 0;
  DAT_14cb859d8 = 0;
  uRam000000014cb859e0 = 0;
  FUN_1446ddda2(&DAT_14cb859c0,"missions.source",0);
  atexit((_func_5014 *)&LAB_143dd83da);
  _DAT_14cb859e8 = 0;
  uRam000000014cb859f0 = 0;
  _DAT_14cb859f8 = 0;
  DAT_14cb85a00 = 0;
  uRam000000014cb85a08 = 0;
  FUN_1446ddda2(&DAT_14cb859e8,"engine.missions.source",0);
  atexit((_func_5014 *)&LAB_143dd83eb);
  local_a8 = "missions";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85a10 = (ulonglong)uVar3;
  local_a8 = "source";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8);
  DAT_14cb85a18 = (ulonglong)uVar3;
  _DAT_14cb85a28 = &LAB_143dd83fc;
  _DAT_14cb85a30 = 0x44458000;
  DAT_14cb85a34 = 1;
  DAT_14cb85a20 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb85a20;
  atexit((_func_5014 *)&LAB_143dd8401);
  DAT_14cb85a40 = (undefined8 *)0x0;
  _DAT_14cb85a48 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x1500,0);
  lVar6 = 0x1f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x15;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  *puVar5 = DAT_14cb85a40;
  _DAT_14cb85a48 = _DAT_14cb85a48 + 0x20;
  DAT_14cb85a70 = 0;
  DAT_14cb85a78 = 0;
  DAT_14cb85a50 = 0;
  _DAT_14cb85a58 = 0;
  _DAT_14cb85a7c = 0xffffffff00000080;
  DAT_14cb85a84 = 0;
  DAT_14cb85a90 = 0;
  DAT_14cb85a98 = 0;
  DAT_14cb85a40 = puVar4;
  atexit(FUN_143dd8b9d);
  FUN_1446f470e(&DAT_14cb85aa0,L"MissionTaskChannel",1);
  DAT_14cb85b80 = 0;
  _DAT_14cb85b88 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143de1746;
  local_a8 = &DAT_14011fc1e;
  FUN_14610671a();
  atexit((_func_5014 *)&LAB_143dd9316);
  DAT_14cb85c64 = 0;
  DAT_14cb85c6c = 0;
  _DAT_14cb85c14 = 0;
  FUN_14052b5e0(&DAT_14cb85c10,"seconds_remaining",0);
  _DAT_14cb85c20 = "seconds_remaining";
  _DAT_14cb85c28 = 0;
  uRam000000014cb85c30 = 0;
  _DAT_14cb85c38 = 0;
  DAT_14cb85c40 = 0;
  uRam000000014cb85c48 = 0;
  FUN_1446ddda2(&DAT_14cb85c28,&DAT_14b416440,0);
  atexit((_func_5014 *)&LAB_143dd9de1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de420a FUN_143de420a body=146 status=ok
// SIG undefined FUN_143de420a(void)

void FUN_143de420a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar3[6];
    plVar2 = plVar1;
    while (plVar2 != (longlong *)0x0) {
      if (plVar3[5] != 0) {
        lVar4 = *(longlong *)(plVar3[5] + 0x30);
        if (lVar4 == 0) {
          return;
        }
        if (*(longlong *)(lVar4 + 0x360) == 0) {
          return;
        }
        lVar4 = FUN_1400f6f32();
        if (lVar4 == 0) {
          return;
        }
        if (*(longlong *)(lVar4 + 0x68) == 0) {
          return;
        }
        lVar4 = FUN_140d1732e(*(longlong *)(lVar4 + 0x68),param_2 + 0x18);
        if (lVar4 == 0) {
          return;
        }
        FUN_143ddbe4e(plVar1,lVar4,param_4);
        return;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
      plVar2 = plVar3;
    }
  }
  return;
}



// FUNCTION 143de429c FUN_143de429c body=163 status=ok
// SIG undefined FUN_143de429c(void)

undefined8 FUN_143de429c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar3[6];
    plVar2 = plVar1;
    while (plVar2 != (longlong *)0x0) {
      if (plVar3[5] != 0) {
        lVar4 = *(longlong *)(plVar3[5] + 0x30);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 0x360) == 0) {
          return 0;
        }
        lVar4 = FUN_1400f6f32();
        if (lVar4 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 0x68) == 0) {
          return 0;
        }
        lVar4 = FUN_140d1732e(*(longlong *)(lVar4 + 0x68),param_2 + 0x18);
        if (lVar4 == 0) {
          return 0;
        }
        uVar5 = FUN_143ddcf66(plVar1,lVar4,param_3,param_4);
        return uVar5;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
      plVar2 = plVar3;
    }
  }
  return 0;
}



// FUNCTION 143de437c FUN_143de437c body=1140 status=ok
// SIG undefined FUN_143de437c(void)

undefined8 * FUN_143de437c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *_Dst;
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong ****ppppuVar5;
  code *pcVar6;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_104 [12];
  ulonglong **local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [24];
  longlong local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong ***local_b0 [3];
  ushort local_98;
  byte local_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong **local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(longlong *)(param_3 + 0x28) == 0) || (*(char *)(param_3 + 0x1c) == '\0')) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_148);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_c0 = *(undefined8 *)(param_1 + 8);
  local_b8 = *(undefined4 *)(param_1 + 0x10);
  FUN_144928b90(&local_f8,0xd);
  if (*(char *)(param_3 + 0x1c) == '\x01') {
    puVar1 = (uint *)&DAT_14cb86ac8;
  }
  else {
    if (*(char *)(param_3 + 0x1c) != '\x02') {
      uVar2 = 0;
      uVar4 = 0;
      goto LAB_143de4455;
    }
    puVar1 = (uint *)&DAT_14cb86ad0;
  }
  uVar4 = (ulonglong)*puVar1;
  uVar2 = (ulonglong)(*(int *)(param_3 + 0x20) + 1);
LAB_143de4455:
  local_78 = (ulonglong **)(uVar2 << 0x20 | uVar4);
  FUN_1401533ba(local_104,&local_78,1);
  FUN_144928d62(local_e8,1,local_104);
  if ((*(longlong **)(param_3 + 0x28) == (longlong *)0x0) ||
     (lVar3 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x2b0))(), lVar3 == 0)) {
    local_108 = DAT_14c948620;
    local_110 = DAT_14c948618;
  }
  else {
    FUN_14883d5c5(&local_110,local_e8,lVar3);
  }
  if ((int)local_110 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  else {
    local_118 = local_108;
    local_120 = local_110;
    FUN_144928d62(local_e8,2);
    if (local_90 == 0x1f) {
      *(undefined4 *)(local_b0[0] + 1) = local_f0;
      *local_b0[0] = local_f8;
      FUN_1447715ec(local_b0[0] + 2,local_e8);
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
      if (pcVar6 != (code *)0x0) {
        ppppuVar5 = local_b0;
        if (0x18 < local_98) {
          ppppuVar5 = (ulonglong ****)local_b0[0];
        }
        (*pcVar6)(ppppuVar5);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(local_b0[0]);
      }
      local_58 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_78 = local_f8;
      local_70 = local_f0;
      FUN_1447715ec(&local_68,local_e8);
      local_98 = 0x38;
      local_b0[0] = (ulonglong ***)FUN_14001cc68(0x38,0);
      local_b0[0][2] = (ulonglong **)0x0;
      local_b0[0][3] = (ulonglong **)0x0;
      *(undefined4 *)(local_b0[0] + 4) = 0;
      local_b0[0][5] = (ulonglong **)0x0;
      local_b0[0][6] = (ulonglong **)0x0;
      *(undefined4 *)(local_b0[0] + 1) = local_70;
      *local_b0[0] = local_78;
      FUN_1447715ec(local_b0[0] + 2,&local_68);
      local_90 = 0x1f;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    *(undefined4 *)(param_2 + 1) = local_b8;
    *param_2 = local_c0;
    _Dst = param_2 + 2;
    *(ushort *)(param_2 + 5) = local_98;
    if (local_98 < 0x19) {
      uVar2 = (ulonglong)((uint)local_90 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b8 + uVar2);
      if ((pcVar6 == (code *)0x0) &&
         (pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar2), pcVar6 == (code *)0x0)) {
        memcpy(_Dst,local_b0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
      }
      else {
        (*pcVar6)(_Dst,local_b0);
      }
    }
    else {
      *_Dst = local_b0[0];
      local_b0[0] = (ulonglong ***)0x0;
      local_98 = 0;
    }
    *(byte *)(param_2 + 6) = local_90;
    local_90 = 0;
    param_2[7] = local_88;
    local_88 = 0;
    *(undefined4 *)(param_2 + 8) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_2 + 0x44) = uStack_80._4_4_;
    uStack_80 = 0;
  }
  if (local_d0 == 0) {
    uVar2 = 0;
    lVar3 = 0;
  }
  else {
    FUN_1400020a8();
    uVar2 = uStack_80 & 0xffffffff;
    lVar3 = local_88;
  }
  FUN_14029e95e(lVar3,uVar2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar5 = (ulonglong ****)local_b0[0];
    if (local_98 < 0x19) {
      ppppuVar5 = local_b0;
    }
    (*pcVar6)(ppppuVar5);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143de47f6 FUN_143de47f6 body=2968 status=ok
// SIG undefined FUN_143de47f6(void)

bool FUN_143de47f6(longlong param_1,longlong param_2,int *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  longlong *local_110;
  longlong *local_108;
  undefined1 local_fc [12];
  code *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 ***local_b0;
  undefined4 local_a8;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar7 = FUN_1401b0f18();
  plVar8 = (longlong *)FUN_144718840(param_2,uVar7);
  if (plVar8 != (longlong *)0x0) {
    local_e8 = local_e8 & 0xffffffffffffff00;
    local_c0 = 0;
    FUN_1456bb102(&local_e8,param_2);
    FUN_1448729ea(param_1 + 0x38,&local_b0,&local_e8);
    if (local_90 == 3) {
      local_90 = 3;
      fVar17 = local_b0._0_4_;
    }
    else {
      FUN_1400b56fe(&local_88,&local_b0,3);
      fVar17 = 0.0;
      if (local_68 != 0) {
        fVar17 = local_88._0_4_;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar15 = &local_88;
        if (0x18 < local_70) {
          ppppuVar15 = (undefined8 ****)local_88;
        }
        (*pcVar4)(ppppuVar15);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88);
      }
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar15 = &local_b0;
      if (0x18 < local_98) {
        ppppuVar15 = (undefined8 ****)local_b0;
      }
      (*pcVar4)(ppppuVar15);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(local_b0);
    }
    FUN_1448173f8(&local_c0);
    if (((char)local_e8 == '\x03') && (local_d8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))();
      }
    }
    if ((1.0 <= fVar17) || (uVar6 = rand(), (float)(uVar6 & 0x7fff) / 32767.0 <= fVar17)) {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      if ((longlong)*(int *)(param_1 + 0x10) != 0) {
        plVar13 = *(longlong **)(param_1 + 8);
        local_110 = plVar13 + *(int *)(param_1 + 0x10);
        do {
          if (*(int *)(lVar9 + 0x80) != 0) {
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0x78) + lVar14) == *plVar13)
              goto LAB_143de49ed;
              lVar14 = lVar14 + 8;
            } while ((longlong)*(int *)(lVar9 + 0x80) << 3 != lVar14);
          }
          if (*(int *)(lVar9 + 0x90) == 0) goto LAB_143de4844;
          lVar14 = 0;
          while (*(longlong *)(*(longlong *)(lVar9 + 0x88) + lVar14) != *plVar13) {
            lVar14 = lVar14 + 8;
            bVar16 = false;
            if ((longlong)*(int *)(lVar9 + 0x90) << 3 == lVar14) goto LAB_143de4846;
          }
LAB_143de49ed:
          plVar13 = plVar13 + 1;
        } while (plVar13 != local_110);
      }
      if (*(int *)(param_1 + 0x30) < 1) {
LAB_143de4c4a:
        if (*(int *)(param_1 + 0x88) != 0) {
          if (((*param_3 == 0) || (iVar2 = param_3[1], iVar2 == 0)) || (*param_3 == DAT_14c948000))
          {
LAB_143de525b:
            local_a8 = DAT_14c948620;
            local_b0 = DAT_14c948618;
          }
          else {
            if ((iVar2 < 2) && (param_3[9] < 1)) {
              plVar8 = (longlong *)(param_3 + 2);
            }
            else {
              plVar8 = *(longlong **)(param_3 + 6);
            }
            if (iVar2 < 1) goto LAB_143de525b;
            local_a8 = (undefined4)plVar8[1];
            local_b0 = (undefined8 ****)*plVar8;
          }
          if (((param_4 == (longlong *)0x0) ||
              (lVar9 = (**(code **)(*param_4 + 0x2b0))(param_4), lVar9 == 0)) ||
             (plVar8 = (longlong *)FUN_14039ffc6(lVar9), plVar8 == (longlong *)0x0))
          goto LAB_143de4844;
          (**(code **)(*plVar8 + 0x78))(plVar8,&local_88,&local_b0);
          FUN_140e3418c(param_1 + 0x88,&local_e8,1);
          FUN_1401533ba(local_fc,&local_e8,1);
          if ((undefined8 ****)local_88 == (undefined8 ****)0x0) {
LAB_143de4f8e:
            bVar16 = false;
          }
          else {
            lVar14 = FUN_140ca9be8(local_88,local_fc);
            if (lVar14 == 0) goto LAB_143de4f8e;
            plVar8 = (longlong *)FUN_1401499e8(lVar9);
            if (plVar8 == (longlong *)0x0) goto LAB_143de4f8e;
            FUN_14096c63a(lVar14 + 0x10,&local_e8);
            if (((char)local_e8 == '\x01') &&
               (lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,&local_e8), lVar9 != 0)) {
              lVar14 = *(longlong *)(lVar9 + 0x10);
              if (*(longlong *)(lVar9 + 0x10) == 0) {
                lVar14 = lVar9;
              }
              iVar2 = *(int *)(lVar9 + 0x18);
              if ((longlong)iVar2 != 0) {
                lVar9 = 0;
                do {
                  iVar3 = *(int *)(lVar14 + 4 + lVar9);
                  if (((iVar3 != 0) && (uVar6 = *(uint *)(lVar14 + lVar9), -1 < (int)uVar6)) &&
                     (((int)uVar6 < DAT_14c9647dc &&
                      ((((plVar8 = (longlong *)
                                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar3)) &&
                        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
                       (lVar10 = *plVar8, lVar10 != 0)))))) {
                    if (DAT_14cac9ca8 == 0) {
                      local_f0 = FUN_141030f22;
                      local_120 = FUN_14081d0ea;
                      local_128 = FUN_14081d0ea;
                      local_130 = &local_f0;
                      local_138 = &LAB_1478c0a72;
                      local_140 = &LAB_1417b2375;
                      local_148 = L"Engine";
                      local_150 = 0x1000000000;
                      local_158 = 0x10000004;
                      local_160 = 8;
                      local_168 = 0x390;
                      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                    }
                    if (((*(int *)(DAT_14cac9ca8 + 0x38) <=
                          *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
                       (cVar5 = FUN_14064aef8(lVar10,param_2), cVar5 != '\0')) {
                      bVar16 = true;
                      goto LAB_143de4f94;
                    }
                  }
                  lVar9 = lVar9 + 8;
                } while ((longlong)iVar2 * 8 != lVar9);
              }
            }
            bVar16 = false;
LAB_143de4f94:
            if (CONCAT44(uStack_bc,local_c0) != 0) {
              FUN_1400020a8();
            }
          }
          plVar8 = (longlong *)CONCAT44(uStack_7c,local_80);
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
          if (!bVar16) goto LAB_143de4844;
        }
        if ((*(int *)(param_1 + 0xa0) < 1) && (bVar16 = true, *(int *)(param_1 + 0xb0) < 1))
        goto LAB_143de4846;
        lVar9 = *(longlong *)(param_2 + 0x1c8);
        if (lVar9 == 0) {
          local_d8 = DAT_14c8464f0;
          local_e8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_e8 = *(ulonglong *)(lVar9 + 0x260);
          uStack_e0 = *(longlong *)(lVar9 + 0x268);
          local_d8 = *(longlong **)(lVar9 + 0x270);
        }
        uVar7 = FUN_1447210f0(param_2);
        plVar8 = (longlong *)FUN_145788b2d(uVar7,&local_e8);
        if ((longlong)*(int *)(param_1 + 0xa0) < 1) {
LAB_143de5210:
          if (*(int *)(param_1 + 0xb0) < 1) {
            bVar16 = true;
            goto LAB_143de4846;
          }
          if (plVar8 != (longlong *)0x0) {
            do {
              lVar9 = plVar8[8];
              if (lVar9 != 0) {
LAB_143de5277:
                if ((longlong)*(int *)(param_1 + 0xb0) == 0) goto LAB_143de4844;
                lVar14 = *(longlong *)(param_1 + 0xa8);
                lVar10 = (longlong)*(int *)(param_1 + 0xb0) * 0x30;
                goto LAB_143de52ae;
              }
              lVar9 = FUN_140e045c8(plVar8[6]);
              plVar8[8] = lVar9;
              if (lVar9 != 0) goto LAB_143de5277;
              plVar8 = (longlong *)FUN_1403155a4(plVar8);
              bVar16 = false;
            } while (plVar8 != (longlong *)0x0);
            goto LAB_143de4846;
          }
        }
        else if (plVar8 != (longlong *)0x0) {
          lVar9 = *(longlong *)(param_1 + 0x98);
          lVar14 = (longlong)*(int *)(param_1 + 0xa0) * 0x30 + lVar9;
          local_110 = (longlong *)(param_3 + 2);
          do {
            if (((*param_3 == 0) || (iVar2 = param_3[1], iVar2 == 0)) || (*param_3 == DAT_14c948000)
               ) {
LAB_143de51ee:
              local_80 = DAT_14c948620;
              local_88 = DAT_14c948618;
            }
            else {
              if ((1 < iVar2) || (plVar13 = local_110, 0 < param_3[9])) {
                plVar13 = *(longlong **)(param_3 + 6);
              }
              if (iVar2 < 1) goto LAB_143de51ee;
              local_80 = (undefined4)plVar13[1];
              local_88 = (undefined8 ****)*plVar13;
            }
            FUN_140f4ea62(lVar9,&local_e8,param_4,&local_88);
            if (local_d8 == (longlong *)0x0) {
              if (((local_e8 != 0) && (uStack_e0 != 0)) &&
                 ((plVar13 = *(longlong **)(uStack_e0 + 0xb8), plVar13 != (longlong *)0x0 &&
                  (cVar5 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar5 != '\0')))) {
                uVar7 = (**(code **)(*plVar13 + 0x110))(plVar13);
                local_d8 = (longlong *)FUN_144aff482(uVar7,&local_e8);
                if (local_d8 != (longlong *)0x0) goto LAB_143de510b;
              }
            }
            else {
LAB_143de510b:
              plVar13 = local_d8;
              lVar10 = (**(code **)(*local_d8 + 8))(local_d8);
              lVar11 = FUN_141030812();
              if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                  lVar11 + 0x30)) {
                plVar12 = plVar8;
                if (plVar8 == plVar13) goto LAB_143de5210;
                do {
                  plVar12 = (longlong *)FUN_1403155a4(plVar12);
                } while (plVar12 != plVar13 && plVar12 != (longlong *)0x0);
                if (plVar12 != (longlong *)0x0) goto LAB_143de5210;
              }
            }
            lVar9 = lVar9 + 0x30;
            bVar16 = false;
          } while (lVar9 != lVar14);
          goto LAB_143de4846;
        }
      }
      else {
        uVar7 = (**(code **)(*plVar8 + 0x28))(plVar8);
        FUN_1406c9d00(uVar7,&local_e8);
        if (uStack_e0 == 0) {
          uVar7 = FUN_140927942();
          uStack_e0 = FUN_14477b664(uVar7);
        }
        local_108 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          if ((((local_e8 != 0) && (uStack_e0 != 0)) &&
              (plVar8 = *(longlong **)(uStack_e0 + 0xb8), plVar8 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 != '\0')) {
            uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
            local_108 = (longlong *)FUN_144aff482(uVar7,&local_e8);
            if (local_108 != (longlong *)0x0) goto LAB_143de4a55;
          }
        }
        else {
LAB_143de4a55:
          if ((longlong)*(int *)(param_1 + 0x30) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x28);
            local_110 = (longlong *)(param_3 + 2);
            lVar14 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
            do {
              if (((*param_3 == 0) || (iVar2 = param_3[1], iVar2 == 0)) ||
                 (*param_3 == DAT_14c948000)) {
LAB_143de4bbd:
                local_80 = DAT_14c948620;
                local_88 = DAT_14c948618;
              }
              else {
                if ((1 < iVar2) || (plVar8 = local_110, 0 < param_3[9])) {
                  plVar8 = *(longlong **)(param_3 + 6);
                }
                if (iVar2 < 1) goto LAB_143de4bbd;
                local_80 = (undefined4)plVar8[1];
                local_88 = (undefined8 ****)*plVar8;
              }
              FUN_140f4ea62(lVar9,&local_e8,param_4,&local_88);
              if (local_d8 == (longlong *)0x0) {
                if ((((local_e8 != 0) && (uStack_e0 != 0)) &&
                    (plVar8 = *(longlong **)(uStack_e0 + 0xb8), plVar8 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 != '\0')) {
                  uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  local_d8 = (longlong *)FUN_144aff482(uVar7,&local_e8);
                  if (local_d8 != (longlong *)0x0) goto LAB_143de4af5;
                }
              }
              else {
LAB_143de4af5:
                plVar8 = local_d8;
                lVar10 = (**(code **)(*local_d8 + 8))(local_d8);
                lVar11 = FUN_140927942();
                if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                   ((*(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                     lVar11 + 0x30 &&
                    (cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,local_108), cVar5 != '\0'))))
                goto LAB_143de4c4a;
              }
              lVar9 = lVar9 + 0x30;
              bVar16 = false;
              lVar14 = lVar14 + -0x30;
            } while (lVar14 != 0);
            goto LAB_143de4846;
          }
        }
      }
    }
  }
LAB_143de4844:
  bVar16 = false;
LAB_143de4846:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar16;
LAB_143de52ae:
  do {
    lVar10 = lVar10 + -0x30;
    if (((*param_3 == 0) || (iVar2 = param_3[1], iVar2 == 0)) || (*param_3 == DAT_14c948000)) {
LAB_143de5329:
      local_80 = DAT_14c948620;
      local_88 = DAT_14c948618;
    }
    else {
      if ((1 < iVar2) || (plVar8 = (longlong *)(param_3 + 2), 0 < param_3[9])) {
        plVar8 = *(longlong **)(param_3 + 6);
      }
      if (iVar2 < 1) goto LAB_143de5329;
      local_80 = (undefined4)plVar8[1];
      local_88 = (undefined8 ****)*plVar8;
    }
    FUN_140f4ea62(lVar14,&local_e8,param_4,&local_88);
    lVar11 = FUN_140e045c8(local_e8);
    bVar16 = lVar11 == lVar9;
  } while ((!bVar16) && (lVar14 = lVar14 + 0x30, lVar10 != 0));
  goto LAB_143de4846;
}



// FUNCTION 143de538f FUN_143de538f body=49 status=ok
// SIG undefined FUN_143de538f(void)

void FUN_143de538f(void)

{
  FUN_143ded88a(DAT_14cb85d50,DAT_14cb85d58);
  if (DAT_14cb85d50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143de53c0 FUN_143de53c0 body=414 status=ok
// SIG undefined FUN_143de53c0(void)

void FUN_143de53c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_30;
  
  uVar9 = DAT_14c951640;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14058b40c(DAT_14c951640,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_c8 = FUN_143c3569e();
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_c0 = uVar9;
  lVar6 = FUN_1402710dd(&local_c8);
  if (lStack_88 != 0) {
    plVar7 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar7 = local_68;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  plVar7 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_143de54a2:
    uVar9 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_143de54a2;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    uVar9 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
    bVar3 = false;
  }
  *(undefined8 *)(lVar6 + 0x28) = uVar9;
  plVar8 = *(longlong **)(lVar6 + 0x30);
  if (plVar8 != plVar7) {
    if (!bVar3) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x30);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(lVar6 + 0x30) = plVar7;
  }
  if (!bVar3) {
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
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar6 == 0) {
    if (lVar2 == 0) goto LAB_143de5537;
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar2 == lVar6) goto LAB_143de5537;
    if ((lVar2 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar6);
  }
  *(longlong *)(param_1 + 0x60) = lVar6;
LAB_143de5537:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de5560 FUN_143de5560 body=132 status=ok
// SIG undefined FUN_143de5560(void)

void FUN_143de5560(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
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
    if (*(longlong *)(param_1 + 0x60) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 143de55e4 FUN_143de55e4 body=425 status=ok
// SIG undefined FUN_143de55e4(void)

void FUN_143de55e4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_143de578e();
  if ((param_2 != 0 && lVar3 != 0) &&
     (plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x70), plVar7 != (longlong *)0x0)) {
    do {
      if (plVar7[4] == *(longlong *)(lVar3 + 0x18)) {
        lVar3 = plVar7[1];
        lVar4 = FUN_140019da0();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar9 = lVar3 != 0;
          if (lVar3 == lVar4 || !bVar9) goto LAB_143de568c;
          goto LAB_143de5678;
        }
        if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_143de5694;
        break;
      }
      plVar7 = (longlong *)plVar7[9];
    } while (plVar7 != (longlong *)0x0);
  }
  goto LAB_143de571b;
  while (lVar3 != 0) {
LAB_143de5678:
    lVar3 = *(longlong *)(lVar3 + 0x30);
    bVar9 = lVar3 != 0;
    if (lVar3 == lVar4) break;
  }
LAB_143de568c:
  if (bVar9) {
LAB_143de5694:
    FUN_1446f470e(&local_38,L"HandleEvent",1);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar3 + 0x10);
      if (*(uint *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar2 = *(uint *)(lVar3 + 0x10);
        bVar9 = uVar2 == 0;
        if (bVar9) {
          *(uint *)(lVar3 + 0x10) = uVar6;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar2 = uVar6;
        }
        uVar5 = (ulonglong)uVar2;
      }
    }
    local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
    local_40 = local_38;
    (**(code **)(*plVar7 + 0x1f0))(plVar7,&local_48,param_2,0);
  }
LAB_143de571b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de578e FUN_143de578e body=78 status=ok
// SIG undefined FUN_143de578e(void)

longlong * FUN_143de578e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_143c3556c();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143de57dc FUN_143de57dc body=414 status=ok
// SIG undefined FUN_143de57dc(void)

void FUN_143de57dc(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_143de578e();
  if ((param_2 != 0 && lVar3 != 0) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x70), plVar6 != (longlong *)0x0)) {
    do {
      if (plVar6[4] == *(longlong *)(lVar3 + 0x18)) {
        lVar3 = plVar6[1];
        lVar4 = FUN_140019da0();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar7 = lVar3 != 0;
          if (lVar3 == lVar4 || !bVar7) goto LAB_143de5882;
          goto LAB_143de586e;
        }
        if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_143de5886;
        break;
      }
      plVar6 = (longlong *)plVar6[9];
    } while (plVar6 != (longlong *)0x0);
  }
  goto LAB_143de5905;
  while (lVar3 != 0) {
LAB_143de586e:
    lVar3 = *(longlong *)(lVar3 + 0x30);
    bVar7 = lVar3 != 0;
    if (lVar3 == lVar4) break;
  }
LAB_143de5882:
  if (bVar7) {
LAB_143de5886:
    local_38 = 0;
    uStack_30 = 0;
    FUN_1446f470e(&local_40,L"HandleEvent",1);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_38 = 0;
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc);
      local_38 = CONCAT44(local_38._4_4_,uVar1);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar7 = iVar2 == 0;
        if (bVar7) {
          *(int *)(lVar3 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar2 = iVar5;
        }
      }
    }
    local_38 = CONCAT44(iVar2,(undefined4)local_38);
    uStack_30 = local_40;
    (**(code **)(*plVar6 + 0x1f8))(plVar6,&local_38,param_2,0);
  }
LAB_143de5905:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de597c FUN_143de597c body=126 status=ok
// SIG undefined FUN_143de597c(void)

void FUN_143de597c(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_143de578e();
  if (lVar2 != 0) {
    lVar3 = FUN_1410cfc16(param_1);
    if (lVar3 != 0) {
      FUN_140d853aa(lVar3,local_28,lVar2 + 0x20,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))();
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



// FUNCTION 143de5a00 FUN_143de5a00 body=296 status=ok
// SIG undefined FUN_143de5a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143de5a00(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b4188d0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar4 = plVar2 + 2;
  *plVar4 = (longlong)&PTR_FUN_14b4188f0;
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_143de5afa;
  }
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_143de5ac9;
LAB_143de5ab5:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar5 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_143de5ac9:
      *param_2 = plVar4;
      param_2[1] = plVar2;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar4;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar5 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_143de5ab5;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
  LOCK();
  plVar5 = plVar2 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *param_2 = plVar4;
  param_2[1] = plVar2;
LAB_143de5afa:
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
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
  return param_2;
}



// FUNCTION 143de5b28 FUN_143de5b28 body=87 status=ok
// SIG undefined FUN_143de5b28(void)

void FUN_143de5b28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_143de597c();
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
                    /* WARNING: Could not recover jumptable at 0x000143de5b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143de5b80 FUN_143de5b80 body=50 status=ok
// SIG undefined FUN_143de5b80(void)

void FUN_143de5b80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    FUN_143df0d3e(lVar1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 143de5bbc FUN_143de5bbc body=2176 status=ok
// SIG undefined FUN_143de5bbc(void)

void FUN_143de5bbc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84 [12];
  longlong *local_78;
  int local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54 [12];
  int local_48 [2];
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = FUN_14135d882();
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x20) != 0)) {
    FUN_141068cca(param_1);
    FUN_141068c44(param_1,local_54);
    local_58 = *(undefined4 *)(lVar7 + 0x28);
    local_60 = *(undefined8 *)(lVar7 + 0x20);
    FUN_14891b476(local_48,&local_60,local_54);
    uVar8 = FUN_141068cca(param_1);
    FUN_140c588ef(&local_78,uVar8);
    if ((local_48[0] == (int)local_78) && (local_40 == local_70)) {
      FUN_141068cca(param_1);
      FUN_141068c44(param_1,local_84);
      local_88 = *(undefined4 *)(lVar7 + 0x28);
      local_90 = *(undefined8 *)(lVar7 + 0x20);
      FUN_14891b28e(&local_78,&local_90,local_84);
      FUN_14592735c(param_1,0,&local_78);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) goto LAB_143de5ca0;
  if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar7 + 8) + lVar11) == DAT_14cb86208) {
        FUN_1410cfe3c(param_1);
        lVar7 = *(longlong *)(param_1 + 0x28);
        break;
      }
      lVar11 = lVar11 + 0x28;
    } while ((longlong)*(int *)(lVar7 + 0x10) * 0x28 != lVar11);
    if (lVar7 == 0) goto LAB_143de5ca0;
  }
  if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar7 + 8) + lVar11) == DAT_14cb86210) {
        FUN_1488fae06(param_1);
        local_78 = (longlong *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,4,0x10);
        local_70 = 4;
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 == (longlong *)0x0) goto LAB_143de5f13;
        iVar9 = (int)plVar3[1];
        goto LAB_143de5d26;
      }
      lVar11 = lVar11 + 0x28;
    } while ((longlong)*(int *)(lVar7 + 0x10) * 0x28 != lVar11);
    goto LAB_143de5c69;
  }
  goto LAB_143de5c6e;
  while( true ) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar12 = iVar9 == iVar5;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar9 + 1;
      iVar5 = iVar9;
    }
    iVar9 = iVar5;
    UNLOCK();
    if (bVar12) break;
LAB_143de5d26:
    if (iVar9 == 0) goto LAB_143de5f13;
  }
  lVar7 = *(longlong *)(param_1 + 8);
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  *local_78 = (longlong)&PTR_LAB_14a8bcc20;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_78[2] = lVar10;
  *local_78 = (longlong)&PTR_FUN_14b418de0;
  local_78[3] = lVar7;
  local_78[4] = (longlong)plVar3;
  LOCK();
  *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
  UNLOCK();
  local_78[5] = (longlong)&LAB_143de643e;
  *(undefined4 *)(local_78 + 6) = 0;
  LOCK();
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar3)(plVar3);
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
  LOCK();
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143de5f60:
  if (((local_70 == 0) || (local_78 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*local_78 + 0x30))(), uVar4 = DAT_14cadbeb8, cVar6 == '\0')) {
    if (local_70 == 0) goto LAB_143de6272;
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_143de6265;
    }
  }
  else {
    if ((DAT_14cadbec4 < 1) &&
       (DAT_14cadbec0 = DAT_14cadbec0 + -1, DAT_14cadbec0 <= (int)DAT_14cadbeb8)) {
      if (0 < (int)DAT_14cadbeb8) {
        iVar9 = 0;
        do {
          if (((*(int *)(DAT_14cadbeb0 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(DAT_14cadbeb0 + (longlong)iVar9 * 0x10),
              plVar3 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(&DAT_14cadbeb0,iVar9);
            FUN_14005b248(&DAT_14cadbeb0);
          }
          else {
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)DAT_14cadbeb8);
      }
      DAT_14cadbec0 = 2;
      if (2 < (int)(DAT_14cadbeb8 * 2)) {
        DAT_14cadbec0 = DAT_14cadbeb8 * 2;
      }
      if ((DAT_14cadbec0 < (int)uVar4) && (DAT_14cadbebc != DAT_14cadbeb8)) {
        FUN_14045812c();
      }
    }
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x38))(local_78,local_48);
    }
    uVar4 = DAT_14cadbeb8;
    lVar7 = (longlong)(int)DAT_14cadbeb8;
    DAT_14cadbeb8 = DAT_14cadbeb8 + 1;
    if (DAT_14cadbebc < DAT_14cadbeb8) {
      FUN_1447a71f6(&DAT_14cadbeb0,uVar4);
    }
    lVar11 = DAT_14cadbeb0;
    lVar7 = lVar7 * 0x10;
    *(undefined8 *)(DAT_14cadbeb0 + lVar7) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar7) = 0;
    *(longlong **)(lVar11 + lVar7) = local_78;
    local_78 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar7) = local_70;
LAB_143de6265:
    local_70 = 0;
LAB_143de6272:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
LAB_143de5c69:
  if (lVar7 != 0) {
LAB_143de5c6e:
    if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 8) + lVar11) == DAT_14cb86200) {
          local_78 = (longlong *)0x0;
          local_70 = 0;
          FUN_1446efa72(&local_78,0,4,0x10);
          local_70 = 4;
          plVar3 = *(longlong **)(param_1 + 0x10);
          if (plVar3 == (longlong *)0x0) goto LAB_143de6013;
          iVar9 = (int)plVar3[1];
          goto LAB_143de5e3e;
        }
        lVar11 = lVar11 + 0x28;
      } while ((longlong)*(int *)(lVar7 + 0x10) * 0x28 != lVar11);
    }
  }
  goto LAB_143de5ca0;
LAB_143de5f13:
  *local_78 = (longlong)&PTR_LAB_14a8bcc20;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_78[2] = lVar11;
  *local_78 = (longlong)&PTR_FUN_14b418de0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = (longlong)&LAB_143de643e;
  *(undefined4 *)(local_78 + 6) = 0;
  goto LAB_143de5f60;
LAB_143de6013:
  *local_78 = (longlong)&PTR_LAB_14a8bcd00;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_78[2] = lVar11;
  *local_78 = (longlong)&PTR_FUN_14b418e50;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = (longlong)FUN_143de6444;
  *(undefined4 *)(local_78 + 6) = 0;
  goto LAB_143de6060;
  while( true ) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar12 = iVar9 == iVar5;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar9 + 1;
      iVar5 = iVar9;
    }
    iVar9 = iVar5;
    UNLOCK();
    if (bVar12) break;
LAB_143de5e3e:
    if (iVar9 == 0) goto LAB_143de6013;
  }
  lVar7 = *(longlong *)(param_1 + 8);
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  *local_78 = (longlong)&PTR_LAB_14a8bcd00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_78[2] = lVar10;
  *local_78 = (longlong)&PTR_FUN_14b418e50;
  local_78[3] = lVar7;
  local_78[4] = (longlong)plVar3;
  LOCK();
  *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
  UNLOCK();
  local_78[5] = (longlong)FUN_143de6444;
  *(undefined4 *)(local_78 + 6) = 0;
  LOCK();
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar3)(plVar3);
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
  LOCK();
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143de6060:
  if (((local_70 == 0) || (local_78 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*local_78 + 0x30))(), uVar4 = DAT_14cadbed0, cVar6 == '\0')) {
    if (local_70 != 0) {
      if (local_78 == (longlong *)0x0) goto LAB_143de5ca0;
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_143de6303;
    }
  }
  else {
    if ((DAT_14cadbedc < 1) &&
       (DAT_14cadbed8 = DAT_14cadbed8 + -1, DAT_14cadbed8 <= (int)DAT_14cadbed0)) {
      if (0 < (int)DAT_14cadbed0) {
        iVar9 = 0;
        do {
          if (((*(int *)(DAT_14cadbec8 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(DAT_14cadbec8 + (longlong)iVar9 * 0x10),
              plVar3 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(&DAT_14cadbec8,iVar9);
            FUN_14005b248(&DAT_14cadbec8);
          }
          else {
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)DAT_14cadbed0);
      }
      DAT_14cadbed8 = 2;
      if (2 < (int)(DAT_14cadbed0 * 2)) {
        DAT_14cadbed8 = DAT_14cadbed0 * 2;
      }
      if ((DAT_14cadbed8 < (int)uVar4) && (DAT_14cadbed4 != DAT_14cadbed0)) {
        FUN_14045812c();
      }
    }
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x38))(local_78,local_48);
    }
    uVar4 = DAT_14cadbed0;
    lVar7 = (longlong)(int)DAT_14cadbed0;
    DAT_14cadbed0 = DAT_14cadbed0 + 1;
    if (DAT_14cadbed4 < DAT_14cadbed0) {
      FUN_1447a71f6(&DAT_14cadbec8,uVar4);
    }
    lVar11 = DAT_14cadbec8;
    lVar7 = lVar7 * 0x10;
    *(undefined8 *)(DAT_14cadbec8 + lVar7) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar7) = 0;
    *(longlong **)(lVar11 + lVar7) = local_78;
    local_78 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar7) = local_70;
LAB_143de6303:
    local_70 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143de5ca0:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de6444 FUN_143de6444 body=343 status=ok
// SIG undefined FUN_143de6444(void)

void FUN_143de6444(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1411c2940();
  lVar2 = FUN_1410d0064(param_1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    local_88 = FUN_143de659c;
    local_80 = 0;
    FUN_1410d00d8(&local_a0,param_1,&local_88);
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 0;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x80,&local_88,0x800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_98 != 0) {
      if (local_a0 == (undefined8 *)0x0) goto LAB_143de655f;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143de655f:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de659c FUN_143de659c body=117 status=ok
// SIG undefined FUN_143de659c(void)

void FUN_143de659c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x6c) != 0) && (uVar1 = *(uint *)(param_1 + 0x68), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x6c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      cVar2 = FUN_1488f6768(param_1);
      if (cVar2 != '\0') {
        FUN_140170a76(param_1,&DAT_14cb86200);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143de6612 FUN_143de6612 body=447 status=ok
// SIG undefined FUN_143de6612(void)

void FUN_143de6612(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 == 0) goto LAB_143de6635;
  uVar3 = FUN_14652e6c2();
  cVar2 = FUN_1448093f4(lVar5,uVar3);
  if (cVar2 == '\0') goto LAB_143de6635;
  lVar1 = param_1 + 0x88;
  *(undefined1 *)(param_1 + 0x88) = 0xb;
  FUN_140c25b54(lVar1);
  local_38 = *(undefined4 *)(lVar5 + 0x10);
  local_40 = *(undefined8 *)(lVar5 + 8);
  FUN_144928d62(param_1 + 0x98,0);
  uVar3 = FUN_140db9074(param_1);
  FUN_140e29818(param_1,&local_58);
  FUN_140d84843(lVar1,&local_58,&DAT_14c948618,uVar3);
  if (*(char *)(param_1 + 0x88) == '\v') goto LAB_143de6635;
  cVar2 = FUN_1401144ce(lVar1);
  if (cVar2 == '\0') goto LAB_143de6635;
  uVar3 = FUN_140ec3c88(param_1);
  plVar4 = (longlong *)FUN_140ec3c65(uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_143de6635;
  FUN_1488fb21c(&local_58,param_1);
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_48,lVar1,&local_58);
  *(undefined8 *)(param_1 + 0xc0) = local_48;
  if (local_50 == 0) {
LAB_143de6778:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143de6778;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar1);
    if (lVar5 != 0) {
      local_68 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        local_68 = lVar5;
      }
      local_60 = *(undefined4 *)(lVar5 + 0x18);
      FUN_1488fb3e0(param_1);
    }
  }
LAB_143de6635:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de67d2 FUN_143de67d2 body=206 status=ok
// SIG undefined FUN_143de67d2(void)

undefined8 * FUN_143de67d2(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_3[1] != 0) && (param_3[2] != 0)) && (0 < *(int *)(param_3[2] + 8))) {
    lVar1 = (**(code **)(*(longlong *)*param_3 + 0x70))();
    if (lVar1 != 0) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        lVar1 = (**(code **)(*(longlong *)*param_3 + 0x68))();
      }
      else {
        local_28 = *(undefined4 *)(param_1 + 0x34);
        local_30 = *(undefined8 *)(param_1 + 0x2c);
        lVar1 = FUN_140f54c6c(lVar1);
      }
      if (lVar1 != 0) {
        lVar1 = FUN_148910c6e(lVar1,*(undefined8 *)(param_1 + 0x38));
        if (lVar1 != 0) {
          local_38 = *(undefined4 *)(param_1 + 0x28);
          local_40 = *(undefined8 *)(param_1 + 0x20);
          FUN_143dfad76(lVar1);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de68a2 FUN_143de68a2 body=126 status=ok
// SIG undefined FUN_143de68a2(void)

undefined8 FUN_143de68a2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1408226d0(param_1 + 0x20,&local_28,1);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"PenaltyName: %s, Seconds: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143de6922 FUN_143de6922 body=46 status=ok
// SIG undefined FUN_143de6922(void)

undefined8 * FUN_143de6922(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  (**(code **)(*(longlong *)*param_3 + 0xa8))((longlong *)*param_3,param_1 + 0x20,1);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143de696b FUN_143de696b body=64 status=ok
// SIG undefined FUN_143de696b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143de696b(void)

{
  if (DAT_14cb85f98 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb85f90 = 0;
  if (DAT_14cb85f88 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb85f48);
  return;
}



// FUNCTION 143de69ab FUN_143de69ab body=41 status=ok
// SIG undefined FUN_143de69ab(void)

void FUN_143de69ab(void)

{
  DAT_14cb86010 = 0;
  if (DAT_14cb86008 != 0) {
    FUN_1400020a8();
  }
  FUN_145d672b0();
  return;
}



// FUNCTION 143de6a12 FUN_143de6a12 body=89 status=ok
// SIG undefined FUN_143de6a12(void)

char FUN_143de6a12(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 == 0) {
    cVar4 = '\x01';
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
      if (cVar4 == '\0') {
        return '\0';
      }
      bVar6 = (longlong)iVar1 * 0x10 + -0x10 != lVar5;
      lVar5 = lVar5 + 0x10;
    } while (bVar6);
  }
  return cVar4;
}



// FUNCTION 143de6a6b FUN_143de6a6b body=955 status=ok
// SIG undefined FUN_143de6a6b(void)

undefined8 * FUN_143de6a6b(undefined8 *param_1,int *param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  short *psVar7;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  int local_40;
  undefined1 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_2 == 0) || (param_3 == (longlong *)0x0)) goto LAB_143de6ba5;
  pcVar2 = *(code **)(*param_3 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar3 = param_3[0x76];
    if (lVar3 == 0) {
      pcVar2 = *(code **)(*param_3 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_3[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)param_3 + 0x75b4) == 0) ||
               (uVar1 = *(uint *)(param_3 + 0xeb6), (int)uVar1 < 0)) ||
              (DAT_14c9647dc <= (int)uVar1)) ||
             (((plVar5 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)((longlong)param_3 + 0x75b4))
               ) || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_143de6ba5;
          if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar5;
          }
          else {
            lVar3 = 0;
          }
          lVar3 = lVar3 + 0x110;
        }
        else {
          lVar3 = (**(code **)(param_3[0x784] + 0x18))(param_3 + 0x784);
        }
        if (lVar3 == 0) goto LAB_143de6ba5;
        lVar3 = *(longlong *)(lVar3 + 0x20);
      }
      else {
        lVar3 = (*pcVar2)(param_3);
      }
      if (lVar3 == 0) goto LAB_143de6ba5;
      lVar3 = *(longlong *)(lVar3 + 0x3b0);
      goto LAB_143de6b80;
    }
  }
  else {
    lVar3 = (*pcVar2)(param_3);
LAB_143de6b80:
    if (lVar3 == 0) goto LAB_143de6ba5;
  }
  lVar4 = FUN_140082f10();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    lVar4 = FUN_1447210f0(param_3);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x1f0), lVar4 != 0)) {
      if (DAT_14cb5e538 == 0) {
        local_60 = &local_48;
        local_48 = &LAB_1417c5d06;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1417ad04a;
        local_68 = &LAB_1486a7af7;
        local_70 = &LAB_1464e1631;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x1000000c;
        local_90 = 8;
        local_98 = (undefined *)CONCAT44(local_98._4_4_,0x420);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      }
      if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) {
        plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x1c0) + 0x10))(lVar4 + 0x1c0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
          if ((lVar4 != 0) && (plVar5 = *(longlong **)(lVar4 + 0xe0), plVar5 != (longlong *)0x0)) {
            local_38 = 0;
            local_34 = 0;
            if (param_4 == '\0') {
              local_38 = 1;
              psVar7 = (short *)(lVar3 + 0x538);
            }
            else {
              if (((((*(int *)(lVar3 + 0x4e4) == 0) ||
                    (uVar1 = *(uint *)(lVar3 + 0x4e0), (int)uVar1 < 0)) ||
                   (DAT_14c9647dc <= (int)uVar1)) ||
                  ((plVar6 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(lVar3 + 0x4e4))))) ||
                 (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0))))
              goto LAB_143de6ba5;
              local_38 = 2;
              psVar7 = (short *)(*plVar6 + 0x420);
            }
            local_34 = (int)*psVar7;
            local_40 = param_2[2];
            local_48 = *(undefined1 **)param_2;
            local_98 = &DAT_14cb86b30;
            (**(code **)(*plVar5 + 0xa0))(plVar5,param_1);
            if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return param_1;
          }
        }
      }
    }
  }
LAB_143de6ba5:
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 143de6e28 FUN_143de6e28 body=844 status=ok
// SIG undefined FUN_143de6e28(void)

void FUN_143de6e28(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined ***pppuVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14060ed7a();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  bVar10 = true;
  if (lVar7 == 0) {
    lVar7 = 0;
    if ((lVar6 != 0) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_143de7160:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar4 == '\0') goto LAB_143de7160;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar7;
    }
    bVar10 = lVar7 != 0;
  }
  if ((param_1 == (longlong *)0x0) || (!bVar10)) goto LAB_143de711a;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14060ed7a();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
    lVar7 = param_2[2];
  }
  if (lVar7 == 0) {
    param_2[2] = 0;
    lVar7 = 0;
    if ((lVar6 != 0) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_143de7167:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar4 == '\0') goto LAB_143de7167;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar7;
    }
  }
  if (*(char *)(lVar7 + 0x750) != '\x01') goto LAB_143de711a;
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar6 == 0) goto LAB_143de711a;
  lVar6 = FUN_1411db1ae(lVar6);
  if ((lVar6 == 0) || (plVar2 = *(longlong **)(lVar6 + 0xe0), plVar2 == (longlong *)0x0))
  goto LAB_143de711a;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b4197f0;
  local_40 = &LAB_143dee536;
  local_68[0] = &LAB_14890a6ea;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14060ed7a();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_143de716e:
      lVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_143de716e;
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar7;
  }
  piVar8 = &DAT_14c9485f0;
  if (*(int **)(lVar7 + 8) != (int *)0x0) {
    piVar8 = *(int **)(lVar7 + 8);
  }
  if (((*piVar8 == 0) || (iVar1 = piVar8[1], iVar1 == 0)) || (*piVar8 == DAT_14c948000)) {
LAB_143de7141:
    local_80 = DAT_14c948620;
    local_88 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar8[9] < 1)) {
      piVar8 = piVar8 + 2;
    }
    else {
      piVar8 = *(int **)(piVar8 + 6);
    }
    if (iVar1 < 1) goto LAB_143de7141;
    local_80 = piVar8[2];
    local_88 = *(undefined8 *)piVar8;
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,&local_88,&local_78,local_68);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar9 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar9 = &local_48;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if ((longlong)(int)uStack_70 != 0) {
    lVar6 = 0;
    do {
      uVar5 = *(undefined8 *)(*(longlong *)(local_78 + lVar6) + 0x90);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(longlong *)(local_78 + lVar6) + 0x98);
      *param_3 = uVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)uStack_70 * 8 != lVar6);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_143de711a:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de7176 FUN_143de7176 body=1169 status=ok
// SIG undefined FUN_143de7176(void)

void FUN_143de7176(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined4 local_70;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_14060ed7a();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  bVar12 = true;
  if (lVar8 == 0) {
    lVar8 = 0;
    if ((lVar7 != 0) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar6,param_2);
      }
      param_2[2] = lVar8;
    }
    bVar12 = lVar8 != 0;
  }
  if ((param_1 == (longlong *)0x0) || (!bVar12)) goto LAB_143de72ef;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_14060ed7a();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
    lVar8 = param_2[2];
  }
  if (lVar8 == 0) {
    param_2[2] = 0;
    lVar8 = 0;
    if ((lVar7 != 0) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar6,param_2);
      }
      param_2[2] = lVar8;
    }
  }
  if ((*(char *)(lVar8 + 0x750) != '\x01') ||
     (lVar7 = (**(code **)(*param_3 + 0x5d8))(param_3), lVar7 == 0)) goto LAB_143de72ef;
  if (DAT_14cb61cd0 == 0) {
    local_b0 = &local_78;
    local_78 = FUN_141030f22;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1463b31ae;
    local_b8 = &LAB_1486dca4f;
    local_c0 = &LAB_1464f50a6;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 8;
    local_e8 = 0xd70;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
  }
  if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) ||
      (lVar8 = (**(code **)(*param_1 + 0x180))(param_1), lVar8 == 0)) ||
     ((lVar8 = FUN_1411db1ae(lVar8), lVar8 == 0 ||
      (plVar2 = *(longlong **)(lVar8 + 0xe0), plVar2 == (longlong *)0x0)))) goto LAB_143de72ef;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b419810;
  local_78 = FUN_143dee542;
  lVar8 = param_2[1];
  local_50 = lVar7;
  if (lVar8 == 0) {
    uVar6 = FUN_14060ed7a();
    lVar8 = FUN_14477b664(uVar6);
    param_2[1] = lVar8;
  }
  lVar7 = param_2[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar6,param_2);
    }
    param_2[2] = lVar7;
  }
  piVar9 = &DAT_14c9485f0;
  if (*(int **)(lVar7 + 8) != (int *)0x0) {
    piVar9 = *(int **)(lVar7 + 8);
  }
  if (((*piVar9 == 0) || (iVar1 = piVar9[1], iVar1 == 0)) || (*piVar9 == DAT_14c948000)) {
LAB_143de7533:
    local_90 = DAT_14c948620;
    local_98 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar9[9] < 1)) {
      piVar9 = piVar9 + 2;
    }
    else {
      piVar9 = *(int **)(piVar9 + 6);
    }
    if (iVar1 < 1) goto LAB_143de7533;
    local_90 = piVar9[2];
    local_98 = *(undefined8 *)piVar9;
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,&local_98,&local_88,&local_78);
  if (local_78 != (code *)0x0) {
    pppuVar10 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar10 = &local_58;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  lVar7 = local_88;
  lVar8 = (longlong)(int)uStack_80;
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      local_70 = *(undefined4 *)(*(longlong *)(lVar7 + lVar11) + 0x98);
      local_78 = *(code **)(*(longlong *)(lVar7 + lVar11) + 0x90);
      iVar1 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
        FUN_1487b79dc(param_4,iVar1);
      }
      lVar4 = *param_4;
      *(undefined4 *)(lVar4 + 8 + (longlong)iVar1 * 0xc) = local_70;
      *(code **)(lVar4 + (longlong)iVar1 * 0xc) = local_78;
      lVar11 = lVar11 + 8;
    } while (lVar8 * 8 != lVar11);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
LAB_143de72ef:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143de7608 FUN_143de7608 body=407 status=ok
// SIG undefined FUN_143de7608(void)

ulonglong FUN_143de7608(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined7 uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  undefined4 local_28;
  ulonglong local_20;
  ulonglong uVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (**(code **)(*param_3 + 0x5d8))(param_3);
  if (lVar3 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463b31ae;
      local_58 = &LAB_1486dca4f;
      local_60 = &LAB_1464f50a6;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar5 = 0;
      if (lVar4 == 0) {
LAB_143de76df:
        bVar2 = (byte)lVar5;
        bVar6 = 0;
        uVar8 = 0;
      }
      else {
        lVar5 = FUN_1411db1ae(lVar4);
        if ((lVar5 == 0) || (*(longlong **)(lVar5 + 0xe0) == (longlong *)0x0)) goto LAB_143de76df;
        local_28 = *(undefined4 *)(param_2 + 1);
        local_30 = (code *)*param_2;
        lVar5 = (**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x10))();
        uVar8 = (undefined7)((ulonglong)param_2 >> 8);
        bVar6 = 1;
        if (lVar5 == 0) {
LAB_143de76db:
          bVar2 = 0;
        }
        else {
          cVar1 = FUN_14890e636(lVar5);
          if (cVar1 == '\0') goto LAB_143de76db;
          bVar2 = FUN_146002902(lVar5,lVar3);
        }
      }
      uVar7 = CONCAT71(uVar8,bVar6 & bVar2);
      goto LAB_143de766b;
    }
  }
  uVar7 = 0;
LAB_143de766b:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de77a0 FUN_143de77a0 body=183 status=ok
// SIG undefined FUN_143de77a0(void)

undefined8 FUN_143de77a0(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b4197f0;
  local_30 = &LAB_143dee9c4;
  local_58 = &LAB_14890a6ea;
  (**(code **)(*param_1 + 0xb8))();
  if (local_58 != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((int)uStack_60 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *local_68;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de7858 FUN_143de7858 body=515 status=ok
// SIG undefined FUN_143de7858(void)

void FUN_143de7858(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined4 *)(param_2 + 0x98);
  local_30 = *(undefined8 *)(param_2 + 0x90);
  FUN_1410d2738(param_1 + 0x28);
  if (((*(int *)((longlong)param_1 + 0x54) != 0) &&
      (uVar1 = *(uint *)(param_1 + 10), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x54))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
      FUN_1405f658a();
    }
  }
  local_28 = *(undefined4 *)(param_2 + 0x98);
  local_30 = *(undefined8 *)(param_2 + 0x90);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar3 = FUN_140f42f34(param_2);
  if (lVar3 != 0) {
    cVar2 = FUN_1405f61f4(lVar3);
    if ((((byte)(cVar2 - 5U) < 2) && (*(int *)((longlong)param_1 + 0x5c) != 0)) &&
       ((uVar1 = *(uint *)(param_1 + 0xb), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x5c)))
          && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
         ((longlong *)*plVar6 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*(longlong *)*plVar6 + 0x2b8))();
        if (lVar3 != 0) {
          lVar3 = *(longlong *)(lVar3 + 200);
          if (lVar3 == 0) {
            piVar4 = &DAT_14c948620;
            piVar5 = (int *)&DAT_14c948618;
          }
          else {
            piVar5 = (int *)(lVar3 + 8);
            piVar4 = (int *)(lVar3 + 0x10);
          }
          if ((((*piVar5 != 0) && (*piVar5 == *(int *)(param_2 + 0x90))) &&
              ((*piVar4 == *(int *)(param_2 + 0x98) &&
               ((*(int *)((longlong)param_1 + 0x5c) != 0 &&
                (uVar1 = *(uint *)(param_1 + 0xb), -1 < (int)uVar1)))))) &&
             ((int)uVar1 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar7 != (undefined8 *)0x0) &&
                (*(int *)(puVar7 + 2) == *(int *)((longlong)param_1 + 0x5c))) &&
               ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
                plVar6 = (longlong *)*puVar7;
              }
              else {
                plVar6 = (longlong *)0x0;
              }
              plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b8))();
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x20 + (ulonglong)(cVar2 != '\x06') * 8))(plVar6);
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de7a5c FUN_143de7a5c body=1378 status=ok
// SIG undefined FUN_143de7a5c(void)

undefined8 *
FUN_143de7a5c(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,int *param_5,
             int *param_6,undefined2 **param_7)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  undefined2 **local_198;
  int *local_190;
  int *local_188;
  undefined2 **local_180;
  int *local_178;
  longlong local_170;
  undefined4 local_168;
  int *local_160;
  longlong local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 *local_128;
  undefined8 uStack_120;
  undefined2 *local_118;
  undefined *local_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined8 local_e0;
  undefined2 *local_d8;
  ulonglong uStack_d0;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [24];
  longlong local_a8;
  int local_98 [8];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_f8 = 0;
  uStack_f0 = 0;
  local_118 = &DAT_14a171d50;
  local_108 = 0;
  uStack_100 = 0;
  local_110 = &DAT_14cb70058;
  local_128 = (undefined2 *)0x0;
  uStack_120 = 0;
  local_138 = *param_3;
  local_130 = *(undefined4 *)(param_3 + 1);
  FUN_1448075d0(local_c0);
  lVar6 = FUN_14060eaf6(local_c0);
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar5 = *(uint *)(param_1 + 0x58);
    uVar12 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_143de7b4d;
    puVar10 = (undefined8 *)
              ((ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((puVar10 != (undefined8 *)0x0) &&
       ((*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x5c) &&
        ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))) {
      uVar12 = *puVar10;
      goto LAB_143de7b4d;
    }
  }
  uVar12 = 0;
LAB_143de7b4d:
  bVar2 = false;
  if (lVar6 != 0) {
    local_160 = param_4;
    local_158 = param_1;
    local_150 = param_3;
    local_148 = param_2;
    uVar5 = rand();
    local_c8 = (int)(((float)(uVar5 & 0x7fff) / 32767.0) * 2.1474836e+09);
    local_d8 = (undefined2 *)0x0;
    uStack_d0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c4 = local_c8;
    if (0 < *(int *)(lVar6 + 0xa8)) {
      local_140 = lVar6 + 0x430;
      lVar11 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar6 + 0xa0) + lVar11 * 0x130);
        cVar4 = *(char *)(*(longlong *)(lVar6 + 0xa0) + 8 + lVar11 * 0x130);
        if (cVar4 == '\x01') {
          local_198 = (undefined2 **)FUN_140b01269(uVar12,plVar1,lVar6);
          local_188 = param_5;
          local_190 = local_98;
          local_168 = 0x7f7fc99e;
          local_180 = &local_118;
          local_178 = &local_c8;
          local_170 = lVar6;
          cVar4 = FUN_143de98a3(uVar12,plVar1,&local_f8,&local_d8);
          if (cVar4 == '\0') {
LAB_143de7e25:
            bVar2 = false;
            goto LAB_143de7e27;
          }
        }
        else if (cVar4 == '\0') {
          local_e0 = 0;
          if (*(int *)(lVar6 + 0x400) != *(int *)(lVar6 + 0x42c)) {
            lVar13 = *plVar1;
            uVar5 = (uint)((ulonglong)lVar13 >> 0x10);
            uVar9 = (uint)lVar13 & 0xffff;
            lVar8 = *(longlong *)(lVar6 + 0x438);
            if (*(longlong *)(lVar6 + 0x438) == 0) {
              lVar8 = local_140;
            }
            iVar7 = *(int *)(lVar8 + (ulonglong)
                                     (*(int *)(lVar6 + 0x440) - 1U &
                                     (int)((ulonglong)lVar13 >> 0x20) +
                                     ((uint)lVar13 << 0x10 | uVar9) +
                                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
            if (iVar7 != -1) {
              do {
                lVar8 = *(longlong *)(lVar6 + 0x3f8) + (longlong)iVar7 * 0x20;
                if (*(longlong *)(*(longlong *)(lVar6 + 0x3f8) + (longlong)iVar7 * 0x20) == lVar13)
                goto LAB_143de7cd9;
                iVar7 = *(int *)(lVar8 + 0x18);
              } while (iVar7 != -1);
            }
          }
          lVar8 = 0;
LAB_143de7cd9:
          lVar13 = lVar8 + 8;
          if (lVar8 == 0) {
            lVar13 = 0;
          }
          local_198 = &local_118;
          local_190 = &local_c8;
          cVar4 = FUN_143dec0ec(uVar12,lVar13,&local_f8,&local_e0);
          uVar3 = uStack_120;
          if (cVar4 == '\0') goto LAB_143de7e25;
          lVar13 = (longlong)(int)uStack_120;
          uVar5 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
          if (uStack_120._4_4_ < uVar5) {
            FUN_141883fee(&local_128,uVar3 & 0xffffffff);
          }
          *(longlong *)(local_128 + lVar13 * 8) = *plVar1;
          *(undefined8 *)(local_128 + lVar13 * 8 + 4) = local_e0;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(lVar6 + 0xa8));
    }
    local_178 = local_98;
    local_180 = &local_d8;
    local_188 = &local_c8;
    local_198 = &local_118;
    local_190 = (int *)CONCAT44(local_190._4_4_,0x7f7fc99e);
    FUN_143ded0ad(lVar6,uVar12,&local_f8,param_5);
    bVar2 = true;
LAB_143de7e27:
    param_3 = local_150;
    param_1 = local_158;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1405d7ae6(local_98);
    FUN_1405d7ab2(local_d8,uStack_d0 & 0xffffffff);
    param_2 = local_148;
    param_4 = local_160;
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (bVar2) {
    local_180 = param_7;
    local_188 = param_6;
    local_198 = &local_128;
    local_190 = param_4;
    FUN_143de7fc0(param_1,param_2,param_3,&local_f8);
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_118 = &DAT_14a171d50;
  uVar3 = uStack_100 >> 0x20;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_140115c12(&local_108,0);
  }
  local_110 = (undefined *)0x0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de7fc0 FUN_143de7fc0 body=469 status=ok
// SIG undefined FUN_143de7fc0(void)

undefined8 *
FUN_143de7fc0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((char)param_1[0x33] == '\x02') {
    lVar3 = FUN_140d7e454();
    if (lVar3 != 0) {
      cVar2 = (**(code **)(*param_1 + 0xb0))(param_1,param_3,param_6);
      if (cVar2 != '\0') {
        local_80 = *param_3;
        local_78 = *(undefined4 *)(param_3 + 1);
        FUN_1448075d0(&local_70);
        lVar4 = FUN_14060eaf6(&local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (((*(int *)((longlong)param_1 + 0x5c) != 0) &&
            (uVar1 = *(uint *)(param_1 + 0xb), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x5c))
              ) && (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((lVar4 != 0 && (*plVar5 != 0)))))
             ) {
            cVar2 = FUN_140afa2b5(*plVar5,lVar4);
            if (cVar2 != '\0') {
              local_98 = param_8;
              local_a0 = param_6;
              local_a8 = param_5;
              FUN_141295d46(lVar3,&local_70,param_3,param_4);
              if (local_70 != 0) {
                local_88 = local_68;
                FUN_14189c6e8(param_1,local_90,param_7);
                *param_2 = CONCAT44(uStack_6c,local_70);
                *(undefined4 *)(param_2 + 1) = local_68;
                goto LAB_143de815b;
              }
            }
          }
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
LAB_143de815b:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de8196 FUN_143de8196 body=145 status=ok
// SIG undefined FUN_143de8196(void)

undefined8 FUN_143de8196(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_48,&local_58);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
LAB_143de8200:
    uVar2 = 0;
  }
  else {
    if (*param_3 == '\0') {
      if (*(char *)(lVar1 + 0x751) == '\x01') goto LAB_143de8200;
    }
    else if (*(char *)(lVar1 + 0x751) != '\x01') goto LAB_143de8200;
    uVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de8234 FUN_143de8234 body=354 status=ok
// SIG undefined FUN_143de8234(void)

undefined8 *
FUN_143de8234(longlong *param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [48];
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 8))(param_1,param_3);
  if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x98))) && (*(char *)(lVar1 + 0x1ea) != '\x01')) {
    lVar2 = FUN_140f42f34(lVar1);
    if (((lVar2 == 0) || (*(char *)(*(longlong *)(lVar2 + 8) + 0x100) == '\0')) &&
       ((*(char *)(*(longlong *)(lVar1 + 0xa0) + 0x751) == '\x02' && (*param_4 != '\0')))) {
      lVar2 = FUN_14890df74(lVar1,param_4);
      if (lVar2 != 0) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x98);
        *param_2 = *(undefined8 *)(lVar2 + 0x90);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
      lVar2 = FUN_140d7e454(param_1);
      if (lVar2 != 0) {
        FUN_1488444c2(lVar2,&local_44,param_3,param_4);
        if (local_44 != 0) {
          local_48 = local_3c;
          FUN_14189c6e8(param_1,local_50,param_5);
          local_58 = local_3c;
          FUN_143df0334(lVar1);
          *(undefined4 *)(param_2 + 1) = local_3c;
          *param_2 = CONCAT44(uStack_40,local_44);
          goto LAB_143de82bd;
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
LAB_143de82bd:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de839a FUN_143de839a body=181 status=ok
// SIG undefined FUN_143de839a(void)

uint FUN_143de839a(undefined8 param_1,int *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_140d7e454();
  if (plVar1 != (longlong *)0x0) {
    if (param_3 == 0xfffffffe) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0xd0))(plVar1);
      if ((longlong)(int)plVar1[1] != 0) {
        lVar4 = 0;
        uVar3 = 0;
        do {
          if ((*param_2 == *(int *)(*plVar1 + lVar4)) &&
             (param_2[2] == *(int *)(*plVar1 + 8 + lVar4))) {
            return uVar3;
          }
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 0xc;
        } while ((longlong)(int)plVar1[1] * 0xc != lVar4);
      }
    }
    else {
      lVar4 = FUN_140d7e454(param_1);
      piVar2 = (int *)&DAT_14c948618;
      if (((lVar4 != 0) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(lVar4 + 0x168))) {
        piVar2 = (int *)((ulonglong)param_3 * 0xc + *(longlong *)(lVar4 + 0x160));
      }
      if ((*piVar2 == *param_2) && (piVar2[2] == param_2[2])) {
        return param_3;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143de8450 FUN_143de8450 body=202 status=ok
// SIG undefined FUN_143de8450(void)

void FUN_143de8450(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146556af0(param_1,&local_30);
  if (0 < local_28) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,local_30 + lVar4);
      if (plVar2 == (longlong *)0x0) {
LAB_143de84a6:
        *(undefined4 *)(local_30 + 8 + lVar4) = DAT_14c948620;
        *(undefined8 *)(local_30 + lVar4) = DAT_14c948618;
      }
      else {
        cVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2);
        if (cVar1 == '\0') goto LAB_143de84a6;
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar3 < local_28);
  }
  lVar3 = FUN_140d7e454(param_1);
  if (lVar3 != 0) {
    FUN_14612646c(lVar3,&local_30);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de851c FUN_143de851c body=219 status=ok
// SIG undefined FUN_143de851c(void)

undefined8 FUN_143de851c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x54))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
       (((plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0 &&
         (cVar3 = (**(code **)(*plVar4 + 0x490))(plVar4), cVar3 == '\0')) &&
        (cVar3 = (**(code **)(*plVar4 + 0x498))(plVar4), 0xfd < (byte)(cVar3 - 9U))))) {
      uVar1 = *(uint *)(param_1 + 0x54);
      uVar5 = (ulonglong)uVar1;
      if (((uVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x50), -1 < (int)uVar2)) &&
         (((int)uVar2 < DAT_14c9647dc &&
          (((plVar4 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == uVar1)) &&
           (uVar5 = (ulonglong)*(uint *)(plVar4 + 1), (*(uint *)(plVar4 + 1) & 0x10200000) == 0)))))
         ) {
        uVar5 = 0;
        if (((*plVar4 != 0) && (uVar5 = *(ulonglong *)(*plVar4 + 0x30), uVar5 != 0)) &&
           (*(char *)(uVar5 + 0x88) != '\0')) {
          return 0;
        }
      }
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143de85f8 FUN_143de85f8 body=107 status=ok
// SIG undefined FUN_143de85f8(void)

float FUN_143de85f8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((((((*(int *)(param_1 + 0x54) != 0) && (uVar1 = *(uint *)(param_1 + 0x50), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar3 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x54))))) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
       ((*plVar3 != 0 && (lVar2 = *(longlong *)(*plVar3 + 0x30), lVar2 != 0)))))) &&
     (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0)) {
    fVar4 = (float)*(double *)(lVar2 + 0x6d0);
  }
  return fVar4;
}



// FUNCTION 143de8696 FUN_143de8696 body=4620 status=ok
// SIG undefined FUN_143de8696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_143de8696(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  int *piVar29;
  byte bVar30;
  uint *puVar31;
  longlong *plVar32;
  longlong *plVar33;
  undefined4 *puVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  undefined4 *puVar38;
  longlong *plVar39;
  longlong lVar40;
  int iVar41;
  ulonglong uVar42;
  int iVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  longlong lVar46;
  int iVar47;
  ulonglong uVar48;
  bool bVar49;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_174;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  longlong local_160;
  longlong *local_158;
  uint local_14c;
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 local_120;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  ushort uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar36 = *(uint *)(param_3 + 0x13);
  uVar28 = (ulonglong)uVar36;
  uVar22 = *(uint *)(param_5 + 4);
  if (uVar36 != uVar22) goto LAB_143de955d;
  local_14c = uVar22;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar36 * 2 + 1);
  }
  local_160 = param_1;
  local_158 = param_4;
  local_138 = uVar28;
  if (*(int *)(param_2 + 0xc) <= (int)(uVar36 * 2)) {
    FUN_1409c5ac0(param_2);
  }
  puVar24 = (undefined8 *)FUN_140b78a92(param_2);
  *puVar24 = _DAT_14cb86240;
  *(undefined4 *)(puVar24 + 1) = DAT_14cb86244._4_4_;
  plVar39 = puVar24 + 2;
  if (*(byte *)(puVar24 + 6) == 0x1f) {
    puVar24 = (undefined8 *)*plVar39;
    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar24 = *param_3;
    FUN_1447715ec(puVar24 + 2,param_3 + 2);
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(puVar24 + 6) * 0x120)
                       );
    if (pcVar4 != (code *)0x0) {
      plVar33 = plVar39;
      if (0x18 < *(ushort *)(puVar24 + 5)) {
        plVar33 = (longlong *)puVar24[2];
      }
      (*pcVar4)(plVar33);
    }
    if (0x18 < *(ushort *)(puVar24 + 5)) {
      FUN_1400020a8(*plVar39);
    }
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_98 = (longlong *)*param_3;
    local_90 = *(undefined4 *)(param_3 + 1);
    FUN_1447715ec(&local_88,param_3 + 2);
    *(undefined2 *)(puVar24 + 5) = 0x38;
    puVar25 = (undefined8 *)FUN_14001cc68(0x38,0);
    puVar24[2] = puVar25;
    puVar25[2] = 0;
    puVar25[3] = 0;
    *(undefined4 *)(puVar25 + 4) = 0;
    puVar25[5] = 0;
    puVar25[6] = 0;
    *(undefined4 *)(puVar25 + 1) = local_90;
    *puVar25 = local_98;
    FUN_1447715ec(puVar25 + 2,&local_88);
    *(undefined1 *)(puVar24 + 6) = 0x1f;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  puVar24 = param_3 + 7;
  cVar20 = FUN_140114204(puVar24);
  local_148 = param_2;
  if (cVar20 == '\0') {
    if (((*(int *)(param_3 + 2) == 0) || (iVar41 = *(int *)((longlong)param_3 + 0x14), iVar41 == 0))
       || (*(int *)(param_3 + 2) == DAT_14c948000)) {
      local_178 = DAT_14c948620;
      local_168 = DAT_14c948618._4_4_;
      local_164 = (int)DAT_14c948618;
      local_16c = DAT_14c948620;
      local_174 = DAT_14c948618._4_4_;
      local_170 = (int)DAT_14c948618;
    }
    else {
      puVar25 = (undefined8 *)param_3[5];
      puVar26 = param_3 + 3;
      if (0 < *(int *)((longlong)param_3 + 0x34)) {
        puVar26 = puVar25;
      }
      piVar29 = (int *)&DAT_14c948618;
      if (1 < iVar41) {
        piVar29 = (int *)((longlong)puVar25 + 0xc);
      }
      puVar44 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
      if (1 < iVar41) {
        puVar44 = puVar25 + 2;
      }
      puVar34 = &DAT_14c948620;
      if (1 < iVar41) {
        puVar34 = (undefined4 *)((longlong)puVar25 + 0x14);
      }
      local_178 = *puVar34;
      local_174 = *(undefined4 *)puVar44;
      local_170 = *piVar29;
      if (1 < iVar41) {
        puVar26 = puVar25;
      }
      if ((iVar41 == 1) || (iVar41 < 3)) {
        local_164 = (int)DAT_14c948618;
        local_168 = DAT_14c948618._4_4_;
        local_16c = DAT_14c948620;
      }
      else {
        local_164 = *(int *)(puVar26 + 3);
        local_168 = *(undefined4 *)((longlong)puVar26 + 0x1c);
        local_16c = *(undefined4 *)(puVar26 + 4);
      }
    }
  }
  else {
    if (((*(int *)(param_3 + 9) == 0) || (uVar36 = *(uint *)((longlong)param_3 + 0x4c), uVar36 == 0)
        ) || ((*(int *)(param_3 + 9) == DAT_14c948000 || ((int)uVar36 < 2)))) {
      local_170 = (int)DAT_14c948618;
      piVar29 = (int *)&DAT_14c948618;
      local_174 = DAT_14c948618._4_4_;
      puVar34 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
      puVar38 = &DAT_14c948620;
      local_178 = DAT_14c948620;
    }
    else {
      lVar27 = param_3[0xc];
      local_170 = *(int *)(lVar27 + 0xc);
      local_174 = *(undefined4 *)(lVar27 + 0x10);
      local_178 = *(undefined4 *)(lVar27 + 0x14);
      if (uVar36 < 5) {
        piVar29 = (int *)&DAT_14c948618;
        puVar34 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
        puVar38 = &DAT_14c948620;
      }
      else {
        lVar27 = param_3[0xc];
        piVar29 = (int *)(lVar27 + 0x30);
        puVar34 = (undefined4 *)(lVar27 + 0x34);
        puVar38 = (undefined4 *)(lVar27 + 0x38);
      }
    }
    local_164 = *piVar29;
    local_168 = *puVar34;
    local_16c = *puVar38;
    puVar25 = (undefined8 *)FUN_140b78a92(param_2);
    *puVar25 = _DAT_14cb86258;
    *(undefined4 *)(puVar25 + 1) = DAT_14cb8625c._4_4_;
    plVar39 = puVar25 + 2;
    if (*(byte *)(puVar25 + 6) == 0x1f) {
      puVar25 = (undefined8 *)*plVar39;
      *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(param_3 + 8);
      *puVar25 = *puVar24;
      FUN_1447715ec(puVar25 + 2,param_3 + 9);
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar25 + 6) * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar33 = plVar39;
        if (0x18 < *(ushort *)(puVar25 + 5)) {
          plVar33 = (longlong *)puVar25[2];
        }
        (*pcVar4)(plVar33);
      }
      if (0x18 < *(ushort *)(puVar25 + 5)) {
        FUN_1400020a8(*plVar39);
      }
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_98 = (longlong *)*puVar24;
      local_90 = *(undefined4 *)(param_3 + 8);
      FUN_1447715ec(&local_88,param_3 + 9);
      *(undefined2 *)(puVar25 + 5) = 0x38;
      puVar26 = (undefined8 *)FUN_14001cc68(0x38,0);
      puVar25[2] = puVar26;
      puVar26[2] = 0;
      puVar26[3] = 0;
      *(undefined4 *)(puVar26 + 4) = 0;
      puVar26[5] = 0;
      puVar26[6] = 0;
      *(undefined4 *)(puVar26 + 1) = local_90;
      *puVar26 = local_98;
      FUN_1447715ec(puVar26 + 2,&local_88);
      *(undefined1 *)(puVar25 + 6) = 0x1f;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  cVar20 = FUN_140114204(puVar24);
  if (cVar20 == '\0') {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_d0 = *param_3;
    local_c8 = *(undefined4 *)(param_3 + 1);
    FUN_1447715ec(&local_c0,param_3 + 2);
  }
  else {
    FUN_140c258c2(puVar24,&local_d0);
  }
  local_128 = param_3;
  if (*(int *)((longlong)param_6 + 0x34) == 0) {
    iVar41 = (int)param_6[1];
    *(int *)(param_6 + 1) = iVar41 + 1;
    if (*(int *)((longlong)param_6 + 0xc) == iVar41) {
      FUN_14021b4e8(param_6,iVar41);
    }
    iVar47 = (int)param_6[5];
    if (iVar47 == 0) {
      iVar21 = -1;
    }
    else {
      iVar21 = iVar47 + 0x1e;
      if (-1 < iVar47 + -1) {
        iVar21 = iVar47 + -1;
      }
      iVar21 = iVar21 >> 5;
    }
    plVar39 = param_6 + 2;
    iVar37 = iVar47 + 1;
    iVar43 = iVar47 + 0x1f;
    if (-1 < iVar47) {
      iVar43 = iVar47;
    }
    if (iVar43 >> 5 == iVar21) {
      *(int *)(param_6 + 5) = iVar37;
    }
    else {
      if (*(int *)((longlong)param_6 + 0x2c) <= iVar47) {
        iVar21 = iVar47;
        if (iVar47 + 0x20U < 0xa0) {
          iVar37 = 0x80;
        }
        else {
          uVar36 = iVar47 + 0x20U >> 5;
          if (*(int *)((longlong)param_6 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar36) {
              uVar22 = uVar36;
            }
          }
          else {
            uVar22 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
          }
          uVar28 = (ulonglong)(uVar22 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar35 = (uint)(uVar28 + 0xf);
              if (uVar22 < 0x1ffd) {
                uVar28 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar28 + 0xf >> 4]];
              }
              else {
                uVar48 = (ulonglong)(uVar35 & 0xfffffff0);
                if (uVar48 < 0x7ff1) {
                  bVar30 = (&DAT_14c841e00)[uVar35 >> 4];
                  uVar42 = 0x32;
                  if (0x32 < bVar30) {
                    uVar42 = (ulonglong)bVar30;
                  }
                  uVar45 = 0x32 - (ulonglong)bVar30;
                  do {
                    uVar28 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar45 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar45 & 0xffffffff] & 0xf) == 0) goto LAB_143de9699;
                    lVar27 = uVar42 + 1 + uVar45;
                    uVar45 = uVar45 - 1;
                  } while (lVar27 != 0x33);
                }
                uVar28 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar28 = (ulonglong)DAT_14c841df8;
                }
                uVar28 = -uVar28 & (uVar48 + uVar28) - 1;
              }
            }
            else {
              uVar28 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar28,0);
              iVar21 = (int)param_6[5];
            }
          }
LAB_143de9699:
          iVar23 = (int)(uVar28 >> 2);
          iVar37 = -0x20;
          if ((int)uVar36 <= iVar23) {
            iVar37 = iVar23 << 5;
          }
        }
        *(int *)((longlong)param_6 + 0x2c) = iVar37;
        FUN_1446efbd8(plVar39,iVar21);
        iVar37 = (int)param_6[5] + 1;
      }
      iVar21 = iVar37 + 0x1f;
      if (-1 < iVar37) {
        iVar21 = iVar37;
      }
      *(int *)(param_6 + 5) = iVar37;
      if (iVar37 % 0x20 != 0) {
        plVar33 = (longlong *)param_6[4];
        if ((longlong *)param_6[4] == (longlong *)0x0) {
          plVar33 = plVar39;
        }
        bVar30 = -(char)(iVar37 % 0x20);
        *(uint *)((longlong)plVar33 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar33 + (longlong)(iVar21 >> 5) * 4) << (bVar30 & 0x1f)) >>
             (bVar30 & 0x1f);
      }
    }
    lVar27 = (longlong)iVar41;
    if ((longlong *)param_6[4] != (longlong *)0x0) {
      plVar39 = (longlong *)param_6[4];
    }
    bVar30 = (byte)iVar47 & 0x1f;
    puVar1 = (uint *)((longlong)plVar39 + (longlong)(iVar43 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar30 | 0xfffffffeU >> 0x20 - bVar30);
  }
  else {
    iVar41 = (int)param_6[6];
    lVar27 = (longlong)iVar41;
    iVar47 = *(int *)(*param_6 + 4 + lVar27 * 0x48);
    *(int *)(param_6 + 6) = iVar47;
    iVar21 = *(int *)((longlong)param_6 + 0x34) + -1;
    *(int *)((longlong)param_6 + 0x34) = iVar21;
    if (iVar21 != 0) {
      *(undefined4 *)(*param_6 + (longlong)iVar47 * 0x48) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_6 + 2);
  uVar36 = 1;
  puVar31 = (uint *)param_6[4];
  if ((uint *)param_6[4] == (uint *)0x0) {
    puVar31 = puVar1;
  }
  iVar47 = iVar41 + 0x1f;
  if (-1 < iVar41) {
    iVar47 = iVar41;
  }
  puVar31[iVar47 >> 5] = puVar31[iVar47 >> 5] | 1 << ((byte)iVar41 & 0x1f);
  lVar46 = *param_6;
  puVar24 = (undefined8 *)(lVar46 + lVar27 * 0x48);
  *puVar24 = *param_5;
  *(undefined2 *)(puVar24 + 1) = 0;
  *(undefined8 *)((longlong)puVar24 + 0xc) = 0;
  puVar25 = (undefined8 *)(lVar46 + 0x18 + lVar27 * 0x48);
  *puVar25 = 0;
  puVar25[1] = 0;
  *(undefined4 *)(puVar25 + 2) = 0;
  puVar25[3] = 0;
  puVar25[4] = 0;
  puVar25[-2] = local_d0;
  *(undefined4 *)(puVar25 + -1) = local_c8;
  FUN_1447715ec(puVar25,&local_c0);
  *(undefined4 *)(puVar25 + 5) = 0xffffffff;
  lVar27 = puVar25[-3];
  uVar22 = (uint)((ulonglong)lVar27 >> 0x10);
  uVar35 = (uint)lVar27 & 0xffff;
  uVar22 = ((uint)lVar27 << 0x10 | uVar35) + (int)((ulonglong)lVar27 >> 0x20) +
           (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar35 >> 4);
  uVar35 = (int)param_6[1] - *(int *)((longlong)param_6 + 0x34);
  if (1 < uVar35) {
    plVar39 = param_6 + 7;
    if ((longlong *)param_6[8] != (longlong *)0x0) {
      plVar39 = (longlong *)param_6[8];
    }
    iVar47 = *(int *)((longlong)plVar39 + (ulonglong)((int)param_6[9] - 1U & uVar22) * 4);
    if (iVar47 != -1) {
      do {
        plVar39 = (longlong *)(*param_6 + (longlong)iVar47 * 0x48);
        if (*plVar39 == lVar27) {
          if (plVar39[6] != 0) {
            FUN_1400020a8();
          }
          uVar5 = *(undefined4 *)puVar24;
          uVar6 = *(undefined4 *)((longlong)puVar24 + 4);
          uVar7 = *(undefined4 *)(puVar24 + 1);
          uVar8 = *(undefined4 *)((longlong)puVar24 + 0xc);
          uVar9 = *(undefined4 *)(puVar24 + 2);
          uVar10 = *(undefined4 *)((longlong)puVar24 + 0x14);
          uVar11 = *(undefined4 *)(puVar24 + 3);
          uVar12 = *(undefined4 *)((longlong)puVar24 + 0x1c);
          uVar13 = *(undefined4 *)(puVar24 + 4);
          uVar14 = *(undefined4 *)((longlong)puVar24 + 0x24);
          uVar15 = *(undefined4 *)(puVar24 + 5);
          uVar16 = *(undefined4 *)((longlong)puVar24 + 0x2c);
          uVar17 = *(undefined4 *)((longlong)puVar24 + 0x34);
          uVar18 = *(undefined4 *)(puVar24 + 7);
          uVar19 = *(undefined4 *)((longlong)puVar24 + 0x3c);
          *(undefined4 *)(plVar39 + 6) = *(undefined4 *)(puVar24 + 6);
          *(undefined4 *)((longlong)plVar39 + 0x34) = uVar17;
          *(undefined4 *)(plVar39 + 7) = uVar18;
          *(undefined4 *)((longlong)plVar39 + 0x3c) = uVar19;
          *(undefined4 *)(plVar39 + 4) = uVar13;
          *(undefined4 *)((longlong)plVar39 + 0x24) = uVar14;
          *(undefined4 *)(plVar39 + 5) = uVar15;
          *(undefined4 *)((longlong)plVar39 + 0x2c) = uVar16;
          *(undefined4 *)(plVar39 + 2) = uVar9;
          *(undefined4 *)((longlong)plVar39 + 0x14) = uVar10;
          *(undefined4 *)(plVar39 + 3) = uVar11;
          *(undefined4 *)((longlong)plVar39 + 0x1c) = uVar12;
          *(undefined4 *)plVar39 = uVar5;
          *(undefined4 *)((longlong)plVar39 + 4) = uVar6;
          *(undefined4 *)(plVar39 + 1) = uVar7;
          *(undefined4 *)((longlong)plVar39 + 0xc) = uVar8;
          FUN_14890b2c0(param_6,iVar41);
          goto LAB_143de8fab;
        }
        iVar47 = (int)plVar39[8];
      } while (iVar47 != -1);
    }
  }
  if (3 < uVar35) {
    uVar28 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
    lVar27 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar36 = 1 << ((byte)lVar27 & 0x1f);
  }
  if (((int)uVar35 < 1) || ((int)uVar36 <= (int)param_6[9])) {
    uVar22 = (int)param_6[9] - 1U & uVar22;
    *(uint *)((longlong)puVar24 + 0x44) = uVar22;
    plVar39 = (longlong *)param_6[8];
    if ((longlong *)param_6[8] == (longlong *)0x0) {
      plVar39 = param_6 + 7;
    }
    *(undefined4 *)(puVar24 + 8) =
         *(undefined4 *)
          ((longlong)plVar39 + ((longlong)(int)param_6[9] - 1U & (longlong)(int)uVar22) * 4);
    plVar39 = (longlong *)param_6[8];
    if ((longlong *)param_6[8] == (longlong *)0x0) {
      plVar39 = param_6 + 7;
    }
    *(int *)((longlong)plVar39 + ((longlong)(int)param_6[9] - 1U & (longlong)(int)uVar22) * 4) =
         iVar41;
  }
  else {
    *(uint *)(param_6 + 9) = uVar36;
    plVar39 = param_6 + 8;
    if (param_6[8] != 0) {
      FUN_1446efa72(plVar39,0,0,4);
      uVar36 = *(uint *)(param_6 + 9);
    }
    plVar33 = param_6 + 7;
    if (uVar36 == 1) {
      if (*plVar39 != 0) {
        FUN_1446efa72(plVar39,0,0,4);
      }
LAB_143de8c9e:
      uVar22 = 0;
      do {
        plVar39 = (longlong *)param_6[8];
        if ((longlong *)param_6[8] == (longlong *)0x0) {
          plVar39 = plVar33;
        }
        *(undefined4 *)((longlong)plVar39 + (ulonglong)((int)param_6[9] + 0x7fffffffU & uVar22) * 4)
             = 0xffffffff;
        uVar22 = uVar22 + 1;
      } while (uVar36 != uVar22);
    }
    else {
      if (uVar36 == 0) goto LAB_143de8fab;
      FUN_1446efa72(plVar39,0,uVar36,4);
      if (0 < (int)uVar36) goto LAB_143de8c9e;
    }
    iVar41 = (int)param_6[5];
    if (iVar41 == 0) {
      uVar28 = 0;
      uVar48 = 1;
      iVar47 = 0;
      iVar21 = 0;
    }
    else {
      puVar31 = (uint *)param_6[4];
      if ((uint *)param_6[4] == (uint *)0x0) {
        puVar31 = puVar1;
      }
      uVar36 = *puVar31;
      if (uVar36 == 0) {
        iVar47 = iVar41 + 0x1e;
        if (-1 < iVar41 + -1) {
          iVar47 = iVar41 + -1;
        }
        uVar28 = 0;
        uVar48 = (ulonglong)(uint)(iVar47 >> 5);
        if (iVar47 >> 5 < 1) {
          uVar48 = uVar28;
        }
        iVar21 = 0;
        do {
          if (uVar48 == uVar28) goto LAB_143de8fab;
          iVar21 = iVar21 + 0x20;
          uVar36 = puVar31[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar36 == 0);
      }
      else {
        uVar28 = 0;
        iVar21 = 0;
      }
      uVar48 = (ulonglong)(-uVar36 & uVar36);
      uVar42 = uVar48 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar42 != 0) {
        for (; uVar42 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar47 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      if (iVar41 <= iVar47) {
        iVar47 = iVar41;
      }
    }
    if (iVar47 < iVar41) {
      uVar36 = 0xffffffff;
      do {
        lVar27 = *param_6;
        lVar46 = (longlong)iVar47;
        uVar2 = *(undefined8 *)(lVar27 + lVar46 * 0x48);
        uVar22 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar35 = (uint)uVar2 & 0xffff;
        uVar42 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar35) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar35 >> 4)) &
                 (longlong)(int)param_6[9] - 1U;
        iVar41 = (int)uVar42;
        *(int *)(lVar27 + 0x44 + lVar46 * 0x48) = iVar41;
        plVar39 = (longlong *)param_6[8];
        if ((longlong *)param_6[8] == (longlong *)0x0) {
          plVar39 = plVar33;
        }
        *(undefined4 *)(lVar27 + 0x40 + lVar46 * 0x48) =
             *(undefined4 *)((longlong)plVar39 + ((longlong)(int)param_6[9] - 1U & uVar42) * 4);
        plVar39 = (longlong *)param_6[8];
        if ((longlong *)param_6[8] == (longlong *)0x0) {
          plVar39 = plVar33;
        }
        *(int *)((longlong)plVar39 + ((longlong)iVar41 & (longlong)(int)param_6[9] - 1U) * 4) =
             iVar47;
        uVar36 = ~(uint)uVar48 & uVar36;
        puVar31 = (uint *)param_6[4];
        if ((uint *)param_6[4] == (uint *)0x0) {
          puVar31 = puVar1;
        }
        iVar41 = (int)param_6[5];
        iVar47 = (int)uVar28;
        lVar27 = (longlong)iVar47;
        uVar22 = puVar31[lVar27] & uVar36;
        if (uVar22 == 0) {
          iVar37 = iVar41 + 0x1e;
          if (-1 < iVar41 + -1) {
            iVar37 = iVar41 + -1;
          }
          iVar37 = iVar37 >> 5;
          iVar43 = iVar37;
          if (iVar37 < iVar47) {
            iVar43 = iVar47;
          }
          if (iVar37 <= iVar47) break;
          lVar46 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar22 = puVar31[lVar27 + lVar46 + 1];
            if (uVar22 != 0) break;
            lVar46 = lVar46 + 1;
            if (iVar43 - lVar27 == lVar46) goto LAB_143de8fab;
          }
          uVar28 = (ulonglong)(iVar47 + (int)lVar46 + 1);
          uVar36 = 0xffffffff;
        }
        uVar48 = (ulonglong)(-uVar22 & uVar22);
        uVar42 = uVar48 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar47 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      } while (iVar47 < iVar41);
    }
  }
LAB_143de8fab:
  plVar39 = local_158;
  iVar41 = (int)local_158[1];
  *(uint *)(local_158 + 1) = iVar41 + 1U;
  if (*(uint *)((longlong)local_158 + 0xc) < iVar41 + 1U) {
    FUN_140f12bd2(local_158,iVar41);
  }
  puVar24 = (undefined8 *)((longlong)iVar41 * 0x38 + *plVar39);
  *(undefined2 *)puVar24 = 0;
  *(undefined8 *)((longlong)puVar24 + 4) = 0;
  puVar24[2] = 0;
  puVar24[3] = 0;
  *(undefined4 *)(puVar24 + 4) = 0;
  puVar24[5] = 0;
  puVar24[6] = 0;
  *(undefined4 *)(puVar24 + 1) = local_c8;
  *puVar24 = local_d0;
  FUN_1447715ec(puVar24 + 2,&local_c0);
  FUN_140630e34(&local_98,local_160);
  lVar27 = local_148;
  plVar39 = (longlong *)CONCAT44(uStack_8c,local_90);
  if (plVar39 != (longlong *)0x0) {
    iVar41 = (int)plVar39[1];
    do {
      if (iVar41 == 0) {
        plVar39 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar47 = (int)plVar39[1];
      bVar49 = iVar41 == iVar47;
      if (bVar49) {
        *(int *)(plVar39 + 1) = iVar41 + 1;
        iVar47 = iVar41;
      }
      iVar41 = iVar47;
      UNLOCK();
    } while (!bVar49);
    LOCK();
    piVar29 = (int *)((longlong)CONCAT44(uStack_8c,local_90) + 0xc);
    *piVar29 = *piVar29 + -1;
    UNLOCK();
    if (*piVar29 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_8c,local_90) + 0x10))();
    }
    if (plVar39 != (longlong *)0x0) {
      local_140 = plVar39;
      if ((local_98 != (longlong *)0x0) && (0 < *(int *)(param_5 + 4))) {
        lVar46 = 0;
        local_158 = local_98;
        do {
          plVar33 = local_158;
          puVar24 = (undefined8 *)FUN_140b78a92(lVar27);
          lVar3 = param_5[3];
          lVar40 = lVar46 * 0x98;
          *puVar24 = *(undefined8 *)(lVar3 + lVar40);
          *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(lVar3 + 8 + lVar40);
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          plVar39 = puVar24 + 2;
          local_160 = lVar46;
          if (*(byte *)(puVar24 + 6) == 0x1f) {
            plVar32 = (longlong *)*plVar39;
            *(undefined4 *)(plVar32 + 1) = 0;
            *plVar32 = (ulonglong)uStack_106 << 0x10;
            FUN_1447715ec(plVar32 + 2,&local_f8);
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)*(byte *)(puVar24 + 6) * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar32 = plVar39;
              if (0x18 < *(ushort *)(puVar24 + 5)) {
                plVar32 = (longlong *)puVar24[2];
              }
              (*pcVar4)(plVar32);
            }
            local_130 = lVar40;
            if (0x18 < *(ushort *)(puVar24 + 5)) {
              FUN_1400020a8(*plVar39);
            }
            local_78 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_90 = uStack_100;
            local_98 = (longlong *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
            FUN_1447715ec(&local_88,&local_f8);
            *(undefined2 *)(puVar24 + 5) = 0x38;
            puVar25 = (undefined8 *)FUN_14001cc68(0x38,0);
            puVar24[2] = puVar25;
            puVar25[2] = 0;
            puVar25[3] = 0;
            *(undefined4 *)(puVar25 + 4) = 0;
            puVar25[5] = 0;
            puVar25[6] = 0;
            *(undefined4 *)(puVar25 + 1) = local_90;
            *puVar25 = local_98;
            FUN_1447715ec(puVar25 + 2,&local_88);
            lVar40 = local_130;
            *(undefined1 *)(puVar24 + 6) = 0x1f;
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_e0 != 0) {
            FUN_1400020a8();
          }
          puVar24 = (undefined8 *)*plVar39;
          iVar41 = *(int *)(local_128[0x12] + local_160 * 4);
          if (iVar41 < (int)plVar33[0x34]) {
            lVar3 = (longlong)iVar41 * 0x90;
            lVar46 = plVar33[0x33] + lVar3;
            *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(lVar46 + 0x10);
            *puVar24 = *(undefined8 *)(lVar46 + 8);
            FUN_1447715ec(puVar24 + 2);
            uVar28 = *(ulonglong *)(plVar33[0x33] + 0x84 + lVar3);
            uVar48 = uVar28 & 0xffffffff00000000;
          }
          else {
            uVar48 = 0;
            uVar28 = 0;
          }
          if (local_170 == 0) {
            local_90 = DAT_14cb7bba0;
            local_98 = DAT_14cb7bb98;
          }
          else {
            local_98 = (longlong *)CONCAT44(local_174,local_170);
            local_90 = local_178;
          }
          FUN_144928d62(puVar24 + 2,1,&local_98);
          local_114 = local_164;
          local_110 = local_168;
          local_10c = local_16c;
          FUN_14013eb2c(puVar24,&local_114);
          lVar46 = (longlong)*(int *)(param_5[3] + 0x20 + lVar40);
          if (lVar46 != 0) {
            lVar3 = *(longlong *)(param_5[3] + 0x18 + lVar40);
            lVar40 = 0;
            do {
              puVar24 = (undefined8 *)FUN_140b78a92(lVar27);
              *puVar24 = *(undefined8 *)(lVar3 + lVar40);
              *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(lVar3 + 8 + lVar40);
              FUN_144928b90(&local_108,0xc);
              plVar39 = puVar24 + 2;
              if (*(byte *)(puVar24 + 6) == 0x1f) {
                puVar24 = (undefined8 *)*plVar39;
                *(undefined4 *)(puVar24 + 1) = uStack_100;
                *puVar24 = CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
                FUN_1447715ec(puVar24 + 2,&local_f8);
              }
              else {
                pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                   (ulonglong)((uint)*(byte *)(puVar24 + 6) * 0x120));
                if (pcVar4 != (code *)0x0) {
                  plVar33 = plVar39;
                  if (0x18 < *(ushort *)(puVar24 + 5)) {
                    plVar33 = (longlong *)puVar24[2];
                  }
                  (*pcVar4)(plVar33);
                }
                if (0x18 < *(ushort *)(puVar24 + 5)) {
                  FUN_1400020a8(*plVar39);
                }
                local_78 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_70 = 0;
                uStack_68 = 0;
                local_90 = uStack_100;
                local_98 = (longlong *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
                FUN_1447715ec(&local_88,&local_f8);
                *(undefined2 *)(puVar24 + 5) = 0x38;
                puVar25 = (undefined8 *)FUN_14001cc68(0x38,0);
                puVar24[2] = puVar25;
                puVar25[2] = 0;
                puVar25[3] = 0;
                *(undefined4 *)(puVar25 + 4) = 0;
                puVar25[5] = 0;
                puVar25[6] = 0;
                *(undefined4 *)(puVar25 + 1) = local_90;
                *puVar25 = local_98;
                FUN_1447715ec(puVar25 + 2,&local_88);
                *(undefined1 *)(puVar24 + 6) = 0x1f;
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
              }
              if (local_e0 != 0) {
                FUN_1400020a8();
              }
              lVar27 = *plVar39;
              local_98 = (longlong *)(uVar28 & 0xffffffff | uVar48);
              FUN_1401533ba(&local_120,&local_98,1);
              FUN_144928d62(lVar27 + 0x10,1,&local_120);
              lVar40 = lVar40 + 0xc;
              lVar27 = local_148;
            } while (lVar46 * 0xc != lVar40);
          }
          lVar46 = local_160 + 1;
        } while (lVar46 < *(int *)(param_5 + 4));
      }
      plVar33 = local_140;
      LOCK();
      plVar39 = local_140 + 1;
      *(int *)plVar39 = (int)*plVar39 + -1;
      UNLOCK();
      if ((int)*plVar39 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar29 = (int *)((longlong)plVar33 + 0xc);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (*piVar29 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
    }
  }
  uVar28 = local_138;
  uVar22 = local_14c;
  if (local_a8 != 0) {
    FUN_1400020a8();
    uVar28 = local_138;
    uVar22 = local_14c;
  }
LAB_143de955d:
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return (uint)uVar28 == uVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143de98a3 FUN_143de98a3 body=10312 status=ok
// SIG undefined FUN_143de98a3(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143de98a3(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                       longlong *param_5,longlong *param_6,double *param_7,longlong *param_8,
                       longlong param_9,longlong param_10,float param_11)

{
  code *pcVar1;
  longlong ******pppppplVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong *******ppppppplVar23;
  longlong *******ppppppplVar24;
  int *piVar25;
  longlong *******ppppppplVar26;
  int iVar27;
  longlong *******ppppppplVar28;
  longlong *******ppppppplVar29;
  longlong *plVar30;
  longlong ******pppppplVar31;
  undefined8 *******pppppppuVar32;
  longlong *******ppppppplVar33;
  undefined7 uVar34;
  int *piVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  longlong *******ppppppplVar41;
  longlong lVar42;
  ulonglong uVar43;
  int iVar44;
  longlong *******ppppppplVar45;
  bool bVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar53 [16];
  undefined4 uVar55;
  undefined1 auVar54 [16];
  double dVar56;
  double dVar57;
  undefined1 in_XMM1 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined1 in_XMM2 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined1 auStack_608 [32];
  longlong *local_5e8;
  longlong *local_5e0;
  uint local_5d4;
  longlong *local_5d0;
  longlong *local_5c8;
  longlong *******local_5c0;
  longlong *******local_5b8;
  longlong *******local_5b0;
  longlong *******local_5a8;
  longlong *local_5a0;
  longlong *******local_598;
  longlong *******local_590;
  longlong *local_588;
  ulonglong local_580;
  longlong local_578;
  undefined8 local_570;
  longlong *******local_568;
  undefined8 uStack_560;
  undefined1 local_550 [8];
  longlong local_548;
  undefined8 *******local_540;
  longlong local_538;
  ulonglong uStack_530;
  longlong local_520;
  int local_518;
  undefined4 local_514;
  longlong *local_510;
  longlong *******local_508;
  int local_500;
  undefined4 local_4fc;
  float local_4f8;
  float fStack_4f4;
  longlong *local_4f0;
  longlong local_4e8;
  ulonglong uStack_4e0;
  float local_4d8;
  float fStack_4d4;
  float local_4d0;
  float local_4cc;
  int local_4c0;
  int local_4bc;
  longlong local_4a8;
  longlong *******local_498;
  longlong *******ppppppplStack_490;
  longlong ******local_488;
  ulonglong uStack_480;
  double local_478;
  undefined8 local_470;
  double local_468;
  undefined8 *******local_190 [2];
  int local_180;
  int local_17c;
  ushort local_178;
  byte local_170;
  longlong local_168;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_608;
  local_538 = 0;
  uStack_530 = 0;
  if (param_1 == (longlong *)0x0) {
LAB_143de997a:
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    plVar10 = param_1;
    do {
      if (plVar10[5] != 0) {
        lVar42 = *(longlong *)(plVar10[5] + 0x30);
        if (lVar42 == 0) goto LAB_143de997a;
        uVar11 = *(undefined8 *)(lVar42 + 0x360);
        break;
      }
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2f0))(plVar10);
    } while (plVar10 != (longlong *)0x0);
  }
  puVar21 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_10 + 8) != (undefined4 *)0x0) {
    puVar21 = *(undefined4 **)(param_10 + 8);
  }
  local_5a0 = param_1;
  if (DAT_14c947fe0 == 0) {
    lVar42 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar42);
    DAT_14c947fe0 = lVar42;
  }
  FUN_140045924(DAT_14c947fe0,local_550,puVar21,1);
  local_548 = *param_2;
  local_588 = param_2;
  (**(code **)(*param_8 + 0x60))(param_8,&local_498);
  iVar27 = (int)ppppppplStack_490 + -1;
  if ((int)ppppppplStack_490 == 0) {
    iVar27 = 0;
  }
  FUN_1446f82e2(local_190,iVar27,local_498,1);
  local_540 = local_190[0];
  if (local_498 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  FUN_140630e34(&local_498,uVar11);
  if (ppppppplStack_490 != (longlong *******)0x0) {
    iVar27 = *(int *)(ppppppplStack_490 + 1);
    do {
      if (iVar27 == 0) {
        ppppppplVar41 = (longlong *******)0x0;
        break;
      }
      LOCK();
      iVar7 = *(int *)(ppppppplStack_490 + 1);
      bVar46 = iVar27 == iVar7;
      if (bVar46) {
        *(int *)(ppppppplStack_490 + 1) = iVar27 + 1;
        iVar7 = iVar27;
      }
      iVar27 = iVar7;
      UNLOCK();
      ppppppplVar41 = ppppppplStack_490;
    } while (!bVar46);
    LOCK();
    piVar35 = (int *)((longlong)ppppppplStack_490 + 0xc);
    *piVar35 = *piVar35 + -1;
    UNLOCK();
    if (*piVar35 == 0) {
      (*(code *)(*ppppppplStack_490)[2])();
    }
    ppppppplVar13 = local_498;
    lVar42 = DAT_14cb70c18;
    if (ppppppplVar41 != (longlong *******)0x0) {
      uVar43 = CONCAT71((int7)((ulonglong)local_190 >> 8),local_498 != (longlong *******)0x0);
      if (local_498 != (longlong *******)0x0) {
        lVar40 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar27 = *(int *)(lVar40 + 0xc60);
        local_570 = param_3;
        if (iVar27 == 0x40000002) {
          uVar15 = 0;
        }
        else {
          bVar46 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar27 != 2)) {
            if (iVar27 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              bVar46 = DVar9 == DVar8;
            }
            else {
              bVar46 = false;
            }
          }
          uVar15 = (ulonglong)(bVar46 ^ 1);
        }
        iVar27 = *(int *)(lVar42 + uVar15 * 4);
        plVar10 = (longlong *)FUN_1418631a0(ppppppplVar13,local_550);
        if (iVar27 == 0 || plVar10 == (longlong *)0x0) {
          plVar10 = &local_538;
          local_5e8 = plVar10;
          FUN_1406318e5(local_5a0,local_588,param_4,param_8);
          FUN_1406312aa(ppppppplVar13,local_550,plVar10);
        }
        iVar27 = (int)plVar10[1];
        if (iVar27 < 0x30d41) {
          local_568 = (longlong *******)0x0;
          uStack_560 = 0;
          if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar27);
          }
          local_5d0 = plVar10;
          if ((iVar27 != 0) &&
             (FUN_14481578e(&local_568), plVar10 = local_5d0, 0 < (int)local_5d0[1])) {
            iVar27 = 0;
            do {
              uVar15 = uStack_560;
              lVar42 = (longlong)(int)uStack_560;
              uVar18 = (int)uStack_560 + 1;
              uStack_560 = CONCAT44(uStack_560._4_4_,uVar18);
              if (uStack_560._4_4_ < uVar18) {
                FUN_1446f48e2(&local_568,uVar15 & 0xffffffff);
                plVar10 = local_5d0;
              }
              *(int *)((longlong)local_568 + lVar42 * 4) = iVar27;
              iVar27 = iVar27 + 1;
            } while (iVar27 < (int)plVar10[1]);
          }
          local_5b8 = (longlong *******)(longlong)(int)uStack_560;
          local_5d4 = (uint)uVar43;
          local_5c8 = param_4;
          local_5a8 = ppppppplVar41;
          if (local_5b8 != (longlong *******)0x0) {
            local_590 = local_568;
            iVar27 = *(int *)local_568;
            lVar42 = *plVar10;
            uVar6 = FUN_140550aae(ppppppplVar13,
                                  *(undefined4 *)(lVar42 + 0x74 + (longlong)iVar27 * 0xa0));
            bVar5 = 0;
            if ((longlong)(int)param_4[1] != 0) {
              lVar42 = lVar42 + (longlong)iVar27 * 0xa0;
              lVar39 = *param_4;
              lVar20 = (longlong)(int)param_4[1] * 0x38;
              do {
                cVar4 = FUN_140f7a7f2(lVar39,lVar42);
                if (cVar4 != '\0') {
                  bVar5 = 1;
                  goto LAB_143de9d0b;
                }
                lVar39 = lVar39 + 0x38;
                lVar20 = lVar20 + -0x38;
              } while (lVar20 != 0);
              if ((longlong)(int)local_5c8[1] == 0) {
                bVar5 = 0;
              }
              else {
                lVar39 = *local_5c8;
                lVar20 = (longlong)(int)local_5c8[1] * 0x38;
                do {
                  lVar20 = lVar20 + -0x38;
                  bVar5 = FUN_140f7a7f2(lVar39,lVar42 + 0x38);
                  if (bVar5 != 0) break;
                  lVar39 = lVar39 + 0x38;
                } while (lVar20 != 0);
              }
            }
LAB_143de9d0b:
            piVar35 = (int *)(ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),(byte)uVar6 ^ 1 | bVar5);
            ppppppplVar41 = (longlong *******)0x0;
            iVar27 = 0;
            do {
              ppppppplVar14 = (longlong *******)((ulonglong)ppppppplVar41 & 0xffffffff);
              local_5b0 = (longlong *******)CONCAT44(local_5b0._4_4_,iVar27);
LAB_143de9d21:
              uVar18 = (int)ppppppplVar14 + 1;
              ppppppplVar41 = (longlong *******)(ulonglong)uVar18;
              local_580 = (ulonglong)(int)ppppppplVar14;
              local_598 = ppppppplVar14;
              if ((int)uVar18 < (int)local_5b8) {
                ppppppplVar41 = (longlong *******)(local_580 + 1);
                bVar46 = true;
                local_5c0 = (longlong *******)CONCAT44(local_5c0._4_4_,(int)piVar35);
                bVar5 = (byte)piVar35;
LAB_143de9d52:
                lVar42 = *local_5d0;
                lVar39 = (longlong)*(int *)((longlong)local_590 + (longlong)ppppppplVar41 * 4) *
                         0xa0;
                bVar3 = FUN_140550aae(ppppppplVar13,*(undefined4 *)(lVar42 + 0x74 + lVar39));
                if ((longlong)(int)local_5c8[1] != 0) {
                  piVar22 = (int *)(lVar42 + lVar39);
                  lVar42 = *local_5c8;
                  lVar39 = (longlong)(int)local_5c8[1] * 0x38;
                  do {
                    piVar35 = piVar22;
                    local_578 = lVar39;
                    cVar4 = FUN_140f7a7f2(lVar42,piVar22);
                    if (cVar4 != '\0') goto LAB_143de9e29;
                    lVar42 = lVar42 + 0x38;
                    lVar39 = local_578 + -0x38;
                  } while (lVar39 != 0);
                  if ((longlong)(int)local_5c8[1] != 0) {
                    lVar42 = *local_5c8;
                    lVar39 = (longlong)(int)local_5c8[1] * 0x38;
                    do {
                      piVar35 = piVar22 + 0xe;
                      local_578 = lVar39;
                      cVar4 = FUN_140f7a7f2(lVar42,piVar22 + 0xe);
                      if (cVar4 != '\0') goto LAB_143de9e29;
                      lVar42 = lVar42 + 0x38;
                      lVar39 = local_578 + -0x38;
                    } while (lVar39 != 0);
                  }
                }
                ppppppplVar14 = ppppppplVar41;
                if ((bVar5 & 1) != bVar3) goto LAB_143de9d91;
                goto LAB_143de9e43;
              }
              if (((ulonglong)piVar35 & 1) != 0) {
                uVar43 = (ulonglong)local_5d4;
                param_4 = local_5c8;
                iVar27 = (int)local_5b0;
                goto LAB_143de9f73;
              }
              bVar46 = false;
              uVar43 = (ulonglong)local_5d4;
LAB_143de9e88:
              param_4 = local_5c8;
              iVar7 = (int)ppppppplVar41 - (int)local_598;
              iVar27 = (int)local_5b0;
              if ((int)local_5b0 != (int)local_598) {
                piVar35 = (int *)((longlong)local_590 + local_580 * 4);
                memmove((int *)((longlong)local_590 + (longlong)(int)local_5b0 * 4),piVar35,
                        (longlong)iVar7 << 2);
              }
              iVar27 = iVar27 + iVar7;
              piVar35 = (int *)CONCAT71((int7)((ulonglong)piVar35 >> 8),1);
              if (!bVar46) {
LAB_143de9f73:
                uStack_560 = CONCAT44(uStack_560._4_4_,iVar27);
                break;
              }
            } while( true );
          }
          ppppppplVar41 = local_5a8;
          ppppppplVar13 = (longlong *******)(lVar40 + 0xc60);
          if (local_5a0 == (longlong *)0x0) {
            bVar46 = false;
          }
          else {
            lVar42 = 0;
            plVar10 = local_5a0;
            do {
              if (plVar10[5] != 0) {
                lVar42 = *(longlong *)(plVar10[5] + 0x30);
                if (lVar42 == 0) {
                  lVar42 = 0;
                }
                else {
                  lVar42 = *(longlong *)(lVar42 + 0x360);
                }
                break;
              }
              plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2f0))(plVar10);
            } while (plVar10 != (longlong *)0x0);
            bVar46 = lVar42 != 0;
          }
          lVar42 = DAT_14cb70c00;
          iVar27 = *(int *)ppppppplVar13;
          local_590 = ppppppplVar13;
          if (iVar27 == 0x40000002) {
            uVar15 = 0;
          }
          else {
            bVar47 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar27 != 2)) {
              if (iVar27 == 1) {
                DVar9 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                bVar47 = DVar9 == DVar8;
              }
              else {
                bVar47 = false;
              }
            }
            uVar15 = (ulonglong)(bVar47 ^ 1);
          }
          plVar10 = local_5a0;
          if (bVar46 && *(int *)(lVar42 + uVar15 * 4) == 0) {
            plVar30 = local_588 + 0x1b;
            local_498 = (longlong *******)((ulonglong)local_498 & 0xffffffffffffff00);
            local_470._0_4_ = 0;
            FUN_1456bb102(&local_498,local_5a0);
            FUN_1447c3578(plVar30,local_190,&local_498);
            FUN_140b013e6(local_190,&local_4d0);
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
            if (pcVar1 != (code *)0x0) {
              pppppppuVar32 = local_190;
              if (0x18 < local_178) {
                pppppppuVar32 = local_190[0];
              }
              (*pcVar1)(pppppppuVar32);
            }
            if (0x18 < local_178) {
              FUN_1400020a8(local_190[0]);
            }
            FUN_1448173f8(&local_470);
            if (((char)local_498 == '\x03') && (local_488 != (longlong ******)0x0)) {
              LOCK();
              piVar35 = (int *)((longlong)local_488 + 0xc);
              *piVar35 = *piVar35 + -1;
              UNLOCK();
              if (*piVar35 == 0) {
                (*(code *)(*local_488)[2])();
              }
            }
            ppppppplVar13 = local_568;
            in_XMM1 = ZEXT416((uint)ABS(local_4d0));
            if (1e-08 < ABS(local_4d0)) {
              iVar27 = (int)uStack_560;
              lVar42 = (longlong)(int)uStack_560;
              if (lVar42 != 0) {
                lVar40 = *local_5d0;
                lVar39 = (longlong)*(int *)local_568 * 0xa0;
                dVar57 = *(double *)(lVar40 + 0x78 + lVar39) - *param_7;
                dVar59 = *(double *)(lVar40 + 0x80 + lVar39) - param_7[1];
                dVar52 = *(double *)(lVar40 + 0x88 + lVar39) - param_7[2];
                fVar49 = (float)SQRT(dVar52 * dVar52 + dVar59 * dVar59 + dVar57 * dVar57);
                iVar38 = 0;
                iVar7 = 0;
                bVar46 = fVar49 <= local_4d0 + local_4cc && local_4d0 - local_4cc <= fVar49;
                do {
                  iVar37 = iVar7 + 1;
                  if (iVar7 + 1 < iVar27) {
                    iVar37 = iVar27;
                  }
                  lVar40 = *local_5d0;
                  in_XMM1._8_8_ = 0;
                  in_XMM1._0_8_ = param_7[1];
                  in_XMM2._8_8_ = 0;
                  in_XMM2._0_8_ = param_7[2];
                  iVar36 = iVar7;
                  lVar39 = (longlong)iVar7;
                  do {
                    lVar39 = lVar39 + 1;
                    iVar44 = iVar37;
                    if (lVar42 <= lVar39) break;
                    lVar20 = (longlong)*(int *)((longlong)ppppppplVar13 + lVar39 * 4) * 0xa0;
                    dVar57 = *(double *)(lVar40 + 0x78 + lVar20) - *param_7;
                    dVar52 = *(double *)(lVar40 + 0x80 + lVar20) - param_7[1];
                    dVar59 = *(double *)(lVar40 + 0x88 + lVar20) - param_7[2];
                    fVar49 = (float)SQRT(dVar59 * dVar59 + dVar52 * dVar52 + dVar57 * dVar57);
                    iVar36 = iVar36 + 1;
                    ppppppplVar41 = local_5a8;
                    iVar44 = iVar36;
                  } while (bVar46 == (fVar49 <= local_4d0 + local_4cc &&
                                     local_4d0 - local_4cc <= fVar49));
                  if (bVar46 != false) {
                    if (iVar38 != iVar7) {
                      memmove((int *)((longlong)ppppppplVar13 + (longlong)iVar38 * 4),
                              (int *)((longlong)ppppppplVar13 + (longlong)iVar7 * 4),
                              (longlong)(iVar44 - iVar7) << 2);
                    }
                    iVar38 = iVar38 + (iVar44 - iVar7);
                    ppppppplVar41 = local_5a8;
                  }
                  iVar7 = iVar44;
                  bVar46 = (bool)(bVar46 ^ 1);
                } while (lVar39 < lVar42);
                uStack_560 = CONCAT44(uStack_560._4_4_,iVar38);
                plVar10 = local_5a0;
              }
            }
            uVar11 = FUN_1405d6522();
            lVar42 = FUN_140bd43ec(uVar11);
            if (plVar10 == (longlong *)0x0) {
LAB_143dea119:
              lVar40 = 0;
            }
            else {
              lVar40 = 0;
              do {
                if (plVar10[5] != 0) {
                  lVar40 = *(longlong *)(plVar10[5] + 0x30);
                  if (lVar40 == 0) goto LAB_143dea119;
                  lVar40 = *(longlong *)(lVar40 + 0x360);
                  break;
                }
                plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2f0))(plVar10);
              } while (plVar10 != (longlong *)0x0);
            }
            plVar10 = local_588 + 0xd;
            local_498 = (longlong *******)((ulonglong)local_498 & 0xffffffffffffff00);
            local_470._0_4_ = 0;
            FUN_1456bb102(&local_498,local_5a0);
            param_4 = local_5c8;
            uVar43 = (ulonglong)local_5d4;
            FUN_1447c3578(plVar10,local_190,&local_498);
            FUN_140b013e6(local_190,&local_4d0);
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
            if (pcVar1 != (code *)0x0) {
              pppppppuVar32 = local_190;
              if (0x18 < local_178) {
                pppppppuVar32 = local_190[0];
              }
              (*pcVar1)(pppppppuVar32);
            }
            if (0x18 < local_178) {
              FUN_1400020a8(local_190[0]);
            }
            FUN_1448173f8(&local_470);
            if (((char)local_498 == '\x03') && (local_488 != (longlong ******)0x0)) {
              LOCK();
              piVar35 = (int *)((longlong)local_488 + 0xc);
              *piVar35 = *piVar35 + -1;
              UNLOCK();
              if (*piVar35 == 0) {
                (*(code *)(*local_488)[2])();
              }
            }
            fVar49 = local_4d0;
            uVar6 = DAT_14cb1ae68;
            if ((lVar42 != 0) && (lVar40 != 0)) {
              if (DAT_14c9a7d10 == (undefined8 *)0x0) {
                DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                *DAT_14c9a7d10 = 0;
                DAT_14c9a7d10[1] = 0;
                DAT_14c9a7d10[2] = 0;
                DAT_14c9a7d10[3] = 0;
              }
              FUN_14005915a(DAT_14c9a7d10,&local_498,uVar6,lVar40);
              ppppppplVar14 = ppppppplStack_490;
              ppppppplVar13 = local_498;
              if ((local_498 == (longlong *******)0x0) ||
                 (ppppppplStack_490 == (longlong *******)0x0)) {
                ppppppplVar14 = (longlong *******)0x0;
              }
              else {
                LOCK();
                *(int *)(ppppppplStack_490 + 1) = *(int *)(ppppppplStack_490 + 1) + 1;
                UNLOCK();
                LOCK();
                *(int *)((longlong)ppppppplStack_490 + 0xc) =
                     *(int *)((longlong)ppppppplStack_490 + 0xc) + 1;
                UNLOCK();
                LOCK();
                ppppppplVar28 = ppppppplStack_490 + 1;
                *(int *)ppppppplVar28 = *(int *)ppppppplVar28 + -1;
                UNLOCK();
                if (*(int *)ppppppplVar28 == 0) {
                  (*(code *)**ppppppplStack_490)(ppppppplStack_490);
                  LOCK();
                  piVar35 = (int *)((longlong)ppppppplVar14 + 0xc);
                  *piVar35 = *piVar35 + -1;
                  UNLOCK();
                  if (*piVar35 == 0) {
                    (*(code *)(*ppppppplVar14)[2])(ppppppplVar14);
                  }
                  uVar43 = (ulonglong)local_5d4;
                  param_4 = local_5c8;
                  ppppppplVar41 = local_5a8;
                }
              }
              ppppppplVar28 = ppppppplStack_490;
              if (ppppppplStack_490 != (longlong *******)0x0) {
                LOCK();
                ppppppplVar26 = ppppppplStack_490 + 1;
                *(int *)ppppppplVar26 = *(int *)ppppppplVar26 + -1;
                UNLOCK();
                if (*(int *)ppppppplVar26 == 0) {
                  (*(code *)**ppppppplStack_490)(ppppppplStack_490);
                  LOCK();
                  piVar35 = (int *)((longlong)ppppppplVar28 + 0xc);
                  *piVar35 = *piVar35 + -1;
                  UNLOCK();
                  if (*piVar35 == 0) {
                    (*(code *)(*ppppppplVar28)[2])(ppppppplVar28);
                  }
                }
              }
              if (ppppppplVar14 != (longlong *******)0x0) {
                iVar27 = *(int *)(ppppppplVar14 + 1);
                local_5b0 = (longlong *******)0x0;
                do {
                  ppppppplVar28 = local_5b0;
                  if (iVar27 == 0) break;
                  LOCK();
                  iVar7 = *(int *)(ppppppplVar14 + 1);
                  bVar46 = iVar27 == iVar7;
                  if (bVar46) {
                    *(int *)(ppppppplVar14 + 1) = iVar27 + 1;
                    iVar7 = iVar27;
                  }
                  iVar27 = iVar7;
                  UNLOCK();
                  ppppppplVar28 = ppppppplVar14;
                } while (!bVar46);
                local_5b0 = ppppppplVar28;
                LOCK();
                piVar35 = (int *)((longlong)ppppppplVar14 + 0xc);
                *piVar35 = *piVar35 + -1;
                UNLOCK();
                if (*piVar35 == 0) {
                  (*(code *)(*ppppppplVar14)[2])(ppppppplVar14);
                }
                if (local_5b0 != (longlong *******)0x0) {
                  if (ppppppplVar13 != (longlong *******)0x0) {
                    if (0 < (longlong)(int)uStack_560) {
                      local_5b8 = ppppppplVar13;
                      uVar43 = (longlong)(int)uStack_560;
                      do {
                        uVar15 = uVar43 - 1;
                        lVar39 = *local_5d0;
                        lVar20 = (longlong)*(int *)((longlong)local_568 + uVar43 * 4 + -4) * 0xa0;
                        lVar40 = lVar39 + lVar20;
                        if ((longlong)*(int *)(ppppppplVar13 + 0x37) == 0) {
                          *(float *)(lVar40 + 0x70) = *(float *)(lVar40 + 0x70) * 0.01;
LAB_143dea45e:
                          if (uVar43 != (uStack_560 & 0xffffffff)) {
                            memmove((int *)((longlong)local_568 + uVar15 * 4),
                                    (void *)((longlong)local_568 + uVar15 * 4 + 4),
                                    (longlong)((int)uStack_560 - (int)uVar43) << 2);
                          }
                          uStack_560 = CONCAT44(uStack_560._4_4_,(int)uStack_560 + -1);
                          FUN_14479f406(&local_568);
                        }
                        else {
                          dVar57 = *(double *)(lVar39 + 0x78 + lVar20);
                          dVar59 = *(double *)(lVar39 + 0x80 + lVar20);
                          dVar52 = *(double *)(lVar39 + 0x88 + lVar20);
                          pppppplVar31 = ppppppplVar13[0x36];
                          pppppplVar2 = pppppplVar31 + (longlong)*(int *)(ppppppplVar13 + 0x37) * 3;
                          bVar5 = 0;
                          fVar63 = 0.01;
                          bVar3 = 0;
                          do {
                            dVar50 = dVar57 - (double)*pppppplVar31;
                            dVar56 = dVar59 - (double)pppppplVar31[1];
                            dVar51 = dVar52 - (double)pppppplVar31[2];
                            fVar62 = (float)SQRT(dVar51 * dVar51 + dVar56 * dVar56 + dVar50 * dVar50
                                                );
                            in_XMM1 = ZEXT416((uint)fVar62);
                            fVar48 = (float)FUN_1449e6cbc(lVar42);
                            if (fVar63 <= fVar48) {
                              fVar63 = fVar48;
                            }
                            if (1.0 <= fVar63) {
                              fVar63 = 1.0;
                            }
                            if (fVar63 <= 0.01) {
                              fVar63 = 0.01;
                            }
                            if (ABS(fVar49) <= 1e-08) {
LAB_143dea419:
                              bVar3 = 1;
                            }
                            else {
                              in_XMM1 = ZEXT416((uint)local_4cc);
                              in_XMM2 = ZEXT416((uint)(local_4d0 - local_4cc));
                              if ((local_4d0 - local_4cc <= fVar62) &&
                                 (fVar62 <= local_4d0 + local_4cc)) goto LAB_143dea419;
                            }
                            bVar5 = bVar5 | fVar62 < param_11;
                            pppppplVar31 = pppppplVar31 + 3;
                          } while (pppppplVar31 != pppppplVar2);
                          *(float *)(lVar40 + 0x70) = fVar63 * *(float *)(lVar40 + 0x70);
                          ppppppplVar13 = local_5b8;
                          if (!(bool)(bVar5 & bVar3)) goto LAB_143dea45e;
                        }
                        bVar46 = 1 < (longlong)uVar43;
                        uVar43 = uVar15;
                      } while (bVar46);
                    }
                  }
                  ppppppplVar41 = local_5a8;
                  ppppppplVar14 = local_5b0;
                  param_4 = local_5c8;
                  LOCK();
                  ppppppplVar13 = local_5b0 + 1;
                  *(int *)ppppppplVar13 = *(int *)ppppppplVar13 + -1;
                  UNLOCK();
                  uVar43 = (ulonglong)local_5d4;
                  if (*(int *)ppppppplVar13 == 0) {
                    (*(code *)**local_5b0)(local_5b0);
                    LOCK();
                    piVar35 = (int *)((longlong)ppppppplVar14 + 0xc);
                    *piVar35 = *piVar35 + -1;
                    UNLOCK();
                    if (*piVar35 == 0) {
                      (*(code *)(*ppppppplVar14)[2])(ppppppplVar14);
                    }
                  }
                }
              }
            }
            if (local_5a0 == (longlong *)0x0) {
LAB_143dea4f7:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              plVar10 = local_5a0;
              do {
                if (plVar10[5] != 0) {
                  lVar42 = *(longlong *)(plVar10[5] + 0x30);
                  if (lVar42 == 0) goto LAB_143dea4f7;
                  uVar11 = *(undefined8 *)(lVar42 + 0x360);
                  break;
                }
                plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2f0))(plVar10);
              } while (plVar10 != (longlong *)0x0);
            }
            uVar12 = FUN_1405d6522();
            ppppppplVar13 = (longlong *******)FUN_141863592(uVar12);
            if ((ppppppplVar13 != (longlong *******)0x0) &&
               (FUN_140630e34(&local_498,uVar11), ppppppplStack_490 != (longlong *******)0x0)) {
              iVar27 = *(int *)(ppppppplStack_490 + 1);
              do {
                if (iVar27 == 0) {
                  ppppppplVar14 = (longlong *******)0x0;
                  break;
                }
                LOCK();
                iVar7 = *(int *)(ppppppplStack_490 + 1);
                bVar46 = iVar27 == iVar7;
                if (bVar46) {
                  *(int *)(ppppppplStack_490 + 1) = iVar27 + 1;
                  iVar7 = iVar27;
                }
                iVar27 = iVar7;
                UNLOCK();
                ppppppplVar14 = ppppppplStack_490;
              } while (!bVar46);
              LOCK();
              piVar35 = (int *)((longlong)ppppppplStack_490 + 0xc);
              *piVar35 = *piVar35 + -1;
              UNLOCK();
              if (*piVar35 == 0) {
                (*(code *)(*ppppppplStack_490)[2])();
              }
              ppppppplVar26 = local_498;
              ppppppplVar28 = local_568;
              plVar10 = local_5d0;
              if (ppppppplVar14 != (longlong *******)0x0) {
                local_5b8 = ppppppplVar13;
                if (local_498 != (longlong *******)0x0) {
                  lVar42 = (longlong)(int)uStack_560;
                  if (lVar42 != 0) {
                    lVar40 = 0;
                    do {
                      lVar39 = *plVar10;
                      lVar20 = (longlong)*(int *)((longlong)ppppppplVar28 + lVar40) * 0xa0;
                      uVar11 = FUN_140ad3176(ppppppplVar26,lVar39 + lVar20);
                      in_XMM1._8_4_ = (int)extraout_XMM0_Qb;
                      in_XMM1._0_8_ = uVar11;
                      in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
                      auVar53._0_8_ = FUN_1449e6cbc(local_5b8);
                      auVar53._8_8_ = extraout_XMM0_Qb_00;
                      if (1.0 <= (float)auVar53._0_8_) {
                        auVar53._0_4_ = 0x3f800000;
                      }
                      if (auVar53._0_4_ <= 0.01) {
                        auVar53._0_4_ = 0x3c23d70a;
                      }
                      *(float *)(lVar39 + 0x70 + lVar20) =
                           auVar53._0_4_ * *(float *)(lVar39 + 0x70 + lVar20);
                      lVar40 = lVar40 + 4;
                    } while (lVar42 * 4 != lVar40);
                  }
                }
                ppppppplVar41 = local_5a8;
                param_4 = local_5c8;
                LOCK();
                ppppppplVar13 = ppppppplVar14 + 1;
                *(int *)ppppppplVar13 = *(int *)ppppppplVar13 + -1;
                UNLOCK();
                uVar43 = (ulonglong)local_5d4;
                if (*(int *)ppppppplVar13 == 0) {
                  (*(code *)**ppppppplVar14)(ppppppplVar14);
                  LOCK();
                  piVar35 = (int *)((longlong)ppppppplVar14 + 0xc);
                  *piVar35 = *piVar35 + -1;
                  UNLOCK();
                  if (*piVar35 == 0) {
                    (*(code *)(*ppppppplVar14)[2])(ppppppplVar14);
                  }
                }
              }
            }
          }
          plVar10 = local_588 + 0x14;
          local_498 = (longlong *******)((ulonglong)local_498 & 0xffffffffffffff00);
          local_470._0_4_ = 0;
          FUN_1456bb102(&local_498,local_5a0);
          FUN_1447c3578(plVar10,local_190,&local_498);
          FUN_140b013e6(local_190,&local_4d8);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
          if (pcVar1 != (code *)0x0) {
            pppppppuVar32 = local_190;
            if (0x18 < local_178) {
              pppppppuVar32 = local_190[0];
            }
            (*pcVar1)(pppppppuVar32);
          }
          ppppppplVar13 = (longlong *******)&local_470;
          if (0x18 < local_178) {
            FUN_1400020a8(local_190[0]);
          }
          FUN_1448173f8(ppppppplVar13);
          if (((char)local_498 == '\x03') && (local_488 != (longlong ******)0x0)) {
            LOCK();
            piVar35 = (int *)((longlong)local_488 + 0xc);
            *piVar35 = *piVar35 + -1;
            UNLOCK();
            if (*piVar35 == 0) {
              (*(code *)(*local_488)[2])();
            }
          }
          if ((param_5 != (longlong *)0x0) &&
             (in_XMM1._0_12_ = ZEXT812(0x322bcc77), in_XMM1._12_4_ = 0, 1e-08 < ABS(local_4d8))) {
            if ((int)param_6[1] != *(int *)((longlong)param_6 + 0x34)) {
              lVar42 = *param_5;
              uVar18 = (uint)((ulonglong)lVar42 >> 0x10);
              uVar19 = (uint)lVar42 & 0xffff;
              plVar10 = param_6 + 7;
              if ((longlong *)param_6[8] != (longlong *)0x0) {
                plVar10 = (longlong *)param_6[8];
              }
              iVar27 = *(int *)((longlong)plVar10 +
                               (ulonglong)
                               ((int)param_6[9] - 1U &
                               (int)((ulonglong)lVar42 >> 0x20) + ((uint)lVar42 << 0x10 | uVar19) +
                               (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar19 >> 4)) * 4);
              if (iVar27 != -1) {
                do {
                  plVar10 = (longlong *)(*param_6 + (longlong)iVar27 * 0x48);
                  if (*plVar10 == lVar42) goto LAB_143deb572;
                  iVar27 = (int)plVar10[8];
                } while (iVar27 != -1);
              }
            }
            plVar10 = (longlong *)0x0;
LAB_143deb572:
            plVar30 = plVar10 + 1;
            if (plVar10 == (longlong *)0x0) {
              plVar30 = (longlong *)0x0;
            }
            local_4e8 = 0;
            uStack_4e0 = 0;
            if (plVar30 == (longlong *)0x0) {
              local_498 = (longlong *******)&DAT_14a171d50;
              local_488 = (longlong ******)0x0;
              uStack_480 = 0;
              ppppppplStack_490 = (longlong *******)&DAT_14cb70058;
              local_5e8 = &local_4e8;
              FUN_1406318e5(local_5a0,param_5,local_5c8,&local_498);
              local_498 = (longlong *******)&DAT_14a171d50;
              uVar43 = uStack_480 >> 0x20;
              uStack_480 = uStack_480 & 0xffffffff00000000;
              if ((int)uVar43 != 0) {
                FUN_140115c12(&local_488,0);
              }
              ppppppplStack_490 = (longlong *******)0x0;
              if (local_488 != (longlong ******)0x0) {
                FUN_1400020a8();
              }
            }
            local_520 = 0;
            iVar27 = (int)local_5d0[1];
            lVar42 = *local_5d0;
            local_518 = iVar27;
            if (iVar27 == 0) {
              local_514 = 0;
            }
            else {
              FUN_1406316de(&local_520,iVar27,0);
              FUN_1406317c7(local_520,lVar42,iVar27);
            }
            uVar43 = uStack_4e0;
            lVar42 = local_4e8;
            local_510 = local_5a0;
            local_508 = (longlong *******)0x0;
            ppppppplVar13 = (longlong *******)(uStack_4e0 & 0xffffffff);
            local_500 = (int)uStack_4e0;
            if ((int)uStack_4e0 == 0) {
              local_4fc = 0;
            }
            else {
              FUN_1406316de(&local_508,uStack_4e0 & 0xffffffff,0);
              FUN_1406317c7(local_508,lVar42,uVar43 & 0xffffffff);
            }
            lVar42 = local_520;
            local_4f8 = local_4d8;
            fStack_4f4 = fStack_4d4;
            local_5b0 = (longlong *******)(longlong)(int)uStack_560;
            local_4f0 = plVar30;
            if (local_5b0 != (longlong *******)0x0) {
              local_5b8 = local_568;
              ppppppplVar13 = (longlong *******)((longlong)*(int *)local_568 * 0xa0);
              FUN_14189c8ca(local_190,local_520 + (longlong)ppppppplVar13);
              dVar57 = *(double *)(lVar42 + 0x78 + (longlong)ppppppplVar13);
              dVar59 = *(double *)(lVar42 + 0x80 + (longlong)ppppppplVar13);
              dVar52 = *(double *)(lVar42 + 0x88 + (longlong)ppppppplVar13);
              if (local_4f0 == (longlong *)0x0) {
LAB_143deb73d:
                if ((longlong)local_500 != 0) {
                  lVar42 = (longlong)local_500 * 0xa0;
                  ppppppplVar13 = local_508;
                  do {
                    FUN_14189c8ca(&local_4d0,ppppppplVar13);
                    piVar22 = &DAT_14c948620;
                    piVar35 = (int *)&DAT_14c948618;
                    if (local_180 != 0) {
                      piVar22 = &DAT_14c948620;
                      piVar35 = (int *)&DAT_14c948618;
                      if (1 < local_17c) {
                        piVar22 = &DAT_14c948620;
                        piVar35 = (int *)&DAT_14c948618;
                        if (local_180 != DAT_14c948000) {
                          piVar35 = (int *)(local_168 + 0xc);
                          piVar22 = (int *)(local_168 + 0x14);
                        }
                      }
                    }
                    piVar25 = &DAT_14c948620;
                    piVar17 = (int *)&DAT_14c948618;
                    if (local_4c0 != 0) {
                      piVar25 = &DAT_14c948620;
                      piVar17 = (int *)&DAT_14c948618;
                      if (1 < local_4bc) {
                        piVar25 = &DAT_14c948620;
                        piVar17 = (int *)&DAT_14c948618;
                        if (local_4c0 != DAT_14c948000) {
                          piVar17 = (int *)(local_4a8 + 0xc);
                          piVar25 = (int *)(local_4a8 + 0x14);
                        }
                      }
                    }
                    if ((*piVar35 == *piVar17) && (*piVar22 == *piVar25)) {
                      FUN_141000734(&local_498,local_510,&local_4d0);
                      dVar51 = local_478 - dVar57;
                      dVar56 = (double)CONCAT44(local_470._4_4_,(undefined4)local_470) - dVar59;
                      dVar50 = local_468 - dVar52;
                      fVar49 = (float)SQRT(dVar50 * dVar50 + dVar56 * dVar56 + dVar51 * dVar51);
                      in_XMM1 = ZEXT416((uint)local_4f8);
                      in_XMM2 = ZEXT416((uint)fStack_4f4);
                      if ((local_4f8 - fStack_4f4 <= fVar49) &&
                         (in_XMM1 = ZEXT416((uint)(local_4f8 + fStack_4f4)),
                         fVar49 <= local_4f8 + fStack_4f4)) {
                        if (local_4a8 != 0) {
                          FUN_1400020a8();
                        }
                        goto LAB_143debe37;
                      }
                    }
                    if (local_4a8 != 0) {
                      FUN_1400020a8();
                    }
                    ppppppplVar13 = ppppppplVar13 + 0x14;
                    lVar42 = lVar42 + -0xa0;
                  } while (lVar42 != 0);
                }
LAB_143deb963:
                bVar46 = true;
              }
              else {
                piVar22 = (int *)&DAT_14c948618;
                piVar17 = &DAT_14c948620;
                piVar25 = &DAT_14c948620;
                piVar35 = (int *)&DAT_14c948618;
                if (local_180 != 0) {
                  piVar25 = &DAT_14c948620;
                  piVar35 = (int *)&DAT_14c948618;
                  if (1 < local_17c) {
                    piVar25 = &DAT_14c948620;
                    piVar35 = (int *)&DAT_14c948618;
                    if (local_180 != DAT_14c948000) {
                      piVar35 = (int *)(local_168 + 0xc);
                      piVar25 = (int *)(local_168 + 0x14);
                    }
                  }
                }
                if (((((int)local_4f0[2] != 0) && (*(int *)((longlong)local_4f0 + 0x14) != 0)) &&
                    ((int)local_4f0[2] != DAT_14c948000)) &&
                   (1 < *(int *)((longlong)local_4f0 + 0x14))) {
                  piVar22 = (int *)(local_4f0[5] + 0xc);
                  piVar17 = (int *)(local_4f0[5] + 0x14);
                }
                if ((*piVar35 != *piVar22) || (*piVar25 != *piVar17)) goto LAB_143deb73d;
                ppppppplVar13 = (longlong *******)&local_498;
                FUN_141000734(ppppppplVar13,local_510);
                dVar57 = local_478 - dVar57;
                dVar59 = (double)CONCAT44(local_470._4_4_,(undefined4)local_470) - dVar59;
                dVar52 = local_468 - dVar52;
                fVar49 = (float)SQRT(dVar52 * dVar52 + dVar59 * dVar59 + dVar57 * dVar57);
                in_XMM1 = ZEXT416((uint)local_4f8);
                in_XMM2 = ZEXT416((uint)fStack_4f4);
                if ((fVar49 < local_4f8 - fStack_4f4) ||
                   (in_XMM1 = ZEXT416((uint)(local_4f8 + fStack_4f4)),
                   local_4f8 + fStack_4f4 < fVar49)) goto LAB_143deb963;
LAB_143debe37:
                bVar46 = false;
              }
              if (local_168 != 0) {
                FUN_1400020a8();
              }
              local_580 = local_580 & 0xffffffff00000000;
              local_5c0 = (longlong *******)0x0;
              do {
                uVar18 = (int)local_5c0 + 1;
                local_598 = (longlong *******)(longlong)(int)local_5c0;
                if ((int)uVar18 < (int)local_5b0) {
                  ppppppplVar41 = (longlong *******)((longlong)local_598 + 1);
                  bVar47 = true;
                  do {
                    while( true ) {
                      lVar42 = local_520;
                      ppppppplVar13 =
                           (longlong *******)
                           ((longlong)*(int *)((longlong)local_5b8 + (longlong)ppppppplVar41 * 4) *
                           0xa0);
                      FUN_14189c8ca(local_190,local_520 + (longlong)ppppppplVar13);
                      dVar57 = *(double *)(lVar42 + 0x78 + (longlong)ppppppplVar13);
                      dVar59 = *(double *)(lVar42 + 0x80 + (longlong)ppppppplVar13);
                      dVar52 = *(double *)(lVar42 + 0x88 + (longlong)ppppppplVar13);
                      if (local_4f0 != (longlong *)0x0) break;
LAB_143debaa2:
                      if ((longlong)local_500 != 0) {
                        lVar42 = (longlong)local_500 * 0xa0;
                        ppppppplVar13 = local_508;
                        do {
                          FUN_14189c8ca(&local_4d0,ppppppplVar13);
                          piVar22 = &DAT_14c948620;
                          piVar35 = (int *)&DAT_14c948618;
                          if (local_180 != 0) {
                            piVar22 = &DAT_14c948620;
                            piVar35 = (int *)&DAT_14c948618;
                            if (1 < local_17c) {
                              piVar22 = &DAT_14c948620;
                              piVar35 = (int *)&DAT_14c948618;
                              if (local_180 != DAT_14c948000) {
                                piVar35 = (int *)(local_168 + 0xc);
                                piVar22 = (int *)(local_168 + 0x14);
                              }
                            }
                          }
                          piVar25 = &DAT_14c948620;
                          piVar17 = (int *)&DAT_14c948618;
                          if (local_4c0 != 0) {
                            piVar25 = &DAT_14c948620;
                            piVar17 = (int *)&DAT_14c948618;
                            if (1 < local_4bc) {
                              piVar25 = &DAT_14c948620;
                              piVar17 = (int *)&DAT_14c948618;
                              if (local_4c0 != DAT_14c948000) {
                                piVar17 = (int *)(local_4a8 + 0xc);
                                piVar25 = (int *)(local_4a8 + 0x14);
                              }
                            }
                          }
                          if ((*piVar35 == *piVar17) && (*piVar22 == *piVar25)) {
                            FUN_141000734(&local_498,local_510,&local_4d0);
                            dVar51 = local_478 - dVar57;
                            dVar56 = (double)CONCAT44(local_470._4_4_,(undefined4)local_470) -
                                     dVar59;
                            dVar50 = local_468 - dVar52;
                            fVar49 = (float)SQRT(dVar50 * dVar50 + dVar56 * dVar56 + dVar51 * dVar51
                                                );
                            in_XMM1 = ZEXT416((uint)local_4f8);
                            in_XMM2 = ZEXT416((uint)fStack_4f4);
                            if ((local_4f8 - fStack_4f4 <= fVar49) &&
                               (in_XMM1 = ZEXT416((uint)(local_4f8 + fStack_4f4)),
                               fVar49 <= local_4f8 + fStack_4f4)) {
                              if (local_4a8 != 0) {
                                FUN_1400020a8();
                              }
                              goto LAB_143debcd7;
                            }
                          }
                          if (local_4a8 != 0) {
                            FUN_1400020a8();
                          }
                          ppppppplVar13 = ppppppplVar13 + 0x14;
                          lVar42 = lVar42 + -0xa0;
                        } while (lVar42 != 0);
                      }
LAB_143debca8:
                      if (local_168 != 0) {
                        FUN_1400020a8();
                      }
                      ppppppplVar14 = ppppppplVar41;
                      if (!bVar46) goto LAB_143debd2c;
                      ppppppplVar41 = (longlong *******)((longlong)ppppppplVar41 + 1);
                      bVar47 = (longlong)ppppppplVar41 < (longlong)local_5b0;
                      ppppppplVar14 = local_5c0;
                      if (ppppppplVar41 == local_5b0) goto LAB_143debd84;
                    }
                    piVar22 = &DAT_14c948620;
                    piVar35 = (int *)&DAT_14c948618;
                    if (local_180 != 0) {
                      piVar22 = &DAT_14c948620;
                      piVar35 = (int *)&DAT_14c948618;
                      if (1 < local_17c) {
                        piVar22 = &DAT_14c948620;
                        piVar35 = (int *)&DAT_14c948618;
                        if (local_180 != DAT_14c948000) {
                          piVar35 = (int *)(local_168 + 0xc);
                          piVar22 = (int *)(local_168 + 0x14);
                        }
                      }
                    }
                    piVar25 = &DAT_14c948620;
                    piVar17 = (int *)&DAT_14c948618;
                    if ((int)local_4f0[2] != 0) {
                      piVar25 = &DAT_14c948620;
                      piVar17 = (int *)&DAT_14c948618;
                      if (1 < *(int *)((longlong)local_4f0 + 0x14)) {
                        piVar25 = &DAT_14c948620;
                        piVar17 = (int *)&DAT_14c948618;
                        if ((int)local_4f0[2] != DAT_14c948000) {
                          piVar17 = (int *)(local_4f0[5] + 0xc);
                          piVar25 = (int *)(local_4f0[5] + 0x14);
                        }
                      }
                    }
                    if ((*piVar35 != *piVar17) || (*piVar22 != *piVar25)) goto LAB_143debaa2;
                    FUN_141000734(&local_498,local_510);
                    dVar57 = local_478 - dVar57;
                    dVar59 = (double)CONCAT44(local_470._4_4_,(undefined4)local_470) - dVar59;
                    dVar52 = local_468 - dVar52;
                    fVar49 = (float)SQRT(dVar52 * dVar52 + dVar59 * dVar59 + dVar57 * dVar57);
                    in_XMM1 = ZEXT416((uint)local_4f8);
                    in_XMM2 = ZEXT416((uint)fStack_4f4);
                    if ((fVar49 < local_4f8 - fStack_4f4) ||
                       (in_XMM1 = ZEXT416((uint)(local_4f8 + fStack_4f4)),
                       local_4f8 + fStack_4f4 < fVar49)) goto LAB_143debca8;
LAB_143debcd7:
                    if (local_168 != 0) {
                      FUN_1400020a8();
                    }
                    if (bVar46) {
                      bVar46 = false;
                      ppppppplVar14 = ppppppplVar41;
                      goto joined_r0x000143debd1f;
                    }
                    ppppppplVar41 = (longlong *******)((longlong)ppppppplVar41 + 1);
                    bVar47 = (longlong)ppppppplVar41 < (longlong)local_5b0;
                    ppppppplVar14 = local_5b0;
                  } while (ppppppplVar41 != local_5b0);
                }
                else {
                  ppppppplVar14 = local_5c0;
                  if (bVar46) break;
                  bVar47 = false;
                  ppppppplVar14 = (longlong *******)(ulonglong)uVar18;
                }
LAB_143debd2c:
                iVar7 = (int)ppppppplVar14 - (int)local_5c0;
                iVar27 = (int)local_580;
                if ((int)local_580 != (int)local_5c0) {
                  memmove((int *)((longlong)local_5b8 + (longlong)(int)local_580 * 4),
                          (int *)((longlong)local_5b8 + (longlong)local_598 * 4),
                          (longlong)iVar7 << 2);
                }
                uVar18 = iVar27 + iVar7;
                ppppppplVar13 = (longlong *******)(ulonglong)uVar18;
                local_580 = CONCAT44(local_580._4_4_,uVar18);
                bVar46 = true;
                ppppppplVar41 = ppppppplVar14;
                ppppppplVar14 = local_5c0;
joined_r0x000143debd1f:
                local_5c0 = ppppppplVar41;
              } while (bVar47);
LAB_143debd84:
              local_5c0 = ppppppplVar14;
              uStack_560 = CONCAT44(uStack_560._4_4_,(int)local_580);
            }
            FUN_1409c185c(local_508,local_500);
            if (local_508 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
            FUN_1409c185c(local_520,local_518);
            if (local_520 != 0) {
              FUN_1400020a8();
            }
            FUN_1409c185c(local_4e8,uStack_4e0 & 0xffffffff);
            if (local_4e8 != 0) {
              FUN_1400020a8();
            }
            uVar43 = (ulonglong)local_5d4;
            param_4 = local_5c8;
            ppppppplVar41 = local_5a8;
          }
          lVar42 = DAT_14cb70c00;
          if ((int)uStack_560 == 0) {
            param_8 = (longlong *)0x0;
            plVar10 = local_5d0;
          }
          else {
            iVar27 = *(int *)local_590;
            if (iVar27 == 0x40000002) {
              uVar15 = 0;
            }
            else {
              bVar46 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar27 != 2)) {
                if (iVar27 == 1) {
                  uVar18 = FUN_140ad26c0();
                  ppppppplVar13 = (longlong *******)(ulonglong)uVar18;
                  DVar9 = GetCurrentThreadId();
                  bVar46 = uVar18 == DVar9;
                }
                else {
                  bVar46 = false;
                }
              }
              uVar15 = (ulonglong)(bVar46 ^ 1);
            }
            plVar10 = local_5a0;
            if (*(int *)(lVar42 + uVar15 * 4) != 0) {
              do {
                uVar6 = DAT_14cb1ae68;
                if (plVar10[5] != 0) {
                  ppppppplVar14 = *(longlong ********)(plVar10[5] + 0x30);
                  if (ppppppplVar14 == (longlong *******)0x0) goto LAB_143deb2aa;
                  pppppplVar2 = ppppppplVar14[0x6c];
                  ppppppplVar13 = (longlong *******)0x0;
                  if (pppppplVar2 == (longlong ******)0x0) goto LAB_143deb2aa;
                  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
                    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
                    *DAT_14c9a7d10 = 0;
                    DAT_14c9a7d10[1] = 0;
                    DAT_14c9a7d10[2] = 0;
                    DAT_14c9a7d10[3] = 0;
                  }
                  ppppppplVar14 =
                       (longlong *******)FUN_14005915a(DAT_14c9a7d10,&local_498,uVar6,pppppplVar2);
                  ppppppplVar13 = ppppppplStack_490;
                  ppppppplVar28 = local_498;
                  if ((local_498 == (longlong *******)0x0) ||
                     (ppppppplStack_490 == (longlong *******)0x0)) {
                    ppppppplVar13 = (longlong *******)0x0;
                  }
                  else {
                    LOCK();
                    *(int *)(ppppppplStack_490 + 1) = *(int *)(ppppppplStack_490 + 1) + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)((longlong)ppppppplStack_490 + 0xc) =
                         *(int *)((longlong)ppppppplStack_490 + 0xc) + 1;
                    UNLOCK();
                    LOCK();
                    ppppppplVar26 = ppppppplStack_490 + 1;
                    *(int *)ppppppplVar26 = *(int *)ppppppplVar26 + -1;
                    UNLOCK();
                    if (*(int *)ppppppplVar26 == 0) {
                      ppppppplVar14 = (longlong *******)(*(code *)**ppppppplStack_490)();
                      LOCK();
                      piVar35 = (int *)((longlong)ppppppplVar13 + 0xc);
                      *piVar35 = *piVar35 + -1;
                      UNLOCK();
                      if (*piVar35 == 0) {
                        ppppppplVar14 = (longlong *******)(*(code *)(*ppppppplVar13)[2])();
                      }
                      uVar43 = (ulonglong)local_5d4;
                      param_4 = local_5c8;
                      ppppppplVar41 = local_5a8;
                    }
                  }
                  ppppppplVar26 = ppppppplStack_490;
                  if (ppppppplStack_490 != (longlong *******)0x0) {
                    LOCK();
                    ppppppplVar24 = ppppppplStack_490 + 1;
                    *(int *)ppppppplVar24 = *(int *)ppppppplVar24 + -1;
                    UNLOCK();
                    if (*(int *)ppppppplVar24 == 0) {
                      ppppppplVar14 = (longlong *******)(*(code *)**ppppppplStack_490)();
                      LOCK();
                      piVar35 = (int *)((longlong)ppppppplVar26 + 0xc);
                      *piVar35 = *piVar35 + -1;
                      UNLOCK();
                      if (*piVar35 == 0) {
                        ppppppplVar14 = (longlong *******)(*(code *)(*ppppppplVar26)[2])();
                      }
                    }
                  }
                  if (ppppppplVar13 == (longlong *******)0x0) goto LAB_143deb2aa;
                  ppppppplVar14 = (longlong *******)(ulonglong)*(uint *)(ppppppplVar13 + 1);
                  goto LAB_143deaa1f;
                }
                plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2f0))();
              } while (plVar10 != (longlong *)0x0);
              ppppppplVar14 = (longlong *******)0x0;
              goto LAB_143deb2aa;
            }
            uVar18 = *(int *)(param_9 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(param_9 + 4) = uVar18;
            fVar49 = (float)(uVar18 >> 9 | 0x3f800000) + -1.0;
            if (fVar49 < 0.0) {
              uVar18 = rand();
              fVar49 = (float)(uVar18 & 0x7fff) / 32767.0;
            }
            uVar11 = local_570;
            local_498 = (longlong *******)0x0;
            lVar42 = (longlong)(int)uStack_560;
            ppppppplStack_490 = (longlong *******)(uStack_560 & 0xffffffff);
            if (lVar42 != 0) {
              FUN_14475e4ac(&local_498);
            }
            memset(local_498,0,lVar42 << 2);
            lVar40 = -1;
            lVar42 = lVar40;
            if (0 < (int)uStack_560) {
              fVar63 = 0.0;
              lVar39 = 0;
              do {
                uVar18 = *(uint *)(*local_5d0 + 0x70 +
                                  (longlong)*(int *)((longlong)local_568 + lVar39 * 4) * 0xa0);
                in_XMM1 = ZEXT416(uVar18);
                *(uint *)((longlong)local_498 + lVar39 * 4) = uVar18;
                fVar63 = fVar63 + *(float *)((longlong)local_498 + lVar39 * 4);
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)uStack_560);
              if (0 < (int)uStack_560) {
                fVar48 = 0.0;
                lVar39 = 0;
                do {
                  bVar46 = fVar48 <= fVar49 * fVar63;
                  fVar48 = fVar48 + *(float *)((longlong)local_498 + lVar39 * 4);
                  if ((bVar46) && (lVar42 = lVar39, fVar49 * fVar63 <= fVar48)) break;
                  lVar39 = lVar39 + 1;
                  lVar42 = lVar40;
                } while ((int)uStack_560 != lVar39);
              }
            }
            if (local_498 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
            plVar10 = local_5d0;
            local_5e0 = param_6;
            local_5e8 = local_588;
            uVar18 = FUN_143de8696(local_5a0,uVar11,
                                   (longlong)*(int *)((longlong)local_568 + lVar42 * 4) * 0xa0 +
                                   *local_5d0,param_4);
            param_8 = (longlong *)(ulonglong)uVar18;
          }
          goto LAB_143deb337;
        }
        param_8 = (longlong *)0x0;
      }
      goto LAB_143de9b59;
    }
  }
  bVar5 = 0;
  goto LAB_143de9b7a;
LAB_143de9e29:
  if (((ulonglong)local_5c0 & 1) == 0) {
    uVar43 = (ulonglong)local_5d4;
    goto LAB_143de9e88;
  }
LAB_143de9d91:
  ppppppplVar41 = (longlong *******)((longlong)ppppppplVar41 + 1);
  bVar46 = (longlong)ppppppplVar41 < (longlong)local_5b8;
  ppppppplVar14 = local_5b8;
  if (ppppppplVar41 == local_5b8) goto LAB_143de9e43;
  goto LAB_143de9d52;
LAB_143de9e43:
  uVar43 = (ulonglong)local_5d4;
  piVar35 = (int *)((ulonglong)local_5c0 & 0xffffffff);
  ppppppplVar41 = ppppppplVar14;
  if (((ulonglong)local_5c0 & 1) == 0) goto LAB_143de9e88;
  piVar35 = (int *)0x0;
  param_4 = local_5c8;
  iVar27 = (int)local_5b0;
  if (!bVar46) goto LAB_143de9f73;
  goto LAB_143de9d21;
LAB_143deac2f:
  memcpy(local_190,ppppppplVar33,0xa0);
  memcpy(ppppppplVar33,ppppppplVar23,0xa0);
  memcpy(ppppppplVar23,local_190,0xa0);
  iVar27 = (int)local_5b8 + -1;
  ppppppplVar29 = ppppppplVar29 + -0x28;
  if ((longlong)ppppppplVar45 - (longlong)local_5b0 < (longlong)local_590 - (longlong)ppppppplVar13)
  {
    ppppppplVar24 = local_5c0;
    if (ppppppplVar26 < ppppppplVar14) {
      *local_5c0 = (longlong ******)ppppppplVar26;
      local_5c0[1] = (longlong ******)ppppppplVar14;
      *(int *)(local_5c0 + 2) = iVar27;
      ppppppplVar24 = local_5c0 + 3;
    }
    ppppppplVar26 = ppppppplVar33;
    if (ppppppplVar23 <= ppppppplVar33 + 0x14) goto LAB_143deb0ba;
  }
  else {
    if (ppppppplVar33 + 0x14 < ppppppplVar23) {
      *local_5c0 = (longlong ******)ppppppplVar33;
      local_5c0[1] = (longlong ******)ppppppplVar29;
      *(int *)(local_5c0 + 2) = iVar27;
      local_5c0 = local_5c0 + 3;
    }
    ppppppplVar24 = local_5c0;
    ppppppplVar29 = ppppppplVar14;
    ppppppplVar33 = ppppppplVar13;
    ppppppplVar45 = ppppppplVar14;
    if (ppppppplVar14 <= ppppppplVar26) goto LAB_143deb0ba;
  }
  local_5c0 = ppppppplVar24;
  iVar7 = (int)((ulonglong)((longlong)ppppppplVar45 - (longlong)ppppppplVar33) >> 5) * -0x33333333;
  ppppppplVar23 = (longlong *******)(ulonglong)(iVar7 + 1);
  ppppppplVar14 = ppppppplVar29;
  ppppppplVar13 = ppppppplVar33;
  if (iVar27 == 0) goto LAB_143dead2b;
  goto LAB_143deaaf6;
  while( true ) {
    LOCK();
    uVar19 = *(uint *)(ppppppplVar13 + 1);
    if (uVar18 == uVar19) {
      *(uint *)(ppppppplVar13 + 1) = uVar18 + 1;
    }
    else {
      ppppppplVar14 = (longlong *******)(ulonglong)uVar19;
    }
    UNLOCK();
    ppppppplVar26 = ppppppplVar13;
    if (uVar18 == uVar19) break;
LAB_143deaa1f:
    uVar18 = (uint)ppppppplVar14;
    ppppppplVar26 = (longlong *******)0x0;
    if (uVar18 == 0) break;
  }
  LOCK();
  piVar35 = (int *)((longlong)ppppppplVar13 + 0xc);
  *piVar35 = *piVar35 + -1;
  UNLOCK();
  if (*piVar35 == 0) {
    ppppppplVar14 = (longlong *******)(*(code *)(*ppppppplVar13)[2])();
  }
  if (ppppppplVar26 != (longlong *******)0x0) {
    if (ppppppplVar28 != (longlong *******)0x0) {
      iVar27 = (int)local_5d0[1];
      if (1 < (longlong)iVar27) {
        ppppppplVar28 = ppppppplVar28 + 0x36;
        ppppppplVar13 = (longlong *******)*local_5d0;
        local_598 = ppppppplVar26;
        memset(&local_488,0,0x2f0);
        ppppppplStack_490 = ppppppplVar13 + (longlong)iVar27 * 0x14 + -0x14;
        local_498 = ppppppplVar13;
        fVar49 = logf((float)iVar27);
        local_488 = (longlong ******)CONCAT44(local_488._4_4_,(int)(longlong)(fVar49 + fVar49));
        ppppppplVar24 = (longlong *******)&local_498;
        ppppppplVar33 = &local_488;
        do {
          ppppppplVar26 = (longlong *******)*ppppppplVar24;
          ppppppplVar14 = (longlong *******)ppppppplVar24[1];
          iVar27 = *(int *)(ppppppplVar24 + 2);
          iVar7 = (int)((ulonglong)((longlong)ppppppplVar14 - (longlong)ppppppplVar26) >> 5) *
                  -0x33333333;
          ppppppplVar23 = (longlong *******)(ulonglong)(iVar7 + 1);
          ppppppplVar13 = ppppppplVar26;
          ppppppplVar45 = ppppppplVar14;
          local_5c0 = ppppppplVar24;
          if (iVar27 != 0) {
LAB_143deaaf6:
            ppppppplVar33 = ppppppplVar26;
            if (8 < (int)(uint)ppppppplVar23) {
              local_5b8 = (longlong *******)CONCAT44(local_5b8._4_4_,iVar27);
              local_5b0 = ppppppplVar13;
              local_590 = ppppppplVar45;
              memcpy(local_190,ppppppplVar33 + (ulonglong)((uint)ppppppplVar23 >> 1) * 0x14,0xa0);
              memcpy(ppppppplVar33 + (ulonglong)((uint)ppppppplVar23 >> 1) * 0x14,ppppppplVar33,0xa0
                    );
              memcpy(ppppppplVar33,local_190,0xa0);
              ppppppplVar23 = ppppppplVar14 + 0x14;
              ppppppplVar26 = ppppppplVar33;
              do {
                ppppppplVar24 = ppppppplVar26 + 0x14;
                ppppppplVar45 = ppppppplVar26 + 0x14;
                do {
                  ppppppplVar26 = ppppppplVar45;
                  ppppppplVar13 = ppppppplVar24;
                  if (ppppppplVar14 < ppppppplVar26) break;
                  fVar49 = (float)FUN_1489009c3(ppppppplVar33,ppppppplVar28);
                  fVar63 = (float)FUN_1489009c3(ppppppplVar26,ppppppplVar28);
                  ppppppplVar24 = ppppppplVar13 + 0x14;
                  ppppppplVar45 = ppppppplVar26 + 0x14;
                } while (fVar63 <= fVar49);
                ppppppplVar24 = ppppppplVar23 + -0x28;
                do {
                  ppppppplVar29 = ppppppplVar23;
                  ppppppplVar45 = ppppppplVar24;
                  ppppppplVar23 = ppppppplVar29 + -0x14;
                  if (ppppppplVar23 <= ppppppplVar33) break;
                  fVar49 = (float)FUN_1489009c3(ppppppplVar23,ppppppplVar28);
                  fVar63 = (float)FUN_1489009c3(ppppppplVar33,ppppppplVar28);
                  ppppppplVar24 = ppppppplVar45 + -0x14;
                } while (fVar63 <= fVar49);
                if (ppppppplVar23 < ppppppplVar26) goto LAB_143deac2f;
                memcpy(local_190,ppppppplVar26,0xa0);
                memcpy(ppppppplVar26,ppppppplVar23,0xa0);
                memcpy(ppppppplVar23,local_190,0xa0);
              } while( true );
            }
            for (; ppppppplVar24 = local_5c0, ppppppplVar23 = ppppppplVar33,
                ppppppplVar26 = ppppppplVar33, ppppppplVar33 < ppppppplVar14;
                ppppppplVar14 = (longlong *******)((longlong)ppppppplVar14 + 0xffffffffffffff60)) {
              while (ppppppplVar13 = ppppppplVar23, ppppppplVar26 = ppppppplVar26 + 0x14,
                    ppppppplVar26 <= ppppppplVar14) {
                fVar49 = (float)FUN_1489009c3(ppppppplVar13,ppppppplVar28);
                fVar63 = (float)FUN_1489009c3(ppppppplVar26,ppppppplVar28);
                ppppppplVar23 = ppppppplVar26;
                if (fVar63 <= fVar49) {
                  ppppppplVar23 = ppppppplVar13;
                }
              }
              memcpy(local_190,ppppppplVar13,0xa0);
              memcpy(ppppppplVar13,ppppppplVar14,0xa0);
              memcpy(ppppppplVar14,local_190,0xa0);
            }
            goto LAB_143deb0ba;
          }
LAB_143dead2b:
          ppppppplVar24 = local_5c0;
          ppppppplVar13 = ppppppplVar33;
          if ((int)ppppppplVar23 != 0) {
            iVar27 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
            local_5b8 = ppppppplVar23;
            do {
              iVar7 = iVar27 * 2 + 1;
              iVar38 = iVar27;
              if (iVar7 < (int)ppppppplVar23) {
                do {
                  iVar36 = iVar38 * 2 + 2;
                  iVar37 = iVar7;
                  if (iVar36 < (int)ppppppplVar23) {
                    fVar49 = (float)FUN_1489009c3(ppppppplVar26 + (longlong)iVar36 * 0x14,
                                                  ppppppplVar28);
                    fVar63 = (float)FUN_1489009c3(ppppppplVar26 + (longlong)iVar7 * 0x14,
                                                  ppppppplVar28);
                    if (fVar63 <= fVar49) {
                      iVar37 = iVar36;
                    }
                  }
                  ppppppplVar41 = ppppppplVar26 + (longlong)iVar38 * 0x14;
                  ppppppplVar13 = ppppppplVar26 + (longlong)iVar37 * 0x14;
                  fVar49 = (float)FUN_1489009c3(ppppppplVar41,ppppppplVar28);
                  fVar63 = (float)FUN_1489009c3(ppppppplVar13,ppppppplVar28);
                  ppppppplVar23 = local_5b8;
                  if (fVar63 <= fVar49) break;
                  memcpy(local_190,ppppppplVar41,0xa0);
                  memcpy(ppppppplVar41,ppppppplVar13,0xa0);
                  memcpy(ppppppplVar13,local_190,0xa0);
                  iVar7 = iVar37 * 2 + 1;
                  ppppppplVar23 = local_5b8;
                  iVar38 = iVar37;
                } while (iVar7 < (int)local_5b8);
              }
              bVar46 = iVar27 != 0;
              iVar27 = iVar27 + -1;
            } while (bVar46);
            ppppppplVar24 = local_5c0;
            ppppppplVar41 = local_5a8;
            if (1 < (int)ppppppplVar23) {
              ppppppplVar14 = (longlong *******)(((ulonglong)ppppppplVar23 & 0xffffffff) - 1);
              ppppppplVar13 = ppppppplVar26 + (longlong)ppppppplVar14 * 0x14;
              memcpy(local_190,ppppppplVar26,0xa0);
              memcpy(ppppppplVar26,ppppppplVar13,0xa0);
              memcpy(ppppppplVar13,local_190,0xa0);
              ppppppplVar41 = local_5a8;
              ppppppplVar24 = local_5c0;
              if ((int)ppppppplVar23 != 2) {
                do {
                  iVar27 = 0;
                  iVar38 = 1;
                  iVar7 = 0;
                  local_5b8 = ppppppplVar14;
                  do {
                    iVar27 = iVar27 + 2;
                    iVar37 = iVar38;
                    if ((longlong)iVar27 < (longlong)local_5b8) {
                      fVar49 = (float)FUN_1489009c3(ppppppplVar26 + (longlong)iVar27 * 0x14,
                                                    ppppppplVar28);
                      fVar63 = (float)FUN_1489009c3(ppppppplVar26 + (longlong)iVar38 * 0x14,
                                                    ppppppplVar28);
                      if (fVar63 <= fVar49) {
                        iVar37 = iVar27;
                      }
                    }
                    ppppppplVar14 = ppppppplVar26 + (longlong)iVar7 * 0x14;
                    ppppppplVar13 = ppppppplVar26 + (longlong)iVar37 * 0x14;
                    fVar49 = (float)FUN_1489009c3(ppppppplVar14,ppppppplVar28);
                    fVar63 = (float)FUN_1489009c3(ppppppplVar13,ppppppplVar28);
                    if (fVar63 <= fVar49) break;
                    memcpy(local_190,ppppppplVar14,0xa0);
                    memcpy(ppppppplVar14,ppppppplVar13,0xa0);
                    memcpy(ppppppplVar13,local_190,0xa0);
                    iVar27 = iVar37 * 2;
                    iVar38 = iVar37 * 2 + 1;
                    iVar7 = iVar37;
                  } while ((longlong)iVar38 < (longlong)local_5b8);
                  ppppppplVar33 = local_5b8;
                  ppppppplVar14 = (longlong *******)((longlong)local_5b8 + -1);
                  ppppppplVar13 = ppppppplVar26 + (longlong)ppppppplVar14 * 0x14;
                  memcpy(local_190,ppppppplVar26,0xa0);
                  memcpy(ppppppplVar26,ppppppplVar13,0xa0);
                  memcpy(ppppppplVar13,local_190,0xa0);
                  ppppppplVar24 = local_5c0;
                } while ((longlong *******)0x2 < ppppppplVar33);
              }
            }
          }
LAB_143deb0ba:
          uVar43 = (ulonglong)local_5d4;
          ppppppplVar24 = ppppppplVar24 + -3;
          ppppppplVar14 = (longlong *******)&local_498;
          ppppppplVar26 = local_598;
          ppppppplVar33 = ppppppplVar13;
          param_4 = local_5c8;
        } while (ppppppplVar14 <= ppppppplVar24);
      }
    }
    LOCK();
    ppppppplVar28 = ppppppplVar26 + 1;
    *(int *)ppppppplVar28 = *(int *)ppppppplVar28 + -1;
    UNLOCK();
    if (*(int *)ppppppplVar28 == 0) {
      ppppppplVar14 = (longlong *******)(*(code *)**ppppppplVar26)();
      LOCK();
      piVar35 = (int *)((longlong)ppppppplVar26 + 0xc);
      *piVar35 = *piVar35 + -1;
      UNLOCK();
      if (*piVar35 == 0) {
        ppppppplVar14 = (longlong *******)(*(code *)(*ppppppplVar26)[2])();
      }
    }
  }
LAB_143deb2aa:
  bVar5 = (byte)ppppppplVar14;
  uVar18 = *(uint *)(local_5d0 + 1);
  uVar19 = 0;
  if ((int)uVar18 < 1) {
    bVar46 = false;
    uVar34 = 0;
  }
  else {
    uVar34 = (undefined7)((ulonglong)ppppppplVar13 >> 8);
    bVar46 = true;
    do {
      if ((int)uStack_560 != 0) {
        ppppppplVar14 = (longlong *******)0x0;
        do {
          if (*(uint *)((longlong)local_568 + (longlong)ppppppplVar14) == uVar19) {
            local_5e8 = local_588;
            local_5e0 = param_6;
            bVar5 = FUN_143de8696(local_5a0,local_570,(ulonglong)uVar19 * 0xa0 + *local_5d0,param_4)
            ;
            goto LAB_143deb32f;
          }
          ppppppplVar14 = (longlong *******)((longlong)ppppppplVar14 + 4);
        } while ((longlong *******)((longlong)(int)uStack_560 << 2) != ppppppplVar14);
      }
      bVar5 = (byte)ppppppplVar14;
      uVar19 = uVar19 + 1;
      bVar46 = (int)uVar19 < (int)uVar18;
    } while (uVar19 != uVar18);
  }
LAB_143deb32f:
  param_8 = (longlong *)CONCAT71(uVar34,bVar46 & bVar5);
  plVar10 = local_5d0;
LAB_143deb337:
  auVar53 = _DAT_149931e80;
  if ((longlong)(int)plVar10[1] != 0) {
    uVar15 = (longlong)(int)plVar10[1] * 0xa0 - 0xa0;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar15;
    uVar6 = SUB164(auVar58 * ZEXT816(0xcccccccccccccccd),8);
    uVar55 = (undefined4)(uVar15 / 0x140000000);
    auVar60._0_8_ = CONCAT44(uVar55,uVar6);
    auVar60._8_4_ = uVar6;
    auVar60._12_4_ = uVar55;
    auVar54._0_8_ = auVar60._0_8_ >> 7;
    auVar54._8_8_ = auVar60._8_8_ >> 7;
    puVar21 = (undefined4 *)(*plVar10 + 0x250);
    uVar16 = 0;
    auVar58 = pmovsxbq(in_XMM1,0x302);
    auVar60 = pmovsxbq(in_XMM2,0x100);
    auVar54 = auVar54 | _DAT_149931e80;
    do {
      lVar42 = auVar54._0_8_;
      lVar40 = auVar54._8_8_;
      if ((bool)(~(lVar42 < (longlong)(uVar16 ^ auVar53._0_8_)) & 1)) {
        puVar21[-0x78] = 0x3f800000;
      }
      auVar61._8_4_ = (int)uVar16;
      auVar61._0_8_ = uVar16;
      auVar61._12_4_ = (int)(uVar16 >> 0x20);
      if ((longlong)((auVar61._8_8_ | auVar60._8_8_) ^ auVar53._8_8_) <= lVar40) {
        puVar21[-0x50] = 0x3f800000;
      }
      auVar61 = (auVar61 | auVar58) ^ auVar53;
      if (auVar61._0_8_ <= lVar42) {
        puVar21[-0x28] = 0x3f800000;
      }
      if (auVar61._8_8_ <= lVar40) {
        *puVar21 = 0x3f800000;
      }
      uVar16 = uVar16 + 4;
      puVar21 = puVar21 + 0xa0;
    } while ((uVar15 / 0xa0 + 4 & 0xfffffffffffffffc) != uVar16);
  }
  if (local_568 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
LAB_143de9b59:
  bVar5 = (byte)uVar43;
  LOCK();
  ppppppplVar13 = ppppppplVar41 + 1;
  *(int *)ppppppplVar13 = *(int *)ppppppplVar13 + -1;
  UNLOCK();
  if (*(int *)ppppppplVar13 == 0) {
    (*(code *)**ppppppplVar41)(ppppppplVar41);
    LOCK();
    piVar35 = (int *)((longlong)ppppppplVar41 + 0xc);
    *piVar35 = *piVar35 + -1;
    UNLOCK();
    if (*piVar35 == 0) {
      (*(code *)(*ppppppplVar41)[2])(ppppppplVar41);
    }
  }
LAB_143de9b7a:
  FUN_1409c185c(local_538,uStack_530 & 0xffffffff);
  if (local_538 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_608) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_8 >> 8),(byte)param_8 & bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dec0ec FUN_143dec0ec body=4032 status=ok
// SIG undefined FUN_143dec0ec(void)

ulonglong FUN_143dec0ec(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                       longlong param_5,longlong param_6)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  undefined4 *puVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_248 [40];
  ulonglong local_220;
  undefined8 local_218;
  undefined8 *local_210;
  char local_208;
  undefined7 uStack_207;
  longlong *local_1f8;
  undefined4 local_1e0;
  float local_1d8;
  undefined4 uStack_1d4;
  ushort local_1c0;
  byte local_1b8;
  float local_1b0;
  char local_1ac;
  undefined1 local_1a8 [192];
  undefined1 *local_e8;
  undefined8 local_e0;
  uint local_d8 [2];
  uint *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  uint local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar14 = 0;
  if (param_2 != (longlong *)0x0) {
    local_1b0 = 0.0;
    local_1ac = '\0';
    local_e8 = (undefined1 *)0x0;
    local_e0 = 0x800000000;
    local_d0 = (uint *)0x0;
    local_c8 = 0x2000000000;
    uStack_c0._0_4_ = -1;
    uStack_c0._4_4_ = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    local_218 = param_3;
    local_210 = param_4;
    if ((longlong)(int)param_2[1] != 0) {
      puVar27 = (ulonglong *)*param_2;
      puVar2 = puVar27 + (int)param_2[1];
      do {
        uVar14 = *puVar27;
        if ((uVar14 != 0) &&
           ((param_1 == (longlong *)0x0 ||
            (cVar8 = (**(code **)(*param_1 + 0x2d0))(), cVar8 != '\0')))) {
          local_208 = '\0';
          local_1e0 = 0;
          FUN_1456bb102(&local_208,param_1);
          FUN_1447c3578(uVar14 + 0x38);
          if (local_1b8 == 3) {
            fVar34 = local_1d8;
            bVar9 = 3;
          }
          else {
            FUN_1400b56fe(&local_98);
            fVar34 = 0.0;
            if (local_78 != 0) {
              fVar34 = local_98;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar5 != (code *)0x0) {
              pfVar19 = &local_98;
              if (0x18 < local_80) {
                pfVar19 = (float *)CONCAT44(uStack_94,local_98);
              }
              (*pcVar5)(pfVar19);
            }
            bVar9 = local_1b8;
            if (0x18 < local_80) {
              FUN_1400020a8(CONCAT44(uStack_94,local_98));
              bVar9 = local_1b8;
            }
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar9 * 0x120));
          if (pcVar5 != (code *)0x0) {
            pfVar19 = &local_1d8;
            if (0x18 < local_1c0) {
              pfVar19 = (float *)CONCAT44(uStack_1d4,local_1d8);
            }
            (*pcVar5)(pfVar19);
          }
          if (0x18 < local_1c0) {
            FUN_1400020a8(CONCAT44(uStack_1d4,local_1d8));
          }
          FUN_1448173f8();
          if ((local_208 == '\x03') && (local_1f8 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_1f8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_1f8 + 0x10))();
            }
          }
          bVar9 = 1;
          if (((param_1 != (longlong *)0x0) &&
              (lVar33 = (**(code **)(*param_1 + 0x2b0))(), lVar33 != 0)) &&
             (*(int *)(uVar14 + 0x30) != 0)) {
            bVar9 = FUN_1405d584e();
          }
          if (*(int *)(uVar14 + 0x70) == 0) {
            if (*(longlong *)(param_5 + 8) != *(longlong *)(uVar14 + 0x80)) goto LAB_143dec1d3;
            uVar12 = *(uint *)(param_5 + 0x18);
            uVar24 = *(uint *)(uVar14 + 0x90);
            uVar30 = uVar24;
            if ((int)uVar12 < (int)uVar24) {
              uVar30 = uVar12;
            }
            if (0 < (int)uVar30) {
              uVar20 = 0;
              do {
                if ((*(ulonglong *)(*(longlong *)(uVar14 + 0x88) + uVar20 * 8) &
                    ~*(ulonglong *)(*(longlong *)(param_5 + 0x10) + uVar20 * 8)) != 0)
                goto LAB_143dec1d3;
                uVar20 = uVar20 + 1;
              } while (uVar30 != uVar20);
            }
            bVar10 = 1;
            if ((int)uVar12 < (int)uVar24) {
              lVar33 = 0;
              do {
                if (*(longlong *)
                     ((longlong)(int)uVar12 * 8 + *(longlong *)(uVar14 + 0x88) + lVar33 * 8) != 0)
                goto LAB_143dec1d3;
                lVar33 = lVar33 + 1;
              } while (uVar24 - uVar12 != (int)lVar33);
            }
          }
          else {
            bVar10 = FUN_1405d595e();
          }
          iVar23 = (int)uStack_c0;
          uVar20 = local_e0;
          if (((bVar9 & bVar10) == 1) && ((1e-08 < fVar34 || (local_1ac == '\x01')))) {
            iVar21 = (int)local_e0;
            if ((int)local_e0 != uStack_c0._4_4_) {
              uVar12 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              puVar15 = local_a8;
              if (local_a8 == (undefined1 *)0x0) {
                puVar15 = local_b8;
              }
              iVar31 = *(int *)(puVar15 + (ulonglong)(local_a0 - 1 & (uVar12 >> 0x10 ^ uVar12)) * 4)
              ;
              if (iVar31 != -1) {
                puVar15 = local_e8;
                if (local_e8 == (undefined1 *)0x0) {
                  puVar15 = local_1a8;
                }
                do {
                  puVar3 = (ulonglong *)(puVar15 + (longlong)iVar31 * 0x18);
                  if (*puVar3 == uVar14) {
                    if ((float *)(puVar3 + 1) != (float *)0x0 && puVar3 != (ulonglong *)0x0) {
                      local_1b0 = local_1b0 - *(float *)(puVar3 + 1);
                    }
                    break;
                  }
                  iVar31 = (int)puVar3[2];
                } while (iVar31 != -1);
              }
            }
            local_1b0 = local_1b0 + fVar34;
            if (uStack_c0._4_4_ == 0) {
              local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + 1);
              if (local_e0._4_4_ == iVar21) {
                FUN_147f53d46(local_1a8,uVar20 & 0xffffffff);
              }
              uVar20 = local_c8;
              if ((int)local_c8 == 0) {
                iVar23 = -1;
              }
              else {
                iVar23 = (int)local_c8 + 0x1e;
                if (-1 < (int)local_c8 + -1) {
                  iVar23 = (int)local_c8 + -1;
                }
                iVar23 = iVar23 >> 5;
              }
              iVar17 = (int)local_c8 + 1;
              iVar31 = (int)local_c8 + 0x1f;
              if (-1 < (int)local_c8) {
                iVar31 = (int)local_c8;
              }
              if (iVar31 >> 5 == iVar23) {
                local_c8 = CONCAT44(local_c8._4_4_,iVar17);
              }
              else {
                if (local_c8._4_4_ <= (int)local_c8) {
                  if ((int)local_c8 + 0x20U < 0x40) {
                    iVar17 = 0x20;
                    iVar23 = (int)local_c8;
                  }
                  else {
                    uVar12 = (int)local_c8 + 0x20U >> 5;
                    local_220 = (ulonglong)uVar12;
                    if (local_c8._4_4_ + 0x1fU < 0x40) {
                      uVar24 = 4;
                      if (4 < uVar12) {
                        uVar24 = uVar12;
                      }
                    }
                    else {
                      uVar24 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
                    }
                    uVar26 = (ulonglong)(uVar24 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar12 = (uint)(uVar26 + 0xf);
                        if (uVar24 < 0x1ffd) {
                          uVar26 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
                        }
                        else {
                          uVar18 = (ulonglong)(uVar12 & 0xfffffff0);
                          if (uVar18 < 0x7ff1) {
                            bVar9 = (&DAT_14c841e00)[uVar12 >> 4];
                            uVar22 = 0x32;
                            if (0x32 < bVar9) {
                              uVar22 = (ulonglong)bVar9;
                            }
                            uVar29 = 0x32 - (ulonglong)bVar9;
                            do {
                              uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0)
                              goto LAB_143decaaf;
                              lVar33 = uVar22 + 1 + uVar29;
                              uVar29 = uVar29 - 1;
                            } while (lVar33 != 0x33);
                          }
                          uVar26 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar26 = 0x10;
                          }
                          uVar26 = -uVar26 & (uVar18 + uVar26) - 1;
                        }
                      }
                      else {
                        uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
                      }
                    }
LAB_143decaaf:
                    iVar11 = (int)(uVar26 >> 2);
                    iVar17 = iVar11 << 5;
                    iVar23 = (int)local_c8;
                    if (iVar11 < (int)local_220) {
                      iVar17 = -0x20;
                    }
                  }
                  local_c8 = CONCAT44(iVar17,(int)local_c8);
                  FUN_14008f53c(local_d8,iVar23);
                  iVar17 = (int)local_c8 + 1;
                }
                iVar23 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar23 = iVar17;
                }
                local_c8 = CONCAT44(local_c8._4_4_,iVar17);
                if (iVar17 % 0x20 != 0) {
                  puVar13 = local_d0;
                  if (local_d0 == (uint *)0x0) {
                    puVar13 = local_d8;
                  }
                  bVar9 = -(char)(iVar17 % 0x20);
                  puVar13[iVar23 >> 5] = (puVar13[iVar23 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
                }
              }
              lVar33 = (longlong)iVar21;
              puVar13 = local_d0;
              if (local_d0 == (uint *)0x0) {
                puVar13 = local_d8;
              }
              bVar9 = (byte)uVar20 & 0x1f;
              puVar13[iVar31 >> 5] =
                   puVar13[iVar31 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
              iVar23 = iVar21;
            }
            else {
              puVar15 = local_e8;
              if (local_e8 == (undefined1 *)0x0) {
                puVar15 = local_1a8;
              }
              lVar33 = (longlong)(int)uStack_c0;
              uStack_c0._4_4_ = uStack_c0._4_4_ + -1;
              uStack_c0._0_4_ = *(int *)(puVar15 + lVar33 * 0x18 + 4);
              if (uStack_c0._4_4_ != 0) {
                *(undefined4 *)(puVar15 + (longlong)*(int *)(puVar15 + lVar33 * 0x18 + 4) * 0x18) =
                     0xffffffff;
              }
            }
            puVar13 = local_d0;
            if (local_d0 == (uint *)0x0) {
              puVar13 = local_d8;
            }
            iVar21 = iVar23 + 0x1f;
            if (-1 < iVar23) {
              iVar21 = iVar23;
            }
            puVar13[iVar21 >> 5] = puVar13[iVar21 >> 5] | 1 << ((byte)iVar23 & 0x1f);
            puVar15 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar15 = local_1a8;
            }
            puVar3 = (ulonglong *)(puVar15 + lVar33 * 0x18);
            *puVar3 = uVar14;
            *(float *)(puVar3 + 1) = fVar34;
            *(undefined4 *)(puVar3 + 2) = 0xffffffff;
            uVar12 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            uVar12 = uVar12 >> 0x10 ^ uVar12;
            uVar24 = (int)local_e0 - uStack_c0._4_4_;
            if (1 < uVar24) {
              puVar15 = local_a8;
              if (local_a8 == (undefined1 *)0x0) {
                puVar15 = local_b8;
              }
              iVar21 = *(int *)(puVar15 + (ulonglong)(local_a0 - 1 & uVar12) * 4);
              if (iVar21 != -1) {
                puVar15 = local_e8;
                if (local_e8 == (undefined1 *)0x0) {
                  puVar15 = local_1a8;
                }
                do {
                  puVar4 = (ulonglong *)(puVar15 + (longlong)iVar21 * 0x18);
                  if (*puVar4 == uVar14) {
                    uVar14 = puVar3[1];
                    *puVar4 = *puVar3;
                    puVar4[1] = uVar14;
                    FUN_14890b332();
                    goto LAB_143dec1d3;
                  }
                  iVar21 = (int)puVar4[2];
                } while (iVar21 != -1);
              }
            }
            uVar14 = (ulonglong)(((uVar24 >> 1) - 1) + (uint)(uVar24 >> 1 == 0)) * 2 + 1;
            lVar33 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            uVar30 = 1 << ((byte)lVar33 & 0x1f);
            if ((uint)lVar33 < 2) {
              uVar30 = 4;
            }
            if (uVar24 < 4) {
              uVar30 = 4;
            }
            if (((int)uVar24 < 1) || ((int)uVar30 <= (int)local_a0)) {
              uVar12 = local_a0 - 1 & uVar12;
              *(uint *)((longlong)puVar3 + 0x14) = uVar12;
              puVar15 = local_a8;
              if (local_a8 == (undefined1 *)0x0) {
                puVar15 = local_b8;
              }
              *(undefined4 *)(puVar3 + 2) =
                   *(undefined4 *)
                    (puVar15 + ((longlong)(int)local_a0 - 1U & (longlong)(int)uVar12) * 4);
              puVar15 = local_a8;
              if (local_a8 == (undefined1 *)0x0) {
                puVar15 = local_b8;
              }
              *(int *)(puVar15 + ((longlong)(int)local_a0 - 1U & (longlong)(int)uVar12) * 4) =
                   iVar23;
            }
            else {
              local_a0 = uVar30;
              if ((local_a8 == (undefined1 *)0x0) || (FUN_1446efa72(&local_a8,0,0,4), local_a0 != 0)
                 ) {
                uVar12 = local_a0;
                if (local_a0 < 5) {
                  if (local_a8 != (undefined1 *)0x0) {
                    FUN_1446efa72(&local_a8,0,0,4);
                  }
LAB_143dec66d:
                  uVar24 = 0;
                  do {
                    puVar15 = local_a8;
                    if (local_a8 == (undefined1 *)0x0) {
                      puVar15 = local_b8;
                    }
                    *(undefined4 *)(puVar15 + (ulonglong)(local_a0 + 0x7fffffff & uVar24) * 4) =
                         0xffffffff;
                    uVar24 = uVar24 + 1;
                  } while (uVar12 != uVar24);
                }
                else {
                  FUN_1446efa72(&local_a8,0,local_a0,4);
                  if (0 < (int)uVar12) goto LAB_143dec66d;
                }
                if ((int)local_c8 == 0) {
                  uVar14 = 0;
                  uVar20 = 1;
                  iVar23 = 0;
                  iVar21 = 0;
                }
                else {
                  puVar13 = local_d0;
                  if (local_d0 == (uint *)0x0) {
                    puVar13 = local_d8;
                  }
                  uVar12 = *puVar13;
                  if (uVar12 == 0) {
                    iVar23 = (int)local_c8 + 0x1e;
                    if (-1 < (int)local_c8 + -1) {
                      iVar23 = (int)local_c8 + -1;
                    }
                    uVar14 = 0;
                    uVar20 = (ulonglong)(uint)(iVar23 >> 5);
                    if (iVar23 >> 5 < 1) {
                      uVar20 = uVar14;
                    }
                    iVar21 = 0;
                    do {
                      if (uVar20 == uVar14) goto LAB_143dec1d3;
                      iVar21 = iVar21 + 0x20;
                      uVar12 = puVar13[uVar14 + 1];
                      uVar14 = uVar14 + 1;
                    } while (uVar12 == 0);
                  }
                  else {
                    uVar14 = 0;
                    iVar21 = 0;
                  }
                  uVar20 = (ulonglong)(-uVar12 & uVar12);
                  uVar26 = uVar20 * 2 + 1;
                  lVar33 = 0x3f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                    }
                  }
                  iVar23 = (iVar21 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                  if ((int)local_c8 <= iVar23) {
                    iVar23 = (int)local_c8;
                  }
                }
                if (iVar23 < (int)local_c8) {
                  uVar12 = 0xffffffff;
                  do {
                    puVar15 = local_e8;
                    if (local_e8 == (undefined1 *)0x0) {
                      puVar15 = local_1a8;
                    }
                    lVar33 = (longlong)iVar23;
                    uVar24 = ((uint)(*(ulonglong *)(puVar15 + lVar33 * 0x18) >> 0x14) & 0xffff ^
                             (uint)(*(ulonglong *)(puVar15 + lVar33 * 0x18) >> 4)) * -0x7a143595;
                    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                    uVar26 = (longlong)(int)(uVar24 >> 0x10 ^ uVar24) & (longlong)(int)local_a0 - 1U
                    ;
                    iVar31 = (int)uVar26;
                    *(int *)(puVar15 + lVar33 * 0x18 + 0x14) = iVar31;
                    puVar25 = local_a8;
                    if (local_a8 == (undefined1 *)0x0) {
                      puVar25 = local_b8;
                    }
                    *(undefined4 *)(puVar15 + lVar33 * 0x18 + 0x10) =
                         *(undefined4 *)(puVar25 + ((longlong)(int)local_a0 - 1U & uVar26) * 4);
                    puVar15 = local_a8;
                    if (local_a8 == (undefined1 *)0x0) {
                      puVar15 = local_b8;
                    }
                    *(int *)(puVar15 + ((longlong)iVar31 & (longlong)(int)local_a0 - 1U) * 4) =
                         iVar23;
                    uVar12 = ~(uint)uVar20 & uVar12;
                    puVar13 = local_d0;
                    if (local_d0 == (uint *)0x0) {
                      puVar13 = local_d8;
                    }
                    iVar23 = (int)uVar14;
                    lVar33 = (longlong)iVar23;
                    uVar24 = puVar13[lVar33] & uVar12;
                    if (uVar24 == 0) {
                      iVar31 = (int)local_c8 + 0x1e;
                      if (-1 < (int)local_c8 + -1) {
                        iVar31 = (int)local_c8 + -1;
                      }
                      iVar31 = iVar31 >> 5;
                      iVar17 = iVar31;
                      if (iVar31 < iVar23) {
                        iVar17 = iVar23;
                      }
                      if (iVar31 <= iVar23) break;
                      lVar28 = 0;
                      while( true ) {
                        iVar21 = iVar21 + 0x20;
                        uVar24 = puVar13[lVar33 + lVar28 + 1];
                        if (uVar24 != 0) break;
                        lVar28 = lVar28 + 1;
                        if (iVar17 - lVar33 == lVar28) goto LAB_143dec1d3;
                      }
                      uVar14 = (ulonglong)(iVar23 + (int)lVar28 + 1);
                      uVar12 = 0xffffffff;
                    }
                    uVar20 = (ulonglong)(-uVar24 & uVar24);
                    uVar26 = uVar20 * 2 + 1;
                    lVar33 = 0x3f;
                    if (uVar26 != 0) {
                      for (; uVar26 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                      }
                    }
                    iVar23 = (iVar21 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                  } while (iVar23 < (int)local_c8);
                }
              }
            }
          }
        }
LAB_143dec1d3:
        puVar27 = puVar27 + 1;
      } while (puVar27 != puVar2);
    }
    uVar12 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_6 + 4) = uVar12;
    fVar34 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
    if (fVar34 < 0.0) {
      uVar12 = rand();
      fVar34 = (float)(uVar12 & 0x7fff) / 32767.0;
    }
    if ((int)local_c8 == 0) {
      uVar26 = 1;
      uVar20 = 0;
      iVar23 = 0;
      iVar21 = 0;
    }
    else {
      puVar13 = local_d0;
      if (local_d0 == (uint *)0x0) {
        puVar13 = local_d8;
      }
      uVar12 = *puVar13;
      if (uVar12 == 0) {
        iVar23 = (int)local_c8 + 0x1e;
        if (-1 < (int)local_c8 + -1) {
          iVar23 = (int)local_c8 + -1;
        }
        uVar20 = 0;
        uVar14 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar14 = uVar20;
        }
        iVar21 = 0;
        do {
          if (uVar14 == uVar20) goto LAB_143decf62;
          iVar21 = iVar21 + 0x20;
          uVar12 = puVar13[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar20 = 0;
        iVar21 = 0;
      }
      uVar26 = (ulonglong)(-uVar12 & uVar12);
      uVar14 = uVar26 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      iVar23 = (iVar21 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
      if ((int)local_c8 <= iVar23) {
        iVar23 = (int)local_c8;
      }
    }
    if (iVar23 == (int)local_c8) {
LAB_143decf62:
      uVar14 = 0;
    }
    else {
      puVar15 = local_e8;
      if (local_e8 == (undefined1 *)0x0) {
        puVar15 = local_1a8;
      }
      iVar31 = (int)local_c8 + 0x1e;
      if (-1 < (int)local_c8 + -1) {
        iVar31 = (int)local_c8 + -1;
      }
      iVar31 = iVar31 >> 5;
      puVar13 = local_d0;
      if (local_d0 == (uint *)0x0) {
        puVar13 = local_d8;
      }
      uVar12 = 0xffffffff;
      fVar35 = 0.0;
      do {
        lVar33 = (longlong)iVar23;
        bVar6 = fVar35 <= fVar34 * local_1b0;
        fVar35 = fVar35 + *(float *)(puVar15 + lVar33 * 0x18 + 8);
        if ((bVar6) && (fVar34 * local_1b0 <= fVar35)) {
          lVar28 = *(longlong *)(puVar15 + lVar33 * 0x18);
          puVar32 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar28 + 8) != (undefined4 *)0x0) {
            puVar32 = *(undefined4 **)(lVar28 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar16 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar16);
            DAT_14c947fe0 = lVar16;
          }
          uVar14 = CONCAT71((int7)((ulonglong)(lVar33 * 3) >> 8),1);
          FUN_140045924(DAT_14c947fe0,&local_208,puVar32,1);
          uVar7 = local_218;
          *local_210 = CONCAT71(uStack_207,local_208);
          if (*(int *)(lVar28 + 0xa0) < 1) goto LAB_143decf62;
          FUN_141000264(local_218,lVar28 + 0x98);
          FUN_141000264(uVar7,lVar28 + 0xa8);
          break;
        }
        uVar12 = uVar12 & ~(uint)uVar26;
        iVar23 = (int)uVar20;
        lVar33 = (longlong)iVar23;
        uVar24 = puVar13[lVar33] & uVar12;
        if (uVar24 == 0) {
          iVar17 = iVar31;
          if (iVar31 < iVar23) {
            iVar17 = iVar23;
          }
          if (iVar31 <= iVar23) goto LAB_143decf62;
          lVar28 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar24 = puVar13[lVar33 + lVar28 + 1];
            if (uVar24 != 0) break;
            lVar28 = lVar28 + 1;
            uVar14 = 0;
            if (iVar17 - lVar33 == lVar28) goto LAB_143decf65;
          }
          uVar20 = (ulonglong)(iVar23 + (int)lVar28 + 1);
          uVar12 = 0xffffffff;
        }
        uVar26 = (ulonglong)(-uVar24 & uVar24);
        uVar14 = uVar26 * 2 + 1;
        lVar33 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        iVar23 = (iVar21 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
        uVar14 = 0;
      } while (iVar23 < (int)local_c8);
    }
LAB_143decf65:
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar20 = local_e0 >> 0x20;
    local_e0 = local_e0 & 0xffffffff00000000;
    if ((int)uVar20 != 0) {
      FUN_1404ee4d0(local_1a8,0);
    }
    uStack_c0 = 0xffffffff;
    uVar20 = local_c8 >> 0x20;
    local_c8 = local_c8 & 0xffffffff00000000;
    if (0x20 < (uint)uVar20) {
      local_c8 = 0x2000000000;
      FUN_14008f53c(local_d8,0);
    }
    if (local_d0 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ded0ad FUN_143ded0ad body=260 status=ok
// SIG undefined FUN_143ded0ad(void)

void FUN_143ded0ad(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_5c;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      if ((*(char *)(*(longlong *)(param_1 + 0xa0) + 8 + lVar4 * 0x130) == '\x02') &&
         (lVar5 = *(longlong *)(param_1 + 0xa0) + lVar4 * 0x130, 0 < *(int *)(lVar5 + 0x10))) {
        local_5c = 0;
        do {
          uVar3 = FUN_140b01269(param_2,lVar5,param_1);
          cVar1 = FUN_143de98a3(param_2,lVar5,param_3,param_8,uVar3,param_9,param_4,param_5,param_7,
                                param_1,param_6);
          if (cVar1 == '\0') break;
          local_5c = local_5c + 1;
        } while (local_5c < *(int *)(lVar5 + 0x10));
        iVar2 = *(int *)(param_1 + 0xa8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 143ded332 FUN_143ded332 body=31 status=ok
// SIG undefined FUN_143ded332(void)

undefined8 FUN_143ded332(undefined8 param_1,undefined8 param_2)

{
  FUN_1408226d0(param_2,param_1,1);
  return param_1;
}



// FUNCTION 143ded35a FUN_143ded35a body=56 status=ok
// SIG undefined FUN_143ded35a(void)

void FUN_143ded35a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar2 = param_2;
  }
  *(undefined1 *)(lVar2 + iVar1) = 7;
  return;
}



// FUNCTION 143ded392 FUN_143ded392 body=1094 status=ok
// SIG undefined FUN_143ded392(void)

longlong * FUN_143ded392(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *_Src;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar2 = *(byte *)(param_2 + 4);
  uVar3 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar3;
  plVar4 = param_1;
  _Src = param_2;
  if (0x18 < uVar3) {
    plVar4 = (longlong *)FUN_14001cc68(uVar3,0);
    *param_1 = (longlong)plVar4;
    _Src = (undefined8 *)*param_2;
  }
  pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
  if (pcVar7 == (code *)0x0) {
    memcpy(plVar4,_Src,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
  }
  else {
    (*pcVar7)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  FUN_140577710(param_3,&local_68);
  if (local_68 == (longlong *)0x0) {
    FUN_140577646(param_3,&local_78);
    if (local_78 != 0) {
      FUN_142b3f9c4(local_78,local_58,param_2);
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
      if (pcVar7 != (code *)0x0) {
        plVar4 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          plVar4 = (longlong *)*param_1;
        }
        (*pcVar7)(plVar4);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
      *(ushort *)(param_1 + 3) = local_40;
      if (local_40 < 0x19) {
        uVar5 = (ulonglong)((uint)local_38 * 0x120);
        pcVar7 = *(code **)((longlong)&DAT_14c9a85b8 + uVar5);
        if ((pcVar7 == (code *)0x0) &&
           (pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5), pcVar7 == (code *)0x0)) {
          memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
        }
        else {
          (*pcVar7)(param_1,local_58);
        }
      }
      else {
        *param_1 = (longlong)local_58[0];
        local_58[0] = (undefined8 ***)0x0;
        local_40 = 0;
      }
      *(byte *)(param_1 + 4) = local_38;
      local_38 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        pppuVar6 = local_58;
        if (0x18 < local_40) {
          pppuVar6 = (undefined8 ***)local_58[0];
        }
        (*DAT_14c9a85d0)(pppuVar6);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  else {
    (**(code **)(*local_68 + 0x40))(local_68,local_58,param_2);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar7 != (code *)0x0) {
      plVar4 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        plVar4 = (longlong *)*param_1;
      }
      (*pcVar7)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(ushort *)(param_1 + 3) = local_40;
    if (local_40 < 0x19) {
      uVar5 = (ulonglong)((uint)local_38 * 0x120);
      pcVar7 = *(code **)((longlong)&DAT_14c9a85b8 + uVar5);
      if ((pcVar7 == (code *)0x0) &&
         (pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5), pcVar7 == (code *)0x0)) {
        memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (*pcVar7)(param_1,local_58);
      }
    }
    else {
      *param_1 = (longlong)local_58[0];
      local_58[0] = (undefined8 ***)0x0;
      local_40 = 0;
    }
    *(byte *)(param_1 + 4) = local_38;
    local_38 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      pppuVar6 = local_58;
      if (0x18 < local_40) {
        pppuVar6 = (undefined8 ***)local_58[0];
      }
      (*DAT_14c9a85d0)(pppuVar6);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((char)param_1[4] == '\x13') {
    FUN_1456d2a84(local_58,param_1,param_3);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar7 != (code *)0x0) {
      plVar4 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        plVar4 = (longlong *)*param_1;
      }
      (*pcVar7)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(ushort *)(param_1 + 3) = local_40;
    if (local_40 < 0x19) {
      uVar5 = (ulonglong)((uint)local_38 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar5) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar5) == (code *)0x0) {
          memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar5))(param_1,local_58);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar5))(param_1,local_58);
      }
    }
    else {
      *param_1 = (longlong)local_58[0];
      local_58[0] = (undefined8 ***)0x0;
      local_40 = 0;
    }
    *(byte *)(param_1 + 4) = local_38;
    local_38 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      pppuVar6 = local_58;
      if (0x18 < local_40) {
        pppuVar6 = (undefined8 ***)local_58[0];
      }
      (*DAT_14c9a85d0)(pppuVar6);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ded7da FUN_143ded7da body=20 status=ok
// SIG undefined FUN_143ded7da(void)

bool FUN_143ded7da(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1488fcebc();
  return lVar1 != 0;
}



// FUNCTION 143ded838 FUN_143ded838 body=82 status=ok
// SIG undefined FUN_143ded838(void)

void FUN_143ded838(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_140d1d704(param_2 + 0x58,*param_1,*(undefined1 *)param_1[1]);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_14890132e(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143ded88a FUN_143ded88a body=77 status=ok
// SIG undefined FUN_143ded88a(void)

void FUN_143ded88a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143ded8d8 FUN_143ded8d8 body=69 status=ok
// SIG undefined FUN_143ded8d8(void)

void FUN_143ded8d8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4188f0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 143ded91e FUN_143ded91e body=29 status=ok
// SIG undefined FUN_143ded91e(void)

undefined8 FUN_143ded91e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ded93c FUN_143ded93c body=82 status=ok
// SIG undefined FUN_143ded93c(void)

undefined8 * FUN_143ded93c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4188f0;
  if (param_1[0xc] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0xc] = 0;
  }
  FUN_140fae274(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ded98e FUN_143ded98e body=64 status=ok
// SIG undefined FUN_143ded98e(void)

undefined8 * FUN_143ded98e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418de0;
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



// FUNCTION 143ded9d2 FUN_143ded9d2 body=81 status=ok
// SIG undefined FUN_143ded9d2(void)

undefined8 FUN_143ded9d2(longlong param_1)

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



// FUNCTION 143deda2a FUN_143deda2a body=89 status=ok
// SIG undefined FUN_143deda2a(void)

bool FUN_143deda2a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143deda75;
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
LAB_143deda75:
  return lVar6 == param_2;
}



// FUNCTION 143dedaa0 FUN_143dedaa0 body=118 status=ok
// SIG undefined FUN_143dedaa0(void)

void FUN_143dedaa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418de0;
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



// FUNCTION 143dedb16 FUN_143dedb16 body=118 status=ok
// SIG undefined FUN_143dedb16(void)

void FUN_143dedb16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418de0;
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



// FUNCTION 143dedb8c FUN_143dedb8c body=156 status=ok
// SIG undefined FUN_143dedb8c(void)

void FUN_143dedb8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b418de0;
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
                    /* WARNING: Could not recover jumptable at 0x000143dedc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dedc28 FUN_143dedc28 body=104 status=ok
// SIG undefined FUN_143dedc28(void)

void FUN_143dedc28(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000143dedc75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143dedc86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 143dedc90 FUN_143dedc90 body=101 status=ok
// SIG undefined FUN_143dedc90(void)

ulonglong FUN_143dedc90(longlong param_1)

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
LAB_143dedcea:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143dedcea;
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



// FUNCTION 143dedcf6 FUN_143dedcf6 body=64 status=ok
// SIG undefined FUN_143dedcf6(void)

undefined8 * FUN_143dedcf6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418e50;
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



// FUNCTION 143dedd3a FUN_143dedd3a body=81 status=ok
// SIG undefined FUN_143dedd3a(void)

undefined8 FUN_143dedd3a(longlong param_1)

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



// FUNCTION 143dedd92 FUN_143dedd92 body=89 status=ok
// SIG undefined FUN_143dedd92(void)

bool FUN_143dedd92(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143dedddd;
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
LAB_143dedddd:
  return lVar6 == param_2;
}



// FUNCTION 143dede08 FUN_143dede08 body=118 status=ok
// SIG undefined FUN_143dede08(void)

void FUN_143dede08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418e50;
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



// FUNCTION 143dede7e FUN_143dede7e body=118 status=ok
// SIG undefined FUN_143dede7e(void)

void FUN_143dede7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418e50;
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



// FUNCTION 143dedef4 FUN_143dedef4 body=156 status=ok
// SIG undefined FUN_143dedef4(void)

void FUN_143dedef4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b418e50;
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
                    /* WARNING: Could not recover jumptable at 0x000143dedf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dedf90 FUN_143dedf90 body=104 status=ok
// SIG undefined FUN_143dedf90(void)

void FUN_143dedf90(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000143dedfdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143dedfee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 143dedff8 FUN_143dedff8 body=101 status=ok
// SIG undefined FUN_143dedff8(void)

ulonglong FUN_143dedff8(longlong param_1)

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
LAB_143dee052:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143dee052;
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



// FUNCTION 143dee05e FUN_143dee05e body=68 status=ok
// SIG undefined FUN_143dee05e(void)

undefined8 * FUN_143dee05e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418ec0;
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



// FUNCTION 143dee0a6 FUN_143dee0a6 body=83 status=ok
// SIG undefined FUN_143dee0a6(void)

undefined8 FUN_143dee0a6(longlong param_1)

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



// FUNCTION 143dee116 FUN_143dee116 body=68 status=ok
// SIG undefined FUN_143dee116(void)

undefined8 * FUN_143dee116(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418f70;
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



// FUNCTION 143dee15a FUN_143dee15a body=91 status=ok
// SIG undefined FUN_143dee15a(void)

bool FUN_143dee15a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143dee18a;
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
LAB_143dee18a:
  return lVar6 == param_2;
}



// FUNCTION 143dee1d2 FUN_143dee1d2 body=68 status=ok
// SIG undefined FUN_143dee1d2(void)

undefined8 * FUN_143dee1d2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418fe0;
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



// FUNCTION 143dee216 FUN_143dee216 body=91 status=ok
// SIG undefined FUN_143dee216(void)

bool FUN_143dee216(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143dee246;
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
LAB_143dee246:
  return lVar6 == param_2;
}



// FUNCTION 143dee28e FUN_143dee28e body=68 status=ok
// SIG undefined FUN_143dee28e(void)

undefined8 * FUN_143dee28e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4193a0;
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



// FUNCTION 143dee2ee FUN_143dee2ee body=29 status=ok
// SIG undefined FUN_143dee2ee(void)

undefined8 FUN_143dee2ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dee320 FUN_143dee320 body=93 status=ok
// SIG undefined FUN_143dee320(void)

void FUN_143dee320(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b419530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dee37e FUN_143dee37e body=93 status=ok
// SIG undefined FUN_143dee37e(void)

void FUN_143dee37e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b419530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dee3dc FUN_143dee3dc body=126 status=ok
// SIG undefined FUN_143dee3dc(void)

void FUN_143dee3dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b419530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dee44b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dee4b0 FUN_143dee4b0 body=99 status=ok
// SIG undefined FUN_143dee4b0(void)

undefined8 FUN_143dee4b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar2 != 0) &&
           ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c) &&
            ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
          FUN_1465568c0();
        }
      }
    }
  }
  return 1;
}



// FUNCTION 143dee542 FUN_143dee542 body=55 status=ok
// SIG undefined FUN_143dee542(void)

undefined8 FUN_143dee542(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    cVar2 = FUN_14890e636(lVar1);
    if (cVar2 != '\0') {
      uVar3 = FUN_146002902(lVar1,*param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143dee598 FUN_143dee598 body=12 status=ok
// SIG undefined FUN_143dee598(void)

void FUN_143dee598(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dee5a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dee5a4 FUN_143dee5a4 body=29 status=ok
// SIG undefined FUN_143dee5a4(void)

undefined8 FUN_143dee5a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dee5ca FUN_143dee5ca body=944 status=ok
// SIG undefined FUN_143dee5ca(void)

undefined8 FUN_143dee5ca(longlong *param_1,byte *param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  uint local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined4 local_ac;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  undefined8 local_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar8 = 0;
  if (9 < *param_2 - 1) goto switchD_143dee619_caseD_3;
  lVar2 = *param_1;
  switch((uint)*param_2) {
  case 1:
    cVar4 = FUN_1401144ce(param_2);
    uVar8 = 1;
    if (((cVar4 != '\0') && (cVar4 = FUN_140114448(param_2), cVar4 == '\0')) &&
       (plVar5 = (longlong *)FUN_14189c62a(lVar2), plVar5 != (longlong *)0x0)) {
      local_ac = 0xc61c4000;
      local_a8[0] = (code *)0x0;
      local_98 = (longlong *)0x0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_5e = 0;
      uStack_50 = 0;
      puVar7 = &local_ac;
      if ((char)param_1[1] == '\0') {
        puVar7 = (undefined4 *)0x0;
      }
      local_58 = SUB82(puVar7,0);
      uStack_56 = (undefined6)((ulonglong)puVar7 >> 0x10);
      (**(code **)(*plVar5 + 0xb0))(plVar5,param_2,param_3,local_a8);
      if (local_a8[0] != (code *)0x0) {
        plVar5 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar5 = local_88;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    break;
  case 2:
    uVar8 = 1;
    if (*(char *)(lVar2 + 0x1c4) != '\0') break;
    goto LAB_143dee90d;
  case 6:
    if ((char)param_1[1] == '\0') {
      uVar8 = 1;
      if ((((*(int *)(lVar2 + 0x54) != 0) && (uVar6 = *(uint *)(lVar2 + 0x50), -1 < (int)uVar6)) &&
          ((int)uVar6 < DAT_14c9647dc)) &&
         (((((plVar5 = (longlong *)
                       ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(lVar2 + 0x54))) &&
            (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
             ((*plVar5 != 0 && (lVar2 = *(longlong *)(*plVar5 + 0x30), lVar2 != 0)))))) &&
           (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0)) && (0 < *(int *)(lVar2 + 0x238))))) {
        lVar9 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x230) + 4 + lVar9 * 8);
          if ((((iVar1 != 0) &&
               (uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x230) + lVar9 * 8), -1 < (int)uVar6)) &&
              ((int)uVar6 < DAT_14c9647dc)) &&
             (((plVar5 = (longlong *)
                         ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
              (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
               (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))))) {
            if (DAT_14cb61cd0 == 0) {
              local_a8[0] = FUN_141030f22;
              local_c0 = FUN_14081d0ea;
              local_c8 = &LAB_1463b31ae;
              local_d0 = local_a8;
              local_d8 = &LAB_1486dca4f;
              local_e0 = &LAB_1464f50a6;
              local_e8 = &DAT_149e063b2;
              local_f0 = 0;
              local_f8 = 0x10000004;
              local_100 = 8;
              local_108 = CONCAT44(local_108._4_4_,0xd70);
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            }
            if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8)
                 == DAT_14cb61cd0 + 0x30)) &&
               (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x1098))(plVar5),
               plVar5 != (longlong *)0x0)) {
              cVar4 = *param_3;
              if (cVar4 == '\x03') {
                bVar10 = *(longlong *)(param_3 + 4) == 0;
LAB_143dee831:
                uVar6 = (uint)!bVar10;
              }
              else if (cVar4 == '\x02') {
                uVar6 = *(uint *)(param_3 + 0xc);
              }
              else {
                if (cVar4 == '\x01') {
                  bVar10 = *(int *)(param_3 + 0xc) == 0;
                  goto LAB_143dee831;
                }
                uVar6 = 0;
              }
              (**(code **)(*plVar5 + 0x58))(plVar5,param_2,(longlong)(int)uVar6);
            }
          }
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)(lVar2 + 0x238));
      }
      break;
    }
LAB_143dee90d:
    uVar8 = 0;
    break;
  case 10:
    uVar8 = 1;
    if (*(char *)(lVar2 + 0x1c4) == '\0') {
      uVar3 = *param_4;
      plVar5 = (longlong *)FUN_140d7e454(lVar2);
      if (plVar5 != (longlong *)0x0) {
        local_100 = local_100 & 0xffffff00;
        local_108 = uVar3;
        (**(code **)(*plVar5 + 0x48))(plVar5,param_2,param_3,0);
      }
    }
  }
switchD_143dee619_caseD_3:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 143dee9a6 FUN_143dee9a6 body=29 status=ok
// SIG undefined FUN_143dee9a6(void)

undefined8 FUN_143dee9a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dee9d0 FUN_143dee9d0 body=3485 status=ok
// SIG undefined FUN_143dee9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dee9d0(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb85c70 = (ulonglong)uVar3;
  _DAT_14cb85c78 = 0;
  uRam000000014cb85c80 = 0;
  _DAT_14cb85c88 = 0;
  DAT_14cb85c90 = 0;
  uRam000000014cb85c98 = 0;
  FUN_1446ddda2(&DAT_14cb85c78,"missions.tasks",0);
  atexit((_func_5014 *)&LAB_143de41e8);
  _DAT_14cb85ca0 = 0;
  uRam000000014cb85ca8 = 0;
  _DAT_14cb85cb0 = 0;
  DAT_14cb85cb8 = 0;
  uRam000000014cb85cc0 = 0;
  FUN_1446ddda2(&DAT_14cb85ca0,"engine.missions.tasks",0);
  atexit((_func_5014 *)&LAB_143de41f9);
  local_a8 = "missions";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85cc8 = (ulonglong)uVar3;
  local_a8 = "tasks";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85cd0 = (ulonglong)uVar3;
  _DAT_14cb85ce0 = &LAB_143de433f;
  _DAT_14cb85ce8 = 0x4622d000;
  DAT_14cb85cec = 1;
  DAT_14cb85cd8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb85cd8;
  atexit((_func_5014 *)&LAB_143de4344);
  local_a8 = "timer_done";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86238 = (ulonglong)uVar3;
  _DAT_14cb85cf8 = 0x47efffffe0000000;
  _DAT_14cb85d00 = 0x47efffffe0000000;
  _DAT_14cb85d08 = 0x47efffffe0000000;
  _DAT_14cb85d10 = 0x47efffffe0000000;
  _DAT_14cb85d18 = 0x47efffffe0000000;
  _DAT_14cb85d20 = 0x47efffffe0000000;
  _DAT_14cb85d28 = 0x47efffffe0000000;
  _DAT_14cb85d30 = 0x47efffffe0000000;
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "Died";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86220 = (ulonglong)uVar3;
  local_a8 = "AllDied";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86228 = (ulonglong)uVar3;
  ram0x00014cb85d3c = 0;
  FUN_14052b5e0(&DAT_14cb85d38,"ActorDef",0);
  _DAT_14cb85d48 = "ActorDef";
  DAT_14cb85d50 = 0;
  _DAT_14cb85d58 = 0;
  atexit(FUN_143de538f);
  local_a8 = "completed";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86280 = (ulonglong)uVar3;
  local_a8 = "PickedUp";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86230 = (ulonglong)uVar3;
  _DAT_14cb85d60 = 0xffffffff;
  _DAT_14cb85d64 = 0;
  local_a8 = "touched";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86278 = (ulonglong)uVar3;
  local_a8 = "untouched";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86218 = (ulonglong)uVar3;
  local_a8 = "all_players_touching";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86200 = (ulonglong)uVar3;
  local_a8 = "all_players_not_touching";
  local_a0 = 0x18;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86208 = (ulonglong)uVar3;
  local_a8 = "any_player_not_touching";
  local_a0 = 0x17;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86210 = (ulonglong)uVar3;
  local_a8 = "nexus";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb85d70 = (ulonglong)uVar3;
  ram0x00014cb85d7c = 0;
  FUN_14052b5e0(&DAT_14cb85d78,&DAT_14b419a98,0);
  _DAT_14cb85d88 = &DAT_14b419a98;
  ram0x00014cb85d94 = 0;
  FUN_14052b5e0(&DAT_14cb85d90,"reward",0);
  _DAT_14cb85da0 = "reward";
  ram0x00014cb85dac = 0;
  FUN_14052b5e0(&DAT_14cb85da8,"contents",0);
  _DAT_14cb85db8 = "contents";
  ram0x00014cb85dd4 = 0;
  FUN_14052b5e0(&DAT_14cb85dd0,&DAT_149e377fe,0);
  _DAT_14cb85de0 = &DAT_149e377fe;
  ram0x00014cb85dec = 0;
  FUN_14052b5e0(&DAT_14cb85de8,&DAT_14a1c1ce0,0);
  _DAT_14cb85df8 = &DAT_14a1c1ce0;
  local_a8 = "FactChange";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85e00 = (ulonglong)uVar3;
  local_a8 = "Moment";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85e08 = (ulonglong)uVar3;
  local_a8 = "EndMoment";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85e10 = (ulonglong)uVar3;
  local_a8 = "Delay";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85e18 = (ulonglong)uVar3;
  local_a8 = "DebugPrint";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb85e20 = (ulonglong)uVar3;
  ram0x00014cb85e2c = 0;
  FUN_14052b5e0(&DAT_14cb85e28,"condition",0);
  _DAT_14cb85e38 = "condition";
  ram0x00014cb85e44 = 0;
  FUN_14052b5e0(&DAT_14cb85e40,"onloadfilter",0);
  _DAT_14cb85e50 = "onloadfilter";
  ram0x00014cb85e5c = 0;
  FUN_14052b5e0(&DAT_14cb85e58,"precompletedfilter",0);
  _DAT_14cb85e68 = "precompletedfilter";
  ram0x00014cb85e74 = 0;
  FUN_14052b5e0(&DAT_14cb85e70,"alias",0);
  _DAT_14cb85e80 = "alias";
  ram0x00014cb85e8c = 0;
  FUN_14052b5e0(&DAT_14cb85e88,"factchange",0);
  _DAT_14cb85e98 = "factchange";
  ram0x00014cb85ed4 = 0;
  FUN_14052b5e0(&DAT_14cb85ed0,"alias",0);
  _DAT_14cb85ee0 = "alias";
  ram0x00014cb85eec = 0;
  FUN_14052b5e0(&DAT_14cb85ee8,"value",0);
  _DAT_14cb85ef8 = "value";
  ram0x00014cb85f04 = 0;
  FUN_14052b5e0(&DAT_14cb85f00,"gamedatahandle",0);
  _DAT_14cb85f10 = "gamedatahandle";
  ram0x00014cb85f1c = 0;
  FUN_14052b5e0(&DAT_14cb85f18,"target",0);
  _DAT_14cb85f28 = "target";
  _DAT_14cb861e8 = 0;
  DAT_14cb861f0 = 0;
  _DAT_14cb85f38 = &LAB_143ded224;
  DAT_14cb85f40 = 0x16;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9dd0 = 0xc;
    DAT_14c9a9e68 = &LAB_143ded304;
    _DAT_14c9a9e90 = &DAT_143ded314;
    _DAT_14c9a9e70 = &LAB_143ded316;
    _DAT_14c9a9e78 = &LAB_148900f70;
    _DAT_14c9a9e80 = &LAB_148900f7e;
    _DAT_14c9a9e88 = &LAB_148900f8c;
    _DAT_14c9a9df0 = FUN_1461ff798;
    _DAT_14c9a9de8 = &LAB_145820a04;
    _DAT_14c9a9dd8 = 0x3f75c28f3d8f5c29;
    puRam000000014c9a9de0 = &DAT_3f8000003f800000;
    DAT_14c9a9dd4 = 0x20;
    _DAT_14c9a9e98 = FUN_143ded332;
    _DAT_14c9a9e48 = &LAB_143ded352;
    _DAT_14c9a9e50 = FUN_143ded35a;
    _DAT_14c9a9e40 = FUN_143ded392;
    _DAT_14c9a9e58 = FUN_143ded7da;
    _DAT_14c9a9ea0 = &LAB_143ded7ee;
    _DAT_14c9a9ee0 = &LAB_143ded818;
  }
  else {
    _DAT_14cb85f30 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb85f30;
  }
  DAT_14cb86020 = (undefined8 *)0x0;
  _DAT_14cb86028 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x2000,0);
  lVar6 = 0x7f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 8;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  *puVar5 = DAT_14cb86020;
  _DAT_14cb86028 = _DAT_14cb86028 + 0x80;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143dee530;
  local_a8 = &DAT_14011fc1e;
  DAT_14cb86020 = puVar4;
  FUN_1460f4b06(&local_a8);
  atexit((_func_5014 *)&LAB_143de69d4);
  _DAT_14cb860b8 = &LAB_143de69d9;
  _DAT_14cb860c0 = 0x43480000;
  DAT_14cb860c4 = 1;
  DAT_14cb860b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb860b0;
  atexit((_func_5014 *)&LAB_143de69de);
  local_a8 = "pickedup";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb860d0 = (ulonglong)uVar3;
  local_a8 = "used";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb860d8 = (ulonglong)uVar3;
  local_a8 = "holdused";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb860e0 = (ulonglong)uVar3;
  local_a8 = "secondaryused";
  local_a0 = 0xd;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb860e8 = (ulonglong)uVar3;
  local_a8 = "secondaryholdused";
  local_a0 = 0x11;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb860f0 = (ulonglong)uVar3;
  local_a8 = "touched";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb860f8 = (ulonglong)uVar3;
  local_a8 = "untouched";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86100 = (ulonglong)uVar3;
  local_a8 = "allplayerstouching";
  local_a0 = 0x12;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86108 = (ulonglong)uVar3;
  local_a8 = "allplayersnottouching";
  local_a0 = 0x15;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86110 = (ulonglong)uVar3;
  local_a8 = "alldied";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb861f8 = (ulonglong)uVar3;
  local_a8 = "arrived";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb86288 = (ulonglong)uVar3;
  local_a8 = "leaving";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86270 = (ulonglong)uVar3;
  local_a8 = "died";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86118 = (ulonglong)uVar3;
  local_a8 = "downed";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86120 = (ulonglong)uVar3;
  local_a8 = "completed";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb86128 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cb86130);
  if (cVar2 == '\0') {
    _DAT_14cb86130 = 0;
    uRam000000014cb86138 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb86140 = 0;
  uRam000000014cb86148 = 0;
  _DAT_14cb86150 = 0;
  DAT_14cb86158 = 0;
  uRam000000014cb86160 = 0;
  FUN_1446ddda2(&DAT_14cb86140,"allactivities",0);
  atexit((_func_5014 *)&LAB_143de8663);
  _DAT_14cb86168 = 0;
  uRam000000014cb86170 = 0;
  _DAT_14cb86178 = 0;
  DAT_14cb86180 = 0;
  uRam000000014cb86188 = 0;
  FUN_1446ddda2(&DAT_14cb86168,"serial",0);
  atexit((_func_5014 *)&LAB_143de8674);
  _DAT_14cb86190 = 0;
  uRam000000014cb86198 = 0;
  _DAT_14cb861a0 = 0;
  DAT_14cb861a8 = 0;
  uRam000000014cb861b0 = 0;
  FUN_1446ddda2(&DAT_14cb86190,"missionstate",0);
  atexit((_func_5014 *)&LAB_143de8685);
  ram0x00014cb861bc = 0;
  FUN_14052b5e0(&DAT_14cb861b8,"SubAlias",0);
  _DAT_14cb861c8 = "SubAlias";
  ram0x00014cb861d4 = 0;
  FUN_14052b5e0(&DAT_14cb861d0,"WaypointName",0);
  _DAT_14cb861e0 = "WaypointName";
  DAT_14cb86244 = 0;
  FUN_14052b5e0(&DAT_14cb86240,&DAT_14a544a1f,0);
  _DAT_14cb86250 = &DAT_14a544a1f;
  DAT_14cb8625c = 0;
  FUN_14052b5e0(&DAT_14cb86258,"Stamp",0);
  _DAT_14cb86268 = "Stamp";
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143def7a2 FUN_143def7a2 body=92 status=ok
// SIG undefined FUN_143def7a2(void)

ulonglong FUN_143def7a2(longlong param_1,int *param_2,uint param_3)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x3a0))) {
    uVar1 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x398) + 8 + (ulonglong)param_3 * 0x10);
    if (0 < (longlong)uVar1) {
      piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x398) + (ulonglong)param_3 * 0x10) + 8
                      );
      uVar3 = 0;
      do {
        if ((piVar2[-2] == *param_2) && (*piVar2 == param_2[2])) {
          return uVar3 & 0xffffffff;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (uVar1 != uVar3);
    }
  }
  return 0xffffffff;
}



// FUNCTION 143def7fe FUN_143def7fe body=519 status=ok
// SIG undefined FUN_143def7fe(void)

char FUN_143def7fe(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_1 + 0x328);
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 800);
    if (*(uint **)(param_1 + 800) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x310);
    }
    uVar9 = *puVar5;
    if (uVar9 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_143def9c1;
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 == iVar2) {
LAB_143def9c1:
    cVar4 = '\x01';
  }
  else {
    uVar9 = 0xffffffff;
    do {
      cVar4 = (**(code **)(**(longlong **)
                             (*(longlong *)(param_1 + 0x300) + 0x10 + (longlong)iVar6 * 0x28) + 0x30
                          ))();
      if (cVar4 == '\0') {
        return '\0';
      }
      uVar9 = uVar9 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 800);
      if (*(uint **)(param_1 + 800) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x310);
      }
      iVar3 = *(int *)(param_1 + 0x328);
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar11 = puVar5[lVar12] & uVar9;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = puVar5[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar9 = 0xffffffff;
              goto LAB_143def95e;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar9 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_143def95e:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
  return cVar4;
}



// FUNCTION 143defa06 FUN_143defa06 body=17 status=ok
// SIG undefined FUN_143defa06(void)

ulonglong FUN_143defa06(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  return uVar1 ^ 1;
}



// FUNCTION 143defa18 FUN_143defa18 body=298 status=ok
// SIG undefined FUN_143defa18(void)

void FUN_143defa18(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar5;
  uVar3 = *param_3;
  plVar7 = (longlong *)param_3[1];
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x48);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    plVar4 = *(longlong **)(param_1 + 0x48);
    if (plVar7 == plVar4) {
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) {
        return;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_143defaea;
    }
    *(longlong **)(param_1 + 0x48) = plVar7;
    plVar7 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar4 = plVar7 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_143defaea:
                    /* WARNING: Could not recover jumptable at 0x000143defaf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}



// FUNCTION 143defb48 FUN_143defb48 body=302 status=ok
// SIG undefined FUN_143defb48(void)

ulonglong FUN_143defb48(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_38);
    plVar3 = local_38;
    if (local_38 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      local_48 = *param_1;
      plVar4 = (longlong *)param_1[1];
      if (plVar4 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        FUN_143defa18(local_38,param_2);
      }
      else {
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
        local_40 = plVar4;
        FUN_143defa18(plVar3,param_2);
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
      (**(code **)(*local_38 + 0x10))();
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),(char)local_38[7]);
      (**(code **)(*local_38 + 0x18))();
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143defc78 FUN_143defc78 body=83 status=ok
// SIG undefined FUN_143defc78(void)

void FUN_143defc78(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 143defccc FUN_143defccc body=228 status=ok
// SIG undefined FUN_143defccc(void)

void FUN_143defccc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x20) != '\0') goto LAB_143defd2d;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_14060ed7a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_143defd2d;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_143defd2d;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_30 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 0x18) = local_30;
    lVar2 = local_30;
    if (local_30 == 0) goto LAB_143defd2d;
  }
  local_30 = lVar2;
  FUN_1401bcf08(param_2,local_34,&local_30,0);
LAB_143defd2d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143defdb2 FUN_143defdb2 body=228 status=ok
// SIG undefined FUN_143defdb2(void)

void FUN_143defdb2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x20) != '\0') goto LAB_143defe13;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_140b79a36();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_143defe13;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_143defe13;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_30 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 0x18) = local_30;
    lVar2 = local_30;
    if (local_30 == 0) goto LAB_143defe13;
  }
  local_30 = lVar2;
  FUN_1401bcb18(param_3,local_34,&local_30,0);
LAB_143defe13:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143defe97 FUN_143defe97 body=49 status=ok
// SIG undefined FUN_143defe97(void)

void FUN_143defe97(void)

{
  FUN_146557b3d(DAT_14cb863c0,DAT_14cb863c8);
  if (DAT_14cb863c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143defec8 FUN_143defec8 body=91 status=ok
// SIG undefined FUN_143defec8(void)

void FUN_143defec8(void)

{
  if (DAT_14cb86b80 != 0) {
    if (DAT_14cb86b78 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb86b78)(DAT_14cb86b78,0);
    FUN_1446efa72(&DAT_14cb86b78,0,0,0x10);
    DAT_14cb86b80 = 0;
  }
  if (DAT_14cb86b78 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143deff24 FUN_143deff24 body=130 status=ok
// SIG undefined FUN_143deff24(void)

longlong * FUN_143deff24(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((DAT_14cb86b80 == 0) || (DAT_14cb86b78 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*DAT_14cb86b78 + 0x30))(), cVar1 == '\0')) {
    plVar2 = (longlong *)*param_1;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)param_1[1];
  }
  else {
    plVar2 = DAT_14cb86b78;
    if (DAT_14cb86b80 == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_1,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 143defffc FUN_143defffc body=73 status=ok
// SIG undefined FUN_143defffc(void)

undefined8 FUN_143defffc(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x24)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 143df005d FUN_143df005d body=47 status=ok
// SIG undefined FUN_143df005d(void)

void FUN_143df005d(void)

{
  DAT_14cb866f8 = 0;
  if (DAT_14cb866f0 != 0) {
    FUN_1400020a8();
  }
  FUN_145c09e38(&DAT_14cb866b0);
  return;
}



// FUNCTION 143df008c FUN_143df008c body=125 status=ok
// SIG undefined FUN_143df008c(void)

void FUN_143df008c(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_3 + 0x10);
  if (*(byte *)(param_3 + 0x30) == 0x20) {
    *puVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_3 + 0x30) * 0x120));
    if (pcVar2 != (code *)0x0) {
      puVar4 = puVar1;
      if (0x18 < *(ushort *)(param_3 + 0x28)) {
        puVar4 = *(undefined8 **)(param_3 + 0x10);
      }
      (*pcVar2)(puVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 0x28)) {
      FUN_1400020a8(*puVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined2 *)(param_3 + 0x28) = 8;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    *(undefined1 *)(param_3 + 0x30) = 0x20;
  }
  return;
}



// FUNCTION 143df0132 FUN_143df0132 body=81 status=ok
// SIG undefined FUN_143df0132(void)

bool FUN_143df0132(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xa0);
  uVar3 = FUN_140ec3d82(*(undefined8 *)(param_1 + 8));
  cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,uVar3);
  if ((cVar2 != '\0') && (lVar4 = FUN_140f42f34(param_1), lVar4 != 0)) {
    cVar2 = FUN_1405f61f4(lVar4);
    return (byte)(cVar2 - 3U) < 2;
  }
  return false;
}



// FUNCTION 143df0184 FUN_143df0184 body=229 status=ok
// SIG undefined FUN_143df0184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143df0184(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144928b90(param_2,10);
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_143df58dc(param_1,local_34);
  lVar2 = param_2 + 0x10;
  FUN_144928d62(lVar2,1,local_34);
  lVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (lVar1 == 0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(lVar1 + 0x98);
    local_40 = *(undefined8 *)(lVar1 + 0x90);
  }
  FUN_144928d62(lVar2,2,&local_40);
  local_48 = DAT_14cb8886c._4_4_;
  local_50 = _DAT_14cb88868;
  FUN_144928d62(lVar2,4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df026a FUN_143df026a body=200 status=ok
// SIG undefined FUN_143df026a(void)

undefined8 FUN_143df026a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_64 = 0;
  local_5c = 0;
  plVar1 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  FUN_143df0184(param_1,local_58);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    if (lVar2 != 0) {
      FUN_14039fc7b(local_58,local_68,lVar2,0);
    }
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1403a0728(local_68,local_58);
  FUN_1401533ba(param_2,local_58,1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df0334 FUN_143df0334 body=193 status=ok
// SIG undefined FUN_143df0334(void)

void FUN_143df0334(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x70))();
  if (lVar2 == 0) {
    iVar1 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x90);
    iVar1 = *(int *)(lVar2 + 0x98);
  }
  if ((*param_2 != iVar3) || (param_2[2] != iVar1)) {
    lVar2 = param_1[0x3e];
    iVar3 = (int)param_1[0x3f];
    lVar4 = (longlong)iVar3;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(lVar2 + lVar5) == *param_2) && (*(int *)(lVar2 + 8 + lVar5) == param_2[2])) {
          return;
        }
        lVar5 = lVar5 + 0xc;
      } while (lVar4 * 0xc != lVar5);
    }
    *(uint *)(param_1 + 0x3f) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1fc) < iVar3 + 1U) {
      FUN_1446dd912(param_1 + 0x3e,iVar3);
      lVar2 = param_1[0x3e];
    }
    *(int *)(lVar2 + 8 + lVar4 * 0xc) = param_2[2];
    *(undefined8 *)(lVar2 + lVar4 * 0xc) = *(undefined8 *)param_2;
  }
  return;
}



// FUNCTION 143df03f6 FUN_143df03f6 body=810 status=ok
// SIG undefined FUN_143df03f6(void)

void FUN_143df03f6(longlong param_1,int *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [46];
  undefined1 local_ba;
  undefined1 local_b9;
  int local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  int local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = FUN_140f42f34();
  if (lVar8 != 0) {
    bVar4 = FUN_1405f61f4(lVar8);
    if (3 < bVar4) {
      local_58 = param_2[2];
      local_60 = *(undefined8 *)param_2;
      lVar8 = FUN_140f54c6c(param_1);
      if (lVar8 != 0) {
        iVar6 = -1;
        if (*param_2 != 0) {
          iVar6 = FUN_14890e7e0(*(longlong *)(param_1 + 0xa0) + 0x18,param_2);
        }
        lVar8 = FUN_140f42f34(param_1);
        if (lVar8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_140f430f8(lVar8);
        }
        if (iVar5 < iVar6) {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_ba = *(undefined1 *)(param_1 + 0x1e8);
          *(undefined1 *)(param_1 + 0x1e8) = 1;
          local_b0 = param_1 + 0x1b8;
          iVar7 = 0;
          local_b9 = param_3;
          local_b4 = iVar6;
          local_a8 = param_1;
          while( true ) {
            lVar8 = local_b0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            if (iVar7 < 0) {
              FUN_1489175d4(&local_98);
            }
            local_b8 = iVar5;
            FUN_1457ea17c(lVar8,iVar5,&local_98);
            lVar11 = local_98;
            lVar13 = (longlong)(int)uStack_90;
            if (lVar13 != 0) {
              lVar10 = 0;
              do {
                uVar3 = uStack_70;
                local_a0 = *(undefined8 *)(lVar11 + lVar10);
                lVar12 = (longlong)(int)uStack_70;
                uVar9 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
                if (uStack_70._4_4_ < uVar9) {
                  FUN_140f54fb6(&local_78,uVar3 & 0xffffffff);
                }
                *(undefined8 *)(local_78 + lVar12 * 8) = local_a0;
                local_50 = &local_a0;
                FUN_1457c9ea0(&local_88,&local_50);
                lVar10 = lVar10 + 8;
              } while (lVar13 * 8 != lVar10);
            }
            bVar14 = (longlong)uStack_90 < 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            if (bVar14) {
              FUN_1489175d4(&local_98);
            }
            local_b8 = local_b8 + 1;
            FUN_14890e950(lVar8,local_b8,&local_98);
            lVar8 = local_98;
            lVar11 = (longlong)(int)uStack_90;
            if (lVar11 != 0) {
              lVar13 = 0;
              do {
                uVar3 = uStack_80;
                uVar1 = *(undefined8 *)(lVar8 + lVar13);
                lVar10 = (longlong)(int)uStack_80;
                uVar9 = (int)uStack_80 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
                if (uStack_80._4_4_ < uVar9) {
                  FUN_140f54fb6(&local_88,uVar3 & 0xffffffff);
                }
                *(undefined8 *)(local_88 + lVar10 * 8) = uVar1;
                lVar13 = lVar13 + 8;
              } while (lVar11 * 8 != lVar13);
            }
            lVar8 = local_78;
            iVar6 = local_b4;
            uVar2 = local_b9;
            if (local_b8 == local_b4) break;
            iVar7 = uStack_90._4_4_;
            iVar5 = local_b8;
          }
          lVar11 = (longlong)(int)uStack_70;
          if (lVar11 != 0) {
            lVar13 = 0;
            do {
              FUN_143df0722(*(undefined8 *)(lVar8 + lVar13),uVar2);
              lVar13 = lVar13 + 8;
            } while (lVar11 * 8 != lVar13);
          }
          lVar8 = local_a8;
          *(undefined1 *)(local_a8 + 0x1e8) = local_ba;
          FUN_14890e164(local_a8,iVar6);
          *(undefined4 *)(lVar8 + 0x1c8) = 0;
          if (*(int *)(lVar8 + 0x1cc) < 0) {
            FUN_1489175d4(lVar8 + 0x1c0);
          }
          FUN_140d8369e(local_b0,lVar8 + 0x1c0);
          lVar8 = local_88;
          lVar11 = (longlong)(int)uStack_80;
          if (lVar11 != 0) {
            lVar13 = 0;
            do {
              FUN_1457ea040(*(undefined8 *)(lVar8 + lVar13),1);
              lVar13 = lVar13 + 8;
            } while (lVar11 * 8 != lVar13);
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df0722 FUN_143df0722 body=566 status=ok
// SIG undefined FUN_143df0722(void)

void FUN_143df0722(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  
  uVar1 = *(undefined1 *)(param_1 + 0x5b);
  *(undefined1 *)(param_1 + 0x5b) = 1;
  lVar4 = FUN_140dcc81c();
  if (((lVar4 != 0) && (bVar2 = FUN_141042fba(lVar4), bVar2 < 0x12)) &&
     ((0x22200U >> (bVar2 & 0x1f) & 1) != 0)) goto switchD_143df0807_default;
  FUN_143df53bc(*(undefined8 *)(param_1 + 0x30));
  lVar4 = FUN_140dcc81c(param_1);
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((lVar4 == 0) || (bVar2 = FUN_141042fba(lVar4), bVar2 < 6)) {
    lVar4 = FUN_140dcc81c(param_1);
    if ((lVar4 == 0) || (bVar2 = FUN_141042fba(lVar4), bVar2 < 2)) {
      FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 200);
LAB_143df07dc:
      FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0xf8);
    }
    else if (bVar2 == 2) goto LAB_143df07dc;
    uVar6 = (uint)CONCAT71(uVar7,0xd);
    switch(param_2) {
    case 0:
      if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x3aa) != '\0') goto switchD_143df0807_caseD_3;
      break;
    case 1:
      break;
    case 2:
      uVar6 = (uint)CONCAT71(uVar7,0x11);
      break;
    case 3:
switchD_143df0807_caseD_3:
      uVar6 = (uint)CONCAT71(uVar7,9);
      break;
    default:
      goto switchD_143df0807_default;
    }
  }
  else {
    lVar4 = FUN_140dcc81c(param_1);
    if (lVar4 == 0) goto switchD_143df0807_default;
    cVar3 = FUN_141042fba(lVar4);
    if (0xb < (byte)(cVar3 - 6U)) goto switchD_143df0807_default;
    uVar6 = (uint)CONCAT71(uVar7,(&DAT_14b41bbf8)[(byte)(cVar3 - 6U)]);
  }
  lVar4 = FUN_140dcc81c(param_1);
  if (lVar4 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_141042fba(lVar4);
  }
  if ((char)uVar6 == '\x11') {
    if (bVar2 < 0xf) {
      FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x128);
LAB_143df08de:
      FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x1b8);
LAB_143df08ef:
      FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x1e8);
    }
    else {
      if (bVar2 == 0xf) goto LAB_143df08de;
      if (bVar2 < 0x11) goto LAB_143df08ef;
    }
    FUN_148910500(param_1);
  }
  else {
    if ((uVar6 & 0xff) == 0xd) {
      if (bVar2 < 0xb) {
        FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x188);
LAB_143df08b1:
        FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x1b8);
LAB_143df08c2:
        FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x1e8);
      }
      else {
        if (bVar2 == 0xb) goto LAB_143df08b1;
        if (bVar2 < 0xd) goto LAB_143df08c2;
      }
      uVar5 = 1;
    }
    else {
      if ((uVar6 & 0xff) != 9) goto LAB_143df084d;
      if (bVar2 < 7) {
        FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x158);
LAB_143df0911:
        FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x1b8);
LAB_143df0922:
        FUN_140f691f2(param_1,*(longlong *)(param_1 + 0x40) + 0x1e8);
      }
      else {
        if (bVar2 == 7) goto LAB_143df0911;
        if (bVar2 < 9) goto LAB_143df0922;
      }
      uVar5 = 3;
    }
    FUN_1457af436(param_1,uVar5);
  }
LAB_143df084d:
  FUN_140dcc746(param_1,uVar6);
switchD_143df0807_default:
  *(undefined1 *)(param_1 + 0x5b) = uVar1;
  return;
}



// FUNCTION 143df0958 FUN_143df0958 body=97 status=ok
// SIG undefined FUN_143df0958(void)

void FUN_143df0958(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      lVar3 = *(longlong *)(lVar2 + 0x18);
      if ((*(int *)(lVar3 + 0x18) == *param_3) && (*(int *)(lVar3 + 0x20) == param_3[2])) {
        *param_2 = lVar2;
        lVar1 = *(longlong *)(lVar1 + 8 + lVar4);
        param_2[1] = lVar1;
        if (lVar1 == 0) {
          return;
        }
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
        return;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 200) * 0x10 != lVar4);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 143df09ba FUN_143df09ba body=8 status=ok
// SIG undefined FUN_143df09ba(void)

undefined8 FUN_143df09ba(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// FUNCTION 143df09c2 FUN_143df09c2 body=424 status=ok
// SIG undefined FUN_143df09c2(void)

void FUN_143df09c2(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  ulonglong local_98;
  undefined1 *local_90;
  undefined1 local_88;
  longlong local_80;
  ulonglong uStack_78;
  ulonglong local_70 [7];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_2 + 0x9a8) + 0x10))(param_2 + 0x9a8);
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1);
      if (lVar2 == 0) {
        local_98 = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar2 + 0x90);
        local_98 = *(ulonglong *)(lVar2 + 0x94);
      }
      if ((local_98 == DAT_14c948034) && (iVar4 != DAT_14c948030)) {
        FUN_14011791e(local_70,iVar4,local_98 >> 0x20);
        local_98 = local_70[0];
      }
      local_90 = &DAT_3f800000ffffffff;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      if (param_4 != 0) {
        FUN_1459ff440(&local_80,param_4);
      }
      local_b8 = (undefined4)param_1[0x13];
      local_c0 = param_1[0x12];
      uVar3 = FUN_140672052(param_1[1]);
      FUN_140c5218a(param_3,local_70,uVar3,&local_c0);
      local_b0 = FUN_140c520a2(local_70);
      local_a8 = FUN_1418a5c14(local_70);
      local_a0 = 1;
      FUN_14164c0ba(lVar1,&local_b0,&local_98);
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_38])(local_70);
      FUN_140de863f(local_80,uStack_78 & 0xffffffff);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df0b6c FUN_143df0b6c body=182 status=ok
// SIG undefined FUN_143df0b6c(void)

void FUN_143df0b6c(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  int local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = *(longlong *)(param_1 + 0xa0);
  iVar2 = FUN_140e5d7c8();
  iVar1 = *(int *)(lVar4 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x60);
    lVar3 = 0;
    do {
      if (*(int *)(lVar4 + lVar3) == iVar2) {
        lVar4 = lVar4 + lVar3;
        goto LAB_143df0bc4;
      }
      lVar3 = lVar3 + 0xc0;
    } while ((longlong)iVar1 * 0xc0 != lVar3);
    if (0 < iVar1) {
LAB_143df0bc4:
      if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  FUN_143df026a(param_1,local_24);
  if (local_24[0] != 0) {
    FUN_143df03f6(param_1,local_24,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df0c38 FUN_143df0c38 body=220 status=ok
// SIG undefined FUN_143df0c38(void)

void FUN_143df0c38(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_140f42f34();
  if (lVar3 == 0) goto switchD_143df0c6e_caseD_3;
  uVar1 = FUN_1405f61f4(lVar3);
  switch(uVar1) {
  case 1:
    cVar2 = FUN_143df0df6(param_1);
    if (cVar2 == '\0') break;
    goto LAB_143df0c7c;
  case 2:
    cVar2 = (**(code **)(*param_1 + 200))(param_1);
    if (cVar2 != '\0') {
      FUN_143df0d3e(param_1,1,0);
    }
    break;
  case 5:
    if ((0 < (int)param_1[0x13]) || (cVar2 = FUN_14189d00a(param_1), cVar2 != '\0'))
    goto switchD_143df0c6e_caseD_6;
    FUN_14890e696(param_1);
    lVar3 = FUN_140f42f34(param_1);
    if (lVar3 != 0) {
      (**(code **)(**(longlong **)(lVar3 + 8) + 8))();
    }
    FUN_14890e91e(param_1);
LAB_143df0c7c:
    FUN_140f13ae4(param_1,2,1);
    break;
  case 6:
  case 7:
switchD_143df0c6e_caseD_6:
    if (*(char *)((longlong)param_1 + 0x1ef) == '\x01') {
      (**(code **)(*(longlong *)param_1[1] + 0xd8))((longlong *)param_1[1],param_1);
    }
  }
switchD_143df0c6e_caseD_3:
  FUN_141079cc8(param_1);
  return;
}



// FUNCTION 143df0d14 FUN_143df0d14 body=42 status=ok
// SIG undefined FUN_143df0d14(void)

void FUN_143df0d14(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_143df0df6();
  if (cVar1 != '\0') {
    FUN_140f13ae4(param_1,2,1);
    return;
  }
  return;
}



// FUNCTION 143df0d3e FUN_143df0d3e body=183 status=ok
// SIG undefined FUN_143df0d3e(void)

void FUN_143df0d3e(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if (cVar1 != '\0') {
    if (1 < param_2) {
      FUN_14890de92(param_1,param_2);
    }
    FUN_140f4316e(param_1);
    if (param_3 == '\0') {
      FUN_140f69170(param_1);
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
    FUN_140f13ae4(param_1,uVar2,param_3 == '\0');
    cVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
    if (cVar1 != '\0') {
      local_28 = (undefined4)param_1[0x13];
      local_30 = param_1[0x12];
      (**(code **)(*(longlong *)param_1[1] + 0x70))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df0df6 FUN_143df0df6 body=632 status=ok
// SIG undefined FUN_143df0df6(void)

char FUN_143df0df6(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_140f42f34();
  if ((lVar3 != 0) && (cVar1 = FUN_1405f61f4(lVar3), cVar1 == '\x01')) {
    if ((*(int *)(param_1 + 0x98) < 1) &&
       ((plVar4 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8)), plVar4 != (longlong *)0x0
        && (lVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4), lVar3 != 0)))) {
      lVar3 = *(longlong *)(lVar3 + 200);
      if (lVar3 == 0) {
        piVar9 = (int *)&DAT_14c948618;
        puVar7 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
        puVar5 = &DAT_14c948620;
      }
      else {
        piVar9 = (int *)(lVar3 + 8);
        puVar7 = (undefined4 *)(lVar3 + 0xc);
        puVar5 = (undefined4 *)(lVar3 + 0x10);
      }
      if (*piVar9 != 0) {
        local_80 = *puVar7;
        local_7c = *puVar5;
        local_84 = *piVar9;
        FUN_1448075d0(&local_78);
        lVar3 = FUN_14060eaf6(&local_78);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (lVar3 != 0) {
          local_58 = 0;
          local_50 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_4c = 0xffffffff00000080;
          local_44 = 0;
          local_38 = 0;
          local_30 = 0;
          FUN_1401bd540(lVar3);
          local_88 = *(uint *)(param_1 + 0x98);
          local_90 = *(ulonglong *)(param_1 + 0x90);
          uVar10 = local_90;
          if (local_88 != 0) {
            uVar6 = local_88 >> 0xd ^ (int)local_90 - local_88;
            uVar8 = uVar6 << 8 ^ (-0x61c88647 - local_88) - uVar6;
            uVar11 = uVar8 >> 0xd ^ (local_88 - uVar6) - uVar8;
            uVar6 = uVar11 >> 0xc ^ (uVar6 - uVar8) - uVar11;
            uVar8 = uVar6 << 0x10 ^ (uVar8 - uVar11) - uVar6;
            uVar12 = uVar8 >> 5 ^ (uVar11 - uVar6) - uVar8;
            uVar11 = uVar12 >> 3 ^ (uVar6 - uVar8) - uVar12;
            uVar6 = uVar11 << 10 ^ (uVar8 - uVar12) - uVar11;
            uVar10 = (ulonglong)(uVar6 >> 0xf ^ uVar12 - (uVar11 + uVar6));
          }
          iVar2 = FUN_1407a7398(&local_78,uVar10);
          local_30 = 0;
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          FUN_1401bccca(&local_78);
          if (iVar2 == -1) goto LAB_143df1029;
        }
      }
    }
    cVar1 = FUN_140f71cda(param_1 + 0x180);
    if (cVar1 != '\0') {
      if ((longlong)*(int *)(param_1 + 0x1b0) == 0) {
        cVar1 = '\x01';
      }
      else {
        lVar3 = 0;
        do {
          cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1a8) + lVar3) + 0x38);
          if (cVar1 != '\x01') break;
          bVar13 = (longlong)*(int *)(param_1 + 0x1b0) * 0x10 + -0x10 != lVar3;
          lVar3 = lVar3 + 0x10;
        } while (bVar13);
      }
      goto LAB_143df102b;
    }
  }
LAB_143df1029:
  cVar1 = '\0';
LAB_143df102b:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar1;
}



// FUNCTION 143df1070 FUN_143df1070 body=209 status=ok
// SIG undefined FUN_143df1070(void)

void FUN_143df1070(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x78);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70);
    lVar6 = 0;
    do {
      piVar4 = *(int **)(*(longlong *)(param_2 + 0x40) + 8);
      if (piVar4 == (int *)0x0) {
        piVar4 = &DAT_14c9485f0;
      }
      piVar5 = (int *)&DAT_14c948618;
      if (*piVar4 != 0) {
        iVar1 = piVar4[1];
        piVar5 = (int *)&DAT_14c948618;
        if ((iVar1 != 0) && (piVar5 = (int *)&DAT_14c948618, *piVar4 != DAT_14c948000)) {
          if ((iVar1 < 2) && (piVar4[9] < 1)) {
            piVar4 = piVar4 + 2;
          }
          else {
            piVar4 = *(int **)(piVar4 + 6);
          }
          piVar5 = (int *)&DAT_14c948618;
          if (0 < iVar1) {
            piVar5 = piVar4;
          }
        }
      }
      if ((*(int *)(lVar2 + 8 + lVar6) == *piVar5) && (*(int *)(lVar2 + 0x10 + lVar6) == piVar5[2]))
      {
        FUN_1457e9f88(param_1,*(undefined8 *)(lVar2 + lVar6));
      }
      lVar6 = lVar6 + 0x60;
    } while (lVar3 * 0x60 != lVar6);
  }
  return;
}



// FUNCTION 143df114c FUN_143df114c body=267 status=ok
// SIG undefined FUN_143df114c(void)

undefined8 FUN_143df114c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if (cVar1 != '\0') {
    return 1;
  }
  plVar3 = (longlong *)param_1[0x14];
  uVar2 = FUN_140ec3d82(param_1[1]);
  cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar2);
  if (((cVar1 != '\0') &&
      (plVar3 = (longlong *)FUN_140672052(param_1[1]), plVar3 != (longlong *)0x0)) &&
     (lVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3), lVar4 != 0)) {
    if (*(longlong *)(lVar4 + 200) == 0) {
      piVar5 = (int *)&DAT_14c948618;
    }
    else {
      piVar5 = (int *)(*(longlong *)(lVar4 + 200) + 8);
    }
    if ((*piVar5 != 0) && (*(char *)(param_1[0x14] + 0x79a) != '\x01')) {
      return 0;
    }
  }
  lVar4 = param_1[0x14];
  if ((longlong)*(int *)(lVar4 + 0x5f8) != 0) {
    lVar6 = *(longlong *)(lVar4 + 0x5f0);
    lVar4 = (longlong)*(int *)(lVar4 + 0x5f8) * 0x18;
    do {
      uVar2 = FUN_140672052(param_1[1]);
      cVar1 = FUN_143defb48(lVar6,uVar2);
      if (cVar1 == '\0') {
        return 0;
      }
      lVar6 = lVar6 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    lVar4 = param_1[0x14];
  }
  uVar2 = FUN_140672052(param_1[1]);
  uVar2 = FUN_140fa5e9e(lVar4 + 0x5e0,uVar2);
  return uVar2;
}



// FUNCTION 143df127a FUN_143df127a body=47 status=ok
// SIG undefined FUN_143df127a(void)

void FUN_143df127a(void)

{
  DAT_14cb86a28 = 0;
  if (DAT_14cb86a20 != 0) {
    FUN_1400020a8();
  }
  FUN_145c09e38(&DAT_14cb869e0);
  return;
}



// FUNCTION 143df12ba FUN_143df12ba body=115 status=ok
// SIG undefined FUN_143df12ba(void)

void FUN_143df12ba(undefined1 *param_1,undefined8 param_2,char *param_3,longlong param_4,
                  float param_5,char param_6)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_4 + 0xc);
  *(int *)(param_4 + 0xc) = iVar1 + 1;
  fVar3 = 0.0;
  if (*param_3 == '\x01') {
    if ((param_6 == '\0') && (iVar1 < 1)) {
      param_5 = param_5 + *(float *)(param_3 + 4);
      fVar3 = *(float *)(param_3 + 8) + 0.0;
    }
    else {
      *(undefined1 *)(param_4 + 8) = 1;
    }
  }
  else if (*param_3 == '\0') {
    param_5 = param_5 + *(float *)(param_3 + 4);
  }
  bVar2 = *(char *)(param_4 + 8) != '\0';
  if (bVar2) {
    param_5 = 1.1754944e-38;
  }
  fVar4 = 0.0;
  if (!bVar2) {
    fVar4 = fVar3;
  }
  *param_1 = 0;
  *(float *)(param_1 + 4) = param_5;
  *(float *)(param_1 + 8) = fVar4;
  *(int *)(param_4 + 0xc) = iVar1;
  return;
}



// FUNCTION 143df1370 FUN_143df1370 body=74 status=ok
// SIG undefined FUN_143df1370(void)

ulonglong FUN_143df1370(char *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  cVar1 = *param_1;
  lVar3 = FUN_140dcc81c(param_2);
  if (cVar1 == '\x01') {
    if (lVar3 != 0) {
      bVar2 = FUN_141042fba(lVar3);
      uVar5 = (ulonglong)(0x22200 >> (bVar2 & 0x1f));
      goto LAB_143df13b2;
    }
  }
  else if (lVar3 != 0) {
    uVar4 = FUN_141042fba(lVar3);
    uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),5 < (byte)uVar4);
    goto LAB_143df13b2;
  }
  uVar5 = 0;
LAB_143df13b2:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 143df13ba FUN_143df13ba body=421 status=ok
// SIG undefined FUN_143df13ba(void)

void FUN_143df13ba(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_a8 [40];
  undefined8 **local_80;
  undefined4 local_78;
  ushort local_68;
  byte local_60;
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = param_1[8];
  lVar4 = *(longlong *)(lVar6 + 0x338);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) == '\x01')) {
    lVar4 = FUN_140dcc81c();
    if ((lVar4 == 0) || (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x68) == 0)) {
      uVar5 = FUN_140672052(param_1[1]);
      local_58[0] = '\0';
      local_30[0] = 0;
      FUN_1456bb102(local_58,uVar5);
      lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
      if (lVar4 == 0) {
        local_80 = (undefined8 ***)0x0;
        local_78 = 0;
      }
      else {
        local_78 = *(undefined4 *)(lVar4 + 0x98);
        local_80 = *(undefined8 ***)(lVar4 + 0x90);
      }
      uVar5 = FUN_1448174c4(local_30);
      FUN_148918afa(uVar5,&local_80);
      FUN_140168de2(*(longlong *)(lVar6 + 0x338) + 0x18,&local_80,local_58);
      uVar3 = FUN_1405d5f74(&local_80);
      lVar6 = FUN_140dcc81c(param_1);
      if (lVar6 != 0) {
        FUN_1488434aa(lVar6,uVar3);
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppuVar7 = &local_80;
        if (0x18 < local_68) {
          pppuVar7 = (undefined8 ***)local_80;
        }
        (*pcVar2)(pppuVar7);
      }
      if (0x18 < local_68) {
        FUN_1400020a8(local_80);
      }
      FUN_1448173f8(local_30);
      if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df1560 FUN_143df1560 body=860 status=ok
// SIG undefined FUN_143df1560(void)

/* WARNING: Removing unreachable block (ram,0x000143df16b9) */
/* WARNING: Removing unreachable block (ram,0x000143df191d) */
/* WARNING: Removing unreachable block (ram,0x000143df16df) */
/* WARNING: Removing unreachable block (ram,0x000143df16f5) */
/* WARNING: Removing unreachable block (ram,0x000143df1716) */
/* WARNING: Removing unreachable block (ram,0x000143df1722) */
/* WARNING: Removing unreachable block (ram,0x000143df17e5) */
/* WARNING: Removing unreachable block (ram,0x000143df1734) */
/* WARNING: Removing unreachable block (ram,0x000143df174a) */
/* WARNING: Removing unreachable block (ram,0x000143df1772) */
/* WARNING: Removing unreachable block (ram,0x000143df1777) */
/* WARNING: Removing unreachable block (ram,0x000143df177d) */
/* WARNING: Removing unreachable block (ram,0x000143df178c) */
/* WARNING: Removing unreachable block (ram,0x000143df179b) */
/* WARNING: Removing unreachable block (ram,0x000143df17bb) */
/* WARNING: Removing unreachable block (ram,0x000143df17c4) */
/* WARNING: Removing unreachable block (ram,0x000143df17c9) */
/* WARNING: Removing unreachable block (ram,0x000143df17cf) */
/* WARNING: Removing unreachable block (ram,0x000143df17d5) */
/* WARNING: Removing unreachable block (ram,0x000143df17e3) */
/* WARNING: Removing unreachable block (ram,0x000143df1853) */
/* WARNING: Removing unreachable block (ram,0x000143df185d) */
/* WARNING: Removing unreachable block (ram,0x000143df1864) */
/* WARNING: Removing unreachable block (ram,0x000143df1874) */
/* WARNING: Removing unreachable block (ram,0x000143df187e) */

void FUN_143df1560(longlong *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_b8 [48];
  ulonglong local_88;
  longlong local_80;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0 < (int)param_1[0x2a]) &&
     (plVar4 = (longlong *)FUN_141561c74(param_1[1]), plVar4 != (longlong *)0x0)) {
    lVar6 = param_1[8];
    lVar5 = FUN_140f42f34(param_1[5]);
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_140f430f8(lVar5);
    }
    lVar5 = (longlong)*(int *)(lVar6 + 0x3a0);
    if (lVar5 == 0) {
      bVar1 = true;
    }
    else {
      lVar7 = 0;
      do {
        bVar9 = *(int *)(*(longlong *)(lVar6 + 0x398) + lVar7) == iVar3;
        bVar1 = !bVar9;
        if (bVar9) break;
        bVar9 = lVar5 * 4 + -4 != lVar7;
        lVar7 = lVar7 + 4;
      } while (bVar9);
    }
    lVar6 = FUN_140dcc81c(param_1);
    if (lVar6 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_141042fba(lVar6);
    }
    if ((longlong)(int)param_1[0x2a] != 0) {
      lVar6 = param_1[0x29];
      lVar5 = (longlong)(int)param_1[0x2a] * 0x58 + lVar6;
      uVar8 = bVar2 - 2;
      local_88 = (ulonglong)uVar8;
      local_80 = lVar5;
      do {
        if ((bVar1) && (uVar8 < 0xf)) {
                    /* WARNING: Could not recover jumptable at 0x000143df165f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_14b41bd44 + *(int *)(&DAT_14b41bd44 + (ulonglong)uVar8 * 4)))();
          return;
        }
        if (*(char *)(lVar6 + 0x54) != '\0') {
          *(undefined1 *)(lVar6 + 0x54) = 0;
          FUN_140fe5fa3(*(undefined8 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x38));
          *(undefined4 *)(lVar6 + 0x38) = 0;
          if (*(int *)(lVar6 + 0x3c) != 0) {
            FUN_146557ec8(lVar6 + 0x30);
          }
          lVar7 = (**(code **)(*param_1 + 0x70))(param_1);
          if (lVar7 == 0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            local_50 = *(undefined4 *)(lVar7 + 0x98);
            local_58 = *(undefined8 *)(lVar7 + 0x90);
          }
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_58,lVar6);
        }
        lVar6 = lVar6 + 0x58;
      } while (lVar6 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df1972 FUN_143df1972 body=128 status=ok
// SIG undefined FUN_143df1972(void)

void FUN_143df1972(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x70))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2,param_3);
  }
  if ((char)param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  local_28 = param_2;
  FUN_140bdf3fa(param_1 + 0xc);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df1a06 FUN_143df1a06 body=990 status=ok
// SIG undefined FUN_143df1a06(void)

void FUN_143df1a06(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_1[0xb] == param_2) goto LAB_143df1db8;
  *(char *)(param_1 + 0xb) = param_2;
  local_88 = param_1 + 0x29;
  uVar4 = *(uint *)(param_1 + 0x2a);
  if (param_2 == '\0') {
    if (0 < (int)uVar4) {
      lVar9 = (ulonglong)uVar4 * 0x58;
      puVar10 = (undefined8 *)(param_1[0x29] + 0x40);
      do {
        FUN_14063a6f5(*puVar10,*(undefined4 *)(puVar10 + 1));
        *(undefined4 *)(puVar10 + 1) = 0;
        if (*(int *)((longlong)puVar10 + 0xc) != 0) {
          FUN_146557306(puVar10,0);
        }
        if ((*(char *)((longlong)puVar10 + 0x14) == '\x01') &&
           (plVar8 = (longlong *)FUN_141561c74(param_1[1]), plVar8 != (longlong *)0x0)) {
          lVar11 = (**(code **)(*param_1 + 0x70))(param_1);
          if (lVar11 == 0) {
            local_70 = 0;
            local_68 = 0;
          }
          else {
            local_68 = *(undefined4 *)(lVar11 + 0x98);
            local_70 = *(undefined8 *)(lVar11 + 0x90);
          }
          (**(code **)(*plVar8 + 0x28))(plVar8,&local_70,puVar10 + -8);
        }
        puVar10 = puVar10 + 0xb;
        lVar9 = lVar9 + -0x58;
      } while (lVar9 != 0);
      FUN_140fe5f06(param_1[0x29],(int)param_1[0x2a]);
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (*(int *)((longlong)param_1 + 0x154) != 0) {
        FUN_14189d99e(local_88,0);
      }
    }
    goto LAB_143df1db8;
  }
  if ((ulonglong)uVar4 != 0) goto LAB_143df1db8;
  iVar5 = *(int *)(param_1[8] + 0x2f8);
  lVar9 = (longlong)iVar5;
  if (lVar9 < 1) goto LAB_143df1db8;
  if (*(int *)((longlong)param_1 + 0x154) < iVar5) {
    FUN_14189d99e(local_88);
    lVar9 = (longlong)*(int *)(param_1[8] + 0x2f8);
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(param_1[8] + 0x2f0);
      goto LAB_143df1b95;
    }
  }
  else {
    puVar10 = *(undefined8 **)(param_1[8] + 0x2f0);
LAB_143df1b95:
    puVar1 = puVar10 + lVar9 * 9;
    do {
      iVar5 = (int)param_1[0x2a];
      *(uint *)(param_1 + 0x2a) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x154) < iVar5 + 1U) {
        FUN_148918a6a(local_88,iVar5);
      }
      puVar12 = (undefined8 *)((longlong)iVar5 * 0x58 + *local_88);
      uVar6 = puVar10[2];
      plVar8 = (longlong *)puVar10[3];
      if (plVar8 == (longlong *)0x0) {
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        puVar12[2] = uVar6;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        *(undefined8 *)((longlong)puVar12 + 0x45) = 0;
        *(undefined8 *)((longlong)puVar12 + 0x4d) = 0;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        puVar12[2] = uVar6;
        puVar12[3] = plVar8;
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(undefined8 *)((longlong)puVar12 + 0x4d) = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
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
      puVar13 = puVar12 + 4;
      local_80 = *puVar10;
      local_78 = *(undefined4 *)(puVar10 + 1);
      FUN_1410840ae(param_1,&local_70,&local_80);
      *(undefined4 *)(puVar12 + 1) = local_68;
      *puVar12 = local_70;
      uVar6 = puVar10[2];
      lVar9 = puVar10[3];
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      plVar8 = (longlong *)puVar12[3];
      puVar12[2] = uVar6;
      puVar12[3] = lVar9;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)();
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
      if (puVar13 != puVar10 + 4) {
        FUN_1403d9ddf(puVar12[4],*(undefined4 *)(puVar12 + 5));
        iVar5 = *(int *)(puVar10 + 5);
        uVar6 = puVar10[4];
        *(int *)(puVar12 + 5) = iVar5;
        if (iVar5 == 0 && *(int *)((longlong)puVar12 + 0x2c) == 0) {
          *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
        }
        else {
          FUN_140823b50(puVar13,iVar5);
          FUN_140823a3c(*puVar13,uVar6,iVar5);
        }
      }
      *(undefined4 *)(puVar12 + 10) = *(undefined4 *)(puVar10 + 8);
      if ((longlong)*(int *)(puVar10 + 7) != 0) {
        lVar9 = puVar10[6];
        lVar11 = (longlong)*(int *)(puVar10 + 7) << 4;
        do {
          if (*(int *)(lVar9 + 8) != 0) {
            iVar5 = *(int *)(puVar12 + 9);
            *(uint *)(puVar12 + 9) = iVar5 + 1U;
            if (*(uint *)((longlong)puVar12 + 0x4c) < iVar5 + 1U) {
              FUN_146557282(puVar12 + 8,iVar5);
            }
            lVar7 = puVar12[8];
            puVar13 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x10);
            *puVar13 = 0;
            puVar13[1] = 0;
            FUN_145b24700(param_1,lVar9,lVar7 + (longlong)iVar5 * 0x10);
          }
          lVar9 = lVar9 + 0x10;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
      }
      puVar10 = puVar10 + 9;
    } while (puVar10 != puVar1);
  }
  FUN_143df1560(param_1);
LAB_143df1db8:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df1de6 FUN_143df1de6 body=284 status=ok
// SIG undefined FUN_143df1de6(void)

void FUN_143df1de6(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x338) != 0) {
    FUN_1489109aa(param_1,&local_50);
    pcVar2 = (char *)(param_1 + 0xe8);
    cVar3 = FUN_1403218c0(pcVar2,&local_50);
    if (cVar3 == '\0') {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x2b8);
      if (lVar4 != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x2b0);
        lVar4 = lVar4 * 0x30;
        do {
          cVar3 = FUN_148910b9c(lVar6 + 0x28,pcVar2,&local_50);
          if (cVar3 != '\0') {
            FUN_140d853aa(param_1,local_60,lVar6,param_2);
            if (local_58 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_58 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_58 + 0x10))();
              }
            }
          }
          lVar6 = lVar6 + 0x30;
          lVar4 = lVar4 + -0x30;
        } while (lVar4 != 0);
      }
      *(undefined4 *)pcVar2 = local_50;
      *(undefined4 *)(param_1 + 0xec) = uStack_4c;
      *(undefined4 *)(param_1 + 0xf0) = uStack_48;
      *(undefined4 *)(param_1 + 0xf4) = uStack_44;
      uVar5 = 0;
      if (*pcVar2 == '\x02') {
        uVar5 = *(undefined4 *)(param_1 + 0xf4);
      }
      lVar4 = FUN_140dcc81c(param_1);
      if (lVar4 != 0) {
        FUN_1488433d2(lVar4,uVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df1f20 FUN_143df1f20 body=268 status=ok
// SIG undefined FUN_143df1f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143df1f20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144928b90(param_2,10);
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_143df58dc(param_1,local_34);
  lVar2 = param_2 + 0x10;
  FUN_144928d62(lVar2,1,local_34);
  lVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (lVar1 == 0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(lVar1 + 0x98);
    local_40 = *(undefined8 *)(lVar1 + 0x90);
  }
  FUN_144928d62(lVar2,2,&local_40);
  FUN_140943d10(param_1,local_4c);
  FUN_144928d62(lVar2,3,local_4c);
  local_50 = DAT_14cb8889c._4_4_;
  local_58 = _DAT_14cb88898;
  FUN_144928d62(lVar2,4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df202e FUN_143df202e body=79 status=ok
// SIG undefined FUN_143df202e(void)

void FUN_143df202e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143df2062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 143df207e FUN_143df207e body=79 status=ok
// SIG undefined FUN_143df207e(void)

void FUN_143df207e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x38);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143df20b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 143df20d2 FUN_143df20d2 body=217 status=ok
// SIG undefined FUN_143df20d2(void)

void FUN_143df20d2(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_143df202e();
  puVar1 = (undefined1 *)(param_1 + 0x30);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,puVar1,1);
  }
  else {
    *puVar1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  switch(*puVar1) {
  case 0:
  case 1:
    FUN_14011750a(param_1 + 0x34,param_2);
    return;
  case 2:
  case 3:
    puVar4 = (undefined4 *)(param_1 + 0x40);
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0) {
        FUN_14572512c(param_2,puVar4);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000143df2182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
      return;
    }
    *puVar4 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return;
}



// FUNCTION 143df21ac FUN_143df21ac body=242 status=ok
// SIG undefined FUN_143df21ac(void)

void FUN_143df21ac(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_1459a9868();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      switch(*(undefined1 *)(param_1 + 0x30)) {
      case 0:
        local_38 = *(undefined4 *)(param_1 + 0x3c);
        local_40 = *(undefined8 *)(param_1 + 0x34);
        FUN_143df22ce(param_2);
        break;
      case 1:
        local_48 = *(undefined4 *)(param_1 + 0x3c);
        local_50 = *(undefined8 *)(param_1 + 0x34);
        FUN_143df2506(param_2);
        break;
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      case 3:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df22ce FUN_143df22ce body=567 status=ok
// SIG undefined FUN_143df22ce(void)

void FUN_143df22ce(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    piVar3 = *(int **)(param_1 + 0x90);
    lVar7 = (longlong)*(int *)(param_1 + 0x98) * 0x14;
    do {
      if ((*piVar3 == (int)*param_2) && (piVar3[2] == (int)param_2[1])) {
        if (piVar3 != (int *)0x0) {
          piVar3[4] = piVar3[4] + 1;
        }
        break;
      }
      piVar3 = piVar3 + 5;
      lVar7 = lVar7 + -0x14;
    } while (lVar7 != 0);
  }
  local_38 = (longlong *)CONCAT44(local_38._4_4_,(int)param_2[1]);
  local_40 = (longlong *)*param_2;
  FUN_140d59fc2(param_1 + 0x60);
  if (((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x34))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
      ((*plVar8 != 0 && (iVar2 = FUN_14490d72a(), iVar2 == 3)))))) goto LAB_143df24e0;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41b9c0;
  plVar8 = plVar4 + 2;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b366800;
  *(undefined1 *)(plVar4 + 8) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  local_40 = plVar8;
  local_38 = plVar4;
  FUN_143df4168(&local_40,plVar8);
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(plVar4 + 8) = 0;
  *(longlong *)((longlong)plVar4 + 0x44) = *param_2;
  *(int *)((longlong)plVar4 + 0x4c) = (int)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_143df2502:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143df2502;
      uVar5 = *puVar6;
    }
  }
  local_50 = plVar8;
  local_48 = plVar4;
  FUN_143d3589a(uVar5,&local_50);
  plVar8 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_143df24e0:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df2506 FUN_143df2506 body=564 status=ok
// SIG undefined FUN_143df2506(void)

void FUN_143df2506(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    piVar3 = *(int **)(param_1 + 0xa0);
    lVar7 = (longlong)*(int *)(param_1 + 0xa8) * 0x14;
    do {
      if ((*piVar3 == (int)*param_2) && (piVar3[2] == (int)param_2[1])) {
        if (piVar3 != (int *)0x0) {
          *(undefined1 *)(piVar3 + 4) = 1;
        }
        break;
      }
      piVar3 = piVar3 + 5;
      lVar7 = lVar7 + -0x14;
    } while (lVar7 != 0);
  }
  local_30 = (longlong *)CONCAT44(local_30._4_4_,(int)param_2[1]);
  local_38 = (longlong *)*param_2;
  FUN_140d59fc2(param_1 + 0x78);
  if (((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x34))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
      ((*plVar8 != 0 && (iVar2 = FUN_14490d72a(), iVar2 == 3)))))) goto LAB_143df2716;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41b9c0;
  plVar8 = plVar4 + 2;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b366800;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *(undefined1 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  local_38 = plVar8;
  local_30 = plVar4;
  FUN_143df4168(&local_38,plVar8);
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(plVar4 + 8) = 1;
  *(longlong *)((longlong)plVar4 + 0x44) = *param_2;
  *(int *)((longlong)plVar4 + 0x4c) = (int)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_143df2737:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143df2737;
      uVar5 = *puVar6;
    }
  }
  local_48 = plVar8;
  local_40 = plVar4;
  FUN_143d3589a(uVar5,&local_48);
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_143df2716:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df273c FUN_143df273c body=506 status=ok
// SIG undefined FUN_143df273c(void)

void FUN_143df273c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0.0 < *(float *)(param_1 + 0x54) || *(float *)(param_1 + 0x54) == 0.0) goto LAB_143df290c;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  FUN_1447f69b6(param_1 + 0x18);
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x34))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
      iVar3 = FUN_14490d72a();
      if (iVar3 == 3) goto LAB_143df290c;
    }
  }
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41b9c0;
  plVar7 = plVar4 + 2;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b366800;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *(undefined1 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  local_40 = plVar7;
  local_38 = plVar4;
  FUN_143df4168(&local_40,plVar7);
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(plVar4 + 8) = 2;
  *(undefined4 *)(plVar4 + 10) = param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_143df2930:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143df2930;
      uVar5 = *puVar6;
    }
  }
  local_50 = plVar7;
  local_48 = plVar4;
  FUN_143d3589a(uVar5,&local_50);
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143df290c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df2938 FUN_143df2938 body=529 status=ok
// SIG undefined FUN_143df2938(void)

void FUN_143df2938(longlong param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(float *)(param_1 + 0x54) < 0.0) goto LAB_143df2b1f;
  *(float *)(param_1 + 0x58) = (param_2 - *(float *)(param_1 + 0x54)) + *(float *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = 0xbf800000;
  FUN_1447f69b6(param_1 + 0x18);
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x34))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
      iVar3 = FUN_14490d72a();
      if (iVar3 == 3) goto LAB_143df2b1f;
    }
  }
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41b9c0;
  plVar7 = plVar4 + 2;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b366800;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *(undefined1 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  local_40 = plVar7;
  local_38 = plVar4;
  FUN_143df4168(&local_40,plVar7);
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(plVar4 + 8) = 3;
  *(float *)(plVar4 + 10) = param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_143df2b43:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143df2b43;
      uVar5 = *puVar6;
    }
  }
  local_50 = plVar7;
  local_48 = plVar4;
  FUN_143d3589a(uVar5,&local_50);
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143df2b1f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


