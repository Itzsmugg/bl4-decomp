// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148af64d6 FUN_148af64d6 body=29 status=ok
// SIG undefined FUN_148af64d6(void)

bool FUN_148af64d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148af64f4 FUN_148af64f4 body=26 status=ok
// SIG undefined FUN_148af64f4(void)

bool FUN_148af64f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af650e FUN_148af650e body=24 status=ok
// SIG undefined FUN_148af650e(void)

bool FUN_148af650e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148af6526 FUN_148af6526 body=93 status=ok
// SIG undefined FUN_148af6526(void)

void FUN_148af6526(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b538700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6584 FUN_148af6584 body=93 status=ok
// SIG undefined FUN_148af6584(void)

void FUN_148af6584(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b538700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af65e2 FUN_148af65e2 body=123 status=ok
// SIG undefined FUN_148af65e2(void)

void FUN_148af65e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b538700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af665e FUN_148af665e body=35 status=ok
// SIG undefined FUN_148af665e(void)

void FUN_148af665e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af667d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148af669c FUN_148af669c body=29 status=ok
// SIG undefined FUN_148af669c(void)

bool FUN_148af669c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148af66ba FUN_148af66ba body=26 status=ok
// SIG undefined FUN_148af66ba(void)

bool FUN_148af66ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af66d4 FUN_148af66d4 body=24 status=ok
// SIG undefined FUN_148af66d4(void)

bool FUN_148af66d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148af66ec FUN_148af66ec body=93 status=ok
// SIG undefined FUN_148af66ec(void)

void FUN_148af66ec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b538770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af674a FUN_148af674a body=93 status=ok
// SIG undefined FUN_148af674a(void)

void FUN_148af674a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b538770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af67a8 FUN_148af67a8 body=123 status=ok
// SIG undefined FUN_148af67a8(void)

void FUN_148af67a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b538770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af6824 FUN_148af6824 body=35 status=ok
// SIG undefined FUN_148af6824(void)

void FUN_148af6824(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af6843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148af6848 FUN_148af6848 body=96 status=ok
// SIG undefined FUN_148af6848(void)

void FUN_148af6848(longlong param_1,int param_2)

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



// FUNCTION 148af68a8 FUN_148af68a8 body=23 status=ok
// SIG undefined FUN_148af68a8(void)

void FUN_148af68a8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 148af68da FUN_148af68da body=93 status=ok
// SIG undefined FUN_148af68da(void)

void FUN_148af68da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5387e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6938 FUN_148af6938 body=93 status=ok
// SIG undefined FUN_148af6938(void)

void FUN_148af6938(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5387e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6996 FUN_148af6996 body=123 status=ok
// SIG undefined FUN_148af6996(void)

void FUN_148af6996(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5387e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af6a12 FUN_148af6a12 body=48 status=ok
// SIG undefined FUN_148af6a12(void)

void FUN_148af6a12(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af6a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af6a5c FUN_148af6a5c body=93 status=ok
// SIG undefined FUN_148af6a5c(void)

void FUN_148af6a5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b538850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6aba FUN_148af6aba body=93 status=ok
// SIG undefined FUN_148af6aba(void)

void FUN_148af6aba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b538850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6b18 FUN_148af6b18 body=123 status=ok
// SIG undefined FUN_148af6b18(void)

void FUN_148af6b18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b538850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af6b94 FUN_148af6b94 body=40 status=ok
// SIG undefined FUN_148af6b94(void)

void FUN_148af6b94(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af6bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af6bbc FUN_148af6bbc body=36 status=ok
// SIG undefined FUN_148af6bbc(void)

undefined8 FUN_148af6bbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148af6bfa FUN_148af6bfa body=29 status=ok
// SIG undefined FUN_148af6bfa(void)

bool FUN_148af6bfa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148af6c18 FUN_148af6c18 body=26 status=ok
// SIG undefined FUN_148af6c18(void)

bool FUN_148af6c18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148af6c32 FUN_148af6c32 body=93 status=ok
// SIG undefined FUN_148af6c32(void)

void FUN_148af6c32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5388c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6c90 FUN_148af6c90 body=93 status=ok
// SIG undefined FUN_148af6c90(void)

void FUN_148af6c90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5388c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148af6cee FUN_148af6cee body=123 status=ok
// SIG undefined FUN_148af6cee(void)

void FUN_148af6cee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b538930;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5388c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148af6d6a FUN_148af6d6a body=48 status=ok
// SIG undefined FUN_148af6d6a(void)

void FUN_148af6d6a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148af6d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148af6d9a FUN_148af6d9a body=151 status=ok
// SIG undefined FUN_148af6d9a(void)

bool FUN_148af6d9a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af6e34 FUN_148af6e34 body=397 status=ok
// SIG undefined FUN_148af6e34(void)

void FUN_148af6e34(undefined1 *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[1] == '\0') {
    param_1[1] = 1;
    plVar1 = (longlong *)(param_1 + 0x10);
    puVar2 = param_1 + 0x20;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar8 = 0;
    puStack_60 = puVar2;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(param_1 + 0x38);
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = puStack_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar8) || (puStack_60 != puVar2)) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        puVar3 = (undefined8 *)(*local_90 + (longlong)iVar5 * 0x18);
        local_68 = *puVar3;
        puStack_60 = (undefined1 *)puVar3[1];
        plVar6 = (longlong *)FUN_14479d2ce(&puStack_60);
        if (plVar6 != (longlong *)0x0) {
          lVar7 = FUN_140e21508();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) {
            (**(code **)(*plVar6 + 0x308))(plVar6);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 || (local_80 != puVar2 || local_78._4_4_ != iVar8));
    }
    local_78 = uVar4;
    param_1[1] = 0;
    *param_1 = 0;
    FUN_145abd854(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af6fc2 FUN_148af6fc2 body=160 status=ok
// SIG undefined FUN_148af6fc2(void)

void FUN_148af6fc2(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x2d0) + 0x28,param_1);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x2d0) = param_2;
  local_30 = &LAB_148af7140;
  local_28 = 0;
  FUN_148af7064(param_2 + 0x28,local_20,param_1);
  FUN_148af36ea(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af7064 FUN_148af7064 body=218 status=ok
// SIG undefined FUN_148af7064(void)

undefined8
FUN_148af7064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b538b70;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539130;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1410e6738(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af7154 FUN_148af7154 body=28 status=ok
// SIG undefined FUN_148af7154(void)

void FUN_148af7154(undefined8 param_1)

{
  FUN_141318288();
  FUN_148af7170(param_1,0);
  return;
}



// FUNCTION 148af7170 FUN_148af7170 body=4667 status=ok
// SIG undefined FUN_148af7170(void)

void FUN_148af7170(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  void *pvVar4;
  ulonglong *puVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined4 uVar17;
  longlong *plVar18;
  longlong lVar19;
  wchar_t **ppwVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  wchar_t ***pppwVar23;
  bool bVar24;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 local_190;
  undefined1 local_188;
  longlong **local_180;
  longlong *local_170;
  longlong local_168;
  wchar_t ***local_160;
  longlong local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  longlong *local_118 [2];
  longlong *local_108;
  undefined8 uStack_100;
  wchar_t **local_f8;
  ulonglong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  wchar_t **local_b8;
  ulonglong *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70 [2];
  wchar_t *local_68;
  ulonglong uStack_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 == 0) {
    param_1[0x6c] = 0;
    plVar18 = (longlong *)param_1[0x6f];
    if (plVar18 != (longlong *)0x0) {
      puVar14 = (undefined8 *)FUN_140e82300();
      local_d8 = (longlong *)*puVar14;
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 8))();
      }
      puVar14 = puVar14 + 1;
LAB_148af71f3:
      local_d0 = *(undefined4 *)puVar14;
      (**(code **)(*plVar18 + 0x348))(plVar18);
      plVar18 = (longlong *)param_1[0x70];
      if (plVar18 != (longlong *)0x0) {
        if (param_2 != 0) goto LAB_148af7221;
LAB_148af7b2f:
        puVar14 = (undefined8 *)FUN_140e82300();
        local_90 = (wchar_t *)*puVar14;
        if (local_90 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_90 + 8))();
        }
        puVar14 = puVar14 + 1;
LAB_148af7242:
        uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,*(undefined4 *)puVar14);
        (**(code **)(*plVar18 + 0x348))(plVar18,&local_90);
        if (local_90 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_90 + 0x10))();
        }
      }
      if (param_1[0x71] != 0) {
        if (param_2 == 0) {
LAB_148af7b6b:
          puVar14 = (undefined8 *)FUN_140e82300();
          local_90 = (wchar_t *)*puVar14;
          if (local_90 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_90 + 8))();
          }
          uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,*(undefined4 *)(puVar14 + 1));
        }
        else {
LAB_148af7286:
          FUN_143f9df28(param_2,&local_90);
        }
        plVar18 = (longlong *)param_1[0x71];
        (**(code **)(*plVar18 + 0x348))(plVar18,&local_90);
        plVar18 = (longlong *)param_1[0x71];
        uVar11 = FUN_144a7c5f6(&local_90);
        iVar6 = (uVar11 ^ 1) * 2;
        (**(code **)(*plVar18 + 0x2b0))
                  (plVar18,CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + '\x01'));
        if (local_90 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_90 + 0x10))();
        }
      }
      plVar18 = (longlong *)param_1[0x72];
      if (plVar18 != (longlong *)0x0) {
        if (param_2 != 0) {
LAB_148af72f1:
          plVar18 = param_1 + 0x72;
          local_90 = *(wchar_t **)(param_2 + 0xa0);
          if (local_90 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_90 + 8))();
          }
          uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_2 + 0xa8));
          cVar10 = FUN_144a7c5f6(&local_90);
          if (local_90 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_90 + 0x10))();
          }
          if (cVar10 == '\0') {
            local_e8 = *(longlong **)(param_2 + 0xa0);
            if (local_e8 != (longlong *)0x0) {
              (**(code **)(*local_e8 + 8))();
            }
            local_e0 = *(undefined4 *)(param_2 + 0xa8);
            local_90 = L"WarningReasonLine";
            uStack_88._0_4_ = 0x11;
            FUN_1446e940c(local_118,&local_90);
            local_90 = L"GameSetting";
            uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,0xb);
            FUN_1446e940c(local_148,&local_90);
            FUN_140208bae(&local_108,local_148,local_118,L"<Icon.Warning></> {0}");
            FUN_14023409e(&local_f8,&local_108,1);
            local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
            FUN_14023423e(&uStack_80,&local_e8);
            uStack_a0 = local_70;
            local_a8 = &local_90;
            FUN_14010d304(&local_68);
            local_b8 = local_f8;
            local_b0 = local_f0;
            if (local_f0 != (ulonglong *)0x0) {
              LOCK();
              *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_c8,&local_b8,&local_68);
            FUN_14007f2db(local_68,uStack_60 & 0xffffffff);
            if (local_68 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (uStack_80 != (longlong *)0x0) {
              (**(code **)(*uStack_80 + 0x10))();
            }
            if (local_f0 != (ulonglong *)0x0) {
              LOCK();
              puVar3 = local_f0 + 1;
              *(int *)puVar3 = (int)*puVar3 + -1;
              UNLOCK();
              if ((int)*puVar3 == 0) {
                (**(code **)*local_f0)(local_f0);
                LOCK();
                piVar2 = (int *)((longlong)local_f0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_f0 + 0x10))(local_f0);
                }
              }
            }
            if (local_e8 != (longlong *)0x0) {
              (**(code **)(*local_e8 + 0x10))();
            }
            if (local_108 != (longlong *)0x0) {
              (**(code **)(*local_108 + 0x10))();
            }
            (**(code **)(*(longlong *)*plVar18 + 0x348))((longlong *)*plVar18,&local_c8);
            (**(code **)(*(longlong *)*plVar18 + 0x2b0))((longlong *)*plVar18,3);
            if (local_c8 != (longlong *)0x0) {
              (**(code **)(*local_c8 + 0x10))();
            }
            goto LAB_148af7364;
          }
          plVar18 = (longlong *)*plVar18;
        }
LAB_148af7340:
        uVar12 = FUN_140e82300();
        (**(code **)(*plVar18 + 0x348))(plVar18,uVar12);
        (**(code **)(*(longlong *)param_1[0x72] + 0x2b0))((longlong *)param_1[0x72],1);
      }
      goto LAB_148af7364;
    }
    plVar18 = (longlong *)param_1[0x70];
    if (plVar18 != (longlong *)0x0) goto LAB_148af7b2f;
    if (param_1[0x71] != 0) goto LAB_148af7b6b;
    plVar18 = (longlong *)param_1[0x72];
    if (plVar18 != (longlong *)0x0) goto LAB_148af7340;
    ppwVar20 = (wchar_t **)param_1[0x73];
    if (ppwVar20 != (wchar_t **)0x0) {
      pppwVar23 = (wchar_t ***)(param_1 + 0x73);
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      goto LAB_148af7772;
    }
  }
  else {
    if (param_1[0x6c] == param_2) goto LAB_148af78e4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    param_1[0x6c] = param_2;
    plVar18 = (longlong *)param_1[0x6f];
    if (plVar18 != (longlong *)0x0) {
      local_d8 = *(longlong **)(param_2 + 0x78);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 8))();
      }
      puVar14 = (undefined8 *)(param_2 + 0x80);
      goto LAB_148af71f3;
    }
    plVar18 = (longlong *)param_1[0x70];
    if (plVar18 != (longlong *)0x0) {
LAB_148af7221:
      local_90 = *(wchar_t **)(param_2 + 0x90);
      if (local_90 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_90 + 8))();
      }
      puVar14 = (undefined8 *)(param_2 + 0x98);
      goto LAB_148af7242;
    }
    if (param_1[0x71] != 0) goto LAB_148af7286;
    if (param_1[0x72] != 0) goto LAB_148af72f1;
