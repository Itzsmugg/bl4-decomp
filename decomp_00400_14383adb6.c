// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14383adb6 FUN_14383adb6 body=152 status=ok
// SIG undefined FUN_14383adb6(void)

void FUN_14383adb6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14032271a();
  local_28 = 0;
  uStack_20 = 0;
  FUN_14490f2e4(param_1,&local_28,1,0);
  if (0 < (int)uStack_20) {
    lVar1 = 0;
    do {
      FUN_14032271a(*(undefined8 *)(local_28 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)uStack_20);
  }
  if (*(char *)(param_1 + 100) < '\0') {
    FUN_1403229bc(param_1,1);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383ae50 FUN_14383ae50 body=29 status=ok
// SIG undefined FUN_14383ae50(void)

undefined8 FUN_14383ae50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383ae82 FUN_14383ae82 body=85 status=ok
// SIG undefined FUN_14383ae82(void)

void FUN_14383ae82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4b40;
  return;
}



// FUNCTION 14383aed8 FUN_14383aed8 body=85 status=ok
// SIG undefined FUN_14383aed8(void)

void FUN_14383aed8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4b40;
  return;
}



// FUNCTION 14383af2e FUN_14383af2e body=118 status=ok
// SIG undefined FUN_14383af2e(void)

void FUN_14383af2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cdb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4b40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383af95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383afca FUN_14383afca body=48 status=ok
// SIG undefined FUN_14383afca(void)

undefined1 FUN_14383afca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((DAT_14cb1d8f0 & 1) == 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1c8) == param_2)) {
    FUN_1403229bc(lVar1,1);
  }
  return 1;
}



// FUNCTION 14383affa FUN_14383affa body=29 status=ok
// SIG undefined FUN_14383affa(void)

undefined8 FUN_14383affa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b02c FUN_14383b02c body=85 status=ok
// SIG undefined FUN_14383b02c(void)

void FUN_14383b02c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4bb0;
  return;
}



// FUNCTION 14383b082 FUN_14383b082 body=85 status=ok
// SIG undefined FUN_14383b082(void)

void FUN_14383b082(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4bb0;
  return;
}



// FUNCTION 14383b0d8 FUN_14383b0d8 body=118 status=ok
// SIG undefined FUN_14383b0d8(void)

void FUN_14383b0d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4bb0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383b13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383b156 FUN_14383b156 body=19 status=ok
// SIG undefined FUN_14383b156(void)

undefined1 FUN_14383b156(undefined8 param_1,undefined8 param_2)

{
  FUN_1403226b8(param_2);
  return 1;
}



// FUNCTION 14383b16a FUN_14383b16a body=29 status=ok
// SIG undefined FUN_14383b16a(void)

undefined8 FUN_14383b16a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b19c FUN_14383b19c body=85 status=ok
// SIG undefined FUN_14383b19c(void)

void FUN_14383b19c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4c20;
  return;
}



// FUNCTION 14383b1f2 FUN_14383b1f2 body=85 status=ok
// SIG undefined FUN_14383b1f2(void)

void FUN_14383b1f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4c20;
  return;
}



// FUNCTION 14383b248 FUN_14383b248 body=118 status=ok
// SIG undefined FUN_14383b248(void)

void FUN_14383b248(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4c20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383b2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383b2d6 FUN_14383b2d6 body=33 status=ok
// SIG undefined FUN_14383b2d6(void)

undefined1 FUN_14383b2d6(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14cb1d8f0 == '\0')) {
    FUN_143838498(param_2);
  }
  return 1;
}



// FUNCTION 14383b2f8 FUN_14383b2f8 body=29 status=ok
// SIG undefined FUN_14383b2f8(void)

undefined8 FUN_14383b2f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b32a FUN_14383b32a body=85 status=ok
// SIG undefined FUN_14383b32a(void)

void FUN_14383b32a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4c90;
  return;
}



// FUNCTION 14383b380 FUN_14383b380 body=85 status=ok
// SIG undefined FUN_14383b380(void)

void FUN_14383b380(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4c90;
  return;
}



// FUNCTION 14383b3d6 FUN_14383b3d6 body=118 status=ok
// SIG undefined FUN_14383b3d6(void)

void FUN_14383b3d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4c90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383b43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383b454 FUN_14383b454 body=19 status=ok
// SIG undefined FUN_14383b454(void)

undefined1 FUN_14383b454(undefined8 param_1,undefined8 param_2)

{
  FUN_1438381d4(param_2);
  return 1;
}



// FUNCTION 14383b468 FUN_14383b468 body=29 status=ok
// SIG undefined FUN_14383b468(void)

undefined8 FUN_14383b468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b49a FUN_14383b49a body=85 status=ok
// SIG undefined FUN_14383b49a(void)

void FUN_14383b49a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4d00;
  return;
}



// FUNCTION 14383b4f0 FUN_14383b4f0 body=85 status=ok
// SIG undefined FUN_14383b4f0(void)

void FUN_14383b4f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4d00;
  return;
}



// FUNCTION 14383b546 FUN_14383b546 body=118 status=ok
// SIG undefined FUN_14383b546(void)

void FUN_14383b546(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4d00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383b5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383b5e6 FUN_14383b5e6 body=51 status=ok
// SIG undefined FUN_14383b5e6(void)

undefined8 FUN_14383b5e6(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) &&
     (((DAT_14c762388 != '\x01' || (*(longlong *)(param_2 + 0xa8) == 0)) ||
      (*(char *)(*(longlong *)(param_2 + 0xa8) + 100) < '\0')))) {
    FUN_143838498(param_2);
  }
  return 1;
}



// FUNCTION 14383b61a FUN_14383b61a body=29 status=ok
// SIG undefined FUN_14383b61a(void)

undefined8 FUN_14383b61a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b64c FUN_14383b64c body=85 status=ok
// SIG undefined FUN_14383b64c(void)

void FUN_14383b64c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4d70;
  return;
}



// FUNCTION 14383b6a2 FUN_14383b6a2 body=85 status=ok
// SIG undefined FUN_14383b6a2(void)

void FUN_14383b6a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4d70;
  return;
}



// FUNCTION 14383b6f8 FUN_14383b6f8 body=118 status=ok
// SIG undefined FUN_14383b6f8(void)

void FUN_14383b6f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4d70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383b75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383b776 FUN_14383b776 body=19 status=ok
// SIG undefined FUN_14383b776(void)

undefined1 FUN_14383b776(undefined8 param_1,undefined8 param_2)

{
  FUN_1438381d4(param_2);
  return 1;
}



// FUNCTION 14383b78a FUN_14383b78a body=29 status=ok
// SIG undefined FUN_14383b78a(void)

undefined8 FUN_14383b78a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b7bc FUN_14383b7bc body=85 status=ok
// SIG undefined FUN_14383b7bc(void)

void FUN_14383b7bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4de0;
  return;
}



// FUNCTION 14383b812 FUN_14383b812 body=85 status=ok
// SIG undefined FUN_14383b812(void)

void FUN_14383b812(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4de0;
  return;
}



// FUNCTION 14383b868 FUN_14383b868 body=118 status=ok
// SIG undefined FUN_14383b868(void)

void FUN_14383b868(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4de0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383b8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383b908 FUN_14383b908 body=51 status=ok
// SIG undefined FUN_14383b908(void)

undefined8 FUN_14383b908(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) &&
     (((DAT_14c762388 != '\x01' || (*(longlong *)(param_2 + 0xa8) == 0)) ||
      (*(char *)(*(longlong *)(param_2 + 0xa8) + 100) < '\0')))) {
    FUN_143838498(param_2);
  }
  return 1;
}



// FUNCTION 14383b93c FUN_14383b93c body=29 status=ok
// SIG undefined FUN_14383b93c(void)

undefined8 FUN_14383b93c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383b96e FUN_14383b96e body=85 status=ok
// SIG undefined FUN_14383b96e(void)

void FUN_14383b96e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4e50;
  return;
}



// FUNCTION 14383b9c4 FUN_14383b9c4 body=85 status=ok
// SIG undefined FUN_14383b9c4(void)

void FUN_14383b9c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4e50;
  return;
}



// FUNCTION 14383ba1a FUN_14383ba1a body=118 status=ok
// SIG undefined FUN_14383ba1a(void)

void FUN_14383ba1a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4e50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383ba81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383ba98 FUN_14383ba98 body=19 status=ok
// SIG undefined FUN_14383ba98(void)

undefined1 FUN_14383ba98(undefined8 param_1,undefined8 param_2)

{
  FUN_147e7b78e(param_2);
  return 1;
}



// FUNCTION 14383baac FUN_14383baac body=29 status=ok
// SIG undefined FUN_14383baac(void)

undefined8 FUN_14383baac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383bade FUN_14383bade body=85 status=ok
// SIG undefined FUN_14383bade(void)

void FUN_14383bade(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ce20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4ec0;
  return;
}



// FUNCTION 14383bb34 FUN_14383bb34 body=85 status=ok
// SIG undefined FUN_14383bb34(void)

void FUN_14383bb34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ce20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4ec0;
  return;
}



// FUNCTION 14383bb8a FUN_14383bb8a body=118 status=ok
// SIG undefined FUN_14383bb8a(void)

void FUN_14383bb8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ce20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4ec0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383bbf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383bc08 FUN_14383bc08 body=19 status=ok
// SIG undefined FUN_14383bc08(void)

undefined1 FUN_14383bc08(undefined8 param_1,undefined8 param_2)

{
  FUN_14383bc1c(param_2);
  return 1;
}



// FUNCTION 14383bc1c FUN_14383bc1c body=553 status=ok
// SIG undefined FUN_14383bc1c(void)

bool FUN_14383bc1c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 0x168), lVar3 == 0)) {
LAB_14383bc7f:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_1409035a4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14383bc7f;
  }
  if (param_1 == 0) {
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar8 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar1 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar1);
      }
      LOCK();
      uVar8 = *(uint *)(lVar4 + 0x10);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        *(uint *)(lVar4 + 0x10) = uVar1;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = uVar1;
      }
    }
  }
  if (lVar3 == 0) {
    bVar11 = false;
  }
  else {
    local_40 = 0xffffffffffffffff;
    uVar1 = (uVar8 ^ uVar10) + 0x18 ^ 0x7ffff;
    uVar5 = uVar1 << 8 ^ 0x9e3779d1 - uVar1;
    uVar6 = uVar5 >> 0xd ^ (-0x18 - uVar1) - uVar5;
    uVar9 = uVar6 >> 0xc ^ (uVar1 - uVar5) - uVar6;
    uVar1 = uVar9 << 0x10 ^ (uVar5 - uVar6) - uVar9;
    uVar5 = uVar1 >> 5 ^ (uVar6 - uVar9) - uVar1;
    uVar6 = uVar5 >> 3 ^ (uVar9 - uVar1) - uVar5;
    uVar1 = uVar6 << 10 ^ (uVar1 - uVar5) - uVar6;
    uVar1 = uVar1 >> 0xf ^ uVar5 - (uVar6 + uVar1);
    if (*(longlong *)(lVar3 + 0x370) != 0) {
      plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x370) + 0xf8);
      local_48 = uVar10;
      local_44 = uVar8;
      iVar2 = FUN_147e7f48c(plVar7,uVar1,&local_48);
      if (iVar2 != -1) {
        lVar4 = *plVar7;
        if ((lVar4 + (longlong)iVar2 * 0x20 != 0) &&
           (bVar11 = true, lVar4 + (longlong)iVar2 * 0x20 != -0x10)) goto LAB_14383bcc7;
      }
    }
    local_40 = 0xffffffffffffffff;
    local_48 = uVar10;
    local_44 = uVar8;
    iVar2 = FUN_147e82de0(lVar3 + 800,uVar1);
    bVar11 = iVar2 != -1;
  }
LAB_14383bcc7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar11;
}



// FUNCTION 14383be46 FUN_14383be46 body=29 status=ok
// SIG undefined FUN_14383be46(void)

undefined8 FUN_14383be46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383be78 FUN_14383be78 body=85 status=ok
// SIG undefined FUN_14383be78(void)

void FUN_14383be78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4fa0;
  return;
}



// FUNCTION 14383bece FUN_14383bece body=85 status=ok
// SIG undefined FUN_14383bece(void)

void FUN_14383bece(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4fa0;
  return;
}



// FUNCTION 14383bf24 FUN_14383bf24 body=118 status=ok
// SIG undefined FUN_14383bf24(void)

void FUN_14383bf24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d0c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4fa0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383bf8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383bfa8 FUN_14383bfa8 body=25 status=ok
// SIG undefined FUN_14383bfa8(void)

undefined1
FUN_14383bfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14383bfc2(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 14383bfc2 FUN_14383bfc2 body=421 status=ok
// SIG undefined FUN_14383bfc2(void)

void FUN_14383bfc2(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  undefined8 local_90;
  undefined4 *local_88;
  undefined4 local_80;
  longlong local_78;
  longlong local_70;
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
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
    lVar3 = FUN_1409035a4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_38 = *(undefined8 *)(param_3 + 0xc);
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_58 = param_3[4];
      uStack_54 = param_3[5];
      uStack_50 = param_3[6];
      uStack_4c = param_3[7];
      local_48 = param_3[8];
      uStack_44 = param_3[9];
      uStack_40 = param_3[10];
      uStack_3c = param_3[0xb];
      if (param_1 == 0) {
        uVar4 = 0;
        iVar1 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
        if (*(int *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar1 = *(int *)(lVar3 + 0x10);
          bVar6 = iVar1 == 0;
          if (bVar6) {
            *(int *)(lVar3 + 0x10) = iVar5;
            iVar1 = 0;
          }
          UNLOCK();
          if (bVar6) {
            iVar1 = iVar5;
          }
        }
      }
      if (DAT_14cb1d8f0 == '\0') {
        local_70 = lVar2 + 0x4c8;
        local_78 = lVar2 + 0x2d0;
        local_88 = &local_68;
        local_80 = 1;
        local_90 = 0xffffffffffffffff;
        local_98 = uVar4;
        local_94 = iVar1;
        FUN_147e720aa(&local_78,&local_98,param_2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14383c168 FUN_14383c168 body=29 status=ok
// SIG undefined FUN_14383c168(void)

undefined8 FUN_14383c168(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383c19a FUN_14383c19a body=85 status=ok
// SIG undefined FUN_14383c19a(void)

void FUN_14383c19a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d1a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5080;
  return;
}



// FUNCTION 14383c1f0 FUN_14383c1f0 body=85 status=ok
// SIG undefined FUN_14383c1f0(void)

void FUN_14383c1f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d1a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5080;
  return;
}



// FUNCTION 14383c246 FUN_14383c246 body=118 status=ok
// SIG undefined FUN_14383c246(void)

void FUN_14383c246(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d1a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5080;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383c2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383c2bc FUN_14383c2bc body=62 status=ok
// SIG undefined FUN_14383c2bc(void)

void FUN_14383c2bc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14383c33e(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383c2fc FUN_14383c2fc body=64 status=ok
// SIG undefined FUN_14383c2fc(void)

undefined8 FUN_14383c2fc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14383c33e(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383c33e FUN_14383c33e body=182 status=ok
// SIG undefined FUN_14383c33e(void)

void FUN_14383c33e(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  
  if ((param_1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x168), lVar4 != 0)) {
    uVar1 = *param_2;
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30 &&
         (plVar3 = (longlong *)FUN_147e791d4(lVar4), plVar3 != (longlong *)0x0)) &&
        (plVar3[0x73] == 0)))) {
      lVar4 = (**(code **)(*plVar3 + 0x7b8))(plVar3);
      if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
        plVar3[0x73] = lVar4;
        if (lVar4 == 0) {
          return;
        }
      }
      else {
        FUN_1456cec3c(lVar4);
        plVar3[0x73] = lVar4;
      }
      FUN_14045627c(lVar4,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,1);
      FUN_140b506a4(plVar3[0x73]);
      return;
    }
  }
  return;
}



// FUNCTION 14383c3f4 FUN_14383c3f4 body=29 status=ok
// SIG undefined FUN_14383c3f4(void)

undefined8 FUN_14383c3f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383c426 FUN_14383c426 body=85 status=ok
// SIG undefined FUN_14383c426(void)

void FUN_14383c426(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb50f0;
  return;
}



// FUNCTION 14383c47c FUN_14383c47c body=85 status=ok
// SIG undefined FUN_14383c47c(void)

void FUN_14383c47c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb50f0;
  return;
}



// FUNCTION 14383c4d2 FUN_14383c4d2 body=118 status=ok
// SIG undefined FUN_14383c4d2(void)

void FUN_14383c4d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb50f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383c539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383c550 FUN_14383c550 body=19 status=ok
// SIG undefined FUN_14383c550(void)

undefined1 FUN_14383c550(undefined8 param_1,undefined8 param_2)

{
  FUN_14383c564(param_2);
  return 1;
}



// FUNCTION 14383c564 FUN_14383c564 body=78 status=ok
// SIG undefined FUN_14383c564(void)

void FUN_14383c564(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014383c5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x400))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14383c5b2 FUN_14383c5b2 body=109 status=ok
// SIG undefined FUN_14383c5b2(void)

void FUN_14383c5b2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1d8f0 == '\0') {
    local_28 = *(undefined8 *)(*param_3 + 0x40);
    local_20 = *(undefined8 *)(*param_3 + 0x48);
    local_10 = param_2 + 0x4c8;
    local_18 = param_2 + 0x2d0;
    FUN_143833b4e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383c620 FUN_14383c620 body=109 status=ok
// SIG undefined FUN_14383c620(void)

void FUN_14383c620(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1d8f0 == '\0') {
    local_28 = *(undefined8 *)(*param_3 + 0x40);
    local_20 = *(undefined8 *)(*param_3 + 0x48);
    local_10 = param_2 + 0x4c8;
    local_18 = param_2 + 0x2d0;
    FUN_143833b4e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383c68e FUN_14383c68e body=102 status=ok
// SIG undefined FUN_14383c68e(void)

undefined8 * FUN_14383c68e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(*(longlong *)(*param_2 + 0x38) + 0xd8);
  plVar4 = *(longlong **)(*(longlong *)(*param_2 + 0x38) + 0xe0);
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
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
  return param_1;
}



// FUNCTION 14383c712 FUN_14383c712 body=12 status=ok
// SIG undefined FUN_14383c712(void)

void FUN_14383c712(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014383c71b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14383c71e FUN_14383c71e body=29 status=ok
// SIG undefined FUN_14383c71e(void)

undefined8 FUN_14383c71e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383c73c FUN_14383c73c body=92 status=ok
// SIG undefined FUN_14383c73c(void)

undefined8 * FUN_14383c73c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(*param_2 + 0x10);
  plVar4 = *(longlong **)(*param_2 + 0x18);
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
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
  return param_1;
}



// FUNCTION 14383c7b6 FUN_14383c7b6 body=12 status=ok
// SIG undefined FUN_14383c7b6(void)

void FUN_14383c7b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014383c7bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14383c7c2 FUN_14383c7c2 body=29 status=ok
// SIG undefined FUN_14383c7c2(void)

undefined8 FUN_14383c7c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383c7e0 FUN_14383c7e0 body=88 status=ok
// SIG undefined FUN_14383c7e0(void)

undefined8 * FUN_14383c7e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
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
  return param_1;
}



// FUNCTION 14383c874 FUN_14383c874 body=83 status=ok
// SIG undefined FUN_14383c874(void)

undefined8 * FUN_14383c874(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14abb5290;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383c8c8 FUN_14383c8c8 body=88 status=ok
// SIG undefined FUN_14383c8c8(void)

undefined8 * FUN_14383c8c8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
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
  return param_1;
}



// FUNCTION 14383c950 FUN_14383c950 body=12 status=ok
// SIG undefined FUN_14383c950(void)

void FUN_14383c950(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014383c959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14383c95c FUN_14383c95c body=83 status=ok
// SIG undefined FUN_14383c95c(void)

undefined8 * FUN_14383c95c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14abb52b0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383c9b0 FUN_14383c9b0 body=88 status=ok
// SIG undefined FUN_14383c9b0(void)

undefined8 * FUN_14383c9b0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
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
  return param_1;
}



// FUNCTION 14383ca38 FUN_14383ca38 body=12 status=ok
// SIG undefined FUN_14383ca38(void)

void FUN_14383ca38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014383ca41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14383ca44 FUN_14383ca44 body=83 status=ok
// SIG undefined FUN_14383ca44(void)

undefined8 * FUN_14383ca44(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14abb52d0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383ca98 FUN_14383ca98 body=29 status=ok
// SIG undefined FUN_14383ca98(void)

undefined8 FUN_14383ca98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383caca FUN_14383caca body=85 status=ok
// SIG undefined FUN_14383caca(void)

void FUN_14383caca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb53d0;
  return;
}



// FUNCTION 14383cb20 FUN_14383cb20 body=85 status=ok
// SIG undefined FUN_14383cb20(void)

void FUN_14383cb20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb53d0;
  return;
}



// FUNCTION 14383cb76 FUN_14383cb76 body=118 status=ok
// SIG undefined FUN_14383cb76(void)

void FUN_14383cb76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e30fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb53d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383cbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383cbec FUN_14383cbec body=65 status=ok
// SIG undefined FUN_14383cbec(void)

void FUN_14383cbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14383cc72(param_2,&local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383cc2e FUN_14383cc2e body=67 status=ok
// SIG undefined FUN_14383cc2e(void)

undefined8
FUN_14383cc2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14383cc72(param_2,&local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383cc72 FUN_14383cc72 body=423 status=ok
// SIG undefined FUN_14383cc72(void)

void FUN_14383cc72(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  wint_t _C;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wint_t *pwVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_145866520(*param_2);
  if (lVar6 != 0) {
    dVar1 = *(double *)(lVar6 + 0xa0);
    dVar2 = *(double *)(lVar6 + 0xa8);
    dVar3 = *(double *)(lVar6 + 0xb0);
    if (0 < (int)param_1[1]) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        pwVar8 = &DAT_149dfb77a;
      }
      else {
        pwVar8 = *(wint_t **)*param_1;
      }
      if ((*pwVar8 == 0x2d) || (*pwVar8 == 0x2b)) {
        pwVar8 = pwVar8 + 1;
      }
      bVar9 = false;
      do {
        _C = *pwVar8;
        if (_C == 0x2e) {
          bVar4 = true;
          if (bVar9) goto LAB_14383cd45;
        }
        else {
          if (_C == 0) {
            if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
              pwVar7 = L"";
            }
            else {
              pwVar7 = *(wchar_t **)*param_1;
            }
            local_98 = wcstod(pwVar7,(wchar_t **)0x0);
            goto LAB_14383cdc3;
          }
          iVar5 = iswdigit(_C);
          bVar4 = bVar9;
          if (iVar5 == 0) goto LAB_14383cd45;
        }
        bVar9 = bVar4;
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
    local_98 = 1000.0;
LAB_14383cdc3:
    local_70 = dVar3 + local_98;
    local_78 = dVar2 + local_98;
    local_80 = dVar1 + local_98;
    local_88 = dVar3 - local_98;
    local_90 = dVar2 - local_98;
    local_98 = dVar1 - local_98;
    local_68 = 1;
    FUN_147e85120();
    goto LAB_14383cd64;
  }
  lVar6 = *param_3;
  pwVar7 = L"Command failed since it was unable to find a local player";
  goto LAB_14383cd5b;
LAB_14383cd45:
  lVar6 = *param_3;
  pwVar7 = L"Command failed since first parameter is not a valid numerical value";
LAB_14383cd5b:
  local_98 = 0.0;
  (**(code **)(lVar6 + 0x10))(param_3,pwVar7,2);
LAB_14383cd64:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14383ce1a FUN_14383ce1a body=29 status=ok
// SIG undefined FUN_14383ce1a(void)

undefined8 FUN_14383ce1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383ce4c FUN_14383ce4c body=85 status=ok
// SIG undefined FUN_14383ce4c(void)

void FUN_14383ce4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5540;
  return;
}



// FUNCTION 14383cea2 FUN_14383cea2 body=85 status=ok
// SIG undefined FUN_14383cea2(void)

void FUN_14383cea2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5540;
  return;
}



// FUNCTION 14383cef8 FUN_14383cef8 body=118 status=ok
// SIG undefined FUN_14383cef8(void)

void FUN_14383cef8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e30fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5540;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383cf5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383cf6e FUN_14383cf6e body=62 status=ok
// SIG undefined FUN_14383cf6e(void)

void FUN_14383cf6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14383cff0(&local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383cfae FUN_14383cfae body=64 status=ok
// SIG undefined FUN_14383cfae(void)

undefined8
FUN_14383cfae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14383cff0(&local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383cff0 FUN_14383cff0 body=210 status=ok
// SIG undefined FUN_14383cff0(void)

void FUN_14383cff0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 == 0) || (lVar2 = *(longlong *)(*param_1 + 0x168), lVar2 == 0)) {
LAB_14383d03c:
    lVar2 = *param_2;
    pwVar3 = L"Command failed since it was unable to find the navigation system";
  }
  else {
    lVar1 = FUN_1409035a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_14383d03c;
    local_20 = *(longlong *)(lVar2 + 0x370);
    if (local_20 != 0) {
      local_30 = &local_20;
      local_28 = param_2;
      FUN_14383d0c4(local_20 + 0x10,0,local_20 + 0x10);
      goto LAB_14383d05b;
    }
    lVar2 = *param_2;
    pwVar3 = L"Octree not used in the current configuration";
  }
  local_30 = (longlong *)0x0;
  (**(code **)(lVar2 + 0x10))(param_2,pwVar3,2);
LAB_14383d05b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d0c4 FUN_14383d0c4 body=852 status=ok
// SIG undefined FUN_14383d0c4(void)

