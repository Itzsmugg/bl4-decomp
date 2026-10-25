// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143926e5c FUN_143926e5c body=93 status=ok
// SIG undefined FUN_143926e5c(void)

void FUN_143926e5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143926eba FUN_143926eba body=93 status=ok
// SIG undefined FUN_143926eba(void)

void FUN_143926eba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143926f18 FUN_143926f18 body=126 status=ok
// SIG undefined FUN_143926f18(void)

void FUN_143926f18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8b790;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143926f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143926f9e FUN_143926f9e body=19 status=ok
// SIG undefined FUN_143926f9e(void)

undefined1 FUN_143926f9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1480c79b8(param_2);
  return 1;
}



// FUNCTION 143926fb2 FUN_143926fb2 body=29 status=ok
// SIG undefined FUN_143926fb2(void)

undefined8 FUN_143926fb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143926fe4 FUN_143926fe4 body=93 status=ok
// SIG undefined FUN_143926fe4(void)

void FUN_143926fe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927042 FUN_143927042 body=93 status=ok
// SIG undefined FUN_143927042(void)

void FUN_143927042(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439270a0 FUN_1439270a0 body=126 status=ok
// SIG undefined FUN_1439270a0(void)

void FUN_1439270a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8b800;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392710f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143927126 FUN_143927126 body=19 status=ok
// SIG undefined FUN_143927126(void)

undefined1 FUN_143927126(undefined8 param_1,undefined8 param_2)

{
  FUN_1480c7cbe(param_2);
  return 1;
}



// FUNCTION 14392713a FUN_14392713a body=29 status=ok
// SIG undefined FUN_14392713a(void)

undefined8 FUN_14392713a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14392716c FUN_14392716c body=93 status=ok
// SIG undefined FUN_14392716c(void)

void FUN_14392716c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b870;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439271ca FUN_1439271ca body=93 status=ok
// SIG undefined FUN_1439271ca(void)

void FUN_1439271ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b870;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927228 FUN_143927228 body=126 status=ok
// SIG undefined FUN_143927228(void)

void FUN_143927228(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8b870;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143927297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439272ae FUN_1439272ae body=19 status=ok
// SIG undefined FUN_1439272ae(void)

undefined1 FUN_1439272ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1480c8048(param_2);
  return 1;
}



// FUNCTION 1439272c2 FUN_1439272c2 body=29 status=ok
// SIG undefined FUN_1439272c2(void)

undefined8 FUN_1439272c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1439272f4 FUN_1439272f4 body=93 status=ok
// SIG undefined FUN_1439272f4(void)

void FUN_1439272f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b8e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927352 FUN_143927352 body=93 status=ok
// SIG undefined FUN_143927352(void)

void FUN_143927352(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b8e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439273b0 FUN_1439273b0 body=126 status=ok
// SIG undefined FUN_1439273b0(void)

void FUN_1439273b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8b8e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392741f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143927436 FUN_143927436 body=19 status=ok
// SIG undefined FUN_143927436(void)

undefined1 FUN_143927436(undefined8 param_1,undefined8 param_2)

{
  FUN_1480c84f4(param_2);
  return 1;
}



// FUNCTION 14392744a FUN_14392744a body=29 status=ok
// SIG undefined FUN_14392744a(void)

undefined8 FUN_14392744a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14392747c FUN_14392747c body=93 status=ok
// SIG undefined FUN_14392747c(void)

void FUN_14392747c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439274da FUN_1439274da body=93 status=ok
// SIG undefined FUN_1439274da(void)

void FUN_1439274da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927538 FUN_143927538 body=126 status=ok
// SIG undefined FUN_143927538(void)

void FUN_143927538(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8b950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439275a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439275be FUN_1439275be body=19 status=ok
// SIG undefined FUN_1439275be(void)

undefined1 FUN_1439275be(undefined8 param_1,undefined8 param_2)

{
  FUN_1480c8a28(param_2);
  return 1;
}



// FUNCTION 1439275d2 FUN_1439275d2 body=29 status=ok
// SIG undefined FUN_1439275d2(void)

undefined8 FUN_1439275d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143927604 FUN_143927604 body=93 status=ok
// SIG undefined FUN_143927604(void)

void FUN_143927604(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b9c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927662 FUN_143927662 body=93 status=ok
// SIG undefined FUN_143927662(void)

void FUN_143927662(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8b9c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439276c0 FUN_1439276c0 body=126 status=ok
// SIG undefined FUN_1439276c0(void)

void FUN_1439276c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8b9c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392772f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143927746 FUN_143927746 body=19 status=ok
// SIG undefined FUN_143927746(void)

undefined1 FUN_143927746(undefined8 param_1,undefined8 param_2)

{
  FUN_1480c9922(param_2);
  return 1;
}



// FUNCTION 14392775a FUN_14392775a body=29 status=ok
// SIG undefined FUN_14392775a(void)

undefined8 FUN_14392775a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14392778c FUN_14392778c body=93 status=ok
// SIG undefined FUN_14392778c(void)

void FUN_14392778c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8ba30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439277ea FUN_1439277ea body=93 status=ok
// SIG undefined FUN_1439277ea(void)

void FUN_1439277ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8ba30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927848 FUN_143927848 body=126 status=ok
// SIG undefined FUN_143927848(void)

void FUN_143927848(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8ba30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439278b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439278ce FUN_1439278ce body=19 status=ok
// SIG undefined FUN_1439278ce(void)

undefined1 FUN_1439278ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1480caa86(param_2);
  return 1;
}



// FUNCTION 1439278e2 FUN_1439278e2 body=29 status=ok
// SIG undefined FUN_1439278e2(void)

undefined8 FUN_1439278e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143927914 FUN_143927914 body=93 status=ok
// SIG undefined FUN_143927914(void)

void FUN_143927914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8baa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927972 FUN_143927972 body=93 status=ok
// SIG undefined FUN_143927972(void)

void FUN_143927972(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8baa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439279d0 FUN_1439279d0 body=126 status=ok
// SIG undefined FUN_1439279d0(void)

void FUN_1439279d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8baa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143927a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143927a56 FUN_143927a56 body=19 status=ok
// SIG undefined FUN_143927a56(void)

undefined1 FUN_143927a56(undefined8 param_1,undefined8 param_2)

{
  FUN_1480cb040(param_2);
  return 1;
}



// FUNCTION 143927a6a FUN_143927a6a body=29 status=ok
// SIG undefined FUN_143927a6a(void)

undefined8 FUN_143927a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143927a9c FUN_143927a9c body=93 status=ok
// SIG undefined FUN_143927a9c(void)

void FUN_143927a9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8bb10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927afa FUN_143927afa body=93 status=ok
// SIG undefined FUN_143927afa(void)

void FUN_143927afa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8bb10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143927b58 FUN_143927b58 body=126 status=ok
// SIG undefined FUN_143927b58(void)

void FUN_143927b58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8bb10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143927bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143927bde FUN_143927bde body=19 status=ok
// SIG undefined FUN_143927bde(void)

undefined1 FUN_143927bde(undefined8 param_1,undefined8 param_2)

{
  FUN_1480cb720(param_2);
  return 1;
}



// FUNCTION 143927bfd FUN_143927bfd body=10369 status=ok
// SIG undefined FUN_143927bfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143927bfd(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined **ppuStack_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  int local_1c8;
  undefined8 *local_1c0;
  int local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 *local_1a0;
  int local_198;
  undefined8 *local_190;
  int local_188;
  undefined8 *local_180;
  int local_178;
  undefined8 *local_170;
  int local_168;
  undefined8 *local_160;
  int local_158;
  undefined8 *local_150;
  int local_148;
  undefined8 *local_140;
  int local_138;
  undefined8 *local_130;
  int local_128;
  char **local_120;
  ulonglong *local_118;
  char *local_110;
  undefined8 **local_108;
  undefined *local_100;
  undefined8 **local_f8;
  undefined *local_f0;
  undefined8 **local_e8;
  undefined *local_e0;
  undefined8 **local_d8;
  undefined *local_d0;
  undefined8 **local_c8;
  undefined *local_c0;
  undefined8 **local_b8;
  undefined *local_b0;
  undefined8 **local_a8;
  undefined *local_a0;
  undefined8 **local_98;
  undefined *local_90;
  undefined8 **local_88;
  undefined *local_80;
  undefined8 **local_78;
  undefined *local_70;
  undefined8 **local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1400b22c2(&local_110,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_110,&DAT_14cb37f3c);
  if (cVar2 == '\0') {
    _DAT_14cb37f3c = 0;
    uRam000000014cb37f44 = 0;
  }
  if (local_110 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_1d8 = 0;
  local_1e8 = 0;
  ppuStack_1e0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad81820,1,0);
  local_110 = "GetLocalSpace";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37f68 = (ulonglong)uVar3;
  local_110 = "GetBounds";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37f70 = (ulonglong)uVar3;
  local_110 = "GetFixedBounds";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37f78 = (ulonglong)uVar3;
  local_110 = "SetFixedBounds";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37f80 = (ulonglong)uVar3;
  local_1d8 = 0;
  local_1e8 = 0;
  ppuStack_1e0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad81d40,1,0);
  local_110 = "bone";
  local_108._0_5_ = 4;
  FUN_14001a6c0(&local_110,1);
  ppuStack_1e0 = (undefined **)0x0;
  local_1d8 = 0;
  local_1e8 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad82a00,2,&PTR_FUN_14ad829d0);
  local_110 = "SetNumElements";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37fe8 = (ulonglong)uVar3;
  local_110 = "GetNumElements";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37ff0 = (ulonglong)uVar3;
  local_110 = "ClearBufferInt";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb37ff8 = (ulonglong)uVar3;
  local_110 = "ClearBufferFloat";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38000 = (ulonglong)uVar3;
  local_110 = "AtomicAdd";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38008 = (ulonglong)uVar3;
  local_110 = "AtomicAnd";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38010 = (ulonglong)uVar3;
  local_110 = "AtomicCompareAndExchange";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38018 = (ulonglong)uVar3;
  local_110 = "AtomicMax";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38020 = (ulonglong)uVar3;
  local_110 = "AtomicMin";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38028 = (ulonglong)uVar3;
  local_110 = "AtomicOr";
  local_108._0_5_ = 8;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38030 = (ulonglong)uVar3;
  local_110 = "AtomicXor";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38038 = (ulonglong)uVar3;
  local_1d8 = 0;
  local_1e8 = 0;
  ppuStack_1e0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad833e0,2,0);
  FUN_1446f470e(&DAT_14cb380a8,L"GetNumBoxes",1);
  FUN_1446f470e(&DAT_14cb380b0,L"GetNumSpheres",1);
  FUN_1446f470e(&DAT_14cb380b8,L"GetNumCapsules",1);
  FUN_1446f470e(&DAT_14cb380c0,L"GetClosestElement",1);
  FUN_1446f470e(&DAT_14cb380c8,L"GetElementPoint",1);
  FUN_1446f470e(&DAT_14cb380d0,L"GetElementDistance",1);
  FUN_1446f470e(&DAT_14cb380d8,L"GetClosestPoint",1);
  FUN_1446f470e(&DAT_14cb380e0,L"GetClosestDistance",1);
  FUN_1446f470e(&DAT_14cb380e8,L"GetRestDistance",1);
  FUN_1446f470e(&DAT_14cb380f0,L"GetTexturePoint",1);
  FUN_1446f470e(&DAT_14cb380f8,L"GetProjectionPoint",1);
  ppuStack_1e0 = &PTR_FUN_14ad843a0;
  local_1e8 = 0;
  local_1d8 = 2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad843e0,1,0);
  local_110 = "GetTextureSize";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38150 = (ulonglong)uVar3;
  local_110 = "Project";
  local_108._0_5_ = 7;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38158 = (ulonglong)uVar3;
  local_110 = "Deproject";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38160 = (ulonglong)uVar3;
  local_110 = "GetCaptureTransform";
  local_108._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38168 = (ulonglong)uVar3;
  local_110 = "SetCaptureTransform";
  local_108._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38170 = (ulonglong)uVar3;
  local_110 = "SetRequestCapture";
  local_108._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38178 = (ulonglong)uVar3;
  local_110 = "TextureLoad";
  local_108._0_5_ = 0xb;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38180 = (ulonglong)uVar3;
  local_110 = "TextureSample";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38188 = (ulonglong)uVar3;
  local_110 = "TextureProject";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38190 = (ulonglong)uVar3;
  local_110 = "TextureProjectDepth";
  local_108._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38198 = (ulonglong)uVar3;
  local_110 = "TextureDeprojectDepth";
  local_108._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb381a0 = (ulonglong)uVar3;
  DAT_14cb381a8 = 0;
  DAT_14cb381b0 = FUN_144830b78(&DAT_14cb381b0,&DAT_14cb42160);
  local_1d8 = 0;
  local_1e8 = 0;
  ppuStack_1e0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad84a80,1,0);
  local_110 = "GetNumFrames";
  local_108._0_5_ = 0xc;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb381d0 = (ulonglong)uVar3;
  local_110 = "GetNumEmitters";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb381d8 = (ulonglong)uVar3;
  local_110 = "GetEmitterIndex";
  local_108._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb381e0 = (ulonglong)uVar3;
  local_110 = "GetInstanceInt";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb381e8 = (ulonglong)uVar3;
  local_110 = "GetInstanceFloat";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb381f0 = (ulonglong)uVar3;
  local_110 = "GetInstanceVector2";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb381f8 = (ulonglong)uVar3;
  local_110 = "GetInstanceVector3";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38200 = (ulonglong)uVar3;
  local_110 = "GetInstanceVector4";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38208 = (ulonglong)uVar3;
  local_110 = "GetInstanceColor";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38210 = (ulonglong)uVar3;
  local_110 = "GetInstanceQuat";
  local_108._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38218 = (ulonglong)uVar3;
  local_110 = "GetInstancePosition";
  local_108._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38220 = (ulonglong)uVar3;
  local_110 = "Attribute";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38228 = (ulonglong)uVar3;
  local_1d8 = 0;
  local_1e8 = 0;
  ppuStack_1e0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad85610,2,0);
  FUN_1446f470e(&DAT_14cb383a8,L"GetNextValue",1);
  FUN_1446f470e(&DAT_14cb383b0,&DAT_14ad8c4d2,1);
  FUN_1446f470e(&DAT_14cb383b8,&DAT_14a475be0,1);
  FUN_1446f470e(&DAT_14cb383c0,L"Exchange",1);
  FUN_1446f470e(&DAT_14cb383c8,&DAT_149e97e80,1);
  FUN_1446f470e(&DAT_14cb383d0,L"Increment",1);
  FUN_1446f470e(&DAT_14cb383d8,L"Decrement",1);
  local_1d8 = 1;
  ppuStack_1e0 = &PTR_FUN_14ad86080;
  local_1e8 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad860a0,1,0);
  local_110 = "IsValid";
  local_108._0_5_ = 7;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38410 = (ulonglong)uVar3;
  local_110 = "GetComponentToWorld";
  local_108._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38418 = (ulonglong)uVar3;
  local_110 = "GetSocketCount";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38420 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketCount";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38428 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketCount";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38430 = (ulonglong)uVar3;
  local_110 = "GetSocketTransform";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38438 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketTransform";
  local_108._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38440 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketTransform";
  local_108._0_5_ = 0x1c;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38448 = (ulonglong)uVar3;
  local_110 = "GetSocketTransformInterpolated";
  local_108._0_5_ = 0x1e;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38450 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketTransformInterpolated";
  local_108._0_5_ = 0x26;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38458 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketTransformInterpolated";
  local_108 = (undefined8 **)CONCAT35(local_108._5_3_,0x28);
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38460 = (ulonglong)uVar3;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,2,0x10);
  local_128 = 2;
  *local_130 = &PTR_LAB_14ad81180;
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
  local_130[2] = lVar4;
  *local_130 = &PTR_FUN_14ad80f50;
  local_130[3] = FUN_14809d534;
  local_110 = &DAT_14cb38410;
  local_140 = (undefined8 *)0x0;
  local_138 = 0;
  local_108 = &local_130;
  FUN_1446efa72(&local_140,0,2,0x10);
  local_138 = 2;
  *local_140 = &PTR_LAB_14ad81180;
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
  local_140[2] = lVar4;
  *local_140 = &PTR_FUN_14ad80f50;
  local_140[3] = FUN_14809d66c;
  local_100 = &DAT_14cb38418;
  local_150 = (undefined8 *)0x0;
  local_148 = 0;
  local_f8 = &local_140;
  FUN_1446efa72(&local_150,0,2,0x10);
  local_148 = 2;
  *local_150 = &PTR_LAB_14ad81180;
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
  local_150[2] = lVar4;
  *local_150 = &PTR_FUN_14ad80f50;
  local_150[3] = FUN_14809d925;
  local_f0 = &DAT_14cb38420;
  local_160 = (undefined8 *)0x0;
  local_158 = 0;
  local_e8 = &local_150;
  FUN_1446efa72(&local_160,0,2,0x10);
  local_158 = 2;
  *local_160 = &PTR_LAB_14ad81180;
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
  local_160[2] = lVar4;
  *local_160 = &PTR_FUN_14ad80f50;
  local_160[3] = FUN_14809d9ca;
  local_e0 = &DAT_14cb38428;
  local_170 = (undefined8 *)0x0;
  local_168 = 0;
  local_d8 = &local_160;
  FUN_1446efa72(&local_170,0,2,0x10);
  local_168 = 2;
  *local_170 = &PTR_LAB_14ad81180;
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
  local_170[2] = lVar4;
  *local_170 = &PTR_FUN_14ad80f50;
  local_170[3] = FUN_14809da6f;
  local_d0 = &DAT_14cb38430;
  local_180 = (undefined8 *)0x0;
  local_178 = 0;
  local_c8 = &local_170;
  FUN_1446efa72(&local_180,0,2,0x10);
  local_178 = 2;
  *local_180 = &PTR_LAB_14ad81180;
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
  local_180[2] = lVar4;
  *local_180 = &PTR_FUN_14ad80f50;
  local_180[3] = FUN_14809db14;
  local_c0 = &DAT_14cb38438;
  local_190 = (undefined8 *)0x0;
  local_188 = 0;
  local_b8 = &local_180;
  FUN_1446efa72(&local_190,0,2,0x10);
  local_188 = 2;
  *local_190 = &PTR_LAB_14ad81180;
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
  local_190[2] = lVar4;
  *local_190 = &PTR_FUN_14ad80f50;
  local_190[3] = FUN_14809e666;
  local_b0 = &DAT_14cb38440;
  local_1a0 = (undefined8 *)0x0;
  local_198 = 0;
  local_a8 = &local_190;
  FUN_1446efa72(&local_1a0,0,2,0x10);
  local_198 = 2;
  *local_1a0 = &PTR_LAB_14ad81180;
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
  local_1a0[2] = lVar4;
  *local_1a0 = &PTR_FUN_14ad80f50;
  local_1a0[3] = FUN_14809f1d5;
  local_a0 = &DAT_14cb38448;
  local_1b0 = (undefined8 *)0x0;
  local_1a8 = 0;
  local_98 = &local_1a0;
  FUN_1446efa72(&local_1b0,0,2,0x10);
  local_1a8 = 2;
  *local_1b0 = &PTR_LAB_14ad81180;
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
  local_1b0[2] = lVar4;
  *local_1b0 = &PTR_FUN_14ad80f50;
  local_1b0[3] = FUN_14809fd43;
  local_90 = &DAT_14cb38450;
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = 0;
  local_88 = &local_1b0;
  FUN_1446efa72(&local_1c0,0,2,0x10);
  local_1b8 = 2;
  *local_1c0 = &PTR_LAB_14ad81180;
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
  local_1c0[2] = lVar4;
  *local_1c0 = &PTR_FUN_14ad80f50;
  local_1c0[3] = FUN_1480a0ac7;
  local_80 = &DAT_14cb38458;
  local_1d0 = (undefined8 *)0x0;
  local_1c8 = 0;
  local_78 = &local_1c0;
  FUN_1446efa72(&local_1d0,0,2,0x10);
  local_1c8 = 2;
  *local_1d0 = &PTR_LAB_14ad81180;
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
  local_1d0[2] = lVar4;
  *local_1d0 = &PTR_FUN_14ad80f50;
  local_1d0[3] = FUN_1480a1866;
  local_118 = local_60;
  local_70 = &DAT_14cb38460;
  local_120 = &local_110;
  local_68 = &local_1d0;
  FUN_1458cd658();
  if (local_1c8 == 0) {
LAB_143928ed1:
    if (local_1d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1d0 != (undefined8 *)0x0) {
    (**(code **)*local_1d0)(local_1d0,0);
    FUN_1446efa72(&local_1d0,0,0,0x10);
    local_1c8 = 0;
    goto LAB_143928ed1;
  }
  if (local_1b8 == 0) {
LAB_143928f16:
    if (local_1c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1c0 != (undefined8 *)0x0) {
    (**(code **)*local_1c0)(local_1c0,0);
    FUN_1446efa72(&local_1c0,0,0,0x10);
    local_1b8 = 0;
    goto LAB_143928f16;
  }
  if (local_1a8 == 0) {
LAB_143928f5b:
    if (local_1b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1b0 != (undefined8 *)0x0) {
    (**(code **)*local_1b0)(local_1b0,0);
    FUN_1446efa72(&local_1b0,0,0,0x10);
    local_1a8 = 0;
    goto LAB_143928f5b;
  }
  if (local_198 == 0) {
LAB_143928fa0:
    if (local_1a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1a0 != (undefined8 *)0x0) {
    (**(code **)*local_1a0)(local_1a0,0);
    FUN_1446efa72(&local_1a0,0,0,0x10);
    local_198 = 0;
    goto LAB_143928fa0;
  }
  if (local_188 == 0) {
LAB_143928fe8:
    if (local_190 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_190 != (undefined8 *)0x0) {
    (**(code **)*local_190)(local_190,0);
    FUN_1446efa72(&local_190,0,0,0x10);
    local_188 = 0;
    goto LAB_143928fe8;
  }
  if (local_178 == 0) {
LAB_143929036:
    if (local_180 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_180 != (undefined8 *)0x0) {
    (**(code **)*local_180)(local_180,0);
    FUN_1446efa72(&local_180,0,0,0x10);
    local_178 = 0;
    goto LAB_143929036;
  }
  if (local_168 == 0) {
LAB_143929087:
    if (local_170 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_170 != (undefined8 *)0x0) {
    (**(code **)*local_170)(local_170,0);
    FUN_1446efa72(&local_170,0,0,0x10);
    local_168 = 0;
    goto LAB_143929087;
  }
  if (local_158 == 0) {
LAB_1439290d8:
    if (local_160 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_160 != (undefined8 *)0x0) {
    (**(code **)*local_160)(local_160,0);
    FUN_1446efa72(&local_160,0,0,0x10);
    local_158 = 0;
    goto LAB_1439290d8;
  }
  if (local_148 == 0) {
LAB_143929129:
    if (local_150 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_150 != (undefined8 *)0x0) {
    (**(code **)*local_150)(local_150,0);
    FUN_1446efa72(&local_150,0,0,0x10);
    local_148 = 0;
    goto LAB_143929129;
  }
  if (local_138 == 0) {
LAB_14392917a:
    if (local_140 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_140 != (undefined8 *)0x0) {
    (**(code **)*local_140)(local_140,0);
    FUN_1446efa72(&local_140,0,0,0x10);
    local_138 = 0;
    goto LAB_14392917a;
  }
  if (local_128 != 0) {
    if (local_130 == (undefined8 *)0x0) goto LAB_1439291dc;
    (**(code **)*local_130)(local_130,0);
    FUN_1446efa72(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1439291dc:
  atexit(FUN_143918cd7);
  local_110 = "SMInstance";
  local_108._0_5_ = 10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb384b8 = (ulonglong)uVar3;
  local_1d8 = 1;
  ppuStack_1e0 = &PTR_FUN_14ad86f40;
  local_1e8 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad86f90,1,&PTR_FUN_14ad86f60);
  local_1e8 = local_1e8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb38518,L"fx.Niagara.FailStaticMeshDataInterface",&DAT_14cb38528,
                L"When enabled we will fail out using static mesh data interfaces.");
  atexit(FUN_143919231);
  local_1e8 = local_1e8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb38530,L"fx.Niagara.NDIStaticMesh.UseInlineLODsOnly",&DAT_14c7627e4,
                L"When enabled Niagara will never use streaming LOD levels, only inline LODs.0 = Streaming LODs can be sampled.1 = Only inlined LODs can be sampled.2 = Only inlined LODs can be sampled by default but each DI can override this if desired. "
               );
  atexit(FUN_143919276);
  local_110 = "IsValidVertex";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38540 = (ulonglong)uVar3;
  local_110 = "RandomVertex";
  local_108._0_5_ = 0xc;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38548 = (ulonglong)uVar3;
  local_110 = "GetVertexCount";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38550 = (ulonglong)uVar3;
  local_110 = "GetVertex";
  local_108._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38558 = (ulonglong)uVar3;
  local_110 = "GetVertexWS";
  local_108._0_5_ = 0xb;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38560 = (ulonglong)uVar3;
  local_110 = "GetVertexWSInterpolated";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38568 = (ulonglong)uVar3;
  local_110 = "GetVertexColor";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38570 = (ulonglong)uVar3;
  local_110 = "GetVertexUV";
  local_108._0_5_ = 0xb;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38578 = (ulonglong)uVar3;
  local_110 = "IsValidTriangle";
  local_108._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38580 = (ulonglong)uVar3;
  local_110 = "RandomTriangle";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38588 = (ulonglong)uVar3;
  local_110 = "GetTriangleCount";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38590 = (ulonglong)uVar3;
  local_110 = "IsValidFilteredTriangle";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38598 = (ulonglong)uVar3;
  local_110 = "RandomFilteredTriangle";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385a0 = (ulonglong)uVar3;
  local_110 = "GetFilteredTriangleCount";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385a8 = (ulonglong)uVar3;
  local_110 = "GetFilteredTriangleAt";
  local_108._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385b0 = (ulonglong)uVar3;
  local_110 = "IsValidUnfilteredTriangle";
  local_108._0_5_ = 0x19;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385b8 = (ulonglong)uVar3;
  local_110 = "RandomUnfilteredTriangle";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385c0 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredTriangleCount";
  local_108._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385c8 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredTriangleAt";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385d0 = (ulonglong)uVar3;
  local_110 = "GetTriangle";
  local_108._0_5_ = 0xb;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385d8 = (ulonglong)uVar3;
  local_110 = "GetTriangleWS";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385e0 = (ulonglong)uVar3;
  local_110 = "GetTriangleWSInterpolated";
  local_108._0_5_ = 0x19;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385e8 = (ulonglong)uVar3;
  local_110 = "GetTriangleColor";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385f0 = (ulonglong)uVar3;
  local_110 = "GetTriangleUV";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb385f8 = (ulonglong)uVar3;
  local_110 = "GetTriangleIndices";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38600 = (ulonglong)uVar3;
  local_110 = "GetSocketCount";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38608 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketCount";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38610 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketCount";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38618 = (ulonglong)uVar3;
  local_110 = "RandomSocket";
  local_108._0_5_ = 0xc;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38620 = (ulonglong)uVar3;
  local_110 = "RandomFilteredSocket";
  local_108._0_5_ = 0x14;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38628 = (ulonglong)uVar3;
  local_110 = "RandomUnfilteredSocket";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38630 = (ulonglong)uVar3;
  local_110 = "GetSocketTransform";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38638 = (ulonglong)uVar3;
  local_110 = "GetSocketTransformWS";
  local_108._0_5_ = 0x14;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38640 = (ulonglong)uVar3;
  local_110 = "GetSocketTransformWSInterpolated";
  local_108._0_5_ = 0x20;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38648 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketTransform";
  local_108._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38650 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketTransformWS";
  local_108._0_5_ = 0x1c;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38658 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocketTransformWSInterpolated";
  local_108._0_5_ = 0x28;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38660 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketTransform";
  local_108._0_5_ = 0x1c;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38668 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketTransformWS";
  local_108._0_5_ = 0x1e;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38670 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocketTransformWSInterpolated";
  local_108._0_5_ = 0x2a;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38678 = (ulonglong)uVar3;
  local_110 = "GetFilteredSocket";
  local_108._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38680 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSocket";
  local_108._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38688 = (ulonglong)uVar3;
  local_110 = "IsValidSection";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38690 = (ulonglong)uVar3;
  local_110 = "GetSectionTriangleCount";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38698 = (ulonglong)uVar3;
  local_110 = "RandomSectionTriangle";
  local_108._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386a0 = (ulonglong)uVar3;
  local_110 = "GetSectionTriangleAt";
  local_108._0_5_ = 0x14;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386a8 = (ulonglong)uVar3;
  local_110 = "GetFilteredSectionAt";
  local_108._0_5_ = 0x14;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386b0 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSectionAt";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386b8 = (ulonglong)uVar3;
  local_110 = "GetSectionCount";
  local_108._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386c0 = (ulonglong)uVar3;
  local_110 = "GetFilteredSectionCount";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386c8 = (ulonglong)uVar3;
  local_110 = "GetUnfilteredSectionCount";
  local_108._0_5_ = 0x19;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386d0 = (ulonglong)uVar3;
  local_110 = "RandomSection";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386d8 = (ulonglong)uVar3;
  local_110 = "RandomFilteredSection";
  local_108._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386e0 = (ulonglong)uVar3;
  local_110 = "RandomUnfilteredSection";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386e8 = (ulonglong)uVar3;
  local_110 = "IsValid";
  local_108._0_5_ = 7;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386f0 = (ulonglong)uVar3;
  local_110 = "GetPreSkinnedLocalBounds";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb386f8 = (ulonglong)uVar3;
  local_110 = "GetMeshBounds";
  local_108._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38700 = (ulonglong)uVar3;
  local_110 = "GetMeshBoundsWS";
  local_108._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38708 = (ulonglong)uVar3;
  local_110 = "GetLocalToWorld";
  local_108._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38710 = (ulonglong)uVar3;
  local_110 = "GetLocalToWorldInverseTransposed";
  local_108._0_5_ = 0x20;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38718 = (ulonglong)uVar3;
  local_110 = "GetWorldVelocity";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38720 = (ulonglong)uVar3;
  local_110 = "GetInstanceIndex";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38728 = (ulonglong)uVar3;
  local_110 = "SetInstanceIndex";
  local_108._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38730 = (ulonglong)uVar3;
  local_110 = "GetTriangleCoordAtUV";
  local_108._0_5_ = 0x14;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38738 = (ulonglong)uVar3;
  local_110 = "GetTriangleCoordInAabb";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38740 = (ulonglong)uVar3;
  local_110 = "BuildUvMapping";
  local_108._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38748 = (ulonglong)uVar3;
  local_110 = "QueryDistanceField";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38750 = (ulonglong)uVar3;
  local_110 = "DeprecatedRandomSection";
  local_108._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38758 = (ulonglong)uVar3;
  local_110 = "DeprecatedRandomTriCoord";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38760 = (ulonglong)uVar3;
  local_110 = "DeprecatedRandomTriCoordOnSection";
  local_108._0_5_ = 0x21;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38768 = (ulonglong)uVar3;
  local_110 = "DeprecatedRandomTriCoordUsingVertexColorFilter";
  local_108._0_5_ = 0x2e;
  uVar3 = FUN_14001a6c0(&local_110,1);
  _DAT_14cb38770 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetVertexPosition";
  local_108._0_5_ = 0x1b;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38778 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetVertexPositionWS";
  local_108._0_5_ = 0x1d;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38780 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriPosition";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38788 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriNormal";
  local_108._0_5_ = 0x16;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38790 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriTangents";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb38798 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriPositionWS";
  local_108._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb387a0 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriNormalWS";
  local_108._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb387a8 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriTangentsWS";
  local_108._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb387b0 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriColor";
  local_108._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb387b8 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriUV";
  local_108._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb387c0 = (ulonglong)uVar3;
  local_110 = "DeprecatedGetTriPositionAndVelocityWS";
  local_108 = (undefined8 **)CONCAT35(local_108._5_3_,0x25);
  uVar3 = FUN_14001a6c0(&local_110,1);
  DAT_14cb387c8 = (ulonglong)uVar3;
  if ((local_60[0] ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392a480 FUN_14392a480 body=55 status=ok
// SIG undefined FUN_14392a480(void)

void FUN_14392a480(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39170 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39170 = FUN_14171c317(FUN_14646ad64,uVar1,L"ENDIObjectPropertyReaderSourceMode");
  }
  return;
}



// FUNCTION 14392a4b7 FUN_14392a4b7 body=4192 status=ok
// SIG undefined FUN_14392a4b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14392a4b7(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  uint uVar19;
  longlong lVar20;
  undefined *puVar21;
  bool bVar22;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  code *local_210;
  undefined8 *local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  undefined ***local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined ***local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined **local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined ***local_1a8;
  undefined ***pppuStack_1a0;
  undefined ****local_198;
  ulonglong uStack_190;
  undefined **local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined ***local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_1402191ca(param_1 + 5,0);
  }
  local_1a8 = (undefined ***)param_1[8];
  pppuStack_1a0 = (undefined ***)param_1[9];
  local_198 = (undefined ****)param_1[10];
  uStack_190 = param_1[0xb];
  local_188 = (undefined **)param_1[0xc];
  lStack_180 = param_1[0xd];
  local_178 = param_1[0xe];
  uStack_170 = param_1[0xf];
  param_1[0xe] = local_58;
  param_1[0xf] = uStack_50;
  param_1[0xc] = local_68;
  param_1[0xd] = lStack_60;
  param_1[10] = 0;
  param_1[0xb] = uStack_70;
  param_1[8] = 0;
  param_1[9] = uStack_80;
  local_58 = local_178;
  uStack_50 = uStack_170;
  local_68 = local_188;
  lStack_60 = lStack_180;
  local_78 = (undefined ***)local_198;
  uStack_70 = uStack_190;
  local_88 = local_1a8;
  uStack_80 = pppuStack_1a0;
  if (local_1a8 != (undefined ***)0x0) {
    pppuVar8 = local_78;
    if (local_198 == (undefined ****)0x0) {
      pppuVar8 = &local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_200 = param_1 + 8;
  local_1a8 = &local_188;
  uStack_190 = uStack_190 & 0xffffffffffffff00;
  local_198 = &local_88;
  pppuStack_1a0 = local_1a8;
  FUN_14005eb5c(param_1,&local_1a8);
  pppuVar18 = pppuStack_1a0;
  pppuVar11 = local_1a8;
  pppuVar8 = *(undefined ****)(param_2 + 0x10);
  local_1f8 = param_2;
  local_1f0 = param_1;
  lVar6 = FUN_1400796d0(pppuVar8,*param_1,1);
  if (lVar6 == 0) {
    uVar15 = (ulonglong)((longlong)pppuVar18 - (longlong)pppuVar11) >> 1;
LAB_14392a9eb:
    uVar16 = 1;
    uVar13 = (uint)uVar15;
    if (0 < (int)uVar13) {
      iVar5 = 0;
      uVar9 = 1;
      pppuVar18 = pppuVar11;
      do {
        if (*(short *)pppuVar18 == 0x2e) {
          if (iVar5 != 1) {
            uVar19 = -iVar5;
            if ((int)uVar13 <= -iVar5) {
              uVar19 = uVar13;
            }
            uVar16 = 0;
            uVar10 = (ulonglong)uVar19;
            if ((int)uVar19 < 1) {
              uVar10 = uVar16;
            }
            uVar19 = ((int)(1U - iVar5) >> 0x1f & 1U - iVar5) + 0x7fffffff;
            uVar9 = 1 - (((int)uVar9 >> 0x1f & uVar9) + iVar5);
            if ((int)uVar13 <= (int)uVar9) {
              uVar9 = uVar13;
            }
            uVar14 = uVar13 - uVar9;
            if ((int)uVar19 < (int)(uVar13 - uVar9)) {
              uVar14 = uVar19;
            }
            uVar15 = (ulonglong)uVar14;
            if ((int)uVar14 < 1) {
              uVar15 = uVar16;
            }
            pppuVar18 = (undefined ***)((longlong)pppuVar11 + (longlong)(int)uVar9 * 2);
            goto LAB_14392aa27;
          }
          break;
        }
        pppuVar18 = (undefined ***)((longlong)pppuVar18 + 2);
        iVar5 = iVar5 + -1;
        uVar9 = uVar9 + 1;
      } while (pppuVar18 < (undefined ***)((longlong)pppuVar11 + (longlong)(int)uVar13 * 2));
    }
    uVar10 = uVar15 & 0xffffffff;
    pppuVar18 = pppuVar11;
LAB_14392aa27:
    FUN_1446f82e2(&local_88,uVar10,pppuVar11,0);
    pppuVar2 = local_88;
    pppuVar11 = local_88;
    if (pppuVar8 != (undefined ***)0x0) {
      while (pppuVar11 != (undefined ***)0x0) {
        for (ppuVar12 = pppuVar8[10]; ppuVar12 != (undefined **)0x0;
            ppuVar12 = (undefined **)ppuVar12[3]) {
          puVar21 = ppuVar12[1];
          if ((~*(uint *)(puVar21 + 0x18) & 0x8001) == 0) goto LAB_14392aacd;
        }
        pppuVar8 = (undefined ***)(*(code *)(*pppuVar8)[0x56])(pppuVar8);
        pppuVar11 = pppuVar8;
      }
    }
    goto LAB_14392b457;
  }
  if (((*(char *)(lVar6 + 0xb4) != '\x01') || (lVar20 = *(longlong *)(lVar6 + 0x70), lVar20 == 0))
     || ((*(byte *)(lVar20 + 0x39) & 1) == 0)) goto LAB_14392b457;
  puVar17 = local_1f0 + 1;
  plVar7 = (longlong *)FUN_144741050(puVar17);
  lVar1 = DAT_14cb420f0;
  if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb420f0);
  }
  uVar4 = DAT_14cb420f8;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
     (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
    FUN_1480cd184(&local_1e8,lVar20,local_1f8,lVar6);
LAB_14392b3b7:
    local_88 = (undefined ***)*local_200;
    uStack_80 = local_200[1];
    local_78 = (undefined ***)local_200[2];
    uStack_70 = local_200[3];
    local_68 = (undefined **)local_200[4];
    lStack_60 = local_200[5];
    local_58 = local_200[6];
    uStack_50 = local_200[7];
    uVar3 = uStack_50;
    uVar15 = uStack_70;
    uVar4 = uStack_80;
    local_200[6] = local_1b8;
    local_200[7] = CONCAT44(uStack_1ac,uStack_1b0);
    local_200[4] = local_1c8;
    local_200[5] = lStack_1c0;
    local_200[2] = local_1d8;
    local_200[3] = CONCAT44(uStack_1cc,uStack_1d0);
    *local_200 = local_1e8;
    local_200[1] = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_1b8 = local_58;
    uStack_1b0 = (undefined4)uStack_50;
    uStack_1ac = uStack_50._4_4_;
    local_1c8 = local_68;
    lStack_1c0 = lStack_60;
    local_1e8 = local_88;
    local_1d8 = local_78;
    local_1b8 = local_58;
    uStack_50 = uVar3;
    local_1c8 = local_68;
    lStack_1c0 = lStack_60;
    uStack_1d0 = (undefined4)uStack_70;
    uStack_1cc = uStack_70._4_4_;
    uStack_1e0 = (undefined4)uStack_80;
    uStack_1dc = uStack_80._4_4_;
  }
  else {
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb42110;
    if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42110);
    }
    uVar4 = DAT_14cb42118;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd28c(&local_1e8,lVar20,local_1f8,lVar6);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb42140;
    if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42140);
    }
    uVar4 = DAT_14cb42148;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd334(&local_1e8,lVar20,local_1f8,lVar6);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb42160;
    if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42160);
    }
    uVar4 = DAT_14cb42168;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd3dc(&local_1e8,lVar20,local_1f8,lVar6);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb42180;
    if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42180);
    }
    uVar4 = DAT_14cb42188;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd484(&local_1e8,lVar20,local_1f8,lVar6);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    uVar4 = _DAT_14cb42138;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd55c(&local_1e8,lVar20,local_1f8,lVar6);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb420d0;
    if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420d0);
    }
    uVar4 = _DAT_14cb420d8;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 == lVar1) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd604(&local_1e8,lVar20,local_1f8,lVar6);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar1 = DAT_14cb420e0;
    if ((DAT_14cb420e0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420e0);
    }
    uVar4 = DAT_14cb420e8;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*plVar7 != lVar1) || ((short)plVar7[1] != (short)uVar4)) ||
       (*(char *)((longlong)plVar7 + 10) != (char)((ulonglong)uVar4 >> 0x10))) goto LAB_14392b457;
    puVar17 = *(undefined8 **)(lVar20 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_218 = FUN_1446ddbd2();
      local_210 = FUN_14067a048;
      local_220 = 0;
      local_228 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar22 = puVar17 != (undefined8 *)0x0;
      if (puVar17 != &DAT_14c951cd0 && bVar22) {
        do {
          puVar17 = (undefined8 *)puVar17[6];
          bVar22 = puVar17 != (undefined8 *)0x0;
          if (puVar17 == &DAT_14c951cd0) break;
        } while (puVar17 != (undefined8 *)0x0);
      }
      if (bVar22) goto LAB_14392a9a5;
LAB_14392af7e:
      local_1e8 = (undefined ***)0x0;
    }
    else {
      if ((puVar17[3] & DAT_14c951cd8) == 0) goto LAB_14392af7e;
LAB_14392a9a5:
      local_1c8 = &PTR_LAB_14ad962d0;
      lStack_1c0 = local_1f8;
      local_1e8 = (undefined ***)FUN_1480d967a;
      local_1b8 = lVar6;
    }
    local_88 = (undefined ***)*local_200;
    uStack_80 = local_200[1];
    local_78 = (undefined ***)local_200[2];
    uStack_70 = local_200[3];
    local_68 = (undefined **)local_200[4];
    lStack_60 = local_200[5];
    local_58 = local_200[6];
    uStack_50 = local_200[7];
    uVar3 = uStack_50;
    uVar15 = uStack_70;
    uVar4 = uStack_80;
    local_200[6] = local_1b8;
    local_200[7] = CONCAT44(uStack_1ac,uStack_1b0);
    local_200[4] = local_1c8;
    local_200[5] = lStack_1c0;
    local_200[2] = 0;
    local_200[3] = CONCAT44(uStack_1cc,uStack_1d0);
    *local_200 = local_1e8;
    local_200[1] = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_1b8 = local_58;
    uStack_1b0 = (undefined4)uStack_50;
    uStack_1ac = uStack_50._4_4_;
    local_1c8 = local_68;
    lStack_1c0 = lStack_60;
    local_1e8 = local_88;
    local_1d8 = local_78;
    local_1b8 = local_58;
    uStack_50 = uVar3;
    local_1c8 = local_68;
    lStack_1c0 = lStack_60;
    uStack_1d0 = (undefined4)uStack_70;
    uStack_1cc = uStack_70._4_4_;
    uStack_1e0 = (undefined4)uStack_80;
    uStack_1dc = uStack_80._4_4_;
  }
  uStack_80 = uVar4;
  uStack_70 = uVar15;
  local_88 = local_1e8;
  local_78 = local_1d8;
  local_68 = local_1c8;
  lStack_60 = lStack_1c0;
  local_58 = local_1b8;
  if (local_1e8 != (undefined ***)0x0) {
    pppuVar8 = local_1d8;
    if (local_1d8 == (undefined ***)0x0) {
      pppuVar8 = &local_1c8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
LAB_14392b457:
  if ((char)uStack_190 == '\x01') {
    FUN_1400020a8(local_1a8);
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14392aacd:
  if ((undefined ***)ppuVar12[4] != pppuVar2) {
    pppuVar11 = (undefined ***)(ppuVar12 + 3);
    do {
      for (ppuVar12 = *pppuVar11; ppuVar12 != (undefined **)0x0;
          ppuVar12 = (undefined **)ppuVar12[3]) {
        puVar21 = ppuVar12[1];
        if ((~*(uint *)(puVar21 + 0x18) & 0x8001) == 0) goto LAB_14392aacd;
      }
      pppuVar8 = (undefined ***)(*(code *)(*pppuVar8)[0x56])(pppuVar8);
      pppuVar11 = pppuVar8 + 10;
    } while (pppuVar8 != (undefined ***)0x0);
    goto LAB_14392b457;
  }
  if ((char)uVar16 != '\0') {
    iVar5 = *(int *)((longlong)ppuVar12 + 0x44);
    puVar17 = local_1f0 + 1;
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb420f0;
    if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420f0);
    }
    lVar20 = local_1f8;
    uVar4 = DAT_14cb420f8;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    lVar20 = lVar20 + iVar5;
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd8ac(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb42110;
    if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42110);
    }
    uVar4 = DAT_14cb42118;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cd9a4(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb42140;
    if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42140);
    }
    uVar4 = DAT_14cb42148;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cda42(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb42160;
    if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42160);
    }
    uVar4 = DAT_14cb42168;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cdae0(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb42180;
    if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42180);
    }
    uVar4 = DAT_14cb42188;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cdb7e(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    uVar4 = _DAT_14cb42138;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cdc46(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb420d0;
    if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420d0);
    }
    uVar4 = _DAT_14cb420d8;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cdce4(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    plVar7 = (longlong *)FUN_144741050(puVar17);
    lVar6 = DAT_14cb420e0;
    if ((DAT_14cb420e0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420e0);
    }
    uVar4 = DAT_14cb420e8;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (((*plVar7 == lVar6) && ((short)plVar7[1] == (short)uVar4)) &&
       (*(char *)((longlong)plVar7 + 10) == (char)((ulonglong)uVar4 >> 0x10))) {
      FUN_1480cdf6a(&local_1e8,ppuVar12,lVar20);
      goto LAB_14392b3b7;
    }
    goto LAB_14392b457;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_218 = FUN_1446ddbd2();
    local_210 = FUN_1403a682c;
    local_220 = 0;
    local_228 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar22 = puVar21 != (undefined *)0x0;
    if (puVar21 != &DAT_14c952a08 && bVar22) {
      do {
        puVar21 = *(undefined **)(puVar21 + 0x30);
        bVar22 = puVar21 != (undefined *)0x0;
        if (puVar21 == &DAT_14c952a08) break;
      } while (puVar21 != (undefined *)0x0);
    }
    if (!bVar22) goto LAB_14392b457;
  }
  else if ((*(ulonglong *)(puVar21 + 0x18) & DAT_14c952a10) == 0) goto LAB_14392b457;
  pppuVar8 = (undefined ***)ppuVar12[0xe];
  local_1f8 = local_1f8 + *(int *)((longlong)ppuVar12 + 0x44);
  pppuVar11 = pppuVar18;
  goto LAB_14392a9eb;
}