LAB_148af7364:
    ppwVar20 = (wchar_t **)param_1[0x73];
    if (ppwVar20 != (wchar_t **)0x0) {
      pppwVar23 = (wchar_t ***)(param_1 + 0x73);
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      if (param_2 != 0) {
        local_170 = param_1;
        local_168 = param_2;
        local_160 = pppwVar23;
        FUN_1410e2b8a(&local_90,param_2 + 0x110);
        pvVar4 = local_78;
        if ((((ulonglong)local_90 & 2) == 0) && (lVar22 = (longlong)local_70[0], lVar22 != 0)) {
          lVar15 = 0;
          do {
            plVar18 = *(longlong **)((longlong)pvVar4 + lVar15);
            if (plVar18 == (longlong *)0x0) {
              uVar17 = *(undefined4 *)((longlong)pvVar4 + lVar15 + 8);
              local_128 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar18 + 8))(plVar18);
              uVar17 = *(undefined4 *)((longlong)pvVar4 + lVar15 + 8);
              local_128 = plVar18;
              (**(code **)(*plVar18 + 8))(plVar18);
            }
            local_68 = L"DisabledReasonLine";
            uStack_60._0_4_ = 0x12;
            local_120 = uVar17;
            FUN_1446e940c(local_14c,&local_68);
            local_68 = L"GameSetting";
            uStack_60 = CONCAT44(uStack_60._4_4_,0xb);
            FUN_1446e940c(local_150,&local_68);
            FUN_140208bae(local_148,local_150,local_14c,L"<Icon.Warning></> {0}");
            FUN_14023409e(&local_138,local_148,1);
            local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
            FUN_14023423e(local_58,&local_128);
            local_b0 = &local_48;
            local_b8 = &local_68;
            FUN_14010d304(&local_a8,&local_b8);
            local_c8 = local_138;
            local_c0 = local_130;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_130 + 1) = (int)local_130[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_118,&local_c8,&local_a8);
            FUN_14007f2db(local_a8,(ulonglong)uStack_a0 & 0xffffffff);
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (local_58[0] != (longlong *)0x0) {
              (**(code **)(*local_58[0] + 0x10))();
            }
            plVar8 = local_130;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_130 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            if (local_128 != (longlong *)0x0) {
              (**(code **)(*local_128 + 0x10))();
            }
            uVar9 = uStack_100;
            lVar19 = (longlong)(int)uStack_100;
            uVar11 = (int)uStack_100 + 1;
            uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
            if (uStack_100._4_4_ < uVar11) {
              FUN_14001d63e(&local_108,uVar9 & 0xffffffff);
            }
            FUN_14023423e(local_108 + lVar19 * 2,local_118);
            if (local_118[0] != (longlong *)0x0) {
              (**(code **)(*local_118[0] + 0x10))();
            }
            if (local_148[0] != (longlong *)0x0) {
              (**(code **)(*local_148[0] + 0x10))();
            }
            if (plVar18 != (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
            lVar15 = lVar15 + 0x10;
          } while (lVar22 * 0x10 != lVar15);
        }
        pppwVar23 = local_160;
        param_1 = local_170;
        if (0 < (int)uStack_80) {
          local_68 = L"DisabledOptionReasonLine";
          uStack_60._0_4_ = 0x18;
          FUN_1446e940c(&local_a8,&local_68);
          local_68 = L"GameSetting";
          uStack_60 = CONCAT44(uStack_60._4_4_,0xb);
          FUN_1446e940c(&local_b8,&local_68);
          FUN_140208bae(&local_68,&local_b8,&local_a8,
                        L"<Icon.Warning></> There are fewer options than available due to Parental Controls."
                       );
          uVar9 = uStack_100;
          lVar22 = (longlong)(int)uStack_100;
          uVar11 = (int)uStack_100 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
          if (uStack_100._4_4_ < uVar11) {
            FUN_14001d63e(&local_108,uVar9 & 0xffffffff);
          }
          FUN_14023423e(local_108 + lVar22 * 2,&local_68);
          if (local_68 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_68 + 0x10))();
          }
        }
        FUN_1410e2b42(&local_90);
        ppwVar20 = *pppwVar23;
        param_2 = local_168;
      }
LAB_148af7772:
      FUN_140056680(&local_a8,&DAT_149e01f72);
      FUN_140233b1a(&local_68,&local_a8);
      FUN_1467cfb2c(&local_90,&local_68,&local_108);
      (**(code **)(*ppwVar20 + 0x1a4))(ppwVar20,&local_90);
      if (local_90 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_90 + 0x10))();
      }
      if (local_68 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_68 + 0x10))();
      }
      if (local_a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(**pppwVar23 + 0x158))(*pppwVar23,((int)uStack_100 != 0) * '\x02' + '\x01');
      FUN_1401b9920(local_108,uStack_100 & 0xffffffff);
      if (local_108 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (param_1[0x74] == 0) goto LAB_148af78e4;
  FUN_1477433d0(param_1[0x74],&local_90);
  plVar18 = (longlong *)local_90;
  lVar22 = (longlong)(int)uStack_88;
  if (lVar22 != 0) {
    lVar15 = 0;
    do {
      lVar19 = *(longlong *)((longlong)plVar18 + lVar15);
      if (lVar19 == 0) {
LAB_148af789d:
        lVar19 = 0;
      }
      else {
        lVar13 = FUN_1405e2bf2();
        if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) goto LAB_148af789d;
      }
      FUN_1476cf0bc(param_1 + 0x5b,lVar19,0);
      lVar15 = lVar15 + 8;
    } while (lVar22 * 8 != lVar15);
  }
  if (local_90 != (wchar_t *)0x0) {
    FUN_1400020a8(local_90);
  }
  (**(code **)(*(longlong *)param_1[0x74] + 0x300))();
  if (param_2 == 0) goto LAB_148af78e4;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  plVar18 = (longlong *)param_1[0x5a];
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x2a0))(plVar18,&local_90,param_2);
    FUN_148af83b4(&local_68,&local_90);
    FUN_148af5870(local_90,(ulonglong)uStack_88 & 0xffffffff);
    if (local_90 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_1[0x6d] != 0) {
    FUN_140886972();
  }
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = (int *)0x0;
  local_170 = param_1;
  local_168 = param_2;
  if ((int)uStack_60 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_60 & 0xffffffff);
  }
  if ((uStack_60 & 0xffffffff) == 0) {
LAB_148af7c46:
    lVar22 = local_170[0x5e];
    if ((longlong)(int)lVar22 != 0) {
      lVar15 = local_170[0x5d];
      plVar18 = local_170 + 0x62;
      lVar19 = 0;
      do {
        FUN_147702b9c(plVar18,*(undefined8 *)(lVar15 + lVar19));
        lVar19 = lVar19 + 8;
      } while ((longlong)(int)lVar22 * 8 != lVar19);
    }
  }
  else {
    FUN_1403539de(&local_a8);
    if ((longlong)(int)uStack_60 == 0) goto LAB_148af7c46;
    local_160 = (wchar_t ***)(local_170 + 0x6d);
    pwVar21 = local_68 + (longlong)(int)uStack_60 * 0x14;
    bVar7 = true;
    pwVar16 = local_68;
    do {
      local_90 = *(wchar_t **)pwVar16;
      uStack_88 = *(longlong **)(pwVar16 + 4);
      uStack_80 = *(longlong **)(pwVar16 + 8);
      local_78 = (void *)0x0;
      local_70[0] = *(int *)(pwVar16 + 0x10);
      lVar22 = (longlong)local_70[0];
      pvVar4 = *(void **)(pwVar16 + 0xc);
      if (lVar22 == 0) {
        local_70[1] = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_70[0],0);
        memcpy(local_78,pvVar4,lVar22 * 2);
      }
      lVar22 = FUN_14479d2ce(&local_90);
      if ((lVar22 == 0) && (uStack_88 != (longlong *)0x0)) {
        lVar22 = FUN_140007850();
        cVar10 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar22 == 0) || (cVar10 == '\0')) {
          FUN_14485c47a(&local_90,lVar22);
          if (lVar22 == 0) goto LAB_148af7ea0;
        }
        else {
          uVar11 = *(uint *)(lVar22 + 0xc);
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          if ((*(uint *)(lVar15 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(&local_90,lVar22);
          }
        }
        if ((*(uint *)(lVar22 + 8) >> 0x1e & 1) != 0) goto LAB_148af7ea0;
LAB_148af7e7c:
        lVar15 = FUN_144a797b2();
        if ((((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) ||
            (lVar15 = FUN_1459f1af0(), lVar15 == 0)) ||
           (*(int *)(lVar22 + 0x38) < *(int *)(lVar15 + 0x38))) goto LAB_148af7ea0;
        bVar24 = *(longlong *)(*(longlong *)(lVar22 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                 == lVar15 + 0x30;
      }
      else {
        if (lVar22 != 0) goto LAB_148af7e7c;
LAB_148af7ea0:
        bVar24 = false;
      }
      piVar2 = uStack_a0;
      lVar22 = (longlong)(int)uStack_a0;
      uVar11 = (int)uStack_a0 + 1;
      uStack_a0 = (int *)CONCAT44(uStack_a0._4_4_,uVar11);
      if (uStack_a0._4_4_ < uVar11) {
        FUN_1406f071e(&local_a8,(ulonglong)piVar2 & 0xffffffff);
      }
      pvVar4 = local_78;
      puVar14 = local_a8 + lVar22 * 4;
      *(int *)puVar14 = (int)uStack_88;
      *(undefined4 *)((longlong)puVar14 + 4) = uStack_88._4_4_;
      *(int *)(puVar14 + 1) = (int)uStack_80;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_80._4_4_;
      local_a8[lVar22 * 4 + 2] = 0;
      lVar15 = (longlong)local_70[0];
      *(int *)(local_a8 + lVar22 * 4 + 3) = local_70[0];
      if (lVar15 == 0) {
        *(undefined4 *)((longlong)local_a8 + lVar22 * 0x20 + 0x1c) = 0;
      }
      else {
        puVar14 = local_a8 + lVar22 * 4 + 2;
        FUN_1446dd670(puVar14,local_70[0],0);
        memcpy((void *)*puVar14,pvVar4,lVar15 * 2);
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      bVar7 = (bool)(bVar7 & bVar24);
      pwVar16 = pwVar16 + 0x14;
    } while (pwVar16 != pwVar21);
    if (bVar7) {
      if ((longlong)(int)uStack_60 != 0) {
        pwVar21 = local_68 + (longlong)(int)uStack_60 * 0x14;
        pwVar16 = local_68;
        do {
          local_90 = *(wchar_t **)pwVar16;
          uStack_88 = *(longlong **)(pwVar16 + 4);
          uStack_80 = *(longlong **)(pwVar16 + 8);
          local_78 = (void *)0x0;
          local_70[0] = *(int *)(pwVar16 + 0x10);
          lVar22 = (longlong)local_70[0];
          pvVar4 = *(void **)(pwVar16 + 0xc);
          if (lVar22 == 0) {
            local_70[1] = 0;
          }
          else {
            FUN_1446dd670(&local_78,local_70[0],0);
            memcpy(local_78,pvVar4,lVar22 * 2);
          }
          lVar22 = FUN_14479d2ce(&local_90);
          if ((lVar22 == 0) && (uStack_88 != (longlong *)0x0)) {
            lVar22 = FUN_140007850();
            cVar10 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar22 == 0) || (cVar10 == '\0')) {
              FUN_14485c47a(&local_90,lVar22);
              if (lVar22 == 0) goto LAB_148af80fc;
            }
            else {
              uVar11 = *(uint *)(lVar22 + 0xc);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              if ((*(uint *)(lVar15 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(&local_90,lVar22);
              }
            }
            if ((*(uint *)(lVar22 + 8) >> 0x1e & 1) != 0) goto LAB_148af80fc;
LAB_148af80c8:
            lVar15 = FUN_144a797b2();
            if ((((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) ||
                (lVar15 = FUN_1459f1af0(), lVar15 == 0)) ||
               (*(int *)(lVar22 + 0x38) < *(int *)(lVar15 + 0x38))) goto LAB_148af80fc;
            if (*(longlong *)(*(longlong *)(lVar22 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                != lVar15 + 0x30) {
              lVar22 = 0;
            }
            local_158 = lVar22;
            if ((lVar22 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar22);
            }
          }
          else {
            if (lVar22 != 0) goto LAB_148af80c8;
LAB_148af80fc:
            local_158 = 0;
          }
          FUN_148af8404(local_170,local_168);
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          pwVar16 = pwVar16 + 0x14;
        } while (pwVar16 != pwVar21);
      }
      goto LAB_148af7c46;
    }
    local_108 = (longlong *)0x0;
    FUN_14485c47a(&local_108,local_168);
    lVar22 = FUN_14050fd64();
    uVar9 = uStack_60;
    pwVar16 = local_68;
    plVar18 = local_170;
    local_90 = (wchar_t *)local_170;
    uStack_88 = local_108;
    uStack_80 = (longlong *)0x0;
    local_78 = (void *)CONCAT44(local_78._4_4_,(int)uStack_60);
    if ((int)uStack_60 == 0) {
      local_78 = (void *)(uStack_60 & 0xffffffff);
    }
    else {
      FUN_148af5900(&uStack_80,uStack_60 & 0xffffffff,0);
      FUN_148af5973(uStack_80,pwVar16,uVar9 & 0xffffffff);
    }
    local_c8 = (longlong *)0x0;
    local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
    FUN_1446efa72(&local_c8,0,4,0x10);
    plVar8 = local_c8;
    local_c0 = (longlong *)CONCAT44(local_c0._4_4_,4);
    *local_c8 = (longlong)&PTR_LAB_149e020b0;
    lVar15 = FUN_144a3f946();
    plVar8[2] = lVar15;
    *plVar8 = (longlong)&PTR_FUN_14b5391a0;
    plVar8[3] = 0;
    FUN_14485c47a(plVar8 + 3,plVar18);
    *(undefined4 *)(plVar8 + 4) = (undefined4)local_90;
    *(undefined4 *)((longlong)plVar8 + 0x24) = local_90._4_4_;
    *(int *)(plVar8 + 5) = (int)uStack_88;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = uStack_88._4_4_;
    plVar8[6] = (longlong)uStack_80;
    uStack_80 = (longlong *)0x0;
    *(undefined4 *)(plVar8 + 7) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar8 + 0x3c) = local_78._4_4_;
    local_78 = (void *)0x0;
    local_180 = local_118;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    FUN_1403b007e(lVar22 + 0x1e8,&local_b8,&local_a8,&local_c8);
    puVar3 = local_b0;
    if (local_160 != &local_b8) {
      plVar18[0x6d] = (longlong)local_b8;
      local_b8 = (wchar_t **)0x0;
      puVar5 = (ulonglong *)plVar18[0x6e];
      if (local_b0 != puVar5) {
        local_b0 = (ulonglong *)0x0;
        plVar18[0x6e] = (longlong)puVar3;
        if (puVar5 != (ulonglong *)0x0) {
          LOCK();
          puVar3 = puVar5 + 1;
          *(int *)puVar3 = (int)*puVar3 + -1;
          UNLOCK();
          if ((int)*puVar3 == 0) {
            (**(code **)*puVar5)(puVar5);
            LOCK();
            piVar2 = (int *)((longlong)puVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar5 + 0x10))(puVar5);
            }
          }
        }
      }
    }
    puVar3 = local_b0;
    if (local_b0 != (ulonglong *)0x0) {
      LOCK();
      puVar5 = local_b0 + 1;
      *(int *)puVar5 = (int)*puVar5 + -1;
      UNLOCK();
      if ((int)*puVar5 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)puVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*puVar3 + 0x10))(puVar3);
        }
      }
    }
    FUN_1449db362(&local_c8);
    FUN_148af5870(uStack_80,(ulonglong)local_78 & 0xffffffff);
    if (uStack_80 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140861e20(local_a8,(ulonglong)uStack_a0 & 0xffffffff);
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148af5870(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_148af78e4:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148af83b4 FUN_148af83b4 body=80 status=ok
// SIG undefined FUN_148af83b4(void)

longlong * FUN_148af83b4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_148af5870(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 148af8404 FUN_148af8404 body=213 status=ok
// SIG undefined FUN_148af8404(void)

void FUN_148af8404(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = FUN_1459f1af0();
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && (lVar1 = *param_3, lVar1 != 0)))) {
      local_30 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      plVar3 = (longlong *)FUN_148af84ee(param_1 + 0x2d8,&local_30);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x4a0))(plVar3,param_2);
        FUN_1477581ae(*(undefined8 *)(param_1 + 0x3a0),plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af84ee FUN_148af84ee body=120 status=ok
// SIG undefined FUN_148af84ee(void)

void FUN_148af84ee(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_20 = FUN_148afdc1e;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148afd7ac(param_1,&local_30,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8568 FUN_148af8568 body=193 status=ok
// SIG undefined FUN_148af8568(void)

void FUN_148af8568(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x61] = param_2;
  local_40 = &LAB_148af8706;
  local_38 = 0;
  FUN_148af862a(param_2 + 0x40,local_30,param_1,&local_40);
  local_40 = &LAB_148af87f0;
  local_38 = 0;
  FUN_148af8714(param_1[0x61] + 0x28,local_30,param_1,&local_40);
  (**(code **)(*param_1 + 0x4b8))(param_1,param_1[0x61]);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af862a FUN_148af862a body=218 status=ok
// SIG undefined FUN_148af862a(void)

undefined8
FUN_148af862a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b538b00;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539210;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1410e6906(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8714 FUN_148af8714 body=218 status=ok
// SIG undefined FUN_148af8714(void)

undefined8
FUN_148af8714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b538b70;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539280;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1410e6738(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8804 FUN_148af8804 body=77 status=ok
// SIG undefined FUN_148af8804(void)

void FUN_148af8804(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x310);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x310) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x318) = (int)param_2[1];
  return;
}



// FUNCTION 148af8852 FUN_148af8852 body=90 status=ok
// SIG undefined FUN_148af8852(void)

void FUN_148af8852(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x2f8;
  FUN_14779af90(lVar1);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14779af90();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x10) + 0x40,lVar1);
    FUN_140457ffc(*(longlong *)(param_1 + 0x10) + 0x28,lVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 148af88ae FUN_148af88ae body=101 status=ok
// SIG undefined FUN_148af88ae(void)

void FUN_148af88ae(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410e2b8a(local_40,param_1[0x61] + 0x110);
  (**(code **)(*param_1 + 0x4c0))(param_1,local_40);
  FUN_1410e2b42(local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8916 FUN_148af8916 body=482 status=ok
// SIG undefined FUN_148af8916(void)

undefined1 *
FUN_148af8916(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0;
  undefined1 local_c8 [136];
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_1482380a4();
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(lVar6 + 0x38);
    plVar5 = *(longlong **)(lVar6 + 0x40);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x7b) == '\0')) {
      lVar6 = FUN_148af37c4(param_1);
      if (lVar6 != 0) {
        FUN_140760c2c(lVar6);
        if (local_100 != 0) {
          local_f0[0] = 1;
          local_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          memset(local_c8,0,0x88);
          local_40 = 0x20702;
          local_3c = 0;
          uVar3 = *param_4;
          local_110 = local_100;
          local_108 = local_f8;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
            UNLOCK();
          }
          uVar7 = FUN_140592b68(local_f0,&local_110,uVar3,0);
          FUN_1403d4c6e(param_2,uVar7);
          FUN_14493db24(local_f0);
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_f8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar2 = (int *)((longlong)local_f8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_f8 + 0x10))(local_f8);
              }
            }
          }
          goto LAB_148af89b9;
        }
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_f8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)local_f8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_f8 + 0x10))(local_f8);
            }
          }
        }
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148af89b9:
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8afa FUN_148af8afa body=197 status=ok
// SIG undefined FUN_148af8afa(void)