void FUN_14383d0c4(longlong param_1,int param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  undefined2 *local_140;
  longlong local_130;
  undefined2 *local_128;
  int local_120;
  undefined2 *local_118;
  int local_110;
  undefined2 *local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)(param_1 + 0x60);
  lVar12 = (longlong)param_2;
  if (*(int *)(lVar7 + 4 + lVar12 * 8) != 0) {
    lVar8 = *(longlong *)(*(longlong *)*param_4 + 0x90);
    lVar9 = lVar12 * 0x490;
    lVar5 = *(longlong *)(lVar8 + 0x480 + lVar9);
    lVar16 = lVar8 + lVar9;
    if (lVar5 != 0) {
      lVar16 = lVar5;
    }
    lVar8 = (longlong)*(int *)(lVar8 + 0x488 + lVar9);
    if (lVar8 != 0) {
      lVar8 = lVar8 * 0x48;
      local_130 = lVar12;
      do {
        uVar6 = param_4[1];
        lVar7 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0xd8);
        iVar3 = *(int *)(lVar7 + 0xfc);
        if (((iVar3 == 0) || (uVar4 = *(uint *)(lVar7 + 0xf8), (int)uVar4 < 0)) ||
           (DAT_14c9647dc <= (int)uVar4)) {
LAB_14383d1d6:
          FUN_140056680(&local_108,&DAT_149e01fe8);
        }
        else {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar3)) ||
             (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))) goto LAB_14383d1d6;
          local_118 = *(undefined2 **)(*plVar10 + 0x18);
          FUN_1400021e4(&local_118,&local_108);
        }
        puVar15 = &DAT_149dfb77a;
        if (dStack_100._0_4_ != 0) {
          puVar15 = local_108;
        }
        FUN_147e851d6(lVar16,&local_118);
        puVar11 = &DAT_149dfb77a;
        if (local_110 != 0) {
          puVar11 = local_118;
        }
        FUN_1478cb15a(*(undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0xd8),&local_128);
        puVar13 = &DAT_149dfb77a;
        if (local_120 != 0) {
          puVar13 = local_128;
        }
        local_148 = puVar11;
        local_140 = puVar15;
        FUN_146816218(uVar6,5,L"%s bounds: [%s] parent:\'%s\'",puVar13);
        if (local_128 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar16 = lVar16 + 0x48;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
      lVar7 = *(longlong *)(param_1 + 0x60);
      lVar12 = local_130;
    }
    iVar3 = *(int *)(lVar7 + lVar12 * 8);
    if (iVar3 != -1) {
      iVar14 = 0;
      auVar22 = pmovsxbd(unaff_XMM6,0x8040201);
      do {
        auVar18._4_4_ = iVar14;
        auVar18._0_4_ = iVar14;
        auVar18._8_4_ = iVar14;
        auVar18._12_4_ = iVar14;
        auVar18 = auVar18 & auVar22;
        dVar1 = param_3[9];
        dVar2 = param_3[9];
        dVar20 = (double)(float)-(uint)(auVar18._0_4_ == auVar22._0_4_);
        dVar21 = (double)(float)-(uint)(auVar18._4_4_ == auVar22._4_4_);
        dVar17 = (double)(float)-(uint)(auVar18._8_4_ == auVar22._8_4_);
        dVar19 = (double)(float)-(uint)(auVar18._12_4_ == auVar22._12_4_);
        local_108 = (undefined2 *)
                    ((double)(~(ulonglong)dVar20 & (ulonglong)-dVar1 |
                             (ulonglong)dVar1 & (ulonglong)dVar20) + *param_3);
        dStack_100 = (double)(~(ulonglong)dVar21 & (ulonglong)-dVar2 |
                             (ulonglong)dVar2 & (ulonglong)dVar21) + param_3[1];
        local_f8 = ((double)(~(ulonglong)dVar17 & (ulonglong)-dVar1 |
                            (ulonglong)dVar1 & (ulonglong)dVar17) + param_3[2]) * 1.0;
        dStack_f0 = ((double)(~(ulonglong)dVar19 & (ulonglong)-dVar2 |
                             (ulonglong)dVar2 & (ulonglong)dVar19) + param_3[3]) * 0.0;
        local_e8 = param_3[8];
        local_d8 = local_e8 * 1.0;
        dStack_d0 = local_e8 * 0.0;
        local_c8 = local_e8 * 0.5 * 1.0625;
        local_c0 = local_e8 - local_c8;
        dStack_e0 = local_e8;
        FUN_14383d0c4(param_1,iVar3 + iVar14,&local_108,param_4);
        iVar14 = iVar14 + 1;
      } while (iVar14 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d41a FUN_14383d41a body=90 status=ok
// SIG undefined FUN_14383d41a(void)

void FUN_14383d41a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *param_1 + 0x4c8;
  local_18 = *param_1 + 0x2d0;
  FUN_14383229e(&local_18,local_1c,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d476 FUN_14383d476 body=109 status=ok
// SIG undefined FUN_14383d476(void)

void FUN_14383d476(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1d8f0 == '\0') {
    local_28 = *(undefined8 *)(*param_3 + 0x40);
    local_20 = *(undefined8 *)(*param_3 + 0x48);
    local_10 = param_2 + 0x4c8;
    local_18 = param_2 + 0x2d0;
    FUN_143833b4e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d4e4 FUN_14383d4e4 body=109 status=ok
// SIG undefined FUN_14383d4e4(void)

void FUN_14383d4e4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1d8f0 == '\0') {
    local_28 = *(undefined8 *)(*param_3 + 0x40);
    local_20 = *(undefined8 *)(*param_3 + 0x48);
    local_10 = param_2 + 0x4c8;
    local_18 = param_2 + 0x2d0;
    FUN_143833b4e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d552 FUN_14383d552 body=109 status=ok
// SIG undefined FUN_14383d552(void)

void FUN_14383d552(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1d8f0 == '\0') {
    local_28 = *(undefined8 *)(*param_3 + 0x40);
    local_20 = *(undefined8 *)(*param_3 + 0x48);
    local_10 = param_2 + 0x4c8;
    local_18 = param_2 + 0x2d0;
    FUN_143833b4e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d5c0 FUN_14383d5c0 body=29 status=ok
// SIG undefined FUN_14383d5c0(void)

undefined8 FUN_14383d5c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383d75c FUN_14383d75c body=93 status=ok
// SIG undefined FUN_14383d75c(void)

void FUN_14383d75c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383d7ba FUN_14383d7ba body=93 status=ok
// SIG undefined FUN_14383d7ba(void)

void FUN_14383d7ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383d818 FUN_14383d818 body=126 status=ok
// SIG undefined FUN_14383d818(void)

void FUN_14383d818(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abb5bf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5b80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383d887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383d8a8 FUN_14383d8a8 body=279 status=ok
// SIG undefined FUN_14383d8a8(void)

undefined8 FUN_14383d8a8(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14383d9b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14383d9b9;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14383d9b9:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14383d96c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x3f8))(*(longlong **)(param_1 + 0x20),param_2)
      ;
      uVar6 = 1;
      goto LAB_14383d96c;
    }
  }
  uVar6 = 0;
LAB_14383d96c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383d9c0 FUN_14383d9c0 body=29 status=ok
// SIG undefined FUN_14383d9c0(void)

undefined8 FUN_14383d9c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383db5c FUN_14383db5c body=93 status=ok
// SIG undefined FUN_14383db5c(void)

void FUN_14383db5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383dbba FUN_14383dbba body=93 status=ok
// SIG undefined FUN_14383dbba(void)

void FUN_14383dbba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383dc18 FUN_14383dc18 body=126 status=ok
// SIG undefined FUN_14383dc18(void)

void FUN_14383dc18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abb5bf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5c60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383dc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383dc96 FUN_14383dc96 body=87 status=ok
// SIG undefined FUN_14383dc96(void)

void FUN_14383dc96(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x20);
  (**(code **)(*param_2 + 0x38))(param_2,local_20);
  FUN_147e880dc(lVar1 + 0x478,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383dcee FUN_14383dcee body=305 status=ok
// SIG undefined FUN_14383dcee(void)

undefined8 FUN_14383dcee(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14383de19;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14383de19;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14383de19:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14383dd9f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
      FUN_147e880dc(lVar5 + 0x478,&local_38);
      uVar6 = 1;
      goto LAB_14383dd9f;
    }
  }
  uVar6 = 0;
LAB_14383dd9f:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383de20 FUN_14383de20 body=29 status=ok
// SIG undefined FUN_14383de20(void)

undefined8 FUN_14383de20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383dfbc FUN_14383dfbc body=93 status=ok
// SIG undefined FUN_14383dfbc(void)

void FUN_14383dfbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383e01a FUN_14383e01a body=93 status=ok
// SIG undefined FUN_14383e01a(void)

void FUN_14383e01a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383e078 FUN_14383e078 body=126 status=ok
// SIG undefined FUN_14383e078(void)

void FUN_14383e078(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abb5d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5cd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383e0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383e0f6 FUN_14383e0f6 body=91 status=ok
// SIG undefined FUN_14383e0f6(void)

void FUN_14383e0f6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(longlong *)(param_1 + 0x20) + 0x4c8;
  local_18 = *(longlong *)(param_1 + 0x20) + 0x2d0;
  FUN_14383229e(&local_18,local_1c,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383e152 FUN_14383e152 body=308 status=ok
// SIG undefined FUN_14383e152(void)

undefined8 FUN_14383e152(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14383e280;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14383e280;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar7 = local_38;
  }
  else {
LAB_14383e280:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14383e233;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = *(longlong *)(param_1 + 0x20) + 0x4c8;
      local_38 = *(longlong *)(param_1 + 0x20) + 0x2d0;
      FUN_14383229e(&local_38,local_3c,param_2,0);
      uVar6 = 1;
      goto LAB_14383e233;
    }
  }
  uVar6 = 0;
LAB_14383e233:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383e288 FUN_14383e288 body=29 status=ok
// SIG undefined FUN_14383e288(void)

undefined8 FUN_14383e288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14383e424 FUN_14383e424 body=93 status=ok
// SIG undefined FUN_14383e424(void)

void FUN_14383e424(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5db0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383e482 FUN_14383e482 body=93 status=ok
// SIG undefined FUN_14383e482(void)

void FUN_14383e482(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb5d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5db0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14383e4e0 FUN_14383e4e0 body=126 status=ok
// SIG undefined FUN_14383e4e0(void)

void FUN_14383e4e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abb5d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5db0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014383e54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14383e55e FUN_14383e55e body=83 status=ok
// SIG undefined FUN_14383e55e(void)

void FUN_14383e55e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(longlong *)(param_1 + 0x20) + 0x4c8;
  local_18 = *(longlong *)(param_1 + 0x20) + 0x2d0;
  FUN_143833876(&local_18,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383e5b2 FUN_14383e5b2 body=303 status=ok
// SIG undefined FUN_14383e5b2(void)

undefined8 FUN_14383e5b2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14383e6db;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14383e6db;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar7 = local_38;
  }
  else {
LAB_14383e6db:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14383e68e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = *(longlong *)(param_1 + 0x20) + 0x4c8;
      local_38 = *(longlong *)(param_1 + 0x20) + 0x2d0;
      FUN_143833876(&local_38,param_2,0);
      uVar6 = 1;
      goto LAB_14383e68e;
    }
  }
  uVar6 = 0;
LAB_14383e68e:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383e6e2 FUN_14383e6e2 body=2143 status=ok
// SIG undefined FUN_14383e6e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14383e6e2(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba5cc0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba6030,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14aba6610;
  local_78 = 1;
  FUN_14282b410(L"/Script/NavigationSystem",0,0,&PTR_FUN_14aba6630);
  FUN_14098d3d2(FUN_1438312f3,L"/Script/NavigationSystem",L"ELinkGenerationDebugFlags",
                &DAT_14cb1d2d0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba6e00,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba7650,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba79f0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba7ab0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba7bc0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba7c80,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba7d30,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba8080,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba8930,1,0);
  DAT_14cacb150 = DAT_14cacb150 + 1;
  _DAT_14cb1d3e0 = 0;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  DAT_14cb1d3d8 = DAT_14cacb150;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba92d0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba9650,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14aba9fe0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abaa360,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abaa6e0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abaaa60,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abaade0,1,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cb1d490);
  if (cVar2 == '\0') {
    _DAT_14cb1d490 = 0;
    uRam000000014cb1d498 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abab640,1,&PTR_FUN_14abab5f0);
  local_60._0_4_ = 1;
  local_78 = CONCAT44(local_78._4_4_,0x40);
  FUN_14078dbce(&DAT_14cb1d4e8,L"ai.NavCollisionAvailable",&local_60,
                L"If set to 0 NavCollision won\'t be cooked and will be unavailable at runtime.\n");
  atexit(FUN_14383132a);
  FUN_1446f470e(&DAT_14cb1d500,L"NavCollision_Chaos",1);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abac5a0,1,&PTR_FUN_14abac550);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abac920,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abad3a0,1,&PTR_FUN_14abad350);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14abae310;
  local_78 = 1;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abae360,1,&PTR_FUN_14abae330);
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb1d5f8,L"ai.DestroyNavDataInCleanUpAndMarkPendingKill",&local_60,
                L"If set to 1 NavData will be destroyed in CleanUpAndMarkPendingKill rather than being marked as garbage.\n"
               );
  atexit(FUN_143831907);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abaec50,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abaf900,1,0);
  DAT_14cacb150 = DAT_14cacb150 + 1;
  _DAT_14cb1d698 = 0;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  _DAT_14cb1d690 = DAT_14cacb150;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abb3100,2,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb1d770,L"UE.Rollback.Navigation.ComponentShouldWaitForActorToRegister",
                &DAT_14c762388,
                L"Components registration to navigation octree will be postponed until owning actor is registered to the octree.\nCategory: [Navigation]"
               );
  atexit(FUN_143834bd6);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_149e30fe0;
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
  local_60[2] = lVar3;
  *local_60 = &PTR_FUN_14abb53d0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14170c604(&DAT_14cb1d780,L"ai.debug.nav.DirtyAreaAroundPlayer",
                L"Dirty all tiles in a square area around the local player using provided value as extent (in cm), using 10 meters if not specified."
                ,&local_60);
  if (local_58 == 0) {
LAB_14383eced:
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_14383eced;
  }
  atexit(FUN_143834c1b);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_149e30fe0;
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
  local_60[2] = lVar3;
  *local_60 = &PTR_FUN_14abb5540;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14170c604(&DAT_14cb1d790,L"ai.debug.nav.DumpOctreeElements",
                L"Iterates through all nodes of the navigation octree and log details about each element to the output device."
                ,&local_60);
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_14383edd5;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14383edd5:
  atexit(FUN_143834c60);
  _DAT_14cb1d830 = 0;
  uRam000000014cb1d838 = 0;
  _DAT_14cb1d840 = 0x402e000000000000;
  _DAT_14cb1d848 = &DAT_4030000000000000;
  _DAT_14cb1d850 = &DAT_4030000000000000;
  _DAT_14cb1d858 = &DAT_4030000000000000;
  DAT_14cb1d880 = 0;
  _DAT_14cb1d888 = 0;
  DAT_14cb1d860 = 0;
  _DAT_14cb1d868 = 0;
  _DAT_14cb1d88c = 0xffffffff00000080;
  _DAT_14cb1d894 = 0;
  DAT_14cb1d8a0 = 0;
  _DAT_14cb1d8a8 = 0;
  atexit(FUN_143834cd5);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb1d8b0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb1d8b0,4000);
  atexit((_func_5014 *)&LAB_143834cfe);
  DAT_14cb1d8d8 = 0;
  _DAT_14cb1d8e0 = 0;
  _DAT_14cb1d8e8 = 2;
  atexit(FUN_143834d0c);
  ppuStack_70 = (undefined **)((ulonglong)ppuStack_70 & 0xffffffff00000000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1412c7f16(&DAT_14cb1d8f8,L"TaskGraph.TaskPriorities.NavTriggerAsyncQueries",
                L"Task and thread priority for UNavigationSystemV1::PerformAsyncQueries.",0x800);
  atexit(FUN_14383695b);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14383ef44 FUN_14383ef44 body=2795 status=ok
// SIG undefined FUN_14383ef44(void)

void FUN_14383ef44(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char *pcVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_3a8 [32];
  undefined4 local_388;
  ulonglong *local_380;
  undefined1 *local_378;
  undefined8 local_370;
  wchar_t *local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  code **local_350;
  undefined1 *local_348;
  code *local_340;
  undefined8 local_330;
  undefined1 local_328 [16];
  double local_318;
  code *local_310;
  double local_308;
  double local_300;
  undefined1 local_2f8 [8];
  longlong local_2f0;
  int local_2e8;
  longlong local_2e0;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  double local_210;
  undefined4 local_1a4;
  undefined4 local_178;
  uint local_170;
  int local_16c;
  ulonglong local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined2 local_12f;
  undefined1 local_12d;
  undefined2 local_12c;
  undefined1 local_12a;
  undefined2 local_129;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined2 local_118;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_330 = param_1;
  FUN_147e899b6(local_2f8,param_3,param_2 + 2);
  if (0 < local_2e8) {
    lVar19 = 0x68;
    lVar20 = 0;
    do {
      lVar14 = local_2f0;
      if (*(char *)(local_2f0 + -0x40 + lVar19) == '\x02') {
        local_238 = *(undefined8 *)(local_2f0 + -0x18 + lVar19);
        puVar1 = (undefined8 *)(local_2f0 + -0x28 + lVar19);
        pcVar12 = (char *)*puVar1;
        uVar17 = puVar1[1];
        puVar1 = (undefined8 *)(local_2f0 + -0x10 + lVar19);
        uVar13 = puVar1[1];
        puVar2 = (undefined8 *)(local_2f0 + -0x28 + lVar19);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        *(undefined8 *)(local_2f0 + -0x18 + lVar19) = *(undefined8 *)(local_2f0 + lVar19);
        local_248._0_4_ = SUB84(pcVar12,0);
        local_248._4_4_ = (undefined4)((ulonglong)pcVar12 >> 0x20);
        uStack_240._0_4_ = (undefined4)uVar17;
        uStack_240._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
        puVar3 = (undefined4 *)(local_2f0 + -0x10 + lVar19);
        *puVar3 = (undefined4)local_248;
        puVar3[1] = local_248._4_4_;
        puVar3[2] = (undefined4)uStack_240;
        puVar3[3] = uStack_240._4_4_;
        *(undefined8 *)(local_2f0 + lVar19) = local_238;
        local_248 = pcVar12;
        uStack_240 = uVar17;
      }
      fVar5 = *(float *)(local_2f0 + -100 + lVar19);
      if (0.0 < fVar5) {
        pdVar4 = (double *)(local_2f0 + -0x10 + lVar19);
        dVar21 = *pdVar4 * (double)param_2[10];
        dVar22 = pdVar4[1] * (double)param_2[0xb];
        dVar8 = *(double *)(local_2f0 + lVar19) * (double)param_2[0xc];
        dVar10 = (double)param_2[2];
        dVar11 = (double)param_2[3];
        dVar9 = (double)param_2[4];
        dVar6 = (double)param_2[5];
        dVar23 = dVar22 * dVar10 - dVar21 * dVar11;
        dVar24 = dVar8 * dVar11 - dVar22 * dVar9;
        dVar25 = dVar21 * dVar9 - dVar10 * dVar8;
        dVar24 = dVar24 + dVar24;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar23 + dVar23;
        dVar21 = (dVar23 * dVar11 - dVar25 * dVar9) + dVar6 * dVar24 + dVar21 + (double)param_2[6];
        dVar9 = (dVar9 * dVar24 - dVar10 * dVar23) + (double)param_2[5] * dVar25 + dVar22 +
                (double)param_2[7];
        dVar6 = dVar23 * dVar6 + dVar8 + (dVar25 * dVar10 - dVar24 * dVar11) + (double)param_2[8];
        local_328._8_4_ = SUB84(dVar9,0);
        local_328._0_8_ = dVar21;
        local_328._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        lVar7 = *param_2;
        local_318 = dVar6;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb1dca0) &&
           (FUN_144b3d300(&DAT_14cb1dca0), DAT_14cb1dca0 == -1)) {
          local_248 = "RawGeometryFall";
          uStack_240 = CONCAT35(uStack_240._5_3_,0xf);
          uVar16 = FUN_14001a6c0(&local_248);
          DAT_14cb1dc98 = (ulonglong)uVar16;
          _Init_thread_footer(&DAT_14cb1dca0);
        }
        local_11c = 0;
        local_138 = 0;
        local_118 = 0x101;
        local_f0 = 0;
        local_e8 = 0x800000000;
        local_d0 = 0;
        local_c8 = 0x400000000;
        local_130 = 1;
        local_124 = 0;
        local_140 = DAT_14cb1dc98;
        local_12f = 1;
        local_12d = 0;
        local_120 = 0;
        local_12c = 0;
        local_12a = 0;
        if (lVar7 != 0) {
          local_e0 = *(undefined4 *)(lVar7 + 0xc);
          local_c8 = 0x400000001;
          local_138 = *(undefined8 *)(lVar7 + 0x18);
        }
        local_129 = 0x101;
        memset(&local_248,0,0x100);
        local_178 = 0xffffffff;
        local_248 = (char *)CONCAT44(0x3f800000,(undefined4)local_248);
        local_1a4 = 0xffffffff;
        uVar17 = FUN_1447210f0(lVar7);
        local_300 = dVar6 - (double)fVar5;
        local_308 = dVar9 + 0.0;
        local_310 = (code *)(dVar21 + 0.0);
        local_378 = &DAT_14cad0f10;
        local_380 = &local_140;
        local_388 = 0;
        cVar15 = FUN_1400b50cc(uVar17,&local_248,local_328,&local_310);
        dVar8 = 0.0;
        if (((((cVar15 != '\0') && (dVar8 = 0.0, local_16c != 0)) &&
             (dVar8 = 0.0, -1 < (int)local_170)) &&
            ((dVar8 = 0.0, (int)local_170 < DAT_14c9647dc &&
             (plVar18 = (longlong *)
                        ((ulonglong)((local_170 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8)),
             dVar8 = 0.0, plVar18 != (longlong *)0x0)))) &&
           ((dVar8 = 0.0, (int)plVar18[2] == local_16c &&
            ((dVar8 = 0.0, (*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
             (lVar7 = *plVar18, dVar8 = 0.0, lVar7 != 0)))))) {
          if (DAT_14cad3688 == 0) {
            local_310 = FUN_144b223ce;
            local_340 = FUN_14081d0ea;
            local_348 = &LAB_1417963e0;
            local_350 = &local_310;
            local_358 = &LAB_147a2f4c9;
            local_360 = &LAB_1400ea6f8;
            local_368 = L"Engine";
            local_370 = 0x200000000000;
            local_378 = (undefined1 *)CONCAT44(local_378._4_4_,0x10000004);
            local_380 = (ulonglong *)CONCAT44(local_380._4_4_,0x10);
            local_388 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
          }
          lVar7 = *(longlong *)(lVar7 + 0x10);
          dVar8 = 0.0;
          if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
             (dVar8 = 0.0,
             *(longlong *)
              (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
             DAT_14cad3688 + 0x30)) {
            dVar8 = dVar6 - local_210;
          }
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        if (0.0 < dVar8) {
          *(double *)(lVar14 + lVar19) = *(double *)(lVar14 + lVar19) - dVar8;
        }
      }
      fVar5 = *(float *)(lVar14 + -0x68 + lVar19);
      if (0.0 < fVar5) {
        pdVar4 = (double *)(lVar14 + -0x28 + lVar19);
        dVar21 = *pdVar4 * (double)param_2[10];
        dVar22 = pdVar4[1] * (double)param_2[0xb];
        dVar8 = *(double *)(lVar14 + -0x18 + lVar19) * (double)param_2[0xc];
        dVar10 = (double)param_2[2];
        dVar11 = (double)param_2[3];
        dVar9 = (double)param_2[4];
        dVar6 = (double)param_2[5];
        dVar23 = dVar22 * dVar10 - dVar21 * dVar11;
        dVar24 = dVar8 * dVar11 - dVar22 * dVar9;
        dVar25 = dVar21 * dVar9 - dVar10 * dVar8;
        dVar24 = dVar24 + dVar24;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar23 + dVar23;
        dVar21 = (dVar23 * dVar11 - dVar25 * dVar9) + dVar6 * dVar24 + dVar21 + (double)param_2[6];
        dVar9 = (dVar9 * dVar24 - dVar10 * dVar23) + (double)param_2[5] * dVar25 + dVar22 +
                (double)param_2[7];
        dVar6 = dVar23 * dVar6 + dVar8 + (dVar25 * dVar10 - dVar24 * dVar11) + (double)param_2[8];
        local_328._8_4_ = SUB84(dVar9,0);
        local_328._0_8_ = dVar21;
        local_328._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        lVar7 = *param_2;
        local_318 = dVar6;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb1dca0) &&
           (FUN_144b3d300(&DAT_14cb1dca0), DAT_14cb1dca0 == -1)) {
          local_248 = "RawGeometryFall";
          uStack_240 = CONCAT35(uStack_240._5_3_,0xf);
          uVar16 = FUN_14001a6c0(&local_248);
          DAT_14cb1dc98 = (ulonglong)uVar16;
          _Init_thread_footer(&DAT_14cb1dca0);
        }
        local_11c = 0;
        local_138 = 0;
        local_118 = 0x101;
        local_f0 = 0;
        local_e8 = 0x800000000;
        local_d0 = 0;
        local_c8 = 0x400000000;
        local_130 = 1;
        local_124 = 0;
        local_140 = DAT_14cb1dc98;
        local_12f = 1;
        local_12d = 0;
        local_120 = 0;
        local_12c = 0;
        local_12a = 0;
        if (lVar7 != 0) {
          local_e0 = *(undefined4 *)(lVar7 + 0xc);
          local_c8 = 0x400000001;
          local_138 = *(undefined8 *)(lVar7 + 0x18);
        }
        local_129 = 0x101;
        memset(&local_248,0,0x100);
        local_178 = 0xffffffff;
        local_248 = (char *)CONCAT44(0x3f800000,(undefined4)local_248);
        local_1a4 = 0xffffffff;
        uVar17 = FUN_1447210f0(lVar7);
        local_300 = dVar6 - (double)fVar5;
        local_308 = dVar9 + 0.0;
        local_310 = (code *)(dVar21 + 0.0);
        local_378 = &DAT_14cad0f10;
        local_380 = &local_140;
        local_388 = 0;
        cVar15 = FUN_1400b50cc(uVar17,&local_248,local_328,&local_310);
        dVar8 = 0.0;
        if ((((cVar15 != '\0') && (dVar8 = 0.0, local_16c != 0)) &&
            (dVar8 = 0.0, -1 < (int)local_170)) &&
           (((dVar8 = 0.0, (int)local_170 < DAT_14c9647dc &&
             (plVar18 = (longlong *)
                        ((ulonglong)((local_170 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8)),
             dVar8 = 0.0, plVar18 != (longlong *)0x0)) &&
            ((dVar8 = 0.0, (int)plVar18[2] == local_16c &&
             ((dVar8 = 0.0, (*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
              (lVar7 = *plVar18, dVar8 = 0.0, lVar7 != 0)))))))) {
          if (DAT_14cad3688 == 0) {
            local_310 = FUN_144b223ce;
            local_340 = FUN_14081d0ea;
            local_348 = &LAB_1417963e0;
            local_350 = &local_310;
            local_358 = &LAB_147a2f4c9;
            local_360 = &LAB_1400ea6f8;
            local_368 = L"Engine";
            local_370 = 0x200000000000;
            local_378 = (undefined1 *)CONCAT44(local_378._4_4_,0x10000004);
            local_380 = (ulonglong *)CONCAT44(local_380._4_4_,0x10);
            local_388 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
          }
          lVar7 = *(longlong *)(lVar7 + 0x10);
          dVar8 = 0.0;
          if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
             (dVar8 = 0.0,
             *(longlong *)
              (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
             DAT_14cad3688 + 0x30)) {
            dVar8 = dVar6 - local_210;
          }
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        if (0.0 < dVar8) {
          *(double *)(lVar14 + -0x18 + lVar19) = *(double *)(lVar14 + -0x18 + lVar19) - dVar8;
        }
      }
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 0x70;
    } while (lVar20 < local_2e8);
  }
  FUN_147e89a16(local_330,local_2f8);
  if (local_2e0 != 0) {
    FUN_1400020a8();
  }
  if (local_2f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14383fa30 FUN_14383fa30 body=2954 status=ok
// SIG undefined FUN_14383fa30(void)

void FUN_14383fa30(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char *pcVar23;
  longlong lVar24;
  char cVar25;
  uint uVar26;
  undefined8 uVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  ulonglong *local_3d0;
  undefined1 *local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  code **local_3a0;
  undefined1 *local_398;
  code *local_390;
  undefined8 local_380;
  undefined1 local_378 [16];
  double local_368;
  undefined1 local_358 [16];
  double local_348;
  code *local_340;
  double local_338;
  double local_330;
  undefined1 local_328 [8];
  longlong local_320;
  longlong local_310;
  int local_308;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double local_240;
  undefined4 local_1d4;
  undefined4 local_1a8;
  uint local_1a0;
  int local_19c;
  ulonglong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_159;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  double dVar7;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_380 = param_1;
  FUN_147e89a60(local_328,param_3,param_2 + 2);
  if (0 < local_308) {
    lVar30 = 0x98;
    lVar29 = 0;
    do {
      lVar24 = local_310;
      if (*(char *)(local_310 + -0x70 + lVar30) == '\x02') {
        uVar27 = *(undefined8 *)(local_310 + -0x48 + lVar30);
        puVar1 = (undefined8 *)(local_310 + -0x58 + lVar30);
        uVar20 = *puVar1;
        uVar21 = puVar1[1];
        puVar1 = (undefined8 *)(local_310 + -0x28 + lVar30);
        uVar22 = puVar1[1];
        puVar2 = (undefined8 *)(local_310 + -0x58 + lVar30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar22;
        *(undefined8 *)(local_310 + -0x48 + lVar30) = *(undefined8 *)(local_310 + -0x18 + lVar30);
        puVar1 = (undefined8 *)(local_310 + -0x28 + lVar30);
        *puVar1 = uVar20;
        puVar1[1] = uVar21;
        *(undefined8 *)(local_310 + -0x18 + lVar30) = uVar27;
        local_268 = *(undefined8 *)(local_310 + -0x30 + lVar30);
        puVar1 = (undefined8 *)(local_310 + -0x40 + lVar30);
        pcVar23 = (char *)*puVar1;
        uVar27 = puVar1[1];
        puVar1 = (undefined8 *)(local_310 + -0x10 + lVar30);
        uVar20 = puVar1[1];
        puVar2 = (undefined8 *)(local_310 + -0x40 + lVar30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar20;
        *(undefined8 *)(local_310 + -0x30 + lVar30) = *(undefined8 *)(local_310 + lVar30);
        local_278._0_4_ = SUB84(pcVar23,0);
        local_278._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
        uStack_270._0_4_ = (undefined4)uVar27;
        uStack_270._4_4_ = (undefined4)((ulonglong)uVar27 >> 0x20);
        puVar3 = (undefined4 *)(local_310 + -0x10 + lVar30);
        *puVar3 = (undefined4)local_278;
        puVar3[1] = local_278._4_4_;
        puVar3[2] = (undefined4)uStack_270;
        puVar3[3] = uStack_270._4_4_;
        *(undefined8 *)(local_310 + lVar30) = local_268;
        local_278 = pcVar23;
        uStack_270 = uVar27;
      }
      fVar5 = *(float *)(local_310 + -0x94 + lVar30);
      if (0.0 < fVar5) {
        pdVar4 = (double *)(local_310 + -0x28 + lVar30);
        dVar12 = *pdVar4 * (double)param_2[10];
        dVar31 = pdVar4[1] * (double)param_2[0xb];
        dVar9 = *(double *)(local_310 + -0x18 + lVar30) * (double)param_2[0xc];
        dVar6 = (double)param_2[5];
        dVar7 = (double)param_2[5];
        dVar17 = (double)param_2[2];
        dVar18 = (double)param_2[3];
        dVar19 = (double)param_2[4];
        dVar13 = dVar31 * dVar17 - dVar12 * dVar18;
        dVar15 = dVar9 * dVar18 - dVar31 * dVar19;
        dVar16 = dVar12 * dVar19 - dVar9 * dVar17;
        dVar15 = dVar15 + dVar15;
        dVar16 = dVar16 + dVar16;
        dVar13 = dVar13 + dVar13;
        dVar10 = (dVar13 * dVar18 - dVar16 * dVar19) + dVar6 * dVar15 + dVar12 + (double)param_2[6];
        dVar11 = (dVar19 * dVar15 - dVar17 * dVar13) + dVar7 * dVar16 + dVar31 + (double)param_2[7];
        local_358._8_4_ = SUB84(dVar11,0);
        local_358._0_8_ = dVar10;
        local_358._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        dVar16 = dVar13 * dVar6 + dVar9 + (dVar16 * dVar17 - dVar15 * dVar18) + (double)param_2[8];
        pdVar4 = (double *)(local_310 + -0x10 + lVar30);
        dVar12 = *pdVar4 * (double)param_2[10];
        dVar15 = pdVar4[1] * (double)param_2[0xb];
        dVar14 = *(double *)(local_310 + lVar30) * (double)param_2[0xc];
        dVar13 = dVar15 * dVar17 - dVar18 * dVar12;
        dVar9 = dVar14 * dVar18 - dVar19 * dVar15;
        dVar31 = dVar12 * dVar19 - dVar17 * dVar14;
        dVar9 = dVar9 + dVar9;
        dVar31 = dVar31 + dVar31;
        dVar13 = dVar13 + dVar13;
        dVar12 = (dVar13 * dVar18 - dVar31 * dVar19) + dVar6 * dVar9 + dVar12 + (double)param_2[6];
        dVar15 = (dVar19 * dVar9 - dVar17 * dVar13) + dVar7 * dVar31 + dVar15 + (double)param_2[7];
        local_378._8_4_ = SUB84(dVar15,0);
        local_378._0_8_ = dVar12;
        local_378._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        dVar7 = dVar13 * dVar6 + dVar14 + (dVar31 * dVar17 - dVar9 * dVar18) + (double)param_2[8];
        lVar8 = *param_2;
        local_368 = dVar7;
        local_348 = dVar16;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb1dca0) &&
           (FUN_144b3d300(&DAT_14cb1dca0), DAT_14cb1dca0 == -1)) {
          local_278 = "RawGeometryFall";
          uStack_270 = CONCAT35(uStack_270._5_3_,0xf);
          uVar26 = FUN_14001a6c0(&local_278);
          DAT_14cb1dc98 = (ulonglong)uVar26;
          _Init_thread_footer(&DAT_14cb1dca0);
        }
        local_14c = 0;
        local_168 = 0;
        local_148 = 0x101;
        local_120 = 0;
        local_118 = 0x800000000;
        local_100 = 0;
        local_f8 = 0x400000000;
        local_160 = 1;
        local_154 = 0;
        local_170 = DAT_14cb1dc98;
        local_15f = 1;
        local_15d = 0;
        local_150 = 0;
        local_15c = 0;
        local_15a = 0;
        if (lVar8 != 0) {
          local_110 = *(undefined4 *)(lVar8 + 0xc);
          local_f8 = 0x400000001;
          local_168 = *(undefined8 *)(lVar8 + 0x18);
        }
        local_159 = 0x101;
        memset(&local_278,0,0x100);
        local_1a8 = 0xffffffff;
        local_278 = (char *)CONCAT44(0x3f800000,(undefined4)local_278);
        local_1d4 = 0xffffffff;
        uVar27 = FUN_1447210f0(lVar8);
        local_330 = dVar16 - (double)fVar5;
        local_338 = dVar11 + 0.0;
        local_340 = (code *)(dVar10 + 0.0);
        local_3c8 = &DAT_14cad0f10;
        local_3d0 = &local_170;
        local_3d8 = 0;
        cVar25 = FUN_1400b50cc(uVar27,&local_278,local_358,&local_340);
        dVar6 = 0.0;
        if (((((cVar25 != '\0') && (dVar6 = 0.0, local_19c != 0)) &&
             (dVar6 = 0.0, -1 < (int)local_1a0)) &&
            ((dVar6 = 0.0, (int)local_1a0 < DAT_14c9647dc &&
             (plVar28 = (longlong *)
                        ((ulonglong)((local_1a0 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_1a0 >> 0x10) * 8)),
             dVar6 = 0.0, plVar28 != (longlong *)0x0)))) &&
           ((dVar6 = 0.0, (int)plVar28[2] == local_19c &&
            ((dVar6 = 0.0, (*(uint *)(plVar28 + 1) & 0x10200000) == 0 &&
             (lVar8 = *plVar28, dVar6 = 0.0, lVar8 != 0)))))) {
          if (DAT_14cad3688 == 0) {
            local_340 = FUN_144b223ce;
            local_390 = FUN_14081d0ea;
            local_398 = &LAB_1417963e0;
            local_3a0 = &local_340;
            local_3a8 = &LAB_147a2f4c9;
            local_3b0 = &LAB_1400ea6f8;
            local_3b8 = L"Engine";
            local_3c0 = 0x200000000000;
            local_3c8 = (undefined1 *)CONCAT44(local_3c8._4_4_,0x10000004);
            local_3d0 = (ulonglong *)CONCAT44(local_3d0._4_4_,0x10);
            local_3d8 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
          }
          lVar8 = *(longlong *)(lVar8 + 0x10);
          dVar6 = 0.0;
          if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
             (dVar6 = 0.0,
             *(longlong *)
              (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
             DAT_14cad3688 + 0x30)) {
            dVar6 = dVar16 - local_240;
          }
        }
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        if (local_120 != 0) {
          FUN_1400020a8();
        }
        fVar5 = *(float *)(lVar24 + -0x94 + lVar30);
        lVar8 = *param_2;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb1dca0) &&
           (FUN_144b3d300(&DAT_14cb1dca0), DAT_14cb1dca0 == -1)) {
          local_278 = "RawGeometryFall";
          uStack_270 = CONCAT35(uStack_270._5_3_,0xf);
          uVar26 = FUN_14001a6c0(&local_278);
          DAT_14cb1dc98 = (ulonglong)uVar26;
          _Init_thread_footer(&DAT_14cb1dca0);
        }
        local_14c = 0;
        local_168 = 0;
        local_148 = 0x101;
        local_120 = 0;
        local_118 = 0x800000000;
        local_100 = 0;
        local_f8 = 0x400000000;
        local_160 = 1;
        local_154 = 0;
        local_170 = DAT_14cb1dc98;
        local_15f = 1;
        local_15d = 0;
        local_150 = 0;
        local_15c = 0;
        local_15a = 0;
        if (lVar8 != 0) {
          local_110 = *(undefined4 *)(lVar8 + 0xc);
          local_f8 = 0x400000001;
          local_168 = *(undefined8 *)(lVar8 + 0x18);
        }
        local_159 = 0x101;
        memset(&local_278,0,0x100);
        local_1a8 = 0xffffffff;
        local_278 = (char *)CONCAT44(0x3f800000,(undefined4)local_278);
        local_1d4 = 0xffffffff;
        uVar27 = FUN_1447210f0(lVar8);
        local_330 = dVar7 - (double)fVar5;
        dVar13 = 0.0;
        local_338 = dVar15 + 0.0;
        local_340 = (code *)(dVar12 + 0.0);
        local_3c8 = &DAT_14cad0f10;
        local_3d0 = &local_170;
        local_3d8 = 0;
        cVar25 = FUN_1400b50cc(uVar27,&local_278,local_378,&local_340);
        if ((((cVar25 != '\0') && (dVar13 = 0.0, local_19c != 0)) &&
            (dVar13 = 0.0, -1 < (int)local_1a0)) &&
           (((dVar13 = 0.0, (int)local_1a0 < DAT_14c9647dc &&
             (plVar28 = (longlong *)
                        ((ulonglong)((local_1a0 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_1a0 >> 0x10) * 8)),
             dVar13 = 0.0, plVar28 != (longlong *)0x0)) &&
            ((dVar13 = 0.0, (int)plVar28[2] == local_19c &&
             ((dVar13 = 0.0, (*(uint *)(plVar28 + 1) & 0x10200000) == 0 &&
              (lVar8 = *plVar28, dVar13 = 0.0, lVar8 != 0)))))))) {
          if (DAT_14cad3688 == 0) {
            local_340 = FUN_144b223ce;
            local_390 = FUN_14081d0ea;
            local_398 = &LAB_1417963e0;
            local_3a0 = &local_340;
            local_3a8 = &LAB_147a2f4c9;
            local_3b0 = &LAB_1400ea6f8;
            local_3b8 = L"Engine";
            local_3c0 = 0x200000000000;
            local_3c8 = (undefined1 *)CONCAT44(local_3c8._4_4_,0x10000004);
            local_3d0 = (ulonglong *)CONCAT44(local_3d0._4_4_,0x10);
            local_3d8 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
          }
          lVar8 = *(longlong *)(lVar8 + 0x10);
          dVar13 = 0.0;
          if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
             (dVar13 = 0.0,
             *(longlong *)
              (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
             DAT_14cad3688 + 0x30)) {
            dVar13 = dVar7 - local_240;
          }
        }
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        if (local_120 != 0) {
          FUN_1400020a8();
        }
        if (0.0 < dVar6) {
          *(double *)(lVar24 + -0x18 + lVar30) = *(double *)(lVar24 + -0x18 + lVar30) - dVar6;
        }
        if (0.0 < dVar13) {
          *(double *)(lVar24 + lVar30) = *(double *)(lVar24 + lVar30) - dVar13;
        }
      }
      lVar29 = lVar29 + 1;
      lVar30 = lVar30 + 0xa0;
    } while (lVar29 < local_308);
  }
  FUN_147e89a16(local_380,local_328);
  if (local_310 != 0) {
    FUN_1400020a8();
  }
  if (local_320 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438405bb FUN_1438405bb body=91 status=ok
// SIG undefined FUN_1438405bb(void)

void FUN_1438405bb(void)

{
  if (DAT_14cb1daf0 != 0) {
    if (DAT_14cb1dae8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb1dae8)(DAT_14cb1dae8,0);
    FUN_1446efa72(&DAT_14cb1dae8,0,0,0x10);
    DAT_14cb1daf0 = 0;
  }
  if (DAT_14cb1dae8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143840616 FUN_143840616 body=91 status=ok
// SIG undefined FUN_143840616(void)

void FUN_143840616(void)

{
  if (DAT_14cb1db00 != 0) {
    if (DAT_14cb1daf8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb1daf8)(DAT_14cb1daf8,0);
    FUN_1446efa72(&DAT_14cb1daf8,0,0,0x10);
    DAT_14cb1db00 = 0;
  }
  if (DAT_14cb1daf8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143840671 FUN_143840671 body=160 status=ok
// SIG undefined FUN_143840671(void)

void FUN_143840671(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    puVar3 = &DAT_14c846480;
    if (*(longlong *)(param_2 + 0x1c8) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x240);
    }
    puVar4 = local_78;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_88[0] = param_2;
    if (*(int *)(param_3 + 8) != 0) {
      plVar2 = DAT_14cb1dae8;
      if (DAT_14cb1daf0 == 0) {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1,local_88,param_3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143840712 FUN_143840712 body=160 status=ok
// SIG undefined FUN_143840712(void)

void FUN_143840712(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    puVar3 = &DAT_14c846480;
    if (*(longlong *)(param_2 + 0x1c8) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x240);
    }
    puVar4 = local_78;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_88[0] = param_2;
    if (*(int *)(param_3 + 8) != 0) {
      plVar2 = DAT_14cb1daf8;
      if (DAT_14cb1db00 == 0) {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1,local_88,param_3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438407b3 FUN_1438407b3 body=55 status=ok
// SIG undefined FUN_1438407b3(void)

void FUN_1438407b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1db20 == 0) {
    uVar1 = FUN_1410766fc();
    DAT_14cb1db20 = FUN_14171c317(FUN_146424748,uVar1,L"ENavCostDisplay");
  }
  return;
}



// FUNCTION 1438407ea FUN_1438407ea body=5148 status=ok
// SIG undefined FUN_1438407ea(void)

void FUN_1438407ea(longlong param_1,double param_2)

{
  double dVar1;
  byte bVar2;
  undefined4 uVar3;
  void *pvVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  void **ppvVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *plVar24;
  double *pdVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  double *pdVar29;
  longlong lVar30;
  undefined8 *puVar31;
  int iVar32;
  double *pdVar33;
  char cVar34;
  int iVar35;
  undefined4 *puVar36;
  bool bVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  int local_30c;
  double *local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  void **local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  void *local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  double local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180 [3];
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if ((((*(int *)(param_1 + 0xa0) == 0) || (uVar19 = *(uint *)(param_1 + 0x9c), (int)uVar19 < 0)) ||
      (DAT_14c9647dc <= (int)uVar19)) ||
     (((plVar24 = (longlong *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
       plVar24 == (longlong *)0x0 || ((int)plVar24[2] != *(int *)(param_1 + 0xa0))) ||
      (((*(uint *)(plVar24 + 1) & 0x10200000) != 0 || (lVar30 = *plVar24, lVar30 == 0))))))
  goto LAB_1438408c4;
  lVar20 = FUN_1459938ca();
  if (((*(int *)(*(longlong *)(lVar30 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8)
       != lVar20 + 0x30)) || (iVar26 = *(int *)(param_1 + 0x30), 100 < iVar26 || iVar26 == 0))
  goto LAB_1438408c4;
  local_2e8 = (void **)(param_1 + 0x28);
  pdVar25 = *local_2e8;
  local_228 = 0;
  uStack_220 = 0;
  if (iVar26 < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar26 + 2);
  }
  iVar35 = 0;
  uVar19 = 0;
  if (iVar26 != -2) {
    FUN_143842b02(&local_228);
    iVar35 = (uint)uStack_220;
    uVar19 = uStack_220._4_4_;
  }
  local_268 = *(undefined4 *)(pdVar25 + 4);
  uStack_264 = *(undefined4 *)((longlong)pdVar25 + 0x24);
  uStack_260 = *(undefined4 *)(pdVar25 + 5);
  uStack_25c = *(undefined4 *)((longlong)pdVar25 + 0x2c);
  local_278 = pdVar25[2];
  uStack_270 = *(undefined4 *)(pdVar25 + 3);
  uStack_26c = *(undefined4 *)((longlong)pdVar25 + 0x1c);
  local_288 = *pdVar25;
  uStack_280 = pdVar25[1];
  local_258 = (undefined4)DAT_14c8464e0;
  uStack_254 = DAT_14c8464e0._4_4_;
  uStack_250 = (undefined4)DAT_14c8464e8;
  uStack_24c = DAT_14c8464e8._4_4_;
  local_248 = DAT_14c8464f0;
  local_240 = (undefined4)DAT_14c8464e0;
  uStack_23c = DAT_14c8464e0._4_4_;
  uStack_238 = (undefined4)DAT_14c8464e8;
  uStack_234 = DAT_14c8464e8._4_4_;
  local_230 = DAT_14c8464f0;
  uStack_220 = CONCAT44(uStack_220._4_4_,iVar35 + 1U);
  if (uVar19 < iVar35 + 1U) {
    FUN_143842be6(&local_228,iVar35);
  }
  puVar27 = &local_288;
  puVar31 = (undefined8 *)((longlong)iVar35 * 0x60 + local_228);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar31 = *puVar27;
    puVar27 = puVar27 + 1;
    puVar31 = puVar31 + 1;
  }
  if ((2 < *(int *)(param_1 + 0x30)) && (iVar26 = *(int *)(param_1 + 0x170), 0 < iVar26)) {
    dVar7 = param_2 * param_2;
    pdVar25 = pdVar25 + 6;
    iVar32 = 0;
    iVar35 = 1;
    local_300 = (double)((ulonglong)local_300 & 0xffffffff00000000);
    iVar28 = 0;
    do {
      bVar2 = *(byte *)(pdVar25 + 4);
      local_30c = iVar32;
      uVar15 = uStack_220;
      while ((bVar2 & 4) != 0) {
        local_288 = *pdVar25;
        uStack_280 = pdVar25[1];
        local_278 = pdVar25[2];
        uStack_270 = *(undefined4 *)(pdVar25 + 3);
        uStack_26c = *(undefined4 *)((longlong)pdVar25 + 0x1c);
        local_268 = *(undefined4 *)(pdVar25 + 4);
        uStack_264 = *(undefined4 *)((longlong)pdVar25 + 0x24);
        uStack_260 = *(undefined4 *)(pdVar25 + 5);
        uStack_25c = *(undefined4 *)((longlong)pdVar25 + 0x2c);
        uStack_220._0_4_ = (uint)uVar15;
        lVar20 = (longlong)(int)(uint)uStack_220;
        uStack_220._0_4_ = (uint)uStack_220 + 1;
        uStack_220._4_4_ = (uint)(uVar15 >> 0x20);
        uVar19 = (uint)uStack_220;
        if (uStack_220._4_4_ < (uint)uStack_220) {
          FUN_143842be6(&local_228,uVar15 & 0xffffffff);
          uVar19 = (uint)uStack_220;
        }
        lVar20 = lVar20 * 0x60;
        puVar27 = (undefined8 *)(local_228 + 0x20 + lVar20);
        *puVar27 = CONCAT44(uStack_264,local_268);
        puVar27[1] = CONCAT44(uStack_25c,uStack_260);
        pdVar29 = (double *)(local_228 + 0x10 + lVar20);
        *pdVar29 = local_278;
        pdVar29[1] = (double)CONCAT44(uStack_26c,uStack_270);
        *(double *)(local_228 + lVar20) = local_288;
        ((double *)(local_228 + lVar20))[1] = uStack_280;
        puVar27 = (undefined8 *)(local_228 + 0x30 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(local_228 + 0x40 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(local_228 + 0x50 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        local_288 = pdVar25[6];
        uStack_280 = pdVar25[7];
        local_278 = pdVar25[8];
        uStack_270 = *(undefined4 *)(pdVar25 + 9);
        uStack_26c = *(undefined4 *)((longlong)pdVar25 + 0x4c);
        local_268 = *(undefined4 *)(pdVar25 + 10);
        uStack_264 = *(undefined4 *)((longlong)pdVar25 + 0x54);
        uStack_260 = *(undefined4 *)(pdVar25 + 0xb);
        uStack_25c = *(undefined4 *)((longlong)pdVar25 + 0x5c);
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar19 + 1);
        if (uStack_220._4_4_ < uVar19 + 1) {
          FUN_143842be6(&local_228,uVar19);
        }
        lVar20 = (longlong)(int)uVar19 * 0x60;
        puVar27 = (undefined8 *)(local_228 + 0x20 + lVar20);
        *puVar27 = CONCAT44(uStack_264,local_268);
        puVar27[1] = CONCAT44(uStack_25c,uStack_260);
        pdVar29 = (double *)(local_228 + 0x10 + lVar20);
        *pdVar29 = local_278;
        pdVar29[1] = (double)CONCAT44(uStack_26c,uStack_270);
        puVar36 = (undefined4 *)(local_228 + lVar20);
        *puVar36 = (undefined4)local_288;
        puVar36[1] = local_288._4_4_;
        puVar36[2] = (undefined4)uStack_280;
        puVar36[3] = uStack_280._4_4_;
        puVar27 = (undefined8 *)(local_228 + 0x30 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(local_228 + 0x40 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(local_228 + 0x50 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        iVar35 = iVar35 + 2;
        iVar18 = *(int *)(param_1 + 0x30) + -1;
        if ((iVar18 <= iVar35) || (iVar26 = *(int *)(param_1 + 0x170), iVar26 <= iVar28))
        goto LAB_143841024;
        pdVar29 = pdVar25 + 0x10;
        pdVar25 = pdVar25 + 0xc;
        uVar15 = uStack_220;
        bVar2 = *(byte *)pdVar29;
      }
      local_308 = pdVar25 + 4;
      pdVar29 = (double *)((longlong)iVar28 * 0x38 + *(longlong *)(param_1 + 0x168));
      iVar32 = iVar28;
      uStack_220 = uVar15;
      do {
        fVar38 = (float)FUN_1402b5c34(pdVar25,pdVar29,pdVar29 + 3);
        uVar15 = uStack_220;
        if (fVar38 <= 9.999999e-09) {
          dVar41 = *pdVar29 - *pdVar25;
          dVar42 = pdVar29[1] - pdVar25[1];
          dVar11 = pdVar29[2] - pdVar25[2];
          dVar41 = dVar11 * dVar11 + dVar42 * dVar42 + dVar41 * dVar41;
          dVar11 = pdVar29[3] - *pdVar25;
          dVar43 = pdVar29[4] - pdVar25[1];
          dVar42 = pdVar29[5] - pdVar25[2];
          dVar11 = dVar42 * dVar42 + dVar43 * dVar43 + dVar11 * dVar11;
          if ((dVar41 <= dVar7) || (dVar11 <= dVar7)) {
            uVar21 = (ulonglong)(dVar41 < dVar11);
            uVar22 = (ulonglong)(dVar11 <= dVar41);
            dVar10 = SQRT((pdVar29[5] - pdVar29[2]) * (pdVar29[5] - pdVar29[2]) +
                          (pdVar29[4] - pdVar29[1]) * (pdVar29[4] - pdVar29[1]) +
                          (pdVar29[3] - *pdVar29) * (pdVar29[3] - *pdVar29)) * 0.5;
            dVar41 = pdVar29[uVar22 * 3];
            dVar11 = pdVar29[uVar22 * 3 + 1];
            dVar42 = pdVar29[uVar22 * 3 + 2];
            dVar43 = pdVar29[uVar21 * 3];
            uVar39 = SUB84(dVar43,0);
            uVar40 = (undefined4)((ulonglong)dVar43 >> 0x20);
            pdVar33 = (double *)pdVar29[uVar21 * 3 + 1];
            uVar44 = SUB84(pdVar33,0);
            uVar46 = (undefined4)((ulonglong)pdVar33 >> 0x20);
            dVar1 = pdVar29[uVar21 * 3 + 2];
            uVar47 = SUB84(dVar1,0);
            uVar48 = (undefined4)((ulonglong)dVar1 >> 0x20);
            dVar9 = dVar1 - dVar42;
            dVar8 = (double)pdVar33 - dVar11;
            dVar6 = dVar43 - dVar41;
            dVar5 = dVar9 * dVar9 + dVar6 * dVar6 + dVar8 * dVar8;
            if ((dVar5 != 1.0) || (NAN(dVar5))) {
              if (9.99999993922529e-09 <= dVar5) {
                dVar5 = 1.0 / SQRT(dVar5);
                dVar9 = dVar9 * dVar5;
                dVar8 = dVar8 * dVar5;
                dVar6 = dVar6 * dVar5;
              }
              else {
                dVar6 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dVar9 = DAT_14c8464f0;
              }
            }
            dVar5 = pdVar29[6];
            local_288 = *local_308;
            uStack_280 = local_308[1];
            lVar20 = (longlong)(int)(uint)uStack_220;
            uStack_220._0_4_ = (uint)uStack_220 + 1;
            local_2f0 = dVar7;
            if (uStack_220._4_4_ < (uint)uStack_220) {
              local_308 = pdVar33;
              local_300 = dVar43;
              local_2f8 = dVar1;
              FUN_143842be6(&local_228,uVar15 & 0xffffffff);
              uVar44 = SUB84(local_308,0);
              uVar46 = (undefined4)((ulonglong)local_308 >> 0x20);
              uVar47 = SUB84(local_2f8,0);
              uVar48 = (undefined4)((ulonglong)local_2f8 >> 0x20);
              uVar39 = SUB84(local_300,0);
              uVar40 = (undefined4)((ulonglong)local_300 >> 0x20);
            }
            if (param_2 <= dVar10) {
              dVar10 = param_2;
            }
            lVar20 = lVar20 * 0x60;
            *(double *)(local_228 + lVar20) = dVar10 * dVar6 + dVar41;
            *(double *)(local_228 + 8 + lVar20) = dVar8 * dVar10 + dVar11;
            *(double *)(local_228 + 0x10 + lVar20) = dVar9 * dVar10 + dVar42;
            *(double *)(local_228 + 0x18 + lVar20) = dVar5;
            pdVar29 = (double *)(local_228 + 0x20 + lVar20);
            *pdVar29 = local_288;
            pdVar29[1] = uStack_280;
            *(double *)(local_228 + 0x30 + lVar20) = dVar41;
            *(double *)(local_228 + 0x38 + lVar20) = dVar11;
            *(double *)(local_228 + 0x40 + lVar20) = dVar42;
            *(ulonglong *)(local_228 + 0x48 + lVar20) = CONCAT44(uVar40,uVar39);
            *(ulonglong *)(local_228 + 0x50 + lVar20) = CONCAT44(uVar46,uVar44);
            *(ulonglong *)(local_228 + 0x58 + lVar20) = CONCAT44(uVar48,uVar47);
            iVar28 = iVar32 + 1;
            iVar32 = local_30c + 1;
            local_300 = (double)CONCAT44(local_300._4_4_,
                                         (int)CONCAT71((int7)((ulonglong)local_228 >> 8),1));
            dVar7 = local_2f0;
            goto LAB_14384100b;
          }
          iVar28 = iVar28 + 1;
          break;
        }
        pdVar29 = pdVar29 + 7;
        iVar32 = iVar32 + 1;
      } while (iVar32 < iVar26);
      if (local_30c == 0) {
        local_288 = *pdVar25;
        uStack_280 = pdVar25[1];
        local_278 = pdVar25[2];
        uStack_270 = *(undefined4 *)(pdVar25 + 3);
        uStack_26c = *(undefined4 *)((longlong)pdVar25 + 0x1c);
        local_268 = *(undefined4 *)(pdVar25 + 4);
        uStack_264 = *(undefined4 *)((longlong)pdVar25 + 0x24);
        uStack_260 = *(undefined4 *)(pdVar25 + 5);
        uStack_25c = *(undefined4 *)((longlong)pdVar25 + 0x2c);
        lVar20 = (longlong)(int)(uint)uStack_220;
        uStack_220._0_4_ = (uint)uStack_220 + 1;
        if (uStack_220._4_4_ < (uint)uStack_220) {
          FUN_143842be6(&local_228,uVar15 & 0xffffffff);
        }
        lVar20 = lVar20 * 0x60;
        puVar27 = (undefined8 *)(local_228 + 0x20 + lVar20);
        *puVar27 = CONCAT44(uStack_264,local_268);
        puVar27[1] = CONCAT44(uStack_25c,uStack_260);
        pdVar29 = (double *)(local_228 + 0x10 + lVar20);
        *pdVar29 = local_278;
        pdVar29[1] = (double)CONCAT44(uStack_26c,uStack_270);
        *(double *)(local_228 + lVar20) = local_288;
        ((double *)(local_228 + lVar20))[1] = uStack_280;
        puVar27 = (undefined8 *)(local_228 + 0x30 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(local_228 + 0x40 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(local_228 + 0x50 + lVar20);
        *puVar27 = 0;
        puVar27[1] = 0;
      }
      iVar35 = iVar35 + 1;
      pdVar25 = pdVar25 + 6;
      iVar32 = 0;
LAB_14384100b:
      iVar18 = *(int *)(param_1 + 0x30) + -1;
    } while ((iVar35 < iVar18) && (iVar26 = *(int *)(param_1 + 0x170), iVar28 < iVar26));
LAB_143841024:
    ppvVar16 = local_2e8;
    if (((ulonglong)local_300 & 1) != 0) {
      if ((2 < (int)(uint)uStack_220) && ((*(byte *)(lVar30 + 0x6b9) & 2) != 0)) {
        local_298 = (void *)0x0;
        uStack_290 = 0;
        FUN_147e81cb6(&local_298,(uint)uStack_220 + 2);
        uVar15 = uStack_220;
        lVar30 = *(longlong *)(param_1 + 0x28);
        lVar20 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
        pdVar25 = (double *)(lVar30 + -0x30 + lVar20);
        pdVar29 = (double *)(lVar30 + -0x20 + lVar20);
        puVar36 = (undefined4 *)(lVar30 + -0x10 + lVar20);
        local_268 = *puVar36;
        uStack_264 = puVar36[1];
        uStack_260 = puVar36[2];
        uStack_25c = puVar36[3];
        local_278 = *pdVar29;
        uStack_270 = *(undefined4 *)(pdVar29 + 1);
        uStack_26c = *(undefined4 *)((longlong)pdVar29 + 0xc);
        local_288 = *pdVar25;
        uStack_280 = pdVar25[1];
        local_248 = DAT_14c8464f0;
        local_258 = (undefined4)DAT_14c8464e0;
        uStack_254 = DAT_14c8464e0._4_4_;
        uStack_250 = (undefined4)DAT_14c8464e8;
        uStack_24c = DAT_14c8464e8._4_4_;
        local_230 = DAT_14c8464f0;
        local_240 = (undefined4)DAT_14c8464e0;
        uStack_23c = DAT_14c8464e0._4_4_;
        uStack_238 = (undefined4)DAT_14c8464e8;
        uStack_234 = DAT_14c8464e8._4_4_;
        local_308 = (double *)CONCAT44(local_308._4_4_,(uint)uStack_220);
        lVar30 = (longlong)(int)(uint)uStack_220;
        uVar19 = (uint)uStack_220 + 1;
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar19);
        if (uStack_220._4_4_ < uVar19) {
          FUN_143842be6(&local_228,uVar15 & 0xffffffff);
          local_308 = (double *)CONCAT44(local_308._4_4_,(uint)uStack_220 + -1);
        }
        puVar27 = &local_288;
        puVar31 = (undefined8 *)(lVar30 * 0x60 + local_228);
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar31 = *puVar27;
          puVar27 = puVar27 + 1;
          puVar31 = puVar31 + 1;
        }
        iVar28 = 200;
        iVar35 = 1;
        iVar32 = 0;
        iVar26 = 0;
        do {
          uVar19 = *(uint *)(local_228 + 0x20 + (longlong)iVar26 * 0x60);
          lVar30 = (longlong)iVar32;
          uVar45 = *(uint *)(local_228 + 0x20 + lVar30 * 0x60);
          cVar17 = (char)(uVar19 >> 8);
          cVar34 = (char)(uVar45 >> 8);
          if ((uVar45 & 4) == 0) {
            iVar18 = iVar26;
            if (((uVar19 & 4) == 0) &&
               (local_300 = (double)CONCAT44(local_300._4_4_,uVar45), local_30c = iVar26,
               cVar34 == cVar17)) {
LAB_143841367:
              local_2f0 = (double)CONCAT44(local_2f0._4_4_,iVar35);
              local_278 = DAT_14c8464f0;
              local_288 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_280 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_f8 = *(double *)(local_228 + 0x10 + lVar30 * 0x60);
              pdVar25 = (double *)(local_228 + lVar30 * 0x60);
              local_108 = *pdVar25;
              uStack_100 = pdVar25[1];
              local_118 = *(double *)(local_228 + 0x10 + (longlong)iVar35 * 0x60);
              pdVar25 = (double *)(local_228 + (longlong)iVar35 * 0x60);
              local_128 = *pdVar25;
              dStack_120 = pdVar25[1];
              dVar7 = 1.7976922776554302e+308;
              lVar30 = (longlong)*(int *)(param_1 + 0x170);
              if (lVar30 < 1) {
LAB_143841468:
                uVar47 = SUB84(DAT_14c8464f0,0);
                uVar48 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                uVar39 = (undefined4)DAT_14c8464e0;
                uVar40 = DAT_14c8464e0._4_4_;
                uVar44 = (undefined4)DAT_14c8464e8;
                uVar46 = DAT_14c8464e8._4_4_;
LAB_143841482:
                uVar15 = uStack_220;
                if (((ABS((double)CONCAT44(uVar40,uVar39)) <= 9.999999747378752e-05) &&
                    (ABS((double)CONCAT44(uVar46,uVar44)) <= 9.999999747378752e-05)) &&
                   (ABS((double)CONCAT44(uVar48,uVar47)) <= 9.999999747378752e-05))
                goto LAB_143841b3e;
                iVar18 = local_30c;
                if (iVar32 == local_30c) {
                  uVar3 = *(undefined4 *)(local_228 + 0x20 + (longlong)local_30c * 0x60);
                  iVar26 = (uint)uStack_220;
                  uVar19 = (uint)uStack_220 + 1;
                  uStack_220 = CONCAT44(uStack_220._4_4_,uVar19);
                  if (uStack_220._4_4_ < uVar19) {
                    FUN_143842be6(&local_228,uVar15 & 0xffffffff);
                  }
                  iVar18 = local_30c + 1;
                  lVar30 = (longlong)iVar18 * 0x60;
                  memmove((void *)(local_228 + lVar30 + 0x60),(void *)(local_228 + lVar30),
                          (ulonglong)(uint)(iVar26 - iVar18) * 0x60);
                  *(ulonglong *)(local_228 + lVar30) = CONCAT44(uVar40,uVar39);
                  *(ulonglong *)(local_228 + 8 + lVar30) = CONCAT44(uVar46,uVar44);
                  *(ulonglong *)(local_228 + 0x10 + lVar30) = CONCAT44(uVar48,uVar47);
                  *(undefined8 *)(local_228 + 0x18 + lVar30) = 0;
                  *(undefined4 *)(local_228 + 0x20 + lVar30) = uVar3;
                  *(undefined4 *)(local_228 + 0x24 + lVar30) = 0;
                  *(undefined8 *)(local_228 + 0x28 + lVar30) = 0;
                  *(double *)(local_228 + 0x40 + lVar30) = local_2a8;
                  pdVar25 = (double *)(local_228 + 0x30 + lVar30);
                  *pdVar25 = local_2b8;
                  pdVar25[1] = dStack_2b0;
                  *(double *)(local_228 + 0x58 + lVar30) = local_2c8;
                  puVar36 = (undefined4 *)(local_228 + 0x48 + lVar30);
                  *puVar36 = (undefined4)local_2d8;
                  puVar36[1] = local_2d8._4_4_;
                  puVar36[2] = (undefined4)uStack_2d0;
                  puVar36[3] = uStack_2d0._4_4_;
                  local_308 = (double *)CONCAT44(local_308._4_4_,(uint)uStack_220 + -1);
                }
                iVar35 = local_2f0._0_4_;
                iVar26 = iVar18;
              }
              else {
                pdVar25 = *(double **)(param_1 + 0x168);
                pdVar29 = (double *)0x0;
                pdVar33 = (double *)0x0;
                uVar39 = 0xffffffff;
                uVar19 = 0x7fefffff;
                uVar40 = 0xffffffff;
                do {
                  uVar45 = (uint)((ulonglong)dVar7 >> 0x20);
                  dVar7 = (double)((ulonglong)uVar19 << 0x20);
                  if (9.99999905104687e-09 <= (double)CONCAT44(uVar19,uVar39) &&
                      (double)CONCAT44(uVar19,uVar39) != 9.99999905104687e-09) {
                    fVar38 = (float)FUN_1402b5c34(&local_108,pdVar25,pdVar25 + 3);
                    dVar41 = (double)fVar38;
                    dVar7 = (double)CONCAT44(uVar19,SUB84(dVar41,0));
                    if (dVar41 <= (double)CONCAT44(uVar19,uVar39) &&
                        (double)CONCAT44(uVar19,uVar39) != dVar41) {
                      pdVar29 = pdVar25;
                      uVar39 = SUB84(dVar41,0);
                      dVar7 = dVar41;
                    }
                  }
                  uVar19 = (uint)((ulonglong)dVar7 >> 0x20);
                  dVar7 = (double)((ulonglong)uVar45 << 0x20);
                  if (9.99999905104687e-09 <= (double)CONCAT44(uVar45,uVar40) &&
                      (double)CONCAT44(uVar45,uVar40) != 9.99999905104687e-09) {
                    fVar38 = (float)FUN_1402b5c34(&local_128,pdVar25,pdVar25 + 3);
                    dVar41 = (double)fVar38;
                    dVar7 = (double)CONCAT44(uVar45,SUB84(dVar41,0));
                    if (dVar41 <= (double)CONCAT44(uVar45,uVar40) &&
                        (double)CONCAT44(uVar45,uVar40) != dVar41) {
                      pdVar33 = pdVar25;
                      uVar40 = SUB84(dVar41,0);
                      dVar7 = dVar41;
                    }
                  }
                  pdVar25 = pdVar25 + 7;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
                if (pdVar33 == (double *)0x0 || pdVar29 == (double *)0x0) goto LAB_143841468;
                pdVar25 = pdVar29 + 7;
                if (9.99999905104687e-09 < (double)CONCAT44(uVar19,uVar39)) {
                  pdVar25 = pdVar29;
                }
                if (pdVar25 != pdVar33) {
                  dVar42 = local_f8 - local_118;
                  dVar41 = uStack_100 - dStack_120;
                  dVar7 = local_108 - local_128;
                  dVar11 = dVar42 * dVar42 + dVar7 * dVar7 + dVar41 * dVar41;
                  if ((dVar11 != 1.0) || (NAN(dVar11))) {
                    if (9.99999993922529e-09 <= dVar11) {
                      dVar11 = 1.0 / SQRT(dVar11);
                      dVar42 = dVar42 * dVar11;
                      dVar41 = dVar41 * dVar11;
                      dVar7 = dVar7 * dVar11;
                    }
                    else {
                      dVar7 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                      dVar41 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                      dVar42 = DAT_14c8464f0;
                    }
                  }
                  local_f8 = local_f8 + dVar42 * param_2;
                  uStack_100 = uStack_100 + dVar41 * param_2;
                  local_108 = local_108 + dVar7 * param_2;
                  local_118 = local_118 - dVar42 * param_2;
                  dStack_120 = dStack_120 - dVar41 * param_2;
                  local_128 = local_128 - dVar7 * param_2;
                  for (; pdVar25 <= pdVar33; pdVar25 = pdVar25 + 7) {
                    local_138 = pdVar25[2];
                    local_148 = *pdVar25;
                    dStack_140 = pdVar25[1];
                    local_158 = pdVar25[5];
                    local_168 = pdVar25[3];
                    dStack_160 = pdVar25[4];
                    local_328 = &local_288;
                    cVar17 = FUN_1467f832a(&local_148,&local_168,&local_108,&local_128);
                    if (cVar17 == '\0') {
                      local_1a8 = pdVar25[2];
                      local_2f8 = pdVar25[5];
                      local_1b8 = *pdVar25;
                      dStack_1b0 = pdVar25[1];
                      local_2e0 = pdVar25[4];
                      local_1d8 = pdVar25[3];
                      dVar7 = SQRT((local_1a8 - local_2f8) * (local_1a8 - local_2f8) +
                                   (local_1b8 - local_1d8) * (local_1b8 - local_1d8) +
                                   (dStack_1b0 - local_2e0) * (dStack_1b0 - local_2e0)) * 0.5;
                      dVar41 = param_2;
                      if (dVar7 <= param_2) {
                        dVar41 = dVar7;
                      }
                      dVar41 = dVar41 * 0.10000000149011612;
                      dVar7 = local_2f8 - local_1a8;
                      dVar42 = local_2e0 - dStack_1b0;
                      dVar11 = local_1d8 - local_1b8;
                      dVar43 = dVar7 * dVar7 + dVar11 * dVar11 + dVar42 * dVar42;
                      if ((dVar43 != 1.0) || (NAN(dVar43))) {
                        if (9.99999993922529e-09 <= dVar43) {
                          dVar43 = 1.0 / SQRT(dVar43);
                          dVar7 = dVar7 * dVar43;
                          dVar42 = dVar42 * dVar43;
                          dVar11 = dVar11 * dVar43;
                        }
                        else {
                          dVar11 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                          dVar42 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                          dVar7 = DAT_14c8464f0;
                        }
                      }
                      local_1a8 = local_1a8 + dVar7 * dVar41;
                      dStack_1b0 = dStack_1b0 + dVar42 * dVar41;
                      local_1b8 = local_1b8 + dVar11 * dVar41;
                      dVar43 = pdVar25[2] - local_2f8;
                      dVar11 = pdVar25[1] - local_2e0;
                      dVar42 = *pdVar25 - local_1d8;
                      dVar7 = dVar43 * dVar43 + dVar42 * dVar42 + dVar11 * dVar11;
                      if ((dVar7 != 1.0) || (NAN(dVar7))) {
                        if (9.99999993922529e-09 <= dVar7) {
                          dVar7 = 1.0 / SQRT(dVar7);
                          dVar43 = dVar43 * dVar7;
                          dVar11 = dVar11 * dVar7;
                          dVar42 = dVar42 * dVar7;
                        }
                        else {
                          dVar42 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                          dVar11 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                          dVar43 = DAT_14c8464f0;
                        }
                      }
                      local_1c8 = local_2f8 + dVar43 * dVar41;
                      dStack_1d0 = local_2e0 + dVar11 * dVar41;
                      local_1d8 = local_1d8 + dVar42 * dVar41;
                      local_1f8 = local_128;
                      dStack_1f0 = dStack_120;
                      local_1e8 = local_118;
                      local_208 = local_f8;
                      local_218 = (undefined4)local_108;
                      uStack_214 = local_108._4_4_;
                      uStack_210 = (undefined4)uStack_100;
                      uStack_20c = uStack_100._4_4_;
                      local_320 = &local_198;
                      local_328 = local_180;
                      local_168 = local_1d8;
                      dStack_160 = dStack_1d0;
                      local_158 = local_1c8;
                      local_148 = local_1b8;
                      dStack_140 = dStack_1b0;
                      local_138 = local_1a8;
                      FUN_1467f7b70(&local_218,&local_1f8,&local_1d8,&local_1b8);
                      uVar39 = (undefined4)local_198;
                      uVar40 = (undefined4)((ulonglong)local_198 >> 0x20);
                      uVar44 = (undefined4)local_190;
                      uVar46 = (undefined4)((ulonglong)local_190 >> 0x20);
                      uVar47 = (undefined4)local_188;
                      uVar48 = (undefined4)((ulonglong)local_188 >> 0x20);
                      local_2b8 = *pdVar25;
                      dStack_2b0 = pdVar25[1];
                      local_2a8 = pdVar25[2];
                      local_2d8 = pdVar25[3];
                      uStack_2d0 = pdVar25[4];
                      local_2c8 = pdVar25[5];
                      goto LAB_143841482;
                    }
                  }
                }
                iVar18 = local_2f0._0_4_;
                iVar35 = local_2f0._0_4_;
                iVar26 = local_30c;
              }
              if (((ulonglong)local_300 & 4) != 0) goto LAB_1438417ed;
            }
            iVar26 = iVar18;
            FUN_1438428b0(&local_298,&local_228,iVar32);
            iVar35 = iVar26 + 1;
            iVar32 = iVar26;
          }
          else {
            local_300 = (double)CONCAT44(local_300._4_4_,uVar45);
            FUN_1438428b0(&local_298,&local_228,iVar32);
            iVar26 = iVar32 + 1;
            FUN_1438428b0(&local_298,&local_228,iVar26);
            iVar35 = iVar32 + 2;
            iVar32 = iVar26;
            if (((uVar19 & 4) == 0) && (cVar34 == cVar17)) {
              lVar30 = (longlong)iVar26;
              local_30c = iVar26;
              goto LAB_143841367;
            }
          }
LAB_1438417ed:
          if ((int)local_308 < iVar35) {
            FUN_1438428b0(&local_298,&local_228,iVar32);
            FUN_1438428b0(&local_298,&local_228,(ulonglong)local_308 & 0xffffffff);
            goto LAB_143841b92;
          }
          iVar28 = iVar28 + -1;
          if ((iVar28 == 0) || (iVar32 == iVar35)) goto LAB_143841b3e;
        } while( true );
      }
      lVar30 = *(longlong *)(param_1 + 0x28);
      lVar20 = (longlong)iVar18 * 0x30;
      local_288 = *(double *)(lVar30 + lVar20);
      uStack_280 = ((double *)(lVar30 + lVar20))[1];
      pdVar25 = (double *)(lVar30 + 0x10 + lVar20);
      local_278 = *pdVar25;
      uStack_270 = *(undefined4 *)(pdVar25 + 1);
      uStack_26c = *(undefined4 *)((longlong)pdVar25 + 0xc);
      puVar36 = (undefined4 *)(lVar30 + 0x20 + lVar20);
      local_268 = *puVar36;
      uStack_264 = puVar36[1];
      uStack_260 = puVar36[2];
      uStack_25c = puVar36[3];
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (*(int *)(param_1 + 0x34) < 0) {
        FUN_147e81cb6(local_2e8,0);
      }
      if (0 < (int)(uint)uStack_220) {
        lVar30 = 0;
        lVar20 = 0;
        iVar26 = (uint)uStack_220;
        do {
          puVar36 = (undefined4 *)(local_228 + lVar30);
          iVar35 = *(int *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = iVar35 + 1U;
          if (*(uint *)(param_1 + 0x34) < iVar35 + 1U) {
            FUN_147e81d28(ppvVar16,iVar35);
            iVar26 = (uint)uStack_220;
          }
          pvVar4 = *ppvVar16;
          lVar23 = (longlong)iVar35 * 0x30;
          uVar39 = *puVar36;
          uVar40 = puVar36[1];
          uVar44 = puVar36[2];
          uVar46 = puVar36[3];
          uVar12 = *(undefined8 *)(puVar36 + 4);
          uVar13 = *(undefined8 *)(puVar36 + 6);
          uVar14 = *(undefined8 *)(puVar36 + 10);
          puVar27 = (undefined8 *)((longlong)pvVar4 + lVar23 + 0x20);
          *puVar27 = *(undefined8 *)(puVar36 + 8);
          puVar27[1] = uVar14;
          puVar27 = (undefined8 *)((longlong)pvVar4 + lVar23 + 0x10);
          *puVar27 = uVar12;
          puVar27[1] = uVar13;
          puVar36 = (undefined4 *)((longlong)pvVar4 + lVar23);
          *puVar36 = uVar39;
          puVar36[1] = uVar40;
          puVar36[2] = uVar44;
          puVar36[3] = uVar46;
          lVar20 = lVar20 + 1;
          lVar30 = lVar30 + 0x60;
        } while (lVar20 < iVar26);
      }
      iVar26 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar26 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar26 + 1U) {
        FUN_147e81d28(ppvVar16,iVar26);
      }
      pvVar4 = *ppvVar16;
      lVar30 = (longlong)iVar26 * 0x30;
      puVar27 = (undefined8 *)((longlong)pvVar4 + lVar30 + 0x20);
      *puVar27 = CONCAT44(uStack_264,local_268);
      puVar27[1] = CONCAT44(uStack_25c,uStack_260);
      pdVar25 = (double *)((longlong)pvVar4 + lVar30 + 0x10);
      *pdVar25 = local_278;
      pdVar25[1] = (double)CONCAT44(uStack_26c,uStack_270);
      *(double *)((longlong)pvVar4 + lVar30) = local_288;
      ((double *)((longlong)pvVar4 + lVar30))[1] = uStack_280;
    }
  }
  goto LAB_143841146;
LAB_143841b3e:
  bVar37 = (longlong)uStack_290 < 0;
  uStack_290 = uStack_290 & 0xffffffff00000000;
  if (bVar37) {
    FUN_147e81cb6(&local_298,0);
  }
LAB_143841b92:
  pvVar4 = local_298;
  lVar30 = (longlong)(int)uStack_290;
  if (local_2e8 != &local_298 && lVar30 != 0) {
    *(int *)(param_1 + 0x30) = (int)uStack_290;
    FUN_147e8fc28(local_2e8,uStack_290 & 0xffffffff,*(undefined4 *)(param_1 + 0x34));
    memcpy(*(void **)(param_1 + 0x28),pvVar4,lVar30 * 0x30);
  }
  if (local_298 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143841146:
  if (local_228 != 0) {
    FUN_1400020a8();
  }
LAB_1438408c4:
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143841c08 FUN_143841c08 body=148 status=ok
// SIG undefined FUN_143841c08(void)

void FUN_143841c08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = *(undefined8 *)(param_1 + -0x200);
  puVar3 = (undefined8 *)(param_1 + -0x68);
  puVar4 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(param_1 + 0x388) != 0) {
    plVar2 = DAT_14cb1dae8;
    if (DAT_14cb1daf0 == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2 + 0x88,local_88,param_1 + 0x380);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143841c9e FUN_143841c9e body=53 status=ok
// SIG undefined FUN_143841c9e(void)

void FUN_143841c9e(longlong param_1)

{
  ulonglong uVar1;
  
  FUN_140136774();
  if (-1 < *(longlong *)(param_1 + 0x170)) {
    uVar1 = *(longlong *)(param_1 + 0x170) + 1;
    if (uVar1 <= DAT_14c76238c) {
      uVar1 = (ulonglong)DAT_14c76238c;
    }
    DAT_14c76238c = (uint)uVar1;
  }
  return;
}



// FUNCTION 143841cd4 FUN_143841cd4 body=612 status=ok
// SIG undefined FUN_143841cd4(void)

void FUN_143841cd4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168;
  longlong local_160;
  undefined1 local_158 [88];
  longlong local_100;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined3 uStack_c8;
  undefined4 uStack_c5;
  undefined4 uStack_c1;
  longlong local_b8;
  undefined8 local_b0;
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
  undefined4 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  (**(code **)(*(longlong *)(param_1 + -0x110) + 0x480))(param_1 + -0x110,&local_e8);
  local_e8 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,1);
  FUN_145be6626(&local_78,0);
  puVar2 = local_78;
  *(uint *)((longlong)local_78 + 0x1b) = CONCAT31((undefined3)uStack_cc,uStack_d0._3_1_);
  *(uint *)((longlong)local_78 + 0x1f) = CONCAT31(uStack_c8,uStack_cc._3_1_);
  *(undefined4 *)((longlong)local_78 + 0x23) = uStack_c5;
  *(undefined4 *)((longlong)local_78 + 0x27) = uStack_c1;
  local_78[4] = local_d8;
  local_78[5] = uStack_d4;
  local_78[6] = uStack_d0;
  local_78[7] = uStack_cc;
  *local_78 = (undefined4)local_e8;
  local_78[1] = local_e8._4_4_;
  local_78[2] = uStack_e0;
  local_78[3] = uStack_dc;
  *(longlong *)(local_78 + 0xc) = local_b8;
  if ((local_b8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(puVar2 + 0xe) = local_b0;
  puVar2[0x10] = local_a8;
  puVar2[0x11] = uStack_a4;
  puVar2[0x12] = uStack_a0;
  puVar2[0x13] = uStack_9c;
  puVar2[0x14] = local_98;
  puVar2[0x15] = uStack_94;
  puVar2[0x16] = uStack_90;
  puVar2[0x17] = uStack_8c;
  puVar2[0x18] = local_88;
  puVar2[0x19] = uStack_84;
  puVar2[0x1a] = uStack_80;
  puVar2[0x1b] = uStack_7c;
  FUN_143840671(param_2 + 0x88,*(undefined8 *)(param_1 + -0x68),&local_78);
  if ((*(byte *)(param_1 + 0xbc) & 8) != 0) {
    local_160 = *(longlong *)(param_1 + 0xf0);
    if ((local_160 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x68) + 0x1c8);
    puVar3 = &DAT_14c846480;
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 0x240);
    }
    local_170 = *(double *)(param_1 + 0xd0) + *(double *)(param_1 + 0xe8);
    local_178 = *(double *)(param_1 + 200) + *(double *)(param_1 + 0xe0);
    local_180 = *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xd8);
    local_188 = *(double *)(param_1 + 0xd0) - *(double *)(param_1 + 0xe8);
    local_190 = *(double *)(param_1 + 200) - *(double *)(param_1 + 0xe0);
    local_198 = *(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xd8);
    local_168 = 1;
    FUN_1478cbd10(local_158,&local_198,puVar3,&local_160);
    FUN_1478cd62a(param_2 + 0x88,local_158);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143841f3a FUN_143841f3a body=200 status=ok
// SIG undefined FUN_143841f3a(void)

void FUN_143841f3a(longlong param_1)

{
  undefined8 uVar1;
  uchar auVar2 [8];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  GUID local_48;
  ulong local_38 [2];
  uchar auStack_30 [4];
  uchar auStack_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147e9173c();
  if (*(longlong *)(param_1 + 0x170) == 0) {
    local_48.Data1 = 0;
    local_48.Data2 = 0;
    local_48.Data3 = 0;
    local_48.Data4[0] = '\0';
    local_48.Data4[1] = '\0';
    local_48.Data4[2] = '\0';
    local_48.Data4[3] = '\0';
    local_48.Data4[4] = '\0';
    local_48.Data4[5] = '\0';
    local_48.Data4[6] = '\0';
    local_48.Data4[7] = '\0';
    CoCreateGuid(&local_48);
    auVar2 = local_48.Data4;
    uVar1 = local_48._0_8_;
    uVar4 = *(ulonglong *)(param_1 + 0x178);
    local_38[0] = local_48.Data1;
    local_38[1]._0_2_ = local_48.Data2;
    local_38[1]._2_2_ = local_48.Data3;
    auStack_30[0] = local_48.Data4[0];
    auStack_30[1] = local_48.Data4[1];
    auStack_30[2] = local_48.Data4[2];
    auStack_30[3] = local_48.Data4[3];
    auStack_2c[0] = local_48.Data4[4];
    auStack_2c[1] = local_48.Data4[5];
    auStack_2c[2] = local_48.Data4[6];
    auStack_2c[3] = local_48.Data4[7];
    local_48._0_8_ = uVar1;
    local_48.Data4 = auVar2;
    uVar3 = FUN_1447addd0(local_38,0x10);
    uVar4 = (uVar4 ^ uVar3) * -0x622015f714c7d297;
    uVar4 = (uVar4 >> 0x2f ^ uVar3 ^ uVar4) * -0x622015f714c7d297;
    *(ulonglong *)(param_1 + 0x170) =
         (uVar4 >> 0x2f ^ uVar4) * 0x1ddfea08eb382d69 | 0x8000000000000000;
  }
  FUN_143838088(param_1 + 0x160,param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143842004 FUN_143842004 body=2120 status=ok
// SIG undefined FUN_143842004(void)

void FUN_143842004(longlong param_1,longlong *param_2)

{
  double dVar1;
  byte bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  uint uVar13;
  double *pdVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined1 auStack_238 [32];
  longlong *local_218;
  uint local_210;
  char **local_208;
  undefined1 *local_200;
  undefined4 *local_1f8;
  undefined4 local_1e8;
  float local_1e4;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  char *local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined2 local_13f;
  undefined1 local_13d;
  undefined2 local_13c;
  undefined1 local_13a;
  undefined2 local_139;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined2 local_128;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar15 = *(longlong *)(param_1 + 0xa8);
  if ((lVar15 != 0) &&
     (0.0001 < *(float *)(param_1 + 0x208) || *(float *)(param_1 + 0x208) == 0.0001)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb1dcb0) && (FUN_144b3d300(), DAT_14cb1dcb0 == -1)) {
      local_150 = "SmartLinkBroadcastTrace";
      local_148 = CONCAT35(local_148._5_3_,0x17);
      uVar13 = FUN_14001a6c0(&local_150,1);
      DAT_14cb1dca8 = (char *)(ulonglong)uVar13;
      _Init_thread_footer();
    }
    local_12c = 0;
    local_128 = 0x101;
    local_100 = 0;
    local_f8 = 0x800000000;
    local_e0 = 0;
    local_d4 = 4;
    local_140 = 0;
    local_134 = 0;
    local_150 = DAT_14cb1dca8;
    local_13f = 1;
    local_13d = 0;
    local_130 = 0;
    local_13c = 0;
    local_13a = 0;
    local_f0 = *(undefined4 *)(lVar15 + 0xc);
    local_d8 = 1;
    local_148 = *(undefined8 *)(lVar15 + 0x18);
    local_139 = 0x101;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
    pdVar14 = (double *)&DAT_14c846480;
    if (lVar15 != 0) {
      pdVar14 = (double *)(lVar15 + 0x240);
    }
    dVar7 = *(double *)(param_1 + 0x198) * pdVar14[8];
    dVar8 = *(double *)(param_1 + 0x1a0) * pdVar14[9];
    dVar23 = *(double *)(param_1 + 0x1a8) * pdVar14[10];
    dVar1 = pdVar14[3];
    dVar2 = pdVar14[3];
    dVar9 = *pdVar14;
    dVar10 = pdVar14[1];
    dVar11 = pdVar14[2];
    dVar5 = dVar8 * dVar9 - dVar7 * dVar10;
    dVar6 = dVar23 * dVar10 - dVar8 * dVar11;
    dVar22 = dVar7 * dVar11 - dVar23 * dVar9;
    dVar6 = dVar6 + dVar6;
    dVar22 = dVar22 + dVar22;
    dVar5 = dVar5 + dVar5;
    local_198 = (dVar5 * dVar10 - dVar22 * dVar11) + dVar1 * dVar6 + dVar7 + pdVar14[4];
    dStack_190 = (dVar11 * dVar6 - dVar5 * dVar9) + dVar2 * dVar22 + dVar8 + pdVar14[5];
    local_188 = dVar1 * dVar5 + dVar23 + (dVar22 * dVar9 - dVar6 * dVar10) + pdVar14[6];
    dVar5 = *(double *)(param_1 + 0x1b0) * pdVar14[8];
    dVar23 = *(double *)(param_1 + 0x1b8) * pdVar14[9];
    dVar8 = *(double *)(param_1 + 0x1c0) * pdVar14[10];
    dVar6 = dVar23 * dVar9 - dVar10 * dVar5;
    dVar22 = dVar8 * dVar10 - dVar11 * dVar23;
    dVar7 = dVar5 * dVar11 - dVar9 * dVar8;
    dVar22 = dVar22 + dVar22;
    dVar7 = dVar7 + dVar7;
    dVar6 = dVar6 + dVar6;
    dVar5 = (dVar6 * dVar10 - dVar7 * dVar11) + dVar1 * dVar22 + dVar5 + pdVar14[4];
    dVar2 = (dVar11 * dVar22 - dVar6 * dVar9) + dVar2 * dVar7 + dVar23 + pdVar14[5];
    local_1b8._8_4_ = SUB84(dVar2,0);
    local_1b8._0_8_ = dVar5;
    local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_1a8 = dVar1 * dVar6 + dVar8 + (dVar7 * dVar9 - dVar22 * dVar10) + pdVar14[6];
    fVar24 = *(float *)(param_1 + 0x208);
    if ((local_188 - local_1a8) * (local_188 - local_1a8) +
        (local_198 - dVar5) * (local_198 - dVar5) + (dStack_190 - dVar2) * (dStack_190 - dVar2) <=
        (double)fVar24 * 0.25 * (double)fVar24 * 0.25) {
      local_1c8 = (local_188 + local_1a8) * 0.5;
      uStack_1d0 = (dVar2 + dStack_190) * 0.5;
      local_1d8 = (local_198 + dVar5) * 0.5;
      lVar15 = *(longlong *)(param_1 + 0xb0);
      if (lVar15 == 0) {
        lVar15 = FUN_1448abda6(param_1);
        fVar24 = *(float *)(param_1 + 0x208);
      }
      puVar17 = (undefined8 *)&local_1e8;
      local_1e8 = 2;
      bVar3 = *(byte *)(param_1 + 0x210);
      local_218 = &local_168;
      puVar20 = &local_1d8;
      local_1e4 = fVar24;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0xb0);
      if (lVar15 == 0) {
        lVar15 = FUN_1448abda6(param_1);
        fVar24 = *(float *)(param_1 + 0x208);
      }
      local_1d8 = (double)CONCAT44(fVar24,2);
      local_1f8 = &DAT_14cad0f08;
      local_200 = &DAT_14cad0f10;
      local_208 = &local_150;
      local_210 = (uint)*(byte *)(param_1 + 0x210);
      local_218 = &local_168;
      FUN_14052f4ca(lVar15,&local_1d8,&local_198,&DAT_14c8463d0);
      lVar15 = *(longlong *)(param_1 + 0xb0);
      if (lVar15 == 0) {
        lVar15 = FUN_1448abda6(param_1);
      }
      puVar17 = &local_1d8;
      local_1d8 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x208),2);
      bVar3 = *(byte *)(param_1 + 0x210);
      local_218 = &local_178;
      puVar20 = (undefined8 *)local_1b8;
    }
    local_208 = &local_150;
    local_210 = (uint)bVar3;
    local_1f8 = &DAT_14cad0f08;
    local_200 = &DAT_14cad0f10;
    FUN_14052f4ca(lVar15,puVar17,puVar20,&DAT_14c8463d0);
    local_1d8 = 0.0;
    uStack_1d0 = 0.0;
    if (0 < (int)uStack_160) {
      lVar15 = 0;
      lVar21 = 0;
      do {
        lVar18 = local_168 + lVar15;
        cVar12 = FUN_1417bcbcc(lVar18);
        if (((cVar12 != '\0') && (lVar18 = FUN_14485cccc(lVar18), dVar2 = uStack_1d0, lVar18 != 0))
           && (lVar18 = *(longlong *)(lVar18 + 0x3c0), lVar18 != 0)) {
          lVar19 = (longlong)(int)uStack_1d0;
          uVar13 = (int)uStack_1d0 + 1;
          uStack_1d0 = (double)CONCAT44(uStack_1d0._4_4_,uVar13);
          if (uStack_1d0._4_4_ < uVar13) {
            FUN_14095e928(&local_1d8,(ulonglong)dVar2 & 0xffffffff);
          }
          *(longlong *)((longlong)local_1d8 + lVar19 * 8) = lVar18;
        }
        lVar21 = lVar21 + 1;
        lVar15 = lVar15 + 0x48;
      } while (lVar21 < (int)uStack_160);
    }
    if (0 < (int)uStack_170) {
      lVar15 = 0;
      lVar21 = 0;
      do {
        lVar18 = local_178 + lVar15;
        cVar12 = FUN_1417bcbcc(lVar18);
        if (((cVar12 != '\0') && (lVar18 = FUN_14485cccc(lVar18), dVar2 = uStack_1d0, lVar18 != 0))
           && (lVar18 = *(longlong *)(lVar18 + 0x3c0), lVar18 != 0)) {
          lVar19 = (longlong)(int)uStack_1d0;
          uVar13 = (int)uStack_1d0 + 1;
          uStack_1d0 = (double)CONCAT44(uStack_1d0._4_4_,uVar13);
          if (uStack_1d0._4_4_ < uVar13) {
            FUN_14095e928(&local_1d8,(ulonglong)dVar2 & 0xffffffff);
          }
          *(longlong *)((longlong)local_1d8 + lVar19 * 8) = lVar18;
        }
        lVar21 = lVar21 + 1;
        lVar15 = lVar15 + 0x48;
      } while (lVar21 < (int)uStack_170);
    }
    lVar15 = (longlong)local_1d8;
    lVar21 = (longlong)(int)uStack_1d0;
    if (lVar21 != 0) {
      lVar18 = 0;
      do {
        plVar16 = (longlong *)
                  (**(code **)(*(longlong *)(*(longlong *)(lVar15 + lVar18) + 0x390) + 0x50))
                            (*(longlong *)(lVar15 + lVar18) + 0x390);
        if ((plVar16 != (longlong *)0x0) &&
           (lVar19 = (**(code **)(*plVar16 + 8))(plVar16), lVar19 != 0)) {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1447f76d2(param_2,iVar4);
          }
          *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar19;
        }
        lVar18 = lVar18 + 8;
      } while (lVar21 * 8 != lVar18);
    }
    if (local_1d8 != 0.0) {
      FUN_1400020a8(local_1d8);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if (local_100 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14384284e FUN_14384284e body=98 status=ok
// SIG undefined FUN_14384284e(void)

undefined8 * FUN_14384284e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14480c900(0,param_3);
  cVar1 = FUN_14480c900(param_1,param_3);
  *(char *)((longlong)param_2 + 5) = cVar1 * '\x02';
  *(byte *)((longlong)param_2 + 4) = cVar1 << 6 | 2;
  bVar2 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) = (uint)bVar2 * 8 + 0x82;
  return param_2;
}



// FUNCTION 1438428b0 FUN_1438428b0 body=117 status=ok
// SIG undefined FUN_1438428b0(void)

void FUN_1438428b0(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_2[1])) {
    if (*(longlong *)(*param_2 + 0x18 + (ulonglong)param_3 * 0x60) != 0) {
      puVar10 = (undefined8 *)(*param_2 + (ulonglong)param_3 * 0x60);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_147e81d28(param_1,iVar2);
      }
      lVar3 = *param_1;
      lVar9 = (longlong)iVar2 * 0x30;
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      uVar8 = puVar10[5];
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar9);
      *puVar1 = puVar10[4];
      puVar1[1] = uVar8;
      puVar10 = (undefined8 *)(lVar3 + 0x10 + lVar9);
      *puVar10 = uVar6;
      puVar10[1] = uVar7;
      *(undefined8 *)(lVar3 + lVar9) = uVar4;
      ((undefined8 *)(lVar3 + lVar9))[1] = uVar5;
    }
  }
  return;
}



// FUNCTION 143842925 FUN_143842925 body=55 status=ok
// SIG undefined FUN_143842925(void)

void FUN_143842925(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1dbf8 == 0) {
    uVar1 = FUN_1410766fc();
    DAT_14cb1dbf8 = FUN_14171c317(FUN_146424a30,uVar1,L"ERecastPartitioning");
  }
  return;
}



// FUNCTION 14384295c FUN_14384295c body=55 status=ok
// SIG undefined FUN_14384295c(void)

void FUN_14384295c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1dc10 == 0) {
    uVar1 = FUN_1410766fc();
    DAT_14cb1dc10 = FUN_14171c317(FUN_146424a5f,uVar1,L"ENavigationLedgeSlopeFilterMode");
  }
  return;
}



// FUNCTION 143842993 FUN_143842993 body=55 status=ok
// SIG undefined FUN_143842993(void)

void FUN_143842993(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1dc28 == 0) {
    uVar1 = FUN_1410766fc();
    DAT_14cb1dc28 = FUN_14171c317(FUN_146424a8e,uVar1,L"EHeightFieldRenderMode");
  }
  return;
}



// FUNCTION 1438429ca FUN_1438429ca body=69 status=ok
// SIG undefined FUN_1438429ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438429ca(void)

{
  _DAT_14cb1dc88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143842a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1dc90,1);
  return;
}



// FUNCTION 143842a10 FUN_143842a10 body=48 status=ok
// SIG undefined FUN_143842a10(void)

longlong FUN_143842a10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145ddd92a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143842a40 FUN_143842a40 body=48 status=ok
// SIG undefined FUN_143842a40(void)

longlong FUN_143842a40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145ddd92a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143842a70 FUN_143842a70 body=48 status=ok
// SIG undefined FUN_143842a70(void)

longlong FUN_143842a70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_145dadf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143842aa8 FUN_143842aa8 body=48 status=ok
// SIG undefined FUN_143842aa8(void)

longlong FUN_143842aa8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145cb37ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143842b02 FUN_143842b02 body=227 status=ok
// SIG undefined FUN_143842b02(void)

void FUN_143842b02(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 143842be6 FUN_143842be6 body=265 status=ok
// SIG undefined FUN_143842be6(void)

void FUN_143842be6(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143842cf0 FUN_143842cf0 body=29 status=ok
// SIG undefined FUN_143842cf0(void)

undefined8 FUN_143842cf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143842d22 FUN_143842d22 body=85 status=ok
// SIG undefined FUN_143842d22(void)

void FUN_143842d22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc01b0;
  return;
}



// FUNCTION 143842d78 FUN_143842d78 body=85 status=ok
// SIG undefined FUN_143842d78(void)

void FUN_143842d78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc01b0;
  return;
}



// FUNCTION 143842dce FUN_143842dce body=118 status=ok
// SIG undefined FUN_143842dce(void)

void FUN_143842dce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abc01b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143842e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143842e4c FUN_143842e4c body=19 status=ok
// SIG undefined FUN_143842e4c(void)

undefined1 FUN_143842e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_143842e60(param_2);
  return 1;
}



// FUNCTION 143842e60 FUN_143842e60 body=79 status=ok
// SIG undefined FUN_143842e60(void)

void FUN_143842e60(longlong *param_1)

{
  longlong *plVar1;
  wchar_t *_Str;
  
  if ((int)param_1[1] != 0) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x000143842e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _wtof(_Str);
    return;
  }
  plVar1 = (longlong *)FUN_1459938ca();
  if (plVar1[0x22] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143842ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 1000))(plVar1);
  return;
}



// FUNCTION 143842eaf FUN_143842eaf body=1053 status=ok
// SIG undefined FUN_143842eaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143842eaf(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined8 *)0x800000014abb7010;
  local_34 = 0x10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146424660(&local_48);
  DAT_14cb1dae8 = (undefined8 *)0x0;
  DAT_14cb1daf0 = 0;
  FUN_1446efa72(&DAT_14cb1dae8,0,2,0x10);
  puVar1 = DAT_14cb1dae8;
  DAT_14cb1daf0 = 2;
  *DAT_14cb1dae8 = &PTR_LAB_14abbff80;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar4;
  *puVar1 = &PTR_FUN_14abbff10;
  puVar1[3] = FUN_14383ef44;
  atexit(FUN_1438405bb);
  DAT_14cb1daf8 = (undefined8 *)0x0;
  DAT_14cb1db00 = 0;
  FUN_1446efa72(&DAT_14cb1daf8,0,2,0x10);
  puVar1 = DAT_14cb1daf8;
  DAT_14cb1db00 = 2;
  *DAT_14cb1daf8 = &PTR_LAB_14abc0060;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar4;
  *puVar1 = &PTR_FUN_14abbfff0;
  puVar1[3] = FUN_14383fa30;
  atexit(FUN_143840616);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_48,&DAT_14cb1db08);
  if (cVar3 == '\0') {
    _DAT_14cb1db08 = 0;
    uRam000000014cb1db10 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14abb8560;
  local_68 = 0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abb8580,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abb9260,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abba180,1,&PTR_FUN_14abba150);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abbad90,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abbb750,1,0);
  DAT_14cacb150 = DAT_14cacb150 + 1;
  _DAT_14cb1dbd0 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  DAT_14cb1dbc8 = DAT_14cacb150;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abbc370,1,0);
  ppuStack_60 = &PTR_FUN_14abbf5d0;
  local_58 = 3;
  local_68 = 2;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abbf680,1,&PTR_FUN_14abbf630);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14abc01b0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb1dc88,L"ai.debug.nav.DrawDistance",
                L"Sets the culling distance used by the navmesh rendering for lines and labels.",
                &local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_143843256;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143843256:
  atexit(FUN_1438429ca);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438432d0 FUN_1438432d0 body=316 status=ok
