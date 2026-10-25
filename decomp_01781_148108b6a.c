// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148108b6a FUN_148108b6a body=93 status=ok
// SIG undefined FUN_148108b6a(void)

void FUN_148108b6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dc70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148108bc8 FUN_148108bc8 body=93 status=ok
// SIG undefined FUN_148108bc8(void)

void FUN_148108bc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dc70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148108c26 FUN_148108c26 body=126 status=ok
// SIG undefined FUN_148108c26(void)

void FUN_148108c26(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9dc70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148108c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148108cac FUN_148108cac body=19 status=ok
// SIG undefined FUN_148108cac(void)

undefined1 FUN_148108cac(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ec17a(param_2);
  return 1;
}



// FUNCTION 148108f24 FUN_148108f24 body=29 status=ok
// SIG undefined FUN_148108f24(void)

undefined8 FUN_148108f24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148108f56 FUN_148108f56 body=93 status=ok
// SIG undefined FUN_148108f56(void)

void FUN_148108f56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148108fb4 FUN_148108fb4 body=93 status=ok
// SIG undefined FUN_148108fb4(void)

void FUN_148108fb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109012 FUN_148109012 body=126 status=ok
// SIG undefined FUN_148109012(void)

void FUN_148109012(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9dce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148109081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148109098 FUN_148109098 body=19 status=ok
// SIG undefined FUN_148109098(void)

undefined1 FUN_148109098(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ed482(param_2);
  return 1;
}



// FUNCTION 1481090ac FUN_1481090ac body=29 status=ok
// SIG undefined FUN_1481090ac(void)

undefined8 FUN_1481090ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481090de FUN_1481090de body=93 status=ok
// SIG undefined FUN_1481090de(void)

void FUN_1481090de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dd50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810913c FUN_14810913c body=93 status=ok
// SIG undefined FUN_14810913c(void)

void FUN_14810913c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dd50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810919a FUN_14810919a body=126 status=ok
// SIG undefined FUN_14810919a(void)

void FUN_14810919a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9dd50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148109209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148109220 FUN_148109220 body=19 status=ok
// SIG undefined FUN_148109220(void)

undefined1 FUN_148109220(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ed9f8(param_2);
  return 1;
}



// FUNCTION 148109234 FUN_148109234 body=29 status=ok
// SIG undefined FUN_148109234(void)

undefined8 FUN_148109234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148109266 FUN_148109266 body=93 status=ok
// SIG undefined FUN_148109266(void)

void FUN_148109266(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ddc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481092c4 FUN_1481092c4 body=93 status=ok
// SIG undefined FUN_1481092c4(void)

void FUN_1481092c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9ddc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109322 FUN_148109322 body=126 status=ok
// SIG undefined FUN_148109322(void)

void FUN_148109322(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9ddc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148109391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481093a8 FUN_1481093a8 body=19 status=ok
// SIG undefined FUN_1481093a8(void)

undefined1 FUN_1481093a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d757e(param_2);
  return 1;
}



// FUNCTION 148109620 FUN_148109620 body=29 status=ok
// SIG undefined FUN_148109620(void)

undefined8 FUN_148109620(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148109652 FUN_148109652 body=93 status=ok
// SIG undefined FUN_148109652(void)

void FUN_148109652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9df80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481096b0 FUN_1481096b0 body=93 status=ok
// SIG undefined FUN_1481096b0(void)

void FUN_1481096b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9df80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810970e FUN_14810970e body=126 status=ok
// SIG undefined FUN_14810970e(void)

void FUN_14810970e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9df80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810977d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148109794 FUN_148109794 body=19 status=ok
// SIG undefined FUN_148109794(void)

undefined1 FUN_148109794(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ee526(param_2);
  return 1;
}



// FUNCTION 1481097a8 FUN_1481097a8 body=29 status=ok
// SIG undefined FUN_1481097a8(void)

undefined8 FUN_1481097a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481097da FUN_1481097da body=93 status=ok
// SIG undefined FUN_1481097da(void)

void FUN_1481097da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109838 FUN_148109838 body=93 status=ok
// SIG undefined FUN_148109838(void)

void FUN_148109838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9dff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109896 FUN_148109896 body=126 status=ok
// SIG undefined FUN_148109896(void)

void FUN_148109896(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9dff0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148109905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810991c FUN_14810991c body=19 status=ok
// SIG undefined FUN_14810991c(void)

undefined1 FUN_14810991c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439eea84(param_2);
  return 1;
}



// FUNCTION 148109930 FUN_148109930 body=29 status=ok
// SIG undefined FUN_148109930(void)

undefined8 FUN_148109930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148109962 FUN_148109962 body=93 status=ok
// SIG undefined FUN_148109962(void)

void FUN_148109962(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481099c0 FUN_1481099c0 body=93 status=ok
// SIG undefined FUN_1481099c0(void)

void FUN_1481099c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109a1e FUN_148109a1e body=126 status=ok
// SIG undefined FUN_148109a1e(void)

void FUN_148109a1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e060;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148109a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148109aa4 FUN_148109aa4 body=19 status=ok
// SIG undefined FUN_148109aa4(void)

undefined1 FUN_148109aa4(undefined8 param_1,undefined8 param_2)

{
  FUN_1439eefe2(param_2);
  return 1;
}



// FUNCTION 148109d1c FUN_148109d1c body=29 status=ok
// SIG undefined FUN_148109d1c(void)

undefined8 FUN_148109d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148109d4e FUN_148109d4e body=93 status=ok
// SIG undefined FUN_148109d4e(void)

void FUN_148109d4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e0d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109dac FUN_148109dac body=93 status=ok
// SIG undefined FUN_148109dac(void)

void FUN_148109dac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e0d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109e0a FUN_148109e0a body=126 status=ok
// SIG undefined FUN_148109e0a(void)

void FUN_148109e0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e0d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148109e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148109e90 FUN_148109e90 body=19 status=ok
// SIG undefined FUN_148109e90(void)

undefined1 FUN_148109e90(undefined8 param_1,undefined8 param_2)

{
  FUN_1439ef540(param_2);
  return 1;
}



// FUNCTION 148109ea4 FUN_148109ea4 body=29 status=ok
// SIG undefined FUN_148109ea4(void)

undefined8 FUN_148109ea4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148109ed6 FUN_148109ed6 body=93 status=ok
// SIG undefined FUN_148109ed6(void)

void FUN_148109ed6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109f34 FUN_148109f34 body=93 status=ok
// SIG undefined FUN_148109f34(void)

void FUN_148109f34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148109f92 FUN_148109f92 body=126 status=ok
// SIG undefined FUN_148109f92(void)

void FUN_148109f92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e140;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810a001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810a018 FUN_14810a018 body=19 status=ok
// SIG undefined FUN_14810a018(void)

undefined1 FUN_14810a018(undefined8 param_1,undefined8 param_2)

{
  FUN_1439efcec(param_2);
  return 1;
}



// FUNCTION 14810a02c FUN_14810a02c body=29 status=ok
// SIG undefined FUN_14810a02c(void)

undefined8 FUN_14810a02c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810a05e FUN_14810a05e body=93 status=ok
// SIG undefined FUN_14810a05e(void)

void FUN_14810a05e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e1b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a0bc FUN_14810a0bc body=93 status=ok
// SIG undefined FUN_14810a0bc(void)

void FUN_14810a0bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e1b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a11a FUN_14810a11a body=126 status=ok
// SIG undefined FUN_14810a11a(void)

void FUN_14810a11a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e1b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810a189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810a1a0 FUN_14810a1a0 body=19 status=ok
// SIG undefined FUN_14810a1a0(void)

undefined1 FUN_14810a1a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f060e(param_2);
  return 1;
}



// FUNCTION 14810a418 FUN_14810a418 body=29 status=ok
// SIG undefined FUN_14810a418(void)

undefined8 FUN_14810a418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810a44a FUN_14810a44a body=93 status=ok
// SIG undefined FUN_14810a44a(void)

void FUN_14810a44a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a4a8 FUN_14810a4a8 body=93 status=ok
// SIG undefined FUN_14810a4a8(void)

void FUN_14810a4a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a506 FUN_14810a506 body=126 status=ok
// SIG undefined FUN_14810a506(void)

void FUN_14810a506(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e220;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810a575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810a58c FUN_14810a58c body=19 status=ok
// SIG undefined FUN_14810a58c(void)

undefined1 FUN_14810a58c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f0d70(param_2);
  return 1;
}



// FUNCTION 14810a5a0 FUN_14810a5a0 body=29 status=ok
// SIG undefined FUN_14810a5a0(void)

undefined8 FUN_14810a5a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810a5d2 FUN_14810a5d2 body=93 status=ok
// SIG undefined FUN_14810a5d2(void)

void FUN_14810a5d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a630 FUN_14810a630 body=93 status=ok
// SIG undefined FUN_14810a630(void)

void FUN_14810a630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a68e FUN_14810a68e body=126 status=ok
// SIG undefined FUN_14810a68e(void)

void FUN_14810a68e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e290;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810a6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810a714 FUN_14810a714 body=19 status=ok
// SIG undefined FUN_14810a714(void)

undefined1 FUN_14810a714(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f12de(param_2);
  return 1;
}



// FUNCTION 14810a728 FUN_14810a728 body=29 status=ok
// SIG undefined FUN_14810a728(void)

undefined8 FUN_14810a728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810a75a FUN_14810a75a body=93 status=ok
// SIG undefined FUN_14810a75a(void)

void FUN_14810a75a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e300;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a7b8 FUN_14810a7b8 body=93 status=ok
// SIG undefined FUN_14810a7b8(void)

void FUN_14810a7b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e300;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810a816 FUN_14810a816 body=126 status=ok
// SIG undefined FUN_14810a816(void)

void FUN_14810a816(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e300;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810a885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810a89c FUN_14810a89c body=19 status=ok
// SIG undefined FUN_14810a89c(void)

undefined1 FUN_14810a89c(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f1866(param_2);
  return 1;
}



// FUNCTION 14810ab14 FUN_14810ab14 body=29 status=ok
// SIG undefined FUN_14810ab14(void)

undefined8 FUN_14810ab14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810ab46 FUN_14810ab46 body=93 status=ok
// SIG undefined FUN_14810ab46(void)

void FUN_14810ab46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e370;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810aba4 FUN_14810aba4 body=93 status=ok
// SIG undefined FUN_14810aba4(void)

void FUN_14810aba4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e370;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810ac02 FUN_14810ac02 body=126 status=ok
// SIG undefined FUN_14810ac02(void)

void FUN_14810ac02(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e370;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810ac71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810ac88 FUN_14810ac88 body=19 status=ok
// SIG undefined FUN_14810ac88(void)

undefined1 FUN_14810ac88(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f1d86(param_2);
  return 1;
}



// FUNCTION 14810ac9c FUN_14810ac9c body=29 status=ok
// SIG undefined FUN_14810ac9c(void)

undefined8 FUN_14810ac9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810acce FUN_14810acce body=93 status=ok
// SIG undefined FUN_14810acce(void)

void FUN_14810acce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e3e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810ad2c FUN_14810ad2c body=93 status=ok
// SIG undefined FUN_14810ad2c(void)

void FUN_14810ad2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e3e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810ad8a FUN_14810ad8a body=126 status=ok
// SIG undefined FUN_14810ad8a(void)

void FUN_14810ad8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e3e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810adf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810ae10 FUN_14810ae10 body=19 status=ok
// SIG undefined FUN_14810ae10(void)

undefined1 FUN_14810ae10(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f2426(param_2);
  return 1;
}



// FUNCTION 14810ae24 FUN_14810ae24 body=29 status=ok
// SIG undefined FUN_14810ae24(void)

undefined8 FUN_14810ae24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810ae56 FUN_14810ae56 body=93 status=ok
// SIG undefined FUN_14810ae56(void)

void FUN_14810ae56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810aeb4 FUN_14810aeb4 body=93 status=ok
// SIG undefined FUN_14810aeb4(void)

void FUN_14810aeb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9e450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14810af12 FUN_14810af12 body=126 status=ok
// SIG undefined FUN_14810af12(void)

void FUN_14810af12(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e450;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810af81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810af98 FUN_14810af98 body=19 status=ok
// SIG undefined FUN_14810af98(void)

undefined1 FUN_14810af98(undefined8 param_1,undefined8 param_2)

{
  FUN_1439f2af0(param_2);
  return 1;
}



// FUNCTION 14810afac FUN_14810afac body=31 status=ok
// SIG undefined FUN_14810afac(void)

undefined8 FUN_14810afac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14810afdc FUN_14810afdc body=93 status=ok
// SIG undefined FUN_14810afdc(void)

void FUN_14810afdc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ad9e4f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14810b03a FUN_14810b03a body=93 status=ok
// SIG undefined FUN_14810b03a(void)

void FUN_14810b03a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ad9e4f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14810b098 FUN_14810b098 body=126 status=ok
// SIG undefined FUN_14810b098(void)

void FUN_14810b098(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9e4f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014810b107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14810b122 FUN_14810b122 body=326 status=ok
// SIG undefined FUN_14810b122(void)

void FUN_14810b122(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 14810b26a FUN_14810b26a body=188 status=ok
// SIG undefined FUN_14810b26a(void)

longlong FUN_14810b26a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_14810b309;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14810b328(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_14810b309:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14810b328 FUN_14810b328 body=293 status=ok
// SIG undefined FUN_14810b328(void)

undefined4 * FUN_14810b328(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14810b44e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  cVar1 = FUN_14810b53c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14810b64c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810b44e FUN_14810b44e body=238 status=ok
// SIG undefined FUN_14810b44e(void)

int * FUN_14810b44e(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14810b53c FUN_14810b53c body=149 status=ok
// SIG undefined FUN_14810b53c(void)

undefined8 FUN_14810b53c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          memmove(_Dst,param_3,0x58);
          FUN_14810b5d2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14810b5d2 FUN_14810b5d2 body=122 status=ok
// SIG undefined FUN_14810b5d2(void)

void FUN_14810b5d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 14810b64c FUN_14810b64c body=478 status=ok
// SIG undefined FUN_14810b64c(void)

void FUN_14810b64c(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x5c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
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



// FUNCTION 14810b82c FUN_14810b82c body=181 status=ok
// SIG undefined FUN_14810b82c(void)

longlong FUN_14810b82c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_14810b8c4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14810b8e2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_14810b8c4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 14810b8e2 FUN_14810b8e2 body=275 status=ok
// SIG undefined FUN_14810b8e2(void)

undefined4 * FUN_14810b8e2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14810b9f6(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff00000000;
  cVar1 = FUN_14810badc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14810bbca(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810b9f6 FUN_14810b9f6 body=229 status=ok
// SIG undefined FUN_14810b9f6(void)

int * FUN_14810b9f6(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14810badc FUN_14810badc body=124 status=ok
// SIG undefined FUN_14810badc(void)

undefined8 FUN_14810badc(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14810bb58(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14810bb58 FUN_14810bb58 body=114 status=ok
// SIG undefined FUN_14810bb58(void)

void FUN_14810bb58(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14810bbca FUN_14810bbca body=422 status=ok
// SIG undefined FUN_14810bbca(void)

void FUN_14810bbca(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810bd72 FUN_14810bd72 body=48 status=ok
// SIG undefined FUN_14810bd72(void)

void FUN_14810bd72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14810bda2 FUN_14810bda2 body=48 status=ok
// SIG undefined FUN_14810bda2(void)

void FUN_14810bda2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 14810bdd2 FUN_14810bdd2 body=307 status=ok
// SIG undefined FUN_14810bdd2(void)

void FUN_14810bdd2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    iVar9 = 0;
    uVar10 = 0;
    bVar5 = *plVar2 == lVar3;
    do {
      iVar4 = (int)uVar10;
      uVar11 = uVar10;
      uVar7 = uVar10;
      uVar6 = iVar4 + 1U;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        if (lVar12 <= (longlong)uVar7) {
          uVar11 = (ulonglong)uVar6;
          break;
        }
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (bVar5 == (plVar2[uVar7] == lVar3));
      if (bVar5 == false) {
        iVar8 = (int)uVar11 - iVar4;
        if (iVar9 != iVar4) {
          memmove(plVar2 + iVar9,plVar2 + uVar10,(longlong)iVar8 << 3);
        }
        iVar9 = iVar9 + iVar8;
      }
      uVar10 = uVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < lVar12);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14810bf06 FUN_14810bf06 body=143 status=ok
// SIG undefined FUN_14810bf06(void)

void FUN_14810bf06(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14810bf96 FUN_14810bf96 body=113 status=ok
// SIG undefined FUN_14810bf96(void)

void FUN_14810bf96(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14810c008 FUN_14810c008 body=72 status=ok
// SIG undefined FUN_14810c008(void)

void FUN_14810c008(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ad8d778;
  FUN_1481fa6a2(param_1 + 2);
  FUN_14392e120(param_1);
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1480d1a80(param_1 + 2);
  return;
}



// FUNCTION 14810c050 FUN_14810c050 body=272 status=ok
// SIG undefined FUN_14810c050(void)

void FUN_14810c050(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  float local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (1e-08 < local_20 && *(longlong *)(param_1 + 0x760) != 0) {
    FUN_143ac6a02(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810c162 FUN_14810c162 body=39 status=ok
// SIG undefined FUN_14810c162(void)

void FUN_14810c162(longlong param_1,undefined8 param_2,float param_3)

{
  if (1e-08 < param_3 && *(longlong *)(param_1 + 0x760) != 0) {
    FUN_143ac6a02(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30));
    return;
  }
  return;
}



// FUNCTION 14810c18a FUN_14810c18a body=296 status=ok
// SIG undefined FUN_14810c18a(void)

void FUN_14810c18a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (1e-08 < local_20 && *(longlong *)(param_1 + 0x760) != 0) {
    FUN_143ac6a02(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),
                  (int)ROUND(local_1c / local_20 + local_1c / local_20 + -0.5) >> 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810c2b4 FUN_14810c2b4 body=156 status=ok
// SIG undefined FUN_14810c2b4(void)

void FUN_14810c2b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810c352(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810c352 FUN_14810c352 body=162 status=ok
// SIG undefined FUN_14810c352(void)

void FUN_14810c352(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x8a8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8a0);
    lVar2 = (longlong)*(int *)(param_1 + 0x8a8) * 0x48;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 != (longlong *)0x0) {
          plVar1[6] = 0;
          plVar1[7] = 0;
          plVar1[4] = 0;
          plVar1[5] = 0;
          plVar1[2] = 0;
          plVar1[3] = 0;
          *(undefined1 *)(plVar1 + 8) = 0;
        }
        break;
      }
      plVar1 = plVar1 + 9;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_18 = 0;
    FUN_143ac8698(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30));
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810c3fa FUN_14810c3fa body=161 status=ok
// SIG undefined FUN_14810c3fa(void)

void FUN_14810c3fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810eaba(param_1,0,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810c594 FUN_14810c594 body=231 status=ok
// SIG undefined FUN_14810c594(void)

void FUN_14810c594(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar2,1);
  uVar1 = FUN_144a7cf6a();
  uVar1 = FUN_140584a5e(uVar1,param_1,local_28);
  *param_3 = uVar1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810c69a FUN_14810c69a body=333 status=ok
// SIG undefined FUN_14810c69a(void)

void FUN_14810c69a(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined3 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = 0;
  if ((longlong)*(int *)(param_1 + 0x8a8) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x8a0);
    lVar3 = (longlong)*(int *)(param_1 + 0x8a8) * 0x48;
    do {
      if (*plVar2 == local_30) {
        if (plVar2 != (longlong *)0x0) {
          lVar3 = plVar2[2];
          lVar8 = plVar2[3];
          lVar7 = plVar2[4];
          lVar6 = plVar2[5];
          lVar5 = plVar2[6];
          lVar4 = plVar2[7];
          uVar1 = (undefined1)plVar2[8];
          uStack_24 = (undefined3)((uint)*(undefined4 *)((longlong)plVar2 + 0x44) >> 8);
          local_28 = *(undefined4 *)((longlong)plVar2 + 0x41);
          goto LAB_14810c73a;
        }
        break;
      }
      plVar2 = plVar2 + 9;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  uVar1 = 0;
  lVar5 = 0;
  lVar6 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar3 = 0;
LAB_14810c73a:
  *param_3 = lVar3;
  param_3[1] = lVar8;
  param_3[2] = lVar7;
  param_3[3] = lVar6;
  param_3[4] = lVar5;
  param_3[5] = lVar4;
  *(undefined1 *)(param_3 + 6) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x31) = local_28;
  *(uint *)((longlong)param_3 + 0x34) = CONCAT31(uStack_24,local_28._3_1_);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810c990 FUN_14810c990 body=90 status=ok
// SIG undefined FUN_14810c990(void)

void FUN_14810c990(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x2d2) = *(byte *)(param_1 + 0x2d2) | 8;
  *(byte *)(param_1 + 0x7cc) = *(byte *)(param_1 + 0x7cc) & 0xef;
  FUN_140388f74();
  *(byte *)(param_1 + 0x7cc) = *(byte *)(param_1 + 0x7cc) | 1;
  *(undefined4 *)(param_1 + 0x7c4) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30);
    pbVar1 = (byte *)(lVar2 + 0x798);
    *pbVar1 = *pbVar1 | 0xc0;
    *(undefined1 **)(lVar2 + 0xe4) = &DAT_3f8000003f800000;
  }
  return;
}



// FUNCTION 14810ca0e FUN_14810ca0e body=112 status=ok
// SIG undefined FUN_14810ca0e(void)

void FUN_14810ca0e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(uint *)(param_1 + 0xf2);
  lVar2 = param_1[0xf3];
  *(uint *)(param_1 + 0xf2) = uVar1 & 0xfffffffe;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  FUN_14080aa0e();
  *(uint *)(param_1 + 0xf2) = *(uint *)(param_1 + 0xf2) & 0xfffffffe | uVar1 & 1;
  *(char *)(param_1 + 0xf3) = (char)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00014810ca7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,1);
  return;
}



// FUNCTION 14810ca9e FUN_14810ca9e body=15 status=ok
// SIG undefined FUN_14810ca9e(void)

void FUN_14810ca9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014810caaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,1);
  return;
}



// FUNCTION 14810caae FUN_14810caae body=163 status=ok
// SIG undefined FUN_14810caae(void)

void FUN_14810caae(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x774) = local_1c;
  *(undefined1 *)(param_1 + 0x78c) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810cb52 FUN_14810cb52 body=16 status=ok
// SIG undefined FUN_14810cb52(void)

void FUN_14810cb52(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x774) = param_2;
  *(undefined1 *)(param_1 + 0x78c) = 1;
  return;
}



// FUNCTION 14810cb62 FUN_14810cb62 body=149 status=ok
// SIG undefined FUN_14810cb62(void)

void FUN_14810cb62(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x770) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810cbfc FUN_14810cbfc body=158 status=ok
// SIG undefined FUN_14810cbfc(void)

void FUN_14810cbfc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140388f42(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810cca2 FUN_14810cca2 body=241 status=ok
// SIG undefined FUN_14810cca2(void)

void FUN_14810cca2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1409d23de(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810cd98 FUN_14810cd98 body=183 status=ok
// SIG undefined FUN_14810cd98(void)

void FUN_14810cd98(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_1c == 0) || (*(char *)(param_1 + 0x798) == '\0')) {
    *(uint *)(param_1 + 0x790) = *(uint *)(param_1 + 0x790) & 0xfffffffe | (uint)(local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810ce54 FUN_14810ce54 body=154 status=ok
// SIG undefined FUN_14810ce54(void)

void FUN_14810ce54(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x77c) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810cef0 FUN_14810cef0 body=199 status=ok
// SIG undefined FUN_14810cef0(void)

void FUN_14810cef0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (1e-08 < ABS(*(float *)(param_1 + 0x8b0) - local_1c)) {
    *(float *)(param_1 + 0x8b0) = local_1c;
    FUN_140c7193c(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810cfb8 FUN_14810cfb8 body=46 status=ok
// SIG undefined FUN_14810cfb8(void)

void FUN_14810cfb8(longlong param_1,float param_2)

{
  if (1e-08 < ABS(*(float *)(param_1 + 0x8b0) - param_2)) {
    *(float *)(param_1 + 0x8b0) = param_2;
    FUN_140c7193c();
    return;
  }
  return;
}



// FUNCTION 14810cfe6 FUN_14810cfe6 body=163 status=ok
// SIG undefined FUN_14810cfe6(void)

void FUN_14810cfe6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x774) = local_1c;
  *(undefined1 *)(param_1 + 0x78c) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d08a FUN_14810d08a body=299 status=ok
// SIG undefined FUN_14810d08a(void)

void FUN_14810d08a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined7 uStack_27;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT71(uStack_27,local_28);
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  FUN_14810d1b6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d1b6 FUN_14810d1b6 body=159 status=ok
// SIG undefined FUN_14810d1b6(void)

void FUN_14810d1b6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_148110510();
  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(param_3 + 0xc);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = *(undefined8 *)(param_3 + 4);
  uVar6 = *(undefined8 *)(param_3 + 6);
  uVar7 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar8 + 0x38) = uVar7;
  *(undefined8 *)(lVar8 + 0x20) = uVar5;
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  *(undefined4 *)(lVar8 + 0x10) = uVar1;
  *(undefined4 *)(lVar8 + 0x14) = uVar2;
  *(undefined4 *)(lVar8 + 0x18) = uVar3;
  *(undefined4 *)(lVar8 + 0x1c) = uVar4;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    local_28 = *(undefined8 *)(param_3 + 0xc);
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = param_3[4];
    uStack_44 = param_3[5];
    uStack_40 = param_3[6];
    uStack_3c = param_3[7];
    local_38 = param_3[8];
    uStack_34 = param_3[9];
    uStack_30 = param_3[10];
    uStack_2c = param_3[0xb];
    FUN_143ac8698(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d25a FUN_14810d25a body=182 status=ok
// SIG undefined FUN_14810d25a(void)

void FUN_14810d25a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0x7cc) = *(uint *)(param_1 + 0x7cc) & 0xffffffdf | (uint)(local_1c != 0) << 5;
  FUN_14043807e(param_1,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d316 FUN_14810d316 body=198 status=ok
// SIG undefined FUN_14810d316(void)

void FUN_14810d316(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_1c != 0) != (bool)((byte)*(uint *)(param_1 + 0x750) & 1)) {
    *(uint *)(param_1 + 0x750) = *(uint *)(param_1 + 0x750) & 0xfffffffe | (uint)(local_1c != 0);
    FUN_140c7193c(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d3e2 FUN_14810d3e2 body=188 status=ok
// SIG undefined FUN_14810d3e2(void)

void FUN_14810d3e2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(uint *)(param_1 + 0x750) & 2) == 0) == (local_1c != 0)) {
    *(uint *)(param_1 + 0x750) =
         (*(uint *)(param_1 + 0x750) & 0xfffffffd) + (uint)(local_1c != 0) * 2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d4a4 FUN_14810d4a4 body=154 status=ok
// SIG undefined FUN_14810d4a4(void)

void FUN_14810d4a4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x784) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d540 FUN_14810d540 body=156 status=ok
// SIG undefined FUN_14810d540(void)

void FUN_14810d540(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x788) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810d5de FUN_14810d5de body=303 status=ok
// SIG undefined FUN_14810d5de(void)

void FUN_14810d5de(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar2,1);
  FUN_140e2f260(param_1,local_28,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810d714 FUN_14810d714 body=305 status=ok
// SIG undefined FUN_14810d714(void)

void FUN_14810d714(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  bVar2 = local_3c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar1,1);
  FUN_1408c9a80(param_1,local_28,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810d846 FUN_14810d846 body=311 status=ok
// SIG undefined FUN_14810d846(void)

void FUN_14810d846(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_48;
  if ((int)uStack_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_38,puVar2,1);
  FUN_140219d5e(param_1,local_38,uVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810d97e FUN_14810d97e body=301 status=ok
// SIG undefined FUN_14810d97e(void)

void FUN_14810d97e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar2,1);
  FUN_14042f9da(param_1,local_28,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810daac FUN_14810daac body=307 status=ok
// SIG undefined FUN_14810daac(void)

void FUN_14810daac(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar1,1);
  FUN_1406eff12(param_1,local_28,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810dbe0 FUN_14810dbe0 body=305 status=ok
// SIG undefined FUN_14810dbe0(void)

void FUN_14810dbe0(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar2 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_c8;
  if ((int)uStack_c0 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_b0,puVar1,1);
  FUN_14810f4e6(param_1,local_b0,puVar2);
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810dd12 FUN_14810dd12 body=303 status=ok
// SIG undefined FUN_14810dd12(void)

void FUN_14810dd12(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar2,1);
  FUN_140e2f260(param_1,local_28,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810de42 FUN_14810de42 body=321 status=ok
// SIG undefined FUN_14810de42(void)

void FUN_14810de42(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_60;
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  puVar1 = local_58;
  if ((int)uStack_50 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  FUN_1404e1568(param_1,local_40,&local_38);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810df84 FUN_14810df84 body=293 status=ok
// SIG undefined FUN_14810df84(void)

void FUN_14810df84(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar1,1);
  FUN_14810f980(param_1,local_28,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810e0aa FUN_14810e0aa body=285 status=ok
// SIG undefined FUN_14810e0aa(void)

void FUN_14810e0aa(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  puVar1 = local_48;
  if ((int)uStack_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar1,1);
  FUN_1481100e2(param_1,local_30,&local_28);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810e1c8 FUN_14810e1c8 body=321 status=ok
// SIG undefined FUN_14810e1c8(void)

void FUN_14810e1c8(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_60;
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  puVar1 = local_58;
  if ((int)uStack_50 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  FUN_1404e0f62(param_1,local_40,&local_38);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810e30a FUN_14810e30a body=336 status=ok
// SIG undefined FUN_14810e30a(void)

void FUN_14810e30a(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar1,1);
  FUN_14112d1d2(param_1,local_28,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14810e45c FUN_14810e45c body=165 status=ok
// SIG undefined FUN_14810e45c(void)

void FUN_14810e45c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)(param_1 + 0x799) != local_19) {
    *(char *)(param_1 + 0x799) = local_19;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810e506 FUN_14810e506 body=158 status=ok
// SIG undefined FUN_14810e506(void)

void FUN_14810e506(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810e5a6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810e5a6 FUN_14810e5a6 body=120 status=ok
// SIG undefined FUN_14810e5a6(void)

void FUN_14810e5a6(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  *(uint *)(param_1 + 0x7cc) = *(uint *)(param_1 + 0x7cc) & 0xfffffdff | (uint)param_2 << 9;
  if (((*(longlong *)(param_1 + 0x760) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30), *(int *)(lVar1 + 0x868) == 0))
     && (*(int *)(lVar1 + 0x86c) == 0)) {
    if (param_2 == 0) {
      FUN_14043827e(param_1);
    }
    else {
      FUN_140388f74();
    }
    FUN_1402442c2(param_1,*(uint *)(param_1 + 0x7cc) >> 9 & 1,0);
    return;
  }
  return;
}



// FUNCTION 14810e622 FUN_14810e622 body=307 status=ok
// SIG undefined FUN_14810e622(void)

void FUN_14810e622(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810e756(param_1,iVar1 != 0,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810e756 FUN_14810e756 body=116 status=ok
// SIG undefined FUN_14810e756(void)

void FUN_14810e756(longlong param_1,byte param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x7cc) = *(uint *)(param_1 + 0x7cc) & 0xfffffffe | (uint)param_2;
  *(undefined4 *)(param_1 + 0x7c4) = param_3;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30);
    uVar2 = param_3;
    if (param_2 == 0) {
      uVar2 = 0;
      param_3 = 0x3f800000;
    }
    *(byte *)(lVar1 + 0x798) = ((param_2 ^ 1) << 6 | *(byte *)(lVar1 + 0x798) & 0x3f) - 0x40;
    *(undefined4 *)(lVar1 + 0xe4) = uVar2;
    *(undefined4 *)(lVar1 + 0xe8) = param_3;
  }
  return;
}



// FUNCTION 14810e7ca FUN_14810e7ca body=174 status=ok
// SIG undefined FUN_14810e7ca(void)

void FUN_14810e7ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x674) = local_1c;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30) + 0xe0) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810e87e FUN_14810e87e body=170 status=ok
// SIG undefined FUN_14810e87e(void)

void FUN_14810e87e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0x790) = (*(uint *)(param_1 + 0x790) & 0xfffffffd) + (uint)(local_1c != 0) * 2
  ;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810e92a FUN_14810e92a body=156 status=ok
// SIG undefined FUN_14810e92a(void)

void FUN_14810e92a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x780) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810e9ce FUN_14810e9ce body=235 status=ok
// SIG undefined FUN_14810e9ce(void)

void FUN_14810e9ce(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810eaba(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810eaba FUN_14810eaba body=215 status=ok
// SIG undefined FUN_14810eaba(void)

void FUN_14810eaba(longlong *param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) || (param_1[0x117] == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1[0x117] + 0x68) != '\0';
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x117] = param_2;
  FUN_140c7193c(param_1);
  if ((bVar3 | param_3) == 1) {
    uVar1 = *(uint *)(param_1 + 0xf2);
    lVar2 = param_1[0xf3];
    *(uint *)(param_1 + 0xf2) = uVar1 & 0xfffffffe;
    *(undefined1 *)(param_1 + 0xf3) = 0;
    FUN_14080aa0e(param_1);
    *(uint *)(param_1 + 0xf2) = *(uint *)(param_1 + 0xf2) & 0xfffffffe | uVar1 & 1;
    *(char *)(param_1 + 0xf3) = (char)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00014810eb5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14810eb92 FUN_14810eb92 body=258 status=ok
// SIG undefined FUN_14810eb92(void)

void FUN_14810eb92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_1 + 0x898) = CONCAT71(uStack_1f,local_20);
  *(undefined4 *)(param_1 + 0x888) = local_30;
  *(undefined4 *)(param_1 + 0x88c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x890) = uStack_28;
  *(undefined4 *)(param_1 + 0x894) = uStack_24;
  *(undefined4 *)(param_1 + 0x878) = local_40;
  *(undefined4 *)(param_1 + 0x87c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x880) = uStack_38;
  *(undefined4 *)(param_1 + 0x884) = uStack_34;
  *(undefined4 *)(param_1 + 0x868) = local_50;
  *(undefined4 *)(param_1 + 0x86c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x870) = uStack_48;
  *(undefined4 *)(param_1 + 0x874) = uStack_44;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30);
    *(ulonglong *)(lVar1 + 0x7f0) = CONCAT71(uStack_1f,local_20);
    *(undefined4 *)(lVar1 + 0x7e0) = local_30;
    *(undefined4 *)(lVar1 + 0x7e4) = uStack_2c;
    *(undefined4 *)(lVar1 + 0x7e8) = uStack_28;
    *(undefined4 *)(lVar1 + 0x7ec) = uStack_24;
    *(undefined4 *)(lVar1 + 2000) = local_40;
    *(undefined4 *)(lVar1 + 0x7d4) = uStack_3c;
    *(undefined4 *)(lVar1 + 0x7d8) = uStack_38;
    *(undefined4 *)(lVar1 + 0x7dc) = uStack_34;
    *(undefined4 *)(lVar1 + 0x7c0) = local_50;
    *(undefined4 *)(lVar1 + 0x7c4) = uStack_4c;
    *(undefined4 *)(lVar1 + 0x7c8) = uStack_48;
    *(undefined4 *)(lVar1 + 0x7cc) = uStack_44;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810ec96 FUN_14810ec96 body=170 status=ok
// SIG undefined FUN_14810ec96(void)

void FUN_14810ec96(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x670) = local_19;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_1481f517c(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810ed42 FUN_14810ed42 body=238 status=ok
// SIG undefined FUN_14810ed42(void)

void FUN_14810ed42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140e2f260(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810ee38 FUN_14810ee38 body=241 status=ok
// SIG undefined FUN_14810ee38(void)

void FUN_14810ee38(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1408c9a80(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810ef2a FUN_14810ef2a body=238 status=ok
// SIG undefined FUN_14810ef2a(void)

void FUN_14810ef2a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140219d5e(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f01a FUN_14810f01a body=237 status=ok
// SIG undefined FUN_14810f01a(void)

void FUN_14810f01a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14042f9da(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f108 FUN_14810f108 body=246 status=ok
// SIG undefined FUN_14810f108(void)

void FUN_14810f108(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406eff12(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f200 FUN_14810f200 body=232 status=ok
// SIG undefined FUN_14810f200(void)

void FUN_14810f200(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810f2ea(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f2ea FUN_14810f2ea body=256 status=ok
// SIG undefined FUN_14810f2ea(void)

void FUN_14810f2ea(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb41390);
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                              (param_1 + 0x678,&local_48,0);
    if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, (longlong)iVar1 != -1)) {
      lVar2 = *(longlong *)(param_1 + 0x6b8);
      if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_3);
      }
      *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_3;
      *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 4;
    }
  }
  else {
    local_50 = 0;
    FUN_14485c47a(&local_50,param_3);
    FUN_1481f5e32(*(undefined8 *)(param_1 + 0x760),param_2,local_50);
  }
  *(byte *)(param_1 + 0x7cd) = *(byte *)(param_1 + 0x7cd) | 4;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f3ec FUN_14810f3ec body=248 status=ok
// SIG undefined FUN_14810f3ec(void)

void FUN_14810f3ec(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810f4e6(param_1,local_a0,puVar1);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f4e6 FUN_14810f4e6 body=442 status=ok
// SIG undefined FUN_14810f4e6(void)

void FUN_14810f4e6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 uStack_b8;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144a928e2(&local_68,param_3);
  local_d0 = param_2;
  local_c8[0] = FUN_144830b78(local_c8,&DAT_14cb41370);
  local_c0 = 0;
  uStack_b8 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    piVar4 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_d0,0);
    if (piVar4 == (int *)0x0) {
      local_ac = -1;
    }
    else {
      local_ac = *piVar4;
      lVar5 = (longlong)local_ac;
      if (lVar5 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x698);
        puVar3 = (undefined8 *)(lVar1 + 0x30 + lVar5);
        *puVar3 = CONCAT44(uStack_34,local_38);
        puVar3[1] = CONCAT44(uStack_2c,uStack_30);
        puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar5);
        *puVar3 = CONCAT44(uStack_44,local_48);
        puVar3[1] = CONCAT44(uStack_3c,uStack_40);
        puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar5);
        *puVar3 = CONCAT44(uStack_54,local_58);
        puVar3[1] = CONCAT44(uStack_4c,uStack_50);
        puVar2 = (undefined4 *)(lVar1 + lVar5);
        *puVar2 = local_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_14810f585;
      }
    }
    local_d8 = &local_ac;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_d0,0,0);
    lVar6 = (longlong)local_ac;
    lVar5 = *(longlong *)(param_1 + 0x698);
    puVar2 = (undefined4 *)(lVar5 + 0x30 + lVar6);
    *puVar2 = local_38;
    puVar2[1] = uStack_34;
    puVar2[2] = uStack_30;
    puVar2[3] = uStack_2c;
    puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar6);
    *puVar2 = local_48;
    puVar2[1] = uStack_44;
    puVar2[2] = uStack_40;
    puVar2[3] = uStack_3c;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar6);
    *puVar2 = local_58;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = uStack_4c;
    puVar2 = (undefined4 *)(lVar5 + lVar6);
    *puVar2 = local_68;
    puVar2[1] = uStack_64;
    puVar2[2] = uStack_60;
    puVar2[3] = uStack_5c;
    FUN_140219f72(lVar1);
  }
  else {
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_88 = local_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    FUN_1481f5c3a(*(longlong *)(param_1 + 0x760),param_2);
  }
LAB_14810f585:
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f6a2 FUN_14810f6a2 body=238 status=ok
// SIG undefined FUN_14810f6a2(void)

void FUN_14810f6a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140e2f260(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f792 FUN_14810f792 body=255 status=ok
// SIG undefined FUN_14810f792(void)

void FUN_14810f792(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_1404e1568(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f892 FUN_14810f892 body=236 status=ok
// SIG undefined FUN_14810f892(void)

void FUN_14810f892(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810f980(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810f980 FUN_14810f980 body=439 status=ok
// SIG undefined FUN_14810f980(void)

void FUN_14810f980(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  float *local_a8;
  undefined8 local_98;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar5 = (float)param_3[3];
  fVar6 = (float)param_3[2];
  fVar7 = (float)param_3[1];
  fVar8 = (float)*param_3;
  local_98 = param_2;
  local_90[0] = FUN_144830b78(local_90,&DAT_14cb42190);
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    pfVar2 = (float *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_98,0);
    if (pfVar2 == (float *)0x0) {
      local_78 = -NAN;
    }
    else {
      local_78 = *pfVar2;
      lVar3 = (longlong)(int)local_78;
      if (lVar3 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x698);
        *(float *)(lVar1 + lVar3) = fVar8;
        *(float *)(lVar1 + 4 + lVar3) = fVar7;
        *(float *)(lVar1 + 8 + lVar3) = fVar6;
        *(float *)(lVar1 + 0xc + lVar3) = fVar5;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_14810fa34;
      }
    }
    local_a8 = &local_78;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_98,0,0);
    lVar4 = (longlong)(int)local_78;
    lVar3 = *(longlong *)(param_1 + 0x698);
    *(float *)(lVar3 + lVar4) = fVar8;
    *(float *)(lVar3 + 4 + lVar4) = fVar7;
    *(float *)(lVar3 + 8 + lVar4) = fVar6;
    *(float *)(lVar3 + 0xc + lVar4) = fVar5;
    FUN_140219f72(lVar1);
  }
  else {
    local_78 = fVar8;
    local_74 = fVar7;
    local_70 = fVar6;
    local_6c = fVar5;
    FUN_1481f5b4c(*(longlong *)(param_1 + 0x760),param_2);
  }
LAB_14810fa34:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810fb38 FUN_14810fb38 body=232 status=ok
// SIG undefined FUN_14810fb38(void)

void FUN_14810fb38(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810fc22(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810fc22 FUN_14810fc22 body=256 status=ok
// SIG undefined FUN_14810fc22(void)

void FUN_14810fc22(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb413a0);
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                              (param_1 + 0x678,&local_48,0);
    if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, (longlong)iVar1 != -1)) {
      lVar2 = *(longlong *)(param_1 + 0x6b8);
      if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_3);
      }
      *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_3;
      *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 4;
    }
  }
  else {
    local_50 = 0;
    FUN_14485c47a(&local_50,param_3);
    FUN_1481f5f4e(*(undefined8 *)(param_1 + 0x760),param_2,local_50);
  }
  *(byte *)(param_1 + 0x7cd) = *(byte *)(param_1 + 0x7cd) | 4;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810fd24 FUN_14810fd24 body=238 status=ok
// SIG undefined FUN_14810fd24(void)

void FUN_14810fd24(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14112d480(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810fe14 FUN_14810fe14 body=232 status=ok
// SIG undefined FUN_14810fe14(void)

void FUN_14810fe14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14810fefe(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810fefe FUN_14810fefe body=249 status=ok
// SIG undefined FUN_14810fefe(void)

void FUN_14810fefe(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb413c0);
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                              (param_1 + 0x678,&local_48,0);
    if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, (longlong)iVar1 != -1)) {
      lVar2 = *(longlong *)(param_1 + 0x6b8);
      if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_3);
      }
      *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_3;
      *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 4;
    }
  }
  else {
    local_50 = 0;
    FUN_14485c47a(&local_50,param_3);
    FUN_1481f606a(*(undefined8 *)(param_1 + 0x760),param_2,local_50);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14810fff8 FUN_14810fff8 body=232 status=ok
// SIG undefined FUN_14810fff8(void)

void FUN_14810fff8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_1481100e2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481100e2 FUN_1481100e2 body=337 status=ok
// SIG undefined FUN_1481100e2(void)

void FUN_1481100e2(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined8 local_68;
  undefined4 local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar4 = (float)param_3[1];
  fVar5 = (float)*param_3;
  local_68 = param_2;
  local_60[0] = FUN_144830b78(local_60,&DAT_14cb42110);
  local_58 = 0;
  uStack_50 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    piVar2 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_68,0);
    if (piVar2 == (int *)0x0) {
      local_44 = -1;
    }
    else {
      local_44 = *piVar2;
      lVar3 = (longlong)local_44;
      if (lVar3 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x698);
        *(float *)(lVar1 + lVar3) = fVar5;
        *(float *)(lVar1 + 4 + lVar3) = fVar4;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_148110161;
      }
    }
    local_78 = &local_44;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_68,0,0);
    lVar3 = *(longlong *)(param_1 + 0x698);
    *(float *)(lVar3 + local_44) = fVar5;
    *(float *)(lVar3 + 4 + (longlong)local_44) = fVar4;
    FUN_140219f72(lVar1);
  }
  else {
    FUN_1481f5a64(*(longlong *)(param_1 + 0x760),param_2,CONCAT44(fVar4,fVar5));
  }
LAB_148110161:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148110234 FUN_148110234 body=255 status=ok
// SIG undefined FUN_148110234(void)

void FUN_148110234(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_1404e0f62(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148110334 FUN_148110334 body=279 status=ok
// SIG undefined FUN_148110334(void)

void FUN_148110334(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14112d1d2(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481104c0 FUN_1481104c0 body=80 status=ok
// SIG undefined FUN_1481104c0(void)

void FUN_1481104c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_148110510();
  *(char *)(lVar1 + 8) = (char)param_3;
  if ((*(longlong *)(param_1 + 0x760) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30), 1 < *(int *)(lVar1 + 0x86c) - 3U
     )) {
    FUN_143ac5ae4(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148110510 FUN_148110510 body=143 status=ok
// SIG undefined FUN_148110510(void)

void FUN_148110510(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x8a0);
  iVar1 = *(int *)(param_1 + 0x8a8);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar4 = lVar5 * 0x48;
    plVar2 = plVar3;
    do {
      if (*plVar2 == param_2) {
        return;
      }
      plVar2 = plVar2 + 9;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 0x8a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8ac) < iVar1 + 1U) {
    FUN_148122746((undefined8 *)(param_1 + 0x8a0),iVar1);
    plVar3 = *(longlong **)(param_1 + 0x8a0);
  }
  plVar3 = plVar3 + lVar5 * 9;
  *plVar3 = param_2;
  *(undefined1 *)(plVar3 + 1) = 1;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *(undefined1 *)(plVar3 + 8) = 0;
  return;
}



// FUNCTION 1481105a0 FUN_1481105a0 body=102 status=ok
// SIG undefined FUN_1481105a0(void)

int FUN_1481105a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x694) * 0x28 + *(int *)(param_1 + 0x6a4) +
          *(int *)(param_1 + 0x6e4) * 0x38 + *(int *)(param_1 + 0x6d4) * 0x20 +
          (*(int *)(param_1 + 0x6c4) + *(int *)(param_1 + 0x6b4) + *(int *)(param_1 + 0x6f4)) * 8 +
          0x968;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    iVar1 = FUN_1481f5a10();
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



// FUNCTION 148110606 FUN_148110606 body=79 status=ok
// SIG undefined FUN_148110606(void)

void FUN_148110606(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x790);
  uVar1 = *(undefined1 *)(param_1 + 0x798);
  *(uint *)(param_1 + 0x790) = uVar2 & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x798) = 0;
  FUN_14080aa0e();
  *(uint *)(param_1 + 0x790) = *(uint *)(param_1 + 0x790) & 0xfffffffe | uVar2 & 1;
  *(undefined1 *)(param_1 + 0x798) = uVar1;
  return;
}



// FUNCTION 148110656 FUN_148110656 body=1170 status=ok
// SIG undefined FUN_148110656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148110656(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined1 local_e0;
  undefined1 local_c9;
  code *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puStack_c0 = &local_c9;
  local_c8 = FUN_141073f72;
  lVar7 = FUN_144a773aa(&local_c8,&DAT_14c75ec34);
  if (*(char *)(lVar7 + 0x20) == '\0') {
    lVar7 = param_1[0xec];
    uVar10 = FUN_144b21608(param_1);
    *(undefined4 *)(*(longlong *)(lVar7 + 0x30) + 0xd4) = uVar10;
    FUN_1448c6f34(param_1);
    lVar7 = *(longlong *)(param_1[0xec] + 0x30);
    dVar17 = *(double *)(lVar7 + 0x830);
    dVar1 = *(double *)(lVar7 + 0x838);
    dVar2 = *(double *)(lVar7 + 0x840);
    dVar3 = *(double *)(lVar7 + 0x848);
    dVar4 = *(double *)(lVar7 + 0x850);
    dVar5 = *(double *)(lVar7 + 0x858);
    lVar7 = *(longlong *)(lVar7 + 0x860);
    lVar9 = param_1[0x16];
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    fVar11 = *(float *)(lVar9 + 0x6f4) + *(float *)((longlong)param_1 + 0x82c);
    *(float *)((longlong)param_1 + 0x82c) = fVar11;
    if (((((((char)param_1[0x10c] == '\0') || (dVar17 < (double)param_1[0x106])) ||
          ((double)param_1[0x109] < dVar17)) ||
         (((dVar1 < (double)param_1[0x107] || ((double)param_1[0x10a] < dVar1)) ||
          ((dVar2 < (double)param_1[0x108] ||
           (((double)param_1[0x10b] < dVar2 || (dVar3 < (double)param_1[0x106])))))))) ||
        ((double)param_1[0x109] < dVar3)) ||
       ((((dVar4 < (double)param_1[0x107] || ((double)param_1[0x10a] < dVar4)) ||
         (dVar5 < (double)param_1[0x108])) ||
        (((double)param_1[0x10b] < dVar5 ||
         (*(float *)((longlong)param_1 + 0x794) <= fVar11 &&
          fVar11 != *(float *)((longlong)param_1 + 0x794))))))) {
      param_1[0x106] = (longlong)dVar17;
      param_1[0x107] = (longlong)dVar1;
      param_1[0x108] = (longlong)dVar2;
      param_1[0x109] = (longlong)dVar3;
      param_1[0x10a] = (longlong)dVar4;
      param_1[0x10b] = (longlong)dVar5;
      param_1[0x10c] = lVar7;
      *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x36);
      dVar1 = auVar12._0_8_;
      dVar2 = auVar12._8_8_;
      dVar17 = (double)param_1[0x38];
      puVar8 = (undefined8 *)param_1[0x46];
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar6 = DAT_14c8463d8;
        *puVar8 = DAT_14c8463d0;
        puVar8[1] = uVar6;
        uVar6 = DAT_14c8463e8;
        puVar8[2] = DAT_14c8463e0;
        puVar8[3] = uVar6;
        uVar6 = DAT_14c846500;
        puVar8[4] = DAT_14c8464f8;
        puVar8[5] = uVar6;
        puVar8[6] = DAT_14c846508;
        param_1[0x46] = (longlong)puVar8;
      }
      if ((((double)puVar8[4] != dVar1) || (NAN((double)puVar8[4]) || NAN(dVar1))) ||
         (((double)puVar8[5] != dVar2 ||
          (((NAN((double)puVar8[5]) || NAN(dVar2) || ((double)puVar8[6] != dVar17)) ||
           (NAN((double)puVar8[6]) || NAN(dVar17))))))) {
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar17;
        dVar3 = (double)DAT_1499387d0;
        dVar4 = DAT_1499387d0._8_8_;
        auVar12 = divpd(auVar12,_DAT_1499387d0);
        auVar15 = divpd(auVar20,_DAT_1499387d0);
        auVar12 = roundpd(auVar12,auVar12,3);
        auVar15 = roundpd(auVar15,auVar15,3);
        dVar1 = dVar1 - auVar12._0_8_ * dVar3;
        dVar2 = dVar2 - auVar12._8_8_ * dVar4;
        auVar21._0_8_ = dVar17 - auVar15._0_8_ * dVar3;
        auVar21._8_8_ = 0.0 - auVar15._8_8_ * dVar4;
        auVar19._0_8_ = dVar1 + dVar3;
        auVar19._8_8_ = dVar2 + dVar4;
        auVar18._0_8_ = dVar3 + auVar21._0_8_;
        auVar18._8_8_ = dVar4 + auVar21._8_8_;
        auVar15._8_8_ = -(ulonglong)(0.0 <= dVar2);
        auVar15._0_8_ = -(ulonglong)(0.0 <= dVar1);
        auVar12._8_4_ = SUB84(dVar2,0);
        auVar12._0_8_ = dVar1;
        auVar12._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        auVar15 = blendvpd(auVar19,auVar12,auVar15);
        auVar13._8_8_ = -(ulonglong)(0.0 <= auVar21._8_8_);
        auVar13._0_8_ = -(ulonglong)(0.0 <= auVar21._0_8_);
        auVar12 = blendvpd(auVar18,auVar21,auVar13);
        auVar16._0_8_ = auVar15._0_8_ + -360.0;
        auVar16._8_8_ = auVar15._8_8_ + -360.0;
        auVar14._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
        auVar14._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
        auVar15 = blendvpd(auVar15,auVar16,auVar14);
        dVar17 = auVar12._0_8_;
        *(undefined1 (*) [16])(puVar8 + 4) = auVar15;
        puVar8[6] = ~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                    (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17);
        FUN_144a7484c(puVar8 + 4,&local_c8);
        puVar8[2] = local_b8;
        puVar8[3] = uStack_b0;
        *puVar8 = local_c8;
        puVar8[1] = puStack_c0;
      }
      local_c8 = (code *)*puVar8;
      puStack_c0 = (undefined1 *)puVar8[1];
      local_b8 = puVar8[2];
      uStack_b0 = puVar8[3];
      local_e0 = 0;
      local_e8 = &local_c8;
      FUN_140092404(param_1,param_1[0x24],param_1[0x25],0);
    }
    if ((param_1[0xb5] != 0) && (*(longlong *)(param_1[0xb5] + 0x2f0) != 0)) {
      FUN_144b3858a(param_1[0xec]);
    }
    if ((*(byte *)((longlong)param_1 + 0x7cd) & 4) != 0) {
      (**(code **)(*param_1 + 0x310))(param_1);
      *(byte *)((longlong)param_1 + 0x7cd) = *(byte *)((longlong)param_1 + 0x7cd) & 0xfb;
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148110aea FUN_148110aea body=47 status=ok
// SIG undefined FUN_148110aea(void)

void FUN_148110aea(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FUN_148110b96(*(longlong *)(param_1 + 0x8c0),param_1);
    *(undefined8 *)(param_1 + 0x8c0) = 0;
  }
  return;
}



// FUNCTION 148110b26 FUN_148110b26 body=51 status=ok
// SIG undefined FUN_148110b26(void)

void FUN_148110b26(longlong *param_1)

{
  FUN_147a00b08();
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148110b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,1);
  return;
}



// FUNCTION 148110b5a FUN_148110b5a body=59 status=ok
// SIG undefined FUN_148110b5a(void)

void FUN_148110b5a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1479f20c4();
  if (*(longlong *)(param_1 + 0x760) != 0) {
    uVar1 = FUN_1481f5a10();
    FUN_14484255c(param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 148110b96 FUN_148110b96 body=236 status=ok
// SIG undefined FUN_148110b96(void)

void FUN_148110b96(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x8e0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x8d8);
    lVar5 = (longlong)*(int *)(param_1 + 0x8e0) << 3;
    iVar3 = 1;
    lVar7 = 0;
    do {
      lVar2 = FUN_1409ca440(lVar6);
      if (lVar2 == param_2) {
        if (iVar3 != 0) {
          iVar1 = *(int *)(param_1 + 0x8e0);
          iVar3 = iVar1 - iVar3;
          if (iVar3 != 0) {
            iVar4 = 1;
            if (iVar3 < 1) {
              iVar4 = iVar3;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x8d8) + (lVar7 >> 0x20) * 8),
                    (void *)(*(longlong *)(param_1 + 0x8d8) + (longlong)(iVar1 - iVar4) * 8),
                    (longlong)iVar4 << 3);
            iVar1 = *(int *)(param_1 + 0x8e0);
          }
          *(int *)(param_1 + 0x8e0) = iVar1 + -1;
          FUN_148123ba2(param_1 + 0x8d8);
        }
        break;
      }
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    if (*(int *)(param_1 + 0x8e0) != 0) goto LAB_148110c07;
  }
  FUN_14810e5a6(param_1,1);
LAB_148110c07:
  FUN_1448215fa(param_2);
  return;
}



// FUNCTION 148110c88 FUN_148110c88 body=79 status=ok
// SIG undefined FUN_148110c88(void)

void FUN_148110c88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  FUN_14485c47a(param_1 + 0x7b0);
  *(undefined8 *)(param_1 + 0x7b8) = param_3;
  *(undefined1 *)(param_1 + 0x7c0) = param_4;
  *(undefined1 *)(param_1 + 0x7c1) = param_5;
  *(undefined1 *)(param_1 + 0x7c2) = param_6;
  return;
}



// FUNCTION 148110cd8 FUN_148110cd8 body=255 status=ok
// SIG undefined FUN_148110cd8(void)

undefined8 * FUN_148110cd8(undefined8 *param_1,longlong param_2)

{
  FUN_1479ed704();
  *param_1 = &PTR_FUN_14ada5720;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0xf;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x3a] = &PTR_LAB_14adc1560;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 0xb9) != '\x01')) {
    FUN_1402ae190(param_1 + 0x3a,param_2 + 0x678);
    FUN_14043b6da(param_1 + 0x4b,param_2 + 0x700);
  }
  return param_1;
}



// FUNCTION 148110de8 FUN_148110de8 body=93 status=ok
// SIG undefined FUN_148110de8(void)

undefined8 * FUN_148110de8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_1481228e6(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148110e4c FUN_148110e4c body=255 status=ok
// SIG undefined FUN_148110e4c(void)

void FUN_148110e4c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14811df94(&local_38,param_1);
  local_48 = 0;
  uStack_40 = 0;
  FUN_14811e196(&local_48,(int)param_3[1]);
  if (0 < (int)param_3[1]) {
    lVar4 = 8;
    lVar5 = 0;
    do {
      lVar3 = *param_3;
      dVar1 = *(double *)(lVar3 + -8 + lVar4 * 2);
      dVar2 = *(double *)(lVar3 + lVar4 * 2);
      *(float *)(local_48 + -8 + lVar4) = (float)(*(double *)(lVar3 + -0x10 + lVar4 * 2) - local_38)
      ;
      *(float *)(local_48 + -4 + lVar4) = (float)(dVar1 - local_30);
      *(float *)(local_48 + lVar4) = (float)(dVar2 - local_28);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar5 < (int)param_3[1]);
  }
  local_58 = local_48;
  local_50 = (undefined4)uStack_40;
  FUN_14811e1de(param_1,param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148110f4c FUN_148110f4c body=629 status=ok
// SIG undefined FUN_148110f4c(void)

void FUN_148110f4c(int param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if (DAT_14c762830 == param_1) {
    if (*param_4 == '\0') {
      if ((*(int *)(param_4 + 8) == 0) && (DAT_14c762828 <= *(int *)(param_4 + 4))) {
        *param_4 = '\x01';
        uVar4 = *(undefined4 *)(param_4 + 0x10);
        FUN_1400021e4(&local_30,&local_50);
        puVar5 = local_50;
        if (local_48 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        pwVar3 = L"Potential componment leak System(%s) (Total:%d), please investigate.";
        goto LAB_148111006;
      }
    }
    else if ((param_4[1] == '\0') && (0 < *(int *)(param_4 + 8))) {
      param_4[1] = '\x01';
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      FUN_1400021e4(&local_30,&local_50);
      puVar5 = local_50;
      if (local_48 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      pwVar3 = L"Potential invalid component leak reported for System(%s) (Total:%d).";
LAB_148111006:
      FUN_140002266(local_40,pwVar3,puVar5,uVar4);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (DAT_14c76282c == param_1) {
    if (param_4[0x14] == '\0') {
      if ((*(int *)(param_4 + 0x1c) != 0) || (*(int *)(param_4 + 0x18) < DAT_14c762828))
      goto LAB_1481110f8;
      param_4[0x14] = '\x01';
      uVar4 = *(undefined4 *)(param_4 + 0x24);
      FUN_1400021e4(&local_30,&local_50);
      puVar5 = local_50;
      if (local_48 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      pwVar3 = L"Potential Active Component leak System(%s) (Active:%d), please investigate.";
    }
    else {
      if ((param_4[0x15] != '\0') || (*(int *)(param_4 + 0x1c) < 1)) goto LAB_1481110f8;
      param_4[0x15] = '\x01';
      uVar4 = *(undefined4 *)(param_4 + 0x24);
      FUN_1400021e4(&local_30,&local_50);
      puVar5 = local_50;
      if (local_48 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      pwVar3 = L"Potential invalid active component leak reported for System(%s) (Active: %d).";
    }
    FUN_140002266(local_40,pwVar3,puVar5,uVar4);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1481110f8:
  if ((((param_1 == 1) && (param_4[0x28] == '\0')) && (iVar1 = *(int *)(param_4 + 0x34), 0 < iVar1))
     && (iVar2 = *(int *)(param_4 + 0x30), iVar1 < iVar2)) {
    param_4[0x28] = '\x01';
    FUN_1400021e4(&local_30,&local_50);
    puVar5 = local_50;
    if (local_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    local_58 = iVar1;
    FUN_140002266(local_40,
                  L"Scalability instance count limit blown for System(%s) (Active: %d) (Limit: %d)."
                  ,puVar5,iVar2);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481111c8 FUN_1481111c8 body=128 status=ok
// SIG undefined FUN_1481111c8(void)

void FUN_1481111c8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *_Dst;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  iVar4 = (int)param_1[1];
  if (0 < (longlong)iVar4) {
    plVar2 = (longlong *)*param_1;
    if (*plVar2 == param_2) {
      iVar5 = -1;
      _Dst = plVar2;
    }
    else {
      lVar6 = 1;
      plVar7 = plVar2;
      do {
        if (iVar4 == lVar6) {
          return;
        }
        _Dst = plVar7 + 2;
        lVar6 = lVar6 + 1;
        plVar1 = plVar7 + 2;
        plVar7 = _Dst;
      } while (*plVar1 != param_2);
      iVar5 = -(int)lVar6;
    }
    iVar5 = iVar5 + iVar4;
    if (iVar5 != 0) {
      iVar3 = 1;
      if (iVar5 < 1) {
        iVar3 = iVar5;
      }
      memmove(_Dst,plVar2 + (ulonglong)(uint)(iVar4 - iVar3) * 2,(longlong)iVar3 << 4);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 + -1;
  }
  return;
}



// FUNCTION 148111248 FUN_148111248 body=118 status=ok
// SIG undefined FUN_148111248(void)

void FUN_148111248(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456fde5c(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148123678(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481112dc FUN_1481112dc body=306 status=ok
// SIG undefined FUN_1481112dc(void)

longlong * FUN_1481112dc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39f68) {
    FUN_144b3d300(&DAT_14cb39f68);
    if (DAT_14cb39f68 == -1) {
      uVar2 = FUN_144a7a812();
      DAT_14cb39f60 = thunk_FUN_140277b32(uVar2,0,L"/Script/CoreUObject",0);
      _Init_thread_footer(&DAT_14cb39f68);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39f78) {
    FUN_144b3d300(&DAT_14cb39f78);
    uVar2 = DAT_14cb39f60;
    if (DAT_14cb39f78 == -1) {
      uVar3 = FUN_1446f4bba();
      DAT_14cb39f70 = thunk_FUN_140277b32(uVar3,uVar2,L"Color",0);
      _Init_thread_footer(&DAT_14cb39f78);
    }
  }
  lVar1 = DAT_14cb39f70;
  *param_1 = DAT_14cb39f70;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined2 *)(param_1 + 1) = 2;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  FUN_140c6c26c(lVar1,0);
  return param_1;
}



// FUNCTION 14811140e FUN_14811140e body=306 status=ok
// SIG undefined FUN_14811140e(void)

longlong * FUN_14811140e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39f88) {
    FUN_144b3d300(&DAT_14cb39f88);
    if (DAT_14cb39f88 == -1) {
      uVar2 = FUN_144a7a812();
      DAT_14cb39f80 = thunk_FUN_140277b32(uVar2,0,L"/Script/CoreUObject",0);
      _Init_thread_footer(&DAT_14cb39f88);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39f98) {
    FUN_144b3d300(&DAT_14cb39f98);
    uVar2 = DAT_14cb39f80;
    if (DAT_14cb39f98 == -1) {
      uVar3 = FUN_1446f4bba();
      DAT_14cb39f90 = thunk_FUN_140277b32(uVar3,uVar2,L"Rotator",0);
      _Init_thread_footer(&DAT_14cb39f98);
    }
  }
  lVar1 = DAT_14cb39f90;
  *param_1 = DAT_14cb39f90;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined2 *)(param_1 + 1) = 2;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  FUN_140c6c26c(lVar1,0);
  return param_1;
}



// FUNCTION 148111540 FUN_148111540 body=22 status=ok
// SIG undefined FUN_148111540(void)

undefined8 FUN_148111540(undefined8 param_1)

{
  FUN_1481f96b0();
  return param_1;
}



// FUNCTION 148111556 FUN_148111556 body=22 status=ok
// SIG undefined FUN_148111556(void)

undefined8 FUN_148111556(undefined8 param_1)

{
  FUN_1481f96f2();
  return param_1;
}



// FUNCTION 14811156c FUN_14811156c body=22 status=ok
// SIG undefined FUN_14811156c(void)

undefined8 FUN_14811156c(undefined8 param_1)

{
  FUN_1481f9734();
  return param_1;
}



// FUNCTION 148111582 FUN_148111582 body=61 status=ok
// SIG undefined FUN_148111582(void)

longlong * FUN_148111582(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb42140;
  *param_1 = DAT_14cb42140;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = DAT_14cb42148;
  return param_1;
}



// FUNCTION 1481115c0 FUN_1481115c0 body=22 status=ok
// SIG undefined FUN_1481115c0(void)

undefined8 FUN_1481115c0(undefined8 param_1)

{
  FUN_1481f9c60();
  return param_1;
}



// FUNCTION 1481115d6 FUN_1481115d6 body=79 status=ok
// SIG undefined FUN_1481115d6(void)

void FUN_1481115d6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  uVar2 = FUN_144a799b0();
  lVar3 = FUN_14092e757(uVar2,uVar1,param_1,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x140) = lVar3;
  return;
}



// FUNCTION 14811162e FUN_14811162e body=271 status=ok
// SIG undefined FUN_14811162e(void)

undefined8 FUN_14811162e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((((lVar1 != 0) && (cVar3 = FUN_143abbf4c(lVar1 + 0x1d8), cVar3 != '\0')) &&
      ((*(byte *)(lVar1 + 0x370) & 2) != 0)) && (0 < *(int *)(param_1 + 0xb0))) {
    lVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar1 + 0x290) + 8 + lVar6 * 0x48) != -1) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + lVar6 * 8);
        if ((longlong)*(int *)(param_2 + 0x170) != 0) {
          lVar7 = *(longlong *)(param_2 + 0x168);
          lVar5 = (longlong)*(int *)(param_2 + 0x170) * 0xc;
          do {
            plVar4 = (longlong *)FUN_14479d2ce(lVar7);
            if (plVar4 == plVar2) {
              if (lVar7 != 0) {
                lVar7 = (longlong)*(int *)(lVar7 + 8) + *(longlong *)(param_2 + 0x138);
                goto LAB_1481116e2;
              }
              break;
            }
            lVar7 = lVar7 + 0xc;
            lVar5 = lVar5 + -0xc;
          } while (lVar5 != 0);
        }
        lVar7 = 0;
LAB_1481116e2:
        cVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
        if (cVar3 != '\0') {
          (**(code **)(*plVar2 + 0x2d0))
                    (plVar2,lVar6 * 0x48 + *(longlong *)(lVar1 + 0x290),lVar7,param_2);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xb0));
  }
  return 1;
}



// FUNCTION 14811173e FUN_14811173e body=131 status=ok
// SIG undefined FUN_14811173e(void)

undefined8 FUN_14811173e(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3ac88) {
    FUN_144b3d300(&DAT_14cb3ac88);
    if (DAT_14cb3ac88 == -1) {
      uVar1 = FUN_14001cc68(0x98,0x10);
      FUN_14812121c(uVar1);
      DAT_14cb3ac80 = uVar1;
      atexit(FUN_143a09163);
      _Init_thread_footer(&DAT_14cb3ac88);
    }
  }
  return DAT_14cb3ac80;
}



// FUNCTION 1481117c2 FUN_1481117c2 body=200 status=ok
// SIG undefined FUN_1481117c2(void)

void FUN_1481117c2(LPCRITICAL_SECTION param_1)

{
  _LIST_ENTRY *p_Var1;
  _LIST_ENTRY *p_Var2;
  DWORD DVar3;
  DWORD DVar4;
  HANDLE *ppvVar5;
  WORD *pWVar6;
  
  DVar3 = GetCurrentThreadId();
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar5 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar5 = param_1[2].LockSemaphore;
    }
    DVar4 = *(DWORD *)((longlong)ppvVar5 + (ulonglong)((int)param_1[2].SpinCount - 1U & DVar3) * 4);
    if (DVar4 != 0xffffffff) {
      do {
        pWVar6 = &(param_1[1].DebugInfo)->Type + (longlong)(int)DVar4 * 0x14;
        if (*(DWORD *)pWVar6 == DVar3) goto LAB_148111805;
        DVar4 = *(DWORD *)(pWVar6 + 0x10);
      } while (DVar4 != 0xffffffff);
    }
  }
  pWVar6 = (WORD *)0x0;
LAB_148111805:
  p_Var2 = ((LIST_ENTRY *)(pWVar6 + 8))->Flink[(longlong)(int)*(DWORD *)(pWVar6 + 0xc) + -1].Flink;
  p_Var1 = ((LIST_ENTRY *)(pWVar6 + 8))->Flink + (longlong)(int)*(DWORD *)(pWVar6 + 0xc) + -1;
  p_Var1->Flink = (_LIST_ENTRY *)0x0;
  p_Var1->Blink = (_LIST_ENTRY *)0x0;
  FUN_14101da94((LIST_ENTRY *)(pWVar6 + 8),*(DWORD *)(pWVar6 + 0xc) - 1);
  FUN_140b12644((LIST_ENTRY *)(pWVar6 + 8));
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8(p_Var2);
  }
  FUN_14812154a(param_1);
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014811185b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 14811188e FUN_14811188e body=22 status=ok
// SIG undefined FUN_14811188e(void)

undefined8 FUN_14811188e(undefined8 param_1,undefined8 param_2)

{
  FUN_1401729b4();
  return param_2;
}



// FUNCTION 1481118a8 FUN_1481118a8 body=59 status=ok
// SIG undefined FUN_1481118a8(void)

longlong FUN_1481118a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148123c46(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_148123c3d(lVar2);
  return lVar2;
}



// FUNCTION 1481118fa FUN_1481118fa body=511 status=ok
// SIG undefined FUN_1481118fa(void)

void FUN_1481118fa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_77;
  uint uStack_73;
  int local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 uStack_47;
  uint uStack_43;
  undefined3 uStack_3f;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_60 = 0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_48 = (undefined1)DAT_14c8464f0;
  uStack_47 = (undefined4)((ulonglong)DAT_14c8464f0 >> 8);
  uStack_43 = (uint)(uint3)((ulonglong)DAT_14c8464f0 >> 0x28);
  uStack_3f = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_60;
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uStack_78 = local_48;
  uStack_77 = uStack_47;
  uStack_73 = uStack_43;
  uStack_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  uVar2 = FUN_148111afa(local_30,local_38,&local_90,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148111afa FUN_148111afa body=203 status=ok
// SIG undefined FUN_148111afa(void)

undefined4 FUN_148111afa(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0x28), lVar2 != 0)) {
    local_58 = *param_3;
    if ((local_58 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_48 = (undefined4)param_3[2];
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_3f = *(undefined4 *)((longlong)param_3 + 0x19);
    uStack_3b = *(undefined4 *)((longlong)param_3 + 0x1d);
    uStack_40 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x15) >> 0x18);
    lVar2 = FUN_1481152e4(param_1,lVar2,&local_58,param_4);
    if ((lVar2 != 0) && (uVar3 = 0, *(longlong *)(lVar2 + 0x28) != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x10);
      if (*(char *)(lVar2 + 0x38) == '\x01') {
        uVar3 = *(undefined4 *)(lVar1 + 0x24);
      }
      else {
        uVar3 = *(undefined4 *)(lVar1 + 0x20);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148111bc6 FUN_148111bc6 body=251 status=ok
// SIG undefined FUN_148111bc6(void)

void FUN_148111bc6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14811517c(local_20,*(undefined8 *)(local_28 + 0x28));
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148111cc8 FUN_148111cc8 body=512 status=ok
// SIG undefined FUN_148111cc8(void)

void FUN_148111cc8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_77;
  uint uStack_73;
  int local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 uStack_47;
  uint uStack_43;
  undefined3 uStack_3f;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_60 = 0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_48 = (undefined1)DAT_14c8464f0;
  uStack_47 = (undefined4)((ulonglong)DAT_14c8464f0 >> 8);
  uStack_43 = (uint)(uint3)((ulonglong)DAT_14c8464f0 >> 0x28);
  uStack_3f = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_60;
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uStack_78 = local_48;
  uStack_77 = uStack_47;
  uStack_73 = uStack_43;
  uStack_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  uVar2 = FUN_148111eca(local_30,local_38,&local_90,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148111eca FUN_148111eca body=146 status=ok
// SIG undefined FUN_148111eca(void)

undefined8 FUN_148111eca(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_50 = *param_3;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_48 = (undefined4)param_3[1];
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_40 = (undefined4)param_3[2];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_37 = *(undefined4 *)((longlong)param_3 + 0x19);
    uStack_33 = *(undefined4 *)((longlong)param_3 + 0x1d);
    uStack_38 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x15) >> 0x18);
    uVar1 = FUN_1481152e4(param_1,*(undefined8 *)(param_2 + 0x28),&local_50,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148111f64 FUN_148111f64 body=598 status=ok
// SIG undefined FUN_148111f64(void)

void FUN_148111f64(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [35];
  undefined1 local_55;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_50 = 0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_55 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_55);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_55);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481121ce FUN_1481121ce body=894 status=ok
// SIG undefined FUN_1481121ce(void)

void FUN_1481121ce(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined4 uStack_a7;
  uint uStack_a3;
  longlong local_98 [3];
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 uStack_57;
  uint uStack_53;
  undefined3 uStack_4f;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_70 = 0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  local_58 = (undefined1)DAT_14c8464f0;
  uStack_57 = (undefined4)((ulonglong)DAT_14c8464f0 >> 8);
  uStack_53 = (uint)(uint3)((ulonglong)DAT_14c8464f0 >> 0x28);
  uStack_4f = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar3 = local_78;
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  iVar1 = local_80;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  uVar4 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_70;
  if ((local_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uStack_a8 = local_58;
  uStack_a7 = uStack_57;
  uStack_a3 = uStack_53;
  uStack_b8 = local_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  local_d0 = iVar2 != 0;
  local_c8 = iVar1 != 0;
  local_d8 = iVar3 != 0;
  uVar5 = FUN_14811254e(local_40,local_48,&local_c0,uVar4);
  *param_3 = uVar5;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811254e FUN_14811254e body=198 status=ok
// SIG undefined FUN_14811254e(void)

undefined8
FUN_14811254e(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_68 = *param_3;
    if ((local_68 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_60 = (undefined4)param_3[1];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_58 = (undefined4)param_3[2];
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_4f = *(undefined4 *)((longlong)param_3 + 0x19);
    uStack_4b = *(undefined4 *)((longlong)param_3 + 0x1d);
    uStack_50 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x15) >> 0x18);
    local_78 = param_7;
    local_80 = param_6;
    local_88 = param_5;
    uVar1 = FUN_1481151cc(param_1,*(undefined8 *)(param_2 + 0x28),&local_68,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148112628 FUN_148112628 body=599 status=ok
// SIG undefined FUN_148112628(void)

void FUN_148112628(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148112884 FUN_148112884 body=378 status=ok
// SIG undefined FUN_148112884(void)

void FUN_148112884(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined1 local_60 [20];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148123ccc();
  iVar3 = (int)param_2[1];
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_1 + 0x5c) < iVar3) {
    FUN_148123e54(param_1 + 10);
    iVar3 = (int)param_2[1];
  }
  if (iVar3 != 0) {
    lVar5 = (longlong)iVar3 * 0xc;
    lVar4 = *param_2 + 8;
    do {
      uVar1 = FUN_144741050(lVar4);
      FUN_1481f98ca(local_60,uVar1);
      local_70 = *(undefined8 *)(lVar4 + -8);
      local_68[0] = FUN_144830b78(local_68,local_60);
      local_88 = &local_70;
      FUN_148123ec4(param_1,&local_4c,&local_88);
      *(uint *)(*param_1 + 0xc + (longlong)local_4c * 0x18) =
           ~*(uint *)((longlong)param_1 + 0x34) + (int)param_1[1];
      ppuVar2 = (undefined8 **)FUN_148112a00(param_1 + 10);
      FUN_148112a40(&local_88,local_60);
      *ppuVar2 = local_88;
      if (ppuVar2 == &local_88) {
        if (local_80 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (ppuVar2[1] != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        ppuVar2[1] = local_80;
        local_80 = (undefined8 *)0x0;
        *(undefined4 *)(ppuVar2 + 2) = local_78;
        *(undefined4 *)((longlong)ppuVar2 + 0x14) = local_74;
      }
      lVar4 = lVar4 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148112a00 FUN_148112a00 body=63 status=ok
// SIG undefined FUN_148112a00(void)

longlong FUN_148112a00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148124496(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_148124487(lVar2);
  return lVar2;
}



// FUNCTION 148112a40 FUN_148112a40 body=459 status=ok
// SIG undefined FUN_148112a40(void)

undefined8 * FUN_148112a40(undefined8 *param_1,ulonglong *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  void *_Src;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar5 = FUN_14577e4bc();
  AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x2198));
  uVar2 = *(undefined1 *)((longlong)param_2 + 10);
  uVar3 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = FUN_144a78877(uVar3 >> 0x10 ^ uVar3,(short)param_2[1]);
  uVar3 = FUN_144a78877(uVar4,uVar2);
  if (*(int *)(lVar5 + 0x20b0) != *(int *)(lVar5 + 0x20dc)) {
    lVar8 = lVar5 + 0x20e0;
    if (*(longlong *)(lVar5 + 0x20e8) != 0) {
      lVar8 = *(longlong *)(lVar5 + 0x20e8);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar5 + 0x20f0) - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      do {
        lVar8 = *(longlong *)(lVar5 + 0x20a8) + (longlong)iVar6 * 0x10;
        if (*(uint *)(*(longlong *)(lVar5 + 0x20a8) + (longlong)iVar6 * 0x10) == uVar3) {
          if (((uint *)(lVar8 + 4) != (uint *)0x0 && lVar8 != 0) &&
             (*(int *)(lVar5 + 0x2150) != *(int *)(lVar5 + 0x217c))) {
            uVar3 = *(uint *)(lVar8 + 4);
            lVar8 = lVar5 + 0x2180;
            if (*(longlong *)(lVar5 + 0x2188) != 0) {
              lVar8 = *(longlong *)(lVar5 + 0x2188);
            }
            uVar7 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar5 + 0x2190) - 1U & uVar3) * 4);
            if (uVar7 != 0xffffffff) {
              goto LAB_148112b86;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar8 + 8);
      } while (iVar6 != -1);
    }
  }
  goto LAB_148112ab8;
  while (uVar7 = puVar1[8], uVar7 != 0xffffffff) {
LAB_148112b86:
    puVar1 = (uint *)(*(longlong *)(lVar5 + 0x2148) + (longlong)(int)uVar7 * 0x28);
    if (*puVar1 == uVar3) {
      if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) != 0) {
        *param_1 = *(undefined8 *)(puVar1 + 2);
        param_1[1] = 0;
        uVar3 = puVar1[6];
        _Src = *(void **)(puVar1 + 4);
        *(uint *)(param_1 + 2) = uVar3;
        if ((longlong)(int)uVar3 == 0) {
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        }
        else {
          FUN_145cec054(param_1 + 1,uVar3,0);
          memcpy((void *)param_1[1],_Src,(longlong)(int)uVar3 * 0x14);
        }
        goto LAB_148112ac6;
      }
      break;
    }
  }
LAB_148112ab8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_148112ac6:
  ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x2198));
  return param_1;
}



// FUNCTION 148112c0c FUN_148112c0c body=478 status=ok
// SIG undefined FUN_148112c0c(void)

void FUN_148112c0c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14485c47a(param_1 + 0x28);
  FUN_148112dec(param_2,&local_80);
  lVar5 = CONCAT44(uStack_74,local_78);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x30) = local_80;
  *(longlong *)(param_1 + 0x38) = lVar5;
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
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  lVar5 = *(longlong *)(param_1 + 0x30);
  plVar4 = (longlong *)(param_1 + 0x10);
  FUN_148085a06(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14812452a(plVar4);
  }
  plVar2 = (longlong *)(lVar5 + 0xa0);
  FUN_148112f36(plVar4,*(int *)(lVar5 + 0xa8) - *(int *)(lVar5 + 0xd4));
  lVar3 = lVar5 + 0xb0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar3;
  if (*(int *)(lVar5 + 200) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(lVar5 + 200);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar2;
  if ((iStack_44 != iVar6) || (uStack_50 != lVar3)) {
    do {
      FUN_148112fb2((longlong)*(int *)(*local_80 + (longlong)iStack_64 * 0x18 + 0xc) * 0x28 +
                    *plVar4);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar2 || (CONCAT44(uStack_6c,uStack_70) != lVar3 || iStack_64 != iVar6));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148112dec FUN_148112dec body=329 status=ok
// SIG undefined FUN_148112dec(void)

longlong * FUN_148112dec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) goto LAB_148112e13;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14adbc1d0;
  plVar5 = plVar4 + 2;
  FUN_148114e72(plVar5,param_1);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_148124b64(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
LAB_148112ece:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148112efb:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x40) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000148112efb;
      }
    }
    else {
      *(longlong **)(param_1 + 0x48) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148112ece;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
LAB_148112e13:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x48);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148112f36 FUN_148112f36 body=122 status=ok
// SIG undefined FUN_148112f36(void)

void FUN_148112f36(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148124578(param_1,iVar1);
    }
    FUN_14812455a((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14812460c(param_1,param_2,iVar1 - param_2);
    FUN_14812466e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148112fb2 FUN_148112fb2 body=176 status=ok
// SIG undefined FUN_148112fb2(void)

void FUN_148112fb2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_144741050(param_2 + 8);
  lVar1 = DAT_14cb42130;
  if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb42130);
  }
  if (((*plVar3 == lVar1) && ((short)plVar3[1] == DAT_14cb42138)) &&
     (*(char *)((longlong)plVar3 + 10) == DAT_14cb4213a)) {
    puVar4 = local_38;
    FUN_1408c4b2a(puVar4);
  }
  else {
    puVar4 = (undefined1 *)FUN_144741050(param_2 + 8);
  }
  uVar2 = FUN_144a81174(puVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148113064 FUN_148113064 body=169 status=ok
// SIG undefined FUN_148113064(void)

void FUN_148113064(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14479d2ce(param_1 + 0x28);
  cVar1 = *(char *)(lVar5 + 0x38);
  uVar4 = 0;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x28;
    do {
      if (cVar1 != '\0') {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *puVar6 = puVar6[2];
        puVar6[1] = puVar6[3];
        local_38._0_4_ = (undefined4)uVar2;
        local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_30._0_4_ = (undefined4)uVar3;
        uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        *(undefined4 *)(puVar6 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_38._4_4_;
        *(undefined4 *)(puVar6 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_30._4_4_;
        local_38 = uVar2;
        uStack_30 = uVar3;
      }
      *(undefined4 *)(puVar6 + 1) = 0;
      if (*(int *)((longlong)puVar6 + 0xc) < 0) {
        FUN_144893a1c(puVar6,0);
      }
      puVar6 = puVar6 + 5;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811310e FUN_14811310e body=68 status=ok
// SIG undefined FUN_14811310e(void)

void FUN_14811310e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x20) = param_2;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = (longlong)*(int *)(param_1 + 0x18) * 0x28;
    do {
      FUN_1401211f6(lVar2,*(int *)(lVar2 + 0x20) * param_2,1);
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148113152 FUN_148113152 body=78 status=ok
// SIG undefined FUN_148113152(void)

void FUN_148113152(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x28;
    do {
      iVar1 = *(int *)(lVar3 + 0x20) * param_2;
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar1);
      }
      if (*(int *)(lVar3 + 0xc) < iVar1) {
        FUN_144893a1c(lVar3);
      }
      lVar3 = lVar3 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1481131a2 FUN_1481131a2 body=579 status=ok
// SIG undefined FUN_1481131a2(void)

longlong FUN_1481131a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  short sVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x30);
  plVar1 = (longlong *)(lVar4 + 0xa0);
  local_a0 = (longlong *)FUN_144741050(param_2 + 1);
  lVar9 = lVar4 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar9;
  if (*(int *)(lVar4 + 200) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(lVar4 + 200);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  lVar4 = param_1;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (lVar4 = param_1, uStack_60 != lVar9)) {
    do {
      local_98 = lVar4;
      lVar4 = *local_90;
      lVar6 = (longlong)iStack_74;
      plVar2 = (longlong *)(lVar4 + lVar6 * 0x18);
      plVar7 = (longlong *)FUN_144741050(plVar2 + 1);
      if (*param_2 == *plVar2) {
        iVar3 = *(int *)(lVar4 + 0xc + lVar6 * 0x18);
        lVar4 = *plVar7;
        if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        lVar5 = DAT_14cb420d0;
        lVar6 = *local_a0;
        if (lVar6 == lVar4) {
          sVar8 = (short)plVar7[1];
          if (((short)local_a0[1] != (short)plVar7[1]) ||
             (sVar8 = (short)local_a0[1],
             *(char *)((longlong)local_a0 + 10) != *(char *)((longlong)plVar7 + 10)))
          goto LAB_1481132e7;
LAB_1481133d0:
          lVar9 = (longlong)iVar3 * 0x28 + *(longlong *)(local_98 + 0x10);
          goto LAB_14811325d;
        }
        sVar8 = (short)plVar7[1];
LAB_1481132e7:
        if (sVar8 == 3) {
          if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb420d0);
            lVar6 = *local_a0;
          }
          if (((lVar6 == lVar5) && ((short)local_a0[1] == DAT_14cb420d8)) &&
             (*(char *)((longlong)local_a0 + 10) == DAT_14cb420da)) goto LAB_1481133d0;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      lVar4 = local_98;
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar9 || iStack_74 != iVar10));
  }
  lVar9 = 0;
LAB_14811325d:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 1481133e6 FUN_1481133e6 body=1546 status=ok
// SIG undefined FUN_1481133e6(void)

void FUN_1481133e6(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
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
  char cVar16;
  longlong lVar17;
  undefined8 uVar18;
  code *pcVar19;
  longlong *plVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  longlong local_198;
  uint local_190 [2];
  undefined8 local_188;
  undefined4 local_180 [2];
  longlong *local_178;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  ulonglong uStack_158;
  int local_14c;
  longlong local_148;
  int local_13c;
  undefined8 local_138;
  undefined8 local_130;
  code *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  local_1b0 = param_4;
  local_148 = param_2;
  local_13c = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3a718) && (FUN_144b3d300(&DAT_14cb3a718), DAT_14cb3a718 == -1)) {
    DAT_14cb3a708 = 0;
    uRam000000014cb3a710 = 0;
    atexit((_func_5014 *)&LAB_143a049a7);
    _Init_thread_footer(&DAT_14cb3a718);
  }
  local_14c = *(int *)(param_1 + 0x20);
  plVar20 = local_160;
  if (local_14c != 0) {
    *(int *)(param_2 + 0x120) = local_14c + param_3;
    lVar24 = *(longlong *)(param_1 + 0x30);
    local_1b8 = (longlong *)(lVar24 + 0xa0);
    lVar1 = lVar24 + 0xb0;
    local_e8 = (code *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    uStack_e0 = lVar1;
    if (*(int *)(lVar24 + 200) == 0) {
      iVar22 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar22 = *(int *)(lVar24 + 200);
    }
    local_160 = local_d8;
    plVar20 = local_160;
    uStack_158 = uStack_d0;
    local_170 = (undefined4)local_e8;
    uStack_16c = local_e8._4_4_;
    uStack_168 = (undefined4)uStack_e0;
    uStack_164 = uStack_e0._4_4_;
    local_178 = local_1b8;
    local_160._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    if ((local_160._4_4_ != iVar22) || (uStack_e0 != lVar1)) {
      iVar23 = local_160._4_4_;
      local_160 = plVar20;
      do {
        lVar24 = *local_178;
        lVar17 = (longlong)iVar23;
        local_180[0] = *(undefined4 *)(lVar24 + 8 + lVar17 * 0x18);
        local_188 = *(undefined8 *)(lVar24 + lVar17 * 0x18);
        pcVar3 = *(code **)(*(longlong *)(param_1 + 0x10) +
                           (longlong)*(int *)(lVar24 + 0xc + lVar17 * 0x18) * 0x28);
        local_190[0] = *(uint *)(lVar24 + 8 + lVar17 * 0x18);
        local_198 = *(longlong *)(lVar24 + lVar17 * 0x18);
        uVar18 = FUN_144741050(local_180);
        cVar16 = FUN_144a644ea(uVar18);
        if (cVar16 != '\0') {
          uVar18 = FUN_144741050(local_180);
          uVar18 = FUN_144a811ba(uVar18);
          pcVar19 = (code *)FUN_140c6c286(uVar18,1);
          local_e8 = pcVar19;
          if ((pcVar19 != (code *)0x0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(pcVar19);
          }
          uStack_e0 = CONCAT53(uStack_e0._3_5_,2);
          uStack_e0 = CONCAT44(0xffffffff,(undefined4)uStack_e0);
          FUN_140c6c26c(pcVar19,0);
          local_190[0] = FUN_144830b78(&local_128,&local_e8);
        }
        plVar20 = (longlong *)FUN_144741050(local_180);
        lVar24 = DAT_14cb42130;
        if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42130);
        }
        if (((*plVar20 == lVar24) && ((short)plVar20[1] == DAT_14cb42138)) &&
           (*(char *)((longlong)plVar20 + 10) == DAT_14cb4213a)) {
          FUN_1408c4b2a(&local_e8);
          local_180[0] = FUN_144830b78(&local_128,&local_e8);
        }
        if ((longlong)(int)plVar2[1] != 0) {
          lVar24 = 0;
          do {
            if ((*(longlong *)(*plVar2 + lVar24) == local_198) &&
               (*(uint *)(*plVar2 + 8 + lVar24) == local_190[0])) {
              iVar23 = (int)(lVar24 >> 2) * -0x55555555;
              if (iVar23 != -1) {
                uVar18 = FUN_144741050(local_180);
                local_19c = FUN_144a81174(uVar18);
                uVar18 = FUN_144741050(local_190);
                FUN_144a81174(uVar18);
                lVar24 = plVar2[2];
                lVar17 = (longlong)iVar23 * 0x20;
                local_1a0 = (uint)*(ushort *)(lVar24 + lVar17);
                local_1a4 = (uint)*(ushort *)(lVar24 + 2 + lVar17);
                local_1a8 = (uint)*(ushort *)(lVar24 + 4 + lVar17);
                local_e8 = (code *)0x0;
                local_d8 = (longlong *)0x0;
                local_128 = (code *)0x0;
                local_118 = (longlong *)0x0;
                plVar20 = (longlong *)FUN_14001cc68(0x50,8);
                local_118 = local_d8;
                pcVar19 = local_e8;
                *plVar20 = (longlong)&PTR_FUN_14adbbf30;
                plVar20[1] = (longlong)&local_148;
                plVar20[2] = (longlong)&local_1a0;
                plVar20[3] = (longlong)&local_13c;
                plVar20[4] = (longlong)&local_14c;
                plVar20[5] = (longlong)&local_19c;
                plVar20[6] = local_1b0;
                plVar20[7] = (longlong)&local_1a8;
                plVar20[8] = (longlong)&local_1a4;
                plVar20[9] = (longlong)&local_e8;
                if (plVar20 + 1 != (longlong *)0x0) {
                  local_128 = FUN_143a0a450;
                }
                uVar4 = (undefined4)uStack_e0;
                uVar5 = uStack_e0._4_4_;
                uVar6 = (undefined4)uStack_d0;
                uVar7 = uStack_d0._4_4_;
                uVar8 = (undefined4)local_c8;
                uVar9 = local_c8._4_4_;
                uVar10 = (undefined4)uStack_c0;
                uVar11 = uStack_c0._4_4_;
                uVar12 = (undefined4)local_b8;
                uVar13 = local_b8._4_4_;
                uVar14 = (undefined4)uStack_b0;
                uVar15 = uStack_b0._4_4_;
                local_e8 = local_128;
                uStack_e0 = CONCAT44(uStack_11c,uStack_120);
                local_d8 = plVar20;
                uStack_d0 = CONCAT44(uStack_10c,uStack_110);
                local_c8 = CONCAT44(uStack_104,local_108);
                uStack_c0 = CONCAT44(uStack_fc,uStack_100);
                local_b8 = CONCAT44(uStack_f4,local_f8);
                uStack_b0 = CONCAT44(uStack_ec,uStack_f0);
                local_128 = pcVar19;
                uStack_120 = uVar4;
                uStack_11c = uVar5;
                uStack_110 = uVar6;
                uStack_10c = uVar7;
                local_108 = uVar8;
                uStack_104 = uVar9;
                uStack_100 = uVar10;
                uStack_fc = uVar11;
                local_f8 = uVar12;
                uStack_f4 = uVar13;
                uStack_f0 = uVar14;
                uStack_ec = uVar15;
                if (pcVar19 != (code *)0x0) {
                  plVar20 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                }
                uVar18 = FUN_144741050(local_190);
                uVar18 = FUN_144a64b50(uVar18);
                uVar21 = FUN_144741050(local_180);
                local_138 = FUN_144a64b50(uVar21);
                pcVar19 = local_e8;
                plVar20 = local_d8;
                if (local_d8 == (longlong *)0x0) {
                  plVar20 = &local_c8;
                }
                local_130 = uVar18;
                local_128 = pcVar3;
                uVar18 = (**(code **)(*plVar20 + 8))();
                (*pcVar19)(uVar18,&local_138,&local_130,&local_128);
                if (local_e8 != (code *)0x0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = &local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                }
              }
              break;
            }
            lVar24 = lVar24 + 0xc;
          } while ((longlong)(int)plVar2[1] * 0xc != lVar24);
        }
        local_160 = (longlong *)CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_16c);
        FUN_1449c0562(&local_170);
        iVar23 = local_160._4_4_;
        plVar20 = local_160;
      } while (local_178 != local_1b8 ||
               (CONCAT44(uStack_164,uStack_168) != lVar1 || local_160._4_4_ != iVar22));
    }
  }
  local_160 = plVar20;
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481139f2 FUN_1481139f2 body=146 status=ok
// SIG undefined FUN_1481139f2(void)

void FUN_1481139f2(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x18);
  if (0 < (longlong)iVar1) {
    lVar4 = *(longlong *)(param_2 + 0x10);
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(lVar4 + 8 + lVar6);
      if ((longlong)(int)uVar2 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x10);
        iVar3 = *(int *)(lVar5 + 8 + lVar6);
        *(uint *)(lVar5 + 8 + lVar6) = iVar3 + uVar2;
        if ((uint)(*(int *)(lVar5 + 0xc + lVar6) - iVar3) < uVar2) {
          FUN_1447403be((longlong *)(lVar5 + lVar6),iVar3);
        }
        memcpy((void *)((longlong)iVar3 + *(longlong *)(lVar5 + lVar6)),*(void **)(lVar4 + lVar6),
               (longlong)(int)uVar2);
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar6);
  }
  return;
}



// FUNCTION 148113a84 FUN_148113a84 body=1564 status=ok
// SIG undefined FUN_148113a84(void)

void FUN_148113a84(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  char cVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined8 uVar20;
  code *pcVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 uVar25;
  int iVar26;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1ac;
  longlong local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  int local_194;
  longlong local_190;
  int local_188 [2];
  longlong local_180;
  int local_178 [2];
  longlong *local_170;
  undefined4 local_168;
  uint uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  longlong lStack_150;
  int local_144;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  code *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  local_1a8 = param_3;
  local_140 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3a730) && (FUN_144b3d300(&DAT_14cb3a730), DAT_14cb3a730 == -1)) {
    DAT_14cb3a720 = 0;
    uRam000000014cb3a728 = 0;
    atexit((_func_5014 *)&LAB_143a049b8);
    _Init_thread_footer(&DAT_14cb3a730);
  }
  local_144 = *(int *)(param_2 + 0x120);
  local_1ac = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = local_144 + local_1ac;
  lVar3 = *(longlong *)(param_1 + 0x30);
  local_1b8 = (longlong *)(lVar3 + 0xa0);
  lVar1 = lVar3 + 0xb0;
  local_e8 = (code *)&DAT_100000000;
  local_d8 = (longlong *)&DAT_ffffffff;
  uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
  uStack_e0 = lVar1;
  if (*(int *)(lVar3 + 200) == 0) {
    iVar26 = 0;
  }
  else {
    FUN_1449c0562(&local_e8);
    iVar26 = *(int *)(lVar3 + 200);
  }
  local_158 = local_d8;
  plVar24 = local_158;
  lStack_150 = uStack_d0;
  local_168 = (undefined4)local_e8;
  uStack_164 = local_e8._4_4_;
  uStack_160 = (undefined4)uStack_e0;
  uStack_15c = uStack_e0._4_4_;
  local_170 = local_1b8;
  local_158._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
  if ((local_158._4_4_ != iVar26) || (uStack_e0 != lVar1)) {
    iVar17 = local_158._4_4_;
    local_158 = plVar24;
    do {
      lVar3 = *local_170;
      lVar19 = (longlong)iVar17;
      local_178[0] = *(int *)(lVar3 + 8 + lVar19 * 0x18);
      local_180 = *(longlong *)(lVar3 + lVar19 * 0x18);
      plVar24 = (longlong *)
                (*(longlong *)(param_1 + 0x10) +
                (longlong)*(int *)(lVar3 + 0xc + lVar19 * 0x18) * 0x28);
      FUN_1401211f6(plVar24,(int)plVar24[4] * *(int *)(param_1 + 0x20),1);
      local_188[0] = local_178[0];
      local_190 = local_180;
      uVar20 = FUN_144741050(local_178);
      cVar16 = FUN_144a644ea(uVar20);
      if (cVar16 != '\0') {
        uVar20 = FUN_144741050(local_178);
        uVar20 = FUN_144a64b50(uVar20);
        pcVar21 = (code *)FUN_140c6c286(uVar20,1);
        local_e8 = pcVar21;
        if ((pcVar21 != (code *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(pcVar21);
        }
        uStack_e0 = CONCAT53(uStack_e0._3_5_,2);
        uStack_e0 = CONCAT44(0xffffffff,(undefined4)uStack_e0);
        FUN_140c6c26c(pcVar21,0);
        local_188[0] = FUN_144830b78(&local_128,&local_e8);
      }
      plVar22 = (longlong *)FUN_144741050(local_178);
      lVar3 = DAT_14cb42130;
      if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42130);
      }
      if (((*plVar22 == lVar3) && ((short)plVar22[1] == DAT_14cb42138)) &&
         (*(char *)((longlong)plVar22 + 10) == DAT_14cb4213a)) {
        FUN_1408c4b2a(&local_e8);
        local_178[0] = FUN_144830b78(&local_128,&local_e8);
      }
      uVar20 = FUN_144741050(local_178);
      iVar17 = FUN_144a81174(uVar20);
      local_194 = iVar17;
      if ((longlong)(int)plVar2[1] != 0) {
        lVar3 = *plVar24;
        lVar19 = 0;
        do {
          if ((*(longlong *)(*plVar2 + lVar19) == local_190) &&
             (*(int *)(*plVar2 + 8 + lVar19) == local_188[0])) {
            iVar18 = (int)(lVar19 >> 2) * -0x55555555;
            if (iVar18 != -1) {
              lVar19 = plVar2[2];
              lVar23 = (longlong)iVar18 * 0x20;
              local_198 = (uint)*(ushort *)(lVar19 + lVar23);
              local_19c = (uint)*(ushort *)(lVar19 + 2 + lVar23);
              local_1a0 = (uint)*(ushort *)(lVar19 + 4 + lVar23);
              local_e8 = (code *)0x0;
              local_d8 = (longlong *)0x0;
              local_128 = (code *)0x0;
              local_118 = (longlong *)0x0;
              plVar24 = (longlong *)FUN_14001cc68(0x48,8);
              local_118 = local_d8;
              pcVar21 = local_e8;
              *plVar24 = (longlong)&PTR_FUN_14adbbf50;
              plVar24[1] = (longlong)&local_140;
              plVar24[2] = (longlong)&local_198;
              plVar24[3] = (longlong)&local_144;
              plVar24[4] = (longlong)&local_194;
              plVar24[5] = local_1a8;
              plVar24[6] = (longlong)&local_1a0;
              plVar24[7] = (longlong)&local_19c;
              plVar24[8] = (longlong)&local_e8;
              if (plVar24 + 1 != (longlong *)0x0) {
                local_128 = FUN_143a0b02e;
              }
              uVar4 = (undefined4)uStack_e0;
              uVar5 = uStack_e0._4_4_;
              uVar6 = (undefined4)uStack_d0;
              uVar7 = uStack_d0._4_4_;
              uVar8 = (undefined4)local_c8;
              uVar9 = local_c8._4_4_;
              uVar10 = (undefined4)uStack_c0;
              uVar11 = uStack_c0._4_4_;
              uVar12 = (undefined4)local_b8;
              uVar13 = local_b8._4_4_;
              uVar14 = (undefined4)uStack_b0;
              uVar15 = uStack_b0._4_4_;
              local_e8 = local_128;
              uStack_e0 = CONCAT44(uStack_11c,uStack_120);
              local_d8 = plVar24;
              uStack_d0 = CONCAT44(uStack_10c,uStack_110);
              local_c8 = CONCAT44(uStack_104,local_108);
              uStack_c0 = CONCAT44(uStack_fc,uStack_100);
              local_b8 = CONCAT44(uStack_f4,local_f8);
              uStack_b0 = CONCAT44(uStack_ec,uStack_f0);
              local_128 = pcVar21;
              uStack_120 = uVar4;
              uStack_11c = uVar5;
              uStack_110 = uVar6;
              uStack_10c = uVar7;
              local_108 = uVar8;
              uStack_104 = uVar9;
              uStack_100 = uVar10;
              uStack_fc = uVar11;
              local_f8 = uVar12;
              uStack_f4 = uVar13;
              uStack_f0 = uVar14;
              uStack_ec = uVar15;
              if (pcVar21 != (code *)0x0) {
                plVar24 = local_118;
                if (local_118 == (longlong *)0x0) {
                  plVar24 = (longlong *)&local_108;
                }
                (**(code **)(*plVar24 + 0x10))();
              }
              iVar17 = iVar17 * local_1ac;
              uVar20 = FUN_144741050(local_178);
              uVar20 = FUN_144a64b50(uVar20);
              uVar25 = FUN_144741050(local_188);
              local_138 = FUN_144a64b50(uVar25);
              pcVar21 = local_e8;
              plVar24 = local_d8;
              if (local_d8 == (longlong *)0x0) {
                plVar24 = &local_c8;
              }
              local_130 = uVar20;
              local_128 = (code *)(lVar3 + iVar17);
              uVar20 = (**(code **)(*plVar24 + 8))();
              (*pcVar21)(uVar20,&local_138,&local_130,&local_128);
              if (local_e8 != (code *)0x0) {
                plVar24 = local_d8;
                if (local_d8 == (longlong *)0x0) {
                  plVar24 = &local_c8;
                }
                (**(code **)(*plVar24 + 0x10))();
              }
            }
            break;
          }
          lVar19 = lVar19 + 0xc;
        } while ((longlong)(int)plVar2[1] * 0xc != lVar19);
      }
      local_158 = (longlong *)CONCAT44(local_158._4_4_,(uint)local_158 & ~uStack_164);
      FUN_1449c0562(&local_168);
      iVar17 = local_158._4_4_;
      plVar24 = local_158;
    } while (local_170 != local_1b8 ||
             (CONCAT44(uStack_15c,uStack_160) != lVar1 || local_158._4_4_ != iVar26));
  }
  local_158 = plVar24;
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481140a2 FUN_1481140a2 body=409 status=ok
// SIG undefined FUN_1481140a2(void)

void FUN_1481140a2(longlong param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  void *_Src;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x30);
  lVar8 = *param_2;
  uVar6 = (uint)((ulonglong)lVar8 >> 0x10);
  uVar10 = (uint)lVar8 & 0xffff;
  puVar7 = (ulonglong *)FUN_144741050(param_2 + 1);
  uVar3 = *(undefined1 *)((longlong)puVar7 + 10);
  uVar4 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,(short)puVar7[1]);
  uVar5 = FUN_144a78877(uVar5,uVar3);
  uVar6 = FUN_144a78877(uVar5,((uint)lVar8 << 0x10 | uVar10) + (int)((ulonglong)lVar8 >> 0x20) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4));
  if (*(int *)(lVar9 + 0xa8) != *(int *)(lVar9 + 0xd4)) {
    lVar8 = lVar9 + 0xd8;
    if (*(longlong *)(lVar9 + 0xe0) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0xe0);
    }
    iVar11 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar9 + 0xe8) - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar9 + 0xa0) + (longlong)iVar11 * 0x18);
        if ((*plVar1 == *param_2) &&
           (*(int *)(*(longlong *)(lVar9 + 0xa0) + 8 + (longlong)iVar11 * 0x18) == (int)param_2[1]))
        {
          if ((int *)((longlong)plVar1 + 0xc) == (int *)0x0 || plVar1 == (longlong *)0x0) {
            return;
          }
          lVar9 = (longlong)*(int *)((longlong)plVar1 + 0xc);
          if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20 + lVar9 * 0x28) != param_4) {
            return;
          }
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9 * 0x28);
          iVar11 = *(int *)(param_3 + 1);
          _Src = (void *)*param_3;
          *(int *)(puVar2 + 1) = iVar11;
          if (iVar11 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            return;
          }
          FUN_1447a127e(puVar2,iVar11);
          if (iVar11 == 0) {
            return;
          }
          memcpy((void *)*puVar2,_Src,(longlong)iVar11);
          return;
        }
        iVar11 = (int)plVar1[2];
      } while (iVar11 != -1);
    }
  }
  return;
}