// FUNCTION 14392b518 FUN_14392b518 body=4063 status=ok
// SIG undefined FUN_14392b518(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14392b518(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  void **ppvVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auStack_1c8 [32];
  code **local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  void *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 local_140 [2];
  longlong local_138;
  undefined4 local_130 [2];
  longlong local_128;
  undefined4 local_120 [2];
  longlong local_118;
  undefined4 local_110 [2];
  longlong local_108;
  undefined4 local_100 [2];
  longlong local_f8;
  undefined4 local_f0 [2];
  longlong local_e8;
  undefined4 local_e0 [2];
  longlong local_d8;
  undefined4 local_d0 [2];
  void *local_c8;
  undefined8 uStack_c0;
  int local_ac;
  code *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar10 = 0;
  memset(param_2,0,0x150);
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uVar8 = FUN_144830b78(param_2 + 6,&DAT_14cb42160);
  param_2[6] = uVar8;
  *(undefined1 *)(param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x15) = 0;
  *(undefined8 *)(param_2 + 0x17) = 0;
  FUN_1404e5848(param_2,param_3 + 0x1e8,param_1 + 0x40);
  param_2[0x18] = *(undefined4 *)(param_1 + 0xa0);
  local_1a0 = param_2;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_14392bff9;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  if ((longlong)*(int *)(param_3 + 0x110) == 0) {
    uVar8 = 0;
    local_158 = (void *)0x0;
  }
  else {
    plVar18 = *(longlong **)(param_3 + 0x108);
    plVar21 = plVar18 + (longlong)*(int *)(param_3 + 0x110) * 2;
    local_190 = param_3;
    local_188 = plVar21;
    do {
      lVar28 = *plVar18;
      if (((*(int *)(lVar28 + 0xd4) != 4) && (*(longlong *)(lVar28 + 0x28) != 0)) &&
         (*(char *)(lVar28 + 0xd1) == '\x01')) {
        lVar28 = *(longlong *)(lVar28 + 0x18);
        local_198 = *(longlong **)(*(longlong *)(lVar28 + 0x60) + 0x20);
        local_180 = *(longlong **)(*(longlong *)(lVar28 + 0x60) + 0x28);
        if (local_180 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_180 + 1) = (int)local_180[1] + 1;
          UNLOCK();
        }
        local_178 = plVar18;
        if (0 < *(int *)(lVar28 + 0xb0)) {
          lVar27 = 0;
          local_170 = lVar28;
          do {
            if ((*(longlong *)(*(longlong *)(local_170 + 0xa8) + lVar27 * 8) == param_1) &&
               (lVar27 < (int)local_198[1])) {
              lVar28 = *local_198;
              uVar9 = *(uint *)(lVar28 + 0x30 + lVar27 * 0x38);
              iVar11 = (int)uStack_c0;
              lVar23 = (longlong)(int)uStack_c0;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9 + (int)uStack_c0);
              if ((uint)(uStack_c0._4_4_ - iVar11) < uVar9) {
                FUN_1447808da(&local_c8);
              }
              lVar28 = lVar28 + lVar27 * 0x38;
              memset((void *)(lVar23 * 4 + (longlong)local_c8),0,(longlong)(int)uVar9 << 2);
              if (0 < *(int *)(lVar28 + 0x30)) {
                lVar23 = 0;
                do {
                  lVar24 = *(longlong *)(lVar28 + 0x28);
                  puVar4 = (ulonglong *)(lVar24 + lVar23 * 0x50);
                  *(undefined4 *)((longlong)local_c8 + lVar23 * 4) = 0xffffffff;
                  local_a8 = (code *)0x14ad9655a;
                  local_a0._0_5_ = 0x10;
                  uVar9 = FUN_14001a6c0(&local_a8);
                  if (*(ulonglong *)(lVar24 + lVar23 * 0x50) == (ulonglong)uVar9) {
                    lVar24 = *(longlong *)(puVar4[3] + 8);
                    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                      lVar19 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                          lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                          break;
                        }
                        lVar19 = lVar19 + 0x10;
                      } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                    }
                    local_a8 = DAT_14cb420f0;
                    if ((DAT_14cb420f0 != (code *)0x0 & DAT_14c950c29) == 1) {
                      FUN_1456cec3c();
                    }
                    local_a0 = DAT_14cb420f8;
                    local_d8 = lVar24;
                    local_d0[0] = FUN_144830b78(local_d0,&local_a8);
LAB_14392bdeb:
                    uVar10 = FUN_1480ce188(local_1a0);
                    *(undefined4 *)((longlong)local_c8 + lVar23 * 4) = uVar10;
                  }
                  else {
                    local_a8 = (code *)0x14ad9656b;
                    local_a0._0_5_ = 0xf;
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb42110;
                      if ((DAT_14cb42110 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = DAT_14cb42118;
                      local_e8 = lVar24;
                      local_e0[0] = FUN_144830b78(local_e0,&local_a8);
                      goto LAB_14392bdeb;
                    }
                    local_a8 = (code *)0x14ad9657b;
                    local_a0._0_5_ = 0xf;
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb42140;
                      if ((DAT_14cb42140 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = DAT_14cb42148;
                      local_f8 = lVar24;
                      local_f0[0] = FUN_144830b78(local_f0,&local_a8);
                      goto LAB_14392bdeb;
                    }
                    local_a8 = (code *)0x14ad9658b;
                    local_a0._0_5_ = 0xf;
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb42160;
                      if ((DAT_14cb42160 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = DAT_14cb42168;
                      local_108 = lVar24;
                      local_100[0] = FUN_144830b78(local_100,&local_a8);
                      goto LAB_14392bdeb;
                    }
                    local_a8 = (code *)0x14ad9659b;
                    local_a0._0_5_ = 0x10;
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb42180;
                      if ((DAT_14cb42180 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = DAT_14cb42188;
                      local_118 = lVar24;
                      local_110[0] = FUN_144830b78(local_110,&local_a8);
                      goto LAB_14392bdeb;
                    }
                    local_a8 = (code *)0x14ad965ac;
                    local_a0._0_5_ = 0x13;
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb42130;
                      if ((DAT_14cb42130 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = _DAT_14cb42138;
                      local_128 = lVar24;
                      local_120[0] = FUN_144830b78(local_120,&local_a8);
                      goto LAB_14392bdeb;
                    }
                    local_a8 = (code *)0x14ad965c0;
                    local_a0._0_5_ = 0xe;
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb420d0;
                      if ((DAT_14cb420d0 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = _DAT_14cb420d8;
                      local_138 = lVar24;
                      local_130[0] = FUN_144830b78(local_130,&local_a8);
                      goto LAB_14392bdeb;
                    }
                    local_a8 = (code *)0x14ad965cf;
                    local_a0 = CONCAT35(local_a0._5_3_,0xf);
                    uVar9 = FUN_14001a6c0(&local_a8);
                    if (*puVar4 == (ulonglong)uVar9) {
                      lVar24 = *(longlong *)(puVar4[3] + 8);
                      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar19) == lVar24) {
                            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar19);
                            break;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar19);
                      }
                      local_a8 = DAT_14cb420e0;
                      if ((DAT_14cb420e0 != (code *)0x0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      local_a0 = DAT_14cb420e8;
                      local_148 = lVar24;
                      local_140[0] = FUN_144830b78(local_140,&local_a8);
                      goto LAB_14392bdeb;
                    }
                  }
                  lVar23 = lVar23 + 1;
                } while (lVar23 < *(int *)(lVar28 + 0x30));
              }
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 < *(int *)(local_170 + 0xb0));
        }
        plVar18 = local_178;
        plVar5 = local_180;
        plVar21 = local_188;
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_180 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_180)(local_180);
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
      plVar18 = plVar18 + 2;
    } while (plVar18 != plVar21);
    local_158 = local_c8;
    param_3 = local_190;
    uVar8 = (int)uStack_c0;
    uVar10 = uStack_c0._4_4_;
  }
  local_168 = *(longlong *)(param_1 + 0x28);
  uStack_160 = *(undefined8 *)(param_3 + 0x100);
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_150 = CONCAT44(uVar10,uVar8);
  lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar28 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 != 1) goto LAB_14392bedc;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_14392c392;
      goto LAB_14392bee5;
    }
LAB_14392c392:
    lVar28 = local_168;
    local_a8 = (code *)&uStack_160;
    FUN_1480dca52(local_168 + 0x10,&local_ac);
    lVar27 = *(longlong *)(lVar28 + 0x10);
    lVar23 = (longlong)local_ac * 0x140;
    lVar28 = lVar27 + lVar23;
    uVar17 = (int)local_150 + 3U & 0xfffffffc;
    uVar9 = *(uint *)(lVar28 + 0x110);
    uVar22 = (ulonglong)uVar9;
    iVar11 = *(int *)(lVar28 + 0x114);
    *(uint *)(lVar28 + 0x110) = uVar17 + uVar9;
    if (iVar11 - uVar9 < uVar17) {
      FUN_1447808da((undefined8 *)(lVar28 + 0x108));
      iVar11 = *(int *)(lVar27 + lVar23 + 0x114);
    }
    memset(*(void **)(lVar28 + 0x108),(int)CONCAT71((int7)(uVar22 >> 8),0xff),(longlong)iVar11 << 2)
    ;
    pvVar6 = local_158;
    ppvVar26 = (void **)(lVar27 + lVar23 + 0x118);
    if (ppvVar26 != &local_158) {
      iVar11 = (int)local_150;
      lVar28 = (longlong)(int)local_150;
      *(int *)(lVar27 + 0x120 + lVar23) = (int)local_150;
      if ((int)local_150 == 0 && *(int *)(lVar27 + 0x124 + lVar23) == 0) {
        *(undefined4 *)(lVar27 + lVar23 + 0x124) = 0;
      }
      else {
        FUN_1447bda9e(ppvVar26,local_150 & 0xffffffff);
        if (iVar11 != 0) {
          memcpy(*ppvVar26,pvVar6,lVar28 << 2);
        }
      }
    }
  }
  else {
LAB_14392bedc:
    if (iVar11 == 0x10) goto LAB_14392c392;
LAB_14392bee5:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar28 + 0xc60), iVar11 == 2))
      goto LAB_14392c392;
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        if (DVar12 == DVar13) goto LAB_14392c392;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar15 = (uint *)*puVar3;
      if (puVar15 != (uint *)0x0) goto LAB_14392c0d1;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_14393865d);
        }
        lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar28 + 0x310);
        *(undefined8 *)(lVar28 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar3 = puVar14;
        FUN_140217a48(puVar3);
        puVar15 = (uint *)*puVar3;
LAB_14392c0d1:
        puVar25 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar25 + 0x19);
        uVar9 = puVar15[0x12];
        if (puVar20 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 + uVar9 + 1;
          UNLOCK();
          if ((uVar17 ^ uVar9) != 0xffffffff) break;
          puVar15 = (uint *)*puVar3;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          puVar25 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar25 + 0x19);
          uVar9 = 0;
          if (puVar20 <= puVar15 + 0x4000) {
            uVar9 = 1;
            goto LAB_14392c151;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14392c151:
      *(uint **)(puVar15 + 0x10) = puVar20;
      puVar15[0x12] = uVar9;
      iVar11 = 0;
      FUN_1447247dc(puVar25,0);
      *puVar25 = &PTR_FUN_14ad98060;
      *(undefined4 *)(puVar25 + 0x15) = (undefined4)local_168;
      *(undefined4 *)((longlong)puVar25 + 0xac) = local_168._4_4_;
      *(undefined4 *)(puVar25 + 0x16) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)puVar25 + 0xb4) = uStack_160._4_4_;
      puVar25[0x17] = local_158;
      local_158 = (void *)0x0;
      *(int *)(puVar25 + 0x18) = (int)local_150;
      *(undefined4 *)((longlong)puVar25 + 0xc4) = local_150._4_4_;
      local_150 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar9 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar22 = 5;
      }
      if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
      }
      puVar25[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar25[9] = puVar25;
      puVar25[10] = puVar25;
      lVar28 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar28 == 0) {
        uVar7 = 1;
        if ((char)uVar22 != '\x06') {
          uVar7 = uVar22;
        }
        uVar22 = uVar7;
        uVar16 = 0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar28 + 0x38) >> 0x3b;
        }
        uVar16 = *(undefined8 *)(lVar28 + 0x30);
      }
      puVar25[0xf] = uVar16;
      puVar25[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar25 + 0x1c) = iVar11;
      if (puVar25 == (undefined8 *)0x0) {
        local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
        UNLOCK();
        local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(puVar25);
        LOCK();
        piVar2 = (int *)(puVar25 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar25)(puVar25,1);
        }
      }
    }
    else {
      local_a8 = (code *)0x0;
      local_98 = (longlong *)FUN_14001cc68(0x28,8);
      pvVar6 = local_158;
      *local_98 = (longlong)&PTR_LAB_14ad98000;
      local_158 = (void *)0x0;
      uVar10 = (int)local_150;
      uVar8 = local_150._4_4_;
      local_150 = 0;
      *(undefined4 *)(local_98 + 1) = (undefined4)local_168;
      *(undefined4 *)((longlong)local_98 + 0xc) = local_168._4_4_;
      *(undefined4 *)(local_98 + 2) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)local_98 + 0x14) = uStack_160._4_4_;
      local_98[3] = (longlong)pvVar6;
      *(undefined4 *)(local_98 + 4) = uVar10;
      *(undefined4 *)((longlong)local_98 + 0x24) = uVar8;
      if (local_98 + 1 != (longlong *)0x0) {
        local_a8 = FUN_1439384b6;
      }
      local_1a8 = &local_a8;
      FUN_14005a792(&DAT_14ca9a440,L"NDIUObjectPropertyReader_InitRT",&DAT_14cb3989c);
      if (local_a8 != (code *)0x0) {
        plVar18 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar18 = local_88;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
    }
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14392bff9:
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392c4f8 FUN_14392c4f8 body=1263 status=ok
// SIG undefined FUN_14392c4f8(void)

void FUN_14392c4f8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480ce240(param_2);
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_14392c606;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14392c942;
    if (iVar7 != 1) goto LAB_14392c55a;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14392c942;
  }
  else {
LAB_14392c55a:
    if (iVar7 == 0x10) goto LAB_14392c942;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14392c942:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14392c942;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14392c6c7;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14393865d);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_14392c6c7:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14392c747;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14392c747:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad98090;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad98070;
    local_68[0] = &LAB_143938940;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDIUObjectPropertyReader_InitRT",&DAT_14cb398a0);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14392c606:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392c9fc FUN_14392c9fc body=2980 status=ok
// SIG undefined FUN_14392c9fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14392c9fc(longlong param_1,uint *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint *puVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  uint local_184;
  longlong local_180;
  uint local_174;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  code *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  uint *puVar19;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar21 = param_2[0x18];
  uVar23 = *(uint *)(param_1 + 0xa0);
  if (uVar21 != uVar23) goto LAB_14392d20d;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    cVar12 = '\x01';
    plVar20 = (longlong *)0x0;