// SIG undefined FUN_1438432d0(void)

void FUN_1438432d0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1e8 [44];
  undefined4 local_1bc;
  undefined **local_1b8;
  longlong *local_1b0;
  undefined ***local_1a8;
  undefined8 **local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_1b0 = param_2;
  switchD_143c3d4dc::caseD_20();
  local_1bc = 0x1a;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1bc,4);
    }
    else {
      FUN_14572512c(param_2,&local_1bc);
    }
  }
  else {
    local_1bc = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  local_1b8 = (undefined **)0x0;
  lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  FUN_1408383eb(param_2,&local_1b8);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1438433d4;
    lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
    local_1b8 = (undefined **)(lVar4 - lVar3);
    (**(code **)(*param_2 + 0x1a0))(param_2,lVar3);
    FUN_1408383eb(param_2,&local_1b8);
  }
  else {
    lVar4 = (longlong)local_1b8 + lVar3;
  }
  (**(code **)(*param_2 + 0x1a0))(param_2,lVar4);
LAB_1438433d4:
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384340e FUN_14384340e body=202 status=ok
// SIG undefined FUN_14384340e(void)

void FUN_14384340e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    plVar3 = &DAT_14c846480;
    if (*(longlong *)(lVar1 + 0x1c8) != 0) {
      plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x1c8) + 0x240);
    }
    plVar4 = param_1 + 0x36;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *plVar4 = *plVar3;
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
    }
    if ((param_1[0x34] == 0) && (*(longlong *)(lVar1 + 0x1c8) != 0)) {
      local_38 = &LAB_147e93c90;
      local_30 = 0;
      FUN_147e93bc8(*(longlong *)(lVar1 + 0x1c8) + 0x200,&local_28,param_1);
      param_1[0x34] = local_28;
    }
  }
  (**(code **)(*param_1 + 0x480))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438434df FUN_1438434df body=55 status=ok
