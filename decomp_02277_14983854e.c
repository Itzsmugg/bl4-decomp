// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14983854e FUN_14983854e body=26 status=ok
// SIG undefined FUN_14983854e(void)

bool FUN_14983854e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149838568 FUN_149838568 body=93 status=ok
// SIG undefined FUN_149838568(void)

void FUN_149838568(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ba70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498385c6 FUN_1498385c6 body=93 status=ok
// SIG undefined FUN_1498385c6(void)

void FUN_1498385c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ba70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838624 FUN_149838624 body=126 status=ok
// SIG undefined FUN_149838624(void)

void FUN_149838624(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96ba70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf4d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149838693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498386a2 FUN_1498386a2 body=40 status=ok
// SIG undefined FUN_1498386a2(void)

void FUN_1498386a2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001498386c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1498386ca FUN_1498386ca body=140 status=ok
// SIG undefined FUN_1498386ca(void)

bool FUN_1498386ca(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149838758 FUN_149838758 body=36 status=ok
// SIG undefined FUN_149838758(void)

undefined8 FUN_149838758(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149838796 FUN_149838796 body=93 status=ok
// SIG undefined FUN_149838796(void)

void FUN_149838796(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498387f4 FUN_1498387f4 body=93 status=ok
// SIG undefined FUN_1498387f4(void)

void FUN_1498387f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838852 FUN_149838852 body=126 status=ok
// SIG undefined FUN_149838852(void)

void FUN_149838852(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf540;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498388c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498388d0 FUN_1498388d0 body=40 status=ok
// SIG undefined FUN_1498388d0(void)

void FUN_1498388d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001498388f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1498388f8 FUN_1498388f8 body=140 status=ok
// SIG undefined FUN_1498388f8(void)

bool FUN_1498388f8(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149838986 FUN_149838986 body=36 status=ok
// SIG undefined FUN_149838986(void)

undefined8 FUN_149838986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498389c4 FUN_1498389c4 body=29 status=ok
// SIG undefined FUN_1498389c4(void)

bool FUN_1498389c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1498389e2 FUN_1498389e2 body=93 status=ok
// SIG undefined FUN_1498389e2(void)

void FUN_1498389e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a0b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf5b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838a40 FUN_149838a40 body=93 status=ok
// SIG undefined FUN_149838a40(void)

void FUN_149838a40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a0b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf5b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838a9e FUN_149838a9e body=126 status=ok
// SIG undefined FUN_149838a9e(void)

void FUN_149838a9e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a0b10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf5b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149838b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149838b1c FUN_149838b1c body=48 status=ok
// SIG undefined FUN_149838b1c(void)

void FUN_149838b1c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149838b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149838b4c FUN_149838b4c body=36 status=ok
// SIG undefined FUN_149838b4c(void)

undefined8 FUN_149838b4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149838b8a FUN_149838b8a body=29 status=ok
// SIG undefined FUN_149838b8a(void)

bool FUN_149838b8a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149838ba8 FUN_149838ba8 body=93 status=ok
// SIG undefined FUN_149838ba8(void)

void FUN_149838ba8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838c06 FUN_149838c06 body=93 status=ok
// SIG undefined FUN_149838c06(void)

void FUN_149838c06(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838c64 FUN_149838c64 body=126 status=ok
// SIG undefined FUN_149838c64(void)

void FUN_149838c64(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf620;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149838cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149838ce2 FUN_149838ce2 body=38 status=ok
// SIG undefined FUN_149838ce2(void)

void FUN_149838ce2(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149838d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149838d08 FUN_149838d08 body=36 status=ok
// SIG undefined FUN_149838d08(void)

undefined8 FUN_149838d08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149838d46 FUN_149838d46 body=29 status=ok
// SIG undefined FUN_149838d46(void)

bool FUN_149838d46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149838d64 FUN_149838d64 body=93 status=ok
// SIG undefined FUN_149838d64(void)

void FUN_149838d64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838dc2 FUN_149838dc2 body=93 status=ok
// SIG undefined FUN_149838dc2(void)

void FUN_149838dc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838e20 FUN_149838e20 body=126 status=ok
// SIG undefined FUN_149838e20(void)

void FUN_149838e20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf690;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149838e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149838e9e FUN_149838e9e body=46 status=ok
// SIG undefined FUN_149838e9e(void)

void FUN_149838e9e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149838ec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149838ecc FUN_149838ecc body=36 status=ok
// SIG undefined FUN_149838ecc(void)

undefined8 FUN_149838ecc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149838f0a FUN_149838f0a body=29 status=ok
// SIG undefined FUN_149838f0a(void)

bool FUN_149838f0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149838f28 FUN_149838f28 body=93 status=ok
// SIG undefined FUN_149838f28(void)

void FUN_149838f28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838f86 FUN_149838f86 body=93 status=ok
// SIG undefined FUN_149838f86(void)

void FUN_149838f86(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149838fe4 FUN_149838fe4 body=126 status=ok
// SIG undefined FUN_149838fe4(void)

void FUN_149838fe4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf700;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149839053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149839062 FUN_149839062 body=56 status=ok
// SIG undefined FUN_149839062(void)

void FUN_149839062(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149839097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14983909a FUN_14983909a body=36 status=ok
// SIG undefined FUN_14983909a(void)

undefined8 FUN_14983909a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498390d8 FUN_1498390d8 body=29 status=ok
// SIG undefined FUN_1498390d8(void)

bool FUN_1498390d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1498390f6 FUN_1498390f6 body=93 status=ok
// SIG undefined FUN_1498390f6(void)

void FUN_1498390f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149839154 FUN_149839154 body=126 status=ok
// SIG undefined FUN_149839154(void)

void FUN_149839154(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498391c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498391d2 FUN_1498391d2 body=35 status=ok
// SIG undefined FUN_1498391d2(void)

void FUN_1498391d2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001498391f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1498391f6 FUN_1498391f6 body=36 status=ok
// SIG undefined FUN_1498391f6(void)

undefined8 FUN_1498391f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149839236 FUN_149839236 body=93 status=ok
// SIG undefined FUN_149839236(void)

void FUN_149839236(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149839294 FUN_149839294 body=126 status=ok
// SIG undefined FUN_149839294(void)

void FUN_149839294(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149839303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149839312 FUN_149839312 body=21 status=ok
// SIG undefined FUN_149839312(void)

undefined8 FUN_149839312(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14983932a FUN_14983932a body=36 status=ok
// SIG undefined FUN_14983932a(void)

undefined8 FUN_14983932a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14983936a FUN_14983936a body=93 status=ok
// SIG undefined FUN_14983936a(void)

void FUN_14983936a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498393c8 FUN_1498393c8 body=123 status=ok
// SIG undefined FUN_1498393c8(void)

void FUN_1498393c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf9d0;
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



// FUNCTION 149839444 FUN_149839444 body=21 status=ok
// SIG undefined FUN_149839444(void)

undefined8 FUN_149839444(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14983945a FUN_14983945a body=165 status=ok
// SIG undefined FUN_14983945a(void)

void FUN_14983945a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = *(undefined1 *)(local_20 + 0xf8);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149839500 FUN_149839500 body=522 status=ok
// SIG undefined FUN_149839500(void)

void FUN_149839500(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0;
  lStack_30 = 0;
  FUN_1446dcc8c();
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
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_4a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  uVar3 = local_48;
  uVar2 = local_4a;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_40;
  uStack_64 = local_40._4_4_;
  uStack_60 = (undefined4)uStack_38;
  uStack_5c = uStack_38._4_4_;
  local_58 = lStack_30;
  if ((lStack_30 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  puVar4 = &local_49;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  local_78 = uVar2;
  FUN_14983970c(local_28,&local_68,uVar3,puVar4);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983970c FUN_14983970c body=224 status=ok
// SIG undefined FUN_14983970c(void)

void FUN_14983970c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar4 != 0) {
    uVar5 = FUN_14119d0a4(lVar4);
    lVar4 = FUN_14983b7c2(uVar5,*(undefined8 *)(param_2 + 4),param_2[1]);
    if (lVar4 == 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar6 = &PTR_FUN_14beb20a0;
      puVar6[1] = param_3;
      *(undefined1 *)(puVar6 + 2) = param_5;
      puVar6[3] = param_4;
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(puVar6 + 4) = *param_2;
      *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
      *(undefined4 *)(puVar6 + 5) = uVar2;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
      lVar4 = *(longlong *)(param_2 + 4);
      puVar6[6] = lVar4;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar4);
        lVar4 = *(longlong *)(param_2 + 4);
      }
      *(undefined1 *)(puVar6 + 7) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0xffffffff;
      FUN_140b1330e(uVar5,lVar4,param_2[1],puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1498397f0 FUN_1498397f0 body=75 status=ok
// SIG undefined FUN_1498397f0(void)

void FUN_1498397f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14983983c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983983c FUN_14983983c body=574 status=ok
// SIG undefined FUN_14983983c(void)

void FUN_14983983c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_21();
  uVar3 = 0;
  if (param_2[0xd] != 0) {
    uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_48 = CONCAT44(local_48._4_4_,uVar3);
    (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
    uVar3 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(param_2);
      uVar3 = (uint)local_48;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 == 0) {
    if ((((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) && (*(longlong *)(param_1 + 0x70) != 0))
       && (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0)) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))();
      if (lVar5 != 0) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x28);
        uVar6 = (ulonglong)uVar3;
        local_48 = 0;
        uStack_40 = 0;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar6);
        }
        if (uVar6 == 0) {
          iVar4 = 0;
          iVar7 = 0;
        }
        else {
          FUN_144893a1c(&local_48);
          iVar4 = uStack_40._4_4_;
          iVar7 = (int)uStack_40;
        }
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar3 + iVar7);
        if ((uint)(iVar4 - iVar7) < uVar3) {
          FUN_1447403be(&local_48);
        }
        memset((void *)(iVar7 + local_48),0,uVar6);
        FUN_140077068(param_2,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))();
      if (lVar5 != 0) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x2c);
        uVar6 = (ulonglong)uVar3;
        local_48 = 0;
        uStack_40 = 0;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar6);
        }
        if (uVar6 == 0) {
          iVar4 = 0;
          iVar7 = 0;
        }
        else {
          FUN_144893a1c(&local_48);
          iVar4 = uStack_40._4_4_;
          iVar7 = (int)uStack_40;
        }
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar3 + iVar7);
        if ((uint)(iVar4 - iVar7) < uVar3) {
          FUN_1447403be(&local_48);
        }
        memset((void *)(iVar7 + local_48),0,uVar6);
        FUN_140077068(param_2,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    FUN_14688874a(param_1 + 0x48,0x400);
    local_50 = 0;
    local_58 = 1;
    FUN_140430222(param_1 + 0x48,param_2,param_1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149839a7c FUN_149839a7c body=93 status=ok
// SIG undefined FUN_149839a7c(void)

void FUN_149839a7c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149839ada FUN_149839ada body=193 status=ok
// SIG undefined FUN_149839ada(void)

void FUN_149839ada(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1446e0b6e();
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar3 = (undefined8 *)FUN_14001cc68(0x78);
    puVar3[1] = 0;
    puVar3[2] = puVar3 + 10;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 2;
    *puVar3 = &PTR_FUN_14beb2170;
    puVar3[5] = param_1 + 0x48;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[8] = *(undefined8 *)(lVar1 + 0x28);
    puVar2 = *(undefined8 **)(param_1 + 0xf0);
    *(undefined8 **)(param_1 + 0xf0) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      puVar3 = *(undefined8 **)(param_1 + 0xf0);
    }
    FUN_149839b9c(param_1 + 0x70,lVar1,puVar3,puVar3);
  }
  FUN_144668510(param_1,*(undefined1 *)(param_1 + 0x124),0);
  return;
}



// FUNCTION 149839b9c FUN_149839b9c body=325 status=ok
// SIG undefined FUN_149839b9c(void)

void FUN_149839b9c(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  void *_Dst;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((((*(int *)(param_2 + 8) == -0x53ee24ff) &&
       ((ushort)((short)*(undefined4 *)(param_2 + 0xc) - 7U) < 4)) &&
      (cVar1 = (**(code **)(*param_3 + 8))(param_3), cVar1 != '\0')) &&
     ((cVar1 = (**(code **)(*param_4 + 8))(param_4), cVar1 != '\0' && (*param_1 == 0)))) {
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 4);
    param_1[10] = (longlong)&PTR_PTR_14c767a40;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = (longlong)param_3;
    param_1[5] = (longlong)param_4;
    param_3[1] = (longlong)param_1;
    param_4[1] = (longlong)param_1;
    uVar3 = *(int *)(param_2 + 0x10) + 0x1fU >> 3;
    uVar6 = *(int *)(param_2 + 0x14) + 0x1fU >> 5;
    uVar7 = (ulonglong)(uVar6 << 2);
    uVar4 = (ulonglong)(uVar3 & 0xfffffffc);
    uVar2 = (ulonglong)
            (*(int *)(param_2 + 0x20) * 0x10 + *(int *)(param_2 + 0x1c) * 8 +
            (uVar3 + uVar6 * 4 & 0xfffffffc) * 2);
    _Dst = (void *)(**(code **)(PTR_PTR_14c767a40 + 8))(&PTR_PTR_14c767a40,uVar2,0x10);
    memset(_Dst,0,uVar2);
    param_1[6] = (longlong)_Dst;
    lVar5 = (longlong)_Dst + uVar4;
    param_1[8] = lVar5;
    lVar5 = lVar5 + uVar4;
    param_1[7] = lVar5;
    lVar5 = lVar5 + uVar7;
    param_1[9] = lVar5;
    param_1[1] = uVar7 + lVar5 + 7 & 0xfffffffffffffff8;
    uVar3 = *(uint *)(param_2 + 0x1c);
    if ((ulonglong)uVar3 != 0) {
      param_2 = (ulonglong)*(uint *)(param_2 + 0x24) + param_2;
      uVar2 = 0;
      do {
        *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0xc + uVar2 * 8) + param_1[1]) =
             *(undefined4 *)(param_2 + 8 + uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
  }
  return;
}



// FUNCTION 149839ce2 FUN_149839ce2 body=191 status=ok
// SIG undefined FUN_149839ce2(void)

void FUN_149839ce2(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (param_2 != -1) {
    uVar5 = (ulonglong)*(int *)(param_1 + 0x108);
    if (0 < (longlong)uVar5) {
      iVar6 = -*(int *)(param_1 + 0x108);
      lVar4 = uVar5 << 4;
      do {
        lVar4 = lVar4 + -0x10;
        lVar1 = *(longlong *)(param_1 + 0x100);
        if (*(int *)(lVar1 + 8 + lVar4) == param_2) {
          if (*(char *)(lVar1 + 0xd + lVar4) == '\x01') {
            *(undefined8 *)(lVar1 + lVar4) = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x108);
            if (uVar5 != uVar3) {
              memmove((undefined8 *)(lVar1 + lVar4),(void *)(lVar1 + lVar4 + 0x10),
                      (longlong)(int)(iVar6 + uVar3) << 4);
              uVar3 = *(uint *)(param_1 + 0x108);
            }
            *(uint *)(param_1 + 0x108) = uVar3 - 1;
            FUN_14983b6e4((longlong *)(param_1 + 0x100));
          }
        }
        iVar6 = iVar6 + 1;
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar2);
    }
  }
  return;
}



// FUNCTION 149839da2 FUN_149839da2 body=694 status=ok
// SIG undefined FUN_149839da2(void)

undefined8 FUN_149839da2(longlong *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  
  lVar16 = *param_1;
  uVar12 = 3;
  if (lVar16 != 0) {
    cVar9 = FUN_14983b780(param_1);
    uVar12 = 2;
    if (cVar9 == '\0') {
      if (param_2 == 1) {
        lVar20 = lVar16 + 0x40;
      }
      else {
        lVar20 = lVar16 + (ulonglong)*(uint *)(lVar16 + 0x10) * 8 + 0x40;
      }
      uVar22 = (ulonglong)(param_2 - 1);
      uVar2 = *(uint *)(lVar16 + 0x10 + uVar22 * 4);
      uVar21 = uVar2 + 0x1f;
      uVar17 = uVar2;
      if (param_3 <= uVar2) {
        uVar17 = param_3;
      }
      uVar12 = 0;
      if (0x1f < uVar21) {
        iVar3 = *(int *)(lVar16 + 0x18);
        puVar7 = (uint *)param_1[uVar22 + 6];
        lVar16 = 0;
        puVar26 = puVar7;
        do {
          uVar10 = *puVar26;
          if (uVar10 != 0) {
            uVar24 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> uVar24 == 0; uVar24 = uVar24 - 1) {
              }
            }
            uVar24 = uVar24 ^ 0x1f;
            iVar14 = (int)lVar16;
            if (uVar24 + 1 == iVar14) {
              return 0;
            }
            uVar19 = (ulonglong)uVar24 - lVar16;
            uVar27 = uVar19 & 0xffffffff;
            uVar18 = (uVar17 + uVar27) - 1;
            uVar17 = (uint)uVar18;
            if (uVar2 <= uVar18) {
              uVar17 = uVar2 - 1;
            }
            uVar24 = uVar17 - uVar24;
            if (uVar24 + iVar14 == -1) {
              return 0;
            }
            plVar8 = (longlong *)param_1[uVar22 + 4];
            uVar2 = *(uint *)((longlong)plVar8 + 0x1c);
            if (*(int *)(plVar8[2] + 4 + (ulonglong)uVar2 * 0x14) != 0) {
              return 5;
            }
            puVar1 = (undefined4 *)(plVar8[2] + (ulonglong)uVar2 * 0x14);
            *(uint *)((longlong)plVar8 + 0x1c) = (uVar2 + 1) % *(uint *)(plVar8 + 4);
            iVar4 = (int)plVar8[3];
            *(int *)(plVar8 + 3) = iVar4 + 1;
            *puVar1 = 1;
            puVar1[1] = param_2;
            uVar10 = (uint)uVar19;
            puVar1[2] = uVar10;
            puVar1[3] = (int)((ulonglong)uVar24 + lVar16 + 1);
            puVar1[4] = iVar4;
            if (CONCAT44(iVar4,uVar2) == -1) {
              return 5;
            }
            uVar5 = *(undefined4 *)(lVar20 + 4 + uVar27 * 8);
            iVar6 = *(int *)(lVar20 + (ulonglong)uVar17 * 8);
            uVar17 = uVar17 + 1;
            if (uVar10 < uVar17) {
              lVar16 = param_1[uVar22 + 8];
              uVar19 = uVar19 & 0xffffffff;
              do {
                puVar26 = (uint *)(lVar16 + (uVar19 >> 5) * 4);
                *puVar26 = *puVar26 | 1 << (~(byte)uVar19 & 0x1f);
                uVar25 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar25;
              } while (uVar17 != uVar25);
            }
            lVar16 = param_1[uVar22 + 2];
            uVar18 = 0;
            iVar15 = 0;
            do {
              iVar13 = iVar15;
              iVar11 = POPCOUNT(puVar7[uVar18]);
              uVar18 = uVar18 + 1;
              iVar15 = iVar11 + iVar13;
            } while (uVar21 >> 5 != uVar18);
            iVar15 = iVar14 + ((uVar24 - iVar11) - iVar13);
            if (iVar15 == -1) {
              param_1[uVar22 + 2] = 0;
            }
            if (uVar10 < uVar17) {
              do {
                uVar19 = (ulonglong)*(uint *)(lVar20 + 4 + uVar27 * 8);
                uVar18 = (ulonglong)*(uint *)(uVar19 + 8 + lVar16);
                if (uVar18 != 0) {
                  lVar23 = 0;
                  do {
                    *(undefined8 *)
                     ((ulonglong)*(uint *)(uVar19 + lVar16 + 0x1c + lVar23) + param_1[1] +
                     uVar22 * 8) = 0;
                    lVar23 = lVar23 + 0x14;
                  } while (uVar18 * 0x14 != lVar23);
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 != uVar17);
            }
            (**(code **)(*plVar8 + 0x20))
                      (plVar8,uVar5,(uVar24 + iVar14) * iVar3 + iVar6,
                       CONCAT71((int7)((ulonglong)lVar20 >> 8),iVar15 == -1),param_2,
                       CONCAT44(iVar4,uVar2));
            return 1;
          }
          lVar16 = lVar16 + -0x20;
          puVar26 = puVar26 + 1;
          uVar12 = 0;
        } while ((ulonglong)(uVar21 & 0xffffffe0) + lVar16 != 0);
      }
    }
  }
  return uVar12;
}



// FUNCTION 14983a058 FUN_14983a058 body=544 status=ok
// SIG undefined FUN_14983a058(void)

undefined8 FUN_14983a058(longlong *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char cVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  
  lVar18 = *param_1;
  uVar10 = 3;
  if (lVar18 != 0) {
    cVar9 = FUN_14983b780(param_1);
    uVar10 = 2;
    if (cVar9 == '\0') {
      if (param_2 == 1) {
        lVar12 = lVar18 + 0x40;
      }
      else {
        lVar12 = lVar18 + (ulonglong)*(uint *)(lVar18 + 0x10) * 8 + 0x40;
      }
      uVar14 = (ulonglong)(param_2 - 1);
      uVar3 = *(uint *)(lVar18 + 0x10 + uVar14 * 4);
      uVar19 = uVar3;
      if (param_3 <= uVar3) {
        uVar19 = param_3;
      }
      uVar10 = 0;
      if (0x1f < uVar3 + 0x1f) {
        iVar4 = *(int *)(lVar18 + 0x18);
        puVar13 = (uint *)param_1[uVar14 + 6];
        lVar18 = 0;
        do {
          uVar15 = *puVar13;
          if (uVar15 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
              }
            }
          }
          if (iVar11 != 0) {
            iVar17 = (int)lVar18;
            if (0x21 - iVar11 == iVar17) {
              return 0;
            }
            uVar16 = ((ulonglong)(uint)-iVar11 - lVar18) + 0x20;
            uVar15 = (uint)uVar16;
            uVar16 = uVar16 & 0xffffffff;
            uVar20 = (uVar19 + uVar16) - 1;
            uVar19 = (uint)uVar20;
            if (uVar3 <= uVar20) {
              uVar19 = uVar3 - 1;
            }
            iVar1 = uVar19 + iVar11;
            if (0x1f - iVar1 == iVar17) {
              return 0;
            }
            plVar8 = (longlong *)param_1[uVar14 + 4];
            uVar3 = *(uint *)((longlong)plVar8 + 0x1c);
            if (*(int *)(plVar8[2] + 4 + (ulonglong)uVar3 * 0x14) != 0) {
              return 5;
            }
            puVar2 = (undefined4 *)(plVar8[2] + (ulonglong)uVar3 * 0x14);
            *(uint *)((longlong)plVar8 + 0x1c) = (uVar3 + 1) % *(uint *)(plVar8 + 4);
            iVar5 = (int)plVar8[3];
            *(int *)(plVar8 + 3) = iVar5 + 1;
            *puVar2 = 0;
            puVar2[1] = param_2;
            puVar2[2] = uVar15;
            puVar2[3] = iVar1 + iVar17 + -0x1f;
            puVar2[4] = iVar5;
            if (CONCAT44(iVar5,uVar3) == -1) {
              return 5;
            }
            iVar6 = *(int *)(lVar12 + (ulonglong)uVar19 * 8);
            uVar7 = *(undefined4 *)(lVar12 + 4 + uVar16 * 8);
            lVar18 = param_1[uVar14 + 2];
            if (uVar15 < uVar19 + 1) {
              lVar12 = param_1[uVar14 + 8];
              iVar11 = -(iVar11 + iVar17);
              do {
                puVar13 = (uint *)(lVar12 + (ulonglong)(iVar11 + 0x20U >> 5) * 4);
                *puVar13 = *puVar13 | 1 << (~(byte)(iVar11 + 0x20U) & 0x1f);
                iVar11 = iVar11 + 1;
              } while (uVar19 - 0x1f != iVar11);
            }
            (**(code **)(*plVar8 + 0x18))
                      (plVar8,uVar7,(iVar1 + iVar17 + -0x20) * iVar4 + iVar6,
                       CONCAT71((int7)((ulonglong)lVar18 >> 8),lVar18 == 0),param_2,
                       CONCAT44(iVar5,uVar3));
            return 1;
          }
          lVar18 = lVar18 + -0x20;
          puVar13 = puVar13 + 1;
          uVar10 = 0;
        } while ((ulonglong)(uVar3 + 0x1f & 0xffffffe0) + lVar18 != 0);
      }
    }
  }
  return uVar10;
}



// FUNCTION 14983a27c FUN_14983a27c body=753 status=ok
// SIG undefined FUN_14983a27c(void)

void FUN_14983a27c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  size_t _Size;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  void *_Dst;
  longlong lVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined1 auStack_128 [32];
  code *local_108;
  undefined1 *puStack_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_c9;
  longlong local_c8 [17];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  if (((*(int *)(lVar8 + 8) == -0x53ee53ef) && (*(char *)(lVar8 + 0xe) == '\0')) &&
     (*(short *)(lVar8 + 0xc) == 10)) {
    FUN_14983b87d(local_c8);
    if (local_c8[0] != 0) {
      FUN_14983b919(local_c8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar8 = local_c8[0];
      goto LAB_14983a301;
    }
  }
  lVar8 = 0;
LAB_14983a301:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)*(int *)(lVar8 + 0x10);
  _Size = SUB168(auVar3 * ZEXT816(6),0);
  sVar9 = 0xffffffffffffffff;
  if (SUB168(auVar3 * ZEXT816(6),8) == 0) {
    sVar9 = _Size;
  }
  puStack_100 = &local_c9;
  local_108 = FUN_140036a08;
  puVar7 = &DAT_14c7585d0;
  lVar5 = FUN_144a773aa(&local_108,&DAT_14c7585d0);
  puVar1 = (ulonglong *)(lVar5 + 0x10);
  _Dst = (void *)(*(longlong *)(lVar5 + 0x10) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (longlong)_Dst + sVar9;
  if (*(ulonglong *)(lVar5 + 0x18) < uVar10) {
    puVar7 = (undefined4 *)(ulonglong)((int)sVar9 + 0x10);
    FUN_140023dd8(puVar1,puVar7);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar10 = sVar9 + (longlong)_Dst;
  }
  *puVar1 = uVar10;
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)puVar7 >> 8),0xff),_Size);
  lVar5 = (longlong)*(int *)((undefined8 *)*param_3 + 1);
  if (lVar5 != 0) {
    puVar6 = *(undefined2 **)*param_3;
    puVar2 = puVar6 + lVar5 * 4;
    do {
      *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6) = *puVar6;
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  lVar5 = (longlong)*(int *)((undefined8 *)param_3[1] + 1);
  if (lVar5 != 0) {
    puVar6 = *(undefined2 **)param_3[1];
    puVar2 = puVar6 + lVar5 * 4;
    do {
      *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6 + 2) = *puVar6;
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  uVar4 = *(uint *)(lVar8 + 0x1c);
  if ((uVar4 & 1) != 0) {
    lVar5 = (longlong)*(int *)((undefined8 *)param_3[2] + 1);
    if (lVar5 != 0) {
      puVar6 = *(undefined2 **)param_3[2];
      puVar2 = puVar6 + lVar5 * 4;
      do {
        *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6 + 4) = *puVar6;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar2);
      uVar4 = *(uint *)(lVar8 + 0x1c);
    }
  }
  local_f8 = _Dst;
  if ((uVar4 & 2) == 0) {
    local_108 = (code *)0x0;
    puStack_100 = (undefined1 *)0x0;
    local_f0 = *(undefined8 *)param_3[3];
    local_e8 = *(undefined8 *)param_3[4];
    local_e0 = *(undefined8 *)param_3[5];
    if (lVar8 != 0) {
      FUN_14983d66e(local_c8,&local_108);
    }
  }
  else {
    local_108 = *(code **)(param_2 + 0x20);
    puStack_100 = *(undefined1 **)(param_2 + 0x30);
    local_f0 = *(undefined8 *)param_3[3];
    local_e8 = *(undefined8 *)param_3[4];
    local_e0 = *(undefined8 *)param_3[5];
    if (lVar8 != 0) {
      FUN_14983be6e(local_c8,&local_108);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983a5da FUN_14983a5da body=691 status=ok
// SIG undefined FUN_14983a5da(void)

void FUN_14983a5da(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  size_t _Size;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  size_t sVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *_Dst;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined1 *puStack_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined1 local_c9;
  longlong local_c8 [17];
  
  local_c8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  if (((*(int *)(lVar10 + 8) == -0x53ee53ef) && (*(char *)(lVar10 + 0xe) == '\0')) &&
     (*(short *)(lVar10 + 0xc) == 10)) {
    FUN_14983ed5f(local_c8);
    if (local_c8[0] != 0) {
      FUN_14983ee1a(local_c8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar10 = local_c8[0];
      goto LAB_14983a667;
    }
  }
  lVar10 = 0;
LAB_14983a667:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)*(int *)(lVar10 + 0x10);
  _Size = SUB168(auVar3 * ZEXT816(6),0);
  sVar8 = 0xffffffffffffffff;
  if (SUB168(auVar3 * ZEXT816(6),8) == 0) {
    sVar8 = _Size;
  }
  puStack_f0 = &local_c9;
  local_f8 = FUN_140036a08;
  puVar7 = &DAT_14c7585d0;
  lVar5 = FUN_144a773aa(&local_f8,&DAT_14c7585d0);
  puVar1 = (ulonglong *)(lVar5 + 0x10);
  _Dst = (void *)(*(longlong *)(lVar5 + 0x10) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (longlong)_Dst + sVar8;
  if (*(ulonglong *)(lVar5 + 0x18) < uVar9) {
    puVar7 = (undefined4 *)(ulonglong)((int)sVar8 + 0x10);
    FUN_140023dd8(puVar1,puVar7);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar9 = sVar8 + (longlong)_Dst;
  }
  *puVar1 = uVar9;
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)puVar7 >> 8),0xff),_Size);
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar6 = (undefined2 *)*param_3;
    puVar2 = puVar6 + (longlong)*(int *)(param_3 + 1) * 4;
    do {
      *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6) = *puVar6;
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar6 = (undefined2 *)*param_4;
    puVar2 = puVar6 + (longlong)*(int *)(param_4 + 1) * 4;
    do {
      *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6 + 2) = *puVar6;
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  uVar4 = *(uint *)(lVar10 + 0x1c);
  if ((uVar4 & 1) != 0) {
    if ((longlong)*(int *)(param_5 + 1) != 0) {
      puVar6 = (undefined2 *)*param_5;
      puVar2 = puVar6 + (longlong)*(int *)(param_5 + 1) * 4;
      do {
        *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6 + 4) = *puVar6;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar2);
      uVar4 = *(uint *)(lVar10 + 0x1c);
    }
  }
  local_e8 = _Dst;
  if ((uVar4 & 2) == 0) {
    local_f8 = (code *)0x0;
    puStack_f0 = (undefined1 *)0x0;
    local_e0 = *param_6;
    if (lVar10 != 0) {
      FUN_149841ed5(local_c8,&local_f8);
    }
  }
  else {
    local_f8 = *(code **)(param_2 + 0x20);
    puStack_f0 = *(undefined1 **)(param_2 + 0x30);
    local_e0 = *param_6;
    if (lVar10 != 0) {
      FUN_14983f1a4(local_c8,&local_f8);
    }
  }
  if ((local_c8[0x10] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983a88e FUN_14983a88e body=376 status=ok
// SIG undefined FUN_14983a88e(void)

void FUN_14983a88e(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8 [17];
  
  local_a8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  if (((*(int *)(lVar1 + 8) == -0x53ee53ef) && (*(char *)(lVar1 + 0xe) == '\0')) &&
     (*(short *)(lVar1 + 0xc) == 10)) {
    FUN_14983ed5f(local_a8);
    if (local_a8[0] != 0) {
      FUN_14983ee1a(local_a8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar1 = local_a8[0];
      goto LAB_14983a910;
    }
  }
  lVar1 = 0;
LAB_14983a910:
  local_b8 = param_4;
  if ((*(byte *)(lVar1 + 0x1c) & 2) == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    if (lVar1 != 0) {
      FUN_149844937(local_a8,param_3,&local_c8);
    }
  }
  else {
    local_c8 = *(undefined8 *)(param_2 + 0x20);
    uStack_c0 = *(undefined8 *)(param_2 + 0x30);
    if (lVar1 != 0) {
      FUN_149843306(local_a8,param_3,&local_c8);
    }
  }
  if ((local_a8[0x10] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983aa0c FUN_14983aa0c body=111 status=ok
// SIG undefined FUN_14983aa0c(void)

void FUN_14983aa0c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1446687f6();
  puVar2 = (undefined4 *)(param_1 + 0x38);
  puVar1 = *(undefined4 **)param_3[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014983aa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x170))(param_3,puVar2,4);
    return;
  }
  thunk_FUN_14572512c(param_3,puVar2);
  return;
}



// FUNCTION 14983aab4 FUN_14983aab4 body=83 status=ok
// SIG undefined FUN_14983aab4(void)

undefined8 * FUN_14983aab4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14beb2300;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[6] = param_1;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14983ab0c FUN_14983ab0c body=93 status=ok
// SIG undefined FUN_14983ab0c(void)

undefined8 FUN_14983ab0c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_2 + 8) == -0x53ee53ef) && (*(char *)(param_2 + 0xe) == '\0')) {
    uVar2 = 0;
    if ((*(short *)(param_2 + 0xc) == 10) && (uVar2 = 0, *param_3 != 0)) {
      cVar1 = FUN_1498451e4(param_3,param_2);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        FUN_149845243(param_1,param_2,param_3);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// FUNCTION 14983ab6e FUN_14983ab6e body=691 status=ok
// SIG undefined FUN_14983ab6e(void)

void FUN_14983ab6e(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  size_t _Size;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  size_t sVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *_Dst;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined1 *puStack_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined1 local_c9;
  longlong local_c8 [17];
  
  local_c8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  if (((*(int *)(lVar10 + 8) == -0x53ee53ef) && (*(char *)(lVar10 + 0xe) == '\0')) &&
     (*(short *)(lVar10 + 0xc) == 10)) {
    FUN_14984b152(local_c8);
    if (local_c8[0] != 0) {
      FUN_14984b1ee(local_c8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar10 = local_c8[0];
      goto LAB_14983abfb;
    }
  }
  lVar10 = 0;
LAB_14983abfb:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)*(int *)(lVar10 + 0x10);
  _Size = SUB168(auVar3 * ZEXT816(6),0);
  sVar8 = 0xffffffffffffffff;
  if (SUB168(auVar3 * ZEXT816(6),8) == 0) {
    sVar8 = _Size;
  }
  puStack_f0 = &local_c9;
  local_f8 = FUN_140036a08;
  puVar7 = &DAT_14c7585d0;
  lVar5 = FUN_144a773aa(&local_f8,&DAT_14c7585d0);
  puVar1 = (ulonglong *)(lVar5 + 0x10);
  _Dst = (void *)(*(longlong *)(lVar5 + 0x10) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (longlong)_Dst + sVar8;
  if (*(ulonglong *)(lVar5 + 0x18) < uVar9) {
    puVar7 = (undefined4 *)(ulonglong)((int)sVar8 + 0x10);
    FUN_140023dd8(puVar1,puVar7);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar9 = sVar8 + (longlong)_Dst;
  }
  *puVar1 = uVar9;
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)puVar7 >> 8),0xff),_Size);
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar6 = (undefined2 *)*param_3;
    puVar2 = puVar6 + (longlong)*(int *)(param_3 + 1) * 4;
    do {
      *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6) = *puVar6;
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar6 = (undefined2 *)*param_4;
    puVar2 = puVar6 + (longlong)*(int *)(param_4 + 1) * 4;
    do {
      *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6 + 2) = *puVar6;
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  uVar4 = *(uint *)(lVar10 + 0x1c);
  if ((uVar4 & 1) != 0) {
    if ((longlong)*(int *)(param_5 + 1) != 0) {
      puVar6 = (undefined2 *)*param_5;
      puVar2 = puVar6 + (longlong)*(int *)(param_5 + 1) * 4;
      do {
        *(undefined2 *)((longlong)_Dst + (longlong)*(int *)(puVar6 + 2) * 6 + 4) = *puVar6;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar2);
      uVar4 = *(uint *)(lVar10 + 0x1c);
    }
  }
  local_e8 = _Dst;
  if ((uVar4 & 2) == 0) {
    local_f8 = (code *)0x0;
    puStack_f0 = (undefined1 *)0x0;
    local_e0 = *param_6;
    if (lVar10 != 0) {
      FUN_14984d50a(local_c8,&local_f8);
    }
  }
  else {
    local_f8 = *(code **)(param_2 + 0x20);
    puStack_f0 = *(undefined1 **)(param_2 + 0x30);
    local_e0 = *param_6;
    if (lVar10 != 0) {
      FUN_14984b578(local_c8,&local_f8);
    }
  }
  if ((local_c8[0x10] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983ae22 FUN_14983ae22 body=376 status=ok
// SIG undefined FUN_14983ae22(void)

void FUN_14983ae22(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8 [17];
  
  local_a8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  if (((*(int *)(lVar1 + 8) == -0x53ee53ef) && (*(char *)(lVar1 + 0xe) == '\0')) &&
     (*(short *)(lVar1 + 0xc) == 10)) {
    FUN_14984b152(local_a8);
    if (local_a8[0] != 0) {
      FUN_14984b1ee(local_a8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar1 = local_a8[0];
      goto LAB_14983aea4;
    }
  }
  lVar1 = 0;
LAB_14983aea4:
  local_b8 = param_4;
  if ((*(byte *)(lVar1 + 0x1c) & 2) == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    if (lVar1 != 0) {
      FUN_14984f73c(local_a8,param_3,&local_c8);
    }
  }
  else {
    local_c8 = *(undefined8 *)(param_2 + 0x20);
    uStack_c0 = *(undefined8 *)(param_2 + 0x30);
    if (lVar1 != 0) {
      FUN_14984e780(local_a8,param_3,&local_c8);
    }
  }
  if ((local_a8[0x10] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983afa0 FUN_14983afa0 body=312 status=ok
// SIG undefined FUN_14983afa0(void)

void FUN_14983afa0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((ulonglong)uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x50);
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    if (((*(int *)(lVar3 + 8) == -0x53ee53ef) && (*(char *)(lVar3 + 0xe) == '\0')) &&
       (*(short *)(lVar3 + 0xc) == 10)) {
      local_58 = 0xbf80000000000000;
      iVar2 = *(int *)(lVar3 + 0x14);
      bVar5 = (byte)((uint)*(undefined4 *)(lVar3 + 0x1c) >> 0x1e);
      bVar7 = iVar2 != 0 & bVar5;
      fVar9 = 0.0;
      if (1 < iVar2 + (uint)bVar7) {
        fVar9 = (float)((iVar2 + (uint)bVar7) - 1) / *(float *)(lVar3 + 0x18);
      }
      uStack_60 = CONCAT44(fVar9,*(undefined4 *)(lVar3 + 4));
      local_48 = (ulonglong)bVar5 & 0xffffffffffffff01;
      local_68 = lVar3;
      if (lVar3 != 0) {
        FUN_1498500e7(&local_68,param_4);
      }
    }
    uVar8 = 0;
    if (0 < (int)uVar1) {
      plVar4 = *(longlong **)(param_2 + 0x20);
      uVar6 = 0;
      do {
        if (*plVar4 == param_3) {
          local_6c = 0;
          uVar8 = 0;
          if (local_68 != 0) {
            FUN_14985017a(0,uVar6,&local_6c);
            uVar8 = local_6c;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        plVar4 = (longlong *)((longlong)plVar4 + 0xc);
      } while (uVar1 != uVar6);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar8);
  }
  return;
}



// FUNCTION 14983b0da FUN_14983b0da body=29 status=ok
// SIG undefined FUN_14983b0da(void)

undefined8 FUN_14983b0da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14983b0f8 FUN_14983b0f8 body=17 status=ok
// SIG undefined FUN_14983b0f8(void)

void FUN_14983b0f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014983b106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x28))();
  return;
}



// FUNCTION 14983b11c FUN_14983b11c body=29 status=ok
// SIG undefined FUN_14983b11c(void)

undefined8 FUN_14983b11c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14983b13a FUN_14983b13a body=275 status=ok
// SIG undefined FUN_14983b13a(void)

void FUN_14983b13a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) == 0) {
    **(undefined1 **)(param_1 + 0x18) = 2;
    puVar5 = &local_38;
LAB_14983b1ae:
    *puVar5 = 0;
    FUN_14485c47a(puVar5,*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *puVar5;
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      if (**(char **)(param_1 + 0x18) == '\0') goto LAB_14983b1fc;
LAB_14983b1a9:
      puVar5 = &local_40;
      goto LAB_14983b1ae;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    **(undefined1 **)(param_1 + 0x18) = 0;
    uVar2 = FUN_144668510(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    if (**(char **)(param_1 + 0x18) != '\0') goto LAB_14983b1a9;
    local_48 = 0;
    FUN_14485c47a(&local_48,*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = local_48;
  }
  iVar1 = *(int *)(param_2 + 0x58);
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar3 = param_2;
  }
  lVar4 = (longlong)iVar1;
  *(undefined8 *)(lVar3 + lVar4 * 0x14) = uVar7;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0x14) = uVar2;
  *(undefined8 *)(lVar3 + 0xc + lVar4 * 0x14) = uVar6;
LAB_14983b1fc:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14983b274 FUN_14983b274 body=31 status=ok
// SIG undefined FUN_14983b274(void)

undefined8 FUN_14983b274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14983b2b0 FUN_14983b2b0 body=93 status=ok
// SIG undefined FUN_14983b2b0(void)

void FUN_14983b2b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beb20c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14983b30e FUN_14983b30e body=123 status=ok
// SIG undefined FUN_14983b30e(void)

void FUN_14983b30e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14beb20c0;
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



// FUNCTION 14983b38a FUN_14983b38a body=21 status=ok
// SIG undefined FUN_14983b38a(void)

undefined8 FUN_14983b38a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14983b3a0 FUN_14983b3a0 body=48 status=ok
// SIG undefined FUN_14983b3a0(void)

void FUN_14983b3a0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14983b3d0 FUN_14983b3d0 body=38 status=ok
// SIG undefined FUN_14983b3d0(void)

undefined8 FUN_14983b3d0(undefined8 param_1,int param_2)

{
  FUN_149839a7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14983b402 FUN_14983b402 body=71 status=ok
// SIG undefined FUN_14983b402(void)

void FUN_14983b402(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x20)) {
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 4 + (param_2 & 0xffffffff) * 0x14) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 0x14,
       *(int *)(lVar1 + 0x10) == (int)(param_2 >> 0x20))) {
      FUN_14983b4d9(0,*(undefined8 *)(param_1 + 8),lVar1);
      *(undefined4 *)(lVar1 + 4) = 0;
    }
  }
  return;
}



// FUNCTION 14983b468 FUN_14983b468 body=12 status=ok
// SIG undefined FUN_14983b468(void)

void FUN_14983b468(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014983b471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14983b474 FUN_14983b474 body=29 status=ok
// SIG undefined FUN_14983b474(void)

undefined8 FUN_14983b474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14983b492 FUN_14983b492 body=71 status=ok
// SIG undefined FUN_14983b492(void)

void FUN_14983b492(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x20)) {
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 4 + (param_2 & 0xffffffff) * 0x14) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 0x14,
       *(int *)(lVar1 + 0x10) == (int)(param_2 >> 0x20))) {
      FUN_14983b4d9(1,*(undefined8 *)(param_1 + 8),lVar1);
      *(undefined4 *)(lVar1 + 4) = 0;
    }
  }
  return;
}



// FUNCTION 14983b4d9 FUN_14983b4d9 body=388 status=ok
// SIG undefined FUN_14983b4d9(void)

void FUN_14983b4d9(char param_1,longlong *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  
  iVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar6 = (ulonglong)uVar9;
  iVar14 = param_3[3];
  uVar3 = iVar8 - 1;
  if (*param_3 == 0) {
    uVar15 = (ulonglong)uVar3;
    if (param_1 != '\0') {
      lVar4 = param_2[uVar15 + 2];
      if (lVar4 == 0) {
        lVar4 = (**(code **)(*(longlong *)param_2[uVar15 + 4] + 0x10))
                          ((longlong *)param_2[uVar15 + 4],iVar8);
        param_2[uVar15 + 2] = lVar4;
      }
      lVar5 = *param_2;
      if (iVar8 == 1) {
        lVar5 = lVar5 + 0x40;
      }
      else {
        lVar5 = lVar5 + (ulonglong)*(uint *)(lVar5 + 0x10) * 8 + 0x40;
      }
      if (uVar9 < iVar14 + uVar9) {
        uVar10 = uVar6;
        do {
          uVar11 = (ulonglong)*(uint *)(lVar5 + 4 + uVar10 * 8);
          uVar13 = (ulonglong)*(uint *)(uVar11 + 8 + lVar4);
          if (uVar13 != 0) {
            lVar12 = uVar11 + lVar4;
            lVar7 = 0;
            do {
              *(undefined8 *)((ulonglong)*(uint *)(lVar12 + 0x1c + lVar7) + param_2[1] + uVar15 * 8)
                   = *(undefined8 *)(lVar12 + 0x10 + lVar7);
              lVar7 = lVar7 + 0x14;
            } while (uVar13 * 0x14 != lVar7);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != iVar14 + uVar9);
        lVar4 = param_2[uVar15 + 6];
        uVar3 = uVar9;
        iVar8 = iVar14;
        do {
          puVar1 = (uint *)(lVar4 + (ulonglong)(uVar3 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (~(byte)uVar3 & 0x1f);
          uVar3 = uVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    if (uVar9 < iVar14 + uVar9) {
      lVar4 = param_2[uVar15 + 8];
      do {
        bVar2 = ~(byte)uVar6 & 0x1f;
        puVar1 = (uint *)(lVar4 + (uVar6 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar3;
      } while (iVar14 + uVar9 != uVar3);
    }
  }
  else if (uVar9 < iVar14 + uVar9) {
    lVar4 = param_2[(ulonglong)uVar3 + 6];
    iVar8 = iVar14;
    do {
      bVar2 = ~(byte)uVar9 & 0x1f;
      puVar1 = (uint *)(lVar4 + (ulonglong)(uVar9 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar4 = param_2[(ulonglong)uVar3 + 8];
    do {
      bVar2 = ~(byte)uVar6 & 0x1f;
      puVar1 = (uint *)(lVar4 + (uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



// FUNCTION 14983b65e FUN_14983b65e body=132 status=ok
// SIG undefined FUN_14983b65e(void)

void FUN_14983b65e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14983b6e4 FUN_14983b6e4 body=62 status=ok
// SIG undefined FUN_14983b6e4(void)

void FUN_14983b6e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14983b722(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14983b722 FUN_14983b722 body=93 status=ok
// SIG undefined FUN_14983b722(void)

ulonglong FUN_14983b722(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14983b780 FUN_14983b780 body=65 status=ok
// SIG undefined FUN_14983b780(void)

int FUN_14983b780(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = *(int *)(*param_1 + 0x10 + (ulonglong)(param_2 - 1) * 4) + 0x1f;
    iVar1 = 0;
    if (0x1f < uVar3) {
      uVar2 = 0;
      do {
        iVar1 = iVar1 + POPCOUNT(*(undefined4 *)(param_1[(ulonglong)(param_2 - 1) + 8] + uVar2 * 4))
        ;
        uVar2 = uVar2 + 1;
      } while (uVar3 >> 5 != uVar2);
      iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
    }
  }
  return iVar1;
}



// FUNCTION 14983b7c2 FUN_14983b7c2 body=186 status=ok
// SIG undefined FUN_14983b7c2(void)

undefined8 FUN_14983b7c2(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_14983b85e;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_14983b85e;
    }
  }
  uVar4 = 0;
LAB_14983b85e:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983b87d FUN_14983b87d body=156 status=ok
// SIG undefined FUN_14983b87d(void)

void FUN_14983b87d(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x103;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  *(byte *)((longlong)param_1 + 0x1f) = *(byte *)(param_2 + 0x1c) & 1;
  *(bool *)(param_1 + 4) = 1 < *(uint *)(param_2 + 0x20);
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(byte *)(param_2 + 0x1f) & 0x40) >> 6;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  bVar2 = iVar1 != 0 & bVar2;
  fVar3 = 0.0;
  if (1 < iVar1 + (uint)bVar2) {
    fVar3 = (float)((iVar1 + (uint)bVar2) - 1) / *(float *)(param_2 + 0x18);
  }
  *(float *)(param_1 + 3) = fVar3;
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x1e) & 1;
  }
  *(byte *)((longlong)param_1 + 0x21) = bVar2;
  return;
}



// FUNCTION 14983b919 FUN_14983b919 body=944 status=ok
// SIG undefined FUN_14983b919(void)

void FUN_14983b919(longlong *param_1,float param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    fVar19 = SUB164(*(undefined1 (*) [16])(param_1 + 3),0);
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (fVar19 <= param_2) {
      param_2 = fVar19;
    }
    if (((*(float *)((longlong)param_1 + 0x34) != param_2) ||
        (NAN(*(float *)((longlong)param_1 + 0x34)) || NAN(param_2))) ||
       (*(byte *)((longlong)param_1 + 0x32) != param_3)) {
      *(float *)((longlong)param_1 + 0x34) = param_2;
      uVar5 = *(uint *)(lVar3 + 0x14) - 1;
      param_2 = param_2 * *(float *)(lVar3 + 0x18);
      uVar17 = (ulonglong)param_2;
      uVar15 = (uint)uVar17 + 1;
      if (SUB161(*(undefined1 (*) [16])(param_1 + 3),9) == '\0') {
        if (uVar5 < uVar15) {
          uVar15 = uVar5;
        }
        uVar16 = (ulonglong)uVar15;
      }
      else if (uVar5 < (uint)uVar17) {
        param_2 = 0.0;
        uVar17 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = (ulonglong)uVar15;
        if (*(uint *)(lVar3 + 0x14) <= uVar15) {
          uVar16 = 0;
        }
      }
      uVar5 = (uint)uVar16;
      lVar1 = lVar3 + 0x20;
      uVar15 = (uint)uVar17;
      fVar19 = (float)(uVar17 & 0xffffffff);
      if (param_3 == 1) {
        param_2 = 0.0;
      }
      else {
        param_2 = param_2 - fVar19;
      }
      *(float *)(param_1 + 0xf) = param_2;
      *(char *)((longlong)param_1 + 0x32) = (char)param_3;
      piVar12 = (int *)((ulonglong)*(uint *)(lVar3 + 0x44) + lVar1);
      if (*(uint *)(lVar3 + 0x20) == 1) {
        piVar13 = piVar12;
        if ((*(uint *)(lVar3 + 0x1c) >> 10 & 1) != 0) {
          bVar6 = 0x1f - (char)uVar17;
          uVar15 = (uint)piVar12[4] >> (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          uVar10 = uVar15 << bVar6;
          uVar5 = 0x20;
          iVar8 = 0x20;
          if ((uVar15 << bVar6 != 0) && (iVar8 = 0, uVar10 != 0)) {
            for (; (uVar10 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
            }
          }
          uVar15 = 0x1f - iVar8;
          uVar10 = piVar12[4] & 0xffffffffU >> ((byte)uVar16 & 0x1f);
          if (uVar10 != 0) {
            uVar5 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            uVar5 = uVar5 ^ 0x1f;
          }
          if (uVar5 - uVar15 == 0) {
            fVar19 = 0.0;
          }
          else {
            fVar19 = (param_2 + fVar19) - (float)uVar15;
            if (uVar15 <= uVar5) {
              fVar19 = fVar19 / (float)(uVar5 - uVar15);
            }
          }
          *(float *)(param_1 + 0xf) = fVar19;
          uVar15 = POPCOUNT(~(0xffffffffU >> ((byte)uVar15 & 0x1f)) & piVar12[4]);
          uVar5 = POPCOUNT(~(0xffffffffU >> ((byte)uVar5 & 0x1f)) & piVar12[4]);
        }
      }
      else {
        lVar9 = lVar3 + 0x54;
        uVar18 = (ulonglong)*(uint *)(lVar3 + 0x14) / (ulonglong)*(uint *)(lVar3 + 0x20);
        uVar17 = (ulonglong)((int)((uVar17 & 0xffffffff) / uVar18) - 1);
        if (uVar15 < (uint)uVar18) {
          uVar17 = 0;
        }
        if ((uint)uVar17 < 0xfffffffc) {
          uVar10 = -(uint)uVar17;
          lVar11 = 0;
          do {
            uVar14 = *(uint *)(lVar9 + uVar17 * 4 + lVar11 * 4);
            if (uVar15 < uVar14) {
              uVar17 = (ulonglong)~uVar10;
              uVar4 = -uVar10;
              if (uVar5 < uVar14) {
                uVar4 = ~uVar10;
              }
              uVar18 = (ulonglong)uVar4;
              if (uVar5 == 0) {
                uVar18 = uVar16;
              }
              goto LAB_14983bae7;
            }
            uVar10 = uVar10 - 1;
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 != 4);
        }
        uVar17 = 0;
        uVar18 = 0;
LAB_14983bae7:
        iVar8 = *(int *)(lVar9 + uVar17 * 4);
        uVar15 = uVar15 - iVar8;
        iVar2 = *(int *)(lVar9 + uVar18 * 4);
        uVar5 = uVar5 - iVar2;
        if ((*(uint *)(lVar3 + 0x1c) >> 10 & 1) == 0) {
          piVar13 = piVar12 + uVar18 * 4;
          piVar12 = piVar12 + uVar17 * 4;
        }
        else {
          bVar6 = 0x1f - (char)uVar15;
          uVar15 = (uint)piVar12[uVar17 * 5 + 4] >> (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          uVar14 = uVar15 << bVar6;
          uVar10 = 0x20;
          iVar7 = 0x20;
          if ((uVar15 << bVar6 != 0) && (iVar7 = 0, uVar14 != 0)) {
            for (; (uVar14 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
            }
          }
          uVar5 = piVar12[uVar18 * 5 + 4] & 0xffffffffU >> ((byte)uVar5 & 0x1f);
          if (uVar5 != 0) {
            uVar10 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> uVar10 == 0; uVar10 = uVar10 - 1) {
              }
            }
            uVar10 = uVar10 ^ 0x1f;
          }
          piVar13 = piVar12 + uVar18 * 5;
          uVar5 = iVar8 + (0x1f - iVar7);
          uVar15 = iVar2 + uVar10;
          uVar14 = uVar15 - uVar5;
          if (uVar14 == 0) {
            fVar19 = 0.0;
          }
          else {
            fVar19 = (param_2 + fVar19) - (float)uVar5;
            if (uVar5 <= uVar15) {
              fVar19 = fVar19 / (float)uVar14;
            }
          }
          *(float *)(param_1 + 0xf) = fVar19;
          uVar15 = POPCOUNT(~(0xffffffffU >> ((byte)(0x1f - iVar7) & 0x1f)) &
                            (piVar12 + uVar17 * 5)[4]);
          uVar5 = POPCOUNT(~(0xffffffffU >> ((byte)uVar10 & 0x1f)) & piVar13[4]);
          piVar12 = piVar12 + uVar17 * 5;
        }
      }
      *(bool *)((longlong)param_1 + 0x33) = piVar12 == piVar13;
      lVar9 = (ulonglong)(uint)piVar12[3] + lVar1;
      uVar17 = (ulonglong)*(uint *)(lVar3 + 0x24) + lVar9 + 1 & 0xfffffffffffffffe;
      uVar16 = (ulonglong)(*(uint *)(lVar3 + 0x24) * 6);
      if (*(uint *)(lVar3 + 0x20) < 2) {
        uVar16 = 0;
      }
      uVar16 = uVar16 + uVar17 + 3 & 0xfffffffffffffffc;
      param_1[8] = lVar9;
      param_1[10] = uVar17;
      param_1[0xc] = uVar16;
      if (piVar12 != piVar13) {
        lVar9 = (ulonglong)(uint)piVar13[3] + lVar1;
        uVar17 = (ulonglong)*(uint *)(lVar3 + 0x24) + lVar9 + 1 & 0xfffffffffffffffe;
        uVar16 = 0;
        if (1 < *(uint *)(lVar3 + 0x20)) {
          uVar16 = (ulonglong)(*(uint *)(lVar3 + 0x24) * 6);
        }
        uVar16 = uVar17 + uVar16 + 3 & 0xfffffffffffffffc;
      }
      param_1[9] = lVar9;
      param_1[0xb] = uVar17;
      param_1[0xd] = uVar16;
      *(uint *)(param_1 + 0xe) = uVar15 * *piVar12;
      *(uint *)((longlong)param_1 + 0x74) = uVar5 * *piVar13;
      *(int *)(param_1 + 7) = (int)piVar12 - (int)lVar3;
      *(int *)((longlong)param_1 + 0x3c) = (int)piVar13 - (int)lVar3;
    }
  }
  return;
}



// FUNCTION 14983bcca FUN_14983bcca body=420 status=ok
// SIG undefined FUN_14983bcca(void)

void FUN_14983bcca(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar3 = *param_2;
  uVar10 = *(uint *)(lVar3 + 0x50);
  uVar1 = *(uint *)(param_2 + 7);
  uVar2 = *(uint *)((longlong)param_2 + 0x3c);
  lVar4 = param_2[0xc];
  lVar5 = param_2[0xd];
  *(ulonglong *)(param_1 + 0x6b0) = lVar3 + 0x20 + (ulonglong)uVar10;
  lVar14 = param_2[8];
  lVar13 = param_2[10];
  lVar6 = param_2[0xe];
  *(longlong *)(param_1 + 0x6c8) = lVar14;
  *(longlong *)(param_1 + 0x6d0) = lVar13;
  *(longlong *)(param_1 + 0x6d8) = lVar4;
  *(int *)(param_1 + 0x6e0) = (int)lVar6;
  lVar11 = param_2[9];
  lVar7 = param_2[0xb];
  iVar9 = *(int *)((longlong)param_2 + 0x74);
  *(longlong *)(param_1 + 0x6e8) = lVar11;
  *(longlong *)(param_1 + 0x6f0) = lVar7;
  *(longlong *)(param_1 + 0x6f8) = lVar5;
  *(int *)(param_1 + 0x700) = iVar9;
  lVar12 = lVar3 + (ulonglong)uVar10 + (ulonglong)(uint)(*(int *)(lVar3 + 0x28) * 0x18) + 0x20;
  uVar10 = *(int *)(lVar3 + 0x28) + 3U & 0xfffffffc;
  lVar14 = lVar14 + (ulonglong)uVar10;
  lVar11 = lVar11 + (ulonglong)uVar10;
  lVar13 = lVar13 + (ulonglong)(uVar10 * 6);
  lVar7 = lVar7 + (ulonglong)(uVar10 * 6);
  *(longlong *)(param_1 + 0x6b8) = lVar12;
  *(longlong *)(param_1 + 0x708) = lVar14;
  *(longlong *)(param_1 + 0x728) = lVar11;
  *(longlong *)(param_1 + 0x710) = lVar13;
  *(longlong *)(param_1 + 0x730) = lVar7;
  *(longlong *)(param_1 + 0x718) = lVar4;
  *(longlong *)(param_1 + 0x738) = lVar5;
  iVar8 = (int)lVar6 + *(int *)((ulonglong)uVar1 + 4 + lVar3);
  iVar9 = iVar9 + *(int *)((ulonglong)uVar2 + 4 + lVar3);
  *(int *)(param_1 + 0x720) = iVar8;
  *(int *)(param_1 + 0x740) = iVar9;
  if (*(char *)((longlong)param_2 + 0x1f) != '\0') {
    *(ulonglong *)(param_1 + 0x6c0) = lVar12 + (ulonglong)(uint)(*(int *)(lVar3 + 0x2c) * 0x18);
    *(ulonglong *)(param_1 + 0x748) = lVar14 + (ulonglong)*(uint *)(lVar3 + 0x2c);
    *(ulonglong *)(param_1 + 0x768) = lVar11 + (ulonglong)*(uint *)(lVar3 + 0x2c);
    *(ulonglong *)(param_1 + 0x750) = lVar13 + (ulonglong)(uint)(*(int *)(lVar3 + 0x2c) * 6);
    *(ulonglong *)(param_1 + 0x770) = lVar7 + (ulonglong)(uint)(*(int *)(lVar3 + 0x2c) * 6);
    *(longlong *)(param_1 + 0x758) = lVar4;
    *(longlong *)(param_1 + 0x778) = lVar5;
    *(int *)(param_1 + 0x760) = iVar8 + *(int *)(lVar3 + 8 + (ulonglong)uVar1);
    *(int *)(param_1 + 0x780) = iVar9 + *(int *)(lVar3 + 8 + (ulonglong)uVar2);
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar3 + 0x28);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar3 + 0x2c);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(lVar3 + 0x30);
  return;
}



// FUNCTION 14983be6e FUN_14983be6e body=6143 status=ok
// SIG undefined FUN_14983be6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14983be6e(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  float *pfVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  longlong lVar35;
  ulonglong uVar36;
  float *pfVar37;
  float *pfVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_a78 [35];
  char local_a55;
  uint local_a54;
  ulonglong local_a50;
  longlong local_a48;
  longlong local_a40;
  ulonglong local_a38;
  longlong local_a30;
  float local_a28 [128];
  undefined8 local_828;
  float local_818 [128];
  undefined8 local_618;
  float local_608 [128];
  undefined8 local_408;
  longlong local_350;
  uint local_348;
  float afStack_298 [128];
  undefined8 local_98;
  uint local_90;
  float *local_88;
  float *local_80;
  float *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  lVar33 = *param_1;
  uVar26 = *(uint *)(lVar33 + 0x10);
  if (((ulonglong)uVar26 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar27 = uVar26 + 0xf >> 4;
    uVar31 = uVar26 + 0xf & 0xfffffff0;
    local_a54 = uVar27 - 1;
    uVar39 = 0xaaaaaaaa;
    if (uVar26 != uVar31) {
      uVar39 = ~(0xffffffffU >> (((char)uVar26 - (char)uVar31) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a55 = *(char *)((longlong)param_1 + 0x1f);
    local_a40 = (ulonglong)*(uint *)(lVar33 + 0x48) + lVar33 + 0x20;
    local_a50 = (ulonglong)uVar27;
    uVar28 = 0;
    local_98 = 0;
    local_90 = *(uint *)(lVar33 + 0x34);
    pfVar37 = (float *)((ulonglong)*(uint *)(lVar33 + 0x4c) + lVar33 + 0x20);
    local_80 = (float *)((longlong)pfVar37 + (ulonglong)(local_90 * 0xc));
    local_78 = (float *)((ulonglong)(uint)(*(int *)(lVar33 + 0x38) * 0xc) + (longlong)local_80);
    local_828 = 0;
    local_618 = 0;
    local_408 = 0;
    local_a38 = (ulonglong)uVar26;
    local_88 = pfVar37;
    FUN_14983bcca(local_a28,param_1);
    uVar30 = (ulonglong)local_a54;
    uVar25 = (ulonglong)(uVar27 + (uVar27 == 0));
    uVar26 = 3;
    do {
      uVar27 = 0xaaaaaaaa;
      if (uVar28 == uVar30) {
        uVar27 = uVar39;
      }
      uVar27 = uVar27 & 0xaaaaaaaaU - *(int *)(local_a40 + uVar28 * 4);
      uVar31 = uVar27;
      uVar29 = uVar26;
      while (uVar27 != 0) {
        if ((uVar31 & 0xaa000000) != 0) {
          if ((int)uVar31 < 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar29 - 3) * 6);
            if (uVar7 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 3) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar33);
              dVar6 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar33);
              dVar12 = *pdVar3;
              dVar13 = pdVar3[1];
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              *(double *)(lVar33 + lVar35) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + lVar35) = (double)(float)dVar6;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)(float)dVar13;
            }
          }
          if ((uVar31 >> 0x1d & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar29 - 2) * 6);
            if (uVar7 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 2) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar33);
              dVar6 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar33);
              dVar12 = *pdVar3;
              dVar13 = pdVar3[1];
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              *(double *)(lVar33 + lVar35) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + lVar35) = (double)(float)dVar6;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)(float)dVar13;
            }
          }
          if ((uVar31 >> 0x1b & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar29 - 1) * 6);
            if (uVar7 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 1) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar33);
              dVar6 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar33);
              dVar12 = *pdVar3;
              dVar13 = pdVar3[1];
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              *(double *)(lVar33 + lVar35) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + lVar35) = (double)(float)dVar6;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)(float)dVar13;
            }
          }
          if ((uVar31 >> 0x19 & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)uVar29 * 6);
            if (uVar7 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar29 * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar33);
              dVar6 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar33);
              dVar12 = *pdVar3;
              dVar13 = pdVar3[1];
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              *(double *)(lVar33 + lVar35) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + lVar35) = (double)(float)dVar6;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)(float)dVar13;
            }
          }
        }
        uVar29 = uVar29 + 4;
        uVar27 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar28 = uVar28 + 1;
      uVar26 = uVar26 + 0x10;
    } while (uVar28 != uVar25);
    uVar26 = 0;
    uVar27 = 3;
    fVar5 = (float)DAT_1499314a0;
    fVar8 = DAT_1499314a0._4_4_;
    fVar9 = DAT_1499314a0._8_4_;
    fVar10 = DAT_1499314a0._12_4_;
    uVar28 = 0;
    do {
      if ((local_90 != 0) && ((uint)local_98 - uVar26 < 0x10)) {
        uVar26 = 0x10;
        if (local_90 < 0x10) {
          uVar26 = local_90;
        }
        local_90 = local_90 - uVar26;
        uVar31 = (uint)local_98 & 0x1f;
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + uVar26);
        pauVar34 = (undefined1 (*) [16])((longlong)afStack_298 + (ulonglong)(uVar31 << 4));
        pfVar38 = pfVar37;
        do {
          uVar36 = 4;
          if (uVar26 < 4) {
            uVar36 = (ulonglong)uVar26;
          }
          iVar11 = (int)uVar36;
          pfVar37 = (float *)((ulonglong)(uint)(iVar11 * 0xc) + (longlong)pfVar38);
          fVar4 = *pfVar38;
          fVar14 = pfVar38[1];
          fVar15 = pfVar38[2];
          fVar16 = pfVar38[3];
          pfVar2 = (float *)((longlong)pfVar38 + (ulonglong)(uint)(iVar11 * 4));
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar38 = pfVar38 + uVar36 * 2;
          fVar21 = *pfVar38;
          fVar22 = pfVar38[1];
          fVar23 = pfVar38[2];
          fVar24 = pfVar38[3];
          auVar40._0_4_ = fVar21 * fVar21;
          auVar40._4_4_ = fVar22 * fVar22;
          auVar40._8_4_ = fVar23 * fVar23;
          auVar40._12_4_ = fVar24 * fVar24;
          auVar41._8_4_ = ABS(((fVar9 - fVar15 * fVar15) - fVar19 * fVar19) - auVar40._8_4_);
          auVar41._0_8_ =
               CONCAT44(((fVar8 - fVar14 * fVar14) - fVar18 * fVar18) - auVar40._4_4_,
                        ((fVar5 - fVar4 * fVar4) - fVar17 * fVar17) - auVar40._0_4_) &
               0x7fffffff7fffffff;
          auVar41._12_4_ = ABS(((fVar10 - fVar16 * fVar16) - fVar20 * fVar20) - auVar40._12_4_);
          auVar41 = sqrtps(auVar40,auVar41);
          auVar42._4_4_ = fVar17;
          auVar42._0_4_ = fVar4;
          auVar42._8_4_ = fVar21;
          auVar42._12_4_ = auVar41._0_4_;
          *pauVar34 = auVar42;
          *(float *)pauVar34[1] = fVar14;
          *(float *)(pauVar34[1] + 4) = fVar18;
          *(float *)(pauVar34[1] + 8) = fVar22;
          *(int *)(pauVar34[1] + 0xc) = auVar41._4_4_;
          *(float *)pauVar34[2] = fVar15;
          *(float *)(pauVar34[2] + 4) = fVar19;
          *(float *)(pauVar34[2] + 8) = fVar23;
          *(int *)(pauVar34[2] + 0xc) = auVar41._8_4_;
          *(float *)pauVar34[3] = fVar16;
          *(float *)(pauVar34[3] + 4) = fVar20;
          *(float *)(pauVar34[3] + 8) = fVar24;
          *(int *)(pauVar34[3] + 0xc) = auVar41._12_4_;
          pauVar34 = pauVar34 + 4;
          uVar26 = uVar26 - iVar11;
          pfVar38 = pfVar37;
        } while (uVar26 != 0);
        local_88 = pfVar37;
        uVar26 = local_98._4_4_;
      }
      uVar31 = *(uint *)(local_a40 + uVar28 * 4) & 0x55555555;
      uVar29 = uVar31;
      uVar32 = uVar27;
      while (uVar31 != 0) {
        if ((uVar29 & 0x55000000) != 0) {
          uVar31 = uVar26;
          if (uVar29 >> 0x1e != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar32 - 3) * 6);
            uVar31 = uVar26 + 1;
            if (uVar7 != 0xffff) {
              uVar36 = (ulonglong)((uVar26 & 0x1f) << 4);
              fVar14 = *(float *)((longlong)afStack_298 + uVar36 + 4);
              fVar15 = *(float *)((longlong)afStack_298 + uVar36 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar4 = *(float *)((longlong)afStack_298 + uVar36 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)afStack_298 + uVar36);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar14;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar4;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar15;
            }
          }
          uVar26 = uVar31;
          if ((uVar29 >> 0x1c & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar32 - 2) * 6);
            uVar26 = uVar31 + 1;
            if (uVar7 != 0xffff) {
              uVar36 = (ulonglong)((uVar31 & 0x1f) << 4);
              fVar14 = *(float *)((longlong)afStack_298 + uVar36 + 4);
              fVar15 = *(float *)((longlong)afStack_298 + uVar36 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar4 = *(float *)((longlong)afStack_298 + uVar36 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)afStack_298 + uVar36);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar14;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar4;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar15;
            }
          }
          uVar31 = uVar26;
          if ((uVar29 >> 0x1a & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar32 - 1) * 6);
            uVar31 = uVar26 + 1;
            if (uVar7 != 0xffff) {
              uVar36 = (ulonglong)((uVar26 & 0x1f) << 4);
              fVar14 = *(float *)((longlong)afStack_298 + uVar36 + 4);
              fVar15 = *(float *)((longlong)afStack_298 + uVar36 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar4 = *(float *)((longlong)afStack_298 + uVar36 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)afStack_298 + uVar36);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar14;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar4;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar15;
            }
          }
          uVar26 = uVar31;
          if ((uVar29 >> 0x18 & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)uVar32 * 6);
            uVar26 = uVar31 + 1;
            if (uVar7 != 0xffff) {
              uVar36 = (ulonglong)((uVar31 & 0x1f) << 4);
              fVar14 = *(float *)((longlong)afStack_298 + uVar36 + 4);
              fVar15 = *(float *)((longlong)afStack_298 + uVar36 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar4 = *(float *)((longlong)afStack_298 + uVar36 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)afStack_298 + uVar36);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar14;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar4;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar15;
            }
          }
        }
        uVar32 = uVar32 + 4;
        uVar31 = uVar29 & 0xffffff;
        uVar29 = uVar29 << 8;
      }
      local_98 = CONCAT44(uVar26,(uint)local_98);
      uVar28 = uVar28 + 1;
      uVar27 = uVar27 + 0x10;
    } while (uVar28 != uVar25);
    local_a48 = local_a40 + local_a50 * 4;
    local_a30 = local_350 + (ulonglong)(local_348 >> 3);
    uVar26 = 3;
    uVar28 = 0;
    do {
      uVar27 = 0xaaaaaaaa;
      if (uVar28 == uVar30) {
        uVar27 = uVar39;
      }
      uVar27 = uVar27 & 0xaaaaaaaaU - *(int *)(local_a48 + uVar28 * 4);
      uVar31 = uVar27;
      uVar29 = uVar26;
      while (uVar27 != 0) {
        if ((uVar31 & 0xaa000000) != 0) {
          if ((int)uVar31 < 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 3) * 6);
            if (uVar36 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 3) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + 0x20 + lVar33);
              dVar12 = pdVar1[1];
              dVar6 = *(double *)(*param_2 + 0x30 + lVar33);
              lVar33 = param_2[4];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
            }
          }
          if ((uVar31 >> 0x1d & 1) != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 2) * 6);
            if (uVar36 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 2) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + 0x20 + lVar33);
              dVar12 = pdVar1[1];
              dVar6 = *(double *)(*param_2 + 0x30 + lVar33);
              lVar33 = param_2[4];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
            }
          }
          if ((uVar31 >> 0x1b & 1) != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 1) * 6);
            if (uVar36 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 1) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + 0x20 + lVar33);
              dVar12 = pdVar1[1];
              dVar6 = *(double *)(*param_2 + 0x30 + lVar33);
              lVar33 = param_2[4];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
            }
          }
          if ((uVar31 >> 0x19 & 1) != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)uVar29 * 6);
            if (uVar36 != 0xffff) {
              lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar29 * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + 0x20 + lVar33);
              dVar12 = pdVar1[1];
              dVar6 = *(double *)(*param_2 + 0x30 + lVar33);
              lVar33 = param_2[4];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
            }
          }
        }
        uVar29 = uVar29 + 4;
        uVar27 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar28 = uVar28 + 1;
      uVar26 = uVar26 + 0x10;
    } while (uVar28 != uVar25);
    local_a50 = local_a48 + local_a50 * 4;
    uVar26 = 3;
    uVar28 = 0;
    do {
      uVar27 = *(uint *)(local_a48 + uVar28 * 4) & 0x55555555;
      uVar31 = uVar27;
      uVar29 = uVar26;
      while (uVar27 != 0) {
        if ((uVar31 & 0x55000000) != 0) {
          pfVar37 = local_80;
          if (uVar31 >> 0x1e != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 3) * 6);
            pfVar37 = local_80 + 3;
            if (uVar36 != 0xffff) {
              fVar8 = local_80[1];
              lVar33 = param_2[4];
              fVar5 = local_80[2];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)*local_80;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)fVar5;
            }
          }
          pfVar38 = pfVar37;
          if ((uVar31 >> 0x1c & 1) != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 2) * 6);
            pfVar38 = pfVar37 + 3;
            if (uVar36 != 0xffff) {
              fVar8 = pfVar37[1];
              lVar33 = param_2[4];
              fVar5 = pfVar37[2];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)*pfVar37;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)fVar5;
            }
          }
          pfVar37 = pfVar38;
          if ((uVar31 >> 0x1a & 1) != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 1) * 6);
            pfVar37 = pfVar38 + 3;
            if (uVar36 != 0xffff) {
              fVar8 = pfVar38[1];
              lVar33 = param_2[4];
              fVar5 = pfVar38[2];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)*pfVar38;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)fVar5;
            }
          }
          local_80 = pfVar37;
          if ((uVar31 >> 0x18 & 1) != 0) {
            uVar36 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)uVar29 * 6);
            local_80 = pfVar37 + 3;
            if (uVar36 != 0xffff) {
              fVar8 = pfVar37[1];
              lVar33 = param_2[4];
              fVar5 = pfVar37[2];
              *(double *)(lVar33 + uVar36 * 0x18) = (double)*pfVar37;
              *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)fVar5;
            }
          }
        }
        uVar29 = uVar29 + 4;
        uVar27 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar28 = uVar28 + 1;
      uVar26 = uVar26 + 0x10;
    } while (uVar28 != uVar25);
    if (local_a55 == '\0') {
      lVar33 = 4;
      uVar30 = 0;
      do {
        uVar25 = (ulonglong)*(ushort *)(param_2[2] + lVar33);
        if (uVar25 != 0xffff) {
          lVar35 = (longlong)*(int *)(param_2[1] + uVar30 * 4) * 0x60;
          pdVar1 = (double *)(*param_2 + 0x40 + lVar35);
          dVar12 = pdVar1[1];
          dVar6 = *(double *)(*param_2 + 0x50 + lVar35);
          lVar35 = param_2[5];
          *(double *)(lVar35 + uVar25 * 0x18) = (double)(float)*pdVar1;
          *(double *)(lVar35 + 8 + uVar25 * 0x18) = (double)(float)dVar12;
          *(double *)(lVar35 + 0x10 + uVar25 * 0x18) = (double)(float)dVar6;
        }
        uVar30 = uVar30 + 1;
        lVar33 = lVar33 + 6;
      } while (local_a38 != uVar30);
    }
    else {
      uVar26 = 3;
      uVar28 = 0;
      do {
        uVar27 = 0xaaaaaaaa;
        if (uVar28 == uVar30) {
          uVar27 = uVar39;
        }
        uVar27 = uVar27 & 0xaaaaaaaaU - *(int *)(local_a50 + uVar28 * 4);
        uVar31 = uVar27;
        uVar29 = uVar26;
        while (uVar27 != 0) {
          if ((uVar31 & 0xaa000000) != 0) {
            if ((int)uVar31 < 0) {
              uVar36 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar29 - 3) * 6);
              if (uVar36 != 0xffff) {
                lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 3) * 4) * 0x60;
                pdVar1 = (double *)(*param_2 + 0x40 + lVar33);
                dVar12 = pdVar1[1];
                dVar6 = *(double *)(*param_2 + 0x50 + lVar33);
                lVar33 = param_2[5];
                *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
                *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
                *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
              }
            }
            if ((uVar31 >> 0x1d & 1) != 0) {
              uVar36 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar29 - 2) * 6);
              if (uVar36 != 0xffff) {
                lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 2) * 4) * 0x60;
                pdVar1 = (double *)(*param_2 + 0x40 + lVar33);
                dVar12 = pdVar1[1];
                dVar6 = *(double *)(*param_2 + 0x50 + lVar33);
                lVar33 = param_2[5];
                *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
                *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
                *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
              }
            }
            if ((uVar31 >> 0x1b & 1) != 0) {
              uVar36 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar29 - 1) * 6);
              if (uVar36 != 0xffff) {
                lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar29 - 1) * 4) * 0x60;
                pdVar1 = (double *)(*param_2 + 0x40 + lVar33);
                dVar12 = pdVar1[1];
                dVar6 = *(double *)(*param_2 + 0x50 + lVar33);
                lVar33 = param_2[5];
                *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
                *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
                *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
              }
            }
            if ((uVar31 >> 0x19 & 1) != 0) {
              uVar36 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)uVar29 * 6);
              if (uVar36 != 0xffff) {
                lVar33 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar29 * 4) * 0x60;
                pdVar1 = (double *)(*param_2 + 0x40 + lVar33);
                dVar12 = pdVar1[1];
                dVar6 = *(double *)(*param_2 + 0x50 + lVar33);
                lVar33 = param_2[5];
                *(double *)(lVar33 + uVar36 * 0x18) = (double)(float)*pdVar1;
                *(double *)(lVar33 + 8 + uVar36 * 0x18) = (double)(float)dVar12;
                *(double *)(lVar33 + 0x10 + uVar36 * 0x18) = (double)(float)dVar6;
              }
            }
          }
          uVar29 = uVar29 + 4;
          uVar27 = uVar31 & 0xffffff;
          uVar31 = uVar31 << 8;
        }
        uVar28 = uVar28 + 1;
        uVar26 = uVar26 + 0x10;
      } while (uVar28 != uVar25);
      uVar26 = 3;
      uVar30 = 0;
      do {
        uVar27 = *(uint *)(local_a50 + uVar30 * 4) & 0x55555555;
        uVar31 = uVar27;
        uVar39 = uVar26;
        while (uVar27 != 0) {
          if ((uVar31 & 0x55000000) != 0) {
            pfVar37 = local_78;
            if (uVar31 >> 0x1e != 0) {
              uVar28 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar39 - 3) * 6);
              pfVar37 = local_78 + 3;
              if (uVar28 != 0xffff) {
                fVar8 = local_78[1];
                lVar33 = param_2[5];
                fVar5 = local_78[2];
                *(double *)(lVar33 + uVar28 * 0x18) = (double)*local_78;
                *(double *)(lVar33 + 8 + uVar28 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar28 * 0x18) = (double)fVar5;
              }
            }
            pfVar38 = pfVar37;
            if ((uVar31 >> 0x1c & 1) != 0) {
              uVar28 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar39 - 2) * 6);
              pfVar38 = pfVar37 + 3;
              if (uVar28 != 0xffff) {
                fVar8 = pfVar37[1];
                lVar33 = param_2[5];
                fVar5 = pfVar37[2];
                *(double *)(lVar33 + uVar28 * 0x18) = (double)*pfVar37;
                *(double *)(lVar33 + 8 + uVar28 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar28 * 0x18) = (double)fVar5;
              }
            }
            pfVar37 = pfVar38;
            if ((uVar31 >> 0x1a & 1) != 0) {
              uVar28 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar39 - 1) * 6);
              pfVar37 = pfVar38 + 3;
              if (uVar28 != 0xffff) {
                fVar8 = pfVar38[1];
                lVar33 = param_2[5];
                fVar5 = pfVar38[2];
                *(double *)(lVar33 + uVar28 * 0x18) = (double)*pfVar38;
                *(double *)(lVar33 + 8 + uVar28 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar28 * 0x18) = (double)fVar5;
              }
            }
            local_78 = pfVar37;
            if ((uVar31 >> 0x18 & 1) != 0) {
              uVar28 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)uVar39 * 6);
              local_78 = pfVar37 + 3;
              if (uVar28 != 0xffff) {
                fVar8 = pfVar37[1];
                lVar33 = param_2[5];
                fVar5 = pfVar37[2];
                *(double *)(lVar33 + uVar28 * 0x18) = (double)*pfVar37;
                *(double *)(lVar33 + 8 + uVar28 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar28 * 0x18) = (double)fVar5;
              }
            }
          }
          uVar39 = uVar39 + 4;
          uVar27 = uVar31 & 0xffffff;
          uVar31 = uVar31 << 8;
        }
        uVar30 = uVar30 + 1;
        uVar26 = uVar26 + 0x10;
      } while (uVar30 != uVar25);
    }
    uVar30 = 0;
    uVar26 = 3;
    do {
      uVar27 = *(uint *)(local_a40 + uVar30 * 4) & 0xaaaaaaaa;
      uVar31 = uVar27;
      uVar39 = uVar26;
      while (uVar27 != 0) {
        if ((uVar31 & 0xaa000000) != 0) {
          FUN_14495e59a(local_a28,param_1);
          if ((int)uVar31 < 0) {
            uVar27 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar39 - 3) * 6);
            if (uVar7 != 0xffff) {
              uVar25 = (ulonglong)((uVar27 & 7) << 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar25 + 4);
              fVar9 = *(float *)((longlong)local_a28 + uVar25 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar5 = *(float *)((longlong)local_a28 + uVar25 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)local_a28 + uVar25);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar5;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar9;
            }
          }
          if ((uVar31 >> 0x1d & 1) != 0) {
            uVar27 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar39 - 2) * 6);
            if (uVar7 != 0xffff) {
              uVar25 = (ulonglong)((uVar27 & 7) << 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar25 + 4);
              fVar9 = *(float *)((longlong)local_a28 + uVar25 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar5 = *(float *)((longlong)local_a28 + uVar25 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)local_a28 + uVar25);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar5;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar9;
            }
          }
          if ((uVar31 >> 0x1b & 1) != 0) {
            uVar27 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar39 - 1) * 6);
            if (uVar7 != 0xffff) {
              uVar25 = (ulonglong)((uVar27 & 7) << 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar25 + 4);
              fVar9 = *(float *)((longlong)local_a28 + uVar25 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar5 = *(float *)((longlong)local_a28 + uVar25 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)local_a28 + uVar25);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar5;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar9;
            }
          }
          if ((uVar31 >> 0x19 & 1) != 0) {
            uVar27 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)uVar39 * 6);
            if (uVar7 != 0xffff) {
              uVar25 = (ulonglong)((uVar27 & 7) << 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar25 + 4);
              fVar9 = *(float *)((longlong)local_a28 + uVar25 + 0xc);
              lVar33 = param_2[3];
              lVar35 = (ulonglong)uVar7 * 0x20;
              fVar5 = *(float *)((longlong)local_a28 + uVar25 + 8);
              *(double *)(lVar33 + lVar35) = (double)*(float *)((longlong)local_a28 + uVar25);
              *(double *)(lVar33 + 8 + lVar35) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + lVar35) = (double)fVar5;
              *(double *)(lVar33 + 0x18 + lVar35) = (double)fVar9;
            }
          }
        }
        uVar39 = uVar39 + 4;
        uVar27 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar27 = (int)uVar30 + 1;
      uVar30 = (ulonglong)uVar27;
      uVar26 = uVar26 + 0x10;
    } while (uVar27 <= local_a54);
    uVar26 = 0;
    uVar27 = 3;
    do {
      uVar31 = *(uint *)(local_a48 + (ulonglong)uVar26 * 4) & 0xaaaaaaaa;
      uVar39 = uVar31;
      uVar29 = uVar27;
      while (uVar31 != 0) {
        if ((uVar39 & 0xaa000000) != 0) {
          FUN_14495e09c(local_a28,param_1);
          if ((int)uVar39 < 0) {
            uVar31 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar30 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 3) * 6);
            if (uVar30 != 0xffff) {
              uVar25 = (ulonglong)((uVar31 & 7) << 4);
              fVar8 = *(float *)((longlong)local_818 + uVar25 + 4);
              lVar33 = param_2[4];
              fVar5 = *(float *)((longlong)local_818 + uVar25 + 8);
              *(double *)(lVar33 + uVar30 * 0x18) = (double)*(float *)((longlong)local_818 + uVar25)
              ;
              *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
            }
          }
          if ((uVar39 >> 0x1d & 1) != 0) {
            uVar31 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar30 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 2) * 6);
            if (uVar30 != 0xffff) {
              uVar25 = (ulonglong)((uVar31 & 7) << 4);
              fVar8 = *(float *)((longlong)local_818 + uVar25 + 4);
              lVar33 = param_2[4];
              fVar5 = *(float *)((longlong)local_818 + uVar25 + 8);
              *(double *)(lVar33 + uVar30 * 0x18) = (double)*(float *)((longlong)local_818 + uVar25)
              ;
              *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
            }
          }
          if ((uVar39 >> 0x1b & 1) != 0) {
            uVar31 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar30 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)(uVar29 - 1) * 6);
            if (uVar30 != 0xffff) {
              uVar25 = (ulonglong)((uVar31 & 7) << 4);
              fVar8 = *(float *)((longlong)local_818 + uVar25 + 4);
              lVar33 = param_2[4];
              fVar5 = *(float *)((longlong)local_818 + uVar25 + 8);
              *(double *)(lVar33 + uVar30 * 0x18) = (double)*(float *)((longlong)local_818 + uVar25)
              ;
              *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
            }
          }
          if ((uVar39 >> 0x19 & 1) != 0) {
            uVar31 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar30 = (ulonglong)*(ushort *)(param_2[2] + 2 + (ulonglong)uVar29 * 6);
            if (uVar30 != 0xffff) {
              uVar25 = (ulonglong)((uVar31 & 7) << 4);
              fVar8 = *(float *)((longlong)local_818 + uVar25 + 4);
              lVar33 = param_2[4];
              fVar5 = *(float *)((longlong)local_818 + uVar25 + 8);
              *(double *)(lVar33 + uVar30 * 0x18) = (double)*(float *)((longlong)local_818 + uVar25)
              ;
              *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
              *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
            }
          }
        }
        uVar29 = uVar29 + 4;
        uVar31 = uVar39 & 0xffffff;
        uVar39 = uVar39 << 8;
      }
      uVar26 = uVar26 + 1;
      uVar27 = uVar27 + 0x10;
    } while (uVar26 <= local_a54);
    if (local_a55 != '\0') {
      uVar26 = 0;
      uVar27 = 3;
      do {
        uVar31 = *(uint *)(local_a50 + (ulonglong)uVar26 * 4) & 0xaaaaaaaa;
        uVar39 = uVar31;
        uVar29 = uVar27;
        while (uVar31 != 0) {
          if ((uVar39 & 0xaa000000) != 0) {
            FUN_14495f238(local_a28,param_1);
            if ((int)uVar39 < 0) {
              uVar31 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar30 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar29 - 3) * 6);
              if (uVar30 != 0xffff) {
                uVar25 = (ulonglong)((uVar31 & 7) << 4);
                fVar8 = *(float *)((longlong)local_608 + uVar25 + 4);
                lVar33 = param_2[5];
                fVar5 = *(float *)((longlong)local_608 + uVar25 + 8);
                *(double *)(lVar33 + uVar30 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar25);
                *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
              }
            }
            if ((uVar39 >> 0x1d & 1) != 0) {
              uVar31 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar30 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar29 - 2) * 6);
              if (uVar30 != 0xffff) {
                uVar25 = (ulonglong)((uVar31 & 7) << 4);
                fVar8 = *(float *)((longlong)local_608 + uVar25 + 4);
                lVar33 = param_2[5];
                fVar5 = *(float *)((longlong)local_608 + uVar25 + 8);
                *(double *)(lVar33 + uVar30 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar25);
                *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
              }
            }
            if ((uVar39 >> 0x1b & 1) != 0) {
              uVar31 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar30 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)(uVar29 - 1) * 6);
              if (uVar30 != 0xffff) {
                uVar25 = (ulonglong)((uVar31 & 7) << 4);
                fVar8 = *(float *)((longlong)local_608 + uVar25 + 4);
                lVar33 = param_2[5];
                fVar5 = *(float *)((longlong)local_608 + uVar25 + 8);
                *(double *)(lVar33 + uVar30 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar25);
                *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
              }
            }
            if ((uVar39 >> 0x19 & 1) != 0) {
              uVar31 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar30 = (ulonglong)*(ushort *)(param_2[2] + 4 + (ulonglong)uVar29 * 6);
              if (uVar30 != 0xffff) {
                uVar25 = (ulonglong)((uVar31 & 7) << 4);
                fVar8 = *(float *)((longlong)local_608 + uVar25 + 4);
                lVar33 = param_2[5];
                fVar5 = *(float *)((longlong)local_608 + uVar25 + 8);
                *(double *)(lVar33 + uVar30 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar25);
                *(double *)(lVar33 + 8 + uVar30 * 0x18) = (double)fVar8;
                *(double *)(lVar33 + 0x10 + uVar30 * 0x18) = (double)fVar5;
              }
            }
          }
          uVar29 = uVar29 + 4;
          uVar31 = uVar39 & 0xffffff;
          uVar39 = uVar39 << 8;
        }
        uVar26 = uVar26 + 1;
        uVar27 = uVar27 + 0x10;
      } while (uVar26 <= local_a54);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983d66e FUN_14983d66e body=5351 status=ok
// SIG undefined FUN_14983d66e(void)

void FUN_14983d66e(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  ushort uVar4;
  double dVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  ulonglong uVar29;
  float *pfVar30;
  float *pfVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_a88 [43];
  char local_a5d;
  uint local_a5c;
  ulonglong local_a58;
  longlong local_a50;
  longlong local_a48;
  uint local_a3c;
  longlong local_a38;
  longlong local_a30;
  float local_a28 [128];
  undefined8 local_828;
  float local_818 [128];
  undefined8 local_618;
  float local_608 [128];
  undefined8 local_408;
  longlong local_350;
  uint local_348;
  longlong local_330;
  uint local_328;
  float afStack_298 [128];
  undefined8 local_98;
  uint local_90;
  float *local_88;
  float *local_80;
  float *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a88;
  lVar20 = *param_1;
  uVar21 = *(uint *)(lVar20 + 0x10);
  uVar26 = (ulonglong)uVar21;
  if ((uVar26 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar23 = uVar21 + 0xf >> 4;
    uVar24 = uVar21 + 0xf & 0xfffffff0;
    local_a5c = uVar23 - 1;
    uVar32 = 0xaaaaaaaa;
    if (uVar21 != uVar24) {
      uVar32 = ~(0xffffffffU >> (((char)uVar21 - (char)uVar24) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a3c = *(uint *)(lVar20 + 0x1c) >> 1 & 1;
    local_a5d = *(char *)((longlong)param_1 + 0x1f);
    local_a48 = (ulonglong)*(uint *)(lVar20 + 0x48) + lVar20 + 0x20;
    local_a58 = (ulonglong)uVar23;
    uVar33 = 0;
    local_98 = 0;
    local_90 = *(uint *)(lVar20 + 0x34);
    pfVar31 = (float *)((ulonglong)*(uint *)(lVar20 + 0x4c) + lVar20 + 0x20);
    local_80 = (float *)((ulonglong)(local_90 * 0xc) + (longlong)pfVar31);
    local_78 = (float *)((ulonglong)(uint)(*(int *)(lVar20 + 0x38) * 0xc) + (longlong)local_80);
    local_828 = 0;
    local_618 = 0;
    local_408 = 0;
    local_88 = pfVar31;
    FUN_14983bcca(local_a28,param_1);
    uVar19 = (ulonglong)(uVar23 + (uVar23 == 0));
    uVar18 = (ulonglong)local_a5c;
    uVar21 = 3;
    do {
      uVar23 = 0xaaaaaaaa;
      if (uVar33 == uVar18) {
        uVar23 = uVar32;
      }
      uVar23 = uVar23 & 0xaaaaaaaaU - *(int *)(local_a48 + uVar33 * 4);
      uVar24 = uVar23;
      uVar25 = uVar21;
      while (uVar23 != 0) {
        if ((uVar24 & 0xaa000000) != 0) {
          if (((int)uVar24 < 0) &&
             (uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar25 - 3) * 6),
             uVar4 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x18);
            lVar22 = (ulonglong)uVar4 * 0x20;
            *(undefined8 *)(lVar20 + lVar22) = 0;
            ((undefined8 *)(lVar20 + lVar22))[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + lVar22) = 0;
            *(undefined8 *)(lVar20 + 0x18 + lVar22) = 0x3ff0000000000000;
          }
          if (((uVar24 >> 0x1d & 1) != 0) &&
             (uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar25 - 2) * 6),
             uVar4 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x18);
            lVar22 = (ulonglong)uVar4 * 0x20;
            *(undefined8 *)(lVar20 + lVar22) = 0;
            ((undefined8 *)(lVar20 + lVar22))[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + lVar22) = 0;
            *(undefined8 *)(lVar20 + 0x18 + lVar22) = 0x3ff0000000000000;
          }
          if (((uVar24 >> 0x1b & 1) != 0) &&
             (uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar25 - 1) * 6),
             uVar4 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x18);
            lVar22 = (ulonglong)uVar4 * 0x20;
            *(undefined8 *)(lVar20 + lVar22) = 0;
            ((undefined8 *)(lVar20 + lVar22))[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + lVar22) = 0;
            *(undefined8 *)(lVar20 + 0x18 + lVar22) = 0x3ff0000000000000;
          }
          if (((uVar24 >> 0x19 & 1) != 0) &&
             (uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar25 * 6),
             uVar4 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x18);
            lVar22 = (ulonglong)uVar4 * 0x20;
            *(undefined8 *)(lVar20 + lVar22) = 0;
            ((undefined8 *)(lVar20 + lVar22))[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + lVar22) = 0;
            *(undefined8 *)(lVar20 + 0x18 + lVar22) = 0x3ff0000000000000;
          }
        }
        uVar25 = uVar25 + 4;
        uVar23 = uVar24 & 0xffffff;
        uVar24 = uVar24 << 8;
      }
      uVar33 = uVar33 + 1;
      uVar21 = uVar21 + 0x10;
    } while (uVar33 != uVar19);
    uVar21 = 0;
    uVar23 = 3;
    uVar33 = 0;
    do {
      if ((local_90 != 0) && ((uint)local_98 - uVar21 < 0x10)) {
        uVar21 = 0x10;
        if (local_90 < 0x10) {
          uVar21 = local_90;
        }
        local_90 = local_90 - uVar21;
        uVar24 = (uint)local_98 & 0x1f;
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + uVar21);
        pauVar28 = (undefined1 (*) [16])((longlong)afStack_298 + (ulonglong)(uVar24 << 4));
        pfVar30 = pfVar31;
        do {
          uVar29 = 4;
          if (uVar21 < 4) {
            uVar29 = (ulonglong)uVar21;
          }
          iVar6 = (int)uVar29;
          pfVar31 = (float *)((ulonglong)(uint)(iVar6 * 0xc) + (longlong)pfVar30);
          fVar3 = *pfVar30;
          fVar7 = pfVar30[1];
          fVar8 = pfVar30[2];
          fVar9 = pfVar30[3];
          pfVar1 = (float *)((longlong)pfVar30 + (ulonglong)(uint)(iVar6 * 4));
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar30 = pfVar30 + uVar29 * 2;
          fVar14 = *pfVar30;
          fVar15 = pfVar30[1];
          fVar16 = pfVar30[2];
          fVar17 = pfVar30[3];
          auVar34._0_4_ = fVar14 * fVar14;
          auVar34._4_4_ = fVar15 * fVar15;
          auVar34._8_4_ = fVar16 * fVar16;
          auVar34._12_4_ = fVar17 * fVar17;
          auVar35._8_4_ = ABS(((1.0 - fVar8 * fVar8) - fVar12 * fVar12) - auVar34._8_4_);
          auVar35._0_8_ =
               CONCAT44(((1.0 - fVar7 * fVar7) - fVar11 * fVar11) - auVar34._4_4_,
                        ((1.0 - fVar3 * fVar3) - fVar10 * fVar10) - auVar34._0_4_) &
               0x7fffffff7fffffff;
          auVar35._12_4_ = ABS(((1.0 - fVar9 * fVar9) - fVar13 * fVar13) - auVar34._12_4_);
          auVar35 = sqrtps(auVar34,auVar35);
          auVar36._4_4_ = fVar10;
          auVar36._0_4_ = fVar3;
          auVar36._8_4_ = fVar14;
          auVar36._12_4_ = auVar35._0_4_;
          *pauVar28 = auVar36;
          *(float *)pauVar28[1] = fVar7;
          *(float *)(pauVar28[1] + 4) = fVar11;
          *(float *)(pauVar28[1] + 8) = fVar15;
          *(int *)(pauVar28[1] + 0xc) = auVar35._4_4_;
          *(float *)pauVar28[2] = fVar8;
          *(float *)(pauVar28[2] + 4) = fVar12;
          *(float *)(pauVar28[2] + 8) = fVar16;
          *(int *)(pauVar28[2] + 0xc) = auVar35._8_4_;
          *(float *)pauVar28[3] = fVar9;
          *(float *)(pauVar28[3] + 4) = fVar13;
          *(float *)(pauVar28[3] + 8) = fVar17;
          *(int *)(pauVar28[3] + 0xc) = auVar35._12_4_;
          pauVar28 = pauVar28 + 4;
          uVar21 = uVar21 - iVar6;
          pfVar30 = pfVar31;
        } while (uVar21 != 0);
        local_88 = pfVar31;
        uVar21 = local_98._4_4_;
      }
      uVar24 = *(uint *)(local_a48 + uVar33 * 4) & 0x55555555;
      uVar25 = uVar24;
      uVar27 = uVar23;
      while (uVar24 != 0) {
        if ((uVar25 & 0x55000000) != 0) {
          uVar24 = uVar21;
          if (uVar25 >> 0x1e != 0) {
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar27 - 3) * 6);
            uVar24 = uVar21 + 1;
            if (uVar4 != 0xffff) {
              uVar29 = (ulonglong)((uVar21 & 0x1f) << 4);
              fVar7 = *(float *)((longlong)afStack_298 + uVar29 + 4);
              fVar8 = *(float *)((longlong)afStack_298 + uVar29 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)afStack_298 + uVar29 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)afStack_298 + uVar29);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
          uVar21 = uVar24;
          if ((uVar25 >> 0x1c & 1) != 0) {
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar27 - 2) * 6);
            uVar21 = uVar24 + 1;
            if (uVar4 != 0xffff) {
              uVar29 = (ulonglong)((uVar24 & 0x1f) << 4);
              fVar7 = *(float *)((longlong)afStack_298 + uVar29 + 4);
              fVar8 = *(float *)((longlong)afStack_298 + uVar29 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)afStack_298 + uVar29 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)afStack_298 + uVar29);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
          uVar24 = uVar21;
          if ((uVar25 >> 0x1a & 1) != 0) {
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar27 - 1) * 6);
            uVar24 = uVar21 + 1;
            if (uVar4 != 0xffff) {
              uVar29 = (ulonglong)((uVar21 & 0x1f) << 4);
              fVar7 = *(float *)((longlong)afStack_298 + uVar29 + 4);
              fVar8 = *(float *)((longlong)afStack_298 + uVar29 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)afStack_298 + uVar29 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)afStack_298 + uVar29);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
          uVar21 = uVar24;
          if ((uVar25 >> 0x18 & 1) != 0) {
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar27 * 6);
            uVar21 = uVar24 + 1;
            if (uVar4 != 0xffff) {
              uVar29 = (ulonglong)((uVar24 & 0x1f) << 4);
              fVar7 = *(float *)((longlong)afStack_298 + uVar29 + 4);
              fVar8 = *(float *)((longlong)afStack_298 + uVar29 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)afStack_298 + uVar29 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)afStack_298 + uVar29);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
        }
        uVar27 = uVar27 + 4;
        uVar24 = uVar25 & 0xffffff;
        uVar25 = uVar25 << 8;
      }
      local_98 = CONCAT44(uVar21,(uint)local_98);
      uVar33 = uVar33 + 1;
      uVar23 = uVar23 + 0x10;
    } while (uVar33 != uVar19);
    local_a50 = local_a48 + local_a58 * 4;
    local_a30 = local_350 + (ulonglong)(local_348 >> 3);
    local_a38 = local_330 + (ulonglong)(local_328 >> 3);
    uVar21 = 3;
    uVar33 = 0;
    do {
      uVar23 = 0xaaaaaaaa;
      if (uVar33 == uVar18) {
        uVar23 = uVar32;
      }
      uVar23 = uVar23 & 0xaaaaaaaaU - *(int *)(local_a50 + uVar33 * 4);
      uVar24 = uVar23;
      uVar25 = uVar21;
      while (uVar23 != 0) {
        if ((uVar24 & 0xaa000000) != 0) {
          if (((int)uVar24 < 0) &&
             (uVar29 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar25 - 3) * 6),
             uVar29 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x20);
            puVar2 = (undefined8 *)(lVar20 + uVar29 * 0x18);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + uVar29 * 0x18) = 0;
          }
          if (((uVar24 >> 0x1d & 1) != 0) &&
             (uVar29 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar25 - 2) * 6),
             uVar29 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x20);
            puVar2 = (undefined8 *)(lVar20 + uVar29 * 0x18);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + uVar29 * 0x18) = 0;
          }
          if (((uVar24 >> 0x1b & 1) != 0) &&
             (uVar29 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar25 - 1) * 6),
             uVar29 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x20);
            puVar2 = (undefined8 *)(lVar20 + uVar29 * 0x18);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + uVar29 * 0x18) = 0;
          }
          if (((uVar24 >> 0x19 & 1) != 0) &&
             (uVar29 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar25 * 6),
             uVar29 != 0xffff)) {
            lVar20 = *(longlong *)(param_2 + 0x20);
            puVar2 = (undefined8 *)(lVar20 + uVar29 * 0x18);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar20 + 0x10 + uVar29 * 0x18) = 0;
          }
        }
        uVar25 = uVar25 + 4;
        uVar23 = uVar24 & 0xffffff;
        uVar24 = uVar24 << 8;
      }
      uVar33 = uVar33 + 1;
      uVar21 = uVar21 + 0x10;
    } while (uVar33 != uVar19);
    local_a58 = local_a50 + local_a58 * 4;
    uVar21 = 3;
    uVar33 = 0;
    do {
      uVar23 = *(uint *)(local_a50 + uVar33 * 4) & 0x55555555;
      uVar24 = uVar23;
      uVar25 = uVar21;
      while (uVar23 != 0) {
        if ((uVar24 & 0x55000000) != 0) {
          pfVar31 = local_80;
          if (uVar24 >> 0x1e != 0) {
            uVar29 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar25 - 3) * 6);
            pfVar31 = local_80 + 3;
            if (uVar29 != 0xffff) {
              fVar7 = local_80[1];
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = local_80[2];
              *(double *)(lVar20 + uVar29 * 0x18) = (double)*local_80;
              *(double *)(lVar20 + 8 + uVar29 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar29 * 0x18) = (double)fVar3;
            }
          }
          pfVar30 = pfVar31;
          if ((uVar24 >> 0x1c & 1) != 0) {
            uVar29 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar25 - 2) * 6);
            pfVar30 = pfVar31 + 3;
            if (uVar29 != 0xffff) {
              fVar7 = pfVar31[1];
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = pfVar31[2];
              *(double *)(lVar20 + uVar29 * 0x18) = (double)*pfVar31;
              *(double *)(lVar20 + 8 + uVar29 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar29 * 0x18) = (double)fVar3;
            }
          }
          pfVar31 = pfVar30;
          if ((uVar24 >> 0x1a & 1) != 0) {
            uVar29 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar25 - 1) * 6);
            pfVar31 = pfVar30 + 3;
            if (uVar29 != 0xffff) {
              fVar7 = pfVar30[1];
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = pfVar30[2];
              *(double *)(lVar20 + uVar29 * 0x18) = (double)*pfVar30;
              *(double *)(lVar20 + 8 + uVar29 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar29 * 0x18) = (double)fVar3;
            }
          }
          local_80 = pfVar31;
          if ((uVar24 >> 0x18 & 1) != 0) {
            uVar29 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar25 * 6);
            local_80 = pfVar31 + 3;
            if (uVar29 != 0xffff) {
              fVar7 = pfVar31[1];
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = pfVar31[2];
              *(double *)(lVar20 + uVar29 * 0x18) = (double)*pfVar31;
              *(double *)(lVar20 + 8 + uVar29 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar29 * 0x18) = (double)fVar3;
            }
          }
        }
        uVar25 = uVar25 + 4;
        uVar23 = uVar24 & 0xffffff;
        uVar24 = uVar24 << 8;
      }
      uVar33 = uVar33 + 1;
      uVar21 = uVar21 + 0x10;
    } while (uVar33 != uVar19);
    dVar5 = (double)(int)local_a3c;
    if (local_a5d == '\0') {
      lVar20 = 4;
      do {
        uVar18 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x10) + lVar20);
        if (uVar18 != 0xffff) {
          lVar22 = *(longlong *)(param_2 + 0x28);
          *(double *)(lVar22 + uVar18 * 0x18) = dVar5;
          *(double *)(lVar22 + 8 + uVar18 * 0x18) = dVar5;
          *(double *)(lVar22 + 0x10 + uVar18 * 0x18) = dVar5;
        }
        lVar20 = lVar20 + 6;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    else {
      uVar21 = 3;
      uVar26 = 0;
      do {
        uVar23 = 0xaaaaaaaa;
        if (uVar26 == uVar18) {
          uVar23 = uVar32;
        }
        uVar23 = uVar23 & 0xaaaaaaaaU - *(int *)(local_a58 + uVar26 * 4);
        uVar24 = uVar23;
        uVar25 = uVar21;
        while (uVar23 != 0) {
          if ((uVar24 & 0xaa000000) != 0) {
            if (((int)uVar24 < 0) &&
               (uVar33 = (ulonglong)
                         *(ushort *)
                          (*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar25 - 3) * 6),
               uVar33 != 0xffff)) {
              lVar20 = *(longlong *)(param_2 + 0x28);
              *(double *)(lVar20 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 8 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 0x10 + uVar33 * 0x18) = dVar5;
            }
            if (((uVar24 >> 0x1d & 1) != 0) &&
               (uVar33 = (ulonglong)
                         *(ushort *)
                          (*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar25 - 2) * 6),
               uVar33 != 0xffff)) {
              lVar20 = *(longlong *)(param_2 + 0x28);
              *(double *)(lVar20 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 8 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 0x10 + uVar33 * 0x18) = dVar5;
            }
            if (((uVar24 >> 0x1b & 1) != 0) &&
               (uVar33 = (ulonglong)
                         *(ushort *)
                          (*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar25 - 1) * 6),
               uVar33 != 0xffff)) {
              lVar20 = *(longlong *)(param_2 + 0x28);
              *(double *)(lVar20 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 8 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 0x10 + uVar33 * 0x18) = dVar5;
            }
            if (((uVar24 >> 0x19 & 1) != 0) &&
               (uVar33 = (ulonglong)
                         *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar25 * 6),
               uVar33 != 0xffff)) {
              lVar20 = *(longlong *)(param_2 + 0x28);
              *(double *)(lVar20 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 8 + uVar33 * 0x18) = dVar5;
              *(double *)(lVar20 + 0x10 + uVar33 * 0x18) = dVar5;
            }
          }
          uVar25 = uVar25 + 4;
          uVar23 = uVar24 & 0xffffff;
          uVar24 = uVar24 << 8;
        }
        uVar26 = uVar26 + 1;
        uVar21 = uVar21 + 0x10;
      } while (uVar26 != uVar19);
      uVar21 = 3;
      uVar26 = 0;
      do {
        uVar23 = *(uint *)(local_a58 + uVar26 * 4) & 0x55555555;
        uVar24 = uVar23;
        uVar32 = uVar21;
        while (uVar23 != 0) {
          if ((uVar24 & 0x55000000) != 0) {
            pfVar31 = local_78;
            if (uVar24 >> 0x1e != 0) {
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar32 - 3) * 6);
              pfVar31 = local_78 + 3;
              if (uVar18 != 0xffff) {
                fVar7 = local_78[1];
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = local_78[2];
                *(double *)(lVar20 + uVar18 * 0x18) = (double)*local_78;
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
            pfVar30 = pfVar31;
            if ((uVar24 >> 0x1c & 1) != 0) {
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar32 - 2) * 6);
              pfVar30 = pfVar31 + 3;
              if (uVar18 != 0xffff) {
                fVar7 = pfVar31[1];
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = pfVar31[2];
                *(double *)(lVar20 + uVar18 * 0x18) = (double)*pfVar31;
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
            pfVar31 = pfVar30;
            if ((uVar24 >> 0x1a & 1) != 0) {
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar32 - 1) * 6);
              pfVar31 = pfVar30 + 3;
              if (uVar18 != 0xffff) {
                fVar7 = pfVar30[1];
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = pfVar30[2];
                *(double *)(lVar20 + uVar18 * 0x18) = (double)*pfVar30;
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
            local_78 = pfVar31;
            if ((uVar24 >> 0x18 & 1) != 0) {
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar32 * 6);
              local_78 = pfVar31 + 3;
              if (uVar18 != 0xffff) {
                fVar7 = pfVar31[1];
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = pfVar31[2];
                *(double *)(lVar20 + uVar18 * 0x18) = (double)*pfVar31;
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
          }
          uVar32 = uVar32 + 4;
          uVar23 = uVar24 & 0xffffff;
          uVar24 = uVar24 << 8;
        }
        uVar26 = uVar26 + 1;
        uVar21 = uVar21 + 0x10;
      } while (uVar26 != uVar19);
    }
    uVar26 = 0;
    uVar21 = 3;
    do {
      uVar23 = *(uint *)(local_a48 + uVar26 * 4) & 0xaaaaaaaa;
      uVar24 = uVar23;
      uVar32 = uVar21;
      while (uVar23 != 0) {
        if ((uVar24 & 0xaa000000) != 0) {
          FUN_14495e59a(local_a28,param_1);
          if ((int)uVar24 < 0) {
            uVar23 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar32 - 3) * 6);
            if (uVar4 != 0xffff) {
              uVar18 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_a28 + uVar18 + 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar18 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)local_a28 + uVar18 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)local_a28 + uVar18);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
          if ((uVar24 >> 0x1d & 1) != 0) {
            uVar23 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar32 - 2) * 6);
            if (uVar4 != 0xffff) {
              uVar18 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_a28 + uVar18 + 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar18 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)local_a28 + uVar18 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)local_a28 + uVar18);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
          if ((uVar24 >> 0x1b & 1) != 0) {
            uVar23 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar32 - 1) * 6);
            if (uVar4 != 0xffff) {
              uVar18 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_a28 + uVar18 + 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar18 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)local_a28 + uVar18 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)local_a28 + uVar18);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
          if ((uVar24 >> 0x19 & 1) != 0) {
            uVar23 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar32 * 6);
            if (uVar4 != 0xffff) {
              uVar18 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_a28 + uVar18 + 4);
              fVar8 = *(float *)((longlong)local_a28 + uVar18 + 0xc);
              lVar20 = *(longlong *)(param_2 + 0x18);
              lVar22 = (ulonglong)uVar4 * 0x20;
              fVar3 = *(float *)((longlong)local_a28 + uVar18 + 8);
              *(double *)(lVar20 + lVar22) = (double)*(float *)((longlong)local_a28 + uVar18);
              *(double *)(lVar20 + 8 + lVar22) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + lVar22) = (double)fVar3;
              *(double *)(lVar20 + 0x18 + lVar22) = (double)fVar8;
            }
          }
        }
        uVar32 = uVar32 + 4;
        uVar23 = uVar24 & 0xffffff;
        uVar24 = uVar24 << 8;
      }
      uVar23 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar23;
      uVar21 = uVar21 + 0x10;
    } while (uVar23 <= local_a5c);
    uVar26 = 0;
    uVar21 = 3;
    do {
      uVar23 = *(uint *)(local_a50 + uVar26 * 4) & 0xaaaaaaaa;
      uVar24 = uVar23;
      uVar32 = uVar21;
      while (uVar23 != 0) {
        if ((uVar24 & 0xaa000000) != 0) {
          FUN_14495e09c(local_a28,param_1);
          if ((int)uVar24 < 0) {
            uVar23 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar18 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar32 - 3) * 6);
            if (uVar18 != 0xffff) {
              uVar19 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_818 + uVar19 + 4);
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = *(float *)((longlong)local_818 + uVar19 + 8);
              *(double *)(lVar20 + uVar18 * 0x18) = (double)*(float *)((longlong)local_818 + uVar19)
              ;
              *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
            }
          }
          if ((uVar24 >> 0x1d & 1) != 0) {
            uVar23 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar18 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar32 - 2) * 6);
            if (uVar18 != 0xffff) {
              uVar19 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_818 + uVar19 + 4);
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = *(float *)((longlong)local_818 + uVar19 + 8);
              *(double *)(lVar20 + uVar18 * 0x18) = (double)*(float *)((longlong)local_818 + uVar19)
              ;
              *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
            }
          }
          if ((uVar24 >> 0x1b & 1) != 0) {
            uVar23 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar18 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar32 - 1) * 6);
            if (uVar18 != 0xffff) {
              uVar19 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_818 + uVar19 + 4);
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = *(float *)((longlong)local_818 + uVar19 + 8);
              *(double *)(lVar20 + uVar18 * 0x18) = (double)*(float *)((longlong)local_818 + uVar19)
              ;
              *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
            }
          }
          if ((uVar24 >> 0x19 & 1) != 0) {
            uVar23 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar18 = (ulonglong)
                     *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar32 * 6);
            if (uVar18 != 0xffff) {
              uVar19 = (ulonglong)((uVar23 & 7) << 4);
              fVar7 = *(float *)((longlong)local_818 + uVar19 + 4);
              lVar20 = *(longlong *)(param_2 + 0x20);
              fVar3 = *(float *)((longlong)local_818 + uVar19 + 8);
              *(double *)(lVar20 + uVar18 * 0x18) = (double)*(float *)((longlong)local_818 + uVar19)
              ;
              *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
              *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
            }
          }
        }
        uVar32 = uVar32 + 4;
        uVar23 = uVar24 & 0xffffff;
        uVar24 = uVar24 << 8;
      }
      uVar23 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar23;
      uVar21 = uVar21 + 0x10;
    } while (uVar23 <= local_a5c);
    if (local_a5d != '\0') {
      uVar26 = 0;
      uVar21 = 3;
      do {
        uVar23 = *(uint *)(local_a58 + uVar26 * 4) & 0xaaaaaaaa;
        uVar24 = uVar23;
        uVar32 = uVar21;
        while (uVar23 != 0) {
          if ((uVar24 & 0xaa000000) != 0) {
            FUN_14495f238(local_a28,param_1);
            if ((int)uVar24 < 0) {
              uVar23 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar32 - 3) * 6);
              if (uVar18 != 0xffff) {
                uVar19 = (ulonglong)((uVar23 & 7) << 4);
                fVar7 = *(float *)((longlong)local_608 + uVar19 + 4);
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = *(float *)((longlong)local_608 + uVar19 + 8);
                *(double *)(lVar20 + uVar18 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar19);
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
            if ((uVar24 >> 0x1d & 1) != 0) {
              uVar23 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar32 - 2) * 6);
              if (uVar18 != 0xffff) {
                uVar19 = (ulonglong)((uVar23 & 7) << 4);
                fVar7 = *(float *)((longlong)local_608 + uVar19 + 4);
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = *(float *)((longlong)local_608 + uVar19 + 8);
                *(double *)(lVar20 + uVar18 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar19);
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
            if ((uVar24 >> 0x1b & 1) != 0) {
              uVar23 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar32 - 1) * 6);
              if (uVar18 != 0xffff) {
                uVar19 = (ulonglong)((uVar23 & 7) << 4);
                fVar7 = *(float *)((longlong)local_608 + uVar19 + 4);
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = *(float *)((longlong)local_608 + uVar19 + 8);
                *(double *)(lVar20 + uVar18 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar19);
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
            if ((uVar24 >> 0x19 & 1) != 0) {
              uVar23 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar18 = (ulonglong)
                       *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar32 * 6);
              if (uVar18 != 0xffff) {
                uVar19 = (ulonglong)((uVar23 & 7) << 4);
                fVar7 = *(float *)((longlong)local_608 + uVar19 + 4);
                lVar20 = *(longlong *)(param_2 + 0x28);
                fVar3 = *(float *)((longlong)local_608 + uVar19 + 8);
                *(double *)(lVar20 + uVar18 * 0x18) =
                     (double)*(float *)((longlong)local_608 + uVar19);
                *(double *)(lVar20 + 8 + uVar18 * 0x18) = (double)fVar7;
                *(double *)(lVar20 + 0x10 + uVar18 * 0x18) = (double)fVar3;
              }
            }
          }
          uVar32 = uVar32 + 4;
          uVar23 = uVar24 & 0xffffff;
          uVar24 = uVar24 << 8;
        }
        uVar23 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar23;
        uVar21 = uVar21 + 0x10;
      } while (uVar23 <= local_a5c);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14983eb56 FUN_14983eb56 body=516 status=ok
// SIG undefined FUN_14983eb56(void)

void FUN_14983eb56(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  lVar3 = param_4[1];
  lVar4 = (ulonglong)param_2 * 6;
  bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
  if (bVar2 == 0) {
    pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
  }
  else if (bVar2 != 0x1f) {
    uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)(uint)bVar2 * 8);
    auVar5._4_4_ = uVar1;
    auVar5._0_4_ = uVar1;
    auVar5._8_4_ = uVar1;
    auVar5._12_4_ = uVar1;
    if (*(char *)(param_1 + 0x20) != '\0') {
      auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
      pmovzxwd(auVar5,auVar5);
      auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
      pmovzxwd(auVar5,auVar5);
    }
  }
  return;
}



// FUNCTION 14983ed5f FUN_14983ed5f body=187 status=ok
// SIG undefined FUN_14983ed5f(void)

void FUN_14983ed5f(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  
  bVar2 = *(byte *)(param_2 + 0x1c);
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
  *(byte *)((longlong)param_1 + 0x1c) = bVar2 >> 4;
  *(byte *)((longlong)param_1 + 0x1d) = bVar2 >> 3 & 1;
  *(byte *)((longlong)param_1 + 0x1e) = bVar2 >> 2 & 1;
  *(byte *)((longlong)param_1 + 0x1f) = *(byte *)(param_2 + 0x1c) & 1;
  *(bool *)(param_1 + 4) = 1 < *(uint *)(param_2 + 0x20);
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(byte *)(param_2 + 0x1f) & 0x40) >> 6;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  bVar2 = iVar1 != 0 & bVar2;
  fVar3 = 0.0;
  if (1 < iVar1 + (uint)bVar2) {
    fVar3 = (float)((iVar1 + (uint)bVar2) - 1) / *(float *)(param_2 + 0x18);
  }
  *(float *)(param_1 + 3) = fVar3;
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x1e) & 1;
  }
  *(byte *)((longlong)param_1 + 0x21) = bVar2;
  return;
}



// FUNCTION 14983ee1a FUN_14983ee1a body=906 status=ok
// SIG undefined FUN_14983ee1a(void)

void FUN_14983ee1a(longlong *param_1,float param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    fVar18 = SUB164(*(undefined1 (*) [16])(param_1 + 3),0);
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (fVar18 <= param_2) {
      param_2 = fVar18;
    }
    if (((*(float *)((longlong)param_1 + 0x34) != param_2) ||
        (NAN(*(float *)((longlong)param_1 + 0x34)) || NAN(param_2))) ||
       (*(byte *)((longlong)param_1 + 0x32) != param_3)) {
      *(float *)((longlong)param_1 + 0x34) = param_2;
      uVar10 = *(uint *)(lVar3 + 0x14) - 1;
      param_2 = param_2 * *(float *)(lVar3 + 0x18);
      uVar16 = (ulonglong)param_2;
      uVar15 = (uint)uVar16 + 1;
      if (SUB161(*(undefined1 (*) [16])(param_1 + 3),9) == '\0') {
        if (uVar10 < uVar15) {
          uVar15 = uVar10;
        }
      }
      else if (uVar10 < (uint)uVar16) {
        param_2 = 0.0;
        uVar16 = 0;
        uVar15 = 0;
      }
      else if (*(uint *)(lVar3 + 0x14) <= uVar15) {
        uVar15 = 0;
      }
      uVar10 = (uint)uVar16;
      fVar18 = (float)(uVar16 & 0xffffffff);
      lVar1 = lVar3 + 0x20;
      fVar20 = 0.0;
      if (param_3 != 1) {
        fVar20 = param_2 - fVar18;
      }
      *(float *)(param_1 + 0xf) = fVar20;
      *(char *)((longlong)param_1 + 0x32) = (char)param_3;
      piVar13 = (int *)((ulonglong)*(uint *)(lVar3 + 0x44) + lVar1);
      if (*(uint *)(lVar3 + 0x20) == 1) {
        piVar14 = piVar13;
        if ((*(uint *)(lVar3 + 0x1c) >> 10 & 1) != 0) {
          bVar6 = 0x1f - (char)uVar16;
          uVar10 = (uint)piVar13[4] >> (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          uVar11 = uVar10 << bVar6;
          uVar5 = 0x20;
          iVar7 = 0x20;
          if ((uVar10 << bVar6 != 0) && (iVar7 = 0, uVar11 != 0)) {
            for (; (uVar11 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
            }
          }
          uVar10 = 0x1f - iVar7;
          uVar15 = piVar13[4] & 0xffffffffU >> ((byte)uVar15 & 0x1f);
          if (uVar15 != 0) {
            uVar5 = 0x1f;
            if (uVar15 != 0) {
              for (; uVar15 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            uVar5 = uVar5 ^ 0x1f;
          }
          fVar19 = 0.0;
          if ((uVar5 - uVar10 != 0) && (fVar19 = (fVar20 + fVar18) - (float)uVar10, uVar10 <= uVar5)
             ) {
            fVar19 = fVar19 / (float)(uVar5 - uVar10);
          }
          *(float *)(param_1 + 0xf) = fVar19;
          uVar10 = POPCOUNT(~(0xffffffffU >> ((byte)uVar10 & 0x1f)) & piVar13[4]);
          uVar15 = POPCOUNT(~(0xffffffffU >> ((byte)uVar5 & 0x1f)) & piVar13[4]);
        }
      }
      else {
        lVar9 = lVar3 + 0x54;
        uVar17 = (ulonglong)*(uint *)(lVar3 + 0x14) / (ulonglong)*(uint *)(lVar3 + 0x20);
        uVar16 = (ulonglong)((int)((uVar16 & 0xffffffff) / uVar17) - 1);
        if (uVar10 < (uint)uVar17) {
          uVar16 = 0;
        }
        if ((uint)uVar16 < 0xfffffffc) {
          uVar5 = -(uint)uVar16;
          lVar12 = 0;
          do {
            uVar11 = *(uint *)(lVar9 + uVar16 * 4 + lVar12 * 4);
            if (uVar10 < uVar11) {
              uVar16 = (ulonglong)~uVar5;
              uVar4 = -uVar5;
              if (uVar15 < uVar11) {
                uVar4 = ~uVar5;
              }
              if (uVar15 == 0) {
                uVar4 = 0;
              }
              uVar17 = (ulonglong)uVar4;
              goto LAB_14983f095;
            }
            uVar5 = uVar5 - 1;
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 != 4);
        }
        uVar17 = 0;
        uVar16 = 0;
LAB_14983f095:
        iVar7 = *(int *)(lVar9 + uVar16 * 4);
        uVar10 = uVar10 - iVar7;
        iVar2 = *(int *)(lVar9 + uVar17 * 4);
        uVar15 = uVar15 - iVar2;
        if ((*(uint *)(lVar3 + 0x1c) >> 10 & 1) == 0) {
          piVar14 = piVar13 + uVar17 * 4;
          piVar13 = piVar13 + uVar16 * 4;
        }
        else {
          bVar6 = 0x1f - (char)uVar10;
          uVar10 = (uint)piVar13[uVar16 * 5 + 4] >> (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          uVar11 = uVar10 << bVar6;
          uVar5 = 0x20;
          iVar8 = 0x20;
          if ((uVar10 << bVar6 != 0) && (iVar8 = 0, uVar11 != 0)) {
            for (; (uVar11 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
            }
          }
          uVar10 = piVar13[uVar17 * 5 + 4] & 0xffffffffU >> ((byte)uVar15 & 0x1f);
          if (uVar10 != 0) {
            uVar5 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            uVar5 = uVar5 ^ 0x1f;
          }
          piVar14 = piVar13 + uVar17 * 5;
          uVar10 = iVar7 + (0x1f - iVar8);
          uVar15 = iVar2 + uVar5;
          fVar19 = 0.0;
          uVar11 = uVar15 - uVar10;
          if ((uVar11 != 0) && (fVar19 = (fVar20 + fVar18) - (float)uVar10, uVar10 <= uVar15)) {
            fVar19 = fVar19 / (float)uVar11;
          }
          *(float *)(param_1 + 0xf) = fVar19;
          uVar10 = POPCOUNT(~(0xffffffffU >> ((byte)(0x1f - iVar8) & 0x1f)) &
                            (piVar13 + uVar16 * 5)[4]);
          uVar15 = POPCOUNT(~(0xffffffffU >> ((byte)uVar5 & 0x1f)) & piVar14[4]);
          piVar13 = piVar13 + uVar16 * 5;
        }
      }
      *(bool *)((longlong)param_1 + 0x33) = piVar13 == piVar14;
      lVar9 = (ulonglong)(uint)piVar13[3] + lVar1;
      uVar16 = (ulonglong)*(uint *)(lVar3 + 0x24) + lVar9 + 1 & 0xfffffffffffffffe;
      uVar17 = (ulonglong)(*(uint *)(lVar3 + 0x24) * 6);
      if (*(uint *)(lVar3 + 0x20) < 2) {
        uVar17 = 0;
      }
      uVar17 = uVar17 + uVar16 + 3 & 0xfffffffffffffffc;
      param_1[8] = lVar9;
      param_1[10] = uVar16;
      param_1[0xc] = uVar17;
      if (piVar13 != piVar14) {
        lVar9 = (ulonglong)(uint)piVar14[3] + lVar1;
        uVar16 = (ulonglong)*(uint *)(lVar3 + 0x24) + lVar9 + 1 & 0xfffffffffffffffe;
        uVar17 = 0;
        if (1 < *(uint *)(lVar3 + 0x20)) {
          uVar17 = (ulonglong)(*(uint *)(lVar3 + 0x24) * 6);
        }
        uVar17 = uVar16 + uVar17 + 3 & 0xfffffffffffffffc;
      }
      param_1[9] = lVar9;
      param_1[0xb] = uVar16;
      param_1[0xd] = uVar17;
      *(uint *)(param_1 + 0xe) = uVar10 * *piVar13;
      *(uint *)((longlong)param_1 + 0x74) = uVar15 * *piVar14;
      *(int *)(param_1 + 7) = (int)piVar13 - (int)lVar3;
      *(int *)((longlong)param_1 + 0x3c) = (int)piVar14 - (int)lVar3;
    }
  }
  return;
}



// FUNCTION 14983f1a4 FUN_14983f1a4 body=5671 status=ok
// SIG undefined FUN_14983f1a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14983f1a4(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  int iVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  float *_Src;
  ulonglong uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulonglong uVar38;
  float *pfVar39;
  undefined1 (*pauVar40) [16];
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  uint uVar46;
  uint uVar47;
  ulonglong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auStack_aa8 [47];
  char local_a79;
  uint local_a78;
  uint local_a74;
  longlong *local_a70;
  ulonglong local_a68;
  longlong local_a60;
  longlong local_a58;
  ulonglong local_a50;
  undefined8 local_a48 [64];
  undefined8 local_848;
  undefined1 local_838 [512];
  undefined8 local_638;
  undefined1 local_628 [512];
  undefined8 local_428;
  undefined8 auStack_2b8 [64];
  undefined8 local_b8;
  uint local_b0;
  float *local_a8;
  undefined1 (*local_a0) [16];
  undefined1 (*local_98) [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_aa8;
  lVar44 = *param_1;
  uVar33 = *(uint *)(lVar44 + 0x10);
  if (((ulonglong)uVar33 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar46 = uVar33 + 0xf >> 4;
    uVar43 = uVar33 + 0xf & 0xfffffff0;
    local_a78 = uVar46 - 1;
    local_a74 = 0xaaaaaaaa;
    if (uVar33 != uVar43) {
      local_a74 = ~(0xffffffffU >> (((char)uVar33 - (char)uVar43) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a79 = *(char *)((longlong)param_1 + 0x1f);
    local_a60 = (ulonglong)*(uint *)(lVar44 + 0x48) + lVar44 + 0x20;
    uVar48 = 0;
    local_b8 = 0;
    local_b0 = *(uint *)(lVar44 + 0x34);
    _Src = (float *)((ulonglong)*(uint *)(lVar44 + 0x4c) + lVar44 + 0x20);
    local_a0 = (undefined1 (*) [16])
               ((longlong)_Src +
               (ulonglong)
               (((uint)(*(char *)((longlong)param_1 + 0x1c) == '\0') * 4 + 0xc) * local_b0));
    local_98 = (undefined1 (*) [16])(*local_a0 + (uint)(*(int *)(lVar44 + 0x38) * 0xc));
    local_848 = 0;
    local_638 = 0;
    local_428 = 0;
    local_a50 = (ulonglong)uVar33;
    local_a8 = _Src;
    FUN_1498407cc(local_a48,param_1);
    uVar42 = (ulonglong)local_a78;
    uVar34 = (ulonglong)(uVar46 + (uVar46 == 0));
    uVar33 = 3;
    do {
      uVar43 = 0xaaaaaaaa;
      if (uVar48 == uVar42) {
        uVar43 = local_a74;
      }
      uVar43 = uVar43 & 0xaaaaaaaaU - *(int *)(local_a60 + uVar48 * 4);
      uVar47 = uVar43;
      uVar37 = uVar33;
      auVar64 = _DAT_1499314a0;
      while (_DAT_1499314a0 = auVar64, uVar43 != 0) {
        if ((uVar47 & 0xaa000000) != 0) {
          if ((int)uVar47 < 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar37 - 3) * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar37 - 3) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar44);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar44);
              dVar18 = *pdVar3;
              dVar20 = pdVar3[1];
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar3 = (double *)(lVar44 + uVar38);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              auVar64._0_8_ = (double)(float)dVar18;
              auVar64._8_8_ = (double)(float)dVar20;
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar38) = auVar64;
            }
          }
          if ((uVar47 >> 0x1d & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar37 - 2) * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar37 - 2) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar44);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar44);
              dVar18 = *pdVar3;
              dVar20 = pdVar3[1];
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar3 = (double *)(lVar44 + uVar38);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              auVar94._0_8_ = (double)(float)dVar18;
              auVar94._8_8_ = (double)(float)dVar20;
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar38) = auVar94;
            }
          }
          if ((uVar47 >> 0x1b & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar37 - 1) * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar37 - 1) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar44);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar44);
              dVar18 = *pdVar3;
              dVar20 = pdVar3[1];
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar3 = (double *)(lVar44 + uVar38);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              auVar49._0_8_ = (double)(float)dVar18;
              auVar49._8_8_ = (double)(float)dVar20;
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar38) = auVar49;
            }
          }
          if ((uVar47 >> 0x19 & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)uVar37 * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar37 * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar44);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar44);
              dVar18 = *pdVar3;
              dVar20 = pdVar3[1];
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar3 = (double *)(lVar44 + uVar38);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              auVar50._0_8_ = (double)(float)dVar18;
              auVar50._8_8_ = (double)(float)dVar20;
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar38) = auVar50;
            }
          }
        }
        uVar37 = uVar37 + 4;
        uVar43 = uVar47 & 0xffffff;
        uVar47 = uVar47 << 8;
        auVar64 = _DAT_1499314a0;
      }
      uVar48 = uVar48 + 1;
      uVar33 = uVar33 + 0x10;
    } while (uVar48 != uVar34);
    uVar33 = 0;
    uVar43 = 3;
    uVar48 = 0;
    local_a70 = param_1;
    local_a68 = (ulonglong)uVar46;
    do {
      uVar47 = *(uint *)(local_a60 + uVar48 * 4) & 0x55555555;
      uVar37 = uVar43;
      uVar46 = uVar47;
      if ((local_b0 != 0) && ((uint)local_b8 - uVar33 < 0x10)) {
        uVar33 = 0x10;
        if (local_b0 < 0x10) {
          uVar33 = local_b0;
        }
        uVar35 = (uint)local_b8 & 0x1f;
        local_b0 = local_b0 - uVar33;
        local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 + uVar33);
        pauVar36 = (undefined1 (*) [16])((longlong)auStack_2b8 + (ulonglong)(uVar35 << 4));
        pfVar39 = _Src;
        if (*(char *)((longlong)local_a70 + 0x1c) == '\0') {
          memcpy(pauVar36,_Src,(ulonglong)(uVar33 - 1) * 0x10 + 0x10);
          _Src = _Src + (ulonglong)(uVar33 - 1) * 4 + 4;
        }
        else {
          do {
            uVar38 = 4;
            if (uVar33 < 4) {
              uVar38 = (ulonglong)uVar33;
            }
            iVar19 = (int)uVar38;
            _Src = (float *)((ulonglong)(uint)(iVar19 * 0xc) + (longlong)pfVar39);
            fVar21 = *pfVar39;
            fVar22 = pfVar39[1];
            fVar23 = pfVar39[2];
            fVar24 = pfVar39[3];
            pfVar2 = (float *)((longlong)pfVar39 + (ulonglong)(uint)(iVar19 * 4));
            fVar25 = *pfVar2;
            fVar26 = pfVar2[1];
            fVar27 = pfVar2[2];
            fVar28 = pfVar2[3];
            pfVar39 = pfVar39 + uVar38 * 2;
            fVar29 = *pfVar39;
            fVar30 = pfVar39[1];
            fVar31 = pfVar39[2];
            fVar32 = pfVar39[3];
            auVar93._0_8_ =
                 CONCAT44(((auVar64._4_4_ - fVar22 * fVar22) - fVar26 * fVar26) - fVar30 * fVar30,
                          ((auVar64._0_4_ - fVar21 * fVar21) - fVar25 * fVar25) - fVar29 * fVar29) &
                 0x7fffffff7fffffff;
            auVar93._8_4_ =
                 ABS(((auVar64._8_4_ - fVar23 * fVar23) - fVar27 * fVar27) - fVar31 * fVar31);
            auVar93._12_4_ =
                 ABS(((auVar64._12_4_ - fVar24 * fVar24) - fVar28 * fVar28) - fVar32 * fVar32);
            auVar94 = sqrtps(auVar93,auVar93);
            fVar92 = auVar94._0_4_;
            fVar95 = auVar94._4_4_;
            fVar96 = auVar94._8_4_;
            fVar97 = auVar94._12_4_;
            auVar91._0_4_ = fVar92 * fVar92 + fVar25 * fVar25 + fVar21 * fVar21 + fVar29 * fVar29;
            auVar91._4_4_ = fVar95 * fVar95 + fVar26 * fVar26 + fVar22 * fVar22 + fVar30 * fVar30;
            auVar91._8_4_ = fVar96 * fVar96 + fVar27 * fVar27 + fVar23 * fVar23 + fVar31 * fVar31;
            auVar91._12_4_ = fVar97 * fVar97 + fVar28 * fVar28 + fVar24 * fVar24 + fVar32 * fVar32;
            auVar94 = sqrtps(auVar91,auVar91);
            auVar94 = divps(auVar64,auVar94);
            fVar98 = auVar94._0_4_;
            fVar99 = auVar94._4_4_;
            fVar100 = auVar94._8_4_;
            fVar101 = auVar94._12_4_;
            auVar65._4_4_ = fVar25 * fVar98;
            auVar65._0_4_ = fVar21 * fVar98;
            auVar65._8_4_ = fVar29 * fVar98;
            auVar65._12_4_ = fVar98 * fVar92;
            auVar51._4_4_ = fVar28 * fVar101;
            auVar51._0_4_ = fVar24 * fVar101;
            auVar51._8_4_ = fVar32 * fVar101;
            auVar51._12_4_ = fVar101 * fVar97;
            *pauVar36 = auVar65;
            *(float *)pauVar36[1] = fVar22 * fVar99;
            *(float *)(pauVar36[1] + 4) = fVar26 * fVar99;
            *(float *)(pauVar36[1] + 8) = fVar30 * fVar99;
            *(float *)(pauVar36[1] + 0xc) = fVar99 * fVar95;
            *(float *)pauVar36[2] = fVar23 * fVar100;
            *(float *)(pauVar36[2] + 4) = fVar27 * fVar100;
            *(float *)(pauVar36[2] + 8) = fVar31 * fVar100;
            *(float *)(pauVar36[2] + 0xc) = fVar100 * fVar96;
            pauVar36[3] = auVar51;
            pauVar36 = pauVar36 + 4;
            uVar33 = uVar33 - iVar19;
            pfVar39 = _Src;
          } while (uVar33 != 0);
        }
        local_a8 = _Src;
        uVar33 = local_b8._4_4_;
      }
      while (uVar46 != 0) {
        if ((uVar47 & 0x55000000) != 0) {
          uVar46 = uVar33;
          if (uVar47 >> 0x1e != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar37 - 3) * 6);
            uVar46 = uVar33 + 1;
            if (uVar8 != 0xffff) {
              uVar38 = (ulonglong)((uVar33 & 0x1f) << 4);
              lVar44 = param_2[3];
              uVar41 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)auStack_2b8 + uVar38);
              uVar6 = *(undefined8 *)((longlong)auStack_2b8 + uVar38 + 8);
              pdVar1 = (double *)(lVar44 + uVar41);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar52._0_8_ = (double)(float)uVar6;
              auVar52._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar41) = auVar52;
            }
          }
          uVar33 = uVar46;
          if ((uVar47 >> 0x1c & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar37 - 2) * 6);
            uVar33 = uVar46 + 1;
            if (uVar8 != 0xffff) {
              uVar38 = (ulonglong)((uVar46 & 0x1f) << 4);
              lVar44 = param_2[3];
              uVar41 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)auStack_2b8 + uVar38);
              uVar6 = *(undefined8 *)((longlong)auStack_2b8 + uVar38 + 8);
              pdVar1 = (double *)(lVar44 + uVar41);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar53._0_8_ = (double)(float)uVar6;
              auVar53._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar41) = auVar53;
            }
          }
          uVar46 = uVar33;
          if ((uVar47 >> 0x1a & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar37 - 1) * 6);
            uVar46 = uVar33 + 1;
            if (uVar8 != 0xffff) {
              uVar38 = (ulonglong)((uVar33 & 0x1f) << 4);
              lVar44 = param_2[3];
              uVar41 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)auStack_2b8 + uVar38);
              uVar6 = *(undefined8 *)((longlong)auStack_2b8 + uVar38 + 8);
              pdVar1 = (double *)(lVar44 + uVar41);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar54._0_8_ = (double)(float)uVar6;
              auVar54._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar41) = auVar54;
            }
          }
          uVar33 = uVar46;
          if ((uVar47 >> 0x18 & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)uVar37 * 6);
            uVar33 = uVar46 + 1;
            if (uVar8 != 0xffff) {
              uVar38 = (ulonglong)((uVar46 & 0x1f) << 4);
              lVar44 = param_2[3];
              uVar41 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)auStack_2b8 + uVar38);
              uVar6 = *(undefined8 *)((longlong)auStack_2b8 + uVar38 + 8);
              pdVar1 = (double *)(lVar44 + uVar41);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar55._0_8_ = (double)(float)uVar6;
              auVar55._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x10 + uVar41) = auVar55;
            }
          }
        }
        uVar46 = uVar47 & 0xffffff;
        uVar47 = uVar47 << 8;
        uVar37 = uVar37 + 4;
      }
      local_b8 = CONCAT44(uVar33,(uint)local_b8);
      uVar46 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar46;
      uVar43 = uVar43 + 0x10;
    } while (uVar46 <= local_a78);
    local_a58 = local_a60 + local_a68 * 4;
    uVar33 = 3;
    uVar48 = 0;
    auVar64 = ZEXT816(0);
    do {
      uVar43 = 0xaaaaaaaa;
      if (uVar48 == uVar42) {
        uVar43 = local_a74;
      }
      uVar43 = uVar43 & 0xaaaaaaaaU - *(int *)(local_a58 + uVar48 * 4);
      uVar46 = uVar43;
      uVar47 = uVar33;
      while (uVar43 != 0) {
        if ((uVar46 & 0xaa000000) != 0) {
          if ((int)uVar46 < 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 3) * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar47 - 3) * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar44);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar44);
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              dVar18 = (double)(float)pdVar1[1];
              auVar17._8_4_ = SUB84(dVar18,0);
              auVar17._0_8_ = (double)(float)*pdVar1;
              auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar17;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
              auVar69._0_8_ = (double)auVar94._0_4_;
              auVar69._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar69;
            }
          }
          if ((uVar46 >> 0x1d & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 2) * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar47 - 2) * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar44);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar44);
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              dVar18 = (double)(float)pdVar1[1];
              auVar9._8_4_ = SUB84(dVar18,0);
              auVar9._0_8_ = (double)(float)*pdVar1;
              auVar9._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar9;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
              auVar66._0_8_ = (double)auVar94._0_4_;
              auVar66._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar66;
            }
          }
          if ((uVar46 >> 0x1b & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 1) * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar47 - 1) * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar44);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar44);
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              dVar18 = (double)(float)pdVar1[1];
              auVar10._8_4_ = SUB84(dVar18,0);
              auVar10._0_8_ = (double)(float)*pdVar1;
              auVar10._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar10;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
              auVar67._0_8_ = (double)auVar94._0_4_;
              auVar67._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar67;
            }
          }
          if ((uVar46 >> 0x19 & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar47 * 6);
            if (uVar8 != 0xffff) {
              lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar47 * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar44);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar44);
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              dVar18 = (double)(float)pdVar1[1];
              auVar11._8_4_ = SUB84(dVar18,0);
              auVar11._0_8_ = (double)(float)*pdVar1;
              auVar11._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar11;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
              auVar68._0_8_ = (double)auVar94._0_4_;
              auVar68._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar68;
            }
          }
        }
        uVar47 = uVar47 + 4;
        uVar43 = uVar46 & 0xffffff;
        uVar46 = uVar46 << 8;
      }
      uVar48 = uVar48 + 1;
      uVar33 = uVar33 + 0x10;
    } while (uVar48 != uVar34);
    local_a68 = local_a58 + local_a68 * 4;
    uVar33 = 3;
    uVar48 = 0;
    do {
      uVar43 = *(uint *)(local_a58 + uVar48 * 4) & 0x55555555;
      uVar46 = uVar43;
      uVar47 = uVar33;
      while (uVar43 != 0) {
        if ((uVar46 & 0x55000000) != 0) {
          pauVar36 = local_a0;
          if (uVar46 >> 0x1e != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 3) * 6);
            pauVar36 = (undefined1 (*) [16])(*local_a0 + 0xc);
            if (uVar8 != 0xffff) {
              auVar64 = *local_a0;
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              auVar70._0_8_ = (double)auVar64._0_4_;
              auVar70._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar70;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              auVar56._0_8_ = (double)auVar64._0_4_;
              auVar56._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar56;
            }
          }
          pauVar40 = pauVar36;
          if ((uVar46 >> 0x1c & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 2) * 6);
            pauVar40 = (undefined1 (*) [16])(*pauVar36 + 0xc);
            if (uVar8 != 0xffff) {
              auVar64 = *pauVar36;
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              auVar71._0_8_ = (double)auVar64._0_4_;
              auVar71._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar71;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              auVar57._0_8_ = (double)auVar64._0_4_;
              auVar57._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar57;
            }
          }
          pauVar36 = pauVar40;
          if ((uVar46 >> 0x1a & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 1) * 6);
            pauVar36 = (undefined1 (*) [16])(*pauVar40 + 0xc);
            if (uVar8 != 0xffff) {
              auVar64 = *pauVar40;
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              auVar72._0_8_ = (double)auVar64._0_4_;
              auVar72._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar72;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              auVar58._0_8_ = (double)auVar64._0_4_;
              auVar58._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar58;
            }
          }
          local_a0 = pauVar36;
          if ((uVar46 >> 0x18 & 1) != 0) {
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar47 * 6);
            local_a0 = (undefined1 (*) [16])(*pauVar36 + 0xc);
            if (uVar8 != 0xffff) {
              auVar64 = *pauVar36;
              lVar44 = param_2[3];
              uVar38 = (ulonglong)((uint)uVar8 * 0x60);
              auVar73._0_8_ = (double)auVar64._0_4_;
              auVar73._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar38) = auVar73;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              auVar59._0_8_ = (double)auVar64._0_4_;
              auVar59._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x30 + uVar38) = auVar59;
            }
          }
        }
        uVar47 = uVar47 + 4;
        uVar43 = uVar46 & 0xffffff;
        uVar46 = uVar46 << 8;
      }
      uVar48 = uVar48 + 1;
      uVar33 = uVar33 + 0x10;
    } while (uVar48 != uVar34);
    if (local_a79 == '\0') {
      lVar44 = 4;
      uVar42 = 0;
      do {
        if (*(ushort *)(param_2[2] + lVar44) != 0xffff) {
          lVar45 = (longlong)*(int *)(param_2[1] + uVar42 * 4) * 0x60;
          pdVar1 = (double *)(*param_2 + 0x40 + lVar45);
          auVar64 = blendps(ZEXT416((uint)(float)*(double *)(*param_2 + 0x50 + lVar45)),ZEXT816(0),
                            0xe);
          lVar45 = param_2[3];
          uVar34 = (ulonglong)((uint)*(ushort *)(param_2[2] + lVar44) * 0x60);
          dVar4 = (double)(float)pdVar1[1];
          auVar16._8_4_ = SUB84(dVar4,0);
          auVar16._0_8_ = (double)(float)*pdVar1;
          auVar16._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          *(undefined1 (*) [16])(lVar45 + 0x40 + uVar34) = auVar16;
          auVar90._0_8_ = (double)auVar64._0_4_;
          auVar90._8_8_ = (double)auVar64._4_4_;
          *(undefined1 (*) [16])(lVar45 + 0x50 + uVar34) = auVar90;
        }
        uVar42 = uVar42 + 1;
        lVar44 = lVar44 + 6;
      } while (local_a50 != uVar42);
    }
    else {
      uVar33 = 3;
      uVar48 = 0;
      auVar64 = ZEXT816(0);
      do {
        uVar43 = 0xaaaaaaaa;
        if (uVar48 == uVar42) {
          uVar43 = local_a74;
        }
        uVar43 = uVar43 & 0xaaaaaaaaU - *(int *)(local_a68 + uVar48 * 4);
        uVar46 = uVar43;
        uVar47 = uVar33;
        while (uVar43 != 0) {
          if ((uVar46 & 0xaa000000) != 0) {
            if ((int)uVar46 < 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 3) * 6);
              if (uVar8 != 0xffff) {
                lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar47 - 3) * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar44);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar44);
                lVar44 = param_2[3];
                uVar38 = (ulonglong)((uint)uVar8 * 0x60);
                dVar18 = (double)(float)pdVar1[1];
                auVar15._8_4_ = SUB84(dVar18,0);
                auVar15._0_8_ = (double)(float)*pdVar1;
                auVar15._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar38) = auVar15;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
                auVar77._0_8_ = (double)auVar94._0_4_;
                auVar77._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar38) = auVar77;
              }
            }
            if ((uVar46 >> 0x1d & 1) != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 2) * 6);
              if (uVar8 != 0xffff) {
                lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar47 - 2) * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar44);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar44);
                lVar44 = param_2[3];
                uVar38 = (ulonglong)((uint)uVar8 * 0x60);
                dVar18 = (double)(float)pdVar1[1];
                auVar12._8_4_ = SUB84(dVar18,0);
                auVar12._0_8_ = (double)(float)*pdVar1;
                auVar12._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar38) = auVar12;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
                auVar74._0_8_ = (double)auVar94._0_4_;
                auVar74._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar38) = auVar74;
              }
            }
            if ((uVar46 >> 0x1b & 1) != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 1) * 6);
              if (uVar8 != 0xffff) {
                lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar47 - 1) * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar44);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar44);
                lVar44 = param_2[3];
                uVar38 = (ulonglong)((uint)uVar8 * 0x60);
                dVar18 = (double)(float)pdVar1[1];
                auVar13._8_4_ = SUB84(dVar18,0);
                auVar13._0_8_ = (double)(float)*pdVar1;
                auVar13._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar38) = auVar13;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
                auVar75._0_8_ = (double)auVar94._0_4_;
                auVar75._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar38) = auVar75;
              }
            }
            if ((uVar46 >> 0x19 & 1) != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar47 * 6);
              if (uVar8 != 0xffff) {
                lVar44 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar47 * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar44);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar44);
                lVar44 = param_2[3];
                uVar38 = (ulonglong)((uint)uVar8 * 0x60);
                dVar18 = (double)(float)pdVar1[1];
                auVar14._8_4_ = SUB84(dVar18,0);
                auVar14._0_8_ = (double)(float)*pdVar1;
                auVar14._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar38) = auVar14;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar64,0xe);
                auVar76._0_8_ = (double)auVar94._0_4_;
                auVar76._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar38) = auVar76;
              }
            }
          }
          uVar47 = uVar47 + 4;
          uVar43 = uVar46 & 0xffffff;
          uVar46 = uVar46 << 8;
        }
        uVar48 = uVar48 + 1;
        uVar33 = uVar33 + 0x10;
      } while (uVar48 != uVar34);
      uVar33 = 3;
      uVar42 = 0;
      do {
        uVar43 = *(uint *)(local_a68 + uVar42 * 4) & 0x55555555;
        uVar46 = uVar43;
        uVar47 = uVar33;
        while (uVar43 != 0) {
          if ((uVar46 & 0x55000000) != 0) {
            pauVar36 = local_98;
            if (uVar46 >> 0x1e != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 3) * 6);
              pauVar36 = (undefined1 (*) [16])(*local_98 + 0xc);
              if (uVar8 != 0xffff) {
                auVar64 = *local_98;
                lVar44 = param_2[3];
                uVar48 = (ulonglong)((uint)uVar8 * 0x60);
                auVar78._0_8_ = (double)auVar64._0_4_;
                auVar78._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar48) = auVar78;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                auVar60._0_8_ = (double)auVar64._0_4_;
                auVar60._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar48) = auVar60;
              }
            }
            pauVar40 = pauVar36;
            if ((uVar46 >> 0x1c & 1) != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 2) * 6);
              pauVar40 = (undefined1 (*) [16])(*pauVar36 + 0xc);
              if (uVar8 != 0xffff) {
                auVar64 = *pauVar36;
                lVar44 = param_2[3];
                uVar48 = (ulonglong)((uint)uVar8 * 0x60);
                auVar79._0_8_ = (double)auVar64._0_4_;
                auVar79._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar48) = auVar79;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                auVar61._0_8_ = (double)auVar64._0_4_;
                auVar61._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar48) = auVar61;
              }
            }
            pauVar36 = pauVar40;
            if ((uVar46 >> 0x1a & 1) != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 1) * 6);
              pauVar36 = (undefined1 (*) [16])(*pauVar40 + 0xc);
              if (uVar8 != 0xffff) {
                auVar64 = *pauVar40;
                lVar44 = param_2[3];
                uVar48 = (ulonglong)((uint)uVar8 * 0x60);
                auVar80._0_8_ = (double)auVar64._0_4_;
                auVar80._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar48) = auVar80;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                auVar62._0_8_ = (double)auVar64._0_4_;
                auVar62._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar48) = auVar62;
              }
            }
            local_98 = pauVar36;
            if ((uVar46 >> 0x18 & 1) != 0) {
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar47 * 6);
              local_98 = (undefined1 (*) [16])(*pauVar36 + 0xc);
              if (uVar8 != 0xffff) {
                auVar64 = *pauVar36;
                lVar44 = param_2[3];
                uVar48 = (ulonglong)((uint)uVar8 * 0x60);
                auVar81._0_8_ = (double)auVar64._0_4_;
                auVar81._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar48) = auVar81;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                auVar63._0_8_ = (double)auVar64._0_4_;
                auVar63._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x50 + uVar48) = auVar63;
              }
            }
          }
          uVar47 = uVar47 + 4;
          uVar43 = uVar46 & 0xffffff;
          uVar46 = uVar46 << 8;
        }
        uVar42 = uVar42 + 1;
        uVar33 = uVar33 + 0x10;
      } while (uVar42 != uVar34);
    }
    bVar7 = *(byte *)((longlong)local_a70 + 0x32);
    uVar42 = 0;
    uVar33 = 3;
    do {
      uVar43 = *(uint *)(local_a60 + uVar42 * 4) & 0xaaaaaaaa;
      uVar46 = uVar43;
      uVar47 = uVar33;
      while (uVar43 != 0) {
        if ((uVar46 & 0xaa000000) != 0) {
          FUN_149840a02(local_a48,local_a70);
          if ((int)uVar46 < 0) {
            uVar43 = local_848._4_4_;
            local_848 = CONCAT44(local_848._4_4_ + 1,(undefined4)local_848);
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar47 - 3) * 6);
            if (uVar8 != 0xffff) {
              uVar34 = (ulonglong)((uVar43 & 7) << 4);
              lVar44 = param_2[3];
              uVar48 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar1 = (double *)(lVar44 + uVar48);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar44 + 0x10 + uVar48);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar46 >> 0x1d & 1) != 0) {
            uVar43 = local_848._4_4_;
            local_848 = CONCAT44(local_848._4_4_ + 1,(undefined4)local_848);
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar47 - 2) * 6);
            if (uVar8 != 0xffff) {
              uVar34 = (ulonglong)((uVar43 & 7) << 4);
              lVar44 = param_2[3];
              uVar48 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar1 = (double *)(lVar44 + uVar48);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar44 + 0x10 + uVar48);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar46 >> 0x1b & 1) != 0) {
            uVar43 = local_848._4_4_;
            local_848 = CONCAT44(local_848._4_4_ + 1,(undefined4)local_848);
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)(uVar47 - 1) * 6);
            if (uVar8 != 0xffff) {
              uVar34 = (ulonglong)((uVar43 & 7) << 4);
              lVar44 = param_2[3];
              uVar48 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar1 = (double *)(lVar44 + uVar48);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar44 + 0x10 + uVar48);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar46 >> 0x19 & 1) != 0) {
            uVar43 = local_848._4_4_;
            local_848 = CONCAT44(local_848._4_4_ + 1,(undefined4)local_848);
            uVar8 = *(ushort *)(param_2[2] + (ulonglong)uVar47 * 6);
            if (uVar8 != 0xffff) {
              uVar34 = (ulonglong)((uVar43 & 7) << 4);
              lVar44 = param_2[3];
              uVar48 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a48 + uVar34 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar1 = (double *)(lVar44 + uVar48);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar44 + 0x10 + uVar48);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
        }
        uVar47 = uVar47 + 4;
        uVar43 = uVar46 & 0xffffff;
        uVar46 = uVar46 << 8;
      }
      uVar43 = (int)uVar42 + 1;
      uVar42 = (ulonglong)uVar43;
      uVar33 = uVar33 + 0x10;
    } while (uVar43 <= local_a78);
    bVar7 = *(byte *)((longlong)local_a70 + 0x32);
    uVar42 = 0;
    uVar33 = 3;
    do {
      uVar43 = *(uint *)(local_a58 + uVar42 * 4) & 0xaaaaaaaa;
      uVar46 = uVar43;
      uVar47 = uVar33;
      while (uVar43 != 0) {
        if ((uVar46 & 0xaa000000) != 0) {
          FUN_14984173e(local_a48,local_a70);
          if ((int)uVar46 < 0) {
            uVar43 = local_638._4_4_;
            local_638 = CONCAT44(local_638._4_4_ + 1,(undefined4)local_638);
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 3) * 6);
            if (uVar8 != 0xffff) {
              auVar64 = *(undefined1 (*) [16])
                         (local_838 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar44 = param_2[3];
              uVar34 = (ulonglong)((uint)uVar8 * 0x60);
              auVar85._0_8_ = (double)auVar64._0_4_;
              auVar85._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar34) = auVar85;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              pdVar1 = (double *)(lVar44 + 0x30 + uVar34);
              *pdVar1 = (double)auVar64._0_4_;
              pdVar1[1] = (double)auVar64._4_4_;
            }
          }
          if ((uVar46 >> 0x1d & 1) != 0) {
            uVar43 = local_638._4_4_;
            local_638 = CONCAT44(local_638._4_4_ + 1,(undefined4)local_638);
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 2) * 6);
            if (uVar8 != 0xffff) {
              auVar64 = *(undefined1 (*) [16])
                         (local_838 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar44 = param_2[3];
              uVar34 = (ulonglong)((uint)uVar8 * 0x60);
              auVar82._0_8_ = (double)auVar64._0_4_;
              auVar82._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar34) = auVar82;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              pdVar1 = (double *)(lVar44 + 0x30 + uVar34);
              *pdVar1 = (double)auVar64._0_4_;
              pdVar1[1] = (double)auVar64._4_4_;
            }
          }
          if ((uVar46 >> 0x1b & 1) != 0) {
            uVar43 = local_638._4_4_;
            local_638 = CONCAT44(local_638._4_4_ + 1,(undefined4)local_638);
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar47 - 1) * 6);
            if (uVar8 != 0xffff) {
              auVar64 = *(undefined1 (*) [16])
                         (local_838 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar44 = param_2[3];
              uVar34 = (ulonglong)((uint)uVar8 * 0x60);
              auVar83._0_8_ = (double)auVar64._0_4_;
              auVar83._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar34) = auVar83;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              pdVar1 = (double *)(lVar44 + 0x30 + uVar34);
              *pdVar1 = (double)auVar64._0_4_;
              pdVar1[1] = (double)auVar64._4_4_;
            }
          }
          if ((uVar46 >> 0x19 & 1) != 0) {
            uVar43 = local_638._4_4_;
            local_638 = CONCAT44(local_638._4_4_ + 1,(undefined4)local_638);
            uVar8 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar47 * 6);
            if (uVar8 != 0xffff) {
              auVar64 = *(undefined1 (*) [16])
                         (local_838 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar44 = param_2[3];
              uVar34 = (ulonglong)((uint)uVar8 * 0x60);
              auVar84._0_8_ = (double)auVar64._0_4_;
              auVar84._8_8_ = (double)auVar64._4_4_;
              *(undefined1 (*) [16])(lVar44 + 0x20 + uVar34) = auVar84;
              auVar64 = insertps(auVar64,auVar64,0x8e);
              pdVar1 = (double *)(lVar44 + 0x30 + uVar34);
              *pdVar1 = (double)auVar64._0_4_;
              pdVar1[1] = (double)auVar64._4_4_;
            }
          }
        }
        uVar47 = uVar47 + 4;
        uVar43 = uVar46 & 0xffffff;
        uVar46 = uVar46 << 8;
      }
      uVar43 = (int)uVar42 + 1;
      uVar42 = (ulonglong)uVar43;
      uVar33 = uVar33 + 0x10;
    } while (uVar43 <= local_a78);
    if (local_a79 != '\0') {
      bVar7 = *(byte *)((longlong)local_a70 + 0x32);
      uVar42 = 0;
      uVar33 = 3;
      do {
        uVar43 = *(uint *)(local_a68 + uVar42 * 4) & 0xaaaaaaaa;
        uVar46 = uVar43;
        uVar47 = uVar33;
        while (uVar43 != 0) {
          if ((uVar46 & 0xaa000000) != 0) {
            FUN_149841b0a(local_a48,local_a70);
            if ((int)uVar46 < 0) {
              uVar43 = local_428._4_4_;
              local_428 = CONCAT44(local_428._4_4_ + 1,(undefined4)local_428);
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 3) * 6);
              if (uVar8 != 0xffff) {
                auVar64 = *(undefined1 (*) [16])
                           (local_628 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar44 = param_2[3];
                uVar34 = (ulonglong)((uint)uVar8 * 0x60);
                auVar89._0_8_ = (double)auVar64._0_4_;
                auVar89._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar34) = auVar89;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                pdVar1 = (double *)(lVar44 + 0x50 + uVar34);
                *pdVar1 = (double)auVar64._0_4_;
                pdVar1[1] = (double)auVar64._4_4_;
              }
            }
            if ((uVar46 >> 0x1d & 1) != 0) {
              uVar43 = local_428._4_4_;
              local_428 = CONCAT44(local_428._4_4_ + 1,(undefined4)local_428);
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 2) * 6);
              if (uVar8 != 0xffff) {
                auVar64 = *(undefined1 (*) [16])
                           (local_628 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar44 = param_2[3];
                uVar34 = (ulonglong)((uint)uVar8 * 0x60);
                auVar86._0_8_ = (double)auVar64._0_4_;
                auVar86._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar34) = auVar86;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                pdVar1 = (double *)(lVar44 + 0x50 + uVar34);
                *pdVar1 = (double)auVar64._0_4_;
                pdVar1[1] = (double)auVar64._4_4_;
              }
            }
            if ((uVar46 >> 0x1b & 1) != 0) {
              uVar43 = local_428._4_4_;
              local_428 = CONCAT44(local_428._4_4_ + 1,(undefined4)local_428);
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar47 - 1) * 6);
              if (uVar8 != 0xffff) {
                auVar64 = *(undefined1 (*) [16])
                           (local_628 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar44 = param_2[3];
                uVar34 = (ulonglong)((uint)uVar8 * 0x60);
                auVar87._0_8_ = (double)auVar64._0_4_;
                auVar87._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar34) = auVar87;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                pdVar1 = (double *)(lVar44 + 0x50 + uVar34);
                *pdVar1 = (double)auVar64._0_4_;
                pdVar1[1] = (double)auVar64._4_4_;
              }
            }
            if ((uVar46 >> 0x19 & 1) != 0) {
              uVar43 = local_428._4_4_;
              local_428 = CONCAT44(local_428._4_4_ + 1,(undefined4)local_428);
              uVar8 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar47 * 6);
              if (uVar8 != 0xffff) {
                auVar64 = *(undefined1 (*) [16])
                           (local_628 + (ulonglong)((uVar43 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar44 = param_2[3];
                uVar34 = (ulonglong)((uint)uVar8 * 0x60);
                auVar88._0_8_ = (double)auVar64._0_4_;
                auVar88._8_8_ = (double)auVar64._4_4_;
                *(undefined1 (*) [16])(lVar44 + 0x40 + uVar34) = auVar88;
                auVar64 = insertps(auVar64,auVar64,0x8e);
                pdVar1 = (double *)(lVar44 + 0x50 + uVar34);
                *pdVar1 = (double)auVar64._0_4_;
                pdVar1[1] = (double)auVar64._4_4_;
              }
            }
          }
          uVar47 = uVar47 + 4;
          uVar43 = uVar46 & 0xffffff;
          uVar46 = uVar46 << 8;
        }
        uVar43 = (int)uVar42 + 1;
        uVar42 = (ulonglong)uVar43;
        uVar33 = uVar33 + 0x10;
      } while (uVar43 <= local_a78);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_aa8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498407cc FUN_1498407cc body=566 status=ok
// SIG undefined FUN_1498407cc(void)

void FUN_1498407cc(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  
  lVar5 = *param_2;
  uVar2 = *(uint *)(lVar5 + 0x50);
  uVar3 = *(uint *)(param_2 + 7);
  uVar4 = *(uint *)((longlong)param_2 + 0x3c);
  lVar6 = param_2[0xc];
  lVar7 = param_2[0xd];
  *(ulonglong *)(param_1 + 0x6b0) = lVar5 + 0x20 + (ulonglong)uVar2;
  lVar19 = param_2[8];
  lVar18 = param_2[10];
  lVar8 = param_2[0xe];
  *(longlong *)(param_1 + 0x6c8) = lVar19;
  *(longlong *)(param_1 + 0x6d0) = lVar18;
  *(longlong *)(param_1 + 0x6d8) = lVar6;
  *(int *)(param_1 + 0x6e0) = (int)lVar8;
  lVar10 = param_2[9];
  lVar16 = param_2[0xb];
  iVar9 = *(int *)((longlong)param_2 + 0x74);
  *(longlong *)(param_1 + 0x6e8) = lVar10;
  *(longlong *)(param_1 + 0x6f0) = lVar16;
  *(longlong *)(param_1 + 0x6f8) = lVar7;
  *(int *)(param_1 + 0x700) = iVar9;
  uVar15 = *(int *)(lVar5 + 0x28) + 3U & 0xfffffffc;
  bVar20 = *(char *)((longlong)param_2 + 0x1c) == '\x03';
  iVar17 = 0x18;
  iVar14 = 0;
  if (bVar20) {
    iVar14 = 0x18;
  }
  uVar13 = 0;
  if (bVar20) {
    uVar13 = (ulonglong)uVar15;
  }
  iVar11 = 0;
  if (bVar20) {
    iVar11 = 6;
  }
  lVar12 = (ulonglong)uVar2 + lVar5 + (ulonglong)(uint)(iVar14 * *(int *)(lVar5 + 0x28)) + 0x20;
  lVar19 = lVar19 + uVar13;
  lVar10 = uVar13 + lVar10;
  uVar13 = (ulonglong)(iVar11 * uVar15);
  lVar18 = lVar18 + uVar13;
  lVar16 = lVar16 + uVar13;
  *(longlong *)(param_1 + 0x6b8) = lVar12;
  *(longlong *)(param_1 + 0x708) = lVar19;
  *(longlong *)(param_1 + 0x728) = lVar10;
  *(longlong *)(param_1 + 0x710) = lVar18;
  *(longlong *)(param_1 + 0x730) = lVar16;
  *(longlong *)(param_1 + 0x718) = lVar6;
  *(longlong *)(param_1 + 0x738) = lVar7;
  iVar14 = (int)lVar8 + *(int *)((ulonglong)uVar3 + 4 + lVar5);
  iVar9 = iVar9 + *(int *)((ulonglong)uVar4 + 4 + lVar5);
  *(int *)(param_1 + 0x720) = iVar14;
  *(int *)(param_1 + 0x740) = iVar9;
  if (*(char *)((longlong)param_2 + 0x1f) != '\0') {
    cVar1 = *(char *)((longlong)param_2 + 0x1d);
    if (cVar1 != '\x01') {
      iVar17 = 0;
    }
    iVar11 = 6;
    if (cVar1 != '\x01') {
      iVar11 = 0;
    }
    *(ulonglong *)(param_1 + 0x6c0) = lVar12 + (ulonglong)(uint)(iVar17 * *(int *)(lVar5 + 0x2c));
    uVar13 = (ulonglong)*(uint *)(lVar5 + 0x2c);
    if (cVar1 != '\x01') {
      uVar13 = 0;
    }
    *(ulonglong *)(param_1 + 0x748) = lVar19 + uVar13;
    uVar13 = (ulonglong)*(uint *)(lVar5 + 0x2c);
    if (cVar1 != '\x01') {
      uVar13 = 0;
    }
    *(ulonglong *)(param_1 + 0x768) = lVar10 + uVar13;
    *(ulonglong *)(param_1 + 0x750) = lVar18 + (ulonglong)(uint)(*(int *)(lVar5 + 0x2c) * iVar11);
    *(ulonglong *)(param_1 + 0x770) = lVar16 + (ulonglong)(uint)(iVar11 * *(int *)(lVar5 + 0x2c));
    *(longlong *)(param_1 + 0x758) = lVar6;
    *(longlong *)(param_1 + 0x778) = lVar7;
    *(int *)(param_1 + 0x760) = iVar14 + *(int *)(lVar5 + 8 + (ulonglong)uVar3);
    *(int *)(param_1 + 0x780) = iVar9 + *(int *)(lVar5 + 8 + (ulonglong)uVar4);
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar5 + 0x2c);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(lVar5 + 0x30);
  return;
}



// FUNCTION 149840a02 FUN_149840a02 body=2519 status=ok
// SIG undefined FUN_149840a02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_149840a02(longlong param_1,ulonglong param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 in_XMM3 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar40;
  float fVar41;
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  float fVar47;
  float fVar48;
  undefined1 in_XMM5 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [12];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  float fVar64;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [12];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  float fVar79;
  float fVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 local_240 [8];
  float fStack_238;
  float fStack_234;
  undefined1 local_230 [8];
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined1 local_200 [16];
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 local_160 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  ulonglong local_f8;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar75 [16];
  
  local_f8 = DAT_14c707940 ^ (ulonglong)&fStack_1d8;
  uVar9 = *(uint *)(param_1 + 0x208);
  uVar5 = local_f8;
  uVar7 = param_2;
  if (uVar9 == 0) goto LAB_149840aa9;
  uVar16 = *(uint *)(param_1 + 0x200);
  uVar5 = (ulonglong)uVar16;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x204);
  if (3 < uVar16 - *(uint *)(param_1 + 0x204)) goto LAB_149840aa9;
  uVar18 = 4;
  if (uVar9 < 4) {
    uVar18 = uVar9;
  }
  *(uint *)(param_1 + 0x208) = uVar9 - uVar18;
  *(uint *)(param_1 + 0x200) = uVar16 + uVar18;
  cVar3 = *(char *)(param_2 + 0x1c);
  local_1d0 = ZEXT416(*(uint *)(param_2 + 0x78));
  if ((cVar3 == '\x03') && (*(char *)(param_2 + 0x20) != '\0')) {
    auVar54 = **(undefined1 (**) [16])(param_1 + 0x6d0);
    auVar27 = (*(undefined1 (**) [16])(param_1 + 0x6d0))[1];
    auVar32 = pmovzxbw(in_XMM3,auVar54);
    auVar37 = pmovzxbw(in_XMM4,auVar27);
    auVar44 = pmovzxbd(in_XMM5,auVar54);
    auVar50[1] = 0;
    auVar50[0] = auVar54[8];
    auVar50[2] = auVar54[9];
    auVar50[3] = 0;
    auVar50[4] = auVar54[10];
    auVar50[5] = 0;
    auVar50[6] = auVar54[0xb];
    auVar50[7] = 0;
    auVar50[8] = auVar54[0xc];
    auVar50[9] = 0;
    auVar50[10] = auVar54[0xd];
    auVar50[0xb] = 0;
    auVar50[0xc] = auVar54[0xe];
    auVar50[0xd] = 0;
    auVar50[0xe] = auVar54[0xf];
    auVar50[0xf] = 0;
    auVar50 = pmovzxwd(unaff_XMM6,auVar50);
    auVar27 = pmovzxbd(auVar27,auVar27);
    auVar38._0_4_ = CONCAT22(0,auVar37._8_2_);
    auVar38._4_2_ = auVar37._10_2_;
    auVar38._6_2_ = 0;
    auVar38._8_2_ = auVar37._12_2_;
    auVar38._10_2_ = 0;
    auVar38._12_2_ = auVar37._14_2_;
    auVar38._14_2_ = 0;
    unaff_XMM7._0_4_ = (float)auVar44._0_4_ * 0.003921569;
    unaff_XMM7._4_4_ = (float)auVar44._4_4_ * 0.003921569;
    unaff_XMM7._8_4_ = (float)auVar44._8_4_ * 0.003921569;
    unaff_XMM7._12_4_ = (float)auVar44._12_4_ * 0.003921569;
    local_200._0_4_ = (float)auVar54[0xc] * 0.003921569;
    local_200._4_4_ = (float)auVar54[0xd] * 0.003921569;
    local_200._8_4_ = (float)auVar54[0xe] * 0.003921569;
    local_200._12_4_ = (float)auVar54[0xf] * 0.003921569;
    local_1f0 = (float)auVar27._0_4_ * 0.003921569;
    fStack_1ec = (float)auVar27._4_4_ * 0.003921569;
    fStack_1e8 = (float)auVar27._8_4_ * 0.003921569;
    fStack_1e4 = (float)auVar27._12_4_ * 0.003921569;
    local_1e0 = (float)auVar38._0_4_ * 0.003921569;
    fStack_1dc = (float)auVar37._10_2_ * 0.003921569;
    fStack_1d8 = (float)auVar37._12_2_ * 0.003921569;
    fStack_1d4 = (float)auVar37._14_2_ * 0.003921569;
    if (*(char *)(param_2 + 0x33) == '\0') {
      auVar54 = **(undefined1 (**) [16])(param_1 + 0x6f0);
      auVar27 = (*(undefined1 (**) [16])(param_1 + 0x6f0))[1];
      auVar38 = pmovzxbw(auVar38,auVar54);
      auVar44 = pmovzxbw(local_200,auVar27);
      auVar51 = pmovzxbd(auVar50,auVar54);
      auVar37[1] = 0;
      auVar37[0] = auVar54[8];
      auVar37[2] = auVar54[9];
      auVar37[3] = 0;
      auVar37[4] = auVar54[10];
      auVar37[5] = 0;
      auVar37[6] = auVar54[0xb];
      auVar37[7] = 0;
      auVar37[8] = auVar54[0xc];
      auVar37[9] = 0;
      auVar37[10] = auVar54[0xd];
      auVar37[0xb] = 0;
      auVar37[0xc] = auVar54[0xe];
      auVar37[0xd] = 0;
      auVar37[0xe] = auVar54[0xf];
      auVar37[0xf] = 0;
      auVar37 = pmovzxwd(unaff_XMM8,auVar37);
      auVar27 = pmovzxbd(auVar27,auVar27);
      local_1b0 = (float)auVar51._0_4_ * 0.003921569;
      fStack_1ac = (float)auVar51._4_4_ * 0.003921569;
      fStack_1a8 = (float)auVar51._8_4_ * 0.003921569;
      fStack_1a4 = (float)auVar51._12_4_ * 0.003921569;
      local_220 = (float)auVar38._8_2_ * 0.003921569;
      fStack_21c = (float)auVar38._10_2_ * 0.003921569;
      fStack_218 = (float)auVar38._12_2_ * 0.003921569;
      fStack_214 = (float)auVar38._14_2_ * 0.003921569;
      local_210 = (float)auVar37._0_4_ * 0.003921569;
      fStack_20c = (float)auVar37._4_4_ * 0.003921569;
      fStack_208 = (float)auVar37._8_4_ * 0.003921569;
      fStack_204 = (float)auVar37._12_4_ * 0.003921569;
      local_150 = (float)auVar54[0xc] * 0.003921569;
      fStack_14c = (float)auVar54[0xd] * 0.003921569;
      fStack_148 = (float)auVar54[0xe] * 0.003921569;
      fStack_144 = (float)auVar54[0xf] * 0.003921569;
      local_130 = (float)auVar27._0_4_ * 0.003921569;
      fStack_12c = (float)auVar27._4_4_ * 0.003921569;
      fStack_128 = (float)auVar27._8_4_ * 0.003921569;
      fStack_124 = (float)auVar27._12_4_ * 0.003921569;
      local_110 = (float)auVar44._8_2_ * 0.003921569;
      fStack_10c = (float)auVar44._10_2_ * 0.003921569;
      fStack_108 = (float)auVar44._12_2_ * 0.003921569;
      fStack_104 = (float)auVar44._14_2_ * 0.003921569;
    }
    local_230._4_4_ = (float)auVar32._10_2_ * 0.003921569;
    local_230._0_4_ = (float)auVar32._8_2_ * 0.003921569;
    fStack_228 = (float)auVar32._12_2_ * 0.003921569;
    fStack_224 = (float)auVar32._14_2_ * 0.003921569;
    local_240._4_4_ = (float)auVar50._4_4_ * 0.003921569;
    local_240._0_4_ = (float)auVar50._0_4_ * 0.003921569;
    fStack_238 = (float)auVar50._8_4_ * 0.003921569;
    fStack_234 = (float)auVar50._12_4_ * 0.003921569;
    local_1c0 = unaff_XMM7;
    local_160 = local_200;
    local_140 = local_1f0;
    fStack_13c = fStack_1ec;
    fStack_138 = fStack_1e8;
    fStack_134 = fStack_1e4;
    local_120 = local_1e0;
    fStack_11c = fStack_1dc;
    fStack_118 = fStack_1d8;
    fStack_114 = fStack_1d4;
  }
  uVar11 = FUN_1498413da(param_2,param_1 + 0x630,uVar18,param_1 + 0x6c8);
  uVar12 = FUN_1498413da(param_2,param_1 + 0x670,uVar18,param_1 + 0x6e8);
  fVar10 = *(float *)(param_1 + 0x658);
  fVar17 = *(float *)(param_1 + 0x668);
  auVar39._4_4_ = *(float *)(param_1 + 0x640);
  auVar39._0_4_ = *(float *)(param_1 + 0x630);
  auVar39._8_4_ = *(float *)(param_1 + 0x650);
  auVar39._12_4_ = *(float *)(param_1 + 0x660);
  auVar45._4_4_ = *(float *)(param_1 + 0x644);
  auVar45._0_4_ = *(float *)(param_1 + 0x634);
  auVar45._8_4_ = *(float *)(param_1 + 0x654);
  auVar45._12_4_ = *(float *)(param_1 + 0x664);
  auVar77._0_8_ = CONCAT44(*(float *)(param_1 + 0x648),*(float *)(param_1 + 0x638));
  auVar77._8_4_ = fVar10;
  auVar77._12_4_ = fVar17;
  auVar54 = *(undefined1 (*) [16])(param_1 + 0x690);
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x6a0);
  auVar73._8_8_ = auVar27._8_8_;
  auVar73._0_8_ = auVar54._8_8_;
  auVar51._4_4_ = *(float *)(param_1 + 0x680);
  auVar51._0_4_ = *(float *)(param_1 + 0x670);
  auVar51._8_4_ = auVar54._0_4_;
  auVar51._12_4_ = auVar27._0_4_;
  auVar32._4_4_ = *(float *)(param_1 + 0x684);
  auVar32._0_4_ = *(float *)(param_1 + 0x674);
  auVar32._8_4_ = auVar54._4_4_;
  auVar32._12_4_ = auVar27._4_4_;
  auVar44._4_4_ = *(float *)(param_1 + 0x688);
  auVar44._0_4_ = *(float *)(param_1 + 0x678);
  auVar44._8_4_ = auVar54._8_4_;
  auVar44._12_4_ = auVar27._8_4_;
  if (cVar3 == '\x03') {
    auVar70._8_4_ = fVar10;
    auVar70._0_8_ = auVar77._0_8_;
    auVar70._12_4_ = fVar17;
    if (*(char *)(param_2 + 0x20) != '\0') {
      auVar72._8_4_ = (int)extraout_XMM0_Qb;
      auVar72._0_8_ = uVar11;
      uVar15 = (undefined2)((ulonglong)uVar11 >> 0x30);
      auVar82._12_2_ = uVar15;
      auVar82._0_12_ = auVar72;
      auVar82._14_2_ = uVar15;
      uVar15 = (undefined2)((ulonglong)uVar11 >> 0x20);
      auVar83._12_4_ = auVar82._12_4_;
      auVar83._0_10_ = auVar72._0_10_;
      auVar83._10_2_ = uVar15;
      auVar75._10_6_ = auVar83._10_6_;
      auVar75._8_2_ = uVar15;
      auVar75._0_8_ = uVar11;
      uVar15 = (undefined2)((ulonglong)uVar11 >> 0x10);
      auVar74._8_8_ = auVar75._8_8_;
      auVar74._6_2_ = uVar15;
      auVar74._4_2_ = uVar15;
      auVar74._2_2_ = (short)uVar11;
      auVar74._0_2_ = (short)uVar11;
      auVar37 = ~auVar74 & unaff_XMM7;
      auVar50 = ~auVar74 & _local_230;
      auVar38 = ~auVar74 & _local_240;
      auVar44 = auVar74 & _DAT_1499314a0;
      auVar51 = ~auVar74 & local_200 | auVar44;
      auVar76._4_4_ = fStack_1ec;
      auVar76._0_4_ = local_1f0;
      auVar76._8_4_ = fStack_1e8;
      auVar76._12_4_ = fStack_1e4;
      auVar32 = ~auVar74 & auVar76 | auVar44;
      auVar78._4_4_ = fStack_1dc;
      auVar78._0_4_ = local_1e0;
      auVar78._8_4_ = fStack_1d8;
      auVar78._12_4_ = fStack_1d4;
      auVar44 = ~auVar74 & auVar78 | auVar44;
      bVar8 = *(char *)(param_2 + 0x33) == '\0';
      auVar71._4_4_ = fStack_20c;
      auVar71._0_4_ = local_210;
      auVar71._8_4_ = fStack_208;
      auVar71._12_4_ = fStack_204;
      auVar52._4_4_ = fStack_21c;
      auVar52._0_4_ = local_220;
      auVar52._8_4_ = fStack_218;
      auVar52._12_4_ = fStack_214;
      if (!bVar8) {
        auVar71 = _local_240;
        auVar52 = _local_230;
      }
      auVar39._0_4_ = *(float *)(param_1 + 0x630) * auVar51._0_4_ + auVar37._0_4_;
      auVar39._4_4_ = *(float *)(param_1 + 0x640) * auVar51._4_4_ + auVar37._4_4_;
      auVar39._8_4_ = *(float *)(param_1 + 0x650) * auVar51._8_4_ + auVar37._8_4_;
      auVar39._12_4_ = *(float *)(param_1 + 0x660) * auVar51._12_4_ + auVar37._12_4_;
      auVar45._0_4_ = *(float *)(param_1 + 0x634) * auVar32._0_4_ + auVar50._0_4_;
      auVar45._4_4_ = *(float *)(param_1 + 0x644) * auVar32._4_4_ + auVar50._4_4_;
      auVar45._8_4_ = *(float *)(param_1 + 0x654) * auVar32._8_4_ + auVar50._8_4_;
      auVar45._12_4_ = *(float *)(param_1 + 0x664) * auVar32._12_4_ + auVar50._12_4_;
      local_240._4_4_ = *(float *)(param_1 + 0x648) * auVar44._4_4_ + auVar38._4_4_;
      local_240._0_4_ = *(float *)(param_1 + 0x638) * auVar44._0_4_ + auVar38._0_4_;
      fStack_238 = fVar10 * auVar44._8_4_ + auVar38._8_4_;
      fStack_234 = fVar17 * auVar44._12_4_ + auVar38._12_4_;
      uVar5 = (ulonglong)bVar8;
      auVar55._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar55._0_8_ = uVar12;
      uVar15 = (undefined2)((ulonglong)uVar12 >> 0x30);
      auVar59._12_2_ = uVar15;
      auVar59._0_12_ = auVar55;
      auVar59._14_2_ = uVar15;
      uVar15 = (undefined2)((ulonglong)uVar12 >> 0x20);
      auVar58._12_4_ = auVar59._12_4_;
      auVar58._0_10_ = auVar55._0_10_;
      auVar58._10_2_ = uVar15;
      auVar57._10_6_ = auVar58._10_6_;
      auVar57._8_2_ = uVar15;
      auVar57._0_8_ = uVar12;
      uVar15 = (undefined2)((ulonglong)uVar12 >> 0x10);
      auVar56._8_8_ = auVar57._8_8_;
      auVar56._6_2_ = uVar15;
      auVar56._4_2_ = uVar15;
      auVar56._2_2_ = (short)uVar12;
      auVar56._0_2_ = (short)uVar12;
      auVar32 = ~auVar56 & *(undefined1 (*) [16])(local_1c0 + uVar5 * 0x10);
      auVar52 = ~auVar56 & auVar52;
      auVar71 = ~auVar56 & auVar71;
      auVar50 = _DAT_1499314a0 & auVar56;
      auVar37 = ~auVar56 & *(undefined1 (*) [16])(local_160 + uVar5 * 0x10) | auVar50;
      auVar38 = ~auVar56 & *(undefined1 (*) [16])(&local_140 + uVar5 * 4) | auVar50;
      auVar50 = ~auVar56 & *(undefined1 (*) [16])(&local_120 + uVar5 * 4) | auVar50;
      auVar51._0_4_ = *(float *)(param_1 + 0x670) * auVar37._0_4_ + auVar32._0_4_;
      auVar51._4_4_ = *(float *)(param_1 + 0x680) * auVar37._4_4_ + auVar32._4_4_;
      auVar51._8_4_ = auVar54._0_4_ * auVar37._8_4_ + auVar32._8_4_;
      auVar51._12_4_ = auVar27._0_4_ * auVar37._12_4_ + auVar32._12_4_;
      auVar32._0_4_ = *(float *)(param_1 + 0x674) * auVar38._0_4_ + auVar52._0_4_;
      auVar32._4_4_ = *(float *)(param_1 + 0x684) * auVar38._4_4_ + auVar52._4_4_;
      auVar32._8_4_ = auVar54._4_4_ * auVar38._8_4_ + auVar52._8_4_;
      auVar32._12_4_ = auVar27._4_4_ * auVar38._12_4_ + auVar52._12_4_;
      auVar44._0_4_ = *(float *)(param_1 + 0x678) * auVar50._0_4_ + auVar71._0_4_;
      auVar44._4_4_ = *(float *)(param_1 + 0x688) * auVar50._4_4_ + auVar71._4_4_;
      auVar44._8_4_ = auVar54._8_4_ * auVar50._8_4_ + auVar71._8_4_;
      auVar44._12_4_ = auVar27._8_4_ * auVar50._12_4_ + auVar71._12_4_;
      auVar70 = _local_240;
    }
    _local_240 = auVar70;
    pauVar4 = *(undefined1 (**) [16])(param_1 + 0x6b0);
    uVar5 = (ulonglong)uVar18;
    auVar62._2_2_ = (short)extraout_XMM0_Qb;
    auVar62._0_2_ = (short)extraout_XMM0_Qb;
    uVar15 = (undefined2)((ulonglong)extraout_XMM0_Qb >> 0x10);
    auVar62._4_2_ = uVar15;
    auVar62._6_2_ = uVar15;
    uVar15 = (undefined2)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar62._8_2_ = uVar15;
    auVar62._10_2_ = uVar15;
    auVar62._14_2_ = (undefined2)((ulonglong)extraout_XMM0_Qb >> 0x30);
    auVar62._12_2_ = auVar62._14_2_;
    auVar27._2_2_ = (short)extraout_XMM0_Qb_00;
    auVar27._0_2_ = (short)extraout_XMM0_Qb_00;
    uVar15 = (undefined2)((ulonglong)extraout_XMM0_Qb_00 >> 0x10);
    auVar27._4_2_ = uVar15;
    auVar27._6_2_ = uVar15;
    uVar15 = (undefined2)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    auVar27._8_2_ = uVar15;
    auVar27._10_2_ = uVar15;
    auVar27._14_2_ = (undefined2)((ulonglong)extraout_XMM0_Qb_00 >> 0x30);
    auVar27._12_2_ = auVar27._14_2_;
    auVar76 = ~auVar62 & *pauVar4;
    auVar54 = ~auVar62 & *(undefined1 (*) [16])(*pauVar4 + uVar5 * 4);
    auVar82 = ~auVar62 & *(undefined1 (*) [16])(*pauVar4 + uVar5 * 8);
    auVar78 = ~auVar27 & *pauVar4;
    auVar71 = ~auVar27 & *(undefined1 (*) [16])(*pauVar4 + uVar5 * 4);
    auVar38 = ~auVar27 & *(undefined1 (*) [16])(*pauVar4 + uVar5 * 8);
    auVar70 = auVar62 & _DAT_1499314a0;
    auVar52 = ~auVar62 & *(undefined1 (*) [16])(*pauVar4 + uVar5 * 0xc) | auVar70;
    fVar10 = auVar39._0_4_;
    fVar25 = auVar39._8_4_;
    fVar26 = auVar39._12_4_;
    auVar39._4_4_ = auVar52._4_4_ * auVar39._4_4_ + auVar76._4_4_;
    auVar39._0_4_ = auVar52._0_4_ * fVar10 + auVar76._0_4_;
    auVar50 = ~auVar62 & pauVar4[uVar5] | auVar70;
    auVar73._0_8_ =
         CONCAT44(auVar50._4_4_ * auVar45._4_4_ + auVar54._4_4_,
                  auVar50._0_4_ * auVar45._0_4_ + auVar54._0_4_);
    auVar73._8_4_ = auVar50._8_4_ * auVar45._8_4_ + auVar54._8_4_;
    auVar73._12_4_ = auVar50._12_4_ * auVar45._12_4_ + auVar54._12_4_;
    auVar54 = *(undefined1 (*) [16])((longlong)pauVar4 + uVar5 * 0x14);
    auVar70 = ~auVar62 & auVar54 | auVar70;
    auVar77._4_4_ = auVar70._4_4_ * (float)local_240._4_4_ + auVar82._4_4_;
    auVar77._0_4_ = auVar70._0_4_ * (float)local_240._0_4_ + auVar82._0_4_;
    auVar50 = _DAT_1499314a0 & auVar27;
    auVar83 = ~auVar27 & *(undefined1 (*) [16])(*pauVar4 + uVar5 * 0xc) | auVar50;
    fVar10 = auVar51._0_4_;
    fVar23 = auVar51._8_4_;
    fVar24 = auVar51._12_4_;
    auVar51._4_4_ = auVar83._4_4_ * auVar51._4_4_ + auVar78._4_4_;
    auVar51._0_4_ = auVar83._0_4_ * fVar10 + auVar78._0_4_;
    auVar37 = ~auVar27 & pauVar4[uVar5] | auVar50;
    fVar10 = auVar32._0_4_;
    fVar17 = auVar32._8_4_;
    fVar19 = auVar32._12_4_;
    auVar32._4_4_ = auVar37._4_4_ * auVar32._4_4_ + auVar71._4_4_;
    auVar32._0_4_ = auVar37._0_4_ * fVar10 + auVar71._0_4_;
    auVar50 = ~auVar27 & auVar54 | auVar50;
    fVar10 = auVar44._0_4_;
    fVar21 = auVar44._8_4_;
    fVar22 = auVar44._12_4_;
    local_230._0_4_ = auVar38._0_4_;
    local_230._4_4_ = auVar38._4_4_;
    fStack_228 = auVar38._8_4_;
    fStack_224 = auVar38._12_4_;
    auVar44._4_4_ = auVar50._4_4_ * auVar44._4_4_ + (float)local_230._4_4_;
    auVar44._0_4_ = auVar50._0_4_ * fVar10 + (float)local_230._0_4_;
    *(undefined1 **)(param_1 + 0x6b0) = *pauVar4 + uVar18 * 0x18;
    auVar39._8_4_ = auVar52._8_4_ * fVar25 + auVar76._8_4_;
    auVar39._12_4_ = auVar52._12_4_ * fVar26 + auVar76._12_4_;
    auVar45._8_4_ = auVar73._8_4_;
    auVar45._0_8_ = auVar73._0_8_;
    auVar45._12_4_ = auVar73._12_4_;
    auVar77._8_4_ = auVar70._8_4_ * fStack_238 + auVar82._8_4_;
    auVar77._12_4_ = auVar70._12_4_ * fStack_234 + auVar82._12_4_;
    auVar51._8_4_ = auVar83._8_4_ * fVar23 + auVar78._8_4_;
    auVar51._12_4_ = auVar83._12_4_ * fVar24 + auVar78._12_4_;
    auVar44._8_4_ = auVar50._8_4_ * fVar21 + fStack_228;
    auVar44._12_4_ = auVar50._12_4_ * fVar22 + fStack_224;
    auVar32._8_4_ = auVar37._8_4_ * fVar17 + auVar71._8_4_;
    auVar32._12_4_ = auVar37._12_4_ * fVar19 + auVar71._12_4_;
LAB_149841030:
    fVar36 = auVar39._0_4_;
    fVar40 = auVar39._4_4_;
    fVar41 = auVar39._8_4_;
    fVar42 = auVar39._12_4_;
    fVar10 = (float)DAT_1499314a0;
    fVar17 = DAT_1499314a0._4_4_;
    fVar19 = DAT_1499314a0._12_4_;
    fVar21 = DAT_1499314a0._8_4_;
    fVar43 = auVar45._0_4_;
    fVar47 = auVar45._4_4_;
    fVar48 = auVar45._8_4_;
    fVar49 = auVar45._12_4_;
    fVar63 = auVar77._0_4_;
    fVar64 = auVar77._4_4_;
    fVar65 = auVar77._8_4_;
    fVar66 = auVar77._12_4_;
    auVar54._0_8_ =
         CONCAT44(((fVar17 - fVar40 * fVar40) - fVar47 * fVar47) - fVar64 * fVar64,
                  ((fVar10 - fVar36 * fVar36) - fVar43 * fVar43) - fVar63 * fVar63) &
         0x7fffffff7fffffff;
    auVar54._8_4_ = ABS(((fVar21 - fVar41 * fVar41) - fVar48 * fVar48) - fVar65 * fVar65);
    auVar54._12_4_ = ABS(((fVar19 - fVar42 * fVar42) - fVar49 * fVar49) - fVar66 * fVar66);
    auVar54 = sqrtps(auVar54,auVar54);
    fVar31 = auVar51._0_4_;
    fVar33 = auVar51._4_4_;
    fVar34 = auVar51._8_4_;
    fVar35 = auVar51._12_4_;
    fVar22 = auVar32._0_4_;
    fVar23 = auVar32._4_4_;
    fVar24 = auVar32._8_4_;
    fVar25 = auVar32._12_4_;
    fVar26 = auVar44._0_4_;
    fVar28 = auVar44._4_4_;
    fVar29 = auVar44._8_4_;
    fVar30 = auVar44._12_4_;
    if (cVar3 == '\x03') {
      auVar61._0_8_ =
           CONCAT44(((fVar17 - fVar33 * fVar33) - fVar23 * fVar23) - fVar28 * fVar28,
                    ((fVar10 - fVar31 * fVar31) - fVar22 * fVar22) - fVar26 * fVar26) &
           0x7fffffff7fffffff;
      auVar61._8_4_ = ABS(((fVar21 - fVar34 * fVar34) - fVar24 * fVar24) - fVar29 * fVar29);
      auVar61._12_4_ = ABS(((fVar19 - fVar35 * fVar35) - fVar25 * fVar25) - fVar30 * fVar30);
      auVar27 = sqrtps(auVar73,auVar61);
    }
    else {
      auVar60._0_8_ =
           CONCAT44(((fVar17 - fVar33 * fVar33) - fVar23 * fVar23) - fVar28 * fVar28,
                    ((fVar10 - fVar31 * fVar31) - fVar22 * fVar22) - fVar26 * fVar26) &
           0x7fffffff7fffffff;
      auVar60._8_4_ = ABS(((fVar21 - fVar34 * fVar34) - fVar24 * fVar24) - fVar29 * fVar29);
      auVar60._12_4_ = ABS(((fVar19 - fVar35 * fVar35) - fVar25 * fVar25) - fVar30 * fVar30);
      auVar27 = sqrtps(auVar73,auVar60);
    }
    fVar10 = auVar54._0_4_;
    fVar17 = auVar54._4_4_;
    fVar19 = auVar54._8_4_;
    fVar21 = auVar54._12_4_;
    auVar53._0_4_ = fVar10 * fVar10 + fVar63 * fVar63 + fVar36 * fVar36 + fVar43 * fVar43;
    auVar53._4_4_ = fVar17 * fVar17 + fVar64 * fVar64 + fVar40 * fVar40 + fVar47 * fVar47;
    auVar53._8_4_ = fVar19 * fVar19 + fVar65 * fVar65 + fVar41 * fVar41 + fVar48 * fVar48;
    auVar53._12_4_ = fVar21 * fVar21 + fVar66 * fVar66 + fVar42 * fVar42 + fVar49 * fVar49;
    auVar54 = sqrtps(auVar53,auVar53);
    auVar54 = divps(_DAT_1499314a0,auVar54);
    fVar68 = auVar54._0_4_;
    auVar39._0_4_ = fVar36 * fVar68;
    fVar36 = auVar54._4_4_;
    auVar39._4_4_ = fVar40 * fVar36;
    fVar40 = auVar54._8_4_;
    auVar39._8_4_ = fVar41 * fVar40;
    fVar41 = auVar54._12_4_;
    auVar39._12_4_ = fVar42 * fVar41;
    auVar45._0_4_ = fVar43 * fVar68;
    auVar45._4_4_ = fVar47 * fVar36;
    auVar45._8_4_ = fVar48 * fVar40;
    auVar45._12_4_ = fVar49 * fVar41;
    auVar77._0_4_ = fVar63 * fVar68;
    auVar77._4_4_ = fVar64 * fVar36;
    auVar77._8_4_ = fVar65 * fVar40;
    auVar77._12_4_ = fVar66 * fVar41;
    auVar69._0_4_ = fVar68 * fVar10;
    auVar69._4_4_ = fVar36 * fVar17;
    auVar69._8_4_ = fVar40 * fVar19;
    auVar69._12_4_ = fVar41 * fVar21;
    fVar36 = auVar27._0_4_;
    fVar40 = auVar27._4_4_;
    fVar41 = auVar27._8_4_;
    fVar42 = auVar27._12_4_;
    auVar13._0_4_ = fVar36 * fVar36 + fVar22 * fVar22 + fVar31 * fVar31 + fVar26 * fVar26;
    auVar13._4_4_ = fVar40 * fVar40 + fVar23 * fVar23 + fVar33 * fVar33 + fVar28 * fVar28;
    auVar13._8_4_ = fVar41 * fVar41 + fVar24 * fVar24 + fVar34 * fVar34 + fVar29 * fVar29;
    auVar13._12_4_ = fVar42 * fVar42 + fVar25 * fVar25 + fVar35 * fVar35 + fVar30 * fVar30;
    auVar54 = sqrtps(auVar13,auVar13);
    auVar54 = divps(_DAT_1499314a0,auVar54);
    fVar10 = auVar54._0_4_;
    auVar51._0_4_ = fVar31 * fVar10;
    fVar17 = auVar54._4_4_;
    auVar51._4_4_ = fVar33 * fVar17;
    fVar19 = auVar54._8_4_;
    auVar51._8_4_ = fVar34 * fVar19;
    fVar21 = auVar54._12_4_;
    auVar51._12_4_ = fVar35 * fVar21;
    auVar32._0_4_ = fVar22 * fVar10;
    auVar32._4_4_ = fVar23 * fVar17;
    auVar32._8_4_ = fVar24 * fVar19;
    auVar32._12_4_ = fVar25 * fVar21;
    auVar44._0_4_ = fVar26 * fVar10;
    auVar44._4_4_ = fVar28 * fVar17;
    auVar44._8_4_ = fVar29 * fVar19;
    auVar44._12_4_ = fVar30 * fVar21;
    auVar67._0_4_ = fVar10 * fVar36;
    auVar67._4_4_ = fVar17 * fVar40;
    auVar67._8_4_ = fVar19 * fVar41;
    auVar67._12_4_ = fVar21 * fVar42;
  }
  else {
    if (cVar3 != '\0') goto LAB_149841030;
    auVar67._4_4_ = (float)*(undefined4 *)(param_1 + 0x68c);
    auVar67._0_4_ = (float)*(undefined4 *)(param_1 + 0x67c);
    auVar67._8_4_ = (float)auVar54._12_4_;
    auVar67._12_4_ = (float)auVar27._12_4_;
    auVar69._4_4_ = (float)*(undefined4 *)(param_1 + 0x64c);
    auVar69._0_4_ = (float)*(undefined4 *)(param_1 + 0x63c);
    auVar69._8_4_ = (float)*(undefined4 *)(param_1 + 0x65c);
    auVar69._12_4_ = (float)*(undefined4 *)(param_1 + 0x66c);
  }
  fVar31 = auVar39._0_4_;
  fVar33 = auVar39._4_4_;
  fVar34 = auVar39._8_4_;
  fVar35 = auVar39._12_4_;
  fVar68 = auVar77._0_4_;
  fVar79 = auVar77._4_4_;
  fVar80 = auVar77._8_4_;
  fVar81 = auVar77._12_4_;
  fVar10 = auVar45._0_4_;
  fVar19 = auVar45._4_4_;
  fVar43 = auVar69._0_4_;
  fVar48 = auVar69._4_4_;
  fVar36 = auVar45._8_4_;
  fVar41 = auVar45._12_4_;
  fVar63 = auVar69._8_4_;
  fVar65 = auVar69._12_4_;
  uVar6 = (ulonglong)((uVar16 & 7) << 4);
  pfVar1 = (float *)(param_1 + 0x80 + uVar6);
  *pfVar1 = fVar31;
  pfVar1[1] = fVar10;
  pfVar1[2] = fVar68;
  pfVar1[3] = fVar43;
  pfVar1 = (float *)(param_1 + 0x90 + uVar6);
  *pfVar1 = fVar33;
  pfVar1[1] = fVar19;
  pfVar1[2] = fVar79;
  pfVar1[3] = fVar48;
  pfVar1 = (float *)(param_1 + 0xa0 + uVar6);
  *pfVar1 = fVar34;
  pfVar1[1] = fVar36;
  pfVar1[2] = fVar80;
  pfVar1[3] = fVar63;
  pfVar1 = (float *)(param_1 + 0xb0 + uVar6);
  *pfVar1 = fVar35;
  pfVar1[1] = fVar41;
  pfVar1[2] = fVar81;
  pfVar1[3] = fVar65;
  fVar22 = auVar51._0_4_;
  fVar23 = auVar51._4_4_;
  fVar24 = auVar51._8_4_;
  fVar25 = auVar51._12_4_;
  fVar26 = auVar44._0_4_;
  fVar28 = auVar44._4_4_;
  fVar29 = auVar44._8_4_;
  fVar30 = auVar44._12_4_;
  fVar17 = auVar32._0_4_;
  fVar21 = auVar32._4_4_;
  fVar47 = auVar67._0_4_;
  fVar49 = auVar67._4_4_;
  fVar40 = auVar32._8_4_;
  fVar42 = auVar32._12_4_;
  fVar64 = auVar67._8_4_;
  fVar66 = auVar67._12_4_;
  pfVar1 = (float *)(param_1 + 0x100 + uVar6);
  *pfVar1 = fVar22;
  pfVar1[1] = fVar17;
  pfVar1[2] = fVar26;
  pfVar1[3] = fVar47;
  pfVar1 = (float *)(param_1 + 0x110 + uVar6);
  *pfVar1 = fVar23;
  pfVar1[1] = fVar21;
  pfVar1[2] = fVar28;
  pfVar1[3] = fVar49;
  pfVar1 = (float *)(param_1 + 0x120 + uVar6);
  *pfVar1 = fVar24;
  pfVar1[1] = fVar40;
  pfVar1[2] = fVar29;
  pfVar1[3] = fVar64;
  pfVar1 = (float *)(param_1 + 0x130 + uVar6);
  *pfVar1 = fVar25;
  pfVar1[1] = fVar42;
  pfVar1[2] = fVar30;
  pfVar1[3] = fVar66;
  auVar14._4_4_ = -(uint)(0.5 <= (float)local_1d0._0_4_);
  auVar14._0_4_ = -(uint)(0.5 <= (float)local_1d0._0_4_);
  auVar14._8_4_ = -(uint)(0.5 <= (float)local_1d0._0_4_);
  auVar14._12_4_ = -(uint)(0.5 <= (float)local_1d0._0_4_);
  auVar54 = blendvps(auVar39,auVar51,auVar14);
  auVar27 = blendvps(auVar45,auVar32,auVar14);
  auVar50 = blendvps(auVar77,auVar44,auVar14);
  auVar32 = blendvps(auVar69,auVar67,auVar14);
  puVar2 = (undefined4 *)(param_1 + 0x180 + uVar6);
  *puVar2 = auVar54._0_4_;
  puVar2[1] = auVar27._0_4_;
  puVar2[2] = auVar50._0_4_;
  puVar2[3] = auVar32._0_4_;
  puVar2 = (undefined4 *)(param_1 + 400 + uVar6);
  *puVar2 = auVar54._4_4_;
  puVar2[1] = auVar27._4_4_;
  puVar2[2] = auVar50._4_4_;
  puVar2[3] = auVar32._4_4_;
  puVar2 = (undefined4 *)(param_1 + 0x1a0 + uVar6);
  *puVar2 = auVar54._8_4_;
  puVar2[1] = auVar27._8_4_;
  puVar2[2] = auVar50._8_4_;
  puVar2[3] = auVar32._8_4_;
  puVar2 = (undefined4 *)(param_1 + 0x1b0 + uVar6);
  *puVar2 = auVar54._12_4_;
  puVar2[1] = auVar27._12_4_;
  puVar2[2] = auVar50._12_4_;
  puVar2[3] = auVar32._12_4_;
  uVar9 = (uint)(fVar47 * fVar43 + fVar26 * fVar68 + fVar17 * fVar10 + fVar22 * fVar31) & 0x80000000
  ;
  uVar16 = (uint)(fVar49 * fVar48 + fVar28 * fVar79 + fVar21 * fVar19 + fVar23 * fVar33) &
           0x80000000;
  uVar18 = (uint)(fVar64 * fVar63 + fVar29 * fVar80 + fVar40 * fVar36 + fVar24 * fVar34) &
           0x80000000;
  uVar20 = (uint)(fVar66 * fVar65 + fVar30 * fVar81 + fVar42 * fVar41 + fVar25 * fVar35) &
           0x80000000;
  fVar31 = (float)((uint)fVar22 ^ uVar9) * (float)local_1d0._0_4_ +
           (fVar31 - (float)local_1d0._0_4_ * fVar31);
  fVar33 = (float)((uint)fVar23 ^ uVar16) * (float)local_1d0._0_4_ +
           (fVar33 - (float)local_1d0._0_4_ * fVar33);
  fVar34 = (float)((uint)fVar24 ^ uVar18) * (float)local_1d0._0_4_ +
           (fVar34 - (float)local_1d0._0_4_ * fVar34);
  fVar35 = (float)((uint)fVar25 ^ uVar20) * (float)local_1d0._0_4_ +
           (fVar35 - (float)local_1d0._0_4_ * fVar35);
  fVar22 = (float)((uint)fVar17 ^ uVar9) * (float)local_1d0._0_4_ +
           (fVar10 - (float)local_1d0._0_4_ * fVar10);
  fVar23 = (float)((uint)fVar21 ^ uVar16) * (float)local_1d0._0_4_ +
           (fVar19 - (float)local_1d0._0_4_ * fVar19);
  fVar24 = (float)((uint)fVar40 ^ uVar18) * (float)local_1d0._0_4_ +
           (fVar36 - (float)local_1d0._0_4_ * fVar36);
  fVar25 = (float)((uint)fVar42 ^ uVar20) * (float)local_1d0._0_4_ +
           (fVar41 - (float)local_1d0._0_4_ * fVar41);
  fVar26 = (float)((uint)fVar26 ^ uVar9) * (float)local_1d0._0_4_ +
           (fVar68 - (float)local_1d0._0_4_ * fVar68);
  fVar28 = (float)((uint)fVar28 ^ uVar16) * (float)local_1d0._0_4_ +
           (fVar79 - (float)local_1d0._0_4_ * fVar79);
  fVar29 = (float)((uint)fVar29 ^ uVar18) * (float)local_1d0._0_4_ +
           (fVar80 - (float)local_1d0._0_4_ * fVar80);
  fVar30 = (float)((uint)fVar30 ^ uVar20) * (float)local_1d0._0_4_ +
           (fVar81 - (float)local_1d0._0_4_ * fVar81);
  fVar10 = (float)(uVar9 ^ (uint)fVar47) * (float)local_1d0._0_4_ +
           (fVar43 - (float)local_1d0._0_4_ * fVar43);
  fVar17 = (float)(uVar16 ^ (uint)fVar49) * (float)local_1d0._0_4_ +
           (fVar48 - (float)local_1d0._0_4_ * fVar48);
  fVar19 = (float)(uVar18 ^ (uint)fVar64) * (float)local_1d0._0_4_ +
           (fVar63 - (float)local_1d0._0_4_ * fVar63);
  fVar21 = (float)(uVar20 ^ (uint)fVar66) * (float)local_1d0._0_4_ +
           (fVar65 - (float)local_1d0._0_4_ * fVar65);
  auVar46._0_4_ = fVar10 * fVar10 + fVar26 * fVar26 + fVar22 * fVar22 + fVar31 * fVar31;
  auVar46._4_4_ = fVar17 * fVar17 + fVar28 * fVar28 + fVar23 * fVar23 + fVar33 * fVar33;
  auVar46._8_4_ = fVar19 * fVar19 + fVar29 * fVar29 + fVar24 * fVar24 + fVar34 * fVar34;
  auVar46._12_4_ = fVar21 * fVar21 + fVar30 * fVar30 + fVar25 * fVar25 + fVar35 * fVar35;
  auVar54 = sqrtps(auVar46,auVar46);
  auVar54 = divps(_DAT_1499314a0,auVar54);
  fVar36 = auVar54._0_4_;
  fVar40 = auVar54._4_4_;
  fVar41 = auVar54._8_4_;
  fVar42 = auVar54._12_4_;
  uVar5 = *(ulonglong *)(param_1 + 0x6d8);
  uVar7 = (ulonglong)(*(uint *)(param_1 + 0x700) >> 3);
  pfVar1 = (float *)(param_1 + uVar6);
  *pfVar1 = fVar31 * fVar36;
  pfVar1[1] = fVar22 * fVar36;
  pfVar1[2] = fVar26 * fVar36;
  pfVar1[3] = fVar36 * fVar10;
  pfVar1 = (float *)(param_1 + 0x10 + uVar6);
  *pfVar1 = fVar33 * fVar40;
  pfVar1[1] = fVar23 * fVar40;
  pfVar1[2] = fVar28 * fVar40;
  pfVar1[3] = fVar40 * fVar17;
  pfVar1 = (float *)(param_1 + 0x20 + uVar6);
  *pfVar1 = fVar34 * fVar41;
  pfVar1[1] = fVar24 * fVar41;
  pfVar1[2] = fVar29 * fVar41;
  pfVar1[3] = fVar41 * fVar19;
  pfVar1 = (float *)(param_1 + 0x30 + uVar6);
  *pfVar1 = fVar35 * fVar42;
  pfVar1[1] = fVar25 * fVar42;
  pfVar1[2] = fVar30 * fVar42;
  pfVar1[3] = fVar42 * fVar21;
LAB_149840aa9:
  uVar6 = local_f8 ^ (ulonglong)&fStack_1d8;
  if (uVar6 != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar6,uVar7);
  }
  return uVar5;
}



// FUNCTION 1498413da FUN_1498413da body=868 status=ok
// SIG undefined FUN_1498413da(void)

void FUN_1498413da(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  
  cVar4 = *(char *)(param_1 + 0x1c);
  lVar8 = *param_4;
  lVar9 = param_4[1];
  lVar10 = param_4[2];
  uVar20 = *(uint *)(param_4 + 3);
  uVar22 = (ulonglong)param_3;
  uVar23 = 0;
  do {
    uVar15 = (ulonglong)uVar20;
    uVar18 = uVar23;
    while( true ) {
      while( true ) {
        if (cVar4 != '\0') break;
        uVar12 = uVar15 >> 3;
        uVar16 = *(ulonglong *)(lVar10 + uVar12);
        bVar17 = (byte)uVar15 & 7;
        uVar11 = *(ulonglong *)(lVar10 + 4 + uVar12);
        uVar19 = *(ulonglong *)(lVar10 + 8 + uVar12);
        uVar12 = *(ulonglong *)(lVar10 + 0xc + uVar12);
        uVar14 = (int)uVar15 + 0x80;
        uVar15 = (ulonglong)uVar14;
        puVar1 = (ulonglong *)(param_2 + uVar18 * 0x10);
        *puVar1 = ((uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                    (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                    (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                    (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38) << bVar17) >> 0x20 |
                  (uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                   (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                   (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                   (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38) << bVar17 & 0xffffffff00000000;
        puVar1[1] = ((uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
                      (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
                      (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 |
                      (uVar19 & 0xff00) << 0x28 | uVar19 << 0x38) << bVar17) >> 0x20 |
                    (uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                     (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                     (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                     (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38) << bVar17 & 0xffffffff00000000;
        uVar18 = uVar18 + 1;
        if (uVar18 == uVar22) goto LAB_1498416f0;
      }
      if (cVar4 == '\x03') break;
      uVar11 = uVar15 >> 3;
      uVar16 = *(ulonglong *)(lVar10 + uVar11);
      bVar17 = (byte)uVar15 & 7;
      uVar19 = (uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28
               | uVar16 << 0x38) << bVar17;
      uVar16 = *(ulonglong *)(lVar10 + 4 + uVar11);
      uVar11 = *(ulonglong *)(lVar10 + 8 + uVar11);
      uVar14 = (int)uVar15 + 0x60;
      uVar15 = (ulonglong)uVar14;
      puVar1 = (ulonglong *)(param_2 + uVar18 * 0x10);
      *puVar1 = uVar19 >> 0x20 |
                (uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                 (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                 (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                 (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38) << bVar17 & 0xffffffff00000000;
      puVar1[1] = ((uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                    (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                    (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                    (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38) << bVar17) >> 0x20 |
                  uVar19 & 0xffffffff00000000;
      uVar18 = uVar18 + 1;
      if (uVar18 == uVar22) {
        uVar20 = uVar14;
        if (cVar4 != '\x03') goto LAB_1498416f0;
        goto LAB_149841710;
      }
    }
    bVar17 = *(byte *)(lVar8 + uVar23);
    uVar14 = (uint)bVar17;
    if (uVar14 == 0x1f) {
      uVar15 = (ulonglong)(uVar20 >> 3);
      uVar18 = *(ulonglong *)(lVar10 + uVar15);
      bVar17 = (byte)uVar20 & 7;
      uVar16 = (uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28
               | uVar18 << 0x38) << bVar17;
      uVar18 = *(ulonglong *)(lVar10 + 4 + uVar15);
      uVar15 = *(ulonglong *)(lVar10 + 8 + uVar15);
      auVar24._8_8_ =
           ((uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
             (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
             (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 | (uVar15 & 0xff00) << 0x28 |
            uVar15 << 0x38) << bVar17) >> 0x20 | uVar16 & 0xffffffff00000000;
      auVar24._0_8_ =
           uVar16 >> 0x20 |
           (uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 | (uVar18 & 0xff0000000000) >> 0x18
            | (uVar18 & 0xff00000000) >> 8 | (uVar18 & 0xff000000) << 8 |
            (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38) << bVar17 &
           0xffffffff00000000;
      uVar20 = uVar20 + 0x60;
    }
    else if (bVar17 == 0) {
      auVar24._0_4_ =
           (float)CONCAT11(*(undefined1 *)(lVar9 + uVar23),*(undefined1 *)(lVar9 + 4 + uVar23)) *
           1.5259022e-05;
      auVar24._4_4_ =
           (float)CONCAT11(*(undefined1 *)(lVar9 + 8 + uVar23),*(undefined1 *)(lVar9 + 0xc + uVar23)
                          ) * 1.5259022e-05;
      auVar24._8_4_ =
           (float)CONCAT11(*(undefined1 *)(lVar9 + 0x10 + uVar23),
                           *(undefined1 *)(lVar9 + 0x14 + uVar23)) * 1.5259022e-05;
      auVar24._12_4_ = 0.0;
    }
    else {
      cVar13 = ' ' - bVar17;
      uVar2 = uVar20 + uVar14;
      uVar5 = *(uint *)(lVar10 + (ulonglong)(uVar20 >> 3));
      uVar21 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >>
               (cVar13 - ((byte)uVar20 & 7) & 0x1f);
      uVar6 = *(uint *)(lVar10 + (ulonglong)(uVar2 >> 3));
      fVar3 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar14 * 8);
      uVar7 = *(uint *)(lVar10 + (ulonglong)(uVar2 + uVar14 >> 3));
      uVar5 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar14 * 8);
      auVar24._0_4_ = (float)(int)(uVar5 & uVar21) * fVar3;
      auVar24._4_4_ =
           (float)(int)(uVar5 & (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                uVar6 << 0x18) >> (cVar13 - ((byte)uVar2 & 7) & 0x1f)) * fVar3;
      auVar24._8_4_ =
           (float)(int)(uVar5 & (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                                uVar7 << 0x18) >> (cVar13 - ((byte)(uVar2 + uVar14) & 7) & 0x1f)) *
           fVar3;
      auVar24._12_4_ = (float)(int)(uVar5 & uVar21) * fVar3;
      uVar20 = uVar14 * 3 + uVar20;
    }
    *(undefined1 (*) [16])(param_2 + uVar23 * 0x10) = auVar24;
    uVar23 = uVar23 + 1;
  } while (uVar23 != uVar22);
LAB_149841710:
  *param_4 = lVar8 + 4;
  param_4[1] = lVar9 + 0x18;
  uVar14 = uVar20;
LAB_1498416f0:
  *(uint *)(param_4 + 3) = uVar14;
  return;
}



// FUNCTION 14984173e FUN_14984173e body=334 status=ok
// SIG undefined FUN_14984173e(void)

void FUN_14984173e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  uVar7 = *(uint *)(param_1 + 0x418);
  if ((uVar7 != 0) && (uVar8 = *(uint *)(param_1 + 0x410), uVar8 - *(int *)(param_1 + 0x414) < 4)) {
    uVar10 = 4;
    if (uVar7 < 4) {
      uVar10 = uVar7;
    }
    *(uint *)(param_1 + 0x418) = uVar7 - uVar10;
    *(uint *)(param_1 + 0x410) = uVar8 + uVar10;
    plVar1 = (longlong *)(param_1 + 0x6b8);
    FUN_14984188c(param_2,param_1 + 0x630,uVar10,plVar1,param_1 + 0x708);
    FUN_14984188c(param_2,param_1 + 0x670,uVar10,plVar1,param_1 + 0x728);
    fVar4 = *(float *)(param_2 + 0x78);
    lVar2 = param_1 + (ulonglong)((uVar8 & 7) << 4);
    uVar9 = 0;
    do {
      auVar5 = *(undefined1 (*) [16])(param_1 + 0x630 + uVar9);
      auVar6 = *(undefined1 (*) [16])(param_1 + 0x670 + uVar9);
      *(undefined1 (*) [16])(lVar2 + 0x290 + uVar9) = auVar5;
      *(undefined1 (*) [16])(lVar2 + 0x310 + uVar9) = auVar6;
      auVar11._4_4_ = -(uint)(0.5 <= fVar4);
      auVar11._0_4_ = -(uint)(0.5 <= fVar4);
      auVar11._8_4_ = -(uint)(0.5 <= fVar4);
      auVar11._12_4_ = -(uint)(0.5 <= fVar4);
      auVar11 = blendvps(auVar5,auVar6,auVar11);
      *(undefined1 (*) [16])(lVar2 + 0x390 + uVar9) = auVar11;
      pfVar3 = (float *)(lVar2 + 0x210 + uVar9);
      *pfVar3 = auVar6._0_4_ * fVar4 + (auVar5._0_4_ - fVar4 * auVar5._0_4_);
      pfVar3[1] = auVar6._4_4_ * fVar4 + (auVar5._4_4_ - fVar4 * auVar5._4_4_);
      pfVar3[2] = auVar6._8_4_ * fVar4 + (auVar5._8_4_ - fVar4 * auVar5._8_4_);
      pfVar3[3] = auVar6._12_4_ * fVar4 + (auVar5._12_4_ - fVar4 * auVar5._12_4_);
      uVar9 = uVar9 + 0x10;
    } while (uVar10 << 4 != uVar9);
    if (*(char *)(param_2 + 0x1d) == '\x01') {
      *plVar1 = *plVar1 + (ulonglong)(uVar10 * 0x18);
    }
  }
  return;
}



// FUNCTION 14984188c FUN_14984188c body=637 status=ok
// SIG undefined FUN_14984188c(void)

void FUN_14984188c(longlong param_1,undefined1 (*param_2) [16],uint param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  
  lVar7 = param_5[2];
  lVar8 = *param_4;
  uVar17 = *(uint *)(param_5 + 3);
  pbVar14 = (byte *)*param_5;
  puVar22 = (undefined8 *)param_5[1];
  cVar3 = *(char *)(param_1 + 0x1d);
  uVar21 = (ulonglong)param_3;
  uVar19 = 0;
  do {
    bVar12 = (byte)uVar17;
    if (cVar3 == '\x01') {
      bVar4 = *pbVar14;
      uVar13 = (uint)bVar4;
      pbVar14 = pbVar14 + 1;
      if (uVar13 == 0x1f) {
        uVar11 = (ulonglong)(uVar17 >> 3);
        uVar9 = *(ulonglong *)(lVar7 + uVar11);
        bVar12 = bVar12 & 7;
        uVar16 = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                  (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                  (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28
                 | uVar9 << 0x38) << bVar12;
        uVar9 = *(ulonglong *)(lVar7 + 4 + uVar11);
        uVar11 = *(ulonglong *)(lVar7 + 8 + uVar11);
        in_XMM2._8_8_ =
             ((uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
               (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
               (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28
              | uVar11 << 0x38) << bVar12) >> 0x20 | uVar16 & 0xffffffff00000000;
        in_XMM2._0_8_ =
             uVar16 >> 0x20 |
             (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18
              | (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18
              | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) << bVar12 & 0xffffffff00000000;
        uVar17 = uVar17 + 0x60;
        puVar22 = (undefined8 *)((longlong)puVar22 + 6);
      }
      else {
        if (bVar4 == 0) {
          auVar23 = pmovzxwd(in_XMM2,*puVar22);
          fVar24 = (float)auVar23._0_4_ * 1.5259022e-05;
          fVar25 = (float)auVar23._4_4_ * 1.5259022e-05;
          fVar26 = (float)auVar23._8_4_ * 1.5259022e-05;
          fVar27 = (float)auVar23._12_4_ * 1.5259022e-05;
          puVar22 = (undefined8 *)((longlong)puVar22 + 6);
        }
        else {
          cVar10 = ' ' - bVar4;
          fVar27 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar13 * 8);
          uVar20 = *(uint *)(lVar7 + (ulonglong)(uVar17 >> 3));
          uVar18 = (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18) >> (cVar10 - (bVar12 & 7) & 0x1f);
          uVar20 = uVar17 + uVar13;
          uVar5 = *(uint *)(lVar7 + (ulonglong)(uVar20 >> 3));
          uVar15 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                   >> (cVar10 - ((byte)uVar20 & 7) & 0x1f);
          uVar5 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar13 * 8);
          uVar6 = *(uint *)(lVar7 + (ulonglong)(uVar20 + uVar13 >> 3));
          uVar20 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18)
                   >> (cVar10 - ((byte)(uVar20 + uVar13) & 7) & 0x1f);
          auVar23._4_4_ = fVar27;
          auVar23._0_4_ = fVar27;
          auVar23._8_4_ = fVar27;
          auVar23._12_4_ = fVar27;
          auVar28._4_4_ = uVar15;
          auVar28._0_4_ = uVar18;
          auVar28._12_4_ = uVar18;
          auVar28._8_4_ = uVar20;
          fVar24 = (float)(int)(uVar5 & uVar18) * fVar27;
          fVar25 = (float)(int)(uVar5 & uVar15) * fVar27;
          fVar26 = (float)(int)(uVar5 & uVar20) * fVar27;
          fVar27 = (float)(int)(uVar5 & uVar18) * fVar27;
          uVar17 = uVar17 + uVar13 * 3;
          if (*(char *)(param_1 + 0x20) != '\0') {
            auVar23 = pmovzxbw(auVar23,*puVar22);
            auVar28 = pmovzxbw(auVar28,*(undefined8 *)((longlong)puVar22 + 3));
            puVar22 = (undefined8 *)((longlong)puVar22 + 6);
            auVar23 = pmovzxwd(auVar23,auVar23);
            auVar28 = pmovzxwd(auVar28,auVar28);
            fVar24 = fVar24 * (float)auVar28._0_4_ * 0.003921569 +
                     (float)auVar23._0_4_ * 0.003921569;
            fVar25 = fVar25 * (float)auVar28._4_4_ * 0.003921569 +
                     (float)auVar23._4_4_ * 0.003921569;
            fVar26 = fVar26 * (float)auVar28._8_4_ * 0.003921569 +
                     (float)auVar23._8_4_ * 0.003921569;
            fVar27 = fVar27 * (float)auVar28._12_4_ * 0.003921569 +
                     (float)auVar23._12_4_ * 0.003921569;
          }
        }
        pfVar1 = (float *)(lVar8 + (ulonglong)uVar19);
        pfVar2 = (float *)(lVar8 + 0xc + (ulonglong)uVar19);
        in_XMM2._0_4_ = *pfVar2 * fVar24 + *pfVar1;
        in_XMM2._4_4_ = pfVar2[1] * fVar25 + pfVar1[1];
        in_XMM2._8_4_ = pfVar2[2] * fVar26 + pfVar1[2];
        in_XMM2._12_4_ = pfVar2[3] * fVar27 + pfVar1[3];
      }
    }
    else {
      uVar11 = (ulonglong)(uVar17 >> 3);
      uVar9 = *(ulonglong *)(lVar7 + uVar11);
      bVar12 = bVar12 & 7;
      uVar16 = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
               uVar9 << 0x38) << bVar12;
      uVar9 = *(ulonglong *)(lVar7 + 4 + uVar11);
      uVar11 = *(ulonglong *)(lVar7 + 8 + uVar11);
      in_XMM2._8_8_ =
           ((uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
            uVar11 << 0x38) << bVar12) >> 0x20 | uVar16 & 0xffffffff00000000;
      in_XMM2._0_8_ =
           uVar16 >> 0x20 |
           (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) << bVar12 & 0xffffffff00000000;
      uVar17 = uVar17 + 0x60;
    }
    *param_2 = in_XMM2;
    param_2 = param_2 + 1;
    uVar19 = uVar19 + 0x18;
    uVar21 = uVar21 - 1;
  } while (uVar21 != 0);
  *param_5 = pbVar14;
  param_5[1] = puVar22;
  *(uint *)(param_5 + 3) = uVar17;
  return;
}



// FUNCTION 149841b0a FUN_149841b0a body=334 status=ok
// SIG undefined FUN_149841b0a(void)

void FUN_149841b0a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  uVar7 = *(uint *)(param_1 + 0x628);
  if ((uVar7 != 0) && (uVar8 = *(uint *)(param_1 + 0x620), uVar8 - *(int *)(param_1 + 0x624) < 4)) {
    uVar10 = 4;
    if (uVar7 < 4) {
      uVar10 = uVar7;
    }
    *(uint *)(param_1 + 0x628) = uVar7 - uVar10;
    *(uint *)(param_1 + 0x620) = uVar8 + uVar10;
    plVar1 = (longlong *)(param_1 + 0x6c0);
    FUN_149841c58(param_2,param_1 + 0x630,uVar10,plVar1,param_1 + 0x748);
    FUN_149841c58(param_2,param_1 + 0x670,uVar10,plVar1,param_1 + 0x768);
    fVar4 = *(float *)(param_2 + 0x78);
    lVar2 = param_1 + (ulonglong)((uVar8 & 7) << 4);
    uVar9 = 0;
    do {
      auVar5 = *(undefined1 (*) [16])(param_1 + 0x630 + uVar9);
      auVar6 = *(undefined1 (*) [16])(param_1 + 0x670 + uVar9);
      *(undefined1 (*) [16])(lVar2 + 0x4a0 + uVar9) = auVar5;
      *(undefined1 (*) [16])(lVar2 + 0x520 + uVar9) = auVar6;
      auVar11._4_4_ = -(uint)(0.5 <= fVar4);
      auVar11._0_4_ = -(uint)(0.5 <= fVar4);
      auVar11._8_4_ = -(uint)(0.5 <= fVar4);
      auVar11._12_4_ = -(uint)(0.5 <= fVar4);
      auVar11 = blendvps(auVar5,auVar6,auVar11);
      *(undefined1 (*) [16])(lVar2 + 0x5a0 + uVar9) = auVar11;
      pfVar3 = (float *)(lVar2 + 0x420 + uVar9);
      *pfVar3 = auVar6._0_4_ * fVar4 + (auVar5._0_4_ - fVar4 * auVar5._0_4_);
      pfVar3[1] = auVar6._4_4_ * fVar4 + (auVar5._4_4_ - fVar4 * auVar5._4_4_);
      pfVar3[2] = auVar6._8_4_ * fVar4 + (auVar5._8_4_ - fVar4 * auVar5._8_4_);
      pfVar3[3] = auVar6._12_4_ * fVar4 + (auVar5._12_4_ - fVar4 * auVar5._12_4_);
      uVar9 = uVar9 + 0x10;
    } while (uVar10 << 4 != uVar9);
    if (*(char *)(param_2 + 0x1e) == '\x01') {
      *plVar1 = *plVar1 + (ulonglong)(uVar10 * 0x18);
    }
  }
  return;
}



// FUNCTION 149841c58 FUN_149841c58 body=637 status=ok
// SIG undefined FUN_149841c58(void)

void FUN_149841c58(longlong param_1,undefined1 (*param_2) [16],uint param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  
  lVar7 = param_5[2];
  lVar8 = *param_4;
  uVar17 = *(uint *)(param_5 + 3);
  pbVar14 = (byte *)*param_5;
  puVar22 = (undefined8 *)param_5[1];
  cVar3 = *(char *)(param_1 + 0x1e);
  uVar21 = (ulonglong)param_3;
  uVar19 = 0;
  do {
    bVar12 = (byte)uVar17;
    if (cVar3 == '\x01') {
      bVar4 = *pbVar14;
      uVar13 = (uint)bVar4;
      pbVar14 = pbVar14 + 1;
      if (uVar13 == 0x1f) {
        uVar11 = (ulonglong)(uVar17 >> 3);
        uVar9 = *(ulonglong *)(lVar7 + uVar11);
        bVar12 = bVar12 & 7;
        uVar16 = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                  (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                  (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28
                 | uVar9 << 0x38) << bVar12;
        uVar9 = *(ulonglong *)(lVar7 + 4 + uVar11);
        uVar11 = *(ulonglong *)(lVar7 + 8 + uVar11);
        in_XMM2._8_8_ =
             ((uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
               (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
               (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28
              | uVar11 << 0x38) << bVar12) >> 0x20 | uVar16 & 0xffffffff00000000;
        in_XMM2._0_8_ =
             uVar16 >> 0x20 |
             (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18
              | (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18
              | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) << bVar12 & 0xffffffff00000000;
        uVar17 = uVar17 + 0x60;
        puVar22 = (undefined8 *)((longlong)puVar22 + 6);
      }
      else {
        if (bVar4 == 0) {
          auVar23 = pmovzxwd(in_XMM2,*puVar22);
          fVar24 = (float)auVar23._0_4_ * 1.5259022e-05;
          fVar25 = (float)auVar23._4_4_ * 1.5259022e-05;
          fVar26 = (float)auVar23._8_4_ * 1.5259022e-05;
          fVar27 = (float)auVar23._12_4_ * 1.5259022e-05;
          puVar22 = (undefined8 *)((longlong)puVar22 + 6);
        }
        else {
          cVar10 = ' ' - bVar4;
          fVar27 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar13 * 8);
          uVar20 = *(uint *)(lVar7 + (ulonglong)(uVar17 >> 3));
          uVar18 = (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18) >> (cVar10 - (bVar12 & 7) & 0x1f);
          uVar20 = uVar17 + uVar13;
          uVar5 = *(uint *)(lVar7 + (ulonglong)(uVar20 >> 3));
          uVar15 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                   >> (cVar10 - ((byte)uVar20 & 7) & 0x1f);
          uVar5 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar13 * 8);
          uVar6 = *(uint *)(lVar7 + (ulonglong)(uVar20 + uVar13 >> 3));
          uVar20 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18)
                   >> (cVar10 - ((byte)(uVar20 + uVar13) & 7) & 0x1f);
          auVar23._4_4_ = fVar27;
          auVar23._0_4_ = fVar27;
          auVar23._8_4_ = fVar27;
          auVar23._12_4_ = fVar27;
          auVar28._4_4_ = uVar15;
          auVar28._0_4_ = uVar18;
          auVar28._12_4_ = uVar18;
          auVar28._8_4_ = uVar20;
          fVar24 = (float)(int)(uVar5 & uVar18) * fVar27;
          fVar25 = (float)(int)(uVar5 & uVar15) * fVar27;
          fVar26 = (float)(int)(uVar5 & uVar20) * fVar27;
          fVar27 = (float)(int)(uVar5 & uVar18) * fVar27;
          uVar17 = uVar17 + uVar13 * 3;
          if (*(char *)(param_1 + 0x20) != '\0') {
            auVar23 = pmovzxbw(auVar23,*puVar22);
            auVar28 = pmovzxbw(auVar28,*(undefined8 *)((longlong)puVar22 + 3));
            puVar22 = (undefined8 *)((longlong)puVar22 + 6);
            auVar23 = pmovzxwd(auVar23,auVar23);
            auVar28 = pmovzxwd(auVar28,auVar28);
            fVar24 = fVar24 * (float)auVar28._0_4_ * 0.003921569 +
                     (float)auVar23._0_4_ * 0.003921569;
            fVar25 = fVar25 * (float)auVar28._4_4_ * 0.003921569 +
                     (float)auVar23._4_4_ * 0.003921569;
            fVar26 = fVar26 * (float)auVar28._8_4_ * 0.003921569 +
                     (float)auVar23._8_4_ * 0.003921569;
            fVar27 = fVar27 * (float)auVar28._12_4_ * 0.003921569 +
                     (float)auVar23._12_4_ * 0.003921569;
          }
        }
        pfVar1 = (float *)(lVar8 + (ulonglong)uVar19);
        pfVar2 = (float *)(lVar8 + 0xc + (ulonglong)uVar19);
        in_XMM2._0_4_ = *pfVar2 * fVar24 + *pfVar1;
        in_XMM2._4_4_ = pfVar2[1] * fVar25 + pfVar1[1];
        in_XMM2._8_4_ = pfVar2[2] * fVar26 + pfVar1[2];
        in_XMM2._12_4_ = pfVar2[3] * fVar27 + pfVar1[3];
      }
    }
    else {
      uVar11 = (ulonglong)(uVar17 >> 3);
      uVar9 = *(ulonglong *)(lVar7 + uVar11);
      bVar12 = bVar12 & 7;
      uVar16 = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
               uVar9 << 0x38) << bVar12;
      uVar9 = *(ulonglong *)(lVar7 + 4 + uVar11);
      uVar11 = *(ulonglong *)(lVar7 + 8 + uVar11);
      in_XMM2._8_8_ =
           ((uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
            uVar11 << 0x38) << bVar12) >> 0x20 | uVar16 & 0xffffffff00000000;
      in_XMM2._0_8_ =
           uVar16 >> 0x20 |
           (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) << bVar12 & 0xffffffff00000000;
      uVar17 = uVar17 + 0x60;
    }
    *param_2 = in_XMM2;
    param_2 = param_2 + 1;
    uVar19 = uVar19 + 0x18;
    uVar21 = uVar21 - 1;
  } while (uVar21 != 0);
  *param_5 = pbVar14;
  param_5[1] = puVar22;
  *(uint *)(param_5 + 3) = uVar17;
  return;
}



// FUNCTION 149841ed5 FUN_149841ed5 body=5168 status=ok
// SIG undefined FUN_149841ed5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149841ed5(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  float *_Src;
  uint uVar42;
  float *_Dst;
  ulonglong uVar43;
  uint uVar44;
  ulonglong uVar45;
  longlong lVar46;
  float *pfVar47;
  undefined1 (*pauVar48) [16];
  int iVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  undefined1 (*pauVar52) [16];
  ulonglong uVar53;
  uint uVar54;
  longlong *plVar55;
  uint uVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar67;
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auStack_aa8 [39];
  char local_a81;
  uint local_a80;
  uint local_a7c;
  longlong *local_a78;
  ulonglong local_a70;
  longlong local_a68;
  ulonglong local_a60;
  undefined8 local_a58 [64];
  undefined8 local_858;
  undefined1 local_848 [512];
  undefined8 local_648;
  undefined1 local_638 [512];
  undefined8 local_438;
  float afStack_2c8 [2];
  undefined8 auStack_2c0 [63];
  undefined8 local_c8;
  uint local_c0;
  float *local_b8;
  undefined1 (*local_b0) [16];
  undefined1 (*local_a8) [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_aa8;
  lVar9 = *param_1;
  uVar41 = *(uint *)(lVar9 + 0x10);
  uVar53 = (ulonglong)uVar41;
  if ((uVar53 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar42 = *(uint *)(lVar9 + 0x1c) >> 1 & 1;
    uVar56 = uVar41 + 0xf >> 4;
    uVar54 = uVar41 + 0xf & 0xfffffff0;
    local_a80 = uVar56 - 1;
    local_a7c = 0xaaaaaaaa;
    if (uVar41 != uVar54) {
      local_a7c = ~(0xffffffffU >> (((char)uVar41 - (char)uVar54) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a81 = *(char *)((longlong)param_1 + 0x1f);
    local_a68 = (ulonglong)*(uint *)(lVar9 + 0x48) + lVar9 + 0x20;
    local_a70 = (ulonglong)uVar56;
    uVar51 = 0;
    local_c8 = 0;
    local_c0 = *(uint *)(lVar9 + 0x34);
    _Src = (float *)((ulonglong)*(uint *)(lVar9 + 0x4c) + lVar9 + 0x20);
    local_b0 = (undefined1 (*) [16])
               ((longlong)_Src +
               (ulonglong)
               (((uint)(*(char *)((longlong)param_1 + 0x1c) == '\0') * 4 + 0xc) * local_c0));
    local_a8 = (undefined1 (*) [16])(*local_b0 + (uint)(*(int *)(lVar9 + 0x38) * 0xc));
    local_858 = 0;
    local_648 = 0;
    local_438 = 0;
    local_a78 = param_1;
    local_b8 = _Src;
    FUN_1498407cc(local_a58,param_1);
    local_a60 = (ulonglong)local_a80;
    uVar43 = (ulonglong)(uVar56 + (uVar56 == 0));
    uVar41 = 3;
    auVar66 = ZEXT816(0);
    do {
      uVar54 = 0xaaaaaaaa;
      if (uVar51 == local_a60) {
        uVar54 = local_a7c;
      }
      uVar54 = uVar54 & 0xaaaaaaaaU - *(int *)(local_a68 + uVar51 * 4);
      uVar56 = uVar54;
      uVar44 = uVar41;
      auVar26 = _DAT_1499314a0;
      while (_DAT_1499314a0 = auVar26, uVar54 != 0) {
        if ((uVar56 & 0xaa000000) != 0) {
          if (((int)uVar56 < 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar44 - 3) * 6),
             uVar8 != 0xffff)) {
            lVar9 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            *(undefined1 (*) [16])(lVar9 + uVar50) = auVar66;
            puVar2 = (undefined4 *)(lVar9 + 0x10 + uVar50);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0x3ff00000;
          }
          if (((uVar56 >> 0x1d & 1) != 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar44 - 2) * 6),
             uVar8 != 0xffff)) {
            lVar9 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            *(undefined1 (*) [16])(lVar9 + uVar50) = auVar66;
            puVar2 = (undefined4 *)(lVar9 + 0x10 + uVar50);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0x3ff00000;
          }
          if (((uVar56 >> 0x1b & 1) != 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar44 - 1) * 6),
             uVar8 != 0xffff)) {
            lVar9 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            *(undefined1 (*) [16])(lVar9 + uVar50) = auVar66;
            puVar2 = (undefined4 *)(lVar9 + 0x10 + uVar50);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0x3ff00000;
          }
          if (((uVar56 >> 0x19 & 1) != 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar44 * 6),
             uVar8 != 0xffff)) {
            lVar9 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            *(undefined1 (*) [16])(lVar9 + uVar50) = auVar66;
            puVar2 = (undefined4 *)(lVar9 + 0x10 + uVar50);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0x3ff00000;
          }
        }
        uVar44 = uVar44 + 4;
        uVar54 = uVar56 & 0xffffff;
        uVar56 = uVar56 << 8;
        auVar26 = _DAT_1499314a0;
      }
      uVar51 = uVar51 + 1;
      uVar41 = uVar41 + 0x10;
    } while (uVar51 != uVar43);
    uVar41 = 0;
    uVar54 = 3;
    uVar51 = 0;
    plVar55 = local_a78;
    do {
      uVar44 = *(uint *)(local_a68 + uVar51 * 4) & 0x55555555;
      uVar40 = uVar54;
      uVar56 = uVar44;
      if ((local_c0 != 0) && ((uint)local_c8 - uVar41 < 0x10)) {
        uVar50 = 0x10;
        if (local_c0 < 0x10) {
          uVar50 = (ulonglong)local_c0;
        }
        iVar49 = (int)uVar50;
        uVar41 = (uint)local_c8 & 0x1f;
        local_c0 = local_c0 - iVar49;
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 + iVar49);
        _Dst = (float *)((longlong)afStack_2c8 + (ulonglong)(uVar41 << 4));
        pfVar47 = _Src;
        if (*(char *)((longlong)plVar55 + 0x1c) == '\0') {
          memcpy(_Dst,_Src,(ulonglong)(iVar49 - 1) * 0x10 + 0x10);
          _Src = _Src + (ulonglong)(iVar49 - 1) * 4 + 4;
          plVar55 = local_a78;
        }
        else {
          do {
            uVar45 = 4;
            if ((uint)uVar50 < 4) {
              uVar45 = uVar50;
            }
            iVar49 = (int)uVar45;
            _Src = (float *)((ulonglong)(uint)(iVar49 * 0xc) + (longlong)pfVar47);
            fVar28 = *pfVar47;
            fVar29 = pfVar47[1];
            fVar30 = pfVar47[2];
            fVar31 = pfVar47[3];
            pfVar1 = (float *)((longlong)pfVar47 + (ulonglong)(uint)(iVar49 * 4));
            fVar32 = *pfVar1;
            fVar33 = pfVar1[1];
            fVar34 = pfVar1[2];
            fVar35 = pfVar1[3];
            pfVar47 = pfVar47 + uVar45 * 2;
            fVar36 = *pfVar47;
            fVar37 = pfVar47[1];
            fVar38 = pfVar47[2];
            fVar39 = pfVar47[3];
            auVar65._0_8_ =
                 CONCAT44(((auVar26._4_4_ - fVar29 * fVar29) - fVar33 * fVar33) - fVar37 * fVar37,
                          ((auVar26._0_4_ - fVar28 * fVar28) - fVar32 * fVar32) - fVar36 * fVar36) &
                 0x7fffffff7fffffff;
            auVar65._8_4_ =
                 ABS(((auVar26._8_4_ - fVar30 * fVar30) - fVar34 * fVar34) - fVar38 * fVar38);
            auVar65._12_4_ =
                 ABS(((auVar26._12_4_ - fVar31 * fVar31) - fVar35 * fVar35) - fVar39 * fVar39);
            auVar66 = sqrtps(auVar65,auVar65);
            fVar64 = auVar66._0_4_;
            fVar67 = auVar66._4_4_;
            fVar68 = auVar66._8_4_;
            fVar69 = auVar66._12_4_;
            auVar63._0_4_ = fVar64 * fVar64 + fVar32 * fVar32 + fVar28 * fVar28 + fVar36 * fVar36;
            auVar63._4_4_ = fVar67 * fVar67 + fVar33 * fVar33 + fVar29 * fVar29 + fVar37 * fVar37;
            auVar63._8_4_ = fVar68 * fVar68 + fVar34 * fVar34 + fVar30 * fVar30 + fVar38 * fVar38;
            auVar63._12_4_ = fVar69 * fVar69 + fVar35 * fVar35 + fVar31 * fVar31 + fVar39 * fVar39;
            auVar66 = sqrtps(auVar63,auVar63);
            auVar66 = divps(auVar26,auVar66);
            fVar70 = auVar66._0_4_;
            fVar71 = auVar66._4_4_;
            fVar72 = auVar66._8_4_;
            fVar73 = auVar66._12_4_;
            auVar66._4_4_ = fVar35 * fVar73;
            auVar66._0_4_ = fVar31 * fVar73;
            auVar66._8_4_ = fVar39 * fVar73;
            auVar66._12_4_ = fVar73 * fVar69;
            *_Dst = fVar28 * fVar70;
            _Dst[1] = fVar32 * fVar70;
            _Dst[2] = fVar36 * fVar70;
            _Dst[3] = fVar70 * fVar64;
            _Dst[4] = fVar29 * fVar71;
            _Dst[5] = fVar33 * fVar71;
            _Dst[6] = fVar37 * fVar71;
            _Dst[7] = fVar71 * fVar67;
            _Dst[8] = fVar30 * fVar72;
            _Dst[9] = fVar34 * fVar72;
            _Dst[10] = fVar38 * fVar72;
            _Dst[0xb] = fVar72 * fVar68;
            *(undefined1 (*) [16])(_Dst + 0xc) = auVar66;
            _Dst = _Dst + 0x10;
            uVar41 = (uint)uVar50 - iVar49;
            uVar50 = (ulonglong)uVar41;
            pfVar47 = _Src;
          } while (uVar41 != 0);
        }
        local_b8 = _Src;
        uVar41 = local_c8._4_4_;
      }
      while (uVar56 != 0) {
        if ((uVar44 & 0x55000000) != 0) {
          uVar56 = uVar41;
          if (uVar44 >> 0x1e != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar40 - 3) * 6);
            uVar56 = uVar41 + 1;
            if (uVar8 != 0xffff) {
              uVar50 = (ulonglong)((uVar41 & 0x1f) << 4);
              lVar9 = *(longlong *)(param_2 + 0x18);
              uVar45 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2c8 + uVar50);
              uVar6 = *(undefined8 *)((longlong)auStack_2c0 + uVar50);
              pdVar4 = (double *)(lVar9 + uVar45);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar58._0_8_ = (double)(float)uVar6;
              auVar58._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar9 + 0x10 + uVar45) = auVar58;
            }
          }
          uVar41 = uVar56;
          if ((uVar44 >> 0x1c & 1) != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar40 - 2) * 6);
            uVar41 = uVar56 + 1;
            if (uVar8 != 0xffff) {
              uVar50 = (ulonglong)((uVar56 & 0x1f) << 4);
              lVar9 = *(longlong *)(param_2 + 0x18);
              uVar45 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2c8 + uVar50);
              uVar6 = *(undefined8 *)((longlong)auStack_2c0 + uVar50);
              pdVar4 = (double *)(lVar9 + uVar45);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar59._0_8_ = (double)(float)uVar6;
              auVar59._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar9 + 0x10 + uVar45) = auVar59;
            }
          }
          uVar56 = uVar41;
          if ((uVar44 >> 0x1a & 1) != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar40 - 1) * 6);
            uVar56 = uVar41 + 1;
            if (uVar8 != 0xffff) {
              uVar50 = (ulonglong)((uVar41 & 0x1f) << 4);
              lVar9 = *(longlong *)(param_2 + 0x18);
              uVar45 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2c8 + uVar50);
              uVar6 = *(undefined8 *)((longlong)auStack_2c0 + uVar50);
              pdVar4 = (double *)(lVar9 + uVar45);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar60._0_8_ = (double)(float)uVar6;
              auVar60._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar9 + 0x10 + uVar45) = auVar60;
            }
          }
          uVar41 = uVar56;
          if ((uVar44 >> 0x18 & 1) != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar40 * 6);
            uVar41 = uVar56 + 1;
            if (uVar8 != 0xffff) {
              uVar50 = (ulonglong)((uVar56 & 0x1f) << 4);
              lVar9 = *(longlong *)(param_2 + 0x18);
              uVar45 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2c8 + uVar50);
              uVar6 = *(undefined8 *)((longlong)auStack_2c0 + uVar50);
              pdVar4 = (double *)(lVar9 + uVar45);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              auVar61._0_8_ = (double)(float)uVar6;
              auVar61._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
              *(undefined1 (*) [16])(lVar9 + 0x10 + uVar45) = auVar61;
            }
          }
        }
        uVar56 = uVar44 & 0xffffff;
        uVar44 = uVar44 << 8;
        uVar40 = uVar40 + 4;
      }
      local_c8 = CONCAT44(uVar41,(uint)local_c8);
      uVar56 = (int)uVar51 + 1;
      uVar51 = (ulonglong)uVar56;
      uVar54 = uVar54 + 0x10;
    } while (uVar56 <= local_a80);
    lVar9 = local_a68 + local_a70 * 4;
    uVar41 = 3;
    uVar51 = 0;
    do {
      uVar54 = 0xaaaaaaaa;
      if (uVar51 == local_a60) {
        uVar54 = local_a7c;
      }
      uVar54 = uVar54 & 0xaaaaaaaaU - *(int *)(lVar9 + uVar51 * 4);
      uVar56 = uVar54;
      uVar44 = uVar41;
      while (uVar54 != 0) {
        if ((uVar56 & 0xaa000000) != 0) {
          if (((int)uVar56 < 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar44 - 3) * 6),
             uVar8 != 0xffff)) {
            lVar46 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            puVar3 = (undefined8 *)(lVar46 + 0x30 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar46 + 0x20 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          if (((uVar56 >> 0x1d & 1) != 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar44 - 2) * 6),
             uVar8 != 0xffff)) {
            lVar46 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            puVar3 = (undefined8 *)(lVar46 + 0x30 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar46 + 0x20 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          if (((uVar56 >> 0x1b & 1) != 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar44 - 1) * 6),
             uVar8 != 0xffff)) {
            lVar46 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            puVar3 = (undefined8 *)(lVar46 + 0x30 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar46 + 0x20 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          if (((uVar56 >> 0x19 & 1) != 0) &&
             (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar44 * 6),
             uVar8 != 0xffff)) {
            lVar46 = *(longlong *)(param_2 + 0x18);
            uVar50 = (ulonglong)((uint)uVar8 * 0x60);
            puVar3 = (undefined8 *)(lVar46 + 0x30 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar46 + 0x20 + uVar50);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
        }
        uVar44 = uVar44 + 4;
        uVar54 = uVar56 & 0xffffff;
        uVar56 = uVar56 << 8;
      }
      uVar51 = uVar51 + 1;
      uVar41 = uVar41 + 0x10;
    } while (uVar51 != uVar43);
    local_a70 = lVar9 + local_a70 * 4;
    uVar41 = 3;
    uVar51 = 0;
    do {
      uVar54 = *(uint *)(lVar9 + uVar51 * 4) & 0x55555555;
      uVar56 = uVar54;
      uVar44 = uVar41;
      while (uVar54 != 0) {
        if ((uVar56 & 0x55000000) != 0) {
          pauVar48 = local_b0;
          if (uVar56 >> 0x1e != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar44 - 3) * 6);
            pauVar48 = (undefined1 (*) [16])(*local_b0 + 0xc);
            if (uVar8 != 0xffff) {
              auVar66 = *local_b0;
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar50 = (ulonglong)((uint)uVar8 * 0x60);
              auVar26._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar26._0_8_ = (double)auVar66._0_4_;
              auVar26._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar50) = auVar26;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar50);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
          pauVar52 = pauVar48;
          if ((uVar56 >> 0x1c & 1) != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar44 - 2) * 6);
            pauVar52 = (undefined1 (*) [16])(*pauVar48 + 0xc);
            if (uVar8 != 0xffff) {
              auVar66 = *pauVar48;
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar50 = (ulonglong)((uint)uVar8 * 0x60);
              auVar25._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar25._0_8_ = (double)auVar66._0_4_;
              auVar25._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar50) = auVar25;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar50);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
          pauVar48 = pauVar52;
          if ((uVar56 >> 0x1a & 1) != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar44 - 1) * 6);
            pauVar48 = (undefined1 (*) [16])(*pauVar52 + 0xc);
            if (uVar8 != 0xffff) {
              auVar66 = *pauVar52;
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar50 = (ulonglong)((uint)uVar8 * 0x60);
              auVar24._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar24._0_8_ = (double)auVar66._0_4_;
              auVar24._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar50) = auVar24;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar50);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
          local_b0 = pauVar48;
          if ((uVar56 >> 0x18 & 1) != 0) {
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar44 * 6);
            local_b0 = (undefined1 (*) [16])(*pauVar48 + 0xc);
            if (uVar8 != 0xffff) {
              auVar66 = *pauVar48;
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar50 = (ulonglong)((uint)uVar8 * 0x60);
              auVar23._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar23._0_8_ = (double)auVar66._0_4_;
              auVar23._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar50) = auVar23;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar50);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
        }
        uVar44 = uVar44 + 4;
        uVar54 = uVar56 & 0xffffff;
        uVar56 = uVar56 << 8;
      }
      uVar51 = uVar51 + 1;
      uVar41 = uVar41 + 0x10;
    } while (uVar51 != uVar43);
    dVar57 = (double)uVar42;
    dVar62 = (double)uVar42;
    dVar27 = (double)uVar42;
    if (local_a81 == '\0') {
      lVar46 = 4;
      do {
        uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + lVar46);
        if (uVar8 != 0xffff) {
          lVar10 = *(longlong *)(param_2 + 0x18);
          uVar51 = (ulonglong)((uint)uVar8 * 0x60);
          pdVar4 = (double *)(lVar10 + 0x40 + uVar51);
          *pdVar4 = dVar57;
          pdVar4[1] = dVar62;
          pdVar4 = (double *)(lVar10 + 0x50 + uVar51);
          *pdVar4 = dVar27;
          pdVar4[1] = 0.0;
        }
        lVar46 = lVar46 + 6;
        uVar53 = uVar53 - 1;
      } while (uVar53 != 0);
    }
    else {
      uVar41 = 3;
      uVar53 = 0;
      do {
        uVar42 = 0xaaaaaaaa;
        if (uVar53 == local_a60) {
          uVar42 = local_a7c;
        }
        uVar42 = uVar42 & 0xaaaaaaaaU - *(int *)(local_a70 + uVar53 * 4);
        uVar54 = uVar42;
        uVar56 = uVar41;
        while (uVar42 != 0) {
          if ((uVar54 & 0xaa000000) != 0) {
            if (((int)uVar54 < 0) &&
               (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 3) * 6)
               , uVar8 != 0xffff)) {
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar4 = (double *)(lVar46 + 0x40 + uVar51);
              *pdVar4 = dVar57;
              pdVar4[1] = dVar62;
              pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
              *pdVar4 = dVar27;
              pdVar4[1] = 0.0;
            }
            if (((uVar54 >> 0x1d & 1) != 0) &&
               (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 2) * 6)
               , uVar8 != 0xffff)) {
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar4 = (double *)(lVar46 + 0x40 + uVar51);
              *pdVar4 = dVar57;
              pdVar4[1] = dVar62;
              pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
              *pdVar4 = dVar27;
              pdVar4[1] = 0.0;
            }
            if (((uVar54 >> 0x1b & 1) != 0) &&
               (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 1) * 6)
               , uVar8 != 0xffff)) {
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar4 = (double *)(lVar46 + 0x40 + uVar51);
              *pdVar4 = dVar57;
              pdVar4[1] = dVar62;
              pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
              *pdVar4 = dVar27;
              pdVar4[1] = 0.0;
            }
            if (((uVar54 >> 0x19 & 1) != 0) &&
               (uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar56 * 6),
               uVar8 != 0xffff)) {
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              pdVar4 = (double *)(lVar46 + 0x40 + uVar51);
              *pdVar4 = dVar57;
              pdVar4[1] = dVar62;
              pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
              *pdVar4 = dVar27;
              pdVar4[1] = 0.0;
            }
          }
          uVar56 = uVar56 + 4;
          uVar42 = uVar54 & 0xffffff;
          uVar54 = uVar54 << 8;
        }
        uVar53 = uVar53 + 1;
        uVar41 = uVar41 + 0x10;
      } while (uVar53 != uVar43);
      uVar41 = 3;
      uVar53 = 0;
      do {
        uVar42 = *(uint *)(local_a70 + uVar53 * 4) & 0x55555555;
        uVar54 = uVar42;
        uVar56 = uVar41;
        while (uVar42 != 0) {
          if ((uVar54 & 0x55000000) != 0) {
            pauVar48 = local_a8;
            if (uVar54 >> 0x1e != 0) {
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 3) * 6);
              pauVar48 = (undefined1 (*) [16])(*local_a8 + 0xc);
              if (uVar8 != 0xffff) {
                auVar66 = *local_a8;
                lVar46 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar22._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar22._0_8_ = (double)auVar66._0_4_;
                auVar22._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar46 + 0x40 + uVar51) = auVar22;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
            pauVar52 = pauVar48;
            if ((uVar54 >> 0x1c & 1) != 0) {
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 2) * 6);
              pauVar52 = (undefined1 (*) [16])(*pauVar48 + 0xc);
              if (uVar8 != 0xffff) {
                auVar66 = *pauVar48;
                lVar46 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar21._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar21._0_8_ = (double)auVar66._0_4_;
                auVar21._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar46 + 0x40 + uVar51) = auVar21;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
            pauVar48 = pauVar52;
            if ((uVar54 >> 0x1a & 1) != 0) {
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 1) * 6);
              pauVar48 = (undefined1 (*) [16])(*pauVar52 + 0xc);
              if (uVar8 != 0xffff) {
                auVar66 = *pauVar52;
                lVar46 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar20._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar20._0_8_ = (double)auVar66._0_4_;
                auVar20._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar46 + 0x40 + uVar51) = auVar20;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
            local_a8 = pauVar48;
            if ((uVar54 >> 0x18 & 1) != 0) {
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar56 * 6);
              local_a8 = (undefined1 (*) [16])(*pauVar48 + 0xc);
              if (uVar8 != 0xffff) {
                auVar66 = *pauVar48;
                lVar46 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar19._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar19._0_8_ = (double)auVar66._0_4_;
                auVar19._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar46 + 0x40 + uVar51) = auVar19;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar46 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
          }
          uVar56 = uVar56 + 4;
          uVar42 = uVar54 & 0xffffff;
          uVar54 = uVar54 << 8;
        }
        uVar53 = uVar53 + 1;
        uVar41 = uVar41 + 0x10;
      } while (uVar53 != uVar43);
    }
    bVar7 = *(byte *)((longlong)local_a78 + 0x32);
    uVar53 = 0;
    uVar41 = 3;
    plVar55 = local_a78;
    do {
      uVar42 = *(uint *)(local_a68 + uVar53 * 4) & 0xaaaaaaaa;
      uVar54 = uVar42;
      uVar56 = uVar41;
      while (uVar42 != 0) {
        if ((uVar54 & 0xaa000000) != 0) {
          FUN_149840a02(local_a58,plVar55);
          if ((int)uVar54 < 0) {
            uVar42 = local_858._4_4_;
            local_858 = CONCAT44(local_858._4_4_ + 1,(undefined4)local_858);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar56 - 3) * 6);
            if (uVar8 != 0xffff) {
              uVar51 = (ulonglong)((uVar42 & 7) << 4);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar43 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar4 = (double *)(lVar46 + uVar43);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar46 + 0x10 + uVar43);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar54 >> 0x1d & 1) != 0) {
            uVar42 = local_858._4_4_;
            local_858 = CONCAT44(local_858._4_4_ + 1,(undefined4)local_858);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar56 - 2) * 6);
            if (uVar8 != 0xffff) {
              uVar51 = (ulonglong)((uVar42 & 7) << 4);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar43 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar4 = (double *)(lVar46 + uVar43);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar46 + 0x10 + uVar43);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar54 >> 0x1b & 1) != 0) {
            uVar42 = local_858._4_4_;
            local_858 = CONCAT44(local_858._4_4_ + 1,(undefined4)local_858);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar56 - 1) * 6);
            if (uVar8 != 0xffff) {
              uVar51 = (ulonglong)((uVar42 & 7) << 4);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar43 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar4 = (double *)(lVar46 + uVar43);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar46 + 0x10 + uVar43);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          plVar55 = local_a78;
          if ((uVar54 >> 0x19 & 1) != 0) {
            uVar42 = local_858._4_4_;
            local_858 = CONCAT44(local_858._4_4_ + 1,(undefined4)local_858);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar56 * 6);
            if (uVar8 != 0xffff) {
              uVar51 = (ulonglong)((uVar42 & 7) << 4);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar43 = (ulonglong)((uint)uVar8 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80);
              uVar6 = *(undefined8 *)((longlong)local_a58 + uVar51 + (ulonglong)bVar7 * 0x80 + 8);
              pdVar4 = (double *)(lVar46 + uVar43);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar46 + 0x10 + uVar43);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
        }
        uVar56 = uVar56 + 4;
        uVar42 = uVar54 & 0xffffff;
        uVar54 = uVar54 << 8;
      }
      uVar42 = (int)uVar53 + 1;
      uVar53 = (ulonglong)uVar42;
      uVar41 = uVar41 + 0x10;
    } while (uVar42 <= local_a80);
    bVar7 = *(byte *)((longlong)plVar55 + 0x32);
    uVar53 = 0;
    uVar41 = 3;
    do {
      uVar42 = *(uint *)(lVar9 + uVar53 * 4) & 0xaaaaaaaa;
      uVar54 = uVar42;
      uVar56 = uVar41;
      while (uVar42 != 0) {
        if ((uVar54 & 0xaa000000) != 0) {
          FUN_14984173e(local_a58,plVar55);
          if ((int)uVar54 < 0) {
            uVar42 = local_648._4_4_;
            local_648 = CONCAT44(local_648._4_4_ + 1,(undefined4)local_648);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar56 - 3) * 6);
            if (uVar8 != 0xffff) {
              auVar66 = *(undefined1 (*) [16])
                         (local_848 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              auVar18._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar18._0_8_ = (double)auVar66._0_4_;
              auVar18._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar51) = auVar18;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar51);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
          if ((uVar54 >> 0x1d & 1) != 0) {
            uVar42 = local_648._4_4_;
            local_648 = CONCAT44(local_648._4_4_ + 1,(undefined4)local_648);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar56 - 2) * 6);
            if (uVar8 != 0xffff) {
              auVar66 = *(undefined1 (*) [16])
                         (local_848 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              auVar15._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar15._0_8_ = (double)auVar66._0_4_;
              auVar15._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar51) = auVar15;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar51);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
          if ((uVar54 >> 0x1b & 1) != 0) {
            uVar42 = local_648._4_4_;
            local_648 = CONCAT44(local_648._4_4_ + 1,(undefined4)local_648);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar56 - 1) * 6);
            if (uVar8 != 0xffff) {
              auVar66 = *(undefined1 (*) [16])
                         (local_848 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              auVar16._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar16._0_8_ = (double)auVar66._0_4_;
              auVar16._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar51) = auVar16;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar51);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
          plVar55 = local_a78;
          if ((uVar54 >> 0x19 & 1) != 0) {
            uVar42 = local_648._4_4_;
            local_648 = CONCAT44(local_648._4_4_ + 1,(undefined4)local_648);
            uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar56 * 6);
            if (uVar8 != 0xffff) {
              auVar66 = *(undefined1 (*) [16])
                         (local_848 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
              lVar46 = *(longlong *)(param_2 + 0x18);
              uVar51 = (ulonglong)((uint)uVar8 * 0x60);
              auVar17._8_4_ = SUB84((double)auVar66._4_4_,0);
              auVar17._0_8_ = (double)auVar66._0_4_;
              auVar17._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar46 + 0x20 + uVar51) = auVar17;
              auVar66 = insertps(auVar66,auVar66,0x8e);
              pdVar4 = (double *)(lVar46 + 0x30 + uVar51);
              *pdVar4 = (double)auVar66._0_4_;
              pdVar4[1] = (double)auVar66._4_4_;
            }
          }
        }
        uVar56 = uVar56 + 4;
        uVar42 = uVar54 & 0xffffff;
        uVar54 = uVar54 << 8;
      }
      uVar42 = (int)uVar53 + 1;
      uVar53 = (ulonglong)uVar42;
      uVar41 = uVar41 + 0x10;
    } while (uVar42 <= local_a80);
    if (local_a81 != '\0') {
      bVar7 = *(byte *)((longlong)plVar55 + 0x32);
      uVar53 = 0;
      uVar41 = 3;
      do {
        uVar42 = *(uint *)(local_a70 + uVar53 * 4) & 0xaaaaaaaa;
        uVar54 = uVar42;
        uVar56 = uVar41;
        while (uVar42 != 0) {
          if ((uVar54 & 0xaa000000) != 0) {
            FUN_149841b0a(local_a58,plVar55);
            if ((int)uVar54 < 0) {
              uVar42 = local_438._4_4_;
              local_438 = CONCAT44(local_438._4_4_ + 1,(undefined4)local_438);
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 3) * 6);
              if (uVar8 != 0xffff) {
                auVar66 = *(undefined1 (*) [16])
                           (local_638 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar9 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar14._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar14._0_8_ = (double)auVar66._0_4_;
                auVar14._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar9 + 0x40 + uVar51) = auVar14;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar9 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
            if ((uVar54 >> 0x1d & 1) != 0) {
              uVar42 = local_438._4_4_;
              local_438 = CONCAT44(local_438._4_4_ + 1,(undefined4)local_438);
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 2) * 6);
              if (uVar8 != 0xffff) {
                auVar66 = *(undefined1 (*) [16])
                           (local_638 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar9 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar11._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar11._0_8_ = (double)auVar66._0_4_;
                auVar11._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar9 + 0x40 + uVar51) = auVar11;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar9 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
            if ((uVar54 >> 0x1b & 1) != 0) {
              uVar42 = local_438._4_4_;
              local_438 = CONCAT44(local_438._4_4_ + 1,(undefined4)local_438);
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 1) * 6);
              if (uVar8 != 0xffff) {
                auVar66 = *(undefined1 (*) [16])
                           (local_638 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar9 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar12._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar12._0_8_ = (double)auVar66._0_4_;
                auVar12._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar9 + 0x40 + uVar51) = auVar12;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar9 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
            plVar55 = local_a78;
            if ((uVar54 >> 0x19 & 1) != 0) {
              uVar42 = local_438._4_4_;
              local_438 = CONCAT44(local_438._4_4_ + 1,(undefined4)local_438);
              uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar56 * 6);
              if (uVar8 != 0xffff) {
                auVar66 = *(undefined1 (*) [16])
                           (local_638 + (ulonglong)((uVar42 & 7) << 4) + (ulonglong)bVar7 * 0x80);
                lVar9 = *(longlong *)(param_2 + 0x18);
                uVar51 = (ulonglong)((uint)uVar8 * 0x60);
                auVar13._8_4_ = SUB84((double)auVar66._4_4_,0);
                auVar13._0_8_ = (double)auVar66._0_4_;
                auVar13._12_4_ = (int)((ulonglong)(double)auVar66._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar9 + 0x40 + uVar51) = auVar13;
                auVar66 = insertps(auVar66,auVar66,0x8e);
                pdVar4 = (double *)(lVar9 + 0x50 + uVar51);
                *pdVar4 = (double)auVar66._0_4_;
                pdVar4[1] = (double)auVar66._4_4_;
              }
            }
          }
          uVar56 = uVar56 + 4;
          uVar42 = uVar54 & 0xffffff;
          uVar54 = uVar54 << 8;
        }
        uVar42 = (int)uVar53 + 1;
        uVar53 = (ulonglong)uVar42;
        uVar41 = uVar41 + 0x10;
      } while (uVar42 <= local_a80);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_aa8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149843306 FUN_149843306 body=2321 status=ok
// SIG undefined FUN_149843306(void)

void FUN_149843306(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  char cVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar41;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar43;
  float fVar44;
  undefined1 in_XMM1 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_ad8 [44];
  uint local_aac;
  uint local_aa8;
  uint local_aa4;
  uint local_aa0;
  uint local_a9c;
  ulonglong local_a98;
  ulonglong local_a90;
  longlong *local_a88;
  uint local_a80;
  uint local_a7c;
  uint local_a78;
  uint local_a74;
  longlong *local_a70;
  ulonglong local_a68;
  longlong local_a60;
  longlong local_a58;
  ulonglong local_a50;
  longlong local_a48;
  ulonglong local_a40;
  undefined1 local_a38 [512];
  undefined8 local_838;
  undefined8 local_628;
  undefined8 local_418;
  undefined1 local_380 [8];
  undefined1 local_378 [72];
  undefined1 local_330 [32];
  undefined1 local_310 [32];
  undefined1 local_2f0 [32];
  undefined1 local_2d0 [40];
  undefined1 local_2a8 [512];
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_ad8;
  lVar15 = *param_1;
  uVar16 = (uint)param_2;
  if ((uVar16 < *(uint *)(lVar15 + 0x10)) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar11 = (ulonglong)(*(uint *)(lVar15 + 0x10) + 0xf >> 4);
    uVar22 = (ulonglong)*(uint *)(lVar15 + 0x48) + 0x20 + lVar15;
    lVar1 = uVar22 + uVar11 * 4;
    uVar11 = lVar1 + uVar11 * 4;
    if (*(byte *)((longlong)param_1 + 0x1f) == 0) {
      uVar11 = uVar22;
    }
    uVar34 = -(uint)*(byte *)((longlong)param_1 + 0x1f);
    local_a98 = param_2 >> 4 & 0xfffffff;
    uVar12 = (ulonglong)(uint)((int)local_a98 * 4);
    bVar13 = ~((char)param_2 * '\x02') & 0x1e;
    uVar20 = *(uint *)(uVar12 + uVar22) >> bVar13;
    uVar23 = uVar20 & 3;
    uVar25 = *(uint *)(uVar12 + lVar1) >> bVar13;
    uVar29 = uVar25 & 3;
    uVar9 = *(uint *)(uVar11 + uVar12) >> bVar13 & uVar34;
    uVar14 = uVar9 & 3;
    local_a74 = uVar29 | uVar23 | uVar14;
    if (local_a74 == 0) {
      param_2 = param_2 & 0xffffffff;
      lVar15 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar2 = (double *)(*param_3 + lVar15);
      dVar4 = pdVar2[1];
      pdVar3 = (double *)(*param_3 + 0x10 + lVar15);
      dVar7 = *pdVar3;
      dVar8 = pdVar3[1];
      pdVar3 = (double *)param_3[2];
      *pdVar3 = (double)(float)*pdVar2;
      pdVar3[1] = (double)(float)dVar4;
      pdVar3[2] = (double)(float)dVar7;
      pdVar3[3] = (double)(float)dVar8;
      lVar15 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar2 = (double *)(*param_3 + 0x20 + lVar15);
      dVar7 = pdVar2[1];
      dVar4 = *(double *)(*param_3 + 0x30 + lVar15);
      lVar15 = param_3[2];
      *(double *)(lVar15 + 0x20) = (double)(float)*pdVar2;
      *(double *)(lVar15 + 0x28) = (double)(float)dVar7;
      auVar39 = blendps(ZEXT416((uint)(float)dVar4),ZEXT816(0),0xe);
      *(double *)(lVar15 + 0x30) = (double)auVar39._0_4_;
      *(double *)(lVar15 + 0x38) = (double)auVar39._4_4_;
      lVar15 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar2 = (double *)(*param_3 + 0x40 + lVar15);
      dVar7 = pdVar2[1];
      dVar4 = *(double *)(*param_3 + 0x50 + lVar15);
      lVar15 = param_3[2];
      *(double *)(lVar15 + 0x40) = (double)(float)*pdVar2;
      *(double *)(lVar15 + 0x48) = (double)(float)dVar7;
      auVar39 = blendps(ZEXT416((uint)(float)dVar4),ZEXT816(0),0xe);
      fVar44 = auVar39._0_4_;
      fVar35 = auVar39._4_4_;
    }
    else {
      uVar10 = (uVar16 & 0xfffffff0) + 0x10;
      local_a60 = lVar15 + 0x20;
      local_a9c = ~(0xffffffffU >> (((char)param_2 - (char)uVar10) * '\x02' & 0x1fU));
      if (uVar16 == uVar10) {
        local_a9c = 0xffffffff;
      }
      local_a40 = local_a98 + 1;
      uVar12 = 0;
      uVar24 = 0;
      uVar26 = 0 >> bVar13;
      uVar10 = 0;
      uVar17 = 0;
      uVar33 = 0;
      uVar19 = 0;
      do {
        uVar32 = 0xffffffff;
        if (local_a98 == uVar12) {
          uVar32 = local_a9c;
        }
        uVar27 = *(uint *)(uVar22 + uVar12 * 4) & uVar32;
        uVar21 = *(uint *)(lVar1 + uVar12 * 4) & uVar32;
        uVar32 = *(uint *)(uVar11 + uVar12 * 4) & uVar34 & uVar32;
        uVar30 = (uVar27 >> 2 & 0x11111111) + (uVar27 & 0x11111111);
        uVar24 = uVar24 + (((uVar30 >> 4) + uVar30 & 0x7070707) * 0x1010101 >> 0x18);
        uVar27 = (uVar27 & 0xaaaaaaaa) - (uVar27 >> 1 & 0x55555555);
        uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
        uVar17 = uVar17 + (((uVar27 >> 4) + uVar27 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar27 = (uVar21 >> 2 & 0x11111111) + (uVar21 & 0x11111111);
        uVar26 = uVar26 + (((uVar27 >> 4) + uVar27 & 0x7070707) * 0x1010101 >> 0x18);
        uVar21 = (uVar21 & 0xaaaaaaaa) - (uVar21 >> 1 & 0x55555555);
        uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
        uVar33 = uVar33 + (((uVar21 >> 4) + uVar21 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar21 = (uVar32 >> 2 & 0x11111111) + (uVar32 & 0x11111111);
        uVar10 = uVar10 + (((uVar21 >> 4) + uVar21 & 0x7070707) * 0x1010101 >> 0x18);
        uVar32 = (uVar32 & 0xaaaaaaaa) - (uVar32 >> 1 & 0x55555555);
        uVar32 = (uVar32 >> 2 & 0x33333333) + (uVar32 & 0x33333333);
        uVar32 = (uVar32 >> 4) + uVar32 & 0xf0f0f0f;
        uVar31 = (ulonglong)uVar32;
        uVar32 = uVar32 * 0x1010101 >> 0x18;
        uVar19 = uVar19 + uVar32;
        uVar12 = uVar12 + 1;
      } while (local_a40 != uVar12);
      local_a8 = 0;
      if ((local_a74 & 1) == 0) {
        local_aa8 = 0;
        uVar12 = 0;
        uVar34 = 0;
        uVar28 = (ulonglong)uVar32;
      }
      else {
        local_a0 = *(int *)(lVar15 + 0x34);
        local_98 = (ulonglong)*(uint *)(lVar15 + 0x4c) + local_a60;
        local_90 = (ulonglong)
                   (((uint)(*(char *)((longlong)param_1 + 0x1c) == '\0') * 4 + 0xc) * local_a0) +
                   local_98;
        uVar31 = (uint)(*(int *)(lVar15 + 0x38) * 0xc) + local_90;
        local_aa8 = 0;
        if (((uVar20 & 1) != 0) && (local_aa8 = uVar24 & 3, 3 < uVar24)) {
          uVar24 = uVar24 & 0xfffffffc;
          local_a0 = local_a0 - uVar24;
          lVar18 = (ulonglong)uVar24 * 0xc;
          if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
            lVar18 = (ulonglong)uVar24 << 4;
          }
          local_98 = local_98 + lVar18;
        }
        if ((uVar25 & 1) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulonglong)(uVar26 & 3);
          if (3 < uVar26) {
            local_90 = local_90 + (ulonglong)(uVar26 & 0xfffffffc) * 0xc;
          }
        }
        uVar34 = 0;
        uVar28 = local_90;
        local_88 = uVar31;
        if (((uVar9 & 1) != 0) && (uVar34 = uVar10 & 3, 3 < uVar10)) {
          uVar31 = uVar31 + (ulonglong)(uVar10 & 0xfffffffc) * 0xc;
          local_88 = uVar31;
        }
      }
      local_838 = 0;
      local_628 = 0;
      local_418 = 0;
      local_aac = uVar25;
      local_aa4 = uVar20;
      local_aa0 = uVar9;
      local_a90 = uVar22;
      local_a88 = param_3;
      local_a80 = uVar23;
      local_a7c = uVar29;
      local_a78 = uVar14;
      local_a70 = param_1;
      local_a68 = param_2;
      local_a58 = lVar15;
      local_a50 = uVar11;
      local_a48 = lVar1;
      if (local_a74 != 1) {
        local_a9c = (uint)uVar12;
        local_a98 = uVar31;
        local_a90 = uVar28;
        FUN_1498407cc(local_a38,param_1);
        uVar16 = (uint)local_a68;
        if (((local_aa4 & 2) != 0) && (local_aa8 = uVar17 & 3, 3 < uVar17)) {
          FUN_149843c18(local_a38,param_1,uVar17 >> 2);
        }
        uVar12 = (ulonglong)local_a9c;
        if ((local_aac & 2) != 0) {
          uVar12 = (ulonglong)(uVar33 & 3);
          if (3 < uVar33) {
            FUN_149843d64(local_a38,param_1,uVar33 >> 2);
            uVar12 = (ulonglong)(uVar33 & 3);
          }
        }
        uVar28 = local_a90;
        uVar31 = local_a98;
        if (((local_aa0 & 2) != 0) && (uVar34 = uVar19 & 3, 3 < uVar19)) {
          FUN_149843e9c(local_a38,param_1,uVar19 >> 2);
          uVar28 = local_a90;
          uVar31 = local_a98;
        }
      }
      fVar44 = *(float *)(param_1 + 0xf);
      cVar5 = *(char *)((longlong)param_1 + 0x32);
      if (cVar5 == '\x03') {
        auVar39 = roundss(ZEXT416((uint)(fVar44 + 0.5)),ZEXT416((uint)(fVar44 + 0.5)),9);
        fVar44 = auVar39._0_4_;
      }
      else if (cVar5 == '\x02') {
        fVar44 = 1.0;
      }
      else if (cVar5 == '\x01') {
        fVar44 = 0.0;
      }
      uVar22 = (ulonglong)uVar16;
      if (local_a80 == 0) {
        lVar15 = (longlong)*(int *)(param_3[1] + uVar22 * 4) * 0x60;
        pdVar2 = (double *)(*param_3 + lVar15);
        fVar35 = (float)*pdVar2;
        fVar41 = (float)pdVar2[1];
        pdVar2 = (double *)(*param_3 + 0x10 + lVar15);
        auVar39._0_8_ = CONCAT44((float)pdVar2[1],(float)*pdVar2);
        auVar39._8_8_ = auVar39._0_8_;
      }
      else {
        if ((local_aa4 & 1) == 0) {
          FUN_1498440c4(local_a38,param_1,local_aa8,fVar44);
          uVar36 = in_XMM1._8_8_;
          fVar35 = extraout_XMM0_Da;
          fVar41 = extraout_XMM0_Db;
          uVar42 = extraout_XMM0_Dc;
          uVar43 = extraout_XMM0_Dd;
        }
        else {
          FUN_149843fd4(local_2a8,param_1,local_aa8);
          uVar36 = in_XMM1._8_8_;
          fVar35 = extraout_XMM0_Da_00;
          fVar41 = extraout_XMM0_Db_00;
          uVar42 = extraout_XMM0_Dc_00;
          uVar43 = extraout_XMM0_Dd_00;
        }
        auVar6._4_8_ = uVar36;
        auVar6._0_4_ = fVar41;
        auVar39._0_8_ = auVar6._0_8_ << 0x20;
        auVar39._8_4_ = uVar42;
        auVar39._12_4_ = uVar43;
      }
      pdVar2 = (double *)param_3[2];
      *pdVar2 = (double)fVar35;
      pdVar2[1] = (double)fVar41;
      pdVar2[2] = (double)auVar39._8_4_;
      pdVar2[3] = (double)auVar39._12_4_;
      if (local_a7c == 0) {
        lVar15 = (longlong)*(int *)(param_3[1] + uVar22 * 4) * 0x60;
        pdVar2 = (double *)(*param_3 + 0x20 + lVar15);
        uVar36 = CONCAT44((float)pdVar2[1],(float)*pdVar2);
        auVar45._0_4_ = (float)*(double *)(*param_3 + 0x30 + lVar15);
        auVar45._4_4_ = 0.0;
        auVar45._8_4_ = auVar45._0_4_;
        auVar45._12_4_ = 0.0;
      }
      else {
        if ((local_aac & 1) == 0) {
          uVar36 = FUN_14984453b(param_1,auVar39._8_8_,local_380,local_330);
          fVar35 = (float)((ulonglong)uVar36 >> 0x20);
          fVar41 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          uVar37 = FUN_14984453b(param_1,uVar12,local_380,local_310);
          auVar45._0_4_ = fVar44 * (float)uVar37 + ((float)uVar36 - fVar44 * (float)uVar36);
          auVar45._4_4_ = fVar44 * (float)((ulonglong)uVar37 >> 0x20) + (fVar35 - fVar44 * fVar35);
          auVar45._8_4_ =
               fVar44 * (float)extraout_XMM0_Qb_00 +
               ((float)extraout_XMM0_Qb - fVar44 * (float)extraout_XMM0_Qb);
          auVar45._12_4_ =
               fVar44 * (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + (fVar41 - fVar44 * fVar41)
          ;
        }
        else {
          auVar45 = *(undefined1 (*) [16])(uVar28 + uVar12 * 0xc);
        }
        uVar36 = auVar45._0_8_;
      }
      lVar15 = param_3[2];
      auVar38._0_8_ = (double)(float)uVar36;
      auVar38._8_8_ = (double)(float)((ulonglong)uVar36 >> 0x20);
      *(undefined1 (*) [16])(lVar15 + 0x20) = auVar38;
      auVar39 = insertps(auVar38,auVar45,0x8e);
      *(double *)(lVar15 + 0x30) = (double)auVar39._0_4_;
      *(double *)(lVar15 + 0x38) = (double)auVar39._4_4_;
      if (local_a78 == 0) {
        lVar15 = (longlong)*(int *)(param_3[1] + uVar22 * 4) * 0x60;
        pdVar2 = (double *)(*param_3 + 0x40 + lVar15);
        uVar36 = CONCAT44((float)pdVar2[1],(float)*pdVar2);
        fVar44 = (float)*(double *)(*param_3 + 0x50 + lVar15);
        auVar46._4_4_ = 0.0;
        auVar46._0_4_ = fVar44;
        auVar46._8_4_ = fVar44;
        auVar46._12_4_ = 0.0;
      }
      else {
        if ((local_aa0 & 1) == 0) {
          uVar36 = FUN_149844739(param_1,uVar34,local_378,local_2f0);
          fVar35 = (float)((ulonglong)uVar36 >> 0x20);
          fVar41 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          uVar37 = FUN_149844739(param_1,uVar34,local_378,local_2d0);
          auVar46._0_4_ = fVar44 * (float)uVar37 + ((float)uVar36 - fVar44 * (float)uVar36);
          auVar46._4_4_ = fVar44 * (float)((ulonglong)uVar37 >> 0x20) + (fVar35 - fVar44 * fVar35);
          auVar46._8_4_ =
               fVar44 * (float)extraout_XMM0_Qb_02 +
               ((float)extraout_XMM0_Qb_01 - fVar44 * (float)extraout_XMM0_Qb_01);
          auVar46._12_4_ =
               fVar44 * (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) + (fVar41 - fVar44 * fVar41)
          ;
        }
        else {
          auVar46 = *(undefined1 (*) [16])(uVar31 + (ulonglong)uVar34 * 0xc);
        }
        uVar36 = auVar46._0_8_;
      }
      lVar15 = param_3[2];
      auVar40._0_8_ = (double)(float)uVar36;
      auVar40._8_8_ = (double)(float)((ulonglong)uVar36 >> 0x20);
      *(undefined1 (*) [16])(lVar15 + 0x40) = auVar40;
      auVar39 = insertps(auVar40,auVar46,0x8e);
      fVar44 = auVar39._0_4_;
      fVar35 = auVar39._4_4_;
    }
    *(double *)(lVar15 + 0x50) = (double)fVar44;
    *(double *)(lVar15 + 0x58) = (double)fVar35;
  }
  if ((local_70 ^ (ulonglong)auStack_ad8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149843c18 FUN_149843c18 body=331 status=ok
// SIG undefined FUN_149843c18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149843c18(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM7 [16];
  
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + param_3 * -4;
  if (*(char *)(param_2 + 0x1c) == '\0') {
    iVar2 = param_3 << 9;
  }
  else {
    if (*(char *)(param_2 + 0x1c) == '\x03') {
      uVar3 = 0;
      auVar8 = pmovsxbd(in_XMM4,0x1f1f1f1f);
      uVar1 = (ulonglong)param_3;
      auVar6 = (undefined1  [16])0x0;
      auVar7 = (undefined1  [16])0x0;
      do {
        auVar4 = pmovzxbw(in_XMM0,*(undefined8 *)(*(longlong *)(param_1 + 0x6c8) + (ulonglong)uVar3)
                         );
        auVar5 = pmovzxbw(in_XMM1,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + (ulonglong)uVar3)
                         );
        auVar9 = pmovzxwd(unaff_XMM6,auVar4);
        auVar5 = pmovzxwd(unaff_XMM7,auVar5);
        auVar4._0_4_ = -(uint)(auVar9._0_4_ == auVar8._0_4_);
        auVar4._4_4_ = -(uint)(auVar9._4_4_ == auVar8._4_4_);
        auVar4._8_4_ = -(uint)(auVar9._8_4_ == auVar8._8_4_);
        auVar4._12_4_ = -(uint)(auVar9._12_4_ == auVar8._12_4_);
        unaff_XMM6 = blendvps(auVar9,_DAT_149936180,auVar4);
        in_XMM0._0_4_ = -(uint)(auVar5._0_4_ == auVar8._0_4_);
        in_XMM0._4_4_ = -(uint)(auVar5._4_4_ == auVar8._4_4_);
        in_XMM0._8_4_ = -(uint)(auVar5._8_4_ == auVar8._8_4_);
        in_XMM0._12_4_ = -(uint)(auVar5._12_4_ == auVar8._12_4_);
        unaff_XMM7 = blendvps(auVar5,_DAT_149936180,in_XMM0);
        auVar9._0_4_ = auVar7._0_4_ + unaff_XMM6._0_4_;
        auVar9._4_4_ = auVar7._4_4_ + unaff_XMM6._4_4_;
        auVar9._8_4_ = auVar7._8_4_ + unaff_XMM6._8_4_;
        auVar9._12_4_ = auVar7._12_4_ + unaff_XMM6._12_4_;
        auVar5._0_4_ = auVar6._0_4_ + unaff_XMM7._0_4_;
        auVar5._4_4_ = auVar6._4_4_ + unaff_XMM7._4_4_;
        auVar5._8_4_ = auVar6._8_4_ + unaff_XMM7._8_4_;
        auVar5._12_4_ = auVar6._12_4_ + unaff_XMM7._12_4_;
        uVar3 = uVar3 + 4;
        uVar1 = uVar1 - 1;
        in_XMM1 = in_XMM0;
        auVar6 = auVar5;
        auVar7 = auVar9;
      } while (uVar1 != 0);
      auVar6 = phaddd(auVar9,auVar9);
      auVar7 = phaddd(auVar6,in_XMM0);
      auVar6 = phaddd(auVar5,auVar5);
      auVar6 = phaddd(auVar6,in_XMM0);
      *(ulonglong *)(param_1 + 0x6c8) = *(longlong *)(param_1 + 0x6c8) + (ulonglong)(param_3 * 4);
      *(longlong *)(param_1 + 0x6d0) = *(longlong *)(param_1 + 0x6d0) + (ulonglong)(param_3 * 0x18);
      *(int *)(param_1 + 0x6e0) = *(int *)(param_1 + 0x6e0) + auVar7._0_4_ * 3;
      *(ulonglong *)(param_1 + 0x6e8) = *(longlong *)(param_1 + 0x6e8) + (ulonglong)(param_3 * 4);
      *(longlong *)(param_1 + 0x6f0) = *(longlong *)(param_1 + 0x6f0) + (ulonglong)(param_3 * 0x18);
      *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + auVar6._0_4_ * 3;
      *(longlong *)(param_1 + 0x6b0) = *(longlong *)(param_1 + 0x6b0) + (ulonglong)param_3 * 0x60;
      return;
    }
    iVar2 = param_3 * 0x180;
  }
  *(int *)(param_1 + 0x6e0) = *(int *)(param_1 + 0x6e0) + iVar2;
  *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + iVar2;
                    /* WARNING: Read-only address (ram,0x000149936180) is written */
  return;
}



// FUNCTION 149843d64 FUN_149843d64 body=312 status=ok
// SIG undefined FUN_149843d64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149843d64(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM7 [16];
  
  *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + param_3 * -4;
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    uVar2 = 0;
    auVar7 = pmovsxbd(in_XMM4,0x1f1f1f1f);
    uVar1 = (ulonglong)param_3;
    auVar5 = (undefined1  [16])0x0;
    auVar6 = (undefined1  [16])0x0;
    do {
      auVar3 = pmovzxbw(in_XMM0,*(undefined8 *)(*(longlong *)(param_1 + 0x708) + (ulonglong)uVar2));
      auVar4 = pmovzxbw(in_XMM1,*(undefined8 *)(*(longlong *)(param_1 + 0x728) + (ulonglong)uVar2));
      auVar8 = pmovzxwd(unaff_XMM6,auVar3);
      auVar4 = pmovzxwd(unaff_XMM7,auVar4);
      auVar3._0_4_ = -(uint)(auVar8._0_4_ == auVar7._0_4_);
      auVar3._4_4_ = -(uint)(auVar8._4_4_ == auVar7._4_4_);
      auVar3._8_4_ = -(uint)(auVar8._8_4_ == auVar7._8_4_);
      auVar3._12_4_ = -(uint)(auVar8._12_4_ == auVar7._12_4_);
      unaff_XMM6 = blendvps(auVar8,_DAT_149936180,auVar3);
      in_XMM0._0_4_ = -(uint)(auVar4._0_4_ == auVar7._0_4_);
      in_XMM0._4_4_ = -(uint)(auVar4._4_4_ == auVar7._4_4_);
      in_XMM0._8_4_ = -(uint)(auVar4._8_4_ == auVar7._8_4_);
      in_XMM0._12_4_ = -(uint)(auVar4._12_4_ == auVar7._12_4_);
      unaff_XMM7 = blendvps(auVar4,_DAT_149936180,in_XMM0);
      auVar8._0_4_ = auVar6._0_4_ + unaff_XMM6._0_4_;
      auVar8._4_4_ = auVar6._4_4_ + unaff_XMM6._4_4_;
      auVar8._8_4_ = auVar6._8_4_ + unaff_XMM6._8_4_;
      auVar8._12_4_ = auVar6._12_4_ + unaff_XMM6._12_4_;
      auVar4._0_4_ = auVar5._0_4_ + unaff_XMM7._0_4_;
      auVar4._4_4_ = auVar5._4_4_ + unaff_XMM7._4_4_;
      auVar4._8_4_ = auVar5._8_4_ + unaff_XMM7._8_4_;
      auVar4._12_4_ = auVar5._12_4_ + unaff_XMM7._12_4_;
      uVar2 = uVar2 + 4;
      uVar1 = uVar1 - 1;
      in_XMM1 = in_XMM0;
      auVar5 = auVar4;
      auVar6 = auVar8;
    } while (uVar1 != 0);
    auVar5 = phaddd(auVar8,auVar8);
    auVar6 = phaddd(auVar5,in_XMM0);
    auVar5 = phaddd(auVar4,auVar4);
    auVar5 = phaddd(auVar5,in_XMM0);
    *(ulonglong *)(param_1 + 0x708) = *(longlong *)(param_1 + 0x708) + (ulonglong)(param_3 * 4);
    *(longlong *)(param_1 + 0x710) = *(longlong *)(param_1 + 0x710) + (ulonglong)(param_3 * 0x18);
    *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + auVar6._0_4_ * 3;
    *(ulonglong *)(param_1 + 0x728) = *(longlong *)(param_1 + 0x728) + (ulonglong)(param_3 * 4);
    *(longlong *)(param_1 + 0x730) = *(longlong *)(param_1 + 0x730) + (ulonglong)(param_3 * 0x18);
    *(int *)(param_1 + 0x740) = *(int *)(param_1 + 0x740) + auVar5._0_4_ * 3;
    *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + (ulonglong)param_3 * 0x60;
  }
  else {
    *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + param_3 * 0x180;
    *(int *)(param_1 + 0x740) = *(int *)(param_1 + 0x740) + param_3 * 0x180;
  }
  return;
}



// FUNCTION 149843e9c FUN_149843e9c body=312 status=ok
// SIG undefined FUN_149843e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149843e9c(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM7 [16];
  
  *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + param_3 * -4;
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    uVar2 = 0;
    auVar7 = pmovsxbd(in_XMM4,0x1f1f1f1f);
    uVar1 = (ulonglong)param_3;
    auVar5 = (undefined1  [16])0x0;
    auVar6 = (undefined1  [16])0x0;
    do {
      auVar3 = pmovzxbw(in_XMM0,*(undefined8 *)(*(longlong *)(param_1 + 0x748) + (ulonglong)uVar2));
      auVar4 = pmovzxbw(in_XMM1,*(undefined8 *)(*(longlong *)(param_1 + 0x768) + (ulonglong)uVar2));
      auVar8 = pmovzxwd(unaff_XMM6,auVar3);
      auVar4 = pmovzxwd(unaff_XMM7,auVar4);
      auVar3._0_4_ = -(uint)(auVar8._0_4_ == auVar7._0_4_);
      auVar3._4_4_ = -(uint)(auVar8._4_4_ == auVar7._4_4_);
      auVar3._8_4_ = -(uint)(auVar8._8_4_ == auVar7._8_4_);
      auVar3._12_4_ = -(uint)(auVar8._12_4_ == auVar7._12_4_);
      unaff_XMM6 = blendvps(auVar8,_DAT_149936180,auVar3);
      in_XMM0._0_4_ = -(uint)(auVar4._0_4_ == auVar7._0_4_);
      in_XMM0._4_4_ = -(uint)(auVar4._4_4_ == auVar7._4_4_);
      in_XMM0._8_4_ = -(uint)(auVar4._8_4_ == auVar7._8_4_);
      in_XMM0._12_4_ = -(uint)(auVar4._12_4_ == auVar7._12_4_);
      unaff_XMM7 = blendvps(auVar4,_DAT_149936180,in_XMM0);
      auVar8._0_4_ = auVar6._0_4_ + unaff_XMM6._0_4_;
      auVar8._4_4_ = auVar6._4_4_ + unaff_XMM6._4_4_;
      auVar8._8_4_ = auVar6._8_4_ + unaff_XMM6._8_4_;
      auVar8._12_4_ = auVar6._12_4_ + unaff_XMM6._12_4_;
      auVar4._0_4_ = auVar5._0_4_ + unaff_XMM7._0_4_;
      auVar4._4_4_ = auVar5._4_4_ + unaff_XMM7._4_4_;
      auVar4._8_4_ = auVar5._8_4_ + unaff_XMM7._8_4_;
      auVar4._12_4_ = auVar5._12_4_ + unaff_XMM7._12_4_;
      uVar2 = uVar2 + 4;
      uVar1 = uVar1 - 1;
      in_XMM1 = in_XMM0;
      auVar5 = auVar4;
      auVar6 = auVar8;
    } while (uVar1 != 0);
    auVar5 = phaddd(auVar8,auVar8);
    auVar6 = phaddd(auVar5,in_XMM0);
    auVar5 = phaddd(auVar4,auVar4);
    auVar5 = phaddd(auVar5,in_XMM0);
    *(ulonglong *)(param_1 + 0x748) = *(longlong *)(param_1 + 0x748) + (ulonglong)(param_3 * 4);
    *(longlong *)(param_1 + 0x750) = *(longlong *)(param_1 + 0x750) + (ulonglong)(param_3 * 0x18);
    *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + auVar6._0_4_ * 3;
    *(ulonglong *)(param_1 + 0x768) = *(longlong *)(param_1 + 0x768) + (ulonglong)(param_3 * 4);
    *(longlong *)(param_1 + 0x770) = *(longlong *)(param_1 + 0x770) + (ulonglong)(param_3 * 0x18);
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) + auVar5._0_4_ * 3;
    *(longlong *)(param_1 + 0x6c0) = *(longlong *)(param_1 + 0x6c0) + (ulonglong)param_3 * 0x60;
  }
  else {
    *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + param_3 * 0x180;
    *(int *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) + param_3 * 0x180;
  }
  return;
}



// FUNCTION 149843fd4 FUN_149843fd4 body=239 status=ok
// SIG undefined FUN_149843fd4(void)

undefined8 FUN_149843fd4(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if (*(char *)(param_2 + 0x1c) != '\0') {
    uVar2 = 4;
    if (*(uint *)(param_1 + 0x208) < 4) {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x208);
    }
    lVar1 = *(longlong *)(param_1 + 0x210) + (param_3 & 0xffffffff) * 4;
    auVar7 = insertps(ZEXT416(*(uint *)(*(longlong *)(param_1 + 0x210) + (param_3 & 0xffffffff) * 4)
                             ),*(undefined4 *)(lVar1 + uVar2 * 4),0x1c);
    auVar7 = insertps(auVar7,*(undefined4 *)((ulonglong)(uint)((int)uVar2 << 3) + lVar1),0x28);
    auVar7 = insertps(auVar7,ZEXT416((uint)SQRT(ABS(((1.0 - auVar7._0_4_ * auVar7._0_4_) -
                                                    auVar7._4_4_ * auVar7._4_4_) -
                                                    auVar7._8_4_ * auVar7._8_4_))),0x30);
    fVar6 = auVar7._0_4_;
    fVar8 = auVar7._4_4_;
    fVar3 = fVar6 * fVar6;
    fVar4 = auVar7._8_4_ * auVar7._8_4_;
    fVar5 = auVar7._12_4_ * auVar7._12_4_;
    fVar9 = fVar4 + fVar3;
    fVar10 = fVar5 + fVar8 * fVar8;
    auVar7._0_4_ = fVar10 + fVar9;
    auVar7._4_4_ = fVar9 + fVar10;
    auVar7._8_4_ = fVar9 + fVar3 + fVar4;
    auVar7._12_4_ = fVar9 + fVar3 + fVar5;
    auVar11 = rsqrtss(auVar7,auVar7);
    fVar3 = auVar11._0_4_;
    fVar3 = (0.5 - fVar3 * fVar3 * auVar7._0_4_ * 0.5) * fVar3 + fVar3;
    fVar3 = (0.5 - fVar3 * fVar3 * auVar7._0_4_ * 0.5) * fVar3 + fVar3;
    return CONCAT44(fVar3 * fVar8,fVar3 * fVar6);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x210) + (param_3 & 0xffffffff) * 0x10);
}



// FUNCTION 1498440c4 FUN_1498440c4 body=376 status=ok
// SIG undefined FUN_1498440c4(void)

void FUN_1498440c4(longlong param_1,longlong param_2,undefined4 param_3,float param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  
  uVar1 = 4;
  if (*(uint *)(param_1 + 0x208) < 4) {
    uVar1 = *(uint *)(param_1 + 0x208);
  }
  uVar2 = FUN_14984423c(param_2,param_3,uVar1,param_1 + 0x6b0,param_1 + 0x6c8);
  fVar6 = (float)((ulonglong)uVar2 >> 0x20);
  fVar9 = (float)extraout_XMM0_Qb;
  auVar7._8_4_ = fVar9;
  auVar7._0_8_ = uVar2;
  auVar7._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar3._0_8_ = FUN_14984423c(param_2,param_3,uVar1,param_1 + 0x6b0,param_1 + 0x6e8);
  auVar3._8_8_ = extraout_XMM0_Qb_00;
  if (*(char *)(param_2 + 0x1c) != '\0') {
    auVar7 = insertps(auVar7,ZEXT416((uint)SQRT(ABS(((1.0 - (float)uVar2 * (float)uVar2) -
                                                    fVar6 * fVar6) - fVar9 * fVar9))),0x30);
    fVar6 = (float)((ulonglong)auVar3._0_8_ >> 0x20);
    auVar3 = insertps(auVar3,ZEXT416((uint)SQRT(ABS(((1.0 - (float)auVar3._0_8_ *
                                                            (float)auVar3._0_8_) - fVar6 * fVar6) -
                                                    (float)extraout_XMM0_Qb_00 *
                                                    (float)extraout_XMM0_Qb_00))),0x30);
  }
  auVar5 = dpps(auVar7,auVar3,0xff);
  fVar6 = (auVar7._0_4_ - param_4 * auVar7._0_4_) +
          (float)(auVar5._0_4_ & 0x80000000 ^ auVar3._0_4_) * param_4;
  fVar8 = (auVar7._4_4_ - param_4 * auVar7._4_4_) +
          (float)(auVar5._4_4_ & 0x80000000 ^ auVar3._4_4_) * param_4;
  fVar9 = (auVar7._8_4_ - param_4 * auVar7._8_4_) +
          (float)(auVar5._8_4_ & 0x80000000 ^ auVar3._8_4_) * param_4;
  fVar10 = (auVar7._12_4_ - param_4 * auVar7._12_4_) +
           (float)(auVar5._12_4_ & 0x80000000 ^ auVar3._12_4_) * param_4;
  fVar6 = fVar6 * fVar6;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar4 = fVar9 + fVar6;
  fVar8 = fVar10 + fVar8 * fVar8;
  auVar5._0_4_ = fVar8 + fVar4;
  auVar5._4_4_ = fVar4 + fVar8;
  auVar5._8_4_ = fVar4 + fVar6 + fVar9;
  auVar5._12_4_ = fVar4 + fVar6 + fVar10;
  rsqrtss(auVar5,auVar5);
  return;
}



// FUNCTION 14984423c FUN_14984423c body=767 status=ok
// SIG undefined FUN_14984423c(void)

void FUN_14984423c(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  
  if (((*(char *)(param_1 + 0x1c) != '\0') && (*(char *)(param_1 + 0x1c) == '\x03')) &&
     (*(char *)(*param_5 + (ulonglong)param_2) != '\x1f')) {
    puVar1 = (uint *)(*param_4 + (ulonglong)param_2 * 4);
    auVar2 = insertps(ZEXT416(*puVar1),puVar1[param_3],0x1c);
    insertps(auVar2,puVar1[param_3 * 2],0x28);
    auVar2 = insertps(ZEXT416(puVar1[param_3 * 3]),puVar1[param_3 << 2],0x1c);
    insertps(auVar2,puVar1[param_3 * 5],0x28);
  }
  return;
}



// FUNCTION 14984453b FUN_14984453b body=510 status=ok
// SIG undefined FUN_14984453b(void)

void FUN_14984453b(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
    if (bVar2 != 0x1f) {
      lVar3 = param_4[1];
      lVar4 = (ulonglong)param_2 * 6;
      if (bVar2 == 0) {
        pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
      }
      else {
        uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)bVar2 * 8);
        auVar5._4_4_ = uVar1;
        auVar5._0_4_ = uVar1;
        auVar5._8_4_ = uVar1;
        auVar5._12_4_ = uVar1;
        if (*(char *)(param_1 + 0x20) != '\0') {
          auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
          pmovzxwd(auVar5,auVar5);
          auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
          pmovzxwd(auVar5,auVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 149844739 FUN_149844739 body=510 status=ok
// SIG undefined FUN_149844739(void)

void FUN_149844739(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
    if (bVar2 != 0x1f) {
      lVar3 = param_4[1];
      lVar4 = (ulonglong)param_2 * 6;
      if (bVar2 == 0) {
        pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
      }
      else {
        uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)bVar2 * 8);
        auVar5._4_4_ = uVar1;
        auVar5._0_4_ = uVar1;
        auVar5._8_4_ = uVar1;
        auVar5._12_4_ = uVar1;
        if (*(char *)(param_1 + 0x20) != '\0') {
          auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
          pmovzxwd(auVar5,auVar5);
          auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
          pmovzxwd(auVar5,auVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 149844937 FUN_149844937 body=2190 status=ok
// SIG undefined FUN_149844937(void)

void FUN_149844937(longlong *param_1,uint param_2,longlong param_3)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auStack_ae8 [32];
  uint local_ac8;
  uint local_ac4;
  uint local_ac0;
  uint local_abc;
  undefined1 *local_ab8;
  uint local_aac;
  longlong *local_aa8;
  ulonglong local_aa0;
  ulonglong local_a98;
  undefined8 local_a90;
  uint local_a88;
  uint local_a84;
  uint local_a80;
  uint local_a7c;
  longlong local_a78;
  longlong local_a70;
  longlong local_a68;
  longlong local_a60;
  undefined1 local_a58 [512];
  undefined8 local_858;
  undefined8 local_648;
  undefined8 local_438;
  undefined1 local_3a0 [8];
  undefined1 local_398 [72];
  undefined1 local_350 [32];
  undefined1 local_330 [32];
  undefined1 local_310 [32];
  undefined1 local_2f0 [40];
  undefined1 local_2c8 [512];
  undefined8 local_c8;
  int local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  lVar10 = *param_1;
  if ((param_2 < *(uint *)(lVar10 + 0x10)) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar12 = *(uint *)(lVar10 + 0x1c) >> 1 & 1;
    fVar46 = (float)uVar12;
    auVar45._4_4_ = fVar46;
    auVar45._0_4_ = fVar46;
    auVar45._8_4_ = fVar46;
    auVar45._12_4_ = fVar46;
    uVar8 = (ulonglong)(*(uint *)(lVar10 + 0x10) + 0xf >> 4);
    lVar23 = (ulonglong)*(uint *)(lVar10 + 0x48) + 0x20 + lVar10;
    lVar2 = lVar23 + uVar8 * 4;
    lVar29 = lVar2 + uVar8 * 4;
    if (*(byte *)((longlong)param_1 + 0x1f) == 0) {
      lVar29 = lVar23;
    }
    uVar15 = -(uint)*(byte *)((longlong)param_1 + 0x1f);
    local_a98 = (ulonglong)(param_2 >> 4);
    uVar8 = (ulonglong)((param_2 >> 4) * 4);
    bVar11 = ~((char)param_2 * '\x02') & 0x1e;
    uVar17 = *(uint *)(uVar8 + lVar23) >> bVar11;
    uVar19 = uVar17 & 3;
    uVar24 = *(uint *)(uVar8 + lVar2) >> bVar11;
    uVar26 = uVar24 & 3;
    uVar7 = *(uint *)(lVar29 + uVar8) >> bVar11 & uVar15;
    uVar13 = uVar7 & 3;
    local_a80 = uVar26 | uVar19 | uVar13;
    if (local_a80 == 0) {
      puVar4 = *(undefined8 **)(param_3 + 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x3ff00000;
      lVar10 = *(longlong *)(param_3 + 0x10);
      *(undefined8 *)(lVar10 + 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      lVar10 = *(longlong *)(param_3 + 0x10);
      auVar37._0_8_ = (double)uVar12;
      auVar37._8_8_ = (double)uVar12;
      *(undefined1 (*) [16])(lVar10 + 0x40) = auVar37;
      auVar45 = insertps(auVar37,auVar45,0x8e);
      fVar46 = auVar45._0_4_;
      fVar43 = auVar45._4_4_;
    }
    else {
      uVar12 = (param_2 & 0xfffffff0) + 0x10;
      local_a70 = lVar10 + 0x20;
      uVar21 = ~(0xffffffffU >> (((char)param_2 - (char)uVar12) * '\x02' & 0x1fU));
      if (param_2 == uVar12) {
        uVar21 = 0xffffffff;
      }
      local_ab8 = (undefined1 *)CONCAT44(local_ab8._4_4_,uVar21);
      local_aa0 = local_a98 + 1;
      uVar8 = 0;
      uVar32 = 0;
      uVar12 = 0;
      uVar31 = 0;
      uVar22 = 0;
      uVar16 = 0;
      uVar14 = 0;
      do {
        uVar20 = 0xffffffff;
        if (local_a98 == uVar8) {
          uVar20 = uVar21;
        }
        uVar25 = *(uint *)(lVar23 + uVar8 * 4) & uVar20;
        uVar30 = *(uint *)(lVar2 + uVar8 * 4) & uVar20;
        uVar20 = *(uint *)(lVar29 + uVar8 * 4) & uVar15 & uVar20;
        uVar27 = (uVar25 >> 2 & 0x11111111) + (uVar25 & 0x11111111);
        uVar32 = uVar32 + (((uVar27 >> 4) + uVar27 & 0x7070707) * 0x1010101 >> 0x18);
        uVar25 = (uVar25 & 0xaaaaaaaa) - (uVar25 >> 1 & 0x55555555);
        uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
        uVar22 = uVar22 + (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar25 = (uVar30 >> 2 & 0x11111111) + (uVar30 & 0x11111111);
        uVar12 = uVar12 + (((uVar25 >> 4) + uVar25 & 0x7070707) * 0x1010101 >> 0x18);
        uVar25 = (uVar30 & 0xaaaaaaaa) - (uVar30 >> 1 & 0x55555555);
        uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
        uVar16 = uVar16 + (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar25 = (uVar20 >> 2 & 0x11111111) + (uVar20 & 0x11111111);
        uVar31 = uVar31 + (((uVar25 >> 4) + uVar25 & 0x7070707) * 0x1010101 >> 0x18);
        uVar20 = (uVar20 & 0xaaaaaaaa) - (uVar20 >> 1 & 0x55555555);
        uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
        uVar20 = (uVar20 >> 4) + uVar20 & 0xf0f0f0f;
        puVar28 = (undefined1 *)(ulonglong)uVar20;
        uVar14 = uVar14 + (uVar20 * 0x1010101 >> 0x18);
        uVar8 = uVar8 + 1;
      } while (local_aa0 != uVar8);
      local_a98 = (ulonglong)uVar22;
      local_c8 = 0;
      if ((local_a80 & 1) == 0) {
        local_ac8 = 0;
        uVar21 = 0;
        uVar8 = 0;
        puVar18 = &DAT_aaaaaaaa;
      }
      else {
        local_c0 = *(int *)(lVar10 + 0x34);
        local_b8 = (ulonglong)*(uint *)(lVar10 + 0x4c) + local_a70;
        local_b0 = (undefined1 *)
                   ((ulonglong)
                    (((uint)(*(char *)((longlong)param_1 + 0x1c) == '\0') * 4 + 0xc) * local_c0) +
                   local_b8);
        puVar28 = local_b0 + (uint)(*(int *)(lVar10 + 0x38) * 0xc);
        local_ac8 = 0;
        if (((uVar17 & 1) != 0) && (local_ac8 = uVar32 & 3, 3 < uVar32)) {
          uVar32 = uVar32 & 0xfffffffc;
          local_c0 = local_c0 - uVar32;
          lVar23 = (ulonglong)uVar32 * 0xc;
          if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
            lVar23 = (ulonglong)uVar32 << 4;
          }
          local_b8 = local_b8 + lVar23;
        }
        uVar21 = 0;
        if (((uVar24 & 1) != 0) && (uVar21 = uVar12 & 3, 3 < uVar12)) {
          local_b0 = local_b0 + (ulonglong)(uVar12 & 0xfffffffc) * 0xc;
        }
        uVar8 = 0;
        puVar18 = local_b0;
        local_a8 = puVar28;
        if (((uVar7 & 1) != 0) && (uVar8 = (ulonglong)(uVar31 & 3), 3 < uVar31)) {
          puVar28 = puVar28 + (ulonglong)(uVar31 & 0xfffffffc) * 0xc;
          local_a8 = puVar28;
        }
      }
      local_858 = 0;
      local_648 = 0;
      local_438 = 0;
      local_ac4 = uVar17;
      local_ac0 = uVar13;
      local_abc = uVar7;
      local_aac = uVar24;
      local_aa8 = param_1;
      local_a90 = lVar2;
      local_a88 = uVar19;
      local_a84 = uVar26;
      local_a7c = uVar15;
      local_a78 = param_3;
      local_a68 = lVar10;
      local_a60 = lVar29;
      if (local_a80 != 1) {
        local_a90 = CONCAT44((int)((ulonglong)lVar2 >> 0x20),uVar21);
        local_ab8 = puVar28;
        local_aa0 = uVar8;
        FUN_1498407cc(local_a58,param_1);
        param_3 = local_a78;
        if ((local_ac4 & 2) != 0) {
          local_ac8 = (uint)local_a98 & 3;
          if (3 < (uint)local_a98) {
            FUN_149843c18(local_a58,param_1,(uint)local_a98 >> 2);
          }
        }
        uVar8 = local_aa0 & 0xffffffff;
        uVar21 = (uint)local_a90;
        if (((uVar24 & 2) != 0) && (uVar21 = uVar16 & 3, 3 < uVar16)) {
          FUN_149843d64(local_a58,param_1,uVar16 >> 2);
          uVar8 = local_aa0 & 0xffffffff;
        }
        puVar28 = local_ab8;
        if ((uVar7 & 2) != 0) {
          uVar8 = (ulonglong)(uVar14 & 3);
          if (3 < uVar14) {
            FUN_149843e9c(local_a58,param_1,uVar14 >> 2);
            uVar8 = (ulonglong)(uVar14 & 3);
            puVar28 = local_ab8;
          }
        }
      }
      fVar43 = *(float *)(param_1 + 0xf);
      cVar3 = *(char *)((longlong)param_1 + 0x32);
      if (cVar3 == '\x03') {
        auVar37 = roundss(ZEXT416((uint)(fVar43 + 0.5)),ZEXT416((uint)(fVar43 + 0.5)),9);
        fVar43 = auVar37._0_4_;
      }
      else if (cVar3 == '\x02') {
        fVar43 = 1.0;
      }
      else if (cVar3 == '\x01') {
        fVar43 = 0.0;
      }
      if (local_a88 == 0) {
        pauVar9 = *(undefined1 (**) [16])(param_3 + 0x10);
        *(undefined8 *)*pauVar9 = 0;
        *(undefined8 *)(*pauVar9 + 8) = 0;
        dVar35 = 0.0;
        dVar38 = 1.0;
      }
      else {
        if ((local_ac4 & 1) == 0) {
          uVar34 = FUN_1498440c4(local_a58,param_1,local_ac8,fVar43);
          uVar33 = extraout_XMM0_Qb;
        }
        else {
          uVar34 = FUN_149843fd4(local_2c8,param_1,local_ac8);
          uVar33 = extraout_XMM0_Qb_04;
        }
        pauVar9 = *(undefined1 (**) [16])(param_3 + 0x10);
        dVar35 = (double)(float)((ulonglong)uVar34 >> 0x20);
        auVar6._8_4_ = SUB84(dVar35,0);
        auVar6._0_8_ = (double)(float)uVar34;
        auVar6._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        *pauVar9 = auVar6;
        dVar35 = (double)(float)uVar33;
        dVar38 = (double)(float)((ulonglong)uVar33 >> 0x20);
      }
      *(double *)pauVar9[1] = dVar35;
      *(double *)(pauVar9[1] + 8) = dVar38;
      if (local_a84 == 0) {
        lVar10 = *(longlong *)(param_3 + 0x10);
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
      }
      else {
        if ((uVar24 & 1) == 0) {
          uVar33 = FUN_14984453b(param_1,uVar21,local_3a0,local_350);
          fVar40 = (float)((ulonglong)uVar33 >> 0x20);
          fVar42 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          uVar34 = FUN_14984453b(param_1,uVar21,local_3a0,local_330);
          fVar39 = fVar43 * (float)uVar34 + ((float)uVar33 - fVar43 * (float)uVar33);
          fVar40 = fVar43 * (float)((ulonglong)uVar34 >> 0x20) + (fVar40 - fVar43 * fVar40);
          fVar41 = fVar43 * (float)extraout_XMM0_Qb_01 +
                   ((float)extraout_XMM0_Qb_00 - fVar43 * (float)extraout_XMM0_Qb_00);
          fVar42 = fVar43 * (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) +
                   (fVar42 - fVar43 * fVar42);
        }
        else {
          pfVar1 = (float *)(puVar18 + (ulonglong)uVar21 * 0xc);
          fVar39 = *pfVar1;
          fVar40 = pfVar1[1];
          fVar41 = pfVar1[2];
          fVar42 = pfVar1[3];
        }
        lVar10 = *(longlong *)(param_3 + 0x10);
        auVar36._0_8_ = (double)fVar39;
        auVar36._8_8_ = (double)fVar40;
        *(undefined1 (*) [16])(lVar10 + 0x20) = auVar36;
        auVar5._4_4_ = fVar40;
        auVar5._0_4_ = fVar39;
        auVar5._8_4_ = fVar41;
        auVar5._12_4_ = fVar42;
        auVar37 = insertps(auVar36,auVar5,0x8e);
        *(double *)(lVar10 + 0x30) = (double)auVar37._0_4_;
        *(double *)(lVar10 + 0x38) = (double)auVar37._4_4_;
      }
      if (local_ac0 == 0) {
        auVar45 = blendps(auVar45,ZEXT816(0),8);
        uVar33 = CONCAT44(fVar46,fVar46);
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar33 = FUN_149844739(param_1,uVar8,local_398,local_310);
          fVar46 = (float)((ulonglong)uVar33 >> 0x20);
          fVar39 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          uVar34 = FUN_149844739(param_1,uVar8,local_398,local_2f0);
          auVar44._0_4_ = fVar43 * (float)uVar34 + ((float)uVar33 - fVar43 * (float)uVar33);
          auVar44._4_4_ = fVar43 * (float)((ulonglong)uVar34 >> 0x20) + (fVar46 - fVar43 * fVar46);
          auVar44._8_4_ =
               fVar43 * (float)extraout_XMM0_Qb_03 +
               ((float)extraout_XMM0_Qb_02 - fVar43 * (float)extraout_XMM0_Qb_02);
          auVar44._12_4_ =
               fVar43 * (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) + (fVar39 - fVar43 * fVar39)
          ;
        }
        else {
          auVar44 = *(undefined1 (*) [16])(puVar28 + uVar8 * 0xc);
        }
        uVar33 = auVar44._0_8_;
        auVar45 = blendps(ZEXT816(0),auVar44,7);
      }
      lVar10 = *(longlong *)(param_3 + 0x10);
      *(double *)(lVar10 + 0x40) = (double)(float)uVar33;
      *(double *)(lVar10 + 0x48) = (double)(float)((ulonglong)uVar33 >> 0x20);
      fVar46 = auVar45._8_4_;
      fVar43 = auVar45._12_4_;
    }
    *(double *)(lVar10 + 0x50) = (double)fVar46;
    *(double *)(lVar10 + 0x58) = (double)fVar43;
  }
  if ((local_90 ^ (ulonglong)auStack_ae8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498451c6 FUN_1498451c6 body=29 status=ok
// SIG undefined FUN_1498451c6(void)

undefined8 FUN_1498451c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498451e4 FUN_1498451e4 body=95 status=ok
// SIG undefined FUN_1498451e4(void)

undefined4 FUN_1498451e4(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    puVar4 = (uint *)0x0;
    if ((ulonglong)*(uint *)(param_2 + 0x40) != 0xffffffff) {
      puVar4 = (uint *)(param_2 + 0x20 + (ulonglong)*(uint *)(param_2 + 0x40));
    }
    uVar1 = *puVar4;
    if ((ulonglong)uVar1 == 0xffffffff) {
      return 0;
    }
    if (uVar1 <= (*(int *)(lVar3 + 0x20) * 0x10 + *(int *)(lVar3 + 0x1c) * 8) - 0x10U) {
      iVar2 = *(int *)(param_1[1] + (ulonglong)uVar1);
      return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == *(int *)(param_2 + 4));
    }
  }
  return 0;
}



// FUNCTION 149845243 FUN_149845243 body=168 status=ok
// SIG undefined FUN_149845243(void)

void FUN_149845243(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 4);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x58);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x103;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  *(byte *)((longlong)param_1 + 0x1f) = *(byte *)(param_2 + 0x1c) & 1;
  *(bool *)(param_1 + 4) = 1 < *(uint *)(param_2 + 0x20);
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar3 = 0;
  }
  else {
    bVar3 = (*(byte *)(param_2 + 0x1f) & 0x40) >> 6;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  bVar3 = iVar1 != 0 & bVar3;
  fVar4 = 0.0;
  if (1 < iVar1 + (uint)bVar3) {
    fVar4 = (float)((iVar1 + (uint)bVar3) - 1) / *(float *)(param_2 + 0x18);
  }
  *(float *)(param_1 + 3) = fVar4;
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x1e) & 1;
  }
  *(byte *)((longlong)param_1 + 0x21) = bVar3;
  return;
}



// FUNCTION 1498452eb FUN_1498452eb body=1607 status=ok
// SIG undefined FUN_1498452eb(void)

void FUN_1498452eb(longlong *param_1,float param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x10) == 0) {
    return;
  }
  fVar22 = SUB164(*(undefined1 (*) [16])(param_1 + 3),0);
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (fVar22 <= param_2) {
    param_2 = fVar22;
  }
  if (((*(float *)((longlong)param_1 + 0x34) == param_2) &&
      (!NAN(*(float *)((longlong)param_1 + 0x34)) && !NAN(param_2))) &&
     (*(byte *)((longlong)param_1 + 0x32) == param_3)) {
    return;
  }
  *(float *)((longlong)param_1 + 0x34) = param_2;
  uVar12 = *(uint *)(lVar5 + 0x14) - 1;
  param_2 = param_2 * *(float *)(lVar5 + 0x18);
  uVar18 = (ulonglong)param_2;
  uVar16 = (uint)uVar18 + 1;
  if (SUB161(*(undefined1 (*) [16])(param_1 + 3),9) == '\0') {
    if (uVar12 < uVar16) {
      uVar16 = uVar12;
    }
  }
  else if (uVar12 < (uint)uVar18) {
    param_2 = 0.0;
    uVar18 = 0;
    uVar16 = 0;
  }
  else if (*(uint *)(lVar5 + 0x14) <= uVar16) {
    uVar16 = 0;
  }
  uVar12 = (uint)uVar18;
  fVar22 = (float)(uVar18 & 0xffffffff);
  lVar1 = lVar5 + 0x20;
  fVar24 = 0.0;
  if (param_3 != 1) {
    fVar24 = param_2 - fVar22;
  }
  *(float *)(param_1 + 0xf) = fVar24;
  *(char *)((longlong)param_1 + 0x32) = (char)param_3;
  piVar13 = (int *)((ulonglong)*(uint *)(lVar5 + 0x44) + lVar1);
  uVar2 = *(uint *)(lVar5 + 0x1c);
  lVar19 = param_1[1];
  if (*(uint *)(lVar5 + 0x20) == 1) {
    piVar7 = piVar13;
    if ((uVar2 & 0x500) == 0) {
      lVar19 = 0;
      lVar15 = 0;
    }
    else {
      uVar12 = piVar13[4];
      if (lVar19 == 0) {
        uVar20 = 0;
        uVar21 = 0;
      }
      else {
        puVar11 = (uint *)0x0;
        if ((ulonglong)*(uint *)(lVar5 + 0x40) != 0xffffffff) {
          puVar11 = (uint *)((ulonglong)*(uint *)(lVar5 + 0x40) + lVar1);
        }
        uVar21 = *(ulonglong *)(*(longlong *)(lVar19 + 8) + 8 + (ulonglong)*puVar11);
        uVar20 = *(ulonglong *)(*(longlong *)(lVar19 + 8) + 0x10 + (ulonglong)*puVar11);
        uVar12 = uVar12 | (uint)uVar20 | (uint)uVar21;
      }
      uVar6 = 0x20;
      uVar14 = 0x20;
      uVar9 = -1 << (~(byte)uVar18 & 0x1f) & uVar12;
      if (uVar9 != 0) {
        uVar10 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
        uVar14 = (ulonglong)uVar10;
      }
      uVar9 = 0x1f - (int)uVar14;
      uVar12 = uVar12 & 0xffffffffU >> ((byte)uVar16 & 0x1f);
      if (uVar12 != 0) {
        uVar6 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        uVar6 = uVar6 ^ 0x1f;
      }
      fVar23 = 0.0;
      if ((uVar6 - uVar9 != 0) && (fVar23 = (fVar24 + fVar22) - (float)uVar9, uVar9 <= uVar6)) {
        fVar23 = fVar23 / (float)(uVar6 - uVar9);
      }
      *(float *)(param_1 + 0xf) = fVar23;
      uVar16 = piVar13[4];
      uVar12 = uVar16;
      if (lVar19 == 0) {
        lVar19 = 0;
        lVar15 = 0;
      }
      else {
        uVar18 = 1L << (0x1f - (byte)uVar6 & 0x3f);
        if ((uVar21 >> (uVar14 & 0x3f) & 1) == 0) {
          if ((1L << ((byte)uVar14 & 0x3f) & uVar20) == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = (uVar20 >> 0x20) + *(longlong *)(lVar19 + 0x18);
            uVar12 = (uint)uVar20;
          }
        }
        else {
          lVar15 = (uVar21 >> 0x20) + *(longlong *)(lVar19 + 0x10);
          uVar12 = (uint)uVar21;
        }
        if ((uVar18 & uVar21) == 0) {
          if ((uVar18 & uVar20) == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = *(longlong *)(lVar19 + 0x18) + (uVar20 >> 0x20);
            uVar16 = (uint)uVar20;
          }
        }
        else {
          lVar19 = *(longlong *)(lVar19 + 0x10) + (uVar21 >> 0x20);
          uVar16 = (uint)uVar21;
        }
      }
      uVar12 = POPCOUNT(~(0xffffffffU >> ((byte)uVar9 & 0x1f)) & uVar12);
      uVar16 = POPCOUNT(~(0xffffffffU >> ((byte)uVar6 & 0x1f)) & uVar16);
    }
    goto LAB_149845733;
  }
  lVar15 = lVar5 + 0x54;
  uVar21 = (ulonglong)*(uint *)(lVar5 + 0x14) / (ulonglong)*(uint *)(lVar5 + 0x20);
  uVar18 = (ulonglong)((int)((uVar18 & 0xffffffff) / uVar21) - 1);
  if (uVar12 < (uint)uVar21) {
    uVar18 = 0;
  }
  if ((uint)uVar18 < 0xfffffffc) {
    uVar6 = -(uint)uVar18;
    lVar8 = 0;
    do {
      uVar9 = *(uint *)(lVar15 + uVar18 * 4 + lVar8 * 4);
      if (uVar12 < uVar9) {
        uVar18 = (ulonglong)~uVar6;
        uVar10 = -uVar6;
        if (uVar16 < uVar9) {
          uVar10 = ~uVar6;
        }
        if (uVar16 == 0) {
          uVar10 = 0;
        }
        uVar21 = (ulonglong)uVar10;
        goto LAB_149845560;
      }
      uVar6 = uVar6 - 1;
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 != 4);
  }
  uVar21 = 0;
  uVar18 = 0;
LAB_149845560:
  iVar3 = *(int *)(lVar15 + uVar18 * 4);
  uVar12 = uVar12 - iVar3;
  iVar4 = *(int *)(lVar15 + uVar21 * 4);
  uVar16 = uVar16 - iVar4;
  if ((uVar2 & 0x500) == 0) {
    piVar7 = piVar13 + uVar18 * 4;
    piVar13 = piVar13 + uVar21 * 4;
    lVar19 = 0;
    lVar15 = 0;
    goto LAB_149845733;
  }
  uVar6 = piVar13[uVar18 * 5 + 4];
  uVar9 = piVar13[uVar21 * 5 + 4];
  if (lVar19 == 0) {
    local_68 = 0;
    uVar20 = 0;
    local_78 = 0;
    local_70 = 0;
  }
  else {
    puVar11 = (uint *)0x0;
    if ((ulonglong)*(uint *)(lVar5 + 0x40) != 0xffffffff) {
      puVar11 = (uint *)(lVar1 + (ulonglong)*(uint *)(lVar5 + 0x40));
    }
    lVar15 = (ulonglong)*puVar11 + *(longlong *)(lVar19 + 8);
    local_68 = *(ulonglong *)(uVar18 * 0x10 + 8 + lVar15);
    local_78 = *(ulonglong *)(uVar18 * 0x10 + 0x10 + lVar15);
    uVar6 = uVar6 | (uint)local_78 | (uint)local_68;
    uVar20 = *(ulonglong *)(uVar21 * 0x10 + 8 + lVar15);
    local_70 = *(ulonglong *)(uVar21 * 0x10 + 0x10 + lVar15);
    uVar9 = uVar9 | (uint)local_70 | (uint)uVar20;
  }
  uVar10 = 0x20;
  uVar14 = 0x20;
  uVar6 = -1 << (~(byte)uVar12 & 0x1f) & uVar6;
  if (uVar6 != 0) {
    uVar12 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
    uVar14 = (ulonglong)uVar12;
  }
  iVar17 = 0x1f - (int)uVar14;
  uVar9 = uVar9 & 0xffffffffU >> ((byte)uVar16 & 0x1f);
  if (uVar9 != 0) {
    uVar10 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
      }
    }
    uVar10 = uVar10 ^ 0x1f;
  }
  piVar7 = piVar13 + uVar18 * 5;
  piVar13 = piVar13 + uVar21 * 5;
  uVar12 = iVar3 + iVar17;
  uVar16 = iVar4 + uVar10;
  fVar23 = 0.0;
  uVar6 = uVar16 - uVar12;
  if ((uVar6 != 0) && (fVar23 = (fVar24 + fVar22) - (float)uVar12, uVar12 <= uVar16)) {
    fVar23 = fVar23 / (float)uVar6;
  }
  *(float *)(param_1 + 0xf) = fVar23;
  uVar12 = piVar7[4];
  uVar16 = piVar13[4];
  if (lVar19 == 0) {
    lVar19 = 0;
    lVar15 = 0;
  }
  else {
    uVar18 = 1L << (0x1f - (byte)uVar10 & 0x3f);
    if ((local_68 >> (uVar14 & 0x3f) & 1) == 0) {
      if ((1L << ((byte)uVar14 & 0x3f) & local_78) != 0) {
        lVar15 = (local_78 >> 0x20) + *(longlong *)(lVar19 + 0x18);
        local_68 = local_78;
        goto LAB_1498456e8;
      }
      lVar15 = 0;
    }
    else {
      lVar15 = (local_68 >> 0x20) + *(longlong *)(lVar19 + 0x10);
LAB_1498456e8:
      uVar12 = (uint)local_68;
    }
    if ((uVar18 & uVar20) == 0) {
      if ((local_70 & uVar18) == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(longlong *)(lVar19 + 0x18) + (local_70 >> 0x20);
        uVar16 = (uint)local_70;
      }
    }
    else {
      lVar19 = *(longlong *)(lVar19 + 0x10) + (uVar20 >> 0x20);
      uVar16 = (uint)uVar20;
    }
  }
  uVar12 = POPCOUNT(~(0xffffffffU >> ((byte)iVar17 & 0x1f)) & uVar12);
  uVar16 = POPCOUNT(~(0xffffffffU >> ((byte)uVar10 & 0x1f)) & uVar16);
LAB_149845733:
  *(bool *)((longlong)param_1 + 0x33) = piVar7 == piVar13;
  lVar8 = (ulonglong)(uint)piVar7[3] + lVar1;
  uVar18 = (ulonglong)*(uint *)(lVar5 + 0x24) + lVar8 + 1 & 0xfffffffffffffffe;
  uVar21 = (ulonglong)(*(uint *)(lVar5 + 0x24) * 6);
  if (*(uint *)(lVar5 + 0x20) < 2) {
    uVar21 = 0;
  }
  uVar21 = uVar18 + uVar21 + 3 & 0xfffffffffffffffc;
  param_1[8] = lVar8;
  param_1[10] = uVar18;
  param_1[0xc] = uVar21;
  if (piVar7 != piVar13) {
    lVar8 = (ulonglong)(uint)piVar13[3] + lVar1;
    uVar18 = (ulonglong)*(uint *)(lVar5 + 0x24) + lVar8 + 1 & 0xfffffffffffffffe;
    uVar21 = 0;
    if (1 < *(uint *)(lVar5 + 0x20)) {
      uVar21 = (ulonglong)(*(uint *)(lVar5 + 0x24) * 6);
    }
    uVar21 = uVar18 + uVar21 + 3 & 0xfffffffffffffffc;
  }
  param_1[9] = lVar8;
  param_1[0xb] = uVar18;
  param_1[0xd] = uVar21;
  if ((uVar2 >> 8 & 1) != 0) {
    if (lVar15 != 0) {
      param_1[0xc] = lVar15;
    }
    if (lVar19 != 0) {
      param_1[0xd] = lVar19;
    }
  }
  *(uint *)(param_1 + 0xe) = uVar12 * *piVar7;
  *(uint *)((longlong)param_1 + 0x74) = uVar16 * *piVar13;
  *(int *)(param_1 + 7) = (int)piVar7 - (int)lVar5;
  *(int *)((longlong)param_1 + 0x3c) = (int)piVar13 - (int)lVar5;
  return;
}



// FUNCTION 149845932 FUN_149845932 body=5332 status=ok
// SIG undefined FUN_149845932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149845932(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  int iVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  undefined1 (*pauVar42) [16];
  uint uVar43;
  uint uVar44;
  ulonglong uVar45;
  uint uVar46;
  uint uVar47;
  longlong lVar48;
  float *pfVar49;
  uint uVar50;
  ulonglong uVar51;
  float *pfVar52;
  float *pfVar53;
  ulonglong uVar54;
  undefined1 (*pauVar55) [16];
  uint uVar56;
  ulonglong uVar57;
  longlong lVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auStack_a78 [35];
  char local_a55;
  uint local_a54;
  ulonglong local_a50;
  longlong local_a48;
  longlong *local_a40;
  longlong local_a38;
  longlong local_a30;
  undefined8 local_a28 [64];
  undefined8 local_828;
  undefined1 local_818 [512];
  undefined8 local_618;
  undefined1 local_608 [512];
  undefined8 local_408;
  longlong local_350;
  uint local_348;
  longlong local_330;
  uint local_328;
  float afStack_298 [2];
  undefined8 auStack_290 [63];
  undefined8 local_98;
  uint local_90;
  float *local_88;
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  lVar48 = *param_1;
  uVar44 = *(uint *)(lVar48 + 0x10);
  if (((ulonglong)uVar44 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar41 = uVar44 + 0xf >> 4;
    uVar46 = uVar44 + 0xf & 0xfffffff0;
    local_a54 = uVar41 - 1;
    uVar56 = 0xaaaaaaaa;
    if (uVar44 != uVar46) {
      uVar56 = ~(0xffffffffU >> (((char)uVar44 - (char)uVar46) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a55 = *(char *)((longlong)param_1 + 0x1f);
    local_a48 = (ulonglong)*(uint *)(lVar48 + 0x48) + lVar48 + 0x20;
    local_a50 = (ulonglong)uVar41;
    uVar54 = 0;
    local_98 = 0;
    local_90 = *(uint *)(lVar48 + 0x34);
    pfVar53 = (float *)((ulonglong)*(uint *)(lVar48 + 0x4c) + lVar48 + 0x20);
    local_80 = (undefined1 (*) [16])((longlong)pfVar53 + (ulonglong)(local_90 * 0xc));
    local_78 = (undefined1 (*) [16])(*local_80 + (uint)(*(int *)(lVar48 + 0x38) * 0xc));
    local_828 = 0;
    local_618 = 0;
    local_408 = 0;
    local_88 = pfVar53;
    FUN_149846e08(local_a28,param_1);
    uVar45 = (ulonglong)local_a54;
    uVar39 = (ulonglong)(uVar41 + (uVar41 == 0));
    uVar41 = 3;
    do {
      uVar46 = 0xaaaaaaaa;
      if (uVar54 == uVar45) {
        uVar46 = uVar56;
      }
      uVar46 = uVar46 & 0xaaaaaaaaU - *(int *)(local_a48 + uVar54 * 4);
      uVar50 = uVar46;
      uVar43 = uVar41;
      auVar67 = _DAT_1499319a0;
      while (_DAT_1499319a0 = auVar67, uVar46 != 0) {
        if ((uVar50 & 0xaa000000) != 0) {
          if ((int)uVar50 < 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar43 - 3) * 6);
            if (uVar7 != 0xffff) {
              lVar48 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar43 - 3) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar48);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar48);
              dVar24 = *pdVar3;
              dVar26 = pdVar3[1];
              lVar48 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar3 = (double *)(lVar48 + uVar51);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              pdVar1 = (double *)(lVar48 + 0x10 + uVar51);
              *pdVar1 = (double)(float)dVar24;
              pdVar1[1] = (double)(float)dVar26;
            }
          }
          if ((uVar50 >> 0x1d & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar43 - 2) * 6);
            if (uVar7 != 0xffff) {
              lVar48 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar43 - 2) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar48);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar48);
              dVar24 = *pdVar3;
              dVar26 = pdVar3[1];
              lVar48 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar3 = (double *)(lVar48 + uVar51);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              pdVar1 = (double *)(lVar48 + 0x10 + uVar51);
              *pdVar1 = (double)(float)dVar24;
              pdVar1[1] = (double)(float)dVar26;
            }
          }
          if ((uVar50 >> 0x1b & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar43 - 1) * 6);
            if (uVar7 != 0xffff) {
              lVar48 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar43 - 1) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar48);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar48);
              dVar24 = *pdVar3;
              dVar26 = pdVar3[1];
              lVar48 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar3 = (double *)(lVar48 + uVar51);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              pdVar1 = (double *)(lVar48 + 0x10 + uVar51);
              *pdVar1 = (double)(float)dVar24;
              pdVar1[1] = (double)(float)dVar26;
            }
          }
          if ((uVar50 >> 0x19 & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)uVar43 * 6);
            if (uVar7 != 0xffff) {
              lVar48 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar43 * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar48);
              dVar4 = pdVar1[1];
              pdVar3 = (double *)(*param_2 + 0x10 + lVar48);
              dVar24 = *pdVar3;
              dVar26 = pdVar3[1];
              lVar48 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar3 = (double *)(lVar48 + uVar51);
              *pdVar3 = (double)(float)*pdVar1;
              pdVar3[1] = (double)(float)dVar4;
              pdVar1 = (double *)(lVar48 + 0x10 + uVar51);
              *pdVar1 = (double)(float)dVar24;
              pdVar1[1] = (double)(float)dVar26;
            }
          }
        }
        uVar43 = uVar43 + 4;
        uVar46 = uVar50 & 0xffffff;
        uVar50 = uVar50 << 8;
        auVar67 = _DAT_1499319a0;
      }
      uVar54 = uVar54 + 1;
      uVar41 = uVar41 + 0x10;
    } while (uVar54 != uVar39);
    uVar41 = 0;
    uVar46 = 3;
    uVar54 = 0;
    do {
      if ((local_90 != 0) && ((uint)local_98 - uVar41 < 0x10)) {
        uVar41 = 0x10;
        if (local_90 < 0x10) {
          uVar41 = local_90;
        }
        local_90 = local_90 - uVar41;
        uVar50 = (uint)local_98 & 0x1f;
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + uVar41);
        pfVar49 = (float *)((longlong)afStack_298 + (ulonglong)(uVar50 << 4));
        pfVar52 = pfVar53;
        do {
          uVar51 = 4;
          if (uVar41 < 4) {
            uVar51 = (ulonglong)uVar41;
          }
          iVar25 = (int)uVar51;
          pfVar53 = (float *)((ulonglong)(uint)(iVar25 * 0xc) + (longlong)pfVar52);
          fVar27 = *pfVar52;
          fVar28 = pfVar52[1];
          fVar29 = pfVar52[2];
          fVar30 = pfVar52[3];
          pfVar2 = (float *)((longlong)pfVar52 + (ulonglong)(uint)(iVar25 * 4));
          fVar31 = *pfVar2;
          fVar32 = pfVar2[1];
          fVar33 = pfVar2[2];
          fVar34 = pfVar2[3];
          pfVar52 = pfVar52 + uVar51 * 2;
          fVar35 = *pfVar52;
          fVar36 = pfVar52[1];
          fVar37 = pfVar52[2];
          fVar38 = pfVar52[3];
          auVar93._0_4_ = fVar35 * fVar35;
          auVar93._4_4_ = fVar36 * fVar36;
          auVar93._8_4_ = fVar37 * fVar37;
          auVar93._12_4_ = fVar38 * fVar38;
          auVar94._4_4_ =
               (uint)(((1.0 - fVar28 * fVar28) - fVar32 * fVar32) - auVar93._4_4_) & auVar67._4_4_;
          auVar94._0_4_ =
               (uint)(((1.0 - fVar27 * fVar27) - fVar31 * fVar31) - auVar93._0_4_) & auVar67._0_4_;
          auVar94._8_4_ =
               (uint)(((1.0 - fVar29 * fVar29) - fVar33 * fVar33) - auVar93._8_4_) & auVar67._8_4_;
          auVar94._12_4_ =
               (uint)(((1.0 - fVar30 * fVar30) - fVar34 * fVar34) - auVar93._12_4_) & auVar67._12_4_
          ;
          auVar94 = sqrtps(auVar93,auVar94);
          *pfVar49 = fVar27;
          pfVar49[1] = fVar31;
          pfVar49[2] = fVar35;
          pfVar49[3] = auVar94._0_4_;
          pfVar49[4] = fVar28;
          pfVar49[5] = fVar32;
          pfVar49[6] = fVar36;
          pfVar49[7] = auVar94._4_4_;
          pfVar49[8] = fVar29;
          pfVar49[9] = fVar33;
          pfVar49[10] = fVar37;
          pfVar49[0xb] = auVar94._8_4_;
          pfVar49[0xc] = fVar30;
          pfVar49[0xd] = fVar34;
          pfVar49[0xe] = fVar38;
          pfVar49[0xf] = auVar94._12_4_;
          pfVar49 = pfVar49 + 0x10;
          uVar41 = uVar41 - iVar25;
          pfVar52 = pfVar53;
        } while (uVar41 != 0);
        local_88 = pfVar53;
        uVar41 = local_98._4_4_;
      }
      uVar50 = *(uint *)(local_a48 + uVar54 * 4) & 0x55555555;
      uVar43 = uVar50;
      uVar47 = uVar46;
      while (uVar50 != 0) {
        if ((uVar43 & 0x55000000) != 0) {
          uVar50 = uVar41;
          if (uVar43 >> 0x1e != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar47 - 3) * 6);
            uVar50 = uVar41 + 1;
            if (uVar7 != 0xffff) {
              uVar51 = (ulonglong)((uVar41 & 0x1f) << 4);
              lVar48 = param_2[3];
              uVar57 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_298 + uVar51);
              dVar4 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_290 + uVar51);
              auVar22._8_4_ = SUB84(dVar4,0);
              auVar22._0_8_ = (double)(float)uVar5;
              auVar22._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + uVar57) = auVar22;
              dVar4 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar23._8_4_ = SUB84(dVar4,0);
              auVar23._0_8_ = (double)(float)uVar6;
              auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + 0x10 + uVar57) = auVar23;
            }
          }
          uVar41 = uVar50;
          if ((uVar43 >> 0x1c & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar47 - 2) * 6);
            uVar41 = uVar50 + 1;
            if (uVar7 != 0xffff) {
              uVar51 = (ulonglong)((uVar50 & 0x1f) << 4);
              lVar48 = param_2[3];
              uVar57 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_298 + uVar51);
              dVar4 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_290 + uVar51);
              auVar20._8_4_ = SUB84(dVar4,0);
              auVar20._0_8_ = (double)(float)uVar5;
              auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + uVar57) = auVar20;
              dVar4 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar21._8_4_ = SUB84(dVar4,0);
              auVar21._0_8_ = (double)(float)uVar6;
              auVar21._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + 0x10 + uVar57) = auVar21;
            }
          }
          uVar50 = uVar41;
          if ((uVar43 >> 0x1a & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar47 - 1) * 6);
            uVar50 = uVar41 + 1;
            if (uVar7 != 0xffff) {
              uVar51 = (ulonglong)((uVar41 & 0x1f) << 4);
              lVar48 = param_2[3];
              uVar57 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_298 + uVar51);
              dVar4 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_290 + uVar51);
              auVar18._8_4_ = SUB84(dVar4,0);
              auVar18._0_8_ = (double)(float)uVar5;
              auVar18._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + uVar57) = auVar18;
              dVar4 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar19._8_4_ = SUB84(dVar4,0);
              auVar19._0_8_ = (double)(float)uVar6;
              auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + 0x10 + uVar57) = auVar19;
            }
          }
          uVar41 = uVar50;
          if ((uVar43 >> 0x18 & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)uVar47 * 6);
            uVar41 = uVar50 + 1;
            if (uVar7 != 0xffff) {
              uVar51 = (ulonglong)((uVar50 & 0x1f) << 4);
              lVar48 = param_2[3];
              uVar57 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_298 + uVar51);
              dVar4 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_290 + uVar51);
              auVar16._8_4_ = SUB84(dVar4,0);
              auVar16._0_8_ = (double)(float)uVar5;
              auVar16._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + uVar57) = auVar16;
              dVar4 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar17._8_4_ = SUB84(dVar4,0);
              auVar17._0_8_ = (double)(float)uVar6;
              auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              *(undefined1 (*) [16])(lVar48 + 0x10 + uVar57) = auVar17;
            }
          }
        }
        uVar47 = uVar47 + 4;
        uVar50 = uVar43 & 0xffffff;
        uVar43 = uVar43 << 8;
      }
      local_98 = CONCAT44(uVar41,(uint)local_98);
      uVar54 = uVar54 + 1;
      uVar46 = uVar46 + 0x10;
    } while (uVar54 != uVar39);
    lVar48 = local_a48 + local_a50 * 4;
    local_a30 = local_350 + (ulonglong)(local_348 >> 3);
    local_a38 = local_330 + (ulonglong)(local_328 >> 3);
    uVar41 = 3;
    uVar54 = 0;
    auVar67 = ZEXT816(0);
    do {
      uVar46 = 0xaaaaaaaa;
      if (uVar54 == uVar45) {
        uVar46 = uVar56;
      }
      uVar46 = uVar46 & 0xaaaaaaaaU - *(int *)(lVar48 + uVar54 * 4);
      uVar50 = uVar46;
      uVar43 = uVar41;
      while (uVar46 != 0) {
        if ((uVar50 & 0xaa000000) != 0) {
          if ((int)uVar50 < 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar43 - 3) * 6);
            if (uVar7 != 0xffff) {
              lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar43 - 3) * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar58);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar58);
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              dVar24 = (double)(float)pdVar1[1];
              auVar15._8_4_ = SUB84(dVar24,0);
              auVar15._0_8_ = (double)(float)*pdVar1;
              auVar15._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar15;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
              auVar71._0_8_ = (double)auVar94._0_4_;
              auVar71._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar71;
            }
          }
          if ((uVar50 >> 0x1d & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar43 - 2) * 6);
            if (uVar7 != 0xffff) {
              lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar43 - 2) * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar58);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar58);
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              dVar24 = (double)(float)pdVar1[1];
              auVar8._8_4_ = SUB84(dVar24,0);
              auVar8._0_8_ = (double)(float)*pdVar1;
              auVar8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar8;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
              auVar68._0_8_ = (double)auVar94._0_4_;
              auVar68._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar68;
            }
          }
          if ((uVar50 >> 0x1b & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar43 - 1) * 6);
            if (uVar7 != 0xffff) {
              lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar43 - 1) * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar58);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar58);
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              dVar24 = (double)(float)pdVar1[1];
              auVar9._8_4_ = SUB84(dVar24,0);
              auVar9._0_8_ = (double)(float)*pdVar1;
              auVar9._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar9;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
              auVar69._0_8_ = (double)auVar94._0_4_;
              auVar69._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar69;
            }
          }
          if ((uVar50 >> 0x19 & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar43 * 6);
            if (uVar7 != 0xffff) {
              lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar43 * 4) * 0x60;
              dVar4 = *(double *)(*param_2 + 0x30 + lVar58);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar58);
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              dVar24 = (double)(float)pdVar1[1];
              auVar10._8_4_ = SUB84(dVar24,0);
              auVar10._0_8_ = (double)(float)*pdVar1;
              auVar10._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar10;
              auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
              auVar70._0_8_ = (double)auVar94._0_4_;
              auVar70._8_8_ = (double)auVar94._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar70;
            }
          }
        }
        uVar43 = uVar43 + 4;
        uVar46 = uVar50 & 0xffffff;
        uVar50 = uVar50 << 8;
      }
      uVar54 = uVar54 + 1;
      uVar41 = uVar41 + 0x10;
    } while (uVar54 != uVar39);
    local_a50 = lVar48 + local_a50 * 4;
    uVar41 = 3;
    uVar54 = 0;
    do {
      uVar46 = *(uint *)(lVar48 + uVar54 * 4) & 0x55555555;
      uVar50 = uVar46;
      uVar43 = uVar41;
      while (uVar46 != 0) {
        if ((uVar50 & 0x55000000) != 0) {
          pauVar55 = local_80;
          if (uVar50 >> 0x1e != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar43 - 3) * 6);
            pauVar55 = (undefined1 (*) [16])(*local_80 + 0xc);
            if (uVar7 != 0xffff) {
              auVar67 = *local_80;
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              auVar72._0_8_ = (double)auVar67._0_4_;
              auVar72._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar72;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              auVar59._0_8_ = (double)auVar67._0_4_;
              auVar59._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar59;
            }
          }
          pauVar42 = pauVar55;
          if ((uVar50 >> 0x1c & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar43 - 2) * 6);
            pauVar42 = (undefined1 (*) [16])(*pauVar55 + 0xc);
            if (uVar7 != 0xffff) {
              auVar67 = *pauVar55;
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              auVar73._0_8_ = (double)auVar67._0_4_;
              auVar73._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar73;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              auVar60._0_8_ = (double)auVar67._0_4_;
              auVar60._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar60;
            }
          }
          pauVar55 = pauVar42;
          if ((uVar50 >> 0x1a & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar43 - 1) * 6);
            pauVar55 = (undefined1 (*) [16])(*pauVar42 + 0xc);
            if (uVar7 != 0xffff) {
              auVar67 = *pauVar42;
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              auVar74._0_8_ = (double)auVar67._0_4_;
              auVar74._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar74;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              auVar61._0_8_ = (double)auVar67._0_4_;
              auVar61._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar61;
            }
          }
          local_80 = pauVar55;
          if ((uVar50 >> 0x18 & 1) != 0) {
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar43 * 6);
            local_80 = (undefined1 (*) [16])(*pauVar55 + 0xc);
            if (uVar7 != 0xffff) {
              auVar67 = *pauVar55;
              lVar58 = param_2[3];
              uVar51 = (ulonglong)((uint)uVar7 * 0x60);
              auVar75._0_8_ = (double)auVar67._0_4_;
              auVar75._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar51) = auVar75;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              auVar62._0_8_ = (double)auVar67._0_4_;
              auVar62._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x30 + uVar51) = auVar62;
            }
          }
        }
        uVar43 = uVar43 + 4;
        uVar46 = uVar50 & 0xffffff;
        uVar50 = uVar50 << 8;
      }
      uVar54 = uVar54 + 1;
      uVar41 = uVar41 + 0x10;
    } while (uVar54 != uVar39);
    if (local_a55 == '\0') {
      lVar58 = 4;
      uVar45 = 0;
      do {
        if (*(ushort *)(param_2[2] + lVar58) != 0xffff) {
          lVar40 = (longlong)*(int *)(param_2[1] + uVar45 * 4) * 0x60;
          pdVar1 = (double *)(*param_2 + 0x40 + lVar40);
          auVar94 = blendps(ZEXT416((uint)(float)*(double *)(*param_2 + 0x50 + lVar40)),ZEXT816(0),
                            0xe);
          lVar40 = param_2[3];
          uVar39 = (ulonglong)((uint)*(ushort *)(param_2[2] + lVar58) * 0x60);
          dVar4 = (double)(float)pdVar1[1];
          auVar67._8_4_ = SUB84(dVar4,0);
          auVar67._0_8_ = (double)(float)*pdVar1;
          auVar67._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x40 + uVar39) = auVar67;
          auVar92._0_8_ = (double)auVar94._0_4_;
          auVar92._8_8_ = (double)auVar94._4_4_;
          *(undefined1 (*) [16])(lVar40 + 0x50 + uVar39) = auVar92;
        }
        uVar45 = uVar45 + 1;
        lVar58 = lVar58 + 6;
      } while (uVar44 != uVar45);
    }
    else {
      uVar44 = 3;
      uVar54 = 0;
      auVar67 = ZEXT816(0);
      do {
        uVar41 = 0xaaaaaaaa;
        if (uVar54 == uVar45) {
          uVar41 = uVar56;
        }
        uVar41 = uVar41 & 0xaaaaaaaaU - *(int *)(local_a50 + uVar54 * 4);
        uVar46 = uVar41;
        uVar50 = uVar44;
        while (uVar41 != 0) {
          if ((uVar46 & 0xaa000000) != 0) {
            if ((int)uVar46 < 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar50 - 3) * 6);
              if (uVar7 != 0xffff) {
                lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar50 - 3) * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar58);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar58);
                lVar58 = param_2[3];
                uVar51 = (ulonglong)((uint)uVar7 * 0x60);
                dVar24 = (double)(float)pdVar1[1];
                auVar14._8_4_ = SUB84(dVar24,0);
                auVar14._0_8_ = (double)(float)*pdVar1;
                auVar14._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar51) = auVar14;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
                auVar79._0_8_ = (double)auVar94._0_4_;
                auVar79._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar51) = auVar79;
              }
            }
            if ((uVar46 >> 0x1d & 1) != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar50 - 2) * 6);
              if (uVar7 != 0xffff) {
                lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar50 - 2) * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar58);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar58);
                lVar58 = param_2[3];
                uVar51 = (ulonglong)((uint)uVar7 * 0x60);
                dVar24 = (double)(float)pdVar1[1];
                auVar11._8_4_ = SUB84(dVar24,0);
                auVar11._0_8_ = (double)(float)*pdVar1;
                auVar11._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar51) = auVar11;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
                auVar76._0_8_ = (double)auVar94._0_4_;
                auVar76._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar51) = auVar76;
              }
            }
            if ((uVar46 >> 0x1b & 1) != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar50 - 1) * 6);
              if (uVar7 != 0xffff) {
                lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar50 - 1) * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar58);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar58);
                lVar58 = param_2[3];
                uVar51 = (ulonglong)((uint)uVar7 * 0x60);
                dVar24 = (double)(float)pdVar1[1];
                auVar12._8_4_ = SUB84(dVar24,0);
                auVar12._0_8_ = (double)(float)*pdVar1;
                auVar12._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar51) = auVar12;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
                auVar77._0_8_ = (double)auVar94._0_4_;
                auVar77._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar51) = auVar77;
              }
            }
            if ((uVar46 >> 0x19 & 1) != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar50 * 6);
              if (uVar7 != 0xffff) {
                lVar58 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar50 * 4) * 0x60;
                dVar4 = *(double *)(*param_2 + 0x50 + lVar58);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar58);
                lVar58 = param_2[3];
                uVar51 = (ulonglong)((uint)uVar7 * 0x60);
                dVar24 = (double)(float)pdVar1[1];
                auVar13._8_4_ = SUB84(dVar24,0);
                auVar13._0_8_ = (double)(float)*pdVar1;
                auVar13._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar51) = auVar13;
                auVar94 = blendps(ZEXT416((uint)(float)dVar4),auVar67,0xe);
                auVar78._0_8_ = (double)auVar94._0_4_;
                auVar78._8_8_ = (double)auVar94._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar51) = auVar78;
              }
            }
          }
          uVar50 = uVar50 + 4;
          uVar41 = uVar46 & 0xffffff;
          uVar46 = uVar46 << 8;
        }
        uVar54 = uVar54 + 1;
        uVar44 = uVar44 + 0x10;
      } while (uVar54 != uVar39);
      uVar44 = 3;
      uVar45 = 0;
      do {
        uVar41 = *(uint *)(local_a50 + uVar45 * 4) & 0x55555555;
        uVar46 = uVar41;
        uVar56 = uVar44;
        while (uVar41 != 0) {
          if ((uVar46 & 0x55000000) != 0) {
            pauVar55 = local_78;
            if (uVar46 >> 0x1e != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar56 - 3) * 6);
              pauVar55 = (undefined1 (*) [16])(*local_78 + 0xc);
              if (uVar7 != 0xffff) {
                auVar67 = *local_78;
                lVar58 = param_2[3];
                uVar54 = (ulonglong)((uint)uVar7 * 0x60);
                auVar80._0_8_ = (double)auVar67._0_4_;
                auVar80._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar54) = auVar80;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                auVar63._0_8_ = (double)auVar67._0_4_;
                auVar63._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar54) = auVar63;
              }
            }
            pauVar42 = pauVar55;
            if ((uVar46 >> 0x1c & 1) != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar56 - 2) * 6);
              pauVar42 = (undefined1 (*) [16])(*pauVar55 + 0xc);
              if (uVar7 != 0xffff) {
                auVar67 = *pauVar55;
                lVar58 = param_2[3];
                uVar54 = (ulonglong)((uint)uVar7 * 0x60);
                auVar81._0_8_ = (double)auVar67._0_4_;
                auVar81._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar54) = auVar81;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                auVar64._0_8_ = (double)auVar67._0_4_;
                auVar64._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar54) = auVar64;
              }
            }
            pauVar55 = pauVar42;
            if ((uVar46 >> 0x1a & 1) != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar56 - 1) * 6);
              pauVar55 = (undefined1 (*) [16])(*pauVar42 + 0xc);
              if (uVar7 != 0xffff) {
                auVar67 = *pauVar42;
                lVar58 = param_2[3];
                uVar54 = (ulonglong)((uint)uVar7 * 0x60);
                auVar82._0_8_ = (double)auVar67._0_4_;
                auVar82._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar54) = auVar82;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                auVar65._0_8_ = (double)auVar67._0_4_;
                auVar65._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar54) = auVar65;
              }
            }
            local_78 = pauVar55;
            if ((uVar46 >> 0x18 & 1) != 0) {
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar56 * 6);
              local_78 = (undefined1 (*) [16])(*pauVar55 + 0xc);
              if (uVar7 != 0xffff) {
                auVar67 = *pauVar55;
                lVar58 = param_2[3];
                uVar54 = (ulonglong)((uint)uVar7 * 0x60);
                auVar83._0_8_ = (double)auVar67._0_4_;
                auVar83._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x40 + uVar54) = auVar83;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                auVar66._0_8_ = (double)auVar67._0_4_;
                auVar66._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar58 + 0x50 + uVar54) = auVar66;
              }
            }
          }
          uVar56 = uVar56 + 4;
          uVar41 = uVar46 & 0xffffff;
          uVar46 = uVar46 << 8;
        }
        uVar45 = uVar45 + 1;
        uVar44 = uVar44 + 0x10;
      } while (uVar45 != uVar39);
    }
    uVar45 = 0;
    uVar44 = 3;
    local_a40 = param_1;
    do {
      uVar41 = *(uint *)(local_a48 + uVar45 * 4) & 0xaaaaaaaa;
      uVar46 = uVar41;
      uVar56 = uVar44;
      while (uVar41 != 0) {
        if ((uVar46 & 0xaa000000) != 0) {
          FUN_149846fac(local_a28,local_a40);
          if ((int)uVar46 < 0) {
            uVar41 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar56 - 3) * 6);
            if (uVar7 != 0xffff) {
              uVar39 = (ulonglong)((uVar41 & 7) << 4);
              lVar58 = param_2[3];
              uVar54 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a28 + uVar39);
              uVar6 = *(undefined8 *)((longlong)local_a28 + uVar39 + 8);
              pdVar1 = (double *)(lVar58 + uVar54);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar58 + 0x10 + uVar54);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar46 >> 0x1d & 1) != 0) {
            uVar41 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar56 - 2) * 6);
            if (uVar7 != 0xffff) {
              uVar39 = (ulonglong)((uVar41 & 7) << 4);
              lVar58 = param_2[3];
              uVar54 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a28 + uVar39);
              uVar6 = *(undefined8 *)((longlong)local_a28 + uVar39 + 8);
              pdVar1 = (double *)(lVar58 + uVar54);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar58 + 0x10 + uVar54);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar46 >> 0x1b & 1) != 0) {
            uVar41 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)(uVar56 - 1) * 6);
            if (uVar7 != 0xffff) {
              uVar39 = (ulonglong)((uVar41 & 7) << 4);
              lVar58 = param_2[3];
              uVar54 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a28 + uVar39);
              uVar6 = *(undefined8 *)((longlong)local_a28 + uVar39 + 8);
              pdVar1 = (double *)(lVar58 + uVar54);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar58 + 0x10 + uVar54);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar46 >> 0x19 & 1) != 0) {
            uVar41 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar7 = *(ushort *)(param_2[2] + (ulonglong)uVar56 * 6);
            if (uVar7 != 0xffff) {
              uVar39 = (ulonglong)((uVar41 & 7) << 4);
              lVar58 = param_2[3];
              uVar54 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a28 + uVar39);
              uVar6 = *(undefined8 *)((longlong)local_a28 + uVar39 + 8);
              pdVar1 = (double *)(lVar58 + uVar54);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar1 = (double *)(lVar58 + 0x10 + uVar54);
              *pdVar1 = (double)(float)uVar6;
              pdVar1[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
        }
        uVar56 = uVar56 + 4;
        uVar41 = uVar46 & 0xffffff;
        uVar46 = uVar46 << 8;
      }
      uVar41 = (int)uVar45 + 1;
      uVar45 = (ulonglong)uVar41;
      uVar44 = uVar44 + 0x10;
    } while (uVar41 <= local_a54);
    uVar45 = 0;
    uVar44 = 3;
    do {
      uVar41 = *(uint *)(lVar48 + uVar45 * 4) & 0xaaaaaaaa;
      uVar46 = uVar41;
      uVar56 = uVar44;
      while (uVar41 != 0) {
        if ((uVar46 & 0xaa000000) != 0) {
          FUN_149847982(local_a28,local_a40);
          if ((int)uVar46 < 0) {
            uVar41 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar56 - 3) * 6);
            if (uVar7 != 0xffff) {
              auVar67 = *(undefined1 (*) [16])(local_818 + ((uVar41 & 7) << 4));
              lVar58 = param_2[3];
              uVar39 = (ulonglong)((uint)uVar7 * 0x60);
              auVar87._0_8_ = (double)auVar67._0_4_;
              auVar87._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar39) = auVar87;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              pdVar1 = (double *)(lVar58 + 0x30 + uVar39);
              *pdVar1 = (double)auVar67._0_4_;
              pdVar1[1] = (double)auVar67._4_4_;
            }
          }
          if ((uVar46 >> 0x1d & 1) != 0) {
            uVar41 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar56 - 2) * 6);
            if (uVar7 != 0xffff) {
              auVar67 = *(undefined1 (*) [16])(local_818 + ((uVar41 & 7) << 4));
              lVar58 = param_2[3];
              uVar39 = (ulonglong)((uint)uVar7 * 0x60);
              auVar84._0_8_ = (double)auVar67._0_4_;
              auVar84._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar39) = auVar84;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              pdVar1 = (double *)(lVar58 + 0x30 + uVar39);
              *pdVar1 = (double)auVar67._0_4_;
              pdVar1[1] = (double)auVar67._4_4_;
            }
          }
          if ((uVar46 >> 0x1b & 1) != 0) {
            uVar41 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar56 - 1) * 6);
            if (uVar7 != 0xffff) {
              auVar67 = *(undefined1 (*) [16])(local_818 + ((uVar41 & 7) << 4));
              lVar58 = param_2[3];
              uVar39 = (ulonglong)((uint)uVar7 * 0x60);
              auVar85._0_8_ = (double)auVar67._0_4_;
              auVar85._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar39) = auVar85;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              pdVar1 = (double *)(lVar58 + 0x30 + uVar39);
              *pdVar1 = (double)auVar67._0_4_;
              pdVar1[1] = (double)auVar67._4_4_;
            }
          }
          if ((uVar46 >> 0x19 & 1) != 0) {
            uVar41 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar7 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar56 * 6);
            if (uVar7 != 0xffff) {
              auVar67 = *(undefined1 (*) [16])(local_818 + ((uVar41 & 7) << 4));
              lVar58 = param_2[3];
              uVar39 = (ulonglong)((uint)uVar7 * 0x60);
              auVar86._0_8_ = (double)auVar67._0_4_;
              auVar86._8_8_ = (double)auVar67._4_4_;
              *(undefined1 (*) [16])(lVar58 + 0x20 + uVar39) = auVar86;
              auVar67 = insertps(auVar67,auVar67,0x8e);
              pdVar1 = (double *)(lVar58 + 0x30 + uVar39);
              *pdVar1 = (double)auVar67._0_4_;
              pdVar1[1] = (double)auVar67._4_4_;
            }
          }
        }
        uVar56 = uVar56 + 4;
        uVar41 = uVar46 & 0xffffff;
        uVar46 = uVar46 << 8;
      }
      uVar41 = (int)uVar45 + 1;
      uVar45 = (ulonglong)uVar41;
      uVar44 = uVar44 + 0x10;
    } while (uVar41 <= local_a54);
    if (local_a55 != '\0') {
      uVar45 = 0;
      uVar44 = 3;
      do {
        uVar41 = *(uint *)(local_a50 + uVar45 * 4) & 0xaaaaaaaa;
        uVar46 = uVar41;
        uVar56 = uVar44;
        while (uVar41 != 0) {
          if ((uVar46 & 0xaa000000) != 0) {
            FUN_149847ca2(local_a28,local_a40);
            if ((int)uVar46 < 0) {
              uVar41 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar56 - 3) * 6);
              if (uVar7 != 0xffff) {
                auVar67 = *(undefined1 (*) [16])(local_608 + ((uVar41 & 7) << 4));
                lVar48 = param_2[3];
                uVar39 = (ulonglong)((uint)uVar7 * 0x60);
                auVar91._0_8_ = (double)auVar67._0_4_;
                auVar91._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar48 + 0x40 + uVar39) = auVar91;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                pdVar1 = (double *)(lVar48 + 0x50 + uVar39);
                *pdVar1 = (double)auVar67._0_4_;
                pdVar1[1] = (double)auVar67._4_4_;
              }
            }
            if ((uVar46 >> 0x1d & 1) != 0) {
              uVar41 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar56 - 2) * 6);
              if (uVar7 != 0xffff) {
                auVar67 = *(undefined1 (*) [16])(local_608 + ((uVar41 & 7) << 4));
                lVar48 = param_2[3];
                uVar39 = (ulonglong)((uint)uVar7 * 0x60);
                auVar88._0_8_ = (double)auVar67._0_4_;
                auVar88._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar48 + 0x40 + uVar39) = auVar88;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                pdVar1 = (double *)(lVar48 + 0x50 + uVar39);
                *pdVar1 = (double)auVar67._0_4_;
                pdVar1[1] = (double)auVar67._4_4_;
              }
            }
            if ((uVar46 >> 0x1b & 1) != 0) {
              uVar41 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar56 - 1) * 6);
              if (uVar7 != 0xffff) {
                auVar67 = *(undefined1 (*) [16])(local_608 + ((uVar41 & 7) << 4));
                lVar48 = param_2[3];
                uVar39 = (ulonglong)((uint)uVar7 * 0x60);
                auVar89._0_8_ = (double)auVar67._0_4_;
                auVar89._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar48 + 0x40 + uVar39) = auVar89;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                pdVar1 = (double *)(lVar48 + 0x50 + uVar39);
                *pdVar1 = (double)auVar67._0_4_;
                pdVar1[1] = (double)auVar67._4_4_;
              }
            }
            if ((uVar46 >> 0x19 & 1) != 0) {
              uVar41 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar7 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar56 * 6);
              if (uVar7 != 0xffff) {
                auVar67 = *(undefined1 (*) [16])(local_608 + ((uVar41 & 7) << 4));
                lVar48 = param_2[3];
                uVar39 = (ulonglong)((uint)uVar7 * 0x60);
                auVar90._0_8_ = (double)auVar67._0_4_;
                auVar90._8_8_ = (double)auVar67._4_4_;
                *(undefined1 (*) [16])(lVar48 + 0x40 + uVar39) = auVar90;
                auVar67 = insertps(auVar67,auVar67,0x8e);
                pdVar1 = (double *)(lVar48 + 0x50 + uVar39);
                *pdVar1 = (double)auVar67._0_4_;
                pdVar1[1] = (double)auVar67._4_4_;
              }
            }
          }
          uVar56 = uVar56 + 4;
          uVar41 = uVar46 & 0xffffff;
          uVar46 = uVar46 << 8;
        }
        uVar41 = (int)uVar45 + 1;
        uVar45 = (ulonglong)uVar41;
        uVar44 = uVar44 + 0x10;
      } while (uVar41 <= local_a54);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149846e08 FUN_149846e08 body=420 status=ok
// SIG undefined FUN_149846e08(void)

void FUN_149846e08(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar3 = *param_2;
  uVar10 = *(uint *)(lVar3 + 0x50);
  uVar1 = *(uint *)(param_2 + 7);
  uVar2 = *(uint *)((longlong)param_2 + 0x3c);
  lVar4 = param_2[0xc];
  lVar5 = param_2[0xd];
  *(ulonglong *)(param_1 + 0x6b0) = lVar3 + 0x20 + (ulonglong)uVar10;
  lVar14 = param_2[8];
  lVar13 = param_2[10];
  lVar6 = param_2[0xe];
  *(longlong *)(param_1 + 0x6c8) = lVar14;
  *(longlong *)(param_1 + 0x6d0) = lVar13;
  *(longlong *)(param_1 + 0x6d8) = lVar4;
  *(int *)(param_1 + 0x6e0) = (int)lVar6;
  lVar11 = param_2[9];
  lVar7 = param_2[0xb];
  iVar9 = *(int *)((longlong)param_2 + 0x74);
  *(longlong *)(param_1 + 0x6e8) = lVar11;
  *(longlong *)(param_1 + 0x6f0) = lVar7;
  *(longlong *)(param_1 + 0x6f8) = lVar5;
  *(int *)(param_1 + 0x700) = iVar9;
  lVar12 = lVar3 + (ulonglong)uVar10 + (ulonglong)(uint)(*(int *)(lVar3 + 0x28) * 0x18) + 0x20;
  uVar10 = *(int *)(lVar3 + 0x28) + 3U & 0xfffffffc;
  lVar14 = lVar14 + (ulonglong)uVar10;
  lVar11 = lVar11 + (ulonglong)uVar10;
  lVar13 = lVar13 + (ulonglong)(uVar10 * 6);
  lVar7 = lVar7 + (ulonglong)(uVar10 * 6);
  *(longlong *)(param_1 + 0x6b8) = lVar12;
  *(longlong *)(param_1 + 0x708) = lVar14;
  *(longlong *)(param_1 + 0x728) = lVar11;
  *(longlong *)(param_1 + 0x710) = lVar13;
  *(longlong *)(param_1 + 0x730) = lVar7;
  *(longlong *)(param_1 + 0x718) = lVar4;
  *(longlong *)(param_1 + 0x738) = lVar5;
  iVar8 = (int)lVar6 + *(int *)((ulonglong)uVar1 + 4 + lVar3);
  iVar9 = iVar9 + *(int *)((ulonglong)uVar2 + 4 + lVar3);
  *(int *)(param_1 + 0x720) = iVar8;
  *(int *)(param_1 + 0x740) = iVar9;
  if (*(char *)((longlong)param_2 + 0x1f) != '\0') {
    *(ulonglong *)(param_1 + 0x6c0) = lVar12 + (ulonglong)(uint)(*(int *)(lVar3 + 0x2c) * 0x18);
    *(ulonglong *)(param_1 + 0x748) = lVar14 + (ulonglong)*(uint *)(lVar3 + 0x2c);
    *(ulonglong *)(param_1 + 0x768) = lVar11 + (ulonglong)*(uint *)(lVar3 + 0x2c);
    *(ulonglong *)(param_1 + 0x750) = lVar13 + (ulonglong)(uint)(*(int *)(lVar3 + 0x2c) * 6);
    *(ulonglong *)(param_1 + 0x770) = lVar7 + (ulonglong)(uint)(*(int *)(lVar3 + 0x2c) * 6);
    *(longlong *)(param_1 + 0x758) = lVar4;
    *(longlong *)(param_1 + 0x778) = lVar5;
    *(int *)(param_1 + 0x760) = iVar8 + *(int *)(lVar3 + 8 + (ulonglong)uVar1);
    *(int *)(param_1 + 0x780) = iVar9 + *(int *)(lVar3 + 8 + (ulonglong)uVar2);
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar3 + 0x28);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar3 + 0x2c);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(lVar3 + 0x30);
  return;
}



// FUNCTION 149846fac FUN_149846fac body=1931 status=ok
// SIG undefined FUN_149846fac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_149846fac(longlong param_1,ulonglong param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined2 uVar11;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  float fVar17;
  uint uVar18;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar26;
  undefined1 auVar21 [16];
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 in_XMM5 [16];
  undefined1 auVar30 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [12];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar38 [12];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 unaff_XMM7 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar62 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar66;
  float fVar67;
  undefined1 auVar65 [16];
  float fVar68;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 local_160 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  ulonglong local_e8;
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  local_e8 = DAT_14c707940 ^ (ulonglong)&fStack_1d8;
  uVar18 = *(uint *)(param_1 + 0x208);
  uVar4 = local_e8;
  uVar6 = param_2;
  if (uVar18 != 0) {
    uVar2 = *(uint *)(param_1 + 0x200);
    uVar4 = (ulonglong)uVar2;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x204);
    if (uVar2 - *(uint *)(param_1 + 0x204) < 4) {
      uVar23 = 4;
      if (uVar18 < 4) {
        uVar23 = uVar18;
      }
      *(uint *)(param_1 + 0x208) = uVar18 - uVar23;
      *(uint *)(param_1 + 0x200) = uVar2 + uVar23;
      local_1d0 = ZEXT416(*(uint *)(param_2 + 0x78));
      if (*(char *)(param_2 + 0x20) != '\0') {
        auVar12 = **(undefined1 (**) [16])(param_1 + 0x6d0);
        auVar13 = (*(undefined1 (**) [16])(param_1 + 0x6d0))[1];
        auVar16 = pmovzxbw(in_XMM3,auVar12);
        auVar19 = pmovzxbw(in_XMM4,auVar13);
        auVar30 = pmovzxbd(in_XMM5,auVar12);
        auVar39[1] = 0;
        auVar39[0] = auVar12[8];
        auVar39[2] = auVar12[9];
        auVar39[3] = 0;
        auVar39[4] = auVar12[10];
        auVar39[5] = 0;
        auVar39[6] = auVar12[0xb];
        auVar39[7] = 0;
        auVar39[8] = auVar12[0xc];
        auVar39[9] = 0;
        auVar39[10] = auVar12[0xd];
        auVar39[0xb] = 0;
        auVar39[0xc] = auVar12[0xe];
        auVar39[0xd] = 0;
        auVar39[0xe] = auVar12[0xf];
        auVar39[0xf] = 0;
        auVar39 = pmovzxwd(unaff_XMM6,auVar39);
        auVar13 = pmovzxbd(auVar13,auVar13);
        auVar20._0_4_ = CONCAT22(0,auVar19._8_2_);
        auVar20._4_2_ = auVar19._10_2_;
        auVar20._6_2_ = 0;
        auVar20._8_2_ = auVar19._12_2_;
        auVar20._10_2_ = 0;
        auVar20._12_2_ = auVar19._14_2_;
        auVar20._14_2_ = 0;
        unaff_XMM12._0_4_ = (float)auVar30._0_4_ * 0.003921569;
        unaff_XMM12._4_4_ = (float)auVar30._4_4_ * 0.003921569;
        unaff_XMM12._8_4_ = (float)auVar30._8_4_ * 0.003921569;
        unaff_XMM12._12_4_ = (float)auVar30._12_4_ * 0.003921569;
        unaff_XMM11._0_4_ = (float)auVar12[0xc] * 0.003921569;
        unaff_XMM11._4_4_ = (float)auVar12[0xd] * 0.003921569;
        unaff_XMM11._8_4_ = (float)auVar12[0xe] * 0.003921569;
        unaff_XMM11._12_4_ = (float)auVar12[0xf] * 0.003921569;
        local_1e0 = (float)auVar13._0_4_ * 0.003921569;
        fStack_1dc = (float)auVar13._4_4_ * 0.003921569;
        fStack_1d8 = (float)auVar13._8_4_ * 0.003921569;
        fStack_1d4 = (float)auVar13._12_4_ * 0.003921569;
        local_220 = (float)auVar20._0_4_ * 0.003921569;
        fStack_21c = (float)auVar19._10_2_ * 0.003921569;
        fStack_218 = (float)auVar19._12_2_ * 0.003921569;
        fStack_214 = (float)auVar19._14_2_ * 0.003921569;
        if (*(char *)(param_2 + 0x33) == '\0') {
          auVar12 = **(undefined1 (**) [16])(param_1 + 0x6f0);
          auVar13 = (*(undefined1 (**) [16])(param_1 + 0x6f0))[1];
          auVar20 = pmovzxbw(auVar20,auVar12);
          auVar30 = pmovzxbw(auVar30,auVar13);
          auVar40 = pmovzxbd(auVar39,auVar12);
          auVar19[1] = 0;
          auVar19[0] = auVar12[8];
          auVar19[2] = auVar12[9];
          auVar19[3] = 0;
          auVar19[4] = auVar12[10];
          auVar19[5] = 0;
          auVar19[6] = auVar12[0xb];
          auVar19[7] = 0;
          auVar19[8] = auVar12[0xc];
          auVar19[9] = 0;
          auVar19[10] = auVar12[0xd];
          auVar19[0xb] = 0;
          auVar19[0xc] = auVar12[0xe];
          auVar19[0xd] = 0;
          auVar19[0xe] = auVar12[0xf];
          auVar19[0xf] = 0;
          auVar19 = pmovzxwd(unaff_XMM7,auVar19);
          auVar13 = pmovzxbd(auVar13,auVar13);
          local_1b0 = (float)auVar40._0_4_ * 0.003921569;
          fStack_1ac = (float)auVar40._4_4_ * 0.003921569;
          fStack_1a8 = (float)auVar40._8_4_ * 0.003921569;
          fStack_1a4 = (float)auVar40._12_4_ * 0.003921569;
          local_200 = (float)auVar20._8_2_ * 0.003921569;
          fStack_1fc = (float)auVar20._10_2_ * 0.003921569;
          fStack_1f8 = (float)auVar20._12_2_ * 0.003921569;
          fStack_1f4 = (float)auVar20._14_2_ * 0.003921569;
          local_1f0 = (float)auVar19._0_4_ * 0.003921569;
          fStack_1ec = (float)auVar19._4_4_ * 0.003921569;
          fStack_1e8 = (float)auVar19._8_4_ * 0.003921569;
          fStack_1e4 = (float)auVar19._12_4_ * 0.003921569;
          local_150 = (float)auVar12[0xc] * 0.003921569;
          fStack_14c = (float)auVar12[0xd] * 0.003921569;
          fStack_148 = (float)auVar12[0xe] * 0.003921569;
          fStack_144 = (float)auVar12[0xf] * 0.003921569;
          local_130 = (float)auVar13._0_4_ * 0.003921569;
          fStack_12c = (float)auVar13._4_4_ * 0.003921569;
          fStack_128 = (float)auVar13._8_4_ * 0.003921569;
          fStack_124 = (float)auVar13._12_4_ * 0.003921569;
          local_110 = (float)auVar30._8_2_ * 0.003921569;
          fStack_10c = (float)auVar30._10_2_ * 0.003921569;
          fStack_108 = (float)auVar30._12_2_ * 0.003921569;
          fStack_104 = (float)auVar30._14_2_ * 0.003921569;
        }
        local_230 = (float)auVar16._8_2_ * 0.003921569;
        fStack_22c = (float)auVar16._10_2_ * 0.003921569;
        fStack_228 = (float)auVar16._12_2_ * 0.003921569;
        fStack_224 = (float)auVar16._14_2_ * 0.003921569;
        unaff_XMM10._0_4_ = (float)auVar39._0_4_ * 0.003921569;
        unaff_XMM10._4_4_ = (float)auVar39._4_4_ * 0.003921569;
        unaff_XMM10._8_4_ = (float)auVar39._8_4_ * 0.003921569;
        unaff_XMM10._12_4_ = (float)auVar39._12_4_ * 0.003921569;
        local_1c0 = unaff_XMM12;
        local_160 = unaff_XMM11;
        local_140 = local_1e0;
        fStack_13c = fStack_1dc;
        fStack_138 = fStack_1d8;
        fStack_134 = fStack_1d4;
        local_120 = local_220;
        fStack_11c = fStack_21c;
        fStack_118 = fStack_218;
        fStack_114 = fStack_214;
      }
      uVar8 = FUN_149847738(param_1 + 0x630,uVar23,param_1 + 0x6c8);
      uVar9 = FUN_149847738(param_1 + 0x670,uVar23,param_1 + 0x6e8);
      auVar12 = _DAT_1499314a0;
      fVar50 = *(float *)(param_1 + 0x630);
      fVar28 = *(float *)(param_1 + 0x634);
      fVar51 = *(float *)(param_1 + 0x640);
      fVar31 = *(float *)(param_1 + 0x644);
      fVar52 = *(float *)(param_1 + 0x650);
      fVar33 = *(float *)(param_1 + 0x654);
      fVar53 = *(float *)(param_1 + 0x660);
      fVar35 = *(float *)(param_1 + 0x664);
      local_210 = *(float *)(param_1 + 0x670);
      fVar17 = *(float *)(param_1 + 0x674);
      fStack_20c = *(float *)(param_1 + 0x680);
      fVar22 = *(float *)(param_1 + 0x684);
      fStack_208 = *(float *)(param_1 + 0x690);
      fVar24 = *(float *)(param_1 + 0x694);
      fStack_204 = *(float *)(param_1 + 0x6a0);
      fVar26 = *(float *)(param_1 + 0x6a4);
      fVar29 = *(float *)(param_1 + 0x678);
      fVar32 = *(float *)(param_1 + 0x688);
      fVar34 = *(float *)(param_1 + 0x698);
      fVar36 = *(float *)(param_1 + 0x6a8);
      fVar54 = *(float *)(param_1 + 0x638);
      fVar55 = *(float *)(param_1 + 0x648);
      fVar56 = *(float *)(param_1 + 0x658);
      fVar57 = *(float *)(param_1 + 0x668);
      if (*(char *)(param_2 + 0x20) != '\0') {
        auVar37._8_4_ = (int)extraout_XMM0_Qb;
        auVar37._0_8_ = uVar8;
        uVar11 = (undefined2)((ulonglong)uVar8 >> 0x30);
        auVar63._12_2_ = uVar11;
        auVar63._0_12_ = auVar37;
        auVar63._14_2_ = uVar11;
        auVar43._12_4_ = auVar63._12_4_;
        auVar43._0_10_ = auVar37._0_10_;
        uVar11 = (undefined2)((ulonglong)uVar8 >> 0x20);
        auVar43._10_2_ = uVar11;
        auVar42._10_6_ = auVar43._10_6_;
        auVar42._8_2_ = uVar11;
        auVar42._0_8_ = uVar8;
        auVar41._8_8_ = auVar42._8_8_;
        uVar11 = (undefined2)((ulonglong)uVar8 >> 0x10);
        auVar41._6_2_ = uVar11;
        auVar41._4_2_ = uVar11;
        auVar41._0_2_ = (undefined2)uVar8;
        auVar41._2_2_ = auVar41._0_2_;
        auVar19 = ~auVar41 & unaff_XMM12;
        auVar13._4_4_ = fStack_22c;
        auVar13._0_4_ = local_230;
        auVar13._8_4_ = fStack_228;
        auVar13._12_4_ = fStack_224;
        auVar13 = ~auVar41 & auVar13;
        auVar20 = ~auVar41 & unaff_XMM10;
        auVar39 = auVar41 & _DAT_1499314a0;
        auVar63 = ~auVar41 & unaff_XMM11 | auVar39;
        auVar62._4_4_ = fStack_1dc;
        auVar62._0_4_ = local_1e0;
        auVar62._8_4_ = fStack_1d8;
        auVar62._12_4_ = fStack_1d4;
        auVar62 = ~auVar41 & auVar62 | auVar39;
        auVar30._4_4_ = fStack_21c;
        auVar30._0_4_ = local_220;
        auVar30._8_4_ = fStack_218;
        auVar30._12_4_ = fStack_214;
        auVar39 = ~auVar41 & auVar30 | auVar39;
        bVar7 = *(char *)(param_2 + 0x33) == '\0';
        auVar40._4_4_ = fStack_1ec;
        auVar40._0_4_ = local_1f0;
        auVar40._8_4_ = fStack_1e8;
        auVar40._12_4_ = fStack_1e4;
        auVar16._4_4_ = fStack_1fc;
        auVar16._0_4_ = local_200;
        auVar16._8_4_ = fStack_1f8;
        auVar16._12_4_ = fStack_1f4;
        if (!bVar7) {
          auVar16._4_4_ = fStack_22c;
          auVar16._0_4_ = local_230;
          auVar16._8_4_ = fStack_228;
          auVar16._12_4_ = fStack_224;
          auVar40 = unaff_XMM10;
        }
        fVar50 = fVar50 * auVar63._0_4_ + auVar19._0_4_;
        fVar51 = fVar51 * auVar63._4_4_ + auVar19._4_4_;
        fVar52 = fVar52 * auVar63._8_4_ + auVar19._8_4_;
        fVar53 = fVar53 * auVar63._12_4_ + auVar19._12_4_;
        fVar28 = fVar28 * auVar62._0_4_ + auVar13._0_4_;
        fVar31 = fVar31 * auVar62._4_4_ + auVar13._4_4_;
        fVar33 = fVar33 * auVar62._8_4_ + auVar13._8_4_;
        fVar35 = fVar35 * auVar62._12_4_ + auVar13._12_4_;
        uVar4 = (ulonglong)bVar7;
        auVar38._8_4_ = (int)extraout_XMM0_Qb_00;
        auVar38._0_8_ = uVar9;
        uVar11 = (undefined2)((ulonglong)uVar9 >> 0x30);
        auVar47._12_2_ = uVar11;
        auVar47._0_12_ = auVar38;
        auVar47._14_2_ = uVar11;
        uVar11 = (undefined2)((ulonglong)uVar9 >> 0x20);
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_10_ = auVar38._0_10_;
        auVar46._10_2_ = uVar11;
        auVar45._10_6_ = auVar46._10_6_;
        auVar45._8_2_ = uVar11;
        auVar45._0_8_ = uVar9;
        uVar11 = (undefined2)((ulonglong)uVar9 >> 0x10);
        auVar44._8_8_ = auVar45._8_8_;
        auVar44._6_2_ = uVar11;
        auVar44._4_2_ = uVar11;
        auVar44._2_2_ = (short)uVar9;
        auVar44._0_2_ = (short)uVar9;
        auVar19 = ~auVar44 & *(undefined1 (*) [16])(local_1c0 + uVar4 * 0x10);
        auVar16 = ~auVar44 & auVar16;
        auVar40 = ~auVar44 & auVar40;
        auVar13 = _DAT_1499314a0 & auVar44;
        auVar30 = ~auVar44 & *(undefined1 (*) [16])(local_160 + uVar4 * 0x10) | auVar13;
        auVar62 = ~auVar44 & *(undefined1 (*) [16])(&local_140 + uVar4 * 4) | auVar13;
        auVar13 = ~auVar44 & *(undefined1 (*) [16])(&local_120 + uVar4 * 4) | auVar13;
        local_210 = local_210 * auVar30._0_4_ + auVar19._0_4_;
        fStack_20c = fStack_20c * auVar30._4_4_ + auVar19._4_4_;
        fStack_208 = fStack_208 * auVar30._8_4_ + auVar19._8_4_;
        fStack_204 = fStack_204 * auVar30._12_4_ + auVar19._12_4_;
        fVar17 = fVar17 * auVar62._0_4_ + auVar16._0_4_;
        fVar22 = fVar22 * auVar62._4_4_ + auVar16._4_4_;
        fVar24 = fVar24 * auVar62._8_4_ + auVar16._8_4_;
        fVar26 = fVar26 * auVar62._12_4_ + auVar16._12_4_;
        fVar29 = *(float *)(param_1 + 0x678) * auVar13._0_4_ + auVar40._0_4_;
        fVar32 = *(float *)(param_1 + 0x688) * auVar13._4_4_ + auVar40._4_4_;
        fVar34 = *(float *)(param_1 + 0x698) * auVar13._8_4_ + auVar40._8_4_;
        fVar36 = *(float *)(param_1 + 0x6a8) * auVar13._12_4_ + auVar40._12_4_;
        fVar54 = *(float *)(param_1 + 0x638) * auVar39._0_4_ + auVar20._0_4_;
        fVar55 = *(float *)(param_1 + 0x648) * auVar39._4_4_ + auVar20._4_4_;
        fVar56 = *(float *)(param_1 + 0x658) * auVar39._8_4_ + auVar20._8_4_;
        fVar57 = *(float *)(param_1 + 0x668) * auVar39._12_4_ + auVar20._12_4_;
      }
      fStack_214 = fVar57;
      fStack_218 = fVar56;
      fStack_21c = fVar55;
      local_220 = fVar54;
      fStack_224 = fVar36;
      fStack_228 = fVar34;
      fStack_22c = fVar32;
      local_230 = fVar29;
      pauVar3 = *(undefined1 (**) [16])(param_1 + 0x6b0);
      uVar4 = (ulonglong)uVar23;
      auVar65._2_2_ = (short)extraout_XMM0_Qb;
      auVar65._0_2_ = (short)extraout_XMM0_Qb;
      uVar11 = (undefined2)((ulonglong)extraout_XMM0_Qb >> 0x10);
      auVar65._4_2_ = uVar11;
      auVar65._6_2_ = uVar11;
      uVar11 = (undefined2)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar65._8_2_ = uVar11;
      auVar65._10_2_ = uVar11;
      auVar65._14_2_ = (undefined2)((ulonglong)extraout_XMM0_Qb >> 0x30);
      auVar65._12_2_ = auVar65._14_2_;
      auVar10._2_2_ = (short)extraout_XMM0_Qb_00;
      auVar10._0_2_ = (short)extraout_XMM0_Qb_00;
      uVar11 = (undefined2)((ulonglong)extraout_XMM0_Qb_00 >> 0x10);
      auVar10._4_2_ = uVar11;
      auVar10._6_2_ = uVar11;
      uVar11 = (undefined2)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar10._8_2_ = uVar11;
      auVar10._10_2_ = uVar11;
      auVar10._14_2_ = (undefined2)((ulonglong)extraout_XMM0_Qb_00 >> 0x30);
      auVar10._12_2_ = auVar10._14_2_;
      auVar13 = ~auVar65 & *pauVar3;
      auVar20 = ~auVar65 & *(undefined1 (*) [16])(*pauVar3 + uVar4 * 4);
      auVar16 = ~auVar65 & *(undefined1 (*) [16])(*pauVar3 + uVar4 * 8);
      auVar62 = ~auVar10 & *pauVar3;
      auVar40 = ~auVar10 & *(undefined1 (*) [16])(*pauVar3 + uVar4 * 4);
      auVar30 = ~auVar10 & *(undefined1 (*) [16])(*pauVar3 + uVar4 * 8);
      auVar39 = auVar65 & _DAT_1499314a0;
      auVar19 = ~auVar65 & *(undefined1 (*) [16])(*pauVar3 + uVar4 * 0xc) | auVar39;
      fVar54 = auVar19._0_4_ * fVar50 + auVar13._0_4_;
      fVar55 = auVar19._4_4_ * fVar51 + auVar13._4_4_;
      fVar56 = auVar19._8_4_ * fVar52 + auVar13._8_4_;
      fVar57 = auVar19._12_4_ * fVar53 + auVar13._12_4_;
      auVar13 = ~auVar65 & pauVar3[uVar4] | auVar39;
      fVar58 = auVar13._0_4_ * fVar28 + auVar20._0_4_;
      fVar59 = auVar13._4_4_ * fVar31 + auVar20._4_4_;
      fVar60 = auVar13._8_4_ * fVar33 + auVar20._8_4_;
      fVar61 = auVar13._12_4_ * fVar35 + auVar20._12_4_;
      auVar13 = *(undefined1 (*) [16])((longlong)pauVar3 + uVar4 * 0x14);
      auVar39 = ~auVar65 & auVar13 | auVar39;
      fVar64 = auVar39._0_4_ * local_220 + auVar16._0_4_;
      fVar66 = auVar39._4_4_ * fStack_21c + auVar16._4_4_;
      fVar67 = auVar39._8_4_ * fStack_218 + auVar16._8_4_;
      fVar68 = auVar39._12_4_ * fStack_214 + auVar16._12_4_;
      auVar39 = auVar10 & _DAT_1499314a0;
      auVar16 = ~auVar10 & *(undefined1 (*) [16])(*pauVar3 + uVar4 * 0xc) | auVar39;
      fVar29 = auVar16._0_4_ * local_210 + auVar62._0_4_;
      fVar32 = auVar16._4_4_ * fStack_20c + auVar62._4_4_;
      fVar34 = auVar16._8_4_ * fStack_208 + auVar62._8_4_;
      fVar36 = auVar16._12_4_ * fStack_204 + auVar62._12_4_;
      auVar16 = ~auVar10 & pauVar3[uVar4] | auVar39;
      fVar17 = auVar16._0_4_ * fVar17 + auVar40._0_4_;
      fVar22 = auVar16._4_4_ * fVar22 + auVar40._4_4_;
      fVar24 = auVar16._8_4_ * fVar24 + auVar40._8_4_;
      fVar26 = auVar16._12_4_ * fVar26 + auVar40._12_4_;
      auVar39 = ~auVar10 & auVar13 | auVar39;
      fVar50 = auVar39._0_4_ * local_230 + auVar30._0_4_;
      fVar28 = auVar39._4_4_ * fStack_22c + auVar30._4_4_;
      fVar51 = auVar39._8_4_ * fStack_228 + auVar30._8_4_;
      fVar31 = auVar39._12_4_ * fStack_224 + auVar30._12_4_;
      fVar52 = (float)DAT_1499314a0;
      fVar33 = DAT_1499314a0._4_4_;
      fVar53 = DAT_1499314a0._8_4_;
      fVar35 = DAT_1499314a0._12_4_;
      auVar14._0_4_ = fVar64 * fVar64;
      auVar14._4_4_ = fVar66 * fVar66;
      auVar14._8_4_ = fVar67 * fVar67;
      auVar14._12_4_ = fVar68 * fVar68;
      *(undefined1 **)(param_1 + 0x6b0) = *pauVar3 + uVar23 * 0x18;
      auVar21._0_8_ =
           CONCAT44(((fVar33 - fVar55 * fVar55) - fVar59 * fVar59) - auVar14._4_4_,
                    ((fVar52 - fVar54 * fVar54) - fVar58 * fVar58) - auVar14._0_4_) &
           0x7fffffff7fffffff;
      auVar21._8_4_ = ABS(((fVar53 - fVar56 * fVar56) - fVar60 * fVar60) - auVar14._8_4_);
      auVar21._12_4_ = ABS(((fVar35 - fVar57 * fVar57) - fVar61 * fVar61) - auVar14._12_4_);
      auVar13 = sqrtps(auVar14,auVar21);
      auVar48._0_8_ =
           CONCAT44(((fVar33 - fVar32 * fVar32) - fVar22 * fVar22) - fVar28 * fVar28,
                    ((fVar52 - fVar29 * fVar29) - fVar17 * fVar17) - fVar50 * fVar50) &
           0x7fffffff7fffffff;
      auVar48._8_4_ = ABS(((fVar53 - fVar34 * fVar34) - fVar24 * fVar24) - fVar51 * fVar51);
      auVar48._12_4_ = ABS(((fVar35 - fVar36 * fVar36) - fVar26 * fVar26) - fVar31 * fVar31);
      auVar39 = sqrtps(auVar48,auVar48);
      fVar52 = auVar13._0_4_;
      fVar33 = auVar13._4_4_;
      fVar53 = auVar13._8_4_;
      fVar35 = auVar13._12_4_;
      uVar18 = (uint)(fVar52 * auVar39._0_4_ + fVar64 * fVar50 + fVar58 * fVar17 + fVar54 * fVar29)
               & 0x80000000;
      uVar23 = (uint)(fVar33 * auVar39._4_4_ + fVar66 * fVar28 + fVar59 * fVar22 + fVar55 * fVar32)
               & 0x80000000;
      uVar25 = (uint)(fVar53 * auVar39._8_4_ + fVar67 * fVar51 + fVar60 * fVar24 + fVar56 * fVar34)
               & 0x80000000;
      uVar27 = (uint)(fVar35 * auVar39._12_4_ + fVar68 * fVar31 + fVar61 * fVar26 + fVar57 * fVar36)
               & 0x80000000;
      fVar54 = (float)((uint)fVar29 ^ uVar18) * (float)local_1d0._0_4_ +
               (fVar54 - (float)local_1d0._0_4_ * fVar54);
      fVar55 = (float)((uint)fVar32 ^ uVar23) * (float)local_1d0._0_4_ +
               (fVar55 - (float)local_1d0._0_4_ * fVar55);
      fVar56 = (float)((uint)fVar34 ^ uVar25) * (float)local_1d0._0_4_ +
               (fVar56 - (float)local_1d0._0_4_ * fVar56);
      fVar57 = (float)((uint)fVar36 ^ uVar27) * (float)local_1d0._0_4_ +
               (fVar57 - (float)local_1d0._0_4_ * fVar57);
      fVar17 = (float)((uint)fVar17 ^ uVar18) * (float)local_1d0._0_4_ +
               (fVar58 - (float)local_1d0._0_4_ * fVar58);
      fVar22 = (float)((uint)fVar22 ^ uVar23) * (float)local_1d0._0_4_ +
               (fVar59 - (float)local_1d0._0_4_ * fVar59);
      fVar24 = (float)((uint)fVar24 ^ uVar25) * (float)local_1d0._0_4_ +
               (fVar60 - (float)local_1d0._0_4_ * fVar60);
      fVar26 = (float)((uint)fVar26 ^ uVar27) * (float)local_1d0._0_4_ +
               (fVar61 - (float)local_1d0._0_4_ * fVar61);
      fVar50 = (float)((uint)fVar50 ^ uVar18) * (float)local_1d0._0_4_ +
               (fVar64 - (float)local_1d0._0_4_ * fVar64);
      fVar28 = (float)((uint)fVar28 ^ uVar23) * (float)local_1d0._0_4_ +
               (fVar66 - (float)local_1d0._0_4_ * fVar66);
      fVar51 = (float)((uint)fVar51 ^ uVar25) * (float)local_1d0._0_4_ +
               (fVar67 - (float)local_1d0._0_4_ * fVar67);
      fVar31 = (float)((uint)fVar31 ^ uVar27) * (float)local_1d0._0_4_ +
               (fVar68 - (float)local_1d0._0_4_ * fVar68);
      fVar29 = (float)(uVar18 ^ (uint)auVar39._0_4_) * (float)local_1d0._0_4_ +
               (fVar52 - (float)local_1d0._0_4_ * fVar52);
      fVar32 = (float)(uVar23 ^ (uint)auVar39._4_4_) * (float)local_1d0._0_4_ +
               (fVar33 - (float)local_1d0._0_4_ * fVar33);
      fVar34 = (float)(uVar25 ^ (uint)auVar39._8_4_) * (float)local_1d0._0_4_ +
               (fVar53 - (float)local_1d0._0_4_ * fVar53);
      fVar36 = (float)(uVar27 ^ (uint)auVar39._12_4_) * (float)local_1d0._0_4_ +
               (fVar35 - (float)local_1d0._0_4_ * fVar35);
      auVar15._0_4_ = fVar50 * fVar50 + fVar17 * fVar17 + fVar54 * fVar54;
      auVar15._4_4_ = fVar28 * fVar28 + fVar22 * fVar22 + fVar55 * fVar55;
      auVar15._8_4_ = fVar51 * fVar51 + fVar24 * fVar24 + fVar56 * fVar56;
      auVar15._12_4_ = fVar31 * fVar31 + fVar26 * fVar26 + fVar57 * fVar57;
      auVar49._0_4_ = fVar29 * fVar29 + auVar15._0_4_;
      auVar49._4_4_ = fVar32 * fVar32 + auVar15._4_4_;
      auVar49._8_4_ = fVar34 * fVar34 + auVar15._8_4_;
      auVar49._12_4_ = fVar36 * fVar36 + auVar15._12_4_;
      auVar13 = sqrtps(auVar15,auVar49);
      auVar12 = divps(auVar12,auVar13);
      fVar52 = auVar12._0_4_;
      fVar33 = auVar12._4_4_;
      fVar53 = auVar12._8_4_;
      fVar35 = auVar12._12_4_;
      uVar4 = *(ulonglong *)(param_1 + 0x6d8);
      uVar6 = (ulonglong)(*(uint *)(param_1 + 0x700) >> 3);
      uVar5 = (ulonglong)((uVar2 & 7) << 4);
      pfVar1 = (float *)(param_1 + uVar5);
      *pfVar1 = fVar54 * fVar52;
      pfVar1[1] = fVar17 * fVar52;
      pfVar1[2] = fVar50 * fVar52;
      pfVar1[3] = fVar52 * fVar29;
      pfVar1 = (float *)(param_1 + 0x10 + uVar5);
      *pfVar1 = fVar55 * fVar33;
      pfVar1[1] = fVar22 * fVar33;
      pfVar1[2] = fVar28 * fVar33;
      pfVar1[3] = fVar33 * fVar32;
      pfVar1 = (float *)(param_1 + 0x20 + uVar5);
      *pfVar1 = fVar56 * fVar53;
      pfVar1[1] = fVar24 * fVar53;
      pfVar1[2] = fVar51 * fVar53;
      pfVar1[3] = fVar53 * fVar34;
      pfVar1 = (float *)(param_1 + 0x30 + uVar5);
      *pfVar1 = fVar57 * fVar35;
      pfVar1[1] = fVar26 * fVar35;
      pfVar1[2] = fVar31 * fVar35;
      pfVar1[3] = fVar35 * fVar36;
    }
  }
  uVar5 = local_e8 ^ (ulonglong)&fStack_1d8;
  if (uVar5 != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5,uVar6);
  }
  return uVar4;
}



// FUNCTION 149847738 FUN_149847738 body=586 status=ok
// SIG undefined FUN_149847738(void)

void FUN_149847738(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  
  lVar6 = *param_3;
  lVar7 = param_3[1];
  lVar8 = param_3[2];
  uVar15 = *(uint *)(param_3 + 3);
  lVar13 = 0;
  uVar18 = 0;
  do {
    bVar12 = *(byte *)(lVar6 + uVar18);
    uVar17 = (uint)bVar12;
    if (uVar17 == 0x1f) {
      uVar14 = (ulonglong)(uVar15 >> 3);
      uVar9 = *(ulonglong *)(lVar8 + uVar14);
      bVar12 = (byte)uVar15 & 7;
      uVar11 = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
               uVar9 << 0x38) << bVar12;
      uVar9 = *(ulonglong *)(lVar8 + 4 + uVar14);
      uVar14 = *(ulonglong *)(lVar8 + 8 + uVar14);
      auVar19._8_8_ =
           ((uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
             (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
             (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
            uVar14 << 0x38) << bVar12) >> 0x20 | uVar11 & 0xffffffff00000000;
      auVar19._0_8_ =
           uVar11 >> 0x20 |
           (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) << bVar12 & 0xffffffff00000000;
      uVar15 = uVar15 + 0x60;
    }
    else if (bVar12 == 0) {
      auVar19._0_4_ =
           (float)CONCAT11(*(undefined1 *)(lVar7 + uVar18),*(undefined1 *)(lVar7 + 4 + uVar18)) *
           1.5259022e-05;
      auVar19._4_4_ =
           (float)CONCAT11(*(undefined1 *)(lVar7 + 8 + uVar18),*(undefined1 *)(lVar7 + 0xc + uVar18)
                          ) * 1.5259022e-05;
      auVar19._8_4_ =
           (float)CONCAT11(*(undefined1 *)(lVar7 + 0x10 + uVar18),
                           *(undefined1 *)(lVar7 + 0x14 + uVar18)) * 1.5259022e-05;
      auVar19._12_4_ = 0.0;
    }
    else {
      cVar10 = ' ' - bVar12;
      uVar1 = uVar15 + uVar17;
      uVar3 = *(uint *)(lVar8 + (ulonglong)(uVar15 >> 3));
      uVar16 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >>
               (cVar10 - ((byte)uVar15 & 7) & 0x1f);
      uVar4 = *(uint *)(lVar8 + (ulonglong)(uVar1 >> 3));
      fVar2 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar17 * 8);
      uVar5 = *(uint *)(lVar8 + (ulonglong)(uVar1 + uVar17 >> 3));
      uVar3 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar17 * 8);
      auVar19._0_4_ = (float)(int)(uVar3 & uVar16) * fVar2;
      auVar19._4_4_ =
           (float)(int)(uVar3 & (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                uVar4 << 0x18) >> (cVar10 - ((byte)uVar1 & 7) & 0x1f)) * fVar2;
      auVar19._8_4_ =
           (float)(int)(uVar3 & (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                uVar5 << 0x18) >> (cVar10 - ((byte)(uVar1 + uVar17) & 7) & 0x1f)) *
           fVar2;
      auVar19._12_4_ = (float)(int)(uVar3 & uVar16) * fVar2;
      uVar15 = uVar17 * 3 + uVar15;
    }
    *(undefined1 (*) [16])(param_1 + lVar13 * 2) = auVar19;
    uVar18 = uVar18 + 1;
    lVar13 = lVar13 + 8;
  } while (param_2 != uVar18);
  *param_3 = lVar6 + 4;
  *(uint *)(param_3 + 3) = uVar15;
  param_3[1] = lVar7 + 0x18;
  return;
}



// FUNCTION 149847982 FUN_149847982 body=280 status=ok
// SIG undefined FUN_149847982(void)

void FUN_149847982(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar6 = *(uint *)(param_1 + 0x418);
  if ((uVar6 != 0) && (uVar7 = *(uint *)(param_1 + 0x410), uVar7 - *(int *)(param_1 + 0x414) < 4)) {
    uVar15 = 4;
    if (uVar6 < 4) {
      uVar15 = uVar6;
    }
    *(uint *)(param_1 + 0x418) = uVar6 - uVar15;
    *(uint *)(param_1 + 0x410) = uVar7 + uVar15;
    plVar1 = (longlong *)(param_1 + 0x6b8);
    FUN_149847a9a(param_2,param_1 + 0x630,uVar15,plVar1,param_1 + 0x708);
    FUN_149847a9a(param_2,param_1 + 0x670,uVar15,plVar1,param_1 + 0x728);
    fVar5 = *(float *)(param_2 + 0x78);
    uVar14 = 0;
    do {
      pfVar4 = (float *)(param_1 + 0x630 + uVar14);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar2 = (float *)(param_1 + 0x670 + uVar14);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      pfVar3 = (float *)((ulonglong)((uVar7 & 7) << 4) + param_1 + 0x210 + uVar14);
      *pfVar3 = *pfVar2 * fVar5 + (*pfVar4 - fVar5 * *pfVar4);
      pfVar3[1] = fVar11 * fVar5 + (fVar8 - fVar5 * fVar8);
      pfVar3[2] = fVar12 * fVar5 + (fVar9 - fVar5 * fVar9);
      pfVar3[3] = fVar13 * fVar5 + (fVar10 - fVar5 * fVar10);
      uVar14 = uVar14 + 0x10;
    } while (uVar15 << 4 != uVar14);
    *plVar1 = *plVar1 + (ulonglong)(uVar15 * 0x18);
  }
  return;
}



// FUNCTION 149847a9a FUN_149847a9a body=520 status=ok
// SIG undefined FUN_149847a9a(void)

void FUN_149847a9a(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  lVar5 = param_5[2];
  lVar6 = *param_4;
  uVar15 = *(uint *)(param_5 + 3);
  pbVar13 = (byte *)*param_5;
  puVar18 = (undefined8 *)param_5[1];
  param_3 = param_3 & 0xffffffff;
  uVar19 = 0;
  do {
    bVar11 = *pbVar13;
    uVar17 = (uint)bVar11;
    if (uVar17 == 0x1f) {
      uVar10 = (ulonglong)(uVar15 >> 3);
      uVar7 = *(ulonglong *)(lVar5 + uVar10);
      bVar11 = (byte)uVar15 & 7;
      uVar14 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
               uVar7 << 0x38) << bVar11;
      uVar7 = *(ulonglong *)(lVar5 + 4 + uVar10);
      uVar10 = *(ulonglong *)(lVar5 + 8 + uVar10);
      in_XMM2._8_8_ =
           ((uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
             (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
             (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
            uVar10 << 0x38) << bVar11) >> 0x20 | uVar14 & 0xffffffff00000000;
      in_XMM2._0_8_ =
           uVar14 >> 0x20 |
           (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) << bVar11 & 0xffffffff00000000;
      uVar15 = uVar15 + 0x60;
      puVar18 = (undefined8 *)((longlong)puVar18 + 6);
    }
    else {
      if (bVar11 == 0) {
        auVar20 = pmovzxwd(in_XMM2,*puVar18);
        fVar21 = (float)auVar20._0_4_ * 1.5259022e-05;
        fVar22 = (float)auVar20._4_4_ * 1.5259022e-05;
        fVar23 = (float)auVar20._8_4_ * 1.5259022e-05;
        fVar24 = (float)auVar20._12_4_ * 1.5259022e-05;
        puVar18 = (undefined8 *)((longlong)puVar18 + 6);
      }
      else {
        cVar8 = ' ' - bVar11;
        fVar24 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar17 * 8);
        uVar16 = *(uint *)(lVar5 + (ulonglong)(uVar15 >> 3));
        uVar12 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 uVar16 << 0x18) >> (cVar8 - ((byte)uVar15 & 7) & 0x1f);
        uVar16 = uVar15 + uVar17;
        uVar3 = *(uint *)(lVar5 + (ulonglong)(uVar16 >> 3));
        uVar9 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >>
                (cVar8 - ((byte)uVar16 & 7) & 0x1f);
        uVar3 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar17 * 8);
        uVar4 = *(uint *)(lVar5 + (ulonglong)(uVar16 + uVar17 >> 3));
        uVar16 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                 >> (cVar8 - ((byte)(uVar16 + uVar17) & 7) & 0x1f);
        auVar20._4_4_ = fVar24;
        auVar20._0_4_ = fVar24;
        auVar20._8_4_ = fVar24;
        auVar20._12_4_ = fVar24;
        auVar25._4_4_ = uVar9;
        auVar25._0_4_ = uVar12;
        auVar25._12_4_ = uVar12;
        auVar25._8_4_ = uVar16;
        fVar21 = (float)(int)(uVar3 & uVar12) * fVar24;
        fVar22 = (float)(int)(uVar3 & uVar9) * fVar24;
        fVar23 = (float)(int)(uVar3 & uVar16) * fVar24;
        fVar24 = (float)(int)(uVar3 & uVar12) * fVar24;
        uVar15 = uVar15 + uVar17 * 3;
        if (*(char *)(param_1 + 0x20) != '\0') {
          auVar20 = pmovzxbw(auVar20,*puVar18);
          auVar25 = pmovzxbw(auVar25,*(undefined8 *)((longlong)puVar18 + 3));
          puVar18 = (undefined8 *)((longlong)puVar18 + 6);
          auVar20 = pmovzxwd(auVar20,auVar20);
          auVar25 = pmovzxwd(auVar25,auVar25);
          fVar21 = fVar21 * (float)auVar25._0_4_ * 0.003921569 + (float)auVar20._0_4_ * 0.003921569;
          fVar22 = fVar22 * (float)auVar25._4_4_ * 0.003921569 + (float)auVar20._4_4_ * 0.003921569;
          fVar23 = fVar23 * (float)auVar25._8_4_ * 0.003921569 + (float)auVar20._8_4_ * 0.003921569;
          fVar24 = fVar24 * (float)auVar25._12_4_ * 0.003921569 +
                   (float)auVar20._12_4_ * 0.003921569;
        }
      }
      pfVar1 = (float *)(lVar6 + (ulonglong)uVar19);
      pfVar2 = (float *)(lVar6 + 0xc + (ulonglong)uVar19);
      in_XMM2._0_4_ = *pfVar2 * fVar21 + *pfVar1;
      in_XMM2._4_4_ = pfVar2[1] * fVar22 + pfVar1[1];
      in_XMM2._8_4_ = pfVar2[2] * fVar23 + pfVar1[2];
      in_XMM2._12_4_ = pfVar2[3] * fVar24 + pfVar1[3];
    }
    pbVar13 = pbVar13 + 1;
    *param_2 = in_XMM2;
    param_2 = param_2 + 1;
    uVar19 = uVar19 + 0x18;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *param_5 = pbVar13;
  param_5[1] = puVar18;
  *(uint *)(param_5 + 3) = uVar15;
  return;
}



// FUNCTION 149847ca2 FUN_149847ca2 body=280 status=ok
// SIG undefined FUN_149847ca2(void)

void FUN_149847ca2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar6 = *(uint *)(param_1 + 0x628);
  if ((uVar6 != 0) && (uVar7 = *(uint *)(param_1 + 0x620), uVar7 - *(int *)(param_1 + 0x624) < 4)) {
    uVar15 = 4;
    if (uVar6 < 4) {
      uVar15 = uVar6;
    }
    *(uint *)(param_1 + 0x628) = uVar6 - uVar15;
    *(uint *)(param_1 + 0x620) = uVar7 + uVar15;
    plVar1 = (longlong *)(param_1 + 0x6c0);
    FUN_149847dba(param_2,param_1 + 0x630,uVar15,plVar1,param_1 + 0x748);
    FUN_149847dba(param_2,param_1 + 0x670,uVar15,plVar1,param_1 + 0x768);
    fVar5 = *(float *)(param_2 + 0x78);
    uVar14 = 0;
    do {
      pfVar4 = (float *)(param_1 + 0x630 + uVar14);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar2 = (float *)(param_1 + 0x670 + uVar14);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      pfVar3 = (float *)((ulonglong)((uVar7 & 7) << 4) + param_1 + 0x420 + uVar14);
      *pfVar3 = *pfVar2 * fVar5 + (*pfVar4 - fVar5 * *pfVar4);
      pfVar3[1] = fVar11 * fVar5 + (fVar8 - fVar5 * fVar8);
      pfVar3[2] = fVar12 * fVar5 + (fVar9 - fVar5 * fVar9);
      pfVar3[3] = fVar13 * fVar5 + (fVar10 - fVar5 * fVar10);
      uVar14 = uVar14 + 0x10;
    } while (uVar15 << 4 != uVar14);
    *plVar1 = *plVar1 + (ulonglong)(uVar15 * 0x18);
  }
  return;
}



// FUNCTION 149847dba FUN_149847dba body=520 status=ok
// SIG undefined FUN_149847dba(void)

void FUN_149847dba(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  lVar5 = param_5[2];
  lVar6 = *param_4;
  uVar15 = *(uint *)(param_5 + 3);
  pbVar13 = (byte *)*param_5;
  puVar18 = (undefined8 *)param_5[1];
  param_3 = param_3 & 0xffffffff;
  uVar19 = 0;
  do {
    bVar11 = *pbVar13;
    uVar17 = (uint)bVar11;
    if (uVar17 == 0x1f) {
      uVar10 = (ulonglong)(uVar15 >> 3);
      uVar7 = *(ulonglong *)(lVar5 + uVar10);
      bVar11 = (byte)uVar15 & 7;
      uVar14 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
               uVar7 << 0x38) << bVar11;
      uVar7 = *(ulonglong *)(lVar5 + 4 + uVar10);
      uVar10 = *(ulonglong *)(lVar5 + 8 + uVar10);
      in_XMM2._8_8_ =
           ((uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
             (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
             (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
            uVar10 << 0x38) << bVar11) >> 0x20 | uVar14 & 0xffffffff00000000;
      in_XMM2._0_8_ =
           uVar14 >> 0x20 |
           (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) << bVar11 & 0xffffffff00000000;
      uVar15 = uVar15 + 0x60;
      puVar18 = (undefined8 *)((longlong)puVar18 + 6);
    }
    else {
      if (bVar11 == 0) {
        auVar20 = pmovzxwd(in_XMM2,*puVar18);
        fVar21 = (float)auVar20._0_4_ * 1.5259022e-05;
        fVar22 = (float)auVar20._4_4_ * 1.5259022e-05;
        fVar23 = (float)auVar20._8_4_ * 1.5259022e-05;
        fVar24 = (float)auVar20._12_4_ * 1.5259022e-05;
        puVar18 = (undefined8 *)((longlong)puVar18 + 6);
      }
      else {
        cVar8 = ' ' - bVar11;
        fVar24 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar17 * 8);
        uVar16 = *(uint *)(lVar5 + (ulonglong)(uVar15 >> 3));
        uVar12 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 uVar16 << 0x18) >> (cVar8 - ((byte)uVar15 & 7) & 0x1f);
        uVar16 = uVar15 + uVar17;
        uVar3 = *(uint *)(lVar5 + (ulonglong)(uVar16 >> 3));
        uVar9 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >>
                (cVar8 - ((byte)uVar16 & 7) & 0x1f);
        uVar3 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar17 * 8);
        uVar4 = *(uint *)(lVar5 + (ulonglong)(uVar16 + uVar17 >> 3));
        uVar16 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                 >> (cVar8 - ((byte)(uVar16 + uVar17) & 7) & 0x1f);
        auVar20._4_4_ = fVar24;
        auVar20._0_4_ = fVar24;
        auVar20._8_4_ = fVar24;
        auVar20._12_4_ = fVar24;
        auVar25._4_4_ = uVar9;
        auVar25._0_4_ = uVar12;
        auVar25._12_4_ = uVar12;
        auVar25._8_4_ = uVar16;
        fVar21 = (float)(int)(uVar3 & uVar12) * fVar24;
        fVar22 = (float)(int)(uVar3 & uVar9) * fVar24;
        fVar23 = (float)(int)(uVar3 & uVar16) * fVar24;
        fVar24 = (float)(int)(uVar3 & uVar12) * fVar24;
        uVar15 = uVar15 + uVar17 * 3;
        if (*(char *)(param_1 + 0x20) != '\0') {
          auVar20 = pmovzxbw(auVar20,*puVar18);
          auVar25 = pmovzxbw(auVar25,*(undefined8 *)((longlong)puVar18 + 3));
          puVar18 = (undefined8 *)((longlong)puVar18 + 6);
          auVar20 = pmovzxwd(auVar20,auVar20);
          auVar25 = pmovzxwd(auVar25,auVar25);
          fVar21 = fVar21 * (float)auVar25._0_4_ * 0.003921569 + (float)auVar20._0_4_ * 0.003921569;
          fVar22 = fVar22 * (float)auVar25._4_4_ * 0.003921569 + (float)auVar20._4_4_ * 0.003921569;
          fVar23 = fVar23 * (float)auVar25._8_4_ * 0.003921569 + (float)auVar20._8_4_ * 0.003921569;
          fVar24 = fVar24 * (float)auVar25._12_4_ * 0.003921569 +
                   (float)auVar20._12_4_ * 0.003921569;
        }
      }
      pfVar1 = (float *)(lVar6 + (ulonglong)uVar19);
      pfVar2 = (float *)(lVar6 + 0xc + (ulonglong)uVar19);
      in_XMM2._0_4_ = *pfVar2 * fVar21 + *pfVar1;
      in_XMM2._4_4_ = pfVar2[1] * fVar22 + pfVar1[1];
      in_XMM2._8_4_ = pfVar2[2] * fVar23 + pfVar1[2];
      in_XMM2._12_4_ = pfVar2[3] * fVar24 + pfVar1[3];
    }
    pbVar13 = pbVar13 + 1;
    *param_2 = in_XMM2;
    param_2 = param_2 + 1;
    uVar19 = uVar19 + 0x18;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *param_5 = pbVar13;
  param_5[1] = puVar18;
  *(uint *)(param_5 + 3) = uVar15;
  return;
}



// FUNCTION 149847fc2 FUN_149847fc2 body=4816 status=ok
// SIG undefined FUN_149847fc2(void)

void FUN_149847fc2(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulonglong uVar48;
  longlong lVar49;
  uint uVar50;
  uint uVar51;
  ulonglong uVar52;
  uint uVar53;
  undefined1 (*pauVar54) [16];
  uint uVar55;
  uint uVar56;
  ulonglong uVar57;
  uint uVar58;
  float *pfVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  undefined1 (*pauVar62) [16];
  float *pfVar63;
  float *pfVar64;
  uint uVar65;
  ulonglong uVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auStack_a88 [35];
  char local_a65;
  uint local_a64;
  ulonglong local_a60;
  longlong local_a58;
  longlong *local_a50;
  longlong local_a48;
  longlong local_a40;
  undefined8 local_a38 [64];
  undefined8 local_838;
  undefined1 local_828 [512];
  undefined8 local_628;
  undefined1 local_618 [512];
  undefined8 local_418;
  longlong local_360;
  uint local_358;
  longlong local_340;
  uint local_338;
  float afStack_2a8 [2];
  undefined8 auStack_2a0 [63];
  undefined8 local_a8;
  uint local_a0;
  float *local_98;
  undefined1 (*local_90) [16];
  undefined1 (*local_88) [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a88;
  lVar8 = *param_1;
  uVar51 = *(uint *)(lVar8 + 0x10);
  uVar57 = (ulonglong)uVar51;
  if ((uVar57 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar50 = *(uint *)(lVar8 + 0x1c) >> 1 & 1;
    uVar53 = uVar51 + 0xf >> 4;
    uVar56 = uVar51 + 0xf & 0xfffffff0;
    local_a64 = uVar53 - 1;
    uVar65 = 0xaaaaaaaa;
    if (uVar51 != uVar56) {
      uVar65 = ~(0xffffffffU >> (((char)uVar51 - (char)uVar56) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a65 = *(char *)((longlong)param_1 + 0x1f);
    local_a58 = (ulonglong)*(uint *)(lVar8 + 0x48) + lVar8 + 0x20;
    local_a60 = (ulonglong)uVar53;
    uVar61 = 0;
    local_a8 = 0;
    local_a0 = *(uint *)(lVar8 + 0x34);
    pfVar64 = (float *)((ulonglong)*(uint *)(lVar8 + 0x4c) + lVar8 + 0x20);
    local_90 = (undefined1 (*) [16])((ulonglong)(local_a0 * 0xc) + (longlong)pfVar64);
    local_88 = (undefined1 (*) [16])(*local_90 + (uint)(*(int *)(lVar8 + 0x38) * 0xc));
    local_838 = 0;
    local_628 = 0;
    local_418 = 0;
    local_98 = pfVar64;
    FUN_149846e08(local_a38,param_1);
    uVar48 = (ulonglong)local_a64;
    uVar52 = (ulonglong)(uVar53 + (uVar53 == 0));
    uVar51 = 3;
    do {
      uVar53 = 0xaaaaaaaa;
      if (uVar61 == uVar48) {
        uVar53 = uVar65;
      }
      uVar53 = uVar53 & 0xaaaaaaaaU - *(int *)(local_a58 + uVar61 * 4);
      uVar56 = uVar53;
      uVar55 = uVar51;
      while (uVar53 != 0) {
        if ((uVar56 & 0xaa000000) != 0) {
          if (((int)uVar56 < 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar55 - 3) * 6),
             uVar7 != 0xffff)) {
            lVar8 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar8 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar3 = (undefined4 *)(lVar8 + 0x10 + uVar60);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3ff00000;
          }
          if (((uVar56 >> 0x1d & 1) != 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar55 - 2) * 6),
             uVar7 != 0xffff)) {
            lVar8 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar8 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar3 = (undefined4 *)(lVar8 + 0x10 + uVar60);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3ff00000;
          }
          if (((uVar56 >> 0x1b & 1) != 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar55 - 1) * 6),
             uVar7 != 0xffff)) {
            lVar8 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar8 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar3 = (undefined4 *)(lVar8 + 0x10 + uVar60);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3ff00000;
          }
          if (((uVar56 >> 0x19 & 1) != 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar55 * 6),
             uVar7 != 0xffff)) {
            lVar8 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar8 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar3 = (undefined4 *)(lVar8 + 0x10 + uVar60);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3ff00000;
          }
        }
        uVar55 = uVar55 + 4;
        uVar53 = uVar56 & 0xffffff;
        uVar56 = uVar56 << 8;
      }
      uVar61 = uVar61 + 1;
      uVar51 = uVar51 + 0x10;
    } while (uVar61 != uVar52);
    uVar51 = 0;
    uVar53 = 3;
    uVar61 = 0;
    do {
      if ((local_a0 != 0) && ((uint)local_a8 - uVar51 < 0x10)) {
        uVar51 = 0x10;
        if (local_a0 < 0x10) {
          uVar51 = local_a0;
        }
        local_a0 = local_a0 - uVar51;
        uVar56 = (uint)local_a8 & 0x1f;
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 + uVar51);
        pfVar59 = (float *)((longlong)afStack_2a8 + (ulonglong)(uVar56 << 4));
        pfVar63 = pfVar64;
        do {
          uVar60 = 4;
          if (uVar51 < 4) {
            uVar60 = (ulonglong)uVar51;
          }
          iVar35 = (int)uVar60;
          pfVar64 = (float *)((ulonglong)(uint)(iVar35 * 0xc) + (longlong)pfVar63);
          fVar36 = *pfVar63;
          fVar37 = pfVar63[1];
          fVar38 = pfVar63[2];
          fVar39 = pfVar63[3];
          pfVar2 = (float *)((longlong)pfVar63 + (ulonglong)(uint)(iVar35 * 4));
          fVar40 = *pfVar2;
          fVar41 = pfVar2[1];
          fVar42 = pfVar2[2];
          fVar43 = pfVar2[3];
          pfVar63 = pfVar63 + uVar60 * 2;
          fVar44 = *pfVar63;
          fVar45 = pfVar63[1];
          fVar46 = pfVar63[2];
          fVar47 = pfVar63[3];
          auVar69._0_4_ = fVar44 * fVar44;
          auVar69._4_4_ = fVar45 * fVar45;
          auVar69._8_4_ = fVar46 * fVar46;
          auVar69._12_4_ = fVar47 * fVar47;
          auVar70._8_4_ = ABS(((1.0 - fVar38 * fVar38) - fVar42 * fVar42) - auVar69._8_4_);
          auVar70._0_8_ =
               CONCAT44(((1.0 - fVar37 * fVar37) - fVar41 * fVar41) - auVar69._4_4_,
                        ((1.0 - fVar36 * fVar36) - fVar40 * fVar40) - auVar69._0_4_) &
               0x7fffffff7fffffff;
          auVar70._12_4_ = ABS(((1.0 - fVar39 * fVar39) - fVar43 * fVar43) - auVar69._12_4_);
          auVar70 = sqrtps(auVar69,auVar70);
          *pfVar59 = fVar36;
          pfVar59[1] = fVar40;
          pfVar59[2] = fVar44;
          pfVar59[3] = auVar70._0_4_;
          pfVar59[4] = fVar37;
          pfVar59[5] = fVar41;
          pfVar59[6] = fVar45;
          pfVar59[7] = auVar70._4_4_;
          pfVar59[8] = fVar38;
          pfVar59[9] = fVar42;
          pfVar59[10] = fVar46;
          pfVar59[0xb] = auVar70._8_4_;
          pfVar59[0xc] = fVar39;
          pfVar59[0xd] = fVar43;
          pfVar59[0xe] = fVar47;
          pfVar59[0xf] = auVar70._12_4_;
          pfVar59 = pfVar59 + 0x10;
          uVar51 = uVar51 - iVar35;
          pfVar63 = pfVar64;
        } while (uVar51 != 0);
        local_98 = pfVar64;
        uVar51 = local_a8._4_4_;
      }
      uVar56 = *(uint *)(local_a58 + uVar61 * 4) & 0x55555555;
      uVar55 = uVar56;
      uVar58 = uVar53;
      while (uVar56 != 0) {
        if ((uVar55 & 0x55000000) != 0) {
          uVar56 = uVar51;
          if (uVar55 >> 0x1e != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar58 - 3) * 6);
            uVar56 = uVar51 + 1;
            if (uVar7 != 0xffff) {
              uVar60 = (ulonglong)((uVar51 & 0x1f) << 4);
              lVar8 = *(longlong *)(param_2 + 0x18);
              uVar66 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2a8 + uVar60);
              dVar26 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_2a0 + uVar60);
              auVar33._8_4_ = SUB84(dVar26,0);
              auVar33._0_8_ = (double)(float)uVar5;
              auVar33._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + uVar66) = auVar33;
              dVar26 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar34._8_4_ = SUB84(dVar26,0);
              auVar34._0_8_ = (double)(float)uVar6;
              auVar34._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + 0x10 + uVar66) = auVar34;
            }
          }
          uVar51 = uVar56;
          if ((uVar55 >> 0x1c & 1) != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar58 - 2) * 6);
            uVar51 = uVar56 + 1;
            if (uVar7 != 0xffff) {
              uVar60 = (ulonglong)((uVar56 & 0x1f) << 4);
              lVar8 = *(longlong *)(param_2 + 0x18);
              uVar66 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2a8 + uVar60);
              dVar26 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_2a0 + uVar60);
              auVar31._8_4_ = SUB84(dVar26,0);
              auVar31._0_8_ = (double)(float)uVar5;
              auVar31._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + uVar66) = auVar31;
              dVar26 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar32._8_4_ = SUB84(dVar26,0);
              auVar32._0_8_ = (double)(float)uVar6;
              auVar32._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + 0x10 + uVar66) = auVar32;
            }
          }
          uVar56 = uVar51;
          if ((uVar55 >> 0x1a & 1) != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar58 - 1) * 6);
            uVar56 = uVar51 + 1;
            if (uVar7 != 0xffff) {
              uVar60 = (ulonglong)((uVar51 & 0x1f) << 4);
              lVar8 = *(longlong *)(param_2 + 0x18);
              uVar66 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2a8 + uVar60);
              dVar26 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_2a0 + uVar60);
              auVar29._8_4_ = SUB84(dVar26,0);
              auVar29._0_8_ = (double)(float)uVar5;
              auVar29._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + uVar66) = auVar29;
              dVar26 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar30._8_4_ = SUB84(dVar26,0);
              auVar30._0_8_ = (double)(float)uVar6;
              auVar30._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + 0x10 + uVar66) = auVar30;
            }
          }
          uVar51 = uVar56;
          if ((uVar55 >> 0x18 & 1) != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar58 * 6);
            uVar51 = uVar56 + 1;
            if (uVar7 != 0xffff) {
              uVar60 = (ulonglong)((uVar56 & 0x1f) << 4);
              lVar8 = *(longlong *)(param_2 + 0x18);
              uVar66 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)afStack_2a8 + uVar60);
              dVar26 = (double)(float)((ulonglong)uVar5 >> 0x20);
              uVar6 = *(undefined8 *)((longlong)auStack_2a0 + uVar60);
              auVar27._8_4_ = SUB84(dVar26,0);
              auVar27._0_8_ = (double)(float)uVar5;
              auVar27._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + uVar66) = auVar27;
              dVar26 = (double)(float)((ulonglong)uVar6 >> 0x20);
              auVar28._8_4_ = SUB84(dVar26,0);
              auVar28._0_8_ = (double)(float)uVar6;
              auVar28._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
              *(undefined1 (*) [16])(lVar8 + 0x10 + uVar66) = auVar28;
            }
          }
        }
        uVar58 = uVar58 + 4;
        uVar56 = uVar55 & 0xffffff;
        uVar55 = uVar55 << 8;
      }
      local_a8 = CONCAT44(uVar51,(uint)local_a8);
      uVar61 = uVar61 + 1;
      uVar53 = uVar53 + 0x10;
    } while (uVar61 != uVar52);
    lVar8 = local_a58 + local_a60 * 4;
    local_a40 = local_360 + (ulonglong)(local_358 >> 3);
    local_a48 = local_340 + (ulonglong)(local_338 >> 3);
    uVar51 = 3;
    uVar61 = 0;
    do {
      uVar53 = 0xaaaaaaaa;
      if (uVar61 == uVar48) {
        uVar53 = uVar65;
      }
      uVar53 = uVar53 & 0xaaaaaaaaU - *(int *)(lVar8 + uVar61 * 4);
      uVar56 = uVar53;
      uVar55 = uVar51;
      while (uVar53 != 0) {
        if ((uVar56 & 0xaa000000) != 0) {
          if (((int)uVar56 < 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar55 - 3) * 6),
             uVar7 != 0xffff)) {
            lVar49 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar49 + 0x30 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar49 + 0x20 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          if (((uVar56 >> 0x1d & 1) != 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar55 - 2) * 6),
             uVar7 != 0xffff)) {
            lVar49 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar49 + 0x30 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar49 + 0x20 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          if (((uVar56 >> 0x1b & 1) != 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar55 - 1) * 6),
             uVar7 != 0xffff)) {
            lVar49 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar49 + 0x30 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar49 + 0x20 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          if (((uVar56 >> 0x19 & 1) != 0) &&
             (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar55 * 6),
             uVar7 != 0xffff)) {
            lVar49 = *(longlong *)(param_2 + 0x18);
            uVar60 = (ulonglong)((uint)uVar7 * 0x60);
            puVar1 = (undefined8 *)(lVar49 + 0x30 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar49 + 0x20 + uVar60);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
        }
        uVar55 = uVar55 + 4;
        uVar53 = uVar56 & 0xffffff;
        uVar56 = uVar56 << 8;
      }
      uVar61 = uVar61 + 1;
      uVar51 = uVar51 + 0x10;
    } while (uVar61 != uVar52);
    local_a60 = local_a60 * 4 + lVar8;
    uVar51 = 3;
    uVar61 = 0;
    do {
      uVar53 = *(uint *)(lVar8 + uVar61 * 4) & 0x55555555;
      uVar56 = uVar53;
      uVar55 = uVar51;
      while (uVar53 != 0) {
        if ((uVar56 & 0x55000000) != 0) {
          pauVar62 = local_90;
          if (uVar56 >> 0x1e != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar55 - 3) * 6);
            pauVar62 = (undefined1 (*) [16])(*local_90 + 0xc);
            if (uVar7 != 0xffff) {
              auVar70 = *local_90;
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar60 = (ulonglong)((uint)uVar7 * 0x60);
              auVar25._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar25._0_8_ = (double)auVar70._0_4_;
              auVar25._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar60) = auVar25;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar60);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
          pauVar54 = pauVar62;
          if ((uVar56 >> 0x1c & 1) != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar55 - 2) * 6);
            pauVar54 = (undefined1 (*) [16])(*pauVar62 + 0xc);
            if (uVar7 != 0xffff) {
              auVar70 = *pauVar62;
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar60 = (ulonglong)((uint)uVar7 * 0x60);
              auVar24._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar24._0_8_ = (double)auVar70._0_4_;
              auVar24._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar60) = auVar24;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar60);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
          pauVar62 = pauVar54;
          if ((uVar56 >> 0x1a & 1) != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar55 - 1) * 6);
            pauVar62 = (undefined1 (*) [16])(*pauVar54 + 0xc);
            if (uVar7 != 0xffff) {
              auVar70 = *pauVar54;
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar60 = (ulonglong)((uint)uVar7 * 0x60);
              auVar23._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar23._0_8_ = (double)auVar70._0_4_;
              auVar23._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar60) = auVar23;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar60);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
          local_90 = pauVar62;
          if ((uVar56 >> 0x18 & 1) != 0) {
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar55 * 6);
            local_90 = (undefined1 (*) [16])(*pauVar62 + 0xc);
            if (uVar7 != 0xffff) {
              auVar70 = *pauVar62;
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar60 = (ulonglong)((uint)uVar7 * 0x60);
              auVar22._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar22._0_8_ = (double)auVar70._0_4_;
              auVar22._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar60) = auVar22;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar60);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
        }
        uVar55 = uVar55 + 4;
        uVar53 = uVar56 & 0xffffff;
        uVar56 = uVar56 << 8;
      }
      uVar61 = uVar61 + 1;
      uVar51 = uVar51 + 0x10;
    } while (uVar61 != uVar52);
    dVar67 = (double)uVar50;
    dVar68 = (double)uVar50;
    dVar26 = (double)uVar50;
    if (local_a65 == '\0') {
      lVar49 = 4;
      do {
        uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + lVar49);
        if (uVar7 != 0xffff) {
          lVar9 = *(longlong *)(param_2 + 0x18);
          uVar48 = (ulonglong)((uint)uVar7 * 0x60);
          pdVar4 = (double *)(lVar9 + 0x40 + uVar48);
          *pdVar4 = dVar67;
          pdVar4[1] = dVar68;
          pdVar4 = (double *)(lVar9 + 0x50 + uVar48);
          *pdVar4 = dVar26;
          pdVar4[1] = 0.0;
        }
        lVar49 = lVar49 + 6;
        uVar57 = uVar57 - 1;
      } while (uVar57 != 0);
    }
    else {
      uVar51 = 3;
      uVar57 = 0;
      do {
        uVar50 = 0xaaaaaaaa;
        if (uVar57 == uVar48) {
          uVar50 = uVar65;
        }
        uVar50 = uVar50 & 0xaaaaaaaaU - *(int *)(local_a60 + uVar57 * 4);
        uVar53 = uVar50;
        uVar56 = uVar51;
        while (uVar50 != 0) {
          if ((uVar53 & 0xaa000000) != 0) {
            if (((int)uVar53 < 0) &&
               (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 3) * 6)
               , uVar7 != 0xffff)) {
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar61 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar4 = (double *)(lVar49 + 0x40 + uVar61);
              *pdVar4 = dVar67;
              pdVar4[1] = dVar68;
              pdVar4 = (double *)(lVar49 + 0x50 + uVar61);
              *pdVar4 = dVar26;
              pdVar4[1] = 0.0;
            }
            if (((uVar53 >> 0x1d & 1) != 0) &&
               (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 2) * 6)
               , uVar7 != 0xffff)) {
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar61 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar4 = (double *)(lVar49 + 0x40 + uVar61);
              *pdVar4 = dVar67;
              pdVar4[1] = dVar68;
              pdVar4 = (double *)(lVar49 + 0x50 + uVar61);
              *pdVar4 = dVar26;
              pdVar4[1] = 0.0;
            }
            if (((uVar53 >> 0x1b & 1) != 0) &&
               (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 1) * 6)
               , uVar7 != 0xffff)) {
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar61 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar4 = (double *)(lVar49 + 0x40 + uVar61);
              *pdVar4 = dVar67;
              pdVar4[1] = dVar68;
              pdVar4 = (double *)(lVar49 + 0x50 + uVar61);
              *pdVar4 = dVar26;
              pdVar4[1] = 0.0;
            }
            if (((uVar53 >> 0x19 & 1) != 0) &&
               (uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar56 * 6),
               uVar7 != 0xffff)) {
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar61 = (ulonglong)((uint)uVar7 * 0x60);
              pdVar4 = (double *)(lVar49 + 0x40 + uVar61);
              *pdVar4 = dVar67;
              pdVar4[1] = dVar68;
              pdVar4 = (double *)(lVar49 + 0x50 + uVar61);
              *pdVar4 = dVar26;
              pdVar4[1] = 0.0;
            }
          }
          uVar56 = uVar56 + 4;
          uVar50 = uVar53 & 0xffffff;
          uVar53 = uVar53 << 8;
        }
        uVar57 = uVar57 + 1;
        uVar51 = uVar51 + 0x10;
      } while (uVar57 != uVar52);
      uVar51 = 3;
      uVar57 = 0;
      do {
        uVar50 = *(uint *)(local_a60 + uVar57 * 4) & 0x55555555;
        uVar53 = uVar50;
        uVar56 = uVar51;
        while (uVar50 != 0) {
          if ((uVar53 & 0x55000000) != 0) {
            pauVar62 = local_88;
            if (uVar53 >> 0x1e != 0) {
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 3) * 6);
              pauVar62 = (undefined1 (*) [16])(*local_88 + 0xc);
              if (uVar7 != 0xffff) {
                auVar70 = *local_88;
                lVar49 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar21._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar21._0_8_ = (double)auVar70._0_4_;
                auVar21._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar49 + 0x40 + uVar48) = auVar21;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar49 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
            pauVar54 = pauVar62;
            if ((uVar53 >> 0x1c & 1) != 0) {
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 2) * 6);
              pauVar54 = (undefined1 (*) [16])(*pauVar62 + 0xc);
              if (uVar7 != 0xffff) {
                auVar70 = *pauVar62;
                lVar49 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar20._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar20._0_8_ = (double)auVar70._0_4_;
                auVar20._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar49 + 0x40 + uVar48) = auVar20;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar49 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
            pauVar62 = pauVar54;
            if ((uVar53 >> 0x1a & 1) != 0) {
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 1) * 6);
              pauVar62 = (undefined1 (*) [16])(*pauVar54 + 0xc);
              if (uVar7 != 0xffff) {
                auVar70 = *pauVar54;
                lVar49 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar19._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar19._0_8_ = (double)auVar70._0_4_;
                auVar19._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar49 + 0x40 + uVar48) = auVar19;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar49 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
            local_88 = pauVar62;
            if ((uVar53 >> 0x18 & 1) != 0) {
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar56 * 6);
              local_88 = (undefined1 (*) [16])(*pauVar62 + 0xc);
              if (uVar7 != 0xffff) {
                auVar70 = *pauVar62;
                lVar49 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar18._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar18._0_8_ = (double)auVar70._0_4_;
                auVar18._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar49 + 0x40 + uVar48) = auVar18;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar49 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
          }
          uVar56 = uVar56 + 4;
          uVar50 = uVar53 & 0xffffff;
          uVar53 = uVar53 << 8;
        }
        uVar57 = uVar57 + 1;
        uVar51 = uVar51 + 0x10;
      } while (uVar57 != uVar52);
    }
    uVar57 = 0;
    uVar51 = 3;
    local_a50 = param_1;
    do {
      uVar50 = *(uint *)(local_a58 + uVar57 * 4) & 0xaaaaaaaa;
      uVar53 = uVar50;
      uVar56 = uVar51;
      while (uVar50 != 0) {
        if ((uVar53 & 0xaa000000) != 0) {
          FUN_149846fac(local_a38,local_a50);
          if ((int)uVar53 < 0) {
            uVar50 = local_838._4_4_;
            local_838 = CONCAT44(local_838._4_4_ + 1,(undefined4)local_838);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar56 - 3) * 6);
            if (uVar7 != 0xffff) {
              uVar48 = (ulonglong)((uVar50 & 7) << 4);
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar52 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a38 + uVar48);
              uVar6 = *(undefined8 *)((longlong)local_a38 + uVar48 + 8);
              pdVar4 = (double *)(lVar49 + uVar52);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar49 + 0x10 + uVar52);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar53 >> 0x1d & 1) != 0) {
            uVar50 = local_838._4_4_;
            local_838 = CONCAT44(local_838._4_4_ + 1,(undefined4)local_838);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar56 - 2) * 6);
            if (uVar7 != 0xffff) {
              uVar48 = (ulonglong)((uVar50 & 7) << 4);
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar52 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a38 + uVar48);
              uVar6 = *(undefined8 *)((longlong)local_a38 + uVar48 + 8);
              pdVar4 = (double *)(lVar49 + uVar52);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar49 + 0x10 + uVar52);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar53 >> 0x1b & 1) != 0) {
            uVar50 = local_838._4_4_;
            local_838 = CONCAT44(local_838._4_4_ + 1,(undefined4)local_838);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar56 - 1) * 6);
            if (uVar7 != 0xffff) {
              uVar48 = (ulonglong)((uVar50 & 7) << 4);
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar52 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a38 + uVar48);
              uVar6 = *(undefined8 *)((longlong)local_a38 + uVar48 + 8);
              pdVar4 = (double *)(lVar49 + uVar52);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar49 + 0x10 + uVar52);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
          if ((uVar53 >> 0x19 & 1) != 0) {
            uVar50 = local_838._4_4_;
            local_838 = CONCAT44(local_838._4_4_ + 1,(undefined4)local_838);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar56 * 6);
            if (uVar7 != 0xffff) {
              uVar48 = (ulonglong)((uVar50 & 7) << 4);
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar52 = (ulonglong)((uint)uVar7 * 0x60);
              uVar5 = *(undefined8 *)((longlong)local_a38 + uVar48);
              uVar6 = *(undefined8 *)((longlong)local_a38 + uVar48 + 8);
              pdVar4 = (double *)(lVar49 + uVar52);
              *pdVar4 = (double)(float)uVar5;
              pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
              pdVar4 = (double *)(lVar49 + 0x10 + uVar52);
              *pdVar4 = (double)(float)uVar6;
              pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
            }
          }
        }
        uVar56 = uVar56 + 4;
        uVar50 = uVar53 & 0xffffff;
        uVar53 = uVar53 << 8;
      }
      uVar50 = (int)uVar57 + 1;
      uVar57 = (ulonglong)uVar50;
      uVar51 = uVar51 + 0x10;
    } while (uVar50 <= local_a64);
    uVar57 = 0;
    uVar51 = 3;
    do {
      uVar50 = *(uint *)(lVar8 + uVar57 * 4) & 0xaaaaaaaa;
      uVar53 = uVar50;
      uVar56 = uVar51;
      while (uVar50 != 0) {
        if ((uVar53 & 0xaa000000) != 0) {
          FUN_149847982(local_a38,local_a50);
          if ((int)uVar53 < 0) {
            uVar50 = local_628._4_4_;
            local_628 = CONCAT44(local_628._4_4_ + 1,(undefined4)local_628);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar56 - 3) * 6);
            if (uVar7 != 0xffff) {
              auVar70 = *(undefined1 (*) [16])(local_828 + ((uVar50 & 7) << 4));
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar48 = (ulonglong)((uint)uVar7 * 0x60);
              auVar17._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar17._0_8_ = (double)auVar70._0_4_;
              auVar17._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar48) = auVar17;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar48);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
          if ((uVar53 >> 0x1d & 1) != 0) {
            uVar50 = local_628._4_4_;
            local_628 = CONCAT44(local_628._4_4_ + 1,(undefined4)local_628);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar56 - 2) * 6);
            if (uVar7 != 0xffff) {
              auVar70 = *(undefined1 (*) [16])(local_828 + ((uVar50 & 7) << 4));
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar48 = (ulonglong)((uint)uVar7 * 0x60);
              auVar14._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar14._0_8_ = (double)auVar70._0_4_;
              auVar14._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar48) = auVar14;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar48);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
          if ((uVar53 >> 0x1b & 1) != 0) {
            uVar50 = local_628._4_4_;
            local_628 = CONCAT44(local_628._4_4_ + 1,(undefined4)local_628);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar56 - 1) * 6);
            if (uVar7 != 0xffff) {
              auVar70 = *(undefined1 (*) [16])(local_828 + ((uVar50 & 7) << 4));
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar48 = (ulonglong)((uint)uVar7 * 0x60);
              auVar15._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar15._0_8_ = (double)auVar70._0_4_;
              auVar15._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar48) = auVar15;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar48);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
          if ((uVar53 >> 0x19 & 1) != 0) {
            uVar50 = local_628._4_4_;
            local_628 = CONCAT44(local_628._4_4_ + 1,(undefined4)local_628);
            uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar56 * 6);
            if (uVar7 != 0xffff) {
              auVar70 = *(undefined1 (*) [16])(local_828 + ((uVar50 & 7) << 4));
              lVar49 = *(longlong *)(param_2 + 0x18);
              uVar48 = (ulonglong)((uint)uVar7 * 0x60);
              auVar16._8_4_ = SUB84((double)auVar70._4_4_,0);
              auVar16._0_8_ = (double)auVar70._0_4_;
              auVar16._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
              *(undefined1 (*) [16])(lVar49 + 0x20 + uVar48) = auVar16;
              auVar70 = insertps(auVar70,auVar70,0x8e);
              pdVar4 = (double *)(lVar49 + 0x30 + uVar48);
              *pdVar4 = (double)auVar70._0_4_;
              pdVar4[1] = (double)auVar70._4_4_;
            }
          }
        }
        uVar56 = uVar56 + 4;
        uVar50 = uVar53 & 0xffffff;
        uVar53 = uVar53 << 8;
      }
      uVar50 = (int)uVar57 + 1;
      uVar57 = (ulonglong)uVar50;
      uVar51 = uVar51 + 0x10;
    } while (uVar50 <= local_a64);
    if (local_a65 != '\0') {
      uVar57 = 0;
      uVar51 = 3;
      do {
        uVar50 = *(uint *)(local_a60 + uVar57 * 4) & 0xaaaaaaaa;
        uVar53 = uVar50;
        uVar56 = uVar51;
        while (uVar50 != 0) {
          if ((uVar53 & 0xaa000000) != 0) {
            FUN_149847ca2(local_a38,local_a50);
            if ((int)uVar53 < 0) {
              uVar50 = local_418._4_4_;
              local_418 = CONCAT44(local_418._4_4_ + 1,(undefined4)local_418);
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 3) * 6);
              if (uVar7 != 0xffff) {
                auVar70 = *(undefined1 (*) [16])(local_618 + ((uVar50 & 7) << 4));
                lVar8 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar13._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar13._0_8_ = (double)auVar70._0_4_;
                auVar13._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar8 + 0x40 + uVar48) = auVar13;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar8 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
            if ((uVar53 >> 0x1d & 1) != 0) {
              uVar50 = local_418._4_4_;
              local_418 = CONCAT44(local_418._4_4_ + 1,(undefined4)local_418);
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 2) * 6);
              if (uVar7 != 0xffff) {
                auVar70 = *(undefined1 (*) [16])(local_618 + ((uVar50 & 7) << 4));
                lVar8 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar10._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar10._0_8_ = (double)auVar70._0_4_;
                auVar10._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar8 + 0x40 + uVar48) = auVar10;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar8 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
            if ((uVar53 >> 0x1b & 1) != 0) {
              uVar50 = local_418._4_4_;
              local_418 = CONCAT44(local_418._4_4_ + 1,(undefined4)local_418);
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar56 - 1) * 6);
              if (uVar7 != 0xffff) {
                auVar70 = *(undefined1 (*) [16])(local_618 + ((uVar50 & 7) << 4));
                lVar8 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar11._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar11._0_8_ = (double)auVar70._0_4_;
                auVar11._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar8 + 0x40 + uVar48) = auVar11;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar8 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
            if ((uVar53 >> 0x19 & 1) != 0) {
              uVar50 = local_418._4_4_;
              local_418 = CONCAT44(local_418._4_4_ + 1,(undefined4)local_418);
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar56 * 6);
              if (uVar7 != 0xffff) {
                auVar70 = *(undefined1 (*) [16])(local_618 + ((uVar50 & 7) << 4));
                lVar8 = *(longlong *)(param_2 + 0x18);
                uVar48 = (ulonglong)((uint)uVar7 * 0x60);
                auVar12._8_4_ = SUB84((double)auVar70._4_4_,0);
                auVar12._0_8_ = (double)auVar70._0_4_;
                auVar12._12_4_ = (int)((ulonglong)(double)auVar70._4_4_ >> 0x20);
                *(undefined1 (*) [16])(lVar8 + 0x40 + uVar48) = auVar12;
                auVar70 = insertps(auVar70,auVar70,0x8e);
                pdVar4 = (double *)(lVar8 + 0x50 + uVar48);
                *pdVar4 = (double)auVar70._0_4_;
                pdVar4[1] = (double)auVar70._4_4_;
              }
            }
          }
          uVar56 = uVar56 + 4;
          uVar50 = uVar53 & 0xffffff;
          uVar53 = uVar53 << 8;
        }
        uVar50 = (int)uVar57 + 1;
        uVar57 = (ulonglong)uVar50;
        uVar51 = uVar51 + 0x10;
      } while (uVar50 <= local_a64);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149849293 FUN_149849293 body=2994 status=ok
// SIG undefined FUN_149849293(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149849293(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  double *pdVar4;
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar40 [16];
  float fVar42;
  undefined8 uVar34;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar43;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 in_XMM1 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM4 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar52 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_8a8 [32];
  undefined8 local_888;
  uint local_880;
  uint local_87c;
  uint local_878;
  uint local_874;
  undefined1 *local_870;
  undefined1 *local_868;
  uint local_85c;
  longlong *local_858;
  longlong *local_850;
  undefined8 local_848;
  undefined8 local_840;
  uint local_838;
  uint local_834;
  uint local_830;
  uint local_82c;
  ulonglong local_828;
  longlong local_820;
  longlong local_818;
  longlong local_810;
  undefined1 local_808 [512];
  undefined8 local_608;
  int local_600;
  undefined8 local_3f8;
  int local_3f0;
  undefined8 local_1e8;
  int local_1e0;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_128;
  longlong local_120;
  longlong local_118;
  int local_108;
  longlong local_100;
  longlong local_f8;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  int local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  lVar14 = *param_1;
  uVar16 = (uint)param_2;
  if ((uVar16 < *(uint *)(lVar14 + 0x10)) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar10 = (ulonglong)(*(uint *)(lVar14 + 0x10) + 0xf >> 4);
    lVar1 = (ulonglong)*(uint *)(lVar14 + 0x48) + 0x20 + lVar14;
    uVar11 = lVar1 + uVar10 * 4;
    lVar29 = uVar11 + uVar10 * 4;
    if (*(byte *)((longlong)param_1 + 0x1f) == 0) {
      lVar29 = lVar1;
    }
    uVar15 = -(uint)*(byte *)((longlong)param_1 + 0x1f);
    local_870 = (undefined1 *)(param_2 >> 4 & 0xfffffff);
    uVar10 = (ulonglong)(uint)((int)local_870 * 4);
    bVar12 = ~((char)param_2 * '\x02') & 0x1e;
    uVar17 = *(uint *)(uVar10 + lVar1) >> bVar12;
    uVar20 = uVar17 & 3;
    uVar25 = *(uint *)(uVar10 + uVar11) >> bVar12;
    uVar27 = uVar25 & 3;
    uVar8 = *(uint *)(lVar29 + uVar10) >> bVar12 & uVar15;
    uVar13 = uVar8 & 3;
    local_85c = uVar27 | uVar20 | uVar13;
    if (local_85c == 0) {
      param_2 = param_2 & 0xffffffff;
      lVar14 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar4 = (double *)(*param_3 + lVar14);
      dVar3 = pdVar4[1];
      pdVar2 = (double *)(*param_3 + 0x10 + lVar14);
      dVar6 = *pdVar2;
      dVar7 = pdVar2[1];
      pdVar2 = (double *)param_3[2];
      *pdVar2 = (double)(float)*pdVar4;
      pdVar2[1] = (double)(float)dVar3;
      pdVar2[2] = (double)(float)dVar6;
      pdVar2[3] = (double)(float)dVar7;
      lVar14 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar4 = (double *)(*param_3 + 0x20 + lVar14);
      dVar6 = pdVar4[1];
      dVar3 = *(double *)(*param_3 + 0x30 + lVar14);
      lVar14 = param_3[2];
      *(double *)(lVar14 + 0x20) = (double)(float)*pdVar4;
      *(double *)(lVar14 + 0x28) = (double)(float)dVar6;
      auVar35 = pblendw(ZEXT416((uint)(float)dVar3),(undefined1  [16])0x0,0xfc);
      *(double *)(lVar14 + 0x30) = (double)auVar35._0_4_;
      *(double *)(lVar14 + 0x38) = (double)auVar35._4_4_;
      lVar14 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar4 = (double *)(*param_3 + 0x40 + lVar14);
      dVar6 = pdVar4[1];
      dVar3 = *(double *)(*param_3 + 0x50 + lVar14);
      lVar14 = param_3[2];
      *(double *)(lVar14 + 0x40) = (double)(float)*pdVar4;
      *(double *)(lVar14 + 0x48) = (double)(float)dVar6;
      auVar35 = pblendw(ZEXT416((uint)(float)dVar3),(undefined1  [16])0x0,0xfc);
      fVar44 = auVar35._0_4_;
      fVar42 = auVar35._4_4_;
    }
    else {
      uVar9 = (uVar16 & 0xfffffff0) + 0x10;
      local_820 = lVar14 + 0x20;
      uVar22 = ~(0xffffffffU >> (((char)param_2 - (char)uVar9) * '\x02' & 0x1fU));
      if (uVar16 == uVar9) {
        uVar22 = 0xffffffff;
      }
      local_888 = local_870 + 1;
      local_868 = (undefined1 *)0x0;
      uVar21 = 0;
      uVar31 = 0;
      uVar9 = 0;
      local_874 = 0;
      uVar16 = 0;
      uVar30 = 0;
      do {
        uVar28 = 0xffffffff;
        if (local_870 == local_868) {
          uVar28 = uVar22;
        }
        uVar23 = *(uint *)(lVar1 + (longlong)local_868 * 4) & uVar28;
        uVar18 = *(uint *)(uVar11 + (longlong)local_868 * 4) & uVar28;
        uVar28 = *(uint *)(lVar29 + (longlong)local_868 * 4) & uVar15 & uVar28;
        uVar26 = (uVar23 >> 2 & 0x11111111) + (uVar23 & 0x11111111);
        uVar21 = uVar21 + (((uVar26 >> 4) + uVar26 & 0x7070707) * 0x1010101 >> 0x18);
        uVar23 = (uVar23 & 0xaaaaaaaa) - (uVar23 >> 1 & 0x55555555);
        uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
        local_874 = local_874 + (((uVar23 >> 4) + uVar23 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar23 = (uVar18 >> 2 & 0x11111111) + (uVar18 & 0x11111111);
        uVar31 = uVar31 + (((uVar23 >> 4) + uVar23 & 0x7070707) * 0x1010101 >> 0x18);
        uVar18 = (uVar18 & 0xaaaaaaaa) - (uVar18 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar16 = uVar16 + (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar18 = (uVar28 >> 2 & 0x11111111) + (uVar28 & 0x11111111);
        uVar9 = uVar9 + (((uVar18 >> 4) + uVar18 & 0x7070707) * 0x1010101 >> 0x18);
        uVar28 = (uVar28 & 0xaaaaaaaa) - (uVar28 >> 1 & 0x55555555);
        uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
        uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f) * 0x1010101 >> 0x18;
        puVar24 = (undefined1 *)(ulonglong)uVar28;
        uVar30 = uVar30 + uVar28;
        local_868 = local_868 + 1;
      } while (local_888 != local_868);
      if ((local_85c & 1) == 0) {
        uVar10 = 0;
        uVar28 = 0;
        uVar32 = 0;
        puVar19 = &DAT_0f0f0f0f;
      }
      else {
        uVar22 = *(uint *)(lVar14 + 0x34);
        local_868 = (undefined1 *)(ulonglong)uVar22;
        puVar24 = (undefined1 *)((ulonglong)*(uint *)(lVar14 + 0x4c) + local_820);
        uVar28 = 0;
        local_888 = puVar24;
        if ((uVar17 & 1) == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar21 & 3;
          if (3 < uVar21) {
            local_868 = (undefined1 *)(ulonglong)(uVar22 - (uVar21 & 0xfffffffc));
            local_888 = puVar24 + (ulonglong)(uVar21 & 0xfffffffc) * 0xc;
          }
        }
        puVar24 = puVar24 + uVar22 * 0xc;
        local_870 = puVar24;
        if (((uVar25 & 1) != 0) && (uVar28 = uVar31 & 3, 3 < uVar31)) {
          local_870 = puVar24 + (ulonglong)(uVar31 & 0xfffffffc) * 0xc;
        }
        uVar10 = (ulonglong)uVar18;
        puVar24 = puVar24 + (uint)(*(int *)(lVar14 + 0x38) * 0xc);
        uVar32 = 0;
        puVar19 = local_888;
        if (((uVar8 & 1) != 0) && (uVar32 = (ulonglong)(uVar9 & 3), 3 < uVar9)) {
          puVar24 = puVar24 + (ulonglong)(uVar9 & 0xfffffffc) * 0xc;
        }
      }
      local_608 = 0;
      local_3f8 = 0;
      local_1e8 = 0;
      auVar35 = in_XMM1;
      local_880 = uVar25;
      local_87c = uVar17;
      local_878 = uVar8;
      local_858 = param_1;
      local_850 = param_3;
      local_848 = uVar11;
      local_840 = lVar1;
      local_838 = uVar20;
      local_834 = uVar27;
      local_830 = uVar13;
      local_82c = uVar15;
      local_828 = param_2;
      local_818 = lVar14;
      local_810 = lVar29;
      if (local_85c != 1) {
        local_888 = (undefined1 *)CONCAT44(local_888._4_4_,(int)uVar10);
        local_840 = CONCAT44((int)((ulonglong)lVar1 >> 0x20),uVar28);
        local_848 = CONCAT44((int)(uVar11 >> 0x20),(int)uVar32);
        auVar35._0_8_ = FUN_149846e08(local_808,param_1);
        auVar35._8_8_ = extraout_XMM0_Qb;
        if ((local_87c & 2) != 0) {
          local_888 = (undefined1 *)(CONCAT44(local_888._4_4_,local_874) & 0xffffffff00000003);
          if (3 < local_874) {
            uVar13 = local_874 & 0xfffffffc;
            local_600 = local_600 - uVar13;
            uVar8 = local_874 >> 2;
            uVar11 = 0;
            in_XMM4 = pmovsxbd(in_XMM4,0x1f1f1f1f);
            auVar36 = (undefined1  [16])0x0;
            auVar37 = (undefined1  [16])0x0;
            do {
              auVar35 = pmovzxbw(auVar35,*(undefined8 *)(local_140 + uVar11 * 4));
              auVar46 = pmovzxbw(in_XMM1,*(undefined8 *)(local_120 + uVar11 * 4));
              auVar35 = pmovzxwd(unaff_XMM6,auVar35);
              auVar53 = pmovzxwd(unaff_XMM7,auVar46);
              auVar46._0_4_ = -(uint)(auVar35._0_4_ == in_XMM4._0_4_);
              auVar46._4_4_ = -(uint)(auVar35._4_4_ == in_XMM4._4_4_);
              auVar46._8_4_ = -(uint)(auVar35._8_4_ == in_XMM4._8_4_);
              auVar46._12_4_ = -(uint)(auVar35._12_4_ == in_XMM4._12_4_);
              unaff_XMM6 = blendvps(auVar35,_DAT_149936180,auVar46);
              auVar35._0_4_ = -(uint)(auVar53._0_4_ == in_XMM4._0_4_);
              auVar35._4_4_ = -(uint)(auVar53._4_4_ == in_XMM4._4_4_);
              auVar35._8_4_ = -(uint)(auVar53._8_4_ == in_XMM4._8_4_);
              auVar35._12_4_ = -(uint)(auVar53._12_4_ == in_XMM4._12_4_);
              unaff_XMM7 = blendvps(auVar53,_DAT_149936180,auVar35);
              auVar49._0_4_ = auVar37._0_4_ + unaff_XMM6._0_4_;
              auVar49._4_4_ = auVar37._4_4_ + unaff_XMM6._4_4_;
              auVar49._8_4_ = auVar37._8_4_ + unaff_XMM6._8_4_;
              auVar49._12_4_ = auVar37._12_4_ + unaff_XMM6._12_4_;
              auVar53._0_4_ = auVar36._0_4_ + unaff_XMM7._0_4_;
              auVar53._4_4_ = auVar36._4_4_ + unaff_XMM7._4_4_;
              auVar53._8_4_ = auVar36._8_4_ + unaff_XMM7._8_4_;
              auVar53._12_4_ = auVar36._12_4_ + unaff_XMM7._12_4_;
              uVar11 = uVar11 + 1;
              in_XMM1 = auVar35;
              auVar36 = auVar53;
              auVar37 = auVar49;
            } while (uVar8 != uVar11);
            auVar36 = phaddd(auVar49,auVar49);
            auVar37 = phaddd(auVar36,auVar35);
            auVar36 = phaddd(auVar53,auVar53);
            auVar36 = phaddd(auVar36,auVar35);
            local_140 = local_140 + (ulonglong)uVar13;
            local_138 = local_138 + (ulonglong)(uVar8 * 0x18);
            local_128 = local_128 + auVar37._0_4_ * 3;
            local_120 = local_120 + (ulonglong)uVar13;
            local_118 = local_118 + (ulonglong)(uVar8 * 0x18);
            local_108 = local_108 + auVar36._0_4_ * 3;
            local_158 = local_158 + (ulonglong)uVar8 * 0x60;
          }
        }
        uVar28 = (uint)local_840;
        if (((local_880 & 2) != 0) && (uVar28 = uVar16 & 3, 3 < uVar16)) {
          uVar8 = uVar16 & 0xfffffffc;
          local_3f0 = local_3f0 - uVar8;
          uVar16 = uVar16 >> 2;
          uVar11 = 0;
          in_XMM4 = pmovsxbd(in_XMM4,0x1f1f1f1f);
          auVar36 = (undefined1  [16])0x0;
          auVar37 = (undefined1  [16])0x0;
          do {
            auVar35 = pmovzxbw(auVar35,*(undefined8 *)(local_100 + uVar11 * 4));
            auVar46 = pmovzxbw(in_XMM1,*(undefined8 *)(local_e0 + uVar11 * 4));
            auVar35 = pmovzxwd(unaff_XMM6,auVar35);
            auVar46 = pmovzxwd(unaff_XMM7,auVar46);
            auVar40._0_4_ = -(uint)(auVar35._0_4_ == in_XMM4._0_4_);
            auVar40._4_4_ = -(uint)(auVar35._4_4_ == in_XMM4._4_4_);
            auVar40._8_4_ = -(uint)(auVar35._8_4_ == in_XMM4._8_4_);
            auVar40._12_4_ = -(uint)(auVar35._12_4_ == in_XMM4._12_4_);
            unaff_XMM6 = blendvps(auVar35,_DAT_149936180,auVar40);
            auVar35._0_4_ = -(uint)(auVar46._0_4_ == in_XMM4._0_4_);
            auVar35._4_4_ = -(uint)(auVar46._4_4_ == in_XMM4._4_4_);
            auVar35._8_4_ = -(uint)(auVar46._8_4_ == in_XMM4._8_4_);
            auVar35._12_4_ = -(uint)(auVar46._12_4_ == in_XMM4._12_4_);
            unaff_XMM7 = blendvps(auVar46,_DAT_149936180,auVar35);
            auVar50._0_4_ = auVar37._0_4_ + unaff_XMM6._0_4_;
            auVar50._4_4_ = auVar37._4_4_ + unaff_XMM6._4_4_;
            auVar50._8_4_ = auVar37._8_4_ + unaff_XMM6._8_4_;
            auVar50._12_4_ = auVar37._12_4_ + unaff_XMM6._12_4_;
            auVar47._0_4_ = auVar36._0_4_ + unaff_XMM7._0_4_;
            auVar47._4_4_ = auVar36._4_4_ + unaff_XMM7._4_4_;
            auVar47._8_4_ = auVar36._8_4_ + unaff_XMM7._8_4_;
            auVar47._12_4_ = auVar36._12_4_ + unaff_XMM7._12_4_;
            uVar11 = uVar11 + 1;
            in_XMM1 = auVar35;
            auVar36 = auVar47;
            auVar37 = auVar50;
          } while (uVar16 != uVar11);
          auVar36 = phaddd(auVar50,auVar50);
          auVar37 = phaddd(auVar36,auVar35);
          auVar36 = phaddd(auVar47,auVar47);
          auVar36 = phaddd(auVar36,auVar35);
          local_100 = local_100 + (ulonglong)uVar8;
          local_f8 = local_f8 + (ulonglong)(uVar16 * 0x18);
          local_e8 = local_e8 + auVar37._0_4_ * 3;
          local_e0 = local_e0 + (ulonglong)uVar8;
          local_d8 = local_d8 + (ulonglong)(uVar16 * 0x18);
          local_c8 = local_c8 + auVar36._0_4_ * 3;
          local_150 = local_150 + (ulonglong)uVar16 * 0x60;
        }
        uVar10 = (ulonglong)local_888 & 0xffffffff;
        if ((local_878 & 2) == 0) {
          uVar32 = local_848 & 0xffffffff;
          auVar35 = in_XMM1;
        }
        else if (uVar30 < 4) {
          uVar32 = (ulonglong)(uVar30 & 3);
          auVar35 = in_XMM1;
        }
        else {
          uVar8 = uVar30 & 0xfffffffc;
          local_1e0 = local_1e0 - uVar8;
          uVar16 = uVar30 >> 2;
          uVar11 = 0;
          auVar46 = pmovsxbd(in_XMM4,0x1f1f1f1f);
          auVar36 = (undefined1  [16])0x0;
          auVar37 = (undefined1  [16])0x0;
          do {
            auVar35 = pmovzxbw(auVar35,*(undefined8 *)(local_c0 + uVar11 * 4));
            auVar53 = pmovzxbw(in_XMM1,*(undefined8 *)(local_a0 + uVar11 * 4));
            auVar35 = pmovzxwd(unaff_XMM6,auVar35);
            auVar53 = pmovzxwd(unaff_XMM7,auVar53);
            auVar41._0_4_ = -(uint)(auVar35._0_4_ == auVar46._0_4_);
            auVar41._4_4_ = -(uint)(auVar35._4_4_ == auVar46._4_4_);
            auVar41._8_4_ = -(uint)(auVar35._8_4_ == auVar46._8_4_);
            auVar41._12_4_ = -(uint)(auVar35._12_4_ == auVar46._12_4_);
            unaff_XMM6 = blendvps(auVar35,_DAT_149936180,auVar41);
            auVar35._0_4_ = -(uint)(auVar53._0_4_ == auVar46._0_4_);
            auVar35._4_4_ = -(uint)(auVar53._4_4_ == auVar46._4_4_);
            auVar35._8_4_ = -(uint)(auVar53._8_4_ == auVar46._8_4_);
            auVar35._12_4_ = -(uint)(auVar53._12_4_ == auVar46._12_4_);
            unaff_XMM7 = blendvps(auVar53,_DAT_149936180,auVar35);
            auVar51._0_4_ = auVar37._0_4_ + unaff_XMM6._0_4_;
            auVar51._4_4_ = auVar37._4_4_ + unaff_XMM6._4_4_;
            auVar51._8_4_ = auVar37._8_4_ + unaff_XMM6._8_4_;
            auVar51._12_4_ = auVar37._12_4_ + unaff_XMM6._12_4_;
            auVar48._0_4_ = auVar36._0_4_ + unaff_XMM7._0_4_;
            auVar48._4_4_ = auVar36._4_4_ + unaff_XMM7._4_4_;
            auVar48._8_4_ = auVar36._8_4_ + unaff_XMM7._8_4_;
            auVar48._12_4_ = auVar36._12_4_ + unaff_XMM7._12_4_;
            uVar11 = uVar11 + 1;
            in_XMM1 = auVar35;
            auVar36 = auVar48;
            auVar37 = auVar51;
          } while (uVar16 != uVar11);
          auVar36 = phaddd(auVar51,auVar51);
          auVar37 = phaddd(auVar36,auVar35);
          auVar36 = phaddd(auVar48,auVar48);
          auVar36 = phaddd(auVar36,auVar35);
          local_c0 = local_c0 + (ulonglong)uVar8;
          local_b8 = local_b8 + (ulonglong)(uVar16 * 0x18);
          local_a8 = local_a8 + auVar37._0_4_ * 3;
          local_a0 = local_a0 + (ulonglong)uVar8;
          local_98 = local_98 + (ulonglong)(uVar16 * 0x18);
          local_88 = local_88 + auVar36._0_4_ * 3;
          local_148 = local_148 + (ulonglong)uVar16 * 0x60;
          uVar32 = (ulonglong)(uVar30 & 3);
          uVar10 = (ulonglong)local_888 & 0xffffffff;
        }
      }
      fVar44 = *(float *)(param_1 + 0xf);
      if (local_838 == 0) {
        lVar14 = (longlong)*(int *)(param_3[1] + (param_2 & 0xffffffff) * 4) * 0x60;
        pdVar4 = (double *)(*param_3 + lVar14);
        uVar33 = CONCAT44((float)pdVar4[1],(float)*pdVar4);
        pdVar4 = (double *)(*param_3 + 0x10 + lVar14);
        auVar36._0_8_ = CONCAT44((float)pdVar4[1],(float)*pdVar4);
        auVar36._8_8_ = auVar36._0_8_;
      }
      else {
        if ((local_87c & 1) == 0) {
          auVar37._0_8_ = FUN_149849e46(local_808,param_1);
          auVar37._8_8_ = extraout_XMM0_Qb_00;
        }
        else {
          uVar11 = 4;
          if ((uint)local_868 < 4) {
            uVar11 = (ulonglong)local_868 & 0xffffffff;
          }
          auVar35 = insertps(ZEXT416(*(uint *)(puVar19 + uVar10 * 4)),
                             *(undefined4 *)(puVar19 + uVar11 * 4 + uVar10 * 4),0x1c);
          auVar36 = insertps(auVar35,*(undefined4 *)
                                      (puVar19 + (ulonglong)(uint)((int)uVar11 << 3) + uVar10 * 4),
                             0x28);
          auVar35 = ZEXT416((uint)SQRT(ABS(((1.0 - auVar36._0_4_ * auVar36._0_4_) -
                                           auVar36._4_4_ * auVar36._4_4_) -
                                           auVar36._8_4_ * auVar36._8_4_)));
          auVar37 = insertps(auVar36,auVar35,0x30);
        }
        uVar33 = auVar37._0_8_;
        auVar5._4_8_ = auVar35._8_8_;
        auVar5._0_4_ = auVar37._4_4_;
        auVar36._0_8_ = auVar5._0_8_ << 0x20;
        auVar36._8_4_ = auVar37._8_4_;
        auVar36._12_4_ = auVar37._12_4_;
      }
      pdVar4 = (double *)param_3[2];
      *pdVar4 = (double)(float)uVar33;
      pdVar4[1] = (double)(float)((ulonglong)uVar33 >> 0x20);
      pdVar4[2] = (double)auVar36._8_4_;
      pdVar4[3] = (double)auVar36._12_4_;
      if (local_834 == 0) {
        lVar14 = (longlong)*(int *)(param_3[1] + (param_2 & 0xffffffff) * 4) * 0x60;
        pdVar4 = (double *)(*param_3 + 0x20 + lVar14);
        uVar33 = CONCAT44((float)pdVar4[1],(float)*pdVar4);
        auVar45._0_4_ = (float)*(double *)(*param_3 + 0x30 + lVar14);
        auVar45._4_4_ = 0.0;
        auVar45._8_4_ = auVar45._0_4_;
        auVar45._12_4_ = 0.0;
      }
      else {
        if ((local_880 & 1) == 0) {
          uVar33 = FUN_14984a24b(param_1,uVar28,&local_150,&local_100);
          fVar42 = (float)((ulonglong)uVar33 >> 0x20);
          fVar43 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          uVar34 = FUN_14984a24b(param_1,uVar28,&local_150,&local_e0);
          auVar45._0_4_ = fVar44 * (float)uVar34 + ((float)uVar33 - fVar44 * (float)uVar33);
          auVar45._4_4_ = fVar44 * (float)((ulonglong)uVar34 >> 0x20) + (fVar42 - fVar44 * fVar42);
          auVar45._8_4_ =
               fVar44 * (float)extraout_XMM0_Qb_02 +
               ((float)extraout_XMM0_Qb_01 - fVar44 * (float)extraout_XMM0_Qb_01);
          auVar45._12_4_ =
               fVar44 * (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) + (fVar43 - fVar44 * fVar43)
          ;
        }
        else {
          auVar45 = *(undefined1 (*) [16])(local_870 + (ulonglong)uVar28 * 0xc);
        }
        uVar33 = auVar45._0_8_;
      }
      lVar14 = param_3[2];
      auVar38._0_8_ = (double)(float)uVar33;
      auVar38._8_8_ = (double)(float)((ulonglong)uVar33 >> 0x20);
      *(undefined1 (*) [16])(lVar14 + 0x20) = auVar38;
      auVar35 = insertps(auVar38,auVar45,0x8e);
      *(double *)(lVar14 + 0x30) = (double)auVar35._0_4_;
      *(double *)(lVar14 + 0x38) = (double)auVar35._4_4_;
      if (local_830 == 0) {
        lVar14 = (longlong)*(int *)(param_3[1] + (param_2 & 0xffffffff) * 4) * 0x60;
        pdVar4 = (double *)(*param_3 + 0x40 + lVar14);
        uVar33 = CONCAT44((float)pdVar4[1],(float)*pdVar4);
        fVar44 = (float)*(double *)(*param_3 + 0x50 + lVar14);
        auVar52._4_4_ = 0.0;
        auVar52._0_4_ = fVar44;
        auVar52._8_4_ = fVar44;
        auVar52._12_4_ = 0.0;
      }
      else {
        if ((local_878 & 1) == 0) {
          uVar33 = FUN_14984a439(param_1,uVar32,&local_148,&local_c0);
          fVar42 = (float)((ulonglong)uVar33 >> 0x20);
          fVar43 = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          uVar34 = FUN_14984a439(param_1,uVar32,&local_148,&local_a0);
          auVar52._0_4_ = fVar44 * (float)uVar34 + ((float)uVar33 - fVar44 * (float)uVar33);
          auVar52._4_4_ = fVar44 * (float)((ulonglong)uVar34 >> 0x20) + (fVar42 - fVar44 * fVar42);
          auVar52._8_4_ =
               fVar44 * (float)extraout_XMM0_Qb_04 +
               ((float)extraout_XMM0_Qb_03 - fVar44 * (float)extraout_XMM0_Qb_03);
          auVar52._12_4_ =
               fVar44 * (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20) + (fVar43 - fVar44 * fVar43)
          ;
        }
        else {
          auVar52 = *(undefined1 (*) [16])(puVar24 + uVar32 * 0xc);
        }
        uVar33 = auVar52._0_8_;
      }
      lVar14 = param_3[2];
      auVar39._0_8_ = (double)(float)uVar33;
      auVar39._8_8_ = (double)(float)((ulonglong)uVar33 >> 0x20);
      *(undefined1 (*) [16])(lVar14 + 0x40) = auVar39;
      auVar35 = insertps(auVar39,auVar52,0x8e);
      fVar44 = auVar35._0_4_;
      fVar42 = auVar35._4_4_;
    }
    *(double *)(lVar14 + 0x50) = (double)fVar44;
    *(double *)(lVar14 + 0x58) = (double)fVar42;
  }
  if ((local_70 ^ (ulonglong)auStack_8a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149849e46 FUN_149849e46 body=370 status=ok
// SIG undefined FUN_149849e46(void)

void FUN_149849e46(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar4 [16];
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  
  uVar1 = 4;
  if (*(uint *)(param_1 + 0x208) < 4) {
    uVar1 = *(uint *)(param_1 + 0x208);
  }
  uVar3 = FUN_149849fb8(param_2,param_3,uVar1,param_1 + 0x6b0,param_1 + 0x6c8);
  fVar2 = (float)((ulonglong)uVar3 >> 0x20);
  fVar5 = (float)extraout_XMM0_Qb;
  auVar10._8_4_ = fVar5;
  auVar10._0_8_ = uVar3;
  auVar10._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar4._0_8_ = FUN_149849fb8(param_2,param_3,uVar1,param_1 + 0x6b0,param_1 + 0x6e8);
  auVar4._8_8_ = extraout_XMM0_Qb_00;
  auVar10 = insertps(auVar10,ZEXT416((uint)SQRT(ABS(((1.0 - (float)uVar3 * (float)uVar3) -
                                                    fVar2 * fVar2) - fVar5 * fVar5))),0x30);
  fVar2 = (float)((ulonglong)auVar4._0_8_ >> 0x20);
  auVar4 = insertps(auVar4,ZEXT416((uint)SQRT(ABS(((1.0 - (float)auVar4._0_8_ * (float)auVar4._0_8_)
                                                  - fVar2 * fVar2) -
                                                  (float)extraout_XMM0_Qb_00 *
                                                  (float)extraout_XMM0_Qb_00))),0x30);
  auVar8 = dpps(auVar10,auVar4,0xff);
  fVar2 = (float)(auVar4._0_4_ ^ auVar8._0_4_ & 0x80000000) * param_4 +
          (auVar10._0_4_ - param_4 * auVar10._0_4_);
  fVar5 = (float)(auVar4._4_4_ ^ auVar8._4_4_ & 0x80000000) * param_4 +
          (auVar10._4_4_ - param_4 * auVar10._4_4_);
  fVar6 = (float)(auVar4._8_4_ ^ auVar8._8_4_ & 0x80000000) * param_4 +
          (auVar10._8_4_ - param_4 * auVar10._8_4_);
  fVar7 = (float)(auVar4._12_4_ ^ auVar8._12_4_ & 0x80000000) * param_4 +
          (auVar10._12_4_ - param_4 * auVar10._12_4_);
  fVar2 = fVar2 * fVar2;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar9 = fVar6 + fVar2;
  fVar5 = fVar7 + fVar5 * fVar5;
  auVar8._0_4_ = fVar5 + fVar9;
  auVar8._4_4_ = fVar9 + fVar5;
  auVar8._8_4_ = fVar9 + fVar2 + fVar6;
  auVar8._12_4_ = fVar9 + fVar2 + fVar7;
  rsqrtss(auVar8,auVar8);
  return;
}



// FUNCTION 149849fb8 FUN_149849fb8 body=659 status=ok
// SIG undefined FUN_149849fb8(void)

void FUN_149849fb8(undefined8 param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(*param_5 + (ulonglong)param_2) != '\x1f') {
    puVar1 = (uint *)(*param_4 + (ulonglong)param_2 * 4);
    auVar2 = insertps(ZEXT416(*puVar1),puVar1[param_3],0x1c);
    insertps(auVar2,puVar1[param_3 * 2],0x28);
    auVar2 = insertps(ZEXT416(puVar1[param_3 * 3]),puVar1[param_3 << 2],0x1c);
    insertps(auVar2,puVar1[param_3 * 5],0x28);
  }
  return;
}



// FUNCTION 14984a24b FUN_14984a24b body=494 status=ok
// SIG undefined FUN_14984a24b(void)

void FUN_14984a24b(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
  if (bVar2 != 0x1f) {
    lVar3 = param_4[1];
    lVar4 = (ulonglong)param_2 * 6;
    if (bVar2 == 0) {
      pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)bVar2 * 8);
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = uVar1;
      auVar5._8_4_ = uVar1;
      auVar5._12_4_ = uVar1;
      if (*(char *)(param_1 + 0x20) != '\0') {
        auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
        pmovzxwd(auVar5,auVar5);
        auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
        pmovzxwd(auVar5,auVar5);
      }
    }
  }
  return;
}



// FUNCTION 14984a439 FUN_14984a439 body=494 status=ok
// SIG undefined FUN_14984a439(void)

void FUN_14984a439(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
  if (bVar2 != 0x1f) {
    lVar3 = param_4[1];
    lVar4 = (ulonglong)param_2 * 6;
    if (bVar2 == 0) {
      pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)bVar2 * 8);
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = uVar1;
      auVar5._8_4_ = uVar1;
      auVar5._12_4_ = uVar1;
      if (*(char *)(param_1 + 0x20) != '\0') {
        auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
        pmovzxwd(auVar5,auVar5);
        auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
        pmovzxwd(auVar5,auVar5);
      }
    }
  }
  return;
}



// FUNCTION 14984a627 FUN_14984a627 body=2858 status=ok
// SIG undefined FUN_14984a627(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14984a627(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double *pdVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 *puVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  double dVar34;
  float fVar43;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar44;
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar45;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 in_XMM1 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 in_XMM4 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar53 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auStack_8c8 [32];
  undefined8 local_8a8;
  uint local_89c;
  longlong *local_898;
  ulonglong local_890;
  undefined1 *local_888;
  longlong local_880;
  uint local_874;
  uint local_870;
  uint local_86c;
  undefined8 local_868;
  longlong local_860;
  undefined8 local_858;
  uint local_84c;
  uint local_848;
  uint local_844;
  longlong local_840;
  longlong local_838;
  longlong local_830;
  undefined1 local_828 [512];
  undefined8 local_628;
  int local_620;
  undefined8 local_418;
  int local_410;
  undefined8 local_208;
  int local_200;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  int local_148;
  longlong local_140;
  longlong local_138;
  int local_128;
  longlong local_120;
  longlong local_118;
  int local_108;
  longlong local_100;
  longlong local_f8;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_8c8;
  lVar11 = *param_1;
  if ((*(uint *)(lVar11 + 0x10) <= param_2) ||
     (*(float *)((longlong)param_1 + 0x34) <= 0.0 && *(float *)((longlong)param_1 + 0x34) != 0.0))
  goto LAB_14984aadb;
  uVar13 = *(uint *)(lVar11 + 0x1c) >> 1 & 1;
  fVar56 = (float)uVar13;
  auVar55._4_4_ = fVar56;
  auVar55._0_4_ = fVar56;
  auVar55._8_4_ = fVar56;
  auVar55._12_4_ = fVar56;
  uVar7 = (ulonglong)(*(uint *)(lVar11 + 0x10) + 0xf >> 4);
  uVar9 = (ulonglong)*(uint *)(lVar11 + 0x48) + 0x20 + lVar11;
  lVar1 = uVar9 + uVar7 * 4;
  uVar7 = lVar1 + uVar7 * 4;
  if (*(byte *)((longlong)param_1 + 0x1f) == 0) {
    uVar7 = uVar9;
  }
  uVar32 = -(uint)*(byte *)((longlong)param_1 + 0x1f);
  local_8a8 = (ulonglong)(param_2 >> 4);
  uVar8 = (ulonglong)((param_2 >> 4) * 4);
  bVar12 = ~((char)param_2 * '\x02') & 0x1e;
  uVar18 = *(uint *)(uVar8 + uVar9) >> bVar12;
  uVar20 = uVar18 & 3;
  uVar24 = *(uint *)(uVar8 + lVar1) >> bVar12;
  uVar27 = uVar24 & 3;
  uVar6 = *(uint *)(uVar7 + uVar8) >> bVar12 & uVar32;
  uVar14 = uVar6 & 3;
  local_86c = uVar27 | uVar20 | uVar14;
  if (local_86c == 0) {
    puVar3 = *(undefined8 **)(param_3 + 0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0x3ff0000000000000;
    lVar11 = *(longlong *)(param_3 + 0x10);
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    lVar11 = *(longlong *)(param_3 + 0x10);
    auVar37._0_8_ = (double)uVar13;
    auVar37._8_8_ = (double)uVar13;
    *(undefined1 (*) [16])(lVar11 + 0x40) = auVar37;
    auVar55 = insertps(auVar37,auVar55,0x8e);
    fVar56 = auVar55._0_4_;
    fVar2 = auVar55._4_4_;
  }
  else {
    uVar13 = (param_2 & 0xfffffff0) + 0x10;
    local_840 = lVar11 + 0x20;
    uVar22 = ~(0xffffffffU >> (((char)param_2 - (char)uVar13) * '\x02' & 0x1fU));
    if (param_2 == uVar13) {
      uVar22 = 0xffffffff;
    }
    local_888 = (undefined1 *)CONCAT44(local_888._4_4_,uVar22);
    uVar8 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar19 = 0 >> bVar12;
    uVar29 = 0;
    do {
      local_880 = CONCAT44(local_880._4_4_,uVar29);
      uVar33 = 0xffffffff;
      if (local_8a8 == uVar8) {
        uVar33 = uVar22;
      }
      uVar25 = *(uint *)(uVar9 + uVar8 * 4) & uVar33;
      uVar21 = *(uint *)(lVar1 + uVar8 * 4) & uVar33;
      uVar33 = *(uint *)(uVar7 + uVar8 * 4) & uVar32 & uVar33;
      uVar28 = (uVar25 >> 2 & 0x11111111) + (uVar25 & 0x11111111);
      uVar17 = uVar17 + (((uVar28 >> 4) + uVar28 & 0x7070707) * 0x1010101 >> 0x18);
      uVar25 = (uVar25 & 0xaaaaaaaa) - (uVar25 >> 1 & 0x55555555);
      puVar30 = &DAT_33333333;
      uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
      uVar13 = uVar13 + (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar25 = (uVar21 >> 2 & 0x11111111) + (uVar21 & 0x11111111);
      uVar16 = uVar16 + (((uVar25 >> 4) + uVar25 & 0x7070707) * 0x1010101 >> 0x18);
      uVar21 = (uVar21 & 0xaaaaaaaa) - (uVar21 >> 1 & 0x55555555);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar19 = uVar19 + (((uVar21 >> 4) + uVar21 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      uVar21 = (uVar33 >> 2 & 0x11111111) + (uVar33 & 0x11111111);
      uVar15 = uVar15 + (((uVar21 >> 4) + uVar21 & 0x7070707) * 0x1010101 >> 0x18);
      puVar23 = &DAT_aaaaaaaa;
      uVar33 = (uVar33 & 0xaaaaaaaa) - (uVar33 >> 1 & 0x55555555);
      uVar33 = (uVar33 >> 2 & 0x33333333) + (uVar33 & 0x33333333);
      uVar33 = ((uVar33 >> 4) + uVar33 & 0xf0f0f0f) * 0x1010101 >> 0x18;
      local_890 = (ulonglong)uVar33;
      uVar29 = uVar29 + uVar33;
      uVar8 = uVar8 + 1;
    } while (local_8a8 + 1 != uVar8);
    if ((local_86c & 1) == 0) {
      uVar33 = 0;
      uVar22 = 0;
      uVar8 = 0;
    }
    else {
      uVar32 = *(uint *)(lVar11 + 0x34);
      local_890 = (ulonglong)uVar32;
      lVar31 = (ulonglong)*(uint *)(lVar11 + 0x4c) + local_840;
      uVar22 = 0;
      local_880 = lVar31;
      if ((uVar18 & 1) == 0) {
        uVar33 = 0;
      }
      else {
        uVar33 = uVar17 & 3;
        if (3 < uVar17) {
          local_890 = (ulonglong)(uVar32 - (uVar17 & 0xfffffffc));
          local_880 = (ulonglong)(uVar17 & 0xfffffffc) * 0xc + lVar31;
        }
      }
      puVar30 = (undefined1 *)(lVar31 + (ulonglong)(uVar32 * 0xc));
      puVar23 = puVar30;
      if (((uVar24 & 1) != 0) && (uVar22 = uVar16 & 3, 3 < uVar16)) {
        puVar23 = puVar30 + (ulonglong)(uVar16 & 0xfffffffc) * 0xc;
      }
      puVar30 = puVar30 + (uint)(*(int *)(lVar11 + 0x38) * 0xc);
      uVar8 = 0;
      if (((uVar6 & 1) != 0) && (uVar8 = (ulonglong)(uVar15 & 3), 3 < uVar15)) {
        puVar30 = puVar30 + (ulonglong)(uVar15 & 0xfffffffc) * 0xc;
      }
    }
    local_628 = 0;
    local_418 = 0;
    local_208 = 0;
    uVar26 = local_890;
    local_89c = uVar24;
    local_898 = param_1;
    uVar5 = local_8a8 + 1;
    local_874 = uVar18;
    local_870 = uVar6;
    local_868 = uVar9;
    local_860 = param_3;
    local_858 = uVar7;
    local_84c = uVar20;
    local_848 = uVar27;
    local_844 = uVar14;
    local_838 = lVar11;
    local_830 = lVar1;
    if (local_86c == 1) {
LAB_14984a9bd:
      local_890 = uVar5;
      uVar13 = (uint)uVar26;
    }
    else {
      local_8a8 = (ulonglong)uVar33;
      local_868 = CONCAT44((int)(uVar9 >> 0x20),(int)uVar8);
      local_858 = CONCAT44((int)(uVar7 >> 0x20),uVar22);
      local_888 = puVar23;
      auVar40._0_8_ = FUN_149846e08(local_828,param_1);
      auVar40._8_8_ = extraout_XMM0_Qb;
      if ((uVar18 & 2) != 0) {
        local_8a8 = CONCAT44(local_8a8._4_4_,uVar13) & 0xffffffff00000003;
        if (3 < uVar13) {
          uVar14 = uVar13 & 0xfffffffc;
          local_620 = local_620 - uVar14;
          uVar13 = uVar13 >> 2;
          uVar9 = 0;
          in_XMM4 = pmovsxbd(in_XMM4,0x1f1f1f1f);
          auVar37 = (undefined1  [16])0x0;
          auVar38 = (undefined1  [16])0x0;
          do {
            auVar40 = pmovzxbw(auVar40,*(undefined8 *)(local_160 + uVar9 * 4));
            auVar46 = pmovzxbw(in_XMM1,*(undefined8 *)(local_140 + uVar9 * 4));
            auVar40 = pmovzxwd(unaff_XMM6,auVar40);
            auVar54 = pmovzxwd(unaff_XMM7,auVar46);
            auVar46._0_4_ = -(uint)(auVar40._0_4_ == in_XMM4._0_4_);
            auVar46._4_4_ = -(uint)(auVar40._4_4_ == in_XMM4._4_4_);
            auVar46._8_4_ = -(uint)(auVar40._8_4_ == in_XMM4._8_4_);
            auVar46._12_4_ = -(uint)(auVar40._12_4_ == in_XMM4._12_4_);
            unaff_XMM6 = blendvps(auVar40,_DAT_149936180,auVar46);
            auVar40._0_4_ = -(uint)(auVar54._0_4_ == in_XMM4._0_4_);
            auVar40._4_4_ = -(uint)(auVar54._4_4_ == in_XMM4._4_4_);
            auVar40._8_4_ = -(uint)(auVar54._8_4_ == in_XMM4._8_4_);
            auVar40._12_4_ = -(uint)(auVar54._12_4_ == in_XMM4._12_4_);
            unaff_XMM7 = blendvps(auVar54,_DAT_149936180,auVar40);
            auVar50._0_4_ = auVar38._0_4_ + unaff_XMM6._0_4_;
            auVar50._4_4_ = auVar38._4_4_ + unaff_XMM6._4_4_;
            auVar50._8_4_ = auVar38._8_4_ + unaff_XMM6._8_4_;
            auVar50._12_4_ = auVar38._12_4_ + unaff_XMM6._12_4_;
            auVar54._0_4_ = auVar37._0_4_ + unaff_XMM7._0_4_;
            auVar54._4_4_ = auVar37._4_4_ + unaff_XMM7._4_4_;
            auVar54._8_4_ = auVar37._8_4_ + unaff_XMM7._8_4_;
            auVar54._12_4_ = auVar37._12_4_ + unaff_XMM7._12_4_;
            uVar9 = uVar9 + 1;
            in_XMM1 = auVar40;
            auVar37 = auVar54;
            auVar38 = auVar50;
          } while (uVar13 != uVar9);
          auVar37 = phaddd(auVar50,auVar50);
          auVar38 = phaddd(auVar37,auVar40);
          auVar37 = phaddd(auVar54,auVar54);
          auVar37 = phaddd(auVar37,auVar40);
          local_160 = local_160 + (ulonglong)uVar14;
          local_158 = local_158 + (ulonglong)(uVar13 * 0x18);
          local_148 = local_148 + auVar38._0_4_ * 3;
          local_140 = local_140 + (ulonglong)uVar14;
          local_138 = local_138 + (ulonglong)(uVar13 * 0x18);
          local_128 = local_128 + auVar37._0_4_ * 3;
          local_178 = local_178 + (ulonglong)uVar13 * 0x60;
        }
      }
      uVar22 = (uint)local_858;
      if (((local_89c & 2) != 0) && (uVar22 = uVar19 & 3, 3 < uVar19)) {
        uVar13 = uVar19 & 0xfffffffc;
        local_410 = local_410 - uVar13;
        uVar19 = uVar19 >> 2;
        uVar9 = 0;
        in_XMM4 = pmovsxbd(in_XMM4,0x1f1f1f1f);
        auVar37 = (undefined1  [16])0x0;
        auVar38 = (undefined1  [16])0x0;
        do {
          auVar40 = pmovzxbw(auVar40,*(undefined8 *)(local_120 + uVar9 * 4));
          auVar46 = pmovzxbw(in_XMM1,*(undefined8 *)(local_100 + uVar9 * 4));
          auVar40 = pmovzxwd(unaff_XMM6,auVar40);
          auVar46 = pmovzxwd(unaff_XMM7,auVar46);
          auVar41._0_4_ = -(uint)(auVar40._0_4_ == in_XMM4._0_4_);
          auVar41._4_4_ = -(uint)(auVar40._4_4_ == in_XMM4._4_4_);
          auVar41._8_4_ = -(uint)(auVar40._8_4_ == in_XMM4._8_4_);
          auVar41._12_4_ = -(uint)(auVar40._12_4_ == in_XMM4._12_4_);
          unaff_XMM6 = blendvps(auVar40,_DAT_149936180,auVar41);
          auVar40._0_4_ = -(uint)(auVar46._0_4_ == in_XMM4._0_4_);
          auVar40._4_4_ = -(uint)(auVar46._4_4_ == in_XMM4._4_4_);
          auVar40._8_4_ = -(uint)(auVar46._8_4_ == in_XMM4._8_4_);
          auVar40._12_4_ = -(uint)(auVar46._12_4_ == in_XMM4._12_4_);
          unaff_XMM7 = blendvps(auVar46,_DAT_149936180,auVar40);
          auVar51._0_4_ = auVar38._0_4_ + unaff_XMM6._0_4_;
          auVar51._4_4_ = auVar38._4_4_ + unaff_XMM6._4_4_;
          auVar51._8_4_ = auVar38._8_4_ + unaff_XMM6._8_4_;
          auVar51._12_4_ = auVar38._12_4_ + unaff_XMM6._12_4_;
          auVar48._0_4_ = auVar37._0_4_ + unaff_XMM7._0_4_;
          auVar48._4_4_ = auVar37._4_4_ + unaff_XMM7._4_4_;
          auVar48._8_4_ = auVar37._8_4_ + unaff_XMM7._8_4_;
          auVar48._12_4_ = auVar37._12_4_ + unaff_XMM7._12_4_;
          uVar9 = uVar9 + 1;
          in_XMM1 = auVar40;
          auVar37 = auVar48;
          auVar38 = auVar51;
        } while (uVar19 != uVar9);
        auVar37 = phaddd(auVar51,auVar51);
        auVar38 = phaddd(auVar37,auVar40);
        auVar37 = phaddd(auVar48,auVar48);
        auVar37 = phaddd(auVar37,auVar40);
        local_120 = local_120 + (ulonglong)uVar13;
        local_118 = local_118 + (ulonglong)(uVar19 * 0x18);
        local_108 = local_108 + auVar38._0_4_ * 3;
        local_100 = local_100 + (ulonglong)uVar13;
        local_f8 = local_f8 + (ulonglong)(uVar19 * 0x18);
        local_e8 = local_e8 + auVar37._0_4_ * 3;
        local_170 = local_170 + (ulonglong)uVar19 * 0x60;
      }
      uVar8 = local_868 & 0xffffffff;
      uVar13 = (uint)local_890;
      puVar23 = local_888;
      uVar26 = local_890;
      uVar33 = (uint)local_8a8;
      uVar5 = local_890;
      if ((uVar6 & 2) == 0) goto LAB_14984a9bd;
      uVar8 = (ulonglong)(uVar29 & 3);
      if (3 < uVar29) {
        uVar14 = uVar29 & 0xfffffffc;
        local_200 = local_200 - uVar14;
        uVar29 = uVar29 >> 2;
        uVar9 = 0;
        auVar46 = pmovsxbd(in_XMM4,0x1f1f1f1f);
        auVar37 = (undefined1  [16])0x0;
        auVar38 = (undefined1  [16])0x0;
        do {
          auVar40 = pmovzxbw(auVar40,*(undefined8 *)(local_e0 + uVar9 * 4));
          auVar54 = pmovzxbw(in_XMM1,*(undefined8 *)(local_c0 + uVar9 * 4));
          auVar40 = pmovzxwd(unaff_XMM6,auVar40);
          auVar54 = pmovzxwd(unaff_XMM7,auVar54);
          auVar42._0_4_ = -(uint)(auVar40._0_4_ == auVar46._0_4_);
          auVar42._4_4_ = -(uint)(auVar40._4_4_ == auVar46._4_4_);
          auVar42._8_4_ = -(uint)(auVar40._8_4_ == auVar46._8_4_);
          auVar42._12_4_ = -(uint)(auVar40._12_4_ == auVar46._12_4_);
          unaff_XMM6 = blendvps(auVar40,_DAT_149936180,auVar42);
          auVar40._0_4_ = -(uint)(auVar54._0_4_ == auVar46._0_4_);
          auVar40._4_4_ = -(uint)(auVar54._4_4_ == auVar46._4_4_);
          auVar40._8_4_ = -(uint)(auVar54._8_4_ == auVar46._8_4_);
          auVar40._12_4_ = -(uint)(auVar54._12_4_ == auVar46._12_4_);
          unaff_XMM7 = blendvps(auVar54,_DAT_149936180,auVar40);
          auVar52._0_4_ = auVar38._0_4_ + unaff_XMM6._0_4_;
          auVar52._4_4_ = auVar38._4_4_ + unaff_XMM6._4_4_;
          auVar52._8_4_ = auVar38._8_4_ + unaff_XMM6._8_4_;
          auVar52._12_4_ = auVar38._12_4_ + unaff_XMM6._12_4_;
          auVar49._0_4_ = auVar37._0_4_ + unaff_XMM7._0_4_;
          auVar49._4_4_ = auVar37._4_4_ + unaff_XMM7._4_4_;
          auVar49._8_4_ = auVar37._8_4_ + unaff_XMM7._8_4_;
          auVar49._12_4_ = auVar37._12_4_ + unaff_XMM7._12_4_;
          uVar9 = uVar9 + 1;
          in_XMM1 = auVar40;
          auVar37 = auVar49;
          auVar38 = auVar52;
        } while (uVar29 != uVar9);
        auVar37 = phaddd(auVar52,auVar52);
        auVar38 = phaddd(auVar37,auVar40);
        auVar37 = phaddd(auVar49,auVar49);
        auVar37 = phaddd(auVar37,auVar40);
        local_e0 = local_e0 + (ulonglong)uVar14;
        local_d8 = local_d8 + (ulonglong)(uVar29 * 0x18);
        local_c8 = local_c8 + auVar38._0_4_ * 3;
        local_c0 = local_c0 + (ulonglong)uVar14;
        local_b8 = local_b8 + (ulonglong)(uVar29 * 0x18);
        local_a8 = local_a8 + auVar37._0_4_ * 3;
        local_168 = local_168 + (ulonglong)uVar29 * 0x60;
      }
    }
    lVar11 = local_860;
    plVar4 = local_898;
    fVar2 = *(float *)(local_898 + 0xf);
    if (local_84c == 0) {
      pdVar10 = *(double **)(local_860 + 0x10);
      *pdVar10 = 0.0;
      pdVar10[1] = 0.0;
      dVar34 = 0.0;
      dVar44 = 1.0;
    }
    else {
      if ((uVar18 & 1) == 0) {
        auVar38._0_8_ = FUN_149849e46(local_828,local_898,uVar33);
        auVar38._8_8_ = extraout_XMM0_Qb_00;
      }
      else {
        uVar9 = 4;
        if (uVar13 < 4) {
          uVar9 = (ulonglong)uVar13;
        }
        lVar1 = local_880 + (ulonglong)uVar33 * 4;
        auVar37 = insertps(ZEXT416(*(uint *)(local_880 + (ulonglong)uVar33 * 4)),
                           *(undefined4 *)(lVar1 + uVar9 * 4),0x1c);
        auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)(uint)((int)uVar9 << 3) + lVar1),0x28)
        ;
        auVar38 = insertps(auVar37,ZEXT416((uint)SQRT(ABS(((1.0 - auVar37._0_4_ * auVar37._0_4_) -
                                                          auVar37._4_4_ * auVar37._4_4_) -
                                                          auVar37._8_4_ * auVar37._8_4_))),0x30);
      }
      pdVar10 = *(double **)(lVar11 + 0x10);
      *pdVar10 = (double)auVar38._0_4_;
      pdVar10[1] = (double)auVar38._4_4_;
      dVar34 = (double)auVar38._8_4_;
      dVar44 = (double)auVar38._12_4_;
    }
    pdVar10[2] = dVar34;
    pdVar10[3] = dVar44;
    if (local_848 == 0) {
      lVar1 = *(longlong *)(lVar11 + 0x10);
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    else {
      if ((local_89c & 1) == 0) {
        uVar35 = FUN_14984a24b(plVar4,uVar22,&local_170,&local_120);
        fVar43 = (float)((ulonglong)uVar35 >> 0x20);
        fVar45 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        uVar36 = FUN_14984a24b(plVar4,uVar22,&local_170,&local_100);
        auVar47._0_4_ = fVar2 * (float)uVar36 + ((float)uVar35 - fVar2 * (float)uVar35);
        auVar47._4_4_ = fVar2 * (float)((ulonglong)uVar36 >> 0x20) + (fVar43 - fVar2 * fVar43);
        auVar47._8_4_ =
             fVar2 * (float)extraout_XMM0_Qb_02 +
             ((float)extraout_XMM0_Qb_01 - fVar2 * (float)extraout_XMM0_Qb_01);
        auVar47._12_4_ =
             fVar2 * (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) + (fVar45 - fVar2 * fVar45);
      }
      else {
        auVar47 = *(undefined1 (*) [16])(puVar23 + (ulonglong)uVar22 * 0xc);
      }
      lVar1 = *(longlong *)(lVar11 + 0x10);
      auVar39._0_8_ = (double)auVar47._0_4_;
      auVar39._8_8_ = (double)auVar47._4_4_;
      *(undefined1 (*) [16])(lVar1 + 0x20) = auVar39;
      auVar37 = insertps(auVar39,auVar47,0x8e);
      *(double *)(lVar1 + 0x30) = (double)auVar37._0_4_;
      *(double *)(lVar1 + 0x38) = (double)auVar37._4_4_;
    }
    if (local_844 == 0) {
      auVar55 = blendps(auVar55,ZEXT816(0),8);
      uVar35 = CONCAT44(fVar56,fVar56);
    }
    else {
      if ((uVar6 & 1) == 0) {
        uVar35 = FUN_14984a439(plVar4,uVar8,&local_168,&local_e0);
        fVar56 = (float)((ulonglong)uVar35 >> 0x20);
        fVar43 = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        uVar36 = FUN_14984a439(plVar4,uVar8,&local_168,&local_c0);
        auVar53._0_4_ = fVar2 * (float)uVar36 + ((float)uVar35 - fVar2 * (float)uVar35);
        auVar53._4_4_ = fVar2 * (float)((ulonglong)uVar36 >> 0x20) + (fVar56 - fVar2 * fVar56);
        auVar53._8_4_ =
             fVar2 * (float)extraout_XMM0_Qb_04 +
             ((float)extraout_XMM0_Qb_03 - fVar2 * (float)extraout_XMM0_Qb_03);
        auVar53._12_4_ =
             fVar2 * (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20) + (fVar43 - fVar2 * fVar43);
      }
      else {
        auVar53 = *(undefined1 (*) [16])(puVar30 + uVar8 * 0xc);
      }
      uVar35 = auVar53._0_8_;
      auVar55 = blendps(ZEXT816(0),auVar53,7);
    }
    lVar11 = *(longlong *)(lVar11 + 0x10);
    *(double *)(lVar11 + 0x40) = (double)(float)uVar35;
    *(double *)(lVar11 + 0x48) = (double)(float)((ulonglong)uVar35 >> 0x20);
    fVar56 = auVar55._8_4_;
    fVar2 = auVar55._12_4_;
  }
  *(double *)(lVar11 + 0x50) = (double)fVar56;
  *(double *)(lVar11 + 0x58) = (double)fVar2;
LAB_14984aadb:
  if ((local_90 ^ (ulonglong)auStack_8c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14984b152 FUN_14984b152 body=156 status=ok
// SIG undefined FUN_14984b152(void)

void FUN_14984b152(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  *(byte *)((longlong)param_1 + 0x1f) = *(byte *)(param_2 + 0x1c) & 1;
  *(bool *)(param_1 + 4) = 1 < *(uint *)(param_2 + 0x20);
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(byte *)(param_2 + 0x1f) & 0x40) >> 6;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  bVar2 = iVar1 != 0 & bVar2;
  fVar3 = 0.0;
  if (1 < iVar1 + (uint)bVar2) {
    fVar3 = (float)((iVar1 + (uint)bVar2) - 1) / *(float *)(param_2 + 0x18);
  }
  *(float *)(param_1 + 3) = fVar3;
  if (*(ushort *)(param_2 + 0xc) < 8) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x1e) & 1;
  }
  *(byte *)((longlong)param_1 + 0x21) = bVar2;
  return;
}



// FUNCTION 14984b1ee FUN_14984b1ee body=906 status=ok
// SIG undefined FUN_14984b1ee(void)

void FUN_14984b1ee(longlong *param_1,float param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    fVar18 = SUB164(*(undefined1 (*) [16])(param_1 + 3),0);
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (fVar18 <= param_2) {
      param_2 = fVar18;
    }
    if (((*(float *)((longlong)param_1 + 0x34) != param_2) ||
        (NAN(*(float *)((longlong)param_1 + 0x34)) || NAN(param_2))) ||
       (*(byte *)((longlong)param_1 + 0x32) != param_3)) {
      *(float *)((longlong)param_1 + 0x34) = param_2;
      uVar10 = *(uint *)(lVar3 + 0x14) - 1;
      param_2 = param_2 * *(float *)(lVar3 + 0x18);
      uVar16 = (ulonglong)param_2;
      uVar15 = (uint)uVar16 + 1;
      if (SUB161(*(undefined1 (*) [16])(param_1 + 3),9) == '\0') {
        if (uVar10 < uVar15) {
          uVar15 = uVar10;
        }
      }
      else if (uVar10 < (uint)uVar16) {
        param_2 = 0.0;
        uVar16 = 0;
        uVar15 = 0;
      }
      else if (*(uint *)(lVar3 + 0x14) <= uVar15) {
        uVar15 = 0;
      }
      uVar10 = (uint)uVar16;
      fVar18 = (float)(uVar16 & 0xffffffff);
      lVar1 = lVar3 + 0x20;
      fVar20 = 0.0;
      if (param_3 != 1) {
        fVar20 = param_2 - fVar18;
      }
      *(float *)(param_1 + 0xf) = fVar20;
      *(char *)((longlong)param_1 + 0x32) = (char)param_3;
      piVar13 = (int *)((ulonglong)*(uint *)(lVar3 + 0x44) + lVar1);
      if (*(uint *)(lVar3 + 0x20) == 1) {
        piVar14 = piVar13;
        if ((*(uint *)(lVar3 + 0x1c) >> 10 & 1) != 0) {
          bVar6 = 0x1f - (char)uVar16;
          uVar10 = (uint)piVar13[4] >> (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          uVar11 = uVar10 << bVar6;
          uVar5 = 0x20;
          iVar7 = 0x20;
          if ((uVar10 << bVar6 != 0) && (iVar7 = 0, uVar11 != 0)) {
            for (; (uVar11 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
            }
          }
          uVar10 = 0x1f - iVar7;
          uVar15 = piVar13[4] & 0xffffffffU >> ((byte)uVar15 & 0x1f);
          if (uVar15 != 0) {
            uVar5 = 0x1f;
            if (uVar15 != 0) {
              for (; uVar15 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            uVar5 = uVar5 ^ 0x1f;
          }
          fVar19 = 0.0;
          if ((uVar5 - uVar10 != 0) && (fVar19 = (fVar20 + fVar18) - (float)uVar10, uVar10 <= uVar5)
             ) {
            fVar19 = fVar19 / (float)(uVar5 - uVar10);
          }
          *(float *)(param_1 + 0xf) = fVar19;
          uVar10 = POPCOUNT(~(0xffffffffU >> ((byte)uVar10 & 0x1f)) & piVar13[4]);
          uVar15 = POPCOUNT(~(0xffffffffU >> ((byte)uVar5 & 0x1f)) & piVar13[4]);
        }
      }
      else {
        lVar9 = lVar3 + 0x54;
        uVar17 = (ulonglong)*(uint *)(lVar3 + 0x14) / (ulonglong)*(uint *)(lVar3 + 0x20);
        uVar16 = (ulonglong)((int)((uVar16 & 0xffffffff) / uVar17) - 1);
        if (uVar10 < (uint)uVar17) {
          uVar16 = 0;
        }
        if ((uint)uVar16 < 0xfffffffc) {
          uVar5 = -(uint)uVar16;
          lVar12 = 0;
          do {
            uVar11 = *(uint *)(lVar9 + uVar16 * 4 + lVar12 * 4);
            if (uVar10 < uVar11) {
              uVar16 = (ulonglong)~uVar5;
              uVar4 = -uVar5;
              if (uVar15 < uVar11) {
                uVar4 = ~uVar5;
              }
              if (uVar15 == 0) {
                uVar4 = 0;
              }
              uVar17 = (ulonglong)uVar4;
              goto LAB_14984b469;
            }
            uVar5 = uVar5 - 1;
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 != 4);
        }
        uVar17 = 0;
        uVar16 = 0;
LAB_14984b469:
        iVar7 = *(int *)(lVar9 + uVar16 * 4);
        uVar10 = uVar10 - iVar7;
        iVar2 = *(int *)(lVar9 + uVar17 * 4);
        uVar15 = uVar15 - iVar2;
        if ((*(uint *)(lVar3 + 0x1c) >> 10 & 1) == 0) {
          piVar14 = piVar13 + uVar17 * 4;
          piVar13 = piVar13 + uVar16 * 4;
        }
        else {
          bVar6 = 0x1f - (char)uVar10;
          uVar10 = (uint)piVar13[uVar16 * 5 + 4] >> (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          uVar11 = uVar10 << bVar6;
          uVar5 = 0x20;
          iVar8 = 0x20;
          if ((uVar10 << bVar6 != 0) && (iVar8 = 0, uVar11 != 0)) {
            for (; (uVar11 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
            }
          }
          uVar10 = piVar13[uVar17 * 5 + 4] & 0xffffffffU >> ((byte)uVar15 & 0x1f);
          if (uVar10 != 0) {
            uVar5 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            uVar5 = uVar5 ^ 0x1f;
          }
          piVar14 = piVar13 + uVar17 * 5;
          uVar10 = iVar7 + (0x1f - iVar8);
          uVar15 = iVar2 + uVar5;
          fVar19 = 0.0;
          uVar11 = uVar15 - uVar10;
          if ((uVar11 != 0) && (fVar19 = (fVar20 + fVar18) - (float)uVar10, uVar10 <= uVar15)) {
            fVar19 = fVar19 / (float)uVar11;
          }
          *(float *)(param_1 + 0xf) = fVar19;
          uVar10 = POPCOUNT(~(0xffffffffU >> ((byte)(0x1f - iVar8) & 0x1f)) &
                            (piVar13 + uVar16 * 5)[4]);
          uVar15 = POPCOUNT(~(0xffffffffU >> ((byte)uVar5 & 0x1f)) & piVar14[4]);
          piVar13 = piVar13 + uVar16 * 5;
        }
      }
      *(bool *)((longlong)param_1 + 0x33) = piVar13 == piVar14;
      lVar9 = (ulonglong)(uint)piVar13[3] + lVar1;
      uVar16 = (ulonglong)*(uint *)(lVar3 + 0x24) + lVar9 + 1 & 0xfffffffffffffffe;
      uVar17 = (ulonglong)(*(uint *)(lVar3 + 0x24) * 6);
      if (*(uint *)(lVar3 + 0x20) < 2) {
        uVar17 = 0;
      }
      uVar17 = uVar17 + uVar16 + 3 & 0xfffffffffffffffc;
      param_1[8] = lVar9;
      param_1[10] = uVar16;
      param_1[0xc] = uVar17;
      if (piVar13 != piVar14) {
        lVar9 = (ulonglong)(uint)piVar14[3] + lVar1;
        uVar16 = (ulonglong)*(uint *)(lVar3 + 0x24) + lVar9 + 1 & 0xfffffffffffffffe;
        uVar17 = 0;
        if (1 < *(uint *)(lVar3 + 0x20)) {
          uVar17 = (ulonglong)(*(uint *)(lVar3 + 0x24) * 6);
        }
        uVar17 = uVar16 + uVar17 + 3 & 0xfffffffffffffffc;
      }
      param_1[9] = lVar9;
      param_1[0xb] = uVar16;
      param_1[0xd] = uVar17;
      *(uint *)(param_1 + 0xe) = uVar10 * *piVar13;
      *(uint *)((longlong)param_1 + 0x74) = uVar15 * *piVar14;
      *(int *)(param_1 + 7) = (int)piVar13 - (int)lVar3;
      *(int *)((longlong)param_1 + 0x3c) = (int)piVar14 - (int)lVar3;
    }
  }
  return;
}



// FUNCTION 14984b578 FUN_14984b578 body=5255 status=ok
// SIG undefined FUN_14984b578(void)

void FUN_14984b578(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  void *_Src;
  undefined1 (*pauVar21) [16];
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_a58 [39];
  char local_a31;
  uint local_a30;
  uint local_a2c;
  ulonglong local_a28;
  longlong local_a20;
  longlong *local_a18;
  ulonglong local_a10;
  undefined8 local_a08 [64];
  undefined8 local_808;
  undefined1 local_7f8 [512];
  undefined8 local_5f8;
  undefined1 local_5e8 [512];
  undefined8 local_3e8;
  undefined8 auStack_278 [64];
  undefined8 local_78;
  uint local_70;
  void *local_68;
  undefined1 (*local_60) [16];
  undefined1 (*local_58) [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a58;
  lVar29 = *param_1;
  uVar16 = *(uint *)(lVar29 + 0x10);
  if (((ulonglong)uVar16 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar31 = uVar16 + 0xf >> 4;
    uVar28 = uVar16 + 0xf & 0xfffffff0;
    local_a30 = uVar31 - 1;
    local_a2c = 0xaaaaaaaa;
    if (uVar16 != uVar28) {
      local_a2c = ~(0xffffffffU >> (((char)uVar16 - (char)uVar28) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a31 = *(char *)((longlong)param_1 + 0x1f);
    local_a20 = (ulonglong)*(uint *)(lVar29 + 0x48) + lVar29 + 0x20;
    uVar23 = 0;
    local_78 = 0;
    local_70 = *(uint *)(lVar29 + 0x34);
    _Src = (void *)((ulonglong)*(uint *)(lVar29 + 0x4c) + lVar29 + 0x20);
    local_60 = (undefined1 (*) [16])((longlong)_Src + (ulonglong)(local_70 << 4));
    local_58 = (undefined1 (*) [16])(*local_60 + (uint)(*(int *)(lVar29 + 0x38) * 0xc));
    local_808 = 0;
    local_5f8 = 0;
    local_3e8 = 0;
    local_a10 = (ulonglong)uVar16;
    local_68 = _Src;
    FUN_14984ca00(local_a08,param_1);
    uVar27 = (ulonglong)local_a30;
    uVar19 = (ulonglong)(uVar31 + (uVar31 == 0));
    uVar16 = 3;
    do {
      uVar28 = 0xaaaaaaaa;
      if (uVar23 == uVar27) {
        uVar28 = local_a2c;
      }
      uVar28 = uVar28 & 0xaaaaaaaaU - *(int *)(local_a20 + uVar23 * 4);
      uVar22 = uVar28;
      uVar20 = uVar16;
      while (uVar28 != 0) {
        if ((uVar22 & 0xaa000000) != 0) {
          if ((int)uVar22 < 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar20 - 3) * 6);
            if (uVar6 != 0xffff) {
              lVar29 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar20 - 3) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar29);
              dVar3 = pdVar1[1];
              pdVar2 = (double *)(*param_2 + 0x10 + lVar29);
              dVar14 = *pdVar2;
              dVar15 = pdVar2[1];
              lVar29 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar2 = (double *)(lVar29 + uVar18);
              *pdVar2 = (double)(float)*pdVar1;
              pdVar2[1] = (double)(float)dVar3;
              pdVar1 = (double *)(lVar29 + 0x10 + uVar18);
              *pdVar1 = (double)(float)dVar14;
              pdVar1[1] = (double)(float)dVar15;
            }
          }
          if ((uVar22 >> 0x1d & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar20 - 2) * 6);
            if (uVar6 != 0xffff) {
              lVar29 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar20 - 2) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar29);
              dVar3 = pdVar1[1];
              pdVar2 = (double *)(*param_2 + 0x10 + lVar29);
              dVar14 = *pdVar2;
              dVar15 = pdVar2[1];
              lVar29 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar2 = (double *)(lVar29 + uVar18);
              *pdVar2 = (double)(float)*pdVar1;
              pdVar2[1] = (double)(float)dVar3;
              pdVar1 = (double *)(lVar29 + 0x10 + uVar18);
              *pdVar1 = (double)(float)dVar14;
              pdVar1[1] = (double)(float)dVar15;
            }
          }
          if ((uVar22 >> 0x1b & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar20 - 1) * 6);
            if (uVar6 != 0xffff) {
              lVar29 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar20 - 1) * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar29);
              dVar3 = pdVar1[1];
              pdVar2 = (double *)(*param_2 + 0x10 + lVar29);
              dVar14 = *pdVar2;
              dVar15 = pdVar2[1];
              lVar29 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar2 = (double *)(lVar29 + uVar18);
              *pdVar2 = (double)(float)*pdVar1;
              pdVar2[1] = (double)(float)dVar3;
              pdVar1 = (double *)(lVar29 + 0x10 + uVar18);
              *pdVar1 = (double)(float)dVar14;
              pdVar1[1] = (double)(float)dVar15;
            }
          }
          if ((uVar22 >> 0x19 & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)uVar20 * 6);
            if (uVar6 != 0xffff) {
              lVar29 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar20 * 4) * 0x60;
              pdVar1 = (double *)(*param_2 + lVar29);
              dVar3 = pdVar1[1];
              pdVar2 = (double *)(*param_2 + 0x10 + lVar29);
              dVar14 = *pdVar2;
              dVar15 = pdVar2[1];
              lVar29 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar2 = (double *)(lVar29 + uVar18);
              *pdVar2 = (double)(float)*pdVar1;
              pdVar2[1] = (double)(float)dVar3;
              pdVar1 = (double *)(lVar29 + 0x10 + uVar18);
              *pdVar1 = (double)(float)dVar14;
              pdVar1[1] = (double)(float)dVar15;
            }
          }
        }
        uVar20 = uVar20 + 4;
        uVar28 = uVar22 & 0xffffff;
        uVar22 = uVar22 << 8;
      }
      uVar23 = uVar23 + 1;
      uVar16 = uVar16 + 0x10;
    } while (uVar23 != uVar19);
    uVar16 = 0;
    uVar28 = 3;
    uVar23 = 0;
    local_a28 = (ulonglong)uVar31;
    local_a18 = param_1;
    do {
      uVar22 = *(uint *)(local_a20 + uVar23 * 4) & 0x55555555;
      uVar20 = uVar28;
      uVar31 = uVar22;
      if ((local_70 != 0) && ((uint)local_78 - uVar16 < 0x10)) {
        uVar16 = 0x10;
        if (local_70 < 0x10) {
          uVar16 = local_70;
        }
        local_70 = local_70 - uVar16;
        uVar17 = (uint)local_78 & 0x1f;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + uVar16);
        lVar29 = (ulonglong)(uVar16 - 1) * 0x10;
        memcpy((void *)((longlong)auStack_278 + (ulonglong)(uVar17 << 4)),_Src,lVar29 + 0x10);
        _Src = (void *)((longlong)_Src + lVar29 + 0x10);
        local_68 = _Src;
        uVar16 = local_78._4_4_;
      }
      while (uVar31 != 0) {
        if ((uVar22 & 0x55000000) != 0) {
          uVar31 = uVar16;
          if (uVar22 >> 0x1e != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar20 - 3) * 6);
            uVar31 = uVar16 + 1;
            if (uVar6 != 0xffff) {
              uVar18 = (ulonglong)((uVar16 & 0x1f) << 4);
              lVar29 = param_2[3];
              uVar26 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)auStack_278 + uVar18);
              uVar5 = *(undefined8 *)((longlong)auStack_278 + uVar18 + 8);
              pdVar1 = (double *)(lVar29 + uVar26);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar29 + 0x10 + uVar26);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
          uVar16 = uVar31;
          if ((uVar22 >> 0x1c & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar20 - 2) * 6);
            uVar16 = uVar31 + 1;
            if (uVar6 != 0xffff) {
              uVar18 = (ulonglong)((uVar31 & 0x1f) << 4);
              lVar29 = param_2[3];
              uVar26 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)auStack_278 + uVar18);
              uVar5 = *(undefined8 *)((longlong)auStack_278 + uVar18 + 8);
              pdVar1 = (double *)(lVar29 + uVar26);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar29 + 0x10 + uVar26);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
          uVar31 = uVar16;
          if ((uVar22 >> 0x1a & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar20 - 1) * 6);
            uVar31 = uVar16 + 1;
            if (uVar6 != 0xffff) {
              uVar18 = (ulonglong)((uVar16 & 0x1f) << 4);
              lVar29 = param_2[3];
              uVar26 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)auStack_278 + uVar18);
              uVar5 = *(undefined8 *)((longlong)auStack_278 + uVar18 + 8);
              pdVar1 = (double *)(lVar29 + uVar26);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar29 + 0x10 + uVar26);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
          uVar16 = uVar31;
          if ((uVar22 >> 0x18 & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)uVar20 * 6);
            uVar16 = uVar31 + 1;
            if (uVar6 != 0xffff) {
              uVar18 = (ulonglong)((uVar31 & 0x1f) << 4);
              lVar29 = param_2[3];
              uVar26 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)auStack_278 + uVar18);
              uVar5 = *(undefined8 *)((longlong)auStack_278 + uVar18 + 8);
              pdVar1 = (double *)(lVar29 + uVar26);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar29 + 0x10 + uVar26);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
        }
        uVar31 = uVar22 & 0xffffff;
        uVar22 = uVar22 << 8;
        uVar20 = uVar20 + 4;
      }
      local_78 = CONCAT44(uVar16,(uint)local_78);
      uVar31 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar31;
      uVar28 = uVar28 + 0x10;
    } while (uVar31 <= local_a30);
    lVar29 = local_a20 + local_a28 * 4;
    uVar16 = 3;
    uVar23 = 0;
    auVar40 = ZEXT816(0);
    do {
      uVar28 = 0xaaaaaaaa;
      if (uVar23 == uVar27) {
        uVar28 = local_a2c;
      }
      uVar28 = uVar28 & 0xaaaaaaaaU - *(int *)(lVar29 + uVar23 * 4);
      uVar31 = uVar28;
      uVar22 = uVar16;
      while (uVar28 != 0) {
        if ((uVar31 & 0xaa000000) != 0) {
          if ((int)uVar31 < 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 3) * 6);
            if (uVar6 != 0xffff) {
              lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar22 - 3) * 4) * 0x60;
              dVar3 = *(double *)(*param_2 + 0x30 + lVar24);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar24);
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              dVar14 = (double)(float)pdVar1[1];
              auVar41._8_4_ = SUB84(dVar14,0);
              auVar41._0_8_ = (double)(float)*pdVar1;
              auVar41._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
              *(undefined1 (*) [16])(lVar24 + 0x20 + uVar18) = auVar41;
              auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar18);
              *pdVar1 = (double)auVar41._0_4_;
              pdVar1[1] = (double)auVar41._4_4_;
            }
          }
          if ((uVar31 >> 0x1d & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 2) * 6);
            if (uVar6 != 0xffff) {
              lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar22 - 2) * 4) * 0x60;
              dVar3 = *(double *)(*param_2 + 0x30 + lVar24);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar24);
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              dVar14 = (double)(float)pdVar1[1];
              auVar7._8_4_ = SUB84(dVar14,0);
              auVar7._0_8_ = (double)(float)*pdVar1;
              auVar7._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
              *(undefined1 (*) [16])(lVar24 + 0x20 + uVar18) = auVar7;
              auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar18);
              *pdVar1 = (double)auVar41._0_4_;
              pdVar1[1] = (double)auVar41._4_4_;
            }
          }
          if ((uVar31 >> 0x1b & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 1) * 6);
            if (uVar6 != 0xffff) {
              lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar22 - 1) * 4) * 0x60;
              dVar3 = *(double *)(*param_2 + 0x30 + lVar24);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar24);
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              dVar14 = (double)(float)pdVar1[1];
              auVar8._8_4_ = SUB84(dVar14,0);
              auVar8._0_8_ = (double)(float)*pdVar1;
              auVar8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
              *(undefined1 (*) [16])(lVar24 + 0x20 + uVar18) = auVar8;
              auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar18);
              *pdVar1 = (double)auVar41._0_4_;
              pdVar1[1] = (double)auVar41._4_4_;
            }
          }
          if ((uVar31 >> 0x19 & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar22 * 6);
            if (uVar6 != 0xffff) {
              lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar22 * 4) * 0x60;
              dVar3 = *(double *)(*param_2 + 0x30 + lVar24);
              pdVar1 = (double *)(*param_2 + 0x20 + lVar24);
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              dVar14 = (double)(float)pdVar1[1];
              auVar9._8_4_ = SUB84(dVar14,0);
              auVar9._0_8_ = (double)(float)*pdVar1;
              auVar9._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
              *(undefined1 (*) [16])(lVar24 + 0x20 + uVar18) = auVar9;
              auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar18);
              *pdVar1 = (double)auVar41._0_4_;
              pdVar1[1] = (double)auVar41._4_4_;
            }
          }
        }
        uVar22 = uVar22 + 4;
        uVar28 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar23 = uVar23 + 1;
      uVar16 = uVar16 + 0x10;
    } while (uVar23 != uVar19);
    local_a28 = local_a28 * 4 + lVar29;
    uVar16 = 3;
    uVar23 = 0;
    do {
      uVar28 = *(uint *)(lVar29 + uVar23 * 4) & 0x55555555;
      uVar31 = uVar28;
      uVar22 = uVar16;
      while (uVar28 != 0) {
        if ((uVar31 & 0x55000000) != 0) {
          pauVar21 = local_60;
          if (uVar31 >> 0x1e != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 3) * 6);
            pauVar21 = (undefined1 (*) [16])(*local_60 + 0xc);
            if (uVar6 != 0xffff) {
              auVar40 = *local_60;
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar18);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              auVar32._0_8_ = (double)auVar40._0_4_;
              auVar32._8_8_ = (double)auVar40._4_4_;
              *(undefined1 (*) [16])(lVar24 + 0x30 + uVar18) = auVar32;
            }
          }
          pauVar25 = pauVar21;
          if ((uVar31 >> 0x1c & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 2) * 6);
            pauVar25 = (undefined1 (*) [16])(*pauVar21 + 0xc);
            if (uVar6 != 0xffff) {
              auVar40 = *pauVar21;
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar18);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              auVar33._0_8_ = (double)auVar40._0_4_;
              auVar33._8_8_ = (double)auVar40._4_4_;
              *(undefined1 (*) [16])(lVar24 + 0x30 + uVar18) = auVar33;
            }
          }
          pauVar21 = pauVar25;
          if ((uVar31 >> 0x1a & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 1) * 6);
            pauVar21 = (undefined1 (*) [16])(*pauVar25 + 0xc);
            if (uVar6 != 0xffff) {
              auVar40 = *pauVar25;
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar18);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              auVar34._0_8_ = (double)auVar40._0_4_;
              auVar34._8_8_ = (double)auVar40._4_4_;
              *(undefined1 (*) [16])(lVar24 + 0x30 + uVar18) = auVar34;
            }
          }
          local_60 = pauVar21;
          if ((uVar31 >> 0x18 & 1) != 0) {
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar22 * 6);
            local_60 = (undefined1 (*) [16])(*pauVar21 + 0xc);
            if (uVar6 != 0xffff) {
              auVar40 = *pauVar21;
              lVar24 = param_2[3];
              uVar18 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar18);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              auVar35._0_8_ = (double)auVar40._0_4_;
              auVar35._8_8_ = (double)auVar40._4_4_;
              *(undefined1 (*) [16])(lVar24 + 0x30 + uVar18) = auVar35;
            }
          }
        }
        uVar22 = uVar22 + 4;
        uVar28 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar23 = uVar23 + 1;
      uVar16 = uVar16 + 0x10;
    } while (uVar23 != uVar19);
    if (local_a31 == '\0') {
      lVar24 = 4;
      uVar27 = 0;
      do {
        if (*(ushort *)(param_2[2] + lVar24) != 0xffff) {
          lVar30 = (longlong)*(int *)(param_2[1] + uVar27 * 4) * 0x60;
          pdVar1 = (double *)(*param_2 + 0x40 + lVar30);
          auVar41 = blendps(ZEXT416((uint)(float)*(double *)(*param_2 + 0x50 + lVar30)),ZEXT816(0),
                            0xe);
          lVar30 = param_2[3];
          uVar23 = (ulonglong)((uint)*(ushort *)(param_2[2] + lVar24) * 0x60);
          dVar3 = (double)(float)pdVar1[1];
          auVar40._8_4_ = SUB84(dVar3,0);
          auVar40._0_8_ = (double)(float)*pdVar1;
          auVar40._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          *(undefined1 (*) [16])(lVar30 + 0x40 + uVar23) = auVar40;
          pdVar1 = (double *)(lVar30 + 0x50 + uVar23);
          *pdVar1 = (double)auVar41._0_4_;
          pdVar1[1] = (double)auVar41._4_4_;
        }
        uVar27 = uVar27 + 1;
        lVar24 = lVar24 + 6;
      } while (local_a10 != uVar27);
    }
    else {
      uVar16 = 3;
      uVar23 = 0;
      auVar40 = ZEXT816(0);
      do {
        uVar28 = 0xaaaaaaaa;
        if (uVar23 == uVar27) {
          uVar28 = local_a2c;
        }
        uVar28 = uVar28 & 0xaaaaaaaaU - *(int *)(local_a28 + uVar23 * 4);
        uVar31 = uVar28;
        uVar22 = uVar16;
        while (uVar28 != 0) {
          if ((uVar31 & 0xaa000000) != 0) {
            if ((int)uVar31 < 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 3) * 6);
              if (uVar6 != 0xffff) {
                lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar22 - 3) * 4) * 0x60;
                dVar3 = *(double *)(*param_2 + 0x50 + lVar24);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar24);
                lVar24 = param_2[3];
                uVar18 = (ulonglong)((uint)uVar6 * 0x60);
                dVar14 = (double)(float)pdVar1[1];
                auVar13._8_4_ = SUB84(dVar14,0);
                auVar13._0_8_ = (double)(float)*pdVar1;
                auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                *(undefined1 (*) [16])(lVar24 + 0x40 + uVar18) = auVar13;
                auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
                pdVar1 = (double *)(lVar24 + 0x50 + uVar18);
                *pdVar1 = (double)auVar41._0_4_;
                pdVar1[1] = (double)auVar41._4_4_;
              }
            }
            if ((uVar31 >> 0x1d & 1) != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 2) * 6);
              if (uVar6 != 0xffff) {
                lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar22 - 2) * 4) * 0x60;
                dVar3 = *(double *)(*param_2 + 0x50 + lVar24);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar24);
                lVar24 = param_2[3];
                uVar18 = (ulonglong)((uint)uVar6 * 0x60);
                dVar14 = (double)(float)pdVar1[1];
                auVar10._8_4_ = SUB84(dVar14,0);
                auVar10._0_8_ = (double)(float)*pdVar1;
                auVar10._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                *(undefined1 (*) [16])(lVar24 + 0x40 + uVar18) = auVar10;
                auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
                pdVar1 = (double *)(lVar24 + 0x50 + uVar18);
                *pdVar1 = (double)auVar41._0_4_;
                pdVar1[1] = (double)auVar41._4_4_;
              }
            }
            if ((uVar31 >> 0x1b & 1) != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 1) * 6);
              if (uVar6 != 0xffff) {
                lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)(uVar22 - 1) * 4) * 0x60;
                dVar3 = *(double *)(*param_2 + 0x50 + lVar24);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar24);
                lVar24 = param_2[3];
                uVar18 = (ulonglong)((uint)uVar6 * 0x60);
                dVar14 = (double)(float)pdVar1[1];
                auVar11._8_4_ = SUB84(dVar14,0);
                auVar11._0_8_ = (double)(float)*pdVar1;
                auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                *(undefined1 (*) [16])(lVar24 + 0x40 + uVar18) = auVar11;
                auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
                pdVar1 = (double *)(lVar24 + 0x50 + uVar18);
                *pdVar1 = (double)auVar41._0_4_;
                pdVar1[1] = (double)auVar41._4_4_;
              }
            }
            if ((uVar31 >> 0x19 & 1) != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar22 * 6);
              if (uVar6 != 0xffff) {
                lVar24 = (longlong)*(int *)(param_2[1] + (ulonglong)uVar22 * 4) * 0x60;
                dVar3 = *(double *)(*param_2 + 0x50 + lVar24);
                pdVar1 = (double *)(*param_2 + 0x40 + lVar24);
                lVar24 = param_2[3];
                uVar18 = (ulonglong)((uint)uVar6 * 0x60);
                dVar14 = (double)(float)pdVar1[1];
                auVar12._8_4_ = SUB84(dVar14,0);
                auVar12._0_8_ = (double)(float)*pdVar1;
                auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                *(undefined1 (*) [16])(lVar24 + 0x40 + uVar18) = auVar12;
                auVar41 = blendps(ZEXT416((uint)(float)dVar3),auVar40,0xe);
                pdVar1 = (double *)(lVar24 + 0x50 + uVar18);
                *pdVar1 = (double)auVar41._0_4_;
                pdVar1[1] = (double)auVar41._4_4_;
              }
            }
          }
          uVar22 = uVar22 + 4;
          uVar28 = uVar31 & 0xffffff;
          uVar31 = uVar31 << 8;
        }
        uVar23 = uVar23 + 1;
        uVar16 = uVar16 + 0x10;
      } while (uVar23 != uVar19);
      uVar16 = 3;
      uVar27 = 0;
      do {
        uVar28 = *(uint *)(local_a28 + uVar27 * 4) & 0x55555555;
        uVar31 = uVar28;
        uVar22 = uVar16;
        while (uVar28 != 0) {
          if ((uVar31 & 0x55000000) != 0) {
            pauVar21 = local_58;
            if (uVar31 >> 0x1e != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 3) * 6);
              pauVar21 = (undefined1 (*) [16])(*local_58 + 0xc);
              if (uVar6 != 0xffff) {
                auVar40 = *local_58;
                lVar24 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar24 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                auVar36._0_8_ = (double)auVar40._0_4_;
                auVar36._8_8_ = (double)auVar40._4_4_;
                *(undefined1 (*) [16])(lVar24 + 0x50 + uVar23) = auVar36;
              }
            }
            pauVar25 = pauVar21;
            if ((uVar31 >> 0x1c & 1) != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 2) * 6);
              pauVar25 = (undefined1 (*) [16])(*pauVar21 + 0xc);
              if (uVar6 != 0xffff) {
                auVar40 = *pauVar21;
                lVar24 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar24 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                auVar37._0_8_ = (double)auVar40._0_4_;
                auVar37._8_8_ = (double)auVar40._4_4_;
                *(undefined1 (*) [16])(lVar24 + 0x50 + uVar23) = auVar37;
              }
            }
            pauVar21 = pauVar25;
            if ((uVar31 >> 0x1a & 1) != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 1) * 6);
              pauVar21 = (undefined1 (*) [16])(*pauVar25 + 0xc);
              if (uVar6 != 0xffff) {
                auVar40 = *pauVar25;
                lVar24 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar24 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                auVar38._0_8_ = (double)auVar40._0_4_;
                auVar38._8_8_ = (double)auVar40._4_4_;
                *(undefined1 (*) [16])(lVar24 + 0x50 + uVar23) = auVar38;
              }
            }
            local_58 = pauVar21;
            if ((uVar31 >> 0x18 & 1) != 0) {
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar22 * 6);
              local_58 = (undefined1 (*) [16])(*pauVar21 + 0xc);
              if (uVar6 != 0xffff) {
                auVar40 = *pauVar21;
                lVar24 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar24 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                auVar39._0_8_ = (double)auVar40._0_4_;
                auVar39._8_8_ = (double)auVar40._4_4_;
                *(undefined1 (*) [16])(lVar24 + 0x50 + uVar23) = auVar39;
              }
            }
          }
          uVar22 = uVar22 + 4;
          uVar28 = uVar31 & 0xffffff;
          uVar31 = uVar31 << 8;
        }
        uVar27 = uVar27 + 1;
        uVar16 = uVar16 + 0x10;
      } while (uVar27 != uVar19);
    }
    uVar27 = 0;
    uVar16 = 3;
    do {
      uVar28 = *(uint *)(local_a20 + uVar27 * 4) & 0xaaaaaaaa;
      uVar31 = uVar28;
      uVar22 = uVar16;
      while (uVar28 != 0) {
        if ((uVar31 & 0xaa000000) != 0) {
          FUN_14984cb62(local_a08,local_a18);
          if ((int)uVar31 < 0) {
            uVar28 = local_808._4_4_;
            local_808 = CONCAT44(local_808._4_4_ + 1,(undefined4)local_808);
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar22 - 3) * 6);
            if (uVar6 != 0xffff) {
              uVar23 = (ulonglong)((uVar28 & 7) << 4);
              lVar24 = param_2[3];
              uVar19 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)local_a08 + uVar23);
              uVar5 = *(undefined8 *)((longlong)local_a08 + uVar23 + 8);
              pdVar1 = (double *)(lVar24 + uVar19);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar24 + 0x10 + uVar19);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
          if ((uVar31 >> 0x1d & 1) != 0) {
            uVar28 = local_808._4_4_;
            local_808 = CONCAT44(local_808._4_4_ + 1,(undefined4)local_808);
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar22 - 2) * 6);
            if (uVar6 != 0xffff) {
              uVar23 = (ulonglong)((uVar28 & 7) << 4);
              lVar24 = param_2[3];
              uVar19 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)local_a08 + uVar23);
              uVar5 = *(undefined8 *)((longlong)local_a08 + uVar23 + 8);
              pdVar1 = (double *)(lVar24 + uVar19);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar24 + 0x10 + uVar19);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
          if ((uVar31 >> 0x1b & 1) != 0) {
            uVar28 = local_808._4_4_;
            local_808 = CONCAT44(local_808._4_4_ + 1,(undefined4)local_808);
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)(uVar22 - 1) * 6);
            if (uVar6 != 0xffff) {
              uVar23 = (ulonglong)((uVar28 & 7) << 4);
              lVar24 = param_2[3];
              uVar19 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)local_a08 + uVar23);
              uVar5 = *(undefined8 *)((longlong)local_a08 + uVar23 + 8);
              pdVar1 = (double *)(lVar24 + uVar19);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar24 + 0x10 + uVar19);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
          if ((uVar31 >> 0x19 & 1) != 0) {
            uVar28 = local_808._4_4_;
            local_808 = CONCAT44(local_808._4_4_ + 1,(undefined4)local_808);
            uVar6 = *(ushort *)(param_2[2] + (ulonglong)uVar22 * 6);
            if (uVar6 != 0xffff) {
              uVar23 = (ulonglong)((uVar28 & 7) << 4);
              lVar24 = param_2[3];
              uVar19 = (ulonglong)((uint)uVar6 * 0x60);
              uVar4 = *(undefined8 *)((longlong)local_a08 + uVar23);
              uVar5 = *(undefined8 *)((longlong)local_a08 + uVar23 + 8);
              pdVar1 = (double *)(lVar24 + uVar19);
              *pdVar1 = (double)(float)uVar4;
              pdVar1[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
              pdVar1 = (double *)(lVar24 + 0x10 + uVar19);
              *pdVar1 = (double)(float)uVar5;
              pdVar1[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
            }
          }
        }
        uVar22 = uVar22 + 4;
        uVar28 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar28 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar28;
      uVar16 = uVar16 + 0x10;
    } while (uVar28 <= local_a30);
    uVar27 = 0;
    uVar16 = 3;
    do {
      uVar28 = *(uint *)(lVar29 + uVar27 * 4) & 0xaaaaaaaa;
      uVar31 = uVar28;
      uVar22 = uVar16;
      while (uVar28 != 0) {
        if ((uVar31 & 0xaa000000) != 0) {
          FUN_14984ceca(local_a08,local_a18);
          if ((int)uVar31 < 0) {
            uVar28 = local_5f8._4_4_;
            local_5f8 = CONCAT44(local_5f8._4_4_ + 1,(undefined4)local_5f8);
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 3) * 6);
            if (uVar6 != 0xffff) {
              auVar40 = *(undefined1 (*) [16])(local_7f8 + ((uVar28 & 7) << 4));
              lVar24 = param_2[3];
              uVar23 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
            }
          }
          if ((uVar31 >> 0x1d & 1) != 0) {
            uVar28 = local_5f8._4_4_;
            local_5f8 = CONCAT44(local_5f8._4_4_ + 1,(undefined4)local_5f8);
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 2) * 6);
            if (uVar6 != 0xffff) {
              auVar40 = *(undefined1 (*) [16])(local_7f8 + ((uVar28 & 7) << 4));
              lVar24 = param_2[3];
              uVar23 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
            }
          }
          if ((uVar31 >> 0x1b & 1) != 0) {
            uVar28 = local_5f8._4_4_;
            local_5f8 = CONCAT44(local_5f8._4_4_ + 1,(undefined4)local_5f8);
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)(uVar22 - 1) * 6);
            if (uVar6 != 0xffff) {
              auVar40 = *(undefined1 (*) [16])(local_7f8 + ((uVar28 & 7) << 4));
              lVar24 = param_2[3];
              uVar23 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
            }
          }
          if ((uVar31 >> 0x19 & 1) != 0) {
            uVar28 = local_5f8._4_4_;
            local_5f8 = CONCAT44(local_5f8._4_4_ + 1,(undefined4)local_5f8);
            uVar6 = *(ushort *)(param_2[2] + 2 + (ulonglong)uVar22 * 6);
            if (uVar6 != 0xffff) {
              auVar40 = *(undefined1 (*) [16])(local_7f8 + ((uVar28 & 7) << 4));
              lVar24 = param_2[3];
              uVar23 = (ulonglong)((uint)uVar6 * 0x60);
              pdVar1 = (double *)(lVar24 + 0x20 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
              auVar40 = insertps(auVar40,auVar40,0x8e);
              pdVar1 = (double *)(lVar24 + 0x30 + uVar23);
              *pdVar1 = (double)auVar40._0_4_;
              pdVar1[1] = (double)auVar40._4_4_;
            }
          }
        }
        uVar22 = uVar22 + 4;
        uVar28 = uVar31 & 0xffffff;
        uVar31 = uVar31 << 8;
      }
      uVar28 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar28;
      uVar16 = uVar16 + 0x10;
    } while (uVar28 <= local_a30);
    if (local_a31 != '\0') {
      uVar27 = 0;
      uVar16 = 3;
      do {
        uVar28 = *(uint *)(local_a28 + uVar27 * 4) & 0xaaaaaaaa;
        uVar31 = uVar28;
        uVar22 = uVar16;
        while (uVar28 != 0) {
          if ((uVar31 & 0xaa000000) != 0) {
            FUN_14984d1ea(local_a08,local_a18);
            if ((int)uVar31 < 0) {
              uVar28 = local_3e8._4_4_;
              local_3e8 = CONCAT44(local_3e8._4_4_ + 1,(undefined4)local_3e8);
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 3) * 6);
              if (uVar6 != 0xffff) {
                auVar40 = *(undefined1 (*) [16])(local_5e8 + ((uVar28 & 7) << 4));
                lVar29 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar29 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                pdVar1 = (double *)(lVar29 + 0x50 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
              }
            }
            if ((uVar31 >> 0x1d & 1) != 0) {
              uVar28 = local_3e8._4_4_;
              local_3e8 = CONCAT44(local_3e8._4_4_ + 1,(undefined4)local_3e8);
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 2) * 6);
              if (uVar6 != 0xffff) {
                auVar40 = *(undefined1 (*) [16])(local_5e8 + ((uVar28 & 7) << 4));
                lVar29 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar29 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                pdVar1 = (double *)(lVar29 + 0x50 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
              }
            }
            if ((uVar31 >> 0x1b & 1) != 0) {
              uVar28 = local_3e8._4_4_;
              local_3e8 = CONCAT44(local_3e8._4_4_ + 1,(undefined4)local_3e8);
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)(uVar22 - 1) * 6);
              if (uVar6 != 0xffff) {
                auVar40 = *(undefined1 (*) [16])(local_5e8 + ((uVar28 & 7) << 4));
                lVar29 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar29 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                pdVar1 = (double *)(lVar29 + 0x50 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
              }
            }
            if ((uVar31 >> 0x19 & 1) != 0) {
              uVar28 = local_3e8._4_4_;
              local_3e8 = CONCAT44(local_3e8._4_4_ + 1,(undefined4)local_3e8);
              uVar6 = *(ushort *)(param_2[2] + 4 + (ulonglong)uVar22 * 6);
              if (uVar6 != 0xffff) {
                auVar40 = *(undefined1 (*) [16])(local_5e8 + ((uVar28 & 7) << 4));
                lVar29 = param_2[3];
                uVar23 = (ulonglong)((uint)uVar6 * 0x60);
                pdVar1 = (double *)(lVar29 + 0x40 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
                auVar40 = insertps(auVar40,auVar40,0x8e);
                pdVar1 = (double *)(lVar29 + 0x50 + uVar23);
                *pdVar1 = (double)auVar40._0_4_;
                pdVar1[1] = (double)auVar40._4_4_;
              }
            }
          }
          uVar22 = uVar22 + 4;
          uVar28 = uVar31 & 0xffffff;
          uVar31 = uVar31 << 8;
        }
        uVar28 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar28;
        uVar16 = uVar16 + 0x10;
      } while (uVar28 <= local_a30);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14984ca00 FUN_14984ca00 body=354 status=ok
// SIG undefined FUN_14984ca00(void)

void FUN_14984ca00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 7);
  uVar3 = *(uint *)((longlong)param_2 + 0x3c);
  lVar5 = param_2[0xc];
  lVar6 = param_2[0xd];
  lVar1 = lVar4 + 0x20 + (ulonglong)*(uint *)(lVar4 + 0x50);
  *(longlong *)(param_1 + 0x6b0) = lVar1;
  lVar7 = param_2[8];
  lVar8 = param_2[10];
  lVar11 = param_2[0xe];
  *(longlong *)(param_1 + 0x6c8) = lVar7;
  *(longlong *)(param_1 + 0x6d0) = lVar8;
  *(longlong *)(param_1 + 0x6d8) = lVar5;
  *(int *)(param_1 + 0x6e0) = (int)lVar11;
  lVar9 = param_2[9];
  lVar10 = param_2[0xb];
  iVar13 = *(int *)((longlong)param_2 + 0x74);
  *(longlong *)(param_1 + 0x6e8) = lVar9;
  *(longlong *)(param_1 + 0x6f0) = lVar10;
  *(longlong *)(param_1 + 0x6f8) = lVar6;
  *(int *)(param_1 + 0x700) = iVar13;
  *(longlong *)(param_1 + 0x6b8) = lVar1;
  *(longlong *)(param_1 + 0x708) = lVar7;
  *(longlong *)(param_1 + 0x728) = lVar9;
  *(longlong *)(param_1 + 0x710) = lVar8;
  *(longlong *)(param_1 + 0x730) = lVar10;
  *(longlong *)(param_1 + 0x718) = lVar5;
  *(longlong *)(param_1 + 0x738) = lVar6;
  iVar12 = (int)lVar11 + *(int *)((ulonglong)uVar2 + 4 + lVar4);
  iVar13 = iVar13 + *(int *)((ulonglong)uVar3 + 4 + lVar4);
  *(int *)(param_1 + 0x720) = iVar12;
  *(int *)(param_1 + 0x740) = iVar13;
  if (*(char *)((longlong)param_2 + 0x1f) != '\0') {
    *(ulonglong *)(param_1 + 0x6c0) = lVar1 + (ulonglong)(uint)(*(int *)(lVar4 + 0x2c) * 0x18);
    *(ulonglong *)(param_1 + 0x748) = lVar7 + (ulonglong)*(uint *)(lVar4 + 0x2c);
    *(ulonglong *)(param_1 + 0x768) = lVar9 + (ulonglong)*(uint *)(lVar4 + 0x2c);
    *(ulonglong *)(param_1 + 0x750) = lVar8 + (ulonglong)(uint)(*(int *)(lVar4 + 0x2c) * 6);
    *(ulonglong *)(param_1 + 0x770) = lVar10 + (ulonglong)(uint)(*(int *)(lVar4 + 0x2c) * 6);
    *(longlong *)(param_1 + 0x758) = lVar5;
    *(longlong *)(param_1 + 0x778) = lVar6;
    *(int *)(param_1 + 0x760) = iVar12 + *(int *)(lVar4 + 8 + (ulonglong)uVar2);
    *(int *)(param_1 + 0x780) = iVar13 + *(int *)(lVar4 + 8 + (ulonglong)uVar3);
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar4 + 0x28);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar4 + 0x2c);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(lVar4 + 0x30);
  return;
}



// FUNCTION 14984cb62 FUN_14984cb62 body=736 status=ok
// SIG undefined FUN_14984cb62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14984cb62(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  
  uVar48 = *(uint *)(param_1 + 0x208);
  if (uVar48 != 0) {
    uVar2 = *(uint *)(param_1 + 0x200);
    if (uVar2 - *(int *)(param_1 + 0x204) < 4) {
      uVar50 = 4;
      if (uVar48 < 4) {
        uVar50 = uVar48;
      }
      *(uint *)(param_1 + 0x208) = uVar48 - uVar50;
      *(uint *)(param_1 + 0x200) = uVar2 + uVar50;
      fVar24 = *(float *)(param_2 + 0x78);
      FUN_14984ce42(param_1 + 0x630,uVar50,param_1 + 0x6c8);
      FUN_14984ce42(param_1 + 0x670,uVar50,param_1 + 0x6e8);
      fVar27 = *(float *)(param_1 + 0x630);
      fVar28 = *(float *)(param_1 + 0x634);
      fVar29 = *(float *)(param_1 + 0x638);
      fVar49 = *(float *)(param_1 + 0x63c);
      fVar36 = *(float *)(param_1 + 0x640);
      fVar37 = *(float *)(param_1 + 0x644);
      fVar41 = *(float *)(param_1 + 0x648);
      fVar51 = *(float *)(param_1 + 0x64c);
      fVar38 = *(float *)(param_1 + 0x650);
      fVar39 = *(float *)(param_1 + 0x654);
      fVar42 = *(float *)(param_1 + 0x658);
      fVar53 = *(float *)(param_1 + 0x65c);
      fVar40 = *(float *)(param_1 + 0x660);
      fVar43 = *(float *)(param_1 + 0x664);
      fVar55 = *(float *)(param_1 + 0x668);
      fVar7 = *(float *)(param_1 + 0x66c);
      auVar32._4_4_ = fVar36;
      auVar32._0_4_ = fVar27;
      auVar32._8_4_ = fVar38;
      auVar32._12_4_ = fVar40;
      auVar34._4_4_ = fVar37;
      auVar34._0_4_ = fVar28;
      auVar34._8_4_ = fVar39;
      auVar34._12_4_ = fVar43;
      auVar30._4_4_ = fVar41;
      auVar30._0_4_ = fVar29;
      auVar30._8_4_ = fVar42;
      auVar30._12_4_ = fVar55;
      auVar22._4_4_ = fVar51;
      auVar22._0_4_ = fVar49;
      auVar22._8_4_ = fVar53;
      auVar22._12_4_ = fVar7;
      fVar44 = *(float *)(param_1 + 0x670);
      fVar8 = *(float *)(param_1 + 0x674);
      fVar9 = *(float *)(param_1 + 0x678);
      fVar10 = *(float *)(param_1 + 0x67c);
      fVar45 = *(float *)(param_1 + 0x680);
      fVar11 = *(float *)(param_1 + 0x684);
      fVar12 = *(float *)(param_1 + 0x688);
      fVar13 = *(float *)(param_1 + 0x68c);
      fVar46 = *(float *)(param_1 + 0x690);
      fVar14 = *(float *)(param_1 + 0x694);
      fVar15 = *(float *)(param_1 + 0x698);
      fVar16 = *(float *)(param_1 + 0x69c);
      fVar47 = *(float *)(param_1 + 0x6a0);
      fVar17 = *(float *)(param_1 + 0x6a4);
      fVar18 = *(float *)(param_1 + 0x6a8);
      fVar19 = *(float *)(param_1 + 0x6ac);
      if ((fVar24 <= 0.0) || (1.0 <= fVar24)) {
        auVar23._4_4_ = -(uint)(0.0 < fVar24);
        auVar23._0_4_ = -(uint)(0.0 < fVar24);
        auVar23._8_4_ = -(uint)(0.0 < fVar24);
        auVar23._12_4_ = -(uint)(0.0 < fVar24);
        auVar5._4_4_ = fVar45;
        auVar5._0_4_ = fVar44;
        auVar5._8_4_ = fVar46;
        auVar5._12_4_ = fVar47;
        auVar33 = blendvps(auVar32,auVar5,auVar23);
        auVar3._4_4_ = fVar11;
        auVar3._0_4_ = fVar8;
        auVar3._8_4_ = fVar14;
        auVar3._12_4_ = fVar17;
        auVar35 = blendvps(auVar34,auVar3,auVar23);
        auVar4._4_4_ = fVar12;
        auVar4._0_4_ = fVar9;
        auVar4._8_4_ = fVar15;
        auVar4._12_4_ = fVar18;
        auVar31 = blendvps(auVar30,auVar4,auVar23);
        auVar6._4_4_ = fVar13;
        auVar6._0_4_ = fVar10;
        auVar6._8_4_ = fVar16;
        auVar6._12_4_ = fVar19;
        auVar26 = blendvps(auVar22,auVar6,auVar23);
      }
      else {
        uVar48 = (uint)(fVar49 * fVar10 + fVar29 * fVar9 + fVar28 * fVar8 + fVar27 * fVar44) &
                 0x80000000;
        uVar50 = (uint)(fVar51 * fVar13 + fVar41 * fVar12 + fVar37 * fVar11 + fVar36 * fVar45) &
                 0x80000000;
        uVar52 = (uint)(fVar53 * fVar16 + fVar42 * fVar15 + fVar39 * fVar14 + fVar38 * fVar46) &
                 0x80000000;
        uVar54 = (uint)(fVar7 * fVar19 + fVar55 * fVar18 + fVar43 * fVar17 + fVar40 * fVar47) &
                 0x80000000;
        fVar44 = (float)((uint)fVar44 ^ uVar48) * fVar24 + (fVar27 - fVar24 * fVar27);
        fVar45 = (float)((uint)fVar45 ^ uVar50) * fVar24 + (fVar36 - fVar24 * fVar36);
        fVar46 = (float)((uint)fVar46 ^ uVar52) * fVar24 + (fVar38 - fVar24 * fVar38);
        fVar47 = (float)((uint)fVar47 ^ uVar54) * fVar24 + (fVar40 - fVar24 * fVar40);
        fVar36 = (float)((uint)fVar8 ^ uVar48) * fVar24 + (fVar28 - fVar24 * fVar28);
        fVar37 = (float)((uint)fVar11 ^ uVar50) * fVar24 + (fVar37 - fVar24 * fVar37);
        fVar38 = (float)((uint)fVar14 ^ uVar52) * fVar24 + (fVar39 - fVar24 * fVar39);
        fVar39 = (float)((uint)fVar17 ^ uVar54) * fVar24 + (fVar43 - fVar24 * fVar43);
        fVar40 = (float)((uint)fVar9 ^ uVar48) * fVar24 + (fVar29 - fVar24 * fVar29);
        fVar41 = (float)((uint)fVar12 ^ uVar50) * fVar24 + (fVar41 - fVar24 * fVar41);
        fVar42 = (float)((uint)fVar15 ^ uVar52) * fVar24 + (fVar42 - fVar24 * fVar42);
        fVar43 = (float)((uint)fVar18 ^ uVar54) * fVar24 + (fVar55 - fVar24 * fVar55);
        fVar49 = (float)(uVar48 ^ (uint)fVar10) * fVar24 + (fVar49 - fVar24 * fVar49);
        fVar51 = (float)(uVar50 ^ (uint)fVar13) * fVar24 + (fVar51 - fVar24 * fVar51);
        fVar53 = (float)(uVar52 ^ (uint)fVar16) * fVar24 + (fVar53 - fVar24 * fVar53);
        fVar55 = (float)(uVar54 ^ (uint)fVar19) * fVar24 + (fVar7 - fVar24 * fVar7);
        auVar21._0_4_ = fVar40 * fVar40 + fVar36 * fVar36 + fVar44 * fVar44;
        auVar21._4_4_ = fVar41 * fVar41 + fVar37 * fVar37 + fVar45 * fVar45;
        auVar21._8_4_ = fVar42 * fVar42 + fVar38 * fVar38 + fVar46 * fVar46;
        auVar21._12_4_ = fVar43 * fVar43 + fVar39 * fVar39 + fVar47 * fVar47;
        auVar25._0_4_ = fVar49 * fVar49 + auVar21._0_4_;
        auVar25._4_4_ = fVar51 * fVar51 + auVar21._4_4_;
        auVar25._8_4_ = fVar53 * fVar53 + auVar21._8_4_;
        auVar25._12_4_ = fVar55 * fVar55 + auVar21._12_4_;
        auVar22 = sqrtps(auVar21,auVar25);
        auVar22 = divps(_DAT_1499314a0,auVar22);
        fVar24 = auVar22._0_4_;
        fVar27 = auVar22._4_4_;
        fVar28 = auVar22._8_4_;
        fVar29 = auVar22._12_4_;
        auVar26._0_4_ = fVar24 * fVar49;
        auVar26._4_4_ = fVar27 * fVar51;
        auVar26._8_4_ = fVar28 * fVar53;
        auVar26._12_4_ = fVar29 * fVar55;
        auVar33._4_4_ = fVar45 * fVar27;
        auVar33._0_4_ = fVar44 * fVar24;
        auVar33._8_4_ = fVar46 * fVar28;
        auVar33._12_4_ = fVar47 * fVar29;
        auVar35._4_4_ = fVar37 * fVar27;
        auVar35._0_4_ = fVar36 * fVar24;
        auVar35._8_4_ = fVar38 * fVar28;
        auVar35._12_4_ = fVar39 * fVar29;
        auVar31._4_4_ = fVar41 * fVar27;
        auVar31._0_4_ = fVar40 * fVar24;
        auVar31._8_4_ = fVar42 * fVar28;
        auVar31._12_4_ = fVar43 * fVar29;
      }
      uVar20 = (ulonglong)((uVar2 & 7) << 4);
      puVar1 = (undefined4 *)(param_1 + uVar20);
      *puVar1 = auVar33._0_4_;
      puVar1[1] = auVar35._0_4_;
      puVar1[2] = auVar31._0_4_;
      puVar1[3] = auVar26._0_4_;
      puVar1 = (undefined4 *)(param_1 + 0x10 + uVar20);
      *puVar1 = auVar33._4_4_;
      puVar1[1] = auVar35._4_4_;
      puVar1[2] = auVar31._4_4_;
      puVar1[3] = auVar26._4_4_;
      puVar1 = (undefined4 *)(param_1 + 0x20 + uVar20);
      *puVar1 = auVar33._8_4_;
      puVar1[1] = auVar35._8_4_;
      puVar1[2] = auVar31._8_4_;
      puVar1[3] = auVar26._8_4_;
      puVar1 = (undefined4 *)(param_1 + 0x30 + uVar20);
      *puVar1 = auVar33._12_4_;
      puVar1[1] = auVar35._12_4_;
      puVar1[2] = auVar31._12_4_;
      puVar1[3] = auVar26._12_4_;
    }
  }
  return;
}



// FUNCTION 14984ce42 FUN_14984ce42 body=135 status=ok
// SIG undefined FUN_14984ce42(void)

void FUN_14984ce42(ulonglong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  uVar8 = *(uint *)(param_3 + 0x18);
  bVar5 = (byte)uVar8 & 7;
  uVar6 = (ulonglong)param_2;
  do {
    uVar7 = (ulonglong)(uVar8 >> 3);
    uVar2 = *(ulonglong *)(lVar1 + uVar7);
    uVar3 = *(ulonglong *)(lVar1 + 4 + uVar7);
    uVar4 = *(ulonglong *)(lVar1 + 8 + uVar7);
    uVar7 = *(ulonglong *)(lVar1 + 0xc + uVar7);
    uVar8 = uVar8 + 0x80;
    *param_1 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                 (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                 (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
                uVar2 << 0x38) << bVar5) >> 0x20 |
               (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
               uVar3 << 0x38) << bVar5 & 0xffffffff00000000;
    param_1[1] = ((uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                   (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                   (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28
                  | uVar4 << 0x38) << bVar5) >> 0x20 |
                 (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                  (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                  (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                 | uVar7 << 0x38) << bVar5 & 0xffffffff00000000;
    param_1 = param_1 + 2;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  *(uint *)(param_3 + 0x18) = uVar8;
  return;
}



// FUNCTION 14984ceca FUN_14984ceca body=280 status=ok
// SIG undefined FUN_14984ceca(void)

void FUN_14984ceca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar6 = *(uint *)(param_1 + 0x418);
  if ((uVar6 != 0) && (uVar7 = *(uint *)(param_1 + 0x410), uVar7 - *(int *)(param_1 + 0x414) < 4)) {
    uVar15 = 4;
    if (uVar6 < 4) {
      uVar15 = uVar6;
    }
    *(uint *)(param_1 + 0x418) = uVar6 - uVar15;
    *(uint *)(param_1 + 0x410) = uVar7 + uVar15;
    plVar1 = (longlong *)(param_1 + 0x6b8);
    FUN_14984cfe2(param_2,param_1 + 0x630,uVar15,plVar1,param_1 + 0x708);
    FUN_14984cfe2(param_2,param_1 + 0x670,uVar15,plVar1,param_1 + 0x728);
    fVar5 = *(float *)(param_2 + 0x78);
    uVar14 = 0;
    do {
      pfVar4 = (float *)(param_1 + 0x630 + uVar14);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar2 = (float *)(param_1 + 0x670 + uVar14);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      pfVar3 = (float *)((ulonglong)((uVar7 & 7) << 4) + param_1 + 0x210 + uVar14);
      *pfVar3 = *pfVar2 * fVar5 + (*pfVar4 - fVar5 * *pfVar4);
      pfVar3[1] = fVar11 * fVar5 + (fVar8 - fVar5 * fVar8);
      pfVar3[2] = fVar12 * fVar5 + (fVar9 - fVar5 * fVar9);
      pfVar3[3] = fVar13 * fVar5 + (fVar10 - fVar5 * fVar10);
      uVar14 = uVar14 + 0x10;
    } while (uVar15 << 4 != uVar14);
    *plVar1 = *plVar1 + (ulonglong)(uVar15 * 0x18);
  }
  return;
}



// FUNCTION 14984cfe2 FUN_14984cfe2 body=520 status=ok
// SIG undefined FUN_14984cfe2(void)

void FUN_14984cfe2(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  lVar5 = param_5[2];
  lVar6 = *param_4;
  uVar15 = *(uint *)(param_5 + 3);
  pbVar13 = (byte *)*param_5;
  puVar18 = (undefined8 *)param_5[1];
  param_3 = param_3 & 0xffffffff;
  uVar19 = 0;
  do {
    bVar11 = *pbVar13;
    uVar17 = (uint)bVar11;
    if (uVar17 == 0x1f) {
      uVar10 = (ulonglong)(uVar15 >> 3);
      uVar7 = *(ulonglong *)(lVar5 + uVar10);
      bVar11 = (byte)uVar15 & 7;
      uVar14 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
               uVar7 << 0x38) << bVar11;
      uVar7 = *(ulonglong *)(lVar5 + 4 + uVar10);
      uVar10 = *(ulonglong *)(lVar5 + 8 + uVar10);
      in_XMM2._8_8_ =
           ((uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
             (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
             (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
            uVar10 << 0x38) << bVar11) >> 0x20 | uVar14 & 0xffffffff00000000;
      in_XMM2._0_8_ =
           uVar14 >> 0x20 |
           (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) << bVar11 & 0xffffffff00000000;
      uVar15 = uVar15 + 0x60;
      puVar18 = (undefined8 *)((longlong)puVar18 + 6);
    }
    else {
      if (bVar11 == 0) {
        auVar20 = pmovzxwd(in_XMM2,*puVar18);
        fVar21 = (float)auVar20._0_4_ * 1.5259022e-05;
        fVar22 = (float)auVar20._4_4_ * 1.5259022e-05;
        fVar23 = (float)auVar20._8_4_ * 1.5259022e-05;
        fVar24 = (float)auVar20._12_4_ * 1.5259022e-05;
        puVar18 = (undefined8 *)((longlong)puVar18 + 6);
      }
      else {
        cVar8 = ' ' - bVar11;
        fVar24 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar17 * 8);
        uVar16 = *(uint *)(lVar5 + (ulonglong)(uVar15 >> 3));
        uVar12 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 uVar16 << 0x18) >> (cVar8 - ((byte)uVar15 & 7) & 0x1f);
        uVar16 = uVar15 + uVar17;
        uVar3 = *(uint *)(lVar5 + (ulonglong)(uVar16 >> 3));
        uVar9 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >>
                (cVar8 - ((byte)uVar16 & 7) & 0x1f);
        uVar3 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar17 * 8);
        uVar4 = *(uint *)(lVar5 + (ulonglong)(uVar16 + uVar17 >> 3));
        uVar16 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                 >> (cVar8 - ((byte)(uVar16 + uVar17) & 7) & 0x1f);
        auVar20._4_4_ = fVar24;
        auVar20._0_4_ = fVar24;
        auVar20._8_4_ = fVar24;
        auVar20._12_4_ = fVar24;
        auVar25._4_4_ = uVar9;
        auVar25._0_4_ = uVar12;
        auVar25._12_4_ = uVar12;
        auVar25._8_4_ = uVar16;
        fVar21 = (float)(int)(uVar3 & uVar12) * fVar24;
        fVar22 = (float)(int)(uVar3 & uVar9) * fVar24;
        fVar23 = (float)(int)(uVar3 & uVar16) * fVar24;
        fVar24 = (float)(int)(uVar3 & uVar12) * fVar24;
        uVar15 = uVar15 + uVar17 * 3;
        if (*(char *)(param_1 + 0x20) != '\0') {
          auVar20 = pmovzxbw(auVar20,*puVar18);
          auVar25 = pmovzxbw(auVar25,*(undefined8 *)((longlong)puVar18 + 3));
          puVar18 = (undefined8 *)((longlong)puVar18 + 6);
          auVar20 = pmovzxwd(auVar20,auVar20);
          auVar25 = pmovzxwd(auVar25,auVar25);
          fVar21 = fVar21 * (float)auVar25._0_4_ * 0.003921569 + (float)auVar20._0_4_ * 0.003921569;
          fVar22 = fVar22 * (float)auVar25._4_4_ * 0.003921569 + (float)auVar20._4_4_ * 0.003921569;
          fVar23 = fVar23 * (float)auVar25._8_4_ * 0.003921569 + (float)auVar20._8_4_ * 0.003921569;
          fVar24 = fVar24 * (float)auVar25._12_4_ * 0.003921569 +
                   (float)auVar20._12_4_ * 0.003921569;
        }
      }
      pfVar1 = (float *)(lVar6 + (ulonglong)uVar19);
      pfVar2 = (float *)(lVar6 + 0xc + (ulonglong)uVar19);
      in_XMM2._0_4_ = *pfVar2 * fVar21 + *pfVar1;
      in_XMM2._4_4_ = pfVar2[1] * fVar22 + pfVar1[1];
      in_XMM2._8_4_ = pfVar2[2] * fVar23 + pfVar1[2];
      in_XMM2._12_4_ = pfVar2[3] * fVar24 + pfVar1[3];
    }
    pbVar13 = pbVar13 + 1;
    *param_2 = in_XMM2;
    param_2 = param_2 + 1;
    uVar19 = uVar19 + 0x18;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *param_5 = pbVar13;
  param_5[1] = puVar18;
  *(uint *)(param_5 + 3) = uVar15;
  return;
}



// FUNCTION 14984d1ea FUN_14984d1ea body=280 status=ok
// SIG undefined FUN_14984d1ea(void)

void FUN_14984d1ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar6 = *(uint *)(param_1 + 0x628);
  if ((uVar6 != 0) && (uVar7 = *(uint *)(param_1 + 0x620), uVar7 - *(int *)(param_1 + 0x624) < 4)) {
    uVar15 = 4;
    if (uVar6 < 4) {
      uVar15 = uVar6;
    }
    *(uint *)(param_1 + 0x628) = uVar6 - uVar15;
    *(uint *)(param_1 + 0x620) = uVar7 + uVar15;
    plVar1 = (longlong *)(param_1 + 0x6c0);
    FUN_14984d302(param_2,param_1 + 0x630,uVar15,plVar1,param_1 + 0x748);
    FUN_14984d302(param_2,param_1 + 0x670,uVar15,plVar1,param_1 + 0x768);
    fVar5 = *(float *)(param_2 + 0x78);
    uVar14 = 0;
    do {
      pfVar4 = (float *)(param_1 + 0x630 + uVar14);
      fVar8 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar10 = pfVar4[3];
      pfVar2 = (float *)(param_1 + 0x670 + uVar14);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar13 = pfVar2[3];
      pfVar3 = (float *)((ulonglong)((uVar7 & 7) << 4) + param_1 + 0x420 + uVar14);
      *pfVar3 = *pfVar2 * fVar5 + (*pfVar4 - fVar5 * *pfVar4);
      pfVar3[1] = fVar11 * fVar5 + (fVar8 - fVar5 * fVar8);
      pfVar3[2] = fVar12 * fVar5 + (fVar9 - fVar5 * fVar9);
      pfVar3[3] = fVar13 * fVar5 + (fVar10 - fVar5 * fVar10);
      uVar14 = uVar14 + 0x10;
    } while (uVar15 << 4 != uVar14);
    *plVar1 = *plVar1 + (ulonglong)(uVar15 * 0x18);
  }
  return;
}



// FUNCTION 14984d302 FUN_14984d302 body=520 status=ok
// SIG undefined FUN_14984d302(void)

void FUN_14984d302(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  lVar5 = param_5[2];
  lVar6 = *param_4;
  uVar15 = *(uint *)(param_5 + 3);
  pbVar13 = (byte *)*param_5;
  puVar18 = (undefined8 *)param_5[1];
  param_3 = param_3 & 0xffffffff;
  uVar19 = 0;
  do {
    bVar11 = *pbVar13;
    uVar17 = (uint)bVar11;
    if (uVar17 == 0x1f) {
      uVar10 = (ulonglong)(uVar15 >> 3);
      uVar7 = *(ulonglong *)(lVar5 + uVar10);
      bVar11 = (byte)uVar15 & 7;
      uVar14 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
               uVar7 << 0x38) << bVar11;
      uVar7 = *(ulonglong *)(lVar5 + 4 + uVar10);
      uVar10 = *(ulonglong *)(lVar5 + 8 + uVar10);
      in_XMM2._8_8_ =
           ((uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
             (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
             (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
            uVar10 << 0x38) << bVar11) >> 0x20 | uVar14 & 0xffffffff00000000;
      in_XMM2._0_8_ =
           uVar14 >> 0x20 |
           (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) << bVar11 & 0xffffffff00000000;
      uVar15 = uVar15 + 0x60;
      puVar18 = (undefined8 *)((longlong)puVar18 + 6);
    }
    else {
      if (bVar11 == 0) {
        auVar20 = pmovzxwd(in_XMM2,*puVar18);
        fVar21 = (float)auVar20._0_4_ * 1.5259022e-05;
        fVar22 = (float)auVar20._4_4_ * 1.5259022e-05;
        fVar23 = (float)auVar20._8_4_ * 1.5259022e-05;
        fVar24 = (float)auVar20._12_4_ * 1.5259022e-05;
        puVar18 = (undefined8 *)((longlong)puVar18 + 6);
      }
      else {
        cVar8 = ' ' - bVar11;
        fVar24 = *(float *)(&DAT_14beb2200 + (ulonglong)uVar17 * 8);
        uVar16 = *(uint *)(lVar5 + (ulonglong)(uVar15 >> 3));
        uVar12 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 uVar16 << 0x18) >> (cVar8 - ((byte)uVar15 & 7) & 0x1f);
        uVar16 = uVar15 + uVar17;
        uVar3 = *(uint *)(lVar5 + (ulonglong)(uVar16 >> 3));
        uVar9 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >>
                (cVar8 - ((byte)uVar16 & 7) & 0x1f);
        uVar3 = *(uint *)(&DAT_14beb2204 + (ulonglong)uVar17 * 8);
        uVar4 = *(uint *)(lVar5 + (ulonglong)(uVar16 + uVar17 >> 3));
        uVar16 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                 >> (cVar8 - ((byte)(uVar16 + uVar17) & 7) & 0x1f);
        auVar20._4_4_ = fVar24;
        auVar20._0_4_ = fVar24;
        auVar20._8_4_ = fVar24;
        auVar20._12_4_ = fVar24;
        auVar25._4_4_ = uVar9;
        auVar25._0_4_ = uVar12;
        auVar25._12_4_ = uVar12;
        auVar25._8_4_ = uVar16;
        fVar21 = (float)(int)(uVar3 & uVar12) * fVar24;
        fVar22 = (float)(int)(uVar3 & uVar9) * fVar24;
        fVar23 = (float)(int)(uVar3 & uVar16) * fVar24;
        fVar24 = (float)(int)(uVar3 & uVar12) * fVar24;
        uVar15 = uVar15 + uVar17 * 3;
        if (*(char *)(param_1 + 0x20) != '\0') {
          auVar20 = pmovzxbw(auVar20,*puVar18);
          auVar25 = pmovzxbw(auVar25,*(undefined8 *)((longlong)puVar18 + 3));
          puVar18 = (undefined8 *)((longlong)puVar18 + 6);
          auVar20 = pmovzxwd(auVar20,auVar20);
          auVar25 = pmovzxwd(auVar25,auVar25);
          fVar21 = fVar21 * (float)auVar25._0_4_ * 0.003921569 + (float)auVar20._0_4_ * 0.003921569;
          fVar22 = fVar22 * (float)auVar25._4_4_ * 0.003921569 + (float)auVar20._4_4_ * 0.003921569;
          fVar23 = fVar23 * (float)auVar25._8_4_ * 0.003921569 + (float)auVar20._8_4_ * 0.003921569;
          fVar24 = fVar24 * (float)auVar25._12_4_ * 0.003921569 +
                   (float)auVar20._12_4_ * 0.003921569;
        }
      }
      pfVar1 = (float *)(lVar6 + (ulonglong)uVar19);
      pfVar2 = (float *)(lVar6 + 0xc + (ulonglong)uVar19);
      in_XMM2._0_4_ = *pfVar2 * fVar21 + *pfVar1;
      in_XMM2._4_4_ = pfVar2[1] * fVar22 + pfVar1[1];
      in_XMM2._8_4_ = pfVar2[2] * fVar23 + pfVar1[2];
      in_XMM2._12_4_ = pfVar2[3] * fVar24 + pfVar1[3];
    }
    pbVar13 = pbVar13 + 1;
    *param_2 = in_XMM2;
    param_2 = param_2 + 1;
    uVar19 = uVar19 + 0x18;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *param_5 = pbVar13;
  param_5[1] = puVar18;
  *(uint *)(param_5 + 3) = uVar15;
  return;
}



// FUNCTION 14984d50a FUN_14984d50a body=4725 status=ok
// SIG undefined FUN_14984d50a(void)

void FUN_14984d50a(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  longlong lVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  void *_Src;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  undefined1 auStack_a78 [39];
  char local_a51;
  uint local_a50;
  uint local_a4c;
  ulonglong local_a48;
  longlong local_a40;
  ulonglong local_a38;
  longlong *local_a30;
  undefined8 local_a28 [64];
  undefined8 local_828;
  undefined1 local_818 [512];
  undefined8 local_618;
  undefined1 local_608 [512];
  undefined8 local_408;
  undefined8 auStack_298 [64];
  undefined8 local_98;
  uint local_90;
  void *local_88;
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  lVar17 = *param_1;
  uVar9 = *(uint *)(lVar17 + 0x10);
  uVar21 = (ulonglong)uVar9;
  if ((uVar21 != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar10 = *(uint *)(lVar17 + 0x1c) >> 1 & 1;
    uVar23 = uVar9 + 0xf >> 4;
    uVar22 = uVar9 + 0xf & 0xfffffff0;
    local_a50 = uVar23 - 1;
    local_a4c = 0xaaaaaaaa;
    if (uVar9 != uVar22) {
      local_a4c = ~(0xffffffffU >> (((char)uVar9 - (char)uVar22) * '\x02' & 0x1fU)) & 0xaaaaaaa8;
    }
    local_a51 = *(char *)((longlong)param_1 + 0x1f);
    local_a40 = (ulonglong)*(uint *)(lVar17 + 0x48) + lVar17 + 0x20;
    local_a48 = (ulonglong)uVar23;
    uVar18 = 0;
    local_98 = 0;
    local_90 = *(uint *)(lVar17 + 0x34);
    _Src = (void *)((ulonglong)*(uint *)(lVar17 + 0x4c) + lVar17 + 0x20);
    local_80 = (undefined1 (*) [16])((longlong)_Src + (ulonglong)(local_90 << 4));
    local_78 = (undefined1 (*) [16])(*local_80 + (uint)(*(int *)(lVar17 + 0x38) * 0xc));
    local_828 = 0;
    local_618 = 0;
    local_408 = 0;
    local_88 = _Src;
    FUN_14984ca00(local_a28,param_1);
    local_a38 = (ulonglong)local_a50;
    uVar13 = (ulonglong)(uVar23 + (uVar23 == 0));
    uVar9 = 3;
    do {
      uVar22 = 0xaaaaaaaa;
      if (uVar18 == local_a38) {
        uVar22 = local_a4c;
      }
      uVar22 = uVar22 & 0xaaaaaaaaU - *(int *)(local_a40 + uVar18 * 4);
      uVar23 = uVar22;
      uVar14 = uVar9;
      while (uVar22 != 0) {
        if ((uVar23 & 0xaa000000) != 0) {
          if (((int)uVar23 < 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 - 3) * 6),
             uVar5 != 0xffff)) {
            lVar17 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar17 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0x3ff0000000000000;
          }
          if (((uVar23 >> 0x1d & 1) != 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 - 2) * 6),
             uVar5 != 0xffff)) {
            lVar17 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar17 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0x3ff0000000000000;
          }
          if (((uVar23 >> 0x1b & 1) != 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 - 1) * 6),
             uVar5 != 0xffff)) {
            lVar17 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar17 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0x3ff0000000000000;
          }
          if (((uVar23 >> 0x19 & 1) != 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar14 * 6),
             uVar5 != 0xffff)) {
            lVar17 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar17 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0x3ff0000000000000;
          }
        }
        uVar14 = uVar14 + 4;
        uVar22 = uVar23 & 0xffffff;
        uVar23 = uVar23 << 8;
      }
      uVar18 = uVar18 + 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar18 != uVar13);
    uVar9 = 0;
    uVar22 = 3;
    uVar18 = 0;
    local_a30 = param_1;
    do {
      uVar14 = *(uint *)(local_a40 + uVar18 * 4) & 0x55555555;
      uVar8 = uVar22;
      uVar23 = uVar14;
      if ((local_90 != 0) && ((uint)local_98 - uVar9 < 0x10)) {
        uVar9 = 0x10;
        if (local_90 < 0x10) {
          uVar9 = local_90;
        }
        local_90 = local_90 - uVar9;
        uVar11 = (uint)local_98 & 0x1f;
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + uVar9);
        lVar17 = (ulonglong)(uVar9 - 1) * 0x10;
        memcpy((void *)((longlong)auStack_298 + (ulonglong)(uVar11 << 4)),_Src,lVar17 + 0x10);
        _Src = (void *)((longlong)_Src + lVar17 + 0x10);
        local_88 = _Src;
        uVar9 = local_98._4_4_;
      }
      while (uVar23 != 0) {
        if ((uVar14 & 0x55000000) != 0) {
          uVar23 = uVar9;
          if (uVar14 >> 0x1e != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar8 - 3) * 6);
            uVar23 = uVar9 + 1;
            if (uVar5 != 0xffff) {
              uVar12 = (ulonglong)((uVar9 & 0x1f) << 4);
              lVar17 = *(longlong *)(param_2 + 0x18);
              uVar20 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)auStack_298 + uVar12);
              uVar4 = *(undefined8 *)((longlong)auStack_298 + uVar12 + 8);
              pdVar2 = (double *)(lVar17 + uVar20);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar17 + 0x10 + uVar20);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
          uVar9 = uVar23;
          if ((uVar14 >> 0x1c & 1) != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar8 - 2) * 6);
            uVar9 = uVar23 + 1;
            if (uVar5 != 0xffff) {
              uVar12 = (ulonglong)((uVar23 & 0x1f) << 4);
              lVar17 = *(longlong *)(param_2 + 0x18);
              uVar20 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)auStack_298 + uVar12);
              uVar4 = *(undefined8 *)((longlong)auStack_298 + uVar12 + 8);
              pdVar2 = (double *)(lVar17 + uVar20);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar17 + 0x10 + uVar20);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
          uVar23 = uVar9;
          if ((uVar14 >> 0x1a & 1) != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar8 - 1) * 6);
            uVar23 = uVar9 + 1;
            if (uVar5 != 0xffff) {
              uVar12 = (ulonglong)((uVar9 & 0x1f) << 4);
              lVar17 = *(longlong *)(param_2 + 0x18);
              uVar20 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)auStack_298 + uVar12);
              uVar4 = *(undefined8 *)((longlong)auStack_298 + uVar12 + 8);
              pdVar2 = (double *)(lVar17 + uVar20);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar17 + 0x10 + uVar20);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
          uVar9 = uVar23;
          if ((uVar14 >> 0x18 & 1) != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar8 * 6);
            uVar9 = uVar23 + 1;
            if (uVar5 != 0xffff) {
              uVar12 = (ulonglong)((uVar23 & 0x1f) << 4);
              lVar17 = *(longlong *)(param_2 + 0x18);
              uVar20 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)auStack_298 + uVar12);
              uVar4 = *(undefined8 *)((longlong)auStack_298 + uVar12 + 8);
              pdVar2 = (double *)(lVar17 + uVar20);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar17 + 0x10 + uVar20);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
        }
        uVar23 = uVar14 & 0xffffff;
        uVar14 = uVar14 << 8;
        uVar8 = uVar8 + 4;
      }
      local_98 = CONCAT44(uVar9,(uint)local_98);
      uVar23 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar23;
      uVar22 = uVar22 + 0x10;
    } while (uVar23 <= local_a50);
    lVar17 = local_a40 + local_a48 * 4;
    uVar9 = 3;
    uVar18 = 0;
    do {
      uVar22 = 0xaaaaaaaa;
      if (uVar18 == local_a38) {
        uVar22 = local_a4c;
      }
      uVar22 = uVar22 & 0xaaaaaaaaU - *(int *)(lVar17 + uVar18 * 4);
      uVar23 = uVar22;
      uVar14 = uVar9;
      while (uVar22 != 0) {
        if ((uVar23 & 0xaa000000) != 0) {
          if (((int)uVar23 < 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar14 - 3) * 6),
             uVar5 != 0xffff)) {
            lVar15 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar15 + 0x30 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar15 + 0x20 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          if (((uVar23 >> 0x1d & 1) != 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar14 - 2) * 6),
             uVar5 != 0xffff)) {
            lVar15 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar15 + 0x30 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar15 + 0x20 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          if (((uVar23 >> 0x1b & 1) != 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar14 - 1) * 6),
             uVar5 != 0xffff)) {
            lVar15 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar15 + 0x30 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar15 + 0x20 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          if (((uVar23 >> 0x19 & 1) != 0) &&
             (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar14 * 6),
             uVar5 != 0xffff)) {
            lVar15 = *(longlong *)(param_2 + 0x18);
            uVar12 = (ulonglong)((uint)uVar5 * 0x60);
            puVar1 = (undefined8 *)(lVar15 + 0x30 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar15 + 0x20 + uVar12);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
        }
        uVar14 = uVar14 + 4;
        uVar22 = uVar23 & 0xffffff;
        uVar23 = uVar23 << 8;
      }
      uVar18 = uVar18 + 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar18 != uVar13);
    local_a48 = lVar17 + local_a48 * 4;
    uVar9 = 3;
    uVar18 = 0;
    do {
      uVar22 = *(uint *)(lVar17 + uVar18 * 4) & 0x55555555;
      uVar23 = uVar22;
      uVar14 = uVar9;
      while (uVar22 != 0) {
        if ((uVar23 & 0x55000000) != 0) {
          pauVar16 = local_80;
          if (uVar23 >> 0x1e != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar14 - 3) * 6);
            pauVar16 = (undefined1 (*) [16])(*local_80 + 0xc);
            if (uVar5 != 0xffff) {
              auVar25 = *local_80;
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar12 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
          pauVar19 = pauVar16;
          if ((uVar23 >> 0x1c & 1) != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar14 - 2) * 6);
            pauVar19 = (undefined1 (*) [16])(*pauVar16 + 0xc);
            if (uVar5 != 0xffff) {
              auVar25 = *pauVar16;
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar12 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
          pauVar16 = pauVar19;
          if ((uVar23 >> 0x1a & 1) != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar14 - 1) * 6);
            pauVar16 = (undefined1 (*) [16])(*pauVar19 + 0xc);
            if (uVar5 != 0xffff) {
              auVar25 = *pauVar19;
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar12 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
          local_80 = pauVar16;
          if ((uVar23 >> 0x18 & 1) != 0) {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar14 * 6);
            local_80 = (undefined1 (*) [16])(*pauVar16 + 0xc);
            if (uVar5 != 0xffff) {
              auVar25 = *pauVar16;
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar12 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar12);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
        }
        uVar14 = uVar14 + 4;
        uVar22 = uVar23 & 0xffffff;
        uVar23 = uVar23 << 8;
      }
      uVar18 = uVar18 + 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar18 != uVar13);
    dVar24 = (double)uVar10;
    dVar26 = (double)uVar10;
    dVar7 = (double)uVar10;
    if (local_a51 == '\0') {
      lVar15 = 4;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + lVar15);
        if (uVar5 != 0xffff) {
          lVar6 = *(longlong *)(param_2 + 0x18);
          uVar18 = (ulonglong)((uint)uVar5 * 0x60);
          pdVar2 = (double *)(lVar6 + 0x40 + uVar18);
          *pdVar2 = dVar24;
          pdVar2[1] = dVar26;
          pdVar2 = (double *)(lVar6 + 0x50 + uVar18);
          *pdVar2 = dVar7;
          pdVar2[1] = 0.0;
        }
        lVar15 = lVar15 + 6;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    else {
      uVar9 = 3;
      uVar21 = 0;
      do {
        uVar10 = 0xaaaaaaaa;
        if (uVar21 == local_a38) {
          uVar10 = local_a4c;
        }
        uVar10 = uVar10 & 0xaaaaaaaaU - *(int *)(local_a48 + uVar21 * 4);
        uVar22 = uVar10;
        uVar23 = uVar9;
        while (uVar10 != 0) {
          if ((uVar22 & 0xaa000000) != 0) {
            if (((int)uVar22 < 0) &&
               (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 3) * 6)
               , uVar5 != 0xffff)) {
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
              *pdVar2 = dVar24;
              pdVar2[1] = dVar26;
              pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
              *pdVar2 = dVar7;
              pdVar2[1] = 0.0;
            }
            if (((uVar22 >> 0x1d & 1) != 0) &&
               (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 2) * 6)
               , uVar5 != 0xffff)) {
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
              *pdVar2 = dVar24;
              pdVar2[1] = dVar26;
              pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
              *pdVar2 = dVar7;
              pdVar2[1] = 0.0;
            }
            if (((uVar22 >> 0x1b & 1) != 0) &&
               (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 1) * 6)
               , uVar5 != 0xffff)) {
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
              *pdVar2 = dVar24;
              pdVar2[1] = dVar26;
              pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
              *pdVar2 = dVar7;
              pdVar2[1] = 0.0;
            }
            if (((uVar22 >> 0x19 & 1) != 0) &&
               (uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar23 * 6),
               uVar5 != 0xffff)) {
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
              *pdVar2 = dVar24;
              pdVar2[1] = dVar26;
              pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
              *pdVar2 = dVar7;
              pdVar2[1] = 0.0;
            }
          }
          uVar23 = uVar23 + 4;
          uVar10 = uVar22 & 0xffffff;
          uVar22 = uVar22 << 8;
        }
        uVar21 = uVar21 + 1;
        uVar9 = uVar9 + 0x10;
      } while (uVar21 != uVar13);
      uVar9 = 3;
      uVar21 = 0;
      do {
        uVar10 = *(uint *)(local_a48 + uVar21 * 4) & 0x55555555;
        uVar22 = uVar10;
        uVar23 = uVar9;
        while (uVar10 != 0) {
          if ((uVar22 & 0x55000000) != 0) {
            pauVar16 = local_78;
            if (uVar22 >> 0x1e != 0) {
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 3) * 6);
              pauVar16 = (undefined1 (*) [16])(*local_78 + 0xc);
              if (uVar5 != 0xffff) {
                auVar25 = *local_78;
                lVar15 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
            pauVar19 = pauVar16;
            if ((uVar22 >> 0x1c & 1) != 0) {
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 2) * 6);
              pauVar19 = (undefined1 (*) [16])(*pauVar16 + 0xc);
              if (uVar5 != 0xffff) {
                auVar25 = *pauVar16;
                lVar15 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
            pauVar16 = pauVar19;
            if ((uVar22 >> 0x1a & 1) != 0) {
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 1) * 6);
              pauVar16 = (undefined1 (*) [16])(*pauVar19 + 0xc);
              if (uVar5 != 0xffff) {
                auVar25 = *pauVar19;
                lVar15 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
            local_78 = pauVar16;
            if ((uVar22 >> 0x18 & 1) != 0) {
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar23 * 6);
              local_78 = (undefined1 (*) [16])(*pauVar16 + 0xc);
              if (uVar5 != 0xffff) {
                auVar25 = *pauVar16;
                lVar15 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar15 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar15 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
          }
          uVar23 = uVar23 + 4;
          uVar10 = uVar22 & 0xffffff;
          uVar22 = uVar22 << 8;
        }
        uVar21 = uVar21 + 1;
        uVar9 = uVar9 + 0x10;
      } while (uVar21 != uVar13);
    }
    uVar21 = 0;
    uVar9 = 3;
    do {
      uVar10 = *(uint *)(local_a40 + uVar21 * 4) & 0xaaaaaaaa;
      uVar22 = uVar10;
      uVar23 = uVar9;
      while (uVar10 != 0) {
        if ((uVar22 & 0xaa000000) != 0) {
          FUN_14984cb62(local_a28,local_a30);
          if ((int)uVar22 < 0) {
            uVar10 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar23 - 3) * 6);
            if (uVar5 != 0xffff) {
              uVar18 = (ulonglong)((uVar10 & 7) << 4);
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar13 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)local_a28 + uVar18);
              uVar4 = *(undefined8 *)((longlong)local_a28 + uVar18 + 8);
              pdVar2 = (double *)(lVar15 + uVar13);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar15 + 0x10 + uVar13);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
          if ((uVar22 >> 0x1d & 1) != 0) {
            uVar10 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar23 - 2) * 6);
            if (uVar5 != 0xffff) {
              uVar18 = (ulonglong)((uVar10 & 7) << 4);
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar13 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)local_a28 + uVar18);
              uVar4 = *(undefined8 *)((longlong)local_a28 + uVar18 + 8);
              pdVar2 = (double *)(lVar15 + uVar13);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar15 + 0x10 + uVar13);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
          if ((uVar22 >> 0x1b & 1) != 0) {
            uVar10 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar23 - 1) * 6);
            if (uVar5 != 0xffff) {
              uVar18 = (ulonglong)((uVar10 & 7) << 4);
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar13 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)local_a28 + uVar18);
              uVar4 = *(undefined8 *)((longlong)local_a28 + uVar18 + 8);
              pdVar2 = (double *)(lVar15 + uVar13);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar15 + 0x10 + uVar13);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
          if ((uVar22 >> 0x19 & 1) != 0) {
            uVar10 = local_828._4_4_;
            local_828 = CONCAT44(local_828._4_4_ + 1,(undefined4)local_828);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar23 * 6);
            if (uVar5 != 0xffff) {
              uVar18 = (ulonglong)((uVar10 & 7) << 4);
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar13 = (ulonglong)((uint)uVar5 * 0x60);
              uVar3 = *(undefined8 *)((longlong)local_a28 + uVar18);
              uVar4 = *(undefined8 *)((longlong)local_a28 + uVar18 + 8);
              pdVar2 = (double *)(lVar15 + uVar13);
              *pdVar2 = (double)(float)uVar3;
              pdVar2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
              pdVar2 = (double *)(lVar15 + 0x10 + uVar13);
              *pdVar2 = (double)(float)uVar4;
              pdVar2[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
            }
          }
        }
        uVar23 = uVar23 + 4;
        uVar10 = uVar22 & 0xffffff;
        uVar22 = uVar22 << 8;
      }
      uVar10 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar10;
      uVar9 = uVar9 + 0x10;
    } while (uVar10 <= local_a50);
    uVar21 = 0;
    uVar9 = 3;
    do {
      uVar10 = *(uint *)(lVar17 + uVar21 * 4) & 0xaaaaaaaa;
      uVar22 = uVar10;
      uVar23 = uVar9;
      while (uVar10 != 0) {
        if ((uVar22 & 0xaa000000) != 0) {
          FUN_14984ceca(local_a28,local_a30);
          if ((int)uVar22 < 0) {
            uVar10 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar23 - 3) * 6);
            if (uVar5 != 0xffff) {
              auVar25 = *(undefined1 (*) [16])(local_818 + ((uVar10 & 7) << 4));
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
          if ((uVar22 >> 0x1d & 1) != 0) {
            uVar10 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar23 - 2) * 6);
            if (uVar5 != 0xffff) {
              auVar25 = *(undefined1 (*) [16])(local_818 + ((uVar10 & 7) << 4));
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
          if ((uVar22 >> 0x1b & 1) != 0) {
            uVar10 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)(uVar23 - 1) * 6);
            if (uVar5 != 0xffff) {
              auVar25 = *(undefined1 (*) [16])(local_818 + ((uVar10 & 7) << 4));
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
          if ((uVar22 >> 0x19 & 1) != 0) {
            uVar10 = local_618._4_4_;
            local_618 = CONCAT44(local_618._4_4_ + 1,(undefined4)local_618);
            uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 2 + (ulonglong)uVar23 * 6);
            if (uVar5 != 0xffff) {
              auVar25 = *(undefined1 (*) [16])(local_818 + ((uVar10 & 7) << 4));
              lVar15 = *(longlong *)(param_2 + 0x18);
              uVar18 = (ulonglong)((uint)uVar5 * 0x60);
              pdVar2 = (double *)(lVar15 + 0x20 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
              auVar25 = insertps(auVar25,auVar25,0x8e);
              pdVar2 = (double *)(lVar15 + 0x30 + uVar18);
              *pdVar2 = (double)auVar25._0_4_;
              pdVar2[1] = (double)auVar25._4_4_;
            }
          }
        }
        uVar23 = uVar23 + 4;
        uVar10 = uVar22 & 0xffffff;
        uVar22 = uVar22 << 8;
      }
      uVar10 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar10;
      uVar9 = uVar9 + 0x10;
    } while (uVar10 <= local_a50);
    if (local_a51 != '\0') {
      uVar21 = 0;
      uVar9 = 3;
      do {
        uVar10 = *(uint *)(local_a48 + uVar21 * 4) & 0xaaaaaaaa;
        uVar22 = uVar10;
        uVar23 = uVar9;
        while (uVar10 != 0) {
          if ((uVar22 & 0xaa000000) != 0) {
            FUN_14984d1ea(local_a28,local_a30);
            if ((int)uVar22 < 0) {
              uVar10 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 3) * 6);
              if (uVar5 != 0xffff) {
                auVar25 = *(undefined1 (*) [16])(local_608 + ((uVar10 & 7) << 4));
                lVar17 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar17 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar17 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
            if ((uVar22 >> 0x1d & 1) != 0) {
              uVar10 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 2) * 6);
              if (uVar5 != 0xffff) {
                auVar25 = *(undefined1 (*) [16])(local_608 + ((uVar10 & 7) << 4));
                lVar17 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar17 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar17 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
            if ((uVar22 >> 0x1b & 1) != 0) {
              uVar10 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)(uVar23 - 1) * 6);
              if (uVar5 != 0xffff) {
                auVar25 = *(undefined1 (*) [16])(local_608 + ((uVar10 & 7) << 4));
                lVar17 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar17 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar17 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
            if ((uVar22 >> 0x19 & 1) != 0) {
              uVar10 = local_408._4_4_;
              local_408 = CONCAT44(local_408._4_4_ + 1,(undefined4)local_408);
              uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar23 * 6);
              if (uVar5 != 0xffff) {
                auVar25 = *(undefined1 (*) [16])(local_608 + ((uVar10 & 7) << 4));
                lVar17 = *(longlong *)(param_2 + 0x18);
                uVar18 = (ulonglong)((uint)uVar5 * 0x60);
                pdVar2 = (double *)(lVar17 + 0x40 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
                auVar25 = insertps(auVar25,auVar25,0x8e);
                pdVar2 = (double *)(lVar17 + 0x50 + uVar18);
                *pdVar2 = (double)auVar25._0_4_;
                pdVar2[1] = (double)auVar25._4_4_;
              }
            }
          }
          uVar23 = uVar23 + 4;
          uVar10 = uVar22 & 0xffffff;
          uVar22 = uVar22 << 8;
        }
        uVar10 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar10;
        uVar9 = uVar9 + 0x10;
      } while (uVar10 <= local_a50);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14984e780 FUN_14984e780 body=2640 status=ok
// SIG undefined FUN_14984e780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14984e780(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double dVar5;
  double *pdVar6;
  undefined1 auVar7 [12];
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  undefined1 *puVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar47;
  float extraout_XMM0_Dc;
  float fVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar46;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar45 [16];
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar49;
  undefined1 in_XMM1 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 in_XMM4 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar56 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_8b8 [40];
  ulonglong local_890;
  uint local_884;
  ulonglong local_880;
  ulonglong local_878;
  uint local_86c;
  uint local_868;
  uint local_864;
  ulonglong local_860;
  longlong *local_858;
  undefined1 *local_850;
  longlong local_848;
  uint local_840;
  uint local_83c;
  uint local_838;
  uint local_834;
  longlong *local_830;
  longlong local_828;
  longlong local_820;
  undefined1 *local_818;
  undefined1 *local_810;
  undefined1 local_808 [512];
  undefined8 local_608;
  int local_600;
  undefined8 local_3f8;
  int local_3f0;
  undefined8 local_1e8;
  int local_1e0;
  longlong local_150;
  longlong local_148 [4];
  int local_128;
  int local_108;
  longlong local_100;
  longlong local_f8;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  int local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  lVar15 = *param_1;
  uVar18 = (uint)param_2;
  if ((uVar18 < *(uint *)(lVar15 + 0x10)) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar12 = (ulonglong)(*(uint *)(lVar15 + 0x10) + 0xf >> 4);
    puVar3 = (undefined1 *)((ulonglong)*(uint *)(lVar15 + 0x48) + 0x20 + lVar15);
    puVar1 = puVar3 + uVar12 * 4;
    puVar36 = puVar1 + uVar12 * 4;
    if (*(byte *)((longlong)param_1 + 0x1f) == 0) {
      puVar36 = puVar3;
    }
    uVar17 = -(uint)*(byte *)((longlong)param_1 + 0x1f);
    local_880 = param_2 >> 4 & 0xfffffff;
    uVar10 = (int)local_880 * 4;
    bVar13 = ~((char)param_2 * '\x02') & 0x1e;
    uVar19 = *(uint *)(puVar3 + uVar10) >> bVar13;
    uVar21 = uVar19 & 3;
    uVar27 = *(uint *)(puVar1 + uVar10) >> bVar13;
    uVar30 = uVar27 & 3;
    uVar10 = *(uint *)(puVar36 + uVar10) >> bVar13 & uVar17;
    uVar14 = uVar10 & 3;
    local_864 = uVar30 | uVar21 | uVar14;
    if (local_864 == 0) {
      param_2 = param_2 & 0xffffffff;
      lVar15 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar6 = (double *)(*param_3 + lVar15);
      dVar5 = pdVar6[1];
      pdVar4 = (double *)(*param_3 + 0x10 + lVar15);
      dVar8 = *pdVar4;
      dVar9 = pdVar4[1];
      pdVar4 = (double *)param_3[2];
      *pdVar4 = (double)(float)*pdVar6;
      pdVar4[1] = (double)(float)dVar5;
      pdVar4[2] = (double)(float)dVar8;
      pdVar4[3] = (double)(float)dVar9;
      lVar15 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar6 = (double *)(*param_3 + 0x20 + lVar15);
      dVar8 = pdVar6[1];
      dVar5 = *(double *)(*param_3 + 0x30 + lVar15);
      lVar15 = param_3[2];
      *(double *)(lVar15 + 0x20) = (double)(float)*pdVar6;
      *(double *)(lVar15 + 0x28) = (double)(float)dVar8;
      auVar43 = pblendw(ZEXT416((uint)(float)dVar5),(undefined1  [16])0x0,0xfc);
      *(double *)(lVar15 + 0x30) = (double)auVar43._0_4_;
      *(double *)(lVar15 + 0x38) = (double)auVar43._4_4_;
      lVar15 = (longlong)*(int *)(param_3[1] + param_2 * 4) * 0x60;
      pdVar6 = (double *)(*param_3 + 0x40 + lVar15);
      dVar8 = pdVar6[1];
      dVar5 = *(double *)(*param_3 + 0x50 + lVar15);
      lVar15 = param_3[2];
      *(double *)(lVar15 + 0x40) = (double)(float)*pdVar6;
      *(double *)(lVar15 + 0x48) = (double)(float)dVar8;
      auVar43 = pblendw(ZEXT416((uint)(float)dVar5),(undefined1  [16])0x0,0xfc);
      fVar49 = auVar43._0_4_;
      fVar39 = auVar43._4_4_;
    }
    else {
      uVar11 = (uVar18 & 0xfffffff0) + 0x10;
      local_828 = lVar15 + 0x20;
      uVar23 = ~(0xffffffffU >> (((char)param_2 - (char)uVar11) * '\x02' & 0x1fU));
      if (uVar18 == uVar11) {
        uVar23 = 0xffffffff;
      }
      local_878 = CONCAT44(local_878._4_4_,uVar23);
      local_890 = local_880 + 1;
      uVar12 = 0;
      uVar34 = 0;
      uVar22 = 0;
      uVar11 = 0;
      uVar16 = 0;
      uVar37 = 0;
      uVar18 = 0;
      do {
        local_848 = CONCAT44(local_848._4_4_,uVar18);
        uVar38 = 0xffffffff;
        if (local_880 == uVar12) {
          uVar38 = uVar23;
        }
        uVar25 = *(uint *)(puVar3 + uVar12 * 4) & uVar38;
        uVar20 = *(uint *)(puVar1 + uVar12 * 4) & uVar38;
        uVar38 = *(uint *)(puVar36 + uVar12 * 4) & uVar17 & uVar38;
        uVar28 = (uVar25 >> 2 & 0x11111111) + (uVar25 & 0x11111111);
        uVar34 = uVar34 + (((uVar28 >> 4) + uVar28 & 0x7070707) * 0x1010101 >> 0x18);
        local_850 = &DAT_aaaaaaaa;
        uVar25 = (uVar25 & 0xaaaaaaaa) - (uVar25 >> 1 & 0x55555555);
        uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
        uVar16 = uVar16 + (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar25 = (uVar20 >> 2 & 0x11111111) + (uVar20 & 0x11111111);
        uVar22 = uVar22 + (((uVar25 >> 4) + uVar25 & 0x7070707) * 0x1010101 >> 0x18);
        uVar20 = (uVar20 & 0xaaaaaaaa) - (uVar20 >> 1 & 0x55555555);
        uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
        uVar37 = uVar37 + (((uVar20 >> 4) + uVar20 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar20 = (uVar38 >> 2 & 0x11111111) + (uVar38 & 0x11111111);
        uVar11 = uVar11 + (((uVar20 >> 4) + uVar20 & 0x7070707) * 0x1010101 >> 0x18);
        uVar38 = (uVar38 & 0xaaaaaaaa) - (uVar38 >> 1 & 0x55555555);
        uVar38 = (uVar38 >> 2 & 0x33333333) + (uVar38 & 0x33333333);
        uVar38 = ((uVar38 >> 4) + uVar38 & 0xf0f0f0f) * 0x1010101 >> 0x18;
        uVar26 = (ulonglong)uVar38;
        uVar18 = uVar18 + uVar38;
        uVar12 = uVar12 + 1;
      } while (local_890 != uVar12);
      if ((local_864 & 1) == 0) {
        uVar29 = 0;
        uVar12 = 0;
        uVar33 = 0;
      }
      else {
        lVar32 = (ulonglong)*(uint *)(lVar15 + 0x4c) + local_828;
        uVar12 = 0;
        uVar29 = 0;
        local_848 = lVar32;
        if (((uVar19 & 1) != 0) && (uVar29 = (ulonglong)(uVar34 & 3), 3 < uVar34)) {
          local_848 = lVar32 + (ulonglong)(uVar34 & 0xfffffffc) * 0x10;
        }
        uVar33 = lVar32 + (ulonglong)(uint)(*(int *)(lVar15 + 0x34) << 4);
        uVar26 = uVar33;
        if (((uVar27 & 1) != 0) && (uVar12 = (ulonglong)(uVar22 & 3), 3 < uVar22)) {
          uVar26 = uVar33 + (ulonglong)(uVar22 & 0xfffffffc) * 0xc;
        }
        local_850 = (undefined1 *)(uVar33 + (uint)(*(int *)(lVar15 + 0x38) * 0xc));
        uVar33 = 0;
        if (((uVar10 & 1) != 0) && (uVar33 = (ulonglong)(uVar11 & 3), 3 < uVar11)) {
          local_850 = local_850 + (ulonglong)(uVar11 & 0xfffffffc) * 0xc;
        }
      }
      local_608 = 0;
      local_3f8 = 0;
      local_1e8 = 0;
      puVar31 = local_850;
      local_884 = uVar19;
      local_86c = uVar27;
      local_868 = uVar10;
      local_860 = param_2;
      local_858 = param_1;
      local_840 = uVar21;
      local_83c = uVar30;
      local_838 = uVar14;
      local_834 = uVar17;
      local_830 = param_3;
      local_820 = lVar15;
      local_818 = puVar36;
      local_810 = puVar1;
      if (local_864 != 1) {
        local_890 = uVar12;
        local_880 = uVar33;
        local_878 = uVar26;
        auVar43._0_8_ = FUN_14984ca00(local_808,param_1);
        auVar43._8_8_ = extraout_XMM0_Qb;
        if (((local_884 & 2) != 0) && (uVar29 = (ulonglong)(uVar16 & 3), 3 < uVar16)) {
          local_600 = local_600 - (uVar16 & 0xfffffffc);
          iVar35 = (uVar16 & 0xfffffffc) * 0x80;
          local_128 = local_128 + iVar35;
          local_108 = local_108 + iVar35;
        }
        uVar33 = local_880 & 0xffffffff;
        uVar12 = local_890 & 0xffffffff;
        if ((uVar27 & 2) != 0) {
          uVar12 = (ulonglong)(uVar37 & 3);
          if (3 < uVar37) {
            uVar17 = uVar37 & 0xfffffffc;
            local_3f0 = local_3f0 - uVar17;
            uVar14 = uVar37 >> 2;
            uVar12 = 0;
            in_XMM4 = pmovsxbd(in_XMM4,0x1f1f1f1f);
            auVar53 = (undefined1  [16])0x0;
            auVar54 = (undefined1  [16])0x0;
            do {
              auVar43 = pmovzxbw(auVar43,*(undefined8 *)(local_100 + uVar12 * 4));
              auVar50 = pmovzxbw(in_XMM1,*(undefined8 *)(local_e0 + uVar12 * 4));
              auVar43 = pmovzxwd(unaff_XMM6,auVar43);
              auVar57 = pmovzxwd(unaff_XMM7,auVar50);
              auVar50._0_4_ = -(uint)(auVar43._0_4_ == in_XMM4._0_4_);
              auVar50._4_4_ = -(uint)(auVar43._4_4_ == in_XMM4._4_4_);
              auVar50._8_4_ = -(uint)(auVar43._8_4_ == in_XMM4._8_4_);
              auVar50._12_4_ = -(uint)(auVar43._12_4_ == in_XMM4._12_4_);
              unaff_XMM6 = blendvps(auVar43,_DAT_149936180,auVar50);
              auVar43._0_4_ = -(uint)(auVar57._0_4_ == in_XMM4._0_4_);
              auVar43._4_4_ = -(uint)(auVar57._4_4_ == in_XMM4._4_4_);
              auVar43._8_4_ = -(uint)(auVar57._8_4_ == in_XMM4._8_4_);
              auVar43._12_4_ = -(uint)(auVar57._12_4_ == in_XMM4._12_4_);
              unaff_XMM7 = blendvps(auVar57,_DAT_149936180,auVar43);
              auVar52._0_4_ = auVar54._0_4_ + unaff_XMM6._0_4_;
              auVar52._4_4_ = auVar54._4_4_ + unaff_XMM6._4_4_;
              auVar52._8_4_ = auVar54._8_4_ + unaff_XMM6._8_4_;
              auVar52._12_4_ = auVar54._12_4_ + unaff_XMM6._12_4_;
              auVar57._0_4_ = auVar53._0_4_ + unaff_XMM7._0_4_;
              auVar57._4_4_ = auVar53._4_4_ + unaff_XMM7._4_4_;
              auVar57._8_4_ = auVar53._8_4_ + unaff_XMM7._8_4_;
              auVar57._12_4_ = auVar53._12_4_ + unaff_XMM7._12_4_;
              uVar12 = uVar12 + 1;
              in_XMM1 = auVar43;
              auVar53 = auVar57;
              auVar54 = auVar52;
            } while (uVar14 != uVar12);
            auVar53 = phaddd(auVar52,auVar52);
            auVar54 = phaddd(auVar53,auVar43);
            auVar53 = phaddd(auVar57,auVar57);
            auVar53 = phaddd(auVar53,auVar43);
            local_100 = local_100 + (ulonglong)uVar17;
            local_f8 = local_f8 + (ulonglong)(uVar14 * 0x18);
            local_e8 = local_e8 + auVar54._0_4_ * 3;
            local_e0 = local_e0 + (ulonglong)uVar17;
            local_d8 = local_d8 + (ulonglong)(uVar14 * 0x18);
            local_c8 = local_c8 + auVar53._0_4_ * 3;
            local_150 = local_150 + (ulonglong)uVar14 * 0x60;
            uVar12 = (ulonglong)(uVar37 & 3);
            local_890 = uVar29;
          }
        }
        uVar26 = local_878;
        puVar31 = local_850;
        puVar3 = local_850;
        if (((uVar10 & 2) != 0) && (uVar33 = (ulonglong)(uVar18 & 3), 3 < uVar18)) {
          uVar14 = uVar18 & 0xfffffffc;
          local_1e0 = local_1e0 - uVar14;
          uVar18 = uVar18 >> 2;
          uVar24 = 0;
          auVar50 = pmovsxbd(in_XMM4,0x1f1f1f1f);
          auVar53 = (undefined1  [16])0x0;
          auVar54 = (undefined1  [16])0x0;
          do {
            auVar43 = pmovzxbw(auVar43,*(undefined8 *)(local_c0 + uVar24 * 4));
            auVar57 = pmovzxbw(in_XMM1,*(undefined8 *)(local_a0 + uVar24 * 4));
            auVar43 = pmovzxwd(unaff_XMM6,auVar43);
            auVar57 = pmovzxwd(unaff_XMM7,auVar57);
            auVar45._0_4_ = -(uint)(auVar43._0_4_ == auVar50._0_4_);
            auVar45._4_4_ = -(uint)(auVar43._4_4_ == auVar50._4_4_);
            auVar45._8_4_ = -(uint)(auVar43._8_4_ == auVar50._8_4_);
            auVar45._12_4_ = -(uint)(auVar43._12_4_ == auVar50._12_4_);
            unaff_XMM6 = blendvps(auVar43,_DAT_149936180,auVar45);
            auVar43._0_4_ = -(uint)(auVar57._0_4_ == auVar50._0_4_);
            auVar43._4_4_ = -(uint)(auVar57._4_4_ == auVar50._4_4_);
            auVar43._8_4_ = -(uint)(auVar57._8_4_ == auVar50._8_4_);
            auVar43._12_4_ = -(uint)(auVar57._12_4_ == auVar50._12_4_);
            unaff_XMM7 = blendvps(auVar57,_DAT_149936180,auVar43);
            auVar55._0_4_ = auVar54._0_4_ + unaff_XMM6._0_4_;
            auVar55._4_4_ = auVar54._4_4_ + unaff_XMM6._4_4_;
            auVar55._8_4_ = auVar54._8_4_ + unaff_XMM6._8_4_;
            auVar55._12_4_ = auVar54._12_4_ + unaff_XMM6._12_4_;
            auVar51._0_4_ = auVar53._0_4_ + unaff_XMM7._0_4_;
            auVar51._4_4_ = auVar53._4_4_ + unaff_XMM7._4_4_;
            auVar51._8_4_ = auVar53._8_4_ + unaff_XMM7._8_4_;
            auVar51._12_4_ = auVar53._12_4_ + unaff_XMM7._12_4_;
            uVar24 = uVar24 + 1;
            in_XMM1 = auVar43;
            auVar53 = auVar51;
            auVar54 = auVar55;
          } while (uVar18 != uVar24);
          auVar53 = phaddd(auVar55,auVar55);
          auVar54 = phaddd(auVar53,auVar43);
          auVar53 = phaddd(auVar51,auVar51);
          auVar43 = phaddd(auVar53,auVar43);
          local_c0 = local_c0 + (ulonglong)uVar14;
          local_b8 = local_b8 + (ulonglong)(uVar18 * 0x18);
          local_a8 = local_a8 + auVar54._0_4_ * 3;
          local_a0 = local_a0 + (ulonglong)uVar14;
          local_98 = local_98 + (ulonglong)(uVar18 * 0x18);
          local_88 = local_88 + auVar43._0_4_ * 3;
          local_148[0] = local_148[0] + (ulonglong)uVar18 * 0x60;
          local_890 = uVar29;
        }
      }
      local_850 = puVar3;
      uVar24 = local_860;
      uVar40 = in_XMM1._8_8_;
      fVar49 = *(float *)(param_1 + 0xf);
      if (local_840 == 0) {
        lVar15 = (longlong)*(int *)(param_3[1] + (local_860 & 0xffffffff) * 4) * 0x60;
        pdVar6 = (double *)(*param_3 + lVar15);
        fVar39 = (float)*pdVar6;
        fVar46 = (float)pdVar6[1];
        pdVar6 = (double *)(*param_3 + 0x10 + lVar15);
        auVar53._0_8_ = CONCAT44((float)pdVar6[1],(float)*pdVar6);
        auVar53._8_8_ = auVar53._0_8_;
      }
      else {
        if ((local_884 & 1) == 0) {
          local_880 = CONCAT44(local_880._4_4_,(int)uVar33);
          FUN_14984f1d2(local_808,uVar29,fVar49);
          uVar40 = in_XMM1._8_8_;
          uVar33 = local_880 & 0xffffffff;
          fVar39 = extraout_XMM0_Da;
          fVar46 = extraout_XMM0_Db;
          fVar47 = extraout_XMM0_Dc;
          fVar48 = extraout_XMM0_Dd;
        }
        else {
          pfVar2 = (float *)(local_848 + (ulonglong)(uint)((int)uVar29 << 4));
          fVar39 = *pfVar2;
          fVar46 = pfVar2[1];
          fVar47 = pfVar2[2];
          fVar48 = pfVar2[3];
        }
        auVar7._4_8_ = uVar40;
        auVar7._0_4_ = fVar46;
        auVar53._0_8_ = auVar7._0_8_ << 0x20;
        auVar53._8_4_ = fVar47;
        auVar53._12_4_ = fVar48;
      }
      pdVar6 = (double *)param_3[2];
      *pdVar6 = (double)fVar39;
      pdVar6[1] = (double)fVar46;
      pdVar6[2] = (double)auVar53._8_4_;
      pdVar6[3] = (double)auVar53._12_4_;
      if (local_83c == 0) {
        lVar15 = (longlong)*(int *)(param_3[1] + (uVar24 & 0xffffffff) * 4) * 0x60;
        pdVar6 = (double *)(*param_3 + 0x20 + lVar15);
        uVar40 = CONCAT44((float)pdVar6[1],(float)*pdVar6);
        auVar54._0_4_ = (float)*(double *)(*param_3 + 0x30 + lVar15);
        auVar54._4_4_ = 0.0;
        auVar54._8_4_ = auVar54._0_4_;
        auVar54._12_4_ = 0.0;
      }
      else {
        if ((uVar27 & 1) == 0) {
          uVar40 = FUN_14984f360(param_1,uVar12,&local_150,&local_100);
          fVar39 = (float)((ulonglong)uVar40 >> 0x20);
          fVar46 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          uVar41 = FUN_14984f360(param_1,uVar12,&local_150,&local_e0);
          auVar54._0_4_ = fVar49 * (float)uVar41 + ((float)uVar40 - fVar49 * (float)uVar40);
          auVar54._4_4_ = fVar49 * (float)((ulonglong)uVar41 >> 0x20) + (fVar39 - fVar49 * fVar39);
          auVar54._8_4_ =
               fVar49 * (float)extraout_XMM0_Qb_01 +
               ((float)extraout_XMM0_Qb_00 - fVar49 * (float)extraout_XMM0_Qb_00);
          auVar54._12_4_ =
               fVar49 * (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) + (fVar46 - fVar49 * fVar46)
          ;
        }
        else {
          auVar54 = *(undefined1 (*) [16])(uVar26 + uVar12 * 0xc);
        }
        uVar40 = auVar54._0_8_;
      }
      lVar15 = param_3[2];
      auVar42._0_8_ = (double)(float)uVar40;
      auVar42._8_8_ = (double)(float)((ulonglong)uVar40 >> 0x20);
      *(undefined1 (*) [16])(lVar15 + 0x20) = auVar42;
      auVar43 = insertps(auVar42,auVar54,0x8e);
      *(double *)(lVar15 + 0x30) = (double)auVar43._0_4_;
      *(double *)(lVar15 + 0x38) = (double)auVar43._4_4_;
      if (local_838 == 0) {
        lVar15 = (longlong)*(int *)(param_3[1] + (uVar24 & 0xffffffff) * 4) * 0x60;
        pdVar6 = (double *)(*param_3 + 0x40 + lVar15);
        uVar40 = CONCAT44((float)pdVar6[1],(float)*pdVar6);
        fVar49 = (float)*(double *)(*param_3 + 0x50 + lVar15);
        auVar56._4_4_ = 0.0;
        auVar56._0_4_ = fVar49;
        auVar56._8_4_ = fVar49;
        auVar56._12_4_ = 0.0;
      }
      else {
        if ((uVar10 & 1) == 0) {
          uVar40 = FUN_14984f54e(param_1,uVar33,local_148,&local_c0);
          fVar39 = (float)((ulonglong)uVar40 >> 0x20);
          fVar46 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          uVar41 = FUN_14984f54e(param_1,uVar33,local_148,&local_a0);
          auVar56._0_4_ = fVar49 * (float)uVar41 + ((float)uVar40 - fVar49 * (float)uVar40);
          auVar56._4_4_ = fVar49 * (float)((ulonglong)uVar41 >> 0x20) + (fVar39 - fVar49 * fVar39);
          auVar56._8_4_ =
               fVar49 * (float)extraout_XMM0_Qb_03 +
               ((float)extraout_XMM0_Qb_02 - fVar49 * (float)extraout_XMM0_Qb_02);
          auVar56._12_4_ =
               fVar49 * (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) + (fVar46 - fVar49 * fVar46)
          ;
        }
        else {
          auVar56 = *(undefined1 (*) [16])(puVar31 + uVar33 * 0xc);
        }
        uVar40 = auVar56._0_8_;
      }
      lVar15 = param_3[2];
      auVar44._0_8_ = (double)(float)uVar40;
      auVar44._8_8_ = (double)(float)((ulonglong)uVar40 >> 0x20);
      *(undefined1 (*) [16])(lVar15 + 0x40) = auVar44;
      auVar43 = insertps(auVar44,auVar56,0x8e);
      fVar49 = auVar43._0_4_;
      fVar39 = auVar43._4_4_;
    }
    *(double *)(lVar15 + 0x50) = (double)fVar49;
    *(double *)(lVar15 + 0x58) = (double)fVar39;
  }
  if ((local_70 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14984f1d2 FUN_14984f1d2 body=398 status=ok
// SIG undefined FUN_14984f1d2(void)

void FUN_14984f1d2(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  uVar10 = (ulonglong)((uint)(*(int *)(param_1 + 0x6e0) + param_2 * 0x80) >> 3);
  uVar2 = *(ulonglong *)(lVar1 + uVar10);
  bVar7 = (byte)*(int *)(param_1 + 0x6e0) & 7;
  uVar3 = *(ulonglong *)(lVar1 + 4 + uVar10);
  uVar4 = *(ulonglong *)(lVar1 + 8 + uVar10);
  uVar9 = (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) << bVar7;
  uVar4 = *(ulonglong *)(lVar1 + 0xc + uVar10);
  uVar6 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) << bVar7) >> 0x20;
  uVar10 = (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
            (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
            (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38) << bVar7 & 0xffffffff00000000;
  uVar5 = (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) << bVar7 & 0xffffffff00000000;
  auVar19._8_8_ = uVar9 >> 0x20 | uVar5;
  auVar19._0_8_ = uVar6 | uVar10;
  lVar1 = *(longlong *)(param_1 + 0x6f8);
  uVar8 = (ulonglong)((uint)(param_2 * 0x80 + *(int *)(param_1 + 0x700)) >> 3);
  uVar2 = *(ulonglong *)(lVar1 + uVar8);
  bVar7 = (byte)*(int *)(param_1 + 0x700) & 7;
  uVar3 = *(ulonglong *)(lVar1 + 4 + uVar8);
  uVar4 = *(ulonglong *)(lVar1 + 8 + uVar8);
  uVar11 = (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
            (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) << bVar7;
  uVar4 = *(ulonglong *)(lVar1 + 0xc + uVar8);
  uVar8 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) << bVar7) >> 0x20;
  uVar2 = (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
           (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38) << bVar7 & 0xffffffff00000000;
  uVar3 = (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) << bVar7 & 0xffffffff00000000;
  auVar16._8_8_ = uVar11 >> 0x20 | uVar3;
  auVar16._0_8_ = uVar8 | uVar2;
  if ((0.0 < param_3) && (param_3 < 1.0)) {
    auVar19 = dpps(auVar19,auVar16,0xff);
    fVar12 = (float)uVar6;
    fVar13 = (float)(uVar10 >> 0x20);
    fVar14 = (float)(uVar9 >> 0x20);
    fVar15 = (float)(uVar5 >> 0x20);
    fVar12 = (fVar12 - param_3 * fVar12) +
             (float)(auVar19._0_4_ & 0x80000000 ^ (uint)uVar8) * param_3;
    fVar13 = (fVar13 - param_3 * fVar13) +
             (float)(auVar19._4_4_ & 0x80000000 ^ (uint)(uVar2 >> 0x20)) * param_3;
    fVar14 = (fVar14 - param_3 * fVar14) +
             (float)(auVar19._8_4_ & 0x80000000 ^ (uint)(uVar11 >> 0x20)) * param_3;
    fVar15 = (fVar15 - param_3 * fVar15) +
             (float)(auVar19._12_4_ & 0x80000000 ^ (uint)(uVar3 >> 0x20)) * param_3;
    fVar12 = fVar12 * fVar12;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar18 = fVar14 + fVar12;
    fVar13 = fVar15 + fVar13 * fVar13;
    auVar17._0_4_ = fVar13 + fVar18;
    auVar17._4_4_ = fVar18 + fVar13;
    auVar17._8_4_ = fVar18 + fVar12 + fVar14;
    auVar17._12_4_ = fVar18 + fVar12 + fVar15;
    rsqrtss(auVar17,auVar17);
  }
  return;
}



// FUNCTION 14984f360 FUN_14984f360 body=494 status=ok
// SIG undefined FUN_14984f360(void)

void FUN_14984f360(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
  if (bVar2 != 0x1f) {
    lVar3 = param_4[1];
    lVar4 = (ulonglong)param_2 * 6;
    if (bVar2 == 0) {
      pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)bVar2 * 8);
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = uVar1;
      auVar5._8_4_ = uVar1;
      auVar5._12_4_ = uVar1;
      if (*(char *)(param_1 + 0x20) != '\0') {
        auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
        pmovzxwd(auVar5,auVar5);
        auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
        pmovzxwd(auVar5,auVar5);
      }
    }
  }
  return;
}



// FUNCTION 14984f54e FUN_14984f54e body=494 status=ok
// SIG undefined FUN_14984f54e(void)

void FUN_14984f54e(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
  if (bVar2 != 0x1f) {
    lVar3 = param_4[1];
    lVar4 = (ulonglong)param_2 * 6;
    if (bVar2 == 0) {
      pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)bVar2 * 8);
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = uVar1;
      auVar5._8_4_ = uVar1;
      auVar5._12_4_ = uVar1;
      if (*(char *)(param_1 + 0x20) != '\0') {
        auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
        pmovzxwd(auVar5,auVar5);
        auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
        pmovzxwd(auVar5,auVar5);
      }
    }
  }
  return;
}



// FUNCTION 14984f73c FUN_14984f73c body=2474 status=ok
// SIG undefined FUN_14984f73c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14984f73c(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  double *pdVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  float extraout_XMM0_Da;
  double dVar35;
  float extraout_XMM0_Db;
  float fVar42;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar43;
  float extraout_XMM0_Dc;
  float fVar45;
  double dVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_00;
  float fVar46;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 in_XMM1 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM4 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar52 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auStack_8c8 [44];
  uint local_89c;
  uint local_898;
  uint local_894;
  ulonglong local_890;
  undefined1 *local_888;
  uint local_880;
  uint local_87c;
  ulonglong local_878;
  uint local_86c;
  uint local_868;
  uint local_864;
  longlong *local_860;
  longlong local_858;
  longlong local_850;
  longlong local_848;
  longlong local_840;
  longlong local_838;
  longlong local_830;
  undefined1 local_828 [512];
  undefined8 local_628;
  int local_620;
  undefined8 local_418;
  int local_410;
  undefined8 local_208;
  int local_200;
  longlong local_170;
  longlong local_168 [4];
  int local_148;
  int local_128;
  longlong local_120;
  longlong local_118;
  int local_108;
  longlong local_100;
  longlong local_f8;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_8c8;
  lVar9 = *param_1;
  if ((param_2 < *(uint *)(lVar9 + 0x10)) &&
     (0.0 < *(float *)((longlong)param_1 + 0x34) || *(float *)((longlong)param_1 + 0x34) == 0.0)) {
    uVar11 = *(uint *)(lVar9 + 0x1c) >> 1 & 1;
    fVar55 = (float)uVar11;
    auVar54._4_4_ = fVar55;
    auVar54._0_4_ = fVar55;
    auVar54._8_4_ = fVar55;
    auVar54._12_4_ = fVar55;
    uVar21 = (ulonglong)(*(uint *)(lVar9 + 0x10) + 0xf >> 4);
    lVar3 = (ulonglong)*(uint *)(lVar9 + 0x48) + 0x20 + lVar9;
    lVar1 = lVar3 + uVar21 * 4;
    lVar17 = lVar1 + uVar21 * 4;
    if (*(byte *)((longlong)param_1 + 0x1f) == 0) {
      lVar17 = lVar3;
    }
    uVar29 = -(uint)*(byte *)((longlong)param_1 + 0x1f);
    puVar31 = (undefined1 *)(ulonglong)uVar29;
    uVar21 = (ulonglong)(param_2 >> 4);
    uVar7 = (ulonglong)((param_2 >> 4) * 4);
    bVar10 = ~((char)param_2 * '\x02') & 0x1e;
    uVar27 = *(uint *)(uVar7 + lVar3) >> bVar10;
    uVar18 = uVar27 & 3;
    uVar23 = *(uint *)(uVar7 + lVar1) >> bVar10;
    uVar24 = uVar23 & 3;
    uVar6 = *(uint *)(lVar17 + uVar7) >> bVar10 & uVar29;
    uVar12 = uVar6 & 3;
    local_87c = uVar24 | uVar18 | uVar12;
    if (local_87c == 0) {
      puVar5 = *(undefined8 **)(param_3 + 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0x3ff0000000000000;
      lVar9 = *(longlong *)(param_3 + 0x10);
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      lVar9 = *(longlong *)(param_3 + 0x10);
      auVar39._0_8_ = (double)uVar11;
      auVar39._8_8_ = (double)uVar11;
      *(undefined1 (*) [16])(lVar9 + 0x40) = auVar39;
      auVar54 = insertps(auVar39,auVar54,0x8e);
      fVar55 = auVar54._0_4_;
      fVar4 = auVar54._4_4_;
      local_890 = uVar21;
    }
    else {
      uVar11 = (param_2 & 0xfffffff0) + 0x10;
      local_850 = lVar9 + 0x20;
      local_898 = ~(0xffffffffU >> (((char)param_2 - (char)uVar11) * '\x02' & 0x1fU));
      if (param_2 == uVar11) {
        local_898 = 0xffffffff;
      }
      local_878 = uVar21 + 1;
      uVar7 = 0;
      uVar16 = 0;
      uVar33 = 0;
      uVar13 = 0;
      uVar20 = 0;
      uVar15 = 0;
      uVar11 = 0;
      do {
        local_888 = (undefined1 *)CONCAT44(local_888._4_4_,uVar11);
        uVar34 = 0xffffffff;
        if (uVar21 == uVar7) {
          uVar34 = local_898;
        }
        uVar25 = *(uint *)(lVar3 + uVar7 * 4) & uVar34;
        uVar19 = *(uint *)(lVar1 + uVar7 * 4) & uVar34;
        uVar34 = *(uint *)(lVar17 + uVar7 * 4) & uVar29 & uVar34;
        uVar28 = (uVar25 >> 2 & 0x11111111) + (uVar25 & 0x11111111);
        uVar16 = uVar16 + (((uVar28 >> 4) + uVar28 & 0x7070707) * 0x1010101 >> 0x18);
        puVar14 = &DAT_aaaaaaaa;
        uVar25 = (uVar25 & 0xaaaaaaaa) - (uVar25 >> 1 & 0x55555555);
        uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
        uVar20 = uVar20 + (((uVar25 >> 4) + uVar25 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar25 = (uVar19 >> 2 & 0x11111111) + (uVar19 & 0x11111111);
        uVar33 = uVar33 + (((uVar25 >> 4) + uVar25 & 0x7070707) * 0x1010101 >> 0x18);
        uVar19 = (uVar19 & 0xaaaaaaaa) - (uVar19 >> 1 & 0x55555555);
        uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
        uVar15 = uVar15 + (((uVar19 >> 4) + uVar19 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        uVar19 = (uVar34 >> 2 & 0x11111111) + (uVar34 & 0x11111111);
        uVar13 = uVar13 + (((uVar19 >> 4) + uVar19 & 0x7070707) * 0x1010101 >> 0x18);
        uVar34 = (uVar34 & 0xaaaaaaaa) - (uVar34 >> 1 & 0x55555555);
        uVar34 = (uVar34 >> 2 & 0x33333333) + (uVar34 & 0x33333333);
        uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f) * 0x1010101 >> 0x18;
        local_890 = (ulonglong)uVar34;
        uVar11 = uVar11 + uVar34;
        uVar7 = uVar7 + 1;
      } while (local_878 != uVar7);
      if ((local_87c & 1) == 0) {
        uVar29 = 0;
        uVar7 = 0;
        uVar30 = 0;
      }
      else {
        uVar30 = (ulonglong)*(uint *)(lVar9 + 0x4c) + local_850;
        uVar7 = 0;
        uVar29 = 0;
        local_890 = uVar30;
        if (((uVar27 & 1) != 0) && (uVar29 = uVar16 & 3, 3 < uVar16)) {
          local_890 = uVar30 + (ulonglong)(uVar16 & 0xfffffffc) * 0x10;
        }
        puVar31 = (undefined1 *)(uVar30 + (uint)(*(int *)(lVar9 + 0x34) << 4));
        puVar14 = puVar31;
        if (((uVar23 & 1) != 0) && (uVar7 = (ulonglong)(uVar33 & 3), 3 < uVar33)) {
          puVar14 = puVar31 + (ulonglong)(uVar33 & 0xfffffffc) * 0xc;
        }
        puVar31 = puVar31 + (uint)(*(int *)(lVar9 + 0x38) * 0xc);
        uVar30 = 0;
        if (((uVar6 & 1) != 0) && (uVar30 = (ulonglong)(uVar13 & 3), 3 < uVar13)) {
          puVar31 = puVar31 + (ulonglong)(uVar13 & 0xfffffffc) * 0xc;
        }
      }
      local_628 = 0;
      local_418 = 0;
      local_208 = 0;
      uVar26 = local_890;
      local_89c = uVar23;
      local_894 = uVar27;
      local_880 = uVar6;
      local_86c = uVar18;
      local_868 = uVar24;
      local_864 = uVar12;
      local_860 = param_1;
      local_858 = param_3;
      local_848 = lVar9;
      local_840 = lVar1;
      local_838 = lVar17;
      local_830 = lVar3;
      if (local_87c != 1) {
        local_898 = (uint)uVar30;
        local_888 = puVar14;
        local_878 = uVar7;
        auVar40._0_8_ = FUN_14984ca00(local_828,param_1);
        auVar40._8_8_ = extraout_XMM0_Qb;
        if (((local_894 & 2) != 0) && (uVar29 = uVar20 & 3, 3 < uVar20)) {
          local_620 = local_620 - (uVar20 & 0xfffffffc);
          iVar32 = (uVar20 & 0xfffffffc) * 0x80;
          local_148 = local_148 + iVar32;
          local_128 = local_128 + iVar32;
        }
        uVar7 = local_878 & 0xffffffff;
        if ((local_89c & 2) != 0) {
          uVar7 = (ulonglong)(uVar15 & 3);
          if (3 < uVar15) {
            uVar18 = uVar15 & 0xfffffffc;
            local_410 = local_410 - uVar18;
            uVar12 = uVar15 >> 2;
            uVar21 = 0;
            in_XMM4 = pmovsxbd(in_XMM4,0x1f1f1f1f);
            auVar39 = (undefined1  [16])0x0;
            auVar50 = (undefined1  [16])0x0;
            do {
              auVar40 = pmovzxbw(auVar40,*(undefined8 *)(local_120 + uVar21 * 4));
              auVar47 = pmovzxbw(in_XMM1,*(undefined8 *)(local_100 + uVar21 * 4));
              auVar40 = pmovzxwd(unaff_XMM6,auVar40);
              auVar53 = pmovzxwd(unaff_XMM7,auVar47);
              auVar47._0_4_ = -(uint)(auVar40._0_4_ == in_XMM4._0_4_);
              auVar47._4_4_ = -(uint)(auVar40._4_4_ == in_XMM4._4_4_);
              auVar47._8_4_ = -(uint)(auVar40._8_4_ == in_XMM4._8_4_);
              auVar47._12_4_ = -(uint)(auVar40._12_4_ == in_XMM4._12_4_);
              unaff_XMM6 = blendvps(auVar40,_DAT_149936180,auVar47);
              auVar40._0_4_ = -(uint)(auVar53._0_4_ == in_XMM4._0_4_);
              auVar40._4_4_ = -(uint)(auVar53._4_4_ == in_XMM4._4_4_);
              auVar40._8_4_ = -(uint)(auVar53._8_4_ == in_XMM4._8_4_);
              auVar40._12_4_ = -(uint)(auVar53._12_4_ == in_XMM4._12_4_);
              unaff_XMM7 = blendvps(auVar53,_DAT_149936180,auVar40);
              auVar49._0_4_ = auVar50._0_4_ + unaff_XMM6._0_4_;
              auVar49._4_4_ = auVar50._4_4_ + unaff_XMM6._4_4_;
              auVar49._8_4_ = auVar50._8_4_ + unaff_XMM6._8_4_;
              auVar49._12_4_ = auVar50._12_4_ + unaff_XMM6._12_4_;
              auVar53._0_4_ = auVar39._0_4_ + unaff_XMM7._0_4_;
              auVar53._4_4_ = auVar39._4_4_ + unaff_XMM7._4_4_;
              auVar53._8_4_ = auVar39._8_4_ + unaff_XMM7._8_4_;
              auVar53._12_4_ = auVar39._12_4_ + unaff_XMM7._12_4_;
              uVar21 = uVar21 + 1;
              in_XMM1 = auVar40;
              auVar39 = auVar53;
              auVar50 = auVar49;
            } while (uVar12 != uVar21);
            auVar39 = phaddd(auVar49,auVar49);
            auVar50 = phaddd(auVar39,auVar40);
            auVar39 = phaddd(auVar53,auVar53);
            auVar39 = phaddd(auVar39,auVar40);
            local_120 = local_120 + (ulonglong)uVar18;
            local_118 = local_118 + (ulonglong)(uVar12 * 0x18);
            local_108 = local_108 + auVar50._0_4_ * 3;
            local_100 = local_100 + (ulonglong)uVar18;
            local_f8 = local_f8 + (ulonglong)(uVar12 * 0x18);
            local_e8 = local_e8 + auVar39._0_4_ * 3;
            local_170 = local_170 + (ulonglong)uVar12 * 0x60;
            uVar7 = (ulonglong)(uVar15 & 3);
          }
        }
        uVar30 = (ulonglong)local_898;
        puVar14 = local_888;
        uVar26 = local_890;
        uVar21 = local_890;
        if (((uVar6 & 2) != 0) && (uVar30 = (ulonglong)(uVar11 & 3), 3 < uVar11)) {
          uVar12 = uVar11 & 0xfffffffc;
          local_200 = local_200 - uVar12;
          uVar11 = uVar11 >> 2;
          uVar22 = 0;
          auVar47 = pmovsxbd(in_XMM4,0x1f1f1f1f);
          auVar39 = (undefined1  [16])0x0;
          auVar50 = (undefined1  [16])0x0;
          do {
            auVar40 = pmovzxbw(auVar40,*(undefined8 *)(local_e0 + uVar22 * 4));
            auVar53 = pmovzxbw(in_XMM1,*(undefined8 *)(local_c0 + uVar22 * 4));
            auVar40 = pmovzxwd(unaff_XMM6,auVar40);
            auVar53 = pmovzxwd(unaff_XMM7,auVar53);
            auVar41._0_4_ = -(uint)(auVar40._0_4_ == auVar47._0_4_);
            auVar41._4_4_ = -(uint)(auVar40._4_4_ == auVar47._4_4_);
            auVar41._8_4_ = -(uint)(auVar40._8_4_ == auVar47._8_4_);
            auVar41._12_4_ = -(uint)(auVar40._12_4_ == auVar47._12_4_);
            unaff_XMM6 = blendvps(auVar40,_DAT_149936180,auVar41);
            auVar40._0_4_ = -(uint)(auVar53._0_4_ == auVar47._0_4_);
            auVar40._4_4_ = -(uint)(auVar53._4_4_ == auVar47._4_4_);
            auVar40._8_4_ = -(uint)(auVar53._8_4_ == auVar47._8_4_);
            auVar40._12_4_ = -(uint)(auVar53._12_4_ == auVar47._12_4_);
            unaff_XMM7 = blendvps(auVar53,_DAT_149936180,auVar40);
            auVar51._0_4_ = auVar50._0_4_ + unaff_XMM6._0_4_;
            auVar51._4_4_ = auVar50._4_4_ + unaff_XMM6._4_4_;
            auVar51._8_4_ = auVar50._8_4_ + unaff_XMM6._8_4_;
            auVar51._12_4_ = auVar50._12_4_ + unaff_XMM6._12_4_;
            auVar48._0_4_ = auVar39._0_4_ + unaff_XMM7._0_4_;
            auVar48._4_4_ = auVar39._4_4_ + unaff_XMM7._4_4_;
            auVar48._8_4_ = auVar39._8_4_ + unaff_XMM7._8_4_;
            auVar48._12_4_ = auVar39._12_4_ + unaff_XMM7._12_4_;
            uVar22 = uVar22 + 1;
            in_XMM1 = auVar40;
            auVar39 = auVar48;
            auVar50 = auVar51;
          } while (uVar11 != uVar22);
          auVar39 = phaddd(auVar51,auVar51);
          auVar50 = phaddd(auVar39,auVar40);
          auVar39 = phaddd(auVar48,auVar48);
          auVar39 = phaddd(auVar39,auVar40);
          local_e0 = local_e0 + (ulonglong)uVar12;
          local_d8 = local_d8 + (ulonglong)(uVar11 * 0x18);
          local_c8 = local_c8 + auVar50._0_4_ * 3;
          local_c0 = local_c0 + (ulonglong)uVar12;
          local_b8 = local_b8 + (ulonglong)(uVar11 * 0x18);
          local_a8 = local_a8 + auVar39._0_4_ * 3;
          local_168[0] = local_168[0] + (ulonglong)uVar11 * 0x60;
        }
      }
      local_890 = uVar21;
      fVar4 = *(float *)(param_1 + 0xf);
      if (local_86c == 0) {
        pdVar8 = *(double **)(param_3 + 0x10);
        *pdVar8 = 0.0;
        pdVar8[1] = 0.0;
        dVar35 = 0.0;
        dVar44 = 1.0;
      }
      else {
        if ((local_894 & 1) == 0) {
          FUN_14984f1d2(local_828,uVar29,fVar4);
          fVar42 = extraout_XMM0_Da;
          fVar46 = extraout_XMM0_Db;
          fVar43 = extraout_XMM0_Dc;
          fVar45 = extraout_XMM0_Dd;
        }
        else {
          pfVar2 = (float *)(uVar26 + (uVar29 << 4));
          fVar42 = *pfVar2;
          fVar46 = pfVar2[1];
          fVar43 = pfVar2[2];
          fVar45 = pfVar2[3];
        }
        pdVar8 = *(double **)(param_3 + 0x10);
        *pdVar8 = (double)fVar42;
        pdVar8[1] = (double)fVar46;
        dVar35 = (double)fVar43;
        dVar44 = (double)fVar45;
      }
      pdVar8[2] = dVar35;
      pdVar8[3] = dVar44;
      if (local_868 == 0) {
        lVar9 = *(longlong *)(param_3 + 0x10);
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        *(undefined8 *)(lVar9 + 0x28) = 0;
      }
      else {
        if ((local_89c & 1) == 0) {
          uVar36 = FUN_14984f360(param_1,uVar7,&local_170,&local_120);
          fVar42 = (float)((ulonglong)uVar36 >> 0x20);
          fVar46 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          uVar37 = FUN_14984f360(param_1,uVar7,&local_170,&local_100);
          auVar50._0_4_ = fVar4 * (float)uVar37 + ((float)uVar36 - fVar4 * (float)uVar36);
          auVar50._4_4_ = fVar4 * (float)((ulonglong)uVar37 >> 0x20) + (fVar42 - fVar4 * fVar42);
          auVar50._8_4_ =
               fVar4 * (float)extraout_XMM0_Qb_01 +
               ((float)extraout_XMM0_Qb_00 - fVar4 * (float)extraout_XMM0_Qb_00);
          auVar50._12_4_ =
               fVar4 * (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) + (fVar46 - fVar4 * fVar46);
        }
        else {
          auVar50 = *(undefined1 (*) [16])(puVar14 + uVar7 * 0xc);
        }
        lVar9 = *(longlong *)(param_3 + 0x10);
        auVar38._0_8_ = (double)auVar50._0_4_;
        auVar38._8_8_ = (double)auVar50._4_4_;
        *(undefined1 (*) [16])(lVar9 + 0x20) = auVar38;
        auVar39 = insertps(auVar38,auVar50,0x8e);
        *(double *)(lVar9 + 0x30) = (double)auVar39._0_4_;
        *(double *)(lVar9 + 0x38) = (double)auVar39._4_4_;
      }
      if (local_864 == 0) {
        auVar54 = blendps(auVar54,ZEXT816(0),8);
        uVar36 = CONCAT44(fVar55,fVar55);
      }
      else {
        if ((uVar6 & 1) == 0) {
          uVar36 = FUN_14984f54e(param_1,uVar30,local_168,&local_e0);
          fVar55 = (float)((ulonglong)uVar36 >> 0x20);
          fVar42 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          uVar37 = FUN_14984f54e(param_1,uVar30,local_168,&local_c0);
          auVar52._0_4_ = fVar4 * (float)uVar37 + ((float)uVar36 - fVar4 * (float)uVar36);
          auVar52._4_4_ = fVar4 * (float)((ulonglong)uVar37 >> 0x20) + (fVar55 - fVar4 * fVar55);
          auVar52._8_4_ =
               fVar4 * (float)extraout_XMM0_Qb_03 +
               ((float)extraout_XMM0_Qb_02 - fVar4 * (float)extraout_XMM0_Qb_02);
          auVar52._12_4_ =
               fVar4 * (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) + (fVar42 - fVar4 * fVar42);
        }
        else {
          auVar52 = *(undefined1 (*) [16])(puVar31 + uVar30 * 0xc);
        }
        uVar36 = auVar52._0_8_;
        auVar54 = blendps(ZEXT816(0),auVar52,7);
      }
      lVar9 = *(longlong *)(param_3 + 0x10);
      *(double *)(lVar9 + 0x40) = (double)(float)uVar36;
      *(double *)(lVar9 + 0x48) = (double)(float)((ulonglong)uVar36 >> 0x20);
      fVar55 = auVar54._8_4_;
      fVar4 = auVar54._12_4_;
    }
    *(double *)(lVar9 + 0x50) = (double)fVar55;
    *(double *)(lVar9 + 0x58) = (double)fVar4;
  }
  if ((local_90 ^ (ulonglong)auStack_8c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498500e7 FUN_1498500e7 body=147 status=ok
// SIG undefined FUN_1498500e7(void)

void FUN_1498500e7(longlong *param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x14) != 0) {
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (*(float *)((longlong)param_1 + 0xc) <= param_2) {
      param_2 = *(float *)((longlong)param_1 + 0xc);
    }
    if (((*(float *)((longlong)param_1 + 0x14) != param_2) ||
        (NAN(*(float *)((longlong)param_1 + 0x14)) || NAN(param_2))) ||
       (*(char *)((longlong)param_1 + 0x21) != '\0')) {
      *(float *)((longlong)param_1 + 0x14) = param_2;
      param_2 = param_2 * *(float *)(lVar2 + 0x18);
      uVar1 = *(uint *)(lVar2 + 0x14) - 1;
      uVar3 = (uint)(longlong)param_2;
      uVar4 = uVar3 + 1;
      if ((char)param_1[4] == '\0') {
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
      }
      else if (uVar1 < uVar3) {
        param_2 = 0.0;
        uVar3 = 0;
        uVar4 = 0;
      }
      else if (*(uint *)(lVar2 + 0x14) <= uVar4) {
        uVar4 = 0;
      }
      *(float *)(param_1 + 2) = param_2 - (float)uVar3;
      *(undefined1 *)((longlong)param_1 + 0x21) = 0;
      *(uint *)(param_1 + 3) = uVar3 * *(int *)(lVar2 + 0x20);
      *(uint *)((longlong)param_1 + 0x1c) = uVar4 * *(int *)(lVar2 + 0x20);
    }
  }
  return;
}



// FUNCTION 14985017a FUN_14985017a body=622 status=ok
// SIG undefined FUN_14985017a(void)

void FUN_14985017a(longlong *param_1,uint param_2,undefined4 *param_3)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  
  lVar6 = *param_1;
  if (*(uint *)(lVar6 + 0x10) <= param_2) {
    return;
  }
  if (*(float *)((longlong)param_1 + 0x14) <= 0.0 && *(float *)((longlong)param_1 + 0x14) != 0.0) {
    return;
  }
  auVar26 = ZEXT416((uint)*(float *)(param_1 + 2));
  cVar2 = *(char *)((longlong)param_1 + 0x21);
  if (cVar2 == '\x03') {
    auVar26 = ZEXT416((uint)(*(float *)(param_1 + 2) + 0.5));
    auVar26 = roundss(auVar26,auVar26,9);
  }
  else if (cVar2 == '\x02') {
    auVar26._0_12_ = ZEXT812(0x3f800000);
    auVar26._12_4_ = 0;
  }
  else if (cVar2 == '\x01') {
    auVar26 = ZEXT816(0);
  }
  lVar13 = lVar6 + 0x20;
  puVar14 = &DAT_14beb2360;
  if (*(short *)(lVar6 + 0xc) == 7) {
    puVar14 = &DAT_14beb2340;
  }
  uVar22 = (ulonglong)*(byte *)(lVar6 + 0xf);
  iVar18 = 0;
  uVar10 = 0;
  if (uVar22 < 0xd) {
    uVar10 = *(uint *)(&DAT_14beb2440 + uVar22 * 4);
  }
  puVar15 = (undefined4 *)((ulonglong)*(uint *)(lVar6 + 0x28) + lVar13);
  pfVar21 = (float *)((ulonglong)*(uint *)(lVar6 + 0x2c) + lVar13);
  lVar24 = (ulonglong)*(uint *)(lVar6 + 0x24) + lVar13;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulonglong)param_2;
    uVar23 = 0;
    iVar18 = 0;
    do {
      bVar3 = puVar14[*(byte *)(lVar24 + uVar23)];
      iVar18 = iVar18 + uVar10 * bVar3;
      uVar16 = 0;
      if (bVar3 < 0x20) {
        uVar16 = (ulonglong)(uVar10 * 2);
      }
      if (bVar3 == 0) {
        uVar16 = 0;
      }
      uVar17 = 0;
      if (bVar3 == 0) {
        uVar17 = (ulonglong)uVar10;
      }
      pfVar21 = pfVar21 + uVar16;
      puVar15 = puVar15 + uVar17;
      uVar23 = uVar23 + 1;
    } while (uVar12 != uVar23);
  }
  if (uVar22 != 0) {
    return;
  }
  bVar3 = puVar14[*(byte *)(lVar24 + uVar12)];
  lVar13 = (ulonglong)*(uint *)(lVar6 + 0x30) + lVar13;
  auVar25._4_12_ = auVar26._4_12_;
  if (bVar3 == 0x20) {
    uVar10 = (int)param_1[3] + iVar18;
    uVar22 = *(ulonglong *)(lVar13 + (ulonglong)(uVar10 >> 3));
    fVar20 = (float)(((uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                       (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                       (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                       (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38) << ((byte)uVar10 & 7)) >> 0x20);
    uVar10 = iVar18 + *(int *)((longlong)param_1 + 0x1c);
    uVar22 = *(ulonglong *)(lVar13 + (ulonglong)(uVar10 >> 3));
    uVar9 = (undefined4)
            (((uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
               (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
               (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 | (uVar22 & 0xff00) << 0x28
              | uVar22 << 0x38) << ((byte)uVar10 & 7)) >> 0x20);
    auVar28._4_4_ = uVar9;
    auVar28._0_4_ = uVar9;
    auVar28._8_4_ = uVar9;
    auVar28._12_4_ = uVar9;
  }
  else {
    if (bVar3 == 0) {
      uVar9 = *puVar15;
      goto LAB_1498503de;
    }
    uVar11 = (int)param_1[3] + iVar18;
    uVar4 = *(uint *)(lVar13 + (ulonglong)(uVar11 >> 3));
    auVar27._4_12_ = in_XMM1._4_12_;
    fVar1 = *(float *)(&DAT_14beb2380 + (ulonglong)bVar3 * 8);
    uVar19 = iVar18 + *(int *)((longlong)param_1 + 0x1c);
    uVar5 = *(uint *)(lVar13 + (ulonglong)(uVar19 >> 3));
    auVar29._4_12_ = in_XMM2._4_12_;
    auVar27._0_4_ =
         (float)(int)((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18) >> (-(((byte)uVar11 & 7) + bVar3) & 0x1f) &
                     *(uint *)(&DAT_14beb2384 + (ulonglong)bVar3 * 8)) * fVar1 * pfVar21[uVar10] +
         *pfVar21;
    auVar7._4_4_ = fVar1;
    auVar7._0_4_ = fVar1;
    auVar7._8_4_ = fVar1;
    auVar7._12_4_ = fVar1;
    auVar28 = blendps(auVar27,auVar7,0xe);
    fVar20 = auVar28._0_4_;
    auVar29._0_4_ =
         (float)(int)((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18) >> (-(((byte)uVar19 & 7) + bVar3) & 0x1f) &
                     *(uint *)(&DAT_14beb2384 + (ulonglong)bVar3 * 8)) * fVar1 * pfVar21[uVar10] +
         *pfVar21;
    auVar8._4_4_ = fVar1;
    auVar8._0_4_ = fVar1;
    auVar8._8_4_ = fVar1;
    auVar8._12_4_ = fVar1;
    auVar28 = blendps(auVar29,auVar8,0xe);
  }
  auVar25._0_4_ = auVar26._0_4_ * auVar28._0_4_ + (fVar20 - auVar26._0_4_ * fVar20);
  auVar26 = blendps(auVar25,auVar28,0xe);
  uVar9 = auVar26._0_4_;
LAB_1498503de:
  *param_3 = uVar9;
  return;
}



// FUNCTION 1498503ec FUN_1498503ec body=332 status=ok
// SIG undefined FUN_1498503ec(void)

undefined8 * FUN_1498503ec(undefined8 *param_1,longlong *param_2,ushort param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [12];
  undefined1 auVar11 [16];
  
  auVar12 = in_XMM1._4_12_;
  *param_1 = &PTR_LAB_14beb26c0;
  puVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 3) = param_3;
  *(char *)((longlong)param_1 + 0x1a) = param_4;
  iVar10 = (int)param_2[1];
  if (param_4 == '\0') {
    _Src = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar10;
    if (iVar10 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1405b70fe(puVar1,iVar10,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar10 * 0x18);
    }
  }
  else {
    iVar7 = (uint)param_3 + iVar10;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar7 == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1447a8aa0(puVar1,iVar7);
      auVar12 = in_XMM1._4_12_;
      iVar10 = (int)param_2[1];
      param_3 = *(ushort *)(param_1 + 3);
      iVar9 = *(int *)(param_1 + 2);
    }
    if (iVar9 < iVar7) {
      auVar11._0_4_ = (float)param_3 * 0.5;
      auVar11._4_12_ = auVar12;
      auVar11 = roundps(auVar11,ZEXT416((uint)auVar11._0_4_),2);
      iVar10 = (int)((float)iVar10 - auVar11._0_4_);
      do {
        iVar10 = (iVar10 + 1) % (int)param_2[1];
        puVar8 = (undefined4 *)((longlong)iVar10 * 0x18 + *param_2);
        *(uint *)(param_1 + 2) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0x14) < iVar9 + 1U) {
          FUN_1403e3958(puVar1,iVar9);
        }
        lVar3 = param_1[1];
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar9 * 0x18) = *(undefined8 *)(puVar8 + 4);
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        puVar2 = (undefined4 *)(lVar3 + (longlong)iVar9 * 0x18);
        *puVar2 = *puVar8;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        iVar9 = *(int *)(param_1 + 2);
      } while (iVar9 < iVar7);
    }
  }
  return param_1;
}



// FUNCTION 14985053a FUN_14985053a body=278 status=ok
// SIG undefined FUN_14985053a(void)

longlong * FUN_14985053a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    uVar2 = *(ushort *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x10) - (uint)uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 != 0) {
      auVar9 = ZEXT416((uint)((float)uVar2 * 0.5));
      auVar9 = roundps(auVar9,auVar9,2);
      FUN_1447a8aa0(param_2,iVar5);
      uVar6 = (ulonglong)(iVar5 + (uint)(iVar5 == 0));
      lVar8 = (longlong)(int)(auVar9._0_4_ + -1.0) * 0x18;
      do {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar8);
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_1403e3958(param_2,iVar5);
        }
        lVar3 = *param_2;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar5 * 0x18) = puVar7[2];
        uVar4 = puVar7[1];
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar5 * 0x18);
        *puVar1 = *puVar7;
        puVar1[1] = uVar4;
        lVar8 = lVar8 + 0x18;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    *param_2 = 0;
    iVar5 = *(int *)(param_1 + 0x10);
    _Src = *(void **)(param_1 + 8);
    *(int *)(param_2 + 1) = iVar5;
    if ((longlong)iVar5 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1405b70fe(param_2,iVar5,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar5 * 0x18);
    }
  }
  return param_2;
}



// FUNCTION 149850652 FUN_149850652 body=205 status=ok
// SIG undefined FUN_149850652(void)

longlong * FUN_149850652(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    uVar1 = *(ushort *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x10) - (uint)uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 != 0) {
      auVar6 = ZEXT416((uint)((float)uVar1 * 0.5));
      auVar6 = roundps(auVar6,auVar6,2);
      iVar4 = (int)(auVar6._0_4_ + -1.0);
      FUN_1448759c8(param_2,iVar5);
      iVar5 = iVar5 + (uint)(iVar5 == 0);
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14488eebe(param_2,iVar2);
        }
        *(short *)(*param_2 + (longlong)iVar2 * 2) = (short)iVar4;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_14008ec20(param_2,*(undefined4 *)(param_1 + 0x10),1);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar3 = 0;
      do {
        *(short *)(*param_2 + lVar3 * 2) = (short)lVar3;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x10));
    }
  }
  return param_2;
}



// FUNCTION 149850720 FUN_149850720 body=218 status=ok
// SIG undefined FUN_149850720(void)

void FUN_149850720(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    if (0 < *(int *)(param_1 + 0x10)) {
      auVar9._4_12_ = in_XMM1._4_12_;
      auVar9._0_4_ = (float)*(ushort *)(param_1 + 0x18) * 0.5;
      auVar9 = roundps(auVar9,ZEXT416((uint)auVar9._0_4_),2);
      iVar7 = (int)((float)(int)param_2[1] - auVar9._0_4_);
      lVar6 = 0;
      lVar8 = 0;
      do {
        iVar7 = (iVar7 + 1) % (int)param_2[1];
        lVar3 = *param_2;
        lVar8 = lVar8 + 1;
        lVar4 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(lVar4 + 0x10 + lVar6) =
             *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x18);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + lVar6);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        lVar6 = lVar6 + 0x18;
      } while (lVar8 < *(int *)(param_1 + 0x10));
    }
  }
  else {
    iVar7 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x10) = iVar7;
    if (iVar7 == 0 && *(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      FUN_1405b70fe((undefined8 *)(param_1 + 8),iVar7);
      if (iVar7 != 0) {
        memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar7 * 0x18);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498507fa FUN_1498507fa body=270 status=ok
// SIG undefined FUN_1498507fa(void)

undefined8 * FUN_1498507fa(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_1498503ec(param_1,param_2,3,param_3);
  *param_1 = &PTR_FUN_14beb26f0;
  plVar1 = param_1 + 4;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = *(ushort *)(param_1 + 3);
  uVar3 = *(short *)(param_1 + 2) + uVar2;
  FUN_144aa29e6(plVar1,uVar3 + 1,1);
  if ((char)param_3 == '\0') {
    uVar6 = (uint)uVar2;
    uVar7 = uVar3 - uVar6;
    lVar5 = ~(ulonglong)uVar6 + (ulonglong)uVar3;
    do {
      *(undefined4 *)(*plVar1 + 4 + lVar5 * 4) = 0x3f800000;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)(ulonglong)uVar3);
    if ((int)(uVar2 + 1) < (int)uVar7) {
      lVar5 = 1;
      do {
        *(float *)(*plVar1 + (ulonglong)((uint)uVar2 * 4) + lVar5 * 4) =
             (float)(int)lVar5 * (1.0 / (float)(int)(uVar7 - uVar6));
        lVar5 = lVar5 + 1;
      } while ((ulonglong)uVar7 - (ulonglong)uVar2 != lVar5);
    }
  }
  else {
    uVar4 = 0;
    do {
      *(float *)(*plVar1 + uVar4 * 4) = (float)(int)uVar4 * (1.0 / (float)uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar3 + 1 != uVar4);
  }
  return param_1;
}



// FUNCTION 149850908 FUN_149850908 body=738 status=ok
// SIG undefined FUN_149850908(void)

undefined4 * FUN_149850908(longlong param_1,undefined4 *param_2,float param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  uVar11 = *(ushort *)(param_1 + 0x18);
  pfVar2 = *(float **)(param_1 + 0x20);
  uVar17 = (uint)uVar11;
  fVar22 = ((pfVar2[(int)((ushort)(*(short *)(param_1 + 0x10) + uVar11) - uVar17)] + -0.0001) -
           (pfVar2[uVar11] + 0.0001)) * param_3 + pfVar2[uVar11] + 0.0001;
  uVar18 = 0;
  if ((1 < *(int *)(param_1 + 0x28)) && (fVar20 = *pfVar2, 1e-08 < ABS(fVar20 - fVar22))) {
    uVar18 = 0;
    uVar8 = 1;
    pfVar12 = pfVar2;
    do {
      if ((fVar20 < fVar22) && (fVar22 < pfVar12[1])) break;
      uVar18 = (ulonglong)uVar8;
      if (*(int *)(param_1 + 0x28) - 1U <= (uint)uVar8) {
        uVar18 = 0;
        break;
      }
      pfVar12 = pfVar2 + uVar8;
      fVar20 = *pfVar12;
      uVar8 = uVar8 + 1;
    } while (1e-08 < ABS(fVar20 - fVar22));
  }
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_14051b394(&local_78,uVar11 + 1,1);
  lVar10 = ~(ulonglong)uVar17 + uVar18;
  lVar14 = 0;
  do {
    lVar15 = *(longlong *)(param_1 + 8) + uVar18 * 0x18 + (ulonglong)((uint)uVar11 * 8) * -3;
    *(undefined8 *)((longlong)local_78 + lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x10 + lVar15);
    puVar1 = (undefined8 *)(lVar14 + lVar15);
    uVar6 = puVar1[1];
    *(undefined8 *)((longlong)local_78 + lVar14) = *puVar1;
    ((undefined8 *)((longlong)local_78 + lVar14))[1] = uVar6;
    lVar10 = lVar10 + 1;
    lVar14 = lVar14 + 0x18;
  } while (lVar10 < (longlong)uVar18);
  uVar11 = *(ushort *)(param_1 + 0x18);
  if (uVar11 != 0) {
    uVar7 = 1;
    uVar13 = 1;
    do {
      uVar9 = uVar7 + ((uint)uVar18 - uVar17);
      uVar16 = (ulonglong)(ushort)uVar9;
      if ((1e-08 < ABS(*(float *)(*(longlong *)(param_1 + 0x20) + uVar16 * 4) - fVar22)) &&
         ((uVar9 & 0xffff) <= (uint)uVar18)) {
        lVar10 = 0;
        do {
          fVar20 = *(float *)(*(longlong *)(param_1 + 0x20) + ((ulonglong)uVar9 & 0xffff) * 4);
          fVar20 = (fVar22 - fVar20) /
                   (*(float *)(*(longlong *)(param_1 + 0x20) + 4 +
                              (longlong)(int)((int)uVar16 + (uVar17 - uVar13)) * 4) - fVar20);
          dVar19 = (double)(1.0 - fVar20);
          dVar21 = (double)fVar20;
          *(double *)((longlong)local_78 + lVar10) =
               dVar21 * *(double *)((longlong)local_78 + lVar10 + 0x18) +
               dVar19 * *(double *)((longlong)local_78 + lVar10);
          *(double *)((longlong)local_78 + lVar10 + 8) =
               *(double *)((longlong)local_78 + lVar10 + 0x20) * dVar21 +
               *(double *)((longlong)local_78 + lVar10 + 8) * dVar19;
          *(double *)((longlong)local_78 + lVar10 + 0x10) =
               *(double *)((longlong)local_78 + lVar10 + 0x28) * dVar21 +
               *(double *)((longlong)local_78 + lVar10 + 0x10) * dVar19;
          uVar9 = uVar9 + 1;
          uVar16 = (ulonglong)(ushort)uVar9;
          lVar10 = lVar10 + 0x18;
        } while ((ushort)uVar9 <= (ushort)uVar18);
        uVar11 = *(ushort *)(param_1 + 0x18);
      }
      uVar7 = uVar7 + 1;
      uVar13 = uVar7 & 0xffff;
    } while ((ushort)uVar7 <= uVar11);
  }
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(local_78 + 4);
  uVar3 = local_78[1];
  uVar4 = local_78[2];
  uVar5 = local_78[3];
  *param_2 = *local_78;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149850bec FUN_149850bec body=418 status=ok
// SIG undefined FUN_149850bec(void)

undefined8 * FUN_149850bec(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  short sVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  
  FUN_1498503ec(param_1,param_2,4,param_3);
  *param_1 = &PTR_FUN_14beb2720;
  plVar1 = param_1 + 4;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
    FUN_14070416c(plVar1,param_1 + 1);
    sVar10 = -4;
  }
  else {
    iVar8 = *(int *)(param_1 + 2);
    if (iVar8 < -2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8 + 2);
    }
    uVar11 = 0;
    iVar15 = 0;
    if (iVar8 != -2) {
      FUN_1447a8aa0(plVar1);
      iVar15 = *(int *)(param_1 + 5);
      uVar11 = *(uint *)((longlong)param_1 + 0x2c);
    }
    pdVar9 = (double *)param_1[1];
    dVar2 = pdVar9[2];
    dVar3 = *pdVar9;
    dVar4 = pdVar9[1];
    dVar5 = pdVar9[5];
    dVar6 = pdVar9[4];
    dVar7 = pdVar9[3];
    *(uint *)(param_1 + 5) = iVar15 + 1U;
    if (uVar11 < iVar15 + 1U) {
      FUN_1403e3958(plVar1,iVar15);
    }
    lVar14 = param_1[4];
    lVar12 = (longlong)iVar15;
    *(double *)(lVar14 + lVar12 * 0x18) = (dVar3 + dVar3) - dVar7;
    *(double *)(lVar14 + 8 + lVar12 * 0x18) = (dVar4 + dVar4) - dVar6;
    *(double *)(lVar14 + 0x10 + lVar12 * 0x18) = (dVar2 + dVar2) - dVar5;
    FUN_14070416c(plVar1,param_1 + 1);
    lVar12 = (longlong)*(int *)(param_1 + 2);
    lVar14 = param_1[1];
    lVar13 = (longlong)(*(int *)(param_1 + 2) + -1);
    dVar2 = *(double *)(lVar14 + 0x10 + lVar13 * 0x18);
    dVar3 = *(double *)(lVar14 + lVar13 * 0x18);
    dVar4 = *(double *)(lVar14 + 8 + lVar13 * 0x18);
    dVar5 = *(double *)(lVar14 + -0x20 + lVar12 * 0x18);
    dVar6 = *(double *)(lVar14 + -0x28 + lVar12 * 0x18);
    dVar7 = *(double *)(lVar14 + -0x30 + lVar12 * 0x18);
    iVar8 = *(int *)(param_1 + 5);
    lVar14 = (longlong)iVar8;
    *(uint *)(param_1 + 5) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2c) < iVar8 + 1U) {
      FUN_1403e3958(plVar1,iVar8);
    }
    lVar12 = *plVar1;
    *(double *)(lVar12 + lVar14 * 0x18) = (dVar3 + dVar3) - dVar7;
    *(double *)(lVar12 + 8 + lVar14 * 0x18) = (dVar4 + dVar4) - dVar6;
    *(double *)(lVar12 + 0x10 + lVar14 * 0x18) = (dVar2 + dVar2) - dVar5;
    sVar10 = -3;
  }
  *(short *)(param_1 + 6) = sVar10 + *(short *)(param_1 + 5);
  return param_1;
}



// FUNCTION 149850d90 FUN_149850d90 body=405 status=ok
// SIG undefined FUN_149850d90(void)

void FUN_149850d90(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  FUN_149850720();
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_1447a8aa0(plVar1,0);
  }
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    FUN_14070416c(plVar1,param_1 + 8);
    return;
  }
  iVar8 = *(int *)(param_1 + 0x10) + 2;
  if (-3 < *(int *)(param_1 + 0x10)) {
    uVar10 = *(uint *)(param_1 + 0x2c);
    if ((int)uVar10 < iVar8) {
      FUN_1447a8aa0(plVar1);
      uVar10 = *(uint *)(param_1 + 0x2c);
    }
    pdVar9 = *(double **)(param_1 + 8);
    dVar2 = pdVar9[2];
    dVar3 = *pdVar9;
    dVar4 = pdVar9[1];
    dVar5 = pdVar9[5];
    dVar6 = pdVar9[4];
    dVar7 = pdVar9[3];
    iVar8 = *(int *)(param_1 + 0x28);
    lVar13 = (longlong)iVar8;
    *(uint *)(param_1 + 0x28) = iVar8 + 1U;
    if (uVar10 < iVar8 + 1U) {
      FUN_1403e3958(plVar1,iVar8);
    }
    lVar11 = *(longlong *)(param_1 + 0x20);
    *(double *)(lVar11 + lVar13 * 0x18) = (dVar3 + dVar3) - dVar7;
    *(double *)(lVar11 + 8 + lVar13 * 0x18) = (dVar4 + dVar4) - dVar6;
    *(double *)(lVar11 + 0x10 + lVar13 * 0x18) = (dVar2 + dVar2) - dVar5;
    FUN_14070416c(plVar1,param_1 + 8);
    lVar11 = (longlong)*(int *)(param_1 + 0x10);
    lVar13 = *(longlong *)(param_1 + 8);
    lVar12 = (longlong)(*(int *)(param_1 + 0x10) + -1);
    dVar2 = *(double *)(lVar13 + 0x10 + lVar12 * 0x18);
    dVar3 = *(double *)(lVar13 + lVar12 * 0x18);
    dVar4 = *(double *)(lVar13 + 8 + lVar12 * 0x18);
    dVar5 = *(double *)(lVar13 + -0x20 + lVar11 * 0x18);
    dVar6 = *(double *)(lVar13 + -0x28 + lVar11 * 0x18);
    dVar7 = *(double *)(lVar13 + -0x30 + lVar11 * 0x18);
    iVar8 = *(int *)(param_1 + 0x28);
    lVar13 = (longlong)iVar8;
    *(uint *)(param_1 + 0x28) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar8 + 1U) {
      FUN_1403e3958(plVar1,iVar8);
    }
    lVar11 = *plVar1;
    *(double *)(lVar11 + lVar13 * 0x18) = (dVar3 + dVar3) - dVar7;
    *(double *)(lVar11 + 8 + lVar13 * 0x18) = (dVar4 + dVar4) - dVar6;
    *(double *)(lVar11 + 0x10 + lVar13 * 0x18) = (dVar2 + dVar2) - dVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar8);
}



// FUNCTION 149850f26 FUN_149850f26 body=738 status=ok
// SIG undefined FUN_149850f26(void)

void FUN_149850f26(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ushort uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 in_XMM2_Qb;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  
  fVar27 = (float)param_3;
  if (1.0 <= fVar27) {
    fVar27 = 1.0;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  uVar11 = *(ushort *)(param_1 + 0x30);
  fVar23 = 1.0 / (float)uVar11;
  auVar26._4_4_ = (int)((ulonglong)param_3 >> 0x20);
  auVar26._0_4_ = fVar27;
  auVar26._8_4_ = (int)in_XMM2_Qb;
  auVar26._12_4_ = (int)((ulonglong)in_XMM2_Qb >> 0x20);
  auVar25._4_12_ = auVar26._4_12_;
  auVar25._0_4_ = fVar27 / fVar23;
  auVar26 = roundps(auVar25,ZEXT416((uint)auVar25._0_4_),1);
  uVar13 = uVar11 - 1;
  if ((ushort)(int)auVar26._0_4_ < uVar11) {
    uVar13 = (int)auVar26._0_4_;
  }
  uVar14 = *(int *)(param_1 + 0x28) - 1;
  if ((int)(uVar13 + 3 & 0xffff) < *(int *)(param_1 + 0x28)) {
    uVar14 = uVar13 + 3;
  }
  fVar23 = (fVar27 - (float)(uVar13 & 0xffff) * fVar23) / fVar23;
  if (1.0 <= fVar23) {
    fVar23 = 1.0;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  lVar12 = *(longlong *)(param_1 + 0x20);
  uVar17 = (ulonglong)(uVar14 - 3 & 0xffff);
  uVar18 = (ulonglong)(uVar14 - 2 & 0xffff);
  uVar16 = (ulonglong)(uVar14 - 1 & 0xffff);
  uVar15 = (ulonglong)(uVar14 & 0xffff);
  dVar1 = *(double *)(lVar12 + 0x10 + uVar16 * 0x18);
  dVar2 = *(double *)(lVar12 + 0x10 + uVar17 * 0x18);
  dVar3 = *(double *)(lVar12 + 8 + uVar16 * 0x18);
  dVar4 = *(double *)(lVar12 + 8 + uVar17 * 0x18);
  dVar5 = *(double *)(lVar12 + uVar16 * 0x18);
  dVar6 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  dVar7 = *(double *)(lVar12 + 0x10 + uVar18 * 0x18);
  dVar8 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar9 = *(double *)(lVar12 + uVar18 * 0x18);
  dVar10 = *(double *)(lVar12 + 8 + uVar18 * 0x18);
  fVar27 = fVar23 * fVar23;
  fVar24 = fVar23 * fVar27;
  dVar19 = (double)(((fVar24 + fVar24) - fVar27 * 3.0) + 1.0);
  dVar20 = (double)((fVar24 - (fVar27 + fVar27)) + fVar23);
  dVar21 = (double)(fVar27 * 3.0 - (fVar24 + fVar24));
  dVar22 = (double)(fVar24 - fVar27);
  *param_2 = (*(double *)(lVar12 + uVar15 * 0x18) - dVar9) * 0.5 * dVar22 +
             dVar5 * dVar21 +
             (dVar5 - *(double *)(lVar12 + uVar17 * 0x18)) * 0.5 * dVar20 + dVar9 * dVar19;
  param_2[1] = (dVar8 - dVar10) * 0.5 * dVar22 +
               dVar3 * dVar21 + (dVar3 - dVar4) * 0.5 * dVar20 + dVar10 * dVar19;
  param_2[2] = (dVar6 - dVar7) * 0.5 * dVar22 +
               dVar1 * dVar21 + (dVar1 - dVar2) * 0.5 * dVar20 + dVar7 * dVar19;
  return;
}



// FUNCTION 149851208 FUN_149851208 body=113 status=ok
// SIG undefined FUN_149851208(void)

void FUN_149851208(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14beb2750;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[6] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14985127a FUN_14985127a body=258 status=ok
// SIG undefined FUN_14985127a(void)

longlong * FUN_14985127a(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30),&local_50);
  *param_2 = 0;
  param_2[1] = 0;
  if (local_48 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_48);
  }
  if (local_48 != 0) {
    FUN_1401a2688(param_2);
    lVar4 = local_50;
    if ((longlong)local_48 != 0) {
      lVar10 = 0;
      do {
        uVar1 = *(ushort *)(lVar4 + lVar10);
        uVar5 = (uint)uVar1;
        if (*(int *)(param_1 + 0x18) <= (int)(uint)uVar1) {
          uVar5 = (uint)((longlong)(ulonglong)uVar1 % (longlong)*(int *)(param_1 + 0x18));
        }
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar3 = param_2[1];
        uVar6 = (int)lVar3 + 1;
        *(uint *)(param_2 + 1) = uVar6;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar6) {
          FUN_144a2c682(param_2);
        }
        puVar8 = (undefined8 *)((ulonglong)uVar5 * 0x60 + lVar2);
        puVar9 = (undefined8 *)((longlong)(int)lVar3 * 0x60 + *param_2);
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        lVar10 = lVar10 + 2;
      } while ((longlong)local_48 * 2 != lVar10);
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14985137e FUN_14985137e body=82 status=ok
// SIG undefined FUN_14985137e(void)

longlong FUN_14985137e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  return param_1;
}



// FUNCTION 1498513d0 FUN_1498513d0 body=524 status=ok
// SIG undefined FUN_1498513d0(void)

void FUN_1498513d0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = 0;
  uStack_a0 = 0;
  iVar5 = (int)param_2[1];
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_1401a2688(&local_a8);
    if ((longlong)(int)param_2[1] != 0) {
      puVar10 = (undefined8 *)*param_2;
      puVar1 = puVar10 + (longlong)(int)param_2[1] * 3;
      do {
        uVar8 = uStack_a0;
        local_c8 = DAT_14c846480;
        lStack_c0 = DAT_14c846488;
        local_b8 = DAT_14c846490;
        uStack_b0 = DAT_14c846498;
        local_e8 = DAT_14c8464c0;
        uStack_e0 = DAT_14c8464c8;
        local_d8 = (undefined4)DAT_14c8464d0;
        uStack_d4 = DAT_14c8464d0._4_4_;
        uStack_d0 = uRam000000014c8464d8;
        uStack_cc = uRam000000014c8464dc;
        uVar6 = *puVar10;
        uVar7 = puVar10[1];
        uVar4 = puVar10[2];
        lVar11 = (longlong)(int)uStack_a0;
        uVar9 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar9);
        if (uStack_a0._4_4_ < uVar9) {
          FUN_144a2c682(&local_a8,uVar8 & 0xffffffff);
        }
        lVar11 = lVar11 * 0x60;
        puVar2 = (undefined8 *)(local_a8 + 0x10 + lVar11);
        *puVar2 = local_b8;
        puVar2[1] = uStack_b0;
        *(longlong *)(local_a8 + lVar11) = local_c8;
        ((longlong *)(local_a8 + lVar11))[1] = lStack_c0;
        puVar2 = (undefined8 *)(local_a8 + 0x20 + lVar11);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2 = (undefined8 *)(local_a8 + 0x30 + lVar11);
        *puVar2 = uVar4;
        puVar2[1] = 0;
        puVar3 = (undefined4 *)(local_a8 + 0x40 + lVar11);
        *puVar3 = (undefined4)local_e8;
        puVar3[1] = local_e8._4_4_;
        puVar3[2] = (undefined4)uStack_e0;
        puVar3[3] = uStack_e0._4_4_;
        puVar2 = (undefined8 *)(local_a8 + 0x50 + lVar11);
        *puVar2 = CONCAT44(uStack_d4,local_d8);
        puVar2[1] = CONCAT44(uStack_cc,uStack_d0);
        puVar10 = puVar10 + 3;
      } while (puVar10 != puVar1);
    }
  }
  local_c8 = local_a8;
  lStack_c0 = CONCAT44(lStack_c0._4_4_,(int)uStack_a0);
  local_f8 = param_7;
  local_100 = param_6;
  local_108 = param_5;
  FUN_1498515de(param_1,&local_c8,param_3,param_4);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498515de FUN_1498515de body=7221 status=ok
// SIG undefined FUN_1498515de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498515de(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,float param_6,float param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  ulonglong *puVar17;
  uint uVar18;
  longlong *plVar19;
  double *pdVar20;
  undefined8 uVar21;
  byte bVar22;
  int iVar23;
  longlong lVar24;
  undefined4 uVar25;
  void **ppvVar26;
  char cVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined4 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  char cVar36;
  ulonglong uVar37;
  int iVar38;
  undefined8 unaff_R13;
  byte bVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  bool bVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar63 [16];
  double dVar65;
  double dVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  float fVar74;
  double dVar75;
  double dVar76;
  undefined1 auVar77 [16];
  double dVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  float fVar82;
  undefined1 auStack_3c8 [36];
  char local_3a4;
  char local_3a3;
  char local_3a2;
  char local_3a1;
  float local_3a0;
  undefined4 local_39c;
  uint local_398;
  float local_394;
  ulonglong *local_390;
  ulonglong local_388;
  float local_37c;
  void *local_378;
  longlong local_370;
  double local_368;
  ulonglong uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  ulonglong uStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [32];
  void *local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  void *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  void **ppvVar27;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  uVar18 = (uint)param_2[1];
  if ((int)param_5 < 1 || (int)uVar18 < 4) goto LAB_149851684;
  uVar40 = param_4 & 0xffffffff;
  cVar12 = (char)param_3;
  local_388 = (ulonglong)uVar18;
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar19 = (longlong *)FUN_14494321d(0x78);
    plVar19[1] = (longlong)&DAT_100000001;
    *plVar19 = (longlong)&PTR_FUN_14beb8810;
    plVar19[2] = (longlong)&PTR_FUN_14beb2750;
    *(undefined1 *)(plVar19 + 3) = 0;
    plVar19[4] = 0;
    plVar19[5] = 0;
    plVar19[6] = 0;
    plVar19[7] = 0;
    *(undefined8 *)((longlong)plVar19 + 0x39) = 0;
    *(undefined8 *)((longlong)plVar19 + 0x41) = 0;
    plVar19[0xb] = 0;
    plVar19[0xc] = 0;
    plVar19[0xd] = 0;
    plVar19[0xe] = 0;
    *(undefined4 *)((longlong)plVar19 + 0x4c) = 0x10;
    if (plVar19 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0x10;
      plVar30 = *(longlong **)(param_1 + 0x10);
      if (plVar30 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
LAB_149851a54:
        LOCK();
        plVar1 = plVar30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar2 = (int *)((longlong)plVar30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
          }
        }
        if (plVar19 != (longlong *)0x0) goto LAB_149851a7a;
      }
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 8) = plVar19 + 2;
      plVar30 = *(longlong **)(param_1 + 0x10);
      if (plVar19 == plVar30) {
        LOCK();
        plVar30 = plVar19 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x10) = plVar19;
        if (plVar30 != (longlong *)0x0) goto LAB_149851a54;
      }
LAB_149851a7a:
      LOCK();
      plVar30 = plVar19 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  lVar31 = *(longlong *)(param_1 + 8);
  uVar37 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  local_390 = param_2;
  if (*(longlong *)(lVar31 + 0x30) == 0) {
    local_378 = (void *)0x0;
LAB_149851748:
    uVar32 = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
LAB_14985174b:
    bVar22 = 1;
  }
  else {
    FUN_14985127a(lVar31);
    local_378 = local_178;
    lVar31 = *(longlong *)(param_1 + 8);
    if ((*(longlong *)(lVar31 + 0x30) == 0) || ((int)uStack_170 != (int)local_388))
    goto LAB_149851748;
    uVar35 = *param_2;
    lVar29 = 0;
    do {
      pdVar20 = (double *)(uVar35 + 0x20 + lVar29);
      pdVar7 = (double *)(uVar35 + 0x30 + lVar29);
      pdVar5 = (double *)((longlong)local_178 + lVar29 + 0x20);
      pdVar6 = (double *)((longlong)local_178 + lVar29 + 0x30);
      auVar51._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar20[1] - pdVar5[1]));
      auVar51._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar20 - *pdVar5));
      iVar34 = movmskpd((int)param_3,auVar51);
      auVar53._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar7[1] - pdVar6[1]));
      auVar53._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar7 - *pdVar6));
      uVar18 = movmskpd((int)param_4,auVar53);
      if ((uVar18 & 0x3fffffff) != 0 || iVar34 != 0) {
LAB_14985318b:
        uVar32 = 0;
        goto LAB_14985174b;
      }
      dVar65 = *(double *)(uVar35 + lVar29);
      dVar78 = ((double *)(uVar35 + lVar29))[1];
      pdVar20 = (double *)(uVar35 + 0x10 + lVar29);
      dVar44 = *pdVar20;
      dVar50 = pdVar20[1];
      dVar58 = *(double *)((longlong)local_178 + lVar29);
      dVar49 = ((double *)((longlong)local_178 + lVar29))[1];
      pdVar20 = (double *)((longlong)local_178 + lVar29 + 0x10);
      dVar73 = *pdVar20;
      dVar48 = pdVar20[1];
      auVar77._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar78 - dVar49));
      auVar77._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar65 - dVar58));
      uVar18 = movmskpd(iVar34,auVar77);
      lVar41 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar50 - dVar48));
      auVar61._8_4_ = (int)lVar41;
      auVar61._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar44 - dVar73));
      auVar61._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      iVar34 = movmskpd(0,auVar61);
      uVar33 = iVar34 << 2 | uVar18;
      if (uVar33 != 0) {
        auVar71._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar78 + dVar49));
        auVar71._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar65 + dVar58));
        uVar18 = movmskpd(uVar18,auVar71);
        auVar67._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar50 + dVar48));
        auVar67._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar44 + dVar73));
        uVar33 = movmskpd(uVar33,auVar67);
        if ((uVar33 & 0x3fffffff) != 0 || uVar18 != 0) goto LAB_14985318b;
      }
      pdVar20 = (double *)(uVar35 + 0x40 + lVar29);
      pdVar7 = (double *)(uVar35 + 0x50 + lVar29);
      pdVar5 = (double *)((longlong)local_178 + lVar29 + 0x40);
      pdVar6 = (double *)((longlong)local_178 + lVar29 + 0x50);
      auVar72._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar20[1] - pdVar5[1]));
      auVar72._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar20 - *pdVar5));
      iVar34 = movmskpd(uVar18,auVar72);
      auVar63._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar7[1] - pdVar6[1]));
      auVar63._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar7 - *pdVar6));
      uVar18 = movmskpd(0,auVar63);
      if ((uVar18 & 0x3fffffff) != 0 || iVar34 != 0) goto LAB_14985318b;
      lVar29 = lVar29 + 0x60;
      uVar32 = 0;
      param_3 = 0;
      param_4 = 0;
    } while (local_388 * 0x60 != lVar29);
    bVar22 = 0;
  }
  cVar28 = *(char *)(lVar31 + 8);
  if ((*(float *)(lVar31 + 0x44) == param_7) && (!NAN(*(float *)(lVar31 + 0x44)) && !NAN(param_7)))
  {
    uVar37 = (ulonglong)(-(uint)(*(float *)(lVar31 + 0x40) != param_6) & 1);
  }
  local_398 = *(uint *)(lVar31 + 0x3c);
  cVar8 = *(char *)(lVar31 + 0x38);
  cVar36 = (char)uVar40;
  if ((cVar28 != cVar12) ||
     ((~(bVar22 | (byte)uVar37 | local_398 != param_5) & cVar8 == cVar36) == 0)) {
    iVar34 = (int)local_390[1];
    pvVar9 = (void *)*local_390;
    *(int *)(lVar31 + 0x18) = iVar34;
    local_3a4 = cVar8;
    local_3a3 = cVar28;
    local_39c = uVar32;
    if (iVar34 == 0 && *(int *)(lVar31 + 0x1c) == 0) {
      *(undefined4 *)(lVar31 + 0x1c) = 0;
    }
    else {
      FUN_144756262((undefined8 *)(lVar31 + 0x10),iVar34);
      if (iVar34 != 0) {
        memcpy(*(void **)(lVar31 + 0x10),pvVar9,(longlong)iVar34 * 0x60);
      }
    }
    *(char *)(*(longlong *)(param_1 + 8) + 8) = cVar12;
    *(char *)(*(longlong *)(param_1 + 8) + 0x38) = cVar36;
    *(uint *)(*(longlong *)(param_1 + 8) + 0x3c) = param_5;
    *(float *)(*(longlong *)(param_1 + 8) + 0x40) = param_6;
    *(float *)(*(longlong *)(param_1 + 8) + 0x44) = param_7;
    bVar39 = local_3a3 != cVar12 | bVar22;
    cVar28 = local_3a4;
    local_3a2 = cVar36;
    local_3a1 = cVar12;
    if ((~bVar39 & local_3a4 == cVar36) == 0) {
      local_3a0 = (float)uVar37;
      local_178 = (void *)0x0;
      uStack_170 = 0.0;
      iVar34 = (int)local_390[1];
      if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar34);
      }
      if (iVar34 != 0) {
        FUN_1447a8aa0(&local_178);
        uVar37 = local_390[1];
        if ((longlong)(int)uVar37 != 0) {
          uVar40 = *local_390;
          lVar31 = 0;
          do {
            dVar65 = uStack_170;
            puVar3 = (undefined8 *)(uVar40 + 0x20 + lVar31);
            uVar14 = *puVar3;
            uVar15 = puVar3[1];
            uVar21 = *(undefined8 *)(uVar40 + 0x30 + lVar31);
            lVar29 = (longlong)(int)uStack_170;
            uVar18 = (int)uStack_170 + 1;
            uStack_170 = (double)CONCAT44(uStack_170._4_4_,uVar18);
            if (uStack_170._4_4_ < uVar18) {
              FUN_1403e3958(&local_178,(ulonglong)dVar65 & 0xffffffff);
            }
            puVar3 = (undefined8 *)((longlong)local_178 + lVar29 * 0x18);
            *puVar3 = uVar14;
            puVar3[1] = uVar15;
            *(undefined8 *)((longlong)local_178 + lVar29 * 0x18 + 0x10) = uVar21;
            lVar31 = lVar31 + 0x60;
          } while ((longlong)(int)uVar37 * 0x60 != lVar31);
        }
      }
      cVar12 = local_3a1;
      cVar28 = local_3a4;
      uVar40 = CONCAT71((int7)(uVar40 >> 8),local_3a2);
      if ((local_3a3 == local_3a1 && (char)local_39c == '\0') && local_3a4 == local_3a2) {
        uVar37 = (ulonglong)(uint)local_3a0;
        if (bVar22 != 0) {
          local_1f8 = local_178;
          dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,(int)uStack_170);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x30) + 0x10))();
        }
      }
      else {
        puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x30);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30) = 0;
        }
        uVar37 = (ulonglong)(uint)local_3a0;
        if (cVar12 == '\x01') {
          uVar21 = FUN_14494321d(0x38);
          local_1f8 = local_178;
          dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,(int)uStack_170);
          FUN_149850bec(uVar21,&local_1f8,uVar40 & 0xffffffff);
        }
        else {
          if (cVar12 != '\0') goto LAB_14985197a;
          uVar21 = FUN_14494321d(0x30);
          local_1f8 = local_178;
          dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,(int)uStack_170);
          FUN_1498507fa(uVar21,&local_1f8,uVar40 & 0xffffffff);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30) = uVar21;
      }
LAB_14985197a:
      if (local_178 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (((bVar39 != 0 || (uVar37 & 1) != 0) || local_398 != param_5) || (cVar28 != (char)uVar40)) {
      uVar18 = (int)local_388 - 1;
      local_388 = (ulonglong)uVar18;
      uVar18 = uVar18 * param_5;
      uVar37 = (ulonglong)uVar18;
      FUN_1407a57f6(*(longlong *)(param_1 + 8) + 0x48,uVar37,0);
      local_37c = 1.0 / (float)(int)(uVar18 - 1);
      lVar31 = 0x30;
      uVar40 = uVar37;
      do {
        lVar29 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
        plVar19 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x30);
        (**(code **)(*plVar19 + 8))(plVar19,&local_178);
        pdVar20 = (double *)(lVar29 + -0x10 + lVar31);
        *pdVar20 = (double)local_178;
        pdVar20[1] = uStack_170;
        pdVar20 = (double *)(lVar29 + lVar31);
        *pdVar20 = local_168;
        pdVar20[1] = 0.0;
        lVar31 = lVar31 + 0x60;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
      fVar82 = (float)(int)local_388;
      local_358 = 0;
      uStack_350 = 0x3ff0000000000000;
      lVar31 = 0;
      local_3a0 = 0.0;
      local_394 = fVar82;
      local_370 = param_1;
      do {
        uVar81 = 0x3ff00000;
        uVar80 = 0;
        uVar79 = 0x3ff00000;
        uVar32 = 0;
        ppvVar27 = &local_178;
        lVar29 = *(longlong *)(param_1 + 8);
        local_368 = 0.0;
        dVar65 = 0.0;
        pvVar9 = (void *)0x0;
        if (lVar29 != 0) {
          fVar74 = local_3a0;
          if (1.0 <= local_3a0) {
            fVar74 = 1.0;
          }
          if (fVar74 <= 0.0) {
            fVar74 = 0.0;
          }
          lVar41 = *(longlong *)(lVar29 + 0x48);
          lVar24 = (longlong)(int)((float)(*(int *)(lVar29 + 0x50) + -2) * fVar74) * 0x60;
          pdVar7 = (double *)(lVar41 + 0x80 + lVar24);
          local_368 = *(double *)(lVar41 + 0x90 + lVar24) - *(double *)(lVar41 + 0x30 + lVar24);
          pdVar20 = (double *)(lVar41 + 0x20 + lVar24);
          pvVar9 = (void *)(*pdVar7 - *pdVar20);
          dVar65 = pdVar7[1] - pdVar20[1];
        }
        dVar44 = local_368 * local_368 + (double)pvVar9 * (double)pvVar9 + dVar65 * dVar65;
        dVar78 = dVar65;
        if (9.99999993922529e-09 < dVar44) {
          dVar44 = 1.0 / SQRT(dVar44);
          pvVar9 = (void *)((double)pvVar9 * dVar44);
          dVar78 = dVar65 * dVar44;
          local_368 = local_368 * dVar44;
        }
        local_2a8 = (double)pvVar9 * DAT_14c846390 - DAT_14c846388 * dVar78;
        local_2b0 = local_368 * DAT_14c846388 - DAT_14c846398 * (double)pvVar9;
        local_2b8 = dVar78 * DAT_14c846398 - DAT_14c846390 * local_368;
        dVar44 = local_2a8 * local_2a8 + local_2b8 * local_2b8 + local_2b0 * local_2b0;
        if (9.99999993922529e-09 < dVar44) {
          dVar44 = 1.0 / SQRT(dVar44);
          local_2b8 = local_2b8 * dVar44;
          local_2b0 = local_2b0 * dVar44;
          local_2a8 = local_2a8 * dVar44;
        }
        local_2c8 = local_2b8 * dVar78 - (double)pvVar9 * local_2b0;
        local_2d0 = local_2a8 * (double)pvVar9 - local_368 * local_2b8;
        local_2d8 = local_2b0 * local_368 - dVar78 * local_2a8;
        dVar44 = local_2c8 * local_2c8 + local_2d8 * local_2d8 + local_2d0 * local_2d0;
        if (9.99999993922529e-09 < dVar44) {
          dVar44 = 1.0 / SQRT(dVar44);
          local_2d8 = local_2d8 * dVar44;
          local_2d0 = local_2d0 * dVar44;
          local_2c8 = local_2c8 * dVar44;
        }
        uStack_360 = 0;
        local_2e0 = 0;
        local_2c0 = 0;
        local_2a0 = 0;
        local_298 = DAT_14c8464e0;
        local_290 = DAT_14c8464e8;
        uStack_288 = DAT_14c8464f0;
        local_280 = 0x3ff0000000000000;
        lVar29 = *(longlong *)(lVar29 + 0x48);
        ppvVar26 = ppvVar27;
        local_2f8 = pvVar9;
        local_2f0 = dVar78;
        local_2e8 = local_368;
        FUN_141706d54(&local_2f8);
        puVar17 = local_390;
        pdVar20 = (double *)(lVar29 + lVar31);
        *pdVar20 = (double)local_178;
        pdVar20[1] = uStack_170;
        pdVar20 = (double *)(lVar29 + 0x10 + lVar31);
        *pdVar20 = local_168;
        pdVar20[1] = dStack_160;
        lVar29 = *(longlong *)(*(longlong *)(local_370 + 8) + 0x48);
        puVar4 = (undefined4 *)(lVar29 + 0x40 + lVar31);
        *puVar4 = 0;
        puVar4[1] = 0x3ff00000;
        puVar4[2] = 0;
        puVar4[3] = 0x3ff00000;
        puVar3 = (undefined8 *)(lVar29 + 0x50 + lVar31);
        *puVar3 = 0x3ff0000000000000;
        puVar3[1] = 0;
        auVar53 = _DAT_149934d80;
        lVar29 = *(longlong *)(*(longlong *)(local_370 + 8) + 0x48);
        iVar38 = (int)(local_3a0 * fVar82);
        iVar34 = iVar38 + 1;
        bVar43 = (int)local_390[1] <= iVar34;
        if (bVar43 || iVar38 < -1) {
          iVar34 = iVar38;
        }
        iVar38 = iVar38 - (uint)(bVar43 || iVar38 < -1);
        uVar40 = *local_390;
        lVar41 = (longlong)iVar38 * 0x60;
        auVar51 = *(undefined1 (*) [16])(uVar40 + 0x40 + lVar41);
        dVar44 = auVar51._0_8_;
        dVar49 = auVar51._8_8_;
        auVar61 = *(undefined1 (*) [16])(uVar40 + 0x50 + lVar41);
        dVar50 = auVar61._0_8_;
        auVar77 = *(undefined1 (*) [16])(lVar29 + 0x40 + lVar31);
        dVar58 = auVar77._0_8_;
        dVar73 = auVar77._8_8_;
        auVar67 = *(undefined1 (*) [16])(lVar29 + 0x50 + lVar31);
        auVar51 = minpd(auVar77,auVar51);
        auVar61 = minpd(auVar67,auVar61);
        auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
        auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
        iVar23 = movmskpd(iVar38,auVar52);
        auVar62._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
        auVar62._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
        uVar18 = movmskpd((int)ppvVar26,auVar62);
        uVar25 = 0;
        if ((uVar18 & 0x3fffffff) != 0 || iVar23 != 0) {
          pdVar20 = (double *)(uVar40 + lVar41);
          dVar76 = *pdVar20;
          dVar60 = pdVar20[1];
          dVar48 = pdVar20[2];
          dVar57 = dVar60 + dVar60;
          dVar59 = dVar48 + dVar48;
          dVar75 = dVar76 * (dVar76 + dVar76);
          local_1f8 = (void *)((1.0 - (dVar48 * dVar59 + dVar60 * dVar57)) * dVar44);
          dStack_1d0 = (1.0 - (dVar48 * dVar59 + dVar75)) * dVar49;
          local_1a8 = (1.0 - (dVar75 + dVar60 * dVar57)) * dVar50;
          dVar48 = pdVar20[3];
          dVar75 = dVar59 * dVar48;
          dVar64 = (dVar76 + dVar76) * pdVar20[3];
          dVar48 = dVar57 * dVar48;
          dStack_1f0 = (dVar57 * dVar76 + dVar75) * dVar44;
          local_1c8 = (dVar59 * dVar60 + dVar64) * dVar49;
          local_1b8 = (dVar48 + *pdVar20 * dVar59) * dVar50;
          local_1d8 = (dVar57 * dVar76 - dVar75) * dVar49;
          dStack_1b0 = (dVar59 * dVar60 - dVar64) * dVar50;
          local_1e8 = (*pdVar20 * dVar59 - dVar48) * dVar44;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar20[4];
          dStack_190 = pdVar20[5];
          local_188 = pdVar20[6];
          uStack_180 = 0x3ff0000000000000;
          dVar60 = *(double *)(lVar29 + lVar31);
          dVar57 = ((double *)(lVar29 + lVar31))[1];
          dVar76 = *(double *)(lVar29 + 0x10 + lVar31);
          pdVar20 = (double *)(lVar29 + 0x40 + lVar31);
          local_268 = *pdVar20;
          local_258 = pdVar20[1];
          dStack_230 = *(double *)(lVar29 + 0x50 + lVar31);
          dVar68 = dVar57 + dVar57;
          dVar59 = dVar76 + dVar76;
          dVar48 = dVar60 * (dVar60 + dVar60);
          local_278 = (1.0 - (dVar76 * dVar59 + dVar57 * dVar68)) * local_268;
          dStack_250 = (1.0 - (dVar76 * dVar59 + dVar48)) * local_258;
          local_228 = (1.0 - (dVar48 + dVar57 * dVar68)) * dStack_230;
          dVar76 = *(double *)(lVar29 + lVar31) * dVar59;
          pdVar20 = (double *)(lVar29 + 0x18 + lVar31);
          dVar48 = *pdVar20;
          dVar75 = dVar59 * dVar48;
          dVar64 = (dVar60 + dVar60) * *pdVar20;
          dVar48 = dVar68 * dVar48;
          dStack_270 = (dVar68 * dVar60 + dVar75) * local_268;
          local_248 = (dVar59 * dVar57 + dVar64) * local_258;
          local_238 = (dVar48 + dVar76) * dStack_230;
          local_268 = (dVar76 - dVar48) * local_268;
          local_258 = (dVar68 * dVar60 - dVar75) * local_258;
          dStack_230 = (dVar59 * dVar57 - dVar64) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uVar32 = (undefined4)DAT_149934d80;
          uVar79 = DAT_149934d80._4_4_;
          uVar80 = DAT_149934d80._8_4_;
          uVar81 = DAT_149934d80._12_4_;
          uStack_220 = 0;
          puVar3 = (undefined8 *)(lVar29 + 0x20 + lVar31);
          local_218 = *puVar3;
          uStack_210 = puVar3[1];
          local_208 = *(undefined8 *)(lVar29 + 0x30 + lVar31);
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(ppvVar27,&local_278,&local_1f8);
          FUN_144a1c686(ppvVar27,0x3e45798ee0000000);
          fVar82 = local_394;
          auVar45._8_8_ = -(ulonglong)(0.0 <= dVar73 * dVar49);
          auVar45._0_8_ = -(ulonglong)(0.0 <= dVar58 * dVar44);
          auVar53 = blendvpd(_DAT_149936790,auVar53,auVar45);
          uVar40 = -(ulonglong)(0.0 <= auVar67._0_8_ * dVar50);
          dVar44 = (double)(~uVar40 & 0xbff0000000000000 | uVar40 & 0x3ff0000000000000);
          dVar50 = auVar53._0_8_;
          local_168 = local_168 * dVar50;
          uStack_170 = uStack_170 * dVar50;
          local_178 = (void *)((double)local_178 * dVar50);
          dVar50 = auVar53._8_8_;
          local_148 = local_148 * dVar50;
          local_150 = local_150 * dVar50;
          local_158 = dVar50 * local_158;
          local_128 = local_128 * dVar44;
          local_130 = local_130 * dVar44;
          local_138 = dVar44 * local_138;
          FUN_14481fd10(local_318);
          uVar25 = SUB84(ppvVar27,0);
          uVar40 = *puVar17;
          pdVar20 = (double *)(lVar29 + 0x40 + lVar31);
          dVar58 = *pdVar20;
          dVar73 = pdVar20[1];
          auVar67 = *(undefined1 (*) [16])(lVar29 + 0x50 + lVar31);
        }
        auVar61 = _DAT_149934d80;
        local_328 = -dVar78;
        dStack_320 = -dVar65;
        local_338 = -(double)pvVar9;
        dStack_330 = -dVar65;
        fVar74 = local_3a0 - (float)iVar38 / fVar82;
        lVar24 = (longlong)iVar34 * 0x60;
        auVar53 = *(undefined1 (*) [16])(uVar40 + 0x40 + lVar24);
        dVar65 = auVar53._0_8_;
        dVar50 = auVar53._8_8_;
        auVar51 = *(undefined1 (*) [16])(uVar40 + 0x50 + lVar24);
        dVar44 = auVar51._0_8_;
        auVar54._8_8_ = dVar73;
        auVar54._0_8_ = dVar58;
        auVar53 = minpd(auVar54,auVar53);
        auVar55._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
        auVar55._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
        iVar23 = movmskpd(iVar34,auVar55);
        auVar53 = minpd(auVar67,auVar51);
        auVar56._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
        auVar56._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
        uVar18 = movmskpd(uVar25,auVar56);
        local_348 = -local_368;
        uStack_340 = uStack_360 ^ 0x8000000000000000;
        if ((uVar18 & 0x3fffffff) != 0 || iVar23 != 0) {
          pdVar20 = (double *)(uVar40 + lVar24);
          dVar48 = *pdVar20;
          dVar76 = pdVar20[1];
          dVar60 = pdVar20[2];
          dVar57 = dVar76 + dVar76;
          dVar59 = dVar60 + dVar60;
          dVar49 = dVar48 * (dVar48 + dVar48);
          local_1f8 = (void *)((1.0 - (dVar60 * dVar59 + dVar76 * dVar57)) * dVar65);
          dStack_1d0 = (1.0 - (dVar60 * dVar59 + dVar49)) * dVar50;
          local_1a8 = (1.0 - (dVar49 + dVar76 * dVar57)) * dVar44;
          dVar49 = pdVar20[3];
          dVar60 = dVar59 * dVar49;
          dVar75 = (dVar48 + dVar48) * pdVar20[3];
          dVar49 = dVar57 * dVar49;
          dStack_1f0 = (dVar57 * dVar48 + dVar60) * dVar65;
          local_1c8 = (dVar59 * dVar76 + dVar75) * dVar50;
          local_1b8 = (dVar49 + *pdVar20 * dVar59) * dVar44;
          local_1d8 = (dVar57 * dVar48 - dVar60) * dVar50;
          dStack_1b0 = (dVar59 * dVar76 - dVar75) * dVar44;
          local_1e8 = (*pdVar20 * dVar59 - dVar49) * dVar65;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar20[4];
          dStack_190 = pdVar20[5];
          local_188 = pdVar20[6];
          uStack_180 = 0x3ff0000000000000;
          dVar76 = *(double *)(lVar29 + lVar31);
          dVar60 = ((double *)(lVar29 + lVar31))[1];
          dVar48 = *(double *)(lVar29 + 0x10 + lVar31);
          pdVar20 = (double *)(lVar29 + 0x40 + lVar31);
          local_268 = *pdVar20;
          local_258 = pdVar20[1];
          dStack_230 = *(double *)(lVar29 + 0x50 + lVar31);
          dVar64 = dVar60 + dVar60;
          dVar57 = dVar48 + dVar48;
          dVar49 = dVar76 * (dVar76 + dVar76);
          local_278 = (1.0 - (dVar48 * dVar57 + dVar60 * dVar64)) * local_268;
          dStack_250 = (1.0 - (dVar48 * dVar57 + dVar49)) * local_258;
          local_228 = (1.0 - (dVar49 + dVar60 * dVar64)) * dStack_230;
          dVar48 = *(double *)(lVar29 + lVar31) * dVar57;
          pdVar20 = (double *)(lVar29 + 0x18 + lVar31);
          dVar49 = *pdVar20;
          dVar59 = dVar57 * dVar49;
          dVar75 = (dVar76 + dVar76) * *pdVar20;
          dVar49 = dVar64 * dVar49;
          dStack_270 = (dVar64 * dVar76 + dVar59) * local_268;
          local_248 = (dVar57 * dVar60 + dVar75) * local_258;
          local_238 = (dVar49 + dVar48) * dStack_230;
          local_268 = (dVar48 - dVar49) * local_268;
          local_258 = (dVar64 * dVar76 - dVar59) * local_258;
          dStack_230 = (dVar57 * dVar60 - dVar75) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uVar32 = (undefined4)DAT_149934d80;
          uVar79 = DAT_149934d80._4_4_;
          uVar80 = DAT_149934d80._8_4_;
          uVar81 = DAT_149934d80._12_4_;
          uStack_220 = 0;
          puVar3 = (undefined8 *)(lVar29 + 0x20 + lVar31);
          local_218 = *puVar3;
          uStack_210 = puVar3[1];
          local_208 = *(undefined8 *)(lVar29 + 0x30 + lVar31);
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar46._8_8_ = -(ulonglong)(0.0 <= dVar73 * dVar50);
          auVar46._0_8_ = -(ulonglong)(0.0 <= dVar58 * dVar65);
          auVar53 = blendvpd(_DAT_149936790,auVar61,auVar46);
          uVar40 = -(ulonglong)(0.0 <= auVar67._0_8_ * dVar44);
          dVar65 = (double)(~uVar40 & 0xbff0000000000000 | uVar40 & 0x3ff0000000000000);
          dVar44 = auVar53._0_8_;
          local_168 = local_168 * dVar44;
          uStack_170 = uStack_170 * dVar44;
          local_178 = (void *)((double)local_178 * dVar44);
          dVar44 = auVar53._8_8_;
          local_148 = local_148 * dVar44;
          local_150 = local_150 * dVar44;
          local_158 = dVar44 * local_158;
          local_128 = local_128 * dVar65;
          local_130 = local_130 * dVar65;
          local_138 = dVar65 * local_138;
          FUN_14481fd10(local_318,&local_178);
          uVar40 = *local_390;
        }
        local_1f8 = *(void **)(uVar40 + lVar24);
        dStack_1f0 = ((double *)(uVar40 + lVar24))[1];
        puVar3 = (undefined8 *)(uVar40 + 0x10 + lVar24);
        local_1e8 = (double)*puVar3;
        uStack_1e0 = puVar3[1];
        local_278 = *(double *)(uVar40 + lVar41);
        dStack_270 = ((double *)(uVar40 + lVar41))[1];
        puVar3 = (undefined8 *)(uVar40 + 0x10 + lVar41);
        local_268 = (double)*puVar3;
        uStack_260 = puVar3[1];
        FUN_144a44da6(&local_178,&local_278,&local_1f8,
                      (double)(fVar74 / ((float)iVar34 / fVar82 - (float)iVar38 / fVar82)));
        param_1 = local_370;
        fVar82 = local_394;
        dVar65 = local_168 * local_168 + (double)local_178 * (double)local_178;
        dVar44 = dStack_160 * dStack_160 + uStack_170 * uStack_170;
        auVar66._0_8_ = dVar65 + dVar44;
        auVar66._8_8_ = dVar65 + dVar44;
        auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_);
        auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_);
        auVar53 = sqrtpd(auVar66,auVar66);
        auVar69._4_4_ = uVar79;
        auVar69._0_4_ = uVar32;
        auVar69._12_4_ = uVar81;
        auVar69._8_4_ = uVar80;
        auVar53 = divpd(auVar69,auVar53);
        auVar70._0_8_ = auVar53._0_8_ * local_168;
        auVar70._8_8_ = auVar53._8_8_ * dStack_160;
        dVar44 = (double)((ulonglong)((double)local_178 * auVar53._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_));
        dVar58 = (double)((ulonglong)(uStack_170 * auVar53._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_));
        auVar16._8_8_ = uStack_350;
        auVar16._0_8_ = local_358;
        auVar53 = blendvpd(auVar16,auVar70,auVar47);
        dVar49 = auVar53._0_8_;
        dVar73 = auVar53._8_8_;
        dVar76 = dVar58 * DAT_14c846398 - DAT_14c846390 * dVar49;
        dVar76 = dVar76 + dVar76;
        dVar65 = dVar44 * DAT_14c846390 - DAT_14c846388 * dVar58;
        dVar65 = dVar65 + dVar65;
        dVar48 = dVar49 * DAT_14c846388 - DAT_14c846398 * dVar44;
        dVar48 = dVar48 + dVar48;
        dVar50 = (dVar44 * dVar48 - dVar76 * dVar58) + dVar73 * dVar65 + DAT_14c846398;
        dVar44 = (dVar49 * dVar76 - dVar65 * dVar44) + dVar73 * dVar48 + DAT_14c846390;
        dVar65 = (dVar58 * dVar65 - dVar48 * dVar49) + dVar73 * dVar76 + DAT_14c846388;
        local_128 = (double)pvVar9 * dVar44 + local_328 * dVar65;
        local_130 = dVar65 * local_368 + local_338 * dVar50;
        local_138 = dVar50 * dVar78 + dVar44 * local_348;
        dVar65 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        if (9.99999993922529e-09 < dVar65) {
          dVar65 = 1.0 / SQRT(dVar65);
          local_138 = local_138 * dVar65;
          local_130 = local_130 * dVar65;
          local_128 = local_128 * dVar65;
        }
        local_148 = local_138 * dVar78 - (double)pvVar9 * local_130;
        local_150 = local_128 * (double)pvVar9 - local_368 * local_138;
        local_158 = local_130 * local_368 - dVar78 * local_128;
        dVar65 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        if (9.99999993922529e-09 < dVar65) {
          dVar65 = 1.0 / SQRT(dVar65);
          local_158 = local_158 * dVar65;
          local_150 = local_150 * dVar65;
          local_148 = local_148 * dVar65;
        }
        local_168 = local_368;
        dStack_160 = 0.0;
        local_140 = 0;
        local_120 = 0;
        local_118 = DAT_14c8464e0;
        local_110 = DAT_14c8464e8;
        uStack_108 = DAT_14c8464f0;
        local_100 = 0x3ff0000000000000;
        lVar29 = *(longlong *)(*(longlong *)(local_370 + 8) + 0x48);
        local_178 = pvVar9;
        uStack_170 = dVar78;
        FUN_141706d54(&local_178,&local_1f8);
        cVar12 = local_3a1;
        pdVar20 = (double *)(lVar29 + lVar31);
        *pdVar20 = (double)local_1f8;
        pdVar20[1] = dStack_1f0;
        puVar3 = (undefined8 *)(lVar29 + 0x10 + lVar31);
        *puVar3 = local_1e8;
        puVar3[1] = uStack_1e0;
        lVar29 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
        puVar4 = (undefined4 *)(lVar29 + 0x40 + lVar31);
        *puVar4 = 0;
        puVar4[1] = 0x3ff00000;
        puVar4[2] = 0;
        puVar4[3] = 0x3ff00000;
        puVar3 = (undefined8 *)(lVar29 + 0x50 + lVar31);
        *puVar3 = 0x3ff0000000000000;
        puVar3[1] = 0;
        local_3a0 = local_3a0 + local_37c;
        lVar31 = lVar31 + 0x60;
        uVar37 = uVar37 - 1;
      } while (uVar37 != 0);
      lVar31 = *(longlong *)(param_1 + 8);
      if (((local_3a4 == local_3a2 && (char)local_39c == '\0') &&
           (local_3a3 == local_3a1 && local_398 == param_5)) && (0 < *(int *)(lVar31 + 0x28))) {
        local_178 = (void *)0x0;
        uVar18 = *(uint *)(lVar31 + 0x50);
        pvVar9 = *(void **)(lVar31 + 0x48);
        uStack_170 = (double)CONCAT44(uStack_170._4_4_,uVar18);
        if ((longlong)(int)uVar18 == 0) {
          uStack_170 = (double)(ulonglong)uVar18;
        }
        else {
          FUN_144756262(&local_178,uVar18,0);
          memcpy(local_178,pvVar9,(longlong)(int)uVar18 * 0x60);
        }
        uVar40 = (ulonglong)param_5;
        lVar31 = 0xffffffff;
        lVar29 = 0;
        uVar37 = 0;
        do {
          if (((int)(uint)(uVar37 == 0) < (int)param_5) &&
             (iVar34 = (uint)(uVar37 == 0) + (int)lVar29, 0 < iVar34)) {
            uVar35 = (ulonglong)(uVar37 == 0);
            lVar24 = uVar40 - uVar35;
            lVar41 = (lVar29 + uVar35) * 0x60 + 0x30;
            uVar35 = uVar35 + lVar31;
            do {
              lVar10 = *(longlong *)(param_1 + 8);
              if (*(int *)(lVar10 + 0x28) < iVar34) break;
              pdVar20 = (double *)((longlong)local_178 + lVar41 + -0x10);
              lVar42 = (uVar35 & 0xffffffff) * 0x60;
              dVar44 = *(double *)((longlong)local_178 + lVar41) -
                       *(double *)((longlong)local_178 + lVar42 + 0x30);
              pdVar7 = (double *)((longlong)local_178 + lVar42 + 0x20);
              dVar65 = *pdVar20 - *pdVar7;
              dVar78 = pdVar20[1] - pdVar7[1];
              dVar50 = dVar44 * dVar44 + dVar65 * dVar65 + dVar78 * dVar78;
              if (9.99999993922529e-09 < dVar50) {
                dVar50 = 1.0 / SQRT(dVar50);
                dVar65 = dVar65 * dVar50;
                dVar78 = dVar78 * dVar50;
                dVar44 = dVar44 * dVar50;
              }
              lVar11 = *(longlong *)(lVar10 + 0x48);
              fVar82 = *(float *)(*(longlong *)(lVar10 + 0x20) + (uVar35 & 0xffffffff) * 4);
              pdVar20 = (double *)(lVar11 + -0x10 + lVar41);
              pdVar7 = (double *)(lVar11 + 0x20 + lVar42);
              dVar58 = *pdVar7;
              dVar50 = *(double *)(lVar11 + 0x30 + lVar42);
              fVar74 = (float)((*(double *)(lVar11 + lVar41) - dVar50) * dVar44 +
                              (*pdVar20 - dVar58) * dVar65 + (pdVar20[1] - pdVar7[1]) * dVar78);
              fVar13 = (float)((uint)(fVar82 * param_7) & -(uint)(0.0 < param_7) |
                              ~-(uint)(0.0 < param_7) & (uint)fVar74);
              fVar82 = (float)((uint)(fVar82 * param_6) & -(uint)(0.0 < param_6) |
                              ~-(uint)(0.0 < param_6) & (uint)fVar74);
              if (fVar13 <= fVar74) {
                fVar74 = fVar13;
              }
              if (fVar74 <= fVar82) {
                fVar74 = fVar82;
              }
              dVar73 = (double)fVar74;
              dVar49 = *(double *)(lVar11 + 0x28 + lVar42);
              pdVar20 = (double *)(lVar11 + -0x10 + lVar41);
              *pdVar20 = dVar65 * dVar73 + dVar58;
              pdVar20[1] = dVar78 * dVar73 + dVar49;
              *(double *)(lVar11 + lVar41) = dVar44 * dVar73 + dVar50;
              ((double *)(lVar11 + lVar41))[1] = 0.0;
              lVar41 = lVar41 + 0x60;
              iVar34 = iVar34 + 1;
              uVar35 = uVar35 + 1;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          uVar37 = uVar37 + 1;
          lVar29 = lVar29 + uVar40;
          lVar31 = lVar31 + uVar40;
        } while (uVar37 != (local_388 & 0xffffffff));
        if (local_178 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar31 = *(longlong *)(param_1 + 8);
      }
      cVar36 = local_3a2;
      cVar8 = local_3a3;
      cVar28 = local_3a4;
      if (0 < *(int *)(lVar31 + 0x50)) {
        bVar43 = local_398 != param_5;
        FUN_144a12820(lVar31 + 0x58,*(int *)(lVar31 + 0x50),0);
        **(undefined4 **)(*(longlong *)(param_1 + 8) + 0x58) = 0;
        bVar22 = (byte)local_39c | bVar43;
        local_39c = CONCAT31((int3)((uint)local_39c >> 8),bVar22);
        bVar22 = bVar22 | (cVar8 != cVar12 || cVar28 != cVar36);
        if (bVar22 == 1) {
          FUN_144a12820(*(longlong *)(param_1 + 8) + 0x20,
                        *(int *)(*(longlong *)(param_1 + 8) + 0x50) + -1,1);
        }
        lVar31 = *(longlong *)(param_1 + 8);
        if (1 < *(int *)(lVar31 + 0x50)) {
          lVar29 = 1;
          lVar41 = 0x24;
          do {
            lVar24 = *(longlong *)(lVar31 + 0x48);
            pdVar20 = (double *)(lVar24 + -0x10 + lVar41 * 4);
            pdVar7 = (double *)(lVar24 + -0x70 + lVar41 * 4);
            dVar65 = *pdVar20 - *pdVar7;
            dVar78 = pdVar20[1] - pdVar7[1];
            dVar44 = *(double *)(lVar24 + lVar41 * 4) - *(double *)(lVar24 + -0x60 + lVar41 * 4);
            fVar82 = (float)SQRT(dVar65 * dVar65 + dVar78 * dVar78 + dVar44 * dVar44);
            if (bVar22 != 0) {
              *(float *)(*(longlong *)(lVar31 + 0x20) + -4 + lVar29 * 4) = fVar82;
              lVar31 = *(longlong *)(param_1 + 8);
            }
            *(float *)(*(longlong *)(lVar31 + 0x58) + lVar29 * 4) =
                 fVar82 + *(float *)(*(longlong *)(lVar31 + 0x58) + -4 + lVar29 * 4);
            lVar29 = lVar29 + 1;
            lVar31 = *(longlong *)(param_1 + 8);
            lVar41 = lVar41 + 0x18;
          } while (lVar29 < *(int *)(lVar31 + 0x50));
        }
      }
    }
  }
  if (local_378 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_149851684:
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149853216 FUN_149853216 body=209 status=ok
// SIG undefined FUN_149853216(void)

void FUN_149853216(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    iVar7 = *(int *)(lVar5 + 0x50) + -1;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    param_3 = (float)iVar7 * param_3;
    iVar10 = (int)param_3;
    lVar5 = *(longlong *)(lVar5 + 0x48);
    lVar8 = (longlong)iVar10 * 0x60;
    dVar11 = (double)(1.0 - (param_3 - (float)(int)param_3));
    dVar1 = *(double *)(lVar5 + 0x30 + lVar8);
    dVar2 = *(double *)(lVar5 + 0x28 + lVar8);
    lVar9 = (longlong)(int)((uint)(iVar10 < iVar7) + iVar10) * 0x60;
    dVar6 = (double)(param_3 - (float)(int)param_3);
    dVar3 = *(double *)(lVar5 + 0x30 + lVar9);
    dVar4 = *(double *)(lVar5 + 0x28 + lVar9);
    *param_2 = dVar6 * *(double *)(lVar5 + 0x20 + lVar9) +
               dVar11 * *(double *)(lVar5 + 0x20 + lVar8);
    param_2[1] = dVar4 * dVar6 + dVar2 * dVar11;
    param_2[2] = dVar3 * dVar6 + dVar1 * dVar11;
    return;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}



// FUNCTION 1498532e8 FUN_1498532e8 body=631 status=ok
// SIG undefined FUN_1498532e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1498532e8(longlong param_1,ulonglong *param_2,float param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_1 + 8);
  if (lVar6 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0x3ff0000000000000;
    dVar18 = 1.0;
    dVar20 = 0.0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    dVar19 = 1.0;
    dVar21 = 1.0;
  }
  else {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    iVar10 = *(int *)(lVar6 + 0x50) + -1;
    param_3 = (float)iVar10 * param_3;
    iVar11 = (int)param_3;
    param_3 = param_3 - (float)(int)param_3;
    lVar6 = *(longlong *)(lVar6 + 0x48);
    lVar8 = (longlong)(int)((uint)(iVar11 < iVar10) + iVar11) * 0x60;
    local_98 = *(undefined8 *)(lVar6 + lVar8);
    uStack_90 = ((undefined8 *)(lVar6 + lVar8))[1];
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
    local_88 = *puVar1;
    uStack_80 = puVar1[1];
    lVar9 = (longlong)iVar11 * 0x60;
    local_b8 = *(undefined8 *)(lVar6 + lVar9);
    uStack_b0 = ((undefined8 *)(lVar6 + lVar9))[1];
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar9);
    local_a8 = *puVar1;
    uStack_a0 = puVar1[1];
    FUN_144a44da6(&local_78,&local_b8,&local_98,(double)param_3);
    dVar19 = local_68 * local_68 + local_78 * local_78;
    dVar18 = dStack_60 * dStack_60 + dStack_70 * dStack_70;
    dVar21 = dVar19 + dVar18;
    dVar19 = dVar19 + dVar18;
    uVar12 = -(ulonglong)(9.99999993922529e-09 <= dVar21);
    uVar13 = -(ulonglong)(9.99999993922529e-09 <= dVar19);
    auVar14._8_8_ = uVar13;
    auVar14._0_8_ = uVar12;
    auVar28._8_8_ = dVar19;
    auVar28._0_8_ = dVar21;
    auVar23 = sqrtpd(in_XMM5,auVar28);
    dVar18 = (double)DAT_149934d80;
    dVar20 = DAT_149934d80._8_8_;
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar26._0_8_ = auVar23._0_8_ * local_68;
    auVar26._8_8_ = auVar23._8_8_ * dStack_60;
    dVar19 = (double)((ulonglong)(local_78 * auVar23._0_8_) & uVar12);
    dVar21 = (double)((ulonglong)(dStack_70 * auVar23._8_8_) & uVar13);
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar14);
    auVar15._0_8_ = dVar19 * dVar19;
    auVar15._8_8_ = dVar21 * dVar21;
    dVar22 = auVar23._0_8_;
    dVar24 = auVar23._8_8_;
    dVar25 = dVar22 * dVar22 + auVar15._0_8_;
    dVar30 = dVar24 * dVar24 + auVar15._8_8_;
    auVar27._0_8_ = dVar25 + dVar30;
    auVar27._8_8_ = dVar25 + dVar30;
    auVar23 = sqrtpd(auVar15,auVar27);
    auVar28 = divpd(_DAT_149934d80,auVar23);
    auVar29._0_8_ = auVar28._0_8_ * dVar22;
    auVar29._8_8_ = auVar28._8_8_ * dVar24;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar16);
    *param_2 = (ulonglong)(dVar19 * auVar28._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    param_2[1] = (ulonglong)(dVar21 * auVar28._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    *(undefined1 (*) [16])(param_2 + 2) = auVar23;
    dVar30 = (double)param_3;
    dVar17 = (double)param_3;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    dVar18 = dVar18 - dVar30;
    dVar20 = dVar20 - dVar17;
    pdVar2 = (double *)(lVar6 + 0x20 + lVar9);
    dVar21 = pdVar2[1];
    pdVar3 = (double *)(lVar6 + 0x30 + lVar9);
    dVar22 = *pdVar3;
    pdVar4 = (double *)(lVar6 + 0x20 + lVar8);
    dVar24 = pdVar4[1];
    pdVar5 = (double *)(lVar6 + 0x30 + lVar8);
    dVar25 = *pdVar5;
    dVar19 = pdVar5[1] * dVar17 + pdVar3[1] * dVar20;
    param_2[4] = (ulonglong)(*pdVar4 * dVar30 + *pdVar2 * dVar18);
    param_2[5] = (ulonglong)(dVar24 * dVar17 + dVar21 * dVar20);
    auVar23._8_4_ = SUB84(dVar19,0);
    auVar23._0_8_ = dVar25 * dVar30 + dVar22 * dVar18;
    auVar23._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 6) = auVar23;
    pdVar2 = (double *)(lVar6 + 0x40 + lVar9);
    pdVar3 = (double *)(lVar6 + 0x50 + lVar9);
    pdVar4 = (double *)(lVar6 + 0x40 + lVar8);
    dVar19 = *pdVar4 * dVar30 + *pdVar2 * dVar18;
    dVar21 = pdVar4[1] * dVar17 + pdVar2[1] * dVar20;
    pdVar2 = (double *)(lVar6 + 0x50 + lVar8);
    dVar18 = dVar30 * *pdVar2 + dVar18 * *pdVar3;
    dVar20 = dVar17 * pdVar2[1] + dVar20 * pdVar3[1];
  }
  auVar7._8_4_ = SUB84(dVar21,0);
  auVar7._0_8_ = dVar19;
  auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar7;
  param_2[10] = (ulonglong)dVar18;
  param_2[0xb] = (ulonglong)dVar20;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853560 FUN_149853560 body=104 status=ok
// SIG undefined FUN_149853560(void)

float FUN_149853560(longlong param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    iVar2 = *(int *)(lVar1 + 0x50) + -1;
    param_2 = (float)iVar2 * param_2;
    iVar3 = (int)param_2;
    return (1.0 - (param_2 - (float)(int)param_2)) *
           *(float *)(*(longlong *)(lVar1 + 0x58) + (longlong)iVar3 * 4) +
           (param_2 - (float)(int)param_2) *
           *(float *)(*(longlong *)(lVar1 + 0x58) +
                     (longlong)(int)((uint)(iVar3 < iVar2) + iVar3) * 4);
  }
  return 0.0;
}



// FUNCTION 1498535c8 FUN_1498535c8 body=142 status=ok
// SIG undefined FUN_1498535c8(void)

void FUN_1498535c8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  local_38 = *(undefined4 *)param_2[0x10];
  local_30 = *(undefined4 *)param_2[0x14];
  local_28 = param_2[0x18];
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_149853702(&local_18,*(undefined1 *)param_2[4],*(undefined1 *)param_2[8],
                *(undefined4 *)param_2[0xc]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985365e FUN_14985365e body=162 status=ok
// SIG undefined FUN_14985365e(void)

void FUN_14985365e(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  longlong local_218;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_218 = param_1 + 0x28;
  local_220 = *(undefined4 *)(param_1 + 0x24);
  local_228 = *(undefined4 *)(param_1 + 0x20);
  FUN_149853702(&local_28,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19),
                *(undefined4 *)(param_1 + 0x1c));
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853702 FUN_149853702 body=208 status=ok
// SIG undefined FUN_149853702(void)

void FUN_149853702(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_7 + 0x10);
  *(undefined8 *)(param_7 + 8) = 0;
  *(undefined8 *)(param_7 + 0x10) = 0;
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
  if (3 < *(int *)(param_1 + 1)) {
    local_48 = *param_1;
    local_58 = param_6;
    local_60 = param_5;
    local_68 = param_4;
    local_40 = *(int *)(param_1 + 1);
    FUN_1498513d0(param_7,&local_48,param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498537d4 FUN_1498537d4 body=142 status=ok
// SIG undefined FUN_1498537d4(void)

void FUN_1498537d4(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  local_38 = *(undefined4 *)param_2[0x10];
  local_30 = *(undefined4 *)param_2[0x14];
  local_28 = param_2[0x18];
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_14985390e(&local_18,*(undefined1 *)param_2[4],*(undefined1 *)param_2[8],
                *(undefined4 *)param_2[0xc]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985386a FUN_14985386a body=162 status=ok
// SIG undefined FUN_14985386a(void)

void FUN_14985386a(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  longlong local_218;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_218 = param_1 + 0x28;
  local_220 = *(undefined4 *)(param_1 + 0x24);
  local_228 = *(undefined4 *)(param_1 + 0x20);
  FUN_14985390e(&local_28,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19),
                *(undefined4 *)(param_1 + 0x1c));
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985390e FUN_14985390e body=208 status=ok
// SIG undefined FUN_14985390e(void)

void FUN_14985390e(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_7 + 0x10);
  *(undefined8 *)(param_7 + 8) = 0;
  *(undefined8 *)(param_7 + 0x10) = 0;
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
  if (3 < *(int *)(param_1 + 1)) {
    local_48 = *param_1;
    local_58 = param_6;
    local_60 = param_5;
    local_68 = param_4;
    local_40 = *(int *)(param_1 + 1);
    FUN_1498515de(param_7,&local_48,param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498539e0 FUN_1498539e0 body=79 status=ok
// SIG undefined FUN_1498539e0(void)

void FUN_1498539e0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_1446697e0(&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853a30 FUN_149853a30 body=101 status=ok
// SIG undefined FUN_149853a30(void)

void FUN_149853a30(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 0x1f0);
  local_18 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1446697e0(&local_20,param_1 + 0x200);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853a96 FUN_149853a96 body=79 status=ok
// SIG undefined FUN_149853a96(void)

void FUN_149853a96(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_144669884(&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853ae6 FUN_149853ae6 body=101 status=ok
// SIG undefined FUN_149853ae6(void)

void FUN_149853ae6(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 0x1f0);
  local_18 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_144669884(&local_20,param_1 + 0x200);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853b4c FUN_149853b4c body=55 status=ok
// SIG undefined FUN_149853b4c(void)

void FUN_149853b4c(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_144669a3e(*puVar1,puVar1[4],*(undefined4 *)puVar1[8],*(undefined4 *)puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 149853b84 FUN_149853b84 body=129 status=ok
// SIG undefined FUN_149853b84(void)

void FUN_149853b84(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x40;
  FUN_144669a3e(param_1 + 8,param_1 + 0x20,*(undefined4 *)(param_1 + 0x38),
                *(undefined4 *)(param_1 + 0x3c));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853c06 FUN_149853c06 body=49 status=ok
// SIG undefined FUN_149853c06(void)

void FUN_149853c06(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_144669f64(*puVar1,*(undefined4 *)puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 149853c38 FUN_149853c38 body=128 status=ok
// SIG undefined FUN_149853c38(void)

void FUN_149853c38(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x60;
  FUN_144669f64(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x28,param_1 + 0x40);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853cd2 FUN_149853cd2 body=115 status=ok
// SIG undefined FUN_149853cd2(void)

void FUN_149853cd2(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14466a01c(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853d46 FUN_149853d46 body=51 status=ok
// SIG undefined FUN_149853d46(void)

void FUN_149853d46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14466a0f2(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],*(undefined4 *)puVar1[8],
                *(undefined4 *)puVar1[0xc]);
  return;
}



// FUNCTION 149853d7a FUN_149853d7a body=74 status=ok
// SIG undefined FUN_149853d7a(void)

void FUN_149853d7a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14466a0f2(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x208,*(undefined4 *)(param_1 + 0x218),
                *(undefined4 *)(param_1 + 0x21c));
  return;
}



// FUNCTION 149853dc4 FUN_149853dc4 body=469 status=ok
// SIG undefined FUN_149853dc4(void)

void FUN_149853dc4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b5;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_2 = (longlong *)*param_2;
  puVar6 = (undefined8 *)*param_2;
  local_a8 = param_2[4];
  local_b5 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  uVar2 = *(undefined4 *)param_2[0x10];
  local_b4 = *(undefined4 *)param_2[0x14];
  local_b0 = param_2[0x18];
  lVar7 = param_2[0x1c];
  lVar8 = param_2[0x20];
  puVar9 = (undefined8 *)param_2[0x24];
  uVar4 = *(undefined1 *)param_2[0x28];
  uVar3 = *(undefined4 *)param_2[0x2c];
  uVar5 = *(undefined1 *)param_2[0x30];
  lVar10 = param_2[0x34];
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_c0 = FUN_144828ac0(param_2 + 0x38,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  local_a0 = *puVar9;
  local_e8 = &local_a0;
  local_98 = *(undefined4 *)(puVar9 + 1);
  local_90 = *puVar6;
  local_88 = *(undefined4 *)(puVar6 + 1);
  local_100 = local_b0;
  local_108 = local_b4;
  local_118 = uVar1;
  local_110 = uVar2;
  local_f8 = lVar7;
  local_f0 = lVar8;
  local_e0 = uVar4;
  local_d8 = uVar3;
  local_d0 = uVar5;
  local_c8 = lVar10;
  FUN_14466a408(*(undefined8 *)(param_1 + 0xc0),&local_90,local_a8,
                CONCAT31((int3)((uint)local_88 >> 8),local_b5));
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149853fa2 FUN_149853fa2 body=40 status=ok
// SIG undefined FUN_149853fa2(void)

void FUN_149853fa2(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149853fca(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 149853fca FUN_149853fca body=301 status=ok
// SIG undefined FUN_149853fca(void)

void FUN_149853fca(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *(undefined8 *)(param_1 + 0x270);
  local_98 = &local_68;
  local_60 = *(undefined4 *)(param_1 + 0x278);
  local_70 = param_1 + 800;
  local_78 = param_1 + 0x290;
  local_80 = *(undefined1 *)(param_1 + 0x288);
  local_88 = *(undefined4 *)(param_1 + 0x284);
  local_90 = *(undefined1 *)(param_1 + 0x280);
  local_a0 = param_1 + 600;
  local_a8 = param_1 + 0x240;
  local_b0 = param_1 + 0x228;
  local_b8 = *(undefined4 *)(param_1 + 0x224);
  local_c0 = *(undefined4 *)(param_1 + 0x220);
  local_c8 = *(undefined4 *)(param_1 + 0x21c);
  local_58 = *(undefined8 *)(param_1 + 0x1f0);
  local_50 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14466a408(param_2,&local_58,param_1 + 0x200,*(undefined1 *)(param_1 + 0x218));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498540f8 FUN_1498540f8 body=470 status=ok
// SIG undefined FUN_1498540f8(void)

void FUN_1498540f8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b5;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_2 = (longlong *)*param_2;
  puVar6 = (undefined8 *)*param_2;
  local_a8 = param_2[4];
  local_b5 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  uVar2 = *(undefined4 *)param_2[0x10];
  local_b4 = *(undefined4 *)param_2[0x14];
  local_b0 = param_2[0x18];
  lVar7 = param_2[0x1c];
  lVar8 = param_2[0x20];
  puVar9 = (undefined8 *)param_2[0x24];
  uVar4 = *(undefined1 *)param_2[0x28];
  uVar3 = *(undefined4 *)param_2[0x2c];
  uVar5 = *(undefined1 *)param_2[0x30];
  lVar10 = param_2[0x34];
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_c0 = FUN_144828ac0(param_2 + 0x38,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  local_90 = *puVar9;
  local_e8 = &local_90;
  local_88 = *(undefined4 *)(puVar9 + 1);
  local_a0 = *puVar6;
  local_98 = *(undefined4 *)(puVar6 + 1);
  local_100 = local_b0;
  local_108 = local_b4;
  local_118 = uVar1;
  local_110 = uVar2;
  local_f8 = lVar7;
  local_f0 = lVar8;
  local_e0 = uVar4;
  local_d8 = uVar3;
  local_d0 = uVar5;
  local_c8 = lVar10;
  FUN_14466a408(*(undefined8 *)(param_1 + 0xc0),&local_a0,local_a8,local_b5);
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498542d8 FUN_1498542d8 body=40 status=ok
// SIG undefined FUN_1498542d8(void)

void FUN_1498542d8(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149854300(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 149854300 FUN_149854300 body=300 status=ok
// SIG undefined FUN_149854300(void)

void FUN_149854300(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = *(undefined8 *)(param_1 + 0x1f0);
  local_48 = *(undefined4 *)(param_1 + 0x1f8);
  local_60 = *(undefined8 *)(param_1 + 0x270);
  local_98 = &local_60;
  local_58 = *(undefined4 *)(param_1 + 0x278);
  local_70 = param_1 + 800;
  local_78 = param_1 + 0x290;
  local_80 = *(undefined1 *)(param_1 + 0x288);
  local_88 = *(undefined4 *)(param_1 + 0x284);
  local_90 = *(undefined1 *)(param_1 + 0x280);
  local_a0 = param_1 + 600;
  local_a8 = param_1 + 0x240;
  local_b0 = param_1 + 0x228;
  local_b8 = *(undefined4 *)(param_1 + 0x224);
  local_c0 = *(undefined4 *)(param_1 + 0x220);
  local_c8 = *(undefined4 *)(param_1 + 0x21c);
  FUN_14466a408(param_2,&local_50,param_1 + 0x200,*(undefined1 *)(param_1 + 0x218));
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985442e FUN_14985442e body=273 status=ok
// SIG undefined FUN_14985442e(void)

void FUN_14985442e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  uVar3 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  uVar2 = *(undefined4 *)param_2[0x10];
  lVar7 = param_2[0x14];
  lVar8 = param_2[0x18];
  uVar4 = *(undefined1 *)param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_80 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_70 = *puVar5;
  local_68 = *(undefined4 *)(puVar5 + 1);
  local_a8 = uVar1;
  local_a0 = uVar2;
  local_98 = lVar7;
  local_90 = lVar8;
  local_88 = uVar4;
  FUN_14466dece(*(undefined8 *)(param_1 + 0xc0),&local_70,lVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149854548 FUN_149854548 body=190 status=ok
// SIG undefined FUN_149854548(void)

void FUN_149854548(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_30 = param_1 + 0x260;
  local_38 = *(undefined1 *)(param_1 + 600);
  local_40 = param_1 + 0x240;
  local_48 = param_1 + 0x228;
  local_50 = *(undefined4 *)(param_1 + 0x220);
  local_58 = *(undefined4 *)(param_1 + 0x21c);
  FUN_14466dece(param_1 + 0x10,&local_28,param_1 + 0x200,*(undefined1 *)(param_1 + 0x218));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149854608 FUN_149854608 body=86 status=ok
// SIG undefined FUN_149854608(void)

void FUN_149854608(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_14466e934(*(undefined8 *)(param_1 + 0xc0),&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149854660 FUN_149854660 body=106 status=ok
// SIG undefined FUN_149854660(void)

void FUN_149854660(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14466e934(param_1 + 0x10,&local_28,param_1 + 0x200);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498546cc FUN_1498546cc body=86 status=ok
// SIG undefined FUN_1498546cc(void)

void FUN_1498546cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_14466e934(*(undefined8 *)(param_1 + 0xc0),&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149854724 FUN_149854724 body=109 status=ok
// SIG undefined FUN_149854724(void)

void FUN_149854724(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14466e934(param_1 + 0x10,&local_28,param_1 + 0x200);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498547a6 FUN_1498547a6 body=114 status=ok
// SIG undefined FUN_1498547a6(void)

void FUN_1498547a6(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14466ec84(param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149854832 FUN_149854832 body=115 status=ok
// SIG undefined FUN_149854832(void)

void FUN_149854832(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14466efe0(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x24);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498548a6 FUN_1498548a6 body=1622 status=ok
// SIG undefined FUN_1498548a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1498548a6(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pdVar3 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_2;
    param_2 = param_2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  if (((9.999999747378752e-05 < ABS(*param_3)) || (9.999999747378752e-05 < ABS(param_3[1]))) ||
     (9.999999747378752e-05 < ABS(param_3[2]))) {
    dVar7 = *param_3;
    dVar8 = param_3[1];
    dVar9 = param_1[2];
    dVar10 = param_1[3];
    dVar5 = param_1[3];
    dVar13 = *param_1;
    dVar1 = param_1[1];
    dVar4 = dVar8 * dVar13 - dVar7 * dVar1;
    dVar6 = param_3[2] * dVar1 - dVar8 * dVar9;
    dVar18 = dVar7 * dVar9 - dVar13 * param_3[2];
    dVar6 = dVar6 + dVar6;
    dVar18 = dVar18 + dVar18;
    dVar4 = dVar4 + dVar4;
    local_98 = dVar4 * dVar5 + param_3[2] + (dVar18 * dVar13 - dVar6 * dVar1);
    local_a8 = (dVar4 * dVar1 - dVar18 * dVar9) + dVar5 * dVar6 + dVar7;
    dStack_a0 = (dVar9 * dVar6 - dVar13 * dVar4) + param_1[3] * dVar18 + dVar8;
    dVar7 = param_1[1];
    dVar8 = dVar9 - dVar13 * 0.0;
    dVar4 = dVar13 * 0.0 - dVar7;
    dVar6 = dVar7 * 0.0 + dVar9 * -0.0;
    dVar4 = dVar4 + dVar4;
    dVar8 = dVar8 + dVar8;
    dVar6 = dVar6 + dVar6;
    local_b0 = (dVar13 * dVar8 - dVar6 * dVar7) + dVar5 * dVar4 + 0.0;
    local_b8 = (dVar9 * dVar6 - dVar4 * dVar13) + dVar5 * dVar8 + 0.0;
    local_c0 = (dVar7 * dVar4 - dVar8 * dVar9) + dVar5 * dVar6 + 1.0;
    FUN_144a9d448(&local_e8);
    dVar5 = dVar1 * local_d8 * -1.0 + dVar9 * local_e0 + dVar10 * local_e8 * 1.0 + dVar13 * local_d0
    ;
    dVar7 = dVar13 * local_d8 * 1.0 + dVar10 * local_e0 + dVar9 * local_e8 * -1.0 + dVar1 * local_d0
    ;
    dVar8 = dVar10 * local_d8 * 1.0 +
            ((local_e8 * dVar1 * 1.0 + local_d0 * dVar9) - dVar13 * local_e0);
    dVar9 = dVar9 * local_d8 * -1.0 +
            ((local_e8 * dVar13 * -1.0 + local_d0 * dVar10) - dVar1 * local_e0);
    dVar10 = dVar8 * dVar8 + dVar5 * dVar5;
    dVar13 = dVar9 * dVar9 + dVar7 * dVar7;
    auVar16._0_8_ = dVar10 + dVar13;
    auVar16._8_8_ = dVar10 + dVar13;
    auVar11 = sqrtpd(auVar16,auVar16);
    auVar14 = divpd(_DAT_149934d80,auVar11);
    auVar15._0_8_ = auVar14._0_8_ * dVar8;
    auVar15._8_8_ = auVar14._8_8_ * dVar9;
    auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar11 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar15,auVar11);
    *param_1 = (double)((ulonglong)(dVar5 * auVar14._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    param_1[1] = (double)((ulonglong)(dVar7 * auVar14._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar11;
  }
  if (((9.999999747378752e-05 < ABS(*param_4)) || (9.999999747378752e-05 < ABS(param_4[1]))) ||
     (9.999999747378752e-05 < ABS(param_4[2]))) {
    dVar7 = *param_4;
    dVar8 = param_4[1];
    dVar9 = param_1[2];
    dVar10 = param_1[3];
    dVar5 = param_1[3];
    dVar13 = *param_1;
    dVar1 = param_1[1];
    dVar4 = dVar8 * dVar13 - dVar7 * dVar1;
    dVar6 = param_4[2] * dVar1 - dVar8 * dVar9;
    dVar18 = dVar7 * dVar9 - dVar13 * param_4[2];
    dVar6 = dVar6 + dVar6;
    dVar18 = dVar18 + dVar18;
    dVar4 = dVar4 + dVar4;
    local_98 = dVar4 * dVar5 + param_4[2] + (dVar18 * dVar13 - dVar6 * dVar1);
    local_a8 = (dVar4 * dVar1 - dVar18 * dVar9) + dVar5 * dVar6 + dVar7;
    dStack_a0 = (dVar9 * dVar6 - dVar13 * dVar4) + param_1[3] * dVar18 + dVar8;
    dVar7 = param_1[1];
    dVar4 = dVar13 * 0.0 + dVar7 * -0.0;
    dVar6 = dVar7 - dVar9 * 0.0;
    dVar8 = dVar9 * 0.0 - dVar13;
    dVar4 = dVar4 + dVar4;
    dVar8 = dVar8 + dVar8;
    dVar6 = dVar6 + dVar6;
    local_b0 = (dVar13 * dVar8 - dVar6 * dVar7) + dVar5 * dVar4 + 1.0;
    local_b8 = (dVar9 * dVar6 - dVar4 * dVar13) + dVar5 * dVar8 + 0.0;
    local_c0 = (dVar7 * dVar4 - dVar8 * dVar9) + dVar5 * dVar6 + 0.0;
    FUN_144a9d448(&local_e8);
    dVar5 = dVar1 * local_d8 * -1.0 + dVar9 * local_e0 + dVar10 * local_e8 * 1.0 + dVar13 * local_d0
    ;
    dVar7 = dVar13 * local_d8 * 1.0 + dVar10 * local_e0 + dVar9 * local_e8 * -1.0 + dVar1 * local_d0
    ;
    dVar8 = dVar10 * local_d8 * 1.0 +
            ((local_e8 * dVar1 * 1.0 + local_d0 * dVar9) - dVar13 * local_e0);
    dVar9 = dVar9 * local_d8 * -1.0 +
            ((local_e8 * dVar13 * -1.0 + local_d0 * dVar10) - dVar1 * local_e0);
    dVar10 = dVar8 * dVar8 + dVar5 * dVar5;
    dVar13 = dVar9 * dVar9 + dVar7 * dVar7;
    auVar12._0_8_ = dVar10 + dVar13;
    auVar12._8_8_ = dVar10 + dVar13;
    auVar11 = sqrtpd(auVar12,auVar12);
    auVar16 = divpd(_DAT_149934d80,auVar11);
    auVar17._0_8_ = auVar16._0_8_ * dVar8;
    auVar17._8_8_ = auVar16._8_8_ * dVar9;
    auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar11 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar14);
    *param_1 = (double)((ulonglong)(dVar5 * auVar16._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
    param_1[1] = (double)((ulonglong)(dVar7 * auVar16._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar11;
  }
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149854efe FUN_149854efe body=461 status=ok
// SIG undefined FUN_149854efe(void)

undefined8 FUN_149854efe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_408 [32];
  undefined1 local_3e8 [496];
  undefined1 auStack_1f8 [24];
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 auStack_158 [144];
  undefined1 auStack_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_408;
  FUN_1498550cc(local_3e8);
  FUN_1444888de(auStack_1f8,param_1 + 0x1f0);
  plVar5 = local_1d8;
  local_1e0 = *(undefined8 *)(param_1 + 0x208);
  plVar3 = *(longlong **)(param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_1d8;
      local_1d8 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_1d8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_1d8;
      }
    }
  }
  local_1d8 = plVar3;
  local_1d0 = *(undefined1 *)(param_1 + 0x218);
  local_1cc = *(undefined4 *)(param_1 + 0x21c);
  local_1c8 = *(undefined4 *)(param_1 + 0x220);
  local_1c4 = *(undefined4 *)(param_1 + 0x224);
  local_1b0 = *(undefined8 *)(param_1 + 0x238);
  local_1c0 = *(undefined8 *)(param_1 + 0x228);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x230);
  local_1a8 = *(undefined8 *)(param_1 + 0x240);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x248);
  local_198 = *(undefined8 *)(param_1 + 0x250);
  local_190 = *(undefined4 *)(param_1 + 600);
  uStack_18c = *(undefined4 *)(param_1 + 0x25c);
  uStack_188 = *(undefined4 *)(param_1 + 0x260);
  uStack_184 = *(undefined4 *)(param_1 + 0x264);
  local_180 = *(undefined8 *)(param_1 + 0x268);
  FUN_1492be5ba(auStack_178,param_1 + 0x270);
  local_168 = *(undefined1 *)(param_1 + 0x280);
  local_164 = *(undefined4 *)(param_1 + 0x284);
  local_160 = *(undefined1 *)(param_1 + 0x288);
  memcpy(auStack_158,(void *)(param_1 + 0x290),0x90);
  FUN_1492be100(auStack_c8,param_1 + 800);
  FUN_14985524a(param_2,local_3e8);
  FUN_14985531e(local_3e8);
  if ((local_28 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498550cc FUN_1498550cc body=382 status=ok
// SIG undefined FUN_1498550cc(void)

undefined8 * FUN_1498550cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14beb8640;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = &PTR_FUN_14beb2758;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  memset(param_1 + 0x65,0,0x90);
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0xc;
  param_1[0x45] = 0x3ff0000000000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4b] = DAT_14c8464e0;
  param_1[0x4c] = uVar1;
  param_1[0x4d] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x51) = 1;
  uVar12 = uRam000000014c8464d8;
  uVar11 = DAT_14c8464d0;
  uVar10 = DAT_14c8464c8;
  uVar9 = DAT_14c8464c0;
  uVar8 = DAT_14c8464b8;
  uVar7 = DAT_14c8464b0;
  uVar6 = DAT_14c8464a8;
  uVar5 = DAT_14c8464a0;
  uVar4 = DAT_14c846498;
  uVar3 = DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  param_1[0x53] = &DAT_3f8000003f800000;
  param_1[0x54] = 0x3f80000000000000;
  param_1[0x55] = 0x3f800000;
  param_1[0x56] = 0x3f80000000000000;
  param_1[0x58] = uVar1;
  param_1[0x59] = uVar2;
  param_1[0x5a] = uVar3;
  param_1[0x5b] = uVar4;
  param_1[0x5c] = uVar5;
  param_1[0x5d] = uVar6;
  param_1[0x5e] = uVar7;
  param_1[0x5f] = uVar8;
  param_1[0x60] = uVar9;
  param_1[0x61] = uVar10;
  param_1[0x62] = uVar11;
  param_1[99] = uVar12;
  return param_1;
}



// FUNCTION 14985524a FUN_14985524a body=211 status=ok
// SIG undefined FUN_14985524a(void)

undefined8 * FUN_14985524a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14676656c();
  param_1[2] = uVar1;
  uVar1 = FUN_146766bb0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14985531e FUN_14985531e body=148 status=ok
// SIG undefined FUN_14985531e(void)

void FUN_14985531e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb8640;
  FUN_1492be06a(param_1 + 100);
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1498553b2 FUN_1498553b2 body=266 status=ok
// SIG undefined FUN_1498553b2(void)

undefined8 FUN_1498553b2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_268 [32];
  undefined **local_248 [2];
  undefined1 local_238 [480];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_248[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_238);
  local_248[0] = &PTR_FUN_14beb86d0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = &PTR_FUN_14beb2758;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  FUN_1444888de(&local_58,param_1 + 0x1f0);
  plVar5 = plStack_38;
  local_40 = *(undefined8 *)(param_1 + 0x208);
  plVar3 = *(longlong **)(param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*plStack_38;
      plStack_38 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = plStack_38;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = plStack_38;
      }
    }
  }
  plStack_38 = plVar3;
  FUN_1498554be(param_2,local_248);
  FUN_149855592(local_248);
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498554be FUN_1498554be body=211 status=ok
// SIG undefined FUN_1498554be(void)

undefined8 * FUN_1498554be(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1467676c8();
  param_1[2] = uVar1;
  uVar1 = FUN_1467678ba();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149855592 FUN_149855592 body=119 status=ok
// SIG undefined FUN_149855592(void)

void FUN_149855592(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb86d0;
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149855612 FUN_149855612 body=43 status=ok
// SIG undefined FUN_149855612(void)

undefined8 FUN_149855612(undefined8 param_1,int param_2)

{
  FUN_149858e9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14985563e FUN_14985563e body=43 status=ok
// SIG undefined FUN_14985563e(void)

undefined8 FUN_14985563e(undefined8 param_1,int param_2)

{
  FUN_149858ee2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14985566a FUN_14985566a body=43 status=ok
// SIG undefined FUN_14985566a(void)

undefined8 FUN_14985566a(undefined8 param_1,int param_2)

{
  FUN_149851208();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 149855696 FUN_149855696 body=88 status=ok
// SIG undefined FUN_149855696(void)

undefined8 * FUN_149855696(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb2758;
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
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14985576e FUN_14985576e body=54 status=ok
// SIG undefined FUN_14985576e(void)

undefined1 FUN_14985576e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149855882(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1498557cc FUN_1498557cc body=59 status=ok
// SIG undefined FUN_1498557cc(void)

undefined8 FUN_1498557cc(longlong *param_1)

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



// FUNCTION 149855812 FUN_149855812 body=34 status=ok
// SIG undefined FUN_149855812(void)

void FUN_149855812(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_149851208(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 149855882 FUN_149855882 body=99 status=ok
// SIG undefined FUN_149855882(void)

longlong FUN_149855882(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_144756208(param_1 + 0x10,param_2 + 0x10);
  FUN_144a67f5c(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_144756208(param_1 + 0x48,param_2 + 0x48);
  FUN_144a67f5c(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14985592e FUN_14985592e body=54 status=ok
// SIG undefined FUN_14985592e(void)

undefined1 FUN_14985592e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14985137e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14985598c FUN_14985598c body=59 status=ok
// SIG undefined FUN_14985598c(void)

undefined8 FUN_14985598c(longlong *param_1)

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



// FUNCTION 1498559d2 FUN_1498559d2 body=74 status=ok
// SIG undefined FUN_1498559d2(void)

void FUN_1498559d2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 149855ad4 FUN_149855ad4 body=59 status=ok
// SIG undefined FUN_149855ad4(void)

undefined8 FUN_149855ad4(longlong *param_1)

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



// FUNCTION 149855b74 FUN_149855b74 body=34 status=ok
// SIG undefined FUN_149855b74(void)

undefined8 FUN_149855b74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 149855c28 FUN_149855c28 body=83 status=ok
// SIG undefined FUN_149855c28(void)

undefined1 FUN_149855c28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_1405b70a4(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_14985137e(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149855ca4 FUN_149855ca4 body=59 status=ok
// SIG undefined FUN_149855ca4(void)

undefined8 FUN_149855ca4(longlong *param_1)

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



// FUNCTION 149855cea FUN_149855cea body=34 status=ok
// SIG undefined FUN_149855cea(void)

void FUN_149855cea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_149855d86(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 149855d5a FUN_149855d5a body=43 status=ok
// SIG undefined FUN_149855d5a(void)

undefined8 FUN_149855d5a(undefined8 param_1,int param_2)

{
  FUN_149855d86();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149855d86 FUN_149855d86 body=96 status=ok
// SIG undefined FUN_149855d86(void)

void FUN_149855d86(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb6470;
  param_1[5] = &PTR_FUN_14beb2758;
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149855e78 FUN_149855e78 body=83 status=ok
// SIG undefined FUN_149855e78(void)

undefined1 FUN_149855e78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144756208(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_14985137e(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149855ef4 FUN_149855ef4 body=59 status=ok
// SIG undefined FUN_149855ef4(void)

undefined8 FUN_149855ef4(longlong *param_1)

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



// FUNCTION 149855f3a FUN_149855f3a body=34 status=ok
// SIG undefined FUN_149855f3a(void)

void FUN_149855f3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_149855fd6(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 149855faa FUN_149855faa body=43 status=ok
// SIG undefined FUN_149855faa(void)

undefined8 FUN_149855faa(undefined8 param_1,int param_2)

{
  FUN_149855fd6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149855fd6 FUN_149855fd6 body=96 status=ok
// SIG undefined FUN_149855fd6(void)

void FUN_149855fd6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb6660;
  param_1[5] = &PTR_FUN_14beb2758;
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149856038 FUN_149856038 body=74 status=ok
// SIG undefined FUN_149856038(void)

void FUN_149856038(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb6850;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 149856082 FUN_149856082 body=74 status=ok
// SIG undefined FUN_149856082(void)

void FUN_149856082(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb6850;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 1498560f0 FUN_1498560f0 body=110 status=ok
// SIG undefined FUN_1498560f0(void)

undefined8 FUN_1498560f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      FUN_1405b70a4(param_2 + -0x10,param_3 + -0x10);
      FUN_14985137e(param_2,param_3);
      param_3 = param_3 + 0x220;
      param_2 = param_2 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149856186 FUN_149856186 body=59 status=ok
// SIG undefined FUN_149856186(void)

undefined8 FUN_149856186(longlong *param_1)

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



// FUNCTION 1498561d2 FUN_1498561d2 body=40 status=ok
// SIG undefined FUN_1498561d2(void)

void FUN_1498561d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_149856274(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 149856248 FUN_149856248 body=43 status=ok
// SIG undefined FUN_149856248(void)

undefined8 FUN_149856248(undefined8 param_1,int param_2)

{
  FUN_149856274();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 149856274 FUN_149856274 body=119 status=ok
// SIG undefined FUN_149856274(void)

void FUN_149856274(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb6850;
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1498562ec FUN_1498562ec body=74 status=ok
// SIG undefined FUN_1498562ec(void)

void FUN_1498562ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb6a40;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 149856336 FUN_149856336 body=74 status=ok
// SIG undefined FUN_149856336(void)

void FUN_149856336(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb6a40;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 1498563a4 FUN_1498563a4 body=110 status=ok
// SIG undefined FUN_1498563a4(void)

undefined8 FUN_1498563a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      FUN_144756208(param_2 + -0x10,param_3 + -0x10);
      FUN_14985137e(param_2,param_3);
      param_3 = param_3 + 0x220;
      param_2 = param_2 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14985643a FUN_14985643a body=59 status=ok
// SIG undefined FUN_14985643a(void)

undefined8 FUN_14985643a(longlong *param_1)

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



// FUNCTION 149856486 FUN_149856486 body=40 status=ok
// SIG undefined FUN_149856486(void)

void FUN_149856486(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_149856528(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1498564fc FUN_1498564fc body=43 status=ok
// SIG undefined FUN_1498564fc(void)

undefined8 FUN_1498564fc(undefined8 param_1,int param_2)

{
  FUN_149856528();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 149856528 FUN_149856528 body=119 status=ok
// SIG undefined FUN_149856528(void)

void FUN_149856528(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb6a40;
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149856638 FUN_149856638 body=105 status=ok
// SIG undefined FUN_149856638(void)

undefined1 FUN_149856638(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar10,param_3 + 8 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x30 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x30 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498566ca FUN_1498566ca body=59 status=ok
// SIG undefined FUN_1498566ca(void)

undefined8 FUN_1498566ca(longlong *param_1)

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



// FUNCTION 149856766 FUN_149856766 body=99 status=ok
// SIG undefined FUN_149856766(void)

undefined8 * FUN_149856766(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb6c30;
  param_1[1] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[3];
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
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1498567ca FUN_1498567ca body=85 status=ok
// SIG undefined FUN_1498567ca(void)

void FUN_1498567ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14beb6c30;
    param_1[1] = &PTR_FUN_14beb2758;
    plVar3 = (longlong *)param_1[3];
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
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}