LAB_14392cacf:
    if (plVar20 == (longlong *)0x0 && cVar12 != '\0') {
      if (*(int *)(param_3 + 0x4c) == 0) {
LAB_14392cb3e:
        plVar20 = (longlong *)0x0;
      }
      else {
        uVar29 = *(uint *)(param_3 + 0x48);
        plVar20 = (longlong *)0x0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((((plVar20 == (longlong *)0x0) ||
               (((int)plVar20[2] != *(int *)(param_3 + 0x4c) ||
                ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) || (*plVar20 == 0)) ||
             (lVar26 = *(longlong *)(*plVar20 + 0x120), lVar26 == 0)) goto LAB_14392cb3e;
          plVar20 = *(longlong **)(lVar26 + 0xa8);
        }
      }
    }
  }
  else {
    uVar29 = *param_2;
    if (((((ulonglong)uVar29 == 0xffffffff) || ((int)uVar29 < 0)) ||
        (*(int *)(*(longlong *)(param_2 + 2) + 0x48) <= (int)uVar29)) ||
       (plVar20 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_2 + 2) + 0x40) + (ulonglong)uVar29 * 8),
       plVar20 == (longlong *)0x0)) {
      plVar20 = (longlong *)FUN_1404101e2(param_1 + 0x70);
      cVar12 = *(char *)(param_1 + 0x38);
      goto LAB_14392cacf;
    }
  }
  if (param_2[0xf] == 0) {
LAB_14392d292:
    plVar17 = (longlong *)0x0;
  }
  else {
    uVar29 = param_2[0xe];
    plVar17 = (longlong *)0x0;
    if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
      puVar18 = (undefined8 *)
                ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
      if ((puVar18 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar18 + 2) != param_2[0xf] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0))))
      goto LAB_14392d292;
      plVar17 = (longlong *)*puVar18;
    }
  }
  local_184 = uVar23;
  local_180 = param_1;
  local_174 = uVar21;
  local_170 = param_3;
  if (plVar17 != plVar20) {
    if (plVar20 == (longlong *)0x0) {
      param_2[0xe] = 0;
      param_2[0xf] = 0;
LAB_14392cc6e:
      lVar26 = 0;
    }
    else {
      uVar21 = *(uint *)((longlong)plVar20 + 0xc);
      param_2[0xe] = uVar21;
      if ((int)uVar21 < DAT_14c9647dc) {
        lVar26 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
      }
      else {
        lVar26 = 0;
      }
      uVar21 = *(uint *)(lVar26 + 0x10);
      if (*(uint *)(lVar26 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        uVar23 = DAT_14c964868 + 1;
        bVar28 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar28) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar23);
        }
        LOCK();
        uVar21 = *(uint *)(lVar26 + 0x10);
        bVar28 = uVar21 == 0;
        if (bVar28) {
          *(uint *)(lVar26 + 0x10) = uVar23;
          uVar21 = 0;
        }
        UNLOCK();
        if (bVar28) {
          uVar21 = uVar23;
        }
      }
      param_2[0xf] = uVar21;
      if (DAT_14cac9ca8 == 0) {
        local_1a0 = &local_118;
        local_118 = FUN_141030f22;
        local_190 = FUN_14081d0ea;
        local_198 = FUN_14081d0ea;
        local_1a8 = &LAB_1478c0a72;
        local_1b0 = &LAB_1417b2375;
        local_1b8 = L"Engine";
        local_1c0 = 0x1000000000;
        local_1c8 = 0x10000004;
        local_1d0 = 8;
        local_1d8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(plVar20[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
          DAT_14cac9ca8 + 0x30)) goto LAB_14392cc6e;
      lVar26 = *(longlong *)(param_1 + 0x98);
      if (lVar26 == 0) {
        lVar26 = plVar20[0x39];
      }
      else {
        local_160 = lVar26;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        lVar26 = (**(code **)(*plVar20 + 0x598))(plVar20,&local_160);
      }
    }
    if ((longlong)(int)param_2[0x12] != 0) {
      lVar22 = (longlong)(int)param_2[0x12] << 7;
      lVar25 = *(longlong *)(param_2 + 0x10) + 0x28;
      do {
        *(undefined4 *)(lVar25 + 8) = 0;
        *(undefined8 *)(lVar25 + -0x18) = 0;
        *(undefined8 *)(lVar25 + -0x10) = 0;
        *(undefined8 *)(lVar25 + -8) = 0;
        if (*(int *)(lVar25 + 0xc) != 0) {
          FUN_1402191ca(lVar25,0);
        }
        local_158 = *(code **)(lVar25 + 0x18);
        uStack_110 = *(double *)(lVar25 + 0x20);
        local_148 = *(longlong **)(lVar25 + 0x28);
        uStack_100 = *(undefined8 *)(lVar25 + 0x30);
        local_f8 = *(longlong *)(lVar25 + 0x38);
        uStack_f0 = *(undefined8 *)(lVar25 + 0x40);
        local_e8 = *(undefined8 *)(lVar25 + 0x48);
        uStack_e0 = *(undefined8 *)(lVar25 + 0x50);
        uVar38 = local_e8;
        uVar11 = uStack_e0;
        local_108 = local_148;
        uVar14 = uStack_100;
        local_118 = local_158;
        dVar4 = uStack_110;
        *(ulonglong *)(lVar25 + 0x48) = CONCAT44(uStack_124,local_128);
        *(ulonglong *)(lVar25 + 0x50) = CONCAT44(uStack_11c,uStack_120);
        *(longlong *)(lVar25 + 0x38) = local_138;
        *(undefined8 *)(lVar25 + 0x40) = uStack_130;
        *(undefined8 *)(lVar25 + 0x28) = 0;
        *(ulonglong *)(lVar25 + 0x30) = CONCAT44(uStack_13c,uStack_140);
        *(undefined8 *)(lVar25 + 0x18) = 0;
        *(ulonglong *)(lVar25 + 0x20) = CONCAT44(uStack_14c,uStack_150);
        uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
        uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
        local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
        uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
        local_128 = (undefined4)local_e8;
        uStack_124 = local_e8._4_4_;
        uStack_120 = (undefined4)uStack_e0;
        uStack_11c = uStack_e0._4_4_;
        local_138 = local_f8;
        uStack_130 = uStack_f0;
        uStack_140 = (undefined4)uStack_100;
        uStack_13c = uStack_100._4_4_;
        uStack_150 = (undefined4)uStack_110;
        uStack_14c = uStack_110._4_4_;
        uStack_110 = dVar4;
        uStack_100 = uVar14;
        local_e8 = uVar38;
        uStack_e0 = uVar11;
        if (local_158 != (code *)0x0) {
          plVar17 = local_148;
          if (local_148 == (longlong *)0x0) {
            plVar17 = &local_138;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (plVar20 != (longlong *)0x0) {
          FUN_14392a4b7(lVar25 + -0x28);
          if ((lVar26 != 0) && (*(longlong *)(lVar25 + 0x18) == 0)) {
            FUN_14392a4b7(lVar25 + -0x28);
          }
        }
        lVar25 = lVar25 + 0x80;
        lVar22 = lVar22 + -0x80;
      } while (lVar22 != 0);
    }
  }
  lVar22 = local_170;
  uVar21 = local_174;
  lVar26 = local_180;
  if ((char)param_2[0x34] == '\x01') {
    *(undefined1 *)(param_2 + 0x34) = 0;
  }
  if ((char)param_2[0x50] == '\x01') {
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  uVar23 = local_184;
  if (plVar20 == (longlong *)0x0) goto LAB_14392d20d;
  if (DAT_14cac9ca8 == 0) {
    local_1a0 = &local_118;
    local_118 = FUN_141030f22;
    local_190 = FUN_14081d0ea;
    local_198 = FUN_14081d0ea;
    local_1a8 = &LAB_1478c0a72;
    local_1b0 = &LAB_1417b2375;
    local_1b8 = L"Engine";
    local_1c0 = 0x1000000000;
    local_1c8 = 0x10000004;
    local_1d0 = 8;
    local_1d8 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  puVar24 = param_2 + 0x1c;
  lVar25 = plVar20[2];
  iVar15 = *(int *)(lVar25 + 0x38);
  if ((iVar15 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
      DAT_14cac9ca8 + 0x30)) {
    if (DAT_14cac7648 == 0) {
      local_1a0 = &local_118;
      local_118 = FUN_144a7958c;
      local_190 = FUN_14081d0ea;
      local_198 = FUN_143242436;
      local_1a8 = &LAB_14789ef1f;
      local_1b0 = &LAB_1417b008f;
      local_1b8 = L"Engine";
      local_1c0 = 0x8000000000;
      local_1c8 = 0x10000004;
      local_1d0 = 0x10;
      local_1d8 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      lVar25 = plVar20[2];
      iVar15 = *(int *)(lVar25 + 0x38);
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= iVar15) &&
       (lVar26 = *(longlong *)(lVar25 + 0x30),
       *(longlong *)(lVar26 + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)
       ) {
      if ((uint *)(plVar20 + 0x48) != puVar24) {
        lVar25 = 0xc;
        puVar27 = (uint *)(plVar20 + 0x48);
        goto LAB_14392cf42;
      }
      goto LAB_14392cf4c;
    }
  }
  else {
    lVar26 = *(longlong *)(lVar26 + 0x98);
    if (lVar26 == 0) {
      lVar25 = plVar20[0x39];
    }
    else {
      local_168 = lVar26;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      lVar25 = (**(code **)(*plVar20 + 0x598))(plVar20,&local_168);
    }
    if (lVar25 == 0) {
LAB_14392cf19:
      lVar26 = plVar20[0x39];
      puVar19 = (uint *)(lVar26 + 0x240);
      puVar27 = (uint *)&DAT_14c846480;
      if (lVar26 != 0) {
        puVar27 = puVar19;
      }
    }
    else {
      if (DAT_14cac7648 == 0) {
        local_1a0 = &local_118;
        local_118 = FUN_144a7958c;
        local_190 = FUN_14081d0ea;
        local_198 = FUN_143242436;
        local_1a8 = &LAB_14789ef1f;
        local_1b0 = &LAB_1417b008f;
        local_1b8 = L"Engine";
        local_1c0 = 0x8000000000;
        local_1c8 = 0x10000004;
        local_1d0 = 0x10;
        local_1d8 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      }
      if (*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < *(int *)(DAT_14cac7648 + 0x38))
      goto LAB_14392cf19;
      lVar26 = DAT_14cac7648 + 0x30;
      puVar19 = *(uint **)(*(longlong *)(lVar25 + 0x10) + 0x30);
      if (*(longlong *)(puVar19 + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 2) != lVar26)
      goto LAB_14392cf19;
      puVar27 = (uint *)(lVar25 + 0x240);
    }
    iVar15 = (int)puVar19;
    if (puVar27 != puVar24) {
      lVar25 = 0xc;
LAB_14392cf42:
      for (; lVar25 != 0; lVar25 = lVar25 + -1) {
        *(undefined8 *)puVar24 = *(undefined8 *)puVar27;
        puVar27 = puVar27 + 2;
        puVar24 = puVar24 + 2;
      }
      *(undefined1 *)(param_2 + 0x34) = 1;
      iVar15 = 0;
    }
LAB_14392cf4c:
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x2c);
    auVar2 = *(undefined1 (*) [16])(param_2 + 0x30);
    lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar40._8_4_ = (int)lVar25;
    auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    auVar40._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar13 = movmskpd((int)lVar26,auVar40);
    lVar26 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar43._8_4_ = (int)lVar26;
    auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    auVar43._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar16 = movmskpd(iVar15,auVar43);
    uVar23 = (uint)DAT_14c8464c0;
    uVar29 = DAT_14c8464c0._4_4_;
    uVar30 = (uint)DAT_14c8464c8;
    uVar31 = DAT_14c8464c8._4_4_;
    uVar33 = (uint)DAT_14c846480;
    uVar34 = DAT_14c846480._4_4_;
    uVar35 = (uint)DAT_14c846488;
    uVar36 = DAT_14c846488._4_4_;
    dVar4 = DAT_14c846490;
    dVar5 = DAT_14c846498;
    dVar39 = DAT_14c8464a0;
    dVar41 = DAT_14c8464a8;
    dVar32 = DAT_14c8464d0;
    uVar14 = uRam000000014c8464d8;
    dVar37 = DAT_14c8464b0;
    uVar38 = DAT_14c8464b8;
    if ((uVar16 & 0x3fffffff) != 0 || iVar13 != 0) {
      auVar43 = divpd(_DAT_149934d80,auVar1);
      auVar40 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      dVar39 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar43._0_8_);
      dVar41 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar43._8_8_);
      dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar40._0_8_);
      dVar10 = *(double *)(param_2 + 0x1c);
      dVar4 = *(double *)(param_2 + 0x20) * -1.0;
      dVar5 = *(double *)(param_2 + 0x22) * 1.0;
      dVar37 = -dVar10;
      dVar6 = -*(double *)(param_2 + 0x1e);
      dVar7 = *(double *)(param_2 + 0x24) * dVar39;
      dVar8 = *(double *)(param_2 + 0x26) * dVar41;
      dVar9 = *(double *)(param_2 + 0x28) * dVar32;
      dVar42 = dVar8 * dVar37 - dVar6 * dVar7;
      dVar44 = dVar9 * dVar6 - dVar4 * dVar8;
      dVar45 = dVar7 * dVar4 - dVar37 * dVar9;
      dVar44 = dVar44 + dVar44;
      dVar45 = dVar45 + dVar45;
      dVar42 = dVar42 + dVar42;
      uVar23 = SUB84(dVar39,0);
      uVar29 = (uint)((ulonglong)dVar39 >> 0x20);
      uVar30 = SUB84(dVar41,0);
      uVar31 = (uint)((ulonglong)dVar41 >> 0x20);
      uVar33 = SUB84(dVar10,0);
      uVar34 = (uint)((ulonglong)dVar37 >> 0x20);
      uVar35 = SUB84(*(double *)(param_2 + 0x1e),0);
      uVar36 = (uint)((ulonglong)dVar6 >> 0x20);
      dVar39 = 0.0 - ((dVar42 * dVar6 - dVar45 * dVar4) + dVar5 * dVar44 + dVar7);
      dVar41 = 0.0 - (dVar42 * dVar10 + dVar4 * dVar44 + dVar5 * dVar45 + dVar8);
      uVar14 = 0;
      dVar37 = 0.0 - (dVar5 * dVar42 + dVar9 + (dVar45 * dVar37 - dVar44 * dVar6));
      uVar38 = 0;
    }
    param_2[0x38] = uVar33;
    param_2[0x39] = uVar34;
    param_2[0x3a] = uVar35;
    param_2[0x3b] = uVar36;
    auVar1._8_4_ = SUB84(dVar5,0);
    auVar1._0_8_ = dVar4;
    auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x3c) = auVar1;
    *(double *)(param_2 + 0x40) = dVar39;
    *(double *)(param_2 + 0x42) = dVar41;
    *(double *)(param_2 + 0x44) = dVar37;
    *(undefined8 *)(param_2 + 0x46) = uVar38;
    param_2[0x48] = uVar23;
    param_2[0x49] = uVar29;
    param_2[0x4a] = uVar30;
    param_2[0x4b] = uVar31;
    *(double *)(param_2 + 0x4c) = dVar32;
    *(undefined8 *)(param_2 + 0x4e) = uVar14;
    *(undefined1 *)(param_2 + 0x50) = 1;
  }
  local_108 = (longlong *)((double)*(float *)(lVar22 + 0x14) * 65536.0);
  uStack_110 = (double)*(float *)(lVar22 + 0x10) * 65536.0;
  local_118 = (code *)((double)*(float *)(lVar22 + 0xc) * 65536.0);
  uVar23 = local_184;
  if ((longlong)(int)param_2[0x12] != 0) {
    lVar26 = (longlong)(int)param_2[0x12] << 7;
    plVar20 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x60);
    do {
      pcVar3 = (code *)plVar20[-4];
      if (pcVar3 != (code *)0x0) {
        local_158 = (code *)((ulonglong)*(uint *)((longlong)plVar20 + -0x54) +
                            *(longlong *)(param_2 + 0x14));
        plVar17 = (longlong *)plVar20[-2];
        if ((longlong *)plVar20[-2] == (longlong *)0x0) {
          plVar17 = plVar20;
        }
        uVar14 = (**(code **)(*plVar17 + 8))();
        (*pcVar3)(uVar14,&local_118,&local_158);
      }
      plVar20 = plVar20 + 0x10;
      lVar26 = lVar26 + -0x80;
      uVar23 = local_184;
    } while (lVar26 != 0);
  }
LAB_14392d20d:
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 != uVar23;
}



// FUNCTION 14392d5a2 FUN_14392d5a2 body=1259 status=ok
// SIG undefined FUN_14392d5a2(void)

void FUN_14392d5a2(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14392d9e8;
    if (iVar7 != 1) goto LAB_14392d600;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14392d9e8;
  }
  else {
LAB_14392d600:
    if (iVar7 == 0x10) goto LAB_14392d9e8;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14392d9e8:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14392d9e8;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14392d76d;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14393865d);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_14392d76d:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14392d7ed;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14392d7ed:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad98660;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad98640;
    local_68[0] = &LAB_143939d88;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDITexture_RemoveInstance",&DAT_14cb3992c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392daa2 FUN_14392daa2 body=1660 status=ok
// SIG undefined FUN_14392daa2(void)

undefined8 FUN_14392daa2(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar12 = param_2[2];
  if ((ulonglong)uVar12 == 0xffffffff) {
    lVar18 = *(longlong *)(param_1 + 0x38);
    if (lVar18 == 0) goto LAB_14392db13;
LAB_14392db2b:
    uVar12 = *(uint *)(lVar18 + 0xc);
    *param_2 = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      bVar19 = false;
      LOCK();
      uVar4 = *(uint *)(lVar8 + 0x10);
      bVar20 = uVar4 == 0;
      if (bVar20) {
        *(uint *)(lVar8 + 0x10) = uVar12;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar4 = uVar12;
      }
    }
    else {
      bVar19 = false;
      uVar4 = *(uint *)(lVar8 + 0x10);
    }
  }
  else {
    if (((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(*(longlong *)(param_2 + 4) + 0x48))) &&
       (lVar18 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 4) + 0x40) + (ulonglong)uVar12 * 8),
       lVar18 != 0)) {
      lVar8 = FUN_141108188();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_14392db2b;
    }
LAB_14392db13:
    *param_2 = 0;
    lVar18 = 0;
    bVar19 = true;
    uVar4 = 0;
  }
  param_2[1] = uVar4;
  local_90 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = *(undefined8 *)(param_3 + 0x100);
  local_80._0_4_ = 0;
  if (bVar19) {
    iVar5 = 0;
    uVar12 = (uint)local_80;
  }
  else {
    uVar12 = *(uint *)(lVar18 + 0xc);
    local_80 = (ulonglong)uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar5 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar5 = *(int *)(lVar18 + 0x10);
      bVar19 = iVar5 == 0;
      if (bVar19) {
        *(int *)(lVar18 + 0x10) = iVar16;
        iVar5 = 0;
      }
      UNLOCK();
      uVar12 = (uint)local_80;
      if (bVar19) {
        iVar5 = iVar16;
      }
    }
  }
  local_80._0_4_ = uVar12;
  local_80 = CONCAT44(iVar5,(uint)local_80);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar18 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_14392dbe2;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14392dbeb;
      goto LAB_14392dc71;
    }
  }
  else {
LAB_14392dbe2:
    if (iVar5 != 0x10) {
LAB_14392dc71:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar18 + 0xc60), iVar5 == 2))
        goto LAB_14392dbeb;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_14392dbeb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14392ddea;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14393865d);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14392ddea:
          puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar4 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar17 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14392de6a;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14392de6a:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar5 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14ad98690;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_90;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_90._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_88._4_4_;
        puVar17[0x17] = local_80;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar5 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar17[0xf] = uVar11;
        puVar17[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar5;
        if (puVar17 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad98670;
        local_50 = (undefined4)local_90;
        uStack_4c = local_90._4_4_;
        uStack_48 = (undefined4)uStack_88;
        uStack_44 = uStack_88._4_4_;
        local_40 = local_80;
        local_78[0] = &LAB_14393a3b6;
        FUN_14005a792(&DAT_14ca9a440,L"NDITexture_UpdateInstance",&DAT_14cb39930);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14392dd1e;
    }
  }
LAB_14392dbeb:
  FUN_143939f60(&local_90);
LAB_14392dd1e:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392e120 FUN_14392e120 body=1216 status=ok
// SIG undefined FUN_14392e120(void)

void FUN_14392e120(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar4 == (longlong *)0x0) goto LAB_14392e25b;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14392e175;
    if (iVar7 != 1) goto LAB_14392e170;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14392e175;
  }
  else {
LAB_14392e170:
    if (iVar7 == 0x10) goto LAB_14392e175;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14392e175:
      (**(code **)(*plVar4 + 0x20))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14392e175;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14392e31d;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14393865d);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_14392e31d:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14392e39d;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14392e39d:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14ad98930;
    puVar17[0x15] = plVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar17[0xf] = uVar12;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad98910;
    local_68[0] = FUN_14393a572;
    local_40 = plVar4;
    FUN_14005a792(&DAT_14ca9a440,L"BeginDestroyCommand",&DAT_14cb399bc);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14392e25b:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392e5fa FUN_14392e5fa body=1001 status=ok
// SIG undefined FUN_14392e5fa(void)

void FUN_14392e5fa(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"UvMappingBuffer";
  local_78 = param_1 + 0x10;
  local_48 = 0;
  uStack_40 = 0;
  iVar4 = *(int *)(param_1 + 0x20);
  local_98 = (undefined1)iVar4;
  uStack_97 = (undefined1)((uint)iVar4 >> 8);
  uStack_96 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar4 == 0) {
    FUN_14570b4be(param_2,&local_80,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x30);
  if (plVar9 == &local_a0) {
LAB_14392e7b0:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14392e7b0;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 0x1d;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x38);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_14392e93a;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar10 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_14392e93a:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14392e9e4 FUN_14392e9e4 body=269 status=ok
// SIG undefined FUN_14392e9e4(void)

void FUN_14392e9e4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 14392eaf2 FUN_14392eaf2 body=77 status=ok
// SIG undefined FUN_14392eaf2(void)

void FUN_14392eaf2(undefined2 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_1480d1bbe(*(longlong *)(param_1 + 4),*param_1);
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014392eb3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14392eb40 FUN_14392eb40 body=158 status=ok
// SIG undefined FUN_14392eb40(void)

undefined2 * FUN_14392eb40(undefined2 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 4);
    lVar4 = *(longlong *)(param_2 + 8);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 8);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(longlong *)(param_1 + 8) = lVar4;
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
    *(undefined8 *)(param_2 + 4) = 0;
    plVar5 = *(longlong **)(param_2 + 8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 8) = 0;
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
  return param_1;
}



// FUNCTION 14392ebde FUN_14392ebde body=55 status=ok
// SIG undefined FUN_14392ebde(void)

void FUN_14392ebde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39200 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39200 = FUN_14171c317(FUN_14646afd6,uVar1,L"ENiagaraSystemSpawnSectionStartBehavior");
  }
  return;
}



// FUNCTION 14392ec15 FUN_14392ec15 body=55 status=ok
// SIG undefined FUN_14392ec15(void)

void FUN_14392ec15(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39218 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39218 = FUN_14171c317(FUN_14646b005,uVar1,L"ENiagaraSystemSpawnSectionEvaluateBehavior")
    ;
  }
  return;
}



// FUNCTION 14392ec4c FUN_14392ec4c body=55 status=ok
// SIG undefined FUN_14392ec4c(void)

void FUN_14392ec4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39230 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39230 = FUN_14171c317(FUN_14646b034,uVar1,L"ENiagaraSystemSpawnSectionEndBehavior");
  }
  return;
}



// FUNCTION 14392ec9e FUN_14392ec9e body=2206 status=ok
// SIG undefined FUN_14392ec9e(void)

void FUN_14392ec9e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb393f8) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39400) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39408) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39410) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39418) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39420) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad98e90;
  }
  else if (lVar1 == DAT_14cb39428) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad98f00;
  }
  else if (lVar1 == DAT_14cb39430) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad98f70;
  }
  else if (lVar1 == DAT_14cb39438) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad98fe0;
  }
  else if (lVar1 == DAT_14cb39440) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad99050;
  }
  else if (lVar1 == DAT_14cb39448) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad990c0;
  }
  else if (lVar1 == DAT_14cb39450) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad99130;
  }
  else if (lVar1 == DAT_14cb39458) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad991a0;
  }
  else if (lVar1 == DAT_14cb39460) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad99210;
  }
  else if (lVar1 == DAT_14cb39468) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad99280;
  }
  else if (lVar1 == DAT_14cb39470) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad992f0;
  }
  else {
    if (lVar1 == DAT_14cb39480) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb39478) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb39488) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14ad99360;
    }
    else if (lVar1 == DAT_14cb39490) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14ad993d0;
    }
    else {
      if (lVar1 != DAT_14cb39498) goto LAB_14392edd1;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14ad99440;
    }
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_14392edd1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392f5c8 FUN_14392f5c8 body=311 status=ok
// SIG undefined FUN_14392f5c8(void)

void FUN_14392f5c8(char *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140982196(local_20,param_1);
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    local_28 = (uint)bVar2;
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    local_30 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_30 = &local_24;
      local_28 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x80);
      local_28 = 1;
      local_30 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    uVar4 = *(undefined4 *)(local_18 + 0x290);
    iVar9 = 0;
    do {
      puVar1 = local_30 + (int)local_28;
      *local_30 = uVar4;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392f700 FUN_14392f700 body=311 status=ok
// SIG undefined FUN_14392f700(void)

void FUN_14392f700(char *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140982196(local_20,param_1);
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    local_28 = (uint)bVar2;
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    local_30 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_30 = &local_24;
      local_28 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x80);
      local_28 = 1;
      local_30 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    uVar4 = *(undefined4 *)(local_18 + 0x294);
    iVar9 = 0;
    do {
      puVar1 = local_30 + (int)local_28;
      *local_30 = uVar4;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14392f838 FUN_14392f838 body=1346 status=ok
// SIG undefined FUN_14392f838(void)

void FUN_14392f838(char *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int *piVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined4 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  uint *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140982196(local_48,param_1);
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    local_50 = (uint)bVar2;
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    local_58 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar6 = uVar3 & 0x7fff;
    if (uVar6 == 0x7fff) {
      local_58 = &local_4c;
      local_50 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      local_50 = 1;
      local_58 = (undefined4 *)
                 ((ulonglong)(uVar6 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  if (((((local_40[1] != 0) && (uVar6 = *local_40, -1 < (int)uVar6)) && ((int)uVar6 < DAT_14c9647dc)
       ) && ((plVar10 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == local_40[1])))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((*plVar10 != 0 && (DAT_14cad2858 == 0)))))) {
    local_70 = &local_38;
    local_38 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_146395584;
    local_78 = &LAB_147a0ba80;
    local_80 = &LAB_14575ccce;
    local_88 = L"Engine";
    local_90 = 0x40000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (local_40[0x15] == 0) {
LAB_14392fb22:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar6 = local_40[0x14];
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar11 + 2) != local_40[0x15] || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))
         )) goto LAB_14392fb22;
      plVar10 = (longlong *)*puVar11;
    }
  }
  if ((((local_40[1] == 0) || (uVar6 = *local_40, (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6))
     || (((plVar12 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          plVar12 == (longlong *)0x0 || (*(uint *)(plVar12 + 2) != local_40[1])) ||
         (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar5 = *plVar12, lVar5 == 0))))))
  goto LAB_14392fa5b;
  if (DAT_14cad2858 == 0) {
    local_70 = &local_38;
    local_38 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_146395584;
    local_78 = &LAB_147a0ba80;
    local_80 = &LAB_14575ccce;
    local_88 = L"Engine";
    local_90 = 0x40000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14392fa5b;
  lVar8 = *(longlong *)(lVar5 + 0x658);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(lVar5 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) goto LAB_14392fd6e;
    if (lVar8 == 0) goto LAB_14392fa5b;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_14392fd6e:
    FUN_1456cec3c(lVar8);
  }
  if (DAT_14cb06da8 == 0) {
    local_70 = &local_38;
    local_38 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1464003b0;
    local_78 = &LAB_147d17bdf;
    local_80 = &LAB_1417edf22;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar5,local_40[199],0);
  }
LAB_14392fa5b:
  lVar5 = *(longlong *)(local_40 + 0x18);
  if (lVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if (plVar10 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar10 + 0x310))(plVar10);
    uVar7 = *(undefined4 *)(lVar8 + 0x28);
  }
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar9 = 0;
    do {
      puVar1 = local_58 + (int)local_50;
      *local_58 = uVar7;
      iVar9 = iVar9 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      local_58 = puVar1;
    } while (iVar9 < *piVar13);
  }
  if (lVar5 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14392fd7c FUN_14392fd7c body=1676 status=ok
// SIG undefined FUN_14392fd7c(void)

void FUN_14392fd7c(byte *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  undefined4 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  uint *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140982196(local_60,param_1);
  if (*param_1 == 1) {
    iVar14 = *(int *)(param_1 + 0x30);
    uVar18 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar14);
    *(int *)(param_1 + 0x30) = iVar14 + 1;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar14 * 8);
    iVar14 = *(int *)(param_1 + 0x44) * uVar18;
    bVar6 = 1;
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar17 = uVar2 & 0x7fff;
    uVar18 = (uint)(uVar2 >> 0xf);
    lVar5 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar2 < 0) {
      lVar8 = (ulonglong)(uVar17 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar5 + 0x20);
      lVar8 = 0;
      if (iVar14 <= (int)uVar17) {
        do {
          uVar17 = uVar17 - iVar14;
          iVar14 = (*(int **)(lVar5 + 0x20))[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (iVar14 <= (int)uVar17);
      }
      lVar8 = (longlong)(int)uVar17 + *(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar8 * 8);
    }
    iVar14 = *(int *)(lVar5 + 0x4c) * uVar18;
    bVar6 = *param_1;
  }
  if ((bVar6 & 1) == 0) {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar17 = uVar2 & 0x7fff;
    if (uVar17 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      local_68 = 1;
      local_70 = (undefined4 *)
                 ((ulonglong)(uVar17 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  else {
    iVar15 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15);
    local_68 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar15 + 1;
    local_70 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar15 * 8));
  }
  if ((((local_58[1] != 0) && (uVar17 = *local_58, -1 < (int)uVar17)) &&
      ((int)uVar17 < DAT_14c9647dc)) &&
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == local_58[1])) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((*plVar10 != 0 && (DAT_14cad2858 == 0))))))))
  {
    local_90 = &local_50;
    local_50 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_146395584;
    local_98 = &LAB_147a0ba80;
    local_a0 = &LAB_14575ccce;
    local_a8 = L"Engine";
    local_b0 = 0x40000000000;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858);
  }
  if (local_58[0x15] == 0) {
LAB_143930185:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar17 = local_58[0x14];
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar11 + 2) != local_58[0x15] || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))
         )) goto LAB_143930185;
      plVar10 = (longlong *)*puVar11;
    }
  }
  if ((((local_58[1] == 0) || (uVar17 = *local_58, (int)uVar17 < 0)) ||
      (DAT_14c9647dc <= (int)uVar17)) ||
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || (*(uint *)(plVar12 + 2) != local_58[1])) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar5 = *plVar12, lVar5 == 0))))))
  goto LAB_143930025;
  if (DAT_14cad2858 == 0) {
    local_90 = &local_50;
    local_50 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_146395584;
    local_98 = &LAB_147a0ba80;
    local_a0 = &LAB_14575ccce;
    local_a8 = L"Engine";
    local_b0 = 0x40000000000;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_143930025;
  lVar7 = *(longlong *)(lVar5 + 0x658);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar5 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) goto LAB_1439303fc;
    if (lVar7 == 0) goto LAB_143930025;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_1439303fc:
    FUN_1456cec3c(lVar7);
  }
  if (DAT_14cb06da8 == 0) {
    local_90 = &local_50;
    local_50 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464003b0;
    local_98 = &LAB_147d17bdf;
    local_a0 = &LAB_1417edf22;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000000;
    local_c0 = 8;
    local_c8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar5,local_58[199],0);
  }