// SIG undefined FUN_1438434df(void)

void FUN_1438434df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1dd58 == 0) {
    uVar1 = FUN_1410766fc();
    DAT_14cb1dd58 = FUN_14171c317(FUN_14642504b,uVar1,L"ENavSystemOverridePolicy");
  }
  return;
}



// FUNCTION 143843516 FUN_143843516 body=55 status=ok
// SIG undefined FUN_143843516(void)

void FUN_143843516(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1dd88 == 0) {
    uVar1 = FUN_1410766fc();
    DAT_14cb1dd88 = FUN_14171c317(FUN_1464250af,uVar1,L"ESubdivisionLOD");
  }
  return;
}



// FUNCTION 14384354e FUN_14384354e body=48 status=ok
// SIG undefined FUN_14384354e(void)

longlong FUN_14384354e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14384357e FUN_14384357e body=380 status=ok
// SIG undefined FUN_14384357e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384357e(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abc0550,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abc0f80,1,0);
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cb1dcf8);
  if (cVar1 == '\0') {
    _DAT_14cb1dcf8 = 0;
    uRam000000014cb1dd00 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abc1a40,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abc2220,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14abc2b00;
  local_58 = 0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abc2b20,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14abc3490;
  local_58 = 0;
  FUN_14282b410(L"/Script/NavigationSystem",&PTR_FUN_14abc34b0,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438436fc FUN_1438436fc body=55 status=ok
// SIG undefined FUN_1438436fc(void)

void FUN_1438436fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ddd8 == 0) {
    uVar1 = FUN_141506482();
    DAT_14cb1ddd8 = FUN_14171c317(FUN_14642532f,uVar1,L"EGameplayTaskState");
  }
  return;
}



// FUNCTION 143843733 FUN_143843733 body=55 status=ok
// SIG undefined FUN_143843733(void)

void FUN_143843733(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ddf0 == 0) {
    uVar1 = FUN_141506482();
    DAT_14cb1ddf0 = FUN_14171c317(FUN_14642535e,uVar1,L"ETaskResourceOverlapPolicy");
  }
  return;
}



// FUNCTION 14384376a FUN_14384376a body=114 status=ok
// SIG undefined FUN_14384376a(void)

void FUN_14384376a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x39) = 3;
  if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x5c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001438437d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar2 + 0x110) + 0x38))(lVar2 + 0x110,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1438437dc FUN_1438437dc body=215 status=ok
// SIG undefined FUN_1438437dc(void)

void FUN_1438437dc(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if (((((*(uint *)(param_1 + 8) & 0x10) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd4) & 1) == 0)) &&
      (((*(byte *)(param_1 + 0x30) & 1) == 0 || (*(int *)(param_1 + 0x28) == -1)))) &&
     (*(char *)(param_1 + 0x2c) == -1)) {
    uVar2 = (undefined1)DAT_14cb1de78;
    DAT_14cb1de78 = DAT_14cb1de78 + 1;
    *(undefined1 *)(param_1 + 0x2c) = uVar2;
  }
  return;
}



// FUNCTION 1438438b3 FUN_1438438b3 body=55 status=ok
// SIG undefined FUN_1438438b3(void)

void FUN_1438438b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1de88 == 0) {
    uVar1 = FUN_141506482();
    DAT_14cb1de88 = FUN_14171c317(FUN_14642555c,uVar1,L"EGameplayTaskRunResult");
  }
  return;
}



// FUNCTION 1438438ea FUN_1438438ea body=577 status=ok
// SIG undefined FUN_1438438ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438438ea(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_54 = param_2;
    uVar4 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_54);
    if (DAT_14c761388 != 0) {
      lVar5 = param_1[0x16];
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
        if (lVar5 == 0) goto LAB_14384392b;
      }
      uVar4 = FUN_14119d0a4(lVar5);
      FUN_140e65914(uVar4,param_1,*(undefined4 *)(lVar5 + 0x6f4));
    }
  }
LAB_14384392b:
  plVar1 = param_1 + 0x29;
  if ((int)param_1[0x2a] == 1) {
    if ((*(longlong *)*plVar1 != 0) && ((*(uint *)(*(longlong *)*plVar1 + 8) >> 0x1e & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
    }
  }
  else if ((int)param_1[0x2a] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb1dee8) {
      FUN_144b3d300(&DAT_14cb1dee8);
      if (DAT_14cb1dee8 == -1) {
        DAT_14cb1ded8 = 0;
        _DAT_14cb1dee0 = 0;
        atexit((_func_5014 *)&LAB_143843b68);
        _Init_thread_footer(&DAT_14cb1dee8);
      }
    }
    bVar9 = (longlong)_DAT_14cb1dee0 < 0;
    _DAT_14cb1dee0 = _DAT_14cb1dee0 & 0xffffffff00000000;
    if (bVar9) {
      FUN_147e99b36(&DAT_14cb1ded8,0);
    }
    FUN_147e97782(plVar1);
    lVar5 = DAT_14cb1ded8;
    lVar6 = (longlong)DAT_14cb1dee0;
    if (lVar6 != 0) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar8);
        if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
          (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
          iVar7 = iVar7 + 1;
        }
        lVar8 = lVar8 + 8;
      } while (lVar6 * 8 != lVar8);
      if (iVar7 != 0) goto LAB_143843a87;
    }
  }
  FUN_147e977e6(plVar1);
  bVar3 = (**(code **)(*param_1 + 0x478))(param_1);
  if (bVar3 != (*(byte *)((longlong)param_1 + 0x9e) & 0x10) >> 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
  }
LAB_143843a87:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143843b7a FUN_143843b7a body=38 status=ok
// SIG undefined FUN_143843b7a(void)

undefined8 FUN_143843b7a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143843ba0 FUN_143843ba0 body=45 status=ok
// SIG undefined FUN_143843ba0(void)

longlong FUN_143843ba0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143843bce FUN_143843bce body=38 status=ok
// SIG undefined FUN_143843bce(void)

undefined8 FUN_143843bce(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143843bf4 FUN_143843bf4 body=45 status=ok
// SIG undefined FUN_143843bf4(void)

longlong FUN_143843bf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143843c22 FUN_143843c22 body=76 status=ok
// SIG undefined FUN_143843c22(void)

undefined8 * FUN_143843c22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14abc7430;
  param_1[5] = &PTR_LAB_14abc7730;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143843c86 FUN_143843c86 body=437 status=ok
// SIG undefined FUN_143843c86(void)

void FUN_143843c86(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = &PTR_FUN_14abc3f20;
  local_68 = 1;
  local_58 = 2;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc3f90,1,&PTR_FUN_14abc3f60);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc4330,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc4790,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14abc5720;
  local_68 = 0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc5740,1,0);
  local_48 = 0x800000014abc58a2;
  local_34 = 0xd;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146425640(&local_48);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc60f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc6b80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc70c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayTasks",&PTR_FUN_14abc7780,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143843e3c FUN_143843e3c body=55 status=ok
// SIG undefined FUN_143843e3c(void)

void FUN_143843e3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e138 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e138 = FUN_14171c317(FUN_146425e63,uVar1,L"EAIOptionFlag");
  }
  return;
}



// FUNCTION 143843e73 FUN_143843e73 body=55 status=ok
// SIG undefined FUN_143843e73(void)

void FUN_143843e73(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e150 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e150 = FUN_14171c317(FUN_146425e94,uVar1,L"FAIDistanceType");
  }
  return;
}



// FUNCTION 143843eaa FUN_143843eaa body=55 status=ok
// SIG undefined FUN_143843eaa(void)

void FUN_143843eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e168 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e168 = FUN_14171c317(FUN_146425ec3,uVar1,L"EPawnActionAbortState");
  }
  return;
}



// FUNCTION 143843ee1 FUN_143843ee1 body=55 status=ok
// SIG undefined FUN_143843ee1(void)

void FUN_143843ee1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e180 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e180 = FUN_14171c317(FUN_146425ef2,uVar1,L"EPawnActionResult");
  }
  return;
}



// FUNCTION 143843f18 FUN_143843f18 body=55 status=ok
// SIG undefined FUN_143843f18(void)

void FUN_143843f18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e198 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e198 = FUN_14171c317(FUN_146425f21,uVar1,L"EPawnActionEventType");
  }
  return;
}



// FUNCTION 143843f4f FUN_143843f4f body=55 status=ok
// SIG undefined FUN_143843f4f(void)

void FUN_143843f4f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e1b0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e1b0 = FUN_14171c317(FUN_146425f50,uVar1,L"EAIRequestPriority");
  }
  return;
}



// FUNCTION 143843f86 FUN_143843f86 body=55 status=ok
// SIG undefined FUN_143843f86(void)

