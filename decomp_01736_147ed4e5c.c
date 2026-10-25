// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ed4e5c FUN_147ed4e5c body=29 status=ok
// SIG undefined FUN_147ed4e5c(void)

bool FUN_147ed4e5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed4e7a FUN_147ed4e7a body=26 status=ok
// SIG undefined FUN_147ed4e7a(void)

bool FUN_147ed4e7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed4e94 FUN_147ed4e94 body=24 status=ok
// SIG undefined FUN_147ed4e94(void)

bool FUN_147ed4e94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed4eac FUN_147ed4eac body=101 status=ok
// SIG undefined FUN_147ed4eac(void)

void FUN_147ed4eac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac045c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4f12 FUN_147ed4f12 body=101 status=ok
// SIG undefined FUN_147ed4f12(void)

void FUN_147ed4f12(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac045c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed4f78 FUN_147ed4f78 body=131 status=ok
// SIG undefined FUN_147ed4f78(void)

void FUN_147ed4f78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac045c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed4ffc FUN_147ed4ffc body=39 status=ok
// SIG undefined FUN_147ed4ffc(void)

void FUN_147ed4ffc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed501f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147ed5024 FUN_147ed5024 body=134 status=ok
// SIG undefined FUN_147ed5024(void)

bool FUN_147ed5024(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed50ac FUN_147ed50ac body=34 status=ok
// SIG undefined FUN_147ed50ac(void)

undefined8 FUN_147ed50ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed50e8 FUN_147ed50e8 body=29 status=ok
// SIG undefined FUN_147ed50e8(void)

bool FUN_147ed50e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed5106 FUN_147ed5106 body=26 status=ok
// SIG undefined FUN_147ed5106(void)

bool FUN_147ed5106(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed5120 FUN_147ed5120 body=24 status=ok
// SIG undefined FUN_147ed5120(void)

bool FUN_147ed5120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed5144 FUN_147ed5144 body=101 status=ok
// SIG undefined FUN_147ed5144(void)

void FUN_147ed5144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac046a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed51aa FUN_147ed51aa body=101 status=ok
// SIG undefined FUN_147ed51aa(void)

void FUN_147ed51aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac046a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed5210 FUN_147ed5210 body=131 status=ok
// SIG undefined FUN_147ed5210(void)

void FUN_147ed5210(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac046a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed5294 FUN_147ed5294 body=52 status=ok
// SIG undefined FUN_147ed5294(void)

void FUN_147ed5294(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed52c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed52c8 FUN_147ed52c8 body=155 status=ok
// SIG undefined FUN_147ed52c8(void)

bool FUN_147ed52c8(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 147ed5366 FUN_147ed5366 body=34 status=ok
// SIG undefined FUN_147ed5366(void)

undefined8 FUN_147ed5366(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed53a2 FUN_147ed53a2 body=29 status=ok
// SIG undefined FUN_147ed53a2(void)

bool FUN_147ed53a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed53c0 FUN_147ed53c0 body=26 status=ok
// SIG undefined FUN_147ed53c0(void)

bool FUN_147ed53c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed53da FUN_147ed53da body=24 status=ok
// SIG undefined FUN_147ed53da(void)

bool FUN_147ed53da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed53f2 FUN_147ed53f2 body=101 status=ok
// SIG undefined FUN_147ed53f2(void)

void FUN_147ed53f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac046a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed5458 FUN_147ed5458 body=101 status=ok
// SIG undefined FUN_147ed5458(void)

void FUN_147ed5458(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac046a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed54be FUN_147ed54be body=131 status=ok
// SIG undefined FUN_147ed54be(void)

void FUN_147ed54be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac046a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed5542 FUN_147ed5542 body=52 status=ok
// SIG undefined FUN_147ed5542(void)

void FUN_147ed5542(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed5573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ed5576 FUN_147ed5576 body=155 status=ok
// SIG undefined FUN_147ed5576(void)

bool FUN_147ed5576(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 147ed5612 FUN_147ed5612 body=36 status=ok
// SIG undefined FUN_147ed5612(void)

undefined8 FUN_147ed5612(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed5650 FUN_147ed5650 body=29 status=ok
// SIG undefined FUN_147ed5650(void)

bool FUN_147ed5650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed566e FUN_147ed566e body=26 status=ok
// SIG undefined FUN_147ed566e(void)

bool FUN_147ed566e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed5688 FUN_147ed5688 body=24 status=ok
// SIG undefined FUN_147ed5688(void)

bool FUN_147ed5688(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed56a0 FUN_147ed56a0 body=101 status=ok
// SIG undefined FUN_147ed56a0(void)

void FUN_147ed56a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed5706 FUN_147ed5706 body=101 status=ok
// SIG undefined FUN_147ed5706(void)

void FUN_147ed5706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac04780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed576c FUN_147ed576c body=131 status=ok
// SIG undefined FUN_147ed576c(void)

void FUN_147ed576c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed57f0 FUN_147ed57f0 body=142 status=ok
// SIG undefined FUN_147ed57f0(void)

void FUN_147ed57f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_28 = *param_2;
  local_20 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(iVar3 + lVar6);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed5880 FUN_147ed5880 body=207 status=ok
// SIG undefined FUN_147ed5880(void)

bool FUN_147ed5880(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar8 = local_38;
  }
  else {
    lVar8 = 0;
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar7 != 0) {
    pcVar4 = *(code **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar4)(iVar3 + lVar7);
  }
  if (lVar8 != 0) {
    FUN_140113f3a(lVar8);
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar7 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed5950 FUN_147ed5950 body=96 status=ok
// SIG undefined FUN_147ed5950(void)

void FUN_147ed5950(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 147ed59b0 FUN_147ed59b0 body=204 status=ok
// SIG undefined FUN_147ed59b0(void)

undefined1 * FUN_147ed59b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar4 = CONCAT62(uStack_2e,local_30);
  if ((((lVar4 == 0) || (lVar3 = FUN_1411c53f8(), lVar3 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = CONCAT62(uStack_2e,local_30);
  }
  lVar3 = FUN_145b60d02();
  if (lVar4 == lVar3) {
    uVar2 = FUN_147eb9a70(param_2,*param_4);
    *param_1 = uVar2;
  }
  param_1[1] = lVar4 == lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed5a7d FUN_147ed5a7d body=205 status=ok
// SIG undefined FUN_147ed5a7d(void)

undefined8 * FUN_147ed5a7d(undefined8 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar4 = CONCAT62(uStack_2e,local_30);
  if ((((lVar4 == 0) || (lVar2 = FUN_1411c53f8(), lVar2 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = CONCAT62(uStack_2e,local_30);
  }
  lVar2 = FUN_145b60a44();
  if (lVar4 == lVar2) {
    uVar3 = FUN_147eb9740(param_2,*param_4);
    *param_1 = uVar3;
  }
  *(bool *)(param_1 + 1) = lVar4 == lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed5b4b FUN_147ed5b4b body=204 status=ok
// SIG undefined FUN_147ed5b4b(void)

undefined1 * FUN_147ed5b4b(undefined1 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar4 = CONCAT62(uStack_2e,local_30);
  if ((((lVar4 == 0) || (lVar3 = FUN_1411c53f8(), lVar3 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = CONCAT62(uStack_2e,local_30);
  }
  lVar3 = FUN_145b60b2e();
  if (lVar4 == lVar3) {
    uVar2 = FUN_147eb9830(param_2,*param_4);
    *param_1 = uVar2;
  }
  param_1[1] = lVar4 == lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed5c18 FUN_147ed5c18 body=206 status=ok
// SIG undefined FUN_147ed5c18(void)

undefined4 * FUN_147ed5c18(undefined4 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar3 = CONCAT62(uStack_2e,local_30);
  if ((((lVar3 == 0) || (lVar2 = FUN_1411c53f8(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = CONCAT62(uStack_2e,local_30);
  }
  lVar2 = FUN_145a751d4();
  if (lVar3 == lVar2) {
    uVar4 = FUN_147eb99a8(param_2,*param_4);
    *param_1 = uVar4;
  }
  *(bool *)(param_1 + 1) = lVar3 == lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed5ce7 FUN_147ed5ce7 body=204 status=ok
// SIG undefined FUN_147ed5ce7(void)

undefined4 * FUN_147ed5ce7(undefined4 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar4 = CONCAT62(uStack_2e,local_30);
  if ((((lVar4 == 0) || (lVar3 = FUN_1411c53f8(), lVar3 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = CONCAT62(uStack_2e,local_30);
  }
  lVar3 = FUN_145b60dec();
  if (lVar4 == lVar3) {
    uVar2 = FUN_147eb98e8(param_2,*param_4);
    *param_1 = uVar2;
  }
  *(bool *)(param_1 + 1) = lVar4 == lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed5db4 FUN_147ed5db4 body=207 status=ok
// SIG undefined FUN_147ed5db4(void)

undefined8 * FUN_147ed5db4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar3 = CONCAT62(uStack_2e,local_30);
  if (lVar3 != 0) {
    lVar2 = FUN_1411c53f8();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = CONCAT62(uStack_2e,local_30);
      goto LAB_147ed5e3d;
    }
  }
  lVar3 = 0;
LAB_147ed5e3d:
  lVar2 = FUN_145b60ed6();
  if (lVar3 == lVar2) {
    FUN_147eb9c56(param_2,param_1,*param_4);
  }
  else {
    *param_1 = 0xffffffff;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed5e84 FUN_147ed5e84 body=238 status=ok
// SIG undefined FUN_147ed5e84(void)

undefined8 * FUN_147ed5e84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  short local_40;
  undefined6 uStack_3e;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_40);
    *param_4 = local_40;
    sVar1 = local_40;
  }
  FUN_147eacaf8(param_2,&local_40,sVar1);
  lVar4 = CONCAT62(uStack_3e,local_40);
  if (lVar4 != 0) {
    lVar2 = FUN_1411c53f8();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar4 = CONCAT62(uStack_3e,local_40);
      goto LAB_147ed5f12;
    }
  }
  lVar4 = 0;
LAB_147ed5f12:
  lVar2 = FUN_145b60fc0();
  if (lVar4 == lVar2) {
    FUN_147eb9b2c(param_2,&local_40,*param_4);
    uVar3 = CONCAT62(uStack_3e,local_40);
  }
  else {
    local_34 = 0xffffffff;
    uVar3 = 0;
    local_38 = 0;
  }
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_34;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed5f73 FUN_147ed5f73 body=205 status=ok
// SIG undefined FUN_147ed5f73(void)

undefined8 * FUN_147ed5f73(undefined8 *param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar4 = CONCAT62(uStack_2e,local_30);
  if ((((lVar4 == 0) || (lVar2 = FUN_1411c53f8(), lVar2 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = CONCAT62(uStack_2e,local_30);
  }
  lVar2 = FUN_1412dbfa6();
  if (lVar4 == lVar2) {
    uVar3 = FUN_147eb9650(param_2,*param_4);
    *param_1 = uVar3;
  }
  *(bool *)(param_1 + 1) = lVar4 == lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed6041 FUN_147ed6041 body=206 status=ok
// SIG undefined FUN_147ed6041(void)

longlong FUN_147ed6041(longlong param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar3 = CONCAT62(uStack_2e,local_30);
  if ((((lVar3 == 0) || (lVar2 = FUN_1411c53f8(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = CONCAT62(uStack_2e,local_30);
  }
  lVar2 = FUN_145a752c0();
  if (lVar3 == lVar2) {
    FUN_147eb9d30(param_2,param_1,*param_4);
  }
  *(bool *)(param_1 + 0x18) = lVar3 == lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed6110 FUN_147ed6110 body=206 status=ok
// SIG undefined FUN_147ed6110(void)

longlong FUN_147ed6110(longlong param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  short local_30;
  undefined6 uStack_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = *param_4;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_30);
    *param_4 = local_30;
    sVar1 = local_30;
  }
  FUN_147eacaf8(param_2,&local_30,sVar1);
  lVar3 = CONCAT62(uStack_2e,local_30);
  if ((((lVar3 == 0) || (lVar2 = FUN_1411c53f8(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar3 = 0;
  }
  else {
    lVar3 = CONCAT62(uStack_2e,local_30);
  }
  lVar2 = FUN_1458b8ba0();
  if (lVar3 == lVar2) {
    FUN_147eb02a8(param_2,param_1,*param_4);
  }
  *(bool *)(param_1 + 0x18) = lVar3 == lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ed61e0 FUN_147ed61e0 body=34 status=ok
// SIG undefined FUN_147ed61e0(void)

undefined8 FUN_147ed61e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147ed621c FUN_147ed621c body=29 status=ok
// SIG undefined FUN_147ed621c(void)

bool FUN_147ed621c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed623a FUN_147ed623a body=26 status=ok
// SIG undefined FUN_147ed623a(void)

bool FUN_147ed623a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed6254 FUN_147ed6254 body=24 status=ok
// SIG undefined FUN_147ed6254(void)

bool FUN_147ed6254(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed626c FUN_147ed626c body=93 status=ok
// SIG undefined FUN_147ed626c(void)

void FUN_147ed626c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac04810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ed62ca FUN_147ed62ca body=93 status=ok
// SIG undefined FUN_147ed62ca(void)

void FUN_147ed62ca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac04810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ed6328 FUN_147ed6328 body=123 status=ok
// SIG undefined FUN_147ed6328(void)

void FUN_147ed6328(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac04810;
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



// FUNCTION 147ed63a4 FUN_147ed63a4 body=35 status=ok
// SIG undefined FUN_147ed63a4(void)

void FUN_147ed63a4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ed63c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147ed63c8 FUN_147ed63c8 body=130 status=ok
// SIG undefined FUN_147ed63c8(void)

bool FUN_147ed63c8(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed644c FUN_147ed644c body=130 status=ok
// SIG undefined FUN_147ed644c(void)

void FUN_147ed644c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed64d0 FUN_147ed64d0 body=46 status=ok
// SIG undefined FUN_147ed64d0(void)

void FUN_147ed64d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_147ecd81a(lVar1);
  thunk_FUN_1400020a8(lVar1,0x38);
  return;
}



// FUNCTION 147ed64fe FUN_147ed64fe body=34 status=ok
// SIG undefined FUN_147ed64fe(void)

undefined8 FUN_147ed64fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147ed6520 FUN_147ed6520 body=132 status=ok
// SIG undefined FUN_147ed6520(void)

void FUN_147ed6520(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed65a6 FUN_147ed65a6 body=147 status=ok
// SIG undefined FUN_147ed65a6(void)

void FUN_147ed65a6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed663a FUN_147ed663a body=209 status=ok
// SIG undefined FUN_147ed663a(void)

int FUN_147ed663a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 147ed670c FUN_147ed670c body=143 status=ok
// SIG undefined FUN_147ed670c(void)

void FUN_147ed670c(longlong param_1,int param_2)

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



// FUNCTION 147ed679c FUN_147ed679c body=331 status=ok
// SIG undefined FUN_147ed679c(void)

undefined4 * FUN_147ed679c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ed68e8(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  FUN_147ed34a6(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147ed69d6(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x2c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ed6afe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed68e8 FUN_147ed68e8 body=238 status=ok
// SIG undefined FUN_147ed68e8(void)

int * FUN_147ed68e8(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147ed69d6 FUN_147ed69d6 body=174 status=ok
// SIG undefined FUN_147ed69d6(void)

undefined8 FUN_147ed69d6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_147ed6a84(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ed6a84 FUN_147ed6a84 body=122 status=ok
// SIG undefined FUN_147ed6a84(void)

void FUN_147ed6a84(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147ed6afe FUN_147ed6afe body=478 status=ok
// SIG undefined FUN_147ed6afe(void)

void FUN_147ed6afe(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x2c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
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



// FUNCTION 147ed6cde FUN_147ed6cde body=113 status=ok
// SIG undefined FUN_147ed6cde(void)

void FUN_147ed6cde(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147ed6d50 FUN_147ed6d50 body=147 status=ok
// SIG undefined FUN_147ed6d50(void)

void FUN_147ed6d50(longlong param_1,int param_2)

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



// FUNCTION 147ed6de4 FUN_147ed6de4 body=789 status=ok
// SIG undefined FUN_147ed6de4(void)

void FUN_147ed6de4(longlong param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong *plVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar11 = &local_348;
    do {
      pfVar7 = (float *)*plVar11;
      pfVar13 = (float *)plVar11[1];
      iVar12 = (int)plVar11[2];
      iVar8 = (int)((ulonglong)((longlong)pfVar13 - (longlong)pfVar7) >> 3);
      if (iVar12 != 0) {
LAB_147ed6e84:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar4 = *(undefined8 *)(pfVar7 + uVar9 * 2);
          *(undefined8 *)(pfVar7 + uVar9 * 2) = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = uVar4;
          pfVar10 = pfVar13 + 2;
          pfVar6 = pfVar7;
          do {
            pfVar6 = pfVar6 + 2;
            if (pfVar6 <= pfVar13) {
              do {
                fVar16 = pfVar6[1];
                if ((uint)pfVar7[1] < 0x40000000 == (uint)fVar16 < 0x40000000) {
                  fVar2 = *pfVar6;
                  fVar3 = *pfVar7;
                  if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
                    if (fVar2 < fVar3) break;
                  }
                  else if ((int)fVar16 * 2 < (int)pfVar7[1] * 2) break;
                }
                else if (0x3fffffff < (uint)fVar16) break;
                pfVar6 = pfVar6 + 2;
              } while (pfVar6 <= pfVar13);
            }
            pfVar14 = pfVar10 + -2;
            pfVar5 = pfVar10;
            if (pfVar7 < pfVar14) {
              fVar16 = pfVar7[1];
              do {
                pfVar5 = pfVar10;
                if ((uint)fVar16 < 0x40000000 == (uint)pfVar14[1] < 0x40000000) {
                  fVar2 = *pfVar7;
                  fVar3 = *pfVar14;
                  if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
                    if (fVar2 < fVar3) break;
                  }
                  else if ((int)fVar16 * 2 < (int)pfVar14[1] * 2) {
                    pfVar5 = pfVar14 + 2;
                    break;
                  }
                }
                else if (0x3fffffff < (uint)fVar16) break;
                pfVar1 = pfVar14 + -2;
                pfVar10 = pfVar14;
                pfVar5 = pfVar14;
                pfVar14 = pfVar1;
              } while (pfVar7 < pfVar1);
            }
            pfVar10 = pfVar14;
            if (pfVar10 < pfVar6) goto LAB_147ed6f98;
            uVar4 = *(undefined8 *)pfVar6;
            *(undefined8 *)pfVar6 = *(undefined8 *)pfVar10;
            *(undefined8 *)pfVar10 = uVar4;
          } while( true );
        }
        for (; pfVar6 = pfVar7, pfVar10 = pfVar7, pfVar7 < pfVar13; pfVar13 = pfVar13 + -2) {
          while (pfVar14 = pfVar6, pfVar10 = pfVar10 + 2, pfVar10 <= pfVar13) {
            fVar16 = pfVar10[1];
            if ((uint)fVar16 < 0x40000000 == (uint)pfVar14[1] < 0x40000000) {
              fVar2 = *pfVar10;
              fVar3 = *pfVar14;
              if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
                bVar15 = fVar2 < fVar3;
              }
              else {
                bVar15 = (int)fVar16 * 2 < (int)pfVar14[1] * 2;
              }
            }
            else {
              bVar15 = 0x3fffffff < (uint)fVar16;
            }
            pfVar6 = pfVar10;
            if (!bVar15) {
              pfVar6 = pfVar14;
            }
          }
          uVar4 = *(undefined8 *)pfVar14;
          *(undefined8 *)pfVar14 = *(undefined8 *)pfVar13;
          *(undefined8 *)pfVar13 = uVar4;
        }
        goto LAB_147ed70c1;
      }
LAB_147ed701e:
      FUN_147ed70fa(pfVar7);
LAB_147ed70c1:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147ed6f98:
  uVar4 = *(undefined8 *)pfVar7;
  *(undefined8 *)pfVar7 = *(undefined8 *)pfVar10;
  *(undefined8 *)pfVar10 = uVar4;
  iVar12 = iVar12 + -1;
  pfVar5 = pfVar5 + -4;
  if ((longlong)pfVar5 - (longlong)pfVar7 < (longlong)pfVar13 - (longlong)pfVar6) {
    if (pfVar6 < pfVar13) {
      *plVar11 = (longlong)pfVar6;
      plVar11[1] = (longlong)pfVar13;
      *(int *)(plVar11 + 2) = iVar12;
      plVar11 = plVar11 + 3;
    }
    if (pfVar10 <= pfVar7 + 2) goto LAB_147ed70c1;
  }
  else {
    if (pfVar7 + 2 < pfVar10) {
      *plVar11 = (longlong)pfVar7;
      plVar11[1] = (longlong)pfVar5;
      *(int *)(plVar11 + 2) = iVar12;
      plVar11 = plVar11 + 3;
    }
    pfVar5 = pfVar13;
    pfVar7 = pfVar6;
    if (pfVar13 <= pfVar6) goto LAB_147ed70c1;
  }
  iVar8 = (int)((ulonglong)((longlong)pfVar5 - (longlong)pfVar7) >> 3);
  pfVar13 = pfVar5;
  if (iVar12 == 0) goto LAB_147ed701e;
  goto LAB_147ed6e84;
}



// FUNCTION 147ed70fa FUN_147ed70fa body=605 status=ok
// SIG undefined FUN_147ed70fa(void)

void FUN_147ed70fa(undefined8 *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar6;
joined_r0x000147ed7126:
    do {
      iVar9 = iVar6 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar11 = iVar6 * 2 + 2;
        if (iVar11 < (int)param_2) {
          uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar9 * 8 + 4);
          uVar4 = *(uint *)((longlong)param_1 + (longlong)iVar11 * 8 + 4);
          if (uVar3 < 0x40000000 == uVar4 < 0x40000000) {
            fVar1 = *(float *)(param_1 + iVar9);
            fVar2 = *(float *)(param_1 + iVar11);
            if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
              bVar14 = fVar1 < fVar2;
            }
            else {
              bVar14 = (int)(uVar3 * 2) < (int)(uVar4 * 2);
            }
          }
          else {
            bVar14 = 0x3fffffff < uVar3;
          }
          if (!bVar14) {
            iVar9 = iVar11;
          }
        }
        lVar12 = (longlong)iVar6;
        lVar10 = (longlong)iVar9;
        uVar3 = *(uint *)((longlong)param_1 + lVar10 * 8 + 4);
        uVar4 = *(uint *)((longlong)param_1 + lVar12 * 8 + 4);
        if (uVar3 < 0x40000000 == uVar4 < 0x40000000) {
          fVar1 = *(float *)(param_1 + lVar10);
          fVar2 = *(float *)(param_1 + lVar12);
          if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
            if (fVar1 < fVar2) goto LAB_147ed71d7;
          }
          else if ((int)(uVar3 * 2) < (int)(uVar4 * 2)) {
LAB_147ed71d7:
            uVar5 = param_1[lVar12];
            param_1[lVar12] = param_1[lVar10];
            param_1[lVar10] = uVar5;
            iVar6 = iVar9;
            goto joined_r0x000147ed7126;
          }
        }
        else if (0x3fffffff < uVar3) goto LAB_147ed71d7;
      }
      bVar14 = iVar13 != 0;
      iVar6 = iVar13 + -1;
      iVar13 = iVar6;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar5 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar5;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar6 = 0;
          iVar9 = 1;
          iVar13 = 0;
          do {
            lVar10 = (longlong)(iVar6 + 2);
            iVar11 = iVar9;
            if (lVar10 < (longlong)uVar8) {
              uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar9 * 8 + 4);
              uVar4 = *(uint *)((longlong)param_1 + lVar10 * 8 + 4);
              if (uVar3 < 0x40000000 == uVar4 < 0x40000000) {
                fVar1 = *(float *)(param_1 + iVar9);
                fVar2 = *(float *)(param_1 + lVar10);
                if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
                  bVar14 = fVar1 < fVar2;
                }
                else {
                  bVar14 = (int)(uVar3 * 2) < (int)(uVar4 * 2);
                }
              }
              else {
                bVar14 = 0x3fffffff < uVar3;
              }
              if (!bVar14) {
                iVar11 = iVar6 + 2;
              }
            }
            lVar10 = (longlong)iVar13;
            lVar12 = (longlong)iVar11;
            uVar3 = *(uint *)((longlong)param_1 + lVar12 * 8 + 4);
            uVar4 = *(uint *)((longlong)param_1 + lVar10 * 8 + 4);
            if (uVar3 < 0x40000000 == uVar4 < 0x40000000) {
              fVar1 = *(float *)(param_1 + lVar12);
              fVar2 = *(float *)(param_1 + lVar10);
              if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
                if (fVar2 <= fVar1) break;
              }
              else if ((int)(uVar4 * 2) <= (int)(uVar3 * 2)) break;
            }
            else if (uVar3 < 0x40000000) break;
            uVar5 = param_1[lVar10];
            param_1[lVar10] = param_1[lVar12];
            param_1[lVar12] = uVar5;
            iVar6 = iVar11 * 2;
            iVar9 = iVar11 * 2 + 1;
            iVar13 = iVar11;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar5 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar5;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 147ed7358 FUN_147ed7358 body=132 status=ok
// SIG undefined FUN_147ed7358(void)

void FUN_147ed7358(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed73de FUN_147ed73de body=62 status=ok
// SIG undefined FUN_147ed73de(void)

void FUN_147ed73de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ed741c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147ed741c FUN_147ed741c body=93 status=ok
// SIG undefined FUN_147ed741c(void)

ulonglong FUN_147ed741c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147ed747a FUN_147ed747a body=153 status=ok
// SIG undefined FUN_147ed747a(void)

void FUN_147ed747a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_14c872d28 == (longlong *)0x0) {
      uVar1 = 8;
    }
    else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,4);
    }
    uVar2 = 0x7fffffff;
    if (0 < (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147ed7514 FUN_147ed7514 body=95 status=ok
// SIG undefined FUN_147ed7514(void)

void FUN_147ed7514(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147ed7574 FUN_147ed7574 body=132 status=ok
// SIG undefined FUN_147ed7574(void)

void FUN_147ed7574(longlong param_1,int param_2)

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



// FUNCTION 147ed75fa FUN_147ed75fa body=34 status=ok
// SIG undefined FUN_147ed75fa(void)

undefined8 FUN_147ed75fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147ed7636 FUN_147ed7636 body=29 status=ok
// SIG undefined FUN_147ed7636(void)

bool FUN_147ed7636(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ed7654 FUN_147ed7654 body=26 status=ok
// SIG undefined FUN_147ed7654(void)

bool FUN_147ed7654(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ed766e FUN_147ed766e body=24 status=ok
// SIG undefined FUN_147ed766e(void)

bool FUN_147ed766e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ed7686 FUN_147ed7686 body=101 status=ok
// SIG undefined FUN_147ed7686(void)

void FUN_147ed7686(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac048a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed76ec FUN_147ed76ec body=101 status=ok
// SIG undefined FUN_147ed76ec(void)

void FUN_147ed76ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac04970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac048a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ed7752 FUN_147ed7752 body=131 status=ok
// SIG undefined FUN_147ed7752(void)

void FUN_147ed7752(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac04970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac048a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ed77d6 FUN_147ed77d6 body=142 status=ok
// SIG undefined FUN_147ed77d6(void)

void FUN_147ed77d6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_28 = *param_2;
  local_20 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(iVar3 + lVar6);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed7866 FUN_147ed7866 body=207 status=ok
// SIG undefined FUN_147ed7866(void)

bool FUN_147ed7866(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar8 = local_38;
  }
  else {
    lVar8 = 0;
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar7 != 0) {
    pcVar4 = *(code **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar4)(iVar3 + lVar7);
  }
  if (lVar8 != 0) {
    FUN_140113f3a(lVar8);
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar7 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed7936 FUN_147ed7936 body=130 status=ok
// SIG undefined FUN_147ed7936(void)

void FUN_147ed7936(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed79ba FUN_147ed79ba body=132 status=ok
// SIG undefined FUN_147ed79ba(void)

void FUN_147ed79ba(longlong param_1,int param_2)

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



// FUNCTION 147ed7a40 FUN_147ed7a40 body=118 status=ok
// SIG undefined FUN_147ed7a40(void)

void FUN_147ed7a40(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147ed7ab6 FUN_147ed7ab6 body=86 status=ok
// SIG undefined FUN_147ed7ab6(void)

void FUN_147ed7ab6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147ed7b0c FUN_147ed7b0c body=40 status=ok
// SIG undefined FUN_147ed7b0c(void)

void FUN_147ed7b0c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147ed7b34 FUN_147ed7b34 body=48 status=ok
// SIG undefined FUN_147ed7b34(void)

void FUN_147ed7b34(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147ed7b64 FUN_147ed7b64 body=48 status=ok
// SIG undefined FUN_147ed7b64(void)

void FUN_147ed7b64(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147ed7b94 FUN_147ed7b94 body=303 status=ok
// SIG undefined FUN_147ed7b94(void)

undefined4 * FUN_147ed7b94(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147ed7cc4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147ed7daa(param_1,uVar5,local_40,&local_4c);
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
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_147ed7ec2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed7cc4 FUN_147ed7cc4 body=229 status=ok
// SIG undefined FUN_147ed7cc4(void)

int * FUN_147ed7cc4(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147ed7daa FUN_147ed7daa body=166 status=ok
// SIG undefined FUN_147ed7daa(void)

undefined8 FUN_147ed7daa(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          plVar7 = *(longlong **)(piVar2 + 4);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar2 = iVar3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_147ed7e50(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar2[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ed7e50 FUN_147ed7e50 body=114 status=ok
// SIG undefined FUN_147ed7e50(void)

void FUN_147ed7e50(longlong *param_1,int param_2)

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



// FUNCTION 147ed7ec2 FUN_147ed7ec2 body=422 status=ok
// SIG undefined FUN_147ed7ec2(void)

void FUN_147ed7ec2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 147ed806a FUN_147ed806a body=78 status=ok
// SIG undefined FUN_147ed806a(void)

longlong * FUN_147ed806a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_143851bb4(param_1 + 1,param_2 + 1);
  param_1[0x2f] = param_2[0x2f];
  return param_1;
}



// FUNCTION 147ed80b8 FUN_147ed80b8 body=147 status=ok
// SIG undefined FUN_147ed80b8(void)

void FUN_147ed80b8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x180,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x180)) {
      uVar5 = uVar4 / 0x180 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x180,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed814c FUN_147ed814c body=98 status=ok
// SIG undefined FUN_147ed814c(void)

void FUN_147ed814c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ed81ae FUN_147ed81ae body=95 status=ok
// SIG undefined FUN_147ed81ae(void)

void FUN_147ed81ae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147ed820e FUN_147ed820e body=132 status=ok
// SIG undefined FUN_147ed820e(void)

void FUN_147ed820e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed8293 FUN_147ed8293 body=225 status=ok
// SIG undefined FUN_147ed8293(void)

void FUN_147ed8293(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    uVar4 = 1;
    do {
      if (uVar4 < uVar9) {
        lVar8 = *(longlong *)(param_1 + -8 + uVar4 * 8);
        lVar7 = *(longlong *)(param_1 + uVar4 * 8);
        if ((*(char *)(lVar7 + 0x34) == '\x01') == (*(char *)(lVar8 + 0x34) == '\x01')) {
          if (*(byte *)(lVar7 + 0xf8) < *(byte *)(lVar8 + 0xf8)) goto LAB_147ed82f5;
        }
        else if (*(char *)(lVar7 + 0x34) != '\x01') {
LAB_147ed82f5:
          *(longlong *)(param_1 + -8 + uVar4 * 8) = lVar7;
          *(longlong *)(param_1 + uVar4 * 8) = lVar8;
        }
      }
      uVar5 = uVar4 + 1;
      uVar4 = uVar4 + 2;
    } while (uVar5 < uVar9);
    if (2 < (int)param_2) {
      uVar6 = 2;
      do {
        uVar1 = uVar6 * 2;
        lVar7 = 0;
        lVar8 = param_1;
        uVar2 = param_2;
        do {
          uVar3 = uVar2;
          if ((int)uVar1 <= (int)uVar2) {
            uVar3 = uVar1;
          }
          FUN_147ed8374(lVar8,uVar6,uVar3);
          lVar7 = lVar7 + (int)uVar1;
          lVar8 = lVar8 + (longlong)(int)uVar1 * 8;
          uVar2 = uVar2 + uVar6 * -2;
        } while (lVar7 < (longlong)uVar9);
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 147ed8374 FUN_147ed8374 body=472 status=ok
// SIG undefined FUN_147ed8374(void)

void FUN_147ed8374(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  bool bVar14;
  
  if (param_2 < param_3 && 0 < param_2) {
    iVar8 = 0;
    while( true ) {
      plVar5 = (longlong *)(param_1 + (longlong)param_2 * 8);
      iVar10 = 0;
      if (param_2 - iVar8 != 0 && iVar8 <= param_2) {
        lVar7 = *plVar5;
        cVar3 = *(char *)(lVar7 + 0x34);
        iVar10 = 0;
        uVar12 = param_2 - iVar8;
        do {
          uVar1 = (uVar12 >> 1) + iVar10;
          lVar4 = *(longlong *)(param_1 + (longlong)iVar8 * 8 + (ulonglong)uVar1 * 8);
          bVar14 = cVar3 != '\x01';
          if ((*(char *)(lVar4 + 0x34) == '\x01') == (cVar3 == '\x01')) {
            bVar14 = *(byte *)(lVar7 + 0xf8) < *(byte *)(lVar4 + 0xf8);
          }
          if (!bVar14) {
            iVar10 = uVar1 + (uVar12 & 1);
          }
          bVar14 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar14);
      }
      iVar10 = iVar10 + iVar8;
      iVar8 = param_2 - iVar10;
      if (iVar8 == 0 || param_2 < iVar10) break;
      if (param_3 - param_2 == 0 || param_3 < param_2) {
        iVar11 = 0;
      }
      else {
        plVar2 = (longlong *)(param_1 + (longlong)iVar10 * 8);
        lVar7 = *plVar2;
        iVar11 = 0;
        uVar12 = param_3 - param_2;
        do {
          uVar1 = (uVar12 >> 1) + iVar11;
          lVar4 = plVar5[uVar1];
          cVar3 = *(char *)(lVar4 + 0x34);
          if ((*(char *)(lVar7 + 0x34) == '\x01') == (cVar3 == '\x01')) {
            bVar14 = *(byte *)(lVar4 + 0xf8) < *(byte *)(lVar7 + 0xf8);
          }
          else {
            bVar14 = cVar3 != '\x01';
          }
          if (bVar14) {
            iVar11 = uVar1 + (uVar12 & 1);
          }
          bVar14 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar14);
        param_2 = param_2 + iVar11;
        if (0 < iVar11) {
          plVar5 = plVar2 + iVar8;
          plVar9 = (longlong *)(param_1 + 8 + (longlong)iVar10 * 8);
          plVar13 = plVar5;
          do {
            plVar6 = plVar13 + 1;
            plVar9[-1] = *plVar13;
            *plVar13 = lVar7;
            if (plVar6 == plVar2 + (param_2 - iVar10)) {
              plVar6 = plVar5;
              if (plVar9 == plVar5) break;
            }
            else if (plVar9 == plVar5) {
              plVar5 = plVar6;
            }
            lVar7 = *plVar9;
            plVar9 = plVar9 + 1;
            plVar13 = plVar6;
          } while( true );
        }
      }
      if (param_3 <= param_2) {
        return;
      }
      iVar8 = iVar11 + iVar10 + 1;
      if (param_2 <= iVar8) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ed854c FUN_147ed854c body=47 status=ok
// SIG undefined FUN_147ed854c(void)

void FUN_147ed854c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_143851c62(lVar1);
    thunk_FUN_1400020a8(lVar1,0x170);
    return;
  }
  return;
}



// FUNCTION 147ed857c FUN_147ed857c body=34 status=ok
// SIG undefined FUN_147ed857c(void)

undefined8 FUN_147ed857c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147ed859e FUN_147ed859e body=147 status=ok
// SIG undefined FUN_147ed859e(void)

void FUN_147ed859e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed8632 FUN_147ed8632 body=132 status=ok
// SIG undefined FUN_147ed8632(void)

void FUN_147ed8632(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed86b8 FUN_147ed86b8 body=335 status=ok
// SIG undefined FUN_147ed86b8(void)

undefined4 * FUN_147ed86b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ed8808(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147ed88ee(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ed89e0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed8808 FUN_147ed8808 body=230 status=ok
// SIG undefined FUN_147ed8808(void)

int * FUN_147ed8808(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 147ed88ee FUN_147ed88ee body=128 status=ok
// SIG undefined FUN_147ed88ee(void)

undefined8 FUN_147ed88ee(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147ed896e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ed896e FUN_147ed896e body=114 status=ok
// SIG undefined FUN_147ed896e(void)

void FUN_147ed896e(longlong *param_1,int param_2)

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



// FUNCTION 147ed89e0 FUN_147ed89e0 body=473 status=ok
// SIG undefined FUN_147ed89e0(void)

void FUN_147ed89e0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147ed8bba FUN_147ed8bba body=190 status=ok
// SIG undefined FUN_147ed8bba(void)

void FUN_147ed8bba(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ed8c78(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147ed8c78 FUN_147ed8c78 body=132 status=ok
// SIG undefined FUN_147ed8c78(void)

void FUN_147ed8c78(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ed8d0a FUN_147ed8d0a body=28 status=ok
// SIG undefined FUN_147ed8d0a(void)

undefined8 FUN_147ed8d0a(undefined8 param_1,undefined8 param_2)

{
  FUN_147ed8d26(param_2,param_1);
  return param_2;
}



// FUNCTION 147ed8d26 FUN_147ed8d26 body=574 status=ok
// SIG undefined FUN_147ed8d26(void)

undefined8 FUN_147ed8d26(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined1 local_34 [4];
  wchar_t *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  int iVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    local_30 = L"Unknown";
    local_28 = 7;
    FUN_1446e940c(&local_48,&local_30);
    local_30 = L"EnvQueryGenerator";
    local_28 = 0x11;
    FUN_1446e940c(local_34,&local_30);
    FUN_140208bae(param_1,local_34,&local_48,L"unknown");
  }
  else {
    lVar3 = FUN_144a797b2();
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      param_2 = lVar1;
    }
    if ((*(byte *)(param_2 + 0xd6) & 4) == 0) {
      local_48 = *(wchar_t **)(param_2 + 0x18);
      FUN_1400021e4(&local_48,&local_30);
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar2 = FUN_1447ee042(&local_30,&DAT_149e01f60,1,0);
      if (iVar2 != -1) {
        uVar7 = local_28 - 1;
        if (local_28 == 0) {
          uVar7 = 0;
        }
        if ((int)(iVar2 + 1U) < (int)uVar7) {
          uVar7 = iVar2 + 1U;
        }
        if (0 < (int)uVar7) {
          if (local_28 - uVar7 != 0) {
            memmove(local_30,local_30 + uVar7,(longlong)(int)(local_28 - uVar7) * 2);
          }
          local_28 = local_28 - uVar7;
        }
      }
      FUN_140009b9a(param_1,&local_30);
      pwVar6 = local_30;
    }
    else {
      local_30 = *(wchar_t **)(param_2 + 0x18);
      FUN_1400021e4();
      iVar2 = (int)uStack_40 + -1;
      if ((int)uStack_40 == 0) {
        iVar2 = 0;
      }
      iVar5 = 2;
      if (2 < iVar2) {
        iVar5 = iVar2;
      }
      uVar4 = iVar5 - 2;
      uVar8 = iVar2 - uVar4;
      uVar7 = 2;
      if ((int)uVar8 < 2) {
        uVar7 = uVar8;
      }
      if ((int)uVar7 < 1) {
        uVar7 = 0;
      }
      local_28 = (int)uStack_40;
      if (0 < (int)uVar8) {
        iVar2 = (int)uStack_40 - (uVar7 + uVar4);
        if (iVar2 != 0) {
          memmove(local_48 + uVar4,local_48 + uVar4 + uVar7,(longlong)iVar2 * 2);
        }
        local_28 = (int)uStack_40 - uVar7;
      }
      local_30 = local_48;
      local_24 = uStack_40._4_4_;
      local_48 = (wchar_t *)0x0;
      uStack_40 = 0;
      FUN_140233b1a(param_1,&local_30);
      pwVar6 = local_48;
      if (local_30 != (wchar_t *)0x0) {
        FUN_1400020a8();
        pwVar6 = local_48;
      }
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ed8f66 FUN_147ed8f66 body=50 status=ok
// SIG undefined FUN_147ed8f66(void)

longlong * FUN_147ed8f66(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 147ed8fb0 FUN_147ed8fb0 body=1420 status=ok
// SIG undefined FUN_147ed8fb0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015bd26850) overlaps instruction at (ram,0x00015bd2684e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_147ed8fb0(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5,ulonglong param_6)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER *lpPerformanceCount;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  float fVar10;
  int iVar11;
  char *pcVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  byte bVar16;
  float *pfVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong unaff_RBX;
  undefined1 *puVar22;
  float *pfVar23;
  float **ppfVar24;
  undefined8 *unaff_RBP;
  longlong lVar25;
  size_t _Size;
  undefined4 *puVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  code *pcVar29;
  longlong unaff_R13;
  longlong lVar30;
  ulonglong *_Size_00;
  longlong unaff_R15;
  uint *puVar31;
  undefined2 in_FS;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar39;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar40;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  uint unaff_XMM9_Da;
  float fVar41;
  uint uVar42;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 unaff_XMM11_Da;
  float fVar45;
  undefined4 unaff_XMM11_Db;
  int unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  float fVar46;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *local_res18;
  void *pvStackX_20;
  wchar_t *in_stack_00000058;
  undefined4 in_stack_00000060;
  longlong *in_stack_00000068;
  float in_stack_00000070;
  ulonglong in_stack_00000078;
  longlong in_stack_00000080;
  longlong in_stack_00000098;
  longlong in_stack_000000a0;
  ulonglong in_stack_000000a8;
  uint uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  double in_stack_000000b8;
  longlong in_stack_000000e0;
  longlong in_stack_00000100;
  ulonglong in_stack_00000110;
  float *local_100;
  float afStack_f8 [2];
  undefined1 auStack_f0 [24];
  float local_d8;
  undefined1 auStack_d0 [8];
  LARGE_INTEGER local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [2];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [4];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [8];
  undefined1 local_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [16];
  uint uVar9;
  
  bVar34 = false;
  pfVar13 = afStack_f8;
  pfVar23 = afStack_f8;
  ppfVar24 = (float **)afStack_f8;
  local_b8 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  local_c8.s.LowPart = unaff_XMM7_Da;
  local_c8.s.HighPart = unaff_XMM7_Db;
  uStack_c0 = (double)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  auStack_d0._4_4_ = unaff_XMM6_Dd;
  auStack_d0._0_4_ = unaff_XMM6_Dc;
  local_100 = (float *)0x147ed9015;
  local_d8 = unaff_XMM6_Da;
  uStack_b0 = unaff_XMM8_Dc;
  uStack_ac = unaff_XMM8_Dd;
  local_a8[0] = unaff_XMM9_Da;
  uStack_a0 = unaff_XMM9_Dc;
  uStack_9c = unaff_XMM9_Dd;
  local_88 = unaff_XMM11_Da;
  uStack_84 = unaff_XMM11_Db;
  iStack_80 = unaff_XMM11_Dc;
  uStack_7c = unaff_XMM11_Dd;
  local_58 = unaff_XMM14_Da;
  uStack_54 = unaff_XMM14_Db;
  pfVar14 = (float *)FUN_14479d2ce(param_2 + 0xd);
  if (pfVar14 == (float *)0x0) {
    return (float *)0x0;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    return pfVar14;
  }
  local_100 = (float *)0x147ed908d;
  FUN_147ec268e(param_1 + 0x5c,pfVar14,param_2[0xc]);
  if (*(longlong *)(param_1 + 0x5e) == 0) {
    pfVar15 = (float *)0x0;
  }
  else {
    pfVar15 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x5e) + 0x44) +
                       *(longlong *)(param_1 + 0x60));
  }
  pfVar17 = param_1 + 0x68;
  if (pfVar15 != (float *)0x0) {
    pfVar17 = pfVar15;
  }
  fVar10 = *pfVar17;
  if (*(char *)((longlong)param_1 + 0xfa) == '\x02') {
    lVar27 = 0x88;
LAB_147ed9320:
    lVar25 = (longlong)param_1 + lVar27;
    local_100 = (float *)0x147ed9333;
    FUN_147ec268e(lVar25,pfVar14,param_2[0xc]);
    lVar27 = *(longlong *)((longlong)param_1 + lVar27 + 8);
    if (lVar27 == 0) {
      pfVar15 = (float *)0x0;
    }
    else {
      pfVar15 = (float *)((longlong)*(int *)(lVar27 + 0x44) + *(longlong *)(lVar25 + 0x10));
    }
    pfVar17 = (float *)(lVar25 + 0x30);
    if (pfVar15 != (float *)0x0) {
      pfVar17 = pfVar15;
    }
    fVar39 = *pfVar17;
  }
  else {
    fVar39 = 0.0;
    if (*(char *)(param_1 + 0x3f) != '\0') {
      fVar39 = 3.4e+38;
    }
    if (*(char *)((longlong)param_1 + 0xfa) == '\x01') {
      lVar27 = 0x100;
      goto LAB_147ed9320;
    }
  }
  if (*(char *)((longlong)param_1 + 0xfb) == '\x02') {
    lVar27 = 0xc0;
LAB_147ed9368:
    lVar25 = (longlong)param_1 + lVar27;
    local_100 = (float *)0x147ed937b;
    FUN_147ec268e(lVar25,pfVar14,param_2[0xc]);
    lVar27 = *(longlong *)((longlong)param_1 + lVar27 + 8);
    if (lVar27 == 0) {
      pfVar15 = (float *)0x0;
    }
    else {
      pfVar15 = (float *)((longlong)*(int *)(lVar27 + 0x44) + *(longlong *)(lVar25 + 0x10));
    }
    pfVar17 = (float *)(lVar25 + 0x30);
    if (pfVar15 != (float *)0x0) {
      pfVar17 = pfVar15;
    }
    fVar40 = *pfVar17;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xfb) == '\x01') {
      lVar27 = 0x138;
      goto LAB_147ed9368;
    }
    fVar40 = -3.4e+38;
  }
  _Size_00 = *(ulonglong **)(param_2 + 0x4a);
  bVar3 = *(byte *)((longlong)param_1 + 0xfa);
  pfVar15 = (float *)(ulonglong)bVar3;
  if (((bVar3 == 0) || (*(char *)((longlong)param_1 + 0xfb) == '\0')) &&
     (0 < (longlong)(int)param_2[2])) {
    lVar27 = 0;
    do {
      if (*(uint *)(*(longlong *)param_2 + 4 + lVar27) < 0x40000000) {
        fVar41 = *(float *)(*(longlong *)((longlong)_Size_00 + lVar27 * 2) +
                           (longlong)(int)param_2[0x48] * 4);
        if ((fVar41 != -3.4028235e+38) || (NAN(fVar41))) {
          if ((bVar3 == 0) && (fVar41 <= fVar39)) {
            fVar39 = fVar41;
          }
          if ((*(char *)((longlong)param_1 + 0xfb) == '\0') && (fVar40 <= fVar41)) {
            fVar40 = fVar41;
          }
        }
      }
      lVar27 = lVar27 + 8;
    } while ((longlong)(int)param_2[2] * 8 != lVar27);
  }
  if ((fVar39 != fVar40) || (NAN(fVar39) || NAN(fVar40))) {
    bVar3 = *(byte *)(param_1 + 0x78);
    if (bVar3 == 1) {
      local_100 = (float *)0x147ed93c8;
      FUN_147ec268e(param_1 + 0x6a,pfVar14,param_2[0xc]);
      bVar3 = *(byte *)(param_1 + 0x78);
    }
    pcVar29 = sqrtf_exref;
    pfVar15 = (float *)(ulonglong)bVar3;
    fVar41 = fVar40;
    if ((bVar3 & 1) != 0) {
      if (*(longlong *)(param_1 + 0x6c) == 0) {
        pfVar15 = (float *)0x0;
      }
      else {
        pfVar15 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x6c) + 0x44) +
                           *(longlong *)(param_1 + 0x6e));
      }
      pfVar14 = param_1 + 0x76;
      if (pfVar15 != (float *)0x0) {
        pfVar14 = pfVar15;
      }
      fVar41 = *pfVar14;
    }
    uVar42 = 0;
    fVar38 = param_2[0x4c];
    if (0 < (int)fVar38) {
      uVar43 = 0x7fffffff;
      uVar44 = 0x7fffffff;
      fVar45 = ABS(fVar41 - fVar39);
      if (ABS(fVar41 - fVar39) <= ABS(fVar41 - fVar40)) {
        fVar45 = ABS(fVar41 - fVar40);
      }
      fVar46 = ABS(fVar10);
      puVar22 = (undefined1 *)0x0;
      puVar31 = &switchD_147ed929b::caseD_29;
LAB_147ed9230:
      pfVar14 = *(float **)param_2;
      if (0x3fffffff < (uint)pfVar14[(longlong)puVar22 * 2 + 1]) goto LAB_147ed92bb;
      uVar20 = *_Size_00;
      fVar38 = *(float *)(uVar20 + (longlong)(int)param_2[0x48] * 4);
      if ((fVar38 == -3.4028235e+38) && (!NAN(fVar38))) {
        fVar36 = 0.0;
        goto LAB_147ed92ab;
      }
      fVar36 = 0.0;
      bVar3 = *(byte *)((longlong)param_1 + 0xf9);
      if (4 < (ulonglong)bVar3) goto LAB_147ed92ab;
      if (fVar40 <= fVar38) {
        fVar38 = fVar40;
      }
      if (fVar38 <= fVar39) {
        fVar38 = fVar39;
      }
      fVar38 = ABS(fVar41 - fVar38) / fVar45;
      fVar36 = (float)(~-(uint)(fVar10 < 0.0) & (uint)(1.0 - fVar38) |
                      (uint)fVar38 & -(uint)(fVar10 < 0.0));
      uVar18 = (ulonglong)(int)(&switchD_147ed929b::caseD_29)[bVar3];
      bVar32 = 0xfffffffeb53ea8c7 < uVar18;
      puVar19 = (uint *)((longlong)&switchD_147ed929b::caseD_29 + uVar18);
      bVar33 = puVar19 == (uint *)0x0;
      dVar35 = (double)(ulonglong)(uint)fVar36;
      cVar8 = (char)pfVar14;
      uVar9 = (uint)pfVar14;
      bVar16 = (byte)puVar19;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar3) {
      case 0:
        goto switchD_147ed929b_caseD_0;
      case 1:
        fVar36 = fVar36 * fVar36;
        goto switchD_147ed929b_caseD_0;
      case 2:
        fVar36 = (1.0 - fVar36) * fVar46;
        break;
      case 3:
        if (fVar36 < 0.0) {
          local_100 = (float *)0x147ed9302;
          fVar36 = sqrtf(fVar36);
        }
        else {
          fVar36 = SQRT(fVar36);
        }
        fVar36 = fVar36 * fVar46;
        pfVar14 = *(float **)param_2;
        break;
      case 4:
        fVar36 = (float)(-(uint)(0.0 < fVar36) & (uint)fVar46);
        break;
      case 5:
                    /* WARNING: Could not recover jumptable at 0x0001438511a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar13 = (float *)(*(code *)((longlong)&switchD_1438511a1::switchdataD_14ac1574c +
                                     (longlong)
                                     (int)(&switchD_1438511a1::switchdataD_14ac1574c)
                                          [(longlong)pfVar14]))();
        return pfVar13;
      case 6:
        pcVar12 = (char *)((ulonglong)pfVar14 & 0xffffffffffffffb0);
        *pcVar12 = *pcVar12 + (char)pcVar12;
        pcVar12[-0x73] = pcVar12[-0x73] + bVar16;
        local_100 = afStack_f8;
        FUN_147edc9e0(puVar19,uVar20,puVar22);
        goto switchD_1438511a1_default;
      case 7:
        pcVar12 = (char *)((ulonglong)pfVar14 & 0xffffffffffffffb0);
        *pcVar12 = *pcVar12 + (char)pcVar12;
        pcVar12[-0x73] = pcVar12[-0x73] + bVar16;
        local_100 = afStack_f8;
        FUN_147edc5de(puVar19,uVar20,puVar22);
        goto switchD_1438511a1_default;
      case 8:
        pcVar12 = (char *)((ulonglong)pfVar14 & 0xffffffffffffffb0);
        *pcVar12 = *pcVar12 + (char)pcVar12;
        pcVar12[-0x73] = pcVar12[-0x73] + bVar16;
        local_100 = afStack_f8;
        FUN_147edc88a(puVar19,uVar20,puVar22);
switchD_1438511a1_default:
        pfVar13 = (float *)FUN_147edd45c(auStack_50);
        if (in_stack_00000100 != 0) {
          pfVar13 = (float *)FUN_1400020a8();
        }
        if (in_stack_000000e0 != 0) {
          pfVar13 = (float *)FUN_1400020a8();
        }
        if (CONCAT44(uStack_9c,uStack_a0) != 0) {
          pfVar13 = (float *)FUN_1400020a8();
        }
        if (CONCAT44(uStack_7c,iStack_80) != 0) {
          pfVar13 = (float *)FUN_1400020a8();
        }
        plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            pfVar13 = (float *)(**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              pfVar13 = (float *)(**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if ((in_stack_00000110 ^ (ulonglong)&local_100) == DAT_14c707940) {
          return pfVar13;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      case 9:
        local_100 = (float *)0x143851457;
        FUN_147edd3b6(puVar19,(ulonglong)param_2 & 0xffffffff,puVar22);
        pfVar14 = (float *)(ulonglong)(byte)puVar22[0x34];
        if (&DAT_00000003 < pfVar14) goto switchD_14385146f_default;
      case 0xb:
                    /* WARNING: Could not recover jumptable at 0x00014385146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar13 = (float *)(*(code *)((longlong)&switchD_14385146f::switchdataD_14ac1575c +
                                     (longlong)
                                     (int)(&switchD_14385146f::switchdataD_14ac1575c)
                                          [(longlong)pfVar14]))();
        return pfVar13;
      case 10:
        pfVar23 = (float *)auStack_f0;
        afStack_f8[0] = 266.16086;
        afStack_f8[1] = 1.4013e-45;
        FUN_147edc1d2(puVar19,param_1,local_b8);
        goto switchD_14385146f_default;
      case 0xc:
        pfVar23 = (float *)auStack_f0;
        afStack_f8[0] = 266.16025;
        afStack_f8[1] = 1.4013e-45;
        FUN_147edbd6a(puVar19,param_1,local_b8);
switchD_14385146f_default:
        *(undefined8 *)((longlong)pfVar23 + -8) = 0x1438514c9;
        pfVar13 = (float *)FUN_147edd45c((undefined1 *)((longlong)pfVar23 + 0x58));
        if (*(longlong *)((longlong)pfVar23 + 0x1a0) != 0) {
          *(undefined8 *)((longlong)pfVar23 + -8) = 0x1438514db;
          pfVar13 = (float *)FUN_1400020a8();
        }
        if (*(longlong *)((longlong)pfVar23 + 0x180) != 0) {
          *(undefined8 *)((longlong)pfVar23 + -8) = 0x1438514ed;
          pfVar13 = (float *)FUN_1400020a8();
        }
        if ((*(ulonglong *)((longlong)pfVar23 + 0x1b0) ^ (ulonglong)pfVar23) == DAT_14c707940) {
          return pfVar13;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)pfVar23 + -8) = &UNK_14385151a;
        FUN_144d8e3a0();
      case 0xd:
        *(byte *)((longlong)pfVar14 + -0x77) = *(byte *)((longlong)pfVar14 + -0x77) ^ bVar16;
        local_100 = (float *)0x14385166e;
        FUN_147edd3b6(&uStack_b0,puVar22,param_1);
        pfVar14 = (float *)(ulonglong)*(byte *)(param_1 + 0xd);
        if (&DAT_00000003 < pfVar14) goto switchD_14385168a_default;
        puVar19 = &switchD_14385168a::switchdataD_14ac1576c;
      case 0xf:
                    /* WARNING: Could not recover jumptable at 0x00014385168a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar13 = (float *)(*(code *)((longlong)(int)puVar19[(longlong)pfVar14] + (longlong)puVar19)
                           )();
        return pfVar13;
      case 0xe:
        local_100 = (float *)0x1438516e0;
        FUN_147edcf76(puVar19,(ulonglong)param_2 & 0xffffffff);
        goto switchD_14385168a_default;
      case 0x10:
        local_100 = (float *)0x1438516b5;
        FUN_147edcb36(puVar19,(ulonglong)param_2 & 0xffffffff);
switchD_14385168a_default:
        local_100 = (float *)0x143851740;
        pfVar13 = (float *)FUN_147edd45c(&uStack_b0);
        if (in_stack_00000098 != 0) {
          local_100 = (float *)0x143851752;
          pfVar13 = (float *)FUN_1400020a8();
        }
        if (in_stack_00000078 != 0) {
          local_100 = (float *)0x143851764;
          pfVar13 = (float *)FUN_1400020a8();
        }
        if ((in_stack_000000a8 ^ (ulonglong)afStack_f8) == DAT_14c707940) {
          return pfVar13;
        }
                    /* WARNING: Subroutine does not return */
        local_100 = (float *)&UNK_143851789;
        FUN_144d8e3a0();
      case 0x11:
        *(char *)((longlong)pfVar14 + -0x73) =
             *(char *)((longlong)pfVar14 + -0x73) + bVar16 + bVar32;
        *(undefined2 *)((longlong)pfVar14 + (longlong)puVar22) = in_FS;
        *pfVar14 = (float)((int)*pfVar14 + uVar9);
        pcVar12 = (char *)((longlong)puVar19 * 5 + -6);
        *pcVar12 = *pcVar12 + cVar8;
        local_100 = (float *)0x143851921;
        FUN_1447403be();
        local_100 = (float *)0x143851936;
        memset((void *)((longlong)pvStackX_20 + 0x14ac15738),0,(size_t)_Size_00);
        pfVar14 = (float *)(ulonglong)(byte)puVar22[0x34];
        bVar34 = pfVar14 < &DAT_00000003;
        bVar32 = pfVar14 == (float *)&DAT_00000003;
        goto code_r0x00014385193e;
      case 0x12:
        local_100 = (float *)0x1438519a8;
        local_d8 = fVar36;
        FUN_147edcf76(local_a8,param_1,*(undefined4 *)(puVar22 + 0x14));
        goto switchD_143851952_default;
      case 0x13:
        bVar34 = uVar9 < 3;
        bVar32 = uVar9 == 3;
code_r0x00014385193e:
        if (bVar34 || bVar32) {
                    /* WARNING: Could not recover jumptable at 0x000143851952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar13 = (float *)(*(code *)((longlong)&switchD_143851952::switchdataD_14ac1577c +
                                       (longlong)
                                       (int)(&switchD_143851952::switchdataD_14ac1577c)
                                            [(longlong)pfVar14]))();
          return pfVar13;
        }
switchD_143851952_default:
        _Size = (size_t)(int)(uint)param_5;
        if (_Size != 0) {
          fVar10 = param_2[2];
          param_2[2] = (float)((int)fVar10 + (uint)param_5);
          if ((uint)((int)param_2[3] - (int)fVar10) < (uint)param_5) {
            local_100 = (float *)0x143851a28;
            FUN_1447403be(param_2,fVar10);
          }
          local_100 = (float *)0x143851a3e;
          memcpy((void *)((longlong)(int)fVar10 + *(longlong *)param_2),pvStackX_20,_Size);
        }
        local_100 = (float *)0x143851a48;
        pfVar13 = (float *)FUN_147edd45c(local_a8);
        if (in_stack_000000a0 != 0) {
          local_100 = (float *)0x143851a5a;
          pfVar13 = (float *)FUN_1400020a8();
        }
        if (in_stack_00000080 != 0) {
          local_100 = (float *)0x143851a6c;
          pfVar13 = (float *)FUN_1400020a8();
        }
        if ((CONCAT44(uStack00000000000000b4,uStack00000000000000b0) ^ (ulonglong)afStack_f8) ==
            DAT_14c707940) {
          return pfVar13;
        }
                    /* WARNING: Subroutine does not return */
        local_100 = (float *)&UNK_143851a97;
        FUN_144d8e3a0();
      case 0x14:
        local_100 = (float *)0x14385197d;
        local_d8 = fVar36;
        FUN_147edcb36(local_a8,param_1,*(undefined4 *)(puVar22 + 0x14));
        goto switchD_143851952_default;
      case 0x15:
        if ((uint)puVar19 != 0) {
          local_100 = (float *)0x147ede9fc;
          (**(code **)(*(longlong *)puVar19 + 0x10))();
        }
        if (plStackX_10 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStackX_10 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            local_100 = (float *)0x147edea18;
            (**(code **)*plStackX_10)(plStackX_10);
            LOCK();
            piVar2 = (int *)((longlong)plStackX_10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              local_100 = (float *)0x147edea28;
              (**(code **)(*plStackX_10 + 0x10))(plStackX_10);
            }
          }
        }
        switch(*(undefined1 *)(param_1 + 0xd)) {
        case 0:
          in_stack_00000058 = L"Line";
          in_stack_00000060 = 4;
          local_100 = (float *)0x147edea73;
          FUN_1446e940c(&local_res18,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          local_100 = (float *)0x147edea9d;
          FUN_1446e940c(&plStackX_8,&stack0x00000058);
          pwVar28 = L"line";
          break;
        case 1:
          in_stack_00000058 = L"BoxWithExtents";
          in_stack_00000060 = 0xe;
          local_100 = (float *)0x147edf591;
          FUN_1446e940c(auStack_44,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          local_100 = (float *)0x147edf5bb;
          FUN_1446e940c(local_48,&stack0x00000058);
          local_100 = (float *)0x147edf5d8;
          FUN_140208bae(&local_res18,local_48,auStack_44,
                        L"box (extent: {ExtentX} {ExtentY} {ExtentZ)");
          bVar33 = true;
          local_100 = (float *)0x147edf5f1;
          FUN_14023409e(auStack_40,&local_res18,1);
          local_100 = (float *)0x147edf609;
          FUN_140233c04(&stack0x00000058,auStack_40,&param_5);
          bVar32 = false;
          bVar34 = false;
          goto LAB_147edf689;
        case 2:
          in_stack_00000058 = L"SphereWithRadius";
          in_stack_00000060 = 0x10;
          puVar31 = (uint *)&stack0xfffffffffffffff8;
          local_100 = (float *)0x147edf43e;
          FUN_1446e940c(puVar31,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          _Size_00 = local_98;
          local_100 = (float *)0x147edf465;
          FUN_1446e940c(_Size_00,&stack0x00000058);
          goto code_r0x000147edf465;
        case 3:
          in_stack_00000058 = L"CasuleWithRadiusHalfHeight";
          in_stack_00000060 = 0x1a;
          puVar31 = (uint *)&stack0xffffffffffffffd4;
          local_100 = (float *)0x147edf4e5;
          FUN_1446e940c(puVar31,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          _Size_00 = (ulonglong *)&stack0xffffffffffffffd0;
          local_100 = (float *)&UNK_147edf50f;
          FUN_1446e940c(_Size_00,&stack0x00000058);
          goto code_r0x000147edf516;
        default:
          in_stack_00000058 = L"Unknown";
          in_stack_00000060 = 7;
          local_100 = (float *)0x147edf63d;
          FUN_1446e940c(&local_res18,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          local_100 = (float *)0x147edf667;
          FUN_1446e940c(&plStackX_8,&stack0x00000058);
          pwVar28 = L"unknown";
        }
        local_100 = (float *)0x147edf681;
        FUN_140208bae(&stack0x00000058,&plStackX_8,&local_res18,pwVar28);
        bVar32 = false;
        goto LAB_147edf683;
      case 0x16:
code_r0x000147edf516:
        local_100 = (float *)0x147edf52c;
        FUN_140208bae(&local_res18,_Size_00,puVar31);
        bVar34 = true;
        local_100 = (float *)0x147edf545;
        FUN_14023409e(&stack0xffffffffffffffd8,&local_res18,1);
        local_100 = (float *)0x147edf55d;
        FUN_140233c04(&stack0x00000058,&stack0xffffffffffffffd8,&param_5);
        bVar32 = false;
        goto LAB_147edf686;
      case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x18:
code_r0x000147edf465:
        local_100 = (float *)0x147edf482;
        FUN_140208bae(&local_res18,_Size_00,puVar31,L"sphere (radius: {ExtentX})");
        bVar32 = true;
        local_100 = (float *)0x147edf49b;
        FUN_14023409e(&stack0xffffffffffffffe8,&local_res18,1);
        local_100 = (float *)0x147edf4b3;
        FUN_140233c04(&stack0x00000058,&stack0xffffffffffffffe8,&param_5);
LAB_147edf683:
        bVar34 = false;
LAB_147edf686:
        bVar33 = false;
LAB_147edf689:
        local_100 = (float *)0x147edf69c;
        FUN_140008f88(param_2,&stack0x00000058);
        if (in_stack_00000058 != (wchar_t *)0x0) {
          local_100 = (float *)0x147edf6aa;
          (**(code **)(*(longlong *)in_stack_00000058 + 0x10))();
        }
        if ((bVar33) && (local_res18 != (longlong *)0x0)) {
          local_100 = (float *)0x147edf6c2;
          (**(code **)(*local_res18 + 0x10))();
        }
        if ((bVar34) && (local_res18 != (longlong *)0x0)) {
          local_100 = (float *)0x147edf6da;
          (**(code **)(*local_res18 + 0x10))();
        }
        if ((bVar32) && (local_res18 != (longlong *)0x0)) {
          local_100 = (float *)0x147edf6f2;
          (**(code **)(*local_res18 + 0x10))();
        }
        local_100 = (float *)0x147edf706;
        FUN_14010f8af(param_5,param_6 & 0xffffffff);
        if (param_5 != 0) {
          local_100 = (float *)0x147edf718;
          FUN_1400020a8();
        }
        if ((int)puVar22 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14cb1fdb0) {
            local_100 = (float *)0x147ee002a;
            FUN_144b3d300(&DAT_14cb1fdb0);
            if (DAT_14cb1fdb0 == -1) {
              local_100 = (float *)0x147ee003c;
              DAT_14cb1fda8 = FUN_147867804();
              local_100 = (float *)0x147ee004f;
              _Init_thread_footer(&DAT_14cb1fdb0);
            }
          }
          param_5 = 0;
          param_6 = 0;
          in_stack_00000058 = (wchar_t *)CONCAT44(in_stack_00000058._4_4_,4);
          in_stack_00000068 = *(longlong **)param_2;
          if (in_stack_00000068 != (longlong *)0x0) {
            local_100 = (float *)0x147edf953;
            (**(code **)(*in_stack_00000068 + 8))();
          }
          in_stack_00000070 = param_2[2];
          local_100 = (float *)0x147edf978;
          FUN_140056680(&plStackX_8,L"ExtentDescription");
          local_100 = (float *)0x147edf98b;
          FUN_140233eec(&param_5,&plStackX_8,&stack0x00000058);
          if (plStackX_8 != (longlong *)0x0) {
            local_100 = (float *)0x147edf998;
            FUN_1400020a8();
          }
          if (in_stack_00000068 != (longlong *)0x0) {
            local_100 = (float *)0x147edf9ab;
            (**(code **)(*in_stack_00000068 + 0x10))();
          }
          if (((uint)param_1[0xe] & 0x20) == 0) {
            in_stack_00000058 = L"Trace";
            in_stack_00000060 = 5;
            local_100 = (float *)0x147edf9da;
            FUN_1446e940c(local_98,&stack0x00000058);
            in_stack_00000058 = L"EnvQueryGenerator";
            in_stack_00000060 = 0x11;
            local_100 = (float *)0x147edfa03;
            FUN_1446e940c(&stack0xffffffffffffffd4,&stack0x00000058);
            pwVar28 = L"trace";
          }
          else {
            in_stack_00000058 = L"Projection";
            in_stack_00000060 = 10;
            local_100 = (float *)0x147edfa35;
            FUN_1446e940c(local_98,&stack0x00000058);
            in_stack_00000058 = L"EnvQueryGenerator";
            in_stack_00000060 = 0x11;
            local_100 = (float *)0x147edfa5e;
            FUN_1446e940c(&stack0xffffffffffffffd4,&stack0x00000058);
            pwVar28 = L"projection";
          }
          local_100 = (float *)0x147edfa78;
          FUN_140208bae(&plStackX_8,&stack0xffffffffffffffd4,local_98,pwVar28);
          in_stack_00000058 = (wchar_t *)CONCAT44(in_stack_00000058._4_4_,4);
          local_100 = (float *)0x147edfa94;
          FUN_14023423e(&stack0x00000068,&plStackX_8);
          local_100 = (float *)0x147edfaab;
          FUN_140056680(&stack0xfffffffffffffff8,L"ProjectionTraceDesc");
          local_100 = (float *)0x147edfac3;
          FUN_140233eec(&param_5,&stack0xfffffffffffffff8,&stack0x00000058);
          if (unaff_R15 != 0) {
            local_100 = (float *)0x147edfad0;
            FUN_1400020a8();
          }
          if (in_stack_00000068 != (longlong *)0x0) {
            local_100 = (float *)0x147edfae3;
            (**(code **)(*in_stack_00000068 + 0x10))();
            in_stack_00000068 = (longlong *)0x0;
            in_stack_00000070 = 0.0;
          }
          if (plStackX_8 != (longlong *)0x0) {
            local_100 = (float *)0x147edfb0d;
            (**(code **)(*plStackX_8 + 0x10))();
          }
          local_100 = (float *)0x147edfb29;
          FUN_1406f1d90(DAT_14cb1fda8,&plStackX_8,*(undefined1 *)(param_1 + 10));
          in_stack_00000058 = (wchar_t *)CONCAT44(in_stack_00000058._4_4_,4);
          local_100 = (float *)0x147edfb40;
          FUN_14023423e(&stack0x00000068,&plStackX_8);
          local_100 = (float *)0x147edfb57;
          FUN_140056680(&stack0xfffffffffffffff8,L"Channel");
          local_100 = (float *)0x147edfb6f;
          FUN_140233eec(&param_5,&stack0xfffffffffffffff8,&stack0x00000058);
          if (unaff_R15 != 0) {
            local_100 = (float *)0x147edfb7c;
            FUN_1400020a8();
          }
          if (in_stack_00000068 != (longlong *)0x0) {
            local_100 = (float *)0x147edfb8f;
            (**(code **)(*in_stack_00000068 + 0x10))();
            in_stack_00000068 = (longlong *)0x0;
            in_stack_00000070 = 0.0;
          }
          if (plStackX_8 != (longlong *)0x0) {
            local_100 = (float *)0x147edfbb9;
            (**(code **)(*plStackX_8 + 0x10))();
          }
          in_stack_00000058 = L"GeometryBriefDescription";
          in_stack_00000060 = 0x18;
          local_100 = (float *)0x147edfbe5;
          FUN_1446e940c(&stack0xfffffffffffffff8,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          local_100 = (float *)0x147edfc0b;
          FUN_1446e940c(local_98,&stack0x00000058);
          local_100 = (float *)0x147edfc28;
          FUN_140208bae(&plStackX_8,local_98,&stack0xfffffffffffffff8,
                        L"{ExtentDescription} {ProjectionTraceDesc} on {Channel}");
          puVar26 = &local_58;
        }
        else {
          param_5 = 0;
          param_6 = 0;
          in_stack_00000058 = (wchar_t *)CONCAT44(in_stack_00000058._4_4_,4);
          in_stack_00000068 = *(longlong **)param_2;
          if (in_stack_00000068 != (longlong *)0x0) {
            local_100 = (float *)0x147edf74c;
            (**(code **)(*in_stack_00000068 + 8))();
          }
          in_stack_00000070 = param_2[2];
          local_100 = (float *)0x147edf771;
          FUN_140056680(&plStackX_8,L"Description");
          local_100 = (float *)0x147edf784;
          FUN_140233eec(&param_5,&plStackX_8,&stack0x00000058);
          if (plStackX_8 != (longlong *)0x0) {
            local_100 = (float *)0x147edf791;
            FUN_1400020a8();
          }
          if (in_stack_00000068 != (longlong *)0x0) {
            local_100 = (float *)0x147edf7a4;
            (**(code **)(*in_stack_00000068 + 0x10))();
          }
          fVar10 = param_1[0xe];
          if (((uint)fVar10 & 1) != 0) {
            in_stack_00000058 = L"DescWithComplexCollision";
            in_stack_00000060 = 0x18;
            local_100 = (float *)0x147edf7db;
            FUN_1446e940c(&stack0xfffffffffffffff8,&stack0x00000058);
            in_stack_00000058 = L"EnvQueryGenerator";
            in_stack_00000060 = 0x11;
            local_100 = (float *)0x147edf801;
            FUN_1446e940c(local_98,&stack0x00000058);
            local_100 = (float *)0x147edf81e;
            FUN_140208bae(&plStackX_8,local_98,&stack0xfffffffffffffff8,
                          L"{Description}, complex collision");
            local_100 = (float *)0x147edf834;
            FUN_14023409e(local_68,&plStackX_8,1);
            local_100 = (float *)0x147edf84f;
            FUN_140233c04(&stack0x00000058,local_68,&param_5);
            local_100 = (float *)0x147edf85a;
            FUN_140008f88(param_2,&stack0x00000058);
            if (in_stack_00000058 != (wchar_t *)0x0) {
              local_100 = (float *)0x147edf868;
              (**(code **)(*(longlong *)in_stack_00000058 + 0x10))();
            }
            if (plStackX_8 != (longlong *)0x0) {
              local_100 = (float *)0x147edf87b;
              (**(code **)(*plStackX_8 + 0x10))();
            }
            fVar10 = param_1[0xe];
          }
          if (((uint)fVar10 & 2) != 0) goto LAB_147edfc85;
          in_stack_00000058 = L"DescWithNonBlocking";
          in_stack_00000060 = 0x13;
          local_100 = (float *)0x147edf8b2;
          FUN_1446e940c(&stack0xfffffffffffffff8,&stack0x00000058);
          in_stack_00000058 = L"EnvQueryGenerator";
          in_stack_00000060 = 0x11;
          local_100 = (float *)0x147edf8d8;
          FUN_1446e940c(local_98,&stack0x00000058);
          local_100 = (float *)0x147edf8f5;
          FUN_140208bae(&plStackX_8,local_98,&stack0xfffffffffffffff8,
                        L"{Description}, accept non blocking");
          puVar26 = local_78;
        }
        local_100 = (float *)0x147edfc3e;
        FUN_14023409e(puVar26,&plStackX_8,1);
        local_100 = (float *)0x147edfc59;
        FUN_140233c04(&stack0x00000058,puVar26,&param_5);
        local_100 = (float *)0x147edfc64;
        FUN_140008f88(param_2,&stack0x00000058);
        if (in_stack_00000058 != (wchar_t *)0x0) {
          local_100 = (float *)0x147edfc72;
          (**(code **)(*(longlong *)in_stack_00000058 + 0x10))();
        }
        if (plStackX_8 != (longlong *)0x0) {
          local_100 = (float *)0x147edfc85;
          (**(code **)(*plStackX_8 + 0x10))();
        }
LAB_147edfc85:
        local_100 = (float *)0x147edfc99;
        FUN_14010f8af(param_5,param_6 & 0xffffffff);
        if (param_5 != 0) {
          local_100 = (float *)0x147edfcab;
          FUN_1400020a8();
        }
        if ((in_stack_00000078 ^ (ulonglong)afStack_f8) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        local_100 = (float *)&UNK_147edfcdb;
        FUN_144d8e3a0();
      case 0x19:
        if (*(float **)(*(longlong *)(puVar22 + 0x30) + (longlong)puVar19 * 8) == pfVar14 + 0xc) {
          uVar21 = *(undefined8 *)(param_1 + 0x80);
        }
        else {
          uVar21 = 0;
        }
        local_100 = (float *)0x147ee8191;
        pfVar14 = (float *)FUN_14384d67c(param_2,uVar21,&local_88);
        pfVar13 = afStack_f8;
        if ((char)pfVar14 == '\0') goto switchD_147ee81cf_default;
        pfVar14 = (float *)(ulonglong)*(byte *)(param_1 + 0x7e);
        pfVar13 = afStack_f8;
        switch(pfVar14) {
        case (float *)0x0:
          local_100 = (float *)0x147ee81ea;
          FUN_147ecf2f6(&uStack_b0,param_1,param_2,0xffffffff);
          pfVar14 = (float *)(ulonglong)local_a8[0];
          lVar27 = CONCAT44(uStack_ac,uStack_b0);
          pfVar13 = afStack_f8;
          if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
             (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) goto LAB_147ee87fe;
          fVar40 = 0.0;
          puVar22 = auStack_d0 + 8;
          _Size_00 = (ulonglong *)&uStack_b0;
          fVar41 = 0.0;
          uVar42 = 0x41700000;
          pcVar29 = QueryPerformanceCounter_exref;
          goto LAB_147ee8225;
        case (float *)0x1:
          local_100 = (float *)0x147ee8688;
          FUN_147ecf2f6(&uStack_b0,param_1,param_2,0xffffffff);
          pfVar14 = (float *)(ulonglong)local_a8[0];
          lVar27 = CONCAT44(uStack_ac,uStack_b0);
          pfVar13 = afStack_f8;
          if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
             (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) goto LAB_147ee87fe;
          lpPerformanceCount = (LARGE_INTEGER *)(auStack_d0 + 8);
          goto LAB_147ee86c3;
        case (float *)0x2:
          local_100 = (float *)0x147ee83a0;
          FUN_147ecf2f6(&uStack_b0,param_1,param_2,0xffffffff);
          pfVar14 = (float *)(ulonglong)local_a8[0];
          lVar27 = CONCAT44(uStack_ac,uStack_b0);
          pfVar13 = afStack_f8;
          if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
             (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) goto LAB_147ee87fe;
          fVar40 = 0.0;
          puVar22 = auStack_d0 + 8;
          _Size_00 = (ulonglong *)&uStack_b0;
          fVar41 = 0.0;
          uVar42 = 0x41700000;
          pcVar29 = QueryPerformanceCounter_exref;
          goto LAB_147ee83db;
        case (float *)0x3:
          local_100 = (float *)0x147ee850e;
          FUN_147ecf2f6(&uStack_b0,param_1,param_2,0xffffffff);
          pfVar14 = (float *)(ulonglong)local_a8[0];
          lVar27 = CONCAT44(uStack_ac,uStack_b0);
          pfVar13 = afStack_f8;
          if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
             (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) goto LAB_147ee87fe;
          fVar40 = 0.0;
          puVar22 = auStack_d0 + 8;
          fVar41 = NAN;
          uVar42 = 0x7fffffff;
          _Size_00 = (ulonglong *)&uStack_b0;
          uVar43 = 0;
          uVar44 = 0x41700000;
          ppfVar24 = (float **)afStack_f8;
          pcVar29 = QueryPerformanceCounter_exref;
          break;
        default:
          goto switchD_147ee81cf_default;
        }
        goto LAB_147ee8551;
      case 0x1a:
        ppfVar24 = &local_100;
        dVar35 = (double)fVar36;
        local_100 = param_1;
        goto code_r0x000147ee8611;
      case 0x1b:
        uVar20 = CONCAT62((int6)(uVar20 >> 0x10),CONCAT11(0x57,(char)uVar20));
        _auStack_d0 = ZEXT416((uint)fVar39);
        goto code_r0x000147ee832c;
      case 0x1c:
        goto code_r0x000147ee8494;
      case 0x1d:
        local_100 = (float *)0x1438521ba;
        DAT_14cb1ff28 = (float *)FUN_14171c317(puVar19,(ulonglong)pfVar14 & 0xffffffff);
        return DAT_14cb1ff28;
      case 0x1e:
        pcVar29 = (code *)swi(3);
        pfVar13 = (float *)(*pcVar29)();
        return pfVar13;
      case 0x1f:
        local_100 = (float *)0x1438521f1;
        DAT_14cb20048 = (float *)FUN_14171c317(puVar19,uVar9 + 0x73c2ee5);
        return DAT_14cb20048;
      case 0x20:
        *(uint *)((ulonglong)uRam2cde50058948fdec - 0x7d) =
             *(uint *)((ulonglong)uRam2cde50058948fdec - 0x7d) | (uint)puVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x21:
        *(undefined2 *)(pfVar14 + (longlong)param_1) = in_FS;
        *(char *)pfVar14 = *(char *)pfVar14 + cVar8;
        pcVar12 = (char *)((longlong)&PTR_caseD_59_14ac27bb8 + uVar18 + 1);
        *pcVar12 = *pcVar12 + bVar16;
        *(char *)((longlong)pfVar14 + -0x75) = *(char *)((longlong)pfVar14 + -0x75) + bVar16;
      case 0x23:
        *(uint *)((longlong)puVar19 + (longlong)pfVar14) =
             *(uint *)((longlong)puVar19 + (longlong)pfVar14) & 0x8b480000;
        *(undefined2 *)((longlong)pfVar14 + uVar20) = in_FS;
        *pfVar14 = (float)((int)*pfVar14 + uVar9);
        pcVar12 = (char *)((longlong)pfVar14 + -0x7b);
        *pcVar12 = *pcVar12 + bVar16;
        bVar33 = *pcVar12 == '\0';
        goto switchD_147ed929b_caseD_24;
      case 0x22:
        *(char *)pfVar14 = *(char *)pfVar14 + cVar8;
        goto LAB_143852d7d;
      case 0x24:
        goto switchD_147ed929b_caseD_24;
      case 0x25:
        *(char *)((longlong)pfVar14 + -0x7b) = *(char *)((longlong)pfVar14 + -0x7b) + bVar16;
        pfVar13 = (float *)(unaff_RBP + 1);
        goto LAB_143853748;
      case 0x26:
        pcVar12 = (char *)((ulonglong)pfVar14 & 0xffffffffffffffc8);
        *pcVar12 = *pcVar12 + (char)pcVar12;
        puVar22[(longlong)puVar19 * 4 + 0x3d] = puVar22[(longlong)puVar19 * 4 + 0x3d] + bVar16;
                    /* WARNING (jumptable): Read-only address (ram,0x000149dfe038) is written */
                    /* WARNING: Read-only address (ram,0x000149dfe038) is written */
        DAT_149dfe038._0_1_ =
             (char)((ulonglong)puVar22 >> 8) + ((byte)pcVar12[0xff2086f] < (byte)(uVar20 >> 8));
        goto LAB_143853be0;
      case 0x27:
        pcVar29 = (code *)swi(1);
        pfVar13 = (float *)(*pcVar29)();
        return pfVar13;
      case 0x28:
        pcVar12 = (char *)((ulonglong)pfVar14 & 0xffffffffffffffc8);
        *pcVar12 = *pcVar12 + (char)pcVar12;
        puVar22[(longlong)puVar19 * 4 + 0x3d] = puVar22[(longlong)puVar19 * 4 + 0x3d] + bVar16;
        goto LAB_143853a6f;
      case 0x29:
        return (float *)(ulonglong)(byte)(cVar8 + 3);
      case 0x2a:
        goto switchD_147ed929b_caseD_2a;
      }
LAB_147ed92ab:
      pfVar14[(longlong)puVar22 * 2] = fVar36 + pfVar14[(longlong)puVar22 * 2];
      fVar38 = param_2[0x4c];
LAB_147ed92bb:
      puVar22 = puVar22 + 1;
      _Size_00 = _Size_00 + 2;
      if ((longlong)(int)fVar38 <= (longlong)puVar22) {
        return (float *)(longlong)(int)fVar38;
      }
      goto LAB_147ed9230;
    }
  }
                    /* WARNING: Read-only address (ram,0x000149dfe038) is written */
  return pfVar15;
  while( true ) {
    local_d8 = (float)CONCAT31(local_d8._1_3_,(char)pcVar29);
    local_100 = (float *)0x143853ac1;
    FUN_143852d98(param_1,(ulonglong)unaff_RBP & 0xffffffff,(ulonglong)puVar22 & 0xffffffff,
                  (ulonglong)param_2 & 0xffffffff);
    local_100 = (float *)0x143853ac9;
    FUN_147ee880a(param_1);
    pfVar14 = (float *)(ulonglong)uStack00000000000000b0;
    if ((*(int *)(in_stack_000000a8 + 8) <= (int)uStack00000000000000b0) ||
       ((*(byte *)(in_stack_000000a8 + 0x13e) & 1) != 0)) break;
LAB_143853a6f:
    if ((double)(ulonglong)(uint)fVar10 < in_stack_000000b8 ||
        (double)(ulonglong)(uint)fVar10 == in_stack_000000b8) {
      local_100 = (float *)0x143853a80;
      (*(code *)&switchD_147ed929b::caseD_29)(_Size_00);
      if (in_stack_000000b8 <= (double)unaff_RBX * DAT_14c83f420 + 16777216.0) goto LAB_1438566ee;
    }
  }
  goto switchD_1438537e1_default;
LAB_1438566ee:
  pfVar14 = (float *)(ulonglong)uStack00000000000000b0;
  goto switchD_1438537e1_default;
  while( true ) {
    plVar6 = *(longlong **)(param_2 + 0x58);
    if (plVar6 == (longlong *)0x0) {
      *(double *)((longlong)ppfVar24 + 0x40) = DAT_14c8464f0;
      *(undefined8 *)((longlong)ppfVar24 + 0x30) = DAT_14c8464e0;
      *(double *)((longlong)ppfVar24 + 0x38) = DAT_14c8464e8;
    }
    else {
      uVar9 = *(uint *)(*(longlong *)param_2 + 4 + (longlong)*(int *)((longlong)ppfVar24 + 0x50) * 8
                       );
      lVar27 = *(longlong *)(param_2 + 6);
      pcVar7 = *(code **)(*plVar6 + 0x2b8);
      *(undefined8 *)((longlong)ppfVar24 + -8) = 0x147ee85d4;
      (*pcVar7)(plVar6,puVar22,((longlong)((ulonglong)uVar9 << 0x21) >> 0x21) + lVar27);
    }
    *(undefined8 *)((longlong)ppfVar24 + -8) = 0x147ee85dc;
    FUN_144afe924(puVar22);
    if (0 < *(int *)((longlong)ppfVar24 + 0x78)) {
      puVar31 = *(uint **)((longlong)ppfVar24 + 0x70);
      unaff_R13 = 0;
      unaff_RBP = (undefined8 *)0x0;
      do {
        *(undefined8 *)((longlong)ppfVar24 + -8) = 0x147ee85f8;
        FUN_144afe924((longlong)puVar31 + unaff_R13);
        puVar31 = *(uint **)((longlong)ppfVar24 + 0x70);
        dVar35 = (double)(ulonglong)
                         (uint)(float)(*(double *)((longlong)puVar31 + unaff_R13 + 0x10) -
                                      *(double *)((longlong)ppfVar24 + 0x40));
code_r0x000147ee8611:
        uVar4 = *(undefined1 *)((longlong)param_1 + 0x4a);
        uVar5 = *(undefined1 *)(param_1 + 0xd);
        *(float *)((longlong)ppfVar24 + 0x28) = fVar39;
        *(float *)((longlong)ppfVar24 + 0x20) = fVar10;
        *(undefined8 *)((longlong)ppfVar24 + -8) = 0x147ee8632;
        FUN_1438521fe(_Size_00,uVar5,uVar4,
                      CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar42,
                               SUB84(dVar35,0) & (uint)fVar41));
        unaff_RBP = (undefined8 *)((longlong)unaff_RBP + 1);
        unaff_R13 = unaff_R13 + 0x18;
      } while ((longlong)unaff_RBP < (longlong)*(int *)((longlong)ppfVar24 + 0x78));
    }
    *(undefined8 *)((longlong)ppfVar24 + -8) = 0x147ee864b;
    FUN_147ee880a(_Size_00);
    pfVar14 = (float *)(ulonglong)*(uint *)((longlong)ppfVar24 + 0x50);
    lVar27 = *(longlong *)((longlong)ppfVar24 + 0x48);
    pfVar13 = (float *)ppfVar24;
    if ((*(int *)(lVar27 + 8) <= (int)*(uint *)((longlong)ppfVar24 + 0x50)) ||
       ((*(byte *)(lVar27 + 0x13e) & 1) != 0)) break;
LAB_147ee8551:
    if ((double)(ulonglong)(uint)fVar40 < *(double *)((longlong)ppfVar24 + 0x58) ||
        (double)(ulonglong)(uint)fVar40 == *(double *)((longlong)ppfVar24 + 0x58)) {
      *(undefined8 *)((longlong)ppfVar24 + -8) = 0x147ee8560;
      (*pcVar29)(puVar22);
      if (*(double *)((longlong)ppfVar24 + 0x58) <=
          (double)*(longlong *)((longlong)ppfVar24 + 0x30) * DAT_14c83f420 +
          (double)CONCAT44(uVar44,uVar43)) goto LAB_147ee87f5;
    }
  }
  goto LAB_147ee87fe;
  while( true ) {
    plVar6 = *(longlong **)(param_2 + 0x58);
    if (plVar6 == (longlong *)0x0) {
      local_b8 = DAT_14c8464f0;
      local_c8 = (LARGE_INTEGER)DAT_14c8464e0;
      uStack_c0 = DAT_14c8464e8;
    }
    else {
      local_100 = (float *)0x147ee845e;
      (**(code **)(*plVar6 + 0x2b8))
                (plVar6,puVar22,
                 ((longlong)
                  ((ulonglong)*(uint *)(*(longlong *)param_2 + 4 + (longlong)(int)local_a8[0] * 8)
                  << 0x21) >> 0x21) + *(longlong *)(param_2 + 6));
    }
    local_100 = (float *)0x147ee8466;
    FUN_144afe924(puVar22);
    if (0 < iStack_80) {
      puVar31 = (uint *)CONCAT44(uStack_84,local_88);
      unaff_R13 = 0;
      unaff_RBP = (undefined8 *)0x0;
      do {
        local_100 = (float *)0x147ee8482;
        FUN_144afe924((longlong)puVar31 + unaff_R13);
        puVar31 = (uint *)CONCAT44(uStack_84,local_88);
        dVar35 = *(double *)((longlong)puVar31 + unaff_R13 + 0x10) - local_b8;
code_r0x000147ee8494:
        auStack_d0._0_4_ = fVar39;
        local_100 = (float *)0x147ee84b8;
        local_d8 = fVar10;
        FUN_1438521fe(_Size_00,*(undefined1 *)(param_1 + 0xd),
                      *(undefined1 *)((longlong)param_1 + 0x4a),(float)dVar35);
        unaff_RBP = (undefined8 *)((longlong)unaff_RBP + 1);
        unaff_R13 = unaff_R13 + 0x18;
      } while ((longlong)unaff_RBP < (longlong)iStack_80);
    }
    local_100 = (float *)0x147ee84d1;
    FUN_147ee880a(_Size_00);
    pfVar14 = (float *)(ulonglong)local_a8[0];
    lVar27 = CONCAT44(uStack_ac,uStack_b0);
    pfVar13 = afStack_f8;
    if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
       (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) break;
LAB_147ee83db:
    if ((double)(ulonglong)(uint)fVar40 < (double)CONCAT44(uStack_9c,uStack_a0) ||
        (double)(ulonglong)(uint)fVar40 == (double)CONCAT44(uStack_9c,uStack_a0)) {
      local_100 = (float *)0x147ee83ea;
      (*pcVar29)(puVar22);
      ppfVar24 = (float **)afStack_f8;
      if ((double)CONCAT44(uStack_9c,uStack_a0) <=
          (double)local_c8.QuadPart * DAT_14c83f420 + (double)CONCAT44(uVar42,fVar41))
      goto LAB_147ee87f5;
    }
  }
  goto LAB_147ee87fe;
  while( true ) {
    plVar6 = *(longlong **)(param_2 + 0x58);
    if (plVar6 == (longlong *)0x0) {
      local_b8 = DAT_14c8464f0;
      local_c8 = (LARGE_INTEGER)DAT_14c8464e0;
      uStack_c0 = DAT_14c8464e8;
    }
    else {
      local_100 = (float *)0x147ee8746;
      (**(code **)(*plVar6 + 0x2b8))
                (plVar6,lpPerformanceCount,
                 ((longlong)
                  ((ulonglong)*(uint *)(*(longlong *)param_2 + 4 + (longlong)(int)local_a8[0] * 8)
                  << 0x21) >> 0x21) + *(longlong *)(param_2 + 6));
    }
    local_100 = (float *)0x147ee874e;
    FUN_144afe924(lpPerformanceCount);
    if (0 < iStack_80) {
      lVar27 = CONCAT44(uStack_84,local_88);
      lVar30 = 0;
      lVar25 = 0;
      do {
        local_100 = (float *)0x147ee876a;
        FUN_144afe924(lVar27 + lVar30);
        lVar27 = CONCAT44(uStack_84,local_88);
        dVar35 = *(double *)(lVar27 + lVar30) - (double)local_c8;
        dVar37 = *(double *)(lVar27 + 8 + lVar30) - uStack_c0;
        auStack_d0._0_4_ = fVar39;
        local_100 = (float *)0x147ee87bf;
        local_d8 = fVar10;
        FUN_1438521fe(&uStack_b0,*(undefined1 *)(param_1 + 0xd),
                      *(undefined1 *)((longlong)param_1 + 0x4a),
                      (float)SQRT(dVar37 * dVar37 + dVar35 * dVar35));
        lVar25 = lVar25 + 1;
        lVar30 = lVar30 + 0x18;
      } while (lVar25 < iStack_80);
    }
    local_100 = (float *)0x147ee87d8;
    FUN_147ee880a(&uStack_b0);
    pfVar14 = (float *)(ulonglong)local_a8[0];
    lVar27 = CONCAT44(uStack_ac,uStack_b0);
    pfVar13 = afStack_f8;
    if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
       (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) break;
LAB_147ee86c3:
    if (0.0 < (double)CONCAT44(uStack_9c,uStack_a0) || (double)CONCAT44(uStack_9c,uStack_a0) == 0.0)
    {
      local_100 = (float *)0x147ee86d2;
      QueryPerformanceCounter(lpPerformanceCount);
      if ((double)CONCAT44(uStack_9c,uStack_a0) <=
          (double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0) goto LAB_147ee87f5;
    }
  }
  goto LAB_147ee87fe;
LAB_147ee87f5:
  pfVar14 = (float *)(ulonglong)*(uint *)((longlong)ppfVar24 + 0x50);
  lVar27 = *(longlong *)((longlong)ppfVar24 + 0x48);
  pfVar13 = (float *)ppfVar24;
  goto LAB_147ee87fe;
switchD_147ed929b_caseD_0:
  fVar36 = fVar36 * fVar46;
  goto LAB_147ed92ab;
switchD_147ed929b_caseD_2a:
  while( true ) {
    *(byte *)((longlong)puVar19 + 0x2d808592) = ~*(byte *)((longlong)puVar19 + 0x2d808592);
    uVar18 = (ulonglong)bVar34;
    pfVar13 = param_2 + (ulonglong)bVar34 * -2 + 1;
    *param_1 = *param_2;
    iVar11 = ((int)pfVar14 + -0x6f0f34d5) - (uint)bVar32;
    bVar34 = (_DAT_ac4aeed8 & 0x400) != 0;
    bVar33 = DAT_190a7858f < 0xf;
    DAT_190a7858f = DAT_190a7858f - 0xf;
    bVar32 = DAT_190a7858f != 0;
    puVar26 = (undefined4 *)((longlong)(param_1 + uVar18 * -2 + 1) + (ulonglong)bVar34 * -2 + 1);
    *(char *)(param_1 + uVar18 * -2 + 1) = (char)puVar19;
    *puVar26 = (int)puVar19;
    lVar27 = (uVar20 & 0xffffffff) - 1;
    if (lVar27 == 0 || bVar32) {
      DAT_190a7862b = DAT_190a7862b + -0xf;
      _DAT_16b073db1 = _DAT_16b073db1 + -0x7c326d35;
      puVar22[-0x7cae6d29] = (byte)puVar22[-0x7cae6d29] >> 1;
      _DAT_16b073dbd = _DAT_16b073dbd + -0x7c326d35;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out((short)iVar11,(char)puVar19);
    in(0x73);
    puVar31 = (uint *)((longlong)pfVar13 * 4 + 0x5dfb9670);
    uVar42 = *puVar31;
    uVar9 = *puVar31;
    *puVar31 = (uVar9 - 0x7f) - (uint)bVar33;
    bVar3 = ((byte)lVar27 & 0x1f) % 9;
    uVar20 = (uVar20 & 0xffffffff) - 2;
    if (uVar20 == 0) break;
    param_1 = (float *)((longlong)puVar26 + (ulonglong)bVar34 * -2 + 5 + (ulonglong)bVar34 * -8);
    puVar19 = (uint *)0x3baefbe1;
    uVar20 = uVar20 & 0xffffffff;
    bVar32 = false;
    pfVar14 = (float *)((ulonglong)
                        CONCAT31((int3)((uint)iVar11 >> 8),
                                 (byte)(CONCAT11(uVar42 < 0x7f || uVar9 - 0x7f < (uint)bVar33,
                                                 (char)iVar11) >> bVar3) | (char)iVar11 << 9 - bVar3
                                ) ^ 0xf);
    param_2 = pfVar13 + (ulonglong)bVar34 * -2 + 1;
    out(*pfVar13,(short)uVar20);
  }
  return (float *)0x3baefbe1;
switchD_147ed929b_caseD_24:
  pfVar13 = (float *)(unaff_RBP + 1);
  if (!bVar33) {
    *unaff_RBP = 0x143852d7d;
    pfVar14 = (float *)FUN_1400020a8();
    pfVar13 = (float *)(unaff_RBP + 1);
  }
LAB_143852d7d:
  if (*(longlong *)((longlong)pfVar13 + 0x150) != 0) {
    *(undefined8 *)((longlong)pfVar13 + -8) = 0x143852d93;
    pfVar14 = (float *)FUN_1400020a8();
  }
  if ((*(ulonglong *)((longlong)pfVar13 + 0x168) ^ (ulonglong)pfVar13) == DAT_14c707940) {
    return pfVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)pfVar13 + -8) = &UNK_143852418;
  FUN_144d8e3a0();
  while( true ) {
    local_d8 = (float)CONCAT31(local_d8._1_3_,(char)pcVar29);
    local_100 = (float *)0x143853c32;
    FUN_143852d98(param_1,(ulonglong)unaff_RBP & 0xffffffff,(ulonglong)puVar22 & 0xffffffff,
                  (ulonglong)param_2 & 0xffffffff);
    local_100 = (float *)0x143853c3a;
    FUN_147ee880a(param_1);
    pfVar14 = (float *)(ulonglong)uStack00000000000000b0;
    if ((*(int *)(in_stack_000000a8 + 8) <= (int)uStack00000000000000b0) ||
       ((*(byte *)(in_stack_000000a8 + 0x13e) & 1) != 0)) break;
LAB_143853be0:
    if ((double)(ulonglong)(uint)fVar10 < in_stack_000000b8 ||
        (double)(ulonglong)(uint)fVar10 == in_stack_000000b8) {
      local_100 = (float *)0x143853bf1;
      (*(code *)&switchD_147ed929b::caseD_29)(_Size_00);
      if (in_stack_000000b8 <= (double)unaff_RBX * DAT_14c83f420 + (double)(ulonglong)(uint)fVar39)
      goto LAB_1438566ee;
    }
  }
switchD_1438537e1_default:
  *(int *)(in_stack_000000a8 + 0x124) = (int)pfVar14;
  if (CONCAT44(uStack_84,local_88) != 0) {
    local_100 = (float *)0x143853736;
    pfVar14 = (float *)FUN_1400020a8();
  }
  pfVar13 = afStack_f8;
  if (in_stack_00000098 != 0) {
    local_100 = (float *)0x143853748;
    pfVar14 = (float *)FUN_1400020a8();
    pfVar13 = afStack_f8;
  }
LAB_143853748:
  if (*(longlong *)((longlong)pfVar13 + 0x170) != 0) {
    *(undefined8 *)((longlong)pfVar13 + -8) = 0x14385375a;
    pfVar14 = (float *)FUN_1400020a8();
  }
  if (*(longlong *)((longlong)pfVar13 + 0x80) != 0) {
    *(undefined8 *)((longlong)pfVar13 + -8) = 0x14385376c;
    pfVar14 = (float *)FUN_1400020a8();
  }
  if ((*(ulonglong *)((longlong)pfVar13 + 0x228) ^ (ulonglong)pfVar13) == DAT_14c707940) {
    return pfVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)pfVar13 + -8) = &UNK_1438537cd;
  FUN_144d8e3a0();
  while( true ) {
    plVar6 = *(longlong **)(param_2 + 0x58);
    if (plVar6 == (longlong *)0x0) {
      local_b8 = DAT_14c8464f0;
      local_c8 = (LARGE_INTEGER)DAT_14c8464e0;
      uStack_c0 = DAT_14c8464e8;
    }
    else {
      local_100 = (float *)0x147ee82a8;
      (**(code **)(*plVar6 + 0x2b8))
                (plVar6,puVar22,
                 ((longlong)
                  ((ulonglong)*(uint *)(*(longlong *)param_2 + 4 + (longlong)(int)local_a8[0] * 8)
                  << 0x21) >> 0x21) + *(longlong *)(param_2 + 6));
    }
    local_100 = (float *)0x147ee82b0;
    FUN_144afe924(puVar22);
    if (0 < iStack_80) {
      puVar31 = (uint *)CONCAT44(uStack_84,local_88);
      unaff_R13 = 0;
      unaff_RBP = (undefined8 *)0x0;
      do {
        local_100 = (float *)0x147ee82d0;
        FUN_144afe924((longlong)puVar31 + unaff_R13);
        puVar31 = (uint *)CONCAT44(uStack_84,local_88);
        uVar20 = (ulonglong)*(byte *)(param_1 + 0xd);
        auStack_d0._0_4_ = fVar39;
code_r0x000147ee832c:
        local_100 = (float *)0x147ee833a;
        local_d8 = fVar10;
        FUN_1438521fe(_Size_00,uVar20);
        unaff_RBP = (undefined8 *)((longlong)unaff_RBP + 1);
        unaff_R13 = unaff_R13 + 0x18;
      } while ((longlong)unaff_RBP < (longlong)iStack_80);
    }
    local_100 = (float *)0x147ee8357;
    FUN_147ee880a(_Size_00);
    pfVar14 = (float *)(ulonglong)local_a8[0];
    lVar27 = CONCAT44(uStack_ac,uStack_b0);
    pfVar13 = afStack_f8;
    if ((*(int *)(lVar27 + 8) <= (int)local_a8[0]) ||
       (pfVar13 = afStack_f8, (*(byte *)(lVar27 + 0x13e) & 1) != 0)) break;
LAB_147ee8225:
    if ((double)(ulonglong)(uint)fVar40 < (double)CONCAT44(uStack_9c,uStack_a0) ||
        (double)(ulonglong)(uint)fVar40 == (double)CONCAT44(uStack_9c,uStack_a0)) {
      local_100 = (float *)0x147ee8234;
      (*pcVar29)(puVar22);
      ppfVar24 = (float **)afStack_f8;
      if ((double)CONCAT44(uStack_9c,uStack_a0) <=
          (double)local_c8.QuadPart * DAT_14c83f420 + (double)CONCAT44(uVar42,fVar41))
      goto LAB_147ee87f5;
    }
  }
LAB_147ee87fe:
  *(int *)(lVar27 + 0x124) = (int)pfVar14;
switchD_147ee81cf_default:
  if (*(longlong *)((longlong)pfVar13 + 0x70) != 0) {
    *(undefined8 *)((longlong)pfVar13 + -8) = 0x147ee81b5;
    pfVar14 = (float *)FUN_1400020a8();
  }
  if ((*(ulonglong *)((longlong)pfVar13 + 0x88) ^ (ulonglong)pfVar13) == DAT_14c707940) {
    return pfVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)pfVar13 + -8) = &UNK_147ee80c3;
  FUN_144d8e3a0();
}



// FUNCTION 147ed93d4 FUN_147ed93d4 body=75 status=ok
// SIG undefined FUN_147ed93d4(void)

bool FUN_147ed93d4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = FUN_1411b2cec();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_1;
      goto LAB_147ed9408;
    }
  }
  lVar2 = 0;
LAB_147ed9408:
  lVar1 = FUN_145a75b0c();
  return lVar2 == lVar1;
}



// FUNCTION 147ed9420 FUN_147ed9420 body=90 status=ok
// SIG undefined FUN_147ed9420(void)

undefined8 * FUN_147ed9420(undefined8 param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_3[0x2c];
  if (plVar1 == (longlong *)0x0) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
  }
  else {
    (**(code **)(*plVar1 + 0x2b8))
              (plVar1,param_2,
               ((longlong)((ulonglong)*(uint *)(*param_3 + 4 + (longlong)param_4 * 8) << 0x21) >>
               0x21) + param_3[3]);
  }
  return param_2;
}



// FUNCTION 147ed9482 FUN_147ed9482 body=5255 status=ok
// SIG undefined FUN_147ed9482(void)

undefined8 * FUN_147ed9482(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_2f8 [40];
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined4 local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  longlong local_2a0 [2];
  longlong *local_290;
  longlong *local_288;
  undefined1 local_27c [4];
  longlong *local_278 [2];
  wchar_t *local_268;
  undefined4 local_260;
  longlong *local_258;
  undefined4 local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238 [2];
  longlong *local_228 [2];
  longlong *local_218;
  longlong *local_210;
  undefined1 local_204 [4];
  longlong *local_200 [2];
  wchar_t *local_1f0;
  undefined4 local_1e8;
  longlong *local_1e0 [2];
  longlong *local_1d0 [2];
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0 [2];
  longlong local_1a0;
  undefined4 local_198;
  undefined4 local_18c;
  longlong *local_188;
  longlong *plStack_180;
  wchar_t **local_178;
  ulonglong *local_170;
  longlong *local_168 [2];
  longlong *local_158 [2];
  wchar_t **local_148;
  ulonglong *local_140;
  longlong *local_138 [2];
  wchar_t *local_128;
  undefined4 local_120;
  wchar_t **local_118;
  ulonglong *local_110;
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8 [2];
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  wchar_t **local_b8;
  undefined4 *local_b0;
  wchar_t *local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  ulonglong local_88 [2];
  undefined1 local_78 [16];
  ulonglong local_68 [2];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_144a5dc74(&local_e8);
  if (*(char *)(param_1 + 0x34) != '\x01') {
    cVar5 = *(char *)(param_1 + 0x4a);
    if (cVar5 == '\x02') {
      FUN_147ecddc8(param_1 + 0xc0,&local_108);
      FUN_140233b1a(local_158,&local_108);
      FUN_147ecddc8(param_1 + 0x88,&local_128);
      FUN_140233b1a(local_168,&local_128);
      local_a8 = L"FilterBetween";
      plStack_a0._0_4_ = 0xd;
      FUN_1446e940c(local_1d0,&local_a8);
      local_a8 = L"EnvQueryGenerator";
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
      FUN_1446e940c(local_1e0,&local_a8);
      FUN_140208bae(&local_188,local_1e0,local_1d0,L"between {0} and {1}");
      FUN_14023409e(&local_178,&local_188,1);
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(local_98,local_168);
      local_88[0]._0_4_ = 4;
      FUN_14023423e(local_78,local_158);
      local_b0 = (undefined4 *)local_68;
      local_b8 = &local_a8;
      FUN_14010d304(&local_1a0);
      local_c8 = local_178;
      local_c0 = local_170;
      if (local_170 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_d8,&local_c8,&local_1a0);
      FUN_14007f2db(local_1a0,local_198);
      if (local_1a0 != 0) {
        FUN_1400020a8();
      }
      lVar6 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_a8 + lVar6) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_a8 + lVar6) + 0x10))();
          *(undefined8 *)((longlong)&local_a8 + lVar6) = 0;
          *(undefined4 *)((longlong)local_98 + lVar6 + -8) = 0;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != -0x10);
      if (local_170 != (ulonglong *)0x0) {
        LOCK();
        puVar3 = local_170 + 1;
        *(int *)puVar3 = (int)*puVar3 + -1;
        UNLOCK();
        if ((int)*puVar3 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar2 = (int *)((longlong)local_170 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_170 + 0x10))(local_170);
          }
        }
      }
      if (local_168[0] != (longlong *)0x0) {
        (**(code **)(*local_168[0] + 0x10))();
      }
      if (local_158[0] != (longlong *)0x0) {
        (**(code **)(*local_158[0] + 0x10))();
      }
      FUN_140008f88(&local_e8,&local_d8);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      if (local_188 != (longlong *)0x0) {
        (**(code **)(*local_188 + 0x10))();
      }
      if (local_128 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (cVar5 == '\x01') {
        FUN_147ecddc8(param_1 + 0xc0,&local_108);
        FUN_140233b1a(local_138,&local_108);
        local_a8 = L"FilterUpTo";
        plStack_a0._0_4_ = 10;
        FUN_1446e940c(&local_188,&local_a8);
        local_a8 = L"EnvQueryGenerator";
        plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
        FUN_1446e940c(local_1d0,&local_a8);
        FUN_140208bae(&local_128,local_1d0,&local_188,L"up to {0}");
        FUN_14023409e(&local_148,&local_128,1);
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(local_98,local_138);
        local_b0 = (undefined4 *)local_88;
        local_b8 = &local_a8;
        FUN_14010d304(&local_1a0);
        local_c8 = local_148;
        local_c0 = local_140;
        if (local_140 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(local_140 + 1) = (int)local_140[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_d8,&local_c8,&local_1a0);
        FUN_14007f2db(local_1a0,local_198);
        if (local_1a0 != 0) {
          FUN_1400020a8();
        }
        if (local_98[0] != (longlong *)0x0) {
          (**(code **)(*local_98[0] + 0x10))();
        }
        if (local_140 != (ulonglong *)0x0) {
          LOCK();
          puVar3 = local_140 + 1;
          *(int *)puVar3 = (int)*puVar3 + -1;
          UNLOCK();
          if ((int)*puVar3 == 0) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)local_140 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_140 + 0x10))(local_140);
            }
          }
        }
      }
      else {
        if (cVar5 != '\0') goto LAB_147ed94c4;
        FUN_147ecddc8(param_1 + 0x88,&local_108);
        FUN_140233b1a(local_f8,&local_108);
        local_a8 = L"FilterAtLeast";
        plStack_a0._0_4_ = 0xd;
        FUN_1446e940c(&local_188,&local_a8);
        local_a8 = L"EnvQueryGenerator";
        plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
        FUN_1446e940c(local_1d0,&local_a8);
        FUN_140208bae(&local_128,local_1d0,&local_188,L"at least {0}");
        FUN_14023409e(&local_118,&local_128,1);
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(local_98,local_f8);
        local_b0 = (undefined4 *)local_88;
        local_b8 = &local_a8;
        FUN_14010d304(&local_1a0);
        local_c8 = local_118;
        local_c0 = local_110;
        if (local_110 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(local_110 + 1) = (int)local_110[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_d8,&local_c8,&local_1a0);
        FUN_14007f2db(local_1a0,local_198);
        if (local_1a0 != 0) {
          FUN_1400020a8();
        }
        if (local_98[0] != (longlong *)0x0) {
          (**(code **)(*local_98[0] + 0x10))();
        }
        local_138[0] = local_f8[0];
        if (local_110 != (ulonglong *)0x0) {
          LOCK();
          puVar3 = local_110 + 1;
          *(int *)puVar3 = (int)*puVar3 + -1;
          UNLOCK();
          if ((int)*puVar3 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar2 = (int *)((longlong)local_110 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_138[0] = local_f8[0];
            if (*piVar2 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
              local_138[0] = local_f8[0];
            }
          }
        }
      }
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
      }
      FUN_140008f88(&local_e8,&local_d8);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      if (local_128 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_128 + 0x10))();
      }
    }
    if (local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147ed94c4:
  FUN_141366fce(&local_1a0);
  local_18c = 2;
  FUN_144a5dc74(&local_108);
  if (*(char *)(param_1 + 0x34) == '\0') {
    local_a8 = L"DontScore";
    plStack_a0._0_4_ = 9;
    FUN_1446e940c(&local_b8,&local_a8);
    local_a8 = L"EnvQueryGenerator";
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
    FUN_1446e940c(&local_c8,&local_a8);
    FUN_140208bae(&local_a8,&local_c8,&local_b8,L"don\'t score");
    FUN_140008f88(&local_108,&local_a8);
    pwVar7 = local_a8;
  }
  else if (*(char *)(param_1 + 0xf9) == '\x04') {
    if (*(longlong *)(param_1 + 0x180) == 0) {
      local_188 = (longlong *)0x0;
      plStack_180 = (longlong *)0x0;
      FUN_1404079ea(local_1b0,*(uint *)(param_1 + 0x1a0) & 0x7fffffff,&local_1a0);
      FUN_1400b22c2(local_1e0,&DAT_14ac05e18);
      FUN_140233b1a(local_1d0,local_1e0);
      FUN_14023409e(&local_1c0,local_1d0,1);
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(local_98,local_1b0);
      local_c8 = &local_a8;
      local_c0 = local_88;
      FUN_14010d304(&local_b8);
      local_d8 = local_1c0;
      local_d0 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_128,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
      if (local_b8 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar2 = (int *)((longlong)local_1b8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1b8 + 0x10))(local_1b8);
          }
        }
      }
      if (local_1b0[0] != (longlong *)0x0) {
        (**(code **)(*local_1b0[0] + 0x10))();
      }
      if (local_1d0[0] != (longlong *)0x0) {
        (**(code **)(*local_1d0[0] + 0x10))();
      }
      if (local_1e0[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar1 = plStack_180;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_180 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_180)(plStack_180);
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
    else {
      FUN_147ecddc8(param_1 + 0x170,&local_a8);
      FUN_140233b1a(&local_128,&local_a8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    local_1f0 = local_128;
    if (local_128 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_128 + 8))();
    }
    local_1e8 = local_120;
    local_a8 = L"ScoreConstant";
    plStack_a0._0_4_ = 0xd;
    FUN_1446e940c(local_2a0,&local_a8);
    local_a8 = L"EnvQueryGenerator";
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
    FUN_1446e940c(local_204,&local_a8);
    FUN_140208bae(local_200,local_204,local_2a0,L"constant score");
    FUN_1400b22c2(local_1e0,"{0} [{1}]");
    FUN_140233b1a(local_1d0,local_1e0);
    FUN_14023409e(&local_218,local_1d0,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_200);
    local_88[0]._0_4_ = 4;
    FUN_14023423e(local_78,&local_1f0);
    local_c0 = local_68;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8);
    local_d8 = local_218;
    local_d0 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_210 + 1) = (int)local_210[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_188,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
    if (local_b8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar6 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_a8 + lVar6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_a8 + lVar6) + 0x10))();
        *(undefined8 *)((longlong)&local_a8 + lVar6) = 0;
        *(undefined4 *)((longlong)local_98 + lVar6 + -8) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
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
    if (local_200[0] != (longlong *)0x0) {
      (**(code **)(*local_200[0] + 0x10))();
    }
    if (local_1f0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1f0 + 0x10))();
    }
    FUN_140008f88(&local_108,&local_188);
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
    }
    if (local_1d0[0] != (longlong *)0x0) {
      (**(code **)(*local_1d0[0] + 0x10))();
    }
    pwVar7 = local_128;
    if (local_1e0[0] != (longlong *)0x0) {
      FUN_1400020a8();
      pwVar7 = local_128;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_147ecddc8(param_1 + 0x170,&local_188);
      FUN_140233b1a(local_228,&local_188);
      local_a8 = L"ScoreFactor";
      plStack_a0._0_4_ = 0xb;
      FUN_1446e940c(local_2a0,&local_a8);
      local_a8 = L"EnvQueryGenerator";
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
      FUN_1446e940c(local_204,&local_a8);
      FUN_140208bae(local_238,local_204,local_2a0,L"score factor");
      FUN_1400b22c2(local_1e0,"{0}: {1}");
      FUN_140233b1a(local_1d0,local_1e0);
      FUN_14023409e(&local_248,local_1d0,1);
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(local_98,local_238);
      local_88[0]._0_4_ = 4;
      FUN_14023423e(local_78,local_228);
      local_c0 = local_68;
      local_c8 = &local_a8;
      FUN_14010d304(&local_b8);
      local_d8 = local_248;
      local_d0 = local_240;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_240 + 1) = (int)local_240[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_128,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
      if (local_b8 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      lVar6 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_a8 + lVar6) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_a8 + lVar6) + 0x10))();
          *(undefined8 *)((longlong)&local_a8 + lVar6) = 0;
          *(undefined4 *)((longlong)local_98 + lVar6 + -8) = 0;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != -0x10);
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_240 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)local_240 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_240 + 0x10))(local_240);
          }
        }
      }
      if (local_238[0] != (longlong *)0x0) {
        (**(code **)(*local_238[0] + 0x10))();
      }
      if (local_228[0] != (longlong *)0x0) {
        (**(code **)(*local_228[0] + 0x10))();
      }
      FUN_140008f88(&local_108,&local_128);
      if (local_128 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_128 + 0x10))();
      }
      if (local_1d0[0] != (longlong *)0x0) {
        (**(code **)(*local_1d0[0] + 0x10))();
      }
      if (local_1e0[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_188 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147ed97b6;
    }
    if (*(char *)(param_1 + 0xf9) == '\x02') {
      if (*(float *)(param_1 + 0x1a0) < 0.0) goto LAB_147eda57a;
LAB_147eda517:
      local_a8 = L"Lesser";
      plStack_a0._0_4_ = 6;
      FUN_1446e940c(&local_b8,&local_a8);
      local_a8 = L"EnvQueryGenerator";
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
      FUN_1446e940c(&local_c8,&local_a8);
      pwVar7 = L"lesser";
    }
    else {
      if (*(float *)(param_1 + 0x1a0) <= 0.0) goto LAB_147eda517;
LAB_147eda57a:
      local_a8 = L"Greater";
      plStack_a0._0_4_ = 7;
      FUN_1446e940c(&local_b8,&local_a8);
      local_a8 = L"EnvQueryGenerator";
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
      FUN_1446e940c(&local_c8,&local_a8);
      pwVar7 = L"greater";
    }
    FUN_140208bae(&local_128,&local_c8,&local_b8,pwVar7);
    local_a8 = (wchar_t *)0x0;
    plStack_a0 = (longlong *)0x0;
    FUN_1404079ea(&local_188,*(uint *)(param_1 + 0x1a0) & 0x7fffffff,&local_1a0,&local_a8);
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_a0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_258 = local_188;
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 8))();
    }
    local_250 = plStack_180._0_4_;
    local_268 = local_128;
    if (local_128 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_128 + 8))();
    }
    local_260 = local_120;
    local_a8 = L"ScorePrefer";
    plStack_a0._0_4_ = 0xb;
    FUN_1446e940c(local_204,&local_a8);
    local_a8 = L"EnvQueryGenerator";
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,0x11);
    FUN_1446e940c(local_27c,&local_a8);
    FUN_140208bae(local_278,local_27c,local_204,L"prefer");
    FUN_1400b22c2(local_2a0,"{0} {1} [x{2}]");
    FUN_140233b1a(local_1e0,local_2a0);
    FUN_14023409e(&local_290,local_1e0,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_278);
    local_88[0]._0_4_ = 4;
    FUN_14023423e(local_78,&local_268);
    local_68[0]._0_4_ = 4;
    FUN_14023423e(local_58,&local_258);
    local_c0 = &local_48;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8);
    local_d8 = local_290;
    local_d0 = local_288;
    if (local_288 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_288 + 1) = (int)local_288[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1d0,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
    if (local_b8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar6 = 0x50;
    do {
      if (*(longlong **)((longlong)&local_a8 + lVar6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_a8 + lVar6) + 0x10))();
        *(undefined8 *)((longlong)&local_a8 + lVar6) = 0;
        *(undefined4 *)((longlong)local_98 + lVar6 + -8) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_288 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_288 + 0x10))(local_288);
        }
      }
    }
    if (local_278[0] != (longlong *)0x0) {
      (**(code **)(*local_278[0] + 0x10))();
    }
    if (local_268 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_268 + 0x10))();
    }
    if (local_258 != (longlong *)0x0) {
      (**(code **)(*local_258 + 0x10))();
    }
    FUN_140008f88(&local_108,local_1d0);
    if (local_1d0[0] != (longlong *)0x0) {
      (**(code **)(*local_1d0[0] + 0x10))();
    }
    if (local_1e0[0] != (longlong *)0x0) {
      (**(code **)(*local_1e0[0] + 0x10))();
    }
    if (local_2a0[0] != 0) {
      FUN_1400020a8();
    }
    pwVar7 = local_128;
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
      pwVar7 = local_128;
    }
  }
  if (pwVar7 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar7 + 0x10))();
  }
LAB_147ed97b6:
  cVar5 = FUN_144a7c5f6(&local_e8);
  if (cVar5 == '\0') {
    local_2b0 = local_108;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    local_2a8 = local_100;
    local_2c0 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 8))();
    }
    local_2b8 = local_e0;
    FUN_1400b22c2(&local_188,"{0}, {1}");
    FUN_140233b1a(&local_128,&local_188);
    FUN_14023409e(&local_2d0,&local_128,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,&local_2c0);
    local_88[0]._0_4_ = 4;
    FUN_14023423e(local_78,&local_2b0);
    local_c8 = &local_a8;
    local_c0 = local_68;
    FUN_14010d304(&local_b8);
    local_d8 = local_2d0;
    local_d0 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
    if (local_b8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar6 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_a8 + lVar6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_a8 + lVar6) + 0x10))();
        *(undefined8 *)((longlong)&local_a8 + lVar6) = 0;
        *(undefined4 *)((longlong)local_98 + lVar6 + -8) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2c8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar2 = (int *)((longlong)local_2c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2c8 + 0x10))(local_2c8);
        }
      }
    }
    if (local_2c0 != (longlong *)0x0) {
      (**(code **)(*local_2c0 + 0x10))();
    }
    if (local_2b0 != (longlong *)0x0) {
      (**(code **)(*local_2b0 + 0x10))();
    }
    if (local_128 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_128 + 0x10))();
    }
    if (local_188 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_108;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = local_100;
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eda90a FUN_147eda90a body=5215 status=ok
// SIG undefined FUN_147eda90a(void)

undefined8 * FUN_147eda90a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined1 auStack_3a8 [40];
  undefined8 local_380;
  undefined8 *local_378;
  longlong local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  undefined4 local_350;
  longlong *local_348;
  undefined4 local_340;
  longlong local_338 [2];
  longlong *local_328;
  longlong *local_320;
  undefined1 local_314 [4];
  longlong *local_310 [2];
  wchar_t *local_300;
  undefined4 local_2f8;
  longlong *local_2f0 [2];
  longlong *local_2e0;
  undefined4 local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0 [2];
  longlong *local_2b0 [2];
  longlong *local_2a0;
  longlong *local_298;
  undefined1 local_28c [4];
  longlong *local_288 [2];
  wchar_t *local_278;
  undefined4 local_270;
  longlong *local_268 [2];
  longlong *local_258 [2];
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *plStack_230;
  longlong *local_220 [2];
  wchar_t *local_210;
  undefined4 local_208;
  longlong *local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1dc;
  longlong local_1d8 [2];
  longlong *local_1c8 [2];
  wchar_t **local_1b8;
  ulonglong *local_1b0;
  longlong *local_1a8 [2];
  longlong *local_198;
  undefined4 local_190;
  longlong *local_188 [2];
  longlong local_178 [2];
  longlong *local_168 [2];
  wchar_t **local_158;
  ulonglong *local_150;
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong local_128 [2];
  longlong *local_118 [2];
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  longlong *local_f0;
  wchar_t **local_e8;
  ulonglong *local_e0;
  wchar_t **local_d8;
  undefined4 *local_d0;
  wchar_t *local_c8;
  longlong *plStack_c0;
  longlong *local_b8 [2];
  undefined4 local_a8 [4];
  undefined1 local_98 [16];
  undefined4 local_88 [4];
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_144a5dc74(&local_108);
  if ((*(char *)(param_1 + 0x34) != '\x01') && (*(char *)(param_1 + 0x4a) == '\x03')) {
    local_370 = *(longlong *)(param_1 + 0x60);
    if (local_370 == 0) {
      FUN_140009b9a(local_188,param_3);
      if (*(char *)(param_1 + 0x80) == '\x01') {
        plVar6 = (longlong *)FUN_140e82300();
        local_198 = (longlong *)*plVar6;
        if (local_198 != (longlong *)0x0) {
          (**(code **)(*local_198 + 8))();
        }
        local_190 = (undefined4)plVar6[1];
      }
      else {
        local_c8 = L"NotWithSpace";
        plStack_c0._0_4_ = 0xc;
        FUN_1446e940c(&local_238,&local_c8);
        local_c8 = L"EnvQueryGenerator";
        plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
        FUN_1446e940c(local_258,&local_c8);
        FUN_140208bae(&local_198,local_258,&local_238,L"not ");
      }
      local_c8 = L"FilterRequire";
      plStack_c0._0_4_ = 0xd;
      FUN_1446e940c(local_268,&local_c8);
      local_c8 = L"EnvQueryGenerator";
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
      FUN_1446e940c(local_338,&local_c8);
      FUN_140208bae(local_1a8,local_338,local_268,L"require");
      FUN_1400b22c2(local_1d8,"{0} {1}{2}");
      FUN_140233b1a(local_1c8,local_1d8);
      FUN_14023409e(&local_1b8,local_1c8,1);
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
      FUN_14023423e(local_b8,local_1a8);
      local_a8[0] = 4;
      FUN_14023423e(local_98,&local_198);
      local_88[0] = 4;
      FUN_14023423e(local_78,local_188);
      local_d0 = local_68;
      local_d8 = &local_c8;
      FUN_14010d304(&local_1f0);
      local_e8 = local_1b8;
      local_e0 = local_1b0;
      if (local_1b0 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_f8,&local_e8,&local_1f0);
      FUN_14007f2db(local_1f0,local_1e8);
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      lVar8 = 0x50;
      do {
        if (*(longlong **)((longlong)&local_c8 + lVar8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_c8 + lVar8) + 0x10))();
          *(undefined8 *)((longlong)&local_c8 + lVar8) = 0;
          *(undefined4 *)((longlong)local_b8 + lVar8 + -8) = 0;
        }
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != -0x10);
      if (local_1b0 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = local_1b0 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)local_1b0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1b0 + 0x10))(local_1b0);
          }
        }
      }
      if (local_1a8[0] != (longlong *)0x0) {
        (**(code **)(*local_1a8[0] + 0x10))();
      }
      if (local_198 != (longlong *)0x0) {
        (**(code **)(*local_198 + 0x10))();
      }
    }
    else {
      local_378 = param_2;
      FUN_147ecddc8(param_1 + 0x50,local_128);
      FUN_140233b1a(local_118,local_128);
      local_380 = param_3;
      FUN_140009b9a(local_138,param_3);
      local_c8 = L"FilterRequire";
      plStack_c0._0_4_ = 0xd;
      FUN_1446e940c(&local_200,&local_c8);
      local_c8 = L"EnvQueryGenerator";
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
      FUN_1446e940c(&local_210,&local_c8);
      FUN_140208bae(local_148,&local_210,&local_200,L"require");
      FUN_1400b22c2(local_178,"{0} {1}: {2}");
      FUN_140233b1a(local_168,local_178);
      FUN_14023409e(&local_158,local_168,1);
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
      FUN_14023423e(local_b8,local_148);
      local_a8[0] = 4;
      FUN_14023423e(local_98,local_138);
      local_88[0] = 4;
      FUN_14023423e(local_78,local_118);
      local_d0 = local_68;
      local_d8 = &local_c8;
      FUN_14010d304(&local_1f0);
      local_e8 = local_158;
      local_e0 = local_150;
      if (local_150 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(local_150 + 1) = (int)local_150[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_f8,&local_e8,&local_1f0);
      FUN_14007f2db(local_1f0,local_1e8);
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      param_2 = local_378;
      param_3 = local_380;
      lVar8 = 0x50;
      do {
        if (*(longlong **)((longlong)&local_c8 + lVar8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_c8 + lVar8) + 0x10))();
          *(undefined8 *)((longlong)&local_c8 + lVar8) = 0;
          *(undefined4 *)((longlong)local_b8 + lVar8 + -8) = 0;
        }
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != -0x10);
      if (local_150 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = local_150 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)local_150 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_150 + 0x10))(local_150);
          }
        }
      }
      if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 0x10))();
      }
      local_188[0] = local_118[0];
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
        local_188[0] = local_118[0];
      }
    }
    if (local_188[0] != (longlong *)0x0) {
      (**(code **)(*local_188[0] + 0x10))();
    }
    FUN_140008f88(&local_108,&local_f8);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    if (local_370 == 0) {
      if (local_1c8[0] != (longlong *)0x0) {
        (**(code **)(*local_1c8[0] + 0x10))();
      }
    }
    else {
      if (local_168[0] != (longlong *)0x0) {
        (**(code **)(*local_168[0] + 0x10))();
      }
      local_1d8[0] = local_128[0];
      if (local_178[0] != 0) {
        FUN_1400020a8();
        local_1d8[0] = local_128[0];
      }
    }
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_141366fce(&local_1f0);
  local_1dc = 2;
  FUN_144a5dc74(&local_200);
  if (*(char *)(param_1 + 0x34) == '\0') {
    local_c8 = L"DontScore";
    plStack_c0._0_4_ = 9;
    FUN_1446e940c(&local_d8,&local_c8);
    local_c8 = L"EnvQueryGenerator";
    plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
    FUN_1446e940c(&local_e8,&local_c8);
    FUN_140208bae(&local_c8,&local_e8,&local_d8,L"don\'t score");
    FUN_140008f88(&local_200,&local_c8);
    pwVar7 = local_c8;
  }
  else if (*(char *)(param_1 + 0xf9) == '\x04') {
    if (*(longlong *)(param_1 + 0x180) == 0) {
      local_238 = (longlong *)0x0;
      plStack_230 = (longlong *)0x0;
      FUN_1404079ea(local_220,*(uint *)(param_1 + 0x1a0) & 0x7fffffff,&local_1f0);
      FUN_1400b22c2(local_268,&DAT_14ac05e18);
      FUN_140233b1a(local_258,local_268);
      FUN_14023409e(&local_248,local_258,1);
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
      FUN_14023423e(local_b8,local_220);
      local_e8 = &local_c8;
      local_e0 = (ulonglong *)local_a8;
      FUN_14010d304(&local_d8);
      local_f8 = local_248;
      local_f0 = local_240;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_240 + 1) = (int)local_240[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_210,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,(ulonglong)local_d0 & 0xffffffff);
      if (local_d8 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != (longlong *)0x0) {
        (**(code **)(*local_b8[0] + 0x10))();
      }
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_240 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)local_240 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_240 + 0x10))(local_240);
          }
        }
      }
      if (local_220[0] != (longlong *)0x0) {
        (**(code **)(*local_220[0] + 0x10))();
      }
      if (local_258[0] != (longlong *)0x0) {
        (**(code **)(*local_258[0] + 0x10))();
      }
      if (local_268[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar6 = plStack_230;
      if (plStack_230 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_230 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_230)(plStack_230);
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
    else {
      FUN_147ecddc8(param_1 + 0x170,&local_c8);
      FUN_140233b1a(&local_210,&local_c8);
      if (local_c8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    local_278 = local_210;
    if (local_210 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_210 + 8))();
    }
    local_270 = local_208;
    local_c8 = L"ScoreConstant";
    plStack_c0._0_4_ = 0xd;
    FUN_1446e940c(local_338,&local_c8);
    local_c8 = L"EnvQueryGenerator";
    plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
    FUN_1446e940c(local_28c,&local_c8);
    FUN_140208bae(local_288,local_28c,local_338,L"constant score");
    FUN_1400b22c2(local_268,"{0} [{1}]");
    FUN_140233b1a(local_258,local_268);
    FUN_14023409e(&local_2a0,local_258,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(local_b8,local_288);
    local_a8[0] = 4;
    FUN_14023423e(local_98,&local_278);
    local_e0 = (ulonglong *)local_88;
    local_e8 = &local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_2a0;
    local_f0 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_238,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,(ulonglong)local_d0 & 0xffffffff);
    if (local_d8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar8 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_c8 + lVar8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_c8 + lVar8) + 0x10))();
        *(undefined8 *)((longlong)&local_c8 + lVar8) = 0;
        *(undefined4 *)((longlong)local_b8 + lVar8 + -8) = 0;
      }
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != -0x10);
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_298 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar2 = (int *)((longlong)local_298 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_298 + 0x10))(local_298);
        }
      }
    }
    if (local_288[0] != (longlong *)0x0) {
      (**(code **)(*local_288[0] + 0x10))();
    }
    if (local_278 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_278 + 0x10))();
    }
    FUN_140008f88(&local_200,&local_238);
    if (local_238 != (longlong *)0x0) {
      (**(code **)(*local_238 + 0x10))();
    }
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    pwVar7 = local_210;
    if (local_268[0] != (longlong *)0x0) {
      FUN_1400020a8();
      pwVar7 = local_210;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_147ecddc8(param_1 + 0x170,&local_238);
      FUN_140233b1a(local_2b0,&local_238);
      local_c8 = L"ScoreFactor";
      plStack_c0._0_4_ = 0xb;
      FUN_1446e940c(local_338,&local_c8);
      local_c8 = L"EnvQueryGenerator";
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
      FUN_1446e940c(local_28c,&local_c8);
      FUN_140208bae(local_2c0,local_28c,local_338,L"score factor");
      FUN_1400b22c2(local_268,"{0}: {1}");
      FUN_140233b1a(local_258,local_268);
      FUN_14023409e(&local_2d0,local_258,1);
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
      FUN_14023423e(local_b8,local_2c0);
      local_a8[0] = 4;
      FUN_14023423e(local_98,local_2b0);
      local_e0 = (ulonglong *)local_88;
      local_e8 = &local_c8;
      FUN_14010d304(&local_d8);
      local_f8 = local_2d0;
      local_f0 = local_2c8;
      if (local_2c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_210,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,(ulonglong)local_d0 & 0xffffffff);
      if (local_d8 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      lVar8 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_c8 + lVar8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_c8 + lVar8) + 0x10))();
          *(undefined8 *)((longlong)&local_c8 + lVar8) = 0;
          *(undefined4 *)((longlong)local_b8 + lVar8 + -8) = 0;
        }
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != -0x10);
      if (local_2c8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_2c8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_2c8)(local_2c8);
          LOCK();
          piVar2 = (int *)((longlong)local_2c8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_2c8 + 0x10))(local_2c8);
          }
        }
      }
      if (local_2c0[0] != (longlong *)0x0) {
        (**(code **)(*local_2c0[0] + 0x10))();
      }
      if (local_2b0[0] != (longlong *)0x0) {
        (**(code **)(*local_2b0[0] + 0x10))();
      }
      FUN_140008f88(&local_200,&local_210);
      if (local_210 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_210 + 0x10))();
      }
      if (local_258[0] != (longlong *)0x0) {
        (**(code **)(*local_258[0] + 0x10))();
      }
      if (local_268[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_238 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147edaf2c;
    }
    if (*(float *)(param_1 + 0x1a0) <= 0.0) {
      local_c8 = L"NotWithSpace";
      plStack_c0._0_4_ = 0xc;
      FUN_1446e940c(&local_d8,&local_c8);
      local_c8 = L"EnvQueryGenerator";
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
      FUN_1446e940c(&local_e8,&local_c8);
      FUN_140208bae(&local_210,&local_e8,&local_d8,L"not ");
    }
    else {
      puVar5 = (undefined8 *)FUN_140e82300();
      local_210 = (wchar_t *)*puVar5;
      if (local_210 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_210 + 8))();
      }
      local_208 = *(undefined4 *)(puVar5 + 1);
    }
    local_c8 = (wchar_t *)0x0;
    plStack_c0 = (longlong *)0x0;
    FUN_1404079ea(&local_238,*(uint *)(param_1 + 0x1a0) & 0x7fffffff,&local_1f0,&local_c8);
    plVar6 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_2e0 = local_238;
    if (local_238 != (longlong *)0x0) {
      (**(code **)(*local_238 + 8))();
    }
    local_2d8 = plStack_230._0_4_;
    FUN_140009b9a(local_2f0,param_3);
    local_300 = local_210;
    if (local_210 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_210 + 8))();
    }
    local_2f8 = local_208;
    local_c8 = L"ScorePrefer";
    plStack_c0._0_4_ = 0xb;
    FUN_1446e940c(local_28c,&local_c8);
    local_c8 = L"EnvQueryGenerator";
    plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,0x11);
    FUN_1446e940c(local_314,&local_c8);
    FUN_140208bae(local_310,local_314,local_28c,L"prefer");
    FUN_1400b22c2(local_338,"{0} {1}{2} [x{3}]");
    FUN_140233b1a(local_268,local_338);
    FUN_14023409e(&local_328,local_268,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(local_b8,local_310);
    local_a8[0] = 4;
    FUN_14023423e(local_98,&local_300);
    local_88[0] = 4;
    FUN_14023423e(local_78,local_2f0);
    local_68[0] = 4;
    FUN_14023423e(local_58,&local_2e0);
    local_e0 = &local_48;
    local_e8 = &local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_328;
    local_f0 = local_320;
    if (local_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_320 + 1) = (int)local_320[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_258,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,(ulonglong)local_d0 & 0xffffffff);
    if (local_d8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar8 = 0x70;
    do {
      if (*(longlong **)((longlong)&local_c8 + lVar8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_c8 + lVar8) + 0x10))();
        *(undefined8 *)((longlong)&local_c8 + lVar8) = 0;
        *(undefined4 *)((longlong)local_b8 + lVar8 + -8) = 0;
      }
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != -0x10);
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_320 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar2 = (int *)((longlong)local_320 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_320 + 0x10))(local_320);
        }
      }
    }
    if (local_310[0] != (longlong *)0x0) {
      (**(code **)(*local_310[0] + 0x10))();
    }
    if (local_300 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_300 + 0x10))();
    }
    if (local_2f0[0] != (longlong *)0x0) {
      (**(code **)(*local_2f0[0] + 0x10))();
    }
    if (local_2e0 != (longlong *)0x0) {
      (**(code **)(*local_2e0 + 0x10))();
    }
    FUN_140008f88(&local_200,local_258);
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    if (local_268[0] != (longlong *)0x0) {
      (**(code **)(*local_268[0] + 0x10))();
    }
    if (local_338[0] != 0) {
      FUN_1400020a8();
    }
    pwVar7 = local_210;
    if (local_238 != (longlong *)0x0) {
      (**(code **)(*local_238 + 0x10))();
      pwVar7 = local_210;
    }
  }
  if (pwVar7 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar7 + 0x10))();
  }
LAB_147edaf2c:
  cVar4 = FUN_144a7c5f6(&local_108);
  if (cVar4 == '\0') {
    local_348 = local_200;
    if (local_200 != (longlong *)0x0) {
      (**(code **)(*local_200 + 8))();
    }
    local_340 = local_1f8;
    local_358 = local_108;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    local_350 = local_100;
    FUN_1400b22c2(&local_238,"{0}, {1}");
    FUN_140233b1a(&local_210,&local_238);
    FUN_14023409e(&local_368,&local_210,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(local_b8,&local_358);
    local_a8[0] = 4;
    FUN_14023423e(local_98,&local_348);
    local_e8 = &local_c8;
    local_e0 = (ulonglong *)local_88;
    FUN_14010d304(&local_d8);
    local_f8 = local_368;
    local_f0 = local_360;
    if (local_360 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_360 + 1) = (int)local_360[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,(ulonglong)local_d0 & 0xffffffff);
    if (local_d8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar8 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_c8 + lVar8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_c8 + lVar8) + 0x10))();
        *(undefined8 *)((longlong)&local_c8 + lVar8) = 0;
        *(undefined4 *)((longlong)local_b8 + lVar8 + -8) = 0;
      }
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != -0x10);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_360 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar2 = (int *)((longlong)local_360 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_360 + 0x10))(local_360);
        }
      }
    }
    if (local_358 != (longlong *)0x0) {
      (**(code **)(*local_358 + 0x10))();
    }
    if (local_348 != (longlong *)0x0) {
      (**(code **)(*local_348 + 0x10))();
    }
    if (local_210 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_210 + 0x10))();
    }
    if (local_238 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_200;
    if (local_200 != (longlong *)0x0) {
      (**(code **)(*local_200 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = local_1f8;
  }
  if (local_200 != (longlong *)0x0) {
    (**(code **)(*local_200 + 0x10))();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147edbd6a FUN_147edbd6a body=270 status=ok
// SIG undefined FUN_147edbd6a(void)

void FUN_147edbd6a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uVar8 = (ulonglong)(int)param_3[1];
  if (0 < (longlong)uVar8) {
    iVar6 = -(int)param_3[1];
    lVar7 = uVar8 << 5;
    do {
      lVar7 = lVar7 + -0x20;
      cVar4 = FUN_147edbe7a(param_1,param_2,*param_3 + lVar7,&local_58);
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar5 = *(uint *)(param_3 + 1);
          if (uVar8 != uVar5) {
            memmove((void *)(*param_3 + lVar7),(void *)(*param_3 + lVar7 + 0x20),
                    (longlong)(int)(uVar5 + iVar6) << 5);
            uVar5 = *(uint *)(param_3 + 1);
          }
          *(uint *)(param_3 + 1) = uVar5 - 1;
        }
      }
      else {
        lVar2 = *param_3;
        *(undefined8 *)(lVar2 + 0x10 + lVar7) = local_48;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        *(undefined8 *)(lVar2 + 0x18 + lVar7) = 0;
      }
      iVar6 = iVar6 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edbe7a FUN_147edbe7a body=197 status=ok
// SIG undefined FUN_147edbe7a(void)

void FUN_147edbe7a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  local_138 = param_1 + 0x14;
  local_148 = *(undefined4 *)(param_1 + 0x18);
  local_140 = param_1 + 4;
  FUN_1400b50cc(*param_1,local_130,param_2,param_3);
  *param_4 = local_120;
  param_4[1] = uStack_11c;
  param_4[2] = uStack_118;
  param_4[3] = uStack_114;
  *(undefined8 *)(param_4 + 4) = local_110;
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edbf40 FUN_147edbf40 body=270 status=ok
// SIG undefined FUN_147edbf40(void)

void FUN_147edbf40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uVar8 = (ulonglong)(int)param_3[1];
  if (0 < (longlong)uVar8) {
    iVar6 = -(int)param_3[1];
    lVar7 = uVar8 << 5;
    do {
      lVar7 = lVar7 + -0x20;
      cVar4 = FUN_147edc050(param_1,param_2,*param_3 + lVar7,&local_58);
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar5 = *(uint *)(param_3 + 1);
          if (uVar8 != uVar5) {
            memmove((void *)(*param_3 + lVar7),(void *)(*param_3 + lVar7 + 0x20),
                    (longlong)(int)(uVar5 + iVar6) << 5);
            uVar5 = *(uint *)(param_3 + 1);
          }
          *(uint *)(param_3 + 1) = uVar5 - 1;
        }
      }
      else {
        lVar2 = *param_3;
        *(undefined8 *)(lVar2 + 0x10 + lVar7) = local_48;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        *(undefined8 *)(lVar2 + 0x18 + lVar7) = 0;
      }
      iVar6 = iVar6 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edc050 FUN_147edc050 body=384 status=ok
// SIG undefined FUN_147edc050(void)

void FUN_147edc050(undefined8 *param_1,double *param_2,double *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined4 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined4 *local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190 [24];
  undefined1 local_178 [32];
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_a4;
  undefined4 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b0 = param_4;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_a4 = 0xffffffff;
  local_14c = (float)(double)param_1[3];
  local_1b8 = *param_1;
  local_150 = (float)(double)param_1[2];
  local_1c0 = param_1 + 0x14;
  local_154 = (float)(double)param_1[1];
  local_158 = 1;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_198 = param_3[2] - param_2[2];
  local_1a0 = param_3[1] - param_2[1];
  local_1a8 = *param_3 - *param_2;
  FUN_144a79a9c(&local_1a8,local_190);
  FUN_144a7484c(local_190,local_178);
  local_1c8 = local_1c0;
  local_1e8 = local_178;
  local_1e0 = uVar1;
  local_1d8 = &local_158;
  local_1d0 = param_1 + 4;
  FUN_14021655c(local_1b8,local_148,param_2,param_3);
  *(undefined8 *)(local_1b0 + 4) = local_128;
  *local_1b0 = local_138;
  local_1b0[1] = uStack_134;
  local_1b0[2] = uStack_130;
  local_1b0[3] = uStack_12c;
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edc1d2 FUN_147edc1d2 body=270 status=ok
// SIG undefined FUN_147edc1d2(void)

void FUN_147edc1d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uVar8 = (ulonglong)(int)param_3[1];
  if (0 < (longlong)uVar8) {
    iVar6 = -(int)param_3[1];
    lVar7 = uVar8 << 5;
    do {
      lVar7 = lVar7 + -0x20;
      cVar4 = FUN_147edc2e2(param_1,param_2,*param_3 + lVar7,&local_58);
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar5 = *(uint *)(param_3 + 1);
          if (uVar8 != uVar5) {
            memmove((void *)(*param_3 + lVar7),(void *)(*param_3 + lVar7 + 0x20),
                    (longlong)(int)(uVar5 + iVar6) << 5);
            uVar5 = *(uint *)(param_3 + 1);
          }
          *(uint *)(param_3 + 1) = uVar5 - 1;
        }
      }
      else {
        lVar2 = *param_3;
        *(undefined8 *)(lVar2 + 0x10 + lVar7) = local_48;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        *(undefined8 *)(lVar2 + 0x18 + lVar7) = 0;
      }
      iVar6 = iVar6 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edc2e2 FUN_147edc2e2 body=239 status=ok
// SIG undefined FUN_147edc2e2(void)

void FUN_147edc2e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined4 local_140;
  float local_13c;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  local_148 = param_1 + 0x14;
  local_150 = param_1 + 4;
  local_13c = (float)(double)param_1[1];
  local_158 = &local_140;
  local_140 = 2;
  local_160 = *(undefined4 *)(param_1 + 0x18);
  local_168 = &DAT_14c8463d0;
  FUN_14021655c(*param_1,local_130,param_2,param_3);
  *(undefined8 *)(param_4 + 4) = local_110;
  *param_4 = local_120;
  param_4[1] = uStack_11c;
  param_4[2] = uStack_118;
  param_4[3] = uStack_114;
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edc3d2 FUN_147edc3d2 body=270 status=ok
// SIG undefined FUN_147edc3d2(void)

void FUN_147edc3d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uVar8 = (ulonglong)(int)param_3[1];
  if (0 < (longlong)uVar8) {
    iVar6 = -(int)param_3[1];
    lVar7 = uVar8 << 5;
    do {
      lVar7 = lVar7 + -0x20;
      cVar4 = FUN_147edc4e2(param_1,param_2,*param_3 + lVar7,&local_58);
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar5 = *(uint *)(param_3 + 1);
          if (uVar8 != uVar5) {
            memmove((void *)(*param_3 + lVar7),(void *)(*param_3 + lVar7 + 0x20),
                    (longlong)(int)(uVar5 + iVar6) << 5);
            uVar5 = *(uint *)(param_3 + 1);
          }
          *(uint *)(param_3 + 1) = uVar5 - 1;
        }
      }
      else {
        lVar2 = *param_3;
        *(undefined8 *)(lVar2 + 0x10 + lVar7) = local_48;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        *(undefined8 *)(lVar2 + 0x18 + lVar7) = 0;
      }
      iVar6 = iVar6 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edc4e2 FUN_147edc4e2 body=251 status=ok
// SIG undefined FUN_147edc4e2(void)

void FUN_147edc4e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined4 local_140;
  float local_13c;
  float local_138;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  local_148 = param_1 + 0x14;
  local_150 = param_1 + 4;
  local_138 = (float)(double)param_1[3];
  local_13c = (float)(double)param_1[1];
  local_158 = &local_140;
  local_140 = 3;
  local_160 = *(undefined4 *)(param_1 + 0x18);
  local_168 = &DAT_14c8463d0;
  FUN_14021655c(*param_1,local_130,param_2,param_3);
  *(undefined8 *)(param_4 + 4) = local_110;
  *param_4 = local_120;
  param_4[1] = uStack_11c;
  param_4[2] = uStack_118;
  param_4[3] = uStack_114;
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edc5de FUN_147edc5de body=340 status=ok
// SIG undefined FUN_147edc5de(void)

void FUN_147edc5de(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  if (0 < (int)param_2[1]) {
    lVar8 = 0x18;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      local_98 = *(undefined8 *)(lVar3 + -8 + lVar8);
      puVar5 = (undefined8 *)(lVar3 + -0x18 + lVar8);
      local_88 = *puVar5;
      uStack_80 = puVar5[1];
      local_a8 = *(undefined8 *)(lVar3 + lVar8);
      uStack_a0 = ((undefined8 *)(lVar3 + lVar8))[1];
      local_78 = local_98;
      cVar4 = FUN_147edbe7a(param_1,&local_88,lVar3 + lVar8,&local_68);
      puVar5 = (undefined8 *)&local_68;
      if ((cVar4 != '\0') || (puVar5 = &local_a8, *(char *)(param_1 + 0xc4) != '\x01')) {
        local_b8 = puVar5[2];
        local_c8 = *(undefined4 *)puVar5;
        uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_c0 = *(undefined4 *)(puVar5 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_147ef0984(param_3,iVar2);
        }
        lVar3 = *param_3;
        lVar7 = (longlong)iVar2 * 0x20;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_b8;
        puVar1 = (undefined4 *)(lVar3 + lVar7);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        *(undefined8 *)(lVar3 + 0x18 + lVar7) = 0;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edc734 FUN_147edc734 body=340 status=ok
// SIG undefined FUN_147edc734(void)

void FUN_147edc734(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  if (0 < (int)param_2[1]) {
    lVar8 = 0x18;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      local_98 = *(undefined8 *)(lVar3 + -8 + lVar8);
      puVar5 = (undefined8 *)(lVar3 + -0x18 + lVar8);
      local_88 = *puVar5;
      uStack_80 = puVar5[1];
      local_a8 = *(undefined8 *)(lVar3 + lVar8);
      uStack_a0 = ((undefined8 *)(lVar3 + lVar8))[1];
      local_78 = local_98;
      cVar4 = FUN_147edc050(param_1,&local_88,lVar3 + lVar8,&local_68);
      puVar5 = (undefined8 *)&local_68;
      if ((cVar4 != '\0') || (puVar5 = &local_a8, *(char *)(param_1 + 0xc4) != '\x01')) {
        local_b8 = puVar5[2];
        local_c8 = *(undefined4 *)puVar5;
        uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_c0 = *(undefined4 *)(puVar5 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_147ef0984(param_3,iVar2);
        }
        lVar3 = *param_3;
        lVar7 = (longlong)iVar2 * 0x20;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_b8;
        puVar1 = (undefined4 *)(lVar3 + lVar7);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        *(undefined8 *)(lVar3 + 0x18 + lVar7) = 0;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edc88a FUN_147edc88a body=340 status=ok
// SIG undefined FUN_147edc88a(void)

void FUN_147edc88a(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  if (0 < (int)param_2[1]) {
    lVar8 = 0x18;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      local_98 = *(undefined8 *)(lVar3 + -8 + lVar8);
      puVar5 = (undefined8 *)(lVar3 + -0x18 + lVar8);
      local_88 = *puVar5;
      uStack_80 = puVar5[1];
      local_a8 = *(undefined8 *)(lVar3 + lVar8);
      uStack_a0 = ((undefined8 *)(lVar3 + lVar8))[1];
      local_78 = local_98;
      cVar4 = FUN_147edc2e2(param_1,&local_88,lVar3 + lVar8,&local_68);
      puVar5 = (undefined8 *)&local_68;
      if ((cVar4 != '\0') || (puVar5 = &local_a8, *(char *)(param_1 + 0xc4) != '\x01')) {
        local_b8 = puVar5[2];
        local_c8 = *(undefined4 *)puVar5;
        uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_c0 = *(undefined4 *)(puVar5 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_147ef0984(param_3,iVar2);
        }
        lVar3 = *param_3;
        lVar7 = (longlong)iVar2 * 0x20;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_b8;
        puVar1 = (undefined4 *)(lVar3 + lVar7);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        *(undefined8 *)(lVar3 + 0x18 + lVar7) = 0;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edc9e0 FUN_147edc9e0 body=340 status=ok
// SIG undefined FUN_147edc9e0(void)

void FUN_147edc9e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  if (0 < (int)param_2[1]) {
    lVar8 = 0x18;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      local_98 = *(undefined8 *)(lVar3 + -8 + lVar8);
      puVar5 = (undefined8 *)(lVar3 + -0x18 + lVar8);
      local_88 = *puVar5;
      uStack_80 = puVar5[1];
      local_a8 = *(undefined8 *)(lVar3 + lVar8);
      uStack_a0 = ((undefined8 *)(lVar3 + lVar8))[1];
      local_78 = local_98;
      cVar4 = FUN_147edc4e2(param_1,&local_88,lVar3 + lVar8,&local_68);
      puVar5 = (undefined8 *)&local_68;
      if ((cVar4 != '\0') || (puVar5 = &local_a8, *(char *)(param_1 + 0xc4) != '\x01')) {
        local_b8 = puVar5[2];
        local_c8 = *(undefined4 *)puVar5;
        uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_c0 = *(undefined4 *)(puVar5 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_147ef0984(param_3,iVar2);
        }
        lVar3 = *param_3;
        lVar7 = (longlong)iVar2 * 0x20;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_b8;
        puVar1 = (undefined4 *)(lVar3 + lVar7);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        *(undefined8 *)(lVar3 + 0x18 + lVar7) = 0;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147edcb36 FUN_147edcb36 body=543 status=ok
// SIG undefined FUN_147edcb36(void)

void FUN_147edcb36(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = DAT_14c8464f0;
  local_a8 = DAT_14c8464e0;
  dStack_a0 = DAT_14c8464e8;
  uVar7 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar7) {
    iVar5 = -(int)param_2[1];
    lVar6 = uVar7 << 5;
    do {
      lVar1 = *param_2;
      local_b0 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_4;
      local_b8 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_c0 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      local_c8 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_3;
      local_d0 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_d8 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      cVar3 = FUN_147edbe7a(param_1,&local_d8,&local_c0,&local_a8);
      if (cVar3 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar4 = *(uint *)(param_2 + 1);
          if (uVar7 != uVar4) {
            memmove((void *)(*param_2 + lVar6 + -0x20),(void *)(*param_2 + lVar6),
                    (longlong)(int)(uVar4 + iVar5) << 5);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
        }
      }
      else {
        lVar1 = *param_2;
        *(double *)(lVar1 + -0x20 + lVar6) = local_a8 + 0.0;
        *(double *)(lVar1 + -0x18 + lVar6) = dStack_a0 + 0.0;
        *(double *)(lVar1 + -0x10 + lVar6) = local_98 + (double)param_5;
        *(undefined8 *)(lVar1 + -8 + lVar6) = 0;
      }
      if ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0xd0)) {
        *(char *)(*(longlong *)(param_1 + 200) + -1 + uVar7) = cVar3;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + -0x20;
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edcd56 FUN_147edcd56 body=543 status=ok
// SIG undefined FUN_147edcd56(void)

void FUN_147edcd56(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = DAT_14c8464f0;
  local_a8 = DAT_14c8464e0;
  dStack_a0 = DAT_14c8464e8;
  uVar7 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar7) {
    iVar5 = -(int)param_2[1];
    lVar6 = uVar7 << 5;
    do {
      lVar1 = *param_2;
      local_b0 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_4;
      local_b8 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_c0 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      local_c8 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_3;
      local_d0 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_d8 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      cVar3 = FUN_147edc050(param_1,&local_d8,&local_c0,&local_a8);
      if (cVar3 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar4 = *(uint *)(param_2 + 1);
          if (uVar7 != uVar4) {
            memmove((void *)(*param_2 + lVar6 + -0x20),(void *)(*param_2 + lVar6),
                    (longlong)(int)(uVar4 + iVar5) << 5);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
        }
      }
      else {
        lVar1 = *param_2;
        *(double *)(lVar1 + -0x20 + lVar6) = local_a8 + 0.0;
        *(double *)(lVar1 + -0x18 + lVar6) = dStack_a0 + 0.0;
        *(double *)(lVar1 + -0x10 + lVar6) = local_98 + (double)param_5;
        *(undefined8 *)(lVar1 + -8 + lVar6) = 0;
      }
      if ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0xd0)) {
        *(char *)(*(longlong *)(param_1 + 200) + -1 + uVar7) = cVar3;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + -0x20;
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edcf76 FUN_147edcf76 body=543 status=ok
// SIG undefined FUN_147edcf76(void)

void FUN_147edcf76(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = DAT_14c8464f0;
  local_a8 = DAT_14c8464e0;
  dStack_a0 = DAT_14c8464e8;
  uVar7 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar7) {
    iVar5 = -(int)param_2[1];
    lVar6 = uVar7 << 5;
    do {
      lVar1 = *param_2;
      local_b0 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_4;
      local_b8 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_c0 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      local_c8 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_3;
      local_d0 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_d8 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      cVar3 = FUN_147edc2e2(param_1,&local_d8,&local_c0,&local_a8);
      if (cVar3 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar4 = *(uint *)(param_2 + 1);
          if (uVar7 != uVar4) {
            memmove((void *)(*param_2 + lVar6 + -0x20),(void *)(*param_2 + lVar6),
                    (longlong)(int)(uVar4 + iVar5) << 5);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
        }
      }
      else {
        lVar1 = *param_2;
        *(double *)(lVar1 + -0x20 + lVar6) = local_a8 + 0.0;
        *(double *)(lVar1 + -0x18 + lVar6) = dStack_a0 + 0.0;
        *(double *)(lVar1 + -0x10 + lVar6) = local_98 + (double)param_5;
        *(undefined8 *)(lVar1 + -8 + lVar6) = 0;
      }
      if ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0xd0)) {
        *(char *)(*(longlong *)(param_1 + 200) + -1 + uVar7) = cVar3;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + -0x20;
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edd196 FUN_147edd196 body=543 status=ok
// SIG undefined FUN_147edd196(void)

void FUN_147edd196(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = DAT_14c8464f0;
  local_a8 = DAT_14c8464e0;
  dStack_a0 = DAT_14c8464e8;
  uVar7 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar7) {
    iVar5 = -(int)param_2[1];
    lVar6 = uVar7 << 5;
    do {
      lVar1 = *param_2;
      local_b0 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_4;
      local_b8 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_c0 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      local_c8 = *(double *)(lVar1 + -0x10 + lVar6) + (double)param_3;
      local_d0 = *(double *)(lVar1 + -0x18 + lVar6) + 0.0;
      local_d8 = *(double *)(lVar1 + -0x20 + lVar6) + 0.0;
      cVar3 = FUN_147edc4e2(param_1,&local_d8,&local_c0,&local_a8);
      if (cVar3 == '\0') {
        if (*(char *)(param_1 + 0xc4) == '\x01') {
          uVar4 = *(uint *)(param_2 + 1);
          if (uVar7 != uVar4) {
            memmove((void *)(*param_2 + lVar6 + -0x20),(void *)(*param_2 + lVar6),
                    (longlong)(int)(uVar4 + iVar5) << 5);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
        }
      }
      else {
        lVar1 = *param_2;
        *(double *)(lVar1 + -0x20 + lVar6) = local_a8 + 0.0;
        *(double *)(lVar1 + -0x18 + lVar6) = dStack_a0 + 0.0;
        *(double *)(lVar1 + -0x10 + lVar6) = local_98 + (double)param_5;
        *(undefined8 *)(lVar1 + -8 + lVar6) = 0;
      }
      if ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0xd0)) {
        *(char *)(*(longlong *)(param_1 + 200) + -1 + uVar7) = cVar3;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + -0x20;
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edd3b6 FUN_147edd3b6 body=166 status=ok
// SIG undefined FUN_147edd3b6(void)

undefined8 *
FUN_147edd3b6(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  uVar5 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)(param_1 + 1) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = *(undefined8 *)(param_5 + 4);
  FUN_144ae1dc6(param_1 + 4,param_4);
  puVar1 = param_1 + 0x14;
  FUN_1449b671c(puVar1);
  FUN_1449b6736(puVar1,2);
  *(undefined1 *)((longlong)param_1 + 0xc4) = param_6;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(char *)(param_3 + 0x35) == '\x03') {
    FUN_1479b02fa(*(undefined8 *)(param_3 + 0x2c),param_1 + 0x18,puVar1);
  }
  else {
    uVar2 = *(undefined1 *)(param_3 + 0x28);
    uVar6 = FUN_144a9f2d6();
    uVar5 = FUN_1434274ae(uVar6,1,uVar2);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
  }
  return param_1;
}



// FUNCTION 147edd45c FUN_147edd45c body=68 status=ok
// SIG undefined FUN_147edd45c(void)

void FUN_147edd45c(longlong param_1)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147edd4a0 FUN_147edd4a0 body=568 status=ok
// SIG undefined FUN_147edd4a0(void)

void FUN_147edd4a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = *(longlong *)(param_3 + 8);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147e6f964(&local_a8,param_1,param_2,&local_b0);
  local_c8 = 0;
  uStack_c0 = 0;
  iVar4 = (int)param_5[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_147ef0a0a(&local_c8);
    if ((longlong)(int)param_5[1] != 0) {
      lVar14 = *param_5;
      lVar19 = (longlong)(int)param_5[1] << 5;
      lVar15 = 0;
      local_e0 = lVar19;
      do {
        uVar10 = uStack_c0;
        local_98[2] = param_4[2];
        local_98[0] = *param_4;
        local_98[1] = param_4[1];
        local_70 = *(undefined8 *)(lVar14 + 0x10 + lVar15);
        local_98[3] = *(undefined8 *)(lVar14 + lVar15);
        uStack_78 = ((undefined8 *)(lVar14 + lVar15))[1];
        local_58 = *(undefined8 *)(lVar14 + 0x10 + lVar15);
        puVar12 = (undefined4 *)(lVar14 + lVar15);
        local_68 = *puVar12;
        uStack_64 = puVar12[1];
        uStack_60 = puVar12[2];
        uStack_5c = puVar12[3];
        lVar16 = (longlong)(int)uStack_c0;
        uVar11 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar11);
        if (uStack_c0._4_4_ < uVar11) {
          FUN_147ef0a6e(&local_c8,uVar10 & 0xffffffff);
          lVar19 = local_e0;
        }
        lVar16 = lVar16 * 0x58;
        puVar17 = local_98;
        puVar18 = (undefined8 *)(local_c8 + lVar16);
        for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        *(undefined8 *)(local_c8 + 0x48 + lVar16) = 0;
        *(undefined2 *)(local_c8 + 0x50 + lVar16) = 0;
        lVar15 = lVar15 + 0x20;
      } while (lVar19 != lVar15);
    }
  }
  local_d8 = local_a8;
  local_d0 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x730))(param_1,&local_c8,&local_d8,0);
  if (0 < (int)param_5[1]) {
    puVar12 = (undefined4 *)(local_c8 + 0x30);
    lVar14 = 0;
    lVar19 = 0;
    do {
      lVar15 = *param_5;
      uVar5 = *puVar12;
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      uVar9 = *(undefined8 *)(puVar12 + 6);
      puVar17 = (undefined8 *)(lVar15 + 0x10 + lVar14);
      *puVar17 = *(undefined8 *)(puVar12 + 4);
      puVar17[1] = uVar9;
      puVar3 = (undefined4 *)(lVar15 + lVar14);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      lVar19 = lVar19 + 1;
      lVar14 = lVar14 + 0x20;
      puVar12 = puVar12 + 0x16;
    } while (lVar19 < (int)param_5[1]);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147edd6da FUN_147edd6da body=1331 status=ok
// SIG undefined FUN_147edd6da(void)

void FUN_147edd6da(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_c8 = *(longlong *)(param_3 + 8);
  if ((local_c8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147e6f964(&local_c0,param_1,param_2,&local_c8);
  local_d8 = 0;
  uStack_d0 = 0;
  iVar11 = (int)param_4[1];
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar11 != 0) {
    FUN_147ef0c62(&local_d8);
  }
  fVar6 = *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_3 + 0x14);
  if ((fVar6 != fVar7) || (NAN(fVar6) || NAN(fVar7))) {
    lVar21 = param_4[1];
    if ((longlong)(int)lVar21 != 0) {
      lVar22 = *param_4;
      lVar25 = 0;
      do {
        uVar23 = uStack_d0;
        dVar8 = *(double *)(lVar22 + 0x10 + lVar25);
        dVar9 = *(double *)(lVar22 + 8 + lVar25);
        dVar10 = *(double *)(lVar22 + lVar25);
        local_e8 = (double)DAT_14c8464f0;
        local_f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        lVar26 = (longlong)(int)uStack_d0;
        uVar20 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar20);
        if (uStack_d0._4_4_ < uVar20) {
          FUN_147ef0cc6(&local_d8,uVar23 & 0xffffffff);
        }
        lVar26 = lVar26 * 0x78;
        *(double *)(local_d8 + lVar26) = dVar10 + 0.0;
        *(double *)(local_d8 + 8 + lVar26) = dVar9 + 0.0;
        *(double *)(local_d8 + 0x10 + lVar26) = dVar8 + (double)((fVar7 - fVar6) * 0.5);
        puVar5 = (undefined8 *)(local_d8 + 0x18 + lVar26);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)(local_d8 + 0x28 + lVar26);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)(local_d8 + 0x38 + lVar26);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined1 *)(local_d8 + 0x48 + lVar26) = 0;
        puVar5 = (undefined8 *)(local_d8 + 0x50 + lVar26);
        *puVar5 = local_f8;
        puVar5[1] = uStack_f0;
        *(double *)(local_d8 + 0x60 + lVar26) = local_e8;
        *(undefined8 *)(local_d8 + 0x68 + lVar26) = 0;
        *(undefined4 *)(local_d8 + 0x70 + lVar26) = 4;
        lVar25 = lVar25 + 0x20;
      } while ((longlong)(int)lVar21 * 0x20 != lVar25);
    }
  }
  else {
    lVar21 = param_4[1];
    if ((longlong)(int)lVar21 != 0) {
      lVar22 = *param_4;
      lVar25 = 0;
      do {
        uVar23 = uStack_d0;
        puVar5 = (undefined8 *)(lVar22 + lVar25);
        local_f8 = (double)*puVar5;
        uStack_f0 = (double)puVar5[1];
        local_e8 = *(double *)(lVar22 + 0x10 + lVar25);
        local_118 = (undefined4)DAT_14c8464e0;
        uStack_114 = DAT_14c8464e0._4_4_;
        uStack_110 = (undefined4)DAT_14c8464e8;
        uStack_10c = DAT_14c8464e8._4_4_;
        local_108 = DAT_14c8464f0;
        lVar26 = (longlong)(int)uStack_d0;
        uVar20 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar20);
        if (uStack_d0._4_4_ < uVar20) {
          FUN_147ef0cc6(&local_d8,uVar23 & 0xffffffff);
        }
        lVar26 = lVar26 * 0x78;
        *(double *)(local_d8 + 0x10 + lVar26) = local_e8;
        *(undefined8 *)(local_d8 + lVar26) = local_f8;
        ((undefined8 *)(local_d8 + lVar26))[1] = uStack_f0;
        puVar5 = (undefined8 *)(local_d8 + 0x18 + lVar26);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)(local_d8 + 0x28 + lVar26);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)(local_d8 + 0x38 + lVar26);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined1 *)(local_d8 + 0x48 + lVar26) = 0;
        puVar5 = (undefined8 *)(local_d8 + 0x50 + lVar26);
        *puVar5 = CONCAT44(uStack_114,local_118);
        puVar5[1] = CONCAT44(uStack_10c,uStack_110);
        *(undefined8 *)(local_d8 + 0x60 + lVar26) = local_108;
        *(undefined8 *)(local_d8 + 0x68 + lVar26) = 0;
        *(undefined4 *)(local_d8 + 0x70 + lVar26) = 4;
        lVar25 = lVar25 + 0x20;
      } while ((longlong)(int)lVar21 * 0x20 != lVar25);
    }
  }
  local_e8 = (double)((*(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x14)) * 0.5);
  local_f8 = (double)*(float *)(param_3 + 0x18);
  local_128 = local_c0;
  local_120 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  local_138 = 0;
  uStack_f0 = local_f8;
  (**(code **)(*param_1 + 0x768))(param_1,&local_d8,&local_f8,&local_128);
  lVar21 = (longlong)(int)uStack_d0;
  if (0 < lVar21) {
    uVar23 = lVar21 + 1;
    lVar22 = lVar21 << 5;
    lVar21 = lVar21 * 0x78 + -8;
    do {
      if ((*(byte *)(local_d8 + lVar21) & 2) != 0) {
        lVar25 = *param_4;
        puVar5 = (undefined8 *)(local_d8 + -0x20 + lVar21);
        uVar17 = *puVar5;
        uVar18 = puVar5[1];
        puVar5 = (undefined8 *)(local_d8 + -0x10 + lVar21);
        uVar19 = puVar5[1];
        puVar4 = (undefined8 *)(lVar25 + -0x10 + lVar22);
        *puVar4 = *puVar5;
        puVar4[1] = uVar19;
        puVar5 = (undefined8 *)(lVar25 + -0x20 + lVar22);
        *puVar5 = uVar17;
        puVar5[1] = uVar18;
        *(double *)(*param_4 + -0x10 + lVar22) =
             (double)*(float *)(param_3 + 0x24) + *(double *)(*param_4 + -0x10 + lVar22);
      }
      uVar23 = uVar23 - 1;
      lVar22 = lVar22 + -0x20;
      lVar21 = lVar21 + -0x78;
    } while (1 < uVar23);
  }
  puVar12 = (undefined4 *)*param_4;
  lVar21 = (longlong)(int)param_4[1];
  puVar24 = puVar12;
  if (lVar21 == 0) {
LAB_147edd9a8:
    uVar23 = (longlong)puVar24 - (longlong)puVar12;
LAB_147edd9ab:
    FUN_147eddc10(param_4,uVar23 >> 5);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar24 = puVar12 + lVar21 * 8;
  lVar22 = 0;
  lVar25 = 0;
LAB_147edda80:
  if ((*(byte *)(local_d8 + 0x70 + (lVar25 >> 0x20) * 0x78) & 2) != 0) goto code_r0x000147edda93;
  if (lVar21 * -0x20 + 0x20 != lVar22) {
    lVar26 = 0x20 - lVar22;
    puVar24 = (undefined4 *)((longlong)puVar12 - lVar22);
    do {
      lVar25 = lVar25 + 0x100000000;
      if ((*(byte *)(local_d8 + 0x70 + (lVar25 >> 0x20) * 0x78) & 2) != 0) {
        puVar3 = (undefined4 *)((longlong)puVar12 + lVar26);
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        uVar15 = puVar3[2];
        uVar16 = puVar3[3];
        uVar17 = *(undefined8 *)(puVar3 + 6);
        *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(puVar24 + 6) = uVar17;
        *puVar24 = uVar13;
        puVar24[1] = uVar14;
        puVar24[2] = uVar15;
        puVar24[3] = uVar16;
        puVar24 = puVar24 + 8;
      }
      lVar26 = lVar26 + 0x20;
    } while (lVar21 * 0x20 != lVar26);
    goto LAB_147edd9a8;
  }
  uVar23 = -lVar22;
  goto LAB_147edd9ab;
code_r0x000147edda93:
  lVar25 = lVar25 + 0x100000000;
  lVar22 = lVar22 + -0x20;
  if (-lVar22 == lVar21 * 0x20) goto LAB_147edd9a8;
  goto LAB_147edda80;
}



// FUNCTION 147eddc10 FUN_147eddc10 body=94 status=ok
// SIG undefined FUN_147eddc10(void)

void FUN_147eddc10(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147ef0984(param_1,iVar1);
    }
    FUN_147ef0d56((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147eddc70 FUN_147eddc70 body=274 status=ok
// SIG undefined FUN_147eddc70(void)

undefined8 FUN_147eddc70(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((((int)param_2 < 0) || ((int)param_1[1] <= (int)param_2)) || (lVar4 = param_1[2], lVar4 == 0))
  {
    return 0;
  }
  lVar1 = FUN_1412474be();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return 0;
  }
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    return 0;
  }
  lVar1 = FUN_1412474be();
  if (((lVar1 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[2];
  }
  lVar1 = FUN_1459eb736();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30) {
    lVar4 = param_1[2];
    if (((lVar4 == 0) || (lVar1 = FUN_1412474be(), lVar1 == 0)) ||
       ((*(int *)(lVar4 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1[2];
    }
    plVar3 = *(longlong **)(lVar4 + 0x110);
    if (plVar3 == (longlong *)0x0) {
      FUN_140aa6c08(lVar4);
      plVar3 = *(longlong **)(lVar4 + 0x110);
    }
                    /* WARNING: Could not recover jumptable at 0x000147eddd79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x2c8))
                      (plVar3,((longlong)
                               ((ulonglong)*(uint *)(*param_1 + 4 + (ulonglong)param_2 * 8) << 0x21)
                              >> 0x21) + param_1[3]);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147eddd82 FUN_147eddd82 body=310 status=ok
// SIG undefined FUN_147eddd82(void)

undefined8 * FUN_147eddd82(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((((-1 < (int)param_3) && ((int)param_3 < (int)param_1[1])) && (lVar4 = param_1[2], lVar4 != 0)
      ) && (((lVar2 = FUN_1412474be(), lVar2 != 0 &&
             (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
            ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30 && (lVar4 = param_1[2], lVar4 != 0)))))) {
    lVar2 = FUN_1412474be();
    if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1[2];
    }
    lVar2 = FUN_145869c20();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar4 = param_1[2];
      if (((lVar4 == 0) || (lVar2 = FUN_1412474be(), lVar2 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_1[2];
      }
      plVar3 = *(longlong **)(lVar4 + 0x110);
      if (plVar3 == (longlong *)0x0) {
        FUN_140aa6c08(lVar4);
        plVar3 = *(longlong **)(lVar4 + 0x110);
      }
      (**(code **)(*plVar3 + 0x2b8))
                (plVar3,param_2,
                 ((longlong)((ulonglong)*(uint *)(*param_1 + 4 + (ulonglong)param_3 * 8) << 0x21) >>
                 0x21) + param_1[3]);
      return param_2;
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 147eddeb8 FUN_147eddeb8 body=388 status=ok
// SIG undefined FUN_147eddeb8(void)

void FUN_147eddeb8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = param_1[2];
  if ((((lVar5 != 0) && (lVar2 = FUN_1412474be(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar5 = param_1[2], lVar5 != 0)))) {
    lVar2 = FUN_1412474be();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1[2];
    }
    lVar2 = FUN_1459eb736();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (0 < (int)param_1[1])) {
      lVar5 = param_1[2];
      if (((lVar5 == 0) || (lVar2 = FUN_1412474be(), lVar2 == 0)) ||
         ((*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[2];
      }
      plVar6 = *(longlong **)(lVar5 + 0x110);
      if (plVar6 == (longlong *)0x0) {
        FUN_140aa6c08(lVar5);
        plVar6 = *(longlong **)(lVar5 + 0x110);
      }
      iVar1 = (int)param_1[1];
      iVar4 = (int)param_2[1] + iVar1;
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        FUN_140c5c1ec(param_2);
        iVar1 = (int)param_1[1];
      }
      if (iVar1 != 0) {
        lVar5 = *param_1;
        lVar2 = 0;
        do {
          uVar3 = (**(code **)(*plVar6 + 0x2c8))
                            (plVar6,((longlong)((ulonglong)*(uint *)(lVar5 + 4 + lVar2) << 0x21) >>
                                    0x21) + param_1[3]);
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1447d05f2(param_2,iVar4);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar3;
          lVar2 = lVar2 + 8;
        } while ((longlong)iVar1 * 8 != lVar2);
      }
    }
  }
  return;
}



// FUNCTION 147ede03e FUN_147ede03e body=453 status=ok
// SIG undefined FUN_147ede03e(void)

void FUN_147ede03e(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_1[2];
  if ((((lVar6 != 0) && (lVar4 = FUN_1412474be(), lVar4 != 0)) &&
      (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30 && (lVar6 = param_1[2], lVar6 != 0)))) {
    lVar4 = FUN_1412474be();
    if ((lVar4 == 0) ||
       ((*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)))) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1[2];
    }
    lVar4 = FUN_145869c20();
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (0 < (int)param_1[1])) {
      lVar6 = param_1[2];
      if (((lVar6 == 0) || (lVar4 = FUN_1412474be(), lVar4 == 0)) ||
         ((*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
           lVar4 + 0x30)))) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_1[2];
      }
      plVar7 = *(longlong **)(lVar6 + 0x110);
      if (plVar7 == (longlong *)0x0) {
        FUN_140aa6c08(lVar6);
        plVar7 = *(longlong **)(lVar6 + 0x110);
      }
      iVar3 = (int)param_1[1];
      iVar5 = (int)param_2[1] + iVar3;
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        FUN_1447a8aa0(param_2);
        iVar3 = (int)param_1[1];
      }
      if (iVar3 != 0) {
        lVar6 = *param_1;
        lVar4 = 0;
        do {
          (**(code **)(*plVar7 + 0x2b8))
                    (plVar7,&local_60,
                     ((longlong)((ulonglong)*(uint *)(lVar6 + 4 + lVar4) << 0x21) >> 0x21) +
                     param_1[3]);
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_1403e3958(param_2,iVar5);
          }
          lVar2 = *param_2;
          *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18) = local_50;
          puVar1 = (undefined4 *)(lVar2 + (longlong)iVar5 * 0x18);
          *puVar1 = local_60;
          puVar1[1] = uStack_5c;
          puVar1[2] = uStack_58;
          puVar1[3] = uStack_54;
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar3 * 8 != lVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ede206 FUN_147ede206 body=80 status=ok
// SIG undefined FUN_147ede206(void)

undefined8 FUN_147ede206(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1411b2cec();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147ede243;
    }
  }
  lVar2 = 0;
LAB_147ede243:
  FUN_147ed8d26(param_1,lVar2);
  return param_1;
}



// FUNCTION 147ede256 FUN_147ede256 body=982 status=ok
// SIG undefined FUN_147ede256(void)

undefined8 FUN_147ede256(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_80 [2];
  longlong local_70;
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((char)param_1[3] == '\0') {
    local_58 = 0;
    uStack_50 = 0;
    local_70 = *param_1;
    if ((local_70 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(local_68,&local_70);
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
    FUN_14023423e(&local_38,local_68);
    FUN_140056680(local_80,L"LineFrom");
    FUN_140233eec(&local_58,local_80,&local_48);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
      local_38 = (longlong *)0x0;
      local_30 = 0;
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_88 = param_1[1];
    if ((local_88 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(local_68,&local_88);
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
    FUN_14023423e(&local_38,local_68);
    FUN_140056680(local_80,L"LineTo");
    FUN_140233eec(&local_58,local_80,&local_48);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
      local_38 = (longlong *)0x0;
      local_30 = 0;
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_48 = L"DescribeLineFromAndTo";
    local_40 = 0x15;
    FUN_1446e940c(local_68,&local_48);
    local_48 = L"EnvQueryGenerator";
    local_40 = 0x11;
    FUN_1446e940c(local_80,&local_48);
    FUN_140208bae(&local_48,local_80,local_68,L"[From: {LineFrom} To: {LineTo}]");
    puVar1 = local_98;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_a0 = param_1[2];
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(local_68,&local_a0);
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
    FUN_14023423e(&local_38,local_68);
    FUN_140056680(local_80,L"Rotation");
    FUN_140233eec(&local_58,local_80,&local_48);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
      local_38 = (longlong *)0x0;
      local_30 = 0;
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_48 = L"DescribeRotation";
    local_40 = 0x10;
    FUN_1446e940c(local_68,&local_48);
    local_48 = L"EnvQueryGenerator";
    local_40 = 0x11;
    FUN_1446e940c(local_80,&local_48);
    FUN_140208bae(&local_48,local_80,local_68,L"[{Rotation} rotation]");
    puVar1 = local_b0;
  }
  FUN_14023409e(puVar1,&local_48,1);
  FUN_140233c04(param_2,puVar1,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ede66a FUN_147ede66a body=6460 status=ok
// SIG undefined FUN_147ede66a(void)

longlong * FUN_147ede66a(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  float *pfVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  longlong local_158 [2];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [16];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  longlong local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  ulonglong uStack_90;
  longlong *local_88;
  ulonglong uStack_80;
  undefined4 local_74;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144a5dc74(param_2);
  bVar4 = *(byte *)(param_1 + 0x35);
  if (bVar4 - 2 < 2) {
    FUN_141366fce(&local_88);
    local_74 = 2;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    FUN_1404079ea(&local_a8,*(undefined4 *)(param_1 + 0x18),&local_88);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,&local_a8);
    FUN_140056680(&local_c8,L"ExtentX");
    FUN_140233eec(&local_98,&local_c8,&local_68);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    plVar11 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    FUN_1404079ea(&local_a8,*(undefined4 *)(param_1 + 0x1c),&local_88);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,&local_a8);
    FUN_140056680(&local_c8,L"ExtentY");
    FUN_140233eec(&local_98,&local_c8,&local_68);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    plVar11 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    FUN_1404079ea(&local_a8,*(undefined4 *)(param_1 + 0x20),&local_88);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,&local_a8);
    FUN_140056680(&local_c8,L"ExtentZ");
    FUN_140233eec(&local_98,&local_c8,&local_68);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    plVar11 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    switch(*(undefined1 *)(param_1 + 0x34)) {
    case 0:
      local_68 = L"Line";
      local_60 = 4;
      FUN_1446e940c(&local_a8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(&local_b8,&local_68);
      pwVar13 = L"line";
      break;
    case 1:
      local_68 = L"BoxWithExtents";
      local_60 = 0xe;
      FUN_1446e940c(local_104,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(local_108,&local_68);
      FUN_140208bae(&local_a8,local_108,local_104,L"box (extent: {ExtentX} {ExtentY} {ExtentZ)");
      bVar5 = true;
      FUN_14023409e(local_100,&local_a8,1);
      FUN_140233c04(&local_68,local_100,&local_98);
      bVar7 = false;
      bVar6 = false;
      goto LAB_147edf689;
    case 2:
      local_68 = L"SphereWithRadius";
      local_60 = 0x10;
      FUN_1446e940c(&local_c8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(local_158,&local_68);
      FUN_140208bae(&local_a8,local_158,&local_c8,L"sphere (radius: {ExtentX})");
      bVar7 = true;
      FUN_14023409e(auStack_d8,&local_a8,1);
      FUN_140233c04(&local_68,auStack_d8,&local_98);
      goto LAB_147edf683;
    case 3:
      local_68 = L"CasuleWithRadiusHalfHeight";
      local_60 = 0x1a;
      FUN_1446e940c(local_ec,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(local_f0,&local_68);
      FUN_140208bae(&local_a8,local_f0,local_ec,
                    L"capsule (radius: {ExtentX}, half height: {ExtentZ})");
      bVar6 = true;
      FUN_14023409e(auStack_e8,&local_a8,1);
      FUN_140233c04(&local_68,auStack_e8,&local_98);
      bVar7 = false;
      goto LAB_147edf686;
    default:
      local_68 = L"Unknown";
      local_60 = 7;
      FUN_1446e940c(&local_a8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(&local_b8,&local_68);
      pwVar13 = L"unknown";
    }
    FUN_140208bae(&local_68,&local_b8,&local_a8,pwVar13);
    bVar7 = false;
LAB_147edf683:
    bVar6 = false;
LAB_147edf686:
    bVar5 = false;
LAB_147edf689:
    FUN_140008f88(param_2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    if ((bVar5) && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
    }
    if ((bVar6) && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
    }
    if ((bVar7) && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
    }
    FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (param_3 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb1fdb0) && (FUN_144b3d300(&DAT_14cb1fdb0), DAT_14cb1fdb0 == -1))
      {
        DAT_14cb1fda8 = FUN_147867804();
        _Init_thread_footer(&DAT_14cb1fdb0);
      }
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*param_2;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)param_2[1];
      FUN_140056680(&local_b8,L"ExtentDescription");
      FUN_140233eec(&local_98,&local_b8,&local_68);
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      if ((*(byte *)(param_1 + 0x38) & 0x20) == 0) {
        local_68 = L"Trace";
        local_60 = 5;
        FUN_1446e940c(local_158,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(local_ec,&local_68);
        pwVar13 = L"trace";
      }
      else {
        local_68 = L"Projection";
        local_60 = 10;
        FUN_1446e940c(local_158,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(local_ec,&local_68);
        pwVar13 = L"projection";
      }
      FUN_140208bae(&local_b8,local_ec,local_158,pwVar13);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,&local_b8);
      FUN_140056680(&local_c8,L"ProjectionTraceDesc");
      FUN_140233eec(&local_98,&local_c8,&local_68);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      FUN_1406f1d90(DAT_14cb1fda8,&local_b8,*(undefined1 *)(param_1 + 0x28));
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,&local_b8);
      FUN_140056680(&local_c8,L"Channel");
      FUN_140233eec(&local_98,&local_c8,&local_68);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      local_68 = L"GeometryBriefDescription";
      local_60 = 0x18;
      FUN_1446e940c(&local_c8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(local_158,&local_68);
      FUN_140208bae(&local_b8,local_158,&local_c8,
                    L"{ExtentDescription} {ProjectionTraceDesc} on {Channel}");
      puVar12 = local_118;
LAB_147edfc30:
      FUN_14023409e(puVar12,&local_b8,1);
      FUN_140233c04(&local_68,puVar12,&local_98);
      FUN_140008f88(param_2,&local_68);
      if (local_68 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_68 + 0x10))();
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    else {
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*param_2;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)param_2[1];
      FUN_140056680(&local_b8,L"Description");
      FUN_140233eec(&local_98,&local_b8,&local_68);
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      uVar8 = *(uint *)(param_1 + 0x38);
      if ((uVar8 & 1) != 0) {
        local_68 = L"DescWithComplexCollision";
        local_60 = 0x18;
        FUN_1446e940c(&local_c8,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(local_158,&local_68);
        FUN_140208bae(&local_b8,local_158,&local_c8,L"{Description}, complex collision");
        FUN_14023409e(local_128,&local_b8,1);
        FUN_140233c04(&local_68,local_128,&local_98);
        FUN_140008f88(param_2,&local_68);
        if (local_68 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_68 + 0x10))();
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))();
        }
        uVar8 = *(uint *)(param_1 + 0x38);
      }
      if ((uVar8 & 2) == 0) {
        local_68 = L"DescWithNonBlocking";
        local_60 = 0x13;
        FUN_1446e940c(&local_c8,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(local_158,&local_68);
        FUN_140208bae(&local_b8,local_158,&local_c8,L"{Description}, accept non blocking");
        puVar12 = local_138;
        goto LAB_147edfc30;
      }
    }
LAB_147edfc85:
    FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
    plVar11 = local_98;
  }
  else {
    if (bVar4 != 1) {
      if (bVar4 == 4) {
        local_68 = L"NavigationOverLedges";
        local_60 = 0x14;
        FUN_1446e940c(&local_88,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(&local_98,&local_68);
        FUN_140208bae(&local_68,&local_98,&local_88,L"Navmesh trace going over navmesh ledges");
        FUN_140008f88(param_2,&local_68);
        if (local_68 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_68 + 0x10))();
        }
      }
      goto LAB_147edfcab;
    }
    local_68 = L"Navmesh";
    local_60 = 7;
    FUN_1446e940c(&local_88,&local_68);
    local_68 = L"EnvQueryGenerator";
    local_60 = 0x11;
    FUN_1446e940c(&local_98,&local_68);
    FUN_140208bae(&local_68,&local_98,&local_88,L"navmesh");
    FUN_140008f88(param_2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    if ((*(byte *)(param_1 + 0x38) & 0x20) != 0) {
      FUN_141366fce(&local_88);
      local_74 = 0;
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*param_2;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)param_2[1];
      FUN_140056680(&local_a8,L"Description");
      FUN_140233eec(&local_98,&local_a8,&local_68);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      fVar14 = *(float *)(param_1 + 0x10);
      pfVar2 = (float *)(param_1 + 0x14);
      if ((fVar14 != *pfVar2) || (NAN(fVar14) || NAN(*pfVar2))) {
        if (fVar14 < *pfVar2 || fVar14 == *pfVar2) {
          local_68 = L"Up";
          local_60 = 2;
          FUN_1446e940c(&local_c8,&local_68);
          local_68 = L"EnvQueryGenerator";
          local_60 = 0x11;
          FUN_1446e940c(local_158,&local_68);
          pwVar13 = L"up";
        }
        else {
          local_68 = L"Down";
          local_60 = 4;
          FUN_1446e940c(&local_c8,&local_68);
          local_68 = L"EnvQueryGenerator";
          local_60 = 0x11;
          FUN_1446e940c(local_158,&local_68);
          pwVar13 = L"down";
        }
      }
      else {
        local_68 = L"Height";
        local_60 = 6;
        FUN_1446e940c(&local_c8,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(local_158,&local_68);
        pwVar13 = L"height";
      }
      FUN_140208bae(&local_a8,local_158,&local_c8,pwVar13);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,&local_a8);
      FUN_140056680(&local_b8,L"Direction");
      FUN_140233eec(&local_98,&local_b8,&local_68);
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      local_b8 = (longlong *)0x0;
      plStack_b0 = (longlong *)0x0;
      fVar14 = *(float *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x14)) {
        fVar14 = *(float *)(param_1 + 0x14);
      }
      FUN_1404079ea(&local_a8,fVar14,&local_88);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,&local_a8);
      FUN_140056680(&local_c8,L"ProjectionAmount");
      FUN_140233eec(&local_98,&local_c8,&local_68);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      plVar11 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      local_68 = L"DescriptionWithProjection";
      local_60 = 0x19;
      FUN_1446e940c(&local_b8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(&local_c8,&local_68);
      FUN_140208bae(&local_a8,&local_c8,&local_b8,L"projection ({Direction}: {ProjectionAmount}");
      FUN_14023409e(local_148,&local_a8,1);
      FUN_140233c04(&local_68,local_148,&local_98);
      FUN_140008f88(param_2,&local_68);
      if (local_68 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_68 + 0x10))();
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      if (1.0 < *(float *)(param_1 + 0x18)) {
        local_74 = 2;
        local_a8 = (longlong *)0x0;
        uStack_a0 = 0;
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        local_58 = (longlong *)*param_2;
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        local_50 = (undefined4)param_2[1];
        FUN_140056680(&local_b8,L"Description");
        FUN_140233eec(&local_a8,&local_b8,&local_68);
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        FUN_1404079ea(&local_b8,*(undefined4 *)(param_1 + 0x18),&local_88);
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        FUN_14023423e(&local_58,&local_b8);
        FUN_140056680(local_158,L"Radius");
        FUN_140233eec(&local_a8,local_158,&local_68);
        if (local_158[0] != 0) {
          FUN_1400020a8();
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
          local_58 = (longlong *)0x0;
          local_50 = 0;
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))();
        }
        plVar11 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        local_68 = L"DescriptionWithRadius";
        local_60 = 0x15;
        FUN_1446e940c(&local_c8,&local_68);
        local_68 = L"EnvQueryGenerator";
        local_60 = 0x11;
        FUN_1446e940c(local_158,&local_68);
        FUN_140208bae(&local_b8,local_158,&local_c8,L"{Description}, radius {Radius}");
        FUN_14023409e(local_168,&local_b8,1);
        FUN_140233c04(&local_68,local_168,&local_a8);
        FUN_140008f88(param_2,&local_68);
        if (local_68 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_68 + 0x10))();
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))();
        }
        FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*param_2;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)param_2[1];
      FUN_140056680(&local_b8,L"Description");
      FUN_140233eec(&local_a8,&local_b8,&local_68);
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      local_68 = L"DescriptionWithEnding";
      local_60 = 0x15;
      FUN_1446e940c(&local_c8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(local_158,&local_68);
      FUN_140208bae(&local_b8,local_158,&local_c8,L"{Description})");
      FUN_14023409e(local_178,&local_b8,1);
      FUN_140233c04(&local_68,local_178,&local_a8);
      FUN_140008f88(param_2,&local_68);
      if (local_68 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_68 + 0x10))();
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147edfc85;
    }
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = (longlong *)*param_2;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    local_50 = (undefined4)param_2[1];
    FUN_140056680(&local_98,L"Description");
    FUN_140233eec(&local_88,&local_98,&local_68);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    local_68 = L"DescriptionWithTrace";
    local_60 = 0x14;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = L"EnvQueryGenerator";
    local_60 = 0x11;
    FUN_1446e940c(&local_b8,&local_68);
    FUN_140208bae(&local_98,&local_b8,&local_a8,L"{Description} trace");
    FUN_14023409e(local_188,&local_98,1);
    FUN_140233c04(&local_68,local_188,&local_88);
    FUN_140008f88(param_2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    lVar10 = *(longlong *)(param_1 + 8);
    if ((((lVar10 != 0) && (lVar9 = FUN_14118cf76(), lVar9 != 0)) &&
        (*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30 && (*(longlong *)(param_1 + 8) != 0)))) {
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      local_58 = (longlong *)*param_2;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)param_2[1];
      FUN_140056680(&local_a8,L"Description");
      FUN_140233eec(&local_98,&local_a8,&local_68);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      lVar10 = *(longlong *)(param_1 + 8);
      if (((lVar10 == 0) || (lVar9 = FUN_14118cf76(), lVar9 == 0)) ||
         ((*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
           lVar9 + 0x30)))) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 8);
      }
      local_68 = *(wchar_t **)(lVar10 + 0x18);
      FUN_1400021e4(&local_68,&local_b8);
      FUN_140233b1a(&local_a8,&local_b8);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,&local_a8);
      FUN_140056680(&local_c8,L"NavigationFilter");
      FUN_140233eec(&local_98,&local_c8,&local_68);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_68 = L"DescriptionWithNavigationFilter";
      local_60 = 0x1f;
      FUN_1446e940c(&local_b8,&local_68);
      local_68 = L"EnvQueryGenerator";
      local_60 = 0x11;
      FUN_1446e940c(&local_c8,&local_68);
      FUN_140208bae(&local_a8,&local_c8,&local_b8,L"{Description} (filter: {NavigationFilter})");
      FUN_14023409e(local_198,&local_a8,1);
      FUN_140233c04(&local_68,local_198,&local_98);
      FUN_140008f88(param_2,&local_68);
      if (local_68 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_68 + 0x10))();
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14010f8af(local_88,uStack_80 & 0xffffffff);
    plVar11 = local_88;
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147edfcab:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ee0054 FUN_147ee0054 body=68 status=ok
// SIG undefined FUN_147ee0054(void)

void FUN_147ee0054(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*param_1 == 0) {
    iVar2 = param_1[10];
    uVar1 = FUN_144a9f2d6();
    uVar3 = FUN_1434274ae(uVar1,1,(char)iVar2);
    *(undefined1 *)((longlong)param_1 + 0x29) = uVar3;
  }
  else {
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x29);
  }
  uVar3 = FUN_147a904a8(uVar3);
  *(undefined1 *)(param_1 + 10) = uVar3;
  *param_1 = 1;
  return;
}



// FUNCTION 147ee0098 FUN_147ee0098 body=280 status=ok
// SIG undefined FUN_147ee0098(void)

longlong FUN_147ee0098(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x168), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_1409035a4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar2 = FUN_144729dda(param_1 + 0x34);
      if (cVar2 != '\0') {
        lVar3 = FUN_14479d2ce(param_1 + 0x34);
        if (lVar3 != 0) {
          uVar4 = FUN_145958f2a();
          plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
          if (plVar5 != (longlong *)0x0) {
            lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
            if ((0.0 <= *(float *)(lVar3 + 8) && 0.0 <= *(float *)(lVar3 + 4)) ||
               (*(longlong *)(lVar3 + 0x18) != 0)) {
              (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
              lVar3 = (**(code **)(*plVar1 + 0x340))(plVar1,lVar3,local_40,&DAT_14c8464e0);
              goto LAB_147ee00ea;
            }
          }
        }
      }
      lVar3 = plVar1[5];
      goto LAB_147ee00ea;
    }
  }
  lVar3 = 0;
LAB_147ee00ea:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee01b2 FUN_147ee01b2 body=97 status=ok
// SIG undefined FUN_147ee01b2(void)

void FUN_147ee01b2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 1;
  puVar1 = param_1 + 2;
  if (*(byte *)(param_1 + 1) < 2) {
    FUN_145ff297e(puVar1,param_2,*param_1);
    FUN_147ea9f7a(puVar1,param_2,*param_1);
    return;
  }
  if (*(byte *)(param_1 + 1) == 2) {
    FUN_147eaa138(puVar1,param_2,*param_1);
    return;
  }
  return;
}



// FUNCTION 147ee0214 FUN_147ee0214 body=198 status=ok
// SIG undefined FUN_147ee0214(void)

void FUN_147ee0214(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((longlong)(int)param_3[1] != 0) {
    puVar6 = (undefined8 *)*param_3;
    puVar5 = puVar6 + (longlong)(int)param_3[1] * 2;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_147ed670c(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar4 = (longlong)iVar2 * 0x38;
      *(undefined8 *)(lVar3 + lVar4) = 0;
      *(undefined2 *)(lVar3 + 8 + lVar4) = 0xff00;
      puVar1 = (undefined8 *)(lVar3 + 0xc + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar3 + 0x1c + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar3 + 0x2c + lVar4) = 0xffff00000000;
      *(undefined1 *)(lVar3 + 0x34 + lVar4) = 0xff;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + lVar4) = *puVar6;
      *(undefined1 *)(lVar3 + 8 + lVar4) = *(undefined1 *)(puVar6 + 1);
      *(undefined4 *)(lVar3 + 0xc + lVar4) = *(undefined4 *)((longlong)puVar6 + 0xc);
      FUN_147ee01b2(lVar3 + lVar4,param_1);
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  return;
}



// FUNCTION 147ee02da FUN_147ee02da body=256 status=ok
// SIG undefined FUN_147ee02da(void)

void FUN_147ee02da(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 0x44) & 2) != 0) goto LAB_147ee03ab;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
  local_38 = FUN_141235bf0();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_1458b8c86(param_1 + 0x18,param_2,0,&local_38);
  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x10);
    if (param_3 == 0 || lVar1 < 1) goto LAB_147ee03ab;
LAB_147ee035b:
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = lVar1 * 0x38 + lVar2;
    do {
      if ((*(short *)(lVar2 + 0x30) == -1) && (*(longlong *)(lVar2 + 0x20) != 0)) {
        FUN_14384992e(lVar2 + 0x10,param_3);
      }
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar1);
    if ((*(byte *)(param_1 + 0x44) & 1) == 0) goto LAB_147ee03ab;
  }
  else {
    if (param_3 == 0) goto LAB_147ee03ab;
    lVar1 = (longlong)*(int *)(param_1 + 0x10);
    if (lVar1 != 0) goto LAB_147ee035b;
  }
  FUN_14384992e(param_1 + 0x18,param_3);
LAB_147ee03ab:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee03dc FUN_147ee03dc body=430 status=ok
// SIG undefined FUN_147ee03dc(void)

undefined4 FUN_147ee03dc(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)((longlong)param_1 + 0x44) & 1) == 0) {
    lVar3 = *param_1;
    goto LAB_147ee0417;
  }
  lVar3 = FUN_147eb9650(param_3,(short)param_1[7]);
  if (lVar3 == 0) {
LAB_147ee054d:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_141235bf0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_147ee054d;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
  }
  *param_1 = lVar3;
LAB_147ee0417:
  if (lVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_a0 = lVar3;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_98 = param_2;
    if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    local_68 = 0;
    local_60 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    if (0 < (longlong)(int)param_1[2]) {
      lVar3 = param_1[1];
      lVar2 = (longlong)(int)param_1[2] * 0x38;
      do {
        FUN_147ed0688(&local_a0,lVar3,param_3);
        lVar3 = lVar3 + 0x38;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    uVar1 = FUN_14384e52e(&local_a0,(char)param_1[8],param_4);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&uStack_88);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee0590 FUN_147ee0590 body=234 status=ok
// SIG undefined FUN_147ee0590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147ee0590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1fe10) {
    FUN_144b3d300(&DAT_14cb1fe10);
    if (DAT_14cb1fe10 == -1) {
      DAT_14cb1fe00 = DAT_14c8464f0;
      _DAT_14cb1fdf0 = (undefined4)DAT_14c8464e0;
      uRam000000014cb1fdf4 = DAT_14c8464e0._4_4_;
      uRam000000014cb1fdf8 = (undefined4)DAT_14c8464e8;
      uRam000000014cb1fdfc = DAT_14c8464e8._4_4_;
      DAT_14cb1fe08 = 0;
      _Init_thread_footer(&DAT_14cb1fe10);
    }
  }
  local_48 = DAT_14cb1fe00;
  local_58 = CONCAT44(uRam000000014cb1fdf4,_DAT_14cb1fdf0);
  uStack_50 = CONCAT44(uRam000000014cb1fdfc,uRam000000014cb1fdf8);
  local_28 = DAT_14cb1fe08;
  local_40 = DAT_14cb1fe08;
  local_38 = DAT_14cb1fe08;
  local_30 = DAT_14cb1fe08;
  FUN_144a80a4c(&local_58,param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee06d8 FUN_147ee06d8 body=140 status=ok
// SIG undefined FUN_147ee06d8(void)

void FUN_147ee06d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1448e423c();
  if ((*(longlong *)(param_1 + 0x750) != 0) && (*(longlong *)(param_1 + 0x7c8) == 0)) {
    lVar1 = FUN_1447210f0(param_1);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x180), lVar1 != 0)) {
      lVar2 = FUN_1413f6fa8();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        FUN_147ee0764(param_1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x7c8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x7c8) + 0x28) == 0)) {
    FUN_147ee07b2(param_1);
    return;
  }
  return;
}



// FUNCTION 147ee0764 FUN_147ee0764 body=78 status=ok
// SIG undefined FUN_147ee0764(void)

void FUN_147ee0764(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    (**(code **)(*param_1 + 0x570))();
    do {
      FUN_147ee07b2(param_1);
      if (0.0 < *(float *)(param_1 + 0xef)) {
        return;
      }
      if (param_1[0xf9] == 0) {
        return;
      }
    } while (*(int *)(param_1[0xf9] + 0x28) == 0);
  }
  return;
}



// FUNCTION 147ee07b2 FUN_147ee07b2 body=715 status=ok
// SIG undefined FUN_147ee07b2(void)

void FUN_147ee07b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = FUN_1447210f0();
  lVar7 = FUN_147ec5440(uVar6);
  if (lVar7 == 0) goto LAB_147ee0808;
  plVar3 = (longlong *)(param_1 + 0x7c8);
  lVar8 = *(longlong *)(param_1 + 0x7c8);
  if (lVar8 == 0) {
    if (*(longlong *)(param_1 + 0x750) == 0) goto LAB_147ee0808;
    lVar8 = FUN_147ea2fb2(param_1);
    local_a8 = *(longlong *)(param_1 + 0x750);
    if (local_a8 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c();
    }
    local_a0 = param_1;
    if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_1);
    }
    local_70 = 0;
    local_68 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_64 = 0xffffffff00000080;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    if ((longlong)*(int *)(param_1 + 0x770) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x768);
      lVar9 = (longlong)*(int *)(param_1 + 0x770) * 0x38;
      do {
        if ((lVar8 != 0) || (*(short *)(lVar10 + 0x30) == -1)) {
          FUN_147ed0688(&local_a8,lVar10,lVar8);
        }
        lVar10 = lVar10 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    FUN_14384e62a(lVar7,&local_b8,&local_a8,*(undefined1 *)(param_1 + 0x788));
    plVar1 = local_b0;
    if (plVar3 != &local_b8) {
      *(longlong *)(param_1 + 0x7c8) = local_b8;
      local_b8 = 0;
      plVar5 = *(longlong **)(param_1 + 2000);
      if (local_b0 != plVar5) {
        local_b0 = (longlong *)0x0;
        *(longlong **)(param_1 + 2000) = plVar1;
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
    plVar1 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (*plVar3 != 0) {
      FUN_147ed08fc(lVar7,plVar3);
    }
    local_48 = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&uStack_90);
    lVar8 = *plVar3;
    if (lVar8 == 0) goto LAB_147ee0808;
  }
  if (*(int *)(lVar8 + 0x28) == 0) {
    FUN_14384db4c(lVar8,(double)*(float *)(param_1 + 0x778));
    uVar6 = *(undefined8 *)(param_1 + 0x7c8);
    iVar4 = *(int *)(param_1 + 0x7e0);
    *(uint *)(param_1 + 0x7e0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x7e4) < iVar4 + 1U) {
      FUN_147ef0e18((longlong *)(param_1 + 0x7d8),iVar4);
    }
    FUN_143851bb4((longlong)iVar4 * 0x170 + *(longlong *)(param_1 + 0x7d8),uVar6);
    if (*(int *)(*plVar3 + 0x28) != 0) {
      *(int *)(param_1 + 0x77c) = *(int *)(param_1 + 0x7e0) + -1;
    }
  }
LAB_147ee0808:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee0a7e FUN_147ee0a7e body=286 status=ok
// SIG undefined FUN_147ee0a7e(void)

void FUN_147ee0a7e(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  
  thunk_FUN_1463f2130();
  lVar5 = FUN_147ef0d80(param_1);
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x1f9) =
         (*(byte *)(lVar5 + 0x1f9) & 0xf7 | *(byte *)(param_1 + 0x784) & 8) ^ 8;
  }
  iVar3 = *(int *)(param_1 + 0x760);
  if (0 < (longlong)iVar3) {
    plVar2 = (longlong *)(param_1 + 0x758);
    lVar5 = *plVar2;
    lVar6 = 0;
    do {
      if (2 < *(byte *)(lVar5 + 8 + lVar6)) {
        *(undefined1 *)(lVar5 + 8 + lVar6) = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar6);
    FUN_147ee0214(param_1,param_1 + 0x768,plVar2);
    *(undefined4 *)(param_1 + 0x760) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_147ed5950(plVar2,0);
    }
  }
  lVar5 = FUN_1447210f0(param_1);
  if (lVar5 == 0) {
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfd;
  }
  else {
    bVar4 = *(byte *)(lVar5 + 0x152);
    if ((bVar4 != 1) && ((6 < bVar4 || ((0x68U >> (bVar4 & 0x1f) & 1) == 0)))) {
      *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 2;
      return;
    }
    bVar4 = *(byte *)(param_1 + 0x784) >> 3 & 2;
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfd | bVar4;
    if (bVar4 != 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x430) + 0x4a);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  if (*(longlong *)(param_1 + 0x428) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x428) + 0x4a);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return;
}



// FUNCTION 147ee0b9c FUN_147ee0b9c body=176 status=ok
// SIG undefined FUN_147ee0b9c(void)

void FUN_147ee0b9c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  param_1[0xf9] = 0;
  plVar4 = (longlong *)param_1[0xfa];
  if (plVar4 != (longlong *)0x0) {
    param_1[0xfa] = 0;
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
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0;
  iVar3 = *(int *)((longlong)param_1 + 0x7e4);
  FUN_145d33968(param_1[0xfb],(int)param_1[0xfc]);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x7e4) != 0)) {
    FUN_147ef0de8(param_1 + 0xfb);
  }
  if (param_1[0x78] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ee0c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x740))(param_1);
  return;
}



// FUNCTION 147ee0c98 FUN_147ee0c98 body=1057 status=ok
// SIG undefined FUN_147ee0c98(void)

void FUN_147ee0c98(longlong *param_1,longlong param_2)

{
  float fVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  longlong *plVar9;
  float *pfVar10;
  double *pdVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined1 local_a8 [28];
  char local_8c;
  longlong local_80;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = param_1[10];
  if (((((lVar5 != 0) && (lVar4 = FUN_144a6c4d8(), lVar4 != 0)) &&
       (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
      ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30 && (param_1[10] != 0)))) &&
     ((lVar5 = FUN_14479d2ce(param_2 + 0x34), lVar5 != 0 &&
      (lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,lVar5,1), lVar4 != 0)))) {
    FUN_147ec268e(param_1 + 0xb,lVar5,*(undefined4 *)(param_2 + 0x30));
    if (param_1[0xc] == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)*(int *)(param_1[0xc] + 0x44) + param_1[0xd]);
    }
    plVar9 = param_1 + 0x11;
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_c8 = 0;
    uStack_c0 = 0;
    if ((char)*plVar9 == '\x01') {
      local_d8 = 0;
      uStack_d0 = 0;
      lVar12 = param_1[0x19];
      if (((lVar12 == 0) || (lVar7 = FUN_1411b2cec(), lVar7 == 0)) ||
         ((*(int *)(lVar12 + 0x38) < *(int *)(lVar7 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)))) {
        lVar12 = 0;
      }
      else {
        lVar12 = param_1[0x19];
      }
      FUN_14384d67c(param_2,lVar12,&local_d8);
      FUN_147ec268e(param_1 + 0x12,lVar5,*(undefined4 *)(param_2 + 0x30));
      if (param_1[0x13] == 0) {
        pfVar8 = (float *)0x0;
      }
      else {
        pfVar8 = (float *)((longlong)*(int *)(param_1[0x13] + 0x44) + param_1[0x14]);
      }
      pfVar10 = (float *)(param_1 + 0x18);
      if (pfVar8 != (float *)0x0) {
        pfVar10 = pfVar8;
      }
      fVar1 = *pfVar10;
      local_e0 = param_1[10];
      if ((local_e0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_14146ff3c(&local_b0,lVar4,&local_e0);
      if (local_8c == '\0') {
        do {
          lVar5 = local_80;
          uVar2 = uStack_c0;
          if (0 < (longlong)(int)uStack_d0) {
            lVar4 = *(longlong *)(local_80 + 0x1c8);
            lVar12 = 0;
            do {
              pdVar11 = (double *)&DAT_14c8464e0;
              dVar13 = DAT_14c8464f0;
              if (lVar4 != 0) {
                dVar13 = *(double *)(lVar4 + 0x270);
                pdVar11 = (double *)(lVar4 + 0x260);
              }
              dVar14 = *pdVar11 - *(double *)(local_d8 + lVar12);
              dVar15 = pdVar11[1] - *(double *)(local_d8 + 8 + lVar12);
              dVar13 = dVar13 - *(double *)(local_d8 + 0x10 + lVar12);
              if (dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14 < (double)(fVar1 * fVar1)) {
                lVar4 = (longlong)(int)uStack_c0;
                uVar3 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar3);
                if (uStack_c0._4_4_ < uVar3) {
                  FUN_1447d05f2(&local_c8,uVar2 & 0xffffffff);
                }
                *(longlong *)(local_c8 + lVar4 * 8) = lVar5;
                break;
              }
              lVar12 = lVar12 + 0x18;
            } while ((longlong)(int)uStack_d0 * 0x18 != lVar12);
          }
          FUN_14146ffc0(&local_b0);
        } while (local_8c == '\0');
      }
      if (local_58 == '\x01') {
        FUN_14024445c(local_a8);
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_e8 = param_1[10];
      if ((local_e8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_14146ff3c(&local_b0,lVar4,&local_e8,5);
      if (local_8c == '\0') {
        do {
          lVar5 = local_80;
          uVar2 = uStack_c0;
          lVar4 = (longlong)(int)uStack_c0;
          uVar3 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar3);
          if (uStack_c0._4_4_ < uVar3) {
            FUN_1447d05f2(&local_c8,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_c8 + lVar4 * 8) = lVar5;
          FUN_14146ffc0(&local_b0);
        } while (local_8c == '\0');
      }
      if (local_58 == '\x01') {
        FUN_14024445c(local_a8);
      }
    }
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_c8);
    lVar5 = local_c8;
    lVar4 = (longlong)(int)uStack_c0;
    if (lVar4 != 0) {
      lVar12 = 0;
      do {
        local_b0 = 0;
        FUN_14485c47a(&local_b0,*(undefined8 *)(lVar5 + lVar12));
        FUN_1438575ac(param_2,&local_b0);
        lVar12 = lVar12 + 8;
      } while (lVar4 * 8 != lVar12);
    }
    if (local_c8 != 0) {
      FUN_1400020a8(local_c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee10ba FUN_147ee10ba body=1080 status=ok
// SIG undefined FUN_147ee10ba(void)

undefined8 FUN_147ee10ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_98 [16];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147ed8d26(local_68,param_1);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescriptionTitle");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
LAB_147ee11af:
    FUN_140056680(local_78,&DAT_149e01fe8);
  }
  else {
    lVar2 = FUN_144a6c4d8();
    if ((((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)) || (*(longlong *)(param_1 + 0x50) == 0)) goto LAB_147ee11af;
    local_48 = *(wchar_t **)(*(longlong *)(param_1 + 0x50) + 0x18);
    FUN_1400021e4(&local_48,local_78);
  }
  FUN_140233b1a(local_68,local_78);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_88,L"ActorsClass");
  FUN_140233eec(&local_58,local_88,&local_48);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)(longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x44);
    }
    pcVar4 = (char *)(param_1 + 0x88);
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3;
    }
    if (*pcVar4 == '\0') {
      local_48 = L"DescriptionGenerateActors";
      local_40 = 0x19;
      FUN_1446e940c(local_68,&local_48);
      local_48 = L"EnvQueryGenerator";
      local_40 = 0x11;
      FUN_1446e940c(local_78,&local_48);
      FUN_140208bae(&local_48,local_78,local_68,
                    L"{DescriptionTitle}: generate set of actors of {ActorsClass}");
      puVar5 = local_98;
      goto LAB_147ee130f;
    }
  }
  local_a0 = *(longlong *)(param_1 + 200);
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_68,&local_a0);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescribeContext");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_48 = L"DescriptionGenerateActorsAroundContext";
  local_40 = 0x26;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"EnvQueryGenerator";
  local_40 = 0x11;
  FUN_1446e940c(local_78,&local_48);
  FUN_140208bae(&local_48,local_78,local_68,
                L"{DescriptionTitle}: generate set of actors of {ActorsClass} around {DescribeContext}"
               );
  puVar5 = local_b0;
LAB_147ee130f:
  FUN_14023409e(puVar5,&local_48,1);
  FUN_140233c04(param_2,puVar5,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee14f4 FUN_147ee14f4 body=443 status=ok
// SIG undefined FUN_147ee14f4(void)

undefined8 FUN_147ee14f4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147ecddc8(param_1 + 0x90,local_78);
  FUN_140233b1a(local_68,local_78);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_88,L"Radius");
  FUN_140233eec(&local_58,local_88,&local_48);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = L"ActorsOfClassDescription";
  local_40 = 0x18;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"EnvQueryGenerator";
  local_40 = 0x11;
  FUN_1446e940c(local_78,&local_48);
  FUN_140208bae(&local_48,local_78,local_68,L"radius: {Radius}");
  FUN_14023409e(local_98,&local_48,1);
  FUN_140233c04(param_2,local_98,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee16b0 FUN_147ee16b0 body=156 status=ok
// SIG undefined FUN_147ee16b0(void)

void FUN_147ee16b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143851db2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee174e FUN_147ee174e body=164 status=ok
// SIG undefined FUN_147ee174e(void)

void FUN_147ee174e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_143851f32(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee17f4 FUN_147ee17f4 body=119 status=ok
// SIG undefined FUN_147ee17f4(void)

void FUN_147ee17f4(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1405b70a4(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cb1fe80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee186c FUN_147ee186c body=119 status=ok
// SIG undefined FUN_147ee186c(void)

void FUN_147ee186c(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1457246e8(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cb1fe90);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee18e4 FUN_147ee18e4 body=46 status=ok
// SIG undefined FUN_147ee18e4(void)

void FUN_147ee18e4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x70) + 0x34);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ee1928 FUN_147ee1928 body=701 status=ok
// SIG undefined FUN_147ee1928(void)

undefined8 FUN_147ee1928(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  longlong local_80;
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147ed8d26(local_68,param_1);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescriptionTitle");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  local_38 = *(longlong **)(param_1 + 0x50);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_30 = *(undefined4 *)(param_1 + 0x58);
  FUN_140056680(local_68,L"DescribeGeneratorAction");
  FUN_140233eec(&local_58,local_68,&local_48);
  if (local_68[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  local_80 = *(longlong *)(param_1 + 0x60);
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_68,&local_80);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescribeContext");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_48 = L"DescriptionBlueprintImplementedGenerator";
  local_40 = 0x28;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"EnvQueryGenerator";
  local_40 = 0x11;
  FUN_1446e940c(local_78,&local_48);
  FUN_140208bae(&local_48,local_78,local_68,
                L"{DescriptionTitle}: {DescribeGeneratorAction} around {DescribeContext}");
  FUN_14023409e(local_90,&local_48,1);
  FUN_140233c04(param_2,local_90,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee1be6 FUN_147ee1be6 body=100 status=ok
// SIG undefined FUN_147ee1be6(void)

undefined8 FUN_147ee1be6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,&DAT_149e01fe8);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee1c5c FUN_147ee1c5c body=92 status=ok
// SIG undefined FUN_147ee1c5c(void)

void FUN_147ee1c5c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x60) & 2) != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + lVar3 * 8) + 0x2b8))();
          iVar2 = *(int *)(param_1 + 0x58);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 147ee1cb8 FUN_147ee1cb8 body=737 status=ok
// SIG undefined FUN_147ee1cb8(void)

longlong * FUN_147ee1cb8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong *local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_147ed8d26(param_2,param_1);
  iVar4 = *(int *)(param_1 + 0x58);
  if (0 < iVar4) {
    lVar5 = 0;
    local_120 = param_1;
    local_118 = param_2;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar5 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,local_d8);
        local_e8 = (longlong *)*param_2;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 8))();
        }
        local_e0 = (undefined4)param_2[1];
        local_88 = L"DescTitleExtention";
        local_80[0] = 0x12;
        FUN_1446e940c(local_10c,&local_88);
        local_88 = L"EnvQueryGenerator";
        local_80[0] = 0x11;
        FUN_1446e940c(local_110,&local_88);
        FUN_140208bae(local_108,local_110,local_10c,L"{0}\n  {1}");
        FUN_14023409e(&local_f8,local_108,1);
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
        FUN_14023423e(local_78,&local_e8);
        local_68 = 4;
        FUN_14023423e(local_58,local_d8);
        local_a0 = &local_48;
        local_a8 = &local_88;
        FUN_14010d304(&local_98,&local_a8);
        local_b8 = local_f8;
        local_b0 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        param_1 = local_120;
        lVar6 = 0x30;
        do {
          plVar3 = *(longlong **)((longlong)local_80 + lVar6 + -8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
            *(undefined8 *)((longlong)local_80 + lVar6 + -8) = 0;
            *(undefined4 *)((longlong)local_80 + lVar6) = 0;
          }
          plVar3 = local_f0;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != -0x10);
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        if (local_d8[0] != (longlong *)0x0) {
          (**(code **)(*local_d8[0] + 0x10))();
        }
        param_2 = local_118;
        FUN_140008f88(local_118,local_c8);
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        if (local_108[0] != (longlong *)0x0) {
          (**(code **)(*local_108[0] + 0x10))();
        }
        iVar4 = *(int *)(param_1 + 0x58);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee1f9a FUN_147ee1f9a body=123 status=ok
// SIG undefined FUN_147ee1f9a(void)

undefined8 FUN_147ee1f9a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (((((lVar2 == 0) || (lVar5 = FUN_1412474be(), lVar5 == 0)) ||
       (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
      ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30 || (*(longlong *)(param_1 + 0x40) == 0)))) ||
     (iVar1 = *(int *)(param_1 + 0x58), (longlong)iVar1 == 0)) {
LAB_147ee1fce:
    uVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar3 + 0x2c8))(), cVar4 == '\0'))
      goto LAB_147ee1fce;
      lVar5 = lVar5 + 8;
      uVar6 = 1;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return uVar6;
}



// FUNCTION 147ee2022 FUN_147ee2022 body=111 status=ok
// SIG undefined FUN_147ee2022(void)

void FUN_147ee2022(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_2 + 0x34);
  FUN_147ec268e(param_1 + 0x90,uVar1,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 200,uVar1,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0x100,uVar1,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0x138,uVar1,*(undefined4 *)(param_2 + 0x30));
  return;
}



// FUNCTION 147ee2092 FUN_147ee2092 body=1483 status=ok
// SIG undefined FUN_147ee2092(void)

void FUN_147ee2092(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1b8 [44];
  float local_18c;
  undefined8 local_188;
  longlong *local_180;
  float local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  double local_150;
  double local_148;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_108 = 0;
  uStack_100 = 0;
  lVar18 = param_1[0x2e];
  if ((((lVar18 == 0) || (lVar11 = FUN_1411b2cec(), lVar11 == 0)) ||
      (*(int *)(lVar18 + 0x38) < *(int *)(lVar11 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
      lVar11 + 0x30)) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1[0x2e];
  }
  FUN_147ecf078(param_2,lVar18,&local_108);
  if (0 < (int)uStack_100) {
    FUN_147ee2022(param_1,param_2);
    if (param_1[0x1a] == 0) {
      pfVar12 = (float *)0x0;
    }
    else {
      pfVar12 = (float *)((longlong)*(int *)(param_1[0x1a] + 0x44) + param_1[0x1b]);
    }
    pfVar13 = (float *)(param_1 + 0x1f);
    if (pfVar12 != (float *)0x0) {
      pfVar13 = pfVar12;
    }
    fVar21 = ABS(*pfVar13);
    if (359.0 <= fVar21) {
      fVar21 = 359.0;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    if ((fVar21 != 0.0) || (NAN(fVar21))) {
      if (param_1[0x13] == 0) {
        pfVar12 = (float *)0x0;
      }
      else {
        pfVar12 = (float *)((longlong)*(int *)(param_1[0x13] + 0x44) + param_1[0x14]);
      }
      pfVar13 = (float *)(param_1 + 0x18);
      if (pfVar12 != (float *)0x0) {
        pfVar13 = pfVar12;
      }
      if (param_1[0x21] == 0) {
        pfVar12 = (float *)0x0;
      }
      else {
        pfVar12 = (float *)((longlong)*(int *)(param_1[0x21] + 0x44) + param_1[0x22]);
      }
      pfVar17 = (float *)(param_1 + 0x26);
      if (pfVar12 != (float *)0x0) {
        pfVar17 = pfVar12;
      }
      fVar22 = *pfVar13;
      local_18c = *pfVar17;
      if (359.0 <= local_18c) {
        local_18c = 359.0;
      }
      if (local_18c <= 1.0) {
        local_18c = 1.0;
      }
      if (param_1[0x28] == 0) {
        pfVar12 = (float *)0x0;
      }
      else {
        pfVar12 = (float *)((longlong)*(int *)(param_1[0x28] + 0x44) + param_1[0x29]);
      }
      pfVar13 = (float *)(param_1 + 0x2d);
      if (pfVar12 != (float *)0x0) {
        pfVar13 = pfVar12;
      }
      fVar20 = *pfVar13;
      if (3.4028235e+38 <= fVar20) {
        fVar20 = 3.4028235e+38;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar20 = fVar20 / fVar22;
      iVar19 = (int)ROUND(fVar20 + fVar20 + -0.5) >> 1;
      local_118 = 0;
      uStack_110 = 0;
      iVar15 = (int)uStack_100 * iVar19 *
               ((int)ROUND(-0.5 - (fVar21 / local_18c + fVar21 / local_18c)) >> 1);
      iVar16 = 1 - iVar15;
      local_188 = param_2;
      if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar16);
      }
      if (iVar15 != 1) {
        FUN_147ef0afe(&local_118);
      }
      if (0 < (int)uStack_100) {
        fVar21 = fVar21 * 0.5;
        local_178 = -fVar21;
        uStack_174 = 0x80000000;
        uStack_170 = 0x80000000;
        uStack_16c = 0x80000000;
        dVar3 = (double)fVar22;
        lVar18 = 0;
        local_168 = ZEXT416((uint)fVar21);
        local_180 = param_1;
        do {
          lVar11 = *(longlong *)(*(longlong *)(local_108 + lVar18 * 8) + 0x1c8);
          if (lVar11 == 0) {
            local_128 = DAT_14c8462e8;
            local_138 = (undefined4)DAT_14c8462d8;
            uStack_134 = DAT_14c8462d8._4_4_;
            uStack_130 = (undefined4)DAT_14c8462e0;
            uStack_12c = DAT_14c8462e0._4_4_;
          }
          else {
            FUN_14141a100(lVar11,&local_138);
          }
          lVar11 = *(longlong *)(*(longlong *)(local_108 + lVar18 * 8) + 0x1c8);
          if (lVar11 == 0) {
            uVar23 = (undefined4)DAT_14c8464f0;
            uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            pdVar14 = (double *)&DAT_14c8464e0;
          }
          else {
            uVar23 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
            uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
            pdVar14 = (double *)(lVar11 + 0x260);
          }
          dVar6 = *pdVar14;
          dVar7 = pdVar14[1];
          fVar22 = local_178;
          if (0.0 < fVar21) {
            do {
              FUN_140ccff96(&local_138,&local_150,(double)fVar22 * 0.017453292519943295,
                            &DAT_14c8462c0);
              iVar15 = iVar19;
              dVar5 = 1.0;
              if (0 < iVar19) {
                do {
                  uVar9 = uStack_110;
                  dVar4 = local_140 * dVar5;
                  dVar1 = local_148 * dVar5;
                  dVar2 = local_150 * dVar5;
                  lVar11 = (longlong)(int)uStack_110;
                  uVar10 = (int)uStack_110 + 1;
                  uStack_110 = CONCAT44(uStack_110._4_4_,uVar10);
                  if (uStack_110._4_4_ < uVar10) {
                    FUN_147ef0984(&local_118,uVar9 & 0xffffffff);
                  }
                  lVar11 = lVar11 * 0x20;
                  *(double *)(local_118 + lVar11) = dVar2 * dVar3 + dVar6;
                  *(double *)(local_118 + 8 + lVar11) = dVar1 * dVar3 + dVar7;
                  *(double *)(local_118 + 0x10 + lVar11) =
                       dVar4 * dVar3 + (double)CONCAT44(uVar24,uVar23);
                  *(undefined8 *)(local_118 + 0x18 + lVar11) = 0;
                  iVar15 = iVar15 + -1;
                  dVar5 = dVar5 + 1.0;
                } while (iVar15 != 0);
              }
              fVar22 = fVar22 + local_18c;
              fVar21 = (float)local_168._0_4_;
            } while (fVar22 < (float)local_168._0_4_);
          }
          uVar9 = uStack_110;
          param_1 = local_180;
          if ((*(byte *)(local_180 + 0x2f) & 1) != 0) {
            lVar11 = (longlong)(int)uStack_110;
            uVar10 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar10);
            if (uStack_110._4_4_ < uVar10) {
              FUN_147ef0984(&local_118,uVar9 & 0xffffffff);
            }
            lVar11 = lVar11 * 0x20;
            *(double *)(local_118 + lVar11) = dVar6;
            ((double *)(local_118 + lVar11))[1] = dVar7;
            *(ulonglong *)(local_118 + 0x10 + lVar11) = CONCAT44(uVar24,uVar23);
            *(undefined8 *)(local_118 + 0x18 + lVar11) = 0;
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uStack_100);
      }
      uVar8 = local_188;
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_118,local_188);
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_118,uVar8);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee2660 FUN_147ee2660 body=589 status=ok
// SIG undefined FUN_147ee2660(void)

undefined8 FUN_147ee2660(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0 [2];
  longlong local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d0 = *(longlong *)(param_1 + 0x170);
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_c8,&local_d0);
  FUN_147ed8d26(local_e0,param_1);
  local_88 = L"ConeDescriptionGenerateAroundContext";
  local_80[0] = 0x24;
  FUN_1446e940c(local_104,&local_88);
  local_88 = L"EnvQueryGenerator";
  local_80[0] = 0x11;
  FUN_1446e940c(local_108,&local_88);
  FUN_140208bae(local_100,local_108,local_104,L"{0}: generate in front of {1}");
  FUN_14023409e(&local_f0,local_100,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_e0);
  local_68 = 4;
  FUN_14023423e(local_58,local_c8);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_f0;
  local_b0 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != -0x10);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
      }
    }
  }
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee28ae FUN_147ee28ae body=1217 status=ok
// SIG undefined FUN_147ee28ae(void)

longlong * FUN_147ee28ae(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_158 [40];
  undefined1 local_130 [16];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  longlong *local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong local_d8 [2];
  longlong *local_c8 [2];
  longlong *local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *puStack_a0;
  longlong *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_147ecddc8(param_1 + 0x100,local_d8);
  FUN_140233b1a(local_c8,local_d8);
  FUN_147ecddc8(param_1 + 200,local_f8);
  FUN_140233b1a(local_e8,local_f8);
  local_88 = L"ConeDescription";
  local_80[0] = 0xf;
  FUN_1446e940c(local_11c,&local_88);
  local_88 = L"EnvQueryGenerator";
  local_80[0] = 0x11;
  FUN_1446e940c(local_120,&local_88);
  FUN_140208bae(local_118,local_120,local_11c,L"degrees: {0}, angle step: {1}");
  FUN_14023409e(&local_108,local_118,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(&local_78,local_e8);
  local_68 = 4;
  FUN_14023423e(local_58,local_c8);
  puStack_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_108;
  local_b0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_80 + lVar4 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar4) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x10);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_147ede66a(param_1 + 0x50,&local_98,0);
  cVar3 = FUN_144a7c5f6(&local_98);
  if (cVar3 == '\0') {
    local_a8 = (wchar_t **)0x0;
    puStack_a0 = (ulonglong *)0x0;
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    local_78 = (longlong *)*param_2;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    local_70 = (undefined4)param_2[1];
    FUN_140056680(&local_b8,L"Description");
    FUN_140233eec(&local_a8,&local_b8,&local_88);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    local_78 = local_98;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    local_70 = local_90;
    FUN_140056680(&local_b8,L"ProjectionDescription");
    FUN_140233eec(&local_a8,&local_b8,&local_88);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    local_88 = L"ConeDescriptionWithProjection";
    local_80[0] = 0x1d;
    FUN_1446e940c(local_d8,&local_88);
    local_88 = L"EnvQueryGenerator";
    local_80[0] = 0x11;
    FUN_1446e940c(local_f8,&local_88);
    FUN_140208bae(&local_b8,local_f8,local_d8,L"{Description}, {ProjectionDescription}");
    FUN_14023409e(local_130,&local_b8,1);
    FUN_140233c04(&local_88,local_130,&local_a8);
    FUN_140008f88(param_2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    FUN_14010f8af(local_a8,(ulonglong)puStack_a0 & 0xffffffff);
    if (local_a8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee2d74 FUN_147ee2d74 body=242 status=ok
// SIG undefined FUN_147ee2d74(void)

void FUN_147ee2d74(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((((lVar2 == 0) || (lVar3 = FUN_1411b2cec(), lVar3 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_14384d67c(param_2,uVar4,&local_48);
  lVar2 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      local_58 = *(undefined8 *)(lVar2 + 0x10 + lVar5);
      puVar1 = (undefined4 *)(lVar2 + lVar5);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_50 = 0;
      FUN_1438520fa(param_2,&local_68);
      lVar5 = lVar5 + 0x18;
    } while (lVar3 * 0x18 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee2e68 FUN_147ee2e68 body=476 status=ok
// SIG undefined FUN_147ee2e68(void)

undefined8 FUN_147ee2e68(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = *(longlong *)(param_1 + 0x50);
  if ((local_a8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_a0,&local_a8);
  local_60 = L"CurrentLocationOn";
  local_58 = 0x11;
  FUN_1446e940c(local_cc,&local_60);
  local_60 = L"EnvQueryGenerator";
  local_58 = 0x11;
  FUN_1446e940c(local_d0,&local_60);
  FUN_140208bae(local_c8,local_d0,local_cc,L"Current Location of {0}");
  FUN_14023409e(&local_b8,local_c8,1);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(local_50,local_a0);
  local_78 = &local_40;
  local_80 = &local_60;
  FUN_14010d304(&local_70);
  local_90 = local_b8;
  local_88 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_90,&local_70);
  FUN_14007f2db(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee3046 FUN_147ee3046 body=50 status=ok
// SIG undefined FUN_147ee3046(void)

longlong * FUN_147ee3046(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 147ee308c FUN_147ee308c body=660 status=ok
// SIG undefined FUN_147ee308c(void)

undefined8 FUN_147ee308c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double *local_58;
  undefined8 uStack_50;
  double *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = 0;
  uVar7 = 0;
  if ((*(byte *)(param_1 + 0x1d8) & 1) != 0) {
    if (*(char *)(param_1 + 0x188) == '\0') {
      local_48 = (double *)0x0;
      uStack_40 = 0;
      local_58 = (double *)0x0;
      uStack_50 = 0;
      lVar1 = *(longlong *)(param_1 + 0x170);
      if ((((lVar1 == 0) || (lVar2 = FUN_1411b2cec(), lVar2 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x170);
      }
      FUN_14384d67c(param_2,uVar4,&local_48);
      lVar1 = *(longlong *)(param_1 + 0x178);
      if (((lVar1 == 0) || (lVar2 = FUN_1411b2cec(), lVar2 == 0)) ||
         ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x178);
      }
      FUN_14384d67c(param_2,uVar4,&local_58);
      uVar6 = 0;
      uVar7 = 0;
      if ((0 < (int)uStack_40) && (0 < (int)uStack_50)) {
        local_68 = local_58[2] - local_48[2];
        uStack_70 = local_58[1] - local_48[1];
        local_78 = (double *)(*local_58 - *local_48);
        dVar5 = local_68 * local_68 + (double)local_78 * (double)local_78 + uStack_70 * uStack_70;
        if ((dVar5 != 1.0) || (NAN(dVar5))) {
          if (9.99999993922529e-09 <= dVar5) {
            dVar5 = 1.0 / SQRT(dVar5);
            local_68 = local_68 * dVar5;
            uStack_70 = uStack_70 * dVar5;
            local_78 = (double *)((double)local_78 * dVar5);
          }
          else {
            local_68 = DAT_14c8464f0;
            local_78 = (double *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_70 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
        }
        FUN_144a79a9c(&local_78,local_90);
        uVar6 = (undefined4)local_90._8_8_;
        uVar7 = SUB84(local_90._8_8_,4);
      }
      pdVar3 = local_48;
      if (local_58 != (double *)0x0) {
        FUN_1400020a8();
        pdVar3 = local_48;
      }
    }
    else {
      local_78 = (double *)0x0;
      uStack_70 = 0.0;
      lVar1 = *(longlong *)(param_1 + 0x180);
      if ((((lVar1 == 0) || (lVar2 = FUN_1411b2cec(), lVar2 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x180);
      }
      FUN_14384d906(param_2,uVar4,&local_78);
      pdVar3 = local_78;
      if ((int)uStack_70 < 1) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = SUB84(local_78[1],0);
        uVar7 = (undefined4)((ulonglong)local_78[1] >> 0x20);
      }
    }
    if (pdVar3 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar7,uVar6);
}



// FUNCTION 147ee3322 FUN_147ee3322 body=247 status=ok
// SIG undefined FUN_147ee3322(void)

void FUN_147ee3322(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  uStack_30 = 0;
  lVar2 = param_1[0x3a];
  if (lVar2 != 0) {
    lVar1 = FUN_1411b2cec();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = param_1[0x3a];
      goto LAB_147ee3375;
    }
  }
  lVar2 = 0;
LAB_147ee3375:
  FUN_14384d67c(param_2,lVar2,local_48 + 2);
  if (0 < (int)uStack_30) {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_147ee341a(param_1,local_48 + 2,local_48,param_2);
    (**(code **)(*param_1 + 0x2d0))(param_1,local_48,param_2);
    (**(code **)(*param_1 + 0x2d8))(param_1,local_48,param_2);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee341a FUN_147ee341a body=1601 status=ok
// SIG undefined FUN_147ee341a(void)

void FUN_147ee341a(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  double _X;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_118;
  
  uVar15 = FUN_14479d2ce(param_4 + 0x34);
  FUN_147ec268e(param_1 + 0x90,uVar15,*(undefined4 *)(param_4 + 0x30));
  FUN_147ec268e(param_1 + 200,uVar15,*(undefined4 *)(param_4 + 0x30));
  FUN_147ec268e(param_1 + 0x100,uVar15,*(undefined4 *)(param_4 + 0x30));
  FUN_147ec268e(param_1 + 0x138,uVar15,*(undefined4 *)(param_4 + 0x30));
  FUN_147ec268e(param_1 + 400,uVar15,*(undefined4 *)(param_4 + 0x30));
  if (*(longlong *)(param_1 + 0x198) == 0) {
    pfVar18 = (float *)0x0;
  }
  else {
    pfVar18 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x198) + 0x44) +
                       *(longlong *)(param_1 + 0x1a0));
  }
  pfVar16 = (float *)(param_1 + 0x1c0);
  if (pfVar18 != (float *)0x0) {
    pfVar16 = pfVar18;
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    pfVar18 = (float *)0x0;
  }
  else {
    pfVar18 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 0x44) +
                       *(longlong *)(param_1 + 0xa0));
  }
  pfVar19 = (float *)(param_1 + 0xc0);
  if (pfVar18 != (float *)0x0) {
    pfVar19 = pfVar18;
  }
  fVar1 = *pfVar19;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    pfVar18 = (float *)0x0;
  }
  else {
    pfVar18 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0xd0) + 0x44) +
                       *(longlong *)(param_1 + 0xd8));
  }
  dVar8 = (double)*pfVar16;
  pfVar16 = (float *)(param_1 + 0xf8);
  if (pfVar18 != (float *)0x0) {
    pfVar16 = pfVar18;
  }
  fVar2 = *pfVar16;
  iVar12 = FUN_147ece0c8(param_1 + 0x100);
  iVar13 = FUN_147ece0c8(param_1 + 0x138);
  if (((0.0 <= fVar1) && (0.0 < fVar2)) && ((0 < iVar13 && 0 < iVar12) && fVar1 <= fVar2)) {
    local_118 = (double)fVar1;
    dVar24 = (double)FUN_147ee308c(param_1,param_4);
    if (360.0 <= dVar8) {
      dVar8 = 360.0;
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar13 * iVar12) {
      FUN_147ef0afe(param_3);
    }
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    dVar11 = ((double)fVar2 - local_118) / (double)(iVar12 + -1);
    dVar9 = 6.283185307179586 / (double)iVar13;
    _X = dVar24 * 0.017453292519943295;
    if (*(char *)(param_1 + 0x1c8) == '\0') {
      iVar14 = 0;
      do {
        if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
LAB_147ee3953:
          dVar26 = sin(_X);
          dVar10 = cos(_X);
          uVar17 = (ulonglong)*(uint *)(param_2 + 1);
          iVar21 = 0;
          dVar25 = local_118;
          do {
            if (0 < (int)uVar17) {
              lVar20 = 0x10;
              lVar22 = 0;
              do {
                lVar7 = *param_2;
                dVar3 = *(double *)(lVar7 + lVar20);
                dVar4 = *(double *)(lVar7 + -8 + lVar20);
                dVar5 = *(double *)(lVar7 + -0x10 + lVar20);
                iVar6 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar6 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
                  FUN_147ef0984(param_3,iVar6);
                }
                lVar7 = *param_3;
                lVar23 = (longlong)iVar6 * 0x20;
                *(double *)(lVar7 + lVar23) = dVar5 + dVar10 * dVar25;
                *(double *)(lVar7 + 8 + lVar23) = dVar4 + dVar26 * dVar25;
                *(double *)(lVar7 + 0x10 + lVar23) = dVar3 + 0.0;
                *(undefined8 *)(lVar7 + 0x18 + lVar23) = 0;
                lVar22 = lVar22 + 1;
                uVar17 = (ulonglong)(int)param_2[1];
                lVar20 = lVar20 + 0x18;
              } while (lVar22 < (longlong)uVar17);
            }
            iVar21 = iVar21 + 1;
            dVar25 = dVar25 + dVar11;
          } while (iVar21 != iVar12);
        }
        else {
          dVar26 = (double)FUN_144719204(SUB84(_X * 57.29577951308232 - dVar24,0),0x4076800000000000
                                        );
          dVar26 = (double)(~-(ulonglong)(dVar26 < 0.0) & (ulonglong)dVar26 |
                           (ulonglong)(dVar26 + 360.0) & -(ulonglong)(dVar26 < 0.0));
          if (ABS((double)(~-(ulonglong)(180.0 < dVar26) & (ulonglong)dVar26 |
                          (ulonglong)(dVar26 + -360.0) & -(ulonglong)(180.0 < dVar26))) + -0.01 <
              dVar8) goto LAB_147ee3953;
        }
        iVar14 = iVar14 + 1;
        _X = _X + dVar9;
      } while (iVar14 != iVar13);
    }
    else {
      iVar14 = 0;
      dVar26 = 0.0;
      do {
        iVar21 = 0;
        do {
          dVar10 = dVar26 + _X;
          if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
LAB_147ee37b3:
            dVar25 = sin(dVar10);
            dVar10 = cos(dVar10);
            if (0 < (int)param_2[1]) {
              lVar20 = 0x10;
              lVar22 = 0;
              do {
                lVar7 = *param_2;
                dVar3 = *(double *)(lVar7 + lVar20);
                dVar4 = *(double *)(lVar7 + -8 + lVar20);
                dVar5 = *(double *)(lVar7 + -0x10 + lVar20);
                iVar6 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar6 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
                  FUN_147ef0984(param_3,iVar6);
                }
                lVar7 = *param_3;
                lVar23 = (longlong)iVar6 * 0x20;
                *(double *)(lVar7 + lVar23) = dVar5 + dVar10 * local_118;
                *(double *)(lVar7 + 8 + lVar23) = dVar4 + dVar25 * local_118;
                *(double *)(lVar7 + 0x10 + lVar23) = dVar3 + 0.0;
                *(undefined8 *)(lVar7 + 0x18 + lVar23) = 0;
                lVar22 = lVar22 + 1;
                lVar20 = lVar20 + 0x18;
              } while (lVar22 < (int)param_2[1]);
            }
          }
          else {
            dVar25 = (double)FUN_144719204(SUB84(dVar10 * 57.29577951308232 - dVar24,0),
                                           0x4076800000000000);
            dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                             (ulonglong)(dVar25 + 360.0) & -(ulonglong)(dVar25 < 0.0));
            if (ABS((double)(~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                            (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25))) + -0.01 <
                dVar8) goto LAB_147ee37b3;
          }
          iVar21 = iVar21 + 1;
          _X = _X + dVar9;
        } while (iVar21 != iVar13);
        iVar14 = iVar14 + 1;
        local_118 = local_118 + dVar11;
        dVar26 = dVar26 + dVar9 / (double)iVar12;
      } while (iVar14 != iVar12);
    }
  }
  return;
}



// FUNCTION 147ee3a5c FUN_147ee3a5c body=594 status=ok
// SIG undefined FUN_147ee3a5c(void)

undefined8 FUN_147ee3a5c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  longlong local_80;
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147ed8d26(local_68,param_1);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescriptionTitle");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_80 = *(longlong *)(param_1 + 0x1d0);
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_68,&local_80);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescribeContext");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_48 = L"DescriptionGenerateDonutAroundContext";
  local_40 = 0x25;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"EnvQueryGenerator";
  local_40 = 0x11;
  FUN_1446e940c(local_78,&local_48);
  FUN_140208bae(&local_48,local_78,local_68,
                L"{DescriptionTitle}: generate items around {DescribeContext}");
  FUN_14023409e(local_90,&local_48,1);
  FUN_140233c04(param_2,local_90,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee3cb0 FUN_147ee3cb0 body=2252 status=ok
// SIG undefined FUN_147ee3cb0(void)

longlong * FUN_147ee3cb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_f8 [36];
  undefined1 local_d4 [4];
  undefined1 local_d0 [20];
  undefined1 local_bc [4];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong *local_98 [2];
  longlong *local_88;
  ulonglong uStack_80;
  longlong *local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  uStack_60 = 0;
  FUN_147ecddc8(param_1 + 0x90,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,&local_78);
  FUN_140056680(local_98,L"InnerRadius");
  FUN_140233eec(&local_68,local_98,&local_58);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ecddc8(param_1 + 200,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,&local_78);
  FUN_140056680(local_98,L"OuterRadius");
  FUN_140233eec(&local_68,local_98,&local_58);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ecddc8(param_1 + 0x100,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,&local_78);
  FUN_140056680(local_98,L"NumRings");
  FUN_140233eec(&local_68,local_98,&local_58);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ecddc8(param_1 + 0x138,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,&local_78);
  FUN_140056680(local_98,L"NumPerRing");
  FUN_140233eec(&local_68,local_98,&local_58);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_58 = L"DonutDescription";
  local_50 = 0x10;
  FUN_1446e940c(&local_78,&local_58);
  local_58 = L"EnvQueryGenerator";
  local_50 = 0x11;
  FUN_1446e940c(&local_88,&local_58);
  FUN_140208bae(&local_58,&local_88,&local_78,
                L"radius: {InnerRadius} to {OuterRadius}\nrings: {NumRings}, points per ring: {NumPerRing}"
               );
  FUN_14023409e(local_a8,&local_58,1);
  FUN_140233c04(param_2,local_a8,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  if ((*(byte *)(param_1 + 0x1d8) & 1) != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = (longlong *)*param_2;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    local_40 = (undefined4)param_2[1];
    FUN_140056680(&local_88,L"Description");
    FUN_140233eec(&local_78,&local_88,&local_58);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    local_50 = *(undefined4 *)(param_1 + 0x1c0);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,2);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_140056680(&local_88,L"AngleValue");
    FUN_140233eec(&local_78,&local_88,&local_58);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    FUN_147ede256(param_1 + 0x170,&local_88);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,&local_88);
    FUN_140056680(local_98,L"ArcDirection");
    FUN_140233eec(&local_78,local_98,&local_58);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    local_58 = L"DescriptionWithArc";
    local_50 = 0x12;
    FUN_1446e940c(local_98,&local_58);
    local_58 = L"EnvQueryGenerator";
    local_50 = 0x11;
    FUN_1446e940c(local_bc,&local_58);
    FUN_140208bae(&local_88,local_bc,local_98,
                  L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}");
    FUN_14023409e(local_b8,&local_88,1);
    FUN_140233c04(&local_58,local_b8,&local_78);
    FUN_140008f88(param_2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    FUN_14010f8af(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_147ede66a(param_1 + 0x50,&local_78,0);
  cVar1 = FUN_144a7c5f6(&local_78);
  if (cVar1 == '\0') {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = (longlong *)*param_2;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    local_40 = (undefined4)param_2[1];
    FUN_140056680(local_98,L"Description");
    FUN_140233eec(&local_88,local_98,&local_58);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    local_40 = (undefined4)uStack_70;
    FUN_140056680(local_98,L"ProjectionDescription");
    FUN_140233eec(&local_88,local_98,&local_58);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    local_58 = L"OnCircle_DescriptionWithProjection";
    local_50 = 0x22;
    FUN_1446e940c(local_bc,&local_58);
    local_58 = L"EnvQueryGenerator";
    local_50 = 0x11;
    FUN_1446e940c(local_d4,&local_58);
    FUN_140208bae(local_98,local_d4,local_bc,L"{Description}, {ProjectionDescription}");
    FUN_14023409e(local_d0,local_98,1);
    FUN_140233c04(&local_58,local_d0,&local_88);
    FUN_140008f88(param_2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_14010f8af(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee4592 FUN_147ee4592 body=86 status=ok
// SIG undefined FUN_147ee4592(void)

void FUN_147ee4592(longlong param_1)

{
  FUN_147ecedc6();
  FUN_147ee0054(param_1 + 0x50);
  if (*(float *)(param_1 + 400) <= 0.0) {
    *(undefined4 *)(param_1 + 400) = 0x43b40000;
  }
  FUN_147ee0054(param_1 + 0x1e8);
  *(float *)(param_1 + 0x198) = *(float *)(param_1 + 400) * 0.017453292;
  return;
}



// FUNCTION 147ee45e8 FUN_147ee45e8 body=30 status=ok
// SIG undefined FUN_147ee45e8(void)

void FUN_147ee45e8(longlong param_1)

{
  FUN_147ecedc6();
  FUN_147ee0054(param_1 + 0x50);
  return;
}



// FUNCTION 147ee4606 FUN_147ee4606 body=746 status=ok
// SIG undefined FUN_147ee4606(void)

double * FUN_147ee4606(longlong param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [32];
  double *local_58;
  undefined8 uStack_50;
  double *local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce(param_3 + 0x34);
  param_2[2] = DAT_14c8462e8;
  dVar4 = DAT_14c8462e0;
  *param_2 = (double)DAT_14c8462d8;
  param_2[1] = dVar4;
  if ((*(byte *)(param_1 + 0x228) & 1) != 0) {
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        if (*(longlong *)(lVar1 + 0x1c8) == 0) {
          local_38 = DAT_14c8462e8;
          local_48 = DAT_14c8462d8;
          dStack_40 = DAT_14c8462e0;
        }
        else {
          FUN_14141a100(*(longlong *)(lVar1 + 0x1c8),&local_48);
        }
        param_2[2] = local_38;
        *param_2 = (double)local_48;
        param_2[1] = dStack_40;
      }
    }
    if (*(char *)(param_1 + 0x158) == '\0') {
      local_48 = (double *)0x0;
      dStack_40 = 0.0;
      local_58 = (double *)0x0;
      uStack_50 = 0;
      lVar1 = *(longlong *)(param_1 + 0x140);
      if ((((lVar1 == 0) || (lVar2 = FUN_1411b2cec(), lVar2 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x140);
      }
      FUN_14384d67c(param_3,uVar3,&local_48);
      lVar1 = *(longlong *)(param_1 + 0x148);
      if (((lVar1 == 0) || (lVar2 = FUN_1411b2cec(), lVar2 == 0)) ||
         ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x148);
      }
      FUN_14384d67c(param_3,uVar3,&local_58);
      if ((0 < dStack_40._0_4_) && (0 < (int)uStack_50)) {
        dVar4 = local_58[2] - local_48[2];
        dVar8 = local_58[1] - local_48[1];
        dVar6 = *local_58 - *local_48;
        dVar10 = dVar4 * dVar4 + dVar6 * dVar6 + dVar8 * dVar8;
        if (((dVar10 != 1.0) || (dVar5 = dVar4, dVar7 = dVar6, dVar9 = dVar8, NAN(dVar10))) &&
           (dVar5 = DAT_14c8464f0, dVar7 = DAT_14c8464e0, dVar9 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar10)) {
          dVar10 = 1.0 / SQRT(dVar10);
          dVar5 = dVar4 * dVar10;
          dVar7 = dVar6 * dVar10;
          dVar9 = dVar8 * dVar10;
        }
        *param_2 = dVar7;
        param_2[1] = dVar9;
        param_2[2] = dVar5;
      }
      if (local_58 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_48 = (double *)0x0;
      dStack_40 = 0.0;
      lVar1 = *(longlong *)(param_1 + 0x150);
      if ((((lVar1 == 0) || (lVar2 = FUN_1411b2cec(), lVar2 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x150);
      }
      FUN_14384d906(param_3,uVar3,&local_48);
      if (0 < dStack_40._0_4_) {
        FUN_144a76660(local_48,param_2);
      }
    }
    if (local_48 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ee48f2 FUN_147ee48f2 body=1702 status=ok
// SIG undefined FUN_147ee48f2(void)

void FUN_147ee48f2(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  longlong *plVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  double *local_148;
  longlong *local_140;
  int local_138;
  float local_130;
  longlong local_128;
  longlong *local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  double local_b8;
  int local_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = FUN_14479d2ce(param_2 + 0x34);
  if (lVar6 == 0) goto LAB_147ee4944;
  FUN_147ec268e(param_1 + 0x90,lVar6,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0xd0,lVar6,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0x160,lVar6,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0x1b0,lVar6,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0x108,lVar6,*(undefined4 *)(param_2 + 0x30));
  if (*(longlong *)(param_1 + 0x168) == 0) {
    pfVar9 = (float *)0x0;
  }
  else {
    pfVar9 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x168) + 0x44) +
                      *(longlong *)(param_1 + 0x170));
  }
  pfVar7 = (float *)(param_1 + 400);
  if (pfVar9 != (float *)0x0) {
    pfVar7 = pfVar9;
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    pfVar9 = (float *)0x0;
  }
  else {
    pfVar9 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 0x44) +
                      *(longlong *)(param_1 + 0xa0));
  }
  fVar1 = *pfVar7;
  pfVar7 = (float *)(param_1 + 0xc0);
  if (pfVar9 != (float *)0x0) {
    pfVar7 = pfVar9;
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    pfVar9 = (float *)0x0;
  }
  else {
    pfVar9 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0xd8) + 0x44) +
                      *(longlong *)(param_1 + 0xe0));
  }
  fVar2 = *pfVar7;
  pfVar7 = (float *)(param_1 + 0x100);
  if (pfVar9 != (float *)0x0) {
    pfVar7 = pfVar9;
  }
  fVar16 = *pfVar7;
  iVar4 = FUN_147ece0c8(param_1 + 0x108);
  if ((((fVar1 <= 0.0) || (360.0 < fVar1)) || (fVar2 <= 0.0)) ||
     ((cVar3 = *(char *)(param_1 + 200), fVar16 <= 0.0 && cVar3 == '\0' ||
      (iVar4 < 1 && cVar3 == '\x01')))) goto LAB_147ee4944;
  *(float *)(param_1 + 0x198) = fVar1 * 0.017453292;
  iVar11 = iVar4;
  if (cVar3 != '\x01') {
    if (cVar3 != '\0') goto LAB_147ee4944;
    fVar16 = ((fVar1 / 360.0) * fVar2 * 6.2831855) / fVar16;
    iVar11 = (int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1;
    iVar4 = 1 - iVar11;
    iVar11 = -iVar11;
  }
  FUN_147ee4606(param_1,&local_98,param_2);
  FUN_140ccff96(&local_98,&local_b8,(double)(fVar1 * -0.5) * 0.017453292519943295,&DAT_14c8462c0);
  local_98 = (double)fVar2;
  local_88 = local_a8 * local_98;
  local_90 = (double)CONCAT44(uStack_ac,local_b0) * local_98;
  local_98 = local_98 * local_b8;
  local_b8 = 0.0;
  local_b0 = 0;
  local_a8 = 0.0;
  uStack_a0 = 0;
  lVar6 = *(longlong *)(param_1 + 0x1a0);
  if (((lVar6 == 0) || (lVar8 = FUN_1411b2cec(), lVar8 == 0)) ||
     ((*(int *)(lVar6 + 0x38) < *(int *)(lVar8 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30)))) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x1a0);
  }
  cVar3 = FUN_14384d506(param_2,uVar10,&local_b8);
  dVar15 = local_b8;
  if ((((cVar3 != '\0') && (local_b8 != 0.0)) &&
      (lVar6 = FUN_1412474be(), dVar13 = local_b8, lVar6 != 0)) &&
     ((*(int *)(lVar6 + 0x38) <= *(int *)((longlong)dVar15 + 0x38) &&
      (local_b8 != 0.0 &&
       *(longlong *)(*(longlong *)((longlong)dVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       == lVar6 + 0x30)))) {
    lVar6 = FUN_1412474be();
    if ((lVar6 == 0) ||
       ((*(int *)((longlong)dVar13 + 0x38) < *(int *)(lVar6 + 0x38) ||
        (dVar15 = local_b8,
        *(longlong *)(*(longlong *)((longlong)dVar13 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)))) {
      dVar15 = 0.0;
    }
    lVar6 = FUN_145869c20();
    dVar13 = local_b8;
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)((longlong)dVar15 + 0x38))) &&
       (*(longlong *)(*(longlong *)((longlong)dVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      if (((local_b8 == 0.0) || (lVar6 = FUN_1412474be(), lVar6 == 0)) ||
         ((*(int *)((longlong)dVar13 + 0x38) < *(int *)(lVar6 + 0x38) ||
          (dVar15 = local_b8,
          *(longlong *)
           (*(longlong *)((longlong)dVar13 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)))) {
        dVar15 = 0.0;
      }
      plVar14 = *(longlong **)((longlong)dVar15 + 0x110);
      if (plVar14 == (longlong *)0x0) {
        FUN_140aa6c08(dVar15);
        plVar14 = *(longlong **)((longlong)dVar15 + 0x110);
      }
      dVar15 = local_b8;
      local_108 = (ulonglong)*(ushort *)(plVar14 + 5);
      local_c8 = 0;
      uStack_c0 = 0;
      if (*(char *)(param_1 + 0x1a8) == '\x01') {
        if (((local_b8 == 0.0) || (lVar6 = FUN_1412474be(), lVar6 == 0)) ||
           ((*(int *)((longlong)dVar15 + 0x38) < *(int *)(lVar6 + 0x38) ||
            (dVar13 = local_b8,
            *(longlong *)
             (*(longlong *)((longlong)dVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)))) {
          dVar13 = 0.0;
        }
        local_118 = *(longlong **)((longlong)dVar13 + 0x110);
        if (local_118 == (longlong *)0x0) {
          FUN_140aa6c08(dVar13);
          local_118 = *(longlong **)((longlong)dVar13 + 0x110);
          if (local_118 == (longlong *)0x0) goto LAB_147ee4dbf;
        }
        lVar6 = FUN_1459eb736();
        if (((*(int *)(lVar6 + 0x38) <= *(int *)(local_118[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(local_118[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30)) && (0 < local_b0)) {
          iVar12 = 0;
          dVar15 = local_a8;
          do {
            local_100 = (**(code **)(*local_118 + 0x2c8))(local_118,dVar15);
            if (local_100 != 0) {
              local_110 = (longlong)(int)uStack_c0;
              uVar5 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar5);
              if (uStack_c0._4_4_ < uVar5) {
                FUN_1447d05f2(&local_c8,local_110);
              }
              *(longlong *)(local_c8 + local_110 * 8) = local_100;
            }
            dVar15 = (double)((longlong)dVar15 + local_108);
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_b0);
        }
      }
LAB_147ee4dbf:
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        pfVar9 = (float *)0x0;
      }
      else {
        pfVar9 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x44) +
                          *(longlong *)(param_1 + 0x1c0));
      }
      pfVar7 = (float *)(param_1 + 0x1e0);
      if (pfVar9 != (float *)0x0) {
        pfVar7 = pfVar9;
      }
      if (0 < local_b0) {
        fVar2 = *pfVar7;
        iVar12 = 0;
        dVar15 = local_a8;
        do {
          (**(code **)(*plVar14 + 0x2b8))(plVar14,&local_f8,dVar15);
          local_d0 = local_e8 + (double)fVar2;
          local_d8 = local_f0 + 0.0;
          local_e0 = local_f8 + 0.0;
          local_140 = &local_c8;
          local_148 = &local_98;
          local_138 = iVar4;
          local_130 = fVar1 / (float)iVar11;
          local_128 = param_2;
          FUN_147ee4f9a(param_1,dVar15,plVar14,&local_e0);
          dVar15 = (double)((longlong)dVar15 + local_108);
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_b0);
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_a8 != 0.0) {
    FUN_1400020a8();
  }
LAB_147ee4944:
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee4f9a FUN_147ee4f9a body=645 status=ok
// SIG undefined FUN_147ee4f9a(void)

void FUN_147ee4f9a(longlong *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 param_5,void **param_6,uint param_7,float param_8,longlong param_9)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  void **local_b8;
  void **local_b0;
  double local_a0;
  double local_98;
  double local_90;
  void *local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (void *)0x0;
  uStack_80 = (ulonglong)param_7;
  if (param_7 != 0) {
    FUN_147ef0984(&local_88);
    memset(local_88,0,(longlong)(int)param_7 << 5);
    if (0 < (int)param_7) {
      lVar5 = 0x18;
      uVar7 = 0;
      do {
        FUN_140ccff96(param_5,&local_a0,(double)((float)(int)uVar7 * param_8) * 0.017453292519943295
                      ,&DAT_14c8462c0);
        dVar2 = param_4[2];
        dVar3 = param_4[1];
        *(double *)((longlong)local_88 + lVar5 + -0x18) = *param_4 + local_a0;
        *(double *)((longlong)local_88 + lVar5 + -0x10) = dVar3 + local_98;
        *(double *)((longlong)local_88 + lVar5 + -8) = dVar2 + local_90;
        *(undefined8 *)((longlong)local_88 + lVar5) = 0;
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x20;
      } while (param_7 != uVar7);
    }
  }
  plVar1 = param_1 + 0x3d;
  bVar4 = *(byte *)((longlong)param_1 + 0x21d);
  if (bVar4 - 2 < 2) {
    local_b8 = param_6;
    FUN_1438512a0(*(undefined8 *)(param_9 + 0x58),plVar1,param_4,&local_88);
  }
  else if (bVar4 == 1) {
    lVar5 = FUN_147ee0098(param_9);
    lVar6 = FUN_14479d2ce(param_9 + 0x34);
    if (lVar6 != 0 && lVar5 != 0) {
      local_b8 = &local_88;
      FUN_147edd4a0(lVar5,lVar6,plVar1,param_4);
    }
  }
  else if (bVar4 == 4) {
    lVar5 = FUN_147ee0098(param_9);
    lVar6 = FUN_14479d2ce(param_9 + 0x34);
    if (lVar6 != 0 && lVar5 != 0) {
      local_b0 = param_6;
      local_b8 = &local_88;
      FUN_143850c31(lVar5,lVar6,plVar1,param_4);
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_88,param_9);
  local_b8 = (void **)param_9;
  (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_3,&local_88);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee5236 FUN_147ee5236 body=594 status=ok
// SIG undefined FUN_147ee5236(void)

undefined8 FUN_147ee5236(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  longlong local_80;
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147ed8d26(local_68,param_1);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescriptionTitle");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_80 = *(longlong *)(param_1 + 0x1a0);
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_68,&local_80);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_78,L"DescribeContext");
  FUN_140233eec(&local_58,local_78,&local_48);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_48 = L"DescriptionGenerateCircleAroundContext";
  local_40 = 0x26;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"EnvQueryGenerator";
  local_40 = 0x11;
  FUN_1446e940c(local_78,&local_48);
  FUN_140208bae(&local_48,local_78,local_68,
                L"{DescriptionTitle}: generate items on circle around {DescribeContext}");
  FUN_14023409e(local_90,&local_48,1);
  FUN_140233c04(param_2,local_90,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee548a FUN_147ee548a body=2539 status=ok
// SIG undefined FUN_147ee548a(void)

longlong * FUN_147ee548a(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [44];
  undefined1 local_ec [4];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong *local_98 [2];
  longlong *local_88;
  ulonglong uStack_80;
  longlong *local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = 0;
  uStack_60 = 0;
  FUN_147ecddc8(param_1 + 0x90,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,&local_78);
  FUN_140056680(local_98,L"Radius");
  FUN_140233eec(&local_68,local_98,&local_50);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ecddc8(param_1 + 0xd0,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,&local_78);
  FUN_140056680(local_98,L"ItemSpacing");
  FUN_140233eec(&local_68,local_98,&local_50);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ecddc8(param_1 + 0x108,&local_88);
  FUN_140233b1a(&local_78,&local_88);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,&local_78);
  FUN_140056680(local_98,L"NumberOfPoints");
  FUN_140233eec(&local_68,local_98,&local_50);
  if (local_98[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147ede66a(param_1 + 0x1e8,&local_78,1);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,&local_78);
  FUN_140056680(&local_88,L"TraceData");
  FUN_140233eec(&local_68,&local_88,&local_50);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (*(char *)(param_1 + 200) == '\0') {
    local_50 = L"OnCircleDescriptionSpan";
    local_48 = 0x17;
    FUN_1446e940c(&local_78,&local_50);
    local_50 = L"EnvQueryGenerator";
    local_48 = 0x11;
    FUN_1446e940c(&local_88,&local_50);
    FUN_140208bae(&local_50,&local_88,&local_78,
                  L"radius: {Radius}, item span: {ItemSpacing}\n{TraceData}");
    puVar2 = local_a8;
  }
  else {
    local_50 = L"OnCircleDescriptionNumItems";
    local_48 = 0x1b;
    FUN_1446e940c(local_98,&local_50);
    local_50 = L"EnvQueryGenerator";
    local_48 = 0x11;
    FUN_1446e940c(local_c8,&local_50);
    FUN_140208bae(&local_50,local_c8,local_98,
                  L"radius: {Radius}, number of items to generate: {NumberOfPoints}\n{TraceData}");
    puVar2 = local_b8;
  }
  FUN_14023409e(puVar2,&local_50,1);
  FUN_140233c04(param_2,puVar2,&local_68);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((*(byte *)(param_1 + 0x228) & 1) != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    local_40 = (longlong *)*param_2;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
    local_38 = (undefined4)param_2[1];
    FUN_140056680(&local_88,L"Description");
    FUN_140233eec(&local_78,&local_88,&local_50);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    FUN_147ecddc8(param_1 + 0x160,local_98);
    FUN_140233b1a(&local_88,local_98);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(&local_40,&local_88);
    FUN_140056680(local_c8,L"AngleValue");
    FUN_140233eec(&local_78,local_c8,&local_50);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      local_40 = (longlong *)0x0;
      local_38 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_147ede256(param_1 + 0x140,&local_88);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(&local_40,&local_88);
    FUN_140056680(local_98,L"ArcDirection");
    FUN_140233eec(&local_78,local_98,&local_50);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      local_40 = (longlong *)0x0;
      local_38 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    local_50 = L"DescriptionWithArc";
    local_48 = 0x12;
    FUN_1446e940c(local_98,&local_50);
    local_50 = L"EnvQueryGenerator";
    local_48 = 0x11;
    FUN_1446e940c(local_c8,&local_50);
    FUN_140208bae(&local_88,local_c8,local_98,
                  L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}");
    FUN_14023409e(local_d8,&local_88,1);
    FUN_140233c04(&local_50,local_d8,&local_78);
    FUN_140008f88(param_2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    FUN_14010f8af(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_147ede66a(param_1 + 0x50,&local_78,0);
  cVar1 = FUN_144a7c5f6(&local_78);
  if (cVar1 == '\0') {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    local_40 = (longlong *)*param_2;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
    local_38 = (undefined4)param_2[1];
    FUN_140056680(local_98,L"Description");
    FUN_140233eec(&local_88,local_98,&local_50);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    local_40 = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    local_38 = (undefined4)uStack_70;
    FUN_140056680(local_98,L"ProjectionDescription");
    FUN_140233eec(&local_88,local_98,&local_50);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    local_50 = L"OnCircle_DescriptionWithProjection";
    local_48 = 0x22;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"EnvQueryGenerator";
    local_48 = 0x11;
    FUN_1446e940c(local_ec,&local_50);
    FUN_140208bae(local_98,local_ec,local_c8,L"{Description}, {ProjectionDescription}");
    FUN_14023409e(local_e8,local_98,1);
    FUN_140233c04(&local_50,local_e8,&local_88);
    FUN_140008f88(param_2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_14010f8af(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee5e80 FUN_147ee5e80 body=166 status=ok
// SIG undefined FUN_147ee5e80(void)

void FUN_147ee5e80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  
  if (*(char *)(param_1 + 0x85) == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_147ee0098(param_3);
  }
  lVar1 = FUN_14479d2ce(param_3 + 0x34);
  bVar3 = *(byte *)(param_1 + 0x85);
  if (bVar3 == 1 && (lVar1 != 0 && lVar2 != 0)) {
    FUN_147edd6da(lVar2,lVar1,param_1 + 0x50,param_2);
    bVar3 = *(byte *)(param_1 + 0x85);
  }
  if ((bVar3 & 0xfe) == 2) {
    FUN_143851572(*(undefined8 *)(param_3 + 0x58),param_1 + 0x50,param_2);
    return;
  }
  return;
}



// FUNCTION 147ee5f32 FUN_147ee5f32 body=235 status=ok
// SIG undefined FUN_147ee5f32(void)

void FUN_147ee5f32(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (1 < (int)param_1[1]) {
    FUN_147ef0eae(*param_1);
    iVar4 = (int)param_1[1];
    if (1 < iVar4) {
      iVar8 = -1;
      lVar6 = 2;
      lVar11 = 1;
      lVar12 = *(longlong *)*param_1;
      do {
        lVar1 = lVar11 + 1;
        while( true ) {
          lVar3 = *param_1;
          lVar9 = *(longlong *)(lVar3 + lVar11 * 8);
          lVar5 = (longlong)iVar4;
          if (lVar9 != lVar12) break;
          uVar7 = 1;
          iVar10 = (int)lVar1;
          if (lVar1 < lVar5) {
            uVar7 = (ulonglong)(uint)(iVar4 + iVar8);
            lVar9 = 0;
            do {
              iVar10 = (int)lVar9;
              if (*(longlong *)(lVar3 + (longlong)((int)lVar6 + iVar10) * 8) != lVar12) {
                uVar7 = (ulonglong)(iVar10 + 1);
                iVar10 = (int)lVar6 + iVar10;
                break;
              }
              lVar2 = lVar6 + lVar9;
              lVar9 = lVar9 + 1;
              iVar10 = iVar4;
            } while (lVar2 + 1 < lVar5);
          }
          if (iVar4 - iVar10 != 0) {
            _Dst = (void *)(lVar3 + lVar11 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + uVar7 * 8),(longlong)(iVar4 - iVar10) << 3);
            iVar4 = (int)param_1[1];
          }
          iVar4 = iVar4 - (int)uVar7;
          *(int *)(param_1 + 1) = iVar4;
          if (iVar4 <= lVar11) {
            return;
          }
        }
        iVar8 = iVar8 + -1;
        lVar6 = lVar6 + 1;
        lVar11 = lVar1;
        lVar12 = lVar9;
      } while (lVar1 < lVar5);
    }
  }
  return;
}



// FUNCTION 147ee601e FUN_147ee601e body=1246 status=ok
// SIG undefined FUN_147ee601e(void)

void FUN_147ee601e(longlong param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  double *pdVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = FUN_14479d2ce(param_2 + 0x34);
  if ((lVar7 != 0) && (lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,lVar7,1), lVar8 != 0)) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    lVar8 = *(longlong *)(param_1 + 0x90);
    if ((lVar8 == 0) ||
       (((lVar9 = FUN_1411b2cec(), lVar9 == 0 || (*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38)))
        || (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
            lVar9 + 0x30)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x90);
    }
    FUN_147ecf078(param_2,uVar10,&local_d8);
    local_108 = param_2;
    FUN_147ec268e(param_1 + 0x58,lVar7,*(undefined4 *)(param_2 + 0x30));
    if ((longlong)(int)uStack_d0 != 0) {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        pfVar14 = (float *)0x0;
      }
      else {
        pfVar14 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x44) +
                           *(longlong *)(param_1 + 0x68));
      }
      pfVar15 = (float *)(param_1 + 0x88);
      if (pfVar14 != (float *)0x0) {
        pfVar15 = pfVar14;
      }
      plVar19 = local_d8 + (int)uStack_d0;
      fVar1 = *pfVar15;
      plVar16 = local_d8;
      local_100 = lVar7;
      do {
        lVar8 = *plVar16;
        if (lVar8 != 0) {
          uVar10 = FUN_145a76094();
          plVar11 = (longlong *)FUN_144718840(lVar8,uVar10);
          if (plVar11 == (longlong *)0x0) {
            lVar9 = FUN_144a7cbb2();
            if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
               (lVar9 = *(longlong *)(lVar7 + 0x3c0), lVar9 != 0)) {
              uVar10 = FUN_145a76094();
              plVar11 = (longlong *)FUN_144718840(lVar9,uVar10);
              if (plVar11 != (longlong *)0x0) goto LAB_147ee626a;
            }
          }
          else {
LAB_147ee626a:
            lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11);
            if (lVar9 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x1c8);
              if (lVar8 == 0) {
                uVar22 = (undefined4)DAT_14c8464f0;
                uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                pdVar12 = (double *)&DAT_14c8464e0;
              }
              else {
                uVar22 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
                uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
                pdVar12 = (double *)(lVar8 + 0x260);
              }
              dVar3 = *pdVar12;
              dVar4 = pdVar12[1];
              local_e8 = 0;
              uStack_e0 = 0;
              lVar8 = *(longlong *)(param_1 + 0x98);
              if (*(char *)(param_1 + 0xa0) == '\x01') {
                local_f0 = lVar8;
                if ((lVar8 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                FUN_147efda5a(lVar9,&local_f0,&local_e8);
              }
              else {
                local_f8 = lVar8;
                if ((lVar8 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                FUN_147efd688(lVar9,&local_f8,&local_e8);
              }
              lVar8 = local_e8;
              lVar9 = (longlong)(int)uStack_e0;
              if (lVar9 != 0) {
                lVar17 = 0;
                do {
                  lVar7 = *(longlong *)(lVar8 + lVar17);
                  if (lVar7 != 0) {
                    if (0.0 < fVar1) {
                      lVar18 = *(longlong *)(lVar7 + 0x1c8);
                      if (lVar18 == 0) {
                        uVar20 = (undefined4)DAT_14c8464f0;
                        uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                        pdVar12 = (double *)&DAT_14c8464e0;
                      }
                      else {
                        uVar20 = (undefined4)*(undefined8 *)(lVar18 + 0x270);
                        uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x270) >> 0x20);
                        pdVar12 = (double *)(lVar18 + 0x260);
                      }
                      dVar2 = (double)CONCAT44(uVar21,uVar20) - (double)CONCAT44(uVar23,uVar22);
                      if ((double)(fVar1 * fVar1) <=
                          dVar2 * dVar2 +
                          (*pdVar12 - dVar3) * (*pdVar12 - dVar3) +
                          (pdVar12[1] - dVar4) * (pdVar12[1] - dVar4)) goto LAB_147ee6434;
                    }
                    lVar18 = *(longlong *)(param_1 + 0x50);
                    if (((lVar18 != 0) && (lVar13 = FUN_144a6c4d8(), lVar13 != 0)) &&
                       ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar18 + 0x38) &&
                        ((*(longlong *)
                           (*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                          lVar13 + 0x30 && (lVar18 = *(longlong *)(param_1 + 0x50), lVar18 != 0)))))
                       ) {
                      lVar13 = FUN_144a6c4d8();
                      if ((lVar13 == 0) ||
                         ((*(int *)(lVar18 + 0x38) < *(int *)(lVar13 + 0x38) ||
                          (*(longlong *)
                            (*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
                           != lVar13 + 0x30)))) {
                        lVar18 = 0;
                      }
                      else {
                        lVar18 = *(longlong *)(param_1 + 0x50);
                      }
                      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30))
                      goto LAB_147ee6434;
                    }
                    uVar5 = uStack_c0;
                    lVar18 = (longlong)(int)uStack_c0;
                    uVar6 = (int)uStack_c0 + 1;
                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
                    if (uStack_c0._4_4_ < uVar6) {
                      FUN_1447d05f2(&local_c8,uVar5 & 0xffffffff);
                    }
                    *(longlong *)(local_c8 + lVar18 * 8) = lVar7;
                  }
LAB_147ee6434:
                  lVar17 = lVar17 + 8;
                  lVar7 = local_100;
                } while (lVar9 * 8 != lVar17);
              }
              if (local_e8 != 0) {
                FUN_1400020a8(local_e8);
              }
            }
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar19);
    }
    FUN_147ee5f32(&local_c8);
    lVar8 = local_c8;
    lVar7 = local_108;
    lVar9 = (longlong)(int)uStack_c0;
    if (lVar9 != 0) {
      lVar17 = 0;
      do {
        local_e8 = 0;
        FUN_14485c47a(&local_e8,*(undefined8 *)(lVar8 + lVar17));
        FUN_1438575ac(lVar7,&local_e8);
        lVar17 = lVar17 + 8;
      } while (lVar9 * 8 != lVar17);
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee64fe FUN_147ee64fe body=442 status=ok
// SIG undefined FUN_147ee64fe(void)

undefined8 FUN_147ee64fe(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  longlong local_80 [2];
  longlong local_70;
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = *(longlong *)(param_1 + 0x90);
  if ((local_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_68,&local_70);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_80,L"DescribeContext");
  FUN_140233eec(&local_58,local_80,&local_48);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_48 = L"DescriptionGeneratePerceivedActors";
  local_40 = 0x22;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"EnvQueryGenerator";
  local_40 = 0x11;
  FUN_1446e940c(local_80,&local_48);
  FUN_140208bae(&local_48,local_80,local_68,L"Actors perceived by {DescribeContext}");
  FUN_14023409e(local_90,&local_48,1);
  FUN_140233c04(param_2,local_90,&local_58);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee66ba FUN_147ee66ba body=1329 status=ok
// SIG undefined FUN_147ee66ba(void)

undefined8 FUN_147ee66ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  undefined1 *puVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong *local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      pfVar2 = (float *)0x0;
    }
    else {
      pfVar2 = (float *)(longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x44);
    }
    pfVar4 = (float *)(param_1 + 0x88);
    if (pfVar2 != (float *)0x0) {
      pfVar4 = pfVar2;
    }
    if (0.0 < *pfVar4) goto LAB_147ee66f3;
    FUN_140056680(local_88,L"Perception Range");
  }
  else {
LAB_147ee66f3:
    FUN_147ecddc8(param_1 + 0x58,local_88);
  }
  FUN_140233b1a(local_78,local_88);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,local_78);
  FUN_140056680(local_98,L"Radius");
  FUN_140233eec(&local_68,local_98,&local_50);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (lVar3 == 0) {
LAB_147ee67db:
    FUN_140056680(local_88,L"All senses");
    FUN_140233b1a(local_78,local_88);
  }
  else {
    lVar1 = FUN_1411a19f0();
    if ((((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)) || (lVar3 = *(longlong *)(param_1 + 0x98), lVar3 == 0)) goto LAB_147ee67db;
    lVar1 = FUN_1411a19f0();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x98);
    }
    local_50 = *(wchar_t **)(lVar3 + 0x18);
    FUN_1400021e4(&local_50,local_88);
    FUN_140233b1a(local_78,local_88);
  }
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(&local_40,local_78);
  FUN_140056680(local_98,L"Sense");
  FUN_140233eec(&local_68,local_98,&local_50);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    local_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar1 = FUN_144a6c4d8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x50), lVar3 != 0)))) {
      lVar1 = FUN_144a6c4d8();
      if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x50);
      }
      local_50 = *(wchar_t **)(lVar3 + 0x18);
      FUN_1400021e4(&local_50,local_88);
      FUN_140233b1a(local_78,local_88);
      local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
      FUN_14023423e(&local_40,local_78);
      FUN_140056680(local_98,L"ActorClass");
      FUN_140233eec(&local_68,local_98,&local_50);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        local_40 = (longlong *)0x0;
        local_38 = 0;
      }
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      local_50 = L"PerceivedActorsOfClassDescription";
      local_48 = 0x21;
      FUN_1446e940c(local_78,&local_50);
      local_50 = L"EnvQueryGenerator";
      local_48 = 0x11;
      FUN_1446e940c(local_88,&local_50);
      FUN_140208bae(&local_50,local_88,local_78,
                    L"radius: {Radius}\nsense: {Sense}\nactors of class: {ActorClass}");
      puVar5 = local_a8;
      goto LAB_147ee6934;
    }
  }
  local_50 = L"PerceivedActorsDescription";
  local_48 = 0x1a;
  FUN_1446e940c(local_78,&local_50);
  local_50 = L"EnvQueryGenerator";
  local_48 = 0x11;
  FUN_1446e940c(local_88,&local_50);
  FUN_140208bae(&local_50,local_88,local_78,L"radius: {Radius}\nsense: {Sense}");
  puVar5 = local_b8;
LAB_147ee6934:
  FUN_14023409e(puVar5,&local_50,1);
  FUN_140233c04(param_2,puVar5,&local_68);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee6bf0 FUN_147ee6bf0 body=204 status=ok
// SIG undefined FUN_147ee6bf0(void)

void FUN_147ee6bf0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14384e41e(param_3,(int)param_2[1] + *(int *)(param_3 + 8));
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*param_2 + lVar3);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      puVar1 = (undefined4 *)(*param_2 + 0x10 + lVar3);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      FUN_1438520fa(param_3,&local_58);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  lVar2 = (longlong)*(int *)(param_3 + 0x2c) * 0x30;
  *(uint *)(*(longlong *)(param_3 + 0x110) + 0x28 + lVar2) =
       *(uint *)(*(longlong *)(param_3 + 0x110) + 0x28 + lVar2) & 0xfffffffe |
       (uint)(*(char *)(param_1 + 0x85) == '\x01');
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee6cc2 FUN_147ee6cc2 body=817 status=ok
// SIG undefined FUN_147ee6cc2(void)

void FUN_147ee6cc2(longlong *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = FUN_14479d2ce(param_2 + 0x34);
  FUN_147ec268e(param_1 + 0x12,uVar7,*(undefined4 *)(param_2 + 0x30));
  FUN_147ec268e(param_1 + 0x19,uVar7,*(undefined4 *)(param_2 + 0x30));
  if (param_1[0x13] == 0) {
    pfVar8 = (float *)0x0;
  }
  else {
    pfVar8 = (float *)((longlong)*(int *)(param_1[0x13] + 0x44) + param_1[0x14]);
  }
  pfVar10 = (float *)(param_1 + 0x18);
  if (pfVar8 != (float *)0x0) {
    pfVar10 = pfVar8;
  }
  if (param_1[0x1a] == 0) {
    pfVar8 = (float *)0x0;
  }
  else {
    pfVar8 = (float *)((longlong)*(int *)(param_1[0x1a] + 0x44) + param_1[0x1b]);
  }
  pfVar11 = (float *)(param_1 + 0x1f);
  if (pfVar8 != (float *)0x0) {
    pfVar11 = pfVar8;
  }
  fVar1 = *pfVar11;
  iVar14 = (int)((*pfVar10 + *pfVar10) / fVar1 + 1.0);
  local_b8 = 0;
  uStack_b0 = 0;
  lVar13 = param_1[0x20];
  if (lVar13 != 0) {
    lVar9 = FUN_1411b2cec();
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30)) {
      lVar13 = param_1[0x20];
      goto LAB_147ee6df9;
    }
  }
  lVar13 = 0;
LAB_147ee6df9:
  FUN_14384d67c(param_2,lVar13,&local_b8);
  local_c8 = 0;
  uStack_c0 = 0;
  iVar12 = iVar14 * iVar14 * (int)uStack_b0;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  local_e0 = param_1;
  local_d8 = param_2;
  if (iVar12 != 0) {
    FUN_147ef0afe(&local_c8);
  }
  if (0 < (int)uStack_b0) {
    lVar13 = 0;
    iVar12 = (int)uStack_b0;
    do {
      if (0 < iVar14) {
        iVar12 = 0;
        local_d0 = lVar13;
        do {
          iVar15 = 0;
          do {
            uVar5 = uStack_c0;
            uVar7 = *(undefined8 *)(local_b8 + 0x10 + lVar13 * 0x18);
            dVar2 = *(double *)(local_b8 + lVar13 * 0x18);
            dVar3 = *(double *)(local_b8 + 8 + lVar13 * 0x18);
            lVar9 = (longlong)(int)uStack_c0;
            uVar6 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
            if (uStack_c0._4_4_ < uVar6) {
              FUN_147ef0984(&local_c8,uVar5 & 0xffffffff);
            }
            lVar9 = lVar9 * 0x20;
            *(double *)(local_c8 + lVar9) = dVar2 - (double)((float)(iVar12 - iVar14 / 2) * fVar1);
            *(double *)(local_c8 + 8 + lVar9) =
                 dVar3 - (double)((float)(iVar15 - iVar14 / 2) * fVar1);
            *(undefined8 *)(local_c8 + 0x10 + lVar9) = uVar7;
            *(undefined8 *)(local_c8 + 0x18 + lVar9) = 0;
            iVar15 = iVar15 + 1;
          } while (iVar14 != iVar15);
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar14);
        lVar13 = local_d0;
        iVar12 = (int)uStack_b0;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar12);
  }
  lVar13 = local_d8;
  plVar4 = local_e0;
  (**(code **)(*local_e0 + 0x2d0))(local_e0,&local_c8,local_d8);
  (**(code **)(*plVar4 + 0x2d8))(plVar4,&local_c8,lVar13);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee6ff6 FUN_147ee6ff6 body=589 status=ok
// SIG undefined FUN_147ee6ff6(void)

undefined8 FUN_147ee6ff6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0 [2];
  longlong local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d0 = *(longlong *)(param_1 + 0x100);
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_c8,&local_d0);
  FUN_147ed8d26(local_e0,param_1);
  local_88 = L"SimpleGridDescriptionGenerateAroundContext";
  local_80[0] = 0x2a;
  FUN_1446e940c(local_104,&local_88);
  local_88 = L"EnvQueryGenerator";
  local_80[0] = 0x11;
  FUN_1446e940c(local_108,&local_88);
  FUN_140208bae(local_100,local_108,local_104,L"{0}: generate around {1}");
  FUN_14023409e(&local_f0,local_100,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_e0);
  local_68 = 4;
  FUN_14023423e(local_58,local_c8);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_f0;
  local_b0 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != -0x10);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
      }
    }
  }
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7244 FUN_147ee7244 body=1217 status=ok
// SIG undefined FUN_147ee7244(void)

longlong * FUN_147ee7244(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_158 [40];
  undefined1 local_130 [16];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  longlong *local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong local_d8 [2];
  longlong *local_c8 [2];
  longlong *local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *puStack_a0;
  longlong *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_147ecddc8(param_1 + 200,local_d8);
  FUN_140233b1a(local_c8,local_d8);
  FUN_147ecddc8(param_1 + 0x90,local_f8);
  FUN_140233b1a(local_e8,local_f8);
  local_88 = L"SimpleGridDescription";
  local_80[0] = 0x15;
  FUN_1446e940c(local_11c,&local_88);
  local_88 = L"EnvQueryGenerator";
  local_80[0] = 0x11;
  FUN_1446e940c(local_120,&local_88);
  FUN_140208bae(local_118,local_120,local_11c,L"radius: {0}, space between: {1}");
  FUN_14023409e(&local_108,local_118,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(&local_78,local_e8);
  local_68 = 4;
  FUN_14023423e(local_58,local_c8);
  puStack_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_108;
  local_b0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_80 + lVar4 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar4) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x10);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_147ede66a(param_1 + 0x50,&local_98,0);
  cVar3 = FUN_144a7c5f6(&local_98);
  if (cVar3 == '\0') {
    local_a8 = (wchar_t **)0x0;
    puStack_a0 = (ulonglong *)0x0;
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    local_78 = (longlong *)*param_2;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    local_70 = (undefined4)param_2[1];
    FUN_140056680(&local_b8,L"Description");
    FUN_140233eec(&local_a8,&local_b8,&local_88);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    local_78 = local_98;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    local_70 = local_90;
    FUN_140056680(&local_b8,L"ProjectionDescription");
    FUN_140233eec(&local_a8,&local_b8,&local_88);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    local_88 = L"SimpleGridDescriptionWithProjection";
    local_80[0] = 0x23;
    FUN_1446e940c(local_d8,&local_88);
    local_88 = L"EnvQueryGenerator";
    local_80[0] = 0x11;
    FUN_1446e940c(local_f8,&local_88);
    FUN_140208bae(&local_b8,local_f8,local_d8,L"{Description}, {ProjectionDescription}");
    FUN_14023409e(local_130,&local_b8,1);
    FUN_140233c04(&local_88,local_130,&local_a8);
    FUN_140008f88(param_2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    FUN_14010f8af(local_a8,(ulonglong)puStack_a0 & 0xffffffff);
    if (local_a8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7710 FUN_147ee7710 body=32 status=ok
// SIG undefined FUN_147ee7710(void)

undefined8 FUN_147ee7710(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"item");
  return param_2;
}



// FUNCTION 147ee7734 FUN_147ee7734 body=167 status=ok
// SIG undefined FUN_147ee7734(void)

undefined8 * FUN_147ee7734(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  lVar5 = FUN_14479d2ce();
  if (lVar5 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar5 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar3 = (undefined4)DAT_14c8464e8;
      uVar2 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    }
    else {
      uVar1 = *(undefined8 *)(lVar5 + 0x268);
      *param_2 = *(undefined8 *)(lVar5 + 0x260);
      param_2[1] = uVar1;
      param_2[2] = *(undefined8 *)(lVar5 + 0x270);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  param_2[2] = DAT_14cb1fda0;
  uVar4 = DAT_14cb1fd98._4_4_;
  uVar3 = (undefined4)DAT_14cb1fd98;
  uVar2 = DAT_14cb1fd90._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14cb1fd90;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ee77dc FUN_147ee77dc body=386 status=ok
// SIG undefined FUN_147ee77dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_147ee77dc(undefined8 param_1,undefined4 *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_3;
  uVar12 = SUB84(&local_78,0);
  dVar9 = (double)FUN_14479d2ce();
  if (dVar9 != 0.0) {
    lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
    if (lVar1 == 0) {
      *(double *)(param_2 + 4) = DAT_14c846508;
      uVar12 = (undefined4)DAT_14c8464f8;
      uVar13 = DAT_14c8464f8._4_4_;
      uVar14 = (undefined4)DAT_14c846500;
      uVar15 = DAT_14c846500._4_4_;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      local_78 = dVar4;
      uStack_70 = dVar5;
      local_68 = dVar6;
      uStack_60 = dVar7;
      if (pdVar10 == (double *)0x0) {
        uVar12 = 0x40;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar11 = movmskpd(uVar12,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar10[6] = local_48;
        pdVar10[4] = local_58;
        pdVar10[5] = dStack_50;
      }
      *(double *)(param_2 + 4) = pdVar10[6];
      uVar12 = *(undefined4 *)(pdVar10 + 4);
      uVar13 = *(undefined4 *)((longlong)pdVar10 + 0x24);
      uVar14 = *(undefined4 *)(pdVar10 + 5);
      uVar15 = *(undefined4 *)((longlong)pdVar10 + 0x2c);
    }
    *param_2 = uVar12;
    param_2[1] = uVar13;
    param_2[2] = uVar14;
    param_2[3] = uVar15;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14cb1fd60;
  uVar14 = uRam000000014cb1fd5c;
  uVar13 = _DAT_14cb1fd58;
  uVar12 = uRam000000014cb1fd54;
  *param_2 = _DAT_14cb1fd50;
  param_2[1] = uVar12;
  param_2[2] = uVar13;
  param_2[3] = uVar14;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ee7960 FUN_147ee7960 body=62 status=ok
// SIG undefined FUN_147ee7960(void)

void FUN_147ee7960(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  FUN_14479d2ce();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee79a0 FUN_147ee79a0 body=150 status=ok
// SIG undefined FUN_147ee79a0(void)

void FUN_147ee79a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1459eb822();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_140393c76(param_1 + 2,8,1);
  local_28 = 0;
  FUN_14485c47a(&local_28,param_2);
  *(undefined8 *)param_1[2] = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7a38 FUN_147ee7a38 body=186 status=ok
// SIG undefined FUN_147ee7a38(void)

void FUN_147ee7a38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1459eb822();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *param_1 = lVar1;
  lVar1 = param_2[1];
  *(int *)(param_1 + 1) = (int)lVar1;
  FUN_140393c76(param_1 + 2,(int)lVar1 << 3,1);
  if (0 < (int)param_2[1]) {
    lVar1 = param_1[2];
    lVar2 = 0;
    do {
      local_30 = 0;
      FUN_14485c47a(&local_30,*(undefined8 *)(*param_2 + lVar2 * 8));
      *(undefined8 *)(lVar1 + lVar2 * 8) = local_30;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7af8 FUN_147ee7af8 body=138 status=ok
// SIG undefined FUN_147ee7af8(void)

void FUN_147ee7af8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458b89d2(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  local_28 = FUN_144a6c4d8();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1458b8c86(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7b9a FUN_147ee7b9a body=153 status=ok
// SIG undefined FUN_147ee7b9a(void)

ulonglong FUN_147ee7b9a(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  cVar1 = FUN_147ee7c34();
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') goto LAB_147ee7bbf;
  lVar5 = *(longlong *)(param_2 + 0x18);
  if (lVar5 == 0) {
LAB_147ee7c02:
    lVar5 = 0;
  }
  else {
    lVar2 = FUN_1411c53f8();
    if (((lVar2 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_147ee7c02;
    lVar5 = *(longlong *)(param_2 + 0x18);
  }
  lVar2 = FUN_1412dbfa6();
  if (lVar5 == lVar2) {
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1,param_4);
    FUN_147ea3f44(param_3,*(undefined2 *)(param_2 + 0x20),uVar3);
  }
  else {
    uVar4 = 0;
  }
LAB_147ee7bbf:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147ee7c34 FUN_147ee7c34 body=211 status=ok
// SIG undefined FUN_147ee7c34(void)

bool FUN_147ee7c34(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (lVar2 != 0) {
    lVar1 = FUN_1411c53f8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *(longlong *)(param_2 + 0x18);
      goto LAB_147ee7c92;
    }
  }
  lVar2 = 0;
LAB_147ee7c92:
  lVar1 = FUN_1458b8ba0();
  if (lVar2 == lVar1) {
    (**(code **)(*param_1 + 0x2b8))(param_1,&local_58,param_4);
    local_68 = local_48;
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    FUN_147eafaec(param_3,*(undefined2 *)(param_2 + 0x20));
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2 == lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7d08 FUN_147ee7d08 body=119 status=ok
// SIG undefined FUN_147ee7d08(void)

undefined8 FUN_147ee7d08(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1,param_3);
  if (lVar1 == 0) {
    FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ee7d88 FUN_147ee7d88 body=25 status=ok
// SIG undefined FUN_147ee7d88(void)

undefined8 FUN_147ee7d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79a9c(param_3);
  return param_2;
}



// FUNCTION 147ee7da2 FUN_147ee7da2 body=118 status=ok
// SIG undefined FUN_147ee7da2(void)

undefined8 FUN_147ee7da2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_30);
  local_38 = local_20;
  FUN_140002266(param_2,L"(P=%.0f,Y=%.0f,R=%.0f)",local_30,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee7e58 FUN_147ee7e58 body=106 status=ok
// SIG undefined FUN_147ee7e58(void)

void FUN_147ee7e58(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_145943f0a();
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_140393c76(param_1 + 2,0x20,1);
  puVar1 = (undefined8 *)param_1[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  puVar1[2] = param_2[2];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[3] = 0;
  return;
}



// FUNCTION 147ee7ec2 FUN_147ee7ec2 body=141 status=ok
// SIG undefined FUN_147ee7ec2(void)

void FUN_147ee7ec2(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar4 = FUN_145943f0a();
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *param_1 = lVar4;
  lVar4 = param_2[1];
  *(int *)(param_1 + 1) = (int)lVar4;
  FUN_140393c76(param_1 + 2,(int)lVar4 << 5,1);
  if (0 < (int)param_2[1]) {
    puVar5 = (undefined8 *)param_1[2];
    lVar4 = 0;
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + lVar4);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      puVar5[2] = *(undefined8 *)(*param_2 + 0x10 + lVar4);
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
      puVar5[3] = 0;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 147ee7f54 FUN_147ee7f54 body=118 status=ok
// SIG undefined FUN_147ee7f54(void)

undefined8 FUN_147ee7f54(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_30);
  local_38 = local_20;
  FUN_140002266(param_2,L"(X=%.0f,Y=%.0f,Z=%.0f)",local_30,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee8004 FUN_147ee8004 body=2052 status=ok
// SIG undefined FUN_147ee8004(void)

void FUN_147ee8004(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  LARGE_INTEGER local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  longlong local_e0;
  int local_d8;
  double local_d0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = FUN_14479d2ce((longlong)param_2 + 0x34);
  if (lVar6 == 0) goto LAB_147ee806b;
  FUN_147ec268e(param_1 + 0x88,lVar6,(int)param_2[6]);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x90) + 0x44) +
             *(longlong *)(param_1 + 0x98));
  }
  puVar9 = (undefined4 *)(param_1 + 0xb8);
  if (puVar7 != (undefined4 *)0x0) {
    puVar9 = puVar7;
  }
  uVar1 = *puVar9;
  FUN_147ec268e(param_1 + 0xc0,lVar6,(int)param_2[6]);
  if (*(longlong *)(param_1 + 200) == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x44) +
             *(longlong *)(param_1 + 0xd0));
  }
  puVar9 = (undefined4 *)(param_1 + 0xf0);
  if (puVar7 != (undefined4 *)0x0) {
    puVar9 = puVar7;
  }
  uVar2 = *puVar9;
  local_b8 = 0;
  uStack_b0 = 0;
  lVar6 = *(longlong *)(param_1 + 0x200);
  if ((((lVar6 == 0) || (lVar8 = FUN_1411b2cec(), lVar8 == 0)) ||
      (*(int *)(lVar6 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x200);
  }
  cVar5 = FUN_14384d67c(param_2,uVar10,&local_b8);
  if (cVar5 != '\0') {
    switch(*(undefined1 *)(param_1 + 0x1f8)) {
    case 0:
      FUN_147ecf2f6(&local_e0,param_1,param_2,0xffffffff);
      if ((local_d8 < *(int *)(local_e0 + 8)) && ((*(byte *)(local_e0 + 0x13e) & 1) == 0)) {
        while ((local_d0 < 0.0 ||
               (QueryPerformanceCounter(&local_f8),
               (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart) * DAT_14c83f420 + 16777216.0
               < local_d0))) {
          plVar3 = (longlong *)param_2[0x2c];
          if (plVar3 == (longlong *)0x0) {
            local_e8 = DAT_14c8464f0;
            local_f8.s.LowPart = (DWORD)DAT_14c8464e0;
            local_f8.s.HighPart = DAT_14c8464e0._4_4_;
            uStack_f0 = (undefined4)DAT_14c8464e8;
            uStack_ec = DAT_14c8464e8._4_4_;
          }
          else {
            (**(code **)(*plVar3 + 0x2b8))
                      (plVar3,&local_f8,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_d8 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          FUN_144afe924(&local_f8);
          if (0 < (int)uStack_b0) {
            lVar11 = 0;
            lVar8 = 0;
            lVar6 = local_b8;
            do {
              FUN_144afe924(lVar6 + lVar11);
              lVar6 = local_b8;
              dVar4 = *(double *)(local_b8 + lVar11) -
                      (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart);
              dVar12 = *(double *)(local_b8 + 8 + lVar11) - (double)CONCAT44(uStack_ec,uStack_f0);
              dVar13 = *(double *)(local_b8 + 0x10 + lVar11) - local_e8;
              local_108 = uVar1;
              local_100 = uVar2;
              FUN_1438521fe(&local_e0,*(undefined1 *)(param_1 + 0x34),
                            *(undefined1 *)(param_1 + 0x4a),
                            (float)SQRT(dVar13 * dVar13 + dVar12 * dVar12 + dVar4 * dVar4));
              lVar8 = lVar8 + 1;
              lVar11 = lVar11 + 0x18;
            } while (lVar8 < (int)uStack_b0);
          }
          FUN_147ee880a(&local_e0);
          if ((*(int *)(local_e0 + 8) <= local_d8) || ((*(byte *)(local_e0 + 0x13e) & 1) != 0))
          break;
        }
      }
      break;
    case 1:
      FUN_147ecf2f6(&local_e0,param_1,param_2,0xffffffff);
      if ((local_d8 < *(int *)(local_e0 + 8)) && ((*(byte *)(local_e0 + 0x13e) & 1) == 0)) {
        while ((local_d0 < 0.0 ||
               (QueryPerformanceCounter(&local_f8),
               (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart) * DAT_14c83f420 + 16777216.0
               < local_d0))) {
          plVar3 = (longlong *)param_2[0x2c];
          if (plVar3 == (longlong *)0x0) {
            local_e8 = DAT_14c8464f0;
            local_f8.s.LowPart = (DWORD)DAT_14c8464e0;
            local_f8.s.HighPart = DAT_14c8464e0._4_4_;
            uStack_f0 = (undefined4)DAT_14c8464e8;
            uStack_ec = DAT_14c8464e8._4_4_;
          }
          else {
            (**(code **)(*plVar3 + 0x2b8))
                      (plVar3,&local_f8,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_d8 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          FUN_144afe924(&local_f8);
          if (0 < (int)uStack_b0) {
            lVar11 = 0;
            lVar8 = 0;
            lVar6 = local_b8;
            do {
              FUN_144afe924(lVar6 + lVar11);
              lVar6 = local_b8;
              dVar4 = *(double *)(local_b8 + lVar11) -
                      (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart);
              dVar12 = *(double *)(local_b8 + 8 + lVar11) - (double)CONCAT44(uStack_ec,uStack_f0);
              local_108 = uVar1;
              local_100 = uVar2;
              FUN_1438521fe(&local_e0,*(undefined1 *)(param_1 + 0x34),
                            *(undefined1 *)(param_1 + 0x4a),
                            (float)SQRT(dVar12 * dVar12 + dVar4 * dVar4));
              lVar8 = lVar8 + 1;
              lVar11 = lVar11 + 0x18;
            } while (lVar8 < (int)uStack_b0);
          }
          FUN_147ee880a(&local_e0);
          if ((*(int *)(local_e0 + 8) <= local_d8) || ((*(byte *)(local_e0 + 0x13e) & 1) != 0))
          break;
        }
      }
      break;
    case 2:
      FUN_147ecf2f6(&local_e0,param_1,param_2,0xffffffff);
      if ((local_d8 < *(int *)(local_e0 + 8)) && ((*(byte *)(local_e0 + 0x13e) & 1) == 0)) {
        while ((local_d0 < 0.0 ||
               (QueryPerformanceCounter(&local_f8),
               (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart) * DAT_14c83f420 + 16777216.0
               < local_d0))) {
          plVar3 = (longlong *)param_2[0x2c];
          if (plVar3 == (longlong *)0x0) {
            local_e8 = DAT_14c8464f0;
            local_f8.s.LowPart = (DWORD)DAT_14c8464e0;
            local_f8.s.HighPart = DAT_14c8464e0._4_4_;
            uStack_f0 = (undefined4)DAT_14c8464e8;
            uStack_ec = DAT_14c8464e8._4_4_;
          }
          else {
            (**(code **)(*plVar3 + 0x2b8))
                      (plVar3,&local_f8,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_d8 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          FUN_144afe924(&local_f8);
          if (0 < (int)uStack_b0) {
            lVar11 = 0;
            lVar8 = 0;
            lVar6 = local_b8;
            do {
              FUN_144afe924(lVar6 + lVar11);
              lVar6 = local_b8;
              local_108 = uVar1;
              local_100 = uVar2;
              FUN_1438521fe(&local_e0,*(undefined1 *)(param_1 + 0x34),
                            *(undefined1 *)(param_1 + 0x4a),
                            (float)(*(double *)(local_b8 + 0x10 + lVar11) - local_e8));
              lVar8 = lVar8 + 1;
              lVar11 = lVar11 + 0x18;
            } while (lVar8 < (int)uStack_b0);
          }
          FUN_147ee880a(&local_e0);
          if ((*(int *)(local_e0 + 8) <= local_d8) || ((*(byte *)(local_e0 + 0x13e) & 1) != 0))
          break;
        }
      }
      break;
    case 3:
      FUN_147ecf2f6(&local_e0,param_1,param_2,0xffffffff);
      if ((local_d8 < *(int *)(local_e0 + 8)) && ((*(byte *)(local_e0 + 0x13e) & 1) == 0)) {
        while ((local_d0 < 0.0 ||
               (QueryPerformanceCounter(&local_f8),
               (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart) * DAT_14c83f420 + 16777216.0
               < local_d0))) {
          plVar3 = (longlong *)param_2[0x2c];
          if (plVar3 == (longlong *)0x0) {
            local_e8 = DAT_14c8464f0;
            local_f8.s.LowPart = (DWORD)DAT_14c8464e0;
            local_f8.s.HighPart = DAT_14c8464e0._4_4_;
            uStack_f0 = (undefined4)DAT_14c8464e8;
            uStack_ec = DAT_14c8464e8._4_4_;
          }
          else {
            (**(code **)(*plVar3 + 0x2b8))
                      (plVar3,&local_f8,
                       ((longlong)
                        ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_d8 * 8) << 0x21) >>
                       0x21) + param_2[3]);
          }
          FUN_144afe924(&local_f8);
          if (0 < (int)uStack_b0) {
            lVar11 = 0;
            lVar8 = 0;
            lVar6 = local_b8;
            do {
              FUN_144afe924(lVar6 + lVar11);
              lVar6 = local_b8;
              local_108 = uVar1;
              local_100 = uVar2;
              FUN_1438521fe(&local_e0,*(undefined1 *)(param_1 + 0x34),
                            *(undefined1 *)(param_1 + 0x4a),
                            ABS((float)(*(double *)(local_b8 + 0x10 + lVar11) - local_e8)));
              lVar8 = lVar8 + 1;
              lVar11 = lVar11 + 0x18;
            } while (lVar8 < (int)uStack_b0);
          }
          FUN_147ee880a(&local_e0);
          if ((*(int *)(local_e0 + 8) <= local_d8) || ((*(byte *)(local_e0 + 0x13e) & 1) != 0))
          break;
        }
      }
      break;
    default:
      goto switchD_147ee81cf_default;
    }
    *(int *)(local_e0 + 0x124) = local_d8;
  }
switchD_147ee81cf_default:
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_147ee806b:
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee880a FUN_147ee880a body=86 status=ok
// SIG undefined FUN_147ee880a(void)

void FUN_147ee880a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_147ecf428();
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x13e) & 1) == 0) {
    param_1[3] = 0;
    *(byte *)((longlong)param_1 + 0x22) = (*(byte *)((longlong)param_1 + 0x22) & 0xfc) + 1;
    lVar2 = (longlong)(int)param_1[1];
    do {
      lVar2 = lVar2 + 1;
      *(int *)(param_1 + 1) = (int)lVar2;
      if ((int)plVar1[1] <= lVar2) {
        return;
      }
    } while (0x3fffffff < *(uint *)(*plVar1 + 4 + lVar2 * 8));
  }
  return;
}



// FUNCTION 147ee8860 FUN_147ee8860 body=343 status=ok
// SIG undefined FUN_147ee8860(void)

undefined8 FUN_147ee8860(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  longlong *local_80 [2];
  longlong local_70;
  longlong *local_68 [2];
  longlong local_58 [2];
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  if ((ulonglong)*(byte *)(param_1 + 0x1f8) < 3) {
    FUN_14020fad6(&local_48,(&PTR_DAT_14ac15720)[*(byte *)(param_1 + 0x1f8)]);
  }
  local_70 = *(longlong *)(param_1 + 0x200);
  if ((local_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ede206(local_68,&local_70);
  puVar1 = (undefined8 *)FUN_1447a1f4a(local_68);
  puVar2 = &DAT_149dfb77a;
  local_88 = &DAT_149dfb77a;
  if (*(int *)(puVar1 + 1) != 0) {
    local_88 = (undefined2 *)*puVar1;
  }
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar3 = local_48;
  }
  FUN_147ed8d26(local_80,param_1);
  puVar1 = (undefined8 *)FUN_1447a1f4a(local_80);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FUN_140002266(local_58,L"%s%s: to %s",puVar2,puVar3);
  FUN_140233b1a(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != (longlong *)0x0) {
    (**(code **)(*local_80[0] + 0x10))();
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee89b8 FUN_147ee89b8 body=22 status=ok
// SIG undefined FUN_147ee89b8(void)

undefined8 FUN_147ee89b8(undefined8 param_1,undefined8 param_2)

{
  FUN_147ed9482();
  return param_2;
}



// FUNCTION 147ee89da FUN_147ee89da body=170 status=ok
// SIG undefined FUN_147ee89da(void)

undefined8 FUN_147ee89da(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 == '\0') {
    local_20 = *param_1;
    if ((local_20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    cVar1 = FUN_147ed93d4(&local_20);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_147ee8a19;
    local_28 = *param_2;
    plVar3 = &local_28;
    if ((local_28 != 0 & DAT_14c950c29) == 1) goto LAB_147ee8a0c;
  }
  else {
    local_18 = *param_3;
    plVar3 = &local_18;
    if ((DAT_14c950c29 & local_18 != 0) != 0) {
LAB_147ee8a0c:
      FUN_1456cec3c();
    }
  }
  uVar2 = FUN_147ed93d4(plVar3);
LAB_147ee8a19:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ee8a86 FUN_147ee8a86 body=243 status=ok
// SIG undefined FUN_147ee8a86(void)

void FUN_147ee8a86(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,char param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_6 == '\0') {
    local_38 = *param_4;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_40 = *param_3;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_48 = &local_38;
    FUN_147ee8b7a(param_1,param_2,param_7,&local_40);
  }
  else {
    local_30 = *param_5;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ee9050(param_1,param_2,param_8,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee8b7a FUN_147ee8b7a body=1237 status=ok
// SIG undefined FUN_147ee8b7a(void)

void FUN_147ee8b7a(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = *param_4;
  if ((local_e0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar11 = FUN_147ed93d4(&local_e0);
  uVar10 = uStack_d0;
  if (cVar11 == '\0') {
    lVar16 = *param_4;
    if ((((lVar16 == 0) || (lVar14 = FUN_1411b2cec(), lVar14 == 0)) ||
        (*(int *)(lVar16 + 0x38) < *(int *)(lVar14 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) {
      lVar16 = 0;
    }
    else {
      lVar16 = *param_4;
    }
    FUN_14384d67c(param_2,lVar16,&local_d8);
  }
  else {
    lVar16 = (longlong)(int)uStack_d0;
    uVar12 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar12);
    if (uStack_d0._4_4_ < uVar12) {
      FUN_1403e3958(&local_d8,uVar10 & 0xffffffff);
    }
    *(undefined8 *)(local_d8 + 0x10 + lVar16 * 0x18) = param_3[2];
    uVar9 = param_3[1];
    puVar1 = (undefined8 *)(local_d8 + lVar16 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar9;
  }
  if (0 < (int)uStack_d0) {
    lVar16 = 0;
    iVar13 = (int)uStack_d0;
    do {
      dVar18 = *(double *)(local_d8 + lVar16 * 0x18);
      if ((-DAT_14cb1fd90 < dVar18) && (dVar18 < DAT_14cb1fd90)) {
        lVar14 = local_d8 + lVar16 * 0x18;
        dVar18 = *(double *)(lVar14 + 8);
        if (((-DAT_14cb1fd98 < dVar18) &&
            ((dVar18 < DAT_14cb1fd98 &&
             (dVar18 = *(double *)(lVar14 + 0x10), -DAT_14cb1fda0 < dVar18)))) &&
           (dVar18 < DAT_14cb1fda0)) {
          local_f8 = 0;
          uStack_f0 = 0;
          local_100 = *param_5;
          if ((local_100 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          cVar11 = FUN_147ed93d4(&local_100);
          uVar10 = uStack_f0;
          if (cVar11 == '\0') {
            lVar14 = *param_5;
            if ((((lVar14 == 0) || (lVar17 = FUN_1411b2cec(), lVar17 == 0)) ||
                (*(int *)(lVar14 + 0x38) < *(int *)(lVar17 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
                != lVar17 + 0x30)) {
              lVar14 = 0;
            }
            else {
              lVar14 = *param_5;
            }
            FUN_14384d67c(param_2,lVar14,&local_f8);
          }
          else {
            lVar14 = (longlong)(int)uStack_f0;
            uVar12 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar12);
            if (uStack_f0._4_4_ < uVar12) {
              FUN_1403e3958(&local_f8,uVar10 & 0xffffffff);
            }
            *(undefined8 *)(local_f8 + 0x10 + lVar14 * 0x18) = param_3[2];
            uVar9 = param_3[1];
            puVar1 = (undefined8 *)(local_f8 + lVar14 * 0x18);
            *puVar1 = *param_3;
            puVar1[1] = uVar9;
          }
          if (0 < (int)uStack_f0) {
            lVar17 = 0x10;
            lVar14 = 0;
            dVar18 = DAT_14cb1fd90;
            iVar13 = (int)uStack_f0;
            do {
              dVar2 = *(double *)(local_f8 + -0x10 + lVar17);
              if ((((-dVar18 < dVar2) && (dVar2 < dVar18)) &&
                  ((dVar3 = *(double *)(local_f8 + -8 + lVar17), -DAT_14cb1fd98 < dVar3 &&
                   ((dVar3 < DAT_14cb1fd98 &&
                    (dVar4 = *(double *)(local_f8 + lVar17), -DAT_14cb1fda0 < dVar4)))))) &&
                 (dVar4 < DAT_14cb1fda0)) {
                dVar4 = dVar4 - *(double *)(local_d8 + 0x10 + lVar16 * 0x18);
                dVar3 = dVar3 - *(double *)(local_d8 + 8 + lVar16 * 0x18);
                dVar2 = dVar2 - *(double *)(local_d8 + lVar16 * 0x18);
                dVar19 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
                if (((dVar19 != 1.0) || (dVar6 = dVar4, dVar7 = dVar3, dVar8 = dVar2, NAN(dVar19)))
                   && (dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
                      9.99999993922529e-09 <= dVar19)) {
                  dVar19 = 1.0 / SQRT(dVar19);
                  dVar6 = dVar4 * dVar19;
                  dVar7 = dVar3 * dVar19;
                  dVar8 = dVar2 * dVar19;
                }
                lVar15 = (longlong)(int)param_1[1];
                uVar12 = (int)param_1[1] + 1;
                *(uint *)(param_1 + 1) = uVar12;
                if (*(uint *)((longlong)param_1 + 0xc) < uVar12) {
                  FUN_1403e3958(param_1);
                  dVar18 = DAT_14cb1fd90;
                }
                lVar5 = *param_1;
                *(double *)(lVar5 + lVar15 * 0x18) = dVar8;
                *(double *)(lVar5 + 8 + lVar15 * 0x18) = dVar7;
                *(double *)(lVar5 + 0x10 + lVar15 * 0x18) = dVar6;
                iVar13 = (int)uStack_f0;
              }
              lVar14 = lVar14 + 1;
              lVar17 = lVar17 + 0x18;
            } while (lVar14 < iVar13);
          }
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          iVar13 = (int)uStack_d0;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar13);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee9050 FUN_147ee9050 body=358 status=ok
// SIG undefined FUN_147ee9050(void)

void FUN_147ee9050(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined4 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  local_50 = *param_4;
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar7 = FUN_147ed93d4(&local_50);
  if (cVar7 != '\0') {
    uStack_40 = CONCAT44(uStack_40._4_4_,1);
    FUN_147ed6d50(&local_48,0);
    *(undefined8 *)(local_48 + 4) = *(undefined8 *)(param_3 + 4);
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *local_48 = *param_3;
    local_48[1] = uVar4;
    local_48[2] = uVar5;
    local_48[3] = uVar6;
    goto LAB_147ee90ea;
  }
  lVar9 = *param_4;
  if (lVar9 == 0) {
LAB_147ee90db:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_1411b2cec();
    if (((lVar8 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_147ee90db;
    lVar9 = *param_4;
  }
  FUN_14384d906(param_2,lVar9,&local_48);
LAB_147ee90ea:
  if (0 < (int)uStack_40) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      FUN_144a76660((longlong)local_48 + lVar9,&local_68);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1403e3958(param_1,iVar2);
      }
      lVar3 = *param_1;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_58;
      puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar8 < (int)uStack_40);
  }
  if (local_48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee91b8 FUN_147ee91b8 body=435 status=ok
// SIG undefined FUN_147ee91b8(void)

undefined8 FUN_147ee91b8(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  longlong *local_98 [2];
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if (*(char *)(param_1 + 0x238) == '\0') {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    if (*(char *)(param_1 + 0x238) != '\x01') goto LAB_147ee921a;
    puVar2 = (undefined2 *)&DAT_14ac0ec68;
  }
  FUN_14020fad6(&local_58,puVar2);
LAB_147ee921a:
  FUN_147ede256(param_1 + 0x218,local_78);
  puVar1 = (undefined8 *)FUN_1447a1f4a(local_78);
  pwVar3 = L"";
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FUN_147ede256(param_1 + 0x1f8,local_88);
  puVar1 = (undefined8 *)FUN_1447a1f4a(local_88);
  local_b0 = &DAT_149dfb77a;
  if (*(int *)(puVar1 + 1) != 0) {
    local_b0 = (undefined2 *)*puVar1;
  }
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar5 = local_58;
  }
  FUN_147ed8d26(local_98,param_1);
  puVar1 = (undefined8 *)FUN_1447a1f4a(local_98);
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(puVar1 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar1;
  }
  if (*(char *)(param_1 + 0x239) != '\0') {
    pwVar3 = L"Absolute ";
  }
  local_b8 = puVar5;
  local_a8 = puVar2;
  FUN_140002266(local_68,L"%s%s%s: %s and %s",pwVar3,puVar4);
  FUN_140233b1a(param_2,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee936c FUN_147ee936c body=22 status=ok
// SIG undefined FUN_147ee936c(void)

undefined8 FUN_147ee936c(undefined8 param_1,undefined8 param_2)

{
  FUN_147ed9482();
  return param_2;
}



// FUNCTION 147ee939c FUN_147ee939c body=75 status=ok
// SIG undefined FUN_147ee939c(void)

void FUN_147ee939c(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0x241) = 1;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee93e8 FUN_147ee93e8 body=308 status=ok
// SIG undefined FUN_147ee93e8(void)

void FUN_147ee93e8(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [72];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x241) == '\0') {
    *(undefined1 *)(param_1 + 0x241) = 1;
    cVar2 = FUN_1412daf9e(param_1 + 0x1f8);
    if (cVar2 != '\0') {
      local_40 = (void *)0x0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      if (*(char *)(param_1 + 0x242) == '\0') {
        local_58[0] = 1;
      }
      else if (*(char *)(param_1 + 0x242) == '\x01') {
        local_58[0] = 2;
      }
      uVar1 = *(uint *)(param_1 + 0x250);
      if ((longlong)(int)uVar1 != 0) {
        uStack_38 = (ulonglong)uVar1;
        FUN_1403de658(&local_40,0);
        memcpy(local_40,*(void **)(param_1 + 0x248),(longlong)(int)uVar1 << 3);
      }
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_14747a562(local_a0,local_58);
      FUN_14747789a(param_1 + 0x1f8,local_a0);
      FUN_1412dafa6(local_a0);
      FUN_14025a15c((undefined8 *)(param_1 + 0x248),0);
      FUN_14747990c(local_58);
    }
  }
  FUN_143850b30(param_1);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee951e FUN_147ee951e body=133 status=ok
// SIG undefined FUN_147ee951e(void)

undefined4 FUN_147ee951e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(*param_2 + 0x10))(param_2,local_48);
  uVar1 = FUN_147478f16(local_48,param_1 + 0x1f8);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee95a4 FUN_147ee95a4 body=505 status=ok
// SIG undefined FUN_147ee95a4(void)

void FUN_147ee95a4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  int local_98;
  double local_90;
  undefined4 local_88;
  byte local_7e;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_14479d2ce((longlong)param_2 + 0x34);
  if (lVar5 != 0) {
    FUN_147ec268e(param_1 + 0x50,lVar5,(int)param_2[6]);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = (undefined1 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x44) +
               *(longlong *)(param_1 + 0x60));
    }
    puVar8 = (undefined1 *)(param_1 + 0x80);
    if (puVar6 != (undefined1 *)0x0) {
      puVar8 = puVar6;
    }
    uVar1 = *puVar8;
    bVar2 = *(byte *)(param_1 + 0x240);
    FUN_147ecf2f6(&local_a0,param_1,param_2,0xffffffff);
    if ((local_98 < *(int *)(local_a0 + 8)) && ((*(byte *)(local_a0 + 0x13e) & 1) == 0)) {
      while ((local_90 < 0.0 ||
             (QueryPerformanceCounter(&local_78),
             (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 < local_90))) {
        plVar3 = (longlong *)param_2[0x2d];
        if ((plVar3 == (longlong *)0x0) ||
           (lVar5 = (**(code **)(*plVar3 + 0x2c8))
                              (plVar3,((longlong)
                                       ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_98 * 8)
                                       << 0x21) >> 0x21) + param_2[3]), lVar5 == 0)) {
LAB_147ee9728:
          local_7e = (local_7e & 0xfc | bVar2) ^ 3;
          local_88 = 0xff7fffff;
        }
        else {
          uVar7 = FUN_1403ad4e4();
          lVar5 = FUN_144718840(lVar5,uVar7);
          if (lVar5 == 0) goto LAB_147ee9728;
          uVar4 = FUN_147ee951e(param_1,lVar5);
          local_a8 = uVar1;
          FUN_143852d98(&local_a0,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a),
                        uVar4);
        }
        FUN_147ee880a(&local_a0);
        if ((*(int *)(local_a0 + 8) <= local_98) || ((*(byte *)(local_a0 + 0x13e) & 1) != 0)) break;
      }
    }
    *(int *)(local_a0 + 0x124) = local_98;
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ee979e FUN_147ee979e body=51 status=ok
// SIG undefined FUN_147ee979e(void)

undefined8 FUN_147ee979e(longlong param_1,undefined8 param_2)

{
  FUN_140009b9a(param_2,param_1 + (ulonglong)(*(int *)(param_1 + 0x228) < 2) * 0x10 + 0x220);
  return param_2;
}



// FUNCTION 147ee97d6 FUN_147ee97d6 body=209 status=ok
// SIG undefined FUN_147ee97d6(void)

undefined4
FUN_147ee97d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_b8 [80];
  longlong local_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144ae1dc6(local_b8,param_7);
  FUN_144ae180e(local_b8,param_4);
  local_c8 = &DAT_14cad0f10;
  local_d8 = param_3;
  local_d0 = local_b8;
  uVar1 = FUN_140ad659e(param_5,param_2,&DAT_14c8463d0,param_6);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee98a8 FUN_147ee98a8 body=209 status=ok
// SIG undefined FUN_147ee98a8(void)

undefined4
FUN_147ee98a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_b8 [80];
  longlong local_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144ae1dc6(local_b8,param_7);
  FUN_144ae180e(local_b8,param_4);
  local_c8 = &DAT_14cad0f10;
  local_d8 = param_3;
  local_d0 = local_b8;
  uVar1 = FUN_1479b44c2(param_5,param_2,&DAT_14c8463d0,param_6);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee997a FUN_147ee997a body=328 status=ok
// SIG undefined FUN_147ee997a(void)

undefined8 FUN_147ee997a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  longlong *local_60 [2];
  longlong *local_50 [2];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_147e9a851();
  FUN_1406f1d90(uVar1,local_50,*(undefined1 *)(param_1 + 0x221));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_50);
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  puVar5 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FUN_147ed8d26(local_60,param_1);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_60);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar2;
  }
  FUN_140002266(local_50,L"%s: %s",puVar5,puVar4);
  FUN_140233b1a(param_2,local_50);
  if (local_50[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee9ac4 FUN_147ee9ac4 body=637 status=ok
// SIG undefined FUN_147ee9ac4(void)

undefined8 FUN_147ee9ac4(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  int local_58;
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = FUN_147e9a851();
  FUN_1406f1d90(uVar6,&local_50,*(undefined1 *)(param_1 + 0x221));
  puVar7 = (undefined8 *)FUN_1447a1f4a(&local_50);
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(puVar7 + 1);
  lVar9 = (longlong)local_38;
  pvVar4 = (void *)*puVar7;
  if (lVar9 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar4,lVar9 * 2);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  uVar6 = FUN_1405a2619();
  FUN_1406f1d90(uVar6,&local_60,*(undefined1 *)(param_1 + 0x220));
  puVar7 = (undefined8 *)FUN_1447a1f4a(&local_60);
  local_50 = (longlong *)0x0;
  local_48 = *(int *)(puVar7 + 1);
  lVar9 = (longlong)local_48;
  pvVar4 = (void *)*puVar7;
  if (lVar9 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar4,lVar9 * 2);
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  cVar3 = *(char *)(param_1 + 0x221);
  if (cVar3 == '\x02') {
    fVar1 = *(float *)(param_1 + 0x200);
    fVar2 = *(float *)(param_1 + 0x1f8);
    pwVar8 = L"Width = %f, Height = %f";
  }
  else {
    if (cVar3 == '\x01') {
      FUN_140002266(&local_60,L"Radius = %f",(double)*(float *)(param_1 + 0x1f8));
      goto LAB_147ee9c76;
    }
    if (cVar3 != '\0') {
      FUN_1400b22c2(&local_60,"Invalid.");
      goto LAB_147ee9c76;
    }
    local_68 = (longlong *)(double)*(float *)(param_1 + 0x200);
    fVar1 = *(float *)(param_1 + 0x1fc);
    fVar2 = *(float *)(param_1 + 0x1f8);
    pwVar8 = L"X = %f, Y = %f, Z = %f";
  }
  FUN_140002266(&local_60,pwVar8,(double)fVar2,(double)fVar1);
LAB_147ee9c76:
  plVar5 = local_60;
  local_68 = (longlong *)&DAT_149dfb77a;
  if (local_48 != 0) {
    local_68 = local_50;
  }
  plVar11 = local_60;
  if (local_58 == 0) {
    plVar11 = (longlong *)&DAT_149dfb77a;
  }
  puVar10 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar10 = local_40;
  }
  FUN_140002266(&local_60,L"Using a %s where %s in channel: %s",puVar10,plVar11);
  FUN_140233b1a(param_2,&local_60);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8(plVar5);
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ee9d46 FUN_147ee9d46 body=2559 status=ok
// SIG undefined FUN_147ee9d46(void)

void FUN_147ee9d46(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  code *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong local_190;
  undefined8 *local_188;
  longlong local_180;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_150;
  LARGE_INTEGER local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  longlong local_128;
  int local_120;
  double local_118;
  undefined4 local_110;
  byte local_106;
  longlong *local_100;
  int local_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar7 = FUN_14479d2ce((longlong)param_2 + 0x34);
  FUN_147ec268e(param_1 + 10,lVar7,(int)param_2[6]);
  FUN_147ec268e(param_1 + 0x41,lVar7,(int)param_2[6]);
  FUN_147ec268e(param_1 + 0x48,lVar7,(int)param_2[6]);
  FUN_147ec268e(param_1 + 0x11,lVar7,(int)param_2[6]);
  FUN_147ec268e();
  if (param_1[0xb] == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)((longlong)*(int *)(param_1[0xb] + 0x44) + param_1[0xc]);
  }
  plVar8 = param_1 + 0x10;
  if (plVar11 != (longlong *)0x0) {
    plVar8 = plVar11;
  }
  if (param_1[0x42] == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)((longlong)*(int *)(param_1[0x42] + 0x44) + param_1[0x43]);
  }
  plVar12 = param_1 + 0x47;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = plVar11;
  }
  if (param_1[0x49] == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)((longlong)*(int *)(param_1[0x49] + 0x44) + param_1[0x4a]);
  }
  plVar14 = param_1 + 0x4e;
  if (plVar11 != (longlong *)0x0) {
    plVar14 = plVar11;
  }
  if (param_1[0x12] == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)((longlong)*(int *)(param_1[0x12] + 0x44) + param_1[0x13]);
  }
  plVar16 = param_1 + 0x17;
  if (plVar11 != (longlong *)0x0) {
    plVar16 = plVar11;
  }
  if (param_1[0x19] == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)((longlong)*(int *)(param_1[0x19] + 0x44) + param_1[0x1a]);
  }
  plVar17 = param_1 + 0x1e;
  if (plVar11 != (longlong *)0x0) {
    plVar17 = plVar11;
  }
  if ((param_2[0xb] != 0) && (lVar3 = *(longlong *)(param_2[0xb] + 0x168), lVar3 != 0)) {
    lVar15 = *plVar8;
    cVar2 = (char)*plVar12;
    lVar18 = *plVar14;
    lVar19 = *plVar16;
    lVar4 = *plVar17;
    lVar9 = FUN_1409035a4();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (((lVar7 != 0 &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) &&
        (plVar11 = (longlong *)FUN_147eea746(lVar3,lVar7), plVar11 != (longlong *)0x0)))) {
      local_d8 = 0;
      uStack_d0 = 0;
      lVar9 = param_1[0x40];
      local_170 = plVar11;
      if ((((lVar9 == 0) || (lVar10 = FUN_1411b2cec(), lVar10 == 0)) ||
          (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
          lVar10 + 0x30)) {
        lVar9 = 0;
      }
      else {
        lVar9 = param_1[0x40];
      }
      plVar11 = local_170;
      cVar5 = FUN_14384d67c(param_2,lVar9,&local_d8);
      if (cVar5 != '\0') {
        (**(code **)(*param_1 + 0x2c8))(param_1,local_f0,param_2);
        FUN_147e6f964(&local_e8,plVar11,lVar7,local_f0);
        if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
          (**(code **)(*plVar11 + 0x720))(plVar11);
          if (cVar2 == '\0') {
            FUN_147ecf2f6(&local_128,param_1,param_2,0xffffffff);
            plVar11 = local_170;
            if ((local_120 < *(int *)(local_128 + 8)) && ((*(byte *)(local_128 + 0x13e) & 1) == 0))
            {
              while ((local_118 < 0.0 ||
                     (QueryPerformanceCounter(&local_148),
                     (double)CONCAT44(local_148.s.HighPart,local_148.s.LowPart) * DAT_14c83f420 +
                     16777216.0 < local_118))) {
                plVar8 = (longlong *)param_2[0x2c];
                if (plVar8 == (longlong *)0x0) {
                  local_138 = DAT_14c8464f0;
                  local_148.s.LowPart = (DWORD)DAT_14c8464e0;
                  local_148.s.HighPart = DAT_14c8464e0._4_4_;
                  uStack_140 = (undefined4)DAT_14c8464e8;
                  uStack_13c = DAT_14c8464e8._4_4_;
                }
                else {
                  (**(code **)(*plVar8 + 0x2b8))
                            (plVar8,&local_148,
                             ((longlong)
                              ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_120 * 8) << 0x21)
                             >> 0x21) + param_2[3]);
                }
                if (0 < (int)uStack_d0) {
                  lVar19 = 0;
                  lVar18 = 0;
                  do {
                    local_168 = local_e8;
                    local_160 = local_e0;
                    if (local_e0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
                      UNLOCK();
                    }
                    local_198 = &local_168;
                    local_190 = lVar7;
                    uVar6 = FUN_147eeaff2(&local_148,local_d8 + lVar19,plVar11,lVar3);
                    local_198 = (longlong *)CONCAT71(local_198._1_7_,(char)lVar15);
                    FUN_143852d98(&local_128,*(undefined1 *)((longlong)param_1 + 0x34),
                                  *(undefined1 *)((longlong)param_1 + 0x4a),uVar6);
                    lVar18 = lVar18 + 1;
                    lVar19 = lVar19 + 0x18;
                  } while (lVar18 < (int)uStack_d0);
                }
                FUN_147ee880a(&local_128);
                if ((*(int *)(local_128 + 8) <= local_120) ||
                   ((*(byte *)(local_128 + 0x13e) & 1) != 0)) break;
              }
            }
          }
          else {
            FUN_147ecf2f6(&local_128,param_1,param_2,0xffffffff);
            plVar11 = local_170;
            if ((local_120 < *(int *)(local_128 + 8)) && ((*(byte *)(local_128 + 0x13e) & 1) == 0))
            {
              while ((local_118 < 0.0 ||
                     (QueryPerformanceCounter(&local_148),
                     (double)CONCAT44(local_148.s.HighPart,local_148.s.LowPart) * DAT_14c83f420 +
                     16777216.0 < local_118))) {
                plVar8 = (longlong *)param_2[0x2c];
                if (plVar8 == (longlong *)0x0) {
                  local_138 = DAT_14c8464f0;
                  local_148.s.LowPart = (DWORD)DAT_14c8464e0;
                  local_148.s.HighPart = DAT_14c8464e0._4_4_;
                  uStack_140 = (undefined4)DAT_14c8464e8;
                  uStack_13c = DAT_14c8464e8._4_4_;
                }
                else {
                  (**(code **)(*plVar8 + 0x2b8))
                            (plVar8,&local_148,
                             ((longlong)
                              ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_120 * 8) << 0x21)
                             >> 0x21) + param_2[3]);
                }
                if (0 < (int)uStack_d0) {
                  lVar19 = 0;
                  lVar18 = 0;
                  do {
                    local_158 = local_e8;
                    local_150 = local_e0;
                    if (local_e0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
                      UNLOCK();
                    }
                    local_198 = &local_158;
                    local_190 = lVar7;
                    uVar6 = FUN_147eeaed2(&local_148,local_d8 + lVar19,plVar11,lVar3);
                    local_198 = (longlong *)CONCAT71(local_198._1_7_,(char)lVar15);
                    FUN_143852d98(&local_128,*(undefined1 *)((longlong)param_1 + 0x34),
                                  *(undefined1 *)((longlong)param_1 + 0x4a),uVar6);
                    lVar18 = lVar18 + 1;
                    lVar19 = lVar19 + 0x18;
                  } while (lVar18 < (int)uStack_d0);
                }
                FUN_147ee880a(&local_128);
                if ((*(int *)(local_128 + 8) <= local_120) ||
                   ((*(byte *)(local_128 + 0x13e) & 1) != 0)) break;
              }
            }
          }
          *(int *)(local_128 + 0x124) = local_120;
          (**(code **)(*local_170 + 0x728))();
        }
        else {
          local_100 = (longlong *)0x0;
          local_f8 = 0;
          pcVar13 = FUN_147eea9be;
          if (cVar2 != '\0') {
            pcVar13 = FUN_147eea7f2;
          }
          pcVar20 = FUN_147eead2e;
          if (cVar2 != '\0') {
            pcVar20 = FUN_147eeab8a;
          }
          if ((char)param_1[0x3f] == '\x02') {
            pcVar20 = pcVar13;
          }
          FUN_1446efa72(&local_100,0,3,0x10);
          plVar8 = local_100;
          local_f8 = 3;
          *local_100 = (longlong)&PTR_LAB_14ac15590;
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 1;
          lVar15 = DAT_14c758608 + 1;
          if (lVar9 == 0) {
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 2;
            lVar15 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar15;
          local_100[2] = lVar9;
          *local_100 = (longlong)&PTR_FUN_14ac15520;
          local_100[3] = 0;
          FUN_14485c47a(local_100 + 3,param_1);
          plVar8[4] = (longlong)pcVar20;
          (**(code **)(*plVar11 + 0x720))(plVar11);
          FUN_147ecf2f6(&local_128,param_1,param_2,0xffffffff);
          if ((local_120 < *(int *)(local_128 + 8)) && ((*(byte *)(local_128 + 0x13e) & 1) == 0)) {
            while ((local_118 < 0.0 ||
                   (QueryPerformanceCounter(&local_148),
                   (double)CONCAT44(local_148.s.HighPart,local_148.s.LowPart) * DAT_14c83f420 +
                   16777216.0 < local_118))) {
              plVar11 = (longlong *)param_2[0x2c];
              if (plVar11 == (longlong *)0x0) {
                local_138 = DAT_14c8464f0;
                local_148.s.LowPart = (DWORD)DAT_14c8464e0;
                local_148.s.HighPart = DAT_14c8464e0._4_4_;
                uStack_140 = (undefined4)DAT_14c8464e8;
                uStack_13c = DAT_14c8464e8._4_4_;
              }
              else {
                (**(code **)(*plVar11 + 0x2b8))
                          (plVar11,&local_148,
                           ((longlong)
                            ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_120 * 8) << 0x21)
                           >> 0x21) + param_2[3]);
              }
              plVar11 = local_170;
              if (0 < (int)uStack_d0) {
                lVar15 = 0;
                lVar9 = 0;
                do {
                  if (local_e0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
                    UNLOCK();
                  }
                  plVar8 = local_100;
                  if (local_f8 == 0) {
                    plVar8 = (longlong *)0x0;
                  }
                  local_c0 = local_e8;
                  local_b8 = local_e0;
                  local_188 = &local_c0;
                  local_198 = plVar11;
                  local_190 = lVar3;
                  local_180 = lVar7;
                  uVar21 = (**(code **)(*plVar8 + 0x58))(plVar8,&local_148,local_d8 + lVar15,0);
                  local_190 = CONCAT44(local_190._4_4_,(int)lVar4);
                  local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)lVar19);
                  FUN_1438521fe(&local_128,*(undefined1 *)((longlong)param_1 + 0x34),
                                *(undefined1 *)((longlong)param_1 + 0x4a),uVar21);
                  if ((3.4e+38 <= (float)uVar21) && ((char)lVar18 != '\0')) {
                    local_106 = local_106 & 0xfc | 2;
                    local_110 = 0xff7fffff;
                  }
                  lVar9 = lVar9 + 1;
                  lVar15 = lVar15 + 0x18;
                } while (lVar9 < (int)uStack_d0);
              }
              FUN_147ee880a(&local_128);
              if ((*(int *)(local_128 + 8) <= local_120) ||
                 ((*(byte *)(local_128 + 0x13e) & 1) != 0)) break;
            }
          }
          *(int *)(local_128 + 0x124) = local_120;
          (**(code **)(*plVar11 + 0x728))(plVar11);
          FUN_1449db362(&local_100);
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_e0 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e0 + 0x10))(local_e0);
            }
          }
        }
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eea746 FUN_147eea746 body=159 status=ok
// SIG undefined FUN_147eea746(void)

void FUN_147eea746(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145958f2a();
  plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,local_38);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*param_1 + 0x340))(param_1,uVar1,local_38,&DAT_14c8464e0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_147e791d4(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eea7f2 FUN_147eea7f2 body=458 status=ok
// SIG undefined FUN_147eea7f2(void)

float FUN_147eea7f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined1 local_1e8 [168];
  longlong *local_140;
  longlong *local_138;
  int local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [84];
  byte local_ac;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = *param_7;
  local_120 = param_7[1];
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  local_200 = 0x7fefffffffffffff;
  local_208 = &local_118;
  local_210 = &local_128;
  local_1f8 = 1;
  local_218 = param_2;
  FUN_147e6fa80(local_100,param_8,param_5,param_3);
  local_ac = local_ac & 0xfe;
  FUN_147e7045e(local_1e8,local_100);
  FUN_14383659e(param_6,&local_140,local_1e8,param_4);
  if (local_130 == 3) {
    fVar6 = 0.0;
    if ((int)local_140[6] != 0) {
      puVar3 = (undefined4 *)local_140[5];
      local_48 = *(undefined8 *)(puVar3 + 4);
      local_58 = *puVar3;
      uStack_54 = puVar3[1];
      uStack_50 = puVar3[2];
      uStack_4c = puVar3[3];
      dVar5 = (double)(**(code **)(*local_140 + 0x48))(local_140,&local_58,1);
      fVar6 = (float)dVar5;
    }
  }
  else {
    fVar6 = 3.4e+38;
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_138 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
      }
    }
  }
  FUN_147e70c18(local_100);
  plVar4 = (longlong *)param_7[1];
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
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eea9be FUN_147eea9be body=458 status=ok
// SIG undefined FUN_147eea9be(void)

float FUN_147eea9be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined1 local_1e8 [168];
  longlong *local_140;
  longlong *local_138;
  int local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [84];
  byte local_ac;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = *param_7;
  local_120 = param_7[1];
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  local_200 = 0x7fefffffffffffff;
  local_208 = &local_118;
  local_210 = &local_128;
  local_1f8 = 1;
  local_218 = param_3;
  FUN_147e6fa80(local_100,param_8,param_5,param_2);
  local_ac = local_ac & 0xfe;
  FUN_147e7045e(local_1e8,local_100);
  FUN_14383659e(param_6,&local_140,local_1e8,param_4);
  if (local_130 == 3) {
    fVar6 = 0.0;
    if ((int)local_140[6] != 0) {
      puVar3 = (undefined4 *)local_140[5];
      local_48 = *(undefined8 *)(puVar3 + 4);
      local_58 = *puVar3;
      uStack_54 = puVar3[1];
      uStack_50 = puVar3[2];
      uStack_4c = puVar3[3];
      dVar5 = (double)(**(code **)(*local_140 + 0x48))(local_140,&local_58,1);
      fVar6 = (float)dVar5;
    }
  }
  else {
    fVar6 = 3.4e+38;
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_138 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
      }
    }
  }
  FUN_147e70c18(local_100);
  plVar4 = (longlong *)param_7[1];
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
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeab8a FUN_147eeab8a body=419 status=ok
// SIG undefined FUN_147eeab8a(void)

float FUN_147eeab8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1c8 [168];
  longlong *local_120;
  longlong *local_118;
  int local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [84];
  byte local_94;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = *param_7;
  local_100 = param_7[1];
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
  }
  local_1e0 = 0x7fefffffffffffff;
  local_1e8 = &local_f8;
  local_1f0 = &local_108;
  local_1d8 = 1;
  local_1f8 = param_2;
  FUN_147e6fa80(local_e8,param_8,param_5,param_3);
  local_94 = local_94 & 0xfe;
  FUN_147e7045e(local_1c8,local_e8);
  FUN_14383659e(param_6,&local_120,local_1c8,param_4);
  if (local_110 == 3) {
    dVar4 = (double)(**(code **)(*local_120 + 0x38))(local_120,0);
    fVar5 = (float)dVar4;
  }
  else {
    fVar5 = 3.4e+38;
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_118 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  FUN_147e70c18(local_e8);
  plVar3 = (longlong *)param_7[1];
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
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eead2e FUN_147eead2e body=419 status=ok
// SIG undefined FUN_147eead2e(void)

float FUN_147eead2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1c8 [168];
  longlong *local_120;
  longlong *local_118;
  int local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [84];
  byte local_94;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = *param_7;
  local_100 = param_7[1];
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
  }
  local_1e0 = 0x7fefffffffffffff;
  local_1e8 = &local_f8;
  local_1f0 = &local_108;
  local_1d8 = 1;
  local_1f8 = param_3;
  FUN_147e6fa80(local_e8,param_8,param_5,param_2);
  local_94 = local_94 & 0xfe;
  FUN_147e7045e(local_1c8,local_e8);
  FUN_14383659e(param_6,&local_120,local_1c8,param_4);
  if (local_110 == 3) {
    dVar4 = (double)(**(code **)(*local_120 + 0x38))(local_120,0);
    fVar5 = (float)dVar4;
  }
  else {
    fVar5 = 3.4e+38;
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_118 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  FUN_147e70c18(local_e8);
  plVar3 = (longlong *)param_7[1];
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
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeaed2 FUN_147eeaed2 body=287 status=ok
// SIG undefined FUN_147eeaed2(void)

undefined4
FUN_147eeaed2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [168];
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [84];
  byte local_7c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = *param_5;
  local_f0 = param_5[1];
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  local_1b0 = 0x7fefffffffffffff;
  local_1b8 = &local_e8;
  local_1c0 = &local_f8;
  local_1a8 = 1;
  local_1c8 = param_1;
  FUN_147e6fa80(local_d0,param_6,param_3,param_2);
  local_7c = local_7c & 0xfe;
  FUN_147e7045e(local_1a0,local_d0);
  uVar4 = FUN_1438367d8(param_4,local_1a0,0,0);
  FUN_147e70c18(local_d0);
  plVar3 = (longlong *)param_5[1];
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
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeaff2 FUN_147eeaff2 body=290 status=ok
// SIG undefined FUN_147eeaff2(void)

undefined4
FUN_147eeaff2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [168];
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [84];
  byte local_7c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = *param_5;
  local_f0 = param_5[1];
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  local_1b0 = 0x7fefffffffffffff;
  local_1b8 = &local_e8;
  local_1c0 = &local_f8;
  local_1a8 = 1;
  local_1c8 = param_2;
  FUN_147e6fa80(local_d0,param_6,param_3,param_1);
  local_7c = local_7c & 0xfe;
  FUN_147e7045e(local_1a0,local_d0);
  uVar4 = FUN_1438367d8(param_4,local_1a0,0,0);
  FUN_147e70c18(local_d0);
  plVar3 = (longlong *)param_5[1];
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
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeb116 FUN_147eeb116 body=587 status=ok
// SIG undefined FUN_147eeb116(void)

undefined8 FUN_147eeb116(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong *local_88 [2];
  longlong *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int aiStack_50 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(&local_58,L"PathExist");
  FUN_140056680(local_48,L"PathCost");
  FUN_140056680(local_38,L"PathLength");
  if (*(longlong *)(param_1 + 0x218) == 0) {
    local_98 = *(longlong *)(param_1 + 0x200);
    if ((local_98 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(&local_78,&local_98);
    puVar1 = (undefined8 *)FUN_1447a1f4a(&local_78);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*puVar1;
    }
    pwVar4 = L"to";
    if (*(char *)(param_1 + 0x238) != '\0') {
      pwVar4 = L"from";
    }
    FUN_140002266(&local_68,L"%s %s",pwVar4,puVar5);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  else {
    FUN_147ecddc8(param_1 + 0x208,&local_78);
    plVar2 = local_78;
    if (local_70 == 0) {
      plVar2 = (longlong *)&DAT_149dfb77a;
    }
    local_90 = *(longlong *)(param_1 + 0x200);
    if ((local_90 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(local_88,&local_90);
    puVar1 = (undefined8 *)FUN_1447a1f4a(local_88);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*puVar1;
    }
    FUN_140002266(&local_68,L"%s, direction: %s",puVar5,plVar2);
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar5 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar6 = local_68;
  }
  if (aiStack_50[(ulonglong)*(byte *)(param_1 + 0x1f8) * 4] != 0) {
    puVar5 = *(undefined2 **)(aiStack_50 + (ulonglong)*(byte *)(param_1 + 0x1f8) * 4 + -2);
  }
  FUN_140002266(&local_78,L"%s: %s",puVar5,puVar6);
  FUN_140233b1a(param_2,&local_78);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x30;
  do {
    if (*(longlong *)((longlong)&local_68 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eeb362 FUN_147eeb362 body=1520 status=ok
// SIG undefined FUN_147eeb362(void)

undefined8 FUN_147eeb362(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  longlong *local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong local_140 [2];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  longlong *local_100 [2];
  longlong *local_f0 [2];
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_80 = L"DiscardUnreachable";
  local_78[0] = 0x12;
  FUN_1446e940c(&local_90,&local_80);
  local_80 = L"EnvQueryGenerator";
  local_78[0] = 0x11;
  FUN_1446e940c(&local_a0,&local_80);
  FUN_140208bae(&local_c0,&local_a0,&local_90,L"discard unreachable");
  FUN_144a5dc74(&local_d0);
  plVar2 = local_d0;
  if (*(longlong *)(param_1 + 0x250) == 0) {
    if (*(char *)(param_1 + 0x270) == '\x01') {
      if (local_d0 != local_c0) {
        local_d0 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      local_c8 = local_b8;
    }
  }
  else {
    FUN_147ecddc8(param_1 + 0x240,local_100);
    FUN_140233b1a(local_f0,local_100);
    local_110 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 8))();
    }
    local_108 = local_b8;
    FUN_1400b22c2(local_140,"{0}: {1}");
    FUN_140233b1a(local_130,local_140);
    FUN_14023409e(&local_120,local_130,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,&local_110);
    local_60 = 4;
    FUN_14023423e(local_50,local_f0);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_120;
    local_a8 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_e0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar4 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_78 + lVar4 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar4 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar4) = 0;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != -0x10);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_118 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    if (local_110 != (longlong *)0x0) {
      (**(code **)(*local_110 + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    FUN_140008f88(&local_d0,&local_e0);
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    if (local_130[0] != (longlong *)0x0) {
      (**(code **)(*local_130[0] + 0x10))();
    }
    if (local_140[0] != 0) {
      FUN_1400020a8();
    }
    if (local_100[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
    FUN_1400b22c2(&local_80,"existing path");
    FUN_147eda90a(param_1,&local_e0,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_147ed9482(param_1,&local_e0);
  }
  cVar3 = FUN_144a7c5f6(&local_d0);
  if (cVar3 == '\0') {
    local_150 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 8))();
    }
    local_148 = local_d8;
    local_160 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 8))();
    }
    local_158 = local_c8;
    FUN_1400b22c2(local_130,"{0}\n{1}");
    FUN_140233b1a(local_100,local_130);
    FUN_14023409e(&local_170,local_100,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,&local_160);
    local_60 = 4;
    FUN_14023423e(local_50,&local_150);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_170;
    local_a8 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_168 + 1) = (int)local_168[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar4 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_78 + lVar4 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar4 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar4) = 0;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != -0x10);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_168 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_168 + 0x10))(local_168);
        }
      }
    }
    if (local_160 != (longlong *)0x0) {
      (**(code **)(*local_160 + 0x10))();
    }
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 0x10))();
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    if (local_130[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_14023423e(param_2,&local_e0);
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeb954 FUN_147eeb954 body=81 status=ok
// SIG undefined FUN_147eeb954(void)

void FUN_147eeb954(longlong param_1)

{
  FUN_143850b30();
  *(uint *)(param_1 + 0x1f0) =
       *(uint *)(param_1 + 0x1f0) & 0xfffffffe | (uint)(*(char *)(param_1 + 0x1f8) != '\0');
  if (*(char *)(param_1 + 0x1f8) == '\0') {
    if (*(char *)(param_1 + 0x4a) != '\x03') {
      *(undefined1 *)(param_1 + 0x4a) = 3;
    }
    *(undefined1 *)(param_1 + 0xf9) = 4;
  }
  else if (*(char *)(param_1 + 0x4a) == '\x03') {
    *(undefined1 *)(param_1 + 0x4a) = 2;
  }
  return;
}