LAB_143930025:
  lVar5 = *(longlong *)(local_58 + 0x18);
  if (lVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if (plVar10 == (longlong *)0x0) {
    pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar9 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar9) {
      iVar14 = 0;
      do {
        puVar1 = local_70 + (int)local_68;
        *local_70 = 0xffffffff;
        iVar14 = iVar14 + 1;
        pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar9 = param_1 + 0x3c;
        }
        local_70 = puVar1;
      } while (iVar14 < *(int *)pbVar9);
    }
  }
  else {
    lVar7 = (**(code **)(*plVar10 + 0x310))(plVar10);
    pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar9 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar9) {
      piVar13 = (int *)(lVar8 + (longlong)iVar14 * 4);
      iVar14 = *(int *)(lVar7 + 0x28);
      iVar15 = 0;
      do {
        iVar3 = *piVar13;
        uVar16 = 0xffffffff;
        if (((-1 < (longlong)iVar3) && (iVar3 < iVar14)) && (iVar3 < *(int *)(lVar7 + 0x28))) {
          uVar16 = *(undefined4 *)(*(longlong *)(lVar7 + 0x20) + 8 + (longlong)iVar3 * 0xc);
        }
        puVar1 = local_70 + (int)local_68;
        *local_70 = uVar16;
        iVar15 = iVar15 + 1;
        pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar9 = param_1 + 0x3c;
        }
        piVar13 = (int *)((longlong)piVar13 + (ulonglong)(uVar18 << 2));
        local_70 = puVar1;
      } while (iVar15 < *(int *)pbVar9);
    }
  }
  if (lVar5 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14393040a FUN_14393040a body=1494 status=ok
// SIG undefined FUN_14393040a(void)

void FUN_14393040a(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb394a0) {
LAB_14393084f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb394a8) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb394b0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14ad999f0;
  }
  else if (lVar1 == DAT_14cb394b8) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14ad99a60;
  }
  else {
    if (lVar1 == DAT_14cb394c0) {
      if (*(char *)(param_3 + 0x318) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394c8) {
      if (*(char *)(param_3 + 0x318) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394d0) {
      if (*(char *)(param_3 + 0x318) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394d8) {
      if (*(char *)(param_3 + 0x318) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394e0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394e8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394f0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb394f8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb39500) {
      if ((*(longlong *)(param_3 + 800) != 0) && (*(int *)(*(longlong *)(param_3 + 800) + 300) != 0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb39508) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb39510) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14ad9bd60;
    }
    else if (lVar1 == DAT_14cb39518) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14ad9bdd0;
    }
    else {
      if (lVar1 != DAT_14cb39520) {
        if (lVar1 == DAT_14cb39528) goto LAB_14393084f;
        if (lVar1 == DAT_14cb39530) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        if (lVar1 == DAT_14cb39538) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        if (lVar1 == DAT_14cb399d8) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        if (lVar1 == DAT_14cb399e0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        goto LAB_1439307a3;
      }
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14ad9be40;
    }
  }
  puVar3 = local_30;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_14393074e:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_14393074e;
    }
  }
  *param_4 = (longlong)puVar3;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1439307a3;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1439307a3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143930b88 FUN_143930b88 body=4896 status=ok
// SIG undefined FUN_143930b88(void)

void FUN_143930b88(char *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  byte bVar6;
  ushort uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  undefined1 *local_188;
  code *local_180;
  longlong local_178;
  float *local_170;
  uint local_168;
  float local_164;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150;
  uint local_148;
  float local_144;
  int *local_140;
  uint local_138;
  int local_134;
  char *local_130;
  int *local_128 [2];
  int local_118;
  int *local_110;
  int local_100;
  int *local_f8;
  int local_e8;
  int local_d8;
  int iStack_d4;
  int local_d0;
  undefined1 local_c8 [8];
  uint *local_c0;
  code *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_140982196(local_c8,param_1);
  local_130 = param_1;
  FUN_1416b93de(local_128,param_1);
  puVar11 = local_c0;
  local_d8 = 0;
  iStack_d4 = 0;
  local_d0 = 0;
  if (*param_1 == '\x01') {
    iVar27 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar27);
    local_138 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar27 + 1;
    local_140 = (int *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar27 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar7 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_140 = &local_134;
      local_138 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x80);
      local_138 = 1;
      local_140 = (int *)((ulonglong)(uVar12 * *(int *)(lVar13 + 0x80)) +
                          *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar27 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar27);
    local_168 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar27 + 1;
    local_170 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar27 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar7 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_170 = &local_164;
      local_168 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x80);
      local_168 = 1;
      local_170 = (float *)((ulonglong)(uVar12 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar27 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar27);
    local_158 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar27 + 1;
    local_160 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar27 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar7 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar12 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar27 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar27);
    local_148 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar27 + 1;
    local_150 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar27 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar7 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar12 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (((((local_c0[1] != 0) && (uVar12 = *local_c0, -1 < (int)uVar12)) &&
       ((int)uVar12 < DAT_14c9647dc)) &&
      ((plVar19 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == local_c0[1])))) &&
     (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && ((*plVar19 != 0 && (DAT_14cad2858 == 0)))))) {
    local_190 = &local_b8;
    local_b8 = FUN_144a7958c;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_146395584;
    local_198 = &LAB_147a0ba80;
    local_1a0 = &LAB_14575ccce;
    local_1a8 = L"Engine";
    local_1b0 = 0x40000000000;
    local_1b8 = 0x10000004;
    local_1c0 = 0x10;
    local_1c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (puVar11[0x15] == 0) {
LAB_143931b99:
    plVar19 = (longlong *)0x0;
  }
  else {
    uVar12 = puVar11[0x14];
    plVar19 = (longlong *)0x0;
    if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
      puVar20 = (undefined8 *)
                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
      if ((puVar20 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar20 + 2) != puVar11[0x15] || ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))
         ) goto LAB_143931b99;
      plVar19 = (longlong *)*puVar20;
    }
  }
  lVar13 = *(longlong *)(puVar11 + 200);
  if ((((puVar11[1] != 0) && (uVar12 = *puVar11, -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)
      ) && (((plVar21 = (longlong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
             plVar21 != (longlong *)0x0 && (*(uint *)(plVar21 + 2) == puVar11[1])) &&
            (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar28 = *plVar21, lVar28 != 0)))))) {
    if (DAT_14cad2858 == 0) {
      local_190 = &local_b8;
      local_b8 = FUN_144a7958c;
      local_180 = FUN_14081d0ea;
      local_188 = &LAB_146395584;
      local_198 = &LAB_147a0ba80;
      local_1a0 = &LAB_14575ccce;
      local_1a8 = L"Engine";
      local_1b0 = 0x40000000000;
      local_1b8 = 0x10000004;
      local_1c0 = 0x10;
      local_1c8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar28 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      lVar15 = *(longlong *)(lVar28 + 0x658);
      if (lVar15 == 0) {
        lVar15 = *(longlong *)(lVar28 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) goto LAB_143931e9c;
        if (lVar15 != 0) goto LAB_143930f66;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_143931e9c:
          FUN_1456cec3c(lVar15);
        }
LAB_143930f66:
        if (DAT_14cb06da8 == 0) {
          local_190 = &local_b8;
          local_b8 = FUN_1449e2820;
          local_180 = FUN_14081d0ea;
          local_188 = &LAB_1464003b0;
          local_198 = &LAB_147d17bdf;
          local_1a0 = &LAB_1417edf22;
          local_1a8 = L"Engine";
          local_1b0 = 0;
          local_1b8 = 0x10000000;
          local_1c0 = 8;
          local_1c8 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
          FUN_1417c143e(lVar28,puVar11[199],0);
        }
      }
    }
  }
  if (lVar13 == 0) {
    plVar21 = (longlong *)0x0;
  }
  else {
    plVar21 = *(longlong **)(lVar13 + 0x28);
  }
  lVar28 = *(longlong *)(puVar11 + 0x18);
  if (lVar28 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar28 + 8));
  }
  local_178 = lVar28;
  if (lVar13 == 0) {
    piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar16 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar16) {
      iVar27 = 0;
      do {
        *local_140 = -1;
        pfVar2 = local_170 + (int)local_168;
        local_140 = local_140 + (int)local_138;
        *local_170 = (float)DAT_14c846330;
        pfVar3 = local_160 + (int)local_158;
        *local_160 = DAT_14c846330._4_4_;
        pfVar4 = local_150 + (int)local_148;
        *local_150 = DAT_14c846338;
        iVar27 = iVar27 + 1;
        piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar16 = (int *)(param_1 + 0x3c);
        }
        local_170 = pfVar2;
        local_160 = pfVar3;
        local_150 = pfVar4;
      } while (iVar27 < *piVar16);
    }
  }
  else {
    lVar13 = (**(code **)(*plVar19 + 800))(plVar19,local_c0[199]);
    if ((*(byte *)(lVar13 + 0xe8) & 1) != 0) {
      if (0 < *(int *)(plVar19[0x96] + 0x10 + (longlong)(int)local_c0[199] * 0x48)) {
        piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar16 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar16) {
          lVar13 = plVar19[0x96] + (longlong)(int)local_c0[199] * 0x48;
          lVar28 = 0;
          do {
            pcVar10 = local_130;
            piVar16 = local_128[0] + local_118;
            local_d8 = *local_128[0];
            piVar17 = local_110 + local_100;
            iStack_d4 = *local_110;
            piVar1 = local_f8 + local_e8;
            local_d0 = *local_f8;
            local_128[0] = piVar16;
            local_110 = piVar17;
            local_f8 = piVar1;
            if (local_d0 == -1) {
              if (*local_130 == '\0') {
                lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
              }
              else {
                lVar15 = *(longlong *)(local_130 + 0x58);
              }
              uVar12 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar15 + 4) = uVar12;
              fVar30 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
            }
            else {
              if (*local_130 == '\0') {
                plVar19 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
              }
              else {
                plVar19 = *(longlong **)(local_130 + 0x60);
                if (*plVar19 == 0) {
                  uVar14 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                  **(undefined8 **)(pcVar10 + 0x60) = uVar14;
                  plVar19 = *(longlong **)(pcVar10 + 0x60);
                }
              }
              uVar12 = *(uint *)(*plVar19 + lVar28 * 4);
              *(uint *)(*plVar19 + lVar28 * 4) = uVar12 + 1;
              iVar18 = (local_d0 << 0x10 | uVar12) * 0x19660d;
              iVar27 = iVar18 + 0x3c6ef35f;
              iVar26 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar27 + local_d8 * 0x19660d;
              iVar23 = iVar26 + 0x3c6ef35f;
              iVar27 = iStack_d4 * 0x19660d + iVar27 * iVar23 + 0x3c6ef35f;
              fVar30 = (float)((iVar18 + iVar23 * iVar27 + 0x3c6ef35f) * iVar27 + iVar26 +
                               0x3c6ef35fU >> 8) * 5.9604645e-08;
            }
            pcVar10 = local_130;
            if (local_d0 == -1) {
              if (*local_130 == '\0') {
                lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
              }
              else {
                lVar15 = *(longlong *)(local_130 + 0x58);
              }
              uVar12 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar15 + 4) = uVar12;
              fVar29 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
            }
            else {
              if (*local_130 == '\0') {
                plVar19 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
              }
              else {
                plVar19 = *(longlong **)(local_130 + 0x60);
                if (*plVar19 == 0) {
                  uVar14 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                  **(undefined8 **)(pcVar10 + 0x60) = uVar14;
                  plVar19 = *(longlong **)(pcVar10 + 0x60);
                }
              }
              uVar12 = *(uint *)(*plVar19 + lVar28 * 4);
              *(uint *)(*plVar19 + lVar28 * 4) = uVar12 + 1;
              iVar23 = (local_d0 << 0x10 | uVar12) * 0x19660d;
              iVar27 = iVar23 + 0x3c6ef35f;
              iVar26 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar27 + local_d8 * 0x19660d;
              iVar18 = iVar26 + 0x3c6ef35f;
              iVar27 = iStack_d4 * 0x19660d + iVar27 * iVar18 + 0x3c6ef35f;
              fVar29 = (float)((iVar23 + iVar18 * iVar27 + 0x3c6ef35f) * iVar27 + iVar26 +
                               0x3c6ef35fU >> 8) * 5.9604645e-08;
            }
            iVar27 = (int)((float)*(int *)(lVar13 + 0x10) * fVar29);
            uVar9 = *(ulonglong *)(lVar13 + 8);
            uVar22 = ((longlong)uVar9 >> 0x18) + lVar13 + 8;
            if ((uVar9 & 1) == 0) {
              uVar22 = uVar9;
            }
            if (*(float *)(uVar22 + (longlong)iVar27 * 4) <= fVar30) {
              uVar9 = *(ulonglong *)(lVar13 + 0x18);
              uVar22 = ((longlong)uVar9 >> 0x18) + lVar13 + 0x18;
              if ((uVar9 & 1) == 0) {
                uVar22 = uVar9;
              }
              iVar27 = *(int *)(uVar22 + (longlong)iVar27 * 4);
            }
            piVar16 = local_140 + (int)local_138;
            *local_140 = iVar27;
            pcVar10 = local_130;
            local_140 = piVar16;
            if (local_d0 == -1) {
              if (*local_130 == '\0') {
                lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
              }
              else {
                lVar15 = *(longlong *)(local_130 + 0x58);
              }
              uVar12 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar15 + 4) = uVar12;
              fVar30 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
              if (*local_130 == '\x01') {
                lVar15 = *(longlong *)(local_130 + 0x58);
              }
              else {
                lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
              }
              uVar12 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar15 + 4) = uVar12;
              fVar29 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
            }
            else {
              if (*local_130 == '\0') {
                plVar19 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
              }
              else {
                plVar19 = *(longlong **)(local_130 + 0x60);
                if (*plVar19 == 0) {
                  uVar14 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                  **(undefined8 **)(pcVar10 + 0x60) = uVar14;
                  plVar19 = *(longlong **)(pcVar10 + 0x60);
                }
              }
              uVar12 = *(uint *)(*plVar19 + lVar28 * 4);
              *(uint *)(*plVar19 + lVar28 * 4) = uVar12 + 1;
              iVar23 = (local_d0 << 0x10 | uVar12) * 0x19660d;
              iVar27 = iVar23 + 0x3c6ef35f;
              iVar24 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar27 + local_d8 * 0x19660d;
              iVar18 = iVar24 + 0x3c6ef35f;
              iVar26 = iStack_d4 * 0x19660d + iVar27 * iVar18 + 0x3c6ef35f;
              iVar27 = iVar23 + iVar18 * iVar26 + 0x3c6ef35f;
              uVar12 = iVar27 * iVar26 + iVar24 + 0x3c6ef35f;
              fVar29 = (float)(uVar12 >> 8) * 5.9604645e-08;
              fVar30 = (float)(iVar27 * uVar12 + iVar26 >> 8) * 5.9604645e-08;
            }
            if (fVar29 < 0.0) {
              fVar29 = sqrtf(fVar29);
            }
            else {
              fVar29 = SQRT(fVar29);
            }
            pfVar2 = local_170 + (int)local_168;
            *local_170 = 1.0 - fVar29;
            pfVar3 = local_160 + (int)local_158;
            *local_160 = (1.0 - fVar30) * fVar29;
            pfVar4 = local_150 + (int)local_148;
            *local_150 = fVar30 * fVar29;
            lVar28 = lVar28 + 1;
            piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar16 = (int *)(param_1 + 0x3c);
            }
            local_170 = pfVar2;
            local_160 = pfVar3;
            local_150 = pfVar4;
          } while (lVar28 < *piVar16);
        }
        goto LAB_143931b0b;
      }
    }
    iVar27 = (**(code **)(*plVar21 + 0x50))(plVar21);
    piVar16 = (int *)(param_1 + 0x3c);
    piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar17 = piVar16;
    }
    if (iVar27 < 3) {
      if (0 < *piVar17) {
        iVar27 = 0;
        do {
          *local_140 = -1;
          pfVar2 = local_170 + (int)local_168;
          local_140 = local_140 + (int)local_138;
          *local_170 = (float)DAT_14c846330;
          pfVar3 = local_160 + (int)local_158;
          *local_160 = DAT_14c846330._4_4_;
          pfVar4 = local_150 + (int)local_148;
          *local_150 = DAT_14c846338;
          iVar27 = iVar27 + 1;
          piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar17 = piVar16;
          }
          local_170 = pfVar2;
          local_160 = pfVar3;
          local_150 = pfVar4;
        } while (iVar27 < *piVar17);
      }
    }
    else if (0 < *piVar17) {
      lVar13 = 0;
      do {
        pcVar10 = local_130;
        piVar17 = local_128[0] + local_118;
        local_d8 = *local_128[0];
        piVar1 = local_110 + local_100;
        iStack_d4 = *local_110;
        piVar5 = local_f8 + local_e8;
        local_d0 = *local_f8;
        local_128[0] = piVar17;
        local_110 = piVar1;
        local_f8 = piVar5;
        if (local_d0 == -1) {
          if (*local_130 == '\0') {
            lVar28 = *(longlong *)(local_130 + 0x80) + 0x88;
          }
          else {
            lVar28 = *(longlong *)(local_130 + 0x58);
          }
          uVar12 = *(int *)(lVar28 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar28 + 4) = uVar12;
          fVar30 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_130 == '\0') {
            plVar19 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
          }
          else {
            plVar19 = *(longlong **)(local_130 + 0x60);
            if (*plVar19 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar10 + 0x60) = uVar14;
              plVar19 = *(longlong **)(pcVar10 + 0x60);
            }
          }
          uVar12 = *(uint *)(*plVar19 + lVar13 * 4);
          *(uint *)(*plVar19 + lVar13 * 4) = uVar12 + 1;
          iVar26 = (local_d0 << 0x10 | uVar12) * 0x19660d;
          iVar18 = iVar26 + 0x3c6ef35f;
          iVar24 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_d8 * 0x19660d;
          iVar23 = iVar24 + 0x3c6ef35f;
          iVar18 = iStack_d4 * 0x19660d + iVar18 * iVar23 + 0x3c6ef35f;
          fVar30 = (float)((iVar26 + iVar23 * iVar18 + 0x3c6ef35f) * iVar18 + iVar24 + 0x3c6ef35fU
                          >> 8) * 5.9604645e-08;
        }
        piVar17 = local_140 + (int)local_138;
        *local_140 = (int)(fVar30 * (float)(iVar27 / 3));
        pcVar10 = local_130;
        local_140 = piVar17;
        if (local_d0 == -1) {
          if (*local_130 == '\0') {
            lVar28 = *(longlong *)(local_130 + 0x80) + 0x88;
          }
          else {
            lVar28 = *(longlong *)(local_130 + 0x58);
          }
          uVar12 = *(int *)(lVar28 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar28 + 4) = uVar12;
          fVar30 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
          if (*local_130 == '\x01') {
            lVar28 = *(longlong *)(local_130 + 0x58);
          }
          else {
            lVar28 = *(longlong *)(local_130 + 0x80) + 0x88;
          }
          uVar12 = *(int *)(lVar28 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar28 + 4) = uVar12;
          fVar29 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_130 == '\0') {
            plVar19 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
          }
          else {
            plVar19 = *(longlong **)(local_130 + 0x60);
            if (*plVar19 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar10 + 0x60) = uVar14;
              plVar19 = *(longlong **)(pcVar10 + 0x60);
            }
          }
          uVar12 = *(uint *)(*plVar19 + lVar13 * 4);
          *(uint *)(*plVar19 + lVar13 * 4) = uVar12 + 1;
          iVar26 = (local_d0 << 0x10 | uVar12) * 0x19660d;
          iVar18 = iVar26 + 0x3c6ef35f;
          iVar25 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_d8 * 0x19660d;
          iVar23 = iVar25 + 0x3c6ef35f;
          iVar24 = iStack_d4 * 0x19660d + iVar18 * iVar23 + 0x3c6ef35f;
          iVar18 = iVar26 + iVar23 * iVar24 + 0x3c6ef35f;
          uVar12 = iVar18 * iVar24 + iVar25 + 0x3c6ef35f;
          fVar29 = (float)(uVar12 >> 8) * 5.9604645e-08;
          fVar30 = (float)(iVar18 * uVar12 + iVar24 >> 8) * 5.9604645e-08;
        }
        if (fVar29 < 0.0) {
          fVar29 = sqrtf(fVar29);
        }
        else {
          fVar29 = SQRT(fVar29);
        }
        pfVar2 = local_170 + (int)local_168;
        *local_170 = 1.0 - fVar29;
        pfVar3 = local_160 + (int)local_158;
        *local_160 = (1.0 - fVar30) * fVar29;
        pfVar4 = local_150 + (int)local_148;
        *local_150 = fVar30 * fVar29;
        lVar13 = lVar13 + 1;
        piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar17 = piVar16;
        }
        local_170 = pfVar2;
        local_160 = pfVar3;
        local_150 = pfVar4;
      } while (lVar13 < *piVar17);
    }
  }
LAB_143931b0b:
  if (local_178 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_178 + 8));
  }
  if ((local_b0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143931eaa FUN_143931eaa body=1413 status=ok
// SIG undefined FUN_143931eaa(void)

void FUN_143931eaa(char *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  undefined1 local_48 [8];
  uint *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140982196(local_48,param_1);
  puVar7 = local_40;
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    local_50 = (uint)bVar1;
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    local_58 = (int *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar1 * 4 +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
    uVar8 = uVar2 & 0x7fff;
    if (uVar8 == 0x7fff) {
      local_58 = &local_4c;
      local_50 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x80);
      local_50 = 1;
      local_58 = (int *)((ulonglong)(uVar8 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                        (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  if (((((local_40[1] != 0) && (uVar8 = *local_40, -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)
       ) && ((plVar11 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar11 != (longlong *)0x0 && (*(uint *)(plVar11 + 2) == local_40[1])))) &&
     (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && ((*plVar11 != 0 && (DAT_14cad2858 == 0)))))) {
    local_70 = &local_38;
    local_38 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_146395584;
    local_78 = &LAB_147a0ba80;
    local_80 = &LAB_14575ccce;
    local_88 = L"Engine";
    local_90 = 0x40000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar4 = *(longlong *)(puVar7 + 200);
  if ((((puVar7[1] != 0) && (uVar8 = *puVar7, -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)) &&
     (((plVar11 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0 && (*(uint *)(plVar11 + 2) == puVar7[1])) &&
      (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar5 = *plVar11, lVar5 != 0)))))) {
    if (DAT_14cad2858 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146395584;
      local_78 = &LAB_147a0ba80;
      local_80 = &LAB_14575ccce;
      local_88 = L"Engine";
      local_90 = 0x40000000000;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      lVar13 = *(longlong *)(lVar5 + 0x658);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(lVar5 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) goto LAB_143932423;
        if (lVar13 != 0) goto LAB_14393207b;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_143932423:
          FUN_1456cec3c(lVar13);
        }
LAB_14393207b:
        if (DAT_14cb06da8 == 0) {
          local_70 = &local_38;
          local_38 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1464003b0;
          local_78 = &LAB_147d17bdf;
          local_80 = &LAB_1417edf22;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
          FUN_1417c143e(lVar5,puVar7[199]);
        }
      }
    }
  }
  if (lVar4 == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = *(longlong **)(lVar4 + 0x28);
  }
  lVar5 = *(longlong *)(puVar7 + 0x18);
  if (lVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if ((local_40 == (uint *)0x0) ||
     (plVar6 = *(longlong **)(local_40 + 0xca), plVar6 == (longlong *)0x0)) {
LAB_14393211a:
    if (lVar4 != 0) {
      iVar9 = (**(code **)(*plVar11 + 0x50))(plVar11);
      iVar9 = iVar9 / 3;
      goto LAB_143932142;
    }
  }
  else {
    uVar8 = *(uint *)(plVar6 + 1);
    if ((ulonglong)uVar8 == 0) goto LAB_14393211a;
    if (0 < (int)uVar8) {
      uVar14 = 0;
      iVar9 = 0;
      do {
        iVar9 = iVar9 + *(int *)(*(longlong *)(*plVar6 + uVar14 * 8) + 0x170);
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
      goto LAB_143932142;
    }
  }
  iVar9 = 0;
LAB_143932142:
  piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar12 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar12) {
    iVar10 = 0;
    do {
      piVar12 = local_58 + (int)local_50;
      *local_58 = iVar9;
      iVar10 = iVar10 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_58 = piVar12;
    } while (iVar10 < *piVar15);
  }
  if (lVar5 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143932430 FUN_143932430 body=2534 status=ok
// SIG undefined FUN_143932430(void)

void FUN_143932430(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ushort uVar17;
  ushort *puVar18;
  longlong lVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  ulonglong uVar27;
  int *piVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong *plVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  int local_1a4;
  int *local_1a0;
  int *local_198;
  float *local_190;
  uint local_188;
  float local_184;
  float *local_180;
  uint local_178;
  float local_174;
  float *local_170;
  uint local_168;
  float local_164;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150 [2];
  int local_140;
  float *local_138;
  int local_128;
  float *local_120;
  int local_110;
  undefined1 local_108 [8];
  uint *local_100;
  code *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_140982196(local_108,param_1);
  if (*param_1 == '\x01') {
    iVar32 = *(int *)(param_1 + 0x30);
    uVar33 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar32);
    *(int *)(param_1 + 0x30) = iVar32 + 1;
    lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar32 * 8);
    piVar26 = (int *)(param_1 + 0x44);
  }
  else {
    puVar18 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar17 = *puVar18;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar18 + 1;
    uVar33 = uVar17 & 0x7fff;
    lVar19 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar17 < 0) {
      lVar29 = (ulonglong)(uVar33 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70);
    }
    else {
      iVar32 = **(int **)(lVar19 + 0x20);
      lVar29 = 0;
      if (iVar32 <= (int)uVar33) {
        do {
          uVar33 = uVar33 - iVar32;
          iVar32 = (*(int **)(lVar19 + 0x20))[lVar29 + 1];
          lVar29 = lVar29 + 1;
        } while (iVar32 <= (int)uVar33);
      }
      lVar29 = (longlong)(int)uVar33 + *(longlong *)(*(longlong *)(lVar19 + 0x18) + lVar29 * 8);
    }
    uVar33 = (uint)(uVar17 >> 0xf);
    piVar26 = (int *)(lVar19 + 0x4c);
  }
  iVar32 = *piVar26;
  FUN_1448a432c(local_150,param_1);
  if (*param_1 == '\x01') {
    iVar22 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar22);
    local_188 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar22 + 1;
    local_190 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar22 * 8));
  }
  else {
    puVar18 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar17 = *puVar18;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar18 + 1;
    uVar21 = uVar17 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_190 = &local_184;
      local_188 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x80);
      local_188 = 1;
      local_190 = (float *)((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) +
                            *(longlong *)(lVar19 + 0x70) + (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar22 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar22);
    local_178 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar22 + 1;
    local_180 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar22 * 8));
  }
  else {
    puVar18 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar17 = *puVar18;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar18 + 1;
    uVar21 = uVar17 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_180 = &local_174;
      local_178 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x80);
      local_178 = 1;
      local_180 = (float *)((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) +
                            *(longlong *)(lVar19 + 0x70) + (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar22 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar22);
    local_168 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar22 + 1;
    local_170 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar22 * 8));
  }
  else {
    puVar18 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar17 = *puVar18;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar18 + 1;
    uVar21 = uVar17 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_170 = &local_164;
      local_168 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x80);
      local_168 = 1;
      local_170 = (float *)((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) +
                            *(longlong *)(lVar19 + 0x70) + (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar22 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar22);
    local_158 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar22 + 1;
    local_160 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar22 * 8));
  }
  else {
    puVar18 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar17 = *puVar18;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar18 + 1;
    uVar21 = uVar17 & 0x7fff;
    if (uVar21 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar21 * *(int *)(lVar19 + 0x80)) +
                            *(longlong *)(lVar19 + 0x70) + (longlong)*(int *)(lVar19 + 0x4c) * 4);
    }
  }
  if ((((local_100[1] != 0) && (uVar21 = *local_100, -1 < (int)uVar21)) &&
      ((int)uVar21 < DAT_14c9647dc)) &&
     (((plVar31 = (longlong *)
                  ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
       plVar31 != (longlong *)0x0 && (*(uint *)(plVar31 + 2) == local_100[1])) &&
      (((*(uint *)(plVar31 + 1) & 0x10200000) == 0 && ((*plVar31 != 0 && (DAT_14cad2858 == 0))))))))
  {
    local_1c0 = &local_f8;
    local_f8 = FUN_144a7958c;
    local_1b0 = FUN_14081d0ea;
    local_1b8 = &LAB_146395584;
    local_1c8 = &LAB_147a0ba80;
    local_1d0 = &LAB_14575ccce;
    local_1d8 = L"Engine";
    local_1e0 = 0x40000000000;
    local_1e8 = 0x10000004;
    local_1f0 = 0x10;
    local_1f8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar19 = *(longlong *)(local_100 + 200);
  if (lVar19 != 0) {
    plVar31 = *(longlong **)(lVar19 + 0x28);
    iVar22 = (**(code **)(*plVar31 + 0x50))(plVar31);
    if ((((2 < iVar22) && (*(int *)(lVar19 + 300) != 0)) && (*(longlong *)(lVar19 + 0x120) != 0)) &&
       ((*(longlong **)(lVar19 + 0x110) != (longlong *)0x0 &&
        (cVar20 = (**(code **)(**(longlong **)(lVar19 + 0x110) + 0x58))(), cVar20 != '\0')))) {
      piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar26 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar26) {
        piVar26 = (int *)(lVar29 + (longlong)(int)(iVar32 * uVar33) * 4);
        local_1a4 = iVar22 / 3 + -1;
        iVar32 = 0;
        local_1a0 = (int *)(param_1 + 0x3c);
        do {
          iVar22 = *piVar26;
          if (local_1a4 <= *piVar26) {
            iVar22 = local_1a4;
          }
          if (iVar22 < 1) {
            iVar22 = 0;
          }
          local_198 = piVar26;
          iVar23 = (**(code **)(*plVar31 + 0x60))(plVar31,iVar22 * 3);
          iVar24 = (**(code **)(*plVar31 + 0x60))(plVar31,iVar22 * 3 + 1);
          iVar25 = (**(code **)(*plVar31 + 0x60))(plVar31,iVar22 * 3 + 2);
          lVar29 = *(longlong *)(lVar19 + 0x120);
          iVar22 = *(int *)(lVar19 + 0x128);
          uVar27 = (ulonglong)(uint)(iVar25 * iVar22);
          bVar8 = *(byte *)(lVar29 + 3 + uVar27);
          bVar9 = *(byte *)(lVar29 + uVar27);
          bVar10 = *(byte *)(lVar29 + 1 + uVar27);
          uVar34 = (ulonglong)(uint)(iVar24 * iVar22);
          bVar11 = *(byte *)(lVar29 + 3 + uVar34);
          bVar12 = *(byte *)(lVar29 + uVar34);
          bVar13 = *(byte *)(lVar29 + 1 + uVar34);
          uVar30 = (ulonglong)(uint)(iVar23 * iVar22);
          bVar14 = *(byte *)(lVar29 + 3 + uVar30);
          bVar15 = *(byte *)(lVar29 + uVar30);
          bVar16 = *(byte *)(lVar29 + 1 + uVar30);
          fVar5 = *local_120;
          fVar6 = *local_138;
          fVar7 = *local_150[0];
          pfVar1 = local_190 + (int)local_188;
          local_150[0] = local_150[0] + local_140;
          local_138 = local_138 + local_128;
          local_120 = local_120 + local_110;
          *local_190 = (float)*(byte *)(lVar29 + 2 + uVar27) * 0.003921569 * fVar5 +
                       (float)*(byte *)(lVar29 + 2 + uVar34) * 0.003921569 * fVar6 +
                       (float)*(byte *)(lVar29 + 2 + uVar30) * 0.003921569 * fVar7;
          pfVar2 = local_180 + (int)local_178;
          *local_180 = (float)bVar10 * 0.003921569 * fVar5 +
                       (float)bVar13 * 0.003921569 * fVar6 + (float)bVar16 * 0.003921569 * fVar7;
          pfVar3 = local_170 + (int)local_168;
          *local_170 = (float)bVar9 * 0.003921569 * fVar5 +
                       (float)bVar12 * 0.003921569 * fVar6 + (float)bVar15 * 0.003921569 * fVar7;
          pfVar4 = local_160 + (int)local_158;
          *local_160 = (float)bVar8 * 0.003921569 * fVar5 +
                       (float)bVar11 * 0.003921569 * fVar6 + (float)bVar14 * 0.003921569 * fVar7;
          iVar32 = iVar32 + 1;
          piVar28 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar28 = local_1a0;
          }
          piVar26 = (int *)((longlong)local_198 + (ulonglong)(uVar33 << 2));
          local_190 = pfVar1;
          local_180 = pfVar2;
          local_170 = pfVar3;
          local_160 = pfVar4;
        } while (iVar32 < *piVar28);
      }
      goto LAB_143932bd5;
    }
  }
  piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar26 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar26) {
    iVar32 = 0;
    do {
      pfVar1 = local_190 + (int)local_188;
      *local_190 = 1.0;
      pfVar2 = local_180 + (int)local_178;
      *local_180 = 1.0;
      pfVar3 = local_170 + (int)local_168;
      *local_170 = 1.0;
      pfVar4 = local_160 + (int)local_158;
      *local_160 = 1.0;
      iVar32 = iVar32 + 1;
      piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar26 = (int *)(param_1 + 0x3c);
      }
      local_190 = pfVar1;
      local_180 = pfVar2;
      local_170 = pfVar3;
      local_160 = pfVar4;
    } while (iVar32 < *piVar26);
  }