void FUN_143843f86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e1c8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e1c8 = FUN_14171c317(FUN_146425f81,uVar1,L"EAILockSource");
  }
  return;
}



// FUNCTION 143843fbd FUN_143843fbd body=55 status=ok
// SIG undefined FUN_143843fbd(void)

void FUN_143843fbd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e210 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e210 = FUN_14171c317(FUN_1464260ae,uVar1,L"EGenericAICheck");
  }
  return;
}



// FUNCTION 143843ff4 FUN_143843ff4 body=55 status=ok
// SIG undefined FUN_143843ff4(void)

void FUN_143843ff4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e240 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e240 = FUN_14171c317(FUN_146426176,uVar1,L"EBasicKeyOperation");
  }
  return;
}



// FUNCTION 14384402b FUN_14384402b body=55 status=ok
// SIG undefined FUN_14384402b(void)

void FUN_14384402b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e258 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e258 = FUN_14171c317(FUN_1464261a5,uVar1,L"EArithmeticKeyOperation");
  }
  return;
}



// FUNCTION 143844062 FUN_143844062 body=55 status=ok
// SIG undefined FUN_143844062(void)

void FUN_143844062(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e270 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e270 = FUN_14171c317(FUN_1464261d4,uVar1,L"ETextKeyOperation");
  }
  return;
}



// FUNCTION 143844099 FUN_143844099 body=55 status=ok
// SIG undefined FUN_143844099(void)

void FUN_143844099(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e2c0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e2c0 = FUN_14171c317(FUN_146426266,uVar1,L"EEnvTestPurpose");
  }
  return;
}



// FUNCTION 1438440d0 FUN_1438440d0 body=55 status=ok
// SIG undefined FUN_1438440d0(void)

void FUN_1438440d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e2d8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e2d8 = FUN_14171c317(FUN_146426295,uVar1,L"EEnvTestFilterType");
  }
  return;
}



// FUNCTION 143844107 FUN_143844107 body=55 status=ok
// SIG undefined FUN_143844107(void)

void FUN_143844107(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e2f0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e2f0 = FUN_14171c317(FUN_1464262c4,uVar1,L"EEnvTestScoreEquation");
  }
  return;
}



// FUNCTION 14384413e FUN_14384413e body=55 status=ok
// SIG undefined FUN_14384413e(void)

void FUN_14384413e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e308 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e308 = FUN_14171c317(FUN_1464262f3,uVar1,L"EEnvTestWeight");
  }
  return;
}



// FUNCTION 143844175 FUN_143844175 body=55 status=ok
// SIG undefined FUN_143844175(void)

void FUN_143844175(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e320 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e320 = FUN_14171c317(FUN_146426322,uVar1,L"EEnvTestCost");
  }
  return;
}



// FUNCTION 1438441ac FUN_1438441ac body=55 status=ok
// SIG undefined FUN_1438441ac(void)

void FUN_1438441ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e338 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e338 = FUN_14171c317(FUN_146426351,uVar1,L"EEnvTestFilterOperator");
  }
  return;
}



// FUNCTION 1438441e3 FUN_1438441e3 body=55 status=ok
// SIG undefined FUN_1438441e3(void)

void FUN_1438441e3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e350 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e350 = FUN_14171c317(FUN_146426380,uVar1,L"EEnvTestScoreOperator");
  }
  return;
}



// FUNCTION 14384421a FUN_14384421a body=55 status=ok
// SIG undefined FUN_14384421a(void)

void FUN_14384421a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e368 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e368 = FUN_14171c317(FUN_1464263af,uVar1,L"EEnvQueryStatus");
  }
  return;
}



// FUNCTION 143844251 FUN_143844251 body=55 status=ok
// SIG undefined FUN_143844251(void)

void FUN_143844251(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e380 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e380 = FUN_14171c317(FUN_1464263de,uVar1,L"EEnvQueryRunMode");
  }
  return;
}



// FUNCTION 143844288 FUN_143844288 body=55 status=ok
// SIG undefined FUN_143844288(void)

void FUN_143844288(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e398 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e398 = FUN_14171c317(FUN_14642640f,uVar1,L"EEnvQueryParam");
  }
  return;
}



// FUNCTION 1438442bf FUN_1438442bf body=55 status=ok
// SIG undefined FUN_1438442bf(void)

void FUN_1438442bf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e3b0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e3b0 = FUN_14171c317(FUN_14642643e,uVar1,L"EAIParamType");
  }
  return;
}



// FUNCTION 1438442f6 FUN_1438442f6 body=55 status=ok
// SIG undefined FUN_1438442f6(void)

void FUN_1438442f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e3c8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e3c8 = FUN_14171c317(FUN_14642646d,uVar1,L"EEnvQueryTrace");
  }
  return;
}



// FUNCTION 14384432d FUN_14384432d body=55 status=ok
// SIG undefined FUN_14384432d(void)

void FUN_14384432d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e3e0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e3e0 = FUN_14171c317(FUN_14642649c,uVar1,L"EEnvTraceShape");
  }
  return;
}



// FUNCTION 143844364 FUN_143844364 body=55 status=ok
// SIG undefined FUN_143844364(void)

void FUN_143844364(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e3f8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e3f8 = FUN_14171c317(FUN_1464264cb,uVar1,L"EEnvOverlapShape");
  }
  return;
}



// FUNCTION 14384439b FUN_14384439b body=55 status=ok
// SIG undefined FUN_14384439b(void)

void FUN_14384439b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e410 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e410 = FUN_14171c317(FUN_1464264fa,uVar1,L"EEnvDirection");
  }
  return;
}



// FUNCTION 1438443d2 FUN_1438443d2 body=55 status=ok
// SIG undefined FUN_1438443d2(void)

void FUN_1438443d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e428 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e428 = FUN_14171c317(FUN_146426529,uVar1,L"EEnvQueryTestClamping");
  }
  return;
}



// FUNCTION 143844409 FUN_143844409 body=55 status=ok
// SIG undefined FUN_143844409(void)

void FUN_143844409(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e548 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e548 = FUN_14171c317(FUN_146426a60,uVar1,L"ETeamAttitude");
  }
  return;
}



// FUNCTION 1438445ba FUN_1438445ba body=1062 status=ok
// SIG undefined FUN_1438445ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438445ba(void)

{
  longlong lVar1;
  
  _DAT_14cb1df98 = 0x47efffffe0000000;
  _DAT_14cb1dfa0 = 0x47efffffe0000000;
  _DAT_14cb1dfa8 = 0x47efffffe0000000;
  _DAT_14cb1dfb0 = 0x47efffffe0000000;
  _DAT_14cb1dfb8 = 0x47efffffe0000000;
  _DAT_14cb1dfc0 = 0x47efffffe0000000;
  _DAT_14cb1dfc8 = 0x47efffffe0000000;
  _DAT_14cb1dfd0 = 0x47efffffe0000000;
  _DAT_14cb1dfd8 = 0x47efffffe0000000;
  _DAT_14cb1dfe0 = 0x47efffffe0000000;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc8340,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc8750,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc8ba0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc8fe0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc93b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc98d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abc9c40,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abca260,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abca5c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abca970,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abcad20,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abcb0d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",0,0,&PTR_FUN_14abcb990,3,&PTR_FUN_14abcb890,8);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14abcbbf0 + lVar1),L"/Script/AIModule",
                  *(undefined8 *)(&UNK_14abcbbf8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_14abcbc00 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x70);
  FUN_1446f470e(&DAT_14cb1e280,L"SelfActor",1);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abcc0d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abcc430,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abce7b0,1,&PTR_FUN_14abce690,7,&PTR_FUN_14abce490,
                0x10);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abceb20,1,0,0,0,0);
  FUN_1446f470e(&DAT_14cb1e518,L"ReceiveSmartLinkReached",1);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abcf1b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abcf6a0,1,&PTR_FUN_14abcf670,1,&PTR_FUN_14abcf650,1);
  FUN_14282b410(L"/Script/AIModule",0,0,&PTR_FUN_14abcf840,3,0,0);
  FUN_14282b410(L"/Script/AIModule",0,0,&PTR_FUN_14abcf970,1,0,0);
  FUN_14282b410(L"/Script/AIModule",0,0,&PTR_FUN_14abd0400,0xc,0,0);
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd1710,1,0,0,0,0);
  return;
}



// FUNCTION 1438449e0 FUN_1438449e0 body=55 status=ok
// SIG undefined FUN_1438449e0(void)

void FUN_1438449e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e7d0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e7d0 = FUN_14171c317(FUN_146427d7e,uVar1,L"EPawnSubActionTriggeringPolicy");
  }
  return;
}



// FUNCTION 143844a17 FUN_143844a17 body=55 status=ok
// SIG undefined FUN_143844a17(void)

void FUN_143844a17(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e7e8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e7e8 = FUN_14171c317(FUN_146427dad,uVar1,L"EPawnActionFailHandling");
  }
  return;
}



// FUNCTION 143844a4e FUN_143844a4e body=55 status=ok
// SIG undefined FUN_143844a4e(void)

void FUN_143844a4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e908 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e908 = FUN_14171c317(FUN_14642828f,uVar1,L"EPawnActionMoveMode");
  }
  return;
}



// FUNCTION 143844a86 FUN_143844a86 body=2059 status=ok
// SIG undefined FUN_143844a86(void)

ulonglong FUN_143844a86(longlong *param_1,longlong *param_2,double *param_3,byte param_4)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_258 [32];
  char **local_238;
  undefined1 *local_230;
  undefined4 *local_228;
  undefined8 local_220;
  undefined2 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  code *local_1f8;
  code *local_1f0;
  float local_1e8;
  float local_1e4;
  code *local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198 [2];
  code *local_188;
  double adStack_180 [5];
  code *local_158;
  double local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  char *local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined2 local_109;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [4];
  longlong local_b0;
  int local_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_2 == (longlong *)0x0) {
LAB_143844b5c:
    uVar13 = 0;
    goto LAB_143845131;
  }
  if (((((*param_3 == 0.0) && (!NAN(*param_3))) && (param_3[1] == 0.0)) &&
      ((!NAN(param_3[1]) && (param_3[2] == 0.0)))) && (!NAN(param_3[2]))) {
    (**(code **)(*param_1 + 0x588))(param_1,param_3,&local_120);
    if (((*param_3 == 0.0) && (!NAN(*param_3))) &&
       ((param_3[1] == 0.0 && (((!NAN(param_3[1]) && (param_3[2] == 0.0)) && (!NAN(param_3[2])))))))
    goto LAB_143844b5c;
  }
  (**(code **)(*param_2 + 0x590))(param_2,&local_1e0,param_1[0x7a]);
  lVar8 = param_1[0x7a];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb1ef90) && (FUN_144b3d300(&DAT_14cb1ef90), DAT_14cb1ef90 == -1)) {
    local_120 = "LineOfSight";
    local_118 = CONCAT35(local_118._5_3_,0xb);
    uVar5 = FUN_14001a6c0(&local_120,1);
    DAT_14cb1ef88 = (char *)(ulonglong)uVar5;
    _Init_thread_footer(&DAT_14cb1ef90);
  }
  local_fc = 0;
  local_118 = 0;
  local_f8 = 0x101;
  local_d0 = 0;
  local_c8 = 0x800000000;
  local_b0 = 0;
  local_110 = 1;
  local_104 = 0;
  local_120 = DAT_14cb1ef88;
  local_10f = 1;
  local_10d = 0;
  local_100 = 0;
  local_10c = 0;
  local_10a = 0;
  if (lVar8 != 0) {
    local_c0[0] = *(undefined4 *)(lVar8 + 0xc);
    local_118 = *(undefined8 *)(lVar8 + 0x18);
  }
  uVar5 = (uint)(lVar8 != 0);
  local_109 = 0x101;
  _local_a8 = CONCAT44(4,uVar5 + 1);
  local_c0[uVar5] = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = FUN_1447210f0(param_1);
  local_188 = local_1e0;
  adStack_180[0] = dStack_1d8;
  adStack_180[1] = local_1d0;
  local_1a8 = *param_3;
  dStack_1a0 = param_3[1];
  local_198[0] = param_3[2];
  local_228 = &DAT_14cad0f08;
  local_230 = &DAT_14cad0f10;
  local_238 = &local_120;
  cVar4 = FUN_140386a8e(uVar6,&local_1a8,&local_188,3);
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar4 != '\0') {
    if (DAT_14caf64b8 == 0) {
      local_188 = FUN_141030f22;
      local_1f0 = FUN_14081d0ea;
      local_1f8 = FUN_142b4754c;
      local_208 = &LAB_147c45ce0;
      local_210 = &LAB_1463f1ff4;
      local_218 = &DAT_149e063b2;
      local_220 = 0x4000000000;
      local_228 = (undefined4 *)CONCAT44(local_228._4_4_,0x10000004);
      local_230 = (undefined1 *)CONCAT44(local_230._4_4_,8);
      local_238 = (char **)CONCAT44(local_238._4_4_,0x428);
      local_200 = &local_188;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) {
      lVar8 = param_2[0x39];
      if (lVar8 != 0) {
        lVar7 = FUN_1400b5618();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          bVar3 = 1;
          goto LAB_143844d76;
        }
      }
    }
    else {
      bVar3 = 0;
LAB_143844d76:
      lVar8 = param_2[0x39];
      if (lVar8 == 0) {
        pdVar9 = (double *)&DAT_14c8464e0;
        uVar19 = (undefined4)DAT_14c8464f0;
        uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar19 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
        uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
        pdVar9 = (double *)(lVar8 + 0x260);
      }
      dVar2 = (double)CONCAT44(uVar20,uVar19) - param_3[2];
      dVar15 = pdVar9[1];
      dVar16 = *pdVar9;
      dVar2 = dVar2 * dVar2 +
              (dVar16 - *param_3) * (dVar16 - *param_3) +
              (dVar15 - param_3[1]) * (dVar15 - param_3[1]);
      uVar13 = 0;
      if ((64000000.0 < dVar2) || ((bool)(bVar3 & 4000000.0 < dVar2))) goto LAB_14384510d;
      (**(code **)(*param_2 + 0x528))(param_2,&local_1e4,&local_1e8);
      if ((param_4 == 0) || (uVar5 = *(uint *)(param_1 + 0x8c), (uVar5 & 4) == 0)) {
        uVar6 = FUN_1447210f0(param_1);
        adStack_180[1] = (double)local_1e8 + (double)CONCAT44(uVar20,uVar19);
        adStack_180[0] = dVar15 + 0.0;
        local_188 = (code *)(dVar16 + 0.0);
        local_1a8 = *param_3;
        dStack_1a0 = param_3[1];
        local_198[0] = param_3[2];
        local_228 = &DAT_14cad0f08;
        local_230 = &DAT_14cad0f10;
        local_238 = &local_120;
        cVar4 = FUN_140386a8e(uVar6,&local_1a8,&local_188,3);
        uVar13 = 1;
        if (cVar4 == '\0') goto LAB_14384510d;
        uVar5 = *(uint *)(param_1 + 0x8c);
      }
      if (((uVar5 & 8) == 0) && (((uVar5 & 4) == 0 & param_4) == 0)) {
        dVar14 = (double)CONCAT44(uVar20,uVar19) - param_3[2];
        dVar2 = *param_3;
        dVar1 = param_3[1];
        dVar14 = dVar14 * dVar14;
        uVar13 = 0;
        if ((double)(local_1e4 * local_1e4) /
            ((dVar16 - dVar2) * (dVar16 - dVar2) + (dVar15 - dVar1) * (dVar15 - dVar1) + dVar14) <
            9.999999747378752e-05) goto LAB_14384510d;
        dVar17 = (double)local_1e4;
        adStack_180[0] = dVar15 + dVar17;
        local_188 = (code *)(dVar16 - dVar17);
        adStack_180[1] = (double)CONCAT44(uVar20,uVar19);
        adStack_180[4] = (double)CONCAT44(uVar20,uVar19) + 0.0;
        adStack_180[2] = dVar16 + dVar17;
        adStack_180[3] = adStack_180[0];
        local_158 = local_188;
        local_150 = dVar15 - dVar17;
        local_148 = CONCAT44(uVar20,uVar19);
        local_140 = dVar16 + dVar17;
        local_138 = dVar15 - dVar17;
        local_130 = adStack_180[4];
        dVar14 = dVar14 + ((double)local_188 - dVar2) * ((double)local_188 - dVar2) +
                          (adStack_180[0] - dVar1) * (adStack_180[0] - dVar1);
        lVar8 = 0x28;
        uVar10 = 1;
        uVar11 = 0;
        dVar15 = dVar14;
        do {
          dVar18 = *(double *)((longlong)&local_188 + lVar8) - param_3[2];
          dVar17 = *(double *)((longlong)local_198 + lVar8 + 8) - dVar1;
          dVar16 = *(double *)((longlong)local_198 + lVar8) - dVar2;
          dVar17 = dVar18 * dVar18 + dVar16 * dVar16 + dVar17 * dVar17;
          uVar12 = uVar10;
          dVar16 = dVar17;
          if ((dVar17 <= dVar15) && (uVar12 = uVar13, dVar16 = dVar15, dVar17 < dVar14)) {
            uVar11 = uVar10;
            dVar14 = dVar17;
          }
          lVar8 = lVar8 + 0x18;
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar13 = uVar12;
          dVar15 = dVar16;
        } while (lVar8 != 0x70);
        lVar8 = 0;
        do {
          if ((uVar11 * 0x18 != lVar8) && (uVar12 * 0x18 != lVar8)) {
            uVar6 = FUN_1447210f0(param_1);
            local_1a8 = *(double *)((longlong)&local_188 + lVar8);
            dStack_1a0 = *(double *)((longlong)adStack_180 + lVar8);
            local_198[0] = *(double *)((longlong)adStack_180 + lVar8 + 8);
            local_1c8 = *(undefined4 *)param_3;
            uStack_1c4 = *(undefined4 *)((longlong)param_3 + 4);
            uStack_1c0 = *(undefined4 *)(param_3 + 1);
            uStack_1bc = *(undefined4 *)((longlong)param_3 + 0xc);
            local_1b8 = param_3[2];
            local_228 = &DAT_14cad0f08;
            local_230 = &DAT_14cad0f10;
            local_238 = &local_120;
            cVar4 = FUN_140386a8e(uVar6,&local_1c8,&local_1a8,3);
            if (cVar4 == '\0') {
              uVar13 = CONCAT71((int7)(uVar11 * 0x18 >> 8),1);
              goto LAB_14384510d;
            }
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar8 != 0x60);
      }
    }
    uVar13 = 0;
  }
LAB_14384510d:
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
LAB_143845131:
  if ((local_a0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 143845292 FUN_143845292 body=1621 status=ok
// SIG undefined FUN_143845292(void)

int * FUN_143845292(longlong *param_1,int *param_2,uint *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double _X;
  double _X_00;
  uint uVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  longlong local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_2 = DAT_14cb1eff8;
  *(undefined1 *)(param_2 + 1) = 0;
  if ((param_3[10] & 1) == 0) goto LAB_14384584d;
  if ((param_3[10] & 2) == 0) {
    if (param_1[0x8d] == 0) goto LAB_14384584d;
    _X = *(double *)(param_3 + 4);
    _X_00 = *(double *)(param_3 + 6);
    iVar8 = _finite(*(double *)(param_3 + 2));
    if (((iVar8 != 0) && (iVar8 = _finite(_X), iVar8 != 0)) &&
       (((iVar8 = _finite(_X_00), iVar8 != 0 &&
         (((-DAT_14cb1e7b0 < *(double *)(param_3 + 2) && (*(double *)(param_3 + 2) < DAT_14cb1e7b0))
          && (-DAT_14cb1e7b8 < *(double *)(param_3 + 4))))) &&
        (((*(double *)(param_3 + 4) < DAT_14cb1e7b8 && (-DAT_14cb1e7c0 < *(double *)(param_3 + 6)))
         && (*(double *)(param_3 + 6) < DAT_14cb1e7c0)))))) {
      if ((param_3[10] & 0x40) != 0) {
        lVar9 = FUN_1447210f0(param_1);
        if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x168), lVar9 == 0)) {
LAB_14384541b:
          lVar9 = 0;
        }
        else {
          lVar10 = FUN_1409035a4();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_14384541b;
        }
        uVar11 = (**(code **)(param_1[0x72] + 0x10))(param_1 + 0x72);
        local_138 = DAT_14c8464f0;
        local_148 = DAT_14c8464e0;
        uStack_140 = DAT_14c8464e8;
        local_130 = 0;
        if (lVar9 == 0) {
          cVar7 = '\x01';
        }
        else {
          local_188 = &local_78;
          local_78 = 0;
          uStack_70 = 0;
          local_98 = *(undefined8 *)(param_3 + 2);
          uStack_90 = *(undefined8 *)(param_3 + 4);
          local_88 = *(undefined8 *)(param_3 + 6);
          cVar7 = FUN_147ea450e(lVar9,&local_98,&local_148,uVar11);
        }
        if ((param_3[10] & 2) == 0) {
          *(undefined8 *)(param_3 + 6) = local_138;
          *(undefined8 *)(param_3 + 2) = local_148;
          *(undefined8 *)(param_3 + 4) = uStack_140;
        }
        if (cVar7 == '\0') goto LAB_143845847;
      }
      cVar7 = FUN_147efaec2(param_1[0x8d],param_3);
      uVar4 = local_f4;
      bVar6 = local_d8;
      goto joined_r0x000143845525;
    }
  }
  else {
    if ((((param_3[1] == 0) || (uVar4 = *param_3, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4))
       || (((lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0 ||
            (*(uint *)(lVar9 + 0x10) != param_3[1])) ||
           (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 || (lVar9 = param_1[0x8d], lVar9 == 0))))))
    goto LAB_14384584d;
    cVar7 = FUN_147efaec2(lVar9,param_3);
    uVar4 = (uint)lVar9;
    bVar6 = 0;
joined_r0x000143845525:
    if (cVar7 != '\0') {
      FUN_147ef8328(param_1[0x8d],param_2,0,0);
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_14384584d;
    }
    bVar12 = 0;
    local_148 = 0;
    uStack_140 = 0x7fefffffffffffff;
    local_138 = 0x7fefffffffffffff;
    local_130 = 0x7fefffffffffffff;
    local_128 = 0x7fefffffffffffff;
    uStack_120 = 0x7fefffffffffffff;
    local_118 = 0x7fefffffffffffff;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0x7fefffffffffffff;
    local_f8 = 0;
    local_f4 = uVar4 | 3;
    local_d8 = bVar6 & 0xe0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d4 = 0xbf800000bf800000;
    uStack_cc = 0x3f000000bf800000;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    (**(code **)(param_1[0x72] + 0x18))(param_1 + 0x72,&local_98);
    if ((param_3[10] & 0x80) != 0) {
      lVar9 = param_1[0x8d];
      lVar10 = *(longlong *)(lVar9 + 0x178);
      plVar5 = *(longlong **)(lVar9 + 0x180);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (((lVar10 == 0) || ((*(uint *)(lVar10 + 0x98) & 2) == 0)) ||
         ((*(uint *)(lVar10 + 0x98) & 1) == 0 || (longlong)*(int *)(lVar10 + 0x30) < 2)) {
        bVar12 = 0;
      }
      else {
        lVar9 = (longlong)*(int *)(lVar10 + 0x30) * 0x30;
        puVar3 = (undefined8 *)(*(longlong *)(lVar10 + 0x28) + -0x30 + lVar9);
        local_98 = *puVar3;
        uStack_90 = puVar3[1];
        local_88 = *(undefined8 *)(*(longlong *)(lVar10 + 0x28) + -0x20 + lVar9);
        bVar12 = 1;
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
    cVar7 = FUN_147ea45f2(param_1,param_3,&local_98,&local_148);
    if (cVar7 != '\0') {
      local_158 = 0;
      plStack_150 = (longlong *)0x0;
      (**(code **)(*param_1 + 0x7b8))(param_1,param_3,&local_148,&local_158);
      if ((bool)(bVar12 & local_158 != 0)) {
        lVar9 = param_1[0x8d];
        local_168 = *(undefined8 *)(lVar9 + 0x178);
        local_160 = *(longlong **)(lVar9 + 0x180);
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_160 + 1) = (int)local_160[1] + 1;
          UNLOCK();
        }
        (**(code **)(*param_1 + 0x7f0))(param_1,&local_168,&local_158);
        plVar5 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_160 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_160)(local_160);
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
      if (local_158 == 0) {
        local_168 = CONCAT44(local_168._4_4_,DAT_14cb1eff8);
        iVar8 = DAT_14cb1eff8;
      }
      else {
        local_178 = local_158;
        local_170 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        (**(code **)(*param_1 + 0x7b0))(param_1,&local_168,param_3,&local_178);
        iVar8 = (int)local_168;
      }
      if (iVar8 != -1) {
        *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffffef | param_3[10] >> 6 & 0x10
        ;
        *param_2 = iVar8;
        *(undefined1 *)(param_2 + 1) = 2;
        if (param_4 != (longlong *)0x0) {
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)param_4[1];
          *param_4 = local_158;
          param_4[1] = (longlong)plStack_150;
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
      plVar5 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_150 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_150)(plStack_150);
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
    FUN_147e70c18(&local_148);
  }
LAB_143845847:
  if ((char)param_2[1] == '\0') {
    FUN_147ef8328(param_1[0x8d],param_2,5,0);
  }
LAB_14384584d:
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438458e8 FUN_1438458e8 body=453 status=ok
// SIG undefined FUN_1438458e8(void)

void FUN_1438458e8(undefined8 param_1,uint *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [168];
  longlong local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = FUN_1447210f0();
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x168), lVar5 == 0)) goto LAB_143845947;
  lVar6 = FUN_1409035a4();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_143845947;
  FUN_147e7045e(local_f0,param_3);
  FUN_14383659e(lVar5,&local_48,local_f0,0);
  if ((local_38 == 3) && (local_48 != 0)) {
    if ((param_2[10] & 2) != 0) {
      if (param_2[1] == 0) {
LAB_143845aa7:
        uVar7 = 0;
      }
      else {
        uVar3 = *param_2;
        uVar7 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar8 + 2) != param_2[1] || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
          goto LAB_143845aa7;
          uVar7 = *puVar8;
        }
      }
      FUN_143834864(local_48,uVar7,0x42c80000);
    }
    *(byte *)(local_48 + 0x98) = *(byte *)(local_48 + 0x98) | 0x10;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_4[1];
    *param_4 = local_48;
    param_4[1] = (longlong)local_40;
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_143845947:
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143845aae FUN_143845aae body=1149 status=ok
// SIG undefined FUN_143845aae(void)

ulonglong FUN_143845aae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x120) != param_2) {
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if (((lVar6 != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 != 0)) {
      lVar7 = FUN_1413f6fa8();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        lVar7 = *(longlong *)(param_1 + 0x120);
        if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x48) & 1) != 0)) {
          FUN_147ea5c68(lVar6,lVar7,param_1);
          FUN_147eac408(param_1);
        }
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(param_1 + 0x120) = param_2;
        *(undefined4 *)(param_1 + 0x130) = 0;
        if (*(int *)(param_1 + 0x134) < 0) {
          FUN_144893a1c(param_1 + 0x128);
        }
        plVar1 = (longlong *)(param_1 + 0x138);
        *(undefined4 *)(param_1 + 0x140) = 0;
        if (*(int *)(param_1 + 0x144) < 0) {
          FUN_1448759c8(plVar1);
        }
        *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) & 0xfd;
        lVar6 = *(longlong *)(param_1 + 0x120);
        if ((*(longlong *)(lVar6 + 0x30) != 0) && (0 < (longlong)*(int *)(lVar6 + 0x40))) {
          lVar7 = 0;
          do {
            lVar9 = *(longlong *)(lVar6 + 0x30);
            do {
              uVar10 = (ulonglong)*(int *)(lVar9 + 0x40);
              if (0 < (longlong)uVar10) {
                plVar12 = *(longlong **)(lVar9 + 0x38);
                uVar8 = 0;
                do {
                  if (*plVar12 == *(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar7 * 0x18)) {
                    if ((ushort)~*(ushort *)(lVar9 + 0x4c) != (ushort)uVar8) goto LAB_143845b24;
                    goto LAB_143845c36;
                  }
                  uVar8 = uVar8 + 1;
                  plVar12 = plVar12 + 3;
                } while (uVar10 != uVar8);
              }
              lVar9 = *(longlong *)(lVar9 + 0x30);
            } while (lVar9 != 0);
LAB_143845c36:
            lVar7 = lVar7 + 1;
          } while (lVar7 != *(int *)(lVar6 + 0x40));
        }
        local_68 = param_1 + 0x128;
        FUN_147eac540();
        local_58 = 0;
        uStack_50 = 0;
        uVar13 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x120) + 0x4c) +
                 *(int *)(*(longlong *)(param_1 + 0x120) + 0x40);
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar13);
        }
        if (uVar13 != 0) {
          FUN_147eb86e6(&local_58);
        }
        iVar4 = *(int *)(param_1 + 0x140);
        *(uint *)(param_1 + 0x140) = iVar4 + uVar13;
        if ((uint)(*(int *)(param_1 + 0x144) - iVar4) < uVar13) {
          FUN_14488eebe(plVar1);
        }
        local_60 = plVar1;
        memset((void *)((longlong)iVar4 * 2 + *(longlong *)(param_1 + 0x138)),0,
               (ulonglong)(uVar13 * 2));
        lVar6 = *(longlong *)(param_1 + 0x120);
        if (lVar6 != 0) {
          do {
            iVar4 = *(int *)(lVar6 + 0x40);
            if (0 < iVar4) {
              lVar9 = 8;
              lVar7 = 0;
              do {
                plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar9);
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1);
                  uVar10 = uStack_50;
                  uVar2 = ((ushort)*(byte *)((longlong)plVar1 + 0x2b) * 2 & 4) + (short)plVar1[5];
                  uVar3 = *(ushort *)(lVar6 + 0x4c);
                  uVar13 = uVar2 + 3 & 0xfffffffc;
                  if (uVar2 < 3) {
                    uVar13 = (uint)uVar2;
                  }
                  lVar11 = (longlong)(int)(uint)uStack_50;
                  uVar5 = (uint)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
                  if (uStack_50._4_4_ < uVar5) {
                    FUN_147eb873c(&local_58,uVar10 & 0xffffffff);
                  }
                  uVar10 = (ulonglong)(uVar13 << 0x10);
                  *(uint *)(local_58 + lVar11 * 4) =
                       (uint)uVar3 + (int)lVar7 & 0xffff | uVar13 << 0x10;
                  iVar4 = *(int *)(lVar6 + 0x40);
                }
                lVar7 = lVar7 + 1;
                lVar9 = lVar9 + 0x18;
              } while (lVar7 < iVar4);
            }
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
        FUN_147eb87c1();
        if ((int)(uint)uStack_50 < 1) {
          uVar3 = 0;
        }
        else {
          lVar6 = 0;
          uVar3 = 0;
          do {
            *(ushort *)(*local_60 + (ulonglong)*(ushort *)(local_58 + lVar6 * 4) * 2) = uVar3;
            uVar3 = uVar3 + *(short *)(local_58 + 2 + lVar6 * 4);
            lVar6 = lVar6 + 1;
          } while (lVar6 < (int)(uint)uStack_50);
        }
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
        iVar4 = *(int *)(param_1 + 0x130);
        *(uint *)(param_1 + 0x130) = iVar4 + (uint)uVar3;
        if ((uint)(*(int *)(param_1 + 0x134) - iVar4) < (uint)uVar3) {
          FUN_1447403be(local_68);
        }
        memset((void *)((longlong)iVar4 + *(longlong *)(param_1 + 0x128)),0,(ulonglong)uVar3);
        lVar6 = (longlong)(int)(uint)uStack_50;
        iVar4 = *(int *)(param_1 + 0x150);
        *(uint *)(param_1 + 0x150) = iVar4 + (uint)uStack_50;
        if ((uint)(*(int *)(param_1 + 0x154) - iVar4) < (uint)uStack_50) {
          FUN_1412dc08c((longlong *)(param_1 + 0x148));
        }
        memset((void *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x148)),0,lVar6 << 3);
        if (0 < (int)(uint)uStack_50) {
          lVar6 = 0;
          iVar4 = (uint)uStack_50;
          do {
            uVar3 = *(ushort *)(local_58 + lVar6 * 4);
            if ((ulonglong)uVar3 != 0xffff) {
              lVar7 = *(longlong *)(param_1 + 0x120);
              do {
                if (*(ushort *)(lVar7 + 0x4c) <= uVar3) {
                  lVar7 = ((ulonglong)uVar3 - (ulonglong)*(ushort *)(lVar7 + 0x4c)) * 0x18 +
                          *(longlong *)(lVar7 + 0x38);
                  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 8), lVar7 != 0)) {
                    FUN_147eac5a8(lVar7,param_1);
                    iVar4 = (uint)uStack_50;
                  }
                  break;
                }
                lVar7 = *(longlong *)(lVar7 + 0x30);
              } while (lVar7 != 0);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar4);
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0x120) + 0x48) & 1) != 0) {
          FUN_147eac654(param_1);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        goto LAB_143845b26;
      }
    }
LAB_143845b24:
    uVar10 = 0;
  }
LAB_143845b26:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 143845f5e FUN_143845f5e body=208 status=ok
// SIG undefined FUN_143845f5e(void)

void FUN_143845f5e(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "NavigationSystem";
  local_18 = 0x10;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143846032 FUN_143846032 body=381 status=ok
// SIG undefined FUN_143846032(void)

undefined8 FUN_143846032(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408343c4(&local_38);
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x2b0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x698))(plVar1,&local_58);
    local_38 = local_58;
    uStack_34 = uStack_54;
    iStack_30 = iStack_50;
    uStack_2c = uStack_4c;
    if (CONCAT44(uStack_24,local_28) != 0) {
      FUN_1400020a8();
    }
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
  }
  if (CONCAT44(uStack_34,local_38) != 0) {
    FUN_14475cc44(&local_38,&local_58);
    if (iStack_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)CONCAT44(uStack_54,local_58);
    }
    uVar2 = FUN_140834482();
    local_60 = 0;
    local_68 = 0;
    lVar3 = FUN_141433b6f(uVar2,0,puVar6,0);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    if (lVar3 != 0) {
      lVar4 = FUN_140834482();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar4 = FUN_140834482();
        if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30) {
            lVar5 = lVar3;
          }
        }
        uVar2 = FUN_14642889d(param_2,lVar5);
        goto LAB_143846140;
      }
    }
  }
  uVar2 = 0;
LAB_143846140:
  if (CONCAT44(uStack_24,local_28) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438461c5 FUN_1438461c5 body=69 status=ok
// SIG undefined FUN_1438461c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438461c5(void)

{
  _DAT_14cb1eb60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143846207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1eb68,1);
  return;
}