// FUNCTION 14811423c FUN_14811423c body=1 status=ok
// SIG undefined FUN_14811423c(void)

void FUN_14811423c(void)

{
  return;
}



// FUNCTION 14811423e FUN_14811423e body=275 status=ok
// SIG undefined FUN_14811423e(void)

void FUN_14811423e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = param_2 + 0x38;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_3c = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x5c);
    FUN_1400ee60a(param_2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x5c) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_3c = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x5c);
    FUN_1400ee60a(param_2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x5c) = 0xffffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      local_3c = *(undefined4 *)(*(longlong *)(lVar3 + lVar4) + 0x5c);
      FUN_1400ee60a(param_2,&local_3c);
      *(undefined4 *)(*(longlong *)(lVar3 + lVar4) + 0x5c) = 0xffffffff;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_14812471c(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811436a FUN_14811436a body=766 status=ok
// SIG undefined FUN_14811436a(void)

void FUN_14811436a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_b2;
  undefined1 local_b1;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined2 uStack_6e;
  undefined4 local_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar12 = *(longlong *)(param_1 + 0x60);
  uVar10 = 0;
  local_98 = param_3;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    local_a8 = param_2 + 0x38;
    local_b0 = (longlong)*(int *)(param_1 + 0x68) * 0x18;
    lVar13 = 0;
    local_a0 = param_2;
    do {
      local_90 = *(undefined8 *)(param_1 + 0x10);
      plVar5 = *(longlong **)(param_1 + 0x18);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      local_b1 = *(undefined1 *)(lVar12 + 8 + lVar13);
      local_b2 = *(undefined1 *)(lVar12 + 9 + lVar13);
      local_64 = *(undefined4 *)(lVar12 + 0x14 + lVar13);
      uVar6 = *(undefined8 *)(lVar12 + 0xc + lVar13);
      local_6c = (undefined4)uVar6;
      uStack_68 = (undefined2)((ulonglong)uVar6 >> 0x20);
      uStack_66 = (undefined2)((ulonglong)uVar6 >> 0x30);
      uVar10 = FUN_148073748(*(longlong *)(param_1 + 0x40) + 0x10);
      local_78 = (longlong *)FUN_14001cc68(0x88,0x10);
      local_78[1] = (longlong)&DAT_100000001;
      *local_78 = (longlong)&PTR_FUN_14ad81010;
      local_80 = local_78 + 2;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0xe] = 0;
      local_78[0xf] = 0;
      local_78[0x10] = 0;
      FUN_14808d638(&local_80);
      plVar8 = local_78;
      plVar3 = local_80;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_78 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_78)(local_78);
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
      if ((int)plVar3[4] != 4) {
        FUN_1446efa72(plVar3 + 3,0,4,0x10);
        *(undefined4 *)(plVar3 + 4) = 4;
      }
      puVar7 = (undefined8 *)plVar3[3];
      *puVar7 = &PTR_LAB_14adbbfe0;
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
      puVar7[2] = lVar11;
      *puVar7 = &PTR_FUN_14adbbf70;
      puVar7[3] = local_90;
      puVar7[4] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      *(undefined1 *)(puVar7 + 5) = local_b1;
      *(undefined1 *)((longlong)puVar7 + 0x29) = local_b2;
      *(ulonglong *)((longlong)puVar7 + 0x2a) = CONCAT26(uStack_68,CONCAT42(local_6c,uStack_6e));
      puVar7[6] = CONCAT44(local_64,CONCAT22(uStack_66,uStack_68));
      *(undefined4 *)(puVar7 + 7) = uVar10;
      uVar6 = *(undefined8 *)(local_a0 + 0x28);
      local_88 = *(longlong *)(lVar12 + lVar13);
      if (local_88 != 0) {
        LOCK();
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
        UNLOCK();
      }
      local_c8 = local_a8;
      FUN_1481bb036(plVar3,local_98,&local_88,uVar6);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      lVar13 = lVar13 + 0x18;
    } while (local_b0 != lVar13);
    uVar10 = *(undefined4 *)(param_1 + 0x68);
    lVar12 = *(longlong *)(param_1 + 0x60);
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  FUN_14812471c(lVar12,uVar10);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_148124736(param_1 + 0x60,0);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811466a FUN_14811466a body=41 status=ok
// SIG undefined FUN_14811466a(void)

