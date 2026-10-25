// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e4253e FUN_148e4253e body=101 status=ok
// SIG undefined FUN_148e4253e(void)

void FUN_148e4253e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a7080;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e425a4 FUN_148e425a4 body=101 status=ok
// SIG undefined FUN_148e425a4(void)

void FUN_148e425a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a7080;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e4260a FUN_148e4260a body=134 status=ok
// SIG undefined FUN_148e4260a(void)

void FUN_148e4260a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a7080;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af750;
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
                    /* WARNING: Could not recover jumptable at 0x000148e42681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e42690 FUN_148e42690 body=52 status=ok
// SIG undefined FUN_148e42690(void)

void FUN_148e42690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e426c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e426c4 FUN_148e426c4 body=31 status=ok
// SIG undefined FUN_148e426c4(void)

undefined8 FUN_148e426c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e426fe FUN_148e426fe body=101 status=ok
// SIG undefined FUN_148e426fe(void)

void FUN_148e426fe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e42764 FUN_148e42764 body=101 status=ok
// SIG undefined FUN_148e42764(void)

void FUN_148e42764(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e427ca FUN_148e427ca body=134 status=ok
// SIG undefined FUN_148e427ca(void)

void FUN_148e427ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af7c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e42841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e42850 FUN_148e42850 body=39 status=ok
// SIG undefined FUN_148e42850(void)

void FUN_148e42850(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e42873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e42878 FUN_148e42878 body=31 status=ok
// SIG undefined FUN_148e42878(void)

undefined8 FUN_148e42878(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e428b2 FUN_148e428b2 body=29 status=ok
// SIG undefined FUN_148e428b2(void)

bool FUN_148e428b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e428d0 FUN_148e428d0 body=26 status=ok
// SIG undefined FUN_148e428d0(void)

bool FUN_148e428d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e428ea FUN_148e428ea body=101 status=ok
// SIG undefined FUN_148e428ea(void)

void FUN_148e428ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e42950 FUN_148e42950 body=101 status=ok
// SIG undefined FUN_148e42950(void)

void FUN_148e42950(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e429b6 FUN_148e429b6 body=134 status=ok
// SIG undefined FUN_148e429b6(void)

void FUN_148e429b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af850;
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
                    /* WARNING: Could not recover jumptable at 0x000148e42a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e42a3c FUN_148e42a3c body=39 status=ok
// SIG undefined FUN_148e42a3c(void)

void FUN_148e42a3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e42a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e42a64 FUN_148e42a64 body=31 status=ok
// SIG undefined FUN_148e42a64(void)

undefined8 FUN_148e42a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e42a9e FUN_148e42a9e body=29 status=ok
// SIG undefined FUN_148e42a9e(void)

bool FUN_148e42a9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e42abc FUN_148e42abc body=101 status=ok
// SIG undefined FUN_148e42abc(void)

void FUN_148e42abc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e8e10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af8c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e42b22 FUN_148e42b22 body=101 status=ok
// SIG undefined FUN_148e42b22(void)

void FUN_148e42b22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e8e10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af8c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e42b88 FUN_148e42b88 body=134 status=ok
// SIG undefined FUN_148e42b88(void)

void FUN_148e42b88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e8e10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af8c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e42bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e42c0e FUN_148e42c0e body=42 status=ok
// SIG undefined FUN_148e42c0e(void)

void FUN_148e42c0e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e42c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e42c38 FUN_148e42c38 body=154 status=ok
// SIG undefined FUN_148e42c38(void)

bool FUN_148e42c38(longlong param_1,undefined4 param_2)

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



// FUNCTION 148e42cd4 FUN_148e42cd4 body=31 status=ok
// SIG undefined FUN_148e42cd4(void)

undefined8 FUN_148e42cd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e42d0e FUN_148e42d0e body=29 status=ok
// SIG undefined FUN_148e42d0e(void)

bool FUN_148e42d0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e42d2c FUN_148e42d2c body=26 status=ok
// SIG undefined FUN_148e42d2c(void)

bool FUN_148e42d2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e42d46 FUN_148e42d46 body=101 status=ok
// SIG undefined FUN_148e42d46(void)

void FUN_148e42d46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e42dac FUN_148e42dac body=101 status=ok
// SIG undefined FUN_148e42dac(void)

void FUN_148e42dac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e42e12 FUN_148e42e12 body=134 status=ok
// SIG undefined FUN_148e42e12(void)

void FUN_148e42e12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af930;
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
                    /* WARNING: Could not recover jumptable at 0x000148e42e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e42e98 FUN_148e42e98 body=42 status=ok
// SIG undefined FUN_148e42e98(void)

void FUN_148e42e98(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e42ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e42ec2 FUN_148e42ec2 body=154 status=ok
// SIG undefined FUN_148e42ec2(void)

bool FUN_148e42ec2(longlong param_1,undefined4 param_2)

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



// FUNCTION 148e42f5e FUN_148e42f5e body=31 status=ok
// SIG undefined FUN_148e42f5e(void)

undefined8 FUN_148e42f5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e42f98 FUN_148e42f98 body=29 status=ok
// SIG undefined FUN_148e42f98(void)

bool FUN_148e42f98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e42fb6 FUN_148e42fb6 body=26 status=ok
// SIG undefined FUN_148e42fb6(void)

bool FUN_148e42fb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e42fd0 FUN_148e42fd0 body=101 status=ok
// SIG undefined FUN_148e42fd0(void)

void FUN_148e42fd0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af9a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43036 FUN_148e43036 body=101 status=ok
// SIG undefined FUN_148e43036(void)

void FUN_148e43036(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9af9a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e4309c FUN_148e4309c body=134 status=ok
// SIG undefined FUN_148e4309c(void)

void FUN_148e4309c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9af9a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e43122 FUN_148e43122 body=39 status=ok
// SIG undefined FUN_148e43122(void)

void FUN_148e43122(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e4314a FUN_148e4314a body=31 status=ok
// SIG undefined FUN_148e4314a(void)

undefined8 FUN_148e4314a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e43184 FUN_148e43184 body=101 status=ok
// SIG undefined FUN_148e43184(void)

void FUN_148e43184(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afa80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e431ea FUN_148e431ea body=101 status=ok
// SIG undefined FUN_148e431ea(void)

void FUN_148e431ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afa80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43250 FUN_148e43250 body=134 status=ok
// SIG undefined FUN_148e43250(void)

void FUN_148e43250(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afa80;
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
                    /* WARNING: Could not recover jumptable at 0x000148e432c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e432d6 FUN_148e432d6 body=62 status=ok
// SIG undefined FUN_148e432d6(void)

void FUN_148e432d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e43314 FUN_148e43314 body=31 status=ok
// SIG undefined FUN_148e43314(void)

undefined8 FUN_148e43314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e4334e FUN_148e4334e body=101 status=ok
// SIG undefined FUN_148e4334e(void)

void FUN_148e4334e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afaf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e433b4 FUN_148e433b4 body=101 status=ok
// SIG undefined FUN_148e433b4(void)

void FUN_148e433b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afaf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e4341a FUN_148e4341a body=134 status=ok
// SIG undefined FUN_148e4341a(void)

void FUN_148e4341a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b991aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afaf0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e434a0 FUN_148e434a0 body=44 status=ok
// SIG undefined FUN_148e434a0(void)

void FUN_148e434a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e434c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e434cc FUN_148e434cc body=31 status=ok
// SIG undefined FUN_148e434cc(void)

undefined8 FUN_148e434cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e43506 FUN_148e43506 body=101 status=ok
// SIG undefined FUN_148e43506(void)

void FUN_148e43506(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e4356c FUN_148e4356c body=101 status=ok
// SIG undefined FUN_148e4356c(void)

void FUN_148e4356c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e435d2 FUN_148e435d2 body=134 status=ok
// SIG undefined FUN_148e435d2(void)

void FUN_148e435d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afb60;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e43658 FUN_148e43658 body=44 status=ok
// SIG undefined FUN_148e43658(void)

void FUN_148e43658(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e4369e FUN_148e4369e body=29 status=ok
// SIG undefined FUN_148e4369e(void)

bool FUN_148e4369e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e436bc FUN_148e436bc body=26 status=ok
// SIG undefined FUN_148e436bc(void)

bool FUN_148e436bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e436d6 FUN_148e436d6 body=24 status=ok
// SIG undefined FUN_148e436d6(void)

bool FUN_148e436d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e436ee FUN_148e436ee body=101 status=ok
// SIG undefined FUN_148e436ee(void)

void FUN_148e436ee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43754 FUN_148e43754 body=134 status=ok
// SIG undefined FUN_148e43754(void)

void FUN_148e43754(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afbd0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e437cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e437da FUN_148e437da body=44 status=ok
// SIG undefined FUN_148e437da(void)

void FUN_148e437da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e43806 FUN_148e43806 body=150 status=ok
// SIG undefined FUN_148e43806(void)

void FUN_148e43806(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e4389e FUN_148e4389e body=48 status=ok
// SIG undefined FUN_148e4389e(void)

void FUN_148e4389e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 148e438ce FUN_148e438ce body=76 status=ok
// SIG undefined FUN_148e438ce(void)

void FUN_148e438ce(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b93c5a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148e4390b;
    }
  }
  lVar2 = 0;
LAB_148e4390b:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148e43934 FUN_148e43934 body=29 status=ok
// SIG undefined FUN_148e43934(void)

bool FUN_148e43934(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e43952 FUN_148e43952 body=26 status=ok
// SIG undefined FUN_148e43952(void)

bool FUN_148e43952(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e4396c FUN_148e4396c body=24 status=ok
// SIG undefined FUN_148e4396c(void)

bool FUN_148e4396c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e43984 FUN_148e43984 body=101 status=ok
// SIG undefined FUN_148e43984(void)

void FUN_148e43984(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afcb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e439ea FUN_148e439ea body=134 status=ok
// SIG undefined FUN_148e439ea(void)

void FUN_148e439ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afcb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e43a70 FUN_148e43a70 body=44 status=ok
// SIG undefined FUN_148e43a70(void)

void FUN_148e43a70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e43a9c FUN_148e43a9c body=48 status=ok
// SIG undefined FUN_148e43a9c(void)

void FUN_148e43a9c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 148e43acc FUN_148e43acc body=31 status=ok
// SIG undefined FUN_148e43acc(void)

undefined8 FUN_148e43acc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e43b06 FUN_148e43b06 body=101 status=ok
// SIG undefined FUN_148e43b06(void)

void FUN_148e43b06(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afd20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43b6c FUN_148e43b6c body=101 status=ok
// SIG undefined FUN_148e43b6c(void)

void FUN_148e43b6c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afd20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43bd2 FUN_148e43bd2 body=134 status=ok
// SIG undefined FUN_148e43bd2(void)

void FUN_148e43bd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afd20;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e43c58 FUN_148e43c58 body=39 status=ok
// SIG undefined FUN_148e43c58(void)

void FUN_148e43c58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43c7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e43c80 FUN_148e43c80 body=31 status=ok
// SIG undefined FUN_148e43c80(void)

undefined8 FUN_148e43c80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e43cba FUN_148e43cba body=101 status=ok
// SIG undefined FUN_148e43cba(void)

void FUN_148e43cba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afd90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43d20 FUN_148e43d20 body=101 status=ok
// SIG undefined FUN_148e43d20(void)

void FUN_148e43d20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afd90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43d86 FUN_148e43d86 body=134 status=ok
// SIG undefined FUN_148e43d86(void)

void FUN_148e43d86(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41e020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afd90;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e43e0c FUN_148e43e0c body=52 status=ok
// SIG undefined FUN_148e43e0c(void)

void FUN_148e43e0c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e43e40 FUN_148e43e40 body=31 status=ok
// SIG undefined FUN_148e43e40(void)

undefined8 FUN_148e43e40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e43e7a FUN_148e43e7a body=101 status=ok
// SIG undefined FUN_148e43e7a(void)

void FUN_148e43e7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afe00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43ee0 FUN_148e43ee0 body=101 status=ok
// SIG undefined FUN_148e43ee0(void)

void FUN_148e43ee0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afe00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e43f46 FUN_148e43f46 body=134 status=ok
// SIG undefined FUN_148e43f46(void)

void FUN_148e43f46(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b405fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afe00;
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
                    /* WARNING: Could not recover jumptable at 0x000148e43fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e43fcc FUN_148e43fcc body=44 status=ok
// SIG undefined FUN_148e43fcc(void)

void FUN_148e43fcc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e43ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e43ff8 FUN_148e43ff8 body=31 status=ok
// SIG undefined FUN_148e43ff8(void)

undefined8 FUN_148e43ff8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e44032 FUN_148e44032 body=26 status=ok
// SIG undefined FUN_148e44032(void)

bool FUN_148e44032(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e4404c FUN_148e4404c body=101 status=ok
// SIG undefined FUN_148e4404c(void)

void FUN_148e4404c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b417790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afe70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e440b2 FUN_148e440b2 body=101 status=ok
// SIG undefined FUN_148e440b2(void)

void FUN_148e440b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b417790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afe70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e44118 FUN_148e44118 body=134 status=ok
// SIG undefined FUN_148e44118(void)

void FUN_148e44118(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b417790;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afe70;
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
                    /* WARNING: Could not recover jumptable at 0x000148e4418f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e4419e FUN_148e4419e body=62 status=ok
// SIG undefined FUN_148e4419e(void)

void FUN_148e4419e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e441d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e441dc FUN_148e441dc body=177 status=ok
// SIG undefined FUN_148e441dc(void)

bool FUN_148e441dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 148e4428e FUN_148e4428e body=31 status=ok
// SIG undefined FUN_148e4428e(void)

undefined8 FUN_148e4428e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e442c8 FUN_148e442c8 body=101 status=ok
// SIG undefined FUN_148e442c8(void)

void FUN_148e442c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e4432e FUN_148e4432e body=101 status=ok
// SIG undefined FUN_148e4432e(void)

void FUN_148e4432e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9afee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e44394 FUN_148e44394 body=134 status=ok
// SIG undefined FUN_148e44394(void)

void FUN_148e44394(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9afee0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e4440b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e4441a FUN_148e4441a body=42 status=ok
// SIG undefined FUN_148e4441a(void)

void FUN_148e4441a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e44441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e44444 FUN_148e44444 body=154 status=ok
// SIG undefined FUN_148e44444(void)

bool FUN_148e44444(longlong param_1,undefined4 param_2)

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



// FUNCTION 148e444fa FUN_148e444fa body=29 status=ok
// SIG undefined FUN_148e444fa(void)

bool FUN_148e444fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e44518 FUN_148e44518 body=26 status=ok
// SIG undefined FUN_148e44518(void)

bool FUN_148e44518(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e44532 FUN_148e44532 body=24 status=ok
// SIG undefined FUN_148e44532(void)

bool FUN_148e44532(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e4454a FUN_148e4454a body=101 status=ok
// SIG undefined FUN_148e4454a(void)

void FUN_148e4454a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9aff50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e445b0 FUN_148e445b0 body=134 status=ok
// SIG undefined FUN_148e445b0(void)

void FUN_148e445b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9aff50;
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
                    /* WARNING: Could not recover jumptable at 0x000148e44627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e44636 FUN_148e44636 body=44 status=ok
// SIG undefined FUN_148e44636(void)

void FUN_148e44636(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e4465f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e44662 FUN_148e44662 body=24 status=ok
// SIG undefined FUN_148e44662(void)

void FUN_148e44662(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e44676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e4467a FUN_148e4467a body=293 status=ok
// SIG undefined FUN_148e4467a(void)

undefined4 * FUN_148e4467a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148e447a0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = *(uint *)(puVar1 + 1);
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_148e44886(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148e44978(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e447a0 FUN_148e447a0 body=230 status=ok
// SIG undefined FUN_148e447a0(void)

int * FUN_148e447a0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148e44886 FUN_148e44886 body=128 status=ok
// SIG undefined FUN_148e44886(void)

undefined8 FUN_148e44886(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148e44906(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148e44906 FUN_148e44906 body=114 status=ok
// SIG undefined FUN_148e44906(void)

void FUN_148e44906(longlong *param_1,int param_2)

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



// FUNCTION 148e44978 FUN_148e44978 body=419 status=ok
// SIG undefined FUN_148e44978(void)

void FUN_148e44978(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148e44b1c FUN_148e44b1c body=138 status=ok
// SIG undefined FUN_148e44b1c(void)

void FUN_148e44b1c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148e44ba6 FUN_148e44ba6 body=138 status=ok
// SIG undefined FUN_148e44ba6(void)

void FUN_148e44ba6(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148e44c30 FUN_148e44c30 body=114 status=ok
// SIG undefined FUN_148e44c30(void)

void FUN_148e44c30(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 148e44ca2 FUN_148e44ca2 body=135 status=ok
// SIG undefined FUN_148e44ca2(void)

longlong FUN_148e44ca2(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14427e4d6();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_148e44cdc;
  }
  local_30 = param_3;
  FUN_148e44d2a(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_148e44cdc:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e44d2a FUN_148e44d2a body=292 status=ok
// SIG undefined FUN_148e44d2a(void)

undefined4 * FUN_148e44d2a(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146115f36(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_146115e7c(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14611601e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e44e50 FUN_148e44e50 body=24 status=ok
// SIG undefined FUN_148e44e50(void)

void FUN_148e44e50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e44e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e44e68 FUN_148e44e68 body=29 status=ok
// SIG undefined FUN_148e44e68(void)

undefined8 FUN_148e44e68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e44e86 FUN_148e44e86 body=24 status=ok
// SIG undefined FUN_148e44e86(void)

void FUN_148e44e86(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e44e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e44e9e FUN_148e44e9e body=29 status=ok
// SIG undefined FUN_148e44e9e(void)

undefined8 FUN_148e44e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e44ebc FUN_148e44ebc body=87 status=ok
// SIG undefined FUN_148e44ebc(void)

void FUN_148e44ebc(longlong *param_1,int param_2)

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
  FUN_148e44906();
  return;
}



// FUNCTION 148e44f14 FUN_148e44f14 body=24 status=ok
// SIG undefined FUN_148e44f14(void)

void FUN_148e44f14(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e44f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e44f2c FUN_148e44f2c body=29 status=ok
// SIG undefined FUN_148e44f2c(void)

undefined8 FUN_148e44f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e44f4a FUN_148e44f4a body=24 status=ok
// SIG undefined FUN_148e44f4a(void)

void FUN_148e44f4a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e44f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e44f62 FUN_148e44f62 body=29 status=ok
// SIG undefined FUN_148e44f62(void)

undefined8 FUN_148e44f62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e44f80 FUN_148e44f80 body=31 status=ok
// SIG undefined FUN_148e44f80(void)

undefined8 FUN_148e44f80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e44fba FUN_148e44fba body=101 status=ok
// SIG undefined FUN_148e44fba(void)

void FUN_148e44fba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b0110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e45020 FUN_148e45020 body=101 status=ok
// SIG undefined FUN_148e45020(void)

void FUN_148e45020(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b0110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e45086 FUN_148e45086 body=134 status=ok
// SIG undefined FUN_148e45086(void)

void FUN_148e45086(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41e020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b0110;
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
                    /* WARNING: Could not recover jumptable at 0x000148e450fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e4510c FUN_148e4510c body=52 status=ok
// SIG undefined FUN_148e4510c(void)

void FUN_148e4510c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e4513d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e4515a FUN_148e4515a body=29 status=ok
// SIG undefined FUN_148e4515a(void)

bool FUN_148e4515a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e45178 FUN_148e45178 body=26 status=ok
// SIG undefined FUN_148e45178(void)

bool FUN_148e45178(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e45192 FUN_148e45192 body=24 status=ok
// SIG undefined FUN_148e45192(void)

bool FUN_148e45192(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e451aa FUN_148e451aa body=101 status=ok
// SIG undefined FUN_148e451aa(void)

void FUN_148e451aa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b0180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e45210 FUN_148e45210 body=134 status=ok
// SIG undefined FUN_148e45210(void)

void FUN_148e45210(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b0180;
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
                    /* WARNING: Could not recover jumptable at 0x000148e45287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e45296 FUN_148e45296 body=44 status=ok
// SIG undefined FUN_148e45296(void)

void FUN_148e45296(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e452bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e452c2 FUN_148e452c2 body=48 status=ok
// SIG undefined FUN_148e452c2(void)

void FUN_148e452c2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x130,8);
  }
  return;
}



// FUNCTION 148e452f2 FUN_148e452f2 body=147 status=ok
// SIG undefined FUN_148e452f2(void)

void FUN_148e452f2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e45386 FUN_148e45386 body=219 status=ok
// SIG undefined FUN_148e45386(void)

void FUN_148e45386(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x2f0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
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
  *(undefined4 *)(lVar3 + 0xb0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = DAT_14c948618;
  *(undefined4 *)(param_1 + 0xc0) = DAT_14c948620;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))(param_1 + 0x30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e45462 FUN_148e45462 body=148 status=ok
// SIG undefined FUN_148e45462(void)

void FUN_148e45462(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 8) != 0) {
    lVar2 = FUN_1400d7050(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = FUN_1487c502a(lVar2);
        local_28 = *(undefined8 *)(param_2 + 8);
        local_20 = *(undefined4 *)(param_2 + 0x10);
        FUN_148c39570(lVar2,&local_28,uVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e454f8 FUN_148e454f8 body=367 status=ok
// SIG undefined FUN_148e454f8(void)

void FUN_148e454f8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar3 = FUN_144a7ba4c(lVar3);
      if (lVar3 != 0) {
        lVar3 = FUN_145da44aa(lVar3);
        if (lVar3 != 0) {
          *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 8);
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_1446efa72(&local_38,0,3,0x10);
          puVar1 = local_38;
          local_30 = 3;
          *local_38 = &PTR_LAB_14b972ed0;
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
          local_38[2] = lVar4;
          *local_38 = &PTR_FUN_14b9b35b0;
          local_38[3] = 0;
          FUN_14485c47a(local_38 + 3,param_1);
          puVar1[4] = FUN_148e457d8;
          *(undefined4 *)(puVar1 + 5) = 0;
          FUN_140e3418c(param_2 + 0x14,local_40,1);
          FUN_144268f62(lVar3,local_40,&local_38,0);
          FUN_1449db362(&local_38);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e45668 FUN_148e45668 body=367 status=ok
// SIG undefined FUN_148e45668(void)

void FUN_148e45668(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar3 = FUN_144a7ba4c(lVar3);
      if (lVar3 != 0) {
        lVar3 = FUN_145da44aa(lVar3);
        if (lVar3 != 0) {
          *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 8);
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_1446efa72(&local_38,0,3,0x10);
          puVar1 = local_38;
          local_30 = 3;
          *local_38 = &PTR_LAB_14b972ed0;
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
          local_38[2] = lVar4;
          *local_38 = &PTR_FUN_14b9b35b0;
          local_38[3] = 0;
          FUN_14485c47a(local_38 + 3,param_1);
          puVar1[4] = FUN_148e457d8;
          *(undefined4 *)(puVar1 + 5) = 0;
          local_40 = param_2 + 0x48;
          local_48 = param_2 + 0x38;
          FUN_14615e246(lVar3,param_2 + 0x18,param_2 + 0x28,&local_38);
          FUN_1449db362(&local_38);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e457d8 FUN_148e457d8 body=182 status=ok
// SIG undefined FUN_148e457d8(void)

void FUN_148e457d8(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_14002b5e0(*param_2,&DAT_14b419a98,4);
  if (cVar1 == '\0') {
    cVar1 = FUN_14002b5e0(*param_2,&DAT_14b9abbf8,4);
    if (cVar1 == '\0') {
      cVar1 = FUN_14002b5e0(*param_2,&DAT_14a179933,3);
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x80) == 0) {
          return;
        }
        FUN_148e4596e(param_1,param_1 + 0x80);
      }
    }
    else {
      if (*(int *)(param_1 + 0x80) == 0) {
        return;
      }
      FUN_148e4588e(param_1,param_1 + 0x80);
    }
  }
  else {
    FUN_148e4591c(param_1);
  }
  *(undefined4 *)(param_1 + 0x88) = DAT_14c948620;
  *(undefined8 *)(param_1 + 0x80) = DAT_14c948618;
  return;
}



// FUNCTION 148e4588e FUN_148e4588e body=140 status=ok
// SIG undefined FUN_148e4588e(void)

void FUN_148e4588e(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_20 = param_2[2];
        local_28 = *(undefined8 *)param_2;
        FUN_148c39418(lVar1);
        FUN_1410ef0a8(lVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4591c FUN_148e4591c body=81 status=ok
// SIG undefined FUN_148e4591c(void)

void FUN_148e4591c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1410ef0a8(lVar1);
      FUN_148c39244(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148e4596e FUN_148e4596e body=132 status=ok
// SIG undefined FUN_148e4596e(void)

void FUN_148e4596e(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_20 = param_2[2];
        local_28 = *(undefined8 *)param_2;
        FUN_148c390ec(lVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e459f4 FUN_148e459f4 body=169 status=ok
// SIG undefined FUN_148e459f4(void)

longlong FUN_148e459f4(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2[2] == 0) {
    uVar1 = *param_2;
  }
  else {
    uVar1 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar2 = FUN_1406e4c2c(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    if (*param_1 + (longlong)iVar2 * 0x1d0 != 0) {
      return (longlong)iVar2 * 0x1d0 + *param_1 + 0x10;
    }
  }
  if (param_2[2] != 0) {
    FUN_144a78877(*param_2,param_2[2]);
  }
  iVar2 = FUN_1406e4c2c();
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x1d0 + param_1[10];
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 148e45a9e FUN_148e45a9e body=341 status=ok
// SIG undefined FUN_148e45a9e(void)

void FUN_148e45a9e(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong *local_58;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_144729dda(param_1 + 200);
  if (cVar2 != '\0') {
    local_60 = 0;
    local_38 = 0;
    FUN_1405833e0(&local_60,param_1 + 200);
    plVar4 = (longlong *)FUN_1447262c2(&local_60);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = FUN_14018b740();
      lVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
      if (lVar6 != 0) {
        uVar5 = FUN_14018b740();
        lVar7 = FUN_144718840(lVar6,uVar5);
        if (lVar6 != lVar7) {
          FUN_144a5ac3a(&local_60);
          if (lVar7 != 0) {
            FUN_1402815f4(param_1,&local_60);
            lVar6 = *(longlong *)(CONCAT71(uStack_5f,local_60) + 0xb0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x88));
            *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_58 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
            uVar3 = FUN_144284d2a(param_1,lVar7);
            *(undefined4 *)(lVar6 + 8) = uVar3;
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x88));
          }
          goto LAB_148e45ace;
        }
      }
    }
    FUN_144a5ac3a(&local_60);
  }
LAB_148e45ace:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e45bf4 FUN_148e45bf4 body=216 status=ok
// SIG undefined FUN_148e45bf4(void)

void FUN_148e45bf4(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    cVar4 = FUN_144729dda(param_1 + 200);
    if (cVar4 != '\0') {
      cVar4 = FUN_14069eaf4(param_1 + 200,param_2);
      if (cVar4 != '\0') {
        FUN_1402815f4(param_1,&local_38);
        lVar3 = *(longlong *)(local_38 + 0xb0);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x88));
        *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
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
        *(undefined1 *)(lVar3 + 0x7a) = param_3;
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



// FUNCTION 148e45ce0 FUN_148e45ce0 body=216 status=ok
// SIG undefined FUN_148e45ce0(void)

void FUN_148e45ce0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    cVar4 = FUN_144729dda(param_1 + 200);
    if (cVar4 != '\0') {
      cVar4 = FUN_14069eaf4(param_1 + 200,param_2);
      if (cVar4 != '\0') {
        FUN_1402815f4(param_1,&local_38);
        lVar3 = *(longlong *)(local_38 + 0xb0);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x88));
        *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
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
        *(undefined1 *)(lVar3 + 0x79) = param_3;
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



// FUNCTION 148e45dcc FUN_148e45dcc body=82 status=ok
// SIG undefined FUN_148e45dcc(void)

void FUN_148e45dcc(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_145da4f3c();
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != plVar1) {
    *plVar3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(plVar3 + 1) = (int)param_2[1];
  plVar3[2] = param_3;
  return;
}



// FUNCTION 148e45e1e FUN_148e45e1e body=3516 status=ok
// SIG undefined FUN_148e45e1e(void)

void FUN_148e45e1e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined1 auStack_3c8 [40];
  undefined1 local_3a0 [4];
  undefined1 local_39c [4];
  undefined1 local_398 [4];
  undefined1 local_394 [4];
  longlong *local_390 [2];
  undefined1 local_380 [4];
  undefined1 local_37c [4];
  longlong *local_378 [2];
  undefined1 local_368 [4];
  undefined1 local_364 [4];
  longlong *local_360 [2];
  undefined1 local_350 [4];
  undefined1 local_34c [4];
  longlong *local_348 [2];
  undefined1 local_338 [4];
  undefined1 local_334 [4];
  longlong *local_330 [2];
  undefined1 local_320 [4];
  undefined1 local_31c [4];
  longlong *local_318 [2];
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  longlong *local_300 [2];
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  longlong *local_2e8 [2];
  undefined1 local_2d8 [4];
  undefined1 local_2d4 [4];
  longlong *local_2d0 [2];
  undefined1 local_2c0 [4];
  undefined1 local_2bc [4];
  longlong *local_2b8 [2];
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  longlong *local_2a0 [2];
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  longlong *local_288 [2];
  undefined1 local_278 [4];
  undefined1 local_274 [4];
  longlong *local_270 [2];
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  longlong *local_258 [2];
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  longlong *local_240 [2];
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  longlong *local_228 [2];
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  longlong *local_210 [2];
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  longlong *local_1f8 [2];
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [4];
  longlong *local_1e0 [2];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  longlong *local_1c8 [2];
  wchar_t **local_1b8;
  ulonglong *local_1b0;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  wchar_t *local_198;
  longlong **local_190;
  undefined8 *local_188;
  longlong **local_180;
  undefined8 *local_178;
  longlong **local_170;
  undefined8 *local_168;
  longlong **local_160;
  undefined8 *local_158;
  longlong **local_150;
  undefined8 *local_148;
  longlong **local_140;
  undefined8 *local_138;
  longlong **local_130;
  undefined8 *local_128;
  longlong **local_120;
  undefined8 *local_118;
  longlong **local_110;
  undefined8 *local_108;
  longlong **local_100;
  undefined8 *local_f8;
  longlong **local_f0;
  undefined8 *local_e8;
  longlong **local_e0;
  undefined8 *local_d8;
  longlong **local_d0;
  undefined8 *local_c8;
  longlong **local_c0;
  undefined8 *local_b8;
  longlong **local_b0;
  undefined *local_a8;
  longlong **local_a0;
  undefined8 *local_98;
  longlong **local_90;
  undefined8 *local_88;
  longlong **local_80;
  undefined8 *local_78;
  longlong **local_70;
  undefined8 *local_68;
  longlong **local_60;
  undefined8 *local_58;
  wchar_t **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd77c0) && (FUN_144b3d300(&DAT_14cbd77c0), DAT_14cbd77c0 == -1)) {
    local_198 = L"Dialog_Join";
    local_190._0_4_ = 0xb;
    FUN_1446e940c(local_1cc,&local_198);
    local_198 = L"OakUIDataCollector_Network";
    local_190 = (longlong **)CONCAT44(local_190._4_4_,0x1a);
    FUN_1446e940c(local_1d0,&local_198);
    FUN_140208bae(local_1c8,local_1d0,local_1cc,L"Join");
    local_198 = (wchar_t *)&DAT_14cbd7008;
    local_1a8 = L"Dialog_Invite";
    local_1a0 = 0xd;
    local_190 = local_1c8;
    FUN_1446e940c(local_1e4,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_1e8,&local_1a8);
    FUN_140208bae(local_1e0,local_1e8,local_1e4,L"Invite");
    local_188 = &DAT_14cbd7010;
    local_1a8 = L"Dialog_ViewProfile";
    local_1a0 = 0x12;
    local_180 = local_1e0;
    FUN_1446e940c(local_1fc,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_200,&local_1a8);
    FUN_140208bae(local_1f8,local_200,local_1fc,L"View Profile");
    local_178 = &DAT_14cbd7018;
    local_1a8 = L"Dialog_AddFriend";
    local_1a0 = 0x10;
    local_170 = local_1f8;
    FUN_1446e940c(local_214,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_218,&local_1a8);
    FUN_140208bae(local_210,local_218,local_214,L"Add Friend");
    local_168 = &DAT_14cbd7020;
    local_1a8 = L"Dialog_Mute";
    local_1a0 = 0xb;
    local_160 = local_210;
    FUN_1446e940c(local_22c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_230,&local_1a8);
    FUN_140208bae(local_228,local_230,local_22c,L"Mute");
    local_158 = &DAT_14cbd7028;
    local_1a8 = L"Dialog_Unmute";
    local_1a0 = 0xd;
    local_150 = local_228;
    FUN_1446e940c(local_244,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_248,&local_1a8);
    FUN_140208bae(local_240,local_248,local_244,L"Unmute");
    local_148 = &DAT_14cbd7030;
    local_1a8 = L"Dialog_Promote";
    local_1a0 = 0xe;
    local_140 = local_240;
    FUN_1446e940c(local_25c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_260,&local_1a8);
    FUN_140208bae(local_258,local_260,local_25c,L"Promote");
    local_138 = &DAT_14cbd7038;
    local_1a8 = L"Dialog_Kick";
    local_1a0 = 0xb;
    local_130 = local_258;
    FUN_1446e940c(local_274,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_278,&local_1a8);
    FUN_140208bae(local_270,local_278,local_274,L"Kick");
    local_128 = &DAT_14cbd7040;
    local_1a8 = L"Dialog_AddShiftFriend";
    local_1a0 = 0x15;
    local_120 = local_270;
    FUN_1446e940c(local_28c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_290,&local_1a8);
    FUN_140208bae(local_288,local_290,local_28c,L"Add SHiFT Friend");
    local_118 = &DAT_14cbd7048;
    local_1a8 = L"Dialog_RemoveShiftFriend";
    local_1a0 = 0x18;
    local_110 = local_288;
    FUN_1446e940c(local_2a4,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_2a8,&local_1a8);
    FUN_140208bae(local_2a0,local_2a8,local_2a4,L"Remove SHiFT Friend");
    local_108 = &DAT_14cbd7050;
    local_1a8 = L"Dialog_AddFavorite";
    local_1a0 = 0x12;
    local_100 = local_2a0;
    FUN_1446e940c(local_2bc,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_2c0,&local_1a8);
    FUN_140208bae(local_2b8,local_2c0,local_2bc,L"Add to Favorites");
    local_f8 = &DAT_14cbd7058;
    local_1a8 = L"Dialog_RemoveFavorite";
    local_1a0 = 0x15;
    local_f0 = local_2b8;
    FUN_1446e940c(local_2d4,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_2d8,&local_1a8);
    FUN_140208bae(local_2d0,local_2d8,local_2d4,L"Remove from Favorites");
    local_e8 = &DAT_14cbd7060;
    local_1a8 = L"Dialog_BlockShiftPlayer";
    local_1a0 = 0x17;
    local_e0 = local_2d0;
    FUN_1446e940c(local_2ec,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_2f0,&local_1a8);
    FUN_140208bae(local_2e8,local_2f0,local_2ec,L"Block Player via SHiFT");
    local_d8 = &DAT_14cbd7068;
    local_1a8 = L"Dialog_UnblockShiftPlayer";
    local_1a0 = 0x19;
    local_d0 = local_2e8;
    FUN_1446e940c(local_304,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_308,&local_1a8);
    FUN_140208bae(local_300,local_308,local_304,L"Unblock Player via SHiFT");
    local_c8 = &DAT_14cbd7070;
    local_1a8 = L"Dialog_ReportShiftPlayer";
    local_1a0 = 0x18;
    local_c0 = local_300;
    FUN_1446e940c(local_31c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_320,&local_1a8);
    FUN_140208bae(local_318,local_320,local_31c,L"Report Player");
    local_b8 = &DAT_14cbd7078;
    local_1a8 = L"Dialog_InviteFriend";
    local_1a0 = 0x13;
    local_b0 = local_318;
    FUN_1446e940c(local_334,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_338,&local_1a8);
    FUN_140208bae(local_330,local_338,local_334,L"Invite Friend");
    local_a8 = &DAT_14cbd7080;
    local_1a8 = L"Dialog_InviteRecentFriends";
    local_1a0 = 0x1a;
    local_a0 = local_330;
    FUN_1446e940c(local_34c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_350,&local_1a8);
    FUN_140208bae(local_348,local_350,local_34c,L"Invite Recent Friends");
    local_98 = &DAT_14cbd7088;
    local_1a8 = L"Dialog_JoinRecentFriendsHost";
    local_1a0 = 0x1c;
    local_90 = local_348;
    FUN_1446e940c(local_364,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_368,&local_1a8);
    FUN_140208bae(local_360,local_368,local_364,L"Join Party Leader");
    local_88 = &DAT_14cbd7090;
    local_1a8 = L"Dialog_ViewProfiles";
    local_1a0 = 0x13;
    local_80 = local_360;
    FUN_1446e940c(local_37c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_380,&local_1a8);
    FUN_140208bae(local_378,local_380,local_37c,L"View Profiles");
    local_78 = &DAT_14cbd7098;
    local_1a8 = L"Dialg_TeleportToPlayer";
    local_1a0 = 0x16;
    local_70 = local_378;
    FUN_1446e940c(local_394,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_398,&local_1a8);
    FUN_140208bae(local_390,local_398,local_394,L"Teleport to Player");
    local_68 = &DAT_14cbd70a0;
    local_1a8 = L"Dialog_Cancel";
    local_1a0 = 0xd;
    local_60 = local_390;
    FUN_1446e940c(local_39c,&local_1a8);
    local_1a8 = L"OakUIDataCollector_Network";
    local_1a0 = 0x1a;
    FUN_1446e940c(local_3a0,&local_1a8);
    FUN_140208bae(&local_1a8,local_3a0,local_39c,L"Cancel");
    local_58 = &DAT_14cbd70a8;
    local_1b0 = &local_48;
    local_1b8 = &local_198;
    local_50 = &local_1a8;
    FUN_148e46bdc();
    if (local_1a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1a8 + 0x10))();
    }
    if (local_390[0] != (longlong *)0x0) {
      (**(code **)(*local_390[0] + 0x10))();
    }
    if (local_378[0] != (longlong *)0x0) {
      (**(code **)(*local_378[0] + 0x10))();
    }
    if (local_360[0] != (longlong *)0x0) {
      (**(code **)(*local_360[0] + 0x10))();
    }
    if (local_348[0] != (longlong *)0x0) {
      (**(code **)(*local_348[0] + 0x10))();
    }
    if (local_330[0] != (longlong *)0x0) {
      (**(code **)(*local_330[0] + 0x10))();
    }
    if (local_318[0] != (longlong *)0x0) {
      (**(code **)(*local_318[0] + 0x10))();
    }
    if (local_300[0] != (longlong *)0x0) {
      (**(code **)(*local_300[0] + 0x10))();
    }
    if (local_2e8[0] != (longlong *)0x0) {
      (**(code **)(*local_2e8[0] + 0x10))();
    }
    if (local_2d0[0] != (longlong *)0x0) {
      (**(code **)(*local_2d0[0] + 0x10))();
    }
    if (local_2b8[0] != (longlong *)0x0) {
      (**(code **)(*local_2b8[0] + 0x10))();
    }
    if (local_2a0[0] != (longlong *)0x0) {
      (**(code **)(*local_2a0[0] + 0x10))();
    }
    if (local_288[0] != (longlong *)0x0) {
      (**(code **)(*local_288[0] + 0x10))();
    }
    if (local_270[0] != (longlong *)0x0) {
      (**(code **)(*local_270[0] + 0x10))();
    }
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    if (local_240[0] != (longlong *)0x0) {
      (**(code **)(*local_240[0] + 0x10))();
    }
    if (local_228[0] != (longlong *)0x0) {
      (**(code **)(*local_228[0] + 0x10))();
    }
    if (local_210[0] != (longlong *)0x0) {
      (**(code **)(*local_210[0] + 0x10))();
    }
    if (local_1f8[0] != (longlong *)0x0) {
      (**(code **)(*local_1f8[0] + 0x10))();
    }
    if (local_1e0[0] != (longlong *)0x0) {
      (**(code **)(*local_1e0[0] + 0x10))();
    }
    if (local_1c8[0] != (longlong *)0x0) {
      (**(code **)(*local_1c8[0] + 0x10))();
    }
    atexit(FUN_1442854bb);
    _Init_thread_footer(&DAT_14cbd77c0);
  }
  if (DAT_14cbd7778 != DAT_14cbd77a4) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    puVar4 = &DAT_14cbd77a8;
    if (DAT_14cbd77b0 != (undefined *)0x0) {
      puVar4 = DAT_14cbd77b0;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14cbd77b8 - 1U &
                              (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar5 = DAT_14cbd7770 + (longlong)iVar1 * 0x20;
      if (*(longlong *)(DAT_14cbd7770 + (longlong)iVar1 * 0x20) == param_2) goto LAB_148e45ecf;
      iVar1 = *(int *)(lVar5 + 0x18);
    }
  }
  lVar5 = 0;
LAB_148e45ecf:
  FUN_148e45dcc(param_1,lVar5 + 8,param_2);
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e46bdc FUN_148e46bdc body=282 status=ok
// SIG undefined FUN_148e46bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148e46bdc(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cbd7790 = 0;
  DAT_14cbd7798 = 0;
  DAT_14cbd7770 = 0;
  _DAT_14cbd7778 = 0;
  _DAT_14cbd779c = 0xffffffff00000080;
  DAT_14cbd77a4 = 0;
  DAT_14cbd77b0 = 0;
  DAT_14cbd77b8 = 0;
  uVar4 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_148e51eee(uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cbd77b8 == 0) || (DAT_14cbd77b8 < iVar2)) {
      DAT_14cbd77b8 = iVar2;
      FUN_1469eb2d0(&DAT_14cbd7770);
    }
  }
  puVar5 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_1469eaf2a(&DAT_14cbd7770,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e46cf8 FUN_148e46cf8 body=89 status=ok
// SIG undefined FUN_148e46cf8(void)

void FUN_148e46cf8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1408bb964(param_1 + 0x44);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x48), plVar1 != (longlong *)0x0)) {
      lVar2 = FUN_140b6d0be();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148e46d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x338))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e46ed6 FUN_148e46ed6 body=139 status=ok
// SIG undefined FUN_148e46ed6(void)

void FUN_148e46ed6(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140059518((longlong)param_1 + 0x44);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar3 = FUN_14094c996(uVar2);
    if (lVar3 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_1416a30d0(lVar3,*(undefined4 *)(lVar1 + 0xe0),5,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e46f62 FUN_148e46f62 body=255 status=ok
// SIG undefined FUN_148e46f62(void)

void FUN_148e46f62(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_140059518((longlong)param_1 + 0x44);
  if (lVar4 != 0) {
    lVar5 = FUN_14030d4a0();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      cVar3 = FUN_14586c8ca(lVar4,param_2);
      if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_140b6deae(&local_30,uVar6,param_2);
      if (local_30 != 0) {
        cVar3 = FUN_14586c8ca(lVar4);
        if (cVar3 != '\0') {
          FUN_148dad0ea(lVar4,local_30);
        }
      }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e47074 FUN_148e47074 body=255 status=ok
// SIG undefined FUN_148e47074(void)

void FUN_148e47074(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_140059518((longlong)param_1 + 0x44);
  if (lVar4 != 0) {
    lVar5 = FUN_14030d4a0();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      cVar3 = FUN_148dad112(lVar4,param_2);
      if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_140b6deae(&local_30,uVar6,param_2);
      if (local_30 != 0) {
        cVar3 = FUN_148dad112(lVar4);
        if (cVar3 != '\0') {
          FUN_148dad146(lVar4,local_30);
        }
      }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e47186 FUN_148e47186 body=549 status=ok
// SIG undefined FUN_148e47186(void)

void FUN_148e47186(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  longlong *local_60;
  undefined4 local_54;
  undefined8 **ppuStack_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = 0x40a00000;
  local_60 = *(longlong **)(param_2 + 0x10);
  if (local_60 == (longlong *)0x0) {
LAB_148e471b9:
    local_60 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)local_60[1];
    do {
      if (iVar7 == 0) goto LAB_148e471b9;
      LOCK();
      iVar5 = (int)local_60[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(local_60 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
  }
  local_68 = (undefined8 *)0x0;
  if (local_60 != (longlong *)0x0) {
    local_68 = *(undefined8 **)(param_2 + 8);
  }
  ppuStack_50 = &local_68;
  local_48 = (longlong *)&local_54;
  FUN_148e52726(param_1 + 0x2f8,local_3c,&ppuStack_50);
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x348) == 0) || (*(longlong *)(param_1 + 0x350) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x350) + 8) < 1)) {
    uVar8 = FUN_1401cb356();
    local_68 = (undefined8 *)0x0;
    local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar4 = local_68;
    local_60 = (longlong *)CONCAT44(local_60._4_4_,3);
    *local_68 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_68[2] = lVar9;
    *local_68 = &PTR_FUN_14b9b47f0;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    *(undefined4 *)(puVar4 + 5) = 0;
    puVar4[4] = FUN_148e473ac;
    local_78 = 0;
    FUN_1405f67fc(uVar8,&ppuStack_50,&local_68,L"TickInviteShortcutCooldowns");
    if ((undefined8 ***)(param_1 + 0x348) != &ppuStack_50) {
      *(undefined8 ***)(param_1 + 0x348) = ppuStack_50;
      ppuStack_50 = (undefined8 **)0x0;
      plVar3 = *(longlong **)(param_1 + 0x350);
      *(longlong **)(param_1 + 0x350) = local_48;
      local_48 = (longlong *)0x0;
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
    plVar3 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    FUN_1449db362(&local_68);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e473ac FUN_148e473ac body=451 status=ok
// SIG undefined FUN_148e473ac(void)

bool FUN_148e473ac(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)(param_1 + 0x2f8);
  local_58 = param_1 + 0x308;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 800) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_68 = 0;
  local_a0 = plVar2;
  local_78 = plVar2;
  local_70 = plVar2;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      fVar5 = *(float *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x20) - param_2;
      *(float *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x20) = fVar5;
      if (fVar5 <= 0.0) {
        FUN_148e53020(local_78,iStack_84);
        local_68 = CONCAT11(local_68._1_1_,1);
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
    if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
      FUN_148e52b40(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
    }
  }
  iVar3 = *(int *)(param_1 + 0x300);
  iVar4 = *(int *)(param_1 + 0x32c);
  if (iVar3 <= iVar4) {
    plVar2 = *(longlong **)(param_1 + 0x350);
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar4 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e47570 FUN_148e47570 body=4116 status=ok
// SIG undefined FUN_148e47570(void)

void FUN_148e47570(undefined **param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong **pplVar14;
  undefined1 *puVar15;
  undefined **ppuVar16;
  bool bVar17;
  undefined1 auStack_2d8 [32];
  longlong **local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a0;
  undefined **local_298;
  longlong local_290;
  longlong *local_288;
  undefined4 local_280;
  longlong local_278;
  ulonglong uStack_270;
  longlong *local_268 [2];
  longlong *local_258 [2];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  longlong *local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  longlong *plStack_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  longlong *plStack_1a0;
  longlong *local_190;
  int local_188;
  wchar_t *local_180;
  undefined4 local_178;
  undefined **local_148;
  longlong *plStack_140;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong *local_110 [2];
  longlong *local_100 [2];
  longlong *local_f0 [2];
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined **local_90;
  longlong *plStack_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  cVar7 = FUN_140b6c352();
  if (cVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2d8);
  }
  plVar8 = (longlong *)FUN_140059518((undefined2 *)((longlong)param_1 + 0x44));
  if ((((plVar8 == (longlong *)0x0) ||
       (lVar9 = (**(code **)(*param_1 + 0x180))(param_1), lVar9 == 0)) ||
      (*(longlong *)(lVar9 + 0x1f0) == 0)) ||
     ((lVar9 = FUN_140cb14ac(), lVar9 == 0 || (*(longlong *)(lVar9 + 0x30) == 0))))
  goto LAB_148e475eb;
  local_180 = L"ConfirmInviteRecentsNoFriendsToInvite";
  local_178 = 0x25;
  local_290 = *(longlong *)(lVar9 + 0x30);
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(local_b0,&local_180);
  FUN_140208bae(local_a0,local_b0,&local_90,
                L"Your current character\'s most recent party has no more friends to invite.");
  local_180 = L"ConfirmInviteRecentsOneFriendsToInvite";
  local_178 = 0x26;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(local_c0,&local_180);
  FUN_140208bae(local_b0,local_c0,&local_90,
                L"Would you like to reform your current character\'s most recent party?[newline]Friend to invite: {Friend1}."
               );
  local_180 = L"ConfirmInviteRecentTwoFriendsToInvite";
  local_178 = 0x25;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(local_d0,&local_180);
  FUN_140208bae(local_c0,local_d0,&local_90,
                L"Would you like to reform your current character\'s most recent party?[newline]Friends to invite: {Friend1}, {Friend2}."
               );
  local_180 = L"ConfirmInviteRecentThreeFriendsToInvite";
  local_178 = 0x27;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(&local_e0,&local_180);
  FUN_140208bae(local_d0,&local_e0,&local_90,
                L"Would you like to reform your current character\'s most recent party?[newline]Friends to invite: {Friend1}, {Friend2}, {Friend3}."
               );
  local_180 = L"ConfirmInviteRecentPreviousHostSelf";
  local_178 = 0x23;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(local_f0,&local_180);
  FUN_140208bae(&local_e0,local_f0,&local_90,
                L"[newline]You are the [recent_party_leader_icon]previous party leader.");
  local_180 = L"ConfirmInviteRecentOneFriendsInParty";
  local_178 = 0x24;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(local_100,&local_180);
  FUN_140208bae(local_f0,local_100,&local_90,L"[newline]Friend already in current party: {Friend1}."
               );
  lVar9 = local_290;
  local_180 = L"ConfirmInviteRecentTwoFriendsInParty";
  local_178 = 0x24;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(local_110,&local_180);
  FUN_140208bae(local_100,local_110,&local_90,
                L"[newline]Friends already in current party: {Friend1}, {Friend2}.");
  local_180 = L"ConfirmInviteRecentThreeFriendsInParty";
  local_178 = 0x26;
  FUN_1446e940c(&local_90,&local_180);
  local_180 = L"OakUIDataCollector_Network";
  local_178 = 0x1a;
  FUN_1446e940c(&local_128,&local_180);
  FUN_140208bae(local_110,&local_128,&local_90,
                L"[newline]Friends already in current party: {Friend1}, {Friend2}, {Friend3}.");
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (undefined **)0x0;
  plStack_140 = (longlong *)0x0;
  FUN_148a9a0a6(lVar9,&local_180,(int)plVar8[0x1c]);
  local_298 = param_1;
  if (local_180 == (wchar_t *)0x0) {
    bVar5 = false;
  }
  else {
    (**(code **)(*plVar8 + 0x350))(plVar8,&local_90);
    if ((&DAT_149fc1b6e)[(byte)local_78] == '\x01') {
      if ((plStack_88 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plStack_88 + 0x28))(), cVar7 == '\0')) goto LAB_148e47a45;
LAB_148e484e2:
      pwVar6 = local_180;
      puVar10 = (undefined8 *)FUN_14127b0d4(&local_90);
      cVar7 = (**(code **)*puVar10)(puVar10,pwVar6);
      bVar5 = true;
      if (cVar7 == '\0') {
        iVar3 = *(int *)(param_1 + 0x24);
        if ((longlong)iVar3 == 0) goto LAB_148e47a45;
        puVar4 = param_1[0x23];
        lVar13 = 0;
        do {
          cVar7 = (**(code **)**(undefined8 **)(puVar4 + lVar13))
                            (*(undefined8 **)(puVar4 + lVar13),local_180);
          bVar5 = false;
          if (cVar7 != '\0') break;
          bVar17 = (longlong)iVar3 * 0x38 + -0x38 != lVar13;
          lVar13 = lVar13 + 0x38;
          bVar5 = false;
        } while (bVar17);
      }
    }
    else {
      if (((ulonglong)plStack_88 & 0xffffff) != 0) goto LAB_148e484e2;
LAB_148e47a45:
      bVar5 = false;
    }
    local_90 = &PTR_FUN_14a5af930;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    local_90 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_78])(&plStack_88);
  }
  FUN_140b6fd58(lVar9,&local_190,(int)plVar8[0x1c]);
  if ((longlong)local_188 != 0) {
    lVar9 = (longlong)local_188 * 0x38;
    plVar12 = local_190;
    do {
      local_1a8 = (undefined **)0x0;
      plStack_1a0 = (longlong *)0x0;
      local_1b8 = (longlong *)0x0;
      uStack_1b0 = 0;
      local_1c8 = (longlong *)0x0;
      plStack_1c0 = (longlong *)0x0;
      local_2b8 = &local_1c8;
      cVar7 = FUN_1418bfe34(plVar8,plVar12,&local_1a8,&local_1b8);
      if (cVar7 != '\0') {
        FUN_145d1c6f4(&local_1b8,&local_1a8);
        if ((((!bVar5) && (local_180 != (wchar_t *)0x0)) && (*plVar12 != 0)) &&
           (cVar7 = (*(code *)**(undefined8 **)local_180)(), cVar7 != '\0')) {
          ppuVar16 = (undefined **)&DAT_149dfb77a;
          if ((int)plStack_1a0 != 0) {
            ppuVar16 = local_1a8;
          }
          FUN_140002266(&local_90,L"[recent_party_leader_icon]%s",ppuVar16);
          if (local_1a8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          local_1a8 = local_90;
          plStack_1a0 = plStack_88;
        }
        if ((char)plVar12[6] == '\x01') {
          FUN_140002266(&local_90,L"Friend%d",(int)uStack_130 + 1);
          if (local_148 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          local_148 = local_90;
          plStack_140 = plStack_88;
          FUN_140009b9a(&local_1d8,&local_1a8);
          local_90 = (undefined **)CONCAT44(local_90._4_4_,4);
          FUN_14023423e(&local_80,&local_1d8);
          plVar11 = &local_138;
        }
        else {
          FUN_140002266(&local_90,L"Friend%d",(int)uStack_120 + 1);
          if (local_148 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          local_148 = local_90;
          plStack_140 = plStack_88;
          FUN_140009b9a(&local_1d8,&local_1a8);
          local_90 = (undefined **)CONCAT44(local_90._4_4_,4);
          FUN_14023423e(&local_80,&local_1d8);
          plVar11 = &local_128;
        }
        FUN_1467e355c(plVar11,&local_148,&local_90);
        if (local_80 != (longlong *)0x0) {
          (**(code **)(*local_80 + 0x10))();
          local_80 = (longlong *)0x0;
          local_78 = 0;
        }
        if (local_1d8 != (longlong *)0x0) {
          (**(code **)(*local_1d8 + 0x10))();
        }
      }
      plVar11 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_1c0)(plStack_1c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (local_1b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_1a8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      plVar12 = plVar12 + 7;
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
  }
  FUN_144a5dc74(&local_1a8);
  FUN_144a5dc74(&local_1b8);
  FUN_144a5dc74(&local_1c8);
  switch(uStack_120 & 0xffffffff) {
  case 0:
    FUN_14023409e(local_1e8,local_a0,1);
    FUN_140233c04(&local_90,local_1e8,&local_128);
    FUN_140008f88(&local_1a8,&local_90);
    if (local_90 != (undefined **)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    bVar17 = false;
    goto LAB_148e47e67;
  case 1:
    puVar15 = local_1f8;
    pplVar14 = local_b0;
    break;
  case 2:
    puVar15 = local_208;
    pplVar14 = local_c0;
    break;
  case 3:
    puVar15 = local_218;
    pplVar14 = local_d0;
    break;
  default:
    bVar17 = true;
    goto LAB_148e47e67;
  }
  bVar17 = true;
  FUN_14023409e(puVar15,pplVar14,1);
  FUN_140233c04(&local_90,puVar15,&local_128);
  FUN_140008f88(&local_1a8,&local_90);
  if (local_90 != (undefined **)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
LAB_148e47e67:
  plVar12 = local_1b8;
  ppuVar16 = local_298;
  if (bVar5) {
    if (local_1b8 != local_e0) {
      local_1b8 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 8))();
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,local_d8);
  }
  if ((int)uStack_130 == 3) {
    puVar15 = local_248;
    pplVar14 = local_110;
LAB_148e47f00:
    FUN_14023409e(puVar15,pplVar14,1);
    FUN_140233c04(&local_90,puVar15,&local_138);
    FUN_140008f88(&local_1c8,&local_90);
    if (local_90 != (undefined **)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  else {
    if ((int)uStack_130 == 2) {
      puVar15 = local_238;
      pplVar14 = local_100;
      goto LAB_148e47f00;
    }
    if ((int)uStack_130 == 1) {
      puVar15 = local_228;
      pplVar14 = local_f0;
      goto LAB_148e47f00;
    }
  }
  local_1d8 = (longlong *)0x0;
  uStack_1d0 = 0;
  cVar7 = FUN_144a7c5f6(&local_1a8);
  if (cVar7 == '\0') {
    puVar10 = (undefined8 *)FUN_1447a1f4a(&local_1a8);
    iVar3 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_1d8,*puVar10,iVar3);
  }
  cVar7 = FUN_144a7c5f6(&local_1c8);
  if (cVar7 == '\0') {
    puVar10 = (undefined8 *)FUN_1447a1f4a(&local_1c8);
    iVar3 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_1d8,*puVar10,iVar3);
  }
  cVar7 = FUN_144a7c5f6(&local_1b8);
  if (cVar7 == '\0') {
    puVar10 = (undefined8 *)FUN_1447a1f4a(&local_1b8);
    iVar3 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_1d8,*puVar10,iVar3);
  }
  cVar7 = FUN_148a9a270(local_290,(int)plVar8[0x1c]);
  if (cVar7 == '\0') {
    local_90 = (undefined **)0x14b9b1aaa;
    plStack_88._0_4_ = 0x27;
    FUN_1446e940c(local_258,&local_90);
    local_90 = (undefined **)0x14b9b0bfc;
    plStack_88 = (longlong *)CONCAT44(plStack_88._4_4_,0x1a);
    FUN_1446e940c(local_268,&local_90);
    FUN_140208bae(&local_90,local_268,local_258,
                  L"[newline][WARNING] You do not have enough room in your party for all remaining previous party members to join. Invites may still be sent, however."
                 );
    puVar10 = (undefined8 *)FUN_1447a1f4a(&local_90);
    iVar3 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_1d8,*puVar10,iVar3);
    if (local_90 != (undefined **)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  local_90 = (undefined **)0x14b9b1b2e;
  plStack_88._0_4_ = 0x20;
  FUN_1446e940c(local_268,&local_90);
  local_90 = (undefined **)0x14b9b0bfc;
  plStack_88 = (longlong *)CONCAT44(plStack_88._4_4_,0x1a);
  FUN_1446e940c(&local_278,&local_90);
  FUN_140208bae(local_258,&local_278,local_268,L"Reform Party With Friends");
  FUN_140009b9a(local_268,&local_1d8);
  local_278 = 0;
  uStack_270 = 0;
  if (bVar17) {
    FUN_148e45e1e(&local_278,DAT_14cbd7010);
  }
  cVar7 = FUN_148e485a8(ppuVar16);
  if (cVar7 != '\0') {
    FUN_148e45e1e(&local_278,DAT_14cbd7090);
  }
  lVar9 = FUN_14030d4a0();
  if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (plVar12 = plVar8,
     *(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
     lVar9 + 0x30)) {
    plVar12 = (longlong *)0x0;
  }
  cVar7 = FUN_14662f7ba(plVar12,&local_190);
  if (cVar7 != '\0') {
    FUN_148e45e1e(&local_278,DAT_14cbd7098);
  }
  FUN_148e45e1e(&local_278,DAT_14cbd70a8);
  iVar3 = local_188;
  plVar12 = local_190;
  local_90 = ppuVar16;
  plStack_88 = (longlong *)0x0;
  local_80 = (longlong *)CONCAT44(local_80._4_4_,local_188);
  if (local_188 == 0) {
    local_80 = (longlong *)0x0;
  }
  else {
    FUN_140b70aa4(&plStack_88,local_188,0);
    FUN_140b709f1(plStack_88,plVar12,iVar3);
  }
  local_288 = (longlong *)0x0;
  local_280 = 0;
  FUN_1446efa72(&local_288,0,4,0x10);
  plVar12 = local_288;
  local_280 = 4;
  *local_288 = (longlong)&PTR_LAB_14b972ed0;
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
  local_288[2] = lVar13;
  *local_288 = (longlong)&PTR_FUN_14b9b4860;
  local_288[3] = 0;
  FUN_14485c47a(local_288 + 3,ppuVar16);
  plVar12[4] = (longlong)local_90;
  plVar12[5] = (longlong)plStack_88;
  plStack_88 = (longlong *)0x0;
  *(undefined4 *)(plVar12 + 6) = (undefined4)local_80;
  *(undefined4 *)((longlong)plVar12 + 0x34) = local_80._4_4_;
  local_80 = (longlong *)0x0;
  lVar9 = FUN_145da44aa(plVar8);
  if (lVar9 != 0) {
    local_2a0 = 1;
    local_2a8 = 0;
    local_2b0 = 0;
    local_2b8 = &local_288;
    FUN_1459dd948(lVar9,local_258,local_268,&local_278);
  }
  FUN_1449db362(&local_288);
  FUN_140cb1696(plStack_88,(ulonglong)local_80 & 0xffffffff);
  if (plStack_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140e0067b(local_278,uStack_270 & 0xffffffff);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if (local_268[0] != (longlong *)0x0) {
    (**(code **)(*local_268[0] + 0x10))();
  }
  if (local_258[0] != (longlong *)0x0) {
    (**(code **)(*local_258[0] + 0x10))();
  }
  if (local_1d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (longlong *)0x0) {
    (**(code **)(*local_1c8 + 0x10))();
  }
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 0x10))();
  }
  if (local_1a8 != (undefined **)0x0) {
    (**(code **)(*local_1a8 + 0x10))();
  }
  FUN_140cb1696(local_190,local_188);
  if (local_190 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14154e5cc(&local_180);
  if (local_148 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_14010f8af(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_14010f8af(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_110[0] != (longlong *)0x0) {
    (**(code **)(*local_110[0] + 0x10))();
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
LAB_148e475eb:
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e485a8 FUN_148e485a8 body=239 status=ok
// SIG undefined FUN_148e485a8(void)

ulonglong FUN_148e485a8(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_140cb14ac();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      lVar4 = FUN_140059518((longlong)param_1 + 0x44);
      if (lVar4 != 0) {
        lVar5 = FUN_14030d4a0();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_148a9a0a6(lVar3,local_58,*(undefined4 *)(lVar4 + 0xe0));
          if (local_48 == 0) {
LAB_148e48674:
            if (local_58[0] == 0) {
              uVar6 = 0;
            }
            else {
              uVar2 = FUN_145ed83ea(lVar4);
              uVar6 = (ulonglong)uVar2;
            }
          }
          else {
            cVar1 = FUN_145ed83ea(lVar4);
            uVar6 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
            if (cVar1 == '\0') goto LAB_148e48674;
          }
          FUN_14154e5cc(local_58);
          goto LAB_148e48624;
        }
      }
    }
  }
  uVar6 = 0;
LAB_148e48624:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e48c0e FUN_148e48c0e body=1471 status=ok
// SIG undefined FUN_148e48c0e(void)

void FUN_148e48c0e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined1 local_170;
  longlong *local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  longlong *local_128 [2];
  longlong local_118;
  longlong *plStack_110;
  longlong local_108 [2];
  longlong *local_f8;
  ulonglong uStack_f0;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  longlong *local_90 [2];
  wchar_t *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar6 = FUN_140059518(param_1 + 0x44);
  if (lVar6 == 0) goto LAB_148e48c4c;
  local_80 = L"RecentFriendsNotInvitedHeader";
  uStack_78 = 0x1d;
  FUN_1446e940c(local_a0,&local_80);
  local_80 = L"OakUIDataCollector_Network";
  uStack_78 = 0x1a;
  FUN_1446e940c(local_b0,&local_80);
  FUN_140208bae(local_90,local_b0,local_a0,L"Previous Party Members Not Invited");
  local_80 = L"RecentFriendsNotInvitedBodyOneFriend";
  uStack_78 = 0x24;
  FUN_1446e940c(local_b0,&local_80);
  local_80 = L"OakUIDataCollector_Network";
  uStack_78 = 0x1a;
  FUN_1446e940c(local_c0,&local_80);
  FUN_140208bae(local_a0,local_c0,local_b0,
                L"The following previous party member is offline and could not be invited: {Friend1}."
               );
  local_80 = L"RecentFriendsNotInvitedBodyTwoFriends";
  uStack_78 = 0x25;
  FUN_1446e940c(local_c0,&local_80);
  local_80 = L"OakUIDataCollector_Network";
  uStack_78 = 0x1a;
  FUN_1446e940c(&local_d8,&local_80);
  FUN_140208bae(local_b0,&local_d8,local_c0,
                L"The following previous party members are offline and could not be invited: {Friend1}, {Friend2}."
               );
  local_80 = L"RecentFriendsNotInvitedBodyThreeFriends";
  uStack_78 = 0x27;
  FUN_1446e940c(&local_d8,&local_80);
  local_80 = L"OakUIDataCollector_Network";
  uStack_78 = 0x1a;
  FUN_1446e940c(&local_e8,&local_80);
  FUN_140208bae(local_c0,&local_e8,&local_d8,
                L"The following previous party members are offline and could not be invited: {Friend1}, {Friend2}, {Friend3}."
               );
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (wchar_t *)0x0;
  uStack_e0 = 0;
  local_160 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = *param_2;
    lVar9 = (longlong)(int)param_2[1] * 0x38;
    do {
      local_f8 = (longlong *)0x0;
      uStack_f0 = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      local_188 = &local_118;
      cVar5 = FUN_1418bfe34(lVar6,lVar8,&local_f8,local_108);
      if (cVar5 != '\0') {
        FUN_145d1c6f4(local_108,&local_f8);
        FUN_140002266(&local_80,L"Friend%d",(int)uStack_d0 + 1);
        if (local_e8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_e8 = local_80;
        uStack_e0 = CONCAT44(uStack_74,uStack_78);
        FUN_140009b9a(local_128,&local_f8);
        local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
        FUN_14023423e(&local_70,local_128);
        FUN_1467e355c(&local_d8,&local_e8,&local_80);
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x10))();
          local_70 = (longlong *)0x0;
          local_68 = 0;
        }
        if (local_128[0] != (longlong *)0x0) {
          (**(code **)(*local_128[0] + 0x10))();
        }
      }
      plVar4 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_108[0] != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x38;
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
  }
  FUN_144a5dc74(&local_80);
  iVar3 = (int)local_160[1];
  if (iVar3 == 1) {
    puVar10 = local_138;
    pplVar7 = local_a0;
LAB_148e4903f:
    FUN_14023409e(puVar10,pplVar7,1);
    FUN_140233c04(&local_f8,puVar10,&local_d8);
    FUN_140008f88(&local_80,&local_f8);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  else {
    if (iVar3 == 2) {
      puVar10 = local_148;
      pplVar7 = local_b0;
      goto LAB_148e4903f;
    }
    if (iVar3 == 3) {
      puVar10 = local_158;
      pplVar7 = local_c0;
      goto LAB_148e4903f;
    }
  }
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  FUN_148e45e1e(&local_f8,DAT_14cbd70a8);
  local_108[0] = 0;
  local_108[1] = 0;
  lVar6 = FUN_145da44aa(lVar6);
  if (lVar6 != 0) {
    local_188 = local_108;
    local_170 = 1;
    local_178 = 0;
    local_180 = 0;
    FUN_1459dd948(lVar6,local_90,&local_80,&local_f8);
  }
  FUN_1449db362(local_108);
  FUN_140e0067b(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_80 + 0x10))();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14010f8af(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_90[0] != (longlong *)0x0) {
    (**(code **)(*local_90[0] + 0x10))();
  }
LAB_148e48c4c:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e49474 FUN_148e49474 body=254 status=ok
// SIG undefined FUN_148e49474(void)

undefined8
FUN_148e49474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b991aa0;
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
  *local_48 = &PTR_FUN_14b9b48d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14586ed62(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4957a FUN_148e4957a body=224 status=ok
// SIG undefined FUN_148e4957a(void)

undefined8 FUN_148e4957a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x110);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x100));
  *(int *)(lVar3 + 0xf8) = *(int *)(lVar3 + 0xf8) + 1;
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
  iVar4 = 1;
  if (*(int *)(param_1 + 0x400) < 3) {
    iVar4 = *(int *)(param_1 + 0x400) + 1;
  }
  *(int *)(param_1 + 0x400) = iVar4;
  if (iVar4 - 1U < 3) {
    FUN_1449a0272(lVar3 + 0xe0,(&PTR_DAT_14b9b5e58)[iVar4 - 1U]);
  }
  FUN_14127c124(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x100));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4965c FUN_148e4965c body=703 status=ok
// SIG undefined FUN_148e4965c(void)

void FUN_148e4965c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  PSRWLOCK SRWLock;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  longlong local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) goto LAB_148e4967d;
  lVar4 = FUN_1400f3ad8((longlong)param_1 + 0x44);
  if (lVar4 == 0) {
LAB_148e496dc:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148e496dc;
  }
  lVar5 = FUN_140059518((longlong)param_1 + 0x44);
  if (lVar5 == 0) {
LAB_148e4970e:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_14030d4a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148e4970e;
  }
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar6 = FUN_145bd989c(uVar7);
  if (((lVar5 == 0) || (lVar4 == 0)) || (lVar6 == 0)) goto LAB_148e4967d;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_146228670(lVar6 + 0xb8,*(longlong *)(param_2 + 0x10),uVar7,lVar5);
  }
  *(undefined1 *)(lVar4 + 0xd68) = *(undefined1 *)(param_2 + 0x19);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1441f1e80(lVar4,DAT_14cb71810,*(undefined8 *)(param_2 + 8));
  lVar5 = FUN_1402a1246(lVar4);
  if (lVar5 != 0) {
    FUN_145cb0266(lVar5,1);
  }
  FUN_1446dcdd4(&local_60,param_2 + 0x10);
  if (DAT_14cbe4518 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_144837462(DAT_14cbe4518,&local_60);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (lVar5 == 0) {
    FUN_1402815f4(param_1,&local_60);
    lVar6 = *(longlong *)(local_60 + 0x400);
    SRWLock = (PSRWLOCK)(lVar6 + 0x58);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
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
    if (*(int *)(lVar6 + 0x44) == 1) {
      if (*(int *)(lVar6 + 0x48) != 0) goto LAB_148e498cd;
      iVar3 = 1;
    }
    else {
      iVar3 = *(int *)(lVar6 + 0x48) + 1;
    }
    *(undefined4 *)(lVar6 + 0x44) = 1;
LAB_148e498c8:
    *(int *)(lVar6 + 0x48) = iVar3;
  }
  else {
    FUN_1402815f4(param_1,&local_60);
    lVar6 = *(longlong *)(local_60 + 0x400);
    SRWLock = (PSRWLOCK)(lVar6 + 0x58);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
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
    if (*(int *)(lVar5 + 0x38) != *(int *)(lVar6 + 0x44)) {
      iVar3 = *(int *)(lVar6 + 0x48) + 1;
LAB_148e498c3:
      *(int *)(lVar6 + 0x44) = *(int *)(lVar5 + 0x38);
      goto LAB_148e498c8;
    }
    if (*(int *)(lVar6 + 0x48) == 0) {
      iVar3 = 1;
      goto LAB_148e498c3;
    }
  }
LAB_148e498cd:
  ReleaseSRWLockExclusive(SRWLock);
  local_62 = *(undefined1 *)(param_2 + 0x18);
  local_61 = 1;
  local_64 = 0x101;
  FUN_14572e6ac(lVar4);
LAB_148e4967d:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4991e FUN_148e4991e body=108 status=ok
// SIG undefined FUN_148e4991e(void)

void FUN_148e4991e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
      if ((*(int *)(param_1 + 0xa0) != 0) &&
         (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
  }
  FUN_148e4998a(param_1);
  return;
}



// FUNCTION 148e4998a FUN_148e4998a body=120 status=ok
// SIG undefined FUN_148e4998a(void)

void FUN_148e4998a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(int *)(lVar1 + 0xd98) != 0)) &&
       (*(longlong *)(lVar1 + 0xda0) != 0)) {
      FUN_140c125e6(lVar1 + 0xd98,&DAT_14cbd9590);
      FUN_148e49bc6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e49a02 FUN_148e49a02 body=136 status=ok
// SIG undefined FUN_148e49a02(void)

void FUN_148e49a02(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_140059518(param_1 + 0x44);
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    if (param_3 == '\0') {
      puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      FUN_14143c516(puVar3);
      *puVar3 = &PTR_FUN_14b9b3110;
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      FUN_148e4a490(puVar3,param_2);
    }
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 148e49a8a FUN_148e49a8a body=93 status=ok
// SIG undefined FUN_148e49a8a(void)

void FUN_148e49a8a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1408bb964(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140059518(param_1 + 0x44);
      FUN_148d30632(lVar1,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148e49ae8 FUN_148e49ae8 body=221 status=ok
// SIG undefined FUN_148e49ae8(void)

void FUN_148e49ae8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    lVar4 = FUN_141028a6c();
    if (lVar4 != 0) {
      if (param_1[0x24] != 0) {
        FUN_14480f766(lVar4 + 0x70);
        param_1[0x24] = 0;
      }
      if (param_1[0x25] != 0) {
        FUN_14480f766(lVar4 + 0xb8);
      }
    }
  }
  if ((int)param_1[0x21] != 0) {
    plVar1 = param_1 + 0x20;
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
      if (((int)param_1[0x21] != 0) && (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0x21) = 0;
      }
    }
  }
  FUN_148e49bc6(param_1);
  return;
}



// FUNCTION 148e49bc6 FUN_148e49bc6 body=93 status=ok
// SIG undefined FUN_148e49bc6(void)

void FUN_148e49bc6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1408bb964(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140059518(param_1 + 0x44);
      FUN_148d3076c(lVar1,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148e49c24 FUN_148e49c24 body=123 status=ok
// SIG undefined FUN_148e49c24(void)

void FUN_148e49c24(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_3c = *(undefined4 *)(param_2 + 0x20);
    local_38 = &local_3c;
    local_30 = param_2 + 0x28;
    FUN_148e5407c(param_1 + 0xa8,local_24);
    FUN_148e4a140(param_1,*(undefined8 *)(param_2 + 0x20),param_2 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e49ca8 FUN_148e49ca8 body=595 status=ok
// SIG undefined FUN_148e49ca8(void)

void FUN_148e49ca8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  short local_3c [2];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_148e49cc5;
  FUN_1402815f4(param_1,&local_38);
  lVar5 = *(longlong *)(local_38 + 0x430);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xf0));
  *(int *)(lVar5 + 0xe8) = *(int *)(lVar5 + 0xe8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  iVar2 = *(int *)(lVar5 + 0x3c);
  FUN_145976519(*(undefined8 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x38));
  *(undefined4 *)(lVar5 + 0x38) = 0;
  if ((iVar2 < 0) && (*(int *)(lVar5 + 0x3c) != 0)) {
    FUN_148e53e60(lVar5 + 0x30);
  }
  *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xf0));
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_141028a6c();
    if (lVar5 != 0) {
      if (param_1[0x24] != 0) {
        FUN_14480f766(lVar5 + 0x70);
        param_1[0x24] = 0;
      }
      if (param_1[0x25] != 0) {
        FUN_14480f766(lVar5 + 0xb8);
      }
    }
  }
  if ((int)param_1[0x14] != 0) {
    plVar6 = param_1 + 0x13;
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,1);
      if (((int)param_1[0x14] != 0) && (puVar4 = (undefined8 *)*plVar6, puVar4 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar6,0,0,0x10);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
  }
  FUN_148e4998a(param_1);
  plVar6 = (longlong *)FUN_140059518((longlong)param_1 + 0x44);
  if (plVar6 == (longlong *)0x0) goto LAB_148e49cc5;
  lVar5 = (**(code **)(*plVar6 + 0x180))(plVar6);
  if (lVar5 == 0) {
LAB_148e49ef5:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1400f6f32(lVar5);
    if (lVar5 == 0) goto LAB_148e49ef5;
    lVar5 = *(longlong *)(lVar5 + 0x68);
  }
  uVar7 = (**(code **)(*plVar6 + 0x180))(plVar6);
  lVar8 = FUN_14128aaf8(uVar7);
  if ((lVar5 != 0) && (lVar8 != 0)) {
    FUN_140ceec26(lVar5,local_3c,(int)plVar6[0x1c]);
    if (-1 < local_3c[0]) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140ceec8e(lVar8,&local_38,local_3c);
    }
  }
LAB_148e49cc5:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e49f12 FUN_148e49f12 body=87 status=ok
// SIG undefined FUN_148e49f12(void)

void FUN_148e49f12(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_148e49ae8(0,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e49f6a FUN_148e49f6a body=133 status=ok
// SIG undefined FUN_148e49f6a(void)

undefined8 FUN_148e49f6a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_14 = 0;
      cVar1 = FUN_14016169c(lVar2);
      if ((cVar1 != '\0') && (uVar4 = 1, local_14 != 0)) goto LAB_148e49fb1;
    }
  }
  uVar4 = 0;
LAB_148e49fb1:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148e49ff0 FUN_148e49ff0 body=315 status=ok
// SIG undefined FUN_148e49ff0(void)

void FUN_148e49ff0(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1402735c8();
  if (*(longlong *)(lVar3 + 0xb18) != 0) {
    lVar3 = FUN_1402735c8();
    lVar3 = FUN_148e4a452(lVar3 + 0xb10);
    if (lVar3 != 0) {
      FUN_1402815f4(param_1,&local_38);
      lVar2 = *(longlong *)(local_38 + 0x430);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xf0));
      *(int *)(lVar2 + 0xe8) = *(int *)(lVar2 + 0xe8) + 1;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + 1;
      plVar4 = (longlong *)FUN_145cff1a2(lVar2 + 0x30);
      if ((*(longlong *)(lVar3 + 0x80) != *plVar4) || ((int)plVar4[1] == 0)) {
        *plVar4 = *(longlong *)(lVar3 + 0x80);
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      FUN_1449a0272(plVar4 + 2,lVar3 + 0x88);
      FUN_1410e88ee(plVar4 + 5,lVar3 + 0x98);
      FUN_1410e88ee(plVar4 + 8,lVar3 + 0xa8);
      FUN_1449a0272(plVar4 + 0xb,lVar3 + 0xb8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4a140 FUN_148e4a140 body=785 status=ok
// SIG undefined FUN_148e4a140(void)

void FUN_148e4a140(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  int iVar9;
  ushort uVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_140059518((longlong)param_1 + 0x44);
  if ((lVar2 != 0) && (plVar3 = (longlong *)FUN_140773fe2(), plVar3 != (longlong *)0x0)) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3,*(undefined4 *)(lVar2 + 0xe0),uVar4);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)FUN_1461fd307(lVar2);
      local_58 = (longlong *)0x0;
      iVar9 = *(int *)(puVar5 + 1);
      uVar4 = *puVar5;
      local_50 = iVar9;
      if (iVar9 == 0) {
        local_4c = 0;
        iVar9 = 0;
      }
      else {
        FUN_148a65828(&local_58,iVar9,0);
        FUN_148a6589b(local_58,uVar4,iVar9);
        iVar9 = 0;
        if ((longlong)local_50 != 0) {
          plVar3 = local_58 + (longlong)local_50 * 9;
          plVar13 = local_58;
          local_98 = param_3;
          local_90 = lVar2;
          do {
            if (*plVar13 == param_2) {
              iVar9 = (int)plVar13[2];
              iVar1 = (int)param_3[1];
              if (iVar9 == iVar1) {
                pvVar12 = (void *)*param_3;
                if (1 < iVar9) {
                  lVar2 = 0;
                  while( true ) {
                    uVar7 = *(ushort *)(plVar13[1] + lVar2);
                    uVar8 = (ulonglong)uVar7;
                    uVar10 = *(ushort *)((longlong)pvVar12 + lVar2);
                    if (uVar7 != uVar10) break;
                    if (uVar7 == 0) goto LAB_148e4a2e8;
LAB_148e4a2a0:
                    lVar2 = lVar2 + 2;
                  }
                  if ((uVar10 | uVar7) < 0x80) {
                    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                    uVar11 = (ulonglong)uVar10;
                    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_148e4a2a0;
                  }
                  if (uVar7 != uVar10) goto LAB_148e4a407;
                }
              }
              else {
                if (iVar9 + iVar1 != 1) goto LAB_148e4a407;
                pvVar12 = (void *)*param_3;
                iVar9 = iVar1;
              }
LAB_148e4a2e8:
              local_78 = (void *)0x0;
              local_88 = param_1;
              uStack_80 = param_2;
              local_70 = iVar9;
              if (iVar9 == 0) {
                local_6c = 0;
              }
              else {
                FUN_1446dd670(&local_78,iVar9,0);
                memcpy(local_78,pvVar12,(longlong)iVar9 * 2);
              }
              local_68 = (undefined8 *)0x0;
              local_60 = 0;
              FUN_1446efa72(&local_68,0,4,0x10);
              pvVar12 = local_78;
              local_60 = 4;
              *local_68 = &PTR_LAB_14b4daf00;
              LOCK();
              UNLOCK();
              lVar6 = DAT_14c758608 + 1;
              lVar2 = DAT_14c758608 + 1;
              if (lVar6 == 0) {
                LOCK();
                UNLOCK();
                lVar6 = DAT_14c758608 + 2;
                lVar2 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar2;
              local_68[2] = lVar6;
              *local_68 = &PTR_FUN_14b9b4f10;
              *(undefined4 *)(local_68 + 3) = (undefined4)local_88;
              *(undefined4 *)((longlong)local_68 + 0x1c) = local_88._4_4_;
              *(undefined4 *)(local_68 + 4) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)local_68 + 0x24) = uStack_80._4_4_;
              local_68[5] = 0;
              lVar2 = (longlong)local_70;
              *(int *)(local_68 + 6) = local_70;
              if (lVar2 == 0) {
                *(undefined4 *)((longlong)local_68 + 0x34) = 0;
              }
              else {
                puVar5 = local_68 + 5;
                FUN_1446dd670(puVar5,local_70,0);
                memcpy((void *)*puVar5,pvVar12,lVar2 * 2);
              }
              FUN_148a5e7ba(local_90,plVar13,1,&local_68);
              param_3 = local_98;
              if (local_78 != (void *)0x0) {
                FUN_1400020a8();
                param_3 = local_98;
              }
            }
LAB_148e4a407:
            plVar13 = plVar13 + 9;
            iVar9 = local_50;
          } while (plVar13 != plVar3);
        }
      }
      FUN_145be99e5(local_58,iVar9);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4a452 FUN_148e4a452 body=61 status=ok
// SIG undefined FUN_148e4a452(void)

longlong FUN_148e4a452(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_145999af4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e4a490 FUN_148e4a490 body=109 status=ok
// SIG undefined FUN_148e4a490(void)

undefined8 * FUN_148e4a490(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_14143c516();
  *param_1 = &PTR_FUN_14b9b3100;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148e4a4fe FUN_148e4a4fe body=799 status=ok
// SIG undefined FUN_148e4a4fe(void)

void FUN_148e4a4fe(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14009d848(param_1 + 0x26,param_3);
  FUN_144a787a6(param_1 + 0x2a,param_4);
  FUN_148e4a81e(param_1);
  uVar3 = FUN_140059518((longlong)param_1 + 0x44);
  lVar4 = FUN_145da44aa(uVar3);
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
      lVar5 = FUN_141028a6c();
      if (lVar5 != 0) {
        local_68 = lVar5 + 0x70;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar1 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_14b4ede20;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_58[2] = lVar6;
        *local_58 = &PTR_FUN_14b9b4f80;
        local_58[3] = 0;
        FUN_14485c47a(local_58 + 3,param_1);
        puVar1[4] = param_1;
        FUN_146146674(local_68,&local_60,&local_58);
        FUN_1449db362(&local_58);
        param_1[0x24] = local_60;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar1 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_58[2] = lVar6;
        *local_58 = &PTR_FUN_14b9b4ff0;
        local_58[3] = 0;
        FUN_14485c47a(local_58 + 3,param_1);
        puVar1[4] = param_1;
        *(undefined4 *)(puVar1 + 5) = param_2;
        FUN_1448b6402(lVar5 + 0xb8,&local_60,&local_58);
        FUN_1449db362(&local_58);
        param_1[0x25] = local_60;
      }
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar1 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b9abc80;
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
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b9b4ce0;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,param_1);
    puVar1[4] = FUN_148e4a94a;
    *(undefined4 *)(puVar1 + 5) = 0;
    uVar2 = FUN_144269292(lVar4,&DAT_14cbd7a88,&local_58);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    FUN_1449db362(&local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4a81e FUN_148e4a81e body=298 status=ok
// SIG undefined FUN_148e4a81e(void)

void FUN_148e4a81e(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0x2c] == '\0') {
    lVar3 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140773fe2();
      if (plVar4 != (longlong *)0x0) {
        uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar3 = (**(code **)(*plVar4 + 0x2d0))(plVar4,*(undefined4 *)(lVar3 + 0xe0),uVar5);
        if (lVar3 != 0) {
          local_30 = (undefined8 *)0x0;
          local_28 = 0;
          FUN_1446efa72(&local_30,0,3,0x10);
          puVar1 = local_30;
          local_28 = 3;
          *local_30 = &PTR_LAB_14b9b5220;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar2 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar2 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar2;
          local_30[2] = lVar6;
          *local_30 = &PTR_FUN_14b9b51b0;
          local_30[3] = 0;
          FUN_14485c47a(local_30 + 3,param_1);
          puVar1[4] = param_1;
          FUN_148a5d225(lVar3,&local_30);
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



// FUNCTION 148e4a94a FUN_148e4a94a body=369 status=ok
// SIG undefined FUN_148e4a94a(void)

void FUN_148e4a94a(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 0x138) != 0) && (*(longlong **)(param_1 + 0x130) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x60))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  uVar4 = FUN_140059518(param_1 + 0x44);
  lVar5 = FUN_145da44aa(uVar4);
  if (lVar5 != 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar1 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_14b9abc80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_38[2] = lVar6;
    *local_38 = &PTR_FUN_14b9b4ce0;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_1);
    puVar1[4] = FUN_148e4aace;
    *(undefined4 *)(puVar1 + 5) = 0;
    uVar3 = FUN_144269292(lVar5,&DAT_14cbd7a90,&local_38);
    *(undefined4 *)(param_1 + 0x144) = uVar3;
    FUN_144a787a6(param_1 + 0x150,param_2);
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4aace FUN_148e4aace body=507 status=ok
// SIG undefined FUN_148e4aace(void)

void FUN_148e4aace(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  uVar4 = FUN_140059518(param_1 + 0x44);
  lVar5 = FUN_145da44aa(uVar4);
  if (param_3 == '\0') {
    if (lVar5 == 0) goto LAB_148e4ac83;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b9abc80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar6;
    *local_30 = &PTR_FUN_14b9b4ce0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_148e4a94a;
    *(undefined4 *)(puVar1 + 5) = 0;
    uVar3 = FUN_144269292(lVar5,&DAT_14cbd7a88,&local_30);
    *(undefined4 *)(param_1 + 0x140) = uVar3;
  }
  else {
    if (lVar5 == 0) goto LAB_148e4ac83;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b9abc80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar6;
    *local_30 = &PTR_FUN_14b9b4ce0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_148e4ada2;
    *(undefined4 *)(puVar1 + 5) = 0;
    uVar3 = FUN_144269292(lVar5,&DAT_14cbd7a98,&local_30);
    *(undefined4 *)(param_1 + 0x148) = uVar3;
  }
  FUN_1449db362(&local_30);
LAB_148e4ac83:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4acca FUN_148e4acca body=214 status=ok
// SIG undefined FUN_148e4acca(void)

void FUN_148e4acca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x430);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
  *(int *)(lVar3 + 0xe8) = *(int *)(lVar3 + 0xe8) + 1;
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
  FUN_145976541(*(undefined8 *)(lVar3 + 0xc0),*(undefined4 *)(lVar3 + 200));
  *(undefined4 *)(lVar3 + 200) = 0;
  if (*(int *)(lVar3 + 0xcc) != 0) {
    FUN_148e54650(lVar3 + 0xc0);
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e4ad83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4ada2 FUN_148e4ada2 body=341 status=ok
// SIG undefined FUN_148e4ada2(void)

void FUN_148e4ada2(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 0x138) != 0) && (*(longlong **)(param_1 + 0x130) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x60))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  uVar4 = FUN_140059518(param_1 + 0x44);
  lVar5 = FUN_145da44aa(uVar4);
  if (lVar5 != 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b9abc80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar6;
    *local_30 = &PTR_FUN_14b9b4ce0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_144286b3e;
    *(undefined4 *)(puVar1 + 5) = 0;
    uVar3 = FUN_144269292(lVar5,&DAT_14cbd7aa0,&local_30);
    *(undefined4 *)(param_1 + 0x14c) = uVar3;
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4af08 FUN_148e4af08 body=374 status=ok
// SIG undefined FUN_148e4af08(void)

void FUN_148e4af08(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_140059518((longlong)param_1 + 0x44);
  if ((*(int *)(lVar4 + 0xe0) == param_2) && ((int)param_1[0x27] != 0)) {
    plVar1 = param_1 + 0x26;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
      if (cVar3 != '\0') {
        uVar5 = FUN_140059518((longlong)param_1 + 0x44);
        lVar4 = FUN_145da44aa(uVar5);
        if (lVar4 != 0) {
          if ((int)param_1[0x28] != -1) {
            FUN_146142a30(lVar4);
          }
          if (*(int *)((longlong)param_1 + 0x144) != -1) {
            FUN_146142a30(lVar4);
          }
          if ((int)param_1[0x29] != -1) {
            FUN_146142a30(lVar4);
          }
          if (*(int *)((longlong)param_1 + 0x14c) != -1) {
            FUN_146142a30(lVar4);
          }
        }
        if (((int)param_1[0x27] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
          (**(code **)(*(longlong *)*plVar1 + 0x60))();
          if (((int)param_1[0x27] != 0) &&
             (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar1,0,0,0x10);
            *(undefined4 *)(param_1 + 0x27) = 0;
          }
        }
        lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
          lVar4 = FUN_141028a6c();
          if (lVar4 != 0) {
            if (param_1[0x24] != 0) {
              FUN_14480f766(lVar4 + 0x70);
              param_1[0x24] = 0;
            }
            if (param_1[0x25] != 0) {
              FUN_14480f766(lVar4 + 0xb8);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148e4b07e FUN_148e4b07e body=275 status=ok
// SIG undefined FUN_148e4b07e(void)

void FUN_148e4b07e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_140059518(param_1 + 0x44);
  lVar4 = FUN_145da44aa(uVar3);
  if (lVar4 != 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar5;
    *local_30 = &PTR_FUN_14b9b5060;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_148e4b192;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_144268f62(lVar4,&DAT_14cbd7aa8,&local_30,1);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4b192 FUN_148e4b192 body=76 status=ok
// SIG undefined FUN_148e4b192(void)

void FUN_148e4b192(longlong param_1,longlong *param_2,undefined4 param_3)

{
  if (*param_2 == DAT_14cbd7ac0) {
    FUN_144286ff4(param_1,param_3);
    return;
  }
  if ((*(int *)(param_1 + 0x138) != 0) && (*(longlong **)(param_1 + 0x130) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x60))();
  }
  FUN_148e4acca(param_1);
  return;
}



// FUNCTION 148e4b1de FUN_148e4b1de body=574 status=ok
// SIG undefined FUN_148e4b1de(void)

void FUN_148e4b1de(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  longlong local_80;
  PSRWLOCK local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_2[1] < 1) {
    if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_1402815f4(param_1,&local_58);
  lVar8 = *(longlong *)(local_58 + 0x430);
  local_78 = (PSRWLOCK)(lVar8 + 0xf0);
  AcquireSRWLockExclusive(local_78);
  *(int *)(lVar8 + 0xe8) = *(int *)(lVar8 + 0xe8) + 1;
  local_80 = lVar8;
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
  if (0 < (int)param_2[1]) {
    local_70 = local_80 + 0xc0;
    lVar8 = 0;
    local_68 = param_2;
    do {
      lVar4 = FUN_148e4b43a(local_70);
      lVar13 = lVar8 * 0x20;
      FUN_1449a0272(lVar4,*param_2 + lVar13);
      if (0 < *(int *)(*param_2 + 0x18 + lVar13)) {
        local_60 = lVar4 + 0x18;
        lVar12 = 0;
        do {
          *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 1;
          lVar5 = FUN_148e54584(local_60);
          FUN_144a787a6(lVar5,*(longlong *)(*param_2 + 0x10 + lVar13) + lVar12 * 0x20 + 0x10);
          FUN_144a787a6((longlong *)(lVar5 + 0x10),
                        lVar12 * 0x20 + *(longlong *)(*param_2 + 0x10 + lVar13));
          iVar3 = *(int *)(lVar5 + 0x18);
          if (iVar3 == *(int *)(param_1 + 0x158)) {
            if (1 < iVar3) {
              lVar9 = 0;
              while( true ) {
                uVar6 = *(ushort *)(*(longlong *)(lVar5 + 0x10) + lVar9);
                uVar7 = (ulonglong)uVar6;
                uVar10 = *(ushort *)(*(longlong *)(param_1 + 0x150) + lVar9);
                if (uVar6 != uVar10) break;
                if (uVar6 == 0) goto LAB_148e4b395;
LAB_148e4b357:
                lVar9 = lVar9 + 2;
              }
              if ((uVar10 | uVar6) < 0x80) {
                uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                uVar11 = (ulonglong)uVar10;
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_148e4b357;
              }
              if (uVar6 != uVar10) goto LAB_148e4b3a7;
            }
LAB_148e4b395:
            *(int *)(local_80 + 0xd0) = (int)lVar8;
            *(int *)(local_80 + 0xd4) = (int)lVar12;
          }
          else if (*(int *)(param_1 + 0x158) + iVar3 == 1) goto LAB_148e4b395;
LAB_148e4b3a7:
          lVar12 = lVar12 + 1;
          param_2 = local_68;
        } while (lVar12 < *(int *)(*local_68 + 0x18 + lVar13));
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[1]);
  }
  *(undefined1 *)(param_1 + 0x160) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 148e4b43a FUN_148e4b43a body=63 status=ok
// SIG undefined FUN_148e4b43a(void)

longlong FUN_148e4b43a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e544f0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_148e544dc(lVar2);
  return lVar2;
}



// FUNCTION 148e4b47a FUN_148e4b47a body=714 status=ok
// SIG undefined FUN_148e4b47a(void)

undefined4 *
FUN_148e4b47a(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  longlong *local_1c0 [2];
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined4 *local_190;
  ulonglong *local_188;
  longlong local_180;
  undefined4 local_178;
  undefined1 local_170 [4];
  undefined8 local_16c;
  undefined1 local_164;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined1 local_150 [72];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e4;
  undefined4 local_50 [4];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1446dcdd4(local_170,param_3);
  lVar5 = FUN_1412095fe(local_170);
  if (CONCAT44(uStack_154,local_158) != 0) {
    FUN_1400020a8();
  }
  if (lVar5 == 0) {
    *param_2 = 0xffffffff;
  }
  else {
    FUN_14125b7f0(local_170);
    plVar3 = local_160;
    local_16c = *(undefined8 *)(lVar5 + 100);
    plVar2 = *(longlong **)(lVar5 + 0x28);
    if (local_160 != plVar2) {
      local_160 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    local_158 = *(undefined4 *)(lVar5 + 0x30);
    local_e4 = *(undefined8 *)(lVar5 + 0xe4);
    local_f0 = *(undefined8 *)(lVar5 + 0xec);
    local_f4 = *(undefined1 *)(lVar5 + 0xd8);
    local_f8 = *(undefined4 *)(lVar5 + 0xdc);
    local_164 = *(undefined1 *)(lVar5 + 0x60);
    FUN_144a787a6(local_108,lVar5 + 200);
    FUN_140009b9a(&local_1b0,param_4);
    cVar4 = FUN_144a7c5f6(&local_1b0);
    if (cVar4 != '\0') {
      FUN_140ac6c96(&DAT_14cbd7ad0,&local_1b0);
    }
    local_1d0 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 8))();
    }
    local_1c8 = local_1a8;
    FUN_14023409e(&local_1e0,lVar5 + 0x18,1);
    local_50[0] = 4;
    FUN_14023423e(local_40,&local_1d0);
    local_190 = local_50;
    local_188 = &local_30;
    FUN_14010d304(&local_180);
    local_1a0 = local_1e0;
    local_198 = local_1d8;
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1c0,&local_1a0,&local_180);
    FUN_14007f2db(local_180,local_178);
    if (local_180 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1d8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      (**(code **)(*local_1d0 + 0x10))();
    }
    FUN_140008f88(local_150,local_1c0);
    if (local_1c0[0] != (longlong *)0x0) {
      (**(code **)(*local_1c0[0] + 0x10))();
    }
    FUN_1412099d2(param_1,&DAT_14cbd6ef8);
    FUN_14120969a(param_1,param_2,local_170);
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x10))();
    }
    FUN_140989dc4(local_170);
  }
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4b746 FUN_148e4b746 body=107 status=ok
// SIG undefined FUN_148e4b746(void)

int * FUN_148e4b746(undefined8 param_1,int *param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14583ef20(param_1,&local_24);
  if (local_24 == -1) {
    local_24 = -1;
  }
  else {
    FUN_1412099d2(param_1,&DAT_14cbd6ef8);
  }
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4b7b2 FUN_148e4b7b2 body=278 status=ok
// SIG undefined FUN_148e4b7b2(void)

void FUN_148e4b7b2(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_140059518(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar3 = FUN_145da44aa(lVar3);
    if (lVar3 != 0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar1 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14b972ed0;
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
      local_30[2] = lVar4;
      *local_30 = &PTR_FUN_14b9b54d0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      puVar1[4] = FUN_148e4c07a;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_144268f62(lVar3,&DAT_14cbd7b50,&local_30,0);
      FUN_1449db362(&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4b8ca FUN_148e4b8ca body=165 status=ok
// SIG undefined FUN_148e4b8ca(void)

void FUN_148e4b8ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x100) == '\0') {
    FUN_145801040(param_1);
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (*(longlong *)(param_1 + 0xc0) != *(longlong *)(param_2 + 8))) {
    FUN_1457ffece(param_1,1);
  }
  lVar1 = *(longlong *)(param_2 + 8);
  if (DAT_14cbd7b00 == lVar1) {
    FUN_1457ffe96(param_1);
    uVar2 = 0;
  }
  else {
    if (DAT_14cbd7b08 != lVar1) {
      if (DAT_14cbd7b10 != lVar1) {
        return;
      }
      FUN_1457ffe96(param_1);
      FUN_148e4bf54(param_1);
      return;
    }
    FUN_1457ffe96(param_1);
    uVar2 = 1;
  }
  FUN_148e4bea4(param_1,uVar2);
  return;
}



// FUNCTION 148e4b97a FUN_148e4b97a body=68 status=ok
// SIG undefined FUN_148e4b97a(void)

void FUN_148e4b97a(longlong param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(longlong *)(param_2 + 8) != 0)) &&
     (*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 0xc0))) {
    FUN_1457ffece(param_1,*(undefined1 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 148e4b9be FUN_148e4b9be body=697 status=ok
// SIG undefined FUN_148e4b9be(void)

void FUN_148e4b9be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x140) != 0) || (*(longlong *)(param_1 + 0x148) != 0))
  goto LAB_148e4b9e3;
  if (*(char *)(param_2 + 0x14) == '\x01') {
    if (*(longlong *)(param_1 + 0x128) != 0) {
      local_50 = FUN_148e4cf98;
      local_48 = 0;
      FUN_148e4e956(*(longlong *)(param_1 + 0x128) + 0x20,&local_40,param_1,&local_50);
      *(undefined8 *)(param_1 + 0x140) = local_40;
      local_50 = FUN_148e4d266;
      local_48 = 0;
      FUN_14604b1e0(*(longlong *)(param_1 + 0x128) + 8,&local_40,param_1,&local_50);
      *(undefined8 *)(param_1 + 0x148) = local_40;
      uVar7 = DAT_14c98e618;
      local_60 = *(undefined8 *)(param_1 + 0x128);
      local_58 = *(longlong *)(param_1 + 0x130);
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      puVar8 = &local_60;
LAB_148e4bc6b:
      FUN_1469aaa90(uVar7,puVar8,0);
    }
  }
  else if (*(longlong *)(param_1 + 0x118) != 0) {
    local_50 = FUN_148e4cf98;
    local_48 = 0;
    FUN_148e4e956(*(longlong *)(param_1 + 0x118) + 0x20,&local_40,param_1,&local_50);
    *(undefined8 *)(param_1 + 0x140) = local_40;
    local_50 = FUN_148e4d266;
    local_48 = 0;
    FUN_14604b1e0(*(longlong *)(param_1 + 0x118) + 8,&local_40,param_1,&local_50);
    *(undefined8 *)(param_1 + 0x148) = local_40;
    uVar7 = DAT_14c98e618;
    local_70 = *(undefined8 *)(param_1 + 0x118);
    local_68 = *(longlong *)(param_1 + 0x120);
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    puVar8 = &local_70;
    goto LAB_148e4bc6b;
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x15c) = *(undefined1 *)(param_2 + 0x14);
  lVar4 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar4 == 0) goto LAB_148e4b9e3;
  lVar5 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e4b9e3;
  FUN_1402815f4(param_1,&local_50);
  lVar5 = *(longlong *)(local_50 + 0x360);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x20));
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  plVar3 = (longlong *)CONCAT44(uStack_44,local_48);
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
  if (*(char *)(param_2 + 0x14) == *(char *)(lVar5 + 0x10)) {
    if (*(int *)(lVar5 + 0x14) == 0) {
      iVar6 = 1;
      goto LAB_148e4bba6;
    }
  }
  else {
    iVar6 = *(int *)(lVar5 + 0x14) + 1;
LAB_148e4bba6:
    *(char *)(lVar5 + 0x10) = *(char *)(param_2 + 0x14);
    *(int *)(lVar5 + 0x14) = iVar6;
  }
  FUN_1403ca8ec(lVar4 + 0xd98,&DAT_14cbd96f8);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x20));
LAB_148e4b9e3:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4bc78 FUN_148e4bc78 body=144 status=ok
// SIG undefined FUN_148e4bc78(void)

void FUN_148e4bc78(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_140059518(param_1 + 0x44);
    if (lVar2 != 0) {
      lVar2 = FUN_14120f7e6(lVar2);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_1410e70dc(lVar2,param_2 + 8);
        if (plVar3 != (longlong *)0x0) {
          lVar2 = FUN_14119b10c();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
              == lVar2 + 0x30)) {
            (**(code **)(*plVar3 + 0x2f8))(plVar3);
            cVar1 = FUN_145800bfe(plVar3);
            if (cVar1 != '\0') {
              FUN_1410e7e0e(param_1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148e4bd08 FUN_148e4bd08 body=171 status=ok
// SIG undefined FUN_148e4bd08(void)

void FUN_148e4bd08(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_140059518(param_1 + 0x44);
    if (lVar2 != 0) {
      lVar2 = FUN_14120f7e6(lVar2);
      if (lVar2 != 0) {
        lVar2 = FUN_1410e70dc(lVar2,param_2 + 8);
        if (lVar2 != 0) {
          lVar3 = FUN_14119b10c();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_148b07ed2(lVar2,0,&DAT_14c966e80);
            FUN_148b07ed2(lVar2,1,&DAT_14c966e80);
            cVar1 = FUN_145800bfe(lVar2);
            if (cVar1 != '\0') {
              FUN_1410e7e0e(param_1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148e4bdb4 FUN_148e4bdb4 body=62 status=ok
// SIG undefined FUN_148e4bdb4(void)

void FUN_148e4bdb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar1 = FUN_14120f7e6(lVar1);
    if (lVar1 != 0) {
      FUN_143fa0f12(lVar1);
      FUN_145840616(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e4bdf8 FUN_148e4bdf8 body=172 status=ok
// SIG undefined FUN_148e4bdf8(void)

void FUN_148e4bdf8(longlong param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_3 + 8);
  if ((lVar4 != DAT_14cbd7bb0) && (lVar4 != DAT_14cbd7bb8)) {
    return;
  }
  lVar4 = param_1 - (ulonglong)(lVar4 == DAT_14cbd7bb0);
  iVar2 = (**(code **)(*param_2 + 0x328))(param_2);
  iVar3 = (**(code **)(*param_2 + 800))(param_2);
  pbVar1 = (byte *)(lVar4 + 0x102);
  *pbVar1 = *pbVar1 & iVar2 == iVar3;
  if (*pbVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148e4be7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x318))(param_2,*(undefined4 *)(param_3 + 0x14));
    return;
  }
  FUN_148e4c9c4(param_1,param_2,param_3,lVar4 + 0x102);
  return;
}



// FUNCTION 148e4bea4 FUN_148e4bea4 body=175 status=ok
// SIG undefined FUN_148e4bea4(void)

void FUN_148e4bea4(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1402815f4(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x340);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
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
  FUN_1457ffd78(param_1,&DAT_14cbd7b00,param_2,lVar3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e4bf47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4bf54 FUN_148e4bf54 body=168 status=ok
// SIG undefined FUN_148e4bf54(void)

void FUN_148e4bf54(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x350);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
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
  FUN_1457ffd78(param_1,&DAT_14cbd7b10,0,lVar3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e4bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4bffe FUN_148e4bffe body=124 status=ok
// SIG undefined FUN_148e4bffe(void)

void FUN_148e4bffe(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1400f3ad8(param_1 + 0x44);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if ((cVar1 != '\0') && (((int)plVar2[0x1b3] != 0 && (plVar2[0x1b4] != 0)))) {
        FUN_1403ca8ec(plVar2 + 0x1b3,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e4c07a FUN_148e4c07a body=120 status=ok
// SIG undefined FUN_148e4c07a(void)

void FUN_148e4c07a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((*param_2 == DAT_14cbd7b58) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    FUN_148e4c0f2(param_1,param_1 + 0xc0);
    uVar1 = FUN_140059518(param_1 + 0x44);
    lVar2 = FUN_1404960a8(uVar1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar3 = &PTR_FUN_14b9b3278;
      FUN_14039144e(lVar2,puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148e4c0f2 FUN_148e4c0f2 body=477 status=ok
// SIG undefined FUN_148e4c0f2(void)

void FUN_148e4c0f2(longlong param_1,longlong *param_2)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_140059518(param_1 + 0x44);
  if ((lVar2 == 0) || (lVar2 = FUN_14120f7e6(lVar2), lVar2 == 0)) goto LAB_148e4c15a;
  lVar3 = FUN_1402735c8();
  lVar5 = *param_2;
  if (*(int *)(lVar3 + 0x8c8) != *(int *)(lVar3 + 0x8f4)) {
    uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar7 = lVar3 + 0x8f8;
    if (*(longlong *)(lVar3 + 0x900) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x900);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar3 + 0x908) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x8c0);
      iVar9 = iVar6;
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar9 * 0x38) == lVar5) goto LAB_148e4c20f;
        iVar9 = *(int *)((longlong)iVar9 * 0x38 + lVar3 + 0x30);
      } while (iVar9 != -1);
    }
  }
  lVar2 = FUN_148b0252a(lVar2);
  goto LAB_148e4c151;
  while (iVar6 = *(int *)(lVar7 + 0x30), iVar6 != -1) {
LAB_148e4c20f:
    lVar7 = lVar3 + (longlong)iVar6 * 0x38;
    if (*(longlong *)(lVar3 + (longlong)iVar6 * 0x38) == lVar5) goto LAB_148e4c224;
  }
  lVar7 = 0;
LAB_148e4c224:
  local_58 = *(undefined8 *)(lVar7 + 8);
  local_50 = *(undefined4 *)(lVar7 + 0x10);
  uStack_4c = *(undefined4 *)(lVar7 + 0x14);
  uStack_48 = *(undefined4 *)(lVar7 + 0x18);
  uStack_44 = *(undefined4 *)(lVar7 + 0x1c);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar7 + 0x28);
  lVar5 = (longlong)local_38;
  _Src = *(void **)(lVar7 + 0x20);
  if (lVar5 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar5 * 2);
  }
  uVar4 = FUN_1410e4d26(&local_58);
  lVar2 = FUN_145800746(lVar2,uVar4);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148e4c151:
  if ((lVar2 != 0) && (lVar5 = FUN_148e4cd0e(param_1), lVar5 != 0)) {
    FUN_148e4ce36(lVar2,lVar5);
  }
LAB_148e4c15a:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4c2d0 FUN_148e4c2d0 body=614 status=ok
// SIG undefined FUN_148e4c2d0(void)

void FUN_148e4c2d0(longlong *param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)((longlong)param_1 + 0xf4) == '\x01') {
    if (((int)param_3[1] != 0) && (*param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1e) = 0;
    FUN_14009d848(param_1 + 0x1a,param_3);
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_141028a6c();
      if (lVar3 != 0) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar1 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_14b4ede20;
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
        local_58[2] = lVar4;
        *local_58 = &PTR_FUN_14b9b5620;
        local_58[3] = 0;
        FUN_14485c47a(local_58 + 3,param_1);
        puVar1[4] = param_1;
        FUN_146146674(lVar3 + 0x70,&local_60,&local_58);
        FUN_1449db362(&local_58);
        param_1[0x1c] = local_60;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar1 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_149e020b0;
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
        local_58[2] = lVar4;
        *local_58 = &PTR_FUN_14b9b5690;
        local_58[3] = 0;
        FUN_14485c47a(local_58 + 3,param_1);
        puVar1[4] = param_1;
        *(int *)(puVar1 + 5) = param_2;
        FUN_1448b6402(lVar3 + 0xb8,&local_60,&local_58);
        FUN_1449db362(&local_58);
        param_1[0x1d] = local_60;
      }
    }
    lVar3 = FUN_140059518((longlong)param_1 + 0x44);
    if (*(int *)(lVar3 + 0xe0) == param_2) {
      FUN_148e4c552(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4c552 FUN_148e4c552 body=259 status=ok
// SIG undefined FUN_148e4c552(void)

void FUN_148e4c552(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = iVar1 + 1;
  if (iVar1 == 2) {
    FUN_148e4c786(param_1,&DAT_14cbd94d0);
    FUN_148e4c802(param_1);
  }
  else {
    if (iVar1 == 1) {
      FUN_148e4bffe(param_1,&DAT_14cbd94d0);
      FUN_148e4c786(param_1,&DAT_14cbd94c0);
      FUN_148e4c786(param_1,&DAT_14cbd94e0);
      return;
    }
    if (iVar1 == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar2 = &PTR_FUN_14b9b5de8;
      FUN_1447a97f4(puVar2 + 1,&DAT_14cbd7eb0);
      *(undefined1 *)(puVar2 + 6) = 1;
      FUN_1457ffc82(param_1,puVar2);
      FUN_148e4bffe(param_1,&DAT_14cbd94c0);
      return;
    }
  }
  FUN_148e4c786(param_1,&DAT_14cbd94c0);
  FUN_148e4c786(param_1,&DAT_14cbd94e0);
  FUN_148e4c786(param_1,&DAT_14cbd94d0);
  FUN_148e4c802(param_1);
  return;
}



// FUNCTION 148e4c656 FUN_148e4c656 body=304 status=ok
// SIG undefined FUN_148e4c656(void)

void FUN_148e4c656(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = FUN_140059518((longlong)param_1 + 0x44);
  if (*(int *)(lVar3 + 0xe0) == param_2) {
    param_1[0x18] = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    FUN_148e4c786(param_1,&DAT_14cbd94c0);
    FUN_148e4c786(param_1,&DAT_14cbd94e0);
    FUN_148e4c786(param_1,&DAT_14cbd94d0);
    if ((int)param_1[0x1b] != 0) {
      plVar1 = param_1 + 0x1a;
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x60))();
        if (((int)param_1[0x1b] != 0) &&
           (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(plVar1,0,0,0x10);
          *(undefined4 *)(param_1 + 0x1b) = 0;
        }
      }
    }
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_141028a6c();
      if (lVar3 != 0) {
        if (param_1[0x1c] != 0) {
          FUN_14480f766(lVar3 + 0x70);
          param_1[0x1c] = 0;
        }
        if (param_1[0x1d] != 0) {
          FUN_14480f766(lVar3 + 0xb8);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148e4c786 FUN_148e4c786 body=124 status=ok
// SIG undefined FUN_148e4c786(void)

void FUN_148e4c786(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1400f3ad8(param_1 + 0x44);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if ((cVar1 != '\0') && (((int)plVar2[0x1b3] != 0 && (plVar2[0x1b4] != 0)))) {
        FUN_140c125e6(plVar2 + 0x1b3,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e4c802 FUN_148e4c802 body=237 status=ok
// SIG undefined FUN_148e4c802(void)

void FUN_148e4c802(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 1;
  FUN_148e4c8f0();
  if ((int)param_1[0x1b] != 0) {
    plVar1 = param_1 + 0x1a;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x60))();
      if (((int)param_1[0x1b] != 0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0x1b) = 0;
      }
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_141028a6c();
    if (lVar3 != 0) {
      if (param_1[0x1c] != 0) {
        FUN_14480f766(lVar3 + 0x70);
        param_1[0x1c] = 0;
      }
      if (param_1[0x1d] != 0) {
        FUN_14480f766(lVar3 + 0xb8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e4c8f0 FUN_148e4c8f0 body=210 status=ok
// SIG undefined FUN_148e4c8f0(void)

void FUN_148e4c8f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x68);
      goto LAB_148e4c930;
    }
  }
  lVar1 = 0;
LAB_148e4c930:
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar3 = FUN_14128aaf8(uVar2);
  if ((lVar1 != 0) && (lVar3 != 0)) {
    lVar4 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar4 != 0) {
      FUN_140ceec26(lVar1,local_24,*(undefined4 *)(lVar4 + 0xe0));
      if (-1 < local_24[0]) {
        local_38 = 0;
        uStack_30 = 0;
        FUN_140ceec8e(lVar3,local_40,local_24);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4c9c4 FUN_148e4c9c4 body=840 status=ok
// SIG undefined FUN_148e4c9c4(void)

void FUN_148e4c9c4(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [32];
  undefined1 local_d8 [12];
  int local_cc;
  undefined8 *local_c8;
  int local_c0;
  undefined1 local_99;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar1 = FUN_145da44aa(lVar1);
    if (lVar1 != 0) {
      FUN_145be44b4(local_110);
      if (local_cc < 2) {
        FUN_148e5508c(local_d8);
      }
      lVar2 = FUN_145da4f3c(local_d8);
      local_138 = L"Dialog_Yes";
      uStack_130._0_4_ = 10;
      FUN_1446e940c(local_114,&local_138);
      local_138 = L"OakDialogBox";
      uStack_130 = CONCAT44(uStack_130._4_4_,0xc);
      FUN_1446e940c(local_118,&local_138);
      FUN_140208bae(&local_138,local_118,local_114,&DAT_149e06384);
      FUN_140008f88(lVar2,&local_138);
      if (local_138 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_138 + 0x10))();
      }
      FUN_1446f470e(&local_138,&DAT_149e06384,1);
      *(wchar_t **)(lVar2 + 0x10) = local_138;
      lVar2 = FUN_145da4f3c(local_d8);
      local_138 = L"Dialog_No";
      uStack_130._0_4_ = 9;
      FUN_1446e940c(local_114,&local_138);
      local_138 = L"OakDialogBox";
      uStack_130 = CONCAT44(uStack_130._4_4_,0xc);
      FUN_1446e940c(local_118,&local_138);
      FUN_140208bae(&local_138,local_118,local_114,&DAT_149e06338);
      FUN_140008f88(lVar2,&local_138);
      if (local_138 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_138 + 0x10))();
      }
      FUN_1446f470e(&local_138,&DAT_149e06338,1);
      *(wchar_t **)(lVar2 + 0x10) = local_138;
      FUN_1410d1eba(&local_138,&DAT_14cbd7e60);
      FUN_140008f88(local_108,&local_138);
      if (local_138 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_138 + 0x10))();
      }
      FUN_1410d1eba(&local_138,&DAT_14cbd7e88);
      FUN_140008f88(local_f8,&local_138);
      if (local_138 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_138 + 0x10))();
      }
      local_99 = 1;
      uStack_130 = 0;
      local_138 = (wchar_t *)param_1;
      FUN_14485c47a(&uStack_130,param_2);
      local_128 = *(undefined4 *)(param_3 + 0x14);
      uStack_120 = param_4;
      if (local_c0 != 4) {
        FUN_1446efa72(&local_c8,0,4,0x10);
        local_c0 = 4;
      }
      *local_c8 = &PTR_LAB_14b972ed0;
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
      local_c8[2] = lVar3;
      *local_c8 = &PTR_FUN_14b9b5800;
      local_c8[3] = 0;
      FUN_14485c47a(local_c8 + 3,param_1);
      *(undefined4 *)(local_c8 + 6) = local_128;
      *(undefined4 *)((longlong)local_c8 + 0x34) = uStack_124;
      *(undefined4 *)(local_c8 + 7) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)local_c8 + 0x3c) = uStack_120._4_4_;
      *(undefined4 *)(local_c8 + 4) = (undefined4)local_138;
      *(undefined4 *)((longlong)local_c8 + 0x24) = local_138._4_4_;
      *(undefined4 *)(local_c8 + 5) = (undefined4)uStack_130;
      *(undefined4 *)((longlong)local_c8 + 0x2c) = uStack_130._4_4_;
      FUN_148e370de(lVar1,local_110);
      FUN_1459ddea2(local_110);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4cd0e FUN_148e4cd0e body=295 status=ok
// SIG undefined FUN_148e4cd0e(void)

longlong FUN_148e4cd0e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_148e4ce14;
  }
  if ((lVar3 == DAT_14cbd7b00) || (lVar3 == DAT_14cbd7b08)) {
    FUN_1402815f4(param_1,&local_30);
    lVar3 = *(longlong *)(local_30 + 0x340);
LAB_148e4cd82:
    SRWLock = (PSRWLOCK)(lVar3 + 0x28);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
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
  }
  else {
    if (lVar3 == DAT_14cbd7b10) {
      FUN_1402815f4(param_1,&local_30);
      lVar3 = *(longlong *)(local_30 + 0x350);
      goto LAB_148e4cd82;
    }
    FUN_1402815f4(param_1,&local_30);
    lVar3 = *(longlong *)(local_30 + 0x310);
    SRWLock = (PSRWLOCK)(lVar3 + 0x50);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
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
    lVar3 = lVar3 + 0x28;
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_148e4ce14:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4ce36 FUN_148e4ce36 body=352 status=ok
// SIG undefined FUN_148e4ce36(void)

void FUN_148e4ce36(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_50);
  if (0 < local_48) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(local_50 + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar5 = FUN_140febe0e();
        if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          lVar5 = FUN_140e21508();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              == lVar5 + 0x30)) {
            (**(code **)(*plVar2 + 0x2f8))(plVar2);
          }
        }
        else {
          FUN_148e4ce36(plVar2,param_2);
        }
        iVar4 = (int)param_2[1];
        if (0 < iVar4) {
          lVar5 = 0;
          lVar6 = 0;
          do {
            lVar3 = *param_2;
            if (*(longlong *)(lVar3 + lVar5) == plVar2[0xe]) {
              *(int *)(param_2 + 2) = (int)param_2[2] + 1;
              piVar1 = (int *)(lVar3 + 0x160 + lVar5);
              *piVar1 = *piVar1 + 1;
              local_58 = plVar2;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar2);
              }
              FUN_1410e3a04(&local_58,lVar3 + lVar5);
              iVar4 = (int)param_2[1];
            }
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0x168;
          } while (lVar6 < iVar4);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < local_48);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4cf98 FUN_148e4cf98 body=230 status=ok
// SIG undefined FUN_148e4cf98(void)

void FUN_148e4cf98(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar7 = FUN_1403e7f2a(param_2);
  if (cVar7 != '\0') {
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
    *local_68 = &PTR_FUN_14b9b5870;
    local_68[1] = param_1;
    local_68[2] = uVar4;
    local_68[3] = uVar5;
    local_68[4] = lVar6;
    if (local_68 + 1 != (undefined8 *)0x0) {
      local_78[0] = FUN_14429430a;
    }
    FUN_148e4d080(param_1,local_78);
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



// FUNCTION 148e4d080 FUN_148e4d080 body=484 status=ok
// SIG undefined FUN_148e4d080(void)

void FUN_148e4d080(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
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
  uVar4 = FUN_1401cb356();
  local_78 = *param_2;
  local_68[0] = (longlong *)0x0;
  local_88 = param_1;
  if (local_78 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,local_68);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,7,0x10);
  puVar2 = local_a8;
  local_a0 = 7;
  *local_a8 = &PTR_LAB_149e02020;
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
  local_a8[2] = lVar5;
  *local_a8 = &PTR_FUN_14b9b58b0;
  local_a8[3] = 0;
  FUN_14485c47a(local_a8 + 3,param_1);
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
  FUN_1405f67fc(uVar4,local_98,&local_a8,L"UGameSettingPressAnyKey_Dismiss");
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
    plVar6 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar6 = (longlong *)&local_58;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4d266 FUN_148e4d266 body=89 status=ok
// SIG undefined FUN_148e4d266(void)

void FUN_148e4d266(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14b9b5890;
  local_48 = &LAB_144294450;
  local_20 = param_1;
  FUN_148e4d080();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4d2c0 FUN_148e4d2c0 body=762 status=ok
// SIG undefined FUN_148e4d2c0(void)

void FUN_148e4d2c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_140059518(param_1 + 0x44);
  if (((lVar5 == 0) || (lVar5 = FUN_14120f7e6(lVar5), lVar5 == 0)) ||
     (lVar6 = FUN_1410e70dc(lVar5,param_1 + 0x150), lVar6 == 0)) goto LAB_148e4d33a;
  lVar7 = FUN_14119b10c();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_148e4d33a;
  local_58 = 0;
  uStack_50 = 0;
  local_74 = *(undefined4 *)(param_1 + 0x158);
  local_70 = *param_2;
  local_68 = param_2[1];
  local_60 = param_2[2];
  uVar3 = local_74;
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    uVar3 = *(undefined4 *)(param_1 + 0x158);
  }
  FUN_148ef47f8(lVar6,uVar3,&local_70,&local_58);
  lVar7 = local_58;
  lVar13 = (longlong)(int)uStack_50;
  if (lVar13 == 0) {
LAB_148e4d534:
    cVar4 = FUN_145800bfe(lVar6);
    if (cVar4 == '\0') {
      FUN_148b07ed2(lVar6,*(undefined4 *)(param_1 + 0x158),param_2);
    }
    else {
      FUN_148ef4856();
    }
  }
  else {
    lVar10 = 0;
    do {
      plVar8 = *(longlong **)(lVar7 + lVar10);
      if (*plVar8 == *(longlong *)(lVar6 + 0x138)) {
        cVar4 = FUN_1438c05f8(plVar8);
        if ((cVar4 == (char)local_74) &&
           (plVar8 = (longlong *)FUN_1410e88d8(plVar8), *plVar8 == *param_2)) goto LAB_148e4d558;
      }
      lVar10 = lVar10 + 8;
    } while (lVar13 * 8 != lVar10);
    if ((int)uStack_50 < 1) goto LAB_148e4d534;
    lVar7 = 0;
    bVar12 = false;
    iVar11 = (int)uStack_50;
    do {
      lVar13 = *(longlong *)(*(longlong *)(local_58 + lVar7 * 8) + 0x80);
      if (lVar13 != 0) {
        lVar9 = FUN_14119af74();
        lVar10 = *(longlong *)(lVar13 + 0x10);
        iVar11 = *(int *)(lVar9 + 0x38);
        if (iVar11 <= *(int *)(lVar10 + 0x38)) {
          do {
            if ((((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar11 * 8) !=
                   lVar9 + 0x30) || (*(char *)(lVar13 + 0x50) == '\x02')) ||
                (*(char *)(lVar13 + 0x50) == *(char *)(lVar6 + 0x1d8))) ||
               (*(char *)(lVar6 + 0x1d8) == '\x02')) break;
            iVar11 = (int)uStack_50 + ~(uint)lVar7;
            if (iVar11 != 0) {
              if (0 < iVar11) {
                iVar11 = 1;
              }
              memmove((void *)(local_58 + lVar7 * 8),
                      (void *)(local_58 + (longlong)((int)uStack_50 - iVar11) * 8),
                      (longlong)iVar11 << 3);
            }
            iVar11 = (int)uStack_50 + -1;
            uStack_50 = CONCAT44(uStack_50._4_4_,iVar11);
            if (iVar11 <= lVar7) goto LAB_148e4d570;
            lVar13 = *(longlong *)(*(longlong *)(local_58 + lVar7 * 8) + 0x80);
            if (lVar13 == 0) {
              bVar12 = true;
              break;
            }
            lVar9 = FUN_14119af74();
            lVar10 = *(longlong *)(lVar13 + 0x10);
            iVar11 = *(int *)(lVar9 + 0x38);
            bVar12 = true;
          } while (iVar11 <= *(int *)(lVar10 + 0x38));
        }
        iVar11 = (int)uStack_50;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar11);
    if (bVar12) {
LAB_148e4d570:
      FUN_148e5514e(&local_58);
      iVar11 = (int)uStack_50;
    }
    if (iVar11 < 1) goto LAB_148e4d534;
    if (*(char *)(param_1 + 0x15c) == '\x01') {
      local_88 = lVar5;
      FUN_148e4d5bc(param_1,lVar6,param_2,&local_58);
    }
    else {
      FUN_148e4e062(param_1,lVar6,param_2,&local_58);
    }
  }
LAB_148e4d558:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148e4d33a:
  plVar8 = (longlong *)param_2[2];
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4d5bc FUN_148e4d5bc body=2687 status=ok
// SIG undefined FUN_148e4d5bc(void)

void FUN_148e4d5bc(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong **param_5)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_188 [32];
  longlong **local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_150;
  longlong local_140;
  undefined8 local_138;
  longlong **local_130;
  undefined1 local_128 [16];
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  ulonglong uStack_90;
  undefined4 local_88 [4];
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar8 = (longlong *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = 0;
  local_140 = param_2;
  if (*(int *)(param_1 + 0x184) < 0) {
    FUN_147fa3102(plVar8,0);
  }
  lVar4 = FUN_140059518(param_1 + 0x44);
  if (lVar4 != 0) {
    local_130 = param_5;
    lVar14 = param_4[1];
    local_138 = param_3;
    if ((longlong)(int)lVar14 != 0) {
      lVar10 = *param_4;
      lVar15 = 0;
      do {
        lVar9 = *(longlong *)(lVar10 + lVar15);
        lVar3 = *(longlong *)(lVar9 + 0x80);
        if (lVar3 == 0) {
LAB_148e4d74b:
          iVar2 = *(int *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x180) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
            FUN_147fa3162(plVar8,iVar2);
          }
          *(longlong *)(*plVar8 + (longlong)iVar2 * 8) = lVar9;
        }
        else {
          lVar5 = FUN_14119af74();
          if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
              (*(char *)(lVar3 + 0x50) == '\x02')) ||
             ((*(char *)(lVar3 + 0x50) == *(char *)(local_140 + 0x1d8) ||
              (*(char *)(local_140 + 0x1d8) == '\x02')))) goto LAB_148e4d74b;
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)lVar14 * 8 != lVar15);
    }
    if (*(int *)(param_1 + 0x180) < 1) {
      local_168 = local_130;
      FUN_148e4edd6(param_1,local_140,local_138,plVar8);
      FUN_1413a517a(param_1 + 0x160,&DAT_14c966e80);
      *(undefined4 *)(param_1 + 0x180) = 0;
      if (*(int *)(param_1 + 0x184) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_188);
      }
    }
    else {
      lVar4 = FUN_145da44aa(lVar4);
      if (lVar4 != 0) {
        local_98 = 0;
        uStack_90 = 0;
        FUN_1410e4a6a(local_138,&local_d8);
        FUN_1400021e4(&local_d8,&local_b8);
        local_a0 = (int)uStack_b0;
        uVar11 = (int)uStack_b0 - 1;
        if ((int)uStack_b0 == 0) {
          uVar11 = 0;
        }
        if (0 < (int)uVar11) {
          uVar12 = 0;
          do {
            uVar1 = *(ushort *)((longlong)local_b8 + uVar12 * 2);
            *(ushort *)((longlong)local_b8 + uVar12 * 2) =
                 (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
        local_a8 = local_b8;
        local_9c = uStack_b0._4_4_;
        local_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        FUN_140233b1a(&local_118);
        local_88[0] = 4;
        FUN_14023423e(&local_78,&local_118);
        FUN_140056680(&local_c8,L"InKey");
        FUN_140233eec(&local_98,&local_c8,local_88);
        if (local_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
          local_78 = (longlong *)0x0;
          local_70 = 0;
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        if (local_a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = FUN_145800c9e(local_140,0);
        FUN_1410e4a6a(uVar6,&local_d8);
        FUN_1400021e4(&local_d8,&local_b8);
        local_a0 = (int)uStack_b0;
        uVar11 = (int)uStack_b0 - 1;
        if ((int)uStack_b0 == 0) {
          uVar11 = 0;
        }
        if (0 < (int)uVar11) {
          uVar12 = 0;
          do {
            uVar1 = *(ushort *)((longlong)local_b8 + uVar12 * 2);
            *(ushort *)((longlong)local_b8 + uVar12 * 2) =
                 (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
        local_a8 = local_b8;
        local_9c = uStack_b0._4_4_;
        local_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        FUN_140233b1a(&local_118);
        local_88[0] = 4;
        FUN_14023423e(&local_78,&local_118);
        FUN_140056680(&local_c8,L"SwapKey");
        FUN_140233eec(&local_98,&local_c8,local_88);
        if (local_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
          local_78 = (longlong *)0x0;
          local_70 = 0;
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        if (local_a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_118 = *(longlong **)(local_140 + 0x78);
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 8))();
        }
        local_110 = *(undefined4 *)(local_140 + 0x80);
        local_88[0] = 4;
        FUN_14023423e();
        FUN_140056680(&local_a8,L"TargetAction");
        FUN_140233eec(&local_98,&local_a8,local_88);
        if (local_a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
          local_78 = (longlong *)0x0;
          local_70 = 0;
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        plVar13 = *(longlong **)(param_1 + 0x178);
        iVar2 = *(int *)(param_1 + 0x180);
        if ((longlong)iVar2 != 0) {
          lVar14 = 0;
          do {
            lVar10 = *(longlong *)((longlong)plVar13 + lVar14);
            lVar15 = *(longlong *)(lVar10 + 0x80);
            if (lVar15 != 0) {
              lVar9 = FUN_14119af74();
              if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                 (*(char *)(lVar15 + 0x30) == '\x01')) goto LAB_148e4db52;
            }
            lVar14 = lVar14 + 8;
          } while ((longlong)iVar2 * 8 != lVar14);
          plVar13 = (longlong *)*plVar8;
        }
        lVar10 = *plVar13;
LAB_148e4db52:
        puVar7 = (undefined8 *)FUN_1410e88d2(lVar10);
        local_88[0] = 4;
        local_78 = (longlong *)*puVar7;
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 8))();
        }
        local_70 = *(undefined4 *)(puVar7 + 1);
        FUN_140056680(&local_118,L"ActionName1");
        FUN_140233eec(&local_98,&local_118,local_88);
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
        }
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        FUN_1446efa72(&local_a8,0,3,0x10);
        plVar8 = local_a8;
        local_a0 = 3;
        *local_a8 = (longlong)&PTR_LAB_14b972ed0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        local_a8[2] = lVar10;
        *local_a8 = (longlong)&PTR_FUN_14b9b54d0;
        local_a8[3] = 0;
        FUN_14485c47a(local_a8 + 3,param_1);
        plVar8[4] = (longlong)FUN_148e4ece2;
        *(undefined4 *)(plVar8 + 5) = 0;
        plVar8 = (longlong *)FUN_140e82300();
        local_b8 = (longlong *)*plVar8;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 8))();
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)plVar8[1]);
        plVar8 = (longlong *)FUN_140e82300();
        local_c8 = (longlong *)*plVar8;
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 8))();
        }
        local_c0 = (undefined4)plVar8[1];
        plVar8 = (longlong *)FUN_140e82300();
        local_d8 = (longlong *)*plVar8;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 8))();
        }
        local_d0 = (undefined4)plVar8[1];
        puVar7 = (undefined8 *)FUN_140e82300();
        local_e8 = (longlong *)*puVar7;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 8))();
        }
        local_e0 = *(undefined4 *)(puVar7 + 1);
        FUN_140ac6c96(&DAT_14cbd7ca8,&local_b8);
        FUN_1447a97f4(local_88,&DAT_14cbd7e38);
        FUN_140ac6c96(local_88,&local_c8);
        FUN_140ac6c96(&DAT_14cbd7c80,&local_d8);
        FUN_140ac6c96(&DAT_14cbd7cd0,&local_e8);
        plVar8 = local_d8;
        local_f8 = 0;
        uStack_f0 = 0;
        local_118 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 8))(local_d8);
        }
        local_110 = local_d0;
        local_108 = DAT_14cbd7bc0;
        local_100 = 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
        FUN_145da4fc8(&local_f8,0);
        lVar14 = local_f8;
        FUN_14023423e(local_f8,&local_118);
        *(undefined1 *)(lVar14 + 0x18) = local_100;
        *(undefined8 *)(lVar14 + 0x10) = local_108;
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        plVar13 = local_e8;
        local_118 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 8))(local_e8);
        }
        uVar12 = uStack_f0;
        local_110 = local_e0;
        local_108 = DAT_14cbd7bd0;
        local_100 = 1;
        lVar14 = (longlong)(int)uStack_f0;
        uVar11 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar11);
        if (uStack_f0._4_4_ < uVar11) {
          FUN_145da4fc8(&local_f8,uVar12 & 0xffffffff);
        }
        lVar10 = local_f8;
        lVar14 = lVar14 * 0x20;
        FUN_14023423e(local_f8 + lVar14,&local_118);
        *(undefined1 *)(lVar10 + 0x18 + lVar14) = local_100;
        *(undefined8 *)(lVar10 + 0x10 + lVar14) = local_108;
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        FUN_14023409e(local_128,&local_c8,1);
        FUN_140233c04(&local_118,local_128,&local_98);
        FUN_140008f88(&local_c8,&local_118);
        uVar6 = local_138;
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        FUN_1413a517a(param_1 + 0x160,uVar6);
        local_168 = &local_a8;
        local_150 = 1;
        local_158 = 0;
        local_160 = 0;
        FUN_1459dd948(lVar4,&local_b8,&local_c8,&local_f8);
        FUN_140e0067b(local_f8,uStack_f0 & 0xffffffff);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_6c,local_70) != 0) {
          FUN_1400020a8();
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))();
        }
        FUN_1449db362(&local_a8);
        FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4e062 FUN_148e4e062 body=2291 status=ok
// SIG undefined FUN_148e4e062(void)

void FUN_148e4e062(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_178 [32];
  longlong **local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined1 local_128 [16];
  longlong *local_118 [2];
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar10 = (longlong *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) < 0) {
    FUN_147fa3102(plVar10,0);
  }
  lVar8 = FUN_140059518(param_1 + 0x44);
  if ((lVar8 == 0) || (lVar8 = FUN_145da44aa(lVar8), lVar8 == 0)) goto LAB_148e4e0c3;
  lVar13 = param_4[1];
  local_138 = param_3;
  local_130 = lVar8;
  if ((longlong)(int)lVar13 != 0) {
    lVar8 = *param_4;
    lVar17 = 0;
    do {
      puVar9 = *(undefined8 **)(lVar8 + lVar17);
      lVar2 = puVar9[0x10];
      if (lVar2 == 0) {
LAB_148e4e89b:
        local_88 = (longlong *)*puVar9;
        cVar6 = FUN_148b07a04(param_2,&local_88);
        if (cVar6 == '\0') {
          iVar15 = *(int *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x180) = iVar15 + 1U;
          if (*(uint *)(param_1 + 0x184) < iVar15 + 1U) {
            FUN_147fa3162(plVar10,iVar15);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x178) + (longlong)iVar15 * 8) = puVar9;
          if (*(int *)(param_1 + 0x198) < *(int *)(param_1 + 0x180)) break;
        }
      }
      else {
        lVar12 = FUN_14119ae8e();
        if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) ||
           (*(char *)(lVar2 + 0x30) == '\x01')) goto LAB_148e4e89b;
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar17);
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_1459c4454(local_138,&local_a8,1);
  local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(&local_78,&local_a8);
  FUN_140056680(&local_b8,L"InKey");
  FUN_140233eec(&local_98,&local_b8,&local_88);
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
    local_78 = (longlong *)0x0;
    local_70 = 0;
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if (0 < *(int *)(param_1 + 0x180)) {
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      FUN_144a83b10(&local_88,uVar1 & 0xffffffff);
      FUN_1407ec8fc(&local_a8,&DAT_14cbd7ed8,&local_88);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      puVar9 = (undefined8 *)FUN_1410e88d2(*(undefined8 *)(*plVar10 + uVar16 * 8));
      local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
      local_78 = (longlong *)*puVar9;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 8))();
      }
      local_70 = *(undefined4 *)(puVar9 + 1);
      FUN_1467e355c(&local_98,&local_a8,&local_88);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar16 = uVar1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x180));
  }
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  plVar10 = local_a8;
  local_a0 = 3;
  *local_a8 = (longlong)&PTR_LAB_14b972ed0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_a8[2] = lVar13;
  *local_a8 = (longlong)&PTR_FUN_14b9b54d0;
  local_a8[3] = 0;
  FUN_14485c47a(local_a8 + 3,param_1);
  plVar10[4] = (longlong)FUN_148e4ea56;
  *(undefined4 *)(plVar10 + 5) = 0;
  plVar10 = (longlong *)FUN_140e82300();
  local_b8 = (longlong *)*plVar10;
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  local_b0 = (undefined4)plVar10[1];
  plVar10 = (longlong *)FUN_140e82300();
  local_c8 = (longlong *)*plVar10;
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 8))();
  }
  local_c0 = (undefined4)plVar10[1];
  plVar10 = (longlong *)FUN_140e82300();
  local_d8 = (longlong *)*plVar10;
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  local_d0 = (undefined4)plVar10[1];
  puVar14 = &DAT_14cbd7c08;
  if (*(int *)(param_1 + 0x180) == 1) {
    puVar14 = &DAT_14cbd7be0;
  }
  FUN_140ac6c96(puVar14,&local_b8);
  puVar14 = &DAT_14cbd7c58;
  if (*(int *)(param_1 + 0x180) == 1) {
    puVar14 = &DAT_14cbd7c30;
  }
  FUN_140ac6c96(puVar14,&local_c8);
  FUN_140ac6c96(&DAT_14cbd7cd0,&local_d8);
  plVar10 = local_b8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_88 = local_b8;
  iVar15 = 0;
  uVar7 = 0;
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 8))(local_b8);
    iVar15 = (int)uStack_e0;
    uVar7 = uStack_e0._4_4_;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,local_b0);
  local_78 = DAT_14cbd7bc0;
  local_70 = CONCAT31(local_70._1_3_,1);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar15 + 1U);
  if (uVar7 < iVar15 + 1U) {
    FUN_145da4fc8(&local_e8,iVar15);
  }
  lVar8 = local_e8;
  lVar13 = (longlong)iVar15 * 0x20;
  FUN_14023423e(local_e8 + lVar13,&local_88);
  *(undefined1 *)(lVar8 + 0x18 + lVar13) = (undefined1)local_70;
  *(longlong **)(lVar8 + 0x10 + lVar13) = local_78;
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  plVar5 = local_c8;
  local_88 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 8))(local_c8);
  }
  uVar16 = uStack_e0;
  uStack_80 = CONCAT44(uStack_80._4_4_,local_c0);
  local_78 = DAT_14cbd7bc8;
  local_70 = CONCAT31(local_70._1_3_,1);
  lVar8 = (longlong)(int)uStack_e0;
  uVar7 = (int)uStack_e0 + 1;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
  if (uStack_e0._4_4_ < uVar7) {
    FUN_145da4fc8(&local_e8,uVar16 & 0xffffffff);
  }
  lVar13 = local_e8;
  lVar8 = lVar8 * 0x20;
  FUN_14023423e(local_e8 + lVar8,&local_88);
  *(undefined1 *)(lVar13 + 0x18 + lVar8) = (undefined1)local_70;
  *(longlong **)(lVar13 + 0x10 + lVar8) = local_78;
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  plVar4 = local_d8;
  local_88 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 8))(local_d8);
  }
  uVar16 = uStack_e0;
  uStack_80 = CONCAT44(uStack_80._4_4_,local_d0);
  local_78 = DAT_14cbd7bd0;
  local_70 = CONCAT31(local_70._1_3_,1);
  lVar8 = (longlong)(int)uStack_e0;
  uVar7 = (int)uStack_e0 + 1;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
  if (uStack_e0._4_4_ < uVar7) {
    FUN_145da4fc8(&local_e8,uVar16 & 0xffffffff);
  }
  lVar13 = local_e8;
  lVar8 = lVar8 * 0x20;
  FUN_14023423e(local_e8 + lVar8,&local_88);
  *(undefined1 *)(lVar13 + 0x18 + lVar8) = (undefined1)local_70;
  *(longlong **)(lVar13 + 0x10 + lVar8) = local_78;
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  plVar11 = (longlong *)FUN_140e82300();
  uVar3 = local_138;
  local_f8 = (longlong *)*plVar11;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = (undefined4)plVar11[1];
  plVar11 = (longlong *)FUN_140e82300();
  local_108 = (longlong *)*plVar11;
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 8))();
  }
  local_100 = (undefined4)plVar11[1];
  puVar14 = &DAT_14cbd7cf8;
  if (*(int *)(param_1 + 0x180) == 1) {
    puVar14 = &DAT_14cbd7d20;
  }
  FUN_140ac6c96(puVar14,&local_f8);
  FUN_1447a97f4(&local_88,&DAT_14cbd7d48);
  if (*(int *)(param_1 + 0x180) < 6) {
    uVar7 = *(int *)(param_1 + 0x180) - 2;
    if (uVar7 < 4) {
      puVar14 = (&PTR_DAT_14b9b5e70)[uVar7];
      goto LAB_148e4e6e6;
    }
  }
  else {
    puVar14 = &DAT_14cbd7e10;
LAB_148e4e6e6:
    FUN_1447715ec(&local_88,puVar14);
  }
  FUN_140ac6c96(&local_88,&local_108);
  FUN_14023409e(local_128,&local_108,1);
  FUN_140233c04(local_118,local_128,&local_98);
  FUN_140008f88(&local_108,local_118);
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  FUN_1413a517a(param_1 + 0x160,uVar3);
  local_158 = &local_a8;
  local_140 = 1;
  local_148 = 0;
  local_150 = 0;
  FUN_1459dd948(local_130,&local_f8,&local_108,&local_e8);
  if (CONCAT44(uStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  FUN_140e0067b(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  FUN_1449db362(&local_a8);
  FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_148e4e0c3:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4e956 FUN_148e4e956 body=254 status=ok
// SIG undefined FUN_148e4e956(void)

undefined8
FUN_148e4e956(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b539a40;
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
  *local_48 = &PTR_FUN_14b9b5920;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148b00f44(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4ea56 FUN_148e4ea56 body=651 status=ok
// SIG undefined FUN_148e4ea56(void)

void FUN_148e4ea56(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined2 *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_1 + 0x160;
  cVar3 = FUN_1403e7f2a(lVar6);
  if (((cVar3 == '\0') || (lVar5 = FUN_140059518(param_1 + 0x44), lVar5 == 0)) ||
     (lVar5 = FUN_14120f7e6(lVar5), lVar5 == 0)) goto LAB_148e4ec6c;
  lVar8 = *param_2;
  if (lVar8 == DAT_14cbd7bc0) {
    iVar1 = *(int *)(param_1 + 0x180);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x178);
      lVar10 = 0;
      local_98 = lVar8;
      local_90 = param_2;
      local_88 = lVar6;
      local_80 = param_1;
      do {
        puVar2 = *(undefined8 **)(lVar8 + lVar10);
        local_78 = *puVar2;
        FUN_1400021e4(&local_78,local_70);
        FUN_140ba7826(&local_60,L"KBM_Input_",local_70);
        puVar9 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar9 = local_60;
        }
        FUN_1446f470e(local_50,puVar9,1);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
        lVar6 = FUN_1410e70dc(lVar5,local_50);
        if (lVar6 != 0) {
          lVar7 = FUN_14119b10c();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            cVar3 = FUN_145800bfe(lVar6);
            uVar4 = FUN_1438c05f8(puVar2);
            if (cVar3 == '\0') {
              FUN_148b07ed2(lVar6,uVar4,&DAT_14c966e80);
              lVar8 = local_98;
            }
            else {
              FUN_148ef4856();
              lVar8 = local_98;
            }
          }
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
      lVar8 = *local_90;
      param_1 = local_80;
      lVar6 = local_88;
      goto LAB_148e4ec05;
    }
LAB_148e4ec13:
    lVar5 = FUN_1410e70dc(lVar5,param_1 + 0x150);
    if (lVar5 != 0) {
      lVar8 = FUN_14119b10c();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        cVar3 = FUN_145800bfe(lVar5);
        if (cVar3 == '\0') {
          FUN_148b07ed2(lVar5,*(undefined4 *)(param_1 + 0x158),lVar6);
        }
        else {
          FUN_148ef4856();
          FUN_1410e7e0e(param_1);
        }
      }
    }
  }
  else {
LAB_148e4ec05:
    if ((lVar8 == DAT_14cbd7bc0) || (lVar8 == DAT_14cbd7bc8)) goto LAB_148e4ec13;
  }
  FUN_1413a517a(lVar6,&DAT_14c966e80);
  if (*(int *)(param_1 + 0x184) < 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
    FUN_147fa3102(param_1 + 0x178,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
LAB_148e4ec6c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4ece2 FUN_148e4ece2 body=243 status=ok
// SIG undefined FUN_148e4ece2(void)

void FUN_148e4ece2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x160;
  cVar2 = FUN_1403e7f2a(lVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_140059518(param_1 + 0x44);
    if (lVar3 != 0) {
      lVar3 = FUN_14120f7e6(lVar3);
      if (lVar3 != 0) {
        if (*param_2 == DAT_14cbd7bc0) {
          lVar4 = FUN_1410e70dc(lVar3,param_1 + 0x150);
          if (lVar4 != 0) {
            lVar5 = FUN_14119b10c();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              FUN_148e4edd6(param_1,lVar4,lVar1,param_1 + 0x178,lVar3);
            }
          }
        }
        FUN_1413a517a(lVar1,&DAT_14c966e80);
        if (*(int *)(param_1 + 0x184) < 0) {
          *(undefined4 *)(param_1 + 0x180) = 0;
          FUN_147fa3102(param_1 + 0x178,0);
          return;
        }
        *(undefined4 *)(param_1 + 0x180) = 0;
      }
    }
  }
  return;
}



// FUNCTION 148e4edd6 FUN_148e4edd6 body=1077 status=ok
// SIG undefined FUN_148e4edd6(void)

void FUN_148e4edd6(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x15c) == '\x01') && (cVar4 = FUN_145800bfe(param_2), cVar4 != '\0')) {
    puVar6 = (undefined8 *)FUN_145800c9e(param_2,0);
    local_60 = *puVar6;
    uStack_58 = puVar6[1];
    local_50 = (longlong *)puVar6[2];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    lVar13 = param_4[1];
    local_d0 = param_1;
    local_c8 = param_2;
    if ((longlong)(int)lVar13 != 0) {
      lVar12 = *param_4;
      lVar11 = 0;
LAB_148e4ee76:
      lVar8 = *(longlong *)(*(longlong *)(lVar12 + lVar11) + 0x80);
      if (lVar8 == 0) goto LAB_148e4eeb3;
      lVar7 = FUN_14119af74();
      if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
         (*(char *)(lVar8 + 0x50) != '\x02')) goto LAB_148e4eeb3;
      FUN_148ef4856(param_2,*(undefined4 *)(param_1 + 0x158),param_3);
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      local_90 = (undefined4)local_60;
      uStack_8c = local_60._4_4_;
      uStack_88 = (undefined4)uStack_58;
      uStack_84 = uStack_58._4_4_;
      local_80 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_148ef47f8(param_2,*(undefined4 *)(param_1 + 0x158),&local_90,&local_78);
      puVar9 = local_78;
      lVar13 = (longlong)(int)uStack_70;
      if (lVar13 != 0) {
        lVar12 = 0;
        do {
          puVar6 = *(undefined8 **)((longlong)puVar9 + lVar12);
          local_c0 = *puVar6;
          FUN_1400021e4(&local_c0,local_b8);
          FUN_140ba7826(&local_a8,L"KBM_Input_",local_b8);
          puVar10 = &DAT_149dfb77a;
          if (local_a0 != 0) {
            puVar10 = local_a8;
          }
          FUN_1446f470e(&local_98,puVar10,1);
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
          lVar11 = FUN_1410e70dc(param_5,&local_98);
          if (lVar11 != 0) {
            lVar8 = FUN_14119b10c();
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
               (cVar4 = FUN_145800bfe(lVar11), cVar4 != '\0')) {
              uVar5 = FUN_1438c05f8(puVar6);
              FUN_148ef4856(lVar11,uVar5,param_3);
            }
          }
          lVar12 = lVar12 + 8;
        } while (lVar13 * 8 != lVar12);
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148e4eece;
    }
LAB_148e4eebc:
    FUN_148ef4856(param_2,*(undefined4 *)(param_1 + 0x158),param_3);
LAB_148e4eece:
    lVar13 = param_4[1];
    if ((longlong)(int)lVar13 != 0) {
      lVar12 = *param_4;
      lVar11 = 0;
      do {
        puVar6 = *(undefined8 **)(lVar12 + lVar11);
        lVar8 = puVar6[0x10];
        if (lVar8 == 0) {
LAB_148e4ef2a:
          local_98 = *puVar6;
          FUN_1400021e4(&local_98,&local_a8);
          FUN_140ba7826(&local_78,L"KBM_Input_",&local_a8);
          puVar9 = &DAT_149dfb77a;
          if ((int)uStack_70 != 0) {
            puVar9 = local_78;
          }
          FUN_1446f470e(local_b8,puVar9,1);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar8 = FUN_1410e70dc(param_5,local_b8);
          if (lVar8 != 0) {
            lVar7 = FUN_14119b10c();
            if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
               (cVar4 = FUN_145800bfe(lVar8), cVar4 != '\0')) {
              uVar5 = FUN_1438c05f8(puVar6);
              FUN_148ef4856(lVar8,uVar5,&local_60);
            }
          }
        }
        else {
          lVar7 = FUN_14119af74();
          if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
             ((*(char *)(lVar8 + 0x50) == '\x02' ||
              ((*(char *)(lVar8 + 0x50) == *(char *)(local_c8 + 0x1d8) ||
               (*(char *)(local_c8 + 0x1d8) == '\x02')))))) goto LAB_148e4ef2a;
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)(int)lVar13 * 8 != lVar11);
    }
    FUN_1410e7e0e(local_d0);
    plVar3 = local_50;
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148e4eeb3:
  lVar11 = lVar11 + 8;
  if ((longlong)(int)lVar13 * 8 == lVar11) goto LAB_148e4eebc;
  goto LAB_148e4ee76;
}



// FUNCTION 148e4f20c FUN_148e4f20c body=26 status=ok
// SIG undefined FUN_148e4f20c(void)

void FUN_148e4f20c(undefined8 param_1)

{
  thunk_FUN_140f45be4();
  FUN_148e4f226(param_1);
  return;
}



// FUNCTION 148e4f226 FUN_148e4f226 body=511 status=ok
// SIG undefined FUN_148e4f226(void)

void FUN_148e4f226(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  int local_140;
  undefined1 local_138 [16];
  int local_128;
  ulonglong local_120;
  int local_118;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar6 = FUN_140e85284();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_158,uVar7);
      lVar6 = *local_158;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x48));
      plVar4 = uStack_150;
      *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + 1;
      if (uStack_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_150 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_150)(uStack_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      FUN_1466452f0(&local_158);
      cVar5 = (**(code **)(*(longlong *)(lVar3 + 0x2c40) + 0x20))(lVar3 + 0x2c40);
      if (cVar5 != '\0') {
        local_128 = local_128 + 1;
        (**(code **)(*(longlong *)(lVar3 + 0x2c40) + 0x10))(lVar3 + 0x2c40,local_138);
        if (local_118 == 0 || local_120 != *(uint *)(lVar3 + 0xc)) {
          local_118 = local_118 + 1;
          local_120 = (ulonglong)*(uint *)(lVar3 + 0xc);
        }
        lVar3 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar3 == 0) {
          puVar8 = &DAT_14c8464e0;
          uVar9 = (undefined4)DAT_14c8464f0;
          uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar9 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
          puVar8 = (undefined8 *)(lVar3 + 0x260);
        }
        if ((local_140 == 0 || (double)CONCAT44(uVar10,uVar9) != local_148) ||
            ((double)puVar8[1] != (double)uStack_150 || (double)local_158 != (double)*puVar8)) {
          local_148 = (double)CONCAT44(uVar10,uVar9);
          local_140 = local_140 + 1;
          local_158 = (longlong *)*puVar8;
          uStack_150 = (longlong *)puVar8[1];
        }
        param_1[0xb] = (longlong)local_148;
        *(undefined4 *)(param_1 + 9) = (undefined4)local_158;
        *(undefined4 *)((longlong)param_1 + 0x4c) = local_158._4_4_;
        *(undefined4 *)(param_1 + 10) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_150._4_4_;
        FUN_145d45072(lVar6);
      }
      FUN_1457f6b38(&local_158);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x48));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4f426 FUN_148e4f426 body=287 status=ok
// SIG undefined FUN_148e4f426(void)

void FUN_148e4f426(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar7 = FUN_140e85284();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_48,uVar8);
      plVar5 = (longlong *)*local_48;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 9));
      *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
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
      iVar6 = (int)plVar5[1];
      if (0 < iVar6) {
        lVar7 = 0x38;
        uVar9 = 0;
        do {
          uVar3 = *(uint *)(lVar4 + 0xc);
          *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
          if (*(ulonglong *)(*plVar5 + lVar7) == (ulonglong)uVar3) {
            FUN_1457f6a60(plVar5,uVar9 & 0xffffffff);
            iVar6 = (int)plVar5[1];
          }
          uVar9 = uVar9 + 1;
          lVar7 = lVar7 + 0x120;
        } while ((longlong)uVar9 < (longlong)iVar6);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 9));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1418f4106(param_1);
  return;
}



// FUNCTION 148e4f546 FUN_148e4f546 body=174 status=ok
// SIG undefined FUN_148e4f546(void)

void FUN_148e4f546(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  
  lVar1 = *(longlong *)(param_1 + -0x18);
  if (lVar1 != 0) {
    lVar3 = FUN_140e85284();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) &&
       (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2c40) + 0x20))(lVar1 + 0x2c40), cVar2 != '\0'))
    {
      lVar1 = *(longlong *)(lVar1 + 0x1c8);
      if (lVar1 == 0) {
        pdVar4 = (double *)&DAT_14c8464e0;
        dVar5 = DAT_14c8464f0;
      }
      else {
        pdVar4 = (double *)(lVar1 + 0x260);
        dVar5 = *(double *)(lVar1 + 0x270);
      }
      if ((*pdVar4 == *(double *)(param_1 + 0x10)) &&
         (!NAN(*pdVar4) && !NAN(*(double *)(param_1 + 0x10)))) {
        if ((pdVar4[1] == *(double *)(param_1 + 0x18)) &&
           (!NAN(pdVar4[1]) && !NAN(*(double *)(param_1 + 0x18)))) {
          if ((dVar5 == *(double *)(param_1 + 0x20)) &&
             (!NAN(dVar5) && !NAN(*(double *)(param_1 + 0x20)))) {
            return;
          }
        }
      }
      FUN_148e4f5f4(param_1 + -0x38);
      return;
    }
  }
  return;
}



// FUNCTION 148e4f5f4 FUN_148e4f5f4 body=464 status=ok
// SIG undefined FUN_148e4f5f4(void)

void FUN_148e4f5f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  longlong lVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  double *pdVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar13 = FUN_140e85284();
    if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8
          ) == lVar13 + 0x30)) &&
       (cVar12 = (**(code **)(*(longlong *)(lVar5 + 0x2c40) + 0x20))(lVar5 + 0x2c40), cVar12 != '\0'
       )) {
      (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_40);
      plVar6 = (longlong *)*local_40;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 9));
      *(int *)(plVar6 + 8) = (int)plVar6[8] + 1;
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
      iVar16 = (int)plVar6[1];
      if (0 < iVar16) {
        lVar13 = 0;
        lVar14 = 0;
        do {
          uVar4 = *(uint *)(lVar5 + 0xc);
          lVar11 = plVar6[2];
          *(int *)(plVar6 + 2) = (int)lVar11 + 1;
          lVar15 = *plVar6;
          if (*(ulonglong *)(lVar15 + 0x38 + lVar13) == (ulonglong)uVar4) {
            lVar7 = *(longlong *)(lVar5 + 0x1c8);
            if (lVar7 == 0) {
              uVar18 = (undefined4)DAT_14c8464f0;
              uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              pdVar17 = (double *)&DAT_14c8464e0;
            }
            else {
              uVar18 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
              uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
              pdVar17 = (double *)(lVar7 + 0x260);
            }
            dVar8 = *pdVar17;
            dVar9 = pdVar17[1];
            iVar16 = (int)lVar11 + 2;
            *(int *)(plVar6 + 2) = iVar16;
            if (((((dVar8 != *(double *)(lVar15 + lVar13)) ||
                  (NAN(dVar8) || NAN(*(double *)(lVar15 + lVar13)))) ||
                 ((pdVar17 = (double *)(lVar15 + 8 + lVar13), dVar9 != *pdVar17 ||
                  ((NAN(dVar9) || NAN(*pdVar17) ||
                   (pdVar17 = (double *)(lVar15 + 0x10 + lVar13),
                   (double)CONCAT44(uVar19,uVar18) != *pdVar17)))))) ||
                (NAN((double)CONCAT44(uVar19,uVar18)) || NAN(*pdVar17))) ||
               (*(int *)(lVar15 + 0x18 + lVar13) == 0)) {
              *(double *)(lVar15 + lVar13) = dVar8;
              ((double *)(lVar15 + lVar13))[1] = dVar9;
              *(ulonglong *)(lVar15 + 0x10 + lVar13) = CONCAT44(uVar19,uVar18);
              piVar2 = (int *)(lVar15 + 0x18 + lVar13);
              *piVar2 = *piVar2 + 1;
              iVar16 = (int)plVar6[2];
              lVar15 = *plVar6;
            }
            *(int *)(plVar6 + 2) = iVar16 + 1;
            param_1[0xb] = *(longlong *)(lVar15 + 0x10 + lVar13);
            puVar3 = (undefined4 *)(lVar15 + lVar13);
            uVar18 = puVar3[1];
            uVar19 = puVar3[2];
            uVar10 = puVar3[3];
            *(undefined4 *)(param_1 + 9) = *puVar3;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar18;
            *(undefined4 *)(param_1 + 10) = uVar19;
            *(undefined4 *)((longlong)param_1 + 0x54) = uVar10;
            iVar16 = (int)plVar6[1];
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x120;
        } while (lVar14 < iVar16);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e4f7da FUN_148e4f7da body=27 status=ok
// SIG undefined FUN_148e4f7da(void)

void FUN_148e4f7da(longlong param_1)

{
  FUN_144246bd2();
  FUN_148e4f5f4(param_1 + -0x30);
  return;
}



// FUNCTION 148e4f7fc FUN_148e4f7fc body=309 status=ok
// SIG undefined FUN_148e4f7fc(void)

void FUN_148e4f7fc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = FUN_144a883b6(param_1 + 6);
  if (lVar7 != 0) {
    lVar8 = FUN_144a2f878();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_38,uVar9);
      plVar5 = (longlong *)*local_38;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 9));
      *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
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
      iVar3 = (int)plVar5[1];
      if (0 < (longlong)iVar3) {
        lVar8 = plVar5[2];
        lVar10 = *plVar5 + 0x20;
        lVar11 = 0;
        do {
          uVar4 = *(uint *)(lVar7 + 0xc);
          iVar6 = (int)lVar11;
          *(int *)(plVar5 + 2) = (int)lVar8 + iVar6 + 1;
          if (*(ulonglong *)(lVar10 + 0x18) == (ulonglong)uVar4) {
            if (iVar6 < iVar3) {
              *(int *)(plVar5 + 2) = (int)lVar8 + iVar6 + 2;
              *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 1;
              (**(code **)(*(longlong *)(lVar7 + 0x3b20) + 0x10))(lVar7 + 0x3b20);
            }
            break;
          }
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x120;
        } while (iVar3 != lVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4f946 FUN_148e4f946 body=93 status=ok
// SIG undefined FUN_148e4f946(void)

undefined8 FUN_148e4f946(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28);
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



// FUNCTION 148e4f9a4 FUN_148e4f9a4 body=139 status=ok
// SIG undefined FUN_148e4f9a4(void)

void FUN_148e4f9a4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e5607c(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4 * 0x28) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar2 + lVar4 * 0x28) = *param_2;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0x28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x28) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(lVar2 + 0x14 + lVar4 * 0x28) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)(lVar2 + 0x18 + lVar4 * 0x28) = param_2[3];
  lVar3 = param_2[4];
  *(longlong *)(lVar2 + 0x20 + lVar4 * 0x28) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e4fa30 FUN_148e4fa30 body=110 status=ok
// SIG undefined FUN_148e4fa30(void)

void FUN_148e4fa30(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
    FUN_145aea6a4(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)iVar2 * 0x28);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_148e56110(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e4fa9e FUN_148e4fa9e body=26 status=ok
// SIG undefined FUN_148e4fa9e(void)

void FUN_148e4fa9e(undefined8 param_1)

{
  thunk_FUN_140ebe1b0();
  FUN_148e4fab8(param_1);
  return;
}



// FUNCTION 148e4fab8 FUN_148e4fab8 body=514 status=ok
// SIG undefined FUN_148e4fab8(void)

void FUN_148e4fab8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  int local_140;
  undefined1 local_138 [16];
  int local_128;
  ulonglong local_120;
  int local_118;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar6 = FUN_14071731e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_158,uVar7);
      lVar6 = *local_158;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x48));
      plVar4 = uStack_150;
      *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + 1;
      if (uStack_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_150 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_150)(uStack_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      cVar5 = (**(code **)(*(longlong *)(lVar3 + 0x1538) + 0x20))(lVar3 + 0x1538);
      if (cVar5 != '\0') {
        FUN_1466452f0(&local_158);
        local_128 = local_128 + 1;
        (**(code **)(*(longlong *)(lVar3 + 0x1538) + 0x10))(lVar3 + 0x1538,local_138);
        if (local_118 == 0 || local_120 != *(uint *)(lVar3 + 0xc)) {
          local_118 = local_118 + 1;
          local_120 = (ulonglong)*(uint *)(lVar3 + 0xc);
        }
        lVar3 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar3 == 0) {
          puVar8 = &DAT_14c8464e0;
          uVar9 = (undefined4)DAT_14c8464f0;
          uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar9 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
          puVar8 = (undefined8 *)(lVar3 + 0x260);
        }
        if ((local_140 == 0 || (double)CONCAT44(uVar10,uVar9) != local_148) ||
            ((double)puVar8[1] != (double)uStack_150 || (double)local_158 != (double)*puVar8)) {
          local_148 = (double)CONCAT44(uVar10,uVar9);
          local_140 = local_140 + 1;
          local_158 = (longlong *)*puVar8;
          uStack_150 = (longlong *)puVar8[1];
        }
        param_1[0xb] = (longlong)local_148;
        *(undefined4 *)(param_1 + 9) = (undefined4)local_158;
        *(undefined4 *)((longlong)param_1 + 0x4c) = local_158._4_4_;
        *(undefined4 *)(param_1 + 10) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_150._4_4_;
        FUN_145d45072(lVar6,&local_158);
        FUN_1457f6b38(&local_158);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x48));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e4fcbc FUN_148e4fcbc body=287 status=ok
// SIG undefined FUN_148e4fcbc(void)

void FUN_148e4fcbc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar7 = FUN_14071731e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_48,uVar8);
      plVar5 = (longlong *)*local_48;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 9));
      *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
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
      iVar6 = (int)plVar5[1];
      if (0 < iVar6) {
        lVar7 = 0x38;
        uVar9 = 0;
        do {
          uVar3 = *(uint *)(lVar4 + 0xc);
          *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
          if (*(ulonglong *)(*plVar5 + lVar7) == (ulonglong)uVar3) {
            FUN_1457f6a60(plVar5,uVar9 & 0xffffffff);
            iVar6 = (int)plVar5[1];
          }
          uVar9 = uVar9 + 1;
          lVar7 = lVar7 + 0x120;
        } while ((longlong)uVar9 < (longlong)iVar6);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 9));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1418f41de(param_1);
  return;
}



// FUNCTION 148e4fddc FUN_148e4fddc body=174 status=ok
// SIG undefined FUN_148e4fddc(void)

void FUN_148e4fddc(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  
  lVar1 = *(longlong *)(param_1 + -0x18);
  if (lVar1 != 0) {
    lVar3 = FUN_14071731e();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) &&
       (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x1538) + 0x20))(lVar1 + 0x1538), cVar2 != '\0'))
    {
      lVar1 = *(longlong *)(lVar1 + 0x1c8);
      if (lVar1 == 0) {
        pdVar4 = (double *)&DAT_14c8464e0;
        dVar5 = DAT_14c8464f0;
      }
      else {
        pdVar4 = (double *)(lVar1 + 0x260);
        dVar5 = *(double *)(lVar1 + 0x270);
      }
      if ((*pdVar4 == *(double *)(param_1 + 0x10)) &&
         (!NAN(*pdVar4) && !NAN(*(double *)(param_1 + 0x10)))) {
        if ((pdVar4[1] == *(double *)(param_1 + 0x18)) &&
           (!NAN(pdVar4[1]) && !NAN(*(double *)(param_1 + 0x18)))) {
          if ((dVar5 == *(double *)(param_1 + 0x20)) &&
             (!NAN(dVar5) && !NAN(*(double *)(param_1 + 0x20)))) {
            return;
          }
        }
      }
      FUN_148e4fe8a(param_1 + -0x38);
      return;
    }
  }
  return;
}



// FUNCTION 148e4fe8a FUN_148e4fe8a body=464 status=ok
// SIG undefined FUN_148e4fe8a(void)

void FUN_148e4fe8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  longlong lVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  double *pdVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar13 = FUN_14071731e();
    if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8
          ) == lVar13 + 0x30)) &&
       (cVar12 = (**(code **)(*(longlong *)(lVar5 + 0x1538) + 0x20))(lVar5 + 0x1538), cVar12 != '\0'
       )) {
      (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_40);
      plVar6 = (longlong *)*local_40;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 9));
      *(int *)(plVar6 + 8) = (int)plVar6[8] + 1;
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
      iVar16 = (int)plVar6[1];
      if (0 < iVar16) {
        lVar13 = 0;
        lVar14 = 0;
        do {
          uVar4 = *(uint *)(lVar5 + 0xc);
          lVar11 = plVar6[2];
          *(int *)(plVar6 + 2) = (int)lVar11 + 1;
          lVar15 = *plVar6;
          if (*(ulonglong *)(lVar15 + 0x38 + lVar13) == (ulonglong)uVar4) {
            lVar7 = *(longlong *)(lVar5 + 0x1c8);
            if (lVar7 == 0) {
              uVar18 = (undefined4)DAT_14c8464f0;
              uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              pdVar17 = (double *)&DAT_14c8464e0;
            }
            else {
              uVar18 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
              uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
              pdVar17 = (double *)(lVar7 + 0x260);
            }
            dVar8 = *pdVar17;
            dVar9 = pdVar17[1];
            iVar16 = (int)lVar11 + 2;
            *(int *)(plVar6 + 2) = iVar16;
            if (((((dVar8 != *(double *)(lVar15 + lVar13)) ||
                  (NAN(dVar8) || NAN(*(double *)(lVar15 + lVar13)))) ||
                 ((pdVar17 = (double *)(lVar15 + 8 + lVar13), dVar9 != *pdVar17 ||
                  ((NAN(dVar9) || NAN(*pdVar17) ||
                   (pdVar17 = (double *)(lVar15 + 0x10 + lVar13),
                   (double)CONCAT44(uVar19,uVar18) != *pdVar17)))))) ||
                (NAN((double)CONCAT44(uVar19,uVar18)) || NAN(*pdVar17))) ||
               (*(int *)(lVar15 + 0x18 + lVar13) == 0)) {
              *(double *)(lVar15 + lVar13) = dVar8;
              ((double *)(lVar15 + lVar13))[1] = dVar9;
              *(ulonglong *)(lVar15 + 0x10 + lVar13) = CONCAT44(uVar19,uVar18);
              piVar2 = (int *)(lVar15 + 0x18 + lVar13);
              *piVar2 = *piVar2 + 1;
              iVar16 = (int)plVar6[2];
              lVar15 = *plVar6;
            }
            *(int *)(plVar6 + 2) = iVar16 + 1;
            param_1[0xb] = *(longlong *)(lVar15 + 0x10 + lVar13);
            puVar3 = (undefined4 *)(lVar15 + lVar13);
            uVar18 = puVar3[1];
            uVar19 = puVar3[2];
            uVar10 = puVar3[3];
            *(undefined4 *)(param_1 + 9) = *puVar3;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar18;
            *(undefined4 *)(param_1 + 10) = uVar19;
            *(undefined4 *)((longlong)param_1 + 0x54) = uVar10;
            iVar16 = (int)plVar6[1];
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x120;
        } while (lVar14 < iVar16);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e50070 FUN_148e50070 body=27 status=ok
// SIG undefined FUN_148e50070(void)

void FUN_148e50070(longlong param_1)

{
  FUN_144246c66();
  FUN_148e4fe8a(param_1 + -0x30);
  return;
}



// FUNCTION 148e5008c FUN_148e5008c body=114 status=ok
// SIG undefined FUN_148e5008c(void)

void FUN_148e5008c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 148e500fe FUN_148e500fe body=38 status=ok
// SIG undefined FUN_148e500fe(void)

undefined8 FUN_148e500fe(undefined8 param_1,int param_2)

{
  FUN_140b6c2c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e50124 FUN_148e50124 body=48 status=ok
// SIG undefined FUN_148e50124(void)

void FUN_148e50124(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148e50154 FUN_148e50154 body=47 status=ok
// SIG undefined FUN_148e50154(void)

longlong FUN_148e50154(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e50184 FUN_148e50184 body=38 status=ok
// SIG undefined FUN_148e50184(void)

undefined8 FUN_148e50184(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SubmitNewShiftName",1);
  return param_2;
}



// FUNCTION 148e501aa FUN_148e501aa body=29 status=ok
// SIG undefined FUN_148e501aa(void)

undefined8 FUN_148e501aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e501c8 FUN_148e501c8 body=38 status=ok
// SIG undefined FUN_148e501c8(void)

undefined8 FUN_148e501c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SkipShiftNameEntry",1);
  return param_2;
}



// FUNCTION 148e501ee FUN_148e501ee body=29 status=ok
// SIG undefined FUN_148e501ee(void)

undefined8 FUN_148e501ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e5020c FUN_148e5020c body=38 status=ok
// SIG undefined FUN_148e5020c(void)

undefined8 FUN_148e5020c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RefreshOptions",1);
  return param_2;
}



// FUNCTION 148e50232 FUN_148e50232 body=47 status=ok
// SIG undefined FUN_148e50232(void)

longlong FUN_148e50232(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e50262 FUN_148e50262 body=38 status=ok
// SIG undefined FUN_148e50262(void)

undefined8 FUN_148e50262(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Option_GameSettings_ColorUpdate",1);
  return param_2;
}



// FUNCTION 148e50288 FUN_148e50288 body=29 status=ok
// SIG undefined FUN_148e50288(void)

undefined8 FUN_148e50288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