LAB_143932bd5:
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143932e18 FUN_143932e18 body=6041 status=ok
// SIG undefined FUN_143932e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143932e18(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  ushort uVar8;
  ushort *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_358 [32];
  float *local_338;
  float *local_330;
  float *local_328;
  undefined8 local_320;
  wchar_t *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  undefined8 *local_300;
  undefined1 *local_2f8;
  code *local_2f0;
  longlong local_2e0;
  int local_2d8;
  float local_2d4;
  float local_2d0;
  int local_2cc;
  longlong local_2c8;
  longlong *local_2c0;
  ulonglong local_2b8;
  int *local_2b0;
  longlong local_2a8;
  int *local_2a0;
  undefined8 local_298;
  float *local_290;
  uint local_288;
  float local_284;
  float *local_280;
  uint local_278;
  float local_274;
  float *local_270;
  uint local_268;
  float local_264;
  float *local_260;
  uint local_258;
  float local_254;
  float *local_250;
  uint local_248;
  float local_244;
  float *local_240;
  uint local_238;
  float local_234;
  float *local_230;
  uint local_228;
  float local_224;
  float *local_220;
  uint local_218;
  float local_214;
  float *local_210;
  uint local_208;
  float local_204;
  float *local_200;
  uint local_1f8;
  float local_1f4;
  float *local_1f0;
  uint local_1e8;
  float local_1e4;
  float *local_1e0;
  uint local_1d8;
  float local_1d4;
  float *local_1d0 [2];
  int local_1c0;
  float *local_1b8;
  int local_1a8;
  float *local_1a0;
  int local_190;
  undefined1 local_188 [8];
  uint *local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_140982196(local_188,param_1);
  if (*param_1 == '\x01') {
    iVar25 = *(int *)(param_1 + 0x30);
    uVar30 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar25);
    *(int *)(param_1 + 0x30) = iVar25 + 1;
    lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar25 * 8);
    piVar23 = (int *)(param_1 + 0x44);
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar30 = uVar8 & 0x7fff;
    lVar29 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar8 < 0) {
      lVar26 = (ulonglong)(uVar30 * *(int *)(lVar29 + 0x80)) + *(longlong *)(lVar29 + 0x70);
    }
    else {
      iVar25 = **(int **)(lVar29 + 0x20);
      lVar26 = 0;
      if (iVar25 <= (int)uVar30) {
        do {
          uVar30 = uVar30 - iVar25;
          iVar25 = (*(int **)(lVar29 + 0x20))[lVar26 + 1];
          lVar26 = lVar26 + 1;
        } while (iVar25 <= (int)uVar30);
      }
      lVar26 = (longlong)(int)uVar30 + *(longlong *)(*(longlong *)(lVar29 + 0x18) + lVar26 * 8);
    }
    uVar30 = (uint)(uVar8 >> 0xf);
    piVar23 = (int *)(lVar29 + 0x4c);
  }
  iVar25 = *piVar23;
  FUN_1448a432c(local_1d0,param_1);
  puVar17 = local_180;
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_1f8 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_200 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_200 = &local_1f4;
      local_1f8 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_1f8 = 1;
      local_200 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_1e8 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_1f0 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_1f0 = &local_1e4;
      local_1e8 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_1e8 = 1;
      local_1f0 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_1d8 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_1e0 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_1e0 = &local_1d4;
      local_1d8 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_1d8 = 1;
      local_1e0 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_228 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_230 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_230 = &local_224;
      local_228 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_228 = 1;
      local_230 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_218 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_220 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_220 = &local_214;
      local_218 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_218 = 1;
      local_220 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_208 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_210 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_210 = &local_204;
      local_208 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_208 = 1;
      local_210 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_258 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_260 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_260 = &local_254;
      local_258 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_258 = 1;
      local_260 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_248 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_250 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_250 = &local_244;
      local_248 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_248 = 1;
      local_250 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_238 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_240 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_240 = &local_234;
      local_238 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_238 = 1;
      local_240 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_288 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_290 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_290 = &local_284;
      local_288 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_288 = 1;
      local_290 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_278 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_280 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_280 = &local_274;
      local_278 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_278 = 1;
      local_280 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_268 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_270 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar18 = uVar8 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_270 = &local_264;
      local_268 = 0;
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x80);
      local_268 = 1;
      local_270 = (float *)((ulonglong)(uVar18 * *(int *)(lVar29 + 0x80)) +
                            *(longlong *)(lVar29 + 0x70) + (longlong)*(int *)(lVar29 + 0x4c) * 4);
    }
  }
  if (((((local_180[1] != 0) && (uVar18 = *local_180, -1 < (int)uVar18)) &&
       ((int)uVar18 < DAT_14c9647dc)) &&
      ((plVar27 = (longlong *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
       plVar27 != (longlong *)0x0 && (*(uint *)(plVar27 + 2) == local_180[1])))) &&
     (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 && ((*plVar27 != 0 && (DAT_14cad2858 == 0)))))) {
    local_300 = &local_118;
    local_118 = FUN_144a7958c;
    local_2f0 = FUN_14081d0ea;
    local_2f8 = &LAB_146395584;
    local_308 = &LAB_147a0ba80;
    local_310 = &LAB_14575ccce;
    local_318 = L"Engine";
    local_320 = 0x40000000000;
    local_328 = (float *)CONCAT44(local_328._4_4_,0x10000004);
    local_330 = (float *)CONCAT44(local_330._4_4_,0x10);
    local_338 = (float *)CONCAT44(local_338._4_4_,0x1180);
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (puVar17[0x15] == 0) {
LAB_14393408d:
    local_298 = 0;
  }
  else {
    uVar18 = puVar17[0x14];
    local_298 = 0;
    if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
      puVar28 = (undefined8 *)
                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if ((puVar28 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar28 + 2) != puVar17[0x15] || ((*(uint *)(puVar28 + 1) & 0x10200000) != 0)))
         ) goto LAB_14393408d;
      local_298 = *puVar28;
    }
  }
  local_2e0 = *(longlong *)(puVar17 + 200);
  if ((((puVar17[1] != 0) && (uVar18 = *puVar17, -1 < (int)uVar18)) && ((int)uVar18 < DAT_14c9647dc)
      ) && (((plVar27 = (longlong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             plVar27 != (longlong *)0x0 && (*(uint *)(plVar27 + 2) == puVar17[1])) &&
            (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 && (lVar29 = *plVar27, lVar29 != 0)))))) {
    if (DAT_14cad2858 == 0) {
      local_300 = &local_118;
      local_118 = FUN_144a7958c;
      local_2f0 = FUN_14081d0ea;
      local_2f8 = &LAB_146395584;
      local_308 = &LAB_147a0ba80;
      local_310 = &LAB_14575ccce;
      local_318 = L"Engine";
      local_320 = 0x40000000000;
      local_328 = (float *)CONCAT44(local_328._4_4_,0x10000004);
      local_330 = (float *)CONCAT44(local_330._4_4_,0x10);
      local_338 = (float *)CONCAT44(local_338._4_4_,0x1180);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar29 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      lVar31 = *(longlong *)(lVar29 + 0x658);
      if (lVar31 == 0) {
        lVar31 = *(longlong *)(lVar29 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar31 != 0)) goto LAB_1439345a0;
        if (lVar31 != 0) goto LAB_143934037;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_1439345a0:
          FUN_1456cec3c(lVar31);
        }
LAB_143934037:
        if (DAT_14cb06da8 == 0) {
          local_300 = &local_118;
          local_118 = FUN_1449e2820;
          local_2f0 = FUN_14081d0ea;
          local_2f8 = &LAB_1464003b0;
          local_308 = &LAB_147d17bdf;
          local_310 = &LAB_1417edf22;
          local_318 = L"Engine";
          local_320 = 0;
          local_328 = (float *)CONCAT44(local_328._4_4_,0x10000000);
          local_330 = (float *)CONCAT44(local_330._4_4_,8);
          local_338 = (float *)CONCAT44(local_338._4_4_,0x588);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar31 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
          local_2c8 = FUN_1417c143e(lVar29,puVar17[199],0);
          goto LAB_1439336a8;
        }
      }
    }
  }
  local_2c8 = *(longlong *)(puVar17 + 200) + 0x138;
  if (*(longlong *)(puVar17 + 200) == 0) {
    local_2c8 = 0;
  }
LAB_1439336a8:
  if (local_2e0 == 0) {
    plVar27 = (longlong *)0x0;
  }
  else {
    plVar27 = *(longlong **)(local_2e0 + 0x28);
  }
  lVar29 = *(longlong *)(puVar17 + 0x18);
  if (lVar29 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar29 + 8));
  }
  if (((byte)local_180[0xc6] & local_2e0 != 0) == 0) {
    piVar23 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar23 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar23) {
      iVar25 = 0;
      do {
        *local_200 = (float)DAT_14c846330;
        *local_1f0 = DAT_14c846330._4_4_;
        *local_1e0 = DAT_14c846338;
        local_200 = local_200 + (int)local_1f8;
        local_1f0 = local_1f0 + (int)local_1e8;
        local_1e0 = local_1e0 + (int)local_1d8;
        *local_230 = (float)DAT_14c846364;
        *local_220 = DAT_14c846364._4_4_;
        *local_210 = DAT_14c84636c;
        local_230 = local_230 + (int)local_228;
        local_220 = local_220 + (int)local_218;
        local_210 = local_210 + (int)local_208;
        *local_260 = (float)DAT_14c846370;
        *local_250 = DAT_14c846370._4_4_;
        *local_240 = DAT_14c846378;
        pfVar1 = local_290 + (int)local_288;
        local_260 = local_260 + (int)local_258;
        local_250 = local_250 + (int)local_248;
        local_240 = local_240 + (int)local_238;
        *local_290 = DAT_14c84637c;
        pfVar2 = local_280 + (int)local_278;
        *local_280 = _DAT_14c846380;
        pfVar3 = local_270 + (int)local_268;
        *local_270 = DAT_14c846384;
        iVar25 = iVar25 + 1;
        piVar23 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar23 = (int *)(param_1 + 0x3c);
        }
        local_290 = pfVar1;
        local_280 = pfVar2;
        local_270 = pfVar3;
      } while (iVar25 < *piVar23);
    }
  }
  else {
    iVar19 = (**(code **)(*plVar27 + 0x50))(plVar27);
    lVar31 = local_2e0;
    piVar23 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar23 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar23) {
      piVar23 = (int *)((longlong)(int)(iVar25 * uVar30) * 4 + lVar26);
      local_2d8 = iVar19 / 3 + -1;
      local_2b8 = (ulonglong)(uVar30 << 2);
      iVar25 = 0;
      local_2c0 = plVar27;
      local_2b0 = (int *)(param_1 + 0x3c);
      local_2a8 = lVar29;
      do {
        iVar19 = *piVar23;
        if (local_2d8 <= *piVar23) {
          iVar19 = local_2d8;
        }
        if (iVar19 < 1) {
          iVar19 = 0;
        }
        fVar4 = *local_1a0;
        fVar5 = *local_1b8;
        fVar6 = *local_1d0[0];
        local_2cc = iVar25;
        local_2a0 = piVar23;
        local_1d0[0] = local_1d0[0] + local_1c0;
        local_1b8 = local_1b8 + local_1a8;
        local_1a0 = local_1a0 + local_190;
        uVar20 = (**(code **)(*plVar27 + 0x60))(plVar27,iVar19 * 3);
        uVar21 = (**(code **)(*plVar27 + 0x60))(plVar27,iVar19 * 3 + 1);
        uVar22 = (**(code **)(*plVar27 + 0x60))(plVar27,iVar19 * 3 + 2);
        uVar16 = local_298;
        lVar26 = local_2c8;
        local_338._0_4_ = uVar20;
        FUN_147d1858d(&local_118,local_298,lVar31,local_2c8);
        dVar12 = (double)CONCAT44(fStack_104,local_108);
        local_2d4 = (float)(double)CONCAT44(fStack_10c,local_110);
        local_2d0 = (float)(double)local_118;
        local_338._0_4_ = uVar21;
        FUN_147d1858d(&local_118,uVar16,lVar31,lVar26);
        dVar13 = (double)CONCAT44(fStack_104,local_108);
        dVar10 = (double)CONCAT44(fStack_10c,local_110);
        fVar36 = (float)(double)local_118;
        local_338 = (float *)CONCAT44(local_338._4_4_,uVar22);
        FUN_147d1858d(&local_118,uVar16,lVar31,lVar26);
        dVar14 = (double)CONCAT44(fStack_104,local_108);
        dVar11 = (double)CONCAT44(fStack_10c,local_110);
        fVar37 = (float)(double)local_118;
        local_328 = &local_178;
        local_330 = &local_148;
        local_338 = (float *)&local_118;
        FUN_147d18a14(uVar16,lVar31,lVar26,uVar20);
        local_328 = &local_16c;
        local_330 = &local_13c;
        local_338 = &fStack_10c;
        FUN_147d18a14(uVar16,lVar31,lVar26,uVar21);
        lVar29 = local_2a8;
        uVar15 = local_2b8;
        plVar27 = local_2c0;
        local_328 = &local_160;
        local_330 = &local_130;
        local_338 = &local_100;
        FUN_147d18a14(uVar16,lVar31,lVar26,uVar22);
        *local_200 = fVar37 * fVar4 + fVar36 * fVar5 + local_2d0 * fVar6;
        *local_1f0 = (float)dVar11 * fVar4 + (float)dVar10 * fVar5 + local_2d4 * fVar6;
        *local_1e0 = (float)dVar14 * fVar4 + (float)dVar13 * fVar5 + (float)dVar12 * fVar6;
        fVar34 = local_110 * fVar6;
        fVar37 = local_118._4_4_ * fVar6;
        fVar36 = fStack_104 * fVar5;
        fVar33 = local_108 * fVar5;
        fVar32 = local_f8 * fVar4;
        fVar35 = local_fc * fVar4;
        local_200 = local_200 + (int)local_1f8;
        local_1f0 = local_1f0 + (int)local_1e8;
        local_1e0 = local_1e0 + (int)local_1d8;
        *local_230 = local_100 * fVar4 + fStack_10c * fVar5 + (float)local_118 * fVar6;
        *local_220 = fVar35 + fVar33 + fVar37;
        *local_210 = fVar32 + fVar36 + fVar34;
        fVar32 = local_140 * fVar6;
        fVar34 = local_144 * fVar6;
        fVar36 = local_134 * fVar5;
        fVar37 = local_138 * fVar5;
        fVar33 = local_128 * fVar4;
        fVar35 = local_12c * fVar4;
        local_230 = local_230 + (int)local_228;
        local_220 = local_220 + (int)local_218;
        local_210 = local_210 + (int)local_208;
        *local_260 = local_130 * fVar4 + local_13c * fVar5 + local_148 * fVar6;
        *local_250 = fVar35 + fVar37 + fVar34;
        *local_240 = fVar33 + fVar36 + fVar32;
        fVar36 = local_170 * fVar6;
        fVar33 = local_174 * fVar6;
        fVar37 = local_164 * fVar5;
        fVar35 = local_168 * fVar5;
        fVar32 = local_158 * fVar4;
        fVar34 = local_15c * fVar4;
        pfVar1 = local_290 + (int)local_288;
        local_260 = local_260 + (int)local_258;
        local_250 = local_250 + (int)local_248;
        local_240 = local_240 + (int)local_238;
        *local_290 = fVar4 * local_160 + fVar5 * local_16c + fVar6 * local_178;
        pfVar2 = local_280 + (int)local_278;
        *local_280 = fVar34 + fVar35 + fVar33;
        pfVar3 = local_270 + (int)local_268;
        *local_270 = fVar32 + fVar37 + fVar36;
        iVar25 = local_2cc + 1;
        piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar24 = local_2b0;
        }
        piVar23 = (int *)((longlong)local_2a0 + uVar15);
        local_290 = pfVar1;
        local_280 = pfVar2;
        local_270 = pfVar3;
      } while (iVar25 < *piVar24);
    }
  }
  if (lVar29 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar29 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1439345b2 FUN_1439345b2 body=2298 status=ok
// SIG undefined FUN_1439345b2(void)

void FUN_1439345b2(byte *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  ulonglong local_a8;
  int local_9c;
  longlong local_98;
  undefined4 *local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  uint *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140982196(local_60,param_1);
  puVar6 = local_58;
  if (*param_1 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16);
    uVar19 = (ulonglong)bVar7;
    *(int *)(param_1 + 0x30) = iVar16 + 1;
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar16 * 8);
    iVar16 = *(int *)(param_1 + 0x44) * (uint)bVar7;
    bVar7 = 1;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
    uVar18 = uVar2 & 0x7fff;
    uVar19 = (ulonglong)(uint)(uVar2 >> 0xf);
    lVar4 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar2 < 0) {
      lVar13 = (ulonglong)(uVar18 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar16 = **(int **)(lVar4 + 0x20);
      lVar13 = 0;
      if (iVar16 <= (int)uVar18) {
        do {
          uVar18 = uVar18 - iVar16;
          iVar16 = (*(int **)(lVar4 + 0x20))[lVar13 + 1];
          lVar13 = lVar13 + 1;
        } while (iVar16 <= (int)uVar18);
      }
      lVar13 = (longlong)(int)uVar18 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar13 * 8);
    }
    iVar16 = *(int *)(lVar4 + 0x4c) * (uint)(uVar2 >> 0xf);
    bVar7 = *param_1;
  }
  if ((bVar7 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
    uVar18 = uVar2 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x80);
      local_68 = 1;
      local_70 = (undefined4 *)
                 ((ulonglong)(uVar18 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                 (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_68 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_70 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_78 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_80 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
    uVar18 = uVar2 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x80);
      local_78 = 1;
      local_80 = (undefined4 *)
                 ((ulonglong)(uVar18 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                 (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_88 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_90 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
    uVar18 = uVar2 & 0x7fff;
    if (uVar18 == 0x7fff) {
      local_90 = &local_84;
      local_88 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x80);
      local_88 = 1;
      local_90 = (undefined4 *)
                 ((ulonglong)(uVar18 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                 (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  if (((((local_58[1] != 0) && (uVar18 = *local_58, -1 < (int)uVar18)) &&
       ((int)uVar18 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && (*(uint *)(plVar14 + 2) == local_58[1])))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && ((*plVar14 != 0 && (DAT_14cad2858 == 0)))))) {
    local_c0 = &local_50;
    local_50 = FUN_144a7958c;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_146395584;
    local_c8 = &LAB_147a0ba80;
    local_d0 = &LAB_14575ccce;
    local_d8 = L"Engine";
    local_e0 = 0x40000000000;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar4 = *(longlong *)(puVar6 + 200);
  if ((((puVar6[1] == 0) || (uVar18 = *puVar6, (int)uVar18 < 0)) || (DAT_14c9647dc <= (int)uVar18))
     || (((plVar14 = (longlong *)
                     ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
          plVar14 == (longlong *)0x0 || (*(uint *)(plVar14 + 2) != puVar6[1])) ||
         (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (lVar5 = *plVar14, lVar5 == 0))))))
  goto LAB_14393491c;
  if (DAT_14cad2858 == 0) {
    local_c0 = &local_50;
    local_50 = FUN_144a7958c;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_146395584;
    local_c8 = &LAB_147a0ba80;
    local_d0 = &LAB_14575ccce;
    local_d8 = L"Engine";
    local_e0 = 0x40000000000;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14393491c;
  lVar15 = *(longlong *)(lVar5 + 0x658);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(lVar5 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) goto LAB_143934ea0;
    if (lVar15 == 0) goto LAB_14393491c;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_143934ea0:
    FUN_1456cec3c(lVar15);
  }
  if (DAT_14cb06da8 == 0) {
    local_c0 = &local_50;
    local_50 = FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_1464003b0;
    local_c8 = &LAB_147d17bdf;
    local_d0 = &LAB_1417edf22;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10000000;
    local_f0 = 8;
    local_f8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar5,puVar6[199],0);
  }
LAB_14393491c:
  if (lVar4 == 0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(lVar4 + 0x28);
  }
  lVar5 = *(longlong *)(puVar6 + 0x18);
  if (lVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  local_98 = lVar5;
  if (((byte)local_58[0xc6] & lVar4 != 0) == 0) {
    pbVar12 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar12 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar12) {
      iVar16 = 0;
      do {
        *local_70 = 0;
        local_70 = local_70 + (int)local_68;
        *local_80 = 0;
        puVar1 = local_90 + (int)local_88;
        local_80 = local_80 + (int)local_78;
        *local_90 = 0;
        iVar16 = iVar16 + 1;
        pbVar12 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar12 = param_1 + 0x3c;
        }
        local_90 = puVar1;
      } while (iVar16 < *(int *)pbVar12);
    }
  }
  else {
    iVar8 = (**(code **)(*plVar14 + 0x50))(plVar14);
    pbVar12 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar12 = param_1 + 0x3c;
    }
    local_a8 = uVar19;
    if (0 < *(int *)pbVar12) {
      piVar17 = (int *)(lVar13 + (longlong)iVar16 * 4);
      local_9c = iVar8 / 3 + -1;
      local_a8 = (ulonglong)(uint)((int)uVar19 << 2);
      iVar16 = 0;
      do {
        iVar8 = *piVar17;
        if (local_9c <= *piVar17) {
          iVar8 = local_9c;
        }
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        uVar9 = (**(code **)(*plVar14 + 0x60))(plVar14,iVar8 * 3);
        uVar10 = (**(code **)(*plVar14 + 0x60))(plVar14,iVar8 * 3 + 1);
        uVar11 = (**(code **)(*plVar14 + 0x60))(plVar14,iVar8 * 3 + 2);
        *local_70 = uVar9;
        local_70 = local_70 + (int)local_68;
        *local_80 = uVar10;
        puVar1 = local_90 + (int)local_88;
        local_80 = local_80 + (int)local_78;
        *local_90 = uVar11;
        iVar16 = iVar16 + 1;
        pbVar12 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar12 = param_1 + 0x3c;
        }
        piVar17 = (int *)((longlong)piVar17 + local_a8);
        local_90 = puVar1;
      } while (iVar16 < *(int *)pbVar12);
    }
  }
  if (local_98 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143934eae FUN_143934eae body=1373 status=ok
// SIG undefined FUN_143934eae(void)

void FUN_143934eae(char *param_1)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  int *local_70;
  int local_68;
  undefined1 local_60 [8];
  uint *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140982196(local_60,param_1);
  if (*param_1 == '\x01') {
    iVar12 = *(int *)(param_1 + 0x30);
    uVar14 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12);
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8);
    piVar8 = (int *)(param_1 + 0x44);
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar14 = uVar2 & 0x7fff;
    lVar5 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar2 < 0) {
      lVar9 = (ulonglong)(uVar14 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70);
    }
    else {
      iVar12 = **(int **)(lVar5 + 0x20);
      lVar9 = 0;
      if (iVar12 <= (int)uVar14) {
        do {
          uVar14 = uVar14 - iVar12;
          iVar12 = (*(int **)(lVar5 + 0x20))[lVar9 + 1];
          lVar9 = lVar9 + 1;
        } while (iVar12 <= (int)uVar14);
      }
      lVar9 = (longlong)(int)uVar14 + *(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar9 * 8);
    }
    uVar14 = (uint)(uVar2 >> 0xf);
    piVar8 = (int *)(lVar5 + 0x4c);
  }
  iVar12 = *piVar8;
  FUN_140126e42(&local_70,param_1);
  if (((((local_58[1] != 0) && (uVar3 = *local_58, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)
       ) && ((plVar10 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == local_58[1])))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((*plVar10 != 0 && (DAT_14cad2858 == 0)))))) {
    local_90 = &local_50;
    local_50 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_146395584;
    local_98 = &LAB_147a0ba80;
    local_a0 = &LAB_14575ccce;
    local_a8 = L"Engine";
    local_b0 = 0x40000000000;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar5 = *(longlong *)(local_58 + 200);
  if ((((local_58[1] == 0) || (uVar3 = *local_58, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
     || (((plVar10 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar10 == (longlong *)0x0 || (*(uint *)(plVar10 + 2) != local_58[1])) ||
         (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar6 = *plVar10, lVar6 == 0))))))
  goto LAB_1439350fd;
  if (DAT_14cad2858 == 0) {
    local_90 = &local_50;
    local_50 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_146395584;
    local_98 = &LAB_147a0ba80;
    local_a0 = &LAB_14575ccce;
    local_a8 = L"Engine";
    local_b0 = 0x40000000000;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_1439350fd;
  lVar11 = *(longlong *)(lVar6 + 0x658);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar6 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) goto LAB_1439353ff;
    if (lVar11 == 0) goto LAB_1439350fd;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_1439353ff:
    FUN_1456cec3c(lVar11);
  }
  if (DAT_14cb06da8 == 0) {
    local_90 = &local_50;
    local_50 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464003b0;
    local_98 = &LAB_147d17bdf;
    local_a0 = &LAB_1417edf22;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000000;
    local_c0 = 8;
    local_c8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar6,local_58[199]);
  }
LAB_1439350fd:
  lVar6 = *(longlong *)(local_58 + 0x18);
  if (lVar6 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 8));
  }
  if (lVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar5 + 0xec);
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    piVar8 = (int *)(lVar9 + (longlong)(int)(iVar12 * uVar14) * 4);
    iVar12 = 0;
    do {
      piVar1 = local_70 + local_68;
      *local_70 = -(uint)(*piVar8 < iVar7);
      iVar12 = iVar12 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      piVar8 = (int *)((longlong)piVar8 + (ulonglong)(uVar14 << 2));
      local_70 = piVar1;
    } while (iVar12 < *piVar13);
  }
  if (lVar6 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 8));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14393540c FUN_14393540c body=1936 status=ok
// SIG undefined FUN_14393540c(void)

void FUN_14393540c(byte *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  int *local_110;
  uint local_108;
  int local_104;
  byte *local_100;
  int *local_f8 [2];
  int local_e8;
  int *local_e0;
  int local_d0;
  int *local_c8;
  int local_b8;
  int local_a8;
  int iStack_a4;
  int local_a0;
  undefined1 local_98 [8];
  uint *local_90;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_140982196(local_98,param_1);
  local_100 = param_1;
  FUN_1416b93de(local_f8,param_1);
  local_a8 = 0;
  iStack_a4 = 0;
  local_a0 = 0;
  if (*param_1 == 1) {
    iVar15 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15);
    local_108 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar15 + 1;
    local_110 = (int *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_110 = &local_104;
      local_108 = 0;
    }
    else {
      lVar18 = *(longlong *)(param_1 + 0x80);
      local_108 = 1;
      local_110 = (int *)((ulonglong)(uVar9 * *(int *)(lVar18 + 0x80)) +
                          *(longlong *)(lVar18 + 0x70) + (longlong)*(int *)(lVar18 + 0x4c) * 4);
    }
  }
  if (((((local_90[1] != 0) && (uVar9 = *local_90, -1 < (int)uVar9)) && ((int)uVar9 < DAT_14c9647dc)
       ) && ((plVar16 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar16 != (longlong *)0x0 && (*(uint *)(plVar16 + 2) == local_90[1])))) &&
     (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && ((*plVar16 != 0 && (DAT_14cad2858 == 0)))))) {
    local_130 = &local_88;
    local_88 = FUN_144a7958c;
    local_120 = FUN_14081d0ea;
    local_128 = &LAB_146395584;
    local_138 = &LAB_147a0ba80;
    local_140 = &LAB_14575ccce;
    local_148 = L"Engine";
    local_150 = 0x40000000000;
    local_158 = 0x10000004;
    local_160 = 0x10;
    local_168 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar18 = *(longlong *)(local_90 + 200);
  if ((((local_90[1] != 0) && (uVar9 = *local_90, -1 < (int)uVar9)) && ((int)uVar9 < DAT_14c9647dc))
     && (((plVar16 = (longlong *)
                     ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
          plVar16 != (longlong *)0x0 && (*(uint *)(plVar16 + 2) == local_90[1])) &&
         (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && (lVar8 = *plVar16, lVar8 != 0)))))) {
    if (DAT_14cad2858 == 0) {
      local_130 = &local_88;
      local_88 = FUN_144a7958c;
      local_120 = FUN_14081d0ea;
      local_128 = &LAB_146395584;
      local_138 = &LAB_147a0ba80;
      local_140 = &LAB_14575ccce;
      local_148 = L"Engine";
      local_150 = 0x40000000000;
      local_158 = 0x10000004;
      local_160 = 0x10;
      local_168 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      lVar12 = *(longlong *)(lVar8 + 0x658);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(lVar8 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) goto LAB_143935b90;
        if (lVar12 != 0) goto LAB_143935624;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_143935b90:
          FUN_1456cec3c(lVar12);
        }
LAB_143935624:
        if (DAT_14cb06da8 == 0) {
          local_130 = &local_88;
          local_88 = FUN_1449e2820;
          local_120 = FUN_14081d0ea;
          local_128 = &LAB_1464003b0;
          local_138 = &LAB_147d17bdf;
          local_140 = &LAB_1417edf22;
          local_148 = L"Engine";
          local_150 = 0;
          local_158 = 0x10000000;
          local_160 = 8;
          local_168 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
          FUN_1417c143e(lVar8,local_90[199],0);
        }
      }
    }
  }
  lVar8 = *(longlong *)(local_90 + 0x18);
  if (lVar8 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar8 + 8));
  }
  if (lVar18 == 0) {
    bVar5 = *param_1;
  }
  else {
    iVar15 = *(int *)(lVar18 + 0xec);
    bVar5 = *param_1;
    if (-1 < iVar15 + -1) {
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if ((bVar5 & 1) != 0) {
        pbVar13 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar13) {
        lVar18 = 0;
        do {
          pbVar13 = local_100;
          piVar2 = local_f8[0] + local_e8;
          local_a8 = *local_f8[0];
          piVar3 = local_e0 + local_d0;
          iStack_a4 = *local_e0;
          piVar4 = local_c8 + local_b8;
          local_a0 = *local_c8;
          local_f8[0] = piVar2;
          local_e0 = piVar3;
          local_c8 = piVar4;
          if (local_a0 == -1) {
            if (*local_100 == 0) {
              lVar12 = *(longlong *)(local_100 + 0x80) + 0x88;
            }
            else {
              lVar12 = *(longlong *)(local_100 + 0x58);
            }
            uVar9 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar12 + 4) = uVar9;
            fVar19 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_100 == 0) {
              plVar16 = (longlong *)(*(longlong *)(local_100 + 0x80) + 0x90);
            }
            else {
              plVar16 = *(longlong **)(local_100 + 0x60);
              if (*plVar16 == 0) {
                uVar11 = FUN_14153c902((longlong)*(int *)(local_100 + 0x3c) << 2,0);
                **(undefined8 **)(pbVar13 + 0x60) = uVar11;
                plVar16 = *(longlong **)(pbVar13 + 0x60);
              }
            }
            uVar9 = *(uint *)(*plVar16 + lVar18 * 4);
            *(uint *)(*plVar16 + lVar18 * 4) = uVar9 + 1;
            iVar10 = (local_a0 << 0x10 | uVar9) * 0x19660d;
            iVar14 = iVar10 + 0x3c6ef35f;
            iVar17 = (iStack_a4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_a8 * 0x19660d;
            iVar1 = iVar17 + 0x3c6ef35f;
            iVar14 = iStack_a4 * 0x19660d + iVar14 * iVar1 + 0x3c6ef35f;
            fVar19 = (float)((iVar10 + iVar1 * iVar14 + 0x3c6ef35f) * iVar14 + iVar17 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          piVar2 = local_110 + (int)local_108;
          *local_110 = (int)(fVar19 * (float)iVar15);
          lVar18 = lVar18 + 1;
          pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != 0) {
            pbVar13 = param_1 + 0x3c;
          }
          local_110 = piVar2;
        } while (lVar18 < *(int *)pbVar13);
      }
      goto LAB_1439358d7;
    }
  }
  pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if ((bVar5 & 1) != 0) {
    pbVar13 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar13) {
    iVar15 = 0;
    do {
      piVar2 = local_110 + (int)local_108;
      *local_110 = -1;
      iVar15 = iVar15 + 1;
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar13 = param_1 + 0x3c;
      }
      local_110 = piVar2;
    } while (iVar15 < *(int *)pbVar13);
  }
LAB_1439358d7:
  if (lVar8 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 8));
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143935b9e FUN_143935b9e body=1310 status=ok
// SIG undefined FUN_143935b9e(void)

void FUN_143935b9e(char *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined4 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  uint *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140982196(local_48,param_1);
  if (*param_1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9);
    local_50 = (uint)bVar2;
    *(int *)(param_1 + 0x30) = iVar9 + 1;
    local_58 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_58 = &local_4c;
      local_50 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      local_50 = 1;
      local_58 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  if (((((local_40[1] != 0) && (uVar7 = *local_40, -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)
       ) && ((plVar10 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == local_40[1])))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((*plVar10 != 0 && (DAT_14cad2858 == 0)))))) {
    local_70 = &local_38;
    local_38 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_146395584;
    local_78 = &LAB_147a0ba80;
    local_80 = &LAB_14575ccce;
    local_88 = L"Engine";
    local_90 = 0x40000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar5 = *(longlong *)(local_40 + 200);
  if ((((local_40[1] == 0) || (uVar7 = *local_40, (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7))
     || (((plVar10 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
          plVar10 == (longlong *)0x0 || (*(uint *)(plVar10 + 2) != local_40[1])) ||
         (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar6 = *plVar10, lVar6 == 0))))))
  goto LAB_143935dac;
  if (DAT_14cad2858 == 0) {
    local_70 = &local_38;
    local_38 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_146395584;
    local_78 = &LAB_147a0ba80;
    local_80 = &LAB_14575ccce;
    local_88 = L"Engine";
    local_90 = 0x40000000000;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_143935dac;
  lVar12 = *(longlong *)(lVar6 + 0x658);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(lVar6 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) goto LAB_1439360b0;
    if (lVar12 == 0) goto LAB_143935dac;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_1439360b0:
    FUN_1456cec3c(lVar12);
  }
  if (DAT_14cb06da8 == 0) {
    local_70 = &local_38;
    local_38 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1464003b0;
    local_78 = &LAB_147d17bdf;
    local_80 = &LAB_1417edf22;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar6,local_40[199],0);
  }