void FUN_14811466a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x74);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    FUN_143a04da6(param_1,param_2,0x400,0x70,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 148114694 FUN_148114694 body=9 status=ok
// SIG undefined FUN_148114694(void)

void FUN_148114694(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
  }
  return;
}



// FUNCTION 14811469e FUN_14811469e body=62 status=ok
// SIG undefined FUN_14811469e(void)

void FUN_14811469e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x150) == 0) {
    lVar1 = param_1;
  }
  FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0x158));
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481146dc FUN_1481146dc body=240 status=ok
// SIG undefined FUN_1481146dc(void)

longlong *
FUN_1481146dc(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,char param_6,char param_7,undefined8 *param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_1481b9708(*(undefined8 *)(param_1 + 0x20));
  FUN_143a7817e(lVar2,*(undefined8 *)(param_3 + 0x18),param_5,param_4,L"NDC GPU Buffers for CPU");
  uVar4 = 1;
  LOCK();
  if (*(int *)(lVar2 + 8) == -1) {
    *(int *)(lVar2 + 8) = 1;
  }
  UNLOCK();
  *param_2 = lVar2;
  if ((param_6 != '\0') || (param_7 != '\0')) {
    plVar3 = (longlong *)FUN_1481147cc(param_1 + 0x60);
    lVar1 = *plVar3;
    if (lVar1 != lVar2) {
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
        UNLOCK();
      }
    }
    *(char *)(plVar3 + 1) = param_7;
    *(char *)((longlong)plVar3 + 9) = param_6;
    *(undefined8 *)((longlong)plVar3 + 0xc) = *param_8;
    uVar4 = *(undefined4 *)(param_8 + 1);
    *(undefined4 *)((longlong)plVar3 + 0x14) = uVar4;
  }
  FUN_143a04da6(uVar4,param_3,0x70,0x400,lVar2);
  return param_2;
}