void FUN_148af8afa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148af8568();
  plVar1 = *(longlong **)(param_1 + 0x328);
  cVar3 = FUN_144a7c5f6((undefined8 *)(param_1 + 0x310));
  if (cVar3 == '\0') {
    local_38 = *(longlong **)(param_1 + 0x310);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    puVar4 = (undefined4 *)(param_1 + 0x318);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x308);
    local_38 = *(longlong **)(lVar2 + 0x78);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    puVar4 = (undefined4 *)(lVar2 + 0x80);
  }
  local_30 = *puVar4;
  (**(code **)(*plVar1 + 0x348))(plVar1);
  (**(code **)(**(longlong **)(param_1 + 0x328) + 0x2b0))
            (*(longlong **)(param_1 + 0x328),*(undefined1 *)(param_2 + 0x88));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8bc0 FUN_148af8bc0 body=108 status=ok
// SIG undefined FUN_148af8bc0(void)

void FUN_148af8bc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1410e4a74();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_148af8c0c;
    }
  }
  lVar1 = 0;
LAB_148af8c0c:
  *(longlong *)(param_1 + 0x330) = lVar1;
  FUN_148af8afa(param_1,param_2);
  FUN_148af8c2c(param_1);
  return;
}



// FUNCTION 148af8c2c FUN_148af8c2c body=289 status=ok
// SIG undefined FUN_148af8c2c(void)

void FUN_148af8c2c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_40);
    iVar4 = local_38;
    lVar3 = local_40;
    uVar2 = *(undefined8 *)(param_1 + 0x340);
    local_50 = 0;
    local_48 = local_38;
    if (local_38 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1406fd828(&local_50,local_38,0);
      FUN_1406fd7df(local_50,lVar3,iVar4);
    }
    FUN_148231726(uVar2,&local_50);
    plVar1 = *(longlong **)(param_1 + 0x340);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x330) + 800))();
    (**(code **)(*plVar1 + 0x598))(plVar1,uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x340);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x328))();
    FUN_148af3b5c(uVar2,uVar5);
    FUN_1401b9920(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8d4e FUN_148af8d4e body=98 status=ok
// SIG undefined FUN_148af8d4e(void)

void FUN_148af8d4e(longlong param_1,undefined1 *param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2) & 0xffffffffffffff02;
  uVar1 = CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
  (**(code **)(**(longlong **)(param_1 + 0x348) + 0x2a8))
            (*(longlong **)(param_1 + 0x348),uVar1 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x340) + 0x2a8))
            (*(longlong **)(param_1 + 0x340),uVar1 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x350) + 0x2a8))
            (*(longlong **)(param_1 + 0x350),uVar1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000148af8dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x338) + 0x2a8))
            (*(longlong **)(param_1 + 0x338),uVar1 & 0xffffffff);
  return;
}



// FUNCTION 148af8db0 FUN_148af8db0 body=200 status=ok
// SIG undefined FUN_148af8db0(void)