LAB_143935dac:
  lVar6 = *(longlong *)(local_40 + 0x18);
  if (lVar6 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 8));
  }
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(lVar5 + 0xec);
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar9 = 0;
    do {
      puVar1 = local_58 + (int)local_50;
      *local_58 = uVar8;
      iVar9 = iVar9 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_58 = puVar1;
    } while (iVar9 < *piVar11);
  }
  if (lVar6 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 8));
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439360be FUN_1439360be body=1803 status=ok
// SIG undefined FUN_1439360be(void)

void FUN_1439360be(byte *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort *puVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  int *piVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  float *local_80;
  uint local_78;
  float local_74;
  float *local_70;
  uint local_68;
  float local_64;
  float *local_60;
  uint local_58;
  float local_54;
  float *local_50;
  uint local_48;
  float local_44;
  undefined1 local_40 [8];
  uint *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140982196(local_40,param_1);
  if (*param_1 == 1) {
    iVar15 = *(int *)(param_1 + 0x30);
    uVar16 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15);
    *(int *)(param_1 + 0x30) = iVar15 + 1;
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar15 * 8);
    iVar15 = *(int *)(param_1 + 0x44) * uVar16;
    bVar10 = 1;
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar14 = uVar7 & 0x7fff;
    uVar16 = (uint)(uVar7 >> 0xf);
    lVar9 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar7 < 0) {
      lVar12 = (ulonglong)(uVar14 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70);
    }
    else {
      iVar15 = **(int **)(lVar9 + 0x20);
      lVar12 = 0;
      if (iVar15 <= (int)uVar14) {
        do {
          uVar14 = uVar14 - iVar15;
          iVar15 = (*(int **)(lVar9 + 0x20))[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while (iVar15 <= (int)uVar14);
      }
      lVar12 = (longlong)(int)uVar14 + *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar12 * 8);
    }
    iVar15 = *(int *)(lVar9 + 0x4c) * uVar16;
    bVar10 = *param_1;
  }
  if ((bVar10 & 1) == 0) {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar14 = uVar7 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_78 = 1;
      local_80 = (float *)((ulonglong)(uVar14 * *(int *)(lVar9 + 0x80)) +
                           *(longlong *)(lVar9 + 0x70) + (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_78 = (uint)bVar10;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_80 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  if (*param_1 == 1) {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_68 = (uint)bVar10;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_70 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar14 = uVar7 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_68 = 1;
      local_70 = (float *)((ulonglong)(uVar14 * *(int *)(lVar9 + 0x80)) +
                           *(longlong *)(lVar9 + 0x70) + (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_58 = (uint)bVar10;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_60 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar14 = uVar7 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_60 = &local_54;
      local_58 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_58 = 1;
      local_60 = (float *)((ulonglong)(uVar14 * *(int *)(lVar9 + 0x80)) +
                           *(longlong *)(lVar9 + 0x70) + (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_48 = (uint)bVar10;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_50 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar14 = uVar7 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_50 = &local_44;
      local_48 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_48 = 1;
      local_50 = (float *)((ulonglong)(uVar14 * *(int *)(lVar9 + 0x80)) +
                           *(longlong *)(lVar9 + 0x70) + (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (((((local_38[1] != 0) && (uVar14 = *local_38, -1 < (int)uVar14)) &&
       ((int)uVar14 < DAT_14c9647dc)) &&
      ((plVar17 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar17 != (longlong *)0x0 && (*(uint *)(plVar17 + 2) == local_38[1])))) &&
     (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && ((*plVar17 != 0 && (DAT_14cad2858 == 0)))))) {
    local_a0 = &local_30;
    local_30 = FUN_144a7958c;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_146395584;
    local_a8 = &LAB_147a0ba80;
    local_b0 = &LAB_14575ccce;
    local_b8 = L"Engine";
    local_c0 = 0x40000000000;
    local_c8 = 0x10000004;
    local_d0 = 0x10;
    local_d8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  lVar9 = *(longlong *)(local_38 + 200);
  if (lVar9 == 0) {
    bVar10 = *param_1;
  }
  else {
    iVar11 = *(int *)(lVar9 + 0xec) + -1;
    bVar10 = *param_1;
    if (-1 < iVar11) {
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if ((bVar10 & 1) != 0) {
        pbVar13 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar13) {
        piVar18 = (int *)(lVar12 + (longlong)iVar15 * 4);
        iVar15 = 0;
        do {
          iVar19 = *piVar18;
          if (iVar11 < *piVar18) {
            iVar19 = iVar11;
          }
          if (iVar19 < 1) {
            iVar19 = 0;
          }
          lVar12 = *(longlong *)(lVar9 + 0x120);
          uVar20 = (ulonglong)(uint)(iVar19 * *(int *)(lVar9 + 0x128));
          bVar10 = *(byte *)(lVar12 + 3 + uVar20);
          bVar5 = *(byte *)(lVar12 + uVar20);
          bVar6 = *(byte *)(lVar12 + 1 + uVar20);
          pfVar1 = local_80 + (int)local_78;
          *local_80 = (float)*(byte *)(lVar12 + 2 + uVar20) * 0.003921569;
          pfVar2 = local_70 + (int)local_68;
          *local_70 = (float)bVar6 * 0.003921569;
          pfVar3 = local_60 + (int)local_58;
          *local_60 = (float)bVar5 * 0.003921569;
          pfVar4 = local_50 + (int)local_48;
          *local_50 = (float)bVar10 * 0.003921569;
          iVar15 = iVar15 + 1;
          pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != 0) {
            pbVar13 = param_1 + 0x3c;
          }
          piVar18 = (int *)((longlong)piVar18 + (ulonglong)(uVar16 << 2));
          local_80 = pfVar1;
          local_70 = pfVar2;
          local_60 = pfVar3;
          local_50 = pfVar4;
        } while (iVar15 < *(int *)pbVar13);
      }
      goto LAB_1439365e8;
    }
  }
  pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if ((bVar10 & 1) != 0) {
    pbVar13 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar13) {
    iVar15 = 0;
    do {
      pfVar1 = local_80 + (int)local_78;
      *local_80 = 1.0;
      pfVar2 = local_70 + (int)local_68;
      *local_70 = 1.0;
      pfVar3 = local_60 + (int)local_58;
      *local_60 = 1.0;
      pfVar4 = local_50 + (int)local_48;
      *local_50 = 1.0;
      iVar15 = iVar15 + 1;
      pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar13 = param_1 + 0x3c;
      }
      local_80 = pfVar1;
      local_70 = pfVar2;
      local_60 = pfVar3;
      local_50 = pfVar4;
    } while (iVar15 < *(int *)pbVar13);
  }
LAB_1439365e8:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1439367ca FUN_1439367ca body=55 status=ok
// SIG undefined FUN_1439367ca(void)

void FUN_1439367ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39608 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39608 = FUN_14171c317(FUN_14646ba62,uVar1,L"ENiagaraCompilationState");
  }
  return;
}



// FUNCTION 143936801 FUN_143936801 body=69 status=ok
// SIG undefined FUN_143936801(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143936801(void)

{
  _DAT_14cb39618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143936843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39620,1);
  return;
}



// FUNCTION 143936846 FUN_143936846 body=69 status=ok
// SIG undefined FUN_143936846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143936846(void)

{
  _DAT_14cb39628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143936888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39630,1);
  return;
}



// FUNCTION 14393688b FUN_14393688b body=69 status=ok
// SIG undefined FUN_14393688b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14393688b(void)

{
  _DAT_14cb39638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439368cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39640,1);
  return;
}



// FUNCTION 1439368d0 FUN_1439368d0 body=1756 status=ok
// SIG undefined FUN_1439368d0(void)

undefined2 *
FUN_1439368d0(undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined2 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  FUN_140056680(local_78,L"NiagaraRayRequests");
  FUN_14646ba92(param_1 + 4,DAT_14c7627ec,local_78);
  if (local_78[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_78,L"NiagaraRayTraceIntersections");
  FUN_14646bafc(param_1 + 0x20,DAT_14c7627ec,local_78);
  if (local_78[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_78,L"NiagaraRayTraceCounts");
  FUN_14646bb66(param_1 + 0x3c,DAT_14c7627f0,local_78);
  if (local_78[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 3;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  *(undefined8 *)(param_1 + 0x146) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 1;
  FUN_1458ad7d4(param_1,param_4);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143936b07;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143936eeb;
      goto LAB_143936b10;
    }
  }
  else {
LAB_143936b07:
    if (iVar6 != 0x10) {
LAB_143936b10:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143936eeb;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143936eeb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143936c7a;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14393865d);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143936c7a:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143936cfa;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143936cfa:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14ad9e5e8;
        puVar15[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad9e560;
        local_78[0] = FUN_1439f3126;
        local_88 = local_78;
        local_50 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraAsyncGpuTraceHelperSetupGPUSceneDelegates",
                      &DAT_14cb399cc);
        if (local_78[0] != (code *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143936bb1;
    }
  }
LAB_143936eeb:
  FUN_14646c3cc(&DAT_14ca38478,local_78,param_1);
  FUN_14646c3cc(&DAT_14ca38490,local_78,param_1);
LAB_143936bb1:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143936fae FUN_143936fae body=412 status=ok
// SIG undefined FUN_143936fae(void)

void FUN_143936fae(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140457ffc(&DAT_14ca38478,param_1);
  FUN_140457ffc(&DAT_14ca38490,param_1);
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x28))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_14006caaa(param_1 + 0xf0);
  FUN_14587f2ce(param_1 + 8);
  FUN_14587f3dc(param_1 + 0x40);
  FUN_14581f1b4(param_1 + 0x90);
  FUN_14581f1b4(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  FUN_14476820c(param_1 + 0x268);
  FUN_1459742da(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  FUN_1458c805a(param_1 + 0x1f8);
  FUN_1412d1286(*(undefined8 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e8));
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_14583ab30(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_14583ab30(param_1 + 0xf0);
  FUN_14580e980(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14646c2f6(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14646c334(param_1 + 0x10);
  return;
}



// FUNCTION 14393714a FUN_14393714a body=924 status=ok
// SIG undefined FUN_14393714a(void)

void FUN_14393714a(undefined2 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined2 *puStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  longlong *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x92)) {
    plVar2 = (longlong *)(param_1 + 0x78);
    local_c8 = param_1 + 4;
    iVar10 = 0;
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006cbe2(local_c8,param_2,0x400,0x10);
    local_d0 = param_1 + 0x20;
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006cd1c(local_d0,param_2,0x10,0x400);
    local_d8 = param_1 + 0x48;
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006d018(local_d8,param_2,0x400,0x14);
    local_e0 = param_1 + 0x60;
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006d018(local_e0,param_2,0x400,0x14);
    puVar3 = param_1 + 0x80;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    puStack_b0 = puVar3;
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_1449c0562(&local_b8);
      iVar10 = *(int *)(param_1 + 0x8c);
    }
    local_70 = local_a8;
    uVar5 = local_70;
    local_68 = uStack_a0;
    local_64 = uStack_9c;
    local_80 = local_b8;
    local_78 = puStack_b0;
    local_70._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_88 = plVar2;
    if ((local_70._4_4_ != iVar10) || (puStack_b0 != puVar3)) {
      local_e8 = param_1 + 0x124;
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        if (*(int *)(*local_88 + 0x48 + (longlong)iVar6 * 0x60) != 0) {
          lVar8 = *local_88 + (longlong)iVar6 * 0x60;
          local_b8 = *(undefined8 *)(lVar8 + 8);
          puStack_b0 = *(undefined2 **)(lVar8 + 0x18);
          local_a8 = *(undefined8 *)(lVar8 + 0x38);
          uStack_a0 = *(undefined4 *)(lVar8 + 0x10);
          uStack_9c = *(undefined4 *)(lVar8 + 0x20);
          uStack_98 = *(undefined4 *)(lVar8 + 0x40);
          uStack_94 = *(undefined8 *)(lVar8 + 0x48);
          puVar9 = (undefined2 *)0x0;
          if (*(int *)(param_1 + 0x116) < *(int *)(param_1 + 0x100)) {
            puVar9 = local_e8;
          }
          plVar7 = (longlong *)FUN_1480d780a(param_1,*(undefined4 *)(lVar8 + 0x50));
          if (plVar7 == (longlong *)0x0) {
            FUN_1438f79f4(param_2,*param_1,&local_b8);
          }
          else {
            local_c0 = *param_4;
            if (local_c0 != 0) {
              LOCK();
              *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
              UNLOCK();
            }
            local_f8 = puVar9;
            (**(code **)(*plVar7 + 0x20))(plVar7,param_2,&local_b8,&local_c0);
          }
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != plVar2 || (local_78 != puVar3 || local_70._4_4_ != iVar10));
    }
    local_70 = uVar5;
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006cbe2(local_c8,param_2,0x10,0x400);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006cd1c(local_d0,param_2,0x400,0x10);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006d018(local_d8,param_2,0x14,0x400);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FUN_14006d018(local_e0,param_2,0x14,0x400);
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1439374e8 FUN_1439374e8 body=810 status=ok
// SIG undefined FUN_1439374e8(void)

void FUN_1439374e8(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar7 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x130);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar6 >> 0x10 ^ uVar6))
                              * 4);
    if (iVar10 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar10 * 0x60;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar10 * 0x60) == param_3)
        goto LAB_143937597;
        iVar10 = *(int *)(lVar7 + 0x58);
      } while (iVar10 != -1);
    }
  }
  lVar7 = 0;
LAB_143937597:
  if (*(longlong *)(lVar7 + 8) == 0) {
    FUN_1480d790c(param_1 + 8,&local_78,param_2,*(undefined4 *)(lVar7 + 0x48));
    *(undefined4 *)(lVar7 + 8) = (undefined4)local_78;
    *(undefined4 *)(lVar7 + 0xc) = local_78._4_4_;
    *(undefined4 *)(lVar7 + 0x10) = uStack_70;
    *(undefined4 *)(lVar7 + 0x14) = uStack_6c;
    FUN_1480d7a50(param_1 + 0x40,&local_78,param_2,*(undefined4 *)(lVar7 + 0x48));
    *(undefined4 *)(lVar7 + 0x18) = (undefined4)local_78;
    *(undefined4 *)(lVar7 + 0x1c) = local_78._4_4_;
    *(undefined4 *)(lVar7 + 0x20) = uStack_70;
    *(undefined4 *)(lVar7 + 0x24) = uStack_6c;
    local_98 = 0;
    uStack_90 = 0;
    cVar5 = FUN_1480dc36c(param_1 + 0xc0,param_1 + 0x80,param_2);
    lVar9 = local_98;
    if (cVar5 != '\0') {
      local_5c = *(undefined4 *)(param_1 + 0xe4);
      local_68 = *(undefined8 *)(local_98 + 8);
      local_78 = 0xffffffffffffffff;
      uStack_70 = 0xffffffff;
      local_60 = 3;
      local_58 = 0x400;
      local_48 = 0;
      local_80 = 1;
      local_88 = &local_78;
      FUN_144760590(param_2,&local_88,0);
      uVar1 = *(undefined8 *)(lVar9 + 8);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar8 + 5;
      if ((undefined8 *)param_2[1] < puVar11) {
        FUN_140023dd8(param_2,0x30);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar8 + 5;
      }
      *param_2 = (ulonglong)puVar11;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14a29b380;
      puVar8[2] = uVar1;
      puVar8[3] = 0;
      puVar8[4] = 0;
      local_68 = *(undefined8 *)(lVar9 + 8);
      local_78 = 0xffffffffffffffff;
      uStack_70 = 0xffffffff;
      local_60 = 3;
      local_5c = 0x400;
      local_58 = (ulonglong)*(uint *)(param_1 + 0xe4);
      local_48 = 0;
      local_80 = 1;
      local_88 = &local_78;
      FUN_144760590(param_2,&local_88,0);
    }
    *(longlong *)(lVar7 + 0x38) = local_98;
    *(ulonglong *)(lVar7 + 0x40) = CONCAT44(uStack_8c,uStack_90);
    if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
      uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar9 = param_1 + 0x178;
      if (*(longlong *)(param_1 + 0x180) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x180);
      }
      iVar10 = *(int *)(lVar9 + (ulonglong)
                                (*(int *)(param_1 + 0x188) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar10 != -1) {
        do {
          lVar9 = *(longlong *)(param_1 + 0x140) + (longlong)iVar10 * 0x60;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar10 * 0x60) == param_3) {
            if (((lVar9 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(lVar9 + 0x18) != 0))
            goto LAB_143937806;
            break;
          }
          iVar10 = *(int *)(lVar9 + 0x58);
        } while (iVar10 != -1);
      }
    }
    lVar9 = lVar7;
LAB_143937806:
    uVar2 = *(undefined4 *)(lVar9 + 0x1c);
    uVar3 = *(undefined4 *)(lVar9 + 0x20);
    uVar4 = *(undefined4 *)(lVar9 + 0x24);
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(lVar9 + 0x18);
    *(undefined4 *)(lVar7 + 0x2c) = uVar2;
    *(undefined4 *)(lVar7 + 0x30) = uVar3;
    *(undefined4 *)(lVar7 + 0x34) = uVar4;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143937814 FUN_143937814 body=522 status=ok
// SIG undefined FUN_143937814(void)

void FUN_143937814(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    FUN_1480d790c(param_1 + 8,&local_68,param_2,1);
    *(undefined4 *)(param_1 + 400) = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0x194) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x198) = uStack_60;
    *(undefined4 *)(param_1 + 0x19c) = uStack_5c;
    FUN_1480d7a50(param_1 + 0x40,&local_68,param_2,1);
    *(undefined8 *)(param_1 + 0x1a0) = local_68;
    *(ulonglong *)(param_1 + 0x1a8) = CONCAT44(uStack_5c,uStack_60);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1ac);
    local_88 = 0;
    uStack_80 = 0;
    cVar3 = FUN_1480dc36c(param_1 + 0xc0,param_1 + 0x80,param_2);
    lVar2 = local_88;
    if (cVar3 != '\0') {
      local_4c = *(undefined4 *)(param_1 + 0xe4);
      local_58 = *(undefined8 *)(local_88 + 8);
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffff;
      local_50 = 3;
      local_48 = 0x400;
      local_38 = 0;
      local_70 = 1;
      local_78 = &local_68;
      FUN_144760590(param_2,&local_78,0);
      uVar1 = *(undefined8 *)(lVar2 + 8);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 5;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x30);
        puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar4 + 5;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar4;
      param_2[6] = (ulonglong)(puVar4 + 1);
      puVar4[1] = 0;
      *puVar4 = &PTR_LAB_14a29b380;
      puVar4[2] = uVar1;
      puVar4[3] = 0;
      puVar4[4] = 0;
      local_58 = *(undefined8 *)(lVar2 + 8);
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffff;
      local_50 = 3;
      local_4c = 0x400;
      local_48 = (ulonglong)*(uint *)(param_1 + 0xe4);
      local_38 = 0;
      local_70 = 1;
      local_78 = &local_68;
      FUN_144760590(param_2,&local_78,0);
    }
    *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_88;
    *(undefined4 *)(param_1 + 0x1c4) = local_88._4_4_;
    *(undefined4 *)(param_1 + 0x1c8) = uStack_80;
    *(undefined4 *)(param_1 + 0x1cc) = uStack_7c;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143937a20 FUN_143937a20 body=1302 status=ok
// SIG undefined FUN_143937a20(void)

void FUN_143937a20(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (lVar4 = *(longlong *)(param_2 + 0x5a8), lVar4 == 0)) goto LAB_143937b32;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143937a83;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143937e79;
      goto LAB_143937a8c;
    }
  }
  else {
LAB_143937a83:
    if (iVar7 != 0x10) {
LAB_143937a8c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143937e79;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143937e79;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143937bf8;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14393865d);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143937bf8:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x18);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143937c78;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143937c78:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ad9e668;
        puVar16[0x15] = param_1;
        puVar16[0x16] = lVar4;
        *(undefined4 *)(puVar16 + 0x17) = param_3;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad9e600;
        local_78[0] = FUN_1439f3390;
        local_50 = param_1;
        local_48 = lVar4;
        local_40 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraSetPrimHWRTCollisionGroup",&DAT_14cb399d0);
        if (local_78[0] != (code *)0x0) {
          pppuVar14 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar14 = &local_58;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143937b32;
    }
  }
LAB_143937e79:
  puVar10 = (undefined4 *)
            FUN_14810b82c(param_1 + 0x1f8,*(undefined4 *)(*(longlong *)(lVar4 + 0x218) + 0x10),
                          *(longlong *)(lVar4 + 0x218) + 0x10);
  *puVar10 = param_3;
  *(undefined1 *)(param_1 + 0x2b4) = 1;
LAB_143937b32:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143937f37 FUN_143937f37 body=55 status=ok
// SIG undefined FUN_143937f37(void)

void FUN_143937f37(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb396e0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb396e0 = FUN_14171c317(FUN_14646bda4,uVar1,L"ENiagaraBakerViewMode");
  }
  return;
}



// FUNCTION 143937f6e FUN_143937f6e body=69 status=ok
// SIG undefined FUN_143937f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143937f6e(void)

{
  _DAT_14cb39748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143937fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39750,1);
  return;
}



// FUNCTION 143937fb3 FUN_143937fb3 body=69 status=ok
// SIG undefined FUN_143937fb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143937fb3(void)

{
  _DAT_14cb39758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143937ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39760,1);
  return;
}



// FUNCTION 143937ff8 FUN_143937ff8 body=69 status=ok
// SIG undefined FUN_143937ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143937ff8(void)

{
  _DAT_14cb39768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014393803a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39770,1);
  return;
}



// FUNCTION 14393803d FUN_14393803d body=69 status=ok
// SIG undefined FUN_14393803d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14393803d(void)

{
  _DAT_14cb39778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014393807f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39780,1);
  return;
}



// FUNCTION 143938082 FUN_143938082 body=69 status=ok
// SIG undefined FUN_143938082(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143938082(void)

{
  _DAT_14cb39788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439380c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39790,1);
  return;
}



// FUNCTION 1439380c7 FUN_1439380c7 body=69 status=ok
// SIG undefined FUN_1439380c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439380c7(void)

{
  _DAT_14cb39798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143938109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb397a0,1);
  return;
}



// FUNCTION 14393810c FUN_14393810c body=69 status=ok
// SIG undefined FUN_14393810c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14393810c(void)

{
  _DAT_14cb397a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014393814e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb397b0,1);
  return;
}



// FUNCTION 143938162 FUN_143938162 body=17 status=ok
// SIG undefined FUN_143938162(void)

byte FUN_143938162(void)

{
  return DAT_14c7627f8 != 0 & DAT_14ca84d96;
}



// FUNCTION 143938173 FUN_143938173 body=251 status=ok
// SIG undefined FUN_143938173(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_143938173(byte *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_4 - 1U < 4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb397f0) && (FUN_144b3d300(&DAT_14cb397f0), DAT_14cb397f0 == -1)) {
      _DAT_14cb397e0 = 0xd151547;
      uRam000000014cb397e4 = 0xf28110d;
      uRam000000014cb397e8 = 0x111110f;
      uRam000000014cb397ec = 0x10a0a25;
      _Init_thread_footer(&DAT_14cb397f0);
    }
    bVar2 = (&DAT_14ad95dfc)[((ulonglong)param_2 & 0xff) + (ulonglong)(param_4 - 1U) * 3];
    uVar3 = (uint)bVar2;
    uVar1 = *(uint *)((longlong)&DAT_14c873430 + (ulonglong)(uVar3 * 0x30));
    while ((param_3 & ~uVar1) != 0) {
      lVar4 = 0;
      while ((&DAT_14cb397e0)[lVar4] != (char)uVar3) {
        lVar4 = lVar4 + 2;
        if (lVar4 == 0x10) goto LAB_143938225;
      }
      bVar2 = *(byte *)(lVar4 + 0x14cb397e1);
      uVar3 = (uint)bVar2;
      uVar1 = *(uint *)((longlong)&DAT_14c873430 + (ulonglong)(uVar3 * 0x30));
    }
    *param_1 = bVar2;
    bVar2 = 1;
  }
  else {
LAB_143938225:
    bVar2 = 0;
  }
  param_1[1] = bVar2;
  return param_1;
}



// FUNCTION 14393826e FUN_14393826e body=83 status=ok
// SIG undefined FUN_14393826e(void)

void FUN_14393826e(undefined4 *param_1,char param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_2 == '\0') {
LAB_1439382a3:
    uVar2 = 7;
    if ((param_3 & ~DAT_14c8736a0) != 0) {
LAB_1439382bb:
      uVar1 = 0;
      goto LAB_1439382bd;
    }
  }
  else if (param_2 == '\x01') {
LAB_143938291:
    uVar2 = 4;
    if ((param_3 & ~DAT_14c873820) != 0) goto LAB_1439382a3;
  }
  else {
    if (param_2 != '\x02') goto LAB_1439382bb;
    uVar2 = 0;
    if ((param_3 & ~DAT_14c874180) != 0) goto LAB_143938291;
  }
  *param_1 = uVar2;
  uVar1 = 1;
LAB_1439382bd:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



// FUNCTION 143938328 FUN_143938328 body=31 status=ok
// SIG undefined FUN_143938328(void)

undefined8 FUN_143938328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1439383a6 FUN_1439383a6 body=31 status=ok
// SIG undefined FUN_1439383a6(void)

undefined8 FUN_1439383a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1439383c6 FUN_1439383c6 body=51 status=ok
// SIG undefined FUN_1439383c6(void)

undefined8 * FUN_1439383c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad96be8;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938440 FUN_143938440 body=48 status=ok
// SIG undefined FUN_143938440(void)

void FUN_143938440(void)