// FUNCTION 1481147cc FUN_1481147cc body=63 status=ok
// SIG undefined FUN_1481147cc(void)

longlong FUN_1481147cc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148124896(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_148124887(lVar2);
  return lVar2;
}



// FUNCTION 14811480c FUN_14811480c body=94 status=ok
// SIG undefined FUN_14811480c(void)

void FUN_14811480c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_14808e9b0(param_1,iVar2);
  }
  FUN_14812492a((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14811486a FUN_14811486a body=4 status=ok
// SIG undefined FUN_14811486a(void)

void FUN_14811486a(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
  return;
}



// FUNCTION 14811486e FUN_14811486e body=134 status=ok
// SIG undefined FUN_14811486e(void)

undefined8 * FUN_14811486e(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x10] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x11) = DAT_14c846338;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 1481148f4 FUN_1481148f4 body=631 status=ok
// SIG undefined FUN_1481148f4(void)

void FUN_1481148f4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_14479d2ce(param_2 + 5);
  FUN_148112dec(uVar4,&local_60);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = local_60;
  *(longlong **)(param_1 + 0xc0) = local_58;
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
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_148114b6c(uVar4,&local_60);
  plVar1 = local_58;
  *(undefined8 *)(param_1 + 0x10) = local_60;
  local_60 = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (local_58 != plVar3) {
    local_58 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_148114a2b;
    LOCK();
    plVar1 = plVar3 + 1;
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
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148114a2b:
  lVar5 = FUN_14001cc68(0xb8,0x10);
  *(undefined4 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x1c) = 0;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x5c) = 0;
  *(undefined8 *)(lVar5 + 100) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0xa4) = 0xffffffff00000002;
  *(undefined4 *)(lVar5 + 0xac) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0xb0) = 0;
  *(undefined8 **)(lVar5 + 8) = &DAT_14cb3db48;
  *(longlong *)(param_1 + 0x20) = lVar5;
  FUN_1402ed004(lVar5,*(longlong *)(param_1 + 0xb8) + 0x10,1);
  lVar5 = FUN_14001cc68(0xb8,0x10);
  *(undefined4 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x1c) = 0;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x5c) = 0;
  *(undefined8 *)(lVar5 + 100) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0xa4) = 0xffffffff00000002;
  *(undefined4 *)(lVar5 + 0xac) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0xb0) = 0;
  *(undefined8 **)(lVar5 + 8) = &DAT_14cb3db48;
  *(longlong *)(param_1 + 0x30) = lVar5;
  FUN_1402ed004(lVar5,*(longlong *)(param_1 + 0xb8) + 0x10,0);
  uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
  FUN_14485c47a(param_1 + 0x78,uVar4);
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_143a05892(param_1,param_2);
  return;
}