void FUN_148af8db0(longlong param_1)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141318288();
  local_40 = (code *)&LAB_148af8f56;
  local_38 = 0;
  FUN_148af8e7a(*(longlong *)(param_1 + 0x340) + 0x13e0,local_30,param_1,&local_40);
  local_40 = FUN_148af904c;
  local_38 = 0;
  FUN_148af8f70(*(longlong *)(param_1 + 0x348) + 0x12a0,local_30,param_1,&local_40);
  local_40 = FUN_148af9086;
  local_38 = 0;
  FUN_148af8f70(*(longlong *)(param_1 + 0x350) + 0x12a0,local_30,param_1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8e7a FUN_148af8e7a body=218 status=ok
// SIG undefined FUN_148af8e7a(void)

undefined8
FUN_148af8e7a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b438ba0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b5392f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ce3550(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af8f70 FUN_148af8f70 body=218 status=ok
// SIG undefined FUN_148af8f70(void)

undefined8
FUN_148af8f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539360;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af904c FUN_148af904c body=58 status=ok
// SIG undefined FUN_148af904c(void)

void FUN_148af904c(longlong param_1)

{
  FUN_148231876(*(undefined8 *)(param_1 + 0x340));
                    /* WARNING: Could not recover jumptable at 0x000148af9083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x330) + 0x318))
            (*(longlong **)(param_1 + 0x330),
             *(undefined4 *)(*(longlong *)(param_1 + 0x340) + 0x1410));
  return;
}



// FUNCTION 148af9086 FUN_148af9086 body=58 status=ok
// SIG undefined FUN_148af9086(void)

void FUN_148af9086(longlong param_1)

{
  FUN_148231896(*(undefined8 *)(param_1 + 0x340));
                    /* WARNING: Could not recover jumptable at 0x000148af90bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x330) + 0x318))
            (*(longlong **)(param_1 + 0x330),
             *(undefined4 *)(*(longlong *)(param_1 + 0x340) + 0x1410));
  return;
}



// FUNCTION 148af90c0 FUN_148af90c0 body=27 status=ok
// SIG undefined FUN_148af90c0(void)

void FUN_148af90c0(longlong param_1)

{
  FUN_148af8852();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 148af90e2 FUN_148af90e2 body=109 status=ok
// SIG undefined FUN_148af90e2(void)

void FUN_148af90e2(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410e2b8a(local_40,param_1[0x61] + 0x110);
  (**(code **)(*param_1 + 0x4c0))(param_1,local_40);
  FUN_1410e2b42(local_40);
  FUN_148af8c2c(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af9150 FUN_148af9150 body=108 status=ok
// SIG undefined FUN_148af9150(void)

void FUN_148af9150(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14598396a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_148af919c;
    }
  }
  lVar1 = 0;
LAB_148af919c:
  *(longlong *)(param_1 + 0x330) = lVar1;
  FUN_148af8afa(param_1,param_2);
  FUN_148af91bc(param_1);
  return;
}



// FUNCTION 148af91bc FUN_148af91bc body=308 status=ok
// SIG undefined FUN_148af91bc(void)

void FUN_148af91bc(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  double local_60;
  char local_58;
  undefined7 uStack_57;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    dVar3 = (double)FUN_1458816cc();
    FUN_14774ed82(*(undefined8 *)(param_1 + 0x340),(float)dVar3);
    plVar1 = *(longlong **)(param_1 + 0x330);
    uVar2 = *(undefined8 *)(param_1 + 0x340);
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_60);
    dVar4 = (double)(**(code **)(*plVar1 + 0x338))(plVar1);
    FUN_145931acc(uVar2,(float)(dVar4 / ABS(local_48 - (double)CONCAT71(uStack_57,local_58))));
    plVar1 = *(longlong **)(param_1 + 0x348);
    (**(code **)(**(longlong **)(param_1 + 0x330) + 0x340))
              (*(longlong **)(param_1 + 0x330),local_70);
    (**(code **)(*plVar1 + 0x348))(plVar1,local_70);
    FUN_148af92f2(*(undefined8 *)(param_1 + 0x330),&local_60);
    if (local_58 == '\0') {
      fVar5 = -1.0;
    }
    else {
      fVar5 = (float)local_60;
    }
    FUN_148af38e8(param_1,fVar5);
    FUN_148af3946(param_1,(float)dVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af92f2 FUN_148af92f2 body=226 status=ok
// SIG undefined FUN_148af92f2(void)

double * FUN_148af92f2(longlong *param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  double local_58;
  double local_48;
  double local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x318))(param_1,&local_40);
  if (local_38 == '\x01') {
    (**(code **)(*param_1 + 0x330))(param_1,local_60);
    if (ABS(local_48 - local_58) <= 1e-08) {
      dVar1 = (double)((ulonglong)((uint)(-(ulonglong)(local_48 <= local_40) >> 0x20) & 0x3ff00000)
                      << 0x20);
    }
    else {
      dVar1 = (local_40 - local_58) / (local_48 - local_58);
    }
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    *param_2 = dVar1;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af93dc FUN_148af93dc body=281 status=ok
// SIG undefined FUN_148af93dc(void)

void FUN_148af93dc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141318288();
  lVar1 = *(longlong *)(param_1 + 0x340);
  FUN_148af94f6(&local_48);
  local_40 = 0;
  FUN_14485c47a(&local_40,param_1);
  local_38 = local_48;
  FUN_14113f0c0(&local_40);
  FUN_14053c012(lVar1 + 0x640,&local_40);
  lVar1 = *(longlong *)(param_1 + 0x340);
  FUN_148af9680(&local_50);
  local_40 = 0;
  FUN_14485c47a(&local_40,param_1);
  local_38 = local_50;
  FUN_14113f0c0(&local_40);
  FUN_14053c012(lVar1 + 0x610,&local_40);
  lVar1 = *(longlong *)(param_1 + 0x340);
  FUN_148af9680(&local_58);
  local_40 = 0;
  FUN_14485c47a(&local_40,param_1);
  local_38 = local_58;
  FUN_14113f0c0(&local_40);
  FUN_14053c012(lVar1 + 0x630,&local_40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af94f6 FUN_148af94f6 body=196 status=ok
// SIG undefined FUN_148af94f6(void)

undefined8 * FUN_148af94f6(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9a4a0) {
    FUN_144b3d300(&DAT_14cb9a4a0);
    if (DAT_14cb9a4a0 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"eChanged",9);
      builtin_wcsncpy(local_48 + 8,L"iderValu",8);
      builtin_wcsncpy(local_48,L"HandleSl",8);
      FUN_1446f470e(&DAT_14cb9a498,local_48,1);
      _Init_thread_footer(&DAT_14cb9a4a0);
    }
  }
  *param_1 = DAT_14cb9a498;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af95bc FUN_148af95bc body=195 status=ok
// SIG undefined FUN_148af95bc(void)

void FUN_148af95bc(longlong param_1,float param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined1 *)(param_1 + 0x300);
  *(undefined1 *)(param_1 + 0x300) = 1;
  FUN_145800ebc(*(undefined8 *)(param_1 + 0x330),(double)param_2);
  dVar3 = (double)FUN_1458816cc(*(undefined8 *)(param_1 + 0x330));
  FUN_14774ed82(*(undefined8 *)(param_1 + 0x340),(float)dVar3);
  plVar2 = *(longlong **)(param_1 + 0x348);
  (**(code **)(**(longlong **)(param_1 + 0x330) + 0x340))(*(longlong **)(param_1 + 0x330),local_50);
  (**(code **)(*plVar2 + 0x348))(plVar2,local_50);
  FUN_148af3946(param_1,(float)dVar3);
  *(undefined1 *)(param_1 + 0x300) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af9680 FUN_148af9680 body=196 status=ok
// SIG undefined FUN_148af9680(void)

undefined8 * FUN_148af9680(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9a4b0) {
    FUN_144b3d300(&DAT_14cb9a4b0);
    if (DAT_14cb9a4b0 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"ureEnded",9);
      builtin_wcsncpy(local_48 + 8,L"iderCapt",8);
      builtin_wcsncpy(local_48,L"HandleSl",8);
      FUN_1446f470e(&DAT_14cb9a4a8,local_48,1);
      _Init_thread_footer(&DAT_14cb9a4b0);
    }
  }
  *param_1 = DAT_14cb9a4a8;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af9748 FUN_148af9748 body=27 status=ok
// SIG undefined FUN_148af9748(void)

void FUN_148af9748(longlong param_1)

{
  FUN_148af8852();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 148af9764 FUN_148af9764 body=62 status=ok
// SIG undefined FUN_148af9764(void)

void FUN_148af9764(longlong param_1,undefined1 *param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2) & 0xffffffffffffff02;
  uVar1 = CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
  (**(code **)(**(longlong **)(param_1 + 0x340) + 0x2a8))
            (*(longlong **)(param_1 + 0x340),uVar1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000148af979f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x338) + 0x2a8))
            (*(longlong **)(param_1 + 0x338),uVar1 & 0xffffffff);
  return;
}



// FUNCTION 148af97a2 FUN_148af97a2 body=199 status=ok
// SIG undefined FUN_148af97a2(void)

void FUN_148af97a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148af8afa();
  if (param_2 != 0) {
    lVar1 = FUN_1410e4c40();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0x330) = param_2;
      local_28 = *(longlong **)(param_2 + 0x150);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
      local_20 = *(undefined4 *)(param_2 + 0x158);
      FUN_148af39a8(param_1,&local_28);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x10))();
      }
      goto LAB_148af97f2;
    }
  }
  *(undefined8 *)(param_1 + 0x330) = 0;
LAB_148af97f2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af986a FUN_148af986a body=104 status=ok
// SIG undefined FUN_148af986a(void)

void FUN_148af986a(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141318288();
  local_28 = &LAB_148af99b0;
  local_20 = 0;
  FUN_148af98d4(*(longlong *)(param_1 + 0x338) + 0x12a0,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af98d4 FUN_148af98d4 body=218 status=ok
// SIG undefined FUN_148af98d4(void)

undefined8
FUN_148af98d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539450;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af99c2 FUN_148af99c2 body=27 status=ok
// SIG undefined FUN_148af99c2(void)

void FUN_148af99c2(longlong param_1)

{
  FUN_148af8852();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 148af99fa FUN_148af99fa body=212 status=ok
// SIG undefined FUN_148af99fa(void)

void FUN_148af99fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_14143f53e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_148af9a55;
    }
  }
  lVar1 = 0;
LAB_148af9a55:
  *(longlong *)(param_1 + 0x330) = lVar1;
  FUN_148af8afa(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x330);
  if (lVar1 != 0) {
    local_28 = *(longlong **)(lVar1 + 0x160);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(lVar1 + 0x168);
    FUN_148af3a58(param_1,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af9ad0 FUN_148af9ad0 body=104 status=ok
// SIG undefined FUN_148af9ad0(void)

void FUN_148af9ad0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141318288();
  local_28 = &LAB_148af9c16;
  local_20 = 0;
  FUN_148af9b3a(*(longlong *)(param_1 + 0x338) + 0x12a0,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af9b3a FUN_148af9b3a body=218 status=ok
// SIG undefined FUN_148af9b3a(void)

undefined8
FUN_148af9b3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b5394c0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148af9c22 FUN_148af9c22 body=27 status=ok
// SIG undefined FUN_148af9c22(void)

void FUN_148af9c22(longlong param_1)

{
  FUN_148af8852();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 148af9c5a FUN_148af9c5a body=529 status=ok
// SIG undefined FUN_148af9c5a(void)

longlong * FUN_148af9c5a(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_1410ec244();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_148af9ca7;
  }
  param_2 = 0;
LAB_148af9ca7:
  lVar2 = *param_3;
  if ((((lVar2 == 0) || (lVar3 = FUN_1405e2bf2(), lVar3 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_3;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
  }
  local_40 = lVar2;
  if (((*(longlong *)(param_1 + 0x8b0) != 0) &&
      (FUN_148af9e6c(*(longlong *)(param_1 + 0x8b0),&local_38,param_2), local_38 != 0)) &&
     ((lVar2 = FUN_14599896e(), lVar2 != 0 &&
      (((*(int *)(lVar2 + 0x38) <= *(int *)(local_38 + 0x38) &&
        (*(longlong *)(*(longlong *)(local_38 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (local_40 = local_38, DAT_14c950c29 == '\x01')))))) {
    FUN_1456cec3c(local_38);
  }
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  plVar4 = (longlong *)FUN_148afa17c(param_1 + -0x290,&local_40,param_4);
  if (*(int *)(param_1 + 0x8c0) != *(int *)(param_1 + 0x8ec)) {
    lVar2 = *(longlong *)(param_2 + 0x70);
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0x8f0;
    if (*(longlong *)(param_1 + 0x8f8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x8f8);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x900) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x8b8) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x8b8) + (longlong)iVar6 * 0x20) == lVar2) {
          if (lVar3 != -8 && lVar3 != 0) {
            (**(code **)(*plVar4 + 0x4a8))(plVar4);
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x18);
      } while (iVar6 != -1);
    }
  }
  (**(code **)(*plVar4 + 0x4a0))(plVar4,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 148af9e6c FUN_148af9e6c body=782 status=ok
// SIG undefined FUN_148af9e6c(void)

longlong * FUN_148af9e6c(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_40);
    lVar4 = local_40;
    if ((((local_40 != 0) && (lVar3 = FUN_14599896e(), lVar3 != 0)) &&
        (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (local_40 != 0 &&
        *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      *param_2 = local_40;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
      goto LAB_148afa041;
    }
    if ((int)param_1[0x11] != *(int *)((longlong)param_1 + 0xb4)) {
      lVar4 = *(longlong *)(param_3 + 0x70);
      uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar6 = (uint)lVar4 & 0xffff;
      plVar5 = param_1 + 0x17;
      if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x18];
      }
      iVar2 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_1[0x19] - 1U &
                      (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar2 != -1) {
        do {
          plVar5 = (longlong *)(param_1[0x10] + (longlong)iVar2 * 0x18);
          if (*plVar5 == lVar4) {
            if (plVar5 == (longlong *)0x0) break;
            lVar4 = plVar5[1];
            *param_2 = lVar4;
            if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
              FUN_1456cec3c(lVar4);
            }
            else if (lVar4 == 0) break;
            lVar3 = FUN_14599896e();
            if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_148afa041;
            break;
          }
          iVar2 = (int)plVar5[2];
        } while (iVar2 != -1);
      }
    }
    uVar7 = *(ulonglong *)(param_3 + 0x10);
    if (uVar7 != 0) {
      do {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar7);
        }
        lVar4 = FUN_1410ec244();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(uVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(uVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar7);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(uVar7);
          }
          local_38 = uVar7;
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(uVar7);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(uVar7);
          }
          uVar1 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
          uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
          iVar2 = FUN_148b006c2(param_1 + 6,uVar1 >> 0x10 ^ uVar1,&local_38);
          if ((iVar2 != -1) && (lVar4 = (longlong)iVar2 * 0x18 + param_1[6], lVar4 != 0)) {
            lVar4 = *(longlong *)(lVar4 + 8);
            if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
              FUN_1456cec3c(lVar4);
            }
            else if (lVar4 == 0) goto LAB_148af9f39;
            lVar3 = FUN_14599896e();
            if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) {
              *param_2 = lVar4;
              goto LAB_148afa041;
            }
          }
        }
LAB_148af9f39:
        uVar7 = *(ulonglong *)(uVar7 + 0x40);
      } while (uVar7 != 0);
    }
  }
  *param_2 = 0;
LAB_148afa041:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148afa17c FUN_148afa17c body=209 status=ok
// SIG undefined FUN_148afa17c(void)

undefined8 FUN_148afa17c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  code *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_40;
  local_30 = FUN_148aff2a6;
  lVar1 = *param_2;
  local_40 = param_1;
  local_38 = param_3;
  if (lVar1 != 0) {
    lVar2 = FUN_14599896e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_48 = *param_2;
      if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_148afa204;
    }
  }
  local_48 = 0;
LAB_148afa204:
  uVar3 = FUN_148afedce(param_1 + 0x38,&local_48,&local_30);
  (**(code **)(*param_1 + 800))(param_1,uVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afa24e FUN_148afa24e body=84 status=ok
// SIG undefined FUN_148afa24e(void)

ulonglong FUN_148afa24e(undefined8 param_1,longlong *param_2)

{
  longlong in_RAX;
  longlong lVar1;
  byte bVar2;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar2 = 1;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140febe0e();
    in_RAX = param_2[2];
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(in_RAX + 0x38)) &&
       (*(longlong *)(*(longlong *)(in_RAX + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      in_RAX = (**(code **)(*param_2 + 0x2f8))(param_2);
      bVar2 = 0;
      uVar3 = 0;
    }
  }
  return CONCAT71(uVar3,bVar2 | (byte)in_RAX) & 0xffffff01;
}



// FUNCTION 148afa2a2 FUN_148afa2a2 body=183 status=ok
// SIG undefined FUN_148afa2a2(void)

void FUN_148afa2a2(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141318288();
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x290) + 0x10))
                    (*(longlong *)(param_1 + 0x6f0) + 0x290);
  local_40 = FUN_148afa436;
  local_38 = 0;
  FUN_148afa35a(uVar1,local_30,param_1,&local_40);
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x290) + 0x18))
                    (*(longlong *)(param_1 + 0x6f0) + 0x290);
  local_40 = FUN_148afa59e;
  local_38 = 0;
  FUN_148afa4c2(uVar1,local_30,param_1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afa35a FUN_148afa35a body=218 status=ok
// SIG undefined FUN_148afa35a(void)

undefined8
FUN_148afa35a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a5437d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539530;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148aff4c8(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afa436 FUN_148afa436 body=139 status=ok
// SIG undefined FUN_148afa436(void)

void FUN_148afa436(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  if (param_3 == '\0') {
    param_2 = *(longlong *)(param_1 + 0x328);
  }
  else {
    if (param_2 != 0) {
      lVar1 = FUN_1410ec244();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(param_1 + 0x328) = param_2;
        goto LAB_148afa477;
      }
    }
    param_2 = 0;
  }
LAB_148afa477:
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_148af7170(*(longlong *)(param_1 + 0x6f8),param_2);
  }
  FUN_1410e5c2a(param_1 + 0x2f8,param_2);
  return;
}



// FUNCTION 148afa4c2 FUN_148afa4c2 body=218 status=ok
// SIG undefined FUN_148afa4c2(void)

undefined8
FUN_148afa4c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a541440;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b5395a0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148aff866(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afa59e FUN_148afa59e body=157 status=ok
// SIG undefined FUN_148afa59e(void)

void FUN_148afa59e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1410ec244();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0x328) = param_2;
    }
    lVar1 = FUN_1410ec244();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148afa5f1;
  }
  param_2 = 0;
LAB_148afa5f1:
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_148af7170(*(longlong *)(param_1 + 0x6f8),param_2);
  }
  FUN_1410e5c2a(param_1 + 0x2f8,param_2);
  return;
}



// FUNCTION 148afa63c FUN_148afa63c body=34 status=ok
// SIG undefined FUN_148afa63c(void)

void FUN_148afa63c(undefined8 param_1)

{
  FUN_140ec5ab0();
  FUN_148afa65e(param_1);
  FUN_148afa6b0(param_1);
  return;
}



// FUNCTION 148afa65e FUN_148afa65e body=82 status=ok
// SIG undefined FUN_148afa65e(void)

void FUN_148afa65e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x310) + 0x40,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 0x310) + 0x58,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 0x310) + 0x70,param_1);
    return;
  }
  return;
}



// FUNCTION 148afa6b0 FUN_148afa6b0 body=199 status=ok
// SIG undefined FUN_148afa6b0(void)

void FUN_148afa6b0(longlong param_1)

{
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    local_38 = (code *)&LAB_148afac54;
    local_30 = 0;
    FUN_148afab78(*(longlong *)(param_1 + 0x310) + 0x40,local_28,param_1,&local_38);
    local_38 = (code *)&LAB_148afad7e;
    local_30 = 0;
    FUN_148afaca2(*(longlong *)(param_1 + 0x310) + 0x58,local_28,param_1,&local_38);
    local_38 = FUN_148afad8a;
    local_30 = 0;
    FUN_148afab78(*(longlong *)(param_1 + 0x310) + 0x70,local_28,param_1,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afa778 FUN_148afa778 body=26 status=ok
// SIG undefined FUN_148afa778(void)

void FUN_148afa778(undefined8 param_1)

{
  FUN_14821d3a6();
  FUN_148afa65e(param_1);
  return;
}



// FUNCTION 148afa792 FUN_148afa792 body=453 status=ok
// SIG undefined FUN_148afa792(void)

undefined1 * FUN_148afa792(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_1482380a4();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x38);
    plVar3 = *(longlong **)(lVar5 + 0x40);
    if (plVar3 != (longlong *)0x0) {
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
  }
  lVar5 = FUN_148226620(param_1);
  if (lVar5 != 0 && lVar6 != 0) {
    cVar4 = FUN_143ae4f7c(lVar5);
    if ((cVar4 == '\x01') || (*(char *)(lVar6 + 0x7b) == '\0')) {
      FUN_140760c2c(*(undefined8 *)(param_1 + 0x6f0));
      if (local_38 != 0) {
        lVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x290) + 0x58))
                          (*(longlong *)(param_1 + 0x6f0) + 0x290);
        if (lVar5 != 0) {
          FUN_147706508(lVar5);
        }
        FUN_14773b2e4(*(undefined8 *)(param_1 + 0x6f0));
        FUN_14773ba48(*(undefined8 *)(param_1 + 0x6f0));
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
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
        goto LAB_148afa88b;
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
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_148afa88b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afa958 FUN_148afa958 body=196 status=ok
// SIG undefined FUN_148afa958(void)

void FUN_148afa958(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x310) != param_2) {
    FUN_148afa65e();
    if (((*(longlong *)(param_1 + 0x710) != 0) && (*(longlong *)(param_1 + 0x718) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x718) + 8))) {
      FUN_1401cb356();
      local_28 = *(undefined8 *)(param_1 + 0x710);
      local_20 = *(longlong *)(param_1 + 0x718);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_28);
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x310) = param_2;
    FUN_148afa6b0(param_1);
    FUN_148afaa1e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afaa1e FUN_148afaa1e body=344 status=ok
// SIG undefined FUN_148afaa1e(void)

void FUN_148afaa1e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x710) == 0) || (*(longlong *)(param_1 + 0x718) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x718) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar3 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    uVar5 = FUN_144a3f946();
    puVar3[2] = uVar5;
    *puVar3 = &PTR_FUN_14b5396f0;
    puVar3[3] = 0;
    FUN_14485c47a(puVar3 + 3,param_1);
    puVar3[4] = param_1;
    local_68 = 0;
    FUN_1405f67fc(uVar4,&local_48,&local_58,L"UGameSettingPanel_RefreshSettingsList");
    if ((undefined8 *)(param_1 + 0x710) != &local_48) {
      *(undefined8 *)(param_1 + 0x710) = local_48;
      local_48 = 0;
      plVar2 = *(longlong **)(param_1 + 0x718);
      *(longlong **)(param_1 + 0x718) = local_40;
      local_40 = (longlong *)0x0;
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
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    FUN_1449db362(&local_58);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afab78 FUN_148afab78 body=218 status=ok
// SIG undefined FUN_148afab78(void)

undefined8
FUN_148afab78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b538b00;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539610;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1410e6906(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afaca2 FUN_148afaca2 body=218 status=ok
// SIG undefined FUN_148afaca2(void)

undefined8
FUN_148afaca2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b538930;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539680;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ad658e(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afad8a FUN_148afad8a body=234 status=ok
// SIG undefined FUN_148afad8a(void)

void FUN_148afad8a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8 [928];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((longlong)*(int *)(param_1 + 800) != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x318) + lVar2) == param_2) {
        iVar1 = *(int *)(param_1 + 0x6d8);
        *(uint *)(param_1 + 0x6d8) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x6dc) < iVar1 + 1U) {
          FUN_148b00228(param_1 + 0x6d0,iVar1);
        }
        FUN_148afb164((longlong)iVar1 * 0x3a0 + *(longlong *)(param_1 + 0x6d0),param_1 + 0x330);
        FUN_145cbbcf0(local_3c8);
        FUN_148af4774(local_3c8,param_2);
        FUN_148afae76(param_1,local_3c8,0);
        FUN_145c9ead0(local_3c8);
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 800) * 8 != lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afae76 FUN_148afae76 body=159 status=ok
// SIG undefined FUN_148afae76(void)

void FUN_148afae76(longlong param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x330) = *param_2;
  FUN_14681ab1c(param_1 + 0x338,param_2 + 2);
  FUN_148af56d4(param_1 + 0x6b0,param_2 + 0xe0);
  FUN_148af56d4(param_1 + 0x6c0,param_2 + 0xe4);
  if (param_3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x6dc);
    FUN_145c9eaa4(*(undefined8 *)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0x6d8));
    *(undefined4 *)(param_1 + 0x6d8) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x6dc) != 0)) {
      FUN_148b0014c(param_1 + 0x6d0);
    }
  }
  FUN_148afaa1e(param_1);
  return;
}



// FUNCTION 148afaf16 FUN_148afaf16 body=11 status=ok
// SIG undefined FUN_148afaf16(void)

bool FUN_148afaf16(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x6d8);
}



// FUNCTION 148afaf22 FUN_148afaf22 body=127 status=ok
// SIG undefined FUN_148afaf22(void)

void FUN_148afaf22(longlong param_1)

{
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8 [928];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (0 < *(int *)(param_1 + 0x6d8)) {
    FUN_148afafa2(param_1 + 0x6d0,local_3b8);
    FUN_148afb0a6(param_1 + 0x330,local_3b8);
    FUN_145c9ead0(local_3b8);
    FUN_148afaa1e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afafa2 FUN_148afafa2 body=259 status=ok
// SIG undefined FUN_148afafa2(void)

undefined4 * FUN_148afafa2(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  void *_Dst;
  int iVar3;
  
  lVar1 = *param_1 + (longlong)(int)param_1[1] * 0x3a0;
  *param_2 = *(undefined4 *)(lVar1 + -0x3a0);
  FUN_14681aa58(param_2 + 2,lVar1 + -0x398);
  *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(lVar1 + -0x20);
  *(undefined8 *)(lVar1 + -0x20) = 0;
  param_2[0xe2] = *(undefined4 *)(lVar1 + -0x18);
  param_2[0xe3] = *(undefined4 *)(lVar1 + -0x14);
  *(undefined8 *)(lVar1 + -0x18) = 0;
  *(undefined8 *)(param_2 + 0xe4) = *(undefined8 *)(lVar1 + -0x10);
  *(undefined8 *)(lVar1 + -0x10) = 0;
  param_2[0xe6] = *(undefined4 *)(lVar1 + -8);
  param_2[0xe7] = *(undefined4 *)(lVar1 + -4);
  *(undefined8 *)(lVar1 + -8) = 0;
  iVar3 = (int)param_1[1];
  _Src = (void *)((longlong)iVar3 * 0x3a0 + *param_1);
  _Dst = (void *)((longlong)_Src + -0x3a0);
  FUN_145c9ead0(_Dst);
  iVar2 = (int)param_1[1] - iVar3;
  if (iVar2 != 0) {
    memmove(_Dst,_Src,(longlong)iVar2 * 0x3a0);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_148b0017c(param_1);
  return param_2;
}



// FUNCTION 148afb0a6 FUN_148afb0a6 body=190 status=ok
// SIG undefined FUN_148afb0a6(void)

undefined4 * FUN_148afb0a6(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_14681ab1c(param_1 + 2,param_2 + 2);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_2 + 0xe0) = 0;
    param_1[0xe2] = param_2[0xe2];
    param_1[0xe3] = param_2[0xe3];
    *(undefined8 *)(param_2 + 0xe2) = 0;
    if (*(longlong *)(param_1 + 0xe4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(param_2 + 0xe4) = 0;
    param_1[0xe6] = param_2[0xe6];
    param_1[0xe7] = param_2[0xe7];
    *(undefined8 *)(param_2 + 0xe6) = 0;
  }
  return param_1;
}



// FUNCTION 148afb164 FUN_148afb164 body=209 status=ok
// SIG undefined FUN_148afb164(void)

undefined4 * FUN_148afb164(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_14681aa58(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar1 = param_2[0xe2];
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[0xe2] = iVar1;
  if (iVar1 == 0) {
    param_1[0xe3] = 0;
  }
  else {
    FUN_14101deec(param_1 + 0xe0,iVar1,0);
    FUN_14101de9c(*(undefined8 *)(param_1 + 0xe0),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xe4) = 0;
  iVar1 = param_2[0xe6];
  uVar2 = *(undefined8 *)(param_2 + 0xe4);
  param_1[0xe6] = iVar1;
  if (iVar1 == 0) {
    param_1[0xe7] = 0;
  }
  else {
    FUN_14101deec(param_1 + 0xe4,iVar1,0);
    FUN_14101de9c(*(undefined8 *)(param_1 + 0xe4),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148afb23c FUN_148afb23c body=51 status=ok
// SIG undefined FUN_148afb23c(void)

void FUN_148afb23c(longlong param_1)

{
  FUN_143ae7220();
  FUN_145ffc804(param_1 + 0x430,*(undefined8 *)(param_1 + 0x498));
  FUN_148af3e9a(param_1,*(undefined1 *)(param_1 + 0x430));
  return;
}



// FUNCTION 148afb276 FUN_148afb276 body=168 status=ok
// SIG undefined FUN_148afb276(void)

longlong FUN_148afb276(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x93];
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x4f0))();
    local_30 = &LAB_148afb3fc;
    local_28 = 0;
    FUN_148afb320(lVar1 + 0x28,local_20,param_1);
    FUN_148afa958(param_1[0x92],lVar1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[0x93] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afb320 FUN_148afb320 body=218 status=ok
// SIG undefined FUN_148afb320(void)

undefined8
FUN_148afb320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b538b70;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539760;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1410e6738(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afb404 FUN_148afb404 body=31 status=ok
// SIG undefined FUN_148afb404(void)

longlong FUN_148afb404(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14821ceac();
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x490);
  }
  return lVar1;
}



// FUNCTION 148afb424 FUN_148afb424 body=97 status=ok
// SIG undefined FUN_148afb424(void)

void FUN_148afb424(longlong param_1)

{
  if (*(char *)(param_1 + 0x430) != '\x01') {
    return;
  }
  FUN_145d299fe(param_1 + 0x430);
  if (*(char *)(param_1 + 0x431) == '\0') {
    *(undefined1 *)(param_1 + 0x430) = 0;
    FUN_145abd854(param_1 + 0x440);
  }
  FUN_148af3e9a(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000148afb469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x498) + 0x2b0))();
  return;
}



// FUNCTION 148afb486 FUN_148afb486 body=65 status=ok
// SIG undefined FUN_148afb486(void)

void FUN_148afb486(longlong param_1)

{
  FUN_148af6e34(param_1 + 0x430);
  if (*(char *)(param_1 + 0x431) == '\0') {
    *(undefined1 *)(param_1 + 0x430) = 0;
    FUN_145abd854(param_1 + 0x440);
  }
  FUN_148af3e9a(param_1,0);
  return;
}



// FUNCTION 148afb4c8 FUN_148afb4c8 body=40 status=ok
// SIG undefined FUN_148afb4c8(void)

bool FUN_148afb4c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x490) + 0x6d8);
  if (0 < iVar1) {
    FUN_148afaf22();
  }
  return 0 < iVar1;
}



// FUNCTION 148afb4f0 FUN_148afb4f0 body=182 status=ok
// SIG undefined FUN_148afb4f0(void)

longlong * FUN_148afb4f0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_408 [32];
  longlong local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d0;
  undefined1 local_3c8 [928];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_408;
  *param_3 = 0;
  local_3d0 = param_2;
  uVar1 = FUN_148afb276();
  plVar2 = (longlong *)FUN_148afb5a8(uVar1,&local_3d0);
  if (plVar2 != (longlong *)0x0) {
    local_3e8 = 0;
    uStack_3e0 = 0;
    FUN_145cbbcf0(local_3c8);
    (**(code **)(*plVar2 + 0x2f0))(plVar2,local_3c8,&local_3e8);
    *param_3 = 0 < (int)uStack_3e0;
    FUN_145c9ead0(local_3c8);
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afb5a8 FUN_148afb5a8 body=61 status=ok
// SIG undefined FUN_148afb5a8(void)

longlong FUN_148afb5a8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1410e70dc();
  if (lVar1 != 0) {
    lVar2 = FUN_140febe0e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148afb5e6 FUN_148afb5e6 body=123 status=ok
// SIG undefined FUN_148afb5e6(void)

void FUN_148afb5e6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 1;
  FUN_1401b309e(&local_30,1,0);
  *local_30 = param_2;
  FUN_148afb662(param_1,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afb662 FUN_148afb662 body=205 status=ok
// SIG undefined FUN_148afb662(void)

void FUN_148afb662(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_408 [40];
  undefined8 local_3e0;
  undefined1 local_3d8 [928];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_408;
  FUN_145cbbcf0(local_3d8);
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      local_3e0 = *(undefined8 *)(lVar1 + lVar5);
      uVar3 = FUN_148afb276(param_1);
      lVar4 = FUN_1410e70dc(uVar3,&local_3e0);
      if (lVar4 != 0) {
        FUN_148af4774(local_3d8,lVar4);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  FUN_148afae76(*(undefined8 *)(param_1 + 0x490),local_3d8,1);
  FUN_145c9ead0(local_3d8);
  if ((local_38 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afb730 FUN_148afb730 body=511 status=ok
// SIG undefined FUN_148afb730(void)

undefined8 * FUN_148afb730(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar4 = *(longlong *)(param_3 + 0x70);
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    lVar5 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x160);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x168) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 0x28);
        if (*plVar1 == lVar4) {
          if ((((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) != 0) &&
             (FUN_148afb930(param_2,plVar1 + 2), (char)plVar1[1] != '\x01')) goto LAB_148afb90c;
          break;
        }
        iVar3 = (int)plVar1[4];
      } while (iVar3 != -1);
    }
  }
  uVar7 = *(ulonglong *)(param_3 + 0x10);
  if (uVar7 != 0) {
    do {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar7);
      }
      lVar4 = FUN_1410ec244();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(uVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(uVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar7);
        }
        local_30 = uVar7;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar7);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar7);
        }
        uVar2 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        iVar3 = FUN_148b00866((longlong *)(param_1 + 0xd0),uVar2 >> 0x10 ^ uVar2,&local_30);
        if ((iVar3 != -1) &&
           (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0xd0),
           lVar4 != -8 && lVar4 != 0)) {
          FUN_148afb930(param_2);
        }
      }
      uVar7 = *(ulonglong *)(uVar7 + 0x40);
    } while (uVar7 != 0);
  }
LAB_148afb90c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148afb930 FUN_148afb930 body=95 status=ok
// SIG undefined FUN_148afb930(void)

void FUN_148afb930(longlong *param_1,undefined8 *param_2)

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
    FUN_148b007d2(param_1,iVar2);
  }
  FUN_148af5973((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148afb99c FUN_148afb99c body=469 status=ok
// SIG undefined FUN_148afb99c(void)

void FUN_148afb99c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_143ae7220();
  *(undefined1 *)(param_1 + 0x460) = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b5397d0;
  plVar4[2] = (longlong)&PTR_FUN_14b5397f0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined4 *)(plVar4 + 5) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x3c) = 0;
  plVar4[8] = 2;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x468) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x470);
    if (plVar5 == (longlong *)0x0) goto LAB_148afbac5;
    *(undefined8 *)(param_1 + 0x470) = 0;
LAB_148afba42:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148afbac5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x468) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x470);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x470) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148afba42;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148afbac5:
  local_38 = FUN_148afbc4e;
  local_30 = 0;
  FUN_148afbb72(*(longlong *)(param_1 + 0x468) + 0x20,local_28,param_1,&local_38);
  local_38 = FUN_148afbe16;
  local_30 = 0;
  FUN_148afbd3a(*(longlong *)(param_1 + 0x468) + 8,local_28,param_1,&local_38);
  uVar3 = DAT_14c98e618;
  local_48 = *(undefined8 *)(param_1 + 0x468);
  local_40 = *(longlong *)(param_1 + 0x470);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1469aaa90(uVar3,&local_48,0);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148afbb72 FUN_148afbb72 body=218 status=ok
// SIG undefined FUN_148afbb72(void)

undefined8
FUN_148afbb72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b539a40;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b539850;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148b00f44(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afbc4e FUN_148afbc4e body=234 status=ok
// SIG undefined FUN_148afbc4e(void)

void FUN_148afbc4e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x460) == '\0') {
    *(undefined1 *)(param_1 + 0x460) = 1;
    uVar4 = *param_2;
    uVar5 = param_2[1];
    lVar6 = param_2[2];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    local_78[0] = (code *)0x0;
    local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_68 = &PTR_FUN_14b539930;
    local_68[1] = param_1;
    local_68[2] = uVar4;
    local_68[3] = uVar5;
    local_68[4] = lVar6;
    if (local_68 + 1 != (longlong *)0x0) {
      local_78[0] = FUN_143fa056c;
    }
    FUN_148afbef4(param_1,local_78);
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afbd3a FUN_148afbd3a body=218 status=ok
// SIG undefined FUN_148afbd3a(void)

undefined8
FUN_148afbd3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b5398c0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afbe16 FUN_148afbe16 body=107 status=ok
// SIG undefined FUN_148afbe16(void)

void FUN_148afbe16(longlong param_1)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x460) == '\0') {
    *(undefined1 *)(param_1 + 0x460) = 1;
    local_38 = 0;
    local_28 = &PTR_LAB_14b539950;
    local_48 = FUN_143fa06ae;
    local_20 = param_1;
    FUN_148afbef4();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afbe82 FUN_148afbe82 body=113 status=ok
// SIG undefined FUN_148afbe82(void)

void FUN_148afbe82(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143ae7316();
  lVar1 = DAT_14c98e618;
  if (DAT_14c98e618 != 0) {
    local_20 = *(undefined8 *)(param_1 + 0x468);
    local_18 = *(longlong *)(param_1 + 0x470);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_145a3846a(lVar1,&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afbef4 FUN_148afbef4 body=437 status=ok
// SIG undefined FUN_148afbef4(void)

void FUN_148afbef4(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_1401cb356();
  local_78 = *param_2;
  local_68[0] = (longlong *)0x0;
  local_88 = param_1;
  if (local_78 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)*plVar5)(plVar5,local_68);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,7,0x10);
  puVar2 = local_a8;
  local_a0 = 7;
  *local_a8 = &PTR_LAB_149e02020;
  uVar4 = FUN_144a3f946();
  puVar2[2] = uVar4;
  *puVar2 = &PTR_FUN_14b539970;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = local_88;
  puVar2[6] = local_78;
  puVar2[8] = local_68[0];
  local_68[0] = (longlong *)0x0;
  *(undefined4 *)(puVar2 + 0xc) = local_48;
  *(undefined4 *)((longlong)puVar2 + 100) = uStack_44;
  *(undefined4 *)(puVar2 + 0xd) = uStack_40;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = uStack_3c;
  *(undefined4 *)(puVar2 + 10) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x54) = uStack_54;
  *(undefined4 *)(puVar2 + 0xb) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = uStack_4c;
  if (local_78 != 0) {
    local_78 = 0;
  }
  local_b8 = 0;
  FUN_1405f67fc(uVar3,local_98,&local_a8,L"UGameSettingPressAnyKey_Dismiss");
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  FUN_1449db362(&local_a8);
  if (local_78 != 0) {
    plVar5 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar5 = (longlong *)&local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc0b0 FUN_148afc0b0 body=102 status=ok
// SIG undefined FUN_148afc0b0(void)

void FUN_148afc0b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 400);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_148afc118(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc118 FUN_148afc118 body=259 status=ok
// SIG undefined FUN_148afc118(void)

void FUN_148afc118(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_148afc728(*param_2);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_48 = DAT_14c98dec8;
    plStack_40 = (longlong *)DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(*(longlong *)(param_1 + 0x30),&local_48);
  }
  FUN_14149270a(lVar4);
  local_38 = *(undefined8 *)(lVar4 + 0x10);
  plStack_30 = *(longlong **)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x10) = local_48;
  *(longlong **)(lVar4 + 0x18) = plStack_40;
  local_48 = local_38;
  plStack_40 = plStack_30;
  FUN_140a5503c(lVar4);
  plVar3 = plStack_40;
  *(longlong *)(param_1 + 0x38) = lVar4;
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
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc21c FUN_148afc21c body=223 status=ok
// SIG undefined FUN_148afc21c(void)

void FUN_148afc21c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x188);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_148afc2fc(uVar4,&local_38);
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc2fc FUN_148afc2fc body=139 status=ok
// SIG undefined FUN_148afc2fc(void)

void FUN_148afc2fc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x280);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x278);
    uVar3 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(lVar1 + uVar3 * 8) + 0x10)) {
        if (uVar2 - 1 != (int)uVar3) {
          memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + uVar3 * 8 + 8),
                  (longlong)(int)((uVar2 - 1) - (int)uVar3) << 3);
          uVar2 = *(uint *)(param_1 + 0x280);
        }
        *(uint *)(param_1 + 0x280) = uVar2 - 1;
        FUN_148b01936((longlong *)(param_1 + 0x278));
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  FUN_146a8ea08(*(undefined8 *)(param_1 + 0x268),param_2);
  return;
}



// FUNCTION 148afc388 FUN_148afc388 body=61 status=ok
// SIG undefined FUN_148afc388(void)

longlong FUN_148afc388(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14772c428();
  if (lVar1 != 0) {
    lVar2 = FUN_1459f19fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148afc3c6 FUN_148afc3c6 body=640 status=ok
// SIG undefined FUN_148afc3c6(void)

undefined8 * FUN_148afc3c6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_258 [40];
  undefined8 local_230;
  longlong local_228;
  undefined1 local_219;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  longlong *local_1f8;
  undefined1 local_1f0 [424];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_148afc648(local_1f0);
  FUN_148b01628(local_218,&local_219);
  FUN_148afc6ba(local_218,&local_200,local_1f0);
  plVar6 = local_1f8;
  if (local_1f8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_200;
    plVar8 = *(longlong **)(param_1 + 400);
    if (plVar8 == (longlong *)0x0) goto LAB_148afc4c1;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_148afc489:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148afc4c1;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  else {
    LOCK();
    *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_200;
    plVar8 = *(longlong **)(param_1 + 400);
    if (local_1f8 != plVar8) {
      *(longlong **)(param_1 + 400) = local_1f8;
      if (plVar8 == (longlong *)0x0) goto LAB_148afc4c1;
      goto LAB_148afc489;
    }
    LOCK();
    plVar8 = local_1f8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_148afc4c1;
    (**(code **)*local_1f8)(local_1f8);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_148afc4c1:
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1f8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar1 = (int *)((longlong)local_1f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f8 + 0x10))(local_1f8);
      }
    }
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_210 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  FUN_140a4ff8c(local_1f0);
  *(byte *)(*(longlong *)(param_1 + 0x188) + 0x29c) =
       *(byte *)(*(longlong *)(param_1 + 0x188) + 0x29c) & 0xfe | *(byte *)(param_1 + 0x180);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        lVar7 = FUN_1459f19fe();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_230 = *(undefined8 *)(param_1 + 0x188);
          local_228 = *(longlong *)(param_1 + 400);
          if (local_228 != 0) {
            LOCK();
            *(int *)(local_228 + 8) = *(int *)(local_228 + 8) + 1;
            UNLOCK();
          }
          FUN_148afc118(lVar4,&local_230);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x188);
  plVar6 = *(longlong **)(param_1 + 400);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc648 FUN_148afc648 body=113 status=ok
// SIG undefined FUN_148afc648(void)

longlong FUN_148afc648(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc6ba FUN_148afc6ba body=109 status=ok
// SIG undefined FUN_148afc6ba(void)

longlong * FUN_148afc6ba(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148afc90e(*param_1);
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



// FUNCTION 148afc728 FUN_148afc728 body=195 status=ok
// SIG undefined FUN_148afc728(void)

undefined8 FUN_148afc728(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_108 [29];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar2 = *(longlong **)(param_1 + 0x268);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x180))(plVar2);
  uVar3 = (**(code **)*puVar4)(puVar4);
  local_118 = 0;
  FUN_146a8e698(plVar2,local_108,uVar3,0);
  FUN_147734fc6(local_108);
  iVar1 = *(int *)(param_1 + 0x280);
  *(uint *)(param_1 + 0x280) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x284) < iVar1 + 1U) {
    FUN_148b018b0(param_1 + 0x278,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar1 * 8) = local_108[0];
  FUN_148afc99e(param_1);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return local_108[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc7ee FUN_148afc7ee body=287 status=ok
// SIG undefined FUN_148afc7ee(void)

undefined8 * FUN_148afc7ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_219;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [472];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b538e20;
  FUN_146b05cee(local_200);
  local_228 = &local_219;
  FUN_146b075e0(local_218,"SGridPanel",
                ".\\../Plugins/GameSettings/Source/Private/Widgets/Responsive/SGameResponsivePanel.cpp"
                ,0x13);
  FUN_146b05e52(local_218,param_1 + 0x4d,local_200);
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_210 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)local_210 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  FUN_146b065da(local_200);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x80;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 1;
  *(byte *)((longlong)param_1 + 0x29c) = *(byte *)((longlong)param_1 + 0x29c) | 1;
  if ((local_28 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afc90e FUN_148afc90e body=142 status=ok
// SIG undefined FUN_148afc90e(void)

void FUN_148afc90e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x268);
  local_18 = *(longlong **)(param_1 + 0x270);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_20);
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



// FUNCTION 148afc99e FUN_148afc99e body=358 status=ok
// SIG undefined FUN_148afc99e(void)

void FUN_148afc99e(longlong param_1)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = *(double *)(param_1 + 0x288);
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    if ((*(double *)(param_1 + 0x290) == 0.0) && (!NAN(*(double *)(param_1 + 0x290)))) {
      bVar5 = 0;
      goto LAB_148afca03;
    }
  }
  bVar5 = dVar1 < 7.0 & *(byte *)(param_1 + 0x29c);
LAB_148afca03:
  FUN_146a8fdd4(*(undefined8 *)(param_1 + 0x268));
  if (0 < *(int *)(param_1 + 0x280)) {
    uVar4 = 0;
    do {
      uVar2 = uVar4 & 0xffffffff;
      if (bVar5 != 0) {
        uVar2 = 0;
      }
      uVar3 = 0;
      if (bVar5 != 0) {
        uVar3 = uVar4 & 0xffffffff;
      }
      FUN_1477351d6(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + uVar4 * 8),uVar2);
      FUN_1477350b6(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + uVar4 * 8),uVar3);
      if (bVar5 == 0) {
        local_68 = 0x3f800000;
        local_64 = 1;
        local_60 = 0;
        uStack_58 = 0;
        FUN_146a8fc4c(*(undefined8 *)(param_1 + 0x268),uVar4 & 0xffffffff,&local_68);
        FUN_1449db362(&local_60);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x280));
  }
  if (bVar5 != 0) {
    local_68 = 0x3f800000;
    local_64 = 1;
    local_60 = 0;
    uStack_58 = 0;
    FUN_146a8fc4c(*(undefined8 *)(param_1 + 0x268),0,&local_68);
    FUN_1449db362(&local_60);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afcb06 FUN_148afcb06 body=16 status=ok
// SIG undefined FUN_148afcb06(void)

undefined1 FUN_148afcb06(void)

{
  FUN_148afcb16();
  return 1;
}



// FUNCTION 148afcb16 FUN_148afcb16 body=515 status=ok
// SIG undefined FUN_148afcb16(void)

void FUN_148afcb16(longlong param_1)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  FUN_1469aa384(DAT_14c98e618,&local_38);
  if ((local_38 != 0) && (plVar3 = *(longlong **)(local_38 + 0x270), plVar3 != (longlong *)0x0)) {
    plVar4 = *(longlong **)(local_38 + 0x268);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    iVar6 = (int)plVar3[1];
    do {
      plVar7 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar7 = plVar3;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (plVar4 == (longlong *)0x0 || plVar7 == (longlong *)0x0) {
      if (plVar7 == (longlong *)0x0) goto LAB_148afcc40;
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
      local_44 = 0;
      FUN_145938f92(&local_44);
      if (local_44 != 0) {
        *(double *)(param_1 + 0x288) =
             (double)(int)((longlong)
                           ((ulonglong)(uint)((int)local_40 >> 0x1f) << 0x20 | local_40 & 0xffffffff
                           ) / (longlong)(int)(float)local_44);
        *(double *)(param_1 + 0x290) =
             (double)(int)((longlong)
                           ((ulonglong)(uint)((longlong)local_40 >> 0x3f) << 0x20 | local_40 >> 0x20
                           ) / (longlong)(int)(float)local_44);
      }
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_148afcc40:
  dVar2 = *(double *)(param_1 + 0x288);
  if (((((dVar2 == 0.0) && (!NAN(dVar2))) && (*(double *)(param_1 + 0x290) == 0.0)) &&
      (!NAN(*(double *)(param_1 + 0x290)))) || ((*(byte *)(param_1 + 0x29c) & 1) == 0)) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = *(float *)(&DAT_14b538c10 + (ulonglong)(dVar2 < 7.0) * 4);
  }
  if (1e-08 < ABS(fVar9 - *(float *)(param_1 + 0x298))) {
    *(float *)(param_1 + 0x298) = fVar9;
    FUN_148afc99e(param_1);
    FUN_140163244(param_1,0x80);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148afcd1a FUN_148afcd1a body=1267 status=ok
// SIG undefined FUN_148afcd1a(void)

void FUN_148afcd1a(longlong param_1,float *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  float *local_170;
  float *local_168;
  undefined8 local_158;
  float local_14c;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  undefined4 local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  char local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_14c = *(float *)(param_1 + 0x298);
  fStack_134 = param_2[1] * (1.0 / local_14c);
  local_138 = (1.0 / local_14c) * *param_2;
  fStack_124 = local_14c * 0.0;
  local_148 = CONCAT44(fStack_124,fStack_124);
  local_158 = CONCAT44(fStack_134,local_138);
  local_100 = *(longlong *)(param_1 + 0x208);
  local_a0 = *(char *)(local_100 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_a0 != '\0') {
      local_a8 = *(ulonglong *)(local_100 + 400);
      local_b8 = *(undefined8 *)(local_100 + 0x180);
      uStack_b0 = *(undefined8 *)(local_100 + 0x188);
      goto LAB_148afd0e9;
    }
LAB_148afcdfe:
    uVar6 = *(undefined1 *)(param_2 + 0xd);
    fVar10 = param_2[8];
    fVar3 = param_2[10];
    fVar4 = param_2[7];
    fVar5 = param_2[9];
    fVar8 = fStack_124 * fVar10 + fStack_124 * fVar3 + param_2[0xc];
    fVar11 = fStack_124 * fVar4 + fStack_124 * fVar5 + param_2[0xb];
    fVar9 = fVar10 * 0.0 + local_14c * fVar3;
    fVar12 = fVar4 * 0.0 + local_14c * fVar5;
    fVar10 = fVar3 * 0.0 + local_14c * fVar10;
    fStack_12c = fStack_124 * param_2[2];
    local_128 = param_2[4] + fStack_12c;
    fStack_12c = fStack_12c + param_2[3];
    fStack_11c = fVar5 * 0.0 + local_14c * fVar4;
    fStack_130 = local_14c * param_2[2];
    plVar7 = *(longlong **)(param_1 + 0x210);
    fStack_120 = fStack_124;
    if (plVar7 == (longlong *)0x0) {
      local_118 = CONCAT44(fVar12,fVar10);
      uStack_110 = CONCAT44(fVar11,fVar9);
      local_108 = CONCAT35(local_108._5_3_,CONCAT14(uVar6,fVar8)) & 0xffffff01ffffffff;
LAB_148afd007:
      local_f8 = (longlong *)0x0;
      goto LAB_148afd01b;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_118 = CONCAT44(fVar12,fVar10);
    uStack_110 = CONCAT44(fVar11,fVar9);
    local_108 = CONCAT17(local_f0._2_1_,CONCAT25((undefined2)local_f0,CONCAT14(uVar6,fVar8))) &
                0xffffff01ffffffff;
  }
  else {
    if (local_a0 == '\0') goto LAB_148afcdfe;
    local_b8 = *(undefined8 *)(local_100 + 0x180);
    uStack_b0 = *(undefined8 *)(local_100 + 0x188);
    local_a8 = *(ulonglong *)(local_100 + 400) ^ 0x80000000;
LAB_148afd0e9:
    fVar10 = (float)*(double *)(local_100 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar10 = (0.5 - fVar10) + 0.5;
    }
    local_140 = CONCAT44((float)*(double *)(local_100 + 0x178),fVar10);
    local_178 = &local_140;
    local_168 = param_2 + 7;
    local_138 = param_2[2];
    local_170 = &local_138;
    fStack_134 = (float)*(undefined8 *)(param_2 + 3);
    fStack_130 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    FUN_146978c22(&local_f0,&local_158,&local_14c,&local_b8);
    local_100 = *(longlong *)(param_1 + 0x208);
    plVar7 = *(longlong **)(param_1 + 0x210);
    if (plVar7 == (longlong *)0x0) {
      local_108 = local_c0;
      local_118 = CONCAT44(uStack_cc,local_d0);
      uStack_110 = CONCAT44(uStack_c4,uStack_c8);
      local_128 = local_e0;
      fStack_124 = fStack_dc;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      local_138 = local_f0;
      fStack_134 = fStack_ec;
      fStack_130 = fStack_e8;
      fStack_12c = fStack_e4;
      goto LAB_148afd007;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_108 = local_c0;
    local_118 = CONCAT44(uStack_cc,local_d0);
    uStack_110 = CONCAT44(uStack_c4,uStack_c8);
    local_128 = local_e0;
    fStack_124 = fStack_dc;
    fStack_120 = fStack_d8;
    fStack_11c = fStack_d4;
    local_138 = local_f0;
    fStack_134 = fStack_ec;
    fStack_130 = fStack_e8;
    fStack_12c = fStack_e4;
  }
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  local_f8 = plVar7;
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
LAB_148afd01b:
  FUN_1402018be(param_3,&local_138);
  plVar7 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afd20e FUN_148afd20e body=104 status=ok
// SIG undefined FUN_148afd20e(void)

double * FUN_148afd20e(longlong param_1,double *param_2)

{
  float fVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140105618(param_1,&local_30);
  fVar1 = *(float *)(param_1 + 0x298);
  *param_2 = (double)fVar1 * local_30;
  param_2[1] = local_28 * (double)fVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afd282 FUN_148afd282 body=38 status=ok
// SIG undefined FUN_148afd282(void)

undefined8 FUN_148afd282(undefined8 param_1,int param_2)

{
  FUN_148b01796();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afd2a8 FUN_148afd2a8 body=31 status=ok
// SIG undefined FUN_148afd2a8(void)

undefined8 FUN_148afd2a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afd2e4 FUN_148afd2e4 body=93 status=ok
// SIG undefined FUN_148afd2e4(void)

void FUN_148afd2e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5390c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148afd342 FUN_148afd342 body=93 status=ok
// SIG undefined FUN_148afd342(void)

void FUN_148afd342(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5390c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148afd3a0 FUN_148afd3a0 body=126 status=ok
// SIG undefined FUN_148afd3a0(void)

void FUN_148afd3a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5390c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148afd40f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afd42c FUN_148afd42c body=87 status=ok
// SIG undefined FUN_148afd42c(void)

void FUN_148afd42c(longlong *param_1,int param_2)

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
  FUN_148afd484();
  return;
}



// FUNCTION 148afd484 FUN_148afd484 body=114 status=ok
// SIG undefined FUN_148afd484(void)

void FUN_148afd484(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148afd4f6 FUN_148afd4f6 body=29 status=ok
// SIG undefined FUN_148afd4f6(void)

undefined8 FUN_148afd4f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afd52e FUN_148afd52e body=29 status=ok
// SIG undefined FUN_148afd52e(void)

bool FUN_148afd52e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afd54c FUN_148afd54c body=26 status=ok
// SIG undefined FUN_148afd54c(void)

bool FUN_148afd54c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afd566 FUN_148afd566 body=24 status=ok
// SIG undefined FUN_148afd566(void)

bool FUN_148afd566(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afd57e FUN_148afd57e body=101 status=ok
// SIG undefined FUN_148afd57e(void)

void FUN_148afd57e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afd5e4 FUN_148afd5e4 body=101 status=ok
// SIG undefined FUN_148afd5e4(void)

void FUN_148afd5e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afd64a FUN_148afd64a body=134 status=ok
// SIG undefined FUN_148afd64a(void)

void FUN_148afd64a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539130;
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
                    /* WARNING: Could not recover jumptable at 0x000148afd6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afd6d0 FUN_148afd6d0 body=52 status=ok
// SIG undefined FUN_148afd6d0(void)

void FUN_148afd6d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afd701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148afd704 FUN_148afd704 body=167 status=ok
// SIG undefined FUN_148afd704(void)

bool FUN_148afd704(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148afd7ac FUN_148afd7ac body=1136 status=ok
// SIG undefined FUN_148afd7ac(void)

ulonglong FUN_148afd7ac(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 4;
  cVar6 = FUN_144729dda(plVar1);
  if (((((cVar6 != '\0') || (cVar6 = FUN_144729dda(param_1 + 5), cVar6 != '\0')) &&
       (lVar11 = *param_2, lVar11 != 0)) &&
      ((lVar8 = FUN_1459f1af0(), lVar8 != 0 && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38))))
      ) && ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30 && (*param_2 != 0)))) {
    lVar11 = param_1[3];
    if ((longlong)(int)lVar11 != 0) {
      local_90 = param_1 + 2;
      lVar8 = param_1[2];
      lVar16 = 0;
      local_a0 = lVar8;
      do {
        uVar12 = *(ulonglong *)(lVar8 + lVar16);
        lVar4 = *(longlong *)(uVar12 + 0x10);
        lVar9 = *param_2;
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          local_98 = uVar12;
          lVar10 = FUN_1459f1af0();
          uVar12 = local_98;
          lVar8 = local_a0;
          if (((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
              lVar10 + 0x30)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *param_2;
          }
        }
        if (lVar4 == lVar9) {
          local_78 = uVar12;
          local_50 = uVar12;
          if ((uVar12 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(uVar12);
          }
          FUN_14776745c(local_90,&local_78,1);
          lVar11 = FUN_14479d2ce(plVar1);
          if (uVar12 != 0) goto LAB_148afd92a;
          goto LAB_148afd8e7;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar16);
    }
    lVar11 = FUN_14479d2ce(plVar1);
LAB_148afd8e7:
    if (lVar11 == 0) {
      lVar16 = FUN_14479d2ce(param_1 + 6);
      lVar8 = *param_2;
      if (lVar16 == 0) {
        local_68 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar13 = FUN_14479d2ce(param_1 + 5);
        uVar12 = FUN_1412b606d(uVar13,&local_68,0);
      }
      else {
        local_60 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar12 = FUN_143335f3f(lVar16,&local_60,0);
      }
    }
    else {
      local_58 = *param_2;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar12 = FUN_143335ec0(lVar11,&local_58,0);
    }
    local_50 = uVar12;
    if (uVar12 != 0) {
LAB_148afd92a:
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_147702a74(param_1,iVar3);
      }
      *(ulonglong *)(*param_1 + (longlong)iVar3 * 8) = uVar12;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      if (lVar11 == 0) {
LAB_148afdaf8:
        uVar7 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar14 = (ulonglong *)FUN_1477675fa(param_1 + 7,uVar7 >> 0x10 ^ uVar7,&local_50);
        if (*puVar14 == 0) {
          local_88 = *param_3;
          local_80 = param_3[1];
          FUN_147767550(local_50,&local_78);
          plVar1 = local_70;
          if (local_70 == (longlong *)0x0) {
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (plVar15 != (longlong *)0x0) {
              puVar14[1] = 0;
LAB_148afdbaf:
              LOCK();
              plVar1 = plVar15 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
joined_r0x000148afdbda:
                if (iVar3 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (local_70 == plVar15) {
              LOCK();
              plVar15 = local_70 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
                plVar15 = plVar1;
                goto joined_r0x000148afdbda;
              }
            }
            else {
              puVar14[1] = (ulonglong)local_70;
              if (plVar15 != (longlong *)0x0) goto LAB_148afdbaf;
            }
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
      }
      else {
        FUN_140760c2c(lVar11,&local_78);
        plVar1 = local_70;
        uVar5 = local_78;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_70 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        uVar12 = local_50;
        if (uVar5 != 0) goto LAB_148afdaf8;
      }
      uVar12 = local_50;
      if (local_50 != 0) {
        lVar11 = FUN_1459f1af0();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(uVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_148afd801;
      }
    }
  }
  uVar12 = 0;
LAB_148afd801:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afdc1e FUN_148afdc1e body=165 status=ok
// SIG undefined FUN_148afdc1e(void)

undefined8 *
FUN_148afdc1e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148afdcc4(&local_38,*param_3,&local_28);
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afdcc4 FUN_148afdcc4 body=315 status=ok
// SIG undefined FUN_148afdcc4(void)

undefined8 FUN_148afdcc4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_228 [32];
  undefined8 **local_208;
  undefined8 *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  undefined1 local_1d8 [424];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e0 = param_2;
  FUN_1417aa8de(local_1d8);
  plVar3 = local_28;
  local_30 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 8) = *(int *)((longlong)plVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_28;
      local_28 = plVar4;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar4 = local_28;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar4 = local_28;
      }
    }
  }
  local_28 = plVar4;
  local_200 = &local_1e0;
  local_208 = &local_200;
  FUN_1412240d2(local_1f8,"SObjectWidget","Runtime\\UMG\\Public\\Blueprint/UserWidgetPool.h",0x41);
  FUN_1410fb2a4(local_1f8,param_1,local_1d8);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_1417aa988(local_1d8);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afde00 FUN_148afde00 body=29 status=ok
// SIG undefined FUN_148afde00(void)

undefined8 FUN_148afde00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afde38 FUN_148afde38 body=29 status=ok
// SIG undefined FUN_148afde38(void)

bool FUN_148afde38(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afde56 FUN_148afde56 body=26 status=ok
// SIG undefined FUN_148afde56(void)

bool FUN_148afde56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afde70 FUN_148afde70 body=24 status=ok
// SIG undefined FUN_148afde70(void)

bool FUN_148afde70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afde88 FUN_148afde88 body=101 status=ok
// SIG undefined FUN_148afde88(void)

void FUN_148afde88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afdeee FUN_148afdeee body=101 status=ok
// SIG undefined FUN_148afdeee(void)

void FUN_148afdeee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afdf54 FUN_148afdf54 body=134 status=ok
// SIG undefined FUN_148afdf54(void)

void FUN_148afdf54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539210;
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
                    /* WARNING: Could not recover jumptable at 0x000148afdfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afdfda FUN_148afdfda body=44 status=ok
// SIG undefined FUN_148afdfda(void)

void FUN_148afdfda(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afe003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148afe006 FUN_148afe006 body=156 status=ok
// SIG undefined FUN_148afe006(void)

bool FUN_148afe006(longlong param_1,undefined8 param_2)

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



// FUNCTION 148afe0a4 FUN_148afe0a4 body=29 status=ok
// SIG undefined FUN_148afe0a4(void)

undefined8 FUN_148afe0a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afe0dc FUN_148afe0dc body=29 status=ok
// SIG undefined FUN_148afe0dc(void)

bool FUN_148afe0dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afe0fa FUN_148afe0fa body=26 status=ok
// SIG undefined FUN_148afe0fa(void)

bool FUN_148afe0fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afe114 FUN_148afe114 body=24 status=ok
// SIG undefined FUN_148afe114(void)

bool FUN_148afe114(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afe12c FUN_148afe12c body=101 status=ok
// SIG undefined FUN_148afe12c(void)

void FUN_148afe12c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe192 FUN_148afe192 body=101 status=ok
// SIG undefined FUN_148afe192(void)

void FUN_148afe192(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe1f8 FUN_148afe1f8 body=134 status=ok
// SIG undefined FUN_148afe1f8(void)

void FUN_148afe1f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539280;
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
                    /* WARNING: Could not recover jumptable at 0x000148afe26f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afe27e FUN_148afe27e body=52 status=ok
// SIG undefined FUN_148afe27e(void)

void FUN_148afe27e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afe2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148afe2b2 FUN_148afe2b2 body=167 status=ok
// SIG undefined FUN_148afe2b2(void)

bool FUN_148afe2b2(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148afe35a FUN_148afe35a body=29 status=ok
// SIG undefined FUN_148afe35a(void)

undefined8 FUN_148afe35a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afe392 FUN_148afe392 body=29 status=ok
// SIG undefined FUN_148afe392(void)

bool FUN_148afe392(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afe3b0 FUN_148afe3b0 body=26 status=ok
// SIG undefined FUN_148afe3b0(void)

bool FUN_148afe3b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afe3ca FUN_148afe3ca body=24 status=ok
// SIG undefined FUN_148afe3ca(void)

bool FUN_148afe3ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afe3e2 FUN_148afe3e2 body=101 status=ok
// SIG undefined FUN_148afe3e2(void)

void FUN_148afe3e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5392f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe448 FUN_148afe448 body=101 status=ok
// SIG undefined FUN_148afe448(void)

void FUN_148afe448(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5392f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe4ae FUN_148afe4ae body=134 status=ok
// SIG undefined FUN_148afe4ae(void)

void FUN_148afe4ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5392f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148afe525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afe534 FUN_148afe534 body=50 status=ok
// SIG undefined FUN_148afe534(void)

void FUN_148afe534(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afe563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148afe566 FUN_148afe566 body=165 status=ok
// SIG undefined FUN_148afe566(void)

bool FUN_148afe566(longlong param_1,undefined4 param_2,undefined4 param_3)

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



// FUNCTION 148afe60c FUN_148afe60c body=29 status=ok
// SIG undefined FUN_148afe60c(void)

undefined8 FUN_148afe60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afe644 FUN_148afe644 body=29 status=ok
// SIG undefined FUN_148afe644(void)

bool FUN_148afe644(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afe662 FUN_148afe662 body=26 status=ok
// SIG undefined FUN_148afe662(void)

bool FUN_148afe662(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afe67c FUN_148afe67c body=24 status=ok
// SIG undefined FUN_148afe67c(void)

bool FUN_148afe67c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afe694 FUN_148afe694 body=101 status=ok
// SIG undefined FUN_148afe694(void)

void FUN_148afe694(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b539360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe6fa FUN_148afe6fa body=101 status=ok
// SIG undefined FUN_148afe6fa(void)

void FUN_148afe6fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b539360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe760 FUN_148afe760 body=134 status=ok
// SIG undefined FUN_148afe760(void)

void FUN_148afe760(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b539360;
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
                    /* WARNING: Could not recover jumptable at 0x000148afe7d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afe7e6 FUN_148afe7e6 body=39 status=ok
// SIG undefined FUN_148afe7e6(void)

void FUN_148afe7e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afe809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148afe80e FUN_148afe80e body=146 status=ok
// SIG undefined FUN_148afe80e(void)

bool FUN_148afe80e(longlong param_1)

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



// FUNCTION 148afe8a2 FUN_148afe8a2 body=29 status=ok
// SIG undefined FUN_148afe8a2(void)

undefined8 FUN_148afe8a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afe8da FUN_148afe8da body=29 status=ok
// SIG undefined FUN_148afe8da(void)

bool FUN_148afe8da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afe8f8 FUN_148afe8f8 body=26 status=ok
// SIG undefined FUN_148afe8f8(void)

bool FUN_148afe8f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afe912 FUN_148afe912 body=24 status=ok
// SIG undefined FUN_148afe912(void)

bool FUN_148afe912(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afe92a FUN_148afe92a body=101 status=ok
// SIG undefined FUN_148afe92a(void)

void FUN_148afe92a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b539450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe990 FUN_148afe990 body=101 status=ok
// SIG undefined FUN_148afe990(void)

void FUN_148afe990(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b539450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afe9f6 FUN_148afe9f6 body=134 status=ok
// SIG undefined FUN_148afe9f6(void)

void FUN_148afe9f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b539450;
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
                    /* WARNING: Could not recover jumptable at 0x000148afea6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afea7c FUN_148afea7c body=39 status=ok
// SIG undefined FUN_148afea7c(void)

void FUN_148afea7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afea9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148afeaa4 FUN_148afeaa4 body=146 status=ok
// SIG undefined FUN_148afeaa4(void)

bool FUN_148afeaa4(longlong param_1)

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



// FUNCTION 148afeb38 FUN_148afeb38 body=29 status=ok
// SIG undefined FUN_148afeb38(void)

undefined8 FUN_148afeb38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148afeb70 FUN_148afeb70 body=29 status=ok
// SIG undefined FUN_148afeb70(void)

bool FUN_148afeb70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148afeb8e FUN_148afeb8e body=26 status=ok
// SIG undefined FUN_148afeb8e(void)

bool FUN_148afeb8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afeba8 FUN_148afeba8 body=24 status=ok
// SIG undefined FUN_148afeba8(void)

bool FUN_148afeba8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afebc0 FUN_148afebc0 body=101 status=ok
// SIG undefined FUN_148afebc0(void)

void FUN_148afebc0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5394c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afec26 FUN_148afec26 body=101 status=ok
// SIG undefined FUN_148afec26(void)

void FUN_148afec26(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5394c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afec8c FUN_148afec8c body=134 status=ok
// SIG undefined FUN_148afec8c(void)

void FUN_148afec8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5394c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148afed03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148afed12 FUN_148afed12 body=39 status=ok
// SIG undefined FUN_148afed12(void)

void FUN_148afed12(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148afed35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148afed3a FUN_148afed3a body=146 status=ok
// SIG undefined FUN_148afed3a(void)

bool FUN_148afed3a(longlong param_1)

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



// FUNCTION 148afedce FUN_148afedce body=115 status=ok
// SIG undefined FUN_148afedce(void)

void FUN_148afedce(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = param_3[1];
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148afee42(param_1,&local_28,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148afee42 FUN_148afee42 body=1122 status=ok
// SIG undefined FUN_148afee42(void)

ulonglong FUN_148afee42(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar16 = param_1 + 4;
  cVar6 = FUN_144729dda(plVar16);
  if (((((cVar6 != '\0') || (cVar6 = FUN_144729dda(param_1 + 5), cVar6 != '\0')) &&
       (lVar11 = *param_2, lVar11 != 0)) &&
      ((lVar8 = FUN_14599896e(), lVar8 != 0 && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38))))
      ) && ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30 && (*param_2 != 0)))) {
    lVar11 = param_1[3];
    local_a0 = param_1;
    local_90 = param_3;
    if ((longlong)(int)lVar11 != 0) {
      local_98 = param_1 + 2;
      lVar8 = param_1[2];
      lVar17 = 0;
      do {
        uVar12 = *(ulonglong *)(lVar8 + lVar17);
        lVar4 = *(longlong *)(uVar12 + 0x10);
        lVar10 = *param_2;
        if (((lVar10 == 0) || (lVar9 = FUN_14599896e(), lVar9 == 0)) ||
           ((*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
             lVar9 + 0x30)))) {
          lVar10 = 0;
        }
        else {
          lVar10 = *param_2;
        }
        if (lVar4 == lVar10) {
          local_78 = uVar12;
          local_50 = uVar12;
          if ((uVar12 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(uVar12);
          }
          FUN_14776745c(local_98,&local_78,1);
          lVar11 = FUN_14479d2ce(plVar16);
          plVar16 = local_a0;
          if (uVar12 != 0) goto LAB_148afefbe;
          goto LAB_148afef78;
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar17);
    }
    lVar11 = FUN_14479d2ce(plVar16);
LAB_148afef78:
    plVar16 = local_a0;
    if (lVar11 == 0) {
      lVar17 = FUN_14479d2ce(local_a0 + 6);
      lVar8 = *param_2;
      if (lVar17 == 0) {
        local_68 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar13 = FUN_14479d2ce(plVar16 + 5);
        uVar12 = FUN_1412b606d(uVar13,&local_68,0);
      }
      else {
        local_60 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar12 = FUN_143335f3f(lVar17,&local_60,0);
      }
    }
    else {
      local_58 = *param_2;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar12 = FUN_143335ec0(lVar11,&local_58,0);
    }
    local_50 = uVar12;
    if (uVar12 != 0) {
LAB_148afefbe:
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      iVar3 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
        FUN_147702a74(plVar16,iVar3);
      }
      *(ulonglong *)(*plVar16 + (longlong)iVar3 * 8) = uVar12;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      if (lVar11 == 0) {
LAB_148aff179:
        uVar7 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar14 = (ulonglong *)FUN_1477675fa(plVar16 + 7,uVar7 >> 0x10 ^ uVar7,&local_50);
        if (*puVar14 == 0) {
          local_88 = *local_90;
          local_80 = local_90[1];
          FUN_147767550(local_50,&local_78);
          plVar16 = local_70;
          if (local_70 == (longlong *)0x0) {
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (plVar15 != (longlong *)0x0) {
              puVar14[1] = 0;
LAB_148aff237:
              LOCK();
              plVar16 = plVar15 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
joined_r0x000148aff262:
                if (iVar3 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
            *puVar14 = local_78;
            plVar15 = (longlong *)puVar14[1];
            if (local_70 == plVar15) {
              LOCK();
              plVar15 = local_70 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar16 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
                plVar15 = plVar16;
                goto joined_r0x000148aff262;
              }
            }
            else {
              puVar14[1] = (ulonglong)local_70;
              if (plVar15 != (longlong *)0x0) goto LAB_148aff237;
            }
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_70 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
      }
      else {
        FUN_140760c2c(lVar11,&local_78);
        plVar15 = local_70;
        uVar5 = local_78;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        uVar12 = local_50;
        if (uVar5 != 0) goto LAB_148aff179;
      }
      uVar12 = local_50;
      if (local_50 != 0) {
        lVar11 = FUN_14599896e();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(uVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) goto LAB_148afeeb8;
      }
    }
  }
  uVar12 = 0;
LAB_148afeeb8:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aff2a6 FUN_148aff2a6 body=168 status=ok
// SIG undefined FUN_148aff2a6(void)

undefined8 *
FUN_148aff2a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148aff350(param_2,&local_38,*param_3,&local_28);
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aff350 FUN_148aff350 body=375 status=ok
// SIG undefined FUN_148aff350(void)

undefined8 FUN_148aff350(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_288 [32];
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined1 local_228 [424];
  undefined1 local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar3 = *param_1;
  FUN_14776d200(local_228);
  local_80 = *(undefined1 *)(lVar3 + 0x1a8);
  local_240 = &LAB_14776d354;
  local_238 = 0;
  uVar5 = FUN_14776d25e(local_228,lVar3,&local_240);
  local_240 = &LAB_14776d458;
  local_238 = 0;
  uVar5 = FUN_14776d362(uVar5,lVar3,&local_240);
  uVar5 = FUN_14776d466(uVar5,param_4);
  local_248 = &local_260;
  local_258 = param_1[1];
  local_268 = &local_258;
  local_260 = lVar3;
  local_250 = param_3;
  FUN_14776d854(&local_240,"ObjectTableRowT","Runtime\\UMG\\Public\\Components/ListViewBase.h",0x265
               );
  FUN_14776d4c0(&local_240,param_2,uVar5);
  plVar4 = (longlong *)CONCAT44(uStack_234,local_238);
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
  FUN_14776d54a(local_228);
  plVar4 = *(longlong **)(param_4 + 8);
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
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aff4c8 FUN_148aff4c8 body=230 status=ok
// SIG undefined FUN_148aff4c8(void)

undefined8 * FUN_148aff4c8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148aff5b0 FUN_148aff5b0 body=29 status=ok
// SIG undefined FUN_148aff5b0(void)

undefined8 FUN_148aff5b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aff5e8 FUN_148aff5e8 body=29 status=ok
// SIG undefined FUN_148aff5e8(void)

bool FUN_148aff5e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148aff606 FUN_148aff606 body=26 status=ok
// SIG undefined FUN_148aff606(void)

bool FUN_148aff606(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aff620 FUN_148aff620 body=24 status=ok
// SIG undefined FUN_148aff620(void)

bool FUN_148aff620(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148aff638 FUN_148aff638 body=101 status=ok
// SIG undefined FUN_148aff638(void)

void FUN_148aff638(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5437d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148aff69e FUN_148aff69e body=101 status=ok
// SIG undefined FUN_148aff69e(void)

void FUN_148aff69e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5437d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148aff704 FUN_148aff704 body=134 status=ok
// SIG undefined FUN_148aff704(void)

void FUN_148aff704(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5437d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539530;
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
                    /* WARNING: Could not recover jumptable at 0x000148aff77b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aff78a FUN_148aff78a body=52 status=ok
// SIG undefined FUN_148aff78a(void)

void FUN_148aff78a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148aff7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148aff7be FUN_148aff7be body=167 status=ok
// SIG undefined FUN_148aff7be(void)

bool FUN_148aff7be(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148aff866 FUN_148aff866 body=230 status=ok
// SIG undefined FUN_148aff866(void)

undefined8 * FUN_148aff866(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148aff94e FUN_148aff94e body=29 status=ok
// SIG undefined FUN_148aff94e(void)

undefined8 FUN_148aff94e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aff986 FUN_148aff986 body=29 status=ok
// SIG undefined FUN_148aff986(void)

bool FUN_148aff986(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148aff9a4 FUN_148aff9a4 body=26 status=ok
// SIG undefined FUN_148aff9a4(void)

bool FUN_148aff9a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aff9be FUN_148aff9be body=24 status=ok
// SIG undefined FUN_148aff9be(void)

bool FUN_148aff9be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148aff9d6 FUN_148aff9d6 body=101 status=ok
// SIG undefined FUN_148aff9d6(void)

void FUN_148aff9d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5395a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148affa3c FUN_148affa3c body=101 status=ok
// SIG undefined FUN_148affa3c(void)

void FUN_148affa3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5395a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148affaa2 FUN_148affaa2 body=134 status=ok
// SIG undefined FUN_148affaa2(void)

void FUN_148affaa2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5395a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148affb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148affb28 FUN_148affb28 body=44 status=ok
// SIG undefined FUN_148affb28(void)

void FUN_148affb28(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148affb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148affb54 FUN_148affb54 body=156 status=ok
// SIG undefined FUN_148affb54(void)

bool FUN_148affb54(longlong param_1,undefined8 param_2)

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



// FUNCTION 148affbf2 FUN_148affbf2 body=29 status=ok
// SIG undefined FUN_148affbf2(void)

undefined8 FUN_148affbf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148affc2a FUN_148affc2a body=29 status=ok
// SIG undefined FUN_148affc2a(void)

bool FUN_148affc2a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148affc48 FUN_148affc48 body=26 status=ok
// SIG undefined FUN_148affc48(void)

bool FUN_148affc48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148affc62 FUN_148affc62 body=24 status=ok
// SIG undefined FUN_148affc62(void)

bool FUN_148affc62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148affc7a FUN_148affc7a body=101 status=ok
// SIG undefined FUN_148affc7a(void)

void FUN_148affc7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148affce0 FUN_148affce0 body=101 status=ok
// SIG undefined FUN_148affce0(void)

void FUN_148affce0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148affd46 FUN_148affd46 body=134 status=ok
// SIG undefined FUN_148affd46(void)

void FUN_148affd46(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539610;
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
                    /* WARNING: Could not recover jumptable at 0x000148affdbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148affdcc FUN_148affdcc body=44 status=ok
// SIG undefined FUN_148affdcc(void)

void FUN_148affdcc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148affdf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148affdf8 FUN_148affdf8 body=156 status=ok
// SIG undefined FUN_148affdf8(void)

bool FUN_148affdf8(longlong param_1,undefined8 param_2)

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



// FUNCTION 148affe96 FUN_148affe96 body=29 status=ok
// SIG undefined FUN_148affe96(void)

undefined8 FUN_148affe96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148affece FUN_148affece body=29 status=ok
// SIG undefined FUN_148affece(void)

bool FUN_148affece(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148affeec FUN_148affeec body=26 status=ok
// SIG undefined FUN_148affeec(void)

bool FUN_148affeec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148afff06 FUN_148afff06 body=24 status=ok
// SIG undefined FUN_148afff06(void)

bool FUN_148afff06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148afff1e FUN_148afff1e body=101 status=ok
// SIG undefined FUN_148afff1e(void)

void FUN_148afff1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afff84 FUN_148afff84 body=101 status=ok
// SIG undefined FUN_148afff84(void)

void FUN_148afff84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148afffea FUN_148afffea body=134 status=ok
// SIG undefined FUN_148afffea(void)

void FUN_148afffea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538930;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539680;
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
                    /* WARNING: Could not recover jumptable at 0x000148b00061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b00070 FUN_148b00070 body=52 status=ok
// SIG undefined FUN_148b00070(void)

void FUN_148b00070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b000a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}