{
  if (DAT_14cb39888 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb39878 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439384b6 FUN_1439384b6 body=298 status=ok
// SIG undefined FUN_1439384b6(void)

void FUN_1439384b6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  local_48 = param_1 + 1;
  FUN_1480dca52(lVar2 + 0x10,&local_3c);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  lVar8 = (longlong)local_3c * 0x140;
  lVar2 = lVar3 + lVar8;
  uVar5 = (int)param_1[3] + 3U & 0xfffffffc;
  uVar1 = *(uint *)(lVar2 + 0x110);
  uVar6 = (ulonglong)uVar1;
  iVar4 = *(int *)(lVar2 + 0x114);
  *(uint *)(lVar2 + 0x110) = uVar5 + uVar1;
  if (iVar4 - uVar1 < uVar5) {
    FUN_1447808da((undefined8 *)(lVar2 + 0x108));
    iVar4 = *(int *)(lVar3 + lVar8 + 0x114);
  }
  memset(*(void **)(lVar2 + 0x108),(int)CONCAT71((int7)(uVar6 >> 8),0xff),(longlong)iVar4 << 2);
  plVar7 = (longlong *)(lVar3 + lVar8 + 0x118);
  if (plVar7 != param_1 + 2) {
    iVar4 = (int)param_1[3];
    *(int *)(lVar3 + 0x120 + lVar8) = iVar4;
    if (iVar4 == 0 && *(int *)(lVar3 + 0x124 + lVar8) == 0) {
      *(undefined4 *)(lVar3 + lVar8 + 0x124) = 0;
    }
    else {
      FUN_1447bda9e(plVar7,iVar4);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143938606 FUN_143938606 body=29 status=ok
// SIG undefined FUN_143938606(void)

void FUN_143938606(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143938624 FUN_143938624 body=57 status=ok
// SIG undefined FUN_143938624(void)

undefined8 * FUN_143938624(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad98000;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938684 FUN_143938684 body=282 status=ok
// SIG undefined FUN_143938684(void)

undefined8 * FUN_143938684(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14393865d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14393879e FUN_14393879e body=387 status=ok
// SIG undefined FUN_14393879e(void)

void FUN_14393879e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  local_50 = param_1 + 0xb0;
  FUN_1480dca52(lVar3 + 0x10,&local_44);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  lVar9 = (longlong)local_44 * 0x140;
  lVar3 = lVar4 + lVar9;
  uVar6 = *(int *)(param_1 + 0xc0) + 3U & 0xfffffffc;
  uVar2 = *(uint *)(lVar3 + 0x110);
  uVar7 = (ulonglong)uVar2;
  iVar5 = *(int *)(lVar3 + 0x114);
  *(uint *)(lVar3 + 0x110) = uVar6 + uVar2;
  if (iVar5 - uVar2 < uVar6) {
    FUN_1447808da((undefined8 *)(lVar3 + 0x108));
    iVar5 = *(int *)(lVar4 + lVar9 + 0x114);
  }
  memset(*(void **)(lVar3 + 0x108),(int)CONCAT71((int7)(uVar7 >> 8),0xff),(longlong)iVar5 << 2);
  plVar8 = (longlong *)(lVar4 + lVar9 + 0x118);
  if (plVar8 != (longlong *)(param_1 + 0xb8)) {
    iVar5 = *(int *)(param_1 + 0xc0);
    _Src = *(void **)(param_1 + 0xb8);
    *(int *)(lVar4 + 0x120 + lVar9) = iVar5;
    if (iVar5 == 0 && *(int *)(lVar4 + 0x124 + lVar9) == 0) {
      *(undefined4 *)(lVar4 + lVar9 + 0x124) = 0;
    }
    else {
      FUN_1447bda9e(plVar8,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*plVar8,_Src,(longlong)iVar5 << 2);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
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



// FUNCTION 14393895e FUN_14393895e body=12 status=ok
// SIG undefined FUN_14393895e(void)

void FUN_14393895e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143938967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14393896a FUN_14393896a body=29 status=ok
// SIG undefined FUN_14393896a(void)

undefined8 FUN_14393896a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938988 FUN_143938988 body=282 status=ok
// SIG undefined FUN_143938988(void)

undefined8 * FUN_143938988(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14393865d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143938aa2 FUN_143938aa2 body=117 status=ok
// SIG undefined FUN_143938aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143938aa2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480dd004(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480dd004(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143938b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143938b18 FUN_143938b18 body=29 status=ok
// SIG undefined FUN_143938b18(void)

undefined8 FUN_143938b18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938b4a FUN_143938b4a body=93 status=ok
// SIG undefined FUN_143938b4a(void)

void FUN_143938b4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad980a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143938ba8 FUN_143938ba8 body=93 status=ok
// SIG undefined FUN_143938ba8(void)

void FUN_143938ba8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad980a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143938c06 FUN_143938c06 body=126 status=ok
// SIG undefined FUN_143938c06(void)

void FUN_143938c06(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad980a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143938c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143938c8c FUN_143938c8c body=19 status=ok
// SIG undefined FUN_143938c8c(void)

undefined1 FUN_143938c8c(undefined8 param_1,undefined8 param_2)

{
  FUN_1480cf328(param_2);
  return 1;
}



// FUNCTION 143938ca0 FUN_143938ca0 body=29 status=ok
// SIG undefined FUN_143938ca0(void)

undefined8 FUN_143938ca0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938cd2 FUN_143938cd2 body=93 status=ok
// SIG undefined FUN_143938cd2(void)

void FUN_143938cd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143938d30 FUN_143938d30 body=93 status=ok
// SIG undefined FUN_143938d30(void)

void FUN_143938d30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143938d8e FUN_143938d8e body=126 status=ok
// SIG undefined FUN_143938d8e(void)

void FUN_143938d8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143938dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143938e14 FUN_143938e14 body=19 status=ok
// SIG undefined FUN_143938e14(void)

undefined1 FUN_143938e14(undefined8 param_1,undefined8 param_2)

{
  FUN_1480cf71c(param_2);
  return 1;
}



// FUNCTION 143938e28 FUN_143938e28 body=29 status=ok
// SIG undefined FUN_143938e28(void)

undefined8 FUN_143938e28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938e5a FUN_143938e5a body=91 status=ok
// SIG undefined FUN_143938e5a(void)

void FUN_143938e5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98180;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143938eb6 FUN_143938eb6 body=91 status=ok
// SIG undefined FUN_143938eb6(void)

void FUN_143938eb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98180;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143938f12 FUN_143938f12 body=124 status=ok
// SIG undefined FUN_143938f12(void)

void FUN_143938f12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98180;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143938f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143938f9c FUN_143938f9c body=25 status=ok
// SIG undefined FUN_143938f9c(void)

undefined8 FUN_143938f9c(longlong param_1,undefined8 param_2)

{
  FUN_1480dd0fe(param_2,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143938fb6 FUN_143938fb6 body=29 status=ok
// SIG undefined FUN_143938fb6(void)

undefined8 FUN_143938fb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143938fe8 FUN_143938fe8 body=91 status=ok
// SIG undefined FUN_143938fe8(void)

void FUN_143938fe8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad981f0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143939044 FUN_143939044 body=91 status=ok
// SIG undefined FUN_143939044(void)

void FUN_143939044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad981f0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439390a0 FUN_1439390a0 body=124 status=ok
// SIG undefined FUN_1439390a0(void)

void FUN_1439390a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad981f0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393910d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143939132 FUN_143939132 body=32 status=ok
// SIG undefined FUN_143939132(void)

undefined8 FUN_143939132(longlong param_1,undefined8 param_2)

{
  FUN_1480dd258(param_2,*(undefined4 *)(param_1 + 0x18),DAT_14c84635c);
  return 1;
}



// FUNCTION 143939152 FUN_143939152 body=29 status=ok
// SIG undefined FUN_143939152(void)

undefined8 FUN_143939152(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143939184 FUN_143939184 body=91 status=ok
// SIG undefined FUN_143939184(void)

void FUN_143939184(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98260;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439391e0 FUN_1439391e0 body=91 status=ok
// SIG undefined FUN_1439391e0(void)

void FUN_1439391e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98260;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393923c FUN_14393923c body=124 status=ok
// SIG undefined FUN_14393923c(void)

void FUN_14393923c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98260;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439392a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439392b8 FUN_1439392b8 body=85 status=ok
// SIG undefined FUN_1439392b8(void)

void FUN_1439392b8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14c846338;
  local_18 = DAT_14c846330;
  FUN_1480dd3f5(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14393930e FUN_14393930e body=87 status=ok
// SIG undefined FUN_14393930e(void)

undefined8 FUN_14393930e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14c846338;
  local_18 = DAT_14c846330;
  FUN_1480dd3f5(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143939366 FUN_143939366 body=29 status=ok
// SIG undefined FUN_143939366(void)

undefined8 FUN_143939366(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143939398 FUN_143939398 body=91 status=ok
// SIG undefined FUN_143939398(void)

void FUN_143939398(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad982d0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439393f4 FUN_1439393f4 body=91 status=ok
// SIG undefined FUN_1439393f4(void)

void FUN_1439393f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad982d0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143939450 FUN_143939450 body=124 status=ok
// SIG undefined FUN_143939450(void)

void FUN_143939450(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad982d0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439394bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439394cc FUN_1439394cc body=72 status=ok
// SIG undefined FUN_1439394cc(void)

void FUN_1439394cc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1480dd5f6(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143939516 FUN_143939516 body=74 status=ok
// SIG undefined FUN_143939516(void)

undefined8 FUN_143939516(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1480dd5f6(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143939562 FUN_143939562 body=29 status=ok
// SIG undefined FUN_143939562(void)

undefined8 FUN_143939562(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143939594 FUN_143939594 body=91 status=ok
// SIG undefined FUN_143939594(void)

void FUN_143939594(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98340;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439395f0 FUN_1439395f0 body=91 status=ok
// SIG undefined FUN_1439395f0(void)

void FUN_1439395f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98340;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393964c FUN_14393964c body=124 status=ok
// SIG undefined FUN_14393964c(void)

void FUN_14393964c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98340;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439396b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439396de FUN_1439396de body=32 status=ok
// SIG undefined FUN_1439396de(void)

undefined8 FUN_1439396de(longlong param_1,undefined8 param_2)

{
  FUN_1480dd84d(param_2,*(undefined4 *)(param_1 + 0x18),&DAT_149e1e308);
  return 1;
}



// FUNCTION 1439396fe FUN_1439396fe body=29 status=ok
// SIG undefined FUN_1439396fe(void)

undefined8 FUN_1439396fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143939730 FUN_143939730 body=91 status=ok
// SIG undefined FUN_143939730(void)

void FUN_143939730(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad983b0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393978c FUN_14393978c body=91 status=ok
// SIG undefined FUN_14393978c(void)

void FUN_14393978c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad983b0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439397e8 FUN_1439397e8 body=124 status=ok
// SIG undefined FUN_1439397e8(void)

void FUN_1439397e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad983b0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143939855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143939864 FUN_143939864 body=80 status=ok
// SIG undefined FUN_143939864(void)

void FUN_143939864(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  local_c = 0;
  FUN_1480ddaa4(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439398b6 FUN_1439398b6 body=82 status=ok
// SIG undefined FUN_1439398b6(void)

undefined8 FUN_1439398b6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  local_c = 0;
  FUN_1480ddaa4(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14393990a FUN_14393990a body=29 status=ok
// SIG undefined FUN_14393990a(void)

undefined8 FUN_14393990a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393993c FUN_14393993c body=91 status=ok
// SIG undefined FUN_14393993c(void)

void FUN_14393993c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98420;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143939998 FUN_143939998 body=91 status=ok
// SIG undefined FUN_143939998(void)

void FUN_143939998(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98420;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439399f4 FUN_1439399f4 body=124 status=ok
// SIG undefined FUN_1439399f4(void)

void FUN_1439399f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98420;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143939a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143939a7e FUN_143939a7e body=25 status=ok
// SIG undefined FUN_143939a7e(void)

undefined8 FUN_143939a7e(longlong param_1,undefined8 param_2)

{
  FUN_1480ddca5(param_2,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143939a98 FUN_143939a98 body=29 status=ok
// SIG undefined FUN_143939a98(void)

undefined8 FUN_143939a98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143939aca FUN_143939aca body=91 status=ok
// SIG undefined FUN_143939aca(void)

void FUN_143939aca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98490;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143939b26 FUN_143939b26 body=91 status=ok
// SIG undefined FUN_143939b26(void)

void FUN_143939b26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98490;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143939b82 FUN_143939b82 body=124 status=ok
// SIG undefined FUN_143939b82(void)

void FUN_143939b82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98490;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143939bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143939c0c FUN_143939c0c body=25 status=ok
// SIG undefined FUN_143939c0c(void)

undefined8 FUN_143939c0c(longlong param_1,undefined8 param_2)

{
  FUN_1480dddfe(param_2,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143939c32 FUN_143939c32 body=341 status=ok
// SIG undefined FUN_143939c32(void)

void FUN_143939c32(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)*param_1 != '\0') && (*(char *)(param_2 + 0x348) != '\0')) &&
     ((longlong)*(int *)(param_2 + 0x2a8) != 0)) {
    lVar8 = *(longlong *)(param_2 + 0x2a0);
    lVar1 = *(longlong *)(param_2 + 0x388);
    local_60 = (longlong)*(int *)(param_2 + 0x2a8) * 0x58 + lVar8;
    local_58 = (longlong)*(int *)(param_2 + 0x390);
    lVar4 = local_58 * 0x50;
    do {
      if ((int)local_58 != 0) {
        lVar9 = 0;
        do {
          if ((*(longlong *)(lVar1 + 8 + lVar9) == *(longlong *)(lVar8 + 8)) &&
             ((*(longlong *)(lVar1 + 0x40 + lVar9) == *(longlong *)param_1[1] ||
              (((*(longlong *)param_1[2] != 0 &&
                (plVar6 = (longlong *)FUN_144741050((longlong *)param_1[2] + 1), *plVar6 != 0)) &&
               ((*(longlong *)(lVar1 + 0x20 + lVar9) == *(longlong *)param_1[2] &&
                (*(int *)(lVar1 + 0x28 + lVar9) == (int)((longlong *)param_1[2])[1])))))))) {
            puVar2 = (undefined8 *)param_1[3];
            pcVar3 = (code *)*puVar2;
            plVar6 = puVar2 + 4;
            if ((longlong *)puVar2[2] != (longlong *)0x0) {
              plVar6 = (longlong *)puVar2[2];
            }
            local_50 = param_2;
            uVar7 = (**(code **)(*plVar6 + 8))();
            cVar5 = (*pcVar3)(uVar7,&local_50,lVar8);
            if (cVar5 == '\0') {
              *(undefined1 *)*param_1 = 0;
              goto LAB_143939d60;
            }
          }
          lVar9 = lVar9 + 0x50;
        } while (lVar4 != lVar9);
      }
      lVar8 = lVar8 + 0x58;
    } while (lVar8 != local_60);
  }
LAB_143939d60:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143939da6 FUN_143939da6 body=12 status=ok
// SIG undefined FUN_143939da6(void)

void FUN_143939da6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143939daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143939db2 FUN_143939db2 body=29 status=ok
// SIG undefined FUN_143939db2(void)

undefined8 FUN_143939db2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143939dd0 FUN_143939dd0 body=282 status=ok
// SIG undefined FUN_143939dd0(void)

undefined8 * FUN_143939dd0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14393865d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143939eea FUN_143939eea body=117 status=ok
// SIG undefined FUN_143939eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143939eea(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480de72a(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480de72a(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143939f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143939f60 FUN_143939f60 body=1109 status=ok
// SIG undefined FUN_143939f60(void)

void FUN_143939f60(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_143939fd4:
    lVar15 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 2);
    lVar15 = 0;
    if (-1 < (int)uVar6) {
      plVar17 = (longlong *)0x0;
      if (DAT_14c9647dc <= (int)uVar6) goto LAB_143939ffa;
      plVar17 = (longlong *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != *(int *)((longlong)param_1 + 0x14)))
          || ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar15 = *plVar17, lVar15 == 0))
      goto LAB_143939fd4;
      lVar10 = *(longlong *)(lVar15 + 0x58);
      if (lVar10 != 0) {
        if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
          plVar17 = *(longlong **)(lVar10 + 8);
        }
        else {
          plVar17 = (longlong *)(**(code **)**(undefined8 **)(lVar10 + 0x10))();
        }
        goto LAB_143939ffa;
      }
    }
  }
  plVar17 = (longlong *)0x0;
LAB_143939ffa:
  lVar10 = FUN_1480de922(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  if (plVar17 == (longlong *)0x0) {
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_e8 = 0;
    local_e0 = 8;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    uStack_c4 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = DAT_14c84635c;
    local_50 = 0;
    if (DAT_14c9c0de0 != 0) {
      local_50 = DAT_14c9c0de0;
      LOCK();
      *(int *)(DAT_14c9c0de0 + 8) = *(int *)(DAT_14c9c0de0 + 8) + 1;
      UNLOCK();
    }
    FUN_1480de89a(lVar10,&local_158);
    FUN_1480da404(&local_158);
  }
  else {
    *(undefined1 *)(lVar10 + 0x78) = *(undefined1 *)(lVar15 + 0x34);
    (**(code **)(*plVar17 + 0x38))(plVar17,lVar10 + 0x7c);
    uVar7 = *(undefined8 *)(lVar15 + 0x60);
    uVar8 = *(undefined8 *)(lVar15 + 0x68);
    uVar9 = *(undefined8 *)(lVar15 + 0x78);
    *(undefined8 *)(lVar10 + 0xb0) = *(undefined8 *)(lVar15 + 0x70);
    *(undefined8 *)(lVar10 + 0xb8) = uVar9;
    *(undefined8 *)(lVar10 + 0xa0) = uVar7;
    *(undefined8 *)(lVar10 + 0xa8) = uVar8;
    uVar7 = *(undefined8 *)(lVar15 + 0x80);
    uVar8 = *(undefined8 *)(lVar15 + 0x88);
    uVar9 = *(undefined8 *)(lVar15 + 0x98);
    *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar15 + 0x90);
    *(undefined8 *)(lVar10 + 0xd8) = uVar9;
    *(undefined8 *)(lVar10 + 0xc0) = uVar7;
    *(undefined8 *)(lVar10 + 200) = uVar8;
    uVar7 = *(undefined8 *)(lVar15 + 0xa0);
    uVar8 = *(undefined8 *)(lVar15 + 0xa8);
    uVar9 = *(undefined8 *)(lVar15 + 0xb8);
    *(undefined8 *)(lVar10 + 0xf0) = *(undefined8 *)(lVar15 + 0xb0);
    *(undefined8 *)(lVar10 + 0xf8) = uVar9;
    *(undefined8 *)(lVar10 + 0xe0) = uVar7;
    *(undefined8 *)(lVar10 + 0xe8) = uVar8;
    bVar4 = *(byte *)(lVar10 + 0x78);
    dVar3 = *(double *)(lVar15 + 200);
    *(float *)(lVar10 + 0x100) = (float)*(double *)(lVar15 + 0xc0);
    *(float *)(lVar10 + 0x104) = (float)dVar3;
    uVar16 = 0;
    do {
      plVar2 = (longlong *)(lVar10 + uVar16 * 0x28);
      lVar11 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar16 & 0xffffffff);
      lVar15 = *(longlong *)(lVar10 + uVar16 * 0x28);
      if (lVar15 != lVar11) {
        *plVar2 = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        if (lVar15 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar15 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar6 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar15 + 8);
            LOCK();
            uVar6 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar6 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)(lVar15 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar15;
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar14;
                  LOCK();
                  bVar18 = plVar14 != DAT_14ca843c0;
                  plVar13 = plVar12;
                  if (bVar18) {
                    plVar14 = DAT_14ca843c0;
                    plVar13 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar13;
                  UNLOCK();
                } while (bVar18);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar13;
                  LOCK();
                  bVar18 = plVar13 != DAT_14ca843c8;
                  plVar14 = plVar12;
                  if (bVar18) {
                    plVar13 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar18);
              }
            }
          }
        }
      }
      lVar11 = (**(code **)(*plVar17 + 0x30))
                         (plVar17,uVar16 & 0xffffffff,
                          uVar16 == 0 & 0xdU >> (bVar4 & 0xf) & bVar4 < 4);
      lVar15 = plVar2[1];
      if (lVar15 != lVar11) {
        plVar2[1] = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        if (lVar15 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar15 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar6 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar15 + 8);
            LOCK();
            uVar6 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar6 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)(lVar15 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar15;
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar14;
                  LOCK();
                  bVar18 = plVar14 != DAT_14ca843c0;
                  plVar13 = plVar12;
                  if (bVar18) {
                    plVar14 = DAT_14ca843c0;
                    plVar13 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar13;
                  UNLOCK();
                } while (bVar18);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar13;
                  LOCK();
                  bVar18 = plVar13 != DAT_14ca843c8;
                  plVar14 = plVar12;
                  if (bVar18) {
                    plVar13 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar18);
              }
            }
          }
        }
      }
      lVar11 = (**(code **)(*plVar17 + 0x10))(plVar17,0);
      lVar15 = plVar2[2];
      if (lVar15 != lVar11) {
        plVar2[2] = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        if (lVar15 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar15 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar6 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar15 + 8);
            LOCK();
            uVar6 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar6 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)(lVar15 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar15;
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar14;
                  LOCK();
                  bVar18 = plVar14 != DAT_14ca843c0;
                  plVar13 = plVar12;
                  if (bVar18) {
                    plVar14 = DAT_14ca843c0;
                    plVar13 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar13;
                  UNLOCK();
                } while (bVar18);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar13;
                  LOCK();
                  bVar18 = plVar13 != DAT_14ca843c8;
                  plVar14 = plVar12;
                  if (bVar18) {
                    plVar13 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar18);
              }
            }
          }
        }
      }
      (**(code **)(*plVar17 + 0x40))(plVar17,plVar2 + 3,uVar16 & 0xffffffff);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 3);
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14393a3c6 FUN_14393a3c6 body=12 status=ok
// SIG undefined FUN_14393a3c6(void)

void FUN_14393a3c6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014393a3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14393a3d2 FUN_14393a3d2 body=29 status=ok
// SIG undefined FUN_14393a3d2(void)

undefined8 FUN_14393a3d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393a3f0 FUN_14393a3f0 body=282 status=ok
// SIG undefined FUN_14393a3f0(void)

undefined8 * FUN_14393a3f0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14393865d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14393a50a FUN_14393a50a body=91 status=ok
// SIG undefined FUN_14393a50a(void)

void FUN_14393a50a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143939f60(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143939f60(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014393a546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14393a572 FUN_14393a572 body=51 status=ok
// SIG undefined FUN_14393a572(void)

void FUN_14393a572(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393a59b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14393a5b0 FUN_14393a5b0 body=12 status=ok
// SIG undefined FUN_14393a5b0(void)

void FUN_14393a5b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014393a5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14393a5bc FUN_14393a5bc body=29 status=ok
// SIG undefined FUN_14393a5bc(void)

undefined8 FUN_14393a5bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393a5da FUN_14393a5da body=282 status=ok
// SIG undefined FUN_14393a5da(void)

undefined8 * FUN_14393a5da(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14393865d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14393a6f4 FUN_14393a6f4 body=98 status=ok
// SIG undefined FUN_14393a6f4(void)

void FUN_14393a6f4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014393a74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14393a756 FUN_14393a756 body=29 status=ok
// SIG undefined FUN_14393a756(void)

undefined8 FUN_14393a756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393a788 FUN_14393a788 body=93 status=ok
// SIG undefined FUN_14393a788(void)

void FUN_14393a788(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98e90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393a7e6 FUN_14393a7e6 body=93 status=ok
// SIG undefined FUN_14393a7e6(void)

void FUN_14393a7e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98e90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393a844 FUN_14393a844 body=126 status=ok
// SIG undefined FUN_14393a844(void)

void FUN_14393a844(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98e90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393a8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393a8ca FUN_14393a8ca body=19 status=ok
// SIG undefined FUN_14393a8ca(void)

undefined1 FUN_14393a8ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d49b4(param_2);
  return 1;
}



// FUNCTION 14393a8de FUN_14393a8de body=29 status=ok
// SIG undefined FUN_14393a8de(void)

undefined8 FUN_14393a8de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393a910 FUN_14393a910 body=93 status=ok
// SIG undefined FUN_14393a910(void)

void FUN_14393a910(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98f00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393a96e FUN_14393a96e body=93 status=ok
// SIG undefined FUN_14393a96e(void)

void FUN_14393a96e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98f00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393a9cc FUN_14393a9cc body=126 status=ok
// SIG undefined FUN_14393a9cc(void)

void FUN_14393a9cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98f00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393aa3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393aa52 FUN_14393aa52 body=19 status=ok
// SIG undefined FUN_14393aa52(void)

undefined1 FUN_14393aa52(undefined8 param_1,undefined8 param_2)

{
  FUN_14392f838(param_2);
  return 1;
}



// FUNCTION 14393aa66 FUN_14393aa66 body=29 status=ok
// SIG undefined FUN_14393aa66(void)

undefined8 FUN_14393aa66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393aa98 FUN_14393aa98 body=93 status=ok
// SIG undefined FUN_14393aa98(void)

void FUN_14393aa98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393aaf6 FUN_14393aaf6 body=93 status=ok
// SIG undefined FUN_14393aaf6(void)

void FUN_14393aaf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393ab54 FUN_14393ab54 body=126 status=ok
// SIG undefined FUN_14393ab54(void)

void FUN_14393ab54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98f70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393abc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393abda FUN_14393abda body=19 status=ok
// SIG undefined FUN_14393abda(void)

undefined1 FUN_14393abda(undefined8 param_1,undefined8 param_2)

{
  FUN_14392fd7c(param_2);
  return 1;
}



// FUNCTION 14393abee FUN_14393abee body=29 status=ok
// SIG undefined FUN_14393abee(void)

undefined8 FUN_14393abee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393ac20 FUN_14393ac20 body=93 status=ok
// SIG undefined FUN_14393ac20(void)

void FUN_14393ac20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98fe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393ac7e FUN_14393ac7e body=93 status=ok
// SIG undefined FUN_14393ac7e(void)

void FUN_14393ac7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98fe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393acdc FUN_14393acdc body=126 status=ok
// SIG undefined FUN_14393acdc(void)

void FUN_14393acdc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98fe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393ad4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393ad62 FUN_14393ad62 body=19 status=ok
// SIG undefined FUN_14393ad62(void)

undefined1 FUN_14393ad62(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d3d7a(param_2);
  return 1;
}



// FUNCTION 14393ad76 FUN_14393ad76 body=29 status=ok
// SIG undefined FUN_14393ad76(void)

undefined8 FUN_14393ad76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393ada8 FUN_14393ada8 body=93 status=ok
// SIG undefined FUN_14393ada8(void)

void FUN_14393ada8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393ae06 FUN_14393ae06 body=93 status=ok
// SIG undefined FUN_14393ae06(void)

void FUN_14393ae06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393ae64 FUN_14393ae64 body=126 status=ok
// SIG undefined FUN_14393ae64(void)

void FUN_14393ae64(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99050;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393aed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393aeea FUN_14393aeea body=19 status=ok
// SIG undefined FUN_14393aeea(void)

undefined1 FUN_14393aeea(undefined8 param_1,undefined8 param_2)

{
  FUN_14392f5c8(param_2);
  return 1;
}



// FUNCTION 14393aefe FUN_14393aefe body=29 status=ok
// SIG undefined FUN_14393aefe(void)

undefined8 FUN_14393aefe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393af30 FUN_14393af30 body=93 status=ok
// SIG undefined FUN_14393af30(void)

void FUN_14393af30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad990c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393af8e FUN_14393af8e body=93 status=ok
// SIG undefined FUN_14393af8e(void)

void FUN_14393af8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad990c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393afec FUN_14393afec body=126 status=ok
// SIG undefined FUN_14393afec(void)

void FUN_14393afec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad990c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b05b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b072 FUN_14393b072 body=19 status=ok
// SIG undefined FUN_14393b072(void)

undefined1 FUN_14393b072(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d3c3a(param_2);
  return 1;
}



// FUNCTION 14393b086 FUN_14393b086 body=29 status=ok
// SIG undefined FUN_14393b086(void)

undefined8 FUN_14393b086(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b0b8 FUN_14393b0b8 body=93 status=ok
// SIG undefined FUN_14393b0b8(void)

void FUN_14393b0b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b116 FUN_14393b116 body=93 status=ok
// SIG undefined FUN_14393b116(void)

void FUN_14393b116(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b174 FUN_14393b174 body=126 status=ok
// SIG undefined FUN_14393b174(void)

void FUN_14393b174(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b1fa FUN_14393b1fa body=19 status=ok
// SIG undefined FUN_14393b1fa(void)

undefined1 FUN_14393b1fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d4254(param_2);
  return 1;
}



// FUNCTION 14393b20e FUN_14393b20e body=29 status=ok
// SIG undefined FUN_14393b20e(void)

undefined8 FUN_14393b20e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b240 FUN_14393b240 body=93 status=ok
// SIG undefined FUN_14393b240(void)

void FUN_14393b240(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad991a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b29e FUN_14393b29e body=93 status=ok
// SIG undefined FUN_14393b29e(void)

void FUN_14393b29e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad991a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b2fc FUN_14393b2fc body=126 status=ok
// SIG undefined FUN_14393b2fc(void)

void FUN_14393b2fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad991a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b382 FUN_14393b382 body=19 status=ok
// SIG undefined FUN_14393b382(void)

undefined1 FUN_14393b382(undefined8 param_1,undefined8 param_2)

{
  FUN_14392f700(param_2);
  return 1;
}



// FUNCTION 14393b396 FUN_14393b396 body=29 status=ok
// SIG undefined FUN_14393b396(void)

undefined8 FUN_14393b396(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b3c8 FUN_14393b3c8 body=93 status=ok
// SIG undefined FUN_14393b3c8(void)

void FUN_14393b3c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b426 FUN_14393b426 body=93 status=ok
// SIG undefined FUN_14393b426(void)

void FUN_14393b426(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b484 FUN_14393b484 body=126 status=ok
// SIG undefined FUN_14393b484(void)

void FUN_14393b484(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99210;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b50a FUN_14393b50a body=19 status=ok
// SIG undefined FUN_14393b50a(void)

undefined1 FUN_14393b50a(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d407a(param_2);
  return 1;
}



// FUNCTION 14393b51e FUN_14393b51e body=29 status=ok
// SIG undefined FUN_14393b51e(void)

undefined8 FUN_14393b51e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b550 FUN_14393b550 body=93 status=ok
// SIG undefined FUN_14393b550(void)

void FUN_14393b550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b5ae FUN_14393b5ae body=93 status=ok
// SIG undefined FUN_14393b5ae(void)

void FUN_14393b5ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b60c FUN_14393b60c body=126 status=ok
// SIG undefined FUN_14393b60c(void)

void FUN_14393b60c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99280;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b694 FUN_14393b694 body=20 status=ok
// SIG undefined FUN_14393b694(void)

undefined1 FUN_14393b694(longlong param_1)

{
  FUN_1480d5802(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14393b6a8 FUN_14393b6a8 body=29 status=ok
// SIG undefined FUN_14393b6a8(void)

undefined8 FUN_14393b6a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b6da FUN_14393b6da body=93 status=ok
// SIG undefined FUN_14393b6da(void)

void FUN_14393b6da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad992f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b738 FUN_14393b738 body=93 status=ok
// SIG undefined FUN_14393b738(void)

void FUN_14393b738(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad992f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b796 FUN_14393b796 body=126 status=ok
// SIG undefined FUN_14393b796(void)

void FUN_14393b796(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad992f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b81c FUN_14393b81c body=19 status=ok
// SIG undefined FUN_14393b81c(void)

undefined1 FUN_14393b81c(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d4d8c(param_2);
  return 1;
}



// FUNCTION 14393b830 FUN_14393b830 body=29 status=ok
// SIG undefined FUN_14393b830(void)

undefined8 FUN_14393b830(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b862 FUN_14393b862 body=93 status=ok
// SIG undefined FUN_14393b862(void)

void FUN_14393b862(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b8c0 FUN_14393b8c0 body=93 status=ok
// SIG undefined FUN_14393b8c0(void)

void FUN_14393b8c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393b91e FUN_14393b91e body=126 status=ok
// SIG undefined FUN_14393b91e(void)

void FUN_14393b91e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99360;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393b98d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393b9a6 FUN_14393b9a6 body=20 status=ok
// SIG undefined FUN_14393b9a6(void)

undefined1 FUN_14393b9a6(longlong param_1)

{
  FUN_1480d5af6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14393b9ba FUN_14393b9ba body=29 status=ok
// SIG undefined FUN_14393b9ba(void)

undefined8 FUN_14393b9ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393b9ec FUN_14393b9ec body=93 status=ok
// SIG undefined FUN_14393b9ec(void)

void FUN_14393b9ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad993d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393ba4a FUN_14393ba4a body=93 status=ok
// SIG undefined FUN_14393ba4a(void)

void FUN_14393ba4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad993d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393baa8 FUN_14393baa8 body=126 status=ok
// SIG undefined FUN_14393baa8(void)

void FUN_14393baa8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad993d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393bb17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393bb30 FUN_14393bb30 body=20 status=ok
// SIG undefined FUN_14393bb30(void)

undefined1 FUN_14393bb30(longlong param_1)

{
  FUN_1480d5e10(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14393bb44 FUN_14393bb44 body=29 status=ok
// SIG undefined FUN_14393bb44(void)

undefined8 FUN_14393bb44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14393bb76 FUN_14393bb76 body=93 status=ok
// SIG undefined FUN_14393bb76(void)

void FUN_14393bb76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393bbd4 FUN_14393bbd4 body=93 status=ok
// SIG undefined FUN_14393bbd4(void)

void FUN_14393bbd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14393bc32 FUN_14393bc32 body=126 status=ok
// SIG undefined FUN_14393bc32(void)

void FUN_14393bc32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99440;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393bca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14393bcba FUN_14393bcba body=20 status=ok
// SIG undefined FUN_14393bcba(void)

undefined1 FUN_14393bcba(longlong param_1)

{
  FUN_1480d5ebe(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14393bcce FUN_14393bcce body=3371 status=ok
// SIG undefined FUN_14393bcce(void)

void FUN_14393bcce(char *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  ushort uVar8;
  ushort *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  undefined1 *local_188;
  code *local_180;
  longlong local_170;
  longlong *local_168;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150;
  uint local_148;
  float local_144;
  float *local_140;
  uint local_138;
  float local_134;
  int *local_130;
  uint local_128;
  int local_124;
  char *local_120;
  int *local_118 [2];
  int local_108;
  int *local_100;
  int local_f0;
  int *local_e8;
  int local_d8;
  int local_c8;
  int iStack_c4;
  int local_c0;
  undefined1 local_b8 [8];
  uint *local_b0;
  code *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_140982196(local_b8,param_1);
  local_120 = param_1;
  FUN_1416b93de(local_118,param_1);
  local_c8 = 0;
  iStack_c4 = 0;
  local_c0 = 0;
  if (*param_1 == '\x01') {
    iVar24 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar24);
    local_128 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar24 + 1;
    local_130 = (int *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar24 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_130 = &local_124;
      local_128 = 0;
    }
    else {
      lVar25 = *(longlong *)(param_1 + 0x80);
      local_128 = 1;
      local_130 = (int *)((ulonglong)(uVar13 * *(int *)(lVar25 + 0x80)) +
                          *(longlong *)(lVar25 + 0x70) + (longlong)*(int *)(lVar25 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar24 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar24);
    local_158 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar24 + 1;
    local_160 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar24 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar25 = *(longlong *)(param_1 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar13 * *(int *)(lVar25 + 0x80)) +
                            *(longlong *)(lVar25 + 0x70) + (longlong)*(int *)(lVar25 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar24 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar24);
    local_148 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar24 + 1;
    local_150 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar24 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar25 = *(longlong *)(param_1 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar13 * *(int *)(lVar25 + 0x80)) +
                            *(longlong *)(lVar25 + 0x70) + (longlong)*(int *)(lVar25 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar24 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar24);
    local_138 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar24 + 1;
    local_140 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar24 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_140 = &local_134;
      local_138 = 0;
    }
    else {
      lVar25 = *(longlong *)(param_1 + 0x80);
      local_138 = 1;
      local_140 = (float *)((ulonglong)(uVar13 * *(int *)(lVar25 + 0x80)) +
                            *(longlong *)(lVar25 + 0x70) + (longlong)*(int *)(lVar25 + 0x4c) * 4);
    }
  }
  if (((((local_b0[1] != 0) && (uVar13 = *local_b0, -1 < (int)uVar13)) &&
       ((int)uVar13 < DAT_14c9647dc)) &&
      ((plVar19 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == local_b0[1])))) &&
     (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && ((*plVar19 != 0 && (DAT_14cad2858 == 0)))))) {
    local_190 = &local_a8;
    local_a8 = FUN_144a7958c;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_146395584;
    local_198 = &LAB_147a0ba80;
    local_1a0 = &LAB_14575ccce;
    local_1a8 = L"Engine";
    local_1b0 = 0x40000000000;
    local_1b8 = 0x10000004;
    local_1c0 = 0x10;
    local_1c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (local_b0[0x15] == 0) {
LAB_14393c6e6:
    lVar25 = 0;
  }
  else {
    uVar13 = local_b0[0x14];
    lVar25 = 0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((plVar19 == (longlong *)0x0) ||
         ((*(uint *)(plVar19 + 2) != local_b0[0x15] || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0))
         )) goto LAB_14393c6e6;
      lVar25 = *plVar19;
    }
  }
  lVar16 = *(longlong *)(local_b0 + 200);
  if ((((local_b0[1] == 0) || (uVar13 = *local_b0, (int)uVar13 < 0)) ||
      (DAT_14c9647dc <= (int)uVar13)) ||
     (((plVar19 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar19 == (longlong *)0x0 || (*(uint *)(plVar19 + 2) != local_b0[1])) ||
      (((*(uint *)(plVar19 + 1) & 0x10200000) != 0 || (lVar10 = *plVar19, lVar10 == 0))))))
  goto LAB_14393c0de;
  if (DAT_14cad2858 == 0) {
    local_190 = &local_a8;
    local_a8 = FUN_144a7958c;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_146395584;
    local_198 = &LAB_147a0ba80;
    local_1a0 = &LAB_14575ccce;
    local_1a8 = L"Engine";
    local_1b0 = 0x40000000000;
    local_1b8 = 0x10000004;
    local_1c0 = 0x10;
    local_1c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14393c0de;
  lVar21 = *(longlong *)(lVar10 + 0x658);
  if (lVar21 == 0) {
    lVar21 = *(longlong *)(lVar10 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar21 != 0)) goto LAB_14393c9ed;
    if (lVar21 == 0) goto LAB_14393c0de;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_14393c9ed:
    FUN_1456cec3c(lVar21);
  }
  if (DAT_14cb06da8 == 0) {
    local_190 = &local_a8;
    local_a8 = FUN_1449e2820;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_1464003b0;
    local_198 = &LAB_147d17bdf;
    local_1a0 = &LAB_1417edf22;
    local_1a8 = L"Engine";
    local_1b0 = 0;
    local_1b8 = 0x10000000;
    local_1c0 = 8;
    local_1c8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar10,local_b0[199],0);
  }
LAB_14393c0de:
  lVar10 = *(longlong *)(local_b0 + 0x18);
  if (lVar25 == 0) {
    plVar19 = (longlong *)0x0;
  }
  else {
    plVar19 = (longlong *)
              ((longlong)**(int **)(local_b0 + 0x28) * 0x78 + *(longlong *)(lVar25 + 0x4c0));
  }
  if (lVar10 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 8));
  }
  piVar1 = (int *)(param_1 + 0x3c);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = piVar1;
  }
  local_170 = lVar10;
  if (lVar16 == 0) {
    if (0 < *piVar17) {
      iVar24 = 0;
      do {
        *local_130 = -1;
        pfVar4 = local_160 + (int)local_158;
        local_130 = local_130 + (int)local_128;
        *local_160 = (float)DAT_14c846330;
        pfVar5 = local_150 + (int)local_148;
        *local_150 = DAT_14c846330._4_4_;
        pfVar6 = local_140 + (int)local_138;
        *local_140 = DAT_14c846338;
        iVar24 = iVar24 + 1;
        piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar17 = piVar1;
        }
        local_160 = pfVar4;
        local_150 = pfVar5;
        local_140 = pfVar6;
      } while (iVar24 < *piVar17);
    }
  }
  else if (0 < *piVar17) {
    local_168 = plVar19 + 7;
    lVar25 = 0;
    do {
      pcVar12 = local_120;
      piVar17 = local_118[0] + local_108;
      local_c8 = *local_118[0];
      piVar2 = local_100 + local_f0;
      iStack_c4 = *local_100;
      piVar3 = local_e8 + local_d8;
      local_c0 = *local_e8;
      local_118[0] = piVar17;
      local_100 = piVar2;
      local_e8 = piVar3;
      if ((int)plVar19[8] < 1) {
        iVar24 = -1;
      }
      else {
        if (local_c0 == -1) {
          if (*local_120 == '\0') {
            lVar16 = *(longlong *)(local_120 + 0x80) + 0x88;
          }
          else {
            lVar16 = *(longlong *)(local_120 + 0x58);
          }
          uVar13 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar16 + 4) = uVar13;
          fVar27 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_120 == '\0') {
            plVar15 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
          }
          else {
            plVar15 = *(longlong **)(local_120 + 0x60);
            if (*plVar15 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar12 + 0x60) = uVar14;
              plVar15 = *(longlong **)(pcVar12 + 0x60);
            }
          }
          uVar13 = *(uint *)(*plVar15 + lVar25 * 4);
          *(uint *)(*plVar15 + lVar25 * 4) = uVar13 + 1;
          iVar18 = (local_c0 << 0x10 | uVar13) * 0x19660d;
          iVar24 = iVar18 + 0x3c6ef35f;
          iVar23 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar24 + local_c8 * 0x19660d;
          iVar22 = iVar23 + 0x3c6ef35f;
          iVar24 = iStack_c4 * 0x19660d + iVar24 * iVar22 + 0x3c6ef35f;
          fVar27 = (float)((iVar18 + iVar22 * iVar24 + 0x3c6ef35f) * iVar24 + iVar23 + 0x3c6ef35fU
                          >> 8) * 5.9604645e-08;
        }
        pcVar12 = local_120;
        if (local_c0 == -1) {
          if (*local_120 == '\0') {
            lVar16 = *(longlong *)(local_120 + 0x80) + 0x88;
          }
          else {
            lVar16 = *(longlong *)(local_120 + 0x58);
          }
          uVar13 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar16 + 4) = uVar13;
          fVar26 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_120 == '\0') {
            plVar15 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
          }
          else {
            plVar15 = *(longlong **)(local_120 + 0x60);
            if (*plVar15 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar12 + 0x60) = uVar14;
              plVar15 = *(longlong **)(pcVar12 + 0x60);
            }
          }
          uVar13 = *(uint *)(*plVar15 + lVar25 * 4);
          *(uint *)(*plVar15 + lVar25 * 4) = uVar13 + 1;
          iVar22 = (local_c0 << 0x10 | uVar13) * 0x19660d;
          iVar24 = iVar22 + 0x3c6ef35f;
          iVar23 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar24 + local_c8 * 0x19660d;
          iVar18 = iVar23 + 0x3c6ef35f;
          iVar24 = iStack_c4 * 0x19660d + iVar24 * iVar18 + 0x3c6ef35f;
          fVar26 = (float)((iVar22 + iVar18 * iVar24 + 0x3c6ef35f) * iVar24 + iVar23 + 0x3c6ef35fU
                          >> 8) * 5.9604645e-08;
        }
        uVar11 = plVar19[7];
        uVar20 = ((longlong)uVar11 >> 0x18) + (longlong)local_168;
        if ((uVar11 & 1) == 0) {
          uVar20 = uVar11;
        }
        lVar16 = (longlong)(int)((float)(int)plVar19[8] * fVar26);
        if (*(float *)(uVar20 + lVar16 * 4) <= fVar27) {
          uVar11 = plVar19[9];
          uVar20 = ((longlong)uVar11 >> 0x18) + (longlong)(plVar19 + 9);
          if ((uVar11 & 1) == 0) {
            uVar20 = uVar11;
          }
          lVar16 = (longlong)*(int *)(uVar20 + lVar16 * 4);
        }
        iVar24 = *(int *)(*plVar19 + lVar16 * 4) / 3;
      }
      *local_130 = iVar24;
      if (*param_1 == '\0') {
        lVar16 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar16 = *(longlong *)(param_1 + 0x58);
      }
      fVar27 = (float)(*(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
      uVar13 = *(int *)(lVar16 + 4) * -0x4b9b4d07 + 0x9d6f2492;
      *(uint *)(lVar16 + 4) = uVar13;
      if (fVar27 < 0.0) {
        local_130 = local_130 + (int)local_128;
        fVar27 = sqrtf(fVar27);
      }
      else {
        fVar27 = SQRT(fVar27);
        local_130 = local_130 + (int)local_128;
      }
      fVar26 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
      pfVar4 = local_160 + (int)local_158;
      *local_160 = 1.0 - fVar27;
      pfVar5 = local_150 + (int)local_148;
      *local_150 = (1.0 - fVar26) * fVar27;
      pfVar6 = local_140 + (int)local_138;
      *local_140 = fVar27 * fVar26;
      lVar25 = lVar25 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = piVar1;
      }
      local_160 = pfVar4;
      local_150 = pfVar5;
      local_140 = pfVar6;
    } while (lVar25 < *piVar17);
  }
  if (local_170 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_170 + 8));
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14393c9fa FUN_14393c9fa body=2975 status=ok
// SIG undefined FUN_14393c9fa(void)

void FUN_14393c9fa(char *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  ushort uVar9;
  ushort *puVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  longlong local_158;
  float *local_150;
  uint local_148;
  float local_144;
  float *local_140;
  uint local_138;
  float local_134;
  float *local_130;
  uint local_128;
  float local_124;
  int *local_120;
  uint local_118;
  int local_114;
  char *local_110;
  int *local_108 [2];
  int local_f8;
  int *local_f0;
  int local_e0;
  int *local_d8;
  int local_c8;
  int local_b8;
  int iStack_b4;
  int local_b0;
  undefined1 local_a8 [8];
  uint *local_a0;
  code *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_140982196(local_a8,param_1);
  local_110 = param_1;
  FUN_1416b93de(local_108,param_1);
  local_b8 = 0;
  iStack_b4 = 0;
  local_b0 = 0;
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_118 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_120 = (int *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar10 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar9 = *puVar10;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar10 + 1;
    uVar12 = uVar9 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_120 = &local_114;
      local_118 = 0;
    }
    else {
      lVar23 = *(longlong *)(param_1 + 0x80);
      local_118 = 1;
      local_120 = (int *)((ulonglong)(uVar12 * *(int *)(lVar23 + 0x80)) +
                          *(longlong *)(lVar23 + 0x70) + (longlong)*(int *)(lVar23 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_148 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_150 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar10 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar9 = *puVar10;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar10 + 1;
    uVar12 = uVar9 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar23 = *(longlong *)(param_1 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar12 * *(int *)(lVar23 + 0x80)) +
                            *(longlong *)(lVar23 + 0x70) + (longlong)*(int *)(lVar23 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_138 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_140 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar10 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar9 = *puVar10;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar10 + 1;
    uVar12 = uVar9 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_140 = &local_134;
      local_138 = 0;
    }
    else {
      lVar23 = *(longlong *)(param_1 + 0x80);
      local_138 = 1;
      local_140 = (float *)((ulonglong)(uVar12 * *(int *)(lVar23 + 0x80)) +
                            *(longlong *)(lVar23 + 0x70) + (longlong)*(int *)(lVar23 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar8 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    local_128 = (uint)bVar8;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    local_130 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar8 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8));
  }
  else {
    puVar10 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar9 = *puVar10;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar10 + 1;
    uVar12 = uVar9 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_130 = &local_124;
      local_128 = 0;
    }
    else {
      lVar23 = *(longlong *)(param_1 + 0x80);
      local_128 = 1;
      local_130 = (float *)((ulonglong)(uVar12 * *(int *)(lVar23 + 0x80)) +
                            *(longlong *)(lVar23 + 0x70) + (longlong)*(int *)(lVar23 + 0x4c) * 4);
    }
  }
  if (((((local_a0[1] != 0) && (uVar12 = *local_a0, -1 < (int)uVar12)) &&
       ((int)uVar12 < DAT_14c9647dc)) &&
      ((plVar20 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == local_a0[1])))) &&
     (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && ((*plVar20 != 0 && (DAT_14cad2858 == 0)))))) {
    local_170 = &local_98;
    local_98 = FUN_144a7958c;
    local_160 = FUN_14081d0ea;
    local_168 = &LAB_146395584;
    local_178 = &LAB_147a0ba80;
    local_180 = &LAB_14575ccce;
    local_188 = L"Engine";
    local_190 = 0x40000000000;
    local_198 = 0x10000004;
    local_1a0 = 0x10;
    local_1a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (local_a0[0x15] == 0) {
LAB_14393d289:
    lVar23 = 0;
  }
  else {
    uVar12 = local_a0[0x14];
    lVar23 = 0;
    if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
      plVar20 = (longlong *)
                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
      if ((plVar20 == (longlong *)0x0) ||
         ((*(uint *)(plVar20 + 2) != local_a0[0x15] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))
         )) goto LAB_14393d289;
      lVar23 = *plVar20;
    }
  }
  lVar17 = *(longlong *)(local_a0 + 200);
  if ((((local_a0[1] == 0) || (uVar12 = *local_a0, (int)uVar12 < 0)) ||
      (DAT_14c9647dc <= (int)uVar12)) ||
     (((plVar20 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar20 == (longlong *)0x0 || (*(uint *)(plVar20 + 2) != local_a0[1])) ||
      (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 || (lVar16 = *plVar20, lVar16 == 0))))))
  goto LAB_14393cdfb;
  if (DAT_14cad2858 == 0) {
    local_170 = &local_98;
    local_98 = FUN_144a7958c;
    local_160 = FUN_14081d0ea;
    local_168 = &LAB_146395584;
    local_178 = &LAB_147a0ba80;
    local_180 = &LAB_14575ccce;
    local_188 = L"Engine";
    local_190 = 0x40000000000;
    local_198 = 0x10000004;
    local_1a0 = 0x10;
    local_1a8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14393cdfb;
  lVar21 = *(longlong *)(lVar16 + 0x658);
  if (lVar21 == 0) {
    lVar21 = *(longlong *)(lVar16 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar21 != 0)) goto LAB_14393d58d;
    if (lVar21 == 0) goto LAB_14393cdfb;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_14393d58d:
    FUN_1456cec3c(lVar21);
  }
  if (DAT_14cb06da8 == 0) {
    local_170 = &local_98;
    local_98 = FUN_1449e2820;
    local_160 = FUN_14081d0ea;
    local_168 = &LAB_1464003b0;
    local_178 = &LAB_147d17bdf;
    local_180 = &LAB_1417edf22;
    local_188 = L"Engine";
    local_190 = 0;
    local_198 = 0x10000000;
    local_1a0 = 8;
    local_1a8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar16,local_a0[199],0);
  }
LAB_14393cdfb:
  lVar16 = *(longlong *)(local_a0 + 0x18);
  if (lVar23 == 0) {
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar20 = (longlong *)
              ((longlong)**(int **)(local_a0 + 0x28) * 0x78 + *(longlong *)(lVar23 + 0x4c0));
  }
  if (lVar16 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar16 + 8));
  }
  piVar1 = (int *)(param_1 + 0x3c);
  piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar18 = piVar1;
  }
  local_158 = lVar16;
  if (lVar17 == 0) {
    if (0 < *piVar18) {
      iVar19 = 0;
      do {
        *local_120 = -1;
        pfVar5 = local_150 + (int)local_148;
        local_120 = local_120 + (int)local_118;
        *local_150 = (float)DAT_14c846330;
        pfVar6 = local_140 + (int)local_138;
        *local_140 = DAT_14c846330._4_4_;
        pfVar7 = local_130 + (int)local_128;
        *local_130 = DAT_14c846338;
        iVar19 = iVar19 + 1;
        piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar18 = piVar1;
        }
        local_150 = pfVar5;
        local_140 = pfVar6;
        local_130 = pfVar7;
      } while (iVar19 < *piVar18);
    }
  }
  else if (0 < *piVar18) {
    lVar23 = 0;
    do {
      pcVar11 = local_110;
      piVar18 = local_108[0] + local_f8;
      local_b8 = *local_108[0];
      piVar3 = local_f0 + local_e0;
      iStack_b4 = *local_f0;
      piVar4 = local_d8 + local_c8;
      local_b0 = *local_d8;
      lVar17 = plVar20[1];
      local_108[0] = piVar18;
      local_f0 = piVar3;
      local_d8 = piVar4;
      if ((int)lVar17 < 1) {
        iVar19 = -1;
      }
      else {
        if (local_b0 == -1) {
          if (*local_110 == '\0') {
            lVar16 = *(longlong *)(local_110 + 0x80) + 0x88;
          }
          else {
            lVar16 = *(longlong *)(local_110 + 0x58);
          }
          uVar12 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar16 + 4) = uVar12;
          fVar24 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_110 == '\0') {
            plVar15 = (longlong *)(*(longlong *)(local_110 + 0x80) + 0x90);
          }
          else {
            plVar15 = *(longlong **)(local_110 + 0x60);
            if (*plVar15 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_110 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar11 + 0x60) = uVar14;
              plVar15 = *(longlong **)(pcVar11 + 0x60);
            }
          }
          uVar12 = *(uint *)(*plVar15 + lVar23 * 4);
          *(uint *)(*plVar15 + lVar23 * 4) = uVar12 + 1;
          iVar13 = (local_b0 << 0x10 | uVar12) * 0x19660d;
          iVar19 = iVar13 + 0x3c6ef35f;
          iVar22 = (iStack_b4 * 0x19660d + 0x3c6ef35f) * iVar19 + local_b8 * 0x19660d;
          iVar2 = iVar22 + 0x3c6ef35f;
          iVar19 = iStack_b4 * 0x19660d + iVar19 * iVar2 + 0x3c6ef35f;
          fVar24 = (float)((iVar13 + iVar2 * iVar19 + 0x3c6ef35f) * iVar19 + iVar22 + 0x3c6ef35fU >>
                          8) * 5.9604645e-08;
        }
        iVar19 = *(int *)(*plVar20 + (longlong)(int)((float)(int)lVar17 * fVar24) * 4) / 3;
      }
      *local_120 = iVar19;
      if (*param_1 == '\0') {
        lVar17 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar17 = *(longlong *)(param_1 + 0x58);
      }
      fVar24 = (float)(*(int *)(lVar17 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
      uVar12 = *(int *)(lVar17 + 4) * -0x4b9b4d07 + 0x9d6f2492;
      *(uint *)(lVar17 + 4) = uVar12;
      if (fVar24 < 0.0) {
        local_120 = local_120 + (int)local_118;
        fVar24 = sqrtf(fVar24);
      }
      else {
        fVar24 = SQRT(fVar24);
        local_120 = local_120 + (int)local_118;
      }
      fVar25 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
      pfVar5 = local_150 + (int)local_148;
      *local_150 = 1.0 - fVar24;
      pfVar6 = local_140 + (int)local_138;
      *local_140 = (1.0 - fVar25) * fVar24;
      pfVar7 = local_130 + (int)local_128;
      *local_130 = fVar24 * fVar25;
      lVar23 = lVar23 + 1;
      piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar18 = piVar1;
      }
      local_150 = pfVar5;
      local_140 = pfVar6;
      local_130 = pfVar7;
    } while (lVar23 < *piVar18);
  }
  if (local_158 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_158 + 8));
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14393d59a FUN_14393d59a body=4047 status=ok
// SIG undefined FUN_14393d59a(void)

void FUN_14393d59a(char *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  ushort uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  undefined1 *local_188;
  code *local_180;
  longlong local_170;
  longlong local_168;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150;
  uint local_148;
  float local_144;
  float *local_140;
  uint local_138;
  float local_134;
  int *local_130;
  uint local_128;
  int local_124;
  char *local_120;
  int *local_118 [2];
  int local_108;
  int *local_100;
  int local_f0;
  int *local_e8;
  int local_d8;
  int local_c8;
  int iStack_c4;
  int local_c0;
  undefined1 local_b8 [8];
  uint *local_b0;
  code *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_140982196(local_b8,param_1);
  local_120 = param_1;
  FUN_1416b93de(local_118,param_1);
  puVar12 = local_b0;
  local_c8 = 0;
  iStack_c4 = 0;
  local_c0 = 0;
  if (*param_1 == '\x01') {
    iVar25 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar25);
    local_128 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar25 + 1;
    local_130 = (int *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar25 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_130 = &local_124;
      local_128 = 0;
    }
    else {
      lVar26 = *(longlong *)(param_1 + 0x80);
      local_128 = 1;
      local_130 = (int *)((ulonglong)(uVar13 * *(int *)(lVar26 + 0x80)) +
                          *(longlong *)(lVar26 + 0x70) + (longlong)*(int *)(lVar26 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar25 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar25);
    local_158 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar25 + 1;
    local_160 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar25 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar26 = *(longlong *)(param_1 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar13 * *(int *)(lVar26 + 0x80)) +
                            *(longlong *)(lVar26 + 0x70) + (longlong)*(int *)(lVar26 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar25 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar25);
    local_148 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar25 + 1;
    local_150 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar25 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar26 = *(longlong *)(param_1 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar13 * *(int *)(lVar26 + 0x80)) +
                            *(longlong *)(lVar26 + 0x70) + (longlong)*(int *)(lVar26 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar25 = *(int *)(param_1 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar25);
    local_138 = (uint)bVar7;
    *(int *)(param_1 + 0x30) = iVar25 + 1;
    local_140 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar7 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar25 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar8 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar13 = uVar8 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_140 = &local_134;
      local_138 = 0;
    }
    else {
      lVar26 = *(longlong *)(param_1 + 0x80);
      local_138 = 1;
      local_140 = (float *)((ulonglong)(uVar13 * *(int *)(lVar26 + 0x80)) +
                            *(longlong *)(lVar26 + 0x70) + (longlong)*(int *)(lVar26 + 0x4c) * 4);
    }
  }
  if (((((local_b0[1] != 0) && (uVar13 = *local_b0, -1 < (int)uVar13)) &&
       ((int)uVar13 < DAT_14c9647dc)) &&
      ((plVar19 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == local_b0[1])))) &&
     (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && ((*plVar19 != 0 && (DAT_14cad2858 == 0)))))) {
    local_190 = &local_a8;
    local_a8 = FUN_144a7958c;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_146395584;
    local_198 = &LAB_147a0ba80;
    local_1a0 = &LAB_14575ccce;
    local_1a8 = L"Engine";
    local_1b0 = 0x40000000000;
    local_1b8 = 0x10000004;
    local_1c0 = 0x10;
    local_1c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (puVar12[0x15] == 0) {
LAB_14393e250:
    local_170 = 0;
  }
  else {
    uVar13 = puVar12[0x14];
    local_170 = 0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((plVar19 == (longlong *)0x0) ||
         ((*(uint *)(plVar19 + 2) != puVar12[0x15] || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))
         ) goto LAB_14393e250;
      local_170 = *plVar19;
    }
  }
  lVar26 = *(longlong *)(puVar12 + 200);
  if ((((puVar12[1] == 0) || (uVar13 = *puVar12, (int)uVar13 < 0)) || (DAT_14c9647dc <= (int)uVar13)
      ) || (((plVar19 = (longlong *)
                        ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
             plVar19 == (longlong *)0x0 || (*(uint *)(plVar19 + 2) != puVar12[1])) ||
            (((*(uint *)(plVar19 + 1) & 0x10200000) != 0 || (lVar15 = *plVar19, lVar15 == 0))))))
  goto LAB_14393d9be;
  if (DAT_14cad2858 == 0) {
    local_190 = &local_a8;
    local_a8 = FUN_144a7958c;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_146395584;
    local_198 = &LAB_147a0ba80;
    local_1a0 = &LAB_14575ccce;
    local_1a8 = L"Engine";
    local_1b0 = 0x40000000000;
    local_1b8 = 0x10000004;
    local_1c0 = 0x10;
    local_1c8 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14393d9be;
  lVar21 = *(longlong *)(lVar15 + 0x658);
  if (lVar21 == 0) {
    lVar21 = *(longlong *)(lVar15 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar21 != 0)) goto LAB_14393e55d;
    if (lVar21 == 0) goto LAB_14393d9be;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_14393e55d:
    FUN_1456cec3c(lVar21);
  }
  if (DAT_14cb06da8 == 0) {
    local_190 = &local_a8;
    local_a8 = FUN_1449e2820;
    local_180 = FUN_14081d0ea;
    local_188 = &LAB_1464003b0;
    local_198 = &LAB_147d17bdf;
    local_1a0 = &LAB_1417edf22;
    local_1a8 = L"Engine";
    local_1b0 = 0;
    local_1b8 = 0x10000000;
    local_1c0 = 8;
    local_1c8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    FUN_1417c143e(lVar15,puVar12[199],0);
  }
LAB_14393d9be:
  lVar15 = *(longlong *)(puVar12 + 0x18);
  if (lVar15 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar15 + 8));
  }
  piVar1 = (int *)(param_1 + 0x3c);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = piVar1;
  }
  local_168 = lVar15;
  if (lVar26 == 0) {
    if (0 < *piVar17) {
      iVar25 = 0;
      do {
        *local_130 = -1;
        pfVar4 = local_160 + (int)local_158;
        local_130 = local_130 + (int)local_128;
        *local_160 = (float)DAT_14c846330;
        pfVar5 = local_150 + (int)local_148;
        *local_150 = DAT_14c846330._4_4_;
        pfVar6 = local_140 + (int)local_138;
        *local_140 = DAT_14c846338;
        iVar25 = iVar25 + 1;
        piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar17 = piVar1;
        }
        local_160 = pfVar4;
        local_150 = pfVar5;
        local_140 = pfVar6;
      } while (iVar25 < *piVar17);
    }
  }
  else if (0 < *piVar17) {
    lVar26 = 0;
    do {
      puVar12 = local_b0;
      pcVar11 = local_120;
      piVar17 = local_118[0] + local_108;
      local_c8 = *local_118[0];
      piVar2 = local_100 + local_f0;
      iStack_c4 = *local_100;
      piVar3 = local_e8 + local_d8;
      local_c0 = *local_e8;
      iVar25 = -1;
      local_118[0] = piVar17;
      local_100 = piVar2;
      local_e8 = piVar3;
      if (0 < (int)local_b0[0x30]) {
        if (local_c0 == -1) {
          if (*local_120 == '\0') {
            lVar15 = *(longlong *)(local_120 + 0x80) + 0x88;
          }
          else {
            lVar15 = *(longlong *)(local_120 + 0x58);
          }
          uVar13 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar15 + 4) = uVar13;
          fVar28 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_120 == '\0') {
            plVar19 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
          }
          else {
            plVar19 = *(longlong **)(local_120 + 0x60);
            if (*plVar19 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar11 + 0x60) = uVar14;
              plVar19 = *(longlong **)(pcVar11 + 0x60);
            }
          }
          uVar13 = *(uint *)(*plVar19 + lVar26 * 4);
          *(uint *)(*plVar19 + lVar26 * 4) = uVar13 + 1;
          iVar18 = (local_c0 << 0x10 | uVar13) * 0x19660d;
          iVar24 = iVar18 + 0x3c6ef35f;
          iVar23 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar24 + local_c8 * 0x19660d;
          iVar22 = iVar23 + 0x3c6ef35f;
          iVar24 = iStack_c4 * 0x19660d + iVar24 * iVar22 + 0x3c6ef35f;
          fVar28 = (float)((iVar18 + iVar22 * iVar24 + 0x3c6ef35f) * iVar24 + iVar23 + 0x3c6ef35fU
                          >> 8) * 5.9604645e-08;
        }
        pcVar11 = local_120;
        if (local_c0 == -1) {
          if (*local_120 == '\0') {
            lVar15 = *(longlong *)(local_120 + 0x80) + 0x88;
          }
          else {
            lVar15 = *(longlong *)(local_120 + 0x58);
          }
          uVar13 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar15 + 4) = uVar13;
          fVar27 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_120 == '\0') {
            plVar19 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
          }
          else {
            plVar19 = *(longlong **)(local_120 + 0x60);
            if (*plVar19 == 0) {
              uVar14 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar11 + 0x60) = uVar14;
              plVar19 = *(longlong **)(pcVar11 + 0x60);
            }
          }
          uVar13 = *(uint *)(*plVar19 + lVar26 * 4);
          *(uint *)(*plVar19 + lVar26 * 4) = uVar13 + 1;
          iVar24 = (local_c0 << 0x10 | uVar13) * 0x19660d;
          iVar18 = iVar24 + 0x3c6ef35f;
          iVar23 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar18 + local_c8 * 0x19660d;
          iVar22 = iVar23 + 0x3c6ef35f;
          iVar18 = iStack_c4 * 0x19660d + iVar18 * iVar22 + 0x3c6ef35f;
          fVar27 = (float)((iVar24 + iVar22 * iVar18 + 0x3c6ef35f) * iVar18 + iVar23 + 0x3c6ef35fU
                          >> 8) * 5.9604645e-08;
        }
        pcVar11 = local_120;
        uVar10 = *(ulonglong *)(puVar12 + 0x2e);
        uVar20 = (longlong)puVar12 + ((longlong)uVar10 >> 0x18) + 0xb8;
        if ((uVar10 & 1) == 0) {
          uVar20 = uVar10;
        }
        lVar15 = (longlong)(int)((float)(int)puVar12[0x30] * fVar27);
        if (*(float *)(uVar20 + lVar15 * 4) <= fVar28) {
          uVar10 = *(ulonglong *)(puVar12 + 0x32);
          uVar20 = (longlong)puVar12 + ((longlong)uVar10 >> 0x18) + 200;
          if ((uVar10 & 1) == 0) {
            uVar20 = uVar10;
          }
          lVar15 = (longlong)*(int *)(uVar20 + lVar15 * 4);
        }
        lVar21 = *(longlong *)(local_170 + 0x4c0);
        lVar15 = (longlong)*(int *)(*(longlong *)(puVar12 + 0x28) + lVar15 * 4) * 0x78;
        if (0 < *(int *)(lVar21 + 0x40 + lVar15)) {
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar16 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar16 = *(longlong *)(local_120 + 0x58);
            }
            uVar13 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar16 + 4) = uVar13;
            fVar28 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_120 == '\0') {
              plVar19 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar19 = *(longlong **)(local_120 + 0x60);
              if (*plVar19 == 0) {
                uVar14 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar11 + 0x60) = uVar14;
                plVar19 = *(longlong **)(pcVar11 + 0x60);
              }
            }
            uVar13 = *(uint *)(*plVar19 + lVar26 * 4);
            *(uint *)(*plVar19 + lVar26 * 4) = uVar13 + 1;
            iVar24 = (local_c0 << 0x10 | uVar13) * 0x19660d;
            iVar25 = iVar24 + 0x3c6ef35f;
            iVar22 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_c8 * 0x19660d;
            iVar18 = iVar22 + 0x3c6ef35f;
            iVar25 = iStack_c4 * 0x19660d + iVar25 * iVar18 + 0x3c6ef35f;
            fVar28 = (float)((iVar24 + iVar18 * iVar25 + 0x3c6ef35f) * iVar25 + iVar22 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar11 = local_120;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar16 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar16 = *(longlong *)(local_120 + 0x58);
            }
            uVar13 = *(int *)(lVar16 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar16 + 4) = uVar13;
            fVar27 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_120 == '\0') {
              plVar19 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar19 = *(longlong **)(local_120 + 0x60);
              if (*plVar19 == 0) {
                uVar14 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar11 + 0x60) = uVar14;
                plVar19 = *(longlong **)(pcVar11 + 0x60);
              }
            }
            uVar13 = *(uint *)(*plVar19 + lVar26 * 4);
            *(uint *)(*plVar19 + lVar26 * 4) = uVar13 + 1;
            iVar18 = (local_c0 << 0x10 | uVar13) * 0x19660d;
            iVar25 = iVar18 + 0x3c6ef35f;
            iVar22 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_c8 * 0x19660d;
            iVar24 = iVar22 + 0x3c6ef35f;
            iVar25 = iStack_c4 * 0x19660d + iVar25 * iVar24 + 0x3c6ef35f;
            fVar27 = (float)((iVar18 + iVar24 * iVar25 + 0x3c6ef35f) * iVar25 + iVar22 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          plVar19 = (longlong *)(lVar21 + lVar15);
          uVar10 = plVar19[7];
          uVar20 = (longlong)plVar19 + ((longlong)uVar10 >> 0x18) + 0x38;
          if ((uVar10 & 1) == 0) {
            uVar20 = uVar10;
          }
          lVar15 = (longlong)(int)((float)(int)plVar19[8] * fVar27);
          if (*(float *)(uVar20 + lVar15 * 4) <= fVar28) {
            uVar10 = plVar19[9];
            uVar20 = (longlong)plVar19 + ((longlong)uVar10 >> 0x18) + 0x48;
            if ((uVar10 & 1) == 0) {
              uVar20 = uVar10;
            }
            lVar15 = (longlong)*(int *)(uVar20 + lVar15 * 4);
          }
          iVar25 = *(int *)(*plVar19 + lVar15 * 4) / 3;
        }
      }
      *local_130 = iVar25;
      if (*param_1 == '\0') {
        lVar15 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x58);
      }
      fVar28 = (float)(*(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
      uVar13 = *(int *)(lVar15 + 4) * -0x4b9b4d07 + 0x9d6f2492;
      *(uint *)(lVar15 + 4) = uVar13;
      if (fVar28 < 0.0) {
        local_130 = local_130 + (int)local_128;
        fVar28 = sqrtf(fVar28);
      }
      else {
        fVar28 = SQRT(fVar28);
        local_130 = local_130 + (int)local_128;
      }
      fVar27 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
      pfVar4 = local_160 + (int)local_158;
      *local_160 = 1.0 - fVar28;
      pfVar5 = local_150 + (int)local_148;
      *local_150 = (1.0 - fVar27) * fVar28;
      pfVar6 = local_140 + (int)local_138;
      *local_140 = fVar28 * fVar27;
      lVar26 = lVar26 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = piVar1;
      }
      local_160 = pfVar4;
      local_150 = pfVar5;
      local_140 = pfVar6;
    } while (lVar26 < *piVar17);
  }
  if (local_168 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