// FUNCTION 14384620a FUN_14384620a body=69 status=ok
// SIG undefined FUN_14384620a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384620a(void)

{
  _DAT_14cb1eb78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014384624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1eb80,1);
  return;
}



// FUNCTION 14384624f FUN_14384624f body=69 status=ok
// SIG undefined FUN_14384624f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384624f(void)

{
  _DAT_14cb1eb90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143846291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1eb98,1);
  return;
}



// FUNCTION 143846294 FUN_143846294 body=822 status=ok
// SIG undefined FUN_143846294(void)

void FUN_143846294(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x210) & 0x60) == 0) {
    *(undefined2 *)(param_1 + 0x210) = 0xfff;
    bVar3 = *(byte *)(param_1 + 0x2da);
    if ((bVar3 & 8) == 0) {
      bVar3 = bVar3 | 8;
      *(byte *)(param_1 + 0x2da) = bVar3;
      lVar9 = (longlong)*(int *)(param_1 + 0x170);
      if (0 < (longlong)*(int *)(param_1 + 0x170)) {
        do {
          local_78 = lVar9 + -1;
          lVar5 = *(longlong *)(param_1 + 0x168);
          lVar10 = local_78 * 0x58;
          lVar7 = lVar5 + lVar10;
          lVar8 = (longlong)*(int *)(lVar5 + 0x18 + lVar10);
          local_80 = lVar9;
          if (lVar8 != 0) {
            lVar9 = *(longlong *)(lVar5 + 0x10 + lVar10);
            lVar11 = 0;
            do {
              lVar2 = *(longlong *)(lVar9 + lVar11);
              FUN_147eb9fbc(lVar2,param_1,
                            (ulonglong)*(ushort *)(lVar2 + 0x52) + *(longlong *)(lVar7 + 0x30));
              lVar11 = lVar11 + 8;
            } while (lVar8 * 8 != lVar11);
          }
          *(undefined4 *)(lVar7 + 0x18) = 0;
          if (*(int *)(lVar7 + 0x1c) < 0) {
            FUN_147eb859c(lVar5 + lVar10 + 0x10);
          }
          local_50 = &local_68;
          local_58 = FUN_14384a03a;
          local_68 = lVar7;
          local_60 = param_1;
          FUN_147ea6cfe(lVar7,&local_58);
          if (*(char *)(lVar7 + 0x41) == '\x01') {
            lVar9 = *(longlong *)(lVar7 + 8);
            if (lVar9 == 0) {
LAB_143846431:
              lVar9 = 0;
            }
            else {
              lVar5 = FUN_141247a20();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_143846431;
            }
            FUN_147ea6da2(param_1,lVar9);
            *(undefined1 *)(lVar7 + 0x41) = 2;
            uVar4 = FUN_147ebe854(lVar9,param_1,
                                  (ulonglong)*(ushort *)(lVar9 + 0x52) + *(longlong *)(lVar7 + 0x30)
                                 );
            if (*(char *)(lVar7 + 0x41) == '\x02') {
              FUN_147ea6e12(param_1,lVar9,uVar4);
            }
          }
          lVar9 = local_78;
        } while (1 < local_80);
        bVar3 = *(byte *)(param_1 + 0x2da);
      }
    }
    if ((param_2 == 1) || ((bVar3 & 2) == 0)) {
      uVar6 = 0;
      if (*(int *)(param_1 + 0x170) != 0) {
        local_6c = 2;
        local_88 = &local_68;
        FUN_147ea6ff4(param_1,**(undefined8 **)(param_1 + 0x168),0);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x170);
        if (0 < (int)*(uint *)(param_1 + 0x170)) {
          lVar7 = 0;
          lVar9 = 0;
          do {
            FUN_147ea718a(*(longlong *)(param_1 + 0x168) + lVar7,param_1,0);
            lVar9 = lVar9 + 1;
            uVar6 = (ulonglong)*(int *)(param_1 + 0x170);
            lVar7 = lVar7 + 0x58;
          } while (lVar9 < (longlong)uVar6);
        }
      }
      iVar1 = *(int *)(param_1 + 0x174);
      FUN_145cde789(*(undefined8 *)(param_1 + 0x168),uVar6);
      *(undefined4 *)(param_1 + 0x170) = 0;
      if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
        FUN_147eb65c0(param_1 + 0x168);
      }
      if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x26c)) {
        FUN_147eb65f0(param_1 + 0x238);
        FUN_147eb6734(param_1 + 0x238);
      }
      FUN_147ea726e(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0x1e8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined1 *)(param_1 + 0x1fb) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined2 *)(param_1 + 0x2d8) = 0;
      *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) & 0xe1;
      FUN_147ea6872(param_1,0x7f7fffff);
    }
    FUN_147ea7ae4(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar9 = *(longlong *)(param_1 + 0x218);
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar9 + lVar7) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar7) = 0;
    *(ushort *)(lVar9 + 0xc + lVar7) = (ushort)(param_2 == 1) * 0x20 + 0x20;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438465cc FUN_1438465cc body=1484 status=ok
// SIG undefined FUN_1438465cc(void)

undefined8 FUN_1438465cc(longlong param_1,ulonglong param_2)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ushort uVar18;
  longlong lVar19;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined2 local_7a;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  longlong local_58;
  ushort local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(longlong *)(param_2 + 0x38) == 0) || (*(longlong **)(param_1 + 0x118) == (longlong *)0x0))
     || (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), cVar6 != '\0')) {
    lVar9 = *(longlong *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    uVar10 = FUN_147ea65f4(lVar9);
    if (uVar10 != 0) {
      iVar8 = *(int *)(param_1 + 0x170);
      if (iVar8 == 0) {
LAB_1438466b9:
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)
                 (*(longlong *)(param_1 + 0x168) + 8 +
                 (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58);
        if (lVar9 == 0) goto LAB_1438466b9;
        plVar15 = *(longlong **)(lVar9 + 0x48);
        if (plVar15 != (longlong *)0x0) {
          if (iVar8 < 1) {
            lVar14 = 0;
          }
          else {
            lVar14 = (ulonglong)*(ushort *)((longlong)plVar15 + 0x52) +
                     *(longlong *)
                      (*(longlong *)(param_1 + 0x168) + 0x30 + (ulonglong)(iVar8 - 1) * 0x58);
          }
          uVar16 = 0xfffffffe;
          if (0 < (longlong)(int)plVar15[0xc]) {
            plVar17 = (longlong *)(plVar15[0xb] + 8);
            uVar13 = 0;
            do {
              if ((plVar17[-1] == lVar9) || (*plVar17 == lVar9)) {
                uVar16 = uVar13 & 0xffffffff;
                break;
              }
              uVar13 = uVar13 + 1;
              plVar17 = plVar17 + 6;
            } while ((longlong)(int)plVar15[0xc] != uVar13);
          }
          cVar6 = (**(code **)(*plVar15 + 0x2f8))(plVar15,param_1,lVar14,uVar16);
          if (cVar6 == '\0') goto LAB_143846619;
        }
      }
      plVar15 = (longlong *)(uVar10 + 0x30);
      if (0 < (longlong)*(int *)(uVar10 + 0x38)) {
        lVar14 = *plVar15;
        lVar12 = 0;
        do {
          if (*(ulonglong *)(lVar14 + lVar12) == param_2) {
            lVar19 = *(longlong *)(lVar14 + 8 + lVar12);
            uVar18 = *(ushort *)(lVar14 + 0x10 + lVar12);
            goto LAB_14384693e;
          }
          lVar12 = lVar12 + 0x18;
        } while ((longlong)*(int *)(uVar10 + 0x38) * 0x18 != lVar12);
      }
      lVar14 = *(longlong *)(param_2 + 0x30);
      if (lVar14 != 0) {
        local_a0 = plVar15;
        local_90 = lVar9;
        if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(param_2);
          lVar14 = *(longlong *)(param_2 + 0x30);
        }
        local_b8 = CONCAT44(local_b8._4_4_,0xfff00007);
        local_c0 = local_c0 & 0xffffffff00000000;
        local_c8 = (longlong *)0x0;
        local_a8 = param_1;
        local_60 = param_2;
        lVar9 = FUN_14092e7b3(lVar14,uVar10,0,0xffffffff);
        local_58 = 0;
        if (lVar9 != 0) {
          lVar14 = FUN_14587de5c();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) {
            local_58 = 0;
          }
          else {
            local_58 = lVar9;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar9);
            }
          }
        }
        local_c8 = &local_78;
        local_78 = 0;
        uStack_70 = 0;
        local_7a = 0;
        uVar18 = 0;
        local_c0 = param_2;
        local_b8 = uVar10;
        local_98 = uVar10;
        local_88 = param_2;
        FUN_143848ce8(0,local_58,0);
        FUN_147eb7baa(local_78,uStack_70 & 0xffffffff);
        if (0 < (int)uStack_70) {
          lVar14 = 0;
          lVar12 = 0;
          uVar18 = 0;
          lVar9 = local_78;
          iVar8 = (int)uStack_70;
          bVar7 = DAT_14c950c29;
          do {
            lVar19 = *(longlong *)(lVar9 + lVar14);
            lVar5 = *(longlong *)(lVar9 + 8 + lVar14);
            uVar1 = *(undefined1 *)(lVar9 + 0x16 + lVar14);
            sVar2 = *(short *)(lVar9 + 0x14 + lVar14);
            uVar3 = *(undefined2 *)(lVar9 + 0x10 + lVar14);
            if ((lVar5 != 0) && ((bVar7 & 1) != 0)) {
              FUN_1456cec3c(lVar5);
              lVar9 = local_78;
              iVar8 = (int)uStack_70;
              bVar7 = DAT_14c950c29;
            }
            *(longlong *)(lVar19 + 0x48) = lVar5;
            *(undefined2 *)(lVar19 + 0x50) = uVar3;
            *(ushort *)(lVar19 + 0x52) = sVar2 + uVar18;
            *(undefined1 *)(lVar19 + 0x54) = uVar1;
            uVar18 = uVar18 + *(short *)(lVar9 + 0x12 + lVar14);
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + 0x18;
          } while (lVar12 < iVar8);
        }
        plVar15 = local_a0;
        iVar8 = *(int *)(local_98 + 0x38);
        *(uint *)(local_98 + 0x38) = iVar8 + 1U;
        local_50 = uVar18;
        if (*(uint *)(local_98 + 0x3c) < iVar8 + 1U) {
          FUN_147eb8172(local_a0,iVar8);
        }
        FUN_147eb8112((longlong)iVar8 * 0x18 + *plVar15,&local_60);
        lVar19 = local_58;
        lVar9 = local_90;
        param_1 = local_a8;
        param_2 = local_88;
        if (local_78 != 0) {
          FUN_1400020a8();
          param_2 = local_88;
        }
LAB_14384693e:
        plVar15 = (longlong *)FUN_147ea8e40(param_1 + 0x168);
        bVar7 = FUN_147ea8e80(param_1,param_2,lVar9,*(int *)(param_1 + 0x170) + -1);
        *(byte *)(plVar15 + 8) = bVar7;
        *plVar15 = lVar19;
        plVar15[1] = 0;
        *(undefined1 *)((longlong)plVar15 + 0x41) = 0;
        lVar9 = *(longlong *)(param_1 + 0x178) + (ulonglong)bVar7 * 0x38;
        lVar14 = *(longlong *)(param_1 + 0x178) + (ulonglong)bVar7 * 0x38;
        local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar14 + 0x30));
        uVar4 = *(uint *)(lVar14 + 0x28);
        local_a8 = lVar19;
        if (uVar4 != uVar18) {
          *(uint *)(lVar9 + 0x28) = uVar4 + uVar18;
          if (*(int *)(lVar9 + 0x2c) - uVar4 < (uint)uVar18) {
            FUN_1447403be((longlong *)(lVar14 + 0x20));
          }
          memset((void *)(*(longlong *)(lVar9 + 0x20) + (longlong)(int)uVar4),0,
                 (ulonglong)(uint)uVar18);
          *(longlong *)(lVar9 + 8) = local_a8;
        }
        plVar17 = plVar15 + 6;
        if (plVar17 != (longlong *)(lVar14 + 0x20)) {
          iVar8 = *(int *)(lVar9 + 0x28);
          _Src = *(void **)(lVar9 + 0x20);
          *(int *)(plVar15 + 7) = iVar8;
          if (iVar8 == 0 && *(int *)((longlong)plVar15 + 0x3c) == 0) {
            *(undefined4 *)((longlong)plVar15 + 0x3c) = 0;
          }
          else {
            FUN_1447a127e(plVar17,iVar8);
            if (iVar8 != 0) {
              memcpy((void *)*plVar17,_Src,(longlong)iVar8);
            }
          }
        }
        lVar9 = local_a8;
        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(uint)(uVar4 == uVar18));
        FUN_147ea9050(plVar15,param_1,local_a8,&local_60);
        *(short *)(param_1 + 0x2d8) = (short)*(undefined4 *)(param_1 + 0x170) + -1;
        if (0 < *(int *)(lVar9 + 0x70)) {
          lVar14 = 0;
          do {
            lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x68) + lVar14 * 8);
            uVar18 = *(ushort *)(lVar12 + 0x52);
            lVar19 = *(longlong *)
                      (*(longlong *)(param_1 + 0x168) + 0x30 +
                      (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58);
            FUN_147ebafee(lVar12,param_1 + 0x198);
            lVar9 = *(longlong *)(param_1 + 0x168) + (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58;
            iVar8 = *(int *)(lVar9 + 0x18);
            *(uint *)(lVar9 + 0x18) = iVar8 + 1U;
            if (*(uint *)(lVar9 + 0x1c) < iVar8 + 1U) {
              FUN_147eb847a((longlong *)(lVar9 + 0x10),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar8 * 8) = lVar12;
            FUN_147eb9f02(lVar12,param_1,(ulonglong)uVar18 + lVar19);
            lVar14 = lVar14 + 1;
            lVar9 = local_a8;
          } while (lVar14 < *(int *)(local_a8 + 0x70));
        }
        FUN_147eb73de(param_1,param_2);
        if ((*(byte *)(param_1 + 0x211) & 1) == 0) {
          local_b8 = local_b8 & 0xffffffffffffff00;
          local_c0 = CONCAT44(local_c0._4_4_,3);
          local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
          FUN_143846b9a(param_1,lVar9,*(undefined2 *)(param_1 + 0x2d8),lVar9);
        }
        else {
          iVar8 = *(int *)(param_1 + 0x220);
          *(uint *)(param_1 + 0x220) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x224) < iVar8 + 1U) {
            FUN_147eb653a((longlong *)(param_1 + 0x218),iVar8);
          }
          lVar14 = *(longlong *)(param_1 + 0x218);
          lVar12 = (longlong)iVar8 * 0x10;
          *(longlong *)(lVar14 + lVar12) = lVar9;
          *(undefined4 *)(lVar14 + 8 + lVar12) = 0;
          *(undefined2 *)(lVar14 + 0xc + lVar12) = 0x100;
        }
        uVar11 = 1;
        goto LAB_14384661b;
      }
    }
  }
LAB_143846619:
  uVar11 = 0;
LAB_14384661b:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143846b9a FUN_143846b9a body=2925 status=ok
// SIG undefined FUN_143846b9a(void)

void FUN_143846b9a(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,uint param_5
                  ,int param_6)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ushort *puVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  bool bVar20;
  undefined1 auStack_1a8 [32];
  int local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 *local_170;
  uint local_168;
  undefined2 *local_160;
  undefined2 *local_158;
  undefined4 local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  wchar_t *local_138;
  uint local_124;
  uint local_120;
  int local_11c;
  undefined2 *local_118;
  int local_10c;
  ulonglong local_108;
  longlong local_100;
  undefined2 *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  wchar_t *local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(byte *)(param_1 + 0x2da) & 0x10) == 0) ||
     (*(int *)(param_1 + 0x170) <= (int)(uint)*(ushort *)(param_1 + 0x2d8))) goto LAB_143847241;
  uVar3 = (ushort)param_3;
  lVar10 = *(longlong *)(param_1 + 0xa8);
  if ((lVar10 != 0) &&
     (((*(byte *)(lVar10 + 0x65) & 2) != 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0))))
  goto LAB_143847241;
  uVar2 = *(uint *)(param_1 + 0x208);
  bVar13 = (byte)uVar2 | *(longlong *)(param_1 + 0x200) != 0;
  uVar14 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar13);
  if ((bVar13 & (uVar2 & 3) == 1) != 0) goto LAB_143847241;
  local_100 = *(longlong *)(param_1 + 0x1f0);
  local_124 = (uint)*(ushort *)(param_4 + 0x50);
  if ((*(short *)(param_1 + 0x210) != 0) &&
     (iVar7 = *(int *)(param_1 + 0x220), (longlong)iVar7 != 0)) {
    lVar10 = *(longlong *)(param_1 + 0x218);
    lVar17 = 0;
    do {
      sVar1 = *(short *)(lVar10 + 0xc + lVar17);
      if (sVar1 == 0x10) {
        uVar12 = *(ulonglong *)(lVar10 + lVar17);
        if (uVar12 != 0) {
          lVar9 = FUN_14587de5c();
          uVar14 = (ulonglong)*(int *)(lVar9 + 0x38);
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(uVar12 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x30) + uVar14 * 8) ==
              lVar9 + 0x30)) goto LAB_143846d11;
        }
      }
      else if ((sVar1 == 8) && (lVar9 = *(longlong *)(lVar10 + lVar17), lVar9 != 0)) {
        lVar8 = FUN_1411e5eac();
        uVar14 = (ulonglong)*(int *)(lVar8 + 0x38);
        if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + uVar14 * 8) ==
              lVar8 + 0x30)) && (lVar8 = *(longlong *)(lVar9 + 0x48), lVar8 != 0)) &&
           (((int)(uint)*(byte *)(lVar9 + 0x59) < *(int *)(lVar8 + 0x60) &&
            (uVar12 = *(ulonglong *)
                       (*(longlong *)(lVar8 + 0x58) +
                       (ulonglong)((uint)*(byte *)(lVar9 + 0x59) * 0x30)), uVar12 != 0)))) {
LAB_143846d11:
          uVar14 = uVar12;
          iVar6 = FUN_147ea72f6(param_1,uVar12);
          if ((iVar6 != -1) &&
             (((uVar3 == (ushort)iVar6 && (*(ushort *)(uVar12 + 0x50) <= (ushort)local_124)) &&
              ((ushort)local_124 <= *(ushort *)(uVar12 + 0x7c))))) goto LAB_143847241;
        }
      }
      lVar17 = lVar17 + 0x10;
    } while ((longlong)iVar7 * 0x10 != lVar17);
  }
  iVar7 = (int)CONCAT62((int6)(uVar14 >> 0x10),0xffff);
  if (-1 < (int)param_5 && param_6 == 2) {
    local_124 = FUN_147ebb344(param_2,param_5,0);
    iVar7 = FUN_147ebb344(param_2,param_5 + 1,0);
  }
  uVar2 = (uint)param_3;
  if (local_100 != 0) {
    bVar20 = *(ushort *)(param_1 + 0x1e8) < uVar3;
    if (*(ushort *)(param_1 + 0x1e8) == uVar3) {
      bVar20 = *(ushort *)(param_1 + 0x1ea) < (ushort)local_124;
    }
    if (bVar20) {
      uVar5 = *(ushort *)(param_1 + 0x1ec);
      if (param_6 == 2) {
        if (uVar5 != 0xffff) {
          bVar20 = uVar5 < uVar3;
          if (uVar5 == uVar3) {
            bVar20 = *(ushort *)(param_1 + 0x1ee) < (ushort)iVar7;
          }
          if (bVar20) {
            *(uint *)(param_1 + 0x1ec) = uVar2 & 0xffff | iVar7 << 0x10;
          }
        }
      }
      else if (uVar5 != 0xffff) {
        *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
      }
      goto LAB_143847241;
    }
  }
  local_11c = iVar7;
  if (((*(byte *)(param_1 + 0x1e4) & 1) != 0) || ((*(byte *)(param_1 + 0x2da) & 2) != 0)) {
    uVar5 = *(ushort *)(param_1 + 0x1c0);
    if (uVar3 != uVar5 || (ushort)local_124 != *(ushort *)(param_1 + 0x1c2)) {
      bVar20 = uVar5 < uVar3;
      if (uVar5 == uVar3) {
        bVar20 = *(ushort *)(param_1 + 0x1c2) < (ushort)local_124;
      }
      if (((bVar20) && (uVar5 = *(ushort *)(param_1 + 0x1d4), uVar5 != 0xffff)) &&
         ((uVar5 < uVar3 ||
          (((uVar5 == uVar3 && (*(ushort *)(param_1 + 0x1d6) <= (ushort)local_124)) &&
           ((ushort)local_124 < *(ushort *)(param_1 + 0x1da))))))) goto LAB_143847241;
    }
  }
  if (param_6 != 2) {
    if (((-1 < (int)param_5) && ((int)param_5 < *(int *)(param_2 + 0x60))) &&
       (0 < *(int *)(*(longlong *)(param_2 + 0x58) + 0x28 + (ulonglong)param_5 * 0x30))) {
      lVar10 = FUN_1411e5eac();
      if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
         (cVar4 = FUN_147eba4ca(param_2,param_1,param_3 & 0xffffffff,param_5), cVar4 != '\0'))
      goto LAB_143847241;
    }
    *(longlong *)(param_1 + 0x1f0) = param_2;
    *(ushort *)(param_1 + 0x1f8) = uVar3;
LAB_143847116:
    bVar20 = param_6 != 2;
    uVar5 = *(ushort *)(param_1 + 0x1ec);
    if (uVar5 == 0xffff) {
      uVar5 = 0xffff;
    }
    else if (uVar5 == uVar3) {
      uVar5 = uVar3;
      if (*(ushort *)(param_1 + 0x1ee) < (ushort)local_11c) {
LAB_14384715a:
        *(uint *)(param_1 + 0x1ec) = uVar2 & 0xffff | local_11c << 0x10;
        uVar5 = uVar3;
      }
    }
    else if (uVar5 < uVar3) goto LAB_14384715a;
    *(uint *)(param_1 + 0x1e8) = uVar2 & 0xffff | local_124 << 0x10;
    *(char *)(param_1 + 0x1fa) = (char)param_6;
    bVar13 = *(byte *)(param_1 + 0x1fb);
    *(byte *)(param_1 + 0x1fb) = bVar13 & 0xfe | bVar20;
    iVar7 = *(int *)(param_1 + 0x170);
    if (iVar7 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)
                (*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58
                );
    }
    *(byte *)(param_1 + 0x1fb) = bVar13 & 0xfc | bVar20 | (lVar10 != param_4) * '\x02';
    *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) | 2;
    if ((*(uint *)(param_1 + 0x1e4) & 4) != 0) {
      *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
    }
    if (iVar7 == 0) {
      bVar20 = false;
    }
    else {
      bVar20 = *(char *)(*(longlong *)(param_1 + 0x168) + 0x41 + (longlong)(iVar7 + -1) * 0x58) ==
               '\x02';
    }
    bVar13 = *(byte *)(param_1 + 0x2da);
    if (!(bool)(~bVar20 & (bVar13 & 2) == 0)) {
      if (uVar5 != 0xffff) {
        *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
      }
      FUN_143847838(param_1);
      if ((bVar13 & 2) != 0) goto LAB_143847241;
    }
    FUN_147ea6872(param_1,0);
    *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) | 4;
    goto LAB_143847241;
  }
  if (((-1 < (int)param_5) && (cVar4 = FUN_147ea7518(param_1,param_4,param_5), cVar4 == '\0')) &&
     (cVar4 = FUN_147eba4ca(param_2,param_1,param_3 & 0xffffffff,param_5), cVar4 == '\0'))
  goto LAB_143847241;
  lVar10 = *(longlong *)(param_1 + 0x1f0);
  if (lVar10 == 0) {
    puVar11 = (ushort *)(param_1 + 0x2d8);
    lVar17 = (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58;
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0x168) + lVar17);
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + lVar17);
    if (lVar17 != 0) {
      if (*(char *)((longlong)plVar15 + 0x41) == '\0') goto LAB_143846f42;
      plVar15 = (longlong *)(lVar17 + 0x48);
    }
    lVar17 = *plVar15;
  }
  else {
    puVar11 = (ushort *)(param_1 + 0x1f8);
    lVar17 = lVar10;
  }
LAB_143846f42:
  if (lVar10 == param_2) {
LAB_14384710b:
    if (local_100 != 0) goto LAB_143847116;
    bVar20 = false;
    goto LAB_14384715a;
  }
  uVar5 = *puVar11;
  local_120 = uVar2;
  if (uVar5 <= uVar3) {
    local_120 = (uint)uVar5;
  }
  lVar10 = param_2;
  if (uVar5 < uVar3) {
    lVar10 = *(longlong *)
              (*(longlong *)
                (*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)(ushort)local_120 * 0x58) + 0x48);
  }
  lVar9 = lVar17;
  if (uVar3 < uVar5) {
    lVar9 = *(longlong *)
             (*(longlong *)
               (*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)(ushort)local_120 * 0x58) + 0x48);
  }
  if ((uVar5 < uVar3) && (lVar10 == 0)) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (ulonglong)(ushort)local_120 * 0x58);
  }
  if (lVar9 == 0) {
    if (uVar3 < uVar5) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (ulonglong)(ushort)local_120 * 0x58);
      goto LAB_143846fee;
    }
    lVar9 = 0;
LAB_1438472e5:
    local_10c = (int)(param_3 & 0xffff);
    local_118 = (undefined2 *)lVar17;
    if ((local_10c < *(int *)(param_1 + 0x170)) &&
       (bVar13 = *(byte *)(*(longlong *)(param_1 + 0x168) + 0x40 + (param_3 & 0xffff) * 0x58),
       (int)(uint)bVar13 < *(int *)(param_1 + 0x180))) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (ulonglong)bVar13 * 0x38);
      if (lVar17 == 0) {
        pwVar16 = L"None";
        goto LAB_143847341;
      }
      local_68 = *(undefined2 **)(lVar17 + 0x18);
      FUN_1400021e4(&local_68,&local_58);
    }
    else {
      pwVar16 = L"unknown";
LAB_143847341:
      FUN_140056680(&local_58,pwVar16);
    }
    if (((int)(uint)uVar5 < *(int *)(param_1 + 0x170)) &&
       (bVar13 = *(byte *)(*(longlong *)(param_1 + 0x168) + 0x40 + (ulonglong)(uint)uVar5 * 0x58),
       (int)(uint)bVar13 < *(int *)(param_1 + 0x180))) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (ulonglong)bVar13 * 0x38);
      if (lVar17 == 0) {
        pwVar16 = L"None";
        goto LAB_14384739a;
      }
      local_78 = *(undefined2 **)(lVar17 + 0x18);
      FUN_1400021e4(&local_78,&local_68);
    }
    else {
      pwVar16 = L"unknown";
LAB_14384739a:
      FUN_140056680(&local_68,pwVar16);
    }
    local_108 = (ulonglong)(ushort)local_120;
    if (((int)(local_120 & 0xffff) < *(int *)(param_1 + 0x170)) &&
       (bVar13 = *(byte *)(*(longlong *)(param_1 + 0x168) + 0x40 + local_108 * 0x58),
       (int)(uint)bVar13 < *(int *)(param_1 + 0x180))) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (ulonglong)bVar13 * 0x38);
      if (lVar17 == 0) {
        pwVar16 = L"None";
        goto LAB_1438473ff;
      }
      local_88 = *(undefined2 **)(lVar17 + 0x18);
      FUN_1400021e4(&local_88,&local_78);
    }
    else {
      pwVar16 = L"unknown";
LAB_1438473ff:
      FUN_140056680(&local_78,pwVar16);
    }
    local_d0 = L" (root)";
    if (*(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + local_108 * 0x58) !=
        *(longlong *)(*(longlong *)(param_1 + 0x168) + local_108 * 0x58)) {
      local_d0 = L"";
    }
    FUN_147ea9852(&local_88);
    local_d8 = &DAT_149dfb77a;
    if (local_80 != 0) {
      local_d8 = local_88;
    }
    local_e0 = &DAT_149dfb77a;
    if (local_70 != 0) {
      local_e0 = local_78;
    }
    FUN_147ea9852(&local_98,lVar9);
    local_e8 = &DAT_149dfb77a;
    if (local_90 != 0) {
      local_e8 = local_98;
    }
    local_f0 = &DAT_149dfb77a;
    if (local_60 != 0) {
      local_f0 = local_68;
    }
    FUN_147ea9852(&local_a8,local_118);
    local_118 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      local_118 = local_a8;
    }
    FUN_147ea9852(&local_b8,lVar10);
    local_f8 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      local_f8 = local_b8;
    }
    puVar19 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar19 = local_58;
    }
    FUN_147ea9852(&local_c8,param_2);
    puVar18 = &DAT_149dfb77a;
    if (local_c0 != 0) {
      puVar18 = local_c8;
    }
    local_138 = local_d0;
    local_140 = local_d8;
    local_148 = local_e0;
    local_150 = (undefined4)local_108;
    local_158 = local_e8;
    local_160 = local_f0;
    local_168 = (uint)uVar5;
    local_170 = local_118;
    local_178 = local_f8;
    local_188 = local_10c;
    local_180 = puVar19;
    FUN_140033559(".\\Runtime/AIModule/Private/BehaviorTree/BehaviorTreeComponent.cpp",0x45a,
                  L"Fatal error in FindCommonParent() call.\nInNodeA: %s, InstanceIdxA: %d (%s), NodeA: %s\nInNodeB: %s, InstanceIdxB: %d (%s), NodeB: %s\nCommonInstanceIdx: %d (%s), ActiveNode: %s%s"
                  ,puVar18);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar10 = 0;
  }
  else {
LAB_143846fee:
    if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_1438472e5;
    bVar13 = *(byte *)(lVar9 + 0x54);
    for (; bVar13 < *(byte *)(lVar10 + 0x54); lVar10 = *(longlong *)(lVar10 + 0x48)) {
    }
    while (*(byte *)(lVar10 + 0x54) < bVar13) {
      lVar9 = *(longlong *)(lVar9 + 0x48);
      bVar13 = *(byte *)(lVar9 + 0x54);
    }
    for (; lVar10 != lVar9; lVar10 = *(longlong *)(lVar10 + 0x48)) {
      lVar9 = *(longlong *)(lVar9 + 0x48);
    }
  }
  param_3 = param_3 & 0xffffffff;
  do {
    if ((param_2 == 0) || (param_2 == lVar10)) {
LAB_1438470f6:
      *(longlong *)(param_1 + 0x1f0) = lVar10;
      *(short *)(param_1 + 0x1f8) = (short)local_120;
      goto LAB_14384710b;
    }
    lVar17 = *(longlong *)(param_2 + 0x48);
    if (lVar17 == 0) {
      if ((int)param_3 < 1) goto LAB_1438470f6;
      param_3 = (ulonglong)((int)param_3 - 1);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + param_3 * 0x58);
      lVar17 = *(longlong *)(lVar9 + 0x48);
      uVar14 = 0xfffffffe;
      if (0 < (longlong)*(int *)(lVar17 + 0x60)) {
        plVar15 = (longlong *)(*(longlong *)(lVar17 + 0x58) + 8);
        uVar12 = 0;
        do {
          if ((plVar15[-1] == lVar9) || (*plVar15 == lVar9)) {
            uVar14 = uVar12 & 0xffffffff;
            break;
          }
          uVar12 = uVar12 + 1;
          plVar15 = plVar15 + 6;
        } while ((longlong)*(int *)(lVar17 + 0x60) != uVar12);
      }
    }
    else {
      uVar14 = 0xfffffffe;
      if (0 < (longlong)*(int *)(lVar17 + 0x60)) {
        plVar15 = (longlong *)(*(longlong *)(lVar17 + 0x58) + 8);
        uVar12 = 0;
        do {
          if ((plVar15[-1] == param_2) || (*plVar15 == param_2)) {
            uVar14 = uVar12 & 0xffffffff;
            break;
          }
          uVar12 = uVar12 + 1;
          plVar15 = plVar15 + 6;
        } while ((longlong)*(int *)(lVar17 + 0x60) != uVar12);
      }
    }
    cVar4 = FUN_147eba4ca(lVar17,param_1,param_3,uVar14);
    param_2 = lVar17;
  } while (cVar4 != '\0');
LAB_143847241:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143847708 FUN_143847708 body=304 status=ok
// SIG undefined FUN_143847708(void)

void FUN_143847708(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x211) & 4) == 0) {
    FUN_143846294(param_1,1);
    FUN_147ea66a4(param_1);
    iVar1 = *(int *)(param_1 + 0x184);
    FUN_145cde89a(*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x180) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x184) != 0)) {
      FUN_147eb686c(param_1 + 0x178);
    }
    iVar1 = *(int *)(param_1 + 0x174);
    FUN_145cde789(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
      FUN_147eb65c0(param_1 + 0x168);
    }
    if (*(int *)(param_1 + 0x194) < 0) {
      *(undefined4 *)(param_1 + 400) = 0;
      FUN_147eb689c(param_1 + 0x188);
      return;
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(undefined2 *)(lVar2 + 0xc + lVar3) = 0x400;
  }
  return;
}



// FUNCTION 143847838 FUN_143847838 body=467 status=ok
// SIG undefined FUN_143847838(void)

void FUN_143847838(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (-1 < *(int *)(param_1 + 0x1d0)) {
    *(short *)(param_1 + 0x2d8) = (short)*(int *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1dc) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x1e4) & 8) == 0) {
      if (0 < *(int *)(param_1 + 0x170)) {
        lVar11 = 0x30;
        lVar10 = 0;
        do {
          lVar3 = *(longlong *)(param_1 + 0x168);
          puVar1 = (undefined8 *)(lVar3 + lVar11);
          lVar7 = *(longlong *)(param_1 + 0x178) +
                  (ulonglong)*(byte *)(lVar3 + 0x10 + lVar11) * 0x38;
          puVar8 = (undefined8 *)(lVar7 + 0x20);
          if (puVar1 != puVar8) {
            iVar2 = *(int *)(lVar7 + 0x28);
            pvVar4 = (void *)*puVar8;
            *(int *)(lVar3 + 8 + lVar11) = iVar2;
            if (iVar2 == 0 && *(int *)(lVar3 + 0xc + lVar11) == 0) {
              *(undefined4 *)(lVar3 + 0xc + lVar11) = 0;
            }
            else {
              FUN_1447a127e(puVar1,iVar2);
              if (iVar2 != 0) {
                memcpy((void *)*puVar1,pvVar4,(longlong)iVar2);
              }
            }
          }
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0x58;
        } while (lVar10 < *(int *)(param_1 + 0x170));
      }
    }
    else if (0 < *(int *)(param_1 + 0x170)) {
      lVar11 = 0x30;
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x168);
        lVar7 = (ulonglong)*(byte *)(lVar3 + 0x10 + lVar11) * 0x38 + *(longlong *)(param_1 + 0x178);
        plVar5 = *(longlong **)(lVar3 + -0x28 + lVar11);
        if ((plVar5 != (longlong *)0x0) && (uVar6 = (**(code **)(*plVar5 + 0x2c0))(), uVar6 != 0)) {
          uVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar3 + -0x28 + lVar11) + 0x52);
          memcpy((void *)(uVar9 + *(longlong *)(lVar7 + 0x20)),
                 (void *)(*(longlong *)(lVar3 + lVar11) + uVar9),(ulonglong)uVar6);
        }
        puVar1 = (undefined8 *)(lVar11 + lVar3);
        if (puVar1 != (undefined8 *)(lVar7 + 0x20)) {
          iVar2 = *(int *)(lVar7 + 0x28);
          pvVar4 = *(void **)(lVar7 + 0x20);
          *(int *)(lVar3 + 8 + lVar11) = iVar2;
          if (iVar2 == 0 && *(int *)(lVar3 + 0xc + lVar11) == 0) {
            *(undefined4 *)(lVar3 + 0xc + lVar11) = 0;
          }
          else {
            FUN_1447a127e(puVar1,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar1,pvVar4,(longlong)iVar2);
            }
          }
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x58;
      } while (lVar10 < *(int *)(param_1 + 0x170));
    }
    FUN_147ea8236(param_1);
    return;
  }
  return;
}