// FUNCTION 148114b6c FUN_148114b6c body=216 status=ok
// SIG undefined FUN_148114b6c(void)

longlong * FUN_148114b6c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_28[1] = (longlong)&DAT_100000001;
  *local_28 = (longlong)&PTR_FUN_14ad81030;
  local_30 = local_28 + 2;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  FUN_14808d816(&local_30);
  plVar3 = local_28;
  *param_2 = (longlong)local_30;
  param_2[1] = (longlong)local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
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
        }
      }
    }
  }
  FUN_148112c0c(*param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148114c46 FUN_148114c46 body=237 status=ok
// SIG undefined FUN_148114c46(void)

void FUN_148114c46(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_143a05892(param_1,param_2);
  }
  FUN_148113064(*(undefined8 *)(param_1 + 0x10));
  lVar4 = FUN_14479d2ce(param_2 + 0x28);
  if (*(char *)(lVar4 + 0x38) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78);
    if (lVar4 != lVar3) {
      *(longlong *)(param_1 + 0x28) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
        UNLOCK();
      }
    }
  }
  FUN_144a73d22(*(undefined8 *)(param_1 + 0x20),1);
  lVar4 = *(longlong *)(param_1 + 0x20);
  piVar1 = (int *)(*(longlong *)(lVar4 + 0x80) + 8);
  LOCK();
  if (*piVar1 == -1) {
    *piVar1 = 0;
  }
  UNLOCK();
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x80);
  *(undefined8 *)(lVar4 + 0x80) = 0;
  FUN_148114d34(param_1 + 0x58,param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x74);
  FUN_143a0c402(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x74) != 0)) {
    FUN_14812494c(param_1 + 0x68,0);
    return;
  }
  return;
}



