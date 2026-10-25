// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e55838 FUN_148e55838 body=50 status=ok
// SIG undefined FUN_148e55838(void)

void FUN_148e55838(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e55867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e55884 FUN_148e55884 body=101 status=ok
// SIG undefined FUN_148e55884(void)

void FUN_148e55884(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e558ea FUN_148e558ea body=101 status=ok
// SIG undefined FUN_148e558ea(void)

void FUN_148e558ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55950 FUN_148e55950 body=134 status=ok
// SIG undefined FUN_148e55950(void)

void FUN_148e55950(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5a40;
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
                    /* WARNING: Could not recover jumptable at 0x000148e559c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e559d6 FUN_148e559d6 body=60 status=ok
// SIG undefined FUN_148e559d6(void)

void FUN_148e559d6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e55a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e55a2c FUN_148e55a2c body=29 status=ok
// SIG undefined FUN_148e55a2c(void)

bool FUN_148e55a2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e55a4a FUN_148e55a4a body=101 status=ok
// SIG undefined FUN_148e55a4a(void)

void FUN_148e55a4a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55ab0 FUN_148e55ab0 body=101 status=ok
// SIG undefined FUN_148e55ab0(void)

void FUN_148e55ab0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55b16 FUN_148e55b16 body=134 status=ok
// SIG undefined FUN_148e55b16(void)

void FUN_148e55b16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5ab0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e55b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e55b9c FUN_148e55b9c body=39 status=ok
// SIG undefined FUN_148e55b9c(void)

void FUN_148e55b9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e55bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e55bde FUN_148e55bde body=29 status=ok
// SIG undefined FUN_148e55bde(void)

bool FUN_148e55bde(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e55bfc FUN_148e55bfc body=101 status=ok
// SIG undefined FUN_148e55bfc(void)

void FUN_148e55bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55c62 FUN_148e55c62 body=134 status=ok
// SIG undefined FUN_148e55c62(void)

void FUN_148e55c62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8da20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5b20;
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
                    /* WARNING: Could not recover jumptable at 0x000148e55cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e55ce8 FUN_148e55ce8 body=44 status=ok
// SIG undefined FUN_148e55ce8(void)

void FUN_148e55ce8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e55d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e55d2e FUN_148e55d2e body=29 status=ok
// SIG undefined FUN_148e55d2e(void)

bool FUN_148e55d2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e55d4c FUN_148e55d4c body=101 status=ok
// SIG undefined FUN_148e55d4c(void)

void FUN_148e55d4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55db2 FUN_148e55db2 body=101 status=ok
// SIG undefined FUN_148e55db2(void)

void FUN_148e55db2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b5bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55e18 FUN_148e55e18 body=134 status=ok
// SIG undefined FUN_148e55e18(void)

void FUN_148e55e18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5bc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e55e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e55e9e FUN_148e55e9e body=39 status=ok
// SIG undefined FUN_148e55e9e(void)

void FUN_148e55e9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e55ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e55ee0 FUN_148e55ee0 body=29 status=ok
// SIG undefined FUN_148e55ee0(void)

bool FUN_148e55ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e55efe FUN_148e55efe body=101 status=ok
// SIG undefined FUN_148e55efe(void)

void FUN_148e55efe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55f64 FUN_148e55f64 body=101 status=ok
// SIG undefined FUN_148e55f64(void)

void FUN_148e55f64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e55fca FUN_148e55fca body=134 status=ok
// SIG undefined FUN_148e55fca(void)

void FUN_148e55fca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b982300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b5ca0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e56041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e56050 FUN_148e56050 body=44 status=ok
// SIG undefined FUN_148e56050(void)

void FUN_148e56050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e56079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5607c FUN_148e5607c body=147 status=ok
// SIG undefined FUN_148e5607c(void)

void FUN_148e5607c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e56110 FUN_148e56110 body=62 status=ok
// SIG undefined FUN_148e56110(void)

void FUN_148e56110(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e5614e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 148e5614e FUN_148e5614e body=112 status=ok
// SIG undefined FUN_148e5614e(void)

ulonglong FUN_148e5614e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148e56188;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_148e56188:
  return param_2 & 0xffffffff;
}



// FUNCTION 148e561c6 FUN_148e561c6 body=155 status=ok
// SIG undefined FUN_148e561c6(void)

void FUN_148e561c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_140defa54();
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b9b7580;
  local_68[0] = FUN_1442a7b80;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_1;
  FUN_140980216(*puVar1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e56262 FUN_148e56262 body=103 status=ok
// SIG undefined FUN_148e56262(void)

void FUN_148e56262(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b94002();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148e5f4ee(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e562ca FUN_148e562ca body=335 status=ok
// SIG undefined FUN_148e562ca(void)

void FUN_148e562ca(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [3];
  undefined1 local_90 [12];
  int local_84 [2];
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_144a7a8f6(local_84);
  FUN_144a7a8f6(local_90);
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_1400b2348(param_2 + 0x20,local_a8,1);
  cVar1 = FUN_14071521e(local_a8,local_84,local_90,&local_78);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((((cVar1 != '\0') && ((int)local_78 != 0)) && (local_78._4_4_ != 0)) &&
     ((int)local_78 != DAT_14c948000)) {
    if ((local_84[0] == DAT_14cbd8348) && (local_7c == DAT_14cbd8350)) {
      FUN_1410290ea(param_1,local_90,&local_78,0);
    }
    else if ((local_84[0] == DAT_14cbd8354) && (local_7c == DAT_14cbd835c)) {
      FUN_148e561c6(param_1,local_90,&local_78);
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e56428 FUN_148e56428 body=351 status=ok
// SIG undefined FUN_148e56428(void)

void FUN_148e56428(longlong param_1)

{
  short sVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
  if ((cVar3 != '\0') && (lVar4 = FUN_1459afa08(param_1 + 0xc), lVar4 != 0)) {
    lVar5 = FUN_144a7b4ca();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30 && (lVar5 = FUN_14479d2ce(lVar4 + 0x4e0), lVar5 != 0)))) {
      local_50 = (void *)0x0;
      local_48 = *(int *)(lVar5 + 0x418);
      lVar6 = (longlong)local_48;
      _Src = *(void **)(lVar5 + 0x410);
      if (lVar6 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1486e150e(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar6 << 3);
        iVar2 = local_48;
        if ((longlong)local_48 != 0) {
          sVar1 = *(short *)(lVar5 + 0x420);
          if (*(short *)(param_1 + 0x6c) == sVar1) {
            if (*(int *)(param_1 + 0x68) != local_48) {
              lVar6 = 0;
              do {
                if (*(longlong *)((longlong)local_50 + lVar6) == lVar4) {
                  FUN_148e5ff3e(param_1 + 0x38,lVar5);
                  *(int *)(param_1 + 0x68) = iVar2;
                  break;
                }
                lVar6 = lVar6 + 8;
              } while ((longlong)local_48 << 3 != lVar6);
            }
          }
          else {
            FUN_148e5ff3e(param_1 + 0x20,lVar5);
            *(short *)(param_1 + 0x6c) = sVar1;
          }
        }
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e56588 FUN_148e56588 body=214 status=ok
// SIG undefined FUN_148e56588(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148e56588(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141361000(local_48);
  if ((longlong)*(int *)(param_2 + 0x3c0) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x3b8);
    lVar4 = (longlong)*(int *)(param_2 + 0x3c0) << 4;
    do {
      if (((param_1 != 0) && (*(longlong *)(lVar3 + 8) == local_48[0])) &&
         (lVar2 = FUN_1409ca440(lVar3), lVar2 == param_1)) {
        if (lVar3 != 0) goto LAB_148e56635;
        break;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  FUN_141361000(&local_50);
  plVar1 = local_48 + 1;
  local_48[1] = 0;
  FUN_14485c47a(plVar1,param_1);
  local_48[2] = local_50;
  FUN_14113f0c0(plVar1);
  FUN_14053c012(param_2 + 0x3b8,plVar1);
LAB_148e56635:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e56660 FUN_148e56660 body=191 status=ok
// SIG undefined FUN_148e56660(void)

void FUN_148e56660(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    lVar1 = FUN_14492b4b4(param_2);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_14480f766(lVar1);
    }
  }
  if (param_3 != 0) {
    FUN_14485c47a(param_1 + 0xb0,param_3);
    lVar1 = FUN_14492b4b4(param_3);
    if (lVar1 != 0) {
      local_30 = FUN_148e5694a;
      local_28 = 0;
      FUN_148e5684a(lVar1,&local_20,param_1);
      *(undefined8 *)(param_1 + 0xa8) = local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e56722 FUN_148e56722 body=295 status=ok
// SIG undefined FUN_148e56722(void)

void FUN_148e56722(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1400f3ad8(param_1 + 0x14);
  if (lVar3 != 0) {
    FUN_141361000(&local_48);
    if ((longlong)*(int *)(lVar3 + 0x3c0) != 0) {
      lVar1 = param_1 + -0x30;
      lVar6 = *(longlong *)(lVar3 + 0x3b8);
      lVar7 = (longlong)*(int *)(lVar3 + 0x3c0) << 4;
      do {
        if ((lVar1 != 0) && (*(longlong *)(lVar6 + 8) == local_48)) {
          lVar4 = FUN_1409ca440(lVar6);
          if (lVar4 == lVar1) {
            if (lVar6 != 0) {
              FUN_141361000(&local_50);
              FUN_1409ca370(lVar3 + 0x3b8,lVar1,local_50);
              FUN_144a7b126(lVar3 + 0x3b8,&local_39,1);
            }
            break;
          }
        }
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  cVar2 = FUN_144729dda(param_1 + 0x80);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x78) != 0)) {
    uVar5 = FUN_14479d2ce(param_1 + 0x80);
    lVar3 = FUN_14492b4b4(uVar5);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14480f766(lVar3);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5684a FUN_148e5684a body=254 status=ok
// SIG undefined FUN_148e5684a(void)

undefined8
FUN_148e5684a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac8da20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7780;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140367cc6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5694a FUN_148e5694a body=76 status=ok
// SIG undefined FUN_148e5694a(void)

void FUN_148e5694a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14570329c(param_1 + 0xb8);
  if (cVar1 != '\0') {
    return;
  }
  FUN_140d75dba(param_1 + 0xb8,param_2);
  FUN_140365ebc(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 148e5699a FUN_148e5699a body=201 status=ok
// SIG undefined FUN_148e5699a(void)

void FUN_148e5699a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x2d0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x230));
  *(int *)(lVar3 + 0x228) = *(int *)(lVar3 + 0x228) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  FUN_145e28436(lVar3 + 0xb0,param_2 + 0x20);
  FUN_145e28436(param_1 + 0xdc,param_2 + 0x20);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x230));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e56aaa FUN_148e56aaa body=551 status=ok
// SIG undefined FUN_148e56aaa(void)

void FUN_148e56aaa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)FUN_141188014();
  if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0)) {
    local_a0 = local_90;
    local_98 = (undefined4)*param_2;
    uStack_94 = (undefined4)((ulonglong)*param_2 >> 0x20);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = local_78 & 0xffffffff00000000;
    lStack_70 = 0;
    lStack_68 = 0;
    local_a8 = &local_98;
    FUN_14581cf4c(&local_88,&local_a8,0);
    lVar6 = FUN_140b3986e(&local_88);
    if (lStack_70 != 0) {
      FUN_1400020a8();
    }
    if ((((lVar6 != 0) && (lVar6 = FUN_141085a5e(lVar5,lVar6,0), lVar6 != 0)) &&
        (cVar3 = FUN_140a30ba2(lVar6), cVar3 != '\0')) &&
       (lVar7 = FUN_140a4889e(lVar6,param_3), lVar7 != 0)) {
      local_a8 = (undefined4 *)0x0;
      iVar1 = *(int *)(lVar7 + 0x88);
      _Src = *(void **)(lVar7 + 0x80);
      local_a0 = (undefined4 *)CONCAT44(local_a0._4_4_,iVar1);
      if ((longlong)iVar1 != 0) {
        FUN_14651dd56(&local_a8,iVar1,0);
        memcpy(local_a8,_Src,(longlong)iVar1 << 3);
        puVar2 = local_a8;
        lVar8 = (longlong)(int)local_a0;
        if (lVar8 != 0) {
          lVar9 = 0;
          do {
            if (*(char *)(lVar7 + 0x91) == '\x01') {
              local_98 = 0xffffffff;
              uStack_94 = (undefined4)*(undefined8 *)(lVar7 + 0x48);
              local_90[0] = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x48) >> 0x20);
              local_b4 = 0xffffffff;
              local_b0 = *(undefined8 *)(*(longlong *)((longlong)puVar2 + lVar9) + 0x48);
              local_78 = 0;
              lStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_c0 = 0;
              local_c8 = 0;
              lStack_68 = lVar6;
              FUN_145941cc4(lVar5,&local_88,&local_b4,&local_98);
            }
            lVar9 = lVar9 + 8;
          } while (lVar8 * 8 != lVar9);
        }
        if (local_a8 != (undefined4 *)0x0) {
          FUN_1400020a8(local_a8);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e56cd2 FUN_148e56cd2 body=1337 status=ok
// SIG undefined FUN_148e56cd2(void)

void FUN_148e56cd2(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FUN_141188014();
  if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0)) {
    if (param_2 != '\0') {
      lVar6 = FUN_1410a623c();
      if (*(longlong *)(lVar5 + 0x138) != 0) {
        FUN_1486e0a3c(*(longlong *)(lVar5 + 0x138),*(undefined8 *)(lVar6 + 0x38));
      }
      lVar6 = FUN_141356c7a(param_1 + 0x30);
      if (lVar6 != 0) {
        lVar7 = FUN_144a7b4ca();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          lVar8 = FUN_1410a623c();
          lVar7 = *(longlong *)(lVar8 + 0x38);
          local_70 = lVar7;
          uVar9 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x40));
          local_68 = FUN_14477b664(uVar9);
          lVar8 = *(longlong *)(lVar8 + 0x48);
          local_60 = lVar8;
          if (local_68 == 0) {
            uVar9 = FUN_145764ed6();
            local_68 = FUN_14477b664(uVar9);
          }
          if (lVar8 == 0) {
            local_60 = 0;
            if (local_68 == 0 || lVar7 == 0) {
              lVar8 = 0;
            }
            else {
              plVar4 = *(longlong **)(local_68 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
                lVar8 = 0;
                local_60 = lVar8;
              }
              else {
                uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar8 = FUN_144aff482(uVar9,&local_70);
                local_60 = lVar8;
              }
            }
          }
          uVar9 = FUN_140fcc63a(lVar8);
          if (local_68 == 0) {
            uVar10 = FUN_145764ed6();
            local_68 = FUN_14477b664(uVar10);
          }
          lVar7 = local_60;
          if (((local_60 == 0) && (lVar7 = 0, local_68 != 0)) && (local_70 != 0)) {
            plVar4 = *(longlong **)(local_68 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
              lVar7 = 0;
              local_60 = lVar7;
            }
            else {
              uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar7 = FUN_144aff482(uVar10,&local_70);
              local_60 = lVar7;
            }
          }
          puVar13 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
            puVar13 = *(undefined4 **)(lVar7 + 8);
          }
          local_48 = 0;
          uStack_40 = 0;
          FUN_1400b2348(puVar13,&local_48,1);
          local_80 = 1;
          local_88 = 0;
          FUN_145c5cda5(L"respec_specializations_tree",&local_48,lVar6,uVar9);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    local_48 = 0;
    uStack_40 = 0;
    FUN_146213186(lVar5,&local_48);
    lVar6 = local_48;
    lVar7 = (longlong)(int)uStack_40;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar6 + lVar8);
        if (plVar4 != (longlong *)0x0) {
          lVar11 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar12 = FUN_145c9f2cc();
          if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30)) {
            lVar6 = plVar4[6];
            if (lVar6 == 0) {
              uVar9 = FUN_140e2014e();
              lVar6 = FUN_14477b664(uVar9);
              plVar4[6] = lVar6;
            }
            plVar1 = plVar4 + 5;
            lVar7 = plVar4[7];
            if (lVar7 == 0) {
              if ((lVar6 != 0) && (*plVar1 != 0)) {
                plVar2 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                  plVar4[7] = 0;
                }
                else {
                  uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar9,plVar1);
                  plVar4[7] = lVar7;
                  if (lVar7 != 0) {
                    lVar6 = plVar4[6];
                    goto LAB_148e57149;
                  }
                }
              }
            }
            else {
LAB_148e57149:
              if (lVar6 == 0) {
                uVar9 = FUN_140e2014e();
                lVar6 = FUN_14477b664(uVar9);
                plVar4[6] = lVar6;
                lVar7 = plVar4[7];
                if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
                  plVar2 = *(longlong **)(lVar6 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
                    lVar7 = 0;
                  }
                  else {
                    uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar7 = FUN_144aff482(uVar9,plVar1);
                  }
                  plVar4[7] = lVar7;
                }
              }
              local_70 = 0;
              local_60 = 0;
              uStack_58 = 0;
              local_50 = 0;
              local_68 = lVar7;
              FUN_1489323cc(lVar5);
            }
            lVar6 = plVar4[9];
            if (lVar6 == 0) {
              uVar9 = FUN_140e2014e();
              lVar6 = FUN_14477b664(uVar9);
              plVar4[9] = lVar6;
            }
            plVar1 = plVar4 + 8;
            lVar7 = plVar4[10];
            if (lVar7 == 0) {
              if ((lVar6 == 0) || (*plVar1 == 0)) break;
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                plVar4[10] = 0;
                break;
              }
              uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar7 = FUN_144aff482(uVar9,plVar1);
              plVar4[10] = lVar7;
              if (lVar7 == 0) break;
              lVar6 = plVar4[9];
            }
            if (lVar6 == 0) {
              uVar9 = FUN_140e2014e();
              lVar6 = FUN_14477b664(uVar9);
              plVar4[9] = lVar6;
              lVar7 = plVar4[10];
              if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
                plVar2 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar9,plVar1);
                }
                plVar4[10] = lVar7;
              }
            }
            local_70 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            local_68 = lVar7;
            FUN_148932392(lVar5);
            break;
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 * 8 != lVar8);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e5720c FUN_148e5720c body=1339 status=ok
// SIG undefined FUN_148e5720c(void)

void FUN_148e5720c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar7 = (longlong *)FUN_141188014();
  if ((plVar7 != (longlong *)0x0) && (lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 != 0)) {
    local_e8 = 1;
    FUN_145766370(param_1,param_2,param_3);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_146213186(lVar8,&local_78);
    if ((longlong)(int)uStack_70 != 0) {
      plVar7 = local_78 + (int)uStack_70;
      iVar14 = 0;
      iVar15 = 0;
      plVar12 = local_78;
      do {
        plVar3 = (longlong *)*plVar12;
        if (plVar3 != (longlong *)0x0) {
          lVar9 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar10 = FUN_145c9f2cc();
          if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30)) {
            lVar9 = plVar3[6];
            if (lVar9 == 0) {
              uVar11 = FUN_140e2014e();
              lVar9 = FUN_14477b664(uVar11);
              plVar3[6] = lVar9;
            }
            plVar1 = plVar3 + 5;
            lVar10 = plVar3[7];
            if (lVar10 == 0) {
              if ((lVar9 != 0) && (*plVar1 != 0)) {
                plVar5 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar5 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
                  plVar3[7] = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                  lVar10 = FUN_144aff482(uVar11,plVar1);
                  plVar3[7] = lVar10;
                  if (lVar10 != 0) {
                    lVar9 = plVar3[6];
                    goto LAB_148e57353;
                  }
                }
              }
            }
            else {
LAB_148e57353:
              if (lVar9 == 0) {
                uVar11 = FUN_140e2014e();
                lVar9 = FUN_14477b664(uVar11);
                plVar3[6] = lVar9;
                lVar10 = plVar3[7];
                if (lVar10 == 0) {
                  if (lVar9 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = 0;
                    if (*plVar1 != 0) {
                      plVar5 = *(longlong **)(lVar9 + 0xb8);
                      if ((plVar5 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
                        lVar10 = 0;
                      }
                      else {
                        uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                        lVar10 = FUN_144aff482(uVar11,plVar1);
                      }
                      plVar3[7] = lVar10;
                    }
                  }
                }
              }
              lVar9 = FUN_141085a5e(lVar8,lVar10,0);
              if (lVar9 != 0) {
                if ((longlong)*(int *)(lVar9 + 0x150) != 0) {
                  lVar10 = *(longlong *)(lVar9 + 0x148);
                  lVar9 = (longlong)*(int *)(lVar9 + 0x150) * 0x88 + lVar10;
                  do {
                    if ((longlong)*(int *)(lVar10 + 0x68) != 0) {
                      lVar13 = 0;
                      do {
                        iVar15 = iVar15 + *(int *)(*(longlong *)
                                                    (*(longlong *)(lVar10 + 0x60) + lVar13) + 0x94);
                        lVar13 = lVar13 + 8;
                      } while ((longlong)*(int *)(lVar10 + 0x68) * 8 != lVar13);
                    }
                    lVar10 = lVar10 + 0x88;
                  } while (lVar10 != lVar9);
                }
                if (0 < (longlong)(int)plVar3[4]) {
                  lVar9 = 0;
                  do {
                    iVar14 = iVar14 + (uint)(*(int *)(plVar3[3] + lVar9 * 4) <= iVar15);
                    lVar9 = lVar9 + 1;
                  } while ((int)plVar3[4] != lVar9);
                }
              }
            }
            lVar9 = plVar3[9];
            if (lVar9 == 0) {
              uVar11 = FUN_140e2014e();
              lVar9 = FUN_14477b664(uVar11);
              plVar3[9] = lVar9;
            }
            plVar1 = plVar3 + 8;
            lVar10 = plVar3[10];
            if (lVar10 == 0) {
              if ((lVar9 != 0) && (*plVar1 != 0)) {
                plVar5 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar5 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
                  plVar3[10] = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                  lVar10 = FUN_144aff482(uVar11,plVar1);
                  plVar3[10] = lVar10;
                  if (lVar10 != 0) {
                    lVar9 = plVar3[9];
                    goto LAB_148e57416;
                  }
                }
              }
            }
            else {
LAB_148e57416:
              if (lVar9 == 0) {
                uVar11 = FUN_140e2014e();
                lVar9 = FUN_14477b664(uVar11);
                plVar3[9] = lVar9;
                lVar10 = plVar3[10];
                if (lVar10 == 0) {
                  if (lVar9 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = 0;
                    if (*plVar1 != 0) {
                      plVar5 = *(longlong **)(lVar9 + 0xb8);
                      if ((plVar5 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
                        lVar10 = 0;
                      }
                      else {
                        uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                        lVar10 = FUN_144aff482(uVar11,plVar1);
                      }
                      plVar3[10] = lVar10;
                    }
                  }
                }
              }
              lVar9 = FUN_141085a5e(lVar8,lVar10,0);
              if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x150) != 0)) {
                lVar10 = *(longlong *)(lVar9 + 0x148);
                local_c0 = (longlong)*(int *)(lVar9 + 0x150) * 0x88 + lVar10;
                local_d0 = lVar8;
                local_c8 = plVar7;
                do {
                  iVar2 = *(int *)(lVar10 + 0x68);
                  if ((longlong)iVar2 != 0) {
                    lVar8 = *(longlong *)(lVar10 + 0x60);
                    lVar13 = 0;
                    do {
                      lVar4 = *(longlong *)(lVar8 + lVar13);
                      if (iVar14 <= *(int *)(lVar4 + 0x9c)) {
                        local_84 = 0xffffffff;
                        local_80 = *(undefined8 *)(lVar4 + 0x48);
                        local_90 = 0xffffffff;
                        local_8c = *(undefined8 *)(lVar10 + 0x48);
                        local_a8 = 0;
                        uStack_a0 = 0;
                        local_b8 = 0;
                        uStack_b0 = 0;
                        local_e0 = 0;
                        local_e8 = 0;
                        local_98 = lVar9;
                        FUN_145941cc4(local_d0,&local_b8);
                      }
                      lVar13 = lVar13 + 8;
                    } while ((longlong)iVar2 * 8 != lVar13);
                  }
                  lVar10 = lVar10 + 0x88;
                  plVar7 = local_c8;
                  lVar8 = local_d0;
                } while (lVar10 != local_c0);
              }
            }
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar7);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e5775a FUN_148e5775a body=318 status=ok
// SIG undefined FUN_148e5775a(void)

void FUN_148e5775a(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  char local_50;
  undefined7 uStack_4f;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_1403ae288(param_2);
  if (cVar4 != '\0') {
    FUN_1449027d0(param_1,&local_50);
    lVar3 = *(longlong *)(CONCAT71(uStack_4f,local_50) + 0x130);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x60));
    *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 1;
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
    cVar4 = FUN_140280fd6(param_2,param_1 + 0x48);
    if (cVar4 != '\0') {
      if (*(int *)(lVar3 + 0x14) == 0 || param_4 != *(float *)(lVar3 + 0x10)) {
        *(float *)(lVar3 + 0x10) = param_4;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      }
      local_50 = '\x04';
      uVar5 = FUN_140280ec4(param_2);
      cVar4 = FUN_140280f4a(uVar5,&local_50);
      if (cVar4 != '\0') {
        if (*(int *)(lVar3 + 0x2c) == 0 || local_50 != *(char *)(lVar3 + 0x28)) {
          *(char *)(lVar3 + 0x28) = local_50;
          *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x60));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5789a FUN_148e5789a body=118 status=ok
// SIG undefined FUN_148e5789a(void)

undefined8 FUN_148e5789a(undefined8 param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*param_2 == 0) {
LAB_148e5790c:
    uVar2 = 0;
  }
  else {
    if ((longlong)(int)param_2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar3) == 0) goto LAB_148e5790c;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar3);
    }
    plVar1 = (longlong *)FUN_148e57e18();
    lVar3 = *plVar1;
    SRWLock = (PSRWLOCK)(lVar3 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    uVar2 = FUN_148e1aa3e(lVar3 + 0x50,param_2);
    ReleaseSRWLockShared(SRWLock);
  }
  return uVar2;
}



// FUNCTION 148e57910 FUN_148e57910 body=107 status=ok
// SIG undefined FUN_148e57910(void)

void FUN_148e57910(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((int)param_2 < (int)param_1[1]) {
    _Dst = (void *)((ulonglong)param_2 * 0xe8 + *param_1);
    FUN_145878e5e(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0xe8),(longlong)iVar2 * 0xe8);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_148e60d94(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e5797c FUN_148e5797c body=74 status=ok
// SIG undefined FUN_148e5797c(void)

void FUN_148e5797c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145917388(param_1,iVar1);
  }
  FUN_1413505e4((longlong)iVar1 * 0x430 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e579c6 FUN_148e579c6 body=114 status=ok
// SIG undefined FUN_148e579c6(void)

longlong FUN_148e579c6(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e57a3a FUN_148e57a3a body=110 status=ok
// SIG undefined FUN_148e57a3a(void)

undefined4 FUN_148e57a3a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar2 = (*pcVar1)(uVar3,param_1);
    if ((char)uVar2 != '\0') {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  }
  return uVar2;
}



// FUNCTION 148e57aa8 FUN_148e57aa8 body=671 status=ok
// SIG undefined FUN_148e57aa8(void)

void FUN_148e57aa8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  code *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)FUN_1400d6e82();
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
  lVar5 = lVar1 + 0x28;
  local_50 = FUN_14105c38a(param_2);
  local_78 = FUN_1442a870e;
  local_68 = 0;
  local_58 = &PTR_LAB_14b9b7bb0;
  lVar4 = FUN_148e613ba(lVar5);
  if ((lVar4 == 0) && ((DAT_14cbd8648 & 1) == 0)) {
    iVar2 = *(int *)(lVar1 + 0x20);
    *(uint *)(lVar1 + 0x20) = iVar2 + 1U;
    if (*(uint *)(lVar1 + 0x24) < iVar2 + 1U) {
      FUN_14655c5d6((longlong *)(lVar1 + 0x18),iVar2);
    }
    FUN_1459c8e8c((longlong)iVar2 * 0x50 + *(longlong *)(lVar1 + 0x18),param_2);
    lVar5 = FUN_14105c38a(param_2);
    if (lVar5 != 0) {
      FUN_1400021e4(lVar5 + 0x88);
      uVar6 = local_80 - 1;
      if (local_80 == 0) {
        uVar6 = 0;
      }
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          *(ushort *)(local_88 + uVar7 * 2) =
               (ushort)(*(ushort *)(local_88 + uVar7 * 2) - 0x41 < 0x1a) * 0x20 +
               *(ushort *)(local_88 + uVar7 * 2);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      local_78 = local_88;
      local_70 = local_80;
      local_6c = local_7c;
      iVar2 = *(int *)(lVar1 + 0x70);
      plVar3 = (longlong *)(lVar1 + 0x68);
      if (iVar2 < 2) {
        FUN_140775496(plVar3,&local_78);
        local_88 = local_78;
      }
      else if (iVar2 == local_80) {
        lVar5 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*plVar3 + lVar5);
          uVar7 = (ulonglong)uVar8;
          uVar9 = *(ushort *)(local_88 + lVar5);
          if (uVar8 != uVar9) break;
          if (uVar8 == 0) goto LAB_148e57c0a;
LAB_148e57cf0:
          lVar5 = lVar5 + 2;
        }
        if ((uVar9 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_148e57cf0;
        }
        if (uVar8 != uVar9) goto LAB_148e57d2c;
      }
      else if (iVar2 + local_80 != 1) {
LAB_148e57d2c:
        FUN_148e57db2(plVar3);
      }
LAB_148e57c0a:
      if (local_88 != (code *)0x0) {
        FUN_1400020a8(local_88);
      }
    }
  }
  else {
    local_50 = FUN_14105c38a(param_2);
    local_78 = FUN_1442a870e;
    local_68 = 0;
    local_58 = &PTR_LAB_14b9b7bb0;
    iVar2 = FUN_148e6143a(lVar5);
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 0x30))) {
      FUN_148e57d48(lVar5,iVar2);
    }
    local_50 = FUN_14105c38a(param_2);
    local_78 = (code *)&LAB_1442a86b8;
    local_68 = 0;
    local_58 = &PTR_LAB_14b9b7b90;
    iVar2 = FUN_148e60cf4(lVar1);
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 8))) {
      FUN_148e57910(lVar1,iVar2);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e57d48 FUN_148e57d48 body=106 status=ok
// SIG undefined FUN_148e57d48(void)

void FUN_148e57d48(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((int)param_2 < (int)param_1[1]) {
    _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
    FUN_141165946(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x50),(longlong)iVar2 * 0x50);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_148949e88(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e57db2 FUN_148e57db2 body=100 status=ok
// SIG undefined FUN_148e57db2(void)

undefined8 FUN_148e57db2(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"generic");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e57e18 FUN_148e57e18 body=114 status=ok
// SIG undefined FUN_148e57e18(void)

longlong FUN_148e57e18(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e57e8c FUN_148e57e8c body=42 status=ok
// SIG undefined FUN_148e57e8c(void)

void FUN_148e57e8c(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if (cVar1 == '\0') {
    return;
  }
  FUN_148e58e48(param_1);
  return;
}



// FUNCTION 148e57eb6 FUN_148e57eb6 body=26 status=ok
// SIG undefined FUN_148e57eb6(void)

void FUN_148e57eb6(undefined8 param_1)

{
  FUN_14128c22a();
  FUN_1458ff706(param_1);
  return;
}



// FUNCTION 148e57ee2 FUN_148e57ee2 body=48 status=ok
// SIG undefined FUN_148e57ee2(void)

void FUN_148e57ee2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x30);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(plVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148e57f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2);
    return;
  }
  return;
}



// FUNCTION 148e57f12 FUN_148e57f12 body=48 status=ok
// SIG undefined FUN_148e57f12(void)

void FUN_148e57f12(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x30);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(plVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148e57f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2);
    return;
  }
  return;
}



// FUNCTION 148e57f48 FUN_148e57f48 body=933 status=ok
// SIG undefined FUN_148e57f48(void)

void FUN_148e57f48(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    lVar2 = FUN_140059518(param_1 + 0x44);
    if (lVar2 != 0) {
      lVar2 = FUN_145da44aa(lVar2);
      if (lVar2 != 0) {
        local_68 = 0;
        uStack_60 = 0;
        lVar3 = FUN_145da4f3c();
        local_58 = L"Dialog_Yes";
        local_50 = 10;
        FUN_1446e940c(&local_78,&local_58);
        local_58 = L"UOakUIDataCollector_StartMenu";
        local_50 = 0x1d;
        FUN_1446e940c(local_88,&local_58);
        FUN_140208bae(&local_58,local_88,&local_78,&DAT_149e06384);
        FUN_140008f88(lVar3,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        *(undefined8 *)(lVar3 + 0x10) = DAT_14cbd8768;
        lVar3 = FUN_145da4f3c(&local_68);
        local_58 = L"Dialog_No";
        local_50 = 9;
        FUN_1446e940c(&local_78,&local_58);
        local_58 = L"UOakUIDataCollector_StartMenu";
        local_50 = 0x1d;
        FUN_1446e940c(local_88,&local_58);
        FUN_140208bae(&local_58,local_88,&local_78,&DAT_149e06338);
        FUN_140008f88(lVar3,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        *(undefined8 *)(lVar3 + 0x10) = DAT_14cbd8770;
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,3,0x10);
        puVar1 = local_78;
        local_70 = 3;
        *local_78 = &PTR_LAB_14b9b8770;
        *(undefined4 *)(local_78 + 1) = *(undefined4 *)(param_2 + 8);
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_78[2] = lVar4;
        *local_78 = &PTR_FUN_14b9b8700;
        local_78[3] = 0;
        FUN_14485c47a(local_78 + 3,param_1);
        puVar1[4] = &LAB_148e58dc4;
        *(undefined4 *)(puVar1 + 5) = 0;
        local_58 = L"ConfirmSplitscreenLeaveHeader";
        local_50 = 0x1d;
        FUN_1446e940c(local_8c,&local_58);
        local_58 = L"UOakUIDataCollector_StartMenu";
        local_50 = 0x1d;
        FUN_1446e940c(local_90,&local_58);
        FUN_140208bae(local_88,local_90,local_8c,L"Quit Game");
        local_58 = L"ConfirmSplitscreenLeaveBody";
        local_50 = 0x1b;
        FUN_1446e940c(local_8c,&local_58);
        local_58 = L"UOakUIDataCollector_StartMenu";
        local_50 = 0x1d;
        FUN_1446e940c(local_90,&local_58);
        FUN_140208bae(&local_58,local_90,local_8c,
                      L"Are you sure you want to leave the current game? You will be removed from the current game. All other players will remain."
                     );
        local_b0 = 0;
        local_a0 = 1;
        local_a8 = 0;
        local_b8 = &local_78;
        FUN_1459dd948(lVar2,local_88,&local_58,&local_68);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        if (local_88[0] != (longlong *)0x0) {
          (**(code **)(*local_88[0] + 0x10))();
        }
        FUN_1449db362(&local_78);
        FUN_140e0067b(local_68,uStack_60 & 0xffffffff);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e582ee FUN_148e582ee body=125 status=ok
// SIG undefined FUN_148e582ee(void)

void FUN_148e582ee(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar1 = FUN_145da44aa(lVar1);
    if (lVar1 != 0) {
      local_20 = 0;
      local_18 = 0;
      FUN_144268f62(lVar1,&DAT_14cbd8710,&local_20,0);
      FUN_1449db362(&local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e58374 FUN_148e58374 body=451 status=ok
// SIG undefined FUN_148e58374(void)

void FUN_148e58374(longlong *param_1,longlong param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x180))();
    iVar3 = FUN_140d182cc(uVar4);
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    cVar8 = '\0';
    if (lVar5 != 0) {
      FUN_1402815f4(param_1,&local_50);
      lVar5 = *(longlong *)(local_50 + 0x3e0);
      SRWLock = (PSRWLOCK)(lVar5 + 0xc0);
      AcquireSRWLockShared(SRWLock);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      cVar8 = *(char *)(lVar5 + 0x28);
      ReleaseSRWLockShared(SRWLock);
    }
    FUN_148e59124(param_1,*(undefined1 *)(param_2 + 9));
    if (iVar3 != *(int *)(param_2 + 0xc)) {
      plVar6 = (longlong *)FUN_1408bb964((longlong)param_1 + 0x44);
      if (plVar6 != (longlong *)0x0) {
        lVar5 = FUN_144a79464();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          if (*(code **)(*plVar6 + 0x498) == (code *)&LAB_14015c36e) {
            cVar2 = (char)plVar6[0x42];
          }
          else {
            cVar2 = (**(code **)(*plVar6 + 0x498))(plVar6);
          }
          if (cVar2 == '\b') {
            FUN_148e59190();
          }
          else {
            FUN_1442a0bde(param_1,*(undefined4 *)(param_2 + 0xc));
          }
        }
      }
    }
    if (cVar8 != *(char *)(param_2 + 8)) {
      FUN_148e592c2(param_1);
    }
    FUN_148e59344(param_1,param_2 + 0x10);
    lVar5 = FUN_1400f3ad8((longlong)param_1 + 0x44);
    if (lVar5 != 0) {
      lVar7 = FUN_144a5dd5e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5854e FUN_148e5854e body=216 status=ok
// SIG undefined FUN_148e5854e(void)

void FUN_148e5854e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x180))();
    if (lVar3 == 0) {
      cVar4 = '\0';
    }
    else {
      FUN_1402815f4(param_1,&local_48);
      lVar3 = *(longlong *)(local_48 + 0x3e0);
      SRWLock = (PSRWLOCK)(lVar3 + 0xc0);
      AcquireSRWLockShared(SRWLock);
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
      cVar4 = *(char *)(lVar3 + 0x28);
      ReleaseSRWLockShared(SRWLock);
    }
    if (cVar4 != *(char *)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5864c FUN_148e5864c body=149 status=ok
// SIG undefined FUN_148e5864c(void)

void FUN_148e5864c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_20 = *(undefined8 *)(&DAT_14cbd9390 + (ulonglong)*(byte *)(param_2 + 8) * 8);
        FUN_1403ca8ec(lVar1 + 0xd98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e586e2 FUN_148e586e2 body=631 status=ok
// SIG undefined FUN_148e586e2(void)

void FUN_148e586e2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_148e58735;
  lVar4 = FUN_1400f3ad8((longlong)param_1 + 0x44);
  if (lVar4 == 0) goto LAB_148e58735;
  lVar5 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e58735;
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 == 0) goto LAB_148e58735;
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar5 = *(longlong *)(lVar5 + 0x1f0);
  if (lVar5 == 0) goto LAB_148e58735;
  FUN_1403ca8ec(lVar4 + 0xd98,&DAT_14cbd93a0);
  plVar6 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9b87e0;
  FUN_148aac216(plVar6 + 2,lVar5);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x38] = 0x10;
    plVar8 = (longlong *)param_1[0x39];
    if (plVar8 != (longlong *)0x0) {
      param_1[0x39] = 0;
LAB_148e58807:
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
      if (plVar6 != (longlong *)0x0) goto LAB_148e58829;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x38] = (longlong)(plVar6 + 2);
    plVar8 = (longlong *)param_1[0x39];
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      param_1[0x39] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_148e58807;
    }
LAB_148e58829:
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  lVar4 = param_1[0x38];
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_40[2] = lVar7;
  *local_40 = &PTR_FUN_14b9b8800;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1);
  puVar3[4] = param_1;
  FUN_1448b6402(lVar4 + 8,local_48,&local_40);
  FUN_1449db362(&local_40);
LAB_148e58735:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5895a FUN_148e5895a body=450 status=ok
// SIG undefined FUN_148e5895a(void)

void FUN_148e5895a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1c8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
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
  puVar6 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar8 = (undefined8 *)puVar6[1];
  if (puVar8 != (undefined8 *)0x0) {
    iVar4 = *(int *)(puVar6 + 2) + -1;
    goto LAB_148e589cf;
  }
  puVar8 = (undefined8 *)*puVar6;
  if (puVar8 == (undefined8 *)0x0) {
    uVar5 = FUN_14470efbc(&DAT_14c896180);
    if (uVar5 == 0) {
      puVar6[1] = 0;
LAB_148e58af0:
      puVar8 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar6[1] = puVar8;
      iVar4 = 0xff;
      puVar9 = puVar8;
      do {
        puVar7 = puVar9 + 0x20;
        *puVar9 = puVar7;
        iVar4 = iVar4 + -1;
        puVar9 = puVar7;
      } while (iVar4 != 0);
      goto LAB_148e58a8c;
    }
    puVar8 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar5 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar5);
    puVar6[1] = puVar8;
    if (puVar8 == (undefined8 *)0x0) goto LAB_148e58af0;
  }
  else {
    puVar6[1] = puVar8;
    puVar7 = puVar6;
LAB_148e58a8c:
    *puVar7 = 0;
  }
  *(undefined4 *)(puVar6 + 2) = 0x100;
  iVar4 = 0xff;
LAB_148e589cf:
  puVar6[1] = *puVar8;
  *(int *)(puVar6 + 2) = iVar4;
  FUN_144a23e74(puVar8,2,1);
  *puVar8 = &PTR_FUN_14b9b8878;
  local_28 = 0;
  FUN_144a24082(puVar8,
                L".\\../../OakGame/Source/OakGame/UI/Collectors/OakUIDataCollector_StartMenu.cpp(1057)"
                ,1,0);
  *puVar8 = &PTR_FUN_14b9b8868;
  FUN_144a23f14((ulonglong)puVar8[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar8 + 0x1c));
  local_19 = 1;
  FUN_1447439e4(puVar8);
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar8 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e58b42 FUN_148e58b42 body=64 status=ok
// SIG undefined FUN_148e58b42(void)

void FUN_148e58b42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    if ((ulonglong)*(uint *)(lVar1 + 0x38) < 3) {
      FUN_148aaeb6e(lVar1,*(undefined4 *)(&DAT_14b9ba8bc + (ulonglong)*(uint *)(lVar1 + 0x38) * 4));
    }
    FUN_1442a0dfc(param_1);
    return;
  }
  return;
}



// FUNCTION 148e58b82 FUN_148e58b82 body=53 status=ok
// SIG undefined FUN_148e58b82(void)

void FUN_148e58b82(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_148aaeb6e(*(longlong *)(param_1 + 0x1c0),*(undefined4 *)(param_2 + 8));
    }
    FUN_1442a0dfc(param_1);
    return;
  }
  return;
}



// FUNCTION 148e58bb8 FUN_148e58bb8 body=293 status=ok
// SIG undefined FUN_148e58bb8(void)

void FUN_148e58bb8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_148e58d5c(param_1);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
      uVar4 = FUN_1447210f0(lVar2);
      lVar2 = FUN_14583d396(uVar4);
      if (lVar2 != 0) {
        FUN_144a5dc74(local_58);
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        FUN_1446ddda2(&local_48,"MatchmakingErrorText",0);
        FUN_140ac6c96(&local_48,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_1441bbed8(lVar2,local_58,&DAT_14c9485f0);
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e58cf0 FUN_148e58cf0 body=107 status=ok
// SIG undefined FUN_148e58cf0(void)

void FUN_148e58cf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_1408bb964(param_1 + 0x44);
    if (lVar2 != 0) {
      lVar3 = FUN_1403ca142();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) && (0 < *(int *)(lVar2 + 0x40)))
      {
        FUN_14413dbee(lVar2,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e58d5c FUN_148e58d5c body=104 status=ok
// SIG undefined FUN_148e58d5c(void)

bool FUN_148e58d5c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = FUN_1447210f0(lVar1), lVar1 != 0)) {
      lVar1 = FUN_141060536(lVar1);
      if (lVar1 != 0) {
        return *(int *)(lVar1 + 0xd8) == 0;
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 148e58dda FUN_148e58dda body=108 status=ok
// SIG undefined FUN_148e58dda(void)

void FUN_148e58dda(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14116599c();
    if (lVar1 != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_143f299f4(lVar1,param_2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e58e48 FUN_148e58e48 body=710 status=ok
// SIG undefined FUN_148e58e48(void)

void FUN_148e58e48(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  PVOID pvVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_88 [40];
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong *local_58;
  PSRWLOCK local_50;
  int local_48;
  undefined4 uStack_44;
  int *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((char)param_1[0x18] != '\0') || (lVar9 = FUN_1400f3ad8((longlong)param_1 + 0x44), lVar9 == 0)
     ) {
LAB_148e58e6b:
    if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar10 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
      != lVar10 + 0x30)) goto LAB_148e58e6b;
  if (*(longlong *)(lVar9 + 0x398) != 0) {
    lVar10 = FUN_144a7b4ca();
    if ((((*(longlong *)(lVar9 + 0x398) != 0) && (lVar10 != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x398) + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
         lVar10 + 0x30)))) {
      lVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar10 == 0) goto LAB_148e58e6b;
      FUN_1402815f4(param_1,&local_60);
      piVar3 = *(int **)(CONCAT71(uStack_5f,local_60) + 0x3e0);
      local_50 = (PSRWLOCK)(piVar3 + 0x30);
      local_48 = 1;
      AcquireSRWLockExclusive(local_50);
      piVar3[0x2e] = piVar3[0x2e] + 1;
      local_38 = 1;
      local_40 = piVar3;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_58 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar3 = (int *)((longlong)local_58 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      iVar8 = FUN_148d1c5e7(lVar10);
      piVar3 = local_40;
      if (iVar8 == *local_40) {
        iVar13 = 1;
        if (local_40[1] == 0) goto LAB_148e58fc8;
      }
      else {
        iVar13 = local_40[1] + 1;
LAB_148e58fc8:
        *local_40 = iVar8;
        local_40[1] = iVar13;
      }
      if (*(longlong *)(lVar10 + 0x1f0) == 0) {
LAB_148e59021:
        iVar8 = FUN_140d182cc(lVar10);
      }
      else {
        lVar11 = FUN_1403ca142();
        lVar2 = *(longlong *)(lVar10 + 0x1f0);
        if (((lVar2 == 0) || (lVar11 == 0)) ||
           ((lVar4 = *(longlong *)(lVar2 + 0x10), lVar4 == 0 ||
            (((*(int *)(lVar4 + 0x38) < *(int *)(lVar11 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
               lVar11 + 0x30)) || (*(char *)(lVar2 + 0x544) != '\x01')))))) goto LAB_148e59021;
        iVar8 = *(int *)(lVar2 + 0x540);
      }
      if (iVar8 == piVar3[2]) {
        iVar13 = 1;
        if (piVar3[3] == 0) goto LAB_148e59042;
      }
      else {
        iVar13 = piVar3[3] + 1;
LAB_148e59042:
        piVar3[2] = iVar8;
        piVar3[3] = iVar13;
      }
      local_60 = (undefined1)iVar8;
      uVar12 = FUN_1405c673d();
      FUN_1458e1fcc(param_1,&local_50,uVar12,&local_60);
      if (local_48 == 0) {
        ReleaseSRWLockShared(local_50);
      }
      else {
        ReleaseSRWLockExclusive(local_50);
      }
    }
  }
  FUN_1402815f4(param_1,&local_50);
  pvVar5 = local_50[0x70].Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)((longlong)pvVar5 + 0x6e0));
  *(int *)((longlong)pvVar5 + 0x6d8) = *(int *)((longlong)pvVar5 + 0x6d8) + 1;
  plVar6 = (longlong *)CONCAT44(uStack_44,local_48);
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
  cVar7 = FUN_1458ff97e(lVar9);
  if (*(char *)((longlong)pvVar5 + 0x10) == cVar7) {
    if (*(int *)((longlong)pvVar5 + 0x14) != 0) goto LAB_148e59102;
    iVar8 = 1;
  }
  else {
    iVar8 = *(int *)((longlong)pvVar5 + 0x14) + 1;
  }
  *(char *)((longlong)pvVar5 + 0x10) = cVar7;
  *(int *)((longlong)pvVar5 + 0x14) = iVar8;
LAB_148e59102:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 148e59124 FUN_148e59124 body=107 status=ok
// SIG undefined FUN_148e59124(void)

void FUN_148e59124(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1405c673d();
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_1402a1246(lVar1);
      if (lVar1 != 0) {
        FUN_145be8d4c(lVar1,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e59190 FUN_148e59190 body=305 status=ok
// SIG undefined FUN_148e59190(void)

void FUN_148e59190(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140059518(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar4 = FUN_145da44aa(lVar3);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x1e8) = param_2;
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar2 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14b9b8770;
      *(undefined4 *)(local_40 + 1) = uVar1;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_40[2] = lVar5;
      *local_40 = &PTR_FUN_14b9b8700;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      puVar2[4] = FUN_148e59a04;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_144268f62(lVar4,&DAT_14cbd8718,&local_40,0);
      FUN_1449db362(&local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e592c2 FUN_148e592c2 body=130 status=ok
// SIG undefined FUN_148e592c2(void)

void FUN_148e592c2(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140059518(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_1408bb964(param_1 + 0x44);
    if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x48), plVar1 != (longlong *)0x0)) {
      lVar3 = FUN_140b6d0be();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148e59341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x370))(plVar1,*(undefined4 *)(lVar2 + 0xe0),param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e59344 FUN_148e59344 body=109 status=ok
// SIG undefined FUN_148e59344(void)

void FUN_148e59344(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14cbd8780 == lVar1) {
    FUN_148e59476(param_1,&DAT_14cb977f8);
    return;
  }
  if (DAT_14cbd87d8 == lVar1) {
    FUN_148e59476(param_1,&DAT_14cb97820);
    return;
  }
  if (DAT_14cbd8808 == lVar1) {
    FUN_148e59476(param_1,&DAT_14cb97828);
    return;
  }
  if (DAT_14cbd8838 != lVar1) {
    if (DAT_14cbd8868 != lVar1) {
      return;
    }
    FUN_148e59476(param_1,&DAT_14cb97830);
    return;
  }
  FUN_148e59476(param_1,&DAT_14cb97818);
  return;
}



// FUNCTION 148e593b2 FUN_148e593b2 body=195 status=ok
// SIG undefined FUN_148e593b2(void)

void FUN_148e593b2(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1400f3ad8((longlong)param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_1402a1246(lVar2);
      if (lVar2 != 0) {
        *(char *)(lVar2 + 0xdc8) = (char)param_2;
      }
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (((lVar2 != 0) &&
        (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_144148ab4(lVar2,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 148e59476 FUN_148e59476 body=180 status=ok
// SIG undefined FUN_148e59476(void)

void FUN_148e59476(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_140059518(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar3 = FUN_1408bb964(param_1 + 0x44);
    if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x48), plVar1 != (longlong *)0x0)) {
      lVar3 = FUN_140b6d0be();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        (**(code **)(*plVar1 + 0x308))(plVar1,local_28);
        cVar2 = FUN_1457778e0(local_28,param_2);
        if (cVar2 != '\0') {
          FUN_148d965fc(plVar1,param_2,1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5952c FUN_148e5952c body=1238 status=ok
// SIG undefined FUN_148e5952c(void)

void FUN_148e5952c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar7 = (longlong *)FUN_1408bb964(param_1 + 0x44);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_144a79464();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
         lVar8 + 0x30)) && (bVar4 = (**(code **)(*plVar7 + 0x498))(plVar7), bVar4 < 5)) {
      local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffff00000000);
      pcVar3 = (code *)*param_4;
      plVar7 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_4[2];
      }
      uVar9 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar9,&local_68);
      goto LAB_148e59920;
    }
  }
  lVar8 = FUN_1408bb964(param_1 + 0x44);
  if (*(longlong *)(lVar8 + 0x30) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0x30) + 0x360);
  }
  lVar8 = FUN_14583d396(uVar9);
  if (lVar8 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbd88e8) && (FUN_144b3d300(&DAT_14cbd88e8), DAT_14cbd88e8 == -1)) {
      FUN_140056680(&DAT_14cbd88d8,L"Version");
      atexit((_func_5014 *)&LAB_1442a11b3);
      _Init_thread_footer(&DAT_14cbd88e8);
    }
    plVar7 = (longlong *)(param_2 + 0xc0);
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    puVar11 = DAT_14cbd88d8;
    if (DAT_14cbd88e0 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    iVar6 = DAT_14cbd88e0 + -1;
    if (DAT_14cbd88e0 == 0) {
      iVar6 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar6,puVar11);
    iVar6 = FUN_1457511aa(plVar7,uVar5,&DAT_14cbd88d8);
    if (iVar6 != -1) {
      puVar11 = DAT_14cbd88d8;
      if (DAT_14cbd88e0 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      uVar10 = (ulonglong)(DAT_14cbd88e0 - 1);
      if (DAT_14cbd88e0 == 0) {
        uVar10 = 0;
      }
      uVar5 = FUN_144a49b4a(uVar10,puVar11);
      iVar6 = FUN_1457511aa(plVar7,uVar5,&DAT_14cbd88d8);
      uVar10 = 0;
      if (iVar6 != -1) {
        uVar10 = (longlong)iVar6 * 0x28 + *plVar7;
      }
      FUN_1449b8608(&local_68,uVar10 + 0x10,&DAT_149e001d8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = local_68;
      uStack_a0 = CONCAT44(uStack_5c,uStack_60);
    }
    FUN_140009b9a(local_c8,&local_a8);
    local_68 = L"NewPatchAvailable";
    uStack_60 = 0x11;
    FUN_1446e940c(local_ec,&local_68);
    local_68 = L"OakUIDataCollector_StartMnenu";
    uStack_60 = 0x1d;
    FUN_1446e940c(local_f0,&local_68);
    FUN_140208bae(local_e8,local_f0,local_ec,L"New {0}patch available!");
    FUN_14023409e(&local_d8,local_e8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_c8);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_d8;
    local_90 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_d0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    FUN_148d91738(lVar8,local_b8);
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1402815f4(param_1,&local_68);
  lVar8 = *(longlong *)(local_68 + 0x1c0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x6e0));
  *(int *)(lVar8 + 0x6d8) = *(int *)(lVar8 + 0x6d8) + 1;
  plVar7 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (*(char *)(lVar8 + 0x70) == '\0') {
    iVar6 = *(int *)(lVar8 + 0x74) + 1;
LAB_148e598df:
    *(undefined1 *)(lVar8 + 0x70) = 1;
    *(int *)(lVar8 + 0x74) = iVar6;
  }
  else if (*(int *)(lVar8 + 0x74) == 0) {
    iVar6 = 1;
    goto LAB_148e598df;
  }
  local_68 = (wchar_t *)CONCAT44(local_68._4_4_,1);
  pcVar3 = (code *)*param_4;
  plVar7 = param_4 + 4;
  if ((longlong *)param_4[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_4[2];
  }
  uVar9 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar9,&local_68);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x6e0));
LAB_148e59920:
  if (*param_4 != 0) {
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e59a04 FUN_148e59a04 body=58 status=ok
// SIG undefined FUN_148e59a04(void)

void FUN_148e59a04(longlong param_1,longlong *param_2)

{
  if ((*(int *)(param_1 + 0x1e8) != -1) && (*param_2 == DAT_14cbd8778)) {
    FUN_1442a0bde(param_1);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  return;
}



// FUNCTION 148e59a40 FUN_148e59a40 body=169 status=ok
// SIG undefined FUN_148e59a40(void)

undefined8 FUN_148e59a40(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_148e6413c(param_1,&local_38);
  if ((local_2c != -1) && (local_38 != (void *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e59aea FUN_148e59aea body=304 status=ok
// SIG undefined FUN_148e59aea(void)

void FUN_148e59aea(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a7e010(param_2);
  FUN_144a787a6(param_3,param_1);
  local_68 = 0;
  local_60 = 0xffffffff;
  iVar1 = FUN_1447ee042(param_1,&DAT_149e0633e,1,1);
  local_68 = 0;
  local_60 = iVar1 + 1;
  iVar2 = FUN_1447ee042(param_1,&DAT_149e06342,1,1);
  iVar3 = iVar2 - iVar1;
  if (((iVar3 != 0 && iVar1 <= iVar2) && (iVar1 != -1)) && (iVar2 != -1)) {
    FUN_144a63a7c(param_1,&local_50,iVar1 + 1,iVar3 + -1);
    if (&local_50 == param_2) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 1) = local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
    }
    FUN_14496493a(param_3,iVar1,iVar3 + 1,1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e59c1b FUN_148e59c1b body=96 status=ok
// SIG undefined FUN_148e59c1b(void)

longlong FUN_148e59c1b(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    do {
      cVar1 = FUN_144729dda(lVar5);
      if (cVar1 != '\0') {
        uVar2 = FUN_14479d2ce(lVar5);
        cVar1 = FUN_140432338(uVar2);
        if ((cVar1 != '\0') && (lVar3 = FUN_14479d2ce(lVar5), *(int *)(lVar3 + 0x394) == param_2)) {
          return lVar5;
        }
      }
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 148e59c7b FUN_148e59c7b body=800 status=ok
// SIG undefined FUN_148e59c7b(void)

void FUN_148e59c7b(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  lVar6 = FUN_1401b2ade();
  if (lVar6 == 0) {
LAB_148e59cda:
    FUN_141179052(param_1,param_2,param_3,&local_48);
  }
  else {
    lVar7 = FUN_144a5dd5e();
    if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) || (lVar6 = FUN_144a7ba4c(lVar6), lVar6 == 0)) goto LAB_148e59cda;
    FUN_140b66fcc(lVar6,param_2,param_3,&local_48);
  }
  lVar6 = FUN_140082f10();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
      != lVar6 + 0x30)) goto LAB_148e59d0d;
  lVar7 = FUN_1403b0700(param_1);
  lVar6 = *(longlong *)(lVar7 + 0x38);
  local_60 = lVar6;
  uVar8 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x40));
  local_58 = FUN_14477b664(uVar8);
  lVar7 = *(longlong *)(lVar7 + 0x48);
  local_50 = lVar7;
  if (local_58 == 0) {
    uVar8 = FUN_140355b7c();
    local_58 = FUN_14477b664(uVar8);
  }
  if (lVar7 == 0) {
    local_50 = 0;
    if (((lVar6 == 0) || (local_58 == 0)) ||
       ((plVar4 = *(longlong **)(local_58 + 0xb8), plVar4 == (longlong *)0x0 ||
        (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')))) goto LAB_148e59d0d;
    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar7 = FUN_144aff482(uVar8,&local_60);
    local_50 = lVar7;
    if (lVar7 == 0) goto LAB_148e59d0d;
  }
  if (local_58 == 0) {
    uVar8 = FUN_140355b7c();
    local_58 = FUN_14477b664(uVar8);
    lVar7 = local_50;
    if (((local_50 == 0) && (lVar7 = 0, local_58 != 0)) && (local_60 != 0)) {
      plVar4 = *(longlong **)(local_58 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
        lVar7 = 0;
        local_50 = lVar7;
      }
      else {
        uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar8,&local_60);
        local_50 = lVar7;
      }
    }
  }
  puVar10 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
    puVar10 = *(undefined4 **)(lVar7 + 8);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_1400b2348(puVar10,&local_78,1);
  if (&local_78 == param_4) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_4 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_70._4_4_;
  }
  if (1 < (int)param_4[1]) {
    FUN_1407753c8(param_4);
    uVar9 = (int)param_4[1] - 1;
    if ((int)param_4[1] == 0) {
      uVar9 = 0;
    }
    if (0 < (int)uVar9) {
      lVar6 = *param_4;
      uVar11 = 0;
      do {
        uVar3 = *(ushort *)(lVar6 + uVar11 * 2);
        *(ushort *)(lVar6 + uVar11 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
    }
  }
LAB_148e59d0d:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e59f9c FUN_148e59f9c body=837 status=ok
// SIG undefined FUN_148e59f9c(void)

void FUN_148e59f9c(longlong param_1,undefined8 param_2,int param_3,char param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_98 [43];
  char local_6d;
  int local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1 + 0x70;
  FUN_140bad112(lVar4,&DAT_149dfb77a);
  lVar10 = param_1 + 0x88;
  FUN_140bad112(lVar10,&DAT_149dfb77a);
  local_58 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 2;
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0xa8) << 6;
    lVar12 = *(longlong *)(param_1 + 0xa0) + 0x20;
    bVar15 = false;
    local_6d = param_4;
    local_6c = param_3;
    do {
      lVar3 = FUN_148e59c1b(param_2,*(undefined4 *)(lVar12 + -0x20));
      if ((lVar3 == 0) || (lVar3 = FUN_14479d2ce(lVar3), lVar3 == 0)) {
        uVar5 = uStack_50;
        lVar3 = (longlong)(int)uStack_50;
        uVar2 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uStack_50._4_4_ < uVar2) {
          FUN_1446f48e2(&local_58,uVar5 & 0xffffffff);
        }
        *(undefined4 *)(local_58 + lVar3 * 4) = *(undefined4 *)(lVar12 + -0x20);
      }
      else {
        local_60 = lVar12 + 0x10;
        local_68 = lVar12 + -0x18;
        FUN_148e59c7b(lVar3);
        if (param_5 != '\0') {
          *(bool *)(lVar12 + -8) = *(char *)(lVar3 + 0x740) == '\x01';
          *(undefined1 *)(lVar12 + -7) = *(undefined1 *)(lVar3 + 0x1350);
        }
        if (*(int *)(lVar12 + 8) < 2) {
          FUN_14020fad6(lVar12,L"char_placeholder");
        }
        if (local_6d == '\0') {
          if (*(int *)(lVar12 + -0x20) == local_6c) {
            FUN_140775496(lVar4,local_68);
            FUN_140775496(lVar10,local_60);
          }
        }
        else {
          bVar16 = !bVar15;
          bVar15 = true;
          if (bVar16) {
            if ((*(char *)(lVar12 + -7) == '\0') && (*(char *)(lVar12 + -8) != '\x01')) {
              bVar15 = false;
            }
            else {
              FUN_140775496(lVar4,local_68);
              FUN_140775496(lVar10,local_60);
            }
          }
        }
      }
      lVar12 = lVar12 + 0x40;
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != 0);
    if ((longlong)(int)uStack_50 != 0) {
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar5 = (ulonglong)(int)uVar2;
      if (uVar5 != 0) {
        piVar1 = *(int **)(param_1 + 0xa0);
        lVar4 = 0;
        do {
          bVar15 = *(int *)(local_58 + lVar4) == *piVar1;
          if (bVar15) break;
          bVar16 = (longlong)(int)uStack_50 * 4 + -4 != lVar4;
          lVar4 = lVar4 + 4;
        } while (bVar16);
        iVar14 = 0;
        uVar6 = 0;
LAB_148e5a0d3:
        uVar13 = (ulonglong)uVar6;
LAB_148e5a0d6:
        do {
          iVar11 = (int)uVar13;
          lVar4 = (longlong)iVar11;
          uVar7 = iVar11 + 1U;
          if ((int)(iVar11 + 1U) < (int)uVar2) {
            uVar7 = uVar2;
          }
          uVar13 = lVar4 + 1;
          if ((longlong)uVar13 < (longlong)uVar5) {
            bVar16 = true;
            do {
              uVar6 = (uint)uVar13;
              if ((int)uStack_50 != 0) {
                lVar10 = 0;
                do {
                  if (*(int *)(local_58 + lVar10) == piVar1[uVar13 * 0x10]) {
                    if (bVar15) goto LAB_148e5a129;
                    iVar8 = uVar6 - iVar11;
                    goto LAB_148e5a175;
                  }
                  lVar10 = lVar10 + 4;
                } while ((longlong)(int)uStack_50 * 4 - lVar10 != 0);
              }
              if (bVar15) {
                FUN_145fef36a(piVar1 + lVar4 * 0x10,uVar6 - iVar11);
                bVar15 = false;
                uVar13 = uVar13 & 0xffffffff;
                if (bVar16) goto LAB_148e5a0d6;
                goto LAB_148e5a1cf;
              }
LAB_148e5a129:
              uVar13 = uVar13 + 1;
              bVar16 = (longlong)uVar13 < (longlong)uVar5;
            } while (uVar13 != uVar5);
          }
          else {
            bVar16 = false;
          }
          iVar8 = uVar7 - iVar11;
          uVar6 = uVar7;
          if (!bVar15) goto LAB_148e5a175;
          FUN_145fef36a(piVar1 + lVar4 * 0x10,iVar8);
          bVar15 = false;
          uVar13 = (ulonglong)uVar7;
          if (!bVar16) goto LAB_148e5a1cf;
        } while( true );
      }
    }
  }
LAB_148e5a1e1:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148e5a175:
  if (iVar14 != iVar11) {
    memmove(piVar1 + (longlong)iVar14 * 0x10,piVar1 + lVar4 * 0x10,(longlong)iVar8 << 6);
  }
  iVar14 = iVar14 + iVar8;
  bVar15 = true;
  if (!bVar16) goto LAB_148e5a1cf;
  goto LAB_148e5a0d3;
LAB_148e5a1cf:
  *(int *)(param_1 + 0xa8) = iVar14;
  if (iVar14 < (int)uVar2) {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  goto LAB_148e5a1e1;
}



// FUNCTION 148e5a2e2 FUN_148e5a2e2 body=242 status=ok
// SIG undefined FUN_148e5a2e2(void)

void FUN_148e5a2e2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x88) == '\x01')) {
    FUN_1449027d0(param_1,&local_38);
    lVar3 = *(longlong *)(local_38 + 0x120);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x100));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar4 = (int *)((longlong)local_30 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    iVar2 = *(int *)(param_2 + 0x394);
    *(int *)(lVar3 + 0xb0) = *(int *)(lVar3 + 0xb0) + 1;
    if ((longlong)*(int *)(lVar3 + 0xa8) != 0) {
      piVar4 = *(int **)(lVar3 + 0xa0);
      lVar5 = (longlong)*(int *)(lVar3 + 0xa8) << 6;
      do {
        if (*piVar4 == iVar2) {
          if (piVar4 != (int *)0x0) {
            *(bool *)(piVar4 + 6) = *(char *)(param_2 + 0x740) == '\x01';
            *(int *)(lVar3 + 0xf8) = *(int *)(lVar3 + 0xf8) + 1;
          }
          break;
        }
        piVar4 = piVar4 + 0x10;
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x100));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5a3d6 FUN_148e5a3d6 body=2109 status=ok
// SIG undefined FUN_148e5a3d6(void)

void FUN_148e5a3d6(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_148 [39];
  undefined1 local_121;
  longlong *local_120;
  longlong local_118;
  undefined4 local_10c;
  int local_108 [2];
  int local_100;
  int local_fc [2];
  int local_f4;
  int local_f0 [2];
  int local_e8;
  int local_e4 [2];
  int local_dc;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 *local_b8 [2];
  undefined8 local_a8;
  undefined **local_98;
  undefined4 *local_90;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_10c = param_2;
  pcVar4 = (char *)FUN_140e8d5fc(param_1 + 0x60);
  lVar5 = local_58;
  if (pcVar4 != (char *)0x0) {
    lVar5 = FUN_1402735c8();
    if (*pcVar4 == '\x01') {
      local_121 = param_3;
      local_120 = (longlong *)(lVar5 + 0x720);
      local_118 = param_1;
      FUN_1447a97f4(&local_70,pcVar4 + 0x10);
      if (0 < local_70._4_4_) {
        iVar13 = 0;
        do {
          FUN_144a7c8fe(&local_70,&local_d8,iVar13,1);
          if ((((((int)local_d8 == DAT_14cb7beb0) && ((int)local_d0 == DAT_14cb7beb8)) ||
               ((FUN_144a7c8fe(&local_70,local_e4,iVar13,1), local_e4[0] == DAT_14cb7bec8 &&
                (local_dc == DAT_14cb7bed0)))) ||
              ((FUN_144a7c8fe(&local_70,local_f0,iVar13,1), local_f0[0] == DAT_14cb7bee0 &&
               (local_e8 == DAT_14cb7bee8)))) ||
             (((FUN_144a7c8fe(&local_70,local_fc,iVar13,1), local_fc[0] == DAT_14cb7bef8 &&
               (local_f4 == DAT_14cb7bf00)) ||
              ((FUN_144a7c8fe(&local_70,local_108,iVar13,1), local_108[0] == DAT_14cb7bf10 &&
               (local_100 == DAT_14cb7bf18)))))) {
            FUN_1402b5374(&local_70,iVar13,0);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_70._4_4_);
      }
      uVar11 = (undefined4)local_70;
      param_1 = local_118;
      plVar12 = local_120;
      param_3 = local_121;
      if (local_58 != 0) {
        FUN_1400020a8();
        param_1 = local_118;
        plVar12 = local_120;
        param_3 = local_121;
      }
    }
    else {
      uVar11 = *(undefined4 *)(pcVar4 + 0x10);
      plVar12 = (longlong *)(lVar5 + 0x720);
    }
    iVar13 = FUN_145d2fc60(plVar12,uVar11,pcVar4);
    lVar5 = local_58;
    if (iVar13 != -1) {
      local_121 = param_3;
      if (*pcVar4 == '\x01') {
        local_120 = plVar12;
        local_118 = param_1;
        FUN_1447a97f4(&local_70,pcVar4 + 0x10);
        if (0 < local_70._4_4_) {
          iVar13 = 0;
          do {
            FUN_144a7c8fe(&local_70,&local_d8,iVar13,1);
            if ((((((int)local_d8 == DAT_14cb7beb0) && ((int)local_d0 == DAT_14cb7beb8)) ||
                 ((FUN_144a7c8fe(&local_70,local_e4,iVar13,1), local_e4[0] == DAT_14cb7bec8 &&
                  (local_dc == DAT_14cb7bed0)))) ||
                (((FUN_144a7c8fe(&local_70,local_f0,iVar13,1), local_f0[0] == DAT_14cb7bee0 &&
                  (local_e8 == DAT_14cb7bee8)) ||
                 ((FUN_144a7c8fe(&local_70,local_fc,iVar13,1), local_fc[0] == DAT_14cb7bef8 &&
                  (local_f4 == DAT_14cb7bf00)))))) ||
               ((FUN_144a7c8fe(&local_70,local_108,iVar13,1), local_108[0] == DAT_14cb7bf10 &&
                (local_100 == DAT_14cb7bf18)))) {
              FUN_1402b5374(&local_70,iVar13,0);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < local_70._4_4_);
        }
        uVar11 = (undefined4)local_70;
        param_1 = local_118;
        plVar12 = local_120;
        if (local_58 != 0) {
          FUN_1400020a8();
          param_1 = local_118;
          plVar12 = local_120;
        }
      }
      else {
        uVar11 = *(undefined4 *)(pcVar4 + 0x10);
      }
      iVar3 = FUN_145d2fc60(plVar12,uVar11,pcVar4);
      iVar13 = 0;
      lVar10 = 0;
      if (iVar3 != -1) {
        lVar10 = (longlong)iVar3 * 0x238 + *plVar12;
      }
      cVar2 = FUN_144a7c5f6(lVar10 + 0x158);
      lVar5 = local_58;
      if (cVar2 == '\0') {
        plVar6 = (longlong *)FUN_140e8d764(param_1);
        plVar6 = (longlong *)*plVar6;
        AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 0xb));
        *(int *)(plVar6 + 10) = (int)plVar6[10] + 1;
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 0xb));
        plVar12 = plVar6 + 2;
        local_d8 = 0x100000000;
        local_c8 = 0xffffffff;
        local_c0 = 0;
        local_d0 = plVar12;
        if ((int)plVar6[5] != 0) {
          FUN_1449c0562(&local_d8);
          iVar13 = (int)plVar6[5];
        }
        local_68 = local_d8;
        local_60 = local_d0;
        local_58 = local_c8;
        lVar5 = local_58;
        local_50 = local_c0;
        local_4c = local_bc;
        local_58._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
        local_70 = plVar6;
        if ((local_58._4_4_ != iVar13) || (local_d0 != plVar12)) {
          iVar3 = local_58._4_4_;
          local_58 = lVar5;
          do {
            local_a8 = 0;
            local_98 = &PTR_LAB_14b9b6c80;
            local_b8[0] = &LAB_1442a6d52;
            local_90 = &local_10c;
            lVar5 = FUN_148e3a5c2(*local_70 + (longlong)iVar3 * 0x28 + 8,local_b8);
            if (lVar5 != 0) {
              *(undefined1 *)(lVar5 + 0xf8) = local_121;
              *(undefined8 *)(lVar5 + 4) = *(undefined8 *)(lVar10 + 0x194);
              plVar12 = *(longlong **)(lVar10 + 0x158);
              plVar6 = *(longlong **)(lVar5 + 0x10);
              if (plVar6 != plVar12) {
                *(longlong **)(lVar5 + 0x10) = plVar12;
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 8))();
                }
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
              *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(lVar10 + 0x160);
              plVar12 = *(longlong **)(lVar10 + 0x148);
              plVar6 = *(longlong **)(lVar5 + 0x20);
              if (plVar6 != plVar12) {
                *(longlong **)(lVar5 + 0x20) = plVar12;
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 8))();
                }
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
              *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar10 + 0x150);
              *(undefined8 *)(lVar5 + 0x8c) = *(undefined8 *)(lVar10 + 0x214);
              *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar10 + 0x21c);
              *(undefined1 *)(lVar5 + 0x7c) = *(undefined1 *)(lVar10 + 0x208);
              *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(lVar10 + 0x20c);
              *(undefined1 *)(lVar5 + 0xc) = *(undefined1 *)(lVar10 + 400);
              FUN_144a787a6(lVar5 + 0x68,lVar10 + 0x1f8);
              *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar10 + 0x1c8);
              FUN_144a787a6(lVar5 + 0x58,lVar10 + 0x1e8);
              lVar8 = *(longlong *)(lVar10 + 0x1d8);
              if (lVar8 == 0) {
                uVar7 = FUN_14036a63e();
                lVar8 = FUN_14477b664(uVar7);
                *(longlong *)(lVar10 + 0x1d8) = lVar8;
              }
              plVar12 = (longlong *)(lVar10 + 0x1d0);
              lVar9 = *(longlong *)(lVar10 + 0x1e0);
              if (lVar9 == 0) {
                if ((lVar8 != 0) && (*plVar12 != 0)) {
                  plVar6 = *(longlong **)(lVar8 + 0xb8);
                  if ((plVar6 == (longlong *)0x0) ||
                     (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
                    *(undefined8 *)(lVar10 + 0x1e0) = 0;
                  }
                  else {
                    uVar7 = (**(code **)(*plVar6 + 0x110))(plVar6);
                    lVar9 = FUN_144aff482(uVar7,plVar12);
                    *(longlong *)(lVar10 + 0x1e0) = lVar9;
                    if (lVar9 != 0) {
                      lVar8 = *(longlong *)(lVar10 + 0x1d8);
                      goto LAB_148e5aab3;
                    }
                  }
                }
                plVar12 = (longlong *)FUN_140e82300();
              }
              else {
LAB_148e5aab3:
                if (lVar8 == 0) {
                  uVar7 = FUN_14036a63e();
                  lVar8 = FUN_14477b664(uVar7);
                  *(longlong *)(lVar10 + 0x1d8) = lVar8;
                  lVar9 = *(longlong *)(lVar10 + 0x1e0);
                  if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar12 != 0)) {
                    plVar6 = *(longlong **)(lVar8 + 0xb8);
                    if ((plVar6 == (longlong *)0x0) ||
                       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
                      lVar9 = 0;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar6 + 0x110))(plVar6);
                      lVar9 = FUN_144aff482(uVar7,plVar12);
                    }
                    *(longlong *)(lVar10 + 0x1e0) = lVar9;
                  }
                }
                plVar12 = (longlong *)(lVar9 + 0x18);
              }
              plVar6 = (longlong *)*plVar12;
              plVar1 = *(longlong **)(lVar5 + 0x48);
              if (plVar1 != plVar6) {
                *(longlong **)(lVar5 + 0x48) = plVar6;
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 8))();
                }
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
              *(int *)(lVar5 + 0x50) = (int)plVar12[1];
              FUN_140390f7a(lVar10 + 0x1a0,lVar5 + 0xe8);
              lVar5 = local_58;
              break;
            }
            local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
            FUN_1449c0562(&local_68);
            iVar3 = local_58._4_4_;
            lVar5 = local_58;
          } while (local_70 != plVar6 || (local_60 != plVar12 || local_58._4_4_ != iVar13));
        }
      }
    }
  }
  local_58 = lVar5;
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e5ac14 FUN_148e5ac14 body=318 status=ok
// SIG undefined FUN_148e5ac14(void)

void FUN_148e5ac14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_140e44844(param_2);
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_141218768();
  lVar3 = FUN_14477b664(uVar2);
  lVar4 = FUN_141218768();
  uVar2 = FUN_141218768();
  FUN_1402d1bfa(&local_40,uVar2,uVar1);
  if (local_40 != 0) {
    uStack_48 = 0;
  }
  local_58 = local_40;
  lVar5 = FUN_141218768();
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_148e5acc1;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_148e5acc1;
  }
  lVar5 = lVar4;
LAB_148e5acc1:
  if (lVar3 != lVar5) {
    uStack_48 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_50 = FUN_14477b664(uVar2);
  if (local_50 != 0 && local_40 != 0) {
    uStack_48 = uVar1;
  }
  lVar3 = FUN_1442a60cc(param_1,&local_58);
  if (lVar3 != 0) {
    FUN_148e1ea5e(lVar3,param_4);
    plVar6 = (longlong *)FUN_14140fc00(param_1);
    *(int *)(*plVar6 + 0x128) = *(int *)(*plVar6 + 0x128) + 1;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5ad54 FUN_148e5ad54 body=627 status=ok
// SIG undefined FUN_148e5ad54(void)

void FUN_148e5ad54(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140e44844(param_2);
  local_60 = (longlong *)0x0;
  uStack_58 = 0;
  uVar5 = FUN_141218768();
  lVar6 = FUN_14477b664(uVar5);
  lVar7 = FUN_141218768();
  uVar5 = FUN_141218768();
  FUN_1402d1bfa(&local_50,uVar5,uVar4);
  lVar9 = local_50;
  if (local_50 != 0) {
    uStack_58 = 0;
  }
  local_68 = local_50;
  lVar8 = FUN_141218768();
  if (lVar7 != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
      goto LAB_148e5ae04;
    }
    if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_148e5ae04;
  }
  lVar8 = lVar7;
LAB_148e5ae04:
  if (lVar6 != lVar8) {
    uStack_58 = 0;
  }
  uVar5 = FUN_14477b664(lVar8);
  local_60 = (longlong *)FUN_14477b664(uVar5);
  if (local_60 != (longlong *)0x0 && lVar9 != 0) {
    uStack_58 = uVar4;
  }
  lVar9 = FUN_1442a60cc(param_1,&local_68);
  if (lVar9 != 0) {
    if (0 < *(int *)(lVar9 + 0xf0)) {
      iVar12 = 0;
      do {
        uVar4 = FUN_1400d7050(param_1 + 0x30);
        FUN_148e1e992(lVar9,iVar12,uVar4);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar9 + 0xf0));
    }
    plVar10 = (longlong *)FUN_14140fc00(param_1);
    *(int *)(*plVar10 + 0x128) = *(int *)(*plVar10 + 0x128) + 1;
  }
  lVar9 = FUN_140de867c(param_3);
  if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x20) != 0)) {
    lVar6 = *(longlong *)(lVar9 + 0x18);
    lVar9 = (longlong)*(int *)(lVar9 + 0x20) * 0x18;
    do {
      FUN_1401f3da4(&local_68,lVar6);
      lVar7 = FUN_1412ba9fc(&local_68);
      uVar4 = FUN_1409e3b02();
      cVar3 = FUN_1448093f4(lVar7,uVar4);
      if ((lVar7 != 0) && (cVar3 != '\0')) {
        lVar7 = FUN_140aa5740(lVar7);
        if (lVar7 != 0) {
          puVar11 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
            puVar11 = *(undefined4 **)(lVar7 + 8);
          }
          FUN_1447325ac(puVar11,&local_50,1);
          iVar12 = *(int *)(param_1 + 200);
          *(uint *)(param_1 + 200) = iVar12 + 1U;
          if (*(uint *)(param_1 + 0xcc) < iVar12 + 1U) {
            FUN_1446f84a2((longlong *)(param_1 + 0xc0),iVar12);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar12 * 8) = local_50;
        }
      }
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      lVar6 = lVar6 + 0x18;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
    FUN_148e5b426(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5afc8 FUN_148e5afc8 body=148 status=ok
// SIG undefined FUN_148e5afc8(void)

void FUN_148e5afc8(undefined8 param_1)

{
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14575fb9c();
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"tickets",0);
  local_50 = 0;
  FUN_14052b5e0(local_54,"vaultcards",0);
  FUN_1466495a8(param_1,local_54,&local_48,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5b05e FUN_148e5b05e body=342 status=ok
// SIG undefined FUN_148e5b05e(void)

void FUN_148e5b05e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(param_2 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_141218768();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x28) = lVar5;
  }
  plVar1 = (longlong *)(param_2 + 0x20);
  lVar7 = *(longlong *)(param_2 + 0x30);
  if (lVar7 == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_2 + 0x30) = lVar7;
    if (lVar7 == 0) {
      return;
    }
    lVar5 = *(longlong *)(param_2 + 0x28);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_141218768(lVar7);
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x28) = lVar5;
    if (((*(longlong *)(param_2 + 0x30) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0'))
      {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar4 = FUN_144aff482(uVar4,plVar1);
      }
      *(undefined8 *)(param_2 + 0x30) = uVar4;
    }
  }
  uVar4 = FUN_14144d9c6();
  uVar6 = FUN_1400d7050(param_1 + 0x30);
  FUN_14410af30(uVar6,uVar4);
  return;
}



// FUNCTION 148e5b1b4 FUN_148e5b1b4 body=432 status=ok
// SIG undefined FUN_148e5b1b4(void)

void FUN_148e5b1b4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1400d7050(param_1 + 6);
  if (lVar5 == 0) goto LAB_148e5b205;
  lVar6 = FUN_144a5dd5e();
  if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) || (lVar5 = *(longlong *)(lVar5 + 0x3db8), lVar5 == 0)) goto LAB_148e5b205;
  plVar1 = (longlong *)(param_2 + 0x20);
  cVar4 = FUN_1412188d6(param_1,plVar1);
  if (cVar4 == '\0') goto LAB_148e5b205;
  lVar6 = *(longlong *)(param_2 + 0x28);
  if (lVar6 == 0) {
    uVar7 = FUN_141218768();
    lVar6 = FUN_14477b664(uVar7);
    *(longlong *)(param_2 + 0x28) = lVar6;
  }
  if (((*(longlong *)(param_2 + 0x30) == 0) && (lVar6 != 0)) && (*plVar1 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148e5b35e:
      uVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_148e5b35e;
      uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
      uVar7 = FUN_144aff482(uVar7,plVar1);
    }
    *(undefined8 *)(param_2 + 0x30) = uVar7;
  }
  lVar6 = FUN_146649676(param_1);
  if (lVar6 != 0) {
    iVar2 = *(int *)(param_2 + 0x38);
    if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar6 + 0x20))) {
      FUN_144337eaa(lVar5,plVar1,
                    *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar2 * 0xc));
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar5 = FUN_1400d6ce6();
        if (lVar5 != 0) {
          FUN_1411bd35e(lVar5,local_68,param_2 + 0x40,&DAT_14cbe4638);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_148e5b205:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5b366 FUN_148e5b366 body=191 status=ok
// SIG undefined FUN_148e5b366(void)

void FUN_148e5b366(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = *(longlong *)(lVar2 + 0x3db8);
      if (lVar2 != 0) {
        cVar1 = FUN_1412188d6(param_1,param_2 + 0x20);
        if (cVar1 != '\0') {
          FUN_144338580(lVar2,param_2 + 0x20,*(undefined4 *)(param_2 + 0x38));
        }
      }
      plVar4 = (longlong *)FUN_14140fc00(param_1);
      lVar2 = *plVar4;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x130));
      *(int *)(lVar2 + 0x128) = *(int *)(lVar2 + 0x128) + 1;
      FUN_145780fe4(lVar2 + 0x30,&DAT_149e62e78);
                    /* WARNING: Could not recover jumptable at 0x000148e5b41e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x130));
      return;
    }
  }
  return;
}



// FUNCTION 148e5b426 FUN_148e5b426 body=165 status=ok
// SIG undefined FUN_148e5b426(void)

void FUN_148e5b426(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140495e96(param_1 + 6);
  uVar1 = *(undefined4 *)(lVar3 + 0xe0);
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar3 = FUN_1400f6f32(uVar4);
  if (((lVar3 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x30), lVar2 != 0)) &&
     (*(longlong *)(lVar3 + 0x68) != 0)) {
    FUN_140ceec26(*(longlong *)(lVar3 + 0x68),local_24,uVar1);
    if (-1 < local_24[0]) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_140ceec8e(lVar2,local_40,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5b4ce FUN_148e5b4ce body=761 status=ok
// SIG undefined FUN_148e5b4ce(void)

void FUN_148e5b4ce(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  char *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  int local_50;
  uint local_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_1400f3ad8((longlong)param_1 + 0x44);
  if (lVar6 == 0) {
LAB_148e5b524:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148e5b524;
  }
  if (lVar6 != param_2) goto LAB_148e5b52c;
  FUN_1402815f4(param_1,&local_48);
  pcVar4 = *(char **)(local_48 + 0x440);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar4 + 0x38));
  *(int *)(pcVar4 + 0x30) = *(int *)(pcVar4 + 0x30) + 1;
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
  iVar9 = *(int *)((longlong)param_3 + 100);
  uVar8 = FUN_148c49fa9();
  FUN_1414aa4be(uVar8,&local_58,(longlong)iVar9);
  FUN_1400021e4(&local_58,&local_48);
  FUN_144a49bb4(&local_48,&local_68,0x1b);
  local_50 = (int)uStack_60;
  uVar10 = (int)uStack_60 - 1;
  if ((int)uStack_60 == 0) {
    uVar10 = 0;
  }
  if (0 < (int)uVar10) {
    uVar11 = 0;
    do {
      uVar3 = *(ushort *)(local_68 + uVar11 * 2);
      *(ushort *)(local_68 + uVar11 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  local_58 = (uint)local_68;
  uStack_54 = (undefined4)((ulonglong)local_68 >> 0x20);
  local_4c = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140775538(pcVar4 + 0x10,&local_58);
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (*pcVar4 == '\0') {
    iVar9 = *(int *)(pcVar4 + 4) + 1;
LAB_148e5b68b:
    *pcVar4 = '\x01';
    *(int *)(pcVar4 + 4) = iVar9;
  }
  else {
    iVar9 = 1;
    if (*(int *)(pcVar4 + 4) == 0) goto LAB_148e5b68b;
  }
  FUN_148e5bb5c(param_1,1);
  if (*(int *)(pcVar4 + 0x28) == 0) {
    if (*(int *)(pcVar4 + 0x2c) == 0) {
      iVar9 = 1;
      goto LAB_148e5b6b2;
    }
  }
  else {
    iVar9 = *(int *)(pcVar4 + 0x2c) + 1;
LAB_148e5b6b2:
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    *(int *)(pcVar4 + 0x2c) = iVar9;
  }
  if ((*param_3 != 0) && (cVar5 = FUN_140114204(*param_3 + 0x48), cVar5 != '\0')) {
    local_58 = local_58 & 0xffffff00;
    uStack_54 = 0;
    local_50 = 0;
    local_4c = 0;
    uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar6 = *param_3;
    lVar7 = FUN_140149a73(uVar8,0);
    uVar10 = 0;
    if (lVar7 != 0) {
      FUN_14039fc7b(lVar6 + 0x48,&local_58,lVar7,0);
      if ((local_58 & 0xff) == 3) {
        bVar12 = CONCAT44(local_50,uStack_54) == 0;
      }
      else {
        uVar10 = local_4c;
        if (((local_58 & 0xff) == 2) || (uVar10 = 0, (char)local_58 != '\x01')) goto LAB_148e5b746;
        bVar12 = local_4c == 0;
      }
      uVar10 = (uint)!bVar12;
    }
LAB_148e5b746:
    if (uVar10 == *(uint *)(pcVar4 + 0x28)) {
      if (*(int *)(pcVar4 + 0x2c) != 0) goto LAB_148e5b78d;
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(pcVar4 + 0x2c) + 1;
    }
    *(uint *)(pcVar4 + 0x28) = uVar10;
    *(int *)(pcVar4 + 0x2c) = iVar9;
  }
LAB_148e5b78d:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar4 + 0x38));
LAB_148e5b52c:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e5b7c8 FUN_148e5b7c8 body=360 status=ok
// SIG undefined FUN_148e5b7c8(void)

void FUN_148e5b7c8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar3 == 0) {
LAB_148e5b81e:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_148e5b81e;
  }
  if (lVar3 != param_2) goto LAB_148e5b825;
  FUN_1402815f4(param_1,&local_48);
  lVar3 = *(longlong *)(local_48 + 0x440);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x38));
  *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
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
  if (*(int *)(lVar3 + 8) == 4) {
    iVar5 = 1;
    if (*(int *)(lVar3 + 0xc) == 0) goto LAB_148e5b8bb;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0xc) + 1;
LAB_148e5b8bb:
    *(undefined4 *)(lVar3 + 8) = 4;
    *(int *)(lVar3 + 0xc) = iVar5;
  }
  FUN_148e5bb5c(param_1,0);
  lVar4 = FUN_140e4494e(param_2);
  if (lVar4 != 0) {
    if (*(int *)(param_3 + 100) == 4) {
      pcVar6 = "collectible_vault_door_found_notification";
    }
    else {
      if (*(int *)(param_3 + 100) != 3) goto LAB_148e5b923;
      pcVar6 = "collectible_vault_fragment_found_notification";
    }
    FUN_1446ddc76(&local_48,pcVar6,1);
    FUN_148e38158(lVar4,local_4c,&local_48);
  }
LAB_148e5b923:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x38));
LAB_148e5b825:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e5b932 FUN_148e5b932 body=263 status=ok
// SIG undefined FUN_148e5b932(void)

void FUN_148e5b932(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar4 == 0) {
LAB_148e5b986:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148e5b986;
  }
  if (lVar4 != param_2) {
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_1402815f4(param_1,&local_40);
  pcVar3 = *(char **)(local_40 + 0x440);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x38));
  *(int *)(pcVar3 + 0x30) = *(int *)(pcVar3 + 0x30) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (*pcVar3 == (char)param_3) {
    iVar6 = 1;
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_148e5ba23;
  }
  else {
    iVar6 = *(int *)(pcVar3 + 4) + 1;
  }
  *pcVar3 = (char)param_3;
  *(int *)(pcVar3 + 4) = iVar6;
LAB_148e5ba23:
  FUN_148e5bb5c(param_1,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 148e5ba50 FUN_148e5ba50 body=247 status=ok
// SIG undefined FUN_148e5ba50(void)

void FUN_148e5ba50(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar4 == 0) {
LAB_148e5baa2:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148e5baa2;
  }
  if (lVar4 != param_2) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1402815f4(param_1,&local_38);
  lVar4 = *(longlong *)(local_38 + 0x440);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x38));
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
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
  if (*(int *)(lVar4 + 8) == param_3) {
    if (*(int *)(lVar4 + 0xc) != 0) goto LAB_148e5bb3b;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0xc) + 1;
  }
  *(int *)(lVar4 + 8) = param_3;
  *(int *)(lVar4 + 0xc) = iVar3;
LAB_148e5bb3b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 148e5bb5c FUN_148e5bb5c body=162 status=ok
// SIG undefined FUN_148e5bb5c(void)

void FUN_148e5bb5c(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (*(int *)(lVar2 + 0xd98) != 0)) &&
       (*(longlong *)(lVar2 + 0xda0) != 0)) {
      lVar2 = lVar2 + 0xd98;
      cVar1 = FUN_140426394(lVar2,&DAT_14cbd9648);
      if (param_2 == '\x01' && cVar1 == '\0') {
        FUN_1403ca8ec(lVar2,&DAT_14cbd9648);
        return;
      }
      if (cVar1 == '\x01' && param_2 == '\0') {
        FUN_140c125e6(lVar2,&DAT_14cbd9648);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e5bbfe FUN_148e5bbfe body=357 status=ok
// SIG undefined FUN_148e5bbfe(void)

void FUN_148e5bbfe(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  char local_60;
  undefined7 uStack_5f;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449027d0(param_1,&local_60);
  lVar3 = *(longlong *)(CONCAT71(uStack_5f,local_60) + 0x2a0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x68));
  *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
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
  cVar4 = FUN_140280fd6(param_2,param_1 + 0x58);
  if (cVar4 != '\0') {
    if (*(int *)(lVar3 + 0xc) == 0 || param_3 != *(float *)(lVar3 + 8)) {
      *(float *)(lVar3 + 8) = param_3;
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    }
    if (*(int *)(lVar3 + 0x14) == 0 || param_4 != *(float *)(lVar3 + 0x10)) {
      *(float *)(lVar3 + 0x10) = param_4;
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    }
    local_60 = '\x04';
    uVar5 = FUN_140280ec4(param_2);
    cVar4 = FUN_140280f4a(uVar5,&local_60);
    if (cVar4 != '\0') {
      if (*(int *)(lVar3 + 0x2c) == 0 || local_60 != *(char *)(lVar3 + 0x28)) {
        *(char *)(lVar3 + 0x28) = local_60;
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x68));
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5bd64 FUN_148e5bd64 body=58 status=ok
// SIG undefined FUN_148e5bd64(void)

void FUN_148e5bd64(longlong param_1)

{
  FUN_140bf96d8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_148e671ea(param_1 + 8,0);
  return;
}



// FUNCTION 148e5bda6 FUN_148e5bda6 body=294 status=ok
// SIG undefined FUN_148e5bda6(void)

void FUN_148e5bda6(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  iVar7 = *(int *)(param_1 + 0x134);
  if ((((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_1 + 0x68))) &&
      (cVar6 = FUN_140280fd6(param_2,(longlong)iVar7 * 0x58 + *(longlong *)(param_1 + 0x60) + 0x10),
      cVar6 != '\0')) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    plVar9 = *(longlong **)(param_1 + 0x50);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x58) * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *plVar9;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_148e5be9f;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar10 = iVar7 == iVar5;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar10);
        if (lVar4 != 0) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x168));
          *(int *)(lVar4 + 0x160) = *(int *)(lVar4 + 0x160) + 1;
          iVar7 = *(int *)(lVar4 + 0x158);
          if (*(int *)(lVar4 + 0x154) == param_3) {
            if (iVar7 == 0) {
              iVar7 = 0;
              goto LAB_148e5be6e;
            }
          }
          else {
LAB_148e5be6e:
            *(int *)(lVar4 + 0x154) = param_3;
            *(int *)(lVar4 + 0x158) = iVar7 + 1;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x168));
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
LAB_148e5be9f:
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  return;
}



// FUNCTION 148e5becc FUN_148e5becc body=429 status=ok
// SIG undefined FUN_148e5becc(void)

void FUN_148e5becc(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((0.0 < param_3) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar3 = FUN_1402095ca();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = FUN_1401b4c98(lVar1);
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar2 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
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
      local_b0[2] = lVar3;
      *local_b0 = &PTR_FUN_14b9b9db0;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,param_1);
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = FUN_148e5c07a;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar4,param_1 + 0x140,&local_98,param_3 * 0.7);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5c07a FUN_148e5c07a body=245 status=ok
// SIG undefined FUN_148e5c07a(void)

void FUN_148e5c07a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x50);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x58) * 2;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *plVar8;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_148e5c137;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        if (lVar4 != 0) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x168));
          *(int *)(lVar4 + 0x160) = *(int *)(lVar4 + 0x160) + 1;
          iVar6 = *(int *)(lVar4 + 0x138);
          if (*(char *)(lVar4 + 0x134) == '\0') {
LAB_148e5c105:
            *(undefined1 *)(lVar4 + 0x134) = 1;
            *(int *)(lVar4 + 0x138) = iVar6 + 1;
          }
          else if (iVar6 == 0) {
            iVar6 = 0;
            goto LAB_148e5c105;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x168));
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
LAB_148e5c137:
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  FUN_145881850(param_1 + 0x30);
  return;
}



// FUNCTION 148e5c170 FUN_148e5c170 body=254 status=ok
// SIG undefined FUN_148e5c170(void)

undefined8
FUN_148e5c170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9f00;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5c270 FUN_148e5c270 body=95 status=ok
// SIG undefined FUN_148e5c270(void)

void FUN_148e5c270(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_145940bc4();
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  if (*(int *)(lVar1 + 0x88) == param_2) {
    if (*(int *)(lVar1 + 0x8c) != 0) goto LAB_148e5c2be;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x8c) + 1;
  }
  *(int *)(lVar1 + 0x88) = param_2;
  *(int *)(lVar1 + 0x8c) = iVar2;
LAB_148e5c2be:
                    /* WARNING: Could not recover jumptable at 0x000148e5c2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  return;
}



// FUNCTION 148e5c2e2 FUN_148e5c2e2 body=198 status=ok
// SIG undefined FUN_148e5c2e2(void)

void FUN_148e5c2e2(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 == '\0') {
    return;
  }
  uVar4 = FUN_14479d2ce(param_1 + 0x48);
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 == 0) {
LAB_148e5c340:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148e5c340;
  }
  iVar2 = FUN_148f0b12e(uVar4,lVar5);
  plVar7 = (longlong *)FUN_145940bc4(param_1);
  lVar5 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1f0));
  *(int *)(lVar5 + 0x1e8) = *(int *)(lVar5 + 0x1e8) + 1;
  if (iVar2 == *(int *)(lVar5 + 0x80)) {
    if (*(int *)(lVar5 + 0x84) != 0) goto LAB_148e5c397;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x84) + 1;
  }
  *(int *)(lVar5 + 0x80) = iVar2;
  *(int *)(lVar5 + 0x84) = iVar3;
LAB_148e5c397:
                    /* WARNING: Could not recover jumptable at 0x000148e5c3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1f0));
  return;
}



// FUNCTION 148e5c3aa FUN_148e5c3aa body=34 status=ok
// SIG undefined FUN_148e5c3aa(void)

void FUN_148e5c3aa(undefined8 param_1)

{
  FUN_14604006a();
  FUN_146040424(param_1);
  FUN_1460401a6(param_1);
  return;
}



// FUNCTION 148e5c3d4 FUN_148e5c3d4 body=130 status=ok
// SIG undefined FUN_148e5c3d4(void)

void FUN_148e5c3d4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148e6836a(param_1,iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x28);
  *puVar1 = *param_2;
  FUN_14023423e(puVar1 + 1,param_2 + 1);
  puVar1[3] = 0;
  puVar1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  if (iVar2 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e5c456 FUN_148e5c456 body=525 status=ok
// SIG undefined FUN_148e5c456(void)

void FUN_148e5c456(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  PSRWLOCK pRVar5;
  float fVar6;
  float fVar7;
  
  FUN_14485c47a(param_1 + 0x48);
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  if (*(char *)(lVar1 + 0x30) == '\0') {
    iVar3 = 1;
    if (*(int *)(lVar1 + 0x34) == 0) goto LAB_148e5c4ba;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x34) + 1;
LAB_148e5c4ba:
    *(undefined1 *)(lVar1 + 0x30) = 0;
    *(int *)(lVar1 + 0x34) = iVar3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  if (*(char *)(lVar1 + 0xe8) == '\0') {
    iVar3 = *(int *)(lVar1 + 0xec) + 1;
LAB_148e5c503:
    *(undefined1 *)(lVar1 + 0xe8) = 1;
    *(int *)(lVar1 + 0xec) = iVar3;
  }
  else {
    iVar3 = 1;
    if (*(int *)(lVar1 + 0xec) == 0) goto LAB_148e5c503;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  if (param_2 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(param_2 + 0x2b30);
  }
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  if (cVar4 == *(char *)(lVar1 + 0xf8)) {
    iVar3 = 1;
    if (*(int *)(lVar1 + 0xfc) != 0) goto LAB_148e5c584;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0xfc) + 1;
  }
  *(char *)(lVar1 + 0xf8) = cVar4;
  *(int *)(lVar1 + 0xfc) = iVar3;
LAB_148e5c584:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  plVar2 = (longlong *)FUN_148e5c664(param_1);
  lVar1 = *plVar2;
  pRVar5 = (PSRWLOCK)(lVar1 + 0x168);
  AcquireSRWLockShared(pRVar5);
  fVar6 = (float)FUN_148e1efc4(lVar1);
  ReleaseSRWLockShared(pRVar5);
  plVar2 = (longlong *)FUN_148e5c664(param_1);
  lVar1 = *plVar2;
  pRVar5 = (PSRWLOCK)(lVar1 + 0x168);
  AcquireSRWLockShared(pRVar5);
  fVar7 = (float)FUN_148e1ef8a(lVar1);
  ReleaseSRWLockShared(pRVar5);
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  *(bool *)(lVar1 + 0x108) = fVar6 != fVar7;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  FUN_145d33c3c(param_1 + 0x30);
  FUN_14604006a(param_1);
  FUN_146040424(param_1);
  FUN_1460401a6(param_1);
  return;
}



// FUNCTION 148e5c664 FUN_148e5c664 body=114 status=ok
// SIG undefined FUN_148e5c664(void)

longlong FUN_148e5c664(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x520;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5c6d8 FUN_148e5c6d8 body=174 status=ok
// SIG undefined FUN_148e5c6d8(void)

void FUN_148e5c6d8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_146649920(param_1 + 0x30);
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  if (*(char *)(lVar1 + 0xe8) == '\0') {
    iVar3 = 1;
    if (*(int *)(lVar1 + 0xec) != 0) goto LAB_148e5c739;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0xec) + 1;
  }
  *(undefined1 *)(lVar1 + 0xe8) = 0;
  *(int *)(lVar1 + 0xec) = iVar3;
LAB_148e5c739:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  *(undefined1 *)(lVar1 + 0x108) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 148e5c786 FUN_148e5c786 body=9 status=ok
// SIG undefined FUN_148e5c786(void)

void FUN_148e5c786(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x48);
  return;
}



// FUNCTION 148e5c790 FUN_148e5c790 body=119 status=ok
// SIG undefined FUN_148e5c790(void)

void FUN_148e5c790(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14047210e();
  if (lVar2 != 0) {
    lVar3 = FUN_144a7a5f4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_140fbb8dc(param_1,lVar2);
      uVar1 = FUN_140ad710a(lVar2);
      *(undefined1 *)(param_1 + 0xc0) = uVar1;
      FUN_1413f38e0(param_1);
      FUN_1412a8226(param_1,lVar2);
      FUN_1412a83e6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e5c808 thunk_FUN_1412a82ae body=5 status=ok
// SIG undefined thunk_FUN_1412a82ae(void)

void thunk_FUN_1412a82ae(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  longlong lStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14047210e();
  if (lVar5 == 0) {
LAB_1412a82d3:
    if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar6 = FUN_1409715bc(param_1);
  cVar4 = FUN_14011bf50(uVar6);
  if (cVar4 == '\0') goto LAB_1412a82d3;
  FUN_1403adc5e(&lStack_38,uVar6);
  lVar2 = *(longlong *)(lStack_38 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 200));
  *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + 1;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
      }
    }
  }
  if ((*(longlong *)(lVar5 + 0xb28) == 0) ||
     (plVar3 = *(longlong **)(lVar5 + 0xb30), plVar3 == (longlong *)0x0)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined1 *)(lVar5 + 0xbe3));
  }
  if (*(char *)(lVar2 + 0x98) == cVar4) {
    if (*(int *)(lVar2 + 0x9c) != 0) goto LAB_1412a8382;
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(lVar2 + 0x9c) + 1;
  }
  *(char *)(lVar2 + 0x98) = cVar4;
  *(int *)(lVar2 + 0x9c) = iVar7;
LAB_1412a8382:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 148e5c80e FUN_148e5c80e body=115 status=ok
// SIG undefined FUN_148e5c80e(void)

void FUN_148e5c80e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0xa0),0,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    lVar1 = FUN_14047210e(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_144a7a5f4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148f179ee(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e5c882 FUN_148e5c882 body=877 status=ok
// SIG undefined FUN_148e5c882(void)

void FUN_148e5c882(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_148e5c80e(param_1);
  }
  if (*(char *)(param_1 + 0xa8) != '\0') goto LAB_148e5c8c1;
  lVar3 = FUN_14047210e(param_1);
  if (lVar3 == 0) {
LAB_148e5c91a:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_144a7a5f4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_148e5c91a;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1458b6df2();
    lVar4 = FUN_14477b664(uVar5);
    param_2[1] = lVar4;
  }
  bVar10 = true;
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_148e5c8c1;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_148e5cbdd:
      lVar4 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_148e5cbdd;
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar4;
    bVar10 = lVar4 != 0;
  }
  if ((lVar3 == 0) || (!bVar10)) goto LAB_148e5c8c1;
  lVar4 = FUN_1447210f0(lVar3);
  if (lVar4 == 0) goto LAB_148e5c8c1;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1458b6df2();
    lVar4 = FUN_14477b664(uVar5);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_148e5cbe8:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_148e5cbe8;
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar6;
  }
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  uVar5 = FUN_1458b6df2();
  lStack_b0 = FUN_14477b664(uVar5);
  lVar7 = FUN_1458b6df2();
  uVar5 = FUN_1458b6df2();
  FUN_1402d1bfa(&local_40,uVar5,lVar6);
  lVar4 = local_40;
  if (local_b8 != local_40) {
    local_a8 = 0;
  }
  local_b8 = local_40;
  lVar8 = FUN_1458b6df2();
  if (lVar7 == 0) {
LAB_148e5ca50:
    lVar8 = lVar7;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_148e5ca50;
  if (lStack_b0 != lVar8) {
    local_a8 = 0;
  }
  uVar5 = FUN_14477b664(lVar8);
  lStack_b0 = FUN_14477b664(uVar5);
  if (lStack_b0 != 0 && lVar4 != 0) {
    local_a8 = lVar6;
  }
  cVar2 = FUN_148e5cbf0(param_1,&local_b8);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    goto LAB_148e5c8c1;
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x1b0);
  local_40 = *param_2;
  FUN_1411374b4(&local_b8,uVar5,&local_40,&DAT_14c846480);
  uVar9 = FUN_140faf1c8(&local_b8,uVar5);
  uVar5 = FUN_140faf27a(uVar9,uVar5);
  lVar4 = FUN_14127ef9a(uVar5);
  FUN_14119d0c2(&local_b8);
  if (lVar4 == 0) {
LAB_148e5cb20:
    lVar4 = 0;
  }
  else {
    lVar6 = FUN_1411e624c();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148e5cb20;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar4;
  FUN_148f177be(lVar3,lVar4);
LAB_148e5c8c1:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5cbf0 FUN_148e5cbf0 body=357 status=ok
// SIG undefined FUN_148e5cbf0(void)

uint FUN_148e5cbf0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint in_EAX;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint local_44;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar10 = *(longlong **)(param_1 + 0xb0);
    plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0xb8) * 2;
    local_44 = in_EAX;
    do {
      lVar2 = *plVar10;
      plVar3 = (longlong *)plVar10[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      bVar6 = true;
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x10);
        lVar7 = param_2[1];
        if (lVar7 == 0) {
          uVar8 = FUN_1458b6df2();
          lVar7 = FUN_14477b664(uVar8);
          param_2[1] = lVar7;
        }
        lVar9 = param_2[2];
        if (lVar9 == 0) {
          if (lVar7 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (*param_2 != 0) {
              plVar5 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (lVar7 = (**(code **)(*plVar5 + 0x108))(), (char)lVar7 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar7 = FUN_144aff482(uVar8,param_2);
                lVar9 = lVar7;
              }
              param_2[2] = lVar9;
            }
          }
        }
        if (lVar4 == lVar9) {
          if ((*(char *)(lVar2 + 0x68) == '\x01') && (*(char *)(lVar2 + 0x69) == '\x01')) {
            local_44 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),*(undefined1 *)(lVar2 + 0x6a));
          }
          else {
            local_44 = 0;
          }
          bVar6 = false;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if (!bVar6) goto LAB_148e5cd38;
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar11);
  }
  local_44 = 0;
LAB_148e5cd38:
  return local_44 & 0xffffff01;
}



// FUNCTION 148e5cd56 FUN_148e5cd56 body=451 status=ok
// SIG undefined FUN_148e5cd56(void)

void FUN_148e5cd56(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80 [6];
  longlong local_68;
  int local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
    lVar3 = FUN_14047210e();
    if ((lVar3 != 0) &&
       (plVar4 = (longlong *)FUN_140fbbd16(lVar3,*(undefined1 *)(lVar3 + 0xbd8)),
       plVar4 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*plVar4 + 8))(plVar4);
      lVar5 = FUN_140fbbcdc();
      if ((lVar5 != 0) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        lVar3 = plVar4[6];
        if (lVar3 == 0) {
          uVar6 = FUN_1458b6df2();
          lVar3 = FUN_14477b664(uVar6);
          plVar4[6] = lVar3;
        }
        plVar7 = plVar4 + 5;
        if (plVar4[7] == 0) {
          if ((lVar3 == 0) || (*plVar7 == 0)) goto LAB_148e5cdd6;
          plVar1 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar4[7] = 0;
            goto LAB_148e5cdd6;
          }
          uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar3 = FUN_144aff482(uVar6,plVar7);
          plVar4[7] = lVar3;
          if (lVar3 == 0) goto LAB_148e5cdd6;
        }
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          uVar6 = FUN_1415c99d8(*(longlong *)(param_1 + 0xa0) + 0x390);
          FUN_1406987fe(uVar6,local_58);
          local_88 = *plVar7;
          FUN_1446dcdd4(local_80);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          if (local_58[0] == local_80[0]) goto LAB_148e5cdd6;
        }
        FUN_148e5c882(param_1,plVar7);
      }
    }
  }
LAB_148e5cdd6:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e5cf1a FUN_148e5cf1a body=351 status=ok
// SIG undefined FUN_148e5cf1a(void)

void FUN_148e5cf1a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x180))();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x1f0);
    }
    if (lVar4 == param_2) {
      FUN_1449027d0(param_1,&local_38);
      lVar4 = *(longlong *)(local_38 + 0x220);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
      plVar3 = local_30;
      *(int *)(lVar4 + 0x1b0) = *(int *)(lVar4 + 0x1b0) + 1;
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
      FUN_148e5d212(lVar4);
      FUN_1449027d0(param_1,&local_38);
      plVar3 = *(longlong **)(local_38 + 0x230);
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
      *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
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
      lVar5 = *plVar3;
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 2;
      if ((longlong)(int)plVar3[1] != 0) {
        lVar6 = (longlong)(int)plVar3[1] * 0x118;
        do {
          FUN_1461d0dd0(lVar5);
          lVar5 = lVar5 + 0x118;
          lVar6 = lVar6 + -0x118;
        } while (lVar6 != 0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5d07c FUN_148e5d07c body=167 status=ok
// SIG undefined FUN_148e5d07c(void)

void FUN_148e5d07c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if (local_28 != (longlong *)0x0) {
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
  if (*(char *)(lVar3 + 0x58) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x5c) + 1;
  }
  else {
    if (*(int *)(lVar3 + 0x5c) != 0) goto LAB_148e5d0fc;
    iVar4 = 1;
  }
  *(undefined1 *)(lVar3 + 0x58) = 1;
  *(int *)(lVar3 + 0x5c) = iVar4;
LAB_148e5d0fc:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5d124 FUN_148e5d124 body=237 status=ok
// SIG undefined FUN_148e5d124(void)

void FUN_148e5d124(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x50;
  cVar2 = FUN_140f66224(lVar4);
  if (cVar2 != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x90);
  lVar3 = FUN_14479d2ce(lVar4);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(lVar3 + 0xbd8);
  FUN_1418f9236(param_1);
  FUN_140f64a3c(param_1);
  FUN_1418f9688(param_1);
  FUN_140da76fe(param_1,&DAT_14cbd8b70);
  cVar2 = FUN_1410f362a(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar4);
    if ((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) {
      lVar3 = *(longlong *)
               (*(longlong *)(lVar3 + 0xbe8) + 0x40 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               );
    }
    else {
      lVar3 = 0;
    }
    lVar4 = FUN_14479d2ce(lVar4);
    bVar1 = *(byte *)(param_1 + 0x90);
    if ((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) {
      lVar4 = *(longlong *)
               (*(longlong *)(lVar4 + 0xbe8) + 0x40 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               );
    }
    else {
      lVar4 = 0;
    }
    if (lVar3 != lVar4) {
      FUN_140f6626a(param_1);
      FUN_1412a4234(param_1);
    }
  }
  FUN_1418f94ee(param_1);
  return;
}



// FUNCTION 148e5d212 FUN_148e5d212 body=274 status=ok
// SIG undefined FUN_148e5d212(void)

void FUN_148e5d212(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_178 [40];
  char local_150 [4];
  int local_14c;
  undefined1 local_148 [280];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1442a6414();
  lVar3 = *(longlong *)(param_1 + 0x188);
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 2;
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 400) * 0x120;
    do {
      FUN_14576e226(local_150,lVar3);
      if (local_14c == 0 || local_150[0] == '\0') {
        local_150[0] = '\x01';
        local_14c = local_14c + 1;
      }
      FUN_146649b1c(local_148);
      FUN_145846e1a(local_150);
      lVar3 = lVar3 + 0x120;
      lVar4 = lVar4 + -0x120;
    } while (lVar4 != 0);
    uVar2 = *(undefined4 *)(param_1 + 400);
    lVar3 = *(longlong *)(param_1 + 0x188);
  }
  iVar1 = *(int *)(param_1 + 0x194);
  FUN_145846df0(lVar3,uVar2);
  *(undefined4 *)(param_1 + 400) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x194) != 0)) {
    FUN_148e5e448(param_1 + 0x188);
  }
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5d340 FUN_148e5d340 body=29 status=ok
// SIG undefined FUN_148e5d340(void)

bool FUN_148e5d340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5d35e FUN_148e5d35e body=26 status=ok
// SIG undefined FUN_148e5d35e(void)

bool FUN_148e5d35e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5d378 FUN_148e5d378 body=101 status=ok
// SIG undefined FUN_148e5d378(void)

void FUN_148e5d378(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5d3de FUN_148e5d3de body=101 status=ok
// SIG undefined FUN_148e5d3de(void)

void FUN_148e5d3de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5d444 FUN_148e5d444 body=134 status=ok
// SIG undefined FUN_148e5d444(void)

void FUN_148e5d444(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f76f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6a50;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5d4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5d4ca FUN_148e5d4ca body=76 status=ok
// SIG undefined FUN_148e5d4ca(void)

void FUN_148e5d4ca(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5d513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e5d516 FUN_148e5d516 body=188 status=ok
// SIG undefined FUN_148e5d516(void)

bool FUN_148e5d516(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar3 = local_58;
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
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5d5ee FUN_148e5d5ee body=29 status=ok
// SIG undefined FUN_148e5d5ee(void)

bool FUN_148e5d5ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5d60c FUN_148e5d60c body=26 status=ok
// SIG undefined FUN_148e5d60c(void)

bool FUN_148e5d60c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5d626 FUN_148e5d626 body=101 status=ok
// SIG undefined FUN_148e5d626(void)

void FUN_148e5d626(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5d68c FUN_148e5d68c body=101 status=ok
// SIG undefined FUN_148e5d68c(void)

void FUN_148e5d68c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5d6f2 FUN_148e5d6f2 body=134 status=ok
// SIG undefined FUN_148e5d6f2(void)

void FUN_148e5d6f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6ac0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5d769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5d778 FUN_148e5d778 body=60 status=ok
// SIG undefined FUN_148e5d778(void)

void FUN_148e5d778(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5d7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148e5d7b4 FUN_148e5d7b4 body=31 status=ok
// SIG undefined FUN_148e5d7b4(void)

undefined8 FUN_148e5d7b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5d7ee FUN_148e5d7ee body=29 status=ok
// SIG undefined FUN_148e5d7ee(void)

bool FUN_148e5d7ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5d80c FUN_148e5d80c body=26 status=ok
// SIG undefined FUN_148e5d80c(void)

bool FUN_148e5d80c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5d826 FUN_148e5d826 body=101 status=ok
// SIG undefined FUN_148e5d826(void)

void FUN_148e5d826(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5d88c FUN_148e5d88c body=101 status=ok
// SIG undefined FUN_148e5d88c(void)

void FUN_148e5d88c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5d8f2 FUN_148e5d8f2 body=134 status=ok
// SIG undefined FUN_148e5d8f2(void)

void FUN_148e5d8f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f76f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6d50;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5d969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5d978 FUN_148e5d978 body=76 status=ok
// SIG undefined FUN_148e5d978(void)

void FUN_148e5d978(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5d9c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e5d9c4 FUN_148e5d9c4 body=188 status=ok
// SIG undefined FUN_148e5d9c4(void)

bool FUN_148e5d9c4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar3 = local_58;
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
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5da82 FUN_148e5da82 body=31 status=ok
// SIG undefined FUN_148e5da82(void)

undefined8 FUN_148e5da82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5dabc FUN_148e5dabc body=29 status=ok
// SIG undefined FUN_148e5dabc(void)

bool FUN_148e5dabc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5dada FUN_148e5dada body=26 status=ok
// SIG undefined FUN_148e5dada(void)

bool FUN_148e5dada(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5daf4 FUN_148e5daf4 body=101 status=ok
// SIG undefined FUN_148e5daf4(void)

void FUN_148e5daf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5db5a FUN_148e5db5a body=101 status=ok
// SIG undefined FUN_148e5db5a(void)

void FUN_148e5db5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5dbc0 FUN_148e5dbc0 body=134 status=ok
// SIG undefined FUN_148e5dbc0(void)

void FUN_148e5dbc0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6dc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5dc37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5dc46 FUN_148e5dc46 body=60 status=ok
// SIG undefined FUN_148e5dc46(void)

void FUN_148e5dc46(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5dc7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148e5dc82 FUN_148e5dc82 body=31 status=ok
// SIG undefined FUN_148e5dc82(void)

undefined8 FUN_148e5dc82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5dcbc FUN_148e5dcbc body=29 status=ok
// SIG undefined FUN_148e5dcbc(void)

bool FUN_148e5dcbc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5dcda FUN_148e5dcda body=26 status=ok
// SIG undefined FUN_148e5dcda(void)

bool FUN_148e5dcda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5dcf4 FUN_148e5dcf4 body=101 status=ok
// SIG undefined FUN_148e5dcf4(void)

void FUN_148e5dcf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5dd5a FUN_148e5dd5a body=101 status=ok
// SIG undefined FUN_148e5dd5a(void)

void FUN_148e5dd5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5ddc0 FUN_148e5ddc0 body=134 status=ok
// SIG undefined FUN_148e5ddc0(void)

void FUN_148e5ddc0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f76f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6e30;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5de37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5de46 FUN_148e5de46 body=76 status=ok
// SIG undefined FUN_148e5de46(void)

void FUN_148e5de46(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5de8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e5de92 FUN_148e5de92 body=31 status=ok
// SIG undefined FUN_148e5de92(void)

undefined8 FUN_148e5de92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5decc FUN_148e5decc body=29 status=ok
// SIG undefined FUN_148e5decc(void)

bool FUN_148e5decc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5deea FUN_148e5deea body=101 status=ok
// SIG undefined FUN_148e5deea(void)

void FUN_148e5deea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5df50 FUN_148e5df50 body=101 status=ok
// SIG undefined FUN_148e5df50(void)

void FUN_148e5df50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5dfb6 FUN_148e5dfb6 body=134 status=ok
// SIG undefined FUN_148e5dfb6(void)

void FUN_148e5dfb6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6ea0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5e02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5e03c FUN_148e5e03c body=60 status=ok
// SIG undefined FUN_148e5e03c(void)

void FUN_148e5e03c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5e075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148e5e092 FUN_148e5e092 body=29 status=ok
// SIG undefined FUN_148e5e092(void)

bool FUN_148e5e092(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5e0b0 FUN_148e5e0b0 body=26 status=ok
// SIG undefined FUN_148e5e0b0(void)

bool FUN_148e5e0b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5e0ca FUN_148e5e0ca body=101 status=ok
// SIG undefined FUN_148e5e0ca(void)

void FUN_148e5e0ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e130 FUN_148e5e130 body=101 status=ok
// SIG undefined FUN_148e5e130(void)

void FUN_148e5e130(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e196 FUN_148e5e196 body=134 status=ok
// SIG undefined FUN_148e5e196(void)

void FUN_148e5e196(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f76f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6f10;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5e20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5e21c FUN_148e5e21c body=76 status=ok
// SIG undefined FUN_148e5e21c(void)

void FUN_148e5e21c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5e265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e5e282 FUN_148e5e282 body=29 status=ok
// SIG undefined FUN_148e5e282(void)

bool FUN_148e5e282(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5e2a0 FUN_148e5e2a0 body=26 status=ok
// SIG undefined FUN_148e5e2a0(void)

bool FUN_148e5e2a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5e2ba FUN_148e5e2ba body=101 status=ok
// SIG undefined FUN_148e5e2ba(void)

void FUN_148e5e2ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e320 FUN_148e5e320 body=101 status=ok
// SIG undefined FUN_148e5e320(void)

void FUN_148e5e320(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b6f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e386 FUN_148e5e386 body=134 status=ok
// SIG undefined FUN_148e5e386(void)

void FUN_148e5e386(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b6f80;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5e3fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5e40c FUN_148e5e40c body=60 status=ok
// SIG undefined FUN_148e5e40c(void)

void FUN_148e5e40c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5e445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148e5e448 FUN_148e5e448 body=48 status=ok
// SIG undefined FUN_148e5e448(void)

void FUN_148e5e448(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,8);
  }
  return;
}



// FUNCTION 148e5e478 FUN_148e5e478 body=31 status=ok
// SIG undefined FUN_148e5e478(void)

undefined8 FUN_148e5e478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5e4b2 FUN_148e5e4b2 body=101 status=ok
// SIG undefined FUN_148e5e4b2(void)

void FUN_148e5e4b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e518 FUN_148e5e518 body=101 status=ok
// SIG undefined FUN_148e5e518(void)

void FUN_148e5e518(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e57e FUN_148e5e57e body=134 status=ok
// SIG undefined FUN_148e5e57e(void)

void FUN_148e5e57e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b978e50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7010;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5e5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5e604 FUN_148e5e604 body=52 status=ok
// SIG undefined FUN_148e5e604(void)

void FUN_148e5e604(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5e635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e5e638 FUN_148e5e638 body=31 status=ok
// SIG undefined FUN_148e5e638(void)

undefined8 FUN_148e5e638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5e672 FUN_148e5e672 body=101 status=ok
// SIG undefined FUN_148e5e672(void)

void FUN_148e5e672(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b7080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e6d8 FUN_148e5e6d8 body=101 status=ok
// SIG undefined FUN_148e5e6d8(void)

void FUN_148e5e6d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b7080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e73e FUN_148e5e73e body=134 status=ok
// SIG undefined FUN_148e5e73e(void)

void FUN_148e5e73e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7080;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5e7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5e7c4 FUN_148e5e7c4 body=39 status=ok
// SIG undefined FUN_148e5e7c4(void)

void FUN_148e5e7c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5e7e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e5e7ec FUN_148e5e7ec body=143 status=ok
// SIG undefined FUN_148e5e7ec(void)

void FUN_148e5e7ec(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e5e896 FUN_148e5e896 body=29 status=ok
// SIG undefined FUN_148e5e896(void)

bool FUN_148e5e896(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5e8b4 FUN_148e5e8b4 body=26 status=ok
// SIG undefined FUN_148e5e8b4(void)

bool FUN_148e5e8b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5e8ce FUN_148e5e8ce body=24 status=ok
// SIG undefined FUN_148e5e8ce(void)

bool FUN_148e5e8ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e5e8f2 FUN_148e5e8f2 body=101 status=ok
// SIG undefined FUN_148e5e8f2(void)

void FUN_148e5e8f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b7160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b70f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e958 FUN_148e5e958 body=101 status=ok
// SIG undefined FUN_148e5e958(void)

void FUN_148e5e958(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b7160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b70f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5e9be FUN_148e5e9be body=134 status=ok
// SIG undefined FUN_148e5e9be(void)

void FUN_148e5e9be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b7160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b70f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5ea35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5ea44 FUN_148e5ea44 body=44 status=ok
// SIG undefined FUN_148e5ea44(void)

void FUN_148e5ea44(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5ea6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5ea8c FUN_148e5ea8c body=29 status=ok
// SIG undefined FUN_148e5ea8c(void)

bool FUN_148e5ea8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5eaaa FUN_148e5eaaa body=26 status=ok
// SIG undefined FUN_148e5eaaa(void)

bool FUN_148e5eaaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5eac4 FUN_148e5eac4 body=24 status=ok
// SIG undefined FUN_148e5eac4(void)

bool FUN_148e5eac4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e5eadc FUN_148e5eadc body=101 status=ok
// SIG undefined FUN_148e5eadc(void)

void FUN_148e5eadc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b71d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5eb42 FUN_148e5eb42 body=101 status=ok
// SIG undefined FUN_148e5eb42(void)

void FUN_148e5eb42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b71d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5eba8 FUN_148e5eba8 body=134 status=ok
// SIG undefined FUN_148e5eba8(void)

void FUN_148e5eba8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b71d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5ec1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5ec2e FUN_148e5ec2e body=42 status=ok
// SIG undefined FUN_148e5ec2e(void)

void FUN_148e5ec2e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5ec55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5ec58 FUN_148e5ec58 body=147 status=ok
// SIG undefined FUN_148e5ec58(void)

void FUN_148e5ec58(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e5ecec FUN_148e5ecec body=31 status=ok
// SIG undefined FUN_148e5ecec(void)

undefined8 FUN_148e5ecec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5ed26 FUN_148e5ed26 body=26 status=ok
// SIG undefined FUN_148e5ed26(void)

bool FUN_148e5ed26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5ed40 FUN_148e5ed40 body=101 status=ok
// SIG undefined FUN_148e5ed40(void)

void FUN_148e5ed40(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b72b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5eda6 FUN_148e5eda6 body=101 status=ok
// SIG undefined FUN_148e5eda6(void)

void FUN_148e5eda6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b72b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5ee0c FUN_148e5ee0c body=134 status=ok
// SIG undefined FUN_148e5ee0c(void)

void FUN_148e5ee0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b72b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5ee83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5ee92 FUN_148e5ee92 body=42 status=ok
// SIG undefined FUN_148e5ee92(void)

void FUN_148e5ee92(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5eeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5eebc FUN_148e5eebc body=154 status=ok
// SIG undefined FUN_148e5eebc(void)

bool FUN_148e5eebc(longlong param_1,undefined4 param_2)

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



// FUNCTION 148e5ef58 FUN_148e5ef58 body=31 status=ok
// SIG undefined FUN_148e5ef58(void)

undefined8 FUN_148e5ef58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5ef92 FUN_148e5ef92 body=101 status=ok
// SIG undefined FUN_148e5ef92(void)

void FUN_148e5ef92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4332c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5eff8 FUN_148e5eff8 body=101 status=ok
// SIG undefined FUN_148e5eff8(void)

void FUN_148e5eff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4332c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f05e FUN_148e5f05e body=134 status=ok
// SIG undefined FUN_148e5f05e(void)

void FUN_148e5f05e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4332c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7320;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5f0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5f0e4 FUN_148e5f0e4 body=42 status=ok
// SIG undefined FUN_148e5f0e4(void)

void FUN_148e5f0e4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5f10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5f10e FUN_148e5f10e body=31 status=ok
// SIG undefined FUN_148e5f10e(void)

undefined8 FUN_148e5f10e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5f148 FUN_148e5f148 body=101 status=ok
// SIG undefined FUN_148e5f148(void)

void FUN_148e5f148(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b74a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f1ae FUN_148e5f1ae body=101 status=ok
// SIG undefined FUN_148e5f1ae(void)

void FUN_148e5f1ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b74a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f214 FUN_148e5f214 body=134 status=ok
// SIG undefined FUN_148e5f214(void)

void FUN_148e5f214(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b74a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5f28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5f29a FUN_148e5f29a body=155 status=ok
// SIG undefined FUN_148e5f29a(void)

void FUN_148e5f29a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_48 = *(undefined8 *)(param_4 + 4);
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_60 = param_6;
  local_68 = param_5;
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e5f336 FUN_148e5f336 body=31 status=ok
// SIG undefined FUN_148e5f336(void)

undefined8 FUN_148e5f336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5f370 FUN_148e5f370 body=101 status=ok
// SIG undefined FUN_148e5f370(void)

void FUN_148e5f370(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f3d6 FUN_148e5f3d6 body=101 status=ok
// SIG undefined FUN_148e5f3d6(void)

void FUN_148e5f3d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f43c FUN_148e5f43c body=134 status=ok
// SIG undefined FUN_148e5f43c(void)

void FUN_148e5f43c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7510;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5f4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5f4c2 FUN_148e5f4c2 body=44 status=ok
// SIG undefined FUN_148e5f4c2(void)

void FUN_148e5f4c2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5f4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5f4ee FUN_148e5f4ee body=76 status=ok
// SIG undefined FUN_148e5f4ee(void)

void FUN_148e5f4ee(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b94002();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148e5f52b;
    }
  }
  lVar2 = 0;
LAB_148e5f52b:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148e5f554 FUN_148e5f554 body=29 status=ok
// SIG undefined FUN_148e5f554(void)

bool FUN_148e5f554(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5f572 FUN_148e5f572 body=26 status=ok
// SIG undefined FUN_148e5f572(void)

bool FUN_148e5f572(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5f58c FUN_148e5f58c body=24 status=ok
// SIG undefined FUN_148e5f58c(void)

bool FUN_148e5f58c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e5f5a4 FUN_148e5f5a4 body=101 status=ok
// SIG undefined FUN_148e5f5a4(void)

void FUN_148e5f5a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b75c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f60a FUN_148e5f60a body=134 status=ok
// SIG undefined FUN_148e5f60a(void)

void FUN_148e5f60a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b75c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5f681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5f690 FUN_148e5f690 body=44 status=ok
// SIG undefined FUN_148e5f690(void)

void FUN_148e5f690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5f6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e5f6bc FUN_148e5f6bc body=156 status=ok
// SIG undefined FUN_148e5f6bc(void)

bool FUN_148e5f6bc(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e5f75a FUN_148e5f75a body=31 status=ok
// SIG undefined FUN_148e5f75a(void)

undefined8 FUN_148e5f75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5f794 FUN_148e5f794 body=29 status=ok
// SIG undefined FUN_148e5f794(void)

bool FUN_148e5f794(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5f7b2 FUN_148e5f7b2 body=26 status=ok
// SIG undefined FUN_148e5f7b2(void)

bool FUN_148e5f7b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5f7cc FUN_148e5f7cc body=101 status=ok
// SIG undefined FUN_148e5f7cc(void)

void FUN_148e5f7cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f832 FUN_148e5f832 body=101 status=ok
// SIG undefined FUN_148e5f832(void)

void FUN_148e5f832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5f898 FUN_148e5f898 body=134 status=ok
// SIG undefined FUN_148e5f898(void)

void FUN_148e5f898(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7630;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5f90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5f91e FUN_148e5f91e body=52 status=ok
// SIG undefined FUN_148e5f91e(void)

void FUN_148e5f91e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e5f94f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148e5f952 FUN_148e5f952 body=31 status=ok
// SIG undefined FUN_148e5f952(void)

undefined8 FUN_148e5f952(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5f978 FUN_148e5f978 body=29 status=ok
// SIG undefined FUN_148e5f978(void)

bool FUN_148e5f978(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5f996 FUN_148e5f996 body=26 status=ok
// SIG undefined FUN_148e5f996(void)

bool FUN_148e5f996(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5f9b0 FUN_148e5f9b0 body=101 status=ok
// SIG undefined FUN_148e5f9b0(void)

void FUN_148e5f9b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b76a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e5fa16 FUN_148e5fa16 body=134 status=ok
// SIG undefined FUN_148e5fa16(void)

void FUN_148e5fa16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b76a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e5fa8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e5fa9c FUN_148e5fa9c body=146 status=ok
// SIG undefined FUN_148e5fa9c(void)

bool FUN_148e5fa9c(longlong param_1)

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



// FUNCTION 148e5fb30 FUN_148e5fb30 body=151 status=ok
// SIG undefined FUN_148e5fb30(void)

void FUN_148e5fb30(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_148dc4074(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0xffffffff;
      puVar2 = puVar2 + 4;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148e5fbc8(param_1,param_2,iVar1 - param_2);
    FUN_148e5fc22(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148e5fbc8 FUN_148e5fbc8 body=89 status=ok
// SIG undefined FUN_148e5fbc8(void)

void FUN_148e5fbc8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_1457e64f1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148e5fc22 FUN_148e5fc22 body=62 status=ok
// SIG undefined FUN_148e5fc22(void)

void FUN_148e5fc22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e5fc60(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148e5fc60 FUN_148e5fc60 body=93 status=ok
// SIG undefined FUN_148e5fc60(void)

ulonglong FUN_148e5fc60(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 148e5fcbe FUN_148e5fcbe body=31 status=ok
// SIG undefined FUN_148e5fcbe(void)

undefined8 FUN_148e5fcbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5fcf8 FUN_148e5fcf8 body=29 status=ok
// SIG undefined FUN_148e5fcf8(void)

bool FUN_148e5fcf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e5fd16 FUN_148e5fd16 body=26 status=ok
// SIG undefined FUN_148e5fd16(void)

bool FUN_148e5fd16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e5fd30 FUN_148e5fd30 body=101 status=ok
// SIG undefined FUN_148e5fd30(void)

void FUN_148e5fd30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b7710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