// FUNCTION 143847a0c FUN_143847a0c body=1268 status=ok
// SIG undefined FUN_143847a0c(void)

void FUN_143847a0c(longlong param_1,longlong *param_2,int param_3,byte param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [44];
  int local_6c;
  char *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    lVar10 = 0;
    do {
      bVar3 = *(byte *)(*param_2 + 0x13 + lVar10 * 0x18);
      if (((bVar3 ^ param_4) & 1) == 0) {
        plVar2 = (longlong *)(*param_2 + lVar10 * 0x18);
        uVar4 = *(ushort *)(plVar2 + 2);
        if ((int)(uint)uVar4 < *(int *)(param_1 + 0x170)) {
          plVar5 = *(longlong **)(param_1 + 0x168);
          lVar8 = *plVar2;
          lVar13 = lVar8;
          if (lVar8 == 0) {
            if ((param_5 == '\0') || (plVar2[1] == 0)) goto LAB_143847c0c;
            uVar6 = 0;
            local_68 = (char *)CONCAT44(local_68._4_4_,0xffffffff);
            if ((longlong)(int)plVar5[(ulonglong)uVar4 * 0xb + 5] != 0) {
              lVar14 = 0;
              lVar11 = 0;
              do {
                if (*(longlong *)(plVar5[(ulonglong)uVar4 * 0xb + 4] + lVar14) == plVar2[1]) {
                  if (uVar6 == 1) {
                    uVar6 = 0;
                    local_6c = param_3;
                    local_60 = param_1;
                  }
                  else {
                    local_68 = (char *)CONCAT44(local_68._4_4_,-uVar6);
                    uVar6 = (uint)(*(int *)(plVar5[(ulonglong)uVar4 * 0xb + 4] + 8 +
                                           (lVar11 >> 0x20) * 0x10) == 0);
                    local_6c = param_3;
                    local_60 = param_1;
                  }
                  goto LAB_143847abe;
                }
                lVar11 = lVar11 + 0x100000000;
                uVar6 = uVar6 - 1;
                lVar14 = lVar14 + 0x10;
              } while ((longlong)(int)plVar5[(ulonglong)uVar4 * 0xb + 5] * 0x10 != lVar14);
              uVar6 = 0;
              local_6c = param_3;
              local_60 = param_1;
            }
          }
          else {
            if ((longlong)(int)plVar5[(ulonglong)uVar4 * 0xb + 3] != 0) {
              lVar11 = 0;
              do {
                if (*(longlong *)(plVar5[(ulonglong)uVar4 * 0xb + 2] + lVar11) == lVar8) {
                  cVar9 = *(char *)((longlong)plVar2 + 0x12);
                  if (cVar9 == '\x01') goto LAB_143847ba1;
                  lVar11 = plVar2[1];
                  local_68 = (char *)CONCAT44(local_68._4_4_,0xffffffff);
                  goto LAB_143847bc5;
                }
                lVar11 = lVar11 + 8;
              } while ((longlong)(int)plVar5[(ulonglong)uVar4 * 0xb + 3] * 8 != lVar11);
            }
            local_68 = (char *)CONCAT44(local_68._4_4_,0xffffffff);
            uVar6 = 0;
          }
LAB_143847abe:
          lVar11 = plVar2[1];
          if (lVar8 == 0) {
            lVar13 = lVar11;
          }
          cVar9 = *(char *)((longlong)plVar2 + 0x12);
          if (((cVar9 == '\x02') && ((char)uVar6 == '\0')) ||
             ((local_58 = plVar2 + 1, cVar9 == '\x01' &&
              (((char)uVar6 != '\0' ||
               (cVar9 = '\x01', param_3 < (int)(uint)*(ushort *)(lVar13 + 0x50))))))) {
LAB_143847ba1:
            *(byte *)((longlong)plVar2 + 0x13) = bVar3 | 2;
          }
          else {
LAB_143847bc5:
            local_58 = plVar2 + 1;
            if (lVar8 == 0) {
              if (lVar11 != 0) {
                if (cVar9 == '\x02') {
                  FUN_147ea6da2(param_1,lVar11);
                  iVar7 = FUN_147ebe854(plVar2[1],param_1,
                                        (ulonglong)*(ushort *)(lVar13 + 0x52) +
                                        plVar5[(ulonglong)uVar4 * 0xb + 6]);
                  if (((int)(uint)*(ushort *)(plVar2 + 2) < *(int *)(param_1 + 0x170)) &&
                     (-1 < (int)local_68)) {
                    lVar8 = (ulonglong)*(ushort *)(plVar2 + 2) * 0x58;
                    if ((int)local_68 < *(int *)(*(longlong *)(param_1 + 0x168) + 0x28 + lVar8)) {
                      lVar11 = ((ulonglong)local_68 & 0xffffffff) * 0x10;
                      lVar13 = *local_58;
                      if (*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x20 + lVar8) + lVar11)
                          == lVar13) {
                        if (iVar7 == 3) {
                          *(undefined4 *)(plVar5[(ulonglong)uVar4 * 0xb + 4] + 8 + lVar11) = 1;
                          *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) | 2;
                          lVar13 = *local_58;
                        }
                        FUN_147ea6e12(param_1,lVar13,iVar7);
                      }
                    }
                  }
                }
                else {
                  iVar7 = (int)plVar5[(ulonglong)uVar4 * 0xb + 5];
                  *(uint *)(plVar5 + (ulonglong)uVar4 * 0xb + 5) = iVar7 + 1U;
                  if (*(uint *)((longlong)plVar5 + (ulonglong)uVar4 * 0x58 + 0x2c) < iVar7 + 1U) {
                    FUN_147eb85cc(plVar5 + (ulonglong)uVar4 * 0xb + 4,iVar7);
                  }
                  lVar8 = plVar5[(ulonglong)uVar4 * 0xb + 4];
                  *(longlong *)(lVar8 + (longlong)iVar7 * 0x10) = lVar11;
                  *(undefined4 *)(lVar8 + 8 + (longlong)iVar7 * 0x10) = 0;
                }
              }
            }
            else {
              local_60 = param_1;
              if ((*(byte *)(param_1 + 0x2da) & 1) == 0) {
LAB_143847e21:
                lVar13 = (ulonglong)*(ushort *)(lVar13 + 0x52) + plVar5[(ulonglong)uVar4 * 0xb + 6];
                lVar8 = *plVar2;
                if (cVar9 == '\x02') {
                  local_50 = lVar8;
                  FUN_147ea9de4(plVar5 + (ulonglong)uVar4 * 0xb + 2,&local_50);
                  param_1 = local_60;
                  FUN_147eb9fbc(*plVar2,local_60,lVar13);
                  goto LAB_143847c0c;
                }
              }
              else {
                bVar3 = *(byte *)(lVar8 + 0x59);
                lVar11 = *(longlong *)(lVar8 + 0x48);
                if (bVar3 != 0xff) {
                  if ((lVar11 == 0) ||
                     (*(uint *)(lVar11 + 0x60) == (uint)bVar3 ||
                      (int)*(uint *)(lVar11 + 0x60) < (int)(uint)bVar3)) {
                    lVar11 = 0;
                  }
                  else {
                    plVar1 = (longlong *)(lVar11 + 0x58);
                    uVar12 = (ulonglong)((uint)bVar3 * 0x30);
                    lVar11 = *(longlong *)(*plVar1 + uVar12);
                    if (lVar11 == 0) {
                      lVar11 = *(longlong *)(*plVar1 + uVar12 + 8);
                    }
                  }
                }
                local_68 = (char *)((longlong)plVar2 + 0x12);
                if (lVar11 != *plVar5) goto LAB_143847e21;
                lVar11 = FUN_1458f16e2();
                if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) {
                  cVar9 = *local_68;
                  goto LAB_143847e21;
                }
                cVar9 = *local_68;
                if (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30) goto LAB_143847e21;
                param_1 = local_60;
                if (cVar9 == '\x02') goto LAB_143847c0c;
                lVar8 = (longlong)*(int *)(*(longlong *)(local_60 + 0x168) + 0x18);
                if (lVar8 != 0) {
                  lVar11 = 0;
                  do {
                    if (*(longlong *)
                         (*(longlong *)(*(longlong *)(local_60 + 0x168) + 0x10) + lVar11) == *plVar2
                       ) goto LAB_143847c0c;
                    lVar11 = lVar11 + 8;
                  } while (lVar8 * 8 != lVar11);
                  goto LAB_143847e21;
                }
                lVar13 = (ulonglong)*(ushort *)(lVar13 + 0x52) + plVar5[(ulonglong)uVar4 * 0xb + 6];
                lVar8 = *plVar2;
              }
              iVar7 = (int)plVar5[(ulonglong)uVar4 * 0xb + 3];
              *(uint *)(plVar5 + (ulonglong)uVar4 * 0xb + 3) = iVar7 + 1U;
              local_6c = param_3;
              if (*(uint *)((longlong)plVar5 + (ulonglong)uVar4 * 0x58 + 0x1c) < iVar7 + 1U) {
                FUN_147eb847a(plVar5 + (ulonglong)uVar4 * 0xb + 2,iVar7);
              }
              param_1 = local_60;
              *(longlong *)(plVar5[(ulonglong)uVar4 * 0xb + 2] + (longlong)iVar7 * 8) = lVar8;
              FUN_147eb9f02(*plVar2,local_60,lVar13);
              param_3 = local_6c;
            }
          }
        }
      }
LAB_143847c0c:
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143847f02 FUN_143847f02 body=2461 status=ok
// SIG undefined FUN_143847f02(void)

void FUN_143847f02(longlong param_1,float param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  undefined1 auStack_f8 [32];
  float *local_d8;
  byte local_c1;
  longlong local_c0;
  longlong local_b8;
  byte *local_b0;
  longlong local_a8;
  float local_a0;
  float *local_98;
  code *local_90;
  longlong *local_88;
  float local_7c;
  byte local_75;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar15 = *(longlong *)(param_1 + 0xb0);
  if (lVar15 == 0) {
    lVar15 = FUN_1448abda6(param_1);
  }
  fVar24 = param_2;
  if (lVar15 != 0 && param_4 != 0) {
    fVar24 = *(float *)(lVar15 + 0x6f4);
  }
  *(float *)(param_1 + 0x2f4) = fVar24;
  fVar24 = *(float *)(param_1 + 0x2ec) - param_2;
  *(float *)(param_1 + 0x2ec) = fVar24;
  if (0.0 < fVar24) {
    *(float *)(param_1 + 0x2f0) = param_2 + *(float *)(param_1 + 0x2f0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
  }
  param_2 = param_2 + *(float *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0x2f0) = param_2;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  bVar20 = 0 < *(int *)(param_1 + 0x130);
  local_75 = 0 < *(int *)(param_1 + 0x130);
  FUN_147ecdbe8(param_1,param_2,param_3,param_4);
  local_7c = 3.4028235e+38;
  *(undefined2 *)(param_1 + 0x210) = 0xe70;
  iVar10 = *(int *)(param_1 + 0x170);
  if (0 < iVar10) {
    lVar15 = 0;
    do {
      lVar23 = *(longlong *)(param_1 + 0x168);
      lVar18 = lVar15 * 0x58;
      lVar22 = (longlong)*(int *)(lVar23 + 0x18 + lVar18);
      if (lVar22 != 0) {
        lVar2 = *(longlong *)(lVar23 + 0x10 + lVar18);
        lVar21 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar21);
          local_d8 = &local_7c;
          bVar7 = FUN_147eba00a(lVar3,param_1,
                                (ulonglong)*(ushort *)(lVar3 + 0x52) +
                                *(longlong *)(lVar23 + lVar18 + 0x30),param_2);
          bVar20 = bVar20 | bVar7;
          lVar21 = lVar21 + 8;
          local_75 = bVar20;
        } while (lVar22 * 8 != lVar21);
        iVar10 = *(int *)(param_1 + 0x170);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar10);
  }
  FUN_147ea7ae4(param_1);
  bVar20 = *(byte *)(param_1 + 0x2da);
  bVar7 = bVar20;
  if ((bVar20 & 2) != 0) {
    cVar8 = FUN_147ea8dce(param_1);
    bVar7 = bVar20 & 0xfd | cVar8 * '\x02';
    *(byte *)(param_1 + 0x2da) = bVar7;
    if (cVar8 == '\0') {
      if ((bVar20 & 8) == 0) {
        if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
           (*(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) | 2,
           *(short *)(param_1 + 0x1ec) != -1)) {
          *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
        }
        FUN_147ea6872(param_1,0);
        bVar7 = *(byte *)(param_1 + 0x2da) | 4;
        *(byte *)(param_1 + 0x2da) = bVar7;
      }
      else {
        FUN_143846294(param_1,0);
        bVar7 = *(byte *)(param_1 + 0x2da);
      }
    }
  }
  if ((bVar7 & 4) == 0) goto LAB_143848631;
  *(byte *)(param_1 + 0x2da) = bVar7 & 0xfb;
  if ((((*(byte *)(param_1 + 0x9c) & 1) != 0) &&
      ((int)(uint)*(ushort *)(param_1 + 0x2d8) < *(int *)(param_1 + 0x170))) &&
     ((bVar7 & 0x22) == 0)) {
    if (((*(uint *)(param_1 + 0x208) & 2) == 0 &
        (*(longlong *)(param_1 + 0x200) != 0 | (byte)*(uint *)(param_1 + 0x208))) != 1) {
      if (*(longlong *)(param_1 + 0x1f0) == 0) goto LAB_143848621;
      *(uint *)(param_1 + 0x1d0) = (uint)*(ushort *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_1 + 0x1d4);
      *(uint *)(param_1 + 0x1c0) =
           *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x50) << 0x10 |
           (uint)*(ushort *)(param_1 + 0x1f8);
      local_b8 = CONCAT44(local_b8._4_4_,(uint)*(byte *)(param_1 + 0x1fa));
      FUN_147ea8490(param_1);
      uVar17 = (ulonglong)*(ushort *)(param_1 + 0x2d8);
      lVar15 = *(longlong *)(param_1 + 0x168);
      lVar23 = *(longlong *)(param_1 + 0x1f0);
      if (*(longlong *)(lVar15 + 8 + uVar17 * 0x58) != lVar23) {
        local_d8 = (float *)&local_74;
        local_74 = -NAN;
        cVar8 = FUN_147ea6ff4(param_1,lVar23,*(undefined2 *)(param_1 + 0x1f8),&local_b8);
        fVar24 = local_74;
        if (cVar8 == '\0') {
          if (*(int *)(param_1 + 0x1ac) < 0) {
            *(undefined4 *)(param_1 + 0x1a8) = 0;
            FUN_147eb68cc(param_1 + 0x1a0);
          }
          else {
            *(undefined4 *)(param_1 + 0x1a8) = 0;
          }
          goto LAB_143848621;
        }
        lVar23 = *(longlong *)(param_1 + 0x1f0);
        if (local_74 != -NAN) {
          iVar10 = FUN_147ebb344(lVar23,local_74,0);
          uVar9 = *(ushort *)(param_1 + 0x1f8);
          iVar11 = FUN_147ebb344(lVar23,(int)fVar24 + 1,0);
          *(uint *)(param_1 + 0x1d4) = iVar10 << 0x10 | (uint)uVar9;
          *(uint *)(param_1 + 0x1d8) = iVar11 << 0x10 | (uint)uVar9;
        }
        uVar17 = (ulonglong)*(ushort *)(param_1 + 0x2d8);
        lVar15 = *(longlong *)(param_1 + 0x168);
      }
      lVar18 = param_1 + 0x198;
      *(int *)(param_1 + 0x1cc) = DAT_14c762394;
      DAT_14c762394 = DAT_14c762394 + 1;
      *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffff9 | 4;
      if (*(longlong *)(lVar15 + 8 + uVar17 * 0x58) == 0) {
        puVar16 = (undefined8 *)(lVar15 + uVar17 * 0x58);
        uVar4 = *puVar16;
        puVar16[1] = uVar4;
        FUN_147ebaa7c(uVar4,lVar18);
      }
      if ((*(byte *)(param_1 + 0x1fb) & 1) == 0) {
        local_74 = (float)CONCAT22(*(short *)(param_1 + 0x1ea) + -1,*(undefined2 *)(param_1 + 0x1e8)
                                  );
        puVar19 = (undefined4 *)(param_1 + 0x1e8);
        if (*(short *)(param_1 + 0x1ea) != 0) {
          puVar19 = &local_74;
        }
        FUN_147ea7420(param_1,puVar19);
        *(undefined2 *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x168) + 0x30 +
           (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + 0x2d8) * 0x58) +
         (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x1f0) + 0x52)) = 0xffff;
        *(undefined8 *)(param_1 + 0x1c4) = *(undefined8 *)(param_1 + 0x1e8);
      }
      else {
        if (*(char *)(param_1 + 0x1fa) == '\x01') {
          FUN_147ea7420(param_1,(undefined4 *)(param_1 + 0x1e8));
        }
        *(undefined8 *)(param_1 + 0x1c4) = 0xffffffffffffffff;
      }
      bVar5 = true;
      if (lVar23 == 0) {
        lVar15 = 0;
        uVar13 = 1;
LAB_14384839d:
        uVar12 = uVar13;
        uVar13 = *(uint *)(param_1 + 0x1e4);
        bVar6 = true;
        if ((uVar13 & 2) != 0) goto LAB_14384854c;
      }
      else {
        local_c0 = param_1 + 0x1b0;
        local_c1 = bVar7;
        do {
          uVar12 = FUN_147eba2f0(lVar23,lVar18,&local_b8);
          if ((*(byte *)(param_1 + 0x1e4) & 2) != 0) {
            uVar12 = 1;
            lVar15 = 0;
            bVar7 = local_c1;
            bVar6 = false;
            goto LAB_14384854c;
          }
          if (uVar12 == 0xfffffffe) {
            lVar15 = *(longlong *)(lVar23 + 0x48);
            if (lVar15 == 0) {
              FUN_147ebace4(lVar23,lVar18,&local_b8);
              if ((ulonglong)*(ushort *)(param_1 + 0x2d8) != 0) {
                FUN_147ea8534((ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58 +
                              *(longlong *)(param_1 + 0x168),lVar18);
                uVar12 = (uint)local_b8;
                uVar9 = *(ushort *)(param_1 + 0x2d8);
                iVar10 = *(int *)(param_1 + 0x1b8);
                *(uint *)(param_1 + 0x1b8) = iVar10 + 1U;
                if (*(uint *)(param_1 + 0x1bc) < iVar10 + 1U) {
                  FUN_147eb692c(local_c0,iVar10);
                }
                *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar10 * 4) =
                     (uVar12 & 0xff) << 0x10 | (uint)uVar9;
                uVar12 = *(int *)(param_1 + 0x2d8) - 1;
                uVar9 = (ushort)uVar12;
                *(ushort *)(param_1 + 0x2d8) = uVar9;
                lVar23 = *(longlong *)
                          (*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)(uVar12 & 0xffff) * 0x58)
                ;
                lVar15 = *(longlong *)(lVar23 + 0x48);
                if (lVar15 != 0) goto LAB_1438484cd;
              }
              lVar15 = 0;
              bVar7 = local_c1;
              uVar13 = 1;
              goto LAB_14384839d;
            }
            uVar9 = *(ushort *)(param_1 + 0x2d8);
LAB_1438484cd:
            local_d8 = (float *)CONCAT71(local_d8._1_7_,uVar9 <= *(ushort *)(param_1 + 0x1f8));
            FUN_147ebab58(lVar15,lVar18,lVar23,&local_b8);
            lVar23 = lVar15;
LAB_1438484ed:
            lVar15 = 0;
          }
          else {
            if (((int)uVar12 < 0) || (*(int *)(lVar23 + 0x60) <= (int)uVar12)) goto LAB_1438484ed;
            plVar1 = (longlong *)(lVar23 + 0x58);
            lVar23 = *(longlong *)(*plVar1 + (ulonglong)uVar12 * 0x30);
            lVar15 = *(longlong *)(*plVar1 + 8 + (ulonglong)uVar12 * 0x30);
          }
          bVar7 = local_c1;
        } while ((lVar23 != 0) && (lVar15 == 0));
        if (lVar15 == 0) {
          lVar15 = 0;
          uVar13 = 1;
          goto LAB_14384839d;
        }
        uVar9 = *(ushort *)(param_1 + 0x2d8);
        if (uVar9 != *(ushort *)(param_1 + 0x1ec)) {
          if (*(ushort *)(param_1 + 0x1ec) <= uVar9) goto LAB_14384887d;
LAB_143848899:
          if ((*(byte *)(lVar15 + 0x68) & 1) == 0) {
            uVar13 = 0;
          }
          else {
            cVar8 = FUN_147ea86ae((ulonglong)uVar9 * 0x58 + *(longlong *)(param_1 + 0x168));
            uVar12 = 0;
            uVar13 = 0;
            bVar6 = false;
            if (cVar8 != '\0') goto LAB_14384854c;
          }
          goto LAB_14384839d;
        }
        if (*(ushort *)(lVar15 + 0x50) < *(ushort *)(param_1 + 0x1ee)) goto LAB_143848899;
LAB_14384887d:
        uVar12 = 0;
        bVar6 = false;
LAB_14384854c:
        bVar5 = bVar6;
        FUN_143847838(param_1);
        uVar13 = *(uint *)(param_1 + 0x1e4);
      }
      *(uint *)(param_1 + 0x1e4) = uVar13 & 0xfffffffb;
      if ((uVar13 & 2) != 0) {
        FUN_147ea6872(param_1,0);
        *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) | 4;
        goto LAB_143848621;
      }
      *(undefined8 *)(param_1 + 0x1e8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined1 *)(param_1 + 0x1fb) = 0;
      uVar14 = *(uint *)(param_1 + 0x208) & 0xfffffffd;
      *(uint *)(param_1 + 0x208) = uVar14;
      if (bVar5) {
        if (*(char *)(*(longlong *)(param_1 + 0x168) + 0x41 +
                     (longlong)(*(int *)(param_1 + 0x170) + -1) * 0x58) == '\x01') {
          *(uint *)(param_1 + 0x1e4) = uVar13 & 0xfffffffb | 1;
          FUN_147ea872a(param_1);
          *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xfe;
          uVar14 = *(uint *)(param_1 + 0x208);
        }
        if ((uVar14 & 2) == 0) {
          *(longlong *)(param_1 + 0x200) = lVar15;
          *(uint *)(param_1 + 0x208) = uVar14 & 0xfffffffc | uVar12;
        }
      }
    }
    FUN_147ea832a(param_1);
  }
LAB_143848621:
  local_75 = 1;
  local_7c = 3.4028235e+38;
LAB_143848631:
  if ((0 < *(int *)(param_1 + 0x170)) && ((*(byte *)(param_1 + 0x2da) & 0x30) == 0x10)) {
    *(undefined2 *)(param_1 + 0x210) = 0xe70;
    lVar23 = 0;
    lVar15 = 0;
    local_c1 = bVar7;
    do {
      local_b8 = *(longlong *)(param_1 + 0x168) + lVar23;
      local_90 = FUN_14384a0ea;
      local_b0 = &local_75;
      local_a8 = param_1;
      local_a0 = param_2;
      local_98 = &local_7c;
      local_88 = &local_b8;
      FUN_147ea6cfe(local_b8,&local_90);
      bVar7 = local_c1;
      lVar15 = lVar15 + 1;
      uVar12 = *(uint *)(param_1 + 0x170);
      lVar23 = lVar23 + 0x58;
    } while (lVar15 < (int)uVar12);
    uVar9 = *(ushort *)(param_1 + 0x2d8);
    uVar13 = (uint)uVar9;
    if ((int)(uint)uVar9 < (int)uVar12) {
      if (*(byte *)(*(longlong *)(param_1 + 0x168) + 0x41 + (ulonglong)uVar9 * 0x58) - 1 < 2) {
        lVar23 = *(longlong *)(param_1 + 0x168) + (ulonglong)uVar9 * 0x58;
        lVar15 = *(longlong *)(lVar23 + 8);
        local_d8 = &local_7c;
        bVar20 = FUN_147ebe8a0(lVar15,param_1,
                               (ulonglong)*(ushort *)(lVar15 + 0x52) + *(longlong *)(lVar23 + 0x30),
                               param_2);
        local_75 = local_75 | bVar20;
        uVar13 = (uint)*(ushort *)(param_1 + 0x2d8);
        uVar12 = *(uint *)(param_1 + 0x170);
      }
    }
    if ((int)(uVar13 + 1) < (int)uVar12) {
      if (*(char *)(*(longlong *)(param_1 + 0x168) + -0x17 + (ulonglong)uVar12 * 0x58) == '\x02') {
        lVar23 = *(longlong *)(param_1 + 0x168) + (ulonglong)uVar12 * 0x58;
        lVar15 = *(longlong *)(lVar23 + -0x50);
        local_d8 = &local_7c;
        bVar20 = FUN_147ebe8a0(lVar15,param_1,
                               (ulonglong)*(ushort *)(lVar15 + 0x52) + *(longlong *)(lVar23 + -0x28)
                               ,param_2);
        local_75 = local_75 | bVar20;
      }
    }
    FUN_147ea7ae4(param_1);
  }
  if ((((bVar7 & 4) != 0) && (iVar10 = *(int *)(param_1 + 0x170), 0 < iVar10)) && (0.0 < local_7c))
  {
    lVar15 = 0;
    fVar24 = local_7c;
    do {
      lVar23 = *(longlong *)(param_1 + 0x168);
      lVar18 = lVar15 * 0x58;
      lVar22 = (longlong)*(int *)(lVar23 + 0x18 + lVar18);
      if (lVar22 != 0) {
        lVar2 = *(longlong *)(lVar23 + 0x10 + lVar18);
        lVar21 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar21);
          fVar24 = (float)FUN_147eba264(lVar3,param_1,
                                        (ulonglong)*(ushort *)(lVar3 + 0x52) +
                                        *(longlong *)(lVar23 + lVar18 + 0x30));
          if (fVar24 < local_7c) {
            local_7c = fVar24;
          }
          lVar21 = lVar21 + 8;
        } while (lVar22 * 8 != lVar21);
        iVar10 = *(int *)(param_1 + 0x170);
        fVar24 = local_7c;
      }
      lVar15 = lVar15 + 1;
    } while ((lVar15 < iVar10) && (0.0 < fVar24));
  }
  FUN_147ea6872(param_1);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438488ce FUN_1438488ce body=399 status=ok
// SIG undefined FUN_1438488ce(void)

void FUN_1438488ce(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)(uint)*(ushort *)(param_1 + 0x2d8) < *(int *)(param_1 + 0x170)) {
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58 + *(longlong *)(param_1 + 0x168);
    iVar2 = *(int *)(param_2 + 0x60);
    if ((longlong)iVar2 != 0) {
      local_58 = *(longlong *)(param_2 + 0x58);
      lVar6 = 0;
      local_60 = param_2;
      do {
        lVar8 = *(longlong *)(local_58 + lVar6);
        uVar1 = *(ushort *)(lVar8 + 0x52);
        lVar4 = *(longlong *)(lVar7 + 0x30);
        iVar3 = *(int *)(lVar7 + 0x18);
        *(uint *)(lVar7 + 0x18) = iVar3 + 1U;
        if (*(uint *)(lVar7 + 0x1c) < iVar3 + 1U) {
          FUN_147eb847a((longlong *)(lVar7 + 0x10),iVar3);
        }
        *(longlong *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar3 * 8) = lVar8;
        FUN_147eb9f02(lVar8,param_1,(ulonglong)uVar1 + lVar4);
        param_2 = local_60;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 * 8 != lVar6);
      iVar2 = *(int *)(local_60 + 0x60);
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(local_60 + 0x58);
        lVar8 = 0;
        do {
          lVar4 = *(longlong *)(lVar6 + lVar8);
          local_4c = 0;
          local_68 = &local_4c;
          FUN_147eba00a(lVar4,param_1,
                        (ulonglong)*(ushort *)(lVar4 + 0x52) + *(longlong *)(lVar7 + 0x30),
                        *(undefined4 *)(param_1 + 0x2f4));
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar2 * 8 != lVar8);
      }
    }
    *(longlong *)(lVar7 + 8) = param_2;
    *(undefined1 *)(lVar7 + 0x41) = 1;
    uVar5 = FUN_147ebe7a8(param_2,param_1,
                          (ulonglong)*(ushort *)(param_2 + 0x52) + *(longlong *)(lVar7 + 0x30));
    if (*(int *)(param_1 + 0x170) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)
               (*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58)
      ;
    }
    if (lVar7 == param_2) {
      FUN_147ea6e12(param_1,param_2,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143848a76 FUN_143848a76 body=112 status=ok
// SIG undefined FUN_143848a76(void)

void FUN_143848a76(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((int)(uint)*(ushort *)(param_1 + 0x2d8) < *(int *)(param_1 + 0x170)) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar4 = (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58;
    lVar1 = lVar3 + lVar4;
    iVar2 = *(int *)(lVar3 + 0x28 + lVar4);
    *(uint *)(lVar3 + 0x28 + lVar4) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x2c + lVar4) < iVar2 + 1U) {
      FUN_147eb85cc(lVar4 + lVar3 + 0x20,iVar2);
    }
    lVar3 = *(longlong *)(lVar1 + 0x20);
    *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = param_2;
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 0;
    if (*(longlong *)(lVar1 + 8) == param_2) {
      *(undefined1 *)(lVar1 + 0x41) = 3;
    }
  }
  return;
}



// FUNCTION 143848ae6 FUN_143848ae6 body=132 status=ok
// SIG undefined FUN_143848ae6(void)

void FUN_143848ae6(longlong param_1,longlong param_2,ushort param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x170)) {
    lVar2 = *(longlong *)(param_1 + 0x168) + (ulonglong)param_3 * 0x58;
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x28 + (ulonglong)param_3 * 0x58);
    iVar6 = 0;
    lVar7 = 0x10;
    do {
      if ((int)(uVar5 + iVar6) < 1) {
        return;
      }
      lVar3 = *(longlong *)(lVar2 + 0x20) + (ulonglong)uVar5 * 0x10;
      lVar1 = lVar7 + -0x10;
      iVar6 = iVar6 + -1;
      lVar4 = lVar7 + -0x20;
      lVar7 = lVar1;
    } while (*(longlong *)(lVar4 + lVar3) != param_2);
    if (iVar6 != -1) {
      memmove((void *)(lVar1 + lVar3 + -0x10),
              (void *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar5 * 0x10 + lVar1),-lVar1);
      uVar5 = *(uint *)(lVar2 + 0x28);
    }
    *(uint *)(lVar2 + 0x28) = uVar5 - 1;
  }
  return;
}



// FUNCTION 143848b6a FUN_143848b6a body=131 status=ok
// SIG undefined FUN_143848b6a(void)

void FUN_143848b6a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143848bae;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143848bae:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143848bed FUN_143848bed body=49 status=ok
// SIG undefined FUN_143848bed(void)

void FUN_143848bed(void)