// FUNCTION 148114d34 FUN_148114d34 body=98 status=ok
// SIG undefined FUN_148114d34(void)

void FUN_148114d34(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1481249bc(param_1,iVar2);
    }
    FUN_143a0c62e((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 148114d96 FUN_148114d96 body=63 status=ok
// SIG undefined FUN_148114d96(void)

longlong FUN_148114d96(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1481249bc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_148124a50(lVar2);
  return lVar2;
}



// FUNCTION 148114dd6 FUN_148114dd6 body=154 status=ok
// SIG undefined FUN_148114dd6(void)

ulonglong FUN_148114dd6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0xb8) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_14479d2ce(param_2 + 0x28);
    FUN_148112dec(uVar3,&local_28);
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_28 == *(longlong *)(param_1 + 0xb8));
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148114e72 FUN_148114e72 body=555 status=ok
// SIG undefined FUN_148114e72(void)

undefined8 * FUN_148114e72(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14043112a(puVar1);
  plVar2 = param_1 + 0xb;
  FUN_14043112a(plVar2);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_78 = *(undefined8 *)(param_2 + 0x28);
  local_70 = *(undefined4 *)(param_2 + 0x30);
  FUN_148112884(param_1 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  iVar3 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    lVar8 = 0;
    do {
      local_80[0] = *(undefined4 *)(lVar5 + 8 + lVar8);
      local_88 = *(undefined8 *)(lVar5 + lVar8);
      lVar6 = FUN_144741050(local_80);
      if (*(short *)(lVar6 + 8) != 3) {
        uVar7 = FUN_144741050(local_80);
        uVar7 = FUN_144a64b50(uVar7);
        lVar6 = FUN_140c6c286(uVar7,1);
        local_98 = lVar6;
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
        }
        local_90 = 2;
        local_8e = 0;
        local_8c = 0xffffffff;
        FUN_140c6c26c(lVar6,0);
        local_80[0] = FUN_144830b78(local_64,&local_98);
      }
      iVar4 = *(int *)(param_1 + 3);
      *(uint *)(param_1 + 3) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
        FUN_14024cd4c(puVar1,iVar4);
      }
      lVar6 = param_1[2];
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar4 * 0xc) = local_80[0];
      *(undefined8 *)(lVar6 + (longlong)iVar4 * 0xc) = local_88;
      iVar4 = *(int *)(param_1 + 0xc);
      *(uint *)(param_1 + 0xc) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 100) < iVar4 + 1U) {
        FUN_14024cd4c(plVar2,iVar4);
      }
      lVar6 = *plVar2;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar4 * 0xc) = local_80[0];
      *(undefined8 *)(lVar6 + (longlong)iVar4 * 0xc) = local_88;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)iVar3 * 0xc != lVar8);
  }
  FUN_1481ba846(puVar1);
  FUN_1481ba846(plVar2);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14811509e FUN_14811509e body=100 status=ok
// SIG undefined FUN_14811509e(void)

void FUN_14811509e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14043115e(param_1 + 0x10);
  FUN_14043115e(param_1 + 0x58);
  FUN_148063fda(param_1 + 0xa0);
  FUN_14017ae7a(param_1 + 0x58);
  FUN_14017ae7a(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481150f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148115102 FUN_148115102 body=120 status=ok
// SIG undefined FUN_148115102(void)

undefined1 FUN_148115102(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  FUN_148112dec(param_1,local_28);
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
  uVar3 = DAT_14cb420b8;
  LOCK();
  DAT_14cb420b8 = 1;
  UNLOCK();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811517c FUN_14811517c body=80 status=ok
// SIG undefined FUN_14811517c(void)

undefined8 FUN_14811517c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      lVar1 = FUN_1400bd118(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_1481153e0(*(undefined8 *)(lVar1 + 0x1c78),param_2);
        return uVar2;
      }
    }
  }
  return 0;
}