{
  FUN_144760e21(DAT_14cb1eba0,DAT_14cb1eba8);
  if (DAT_14cb1eba0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143848c1e FUN_143848c1e body=49 status=ok
// SIG undefined FUN_143848c1e(void)

void FUN_143848c1e(void)

{
  FUN_144760e21(DAT_14cb1ebb8,DAT_14cb1ebc0);
  if (DAT_14cb1ebb8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143848c4f FUN_143848c4f body=49 status=ok
// SIG undefined FUN_143848c4f(void)

void FUN_143848c4f(void)

{
  FUN_144760e21(DAT_14cb1ebd0,DAT_14cb1ebd8);
  if (DAT_14cb1ebd0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143848c80 FUN_143848c80 body=104 status=ok
// SIG undefined FUN_143848c80(void)

void FUN_143848c80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar3 * 8);
      if ((plVar1 != (longlong *)0x0) && (-1 < (short)(int)plVar1[1])) {
        (**(code **)(*plVar1 + 0x498))();
        iVar2 = *(int *)(param_1 + 0x48);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_147eb7ae6((longlong *)(param_1 + 0x40));
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 143848ce8 FUN_143848ce8 body=3032 status=ok
// SIG undefined FUN_143848ce8(void)

void FUN_143848ce8(undefined8 param_1,longlong *param_2,int param_3,short *param_4,longlong *param_5
                  ,ulonglong param_6,undefined8 param_7)

{
  void *pvVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 uVar17;
  int iVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong in_stack_ffffffffffffff70;
  
  sVar8 = (**(code **)(*param_2 + 0x2d8))(param_2);
  sVar9 = (**(code **)(*param_2 + 0x2c0))(param_2);
  sVar2 = *param_4;
  uVar6 = sVar8 + 3U & 0xfffc;
  uVar5 = sVar9 + uVar6 + 3 & 0xfffc;
  if ((ushort)(sVar9 + uVar6) < 3) {
    uVar5 = sVar9 + uVar6;
  }
  iVar10 = (int)param_5[1];
  lVar22 = (longlong)iVar10;
  *(uint *)(param_5 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
    FUN_147eb7b16(param_5,iVar10);
  }
  lVar23 = *param_5;
  *(longlong **)(lVar23 + lVar22 * 0x18) = param_2;
  *(undefined8 *)(lVar23 + 8 + lVar22 * 0x18) = param_1;
  *(short *)(lVar23 + 0x10 + lVar22 * 0x18) = sVar2;
  *(ushort *)(lVar23 + 0x12 + lVar22 * 0x18) = uVar5;
  *(ushort *)(lVar23 + 0x14 + lVar22 * 0x18) = uVar6;
  uVar17 = (undefined1)param_3;
  *(undefined1 *)(lVar23 + 0x16 + lVar22 * 0x18) = uVar17;
  FUN_147eaa6b0(param_2);
  (**(code **)(*param_2 + 0x2a0))(param_2,param_6);
  FUN_147eaa6b0(0);
  *param_4 = *param_4 + 1;
  if (param_2 != (longlong *)0x0) {
    lVar22 = FUN_14587de5c();
    if ((*(int *)(lVar22 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) ==
        lVar22 + 0x30)) {
      iVar10 = (int)param_2[0xe];
      if (0 < iVar10) {
        uVar15 = 0;
        do {
          lVar23 = (longlong)(int)uVar15;
          lVar22 = *(longlong *)(param_2[0xd] + lVar23 * 8);
          if (lVar22 == 0) {
            if (~uVar15 + iVar10 != 0) {
              pvVar1 = (void *)(param_2[0xd] + lVar23 * 8);
              memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar15 + iVar10) << 3);
              iVar10 = (int)param_2[0xe];
            }
            iVar10 = iVar10 + -1;
            *(int *)(param_2 + 0xe) = iVar10;
            uVar15 = uVar15 - 1;
          }
          else {
            in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffffff00000000;
            plVar11 = (longlong *)
                      FUN_14092e7b3(lVar22,param_7,0,0xffffffff,0,in_stack_ffffffffffffff70,
                                    0xfff00007);
            if (plVar11 == (longlong *)0x0) {
LAB_143848ebf:
              puVar26 = (undefined8 *)(lVar23 * 8 + param_2[0xd]);
              plVar11 = (longlong *)0x0;
            }
            else {
              lVar22 = FUN_1458f16e2();
              if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar22 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) !=
                  lVar22 + 0x30)) goto LAB_143848ebf;
              puVar26 = (undefined8 *)(lVar23 * 8 + param_2[0xd]);
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(plVar11);
              }
            }
            *puVar26 = plVar11;
            sVar8 = (**(code **)(*plVar11 + 0x2d8))(plVar11);
            sVar9 = (**(code **)(*plVar11 + 0x2c0))(plVar11);
            sVar2 = *param_4;
            uVar6 = sVar8 + 3U & 0xfffc;
            uVar5 = sVar9 + uVar6 + 3 & 0xfffc;
            if ((ushort)(sVar9 + uVar6) < 3) {
              uVar5 = sVar9 + uVar6;
            }
            iVar10 = (int)param_5[1];
            lVar22 = (longlong)iVar10;
            *(uint *)(param_5 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
              FUN_147eb7b16(param_5,iVar10);
            }
            lVar23 = *param_5;
            *(longlong **)(lVar23 + lVar22 * 0x18) = plVar11;
            *(longlong **)(lVar23 + 8 + lVar22 * 0x18) = param_2;
            *(short *)(lVar23 + 0x10 + lVar22 * 0x18) = sVar2;
            *(ushort *)(lVar23 + 0x12 + lVar22 * 0x18) = uVar5;
            *(ushort *)(lVar23 + 0x14 + lVar22 * 0x18) = uVar6;
            *(undefined1 *)(lVar23 + 0x16 + lVar22 * 0x18) = uVar17;
            FUN_147eaa6b0(plVar11);
            (**(code **)(*plVar11 + 0x2a0))(plVar11,param_6);
            *param_4 = *param_4 + 1;
            FUN_147eaa6b0();
            iVar10 = (int)param_2[0xe];
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < iVar10);
      }
      if (0 < (int)param_2[0xc]) {
        lVar22 = 0;
        do {
          plVar11 = (longlong *)(param_2[0xb] + lVar22 * 0x30);
          lVar23 = param_2[0xb] + lVar22 * 0x30;
          plVar21 = (longlong *)(lVar23 + 0x10);
          iVar10 = *(int *)(lVar23 + 0x18);
          uVar7 = (undefined1)lVar22;
          if (0 < iVar10) {
            uVar15 = 0;
            do {
              lVar24 = (longlong)(int)uVar15;
              lVar23 = *(longlong *)(*plVar21 + lVar24 * 8);
              if (lVar23 == 0) {
                if (~uVar15 + iVar10 != 0) {
                  pvVar1 = (void *)(*plVar21 + lVar24 * 8);
                  memmove(pvVar1,(void *)((longlong)pvVar1 + 8),
                          (longlong)(int)(~uVar15 + iVar10) << 3);
                  iVar10 = (int)plVar11[3];
                }
                iVar10 = iVar10 + -1;
                *(int *)(plVar11 + 3) = iVar10;
                uVar15 = uVar15 - 1;
              }
              else {
                in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffffff00000000;
                plVar12 = (longlong *)
                          FUN_14092e7b3(lVar23,param_7,0,0xffffffff,0,in_stack_ffffffffffffff70,
                                        0xfff00007);
                if (plVar12 == (longlong *)0x0) {
LAB_14384908f:
                  puVar26 = (undefined8 *)(lVar24 * 8 + *plVar21);
                  plVar12 = (longlong *)0x0;
                }
                else {
                  lVar23 = FUN_1411e5eac();
                  if ((*(int *)(plVar12[2] + 0x38) < *(int *)(lVar23 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) !=
                      lVar23 + 0x30)) goto LAB_14384908f;
                  puVar26 = (undefined8 *)(lVar24 * 8 + *plVar21);
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(plVar12);
                  }
                }
                *puVar26 = plVar12;
                sVar8 = (**(code **)(*plVar12 + 0x2d8))(plVar12);
                sVar9 = (**(code **)(*plVar12 + 0x2c0))(plVar12);
                sVar2 = *param_4;
                uVar6 = sVar8 + 3U & 0xfffc;
                uVar5 = sVar9 + uVar6 + 3 & 0xfffc;
                if ((ushort)(sVar9 + uVar6) < 3) {
                  uVar5 = sVar9 + uVar6;
                }
                iVar10 = (int)param_5[1];
                lVar23 = (longlong)iVar10;
                *(uint *)(param_5 + 1) = iVar10 + 1U;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
                  FUN_147eb7b16(param_5,iVar10);
                }
                lVar24 = *param_5;
                *(longlong **)(lVar24 + lVar23 * 0x18) = plVar12;
                *(longlong **)(lVar24 + 8 + lVar23 * 0x18) = param_2;
                *(short *)(lVar24 + 0x10 + lVar23 * 0x18) = sVar2;
                *(ushort *)(lVar24 + 0x12 + lVar23 * 0x18) = uVar5;
                *(ushort *)(lVar24 + 0x14 + lVar23 * 0x18) = uVar6;
                *(undefined1 *)(lVar24 + 0x16 + lVar23 * 0x18) = uVar17;
                FUN_147eaa6b0(plVar12);
                (**(code **)(*plVar12 + 0x2a0))(plVar12,param_6);
                *(undefined1 *)((longlong)plVar12 + 0x59) = uVar7;
                *param_4 = *param_4 + 1;
                FUN_147eaa6b0(0);
                iVar10 = (int)plVar11[3];
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < iVar10);
          }
          if (plVar11[1] != 0) {
            lVar24 = FUN_145b62a42();
            lVar23 = plVar11[1];
            if (((((lVar23 != 0) && (lVar24 != 0)) &&
                 (lVar14 = *(longlong *)(lVar23 + 0x10), lVar14 != 0)) &&
                ((*(int *)(lVar24 + 0x38) <= *(int *)(lVar14 + 0x38) &&
                 (*(longlong *)
                   (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8) ==
                  lVar24 + 0x30)))) &&
               ((lVar23 = *(longlong *)(lVar23 + 0x70), lVar23 != 0 &&
                (iVar10 = *(int *)(lVar23 + 0x48), iVar10 != 0)))) {
              iVar3 = (int)plVar11[3];
              iVar16 = iVar3;
              if (0 < iVar10) {
                lVar24 = 0;
                do {
                  lVar14 = *(longlong *)(*(longlong *)(lVar23 + 0x40) + lVar24 * 8);
                  if (lVar14 != 0) {
                    in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffffff00000000;
                    bVar19 = 0;
                    plVar13 = (longlong *)
                              FUN_14092e7b3(lVar14,param_7,0,0xffffffff,0,in_stack_ffffffffffffff70,
                                            0xfff00007);
                    plVar12 = (longlong *)0x0;
                    if (plVar13 != (longlong *)0x0) {
                      lVar14 = FUN_1411e5eac();
                      if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8
                           ) != lVar14 + 0x30)) {
                        bVar19 = 0;
                        plVar12 = (longlong *)0x0;
                      }
                      else {
                        bVar19 = 1;
                        plVar12 = plVar13;
                        if (DAT_14c950c29 == 1) {
                          FUN_1456cec3c(plVar13);
                        }
                      }
                    }
                    iVar10 = (int)plVar11[3];
                    *(uint *)(plVar11 + 3) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar11 + 0x1c) < iVar10 + 1U) {
                      FUN_147eb4578(plVar21,iVar10);
                    }
                    *(longlong **)(*plVar21 + (longlong)iVar10 * 8) = plVar12;
                    if ((bVar19 & DAT_14c950c29) == 1) {
                      FUN_1456cec3c(plVar12);
                    }
                    sVar8 = (**(code **)(*plVar12 + 0x2d8))(plVar12);
                    sVar9 = (**(code **)(*plVar12 + 0x2c0))(plVar12);
                    sVar2 = *param_4;
                    uVar6 = sVar8 + 3U & 0xfffc;
                    uVar5 = sVar9 + uVar6 + 3 & 0xfffc;
                    if ((ushort)(sVar9 + uVar6) < 3) {
                      uVar5 = sVar9 + uVar6;
                    }
                    iVar10 = (int)param_5[1];
                    lVar14 = (longlong)iVar10;
                    *(uint *)(param_5 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
                      FUN_147eb7b16(param_5,iVar10);
                    }
                    lVar25 = *param_5;
                    *(longlong **)(lVar25 + lVar14 * 0x18) = plVar12;
                    *(longlong **)(lVar25 + 8 + lVar14 * 0x18) = param_2;
                    *(short *)(lVar25 + 0x10 + lVar14 * 0x18) = sVar2;
                    *(ushort *)(lVar25 + 0x12 + lVar14 * 0x18) = uVar5;
                    *(ushort *)(lVar25 + 0x14 + lVar14 * 0x18) = uVar6;
                    *(undefined1 *)(lVar25 + 0x16 + lVar14 * 0x18) = uVar17;
                    *(byte *)((longlong)plVar12 + 0x55) = *(byte *)((longlong)plVar12 + 0x55) | 2;
                    FUN_147eaa6b0(plVar12);
                    (**(code **)(*plVar12 + 0x2a0))(plVar12,param_6);
                    *(undefined1 *)((longlong)plVar12 + 0x59) = uVar7;
                    *param_4 = *param_4 + 1;
                    FUN_147eaa6b0(0);
                    iVar10 = *(int *)(lVar23 + 0x48);
                  }
                  lVar24 = lVar24 + 1;
                } while (lVar24 < iVar10);
                iVar16 = (int)plVar11[3];
              }
              uVar15 = *(uint *)(plVar11 + 5);
              uVar20 = (ulonglong)uVar15;
              iVar10 = *(int *)(lVar23 + 0x58);
              if (uVar15 != 0 || iVar10 != 0) {
                plVar21 = plVar11 + 4;
                if (0 < iVar3) {
                  *(uint *)(plVar11 + 5) = uVar15 + 1;
                  if (*(uint *)((longlong)plVar11 + 0x2c) < uVar15 + 1) {
                    FUN_147eb45fe(plVar21,uVar15);
                  }
                  memmove((void *)(*plVar21 + 4),(void *)*plVar21,uVar20 * 4);
                  iVar10 = iVar3 * 0x10000 + 0x10002;
                  if (uVar20 != 0) {
                    iVar10 = 0x20002;
                  }
                  *(int *)*plVar21 = iVar10;
                  if (uVar20 == 0) {
                    iVar18 = 1;
                    iVar10 = iVar3;
                    do {
                      iVar4 = (int)plVar11[5];
                      *(uint *)(plVar11 + 5) = iVar4 + 1U;
                      if (*(uint *)((longlong)plVar11 + 0x2c) < iVar4 + 1U) {
                        FUN_147eb45fe(plVar21,iVar4);
                      }
                      *(int *)(*plVar21 + (longlong)iVar4 * 4) = iVar18;
                      iVar18 = iVar18 + 0x10000;
                      iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                  }
                  iVar10 = *(int *)(lVar23 + 0x58);
                }
                if (iVar10 == 0) {
                  iVar10 = (int)plVar11[5];
                  *(uint *)(plVar11 + 5) = iVar10 + 1U;
                  if (*(uint *)((longlong)plVar11 + 0x2c) < iVar10 + 1U) {
                    FUN_147eb45fe(plVar21,iVar10);
                  }
                  iVar16 = iVar16 - iVar3;
                  *(uint *)(*plVar21 + (longlong)iVar10 * 4) = iVar16 * 0x10000 | 2;
                  if (0 < iVar16) {
                    iVar10 = iVar3 * 0x10000 + 1;
                    do {
                      iVar3 = (int)plVar11[5];
                      *(uint *)(plVar11 + 5) = iVar3 + 1U;
                      if (*(uint *)((longlong)plVar11 + 0x2c) < iVar3 + 1U) {
                        FUN_147eb45fe(plVar21,iVar3);
                      }
                      *(int *)(*plVar21 + (longlong)iVar3 * 4) = iVar10;
                      iVar10 = iVar10 + 0x10000;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                }
                else if (0 < iVar10) {
                  lVar24 = 0;
                  do {
                    uVar15 = *(uint *)(*(longlong *)(lVar23 + 0x50) + lVar24 * 4);
                    iVar10 = (int)plVar11[5];
                    *(uint *)(plVar11 + 5) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar11 + 0x2c) < iVar10 + 1U) {
                      FUN_147eb45fe(plVar21,iVar10);
                    }
                    iVar16 = 0;
                    if ((uVar15 & 0xff) == 1) {
                      iVar16 = iVar3 << 0x10;
                    }
                    *(uint *)(*plVar21 + (longlong)iVar10 * 4) = iVar16 + uVar15;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < *(int *)(lVar23 + 0x58));
                }
              }
            }
          }
          uVar15 = (uint)(in_stack_ffffffffffffff70 >> 0x20);
          if (*plVar11 == 0) {
            if (plVar11[1] != 0) {
              in_stack_ffffffffffffff70 = (ulonglong)uVar15 << 0x20;
              lVar24 = FUN_14092e7b3(plVar11[1],param_7,0,0xffffffff,0,in_stack_ffffffffffffff70,
                                     0xfff00007);
              lVar23 = 0;
              if (lVar24 != 0) {
                lVar23 = FUN_141247a20();
                if ((*(int *)(*(longlong *)(lVar24 + 0x10) + 0x38) < *(int *)(lVar23 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar23 + 0x38) * 8) != lVar23 + 0x30)) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = lVar24;
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(lVar24);
                  }
                }
              }
              plVar11[1] = lVar23;
              iVar10 = *(int *)(lVar23 + 0x60);
              if (0 < iVar10) {
                uVar15 = 0;
                lVar24 = lVar23;
                do {
                  lVar25 = (longlong)(int)uVar15;
                  lVar14 = *(longlong *)(*(longlong *)(lVar24 + 0x58) + lVar25 * 8);
                  if (lVar14 == 0) {
                    if (~uVar15 + iVar10 != 0) {
                      pvVar1 = (void *)(*(longlong *)(lVar24 + 0x58) + lVar25 * 8);
                      memmove(pvVar1,(void *)((longlong)pvVar1 + 8),
                              (longlong)(int)(~uVar15 + iVar10) << 3);
                      iVar10 = *(int *)(lVar24 + 0x60);
                    }
                    *(int *)(lVar24 + 0x60) = iVar10 + -1;
                    uVar15 = uVar15 - 1;
                  }
                  else {
                    in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffffff00000000;
                    plVar21 = (longlong *)
                              FUN_14092e7b3(lVar14,param_7,0,0xffffffff,0,in_stack_ffffffffffffff70,
                                            0xfff00007);
                    if (plVar21 == (longlong *)0x0) {
LAB_14384937c:
                      puVar26 = (undefined8 *)(lVar25 * 8 + *(longlong *)(plVar11[1] + 0x58));
                      plVar21 = (longlong *)0x0;
                    }
                    else {
                      lVar24 = FUN_1458f16e2();
                      if ((*(int *)(plVar21[2] + 0x38) < *(int *)(lVar24 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar21[2] + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8
                           ) != lVar24 + 0x30)) goto LAB_14384937c;
                      puVar26 = (undefined8 *)(lVar25 * 8 + *(longlong *)(plVar11[1] + 0x58));
                      if (DAT_14c950c29 == 1) {
                        FUN_1456cec3c(plVar21);
                      }
                    }
                    *puVar26 = plVar21;
                    sVar8 = (**(code **)(*plVar21 + 0x2d8))(plVar21);
                    sVar9 = (**(code **)(*plVar21 + 0x2c0))(plVar21);
                    sVar2 = *param_4;
                    uVar6 = sVar8 + 3U & 0xfffc;
                    uVar5 = sVar9 + uVar6 + 3 & 0xfffc;
                    if ((ushort)(sVar9 + uVar6) < 3) {
                      uVar5 = sVar9 + uVar6;
                    }
                    iVar10 = (int)param_5[1];
                    lVar24 = (longlong)iVar10;
                    *(uint *)(param_5 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
                      FUN_147eb7b16(param_5,iVar10);
                    }
                    lVar14 = *param_5;
                    *(longlong **)(lVar14 + lVar24 * 0x18) = plVar21;
                    *(longlong **)(lVar14 + 8 + lVar24 * 0x18) = param_2;
                    *(short *)(lVar14 + 0x10 + lVar24 * 0x18) = sVar2;
                    *(ushort *)(lVar14 + 0x12 + lVar24 * 0x18) = uVar5;
                    *(ushort *)(lVar14 + 0x14 + lVar24 * 0x18) = uVar6;
                    *(undefined1 *)(lVar14 + 0x16 + lVar24 * 0x18) = uVar17;
                    FUN_147eaa6b0(plVar21);
                    (**(code **)(*plVar21 + 0x2a0))(plVar21,param_6);
                    *(undefined1 *)((longlong)plVar21 + 0x59) = uVar7;
                    *param_4 = *param_4 + 1;
                    FUN_147eaa6b0(0);
                  }
                  uVar15 = uVar15 + 1;
                  lVar24 = plVar11[1];
                  iVar10 = *(int *)(lVar24 + 0x60);
                } while ((int)uVar15 < iVar10);
              }
              goto LAB_1438491d4;
            }
          }
          else {
            in_stack_ffffffffffffff70 = (ulonglong)uVar15 << 0x20;
            lVar24 = FUN_14092e7b3(*plVar11,param_7,0,0xffffffff,0,in_stack_ffffffffffffff70,
                                   0xfff00007);
            lVar23 = 0;
            if (lVar24 != 0) {
              lVar23 = FUN_14587de5c();
              if ((*(int *)(*(longlong *)(lVar24 + 0x10) + 0x38) < *(int *)(lVar23 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar23 + 0x38) * 8) != lVar23 + 0x30)) {
                lVar23 = 0;
              }
              else {
                lVar23 = lVar24;
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar24);
                }
              }
            }
            *plVar11 = lVar23;
LAB_1438491d4:
            if (lVar23 != 0) {
              in_stack_ffffffffffffff70 = param_6;
              FUN_143848ce8(param_2,lVar23,param_3 + 1,param_4,param_5,param_6,param_7);
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)param_2[0xc]);
      }
      *(short *)((longlong)param_2 + 0x7c) = *param_4 + -1;
    }
  }
  return;
}



// FUNCTION 1438498c0 FUN_1438498c0 body=55 status=ok
// SIG undefined FUN_1438498c0(void)

void FUN_1438498c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ec20 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1ec20 = FUN_14171c317(FUN_146428d48,uVar1,L"EBTNodeResult");
  }
  return;
}



// FUNCTION 1438498f7 FUN_1438498f7 body=55 status=ok
// SIG undefined FUN_1438498f7(void)

void FUN_1438498f7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ec38 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1ec38 = FUN_14171c317(FUN_146428d77,uVar1,L"EBTFlowAbortMode");
  }
  return;
}



// FUNCTION 14384992e FUN_14384992e body=211 status=ok
// SIG undefined FUN_14384992e(void)

void FUN_14384992e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = param_2;
  if (lVar2 == 0) {
    if ((*(byte *)(param_1 + 0x24) & 1) != 0) goto LAB_143849959;
    FUN_147ea9e80(param_1,param_2);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  do {
    if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
      plVar4 = *(longlong **)(lVar3 + 0x38);
      lVar5 = 0;
      do {
        if (*plVar4 == lVar2) {
          uVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar5;
          goto LAB_1438499c4;
        }
        lVar5 = lVar5 + -1;
        plVar4 = plVar4 + 3;
      } while (-lVar5 != (longlong)*(int *)(lVar3 + 0x40));
    }
    plVar4 = (longlong *)(lVar3 + 0x30);
    lVar3 = *plVar4;
  } while (*plVar4 != 0);
  uVar1 = 0xffff;
LAB_1438499c4:
  *(uint *)(param_1 + 0x20) = uVar1 & 0xffff;
  FUN_147ea9f0e(param_2,&local_28);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_28);
  }
  *(longlong *)(param_1 + 0x18) = local_28;
LAB_143849959:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143849a13 FUN_143849a13 body=46 status=ok
// SIG undefined FUN_143849a13(void)

void FUN_143849a13(void)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    if (*(longlong *)(lVar1 + 0x14cb1ec80) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143849a41 FUN_143849a41 body=46 status=ok
// SIG undefined FUN_143849a41(void)

void FUN_143849a41(void)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    if (*(longlong *)((longlong)&DAT_14cb1ecd0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143849a6f FUN_143849a6f body=49 status=ok
// SIG undefined FUN_143849a6f(void)

void FUN_143849a6f(void)

{
  FUN_144760e21(DAT_14cb1ee50,DAT_14cb1ee58);
  if (DAT_14cb1ee50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143849aa0 FUN_143849aa0 body=328 status=ok
// SIG undefined FUN_143849aa0(void)

void FUN_143849aa0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_1413f6fa8();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  if (*(char *)(lVar3 + 0xd2) == '\x01') {
    lVar3 = FUN_147eb4a1e(param_1);
    if (lVar3 != 0) {
      if (DAT_14cac9ca8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1478c0a72;
        local_50 = &LAB_1417b2375;
        local_58 = L"Engine";
        local_60 = 0x1000000000;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar1 = DAT_14cac9ca8;
      if ((DAT_14cac9ca8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(DAT_14cac9ca8);
      }
      *(longlong *)(lVar3 + 0x30) = lVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143849be9 FUN_143849be9 body=370 status=ok
// SIG undefined FUN_143849be9(void)

void FUN_143849be9(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2a) = 0;
  *(byte *)((longlong)puVar1 + 0x2b) = *(byte *)((longlong)puVar1 + 0x2b) & 0xfc;
  *puVar1 = &PTR_FUN_14abe3800;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined2 *)(puVar1 + 5) = 8;
  if (DAT_14c927740 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  lVar2 = DAT_14c927740;
  if ((DAT_14c927740 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14c927740);
  }
  puVar1[6] = lVar2;
  *(undefined1 *)((longlong)puVar1 + 0x2a) = 0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143849d5c FUN_143849d5c body=151 status=ok
// SIG undefined FUN_143849d5c(void)

undefined8 FUN_143849d5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1412dbfa6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      lVar1 = *(longlong *)(param_2 + 0x30);
      if (lVar1 == lVar2) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = *(longlong *)(param_1 + 0x30);
      if ((lVar1 != 0 && lVar2 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
        return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                        *(longlong *)
                         (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                        lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 143849e04 FUN_143849e04 body=48 status=ok
// SIG undefined FUN_143849e04(void)

longlong FUN_143849e04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143849e34 FUN_143849e34 body=48 status=ok
// SIG undefined FUN_143849e34(void)

longlong FUN_143849e34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143849e64 FUN_143849e64 body=48 status=ok
// SIG undefined FUN_143849e64(void)

longlong FUN_143849e64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143849e94 FUN_143849e94 body=275 status=ok
// SIG undefined FUN_143849e94(void)

longlong FUN_143849e94(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140754f84;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_147da9a76;
      local_40 = FUN_1409f3105;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_143849ee7;
  }
  lVar1 = 0;
LAB_143849ee7:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384a03a FUN_14384a03a body=175 status=ok
// SIG undefined FUN_14384a03a(void)

void FUN_14384a03a(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (((int)param_2[1] == 0) && (lVar2 = *param_2, lVar2 != 0)) {
    uVar1 = *param_3;
    lVar3 = param_1[1];
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      FUN_147ea6da2(lVar3,lVar2);
      iVar4 = FUN_147ebe854(lVar2,lVar3,
                            (ulonglong)*(ushort *)(lVar2 + 0x52) + *(longlong *)(*param_1 + 0x30));
      if (((-1 < (int)uVar1 && iVar4 == 3) && ((int)uVar1 < *(int *)(*param_1 + 0x28))) &&
         (*param_2 == lVar2)) {
        *(undefined4 *)(*(longlong *)(*param_1 + 0x20) + 8 + (ulonglong)uVar1 * 0x10) = 1;
        *(byte *)(lVar3 + 0x2da) = *(byte *)(lVar3 + 0x2da) | 2;
      }
      FUN_147ea6e12(lVar3,lVar2,iVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14384a0ea FUN_14384a0ea body=61 status=ok
// SIG undefined FUN_14384a0ea(void)

void FUN_14384a0ea(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  
  bVar1 = FUN_147ebe8a0(*param_2,param_1[2],
                        (ulonglong)*(ushort *)(*param_2 + 0x52) + *(longlong *)(*param_1 + 0x30),
                        (int)param_1[3],param_1[4]);
  *(byte *)param_1[1] = *(byte *)param_1[1] | bVar1;
  return;
}



// FUNCTION 14384a128 FUN_14384a128 body=336 status=ok
// SIG undefined FUN_14384a128(void)

void FUN_14384a128(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    uVar1 = *param_4;
    lVar2 = param_1[2];
    lVar4 = FUN_145b62b2c();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
        (*(longlong *)(param_2 + 0x70) == *param_1)) &&
       (lVar4 = FUN_147eb9f50(param_2,lVar2), lVar4 != 0)) {
      lVar5 = FUN_145b62b2c();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         (lVar5 = param_1[1], *(longlong *)(lVar4 + 0x80) != lVar5)) {
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        *(longlong *)(lVar4 + 0x80) = lVar5;
        *(undefined1 *)param_1[3] = 1;
        if ((*(char *)(param_3 + 0x41) == '\x01') && (*(longlong *)(param_3 + 8) == param_2)) {
          lVar4 = *(longlong *)(param_2 + 0x48);
          uVar3 = 0xfffffffe;
          if (0 < (longlong)*(int *)(lVar4 + 0x60)) {
            plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x58) + 8);
            lVar5 = 0;
            do {
              if ((plVar6[-1] == param_2) || (*plVar6 == param_2)) {
                uVar3 = (undefined4)lVar5;
                break;
              }
              lVar5 = lVar5 + 1;
              plVar6 = plVar6 + 6;
            } while (*(int *)(lVar4 + 0x60) != lVar5);
          }
          FUN_143846b9a(lVar2,lVar4,uVar1,param_2,uVar3,2,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 14384a2ae FUN_14384a2ae body=2214 status=ok
// SIG undefined FUN_14384a2ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384a2ae(void)

{
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  ulonglong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  DAT_14cb1e778 = 0x47efffffe0000000;
  DAT_14cb1e780 = 0x47efffffe0000000;
  DAT_14cb1e788 = 0x47efffffe0000000;
  _DAT_14cb1e790 = 0x47efffffe0000000;
  _DAT_14cb1e798 = 0x47efffffe0000000;
  _DAT_14cb1e7a0 = 0x47efffffe0000000;
  _DAT_14cb1e7a8 = 0x47efffffe0000000;
  DAT_14cb1e7b0 = 0x47efffffe0000000;
  DAT_14cb1e7b8 = 0x47efffffe0000000;
  DAT_14cb1e7c0 = 0x47efffffe0000000;
  uStack_88 = 2;
  ppuStack_90 = &PTR_FUN_14abd5890;
  local_98 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd58d0,1,0);
  FUN_1446f470e(&DAT_14cb1e828,L"SelfActor",1);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd67b0,1,&PTR_FUN_14abd6760);
  FUN_1446f470e(&DAT_14cb1e898,L"ActionFinished",1);
  FUN_1446f470e(&DAT_14cb1e8a8,L"ActionPause",1);
  FUN_1446f470e(&DAT_14cb1e8b8,L"ActionResume",1);
  FUN_1446f470e(&DAT_14cb1e8c8,L"ActionStart",1);
  FUN_1446f470e(&DAT_14cb1e8d8,L"ActionTick",1);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd6fe0,1,0);
  uStack_88 = 1;
  ppuStack_90 = &PTR_FUN_14abd77d0;
  local_98 = 0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd77f0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd7cd0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd81b0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abd85b0,1,0);
  FUN_1446f470e(&DAT_14cb1ea00,L"OnUsingBlackBoard",1);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdad70,1,0);
  DAT_14cb1f000 = 0xff;
  DAT_14cb1f020 = 0;
  DAT_14cb1f030 = &PTR_LAB_14abe5700;
  _DAT_14cb1f038 = &LAB_143845f2d;
  DAT_14cb1f010 = &LAB_147eb5a00;
  atexit((_func_5014 *)&LAB_143845f37);
  local_78 = 0x800000014abdae9e;
  local_64 = 8;
  local_70 = FUN_14577453c();
  local_6c = 1;
  FUN_1464287dc(&local_78);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdb510,2,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdb920,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdc6a0,1,0);
  _DAT_14cb1efa8 = 0;
  DAT_14cb1ead4 = '\0';
  DAT_14cb1ead8 = 0xff;
  FUN_1446f470e(&DAT_14cb1eadc,L"Invalid",1);
  FUN_1446f470e(&local_78,L"Movement",1);
  DAT_14cb1eae4 = DAT_14cb1ead4;
  _DAT_14cb1eae8 = local_78;
  DAT_14cb1ead4 = DAT_14cb1ead4 + '\x01';
  FUN_1446f470e(&local_78,L"Logic",1);
  DAT_14cb1eaf0 = DAT_14cb1ead4;
  _DAT_14cb1eaf4 = local_78;
  DAT_14cb1ead4 = DAT_14cb1ead4 + '\x01';
  FUN_1446f470e(&local_78,L"Perception",1);
  DAT_14cb1eafc = DAT_14cb1ead4;
  _DAT_14cb1eb00 = local_78;
  DAT_14cb1eb08 = 0;
  _DAT_14cb1eb10 = 0;
  DAT_14cb1ead4 = DAT_14cb1ead4 + '\x01';
  atexit((_func_5014 *)&LAB_1438461b4);
  FUN_14604a6ce(&DAT_14cb1eae4);
  FUN_14604a6ce(&DAT_14cb1eaf0);
  FUN_14604a6ce(&DAT_14cb1eafc);
  DAT_14cb1eff8 = 0xffffffff;
  DAT_14cb1efa4 = 0;
  DAT_14cb1effc = 0;
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdcdb0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdd8a0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb1eb60,L"BehaviorTree.RecordFrameSearchTimes",&local_78,
                L"Record Search Times Per Frame For Perf Stats");
  atexit(FUN_1438461c5);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb1eb78,L"BehaviorTree.ApplyAuxNodesFromFailedSearches",&DAT_14cb1eb88,
                L"Apply Aux Nodes From Failed Searches");
  atexit(FUN_14384620a);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb1eb90,
                L"BehaviorTree.EnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest",
                &DAT_14c762390,
                L"Should we ensure when pending execution and execution node are invalid when scheduling execution update."
               );
  atexit(FUN_14384624f);
  DAT_14cb1eba0 = 0;
  _DAT_14cb1eba8 = 0;
  _DAT_14cb1ebb0 = 2;
  atexit(FUN_143848bed);
  DAT_14cb1ebb8 = 0;
  _DAT_14cb1ebc0 = 0;
  _DAT_14cb1ebc8 = 2;
  atexit(FUN_143848c1e);
  DAT_14cb1ebd0 = 0;
  _DAT_14cb1ebd8 = 0;
  _DAT_14cb1ebe0 = 2;
  atexit(FUN_143848c4f);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abde1c0,1,&PTR_FUN_14abde190);
  uStack_88 = 2;
  ppuStack_90 = &PTR_FUN_14abde8d0;
  local_98 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abde940,1,&PTR_FUN_14abde910);
  DAT_14cb1ec78 = 0;
  uRam000000014cb1ec80 = 0;
  atexit((_func_5014 *)&LAB_143849a02);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abdedf0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe0d80,1,0);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe13a0,1,&PTR_FUN_14abe1370);
  DAT_14cb1ee50 = 0;
  _DAT_14cb1ee58 = 0;
  _DAT_14cb1ee60 = 2;
  atexit(FUN_143849a6f);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe1780,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe1bc0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe2050,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe2580,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe29c0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe2df0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe3220,1,0);
  DAT_14cb1efe0 = 0;
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe36a0,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe3b30,1,0);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe3fd0,1,0);
  DAT_14cb1efd8 = DAT_14cb1e788;
  _DAT_14cb1efc8 = (undefined4)DAT_14cb1e778;
  uRam000000014cb1efcc = DAT_14cb1e778._4_4_;
  uRam000000014cb1efd0 = (undefined4)DAT_14cb1e780;
  uRam000000014cb1efd4 = DAT_14cb1e780._4_4_;
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe4450,1,0);
  DAT_14cb1efe8 = 0;
  _DAT_14cb1eff0 = 0;
  atexit((_func_5014 *)&LAB_143849df3);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AIModule",&PTR_FUN_14abe48d0,1,0);
  DAT_14cb1efc0 = DAT_14cb1e7c0;
  _DAT_14cb1efb0 = (undefined4)DAT_14cb1e7b0;
  uRam000000014cb1efb4 = DAT_14cb1e7b0._4_4_;
  uRam000000014cb1efb8 = (undefined4)DAT_14cb1e7b8;
  uRam000000014cb1efbc = DAT_14cb1e7b8._4_4_;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14384ab58 FUN_14384ab58 body=55 status=ok
// SIG undefined FUN_14384ab58(void)

void FUN_14384ab58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1f0d8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1f0d8 = FUN_14171c317(FUN_146429ed5,uVar1,L"EBTChildIndex");
  }
  return;
}


